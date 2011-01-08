/// Copyright 1994 Russell Bradford0
/// Copyright 2010 Henry G. Weller
///-----------------------------------------------------------------------------
//  This file is part of
/// ---                           EuLisp System 'EuXLisp'
///-----------------------------------------------------------------------------
//
//  EuXLisp is free software: you can redistribute it and/or modify it under the
//  terms of the GNU General Public License version 2 as published by the Free
//  Software Foundation.
//
//  EuXLisp is distributed in the hope that it will be useful, but WITHOUT ANY
//  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
//  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
//  details.
//
//  You should have received a copy of the GNU General Public License along with
//  this program.  If not, see <http://www.gnu.org/licenses/>.
//
///-----------------------------------------------------------------------------
/// Title: Telos
///  Maintainer: Henry G. Weller
///-----------------------------------------------------------------------------

#include "euxlisp.h"
#include "euxlobj.h"

LVAL object, class, simple_class, class_vector;
static void merge_slots(LVAL obj, LVAL super, LVAL inits);
static void merge_keywords(LVAL obj, LVAL super, LVAL inits);
static void do_initloop(int index, LVAL slots, LVAL inits);

static LVAL redefine_slot
(
    LVAL slotname,
    LVAL defn,
    LVAL slotkey,
    LVAL reqd,
    LVAL slots,
    LVAL slotdesc
);

static int slotequal();
int xlsubclassp();
extern LVAL true, s_unbound, cs_initloop1, xlenv, xlval;
extern LVAL s_direct_slots, s_direct_keywords, s_name, s_default, s_requiredp;
extern LVAL s_keyword, s_telos_error, s_incompatible_md;

static char *expect_class = "<simple-class>";

///-----------------------------------------------------------------------------
/// Functions
///-----------------------------------------------------------------------------
LVAL class_of(LVAL obj)
{
    // small integers
    if (!ispointer(obj))
    {
        return getelement(class_vector, FIXNUM);
    }

    if (obj == NULL)
    {
        return getelement(class_vector, NULLTYPE);
    }

    if (objectp(obj))
    {
        return getclass(obj);
    }

    if (keywordp(obj))
    {
        return getelement(class_vector, KEYWORD);
    }

    if (streamp(obj))
    {
        if ((getpflags(obj) & PF_INPUT) != 0)
        {
            if ((getpflags(obj) & PF_OUTPUT) != 0)
            {
                return getelement(class_vector, IOSTREAM);// input/output stream
            }
            else
            {
                return getelement(class_vector, ISTREAM); // input stream
            }
        }
        else
        {
            return getelement(class_vector, OSTREAM);     // output stream
        }
    }

    if (obj->n_type < NTYPES)
    {
        return getelement(class_vector, obj->n_type);
    }

    xlcerror("class-of bad object", obj, NIL);
    return NIL;
}

LVAL xclassof()
{
    static char *cfn_name = "class-of";

    LVAL obj = xlgetarg();
    xllastarg();
    return class_of(obj);
}

void xldescribe(LVAL obj)
{
    LVAL fptr = xstdout();
    LVAL cls = class_of(obj);

    #if 0
    xlputstr(fptr, "object: ");
    xlprin1(obj, fptr);
    xlterpri(fptr);
    xlputstr(fptr, " class: ");
    xlprin1(cls, fptr);
    xlterpri(fptr);
    #else
    xlputstr(fptr, "object has class: ");
    xlprin1(cls, fptr);
    xlterpri(fptr);
    #endif

    // change to switch?
    if (genericp(obj))
    {
        xlputstr(fptr, "required argument classes ");
        xlprin1(getgargs(obj), fptr);
        xlterpri(fptr);

        if (getgopt(obj) != NIL)
        {
            xlputstr(fptr, "with rest argument\n");
        }

        LVAL mds = getgmethods(obj);
        if (mds == NIL)
        {
            xlputstr(fptr, "there are no attached methods\n");
        }
        else
        {
            xlputstr(fptr, "attached methods:\n");
            for (; mds; mds = cdr(mds))
            {
                xlprin1(car(mds), fptr);
                xlputstr(fptr, " ");
            }
            xlterpri(fptr);
        }

        return;
    }

    if (methodp(obj))
    {
        xlputstr(fptr, "with domain ");
        xlprin1(getmddomain(obj), fptr);
        xlterpri(fptr);

        if (getmdopt(obj) != NIL)
        {
            xlputstr(fptr, "with rest argument\n");
        }

        return;
    }

    if (objectp(obj))
    {
        LVAL sds = getivar(cls, SLOTS);

        if (sds == NIL)
        {
            xlputstr(fptr, "with no slots\n");
        }
        else
        {
            xlputstr(fptr, "with slots\n");
            for (int i = 1; sds; i++, sds = cdr(sds))
            {
                int len = 15 - strlen(getstring(getpname(getslotname(car(sds)))));
                xlprin1(getslotname(car(sds)), fptr);
                xlputc(fptr, ':');
                while (len-- > 0)
                    xlputc(fptr, ' ');
                xlprin1(getivar(obj, i), fptr);
                xlterpri(fptr);
            }
        }

        return;
    }

    if (slotp(obj))
    {
        xlputstr(fptr, "name:    ");
        xlprin1(getslotname(obj), fptr);
        xlterpri(fptr);

        if (getslotkey(obj) == s_unbound)
        {
            xlputstr(fptr, "no keyword");
        }
        else
        {
            xlputstr(fptr, "keyword: ");
            xlprin1(getslotkey(obj), fptr);
        }

        xlterpri(fptr);
        xlputstr(fptr, "has ");

        if (closurep(getslotdefault(obj)))
        {
            xlputstr(fptr, "a");
        }
        else
        {
            xlputstr(fptr, "no");
        }

        xlputstr(fptr, " default function, and is ");

        if (getslotrequiredp(obj) == NIL)
        {
            xlputstr(fptr, "not ");
        }

        xlputstr(fptr, "required\n");

        return;
    }

    if (tablep(obj))
    {
        xlputstr(fptr, "comparator: ");
        xlprin1(gettablecomp(obj), fptr);
        xlputstr(fptr, "\nfill-value: ");
        xlprin1(gettablefill(obj), fptr);
        xlterpri(fptr);

        return;
    }

    if (closurep(obj))
    {
        xlputstr(fptr, "args:      ");
        xlprin1(getvnames(getcode(obj)), fptr);
        xlterpri(fptr);

        return;
    }
}

LVAL xdescribe()
{
    static char *cfn_name = "describe";

    LVAL obj = xlgetarg();
    xllastarg();
    xldescribe(obj);

    return true;
}

LVAL xallocate()
{
    static char *cfn_name = "allocate";

    LVAL cls = xlgetarg();
    LVAL inits = xlgetarg();
    xllastarg();

    if (!classp(cls))
    {
        xlbadtype(cls, expect_class, cfn_name);
    }

    if (!listp(inits))
    {
        xlcerror("malformed init list in allocate", inits, s_telos_error);
    }

    if (getivar(cls, ABSTRACTP) != NIL)
    {
        xlcerror("attempt to allocate an abstract class", cls, s_telos_error);
    }

    return newobject(cls, getfixnum(getivar(cls, INSTSIZE)));
}

// 'default' is a C reserved word
LVAL find_key(LVAL key, LVAL inits, LVAL deefault)
{
    LVAL intl = inits;

    for (; inits; inits = cdr(cdr(inits)))
    {
        if (cdr(inits) == NIL)
        {
            xlcerror("odd-size init list", intl, s_telos_error);
        }

        if (car(inits) == key)
        {
            return car(cdr(inits));
        }
    }

    return deefault;

}

LVAL xfind_key()
{
    static char *cfn_name = "find-key";

    LVAL key = xlgasymbol();

    if (!keywordp(key))
    {
        xlcerror("not a keyword in init list", key, s_telos_error);
    }

    LVAL inits = xlgalist();
    LVAL deefault = xlgetarg();
    xllastarg();

    return find_key(key, inits, deefault);
}

LVAL xtelos_error()
{
    static char *cfn_name = "raise-telos-error";

    LVAL msg = xlgastring();
    LVAL value = xlgetarg();
    xllastarg();
    xlcerror(getstring(msg), value, s_telos_error);

    return NIL; // not reached
}

static void check_legal_keywords(LVAL inits, LVAL keys)
{
    for (; inits; inits = cdr(cdr(inits)))
    {
        if (xlmember(car(inits), keys, eq) == NIL)
        {
            xlcerror
            (
                "illegal keyword in initialize",
                car(inits),
                s_telos_error
            );
        }
    }
}

static void check_required_keywords(LVAL inits, LVAL slots)
{
    for (; slots; slots = cdr(slots))
    {
        if (getslotrequiredp(car(slots)) == NIL)
        {
            continue;
        }

        LVAL key = getslotkey(car(slots));
        LVAL ints;

        for (ints = inits; ints; ints = cdr(cdr(ints)))
        {
            if (key == car(ints))
            {
                break;
            }
        }

        if (ints == NULL)
        {
            xlcerror
            (
                "missing required keyword in initialize",
                key,
                s_telos_error
            );
        }
    }
}

// continuation for do_initloop
void xinitloop1()
{
    LVAL val = xlval;
    LVAL inits = pop();
    LVAL slots = pop();
    LVAL ind = pop();
    int index = (int)getfixnum(ind);
    xlval = pop();
    setivar(xlval, index, val);
    do_initloop(index + 1, cdr(slots), inits);
}

static void do_initloop(int index, LVAL slots, LVAL inits)
{
    if (slots == NIL)
    {
        xlreturn();
        return;
    }

    LVAL slot = car(slots);
    LVAL slot_key = getslotkey(slot);
    LVAL defaultfn = getslotdefault(slot);

    LVAL init = xlmember(slot_key, inits, eq);
    if (init == NIL)
    {
        if (closurep(defaultfn))
        {       // no keyword, a defaultfn
            check(6);
            push(xlval);        // the object
            push(cvfixnum((FIXTYPE) index));
            push(slots);
            push(inits);
            push(cs_initloop1);
            push(xlenv);
            xlval = defaultfn;
            xlargc = 0;
            xlapply();
        }
        else
        {
            setivar(xlval, index, s_unbound);   // no keyword, no defaultfn
            do_initloop(index + 1, cdr(slots), inits);
        }
    }
    else
    {
        setivar(xlval, index, car(cdr(init)));  // a keyword
        do_initloop(index + 1, cdr(slots), inits);
    }
}

void xinitialize_object()
{
    static char *cfn_name = "initialize <object>";

    xlval = xlgetarg();
    LVAL inits = xlgalist();
    xllastarg();

    if (!objectp(xlval))
    {
        xlreturn();
    }
    else
    {
        if ((list_size(inits) & 1) == 1)
        {
            xlcerror
            (
                "odd-size init list in initialize",
                inits,
                s_telos_error
            );
        }

        LVAL cls = class_of(xlval);

        check_legal_keywords(inits, getivar(cls, KEYWORDS));
        check_required_keywords(inits, getivar(cls, SLOTS));

        do_initloop(1, getivar(cls, SLOTS), inits);
    }
}

// when we get here, initialize-object has already been done
LVAL xinitialize_class()
{
    static char *cfn_name = "initialize <class>";

    LVAL obj = xlgetarg();
    LVAL inits = xlgalist();
    xllastarg();

    if (!classp(obj))
    {
        return obj;
    }

    check(2);
    push(obj);
    push(inits);

    LVAL super = getivar(obj, SUPERCLASS);
    if (!consp(super) || cdr(super) != NIL)
    {
        xlcerror
        (
            "superclass not a single-element list in initialize <class>",
            super,
            s_telos_error
        );
    }

    super = car(super);
    if (!classp(super))
    {
        xlcerror
        (
            "trying to subclass a non-class in initialize <class>",
            super,
            s_telos_error
        );
    }

    #if 0
    if (getivar(super, ABSTRACTP) == NIL)
    {
        xlcerror("only subclassing of abstract classes", super, s_telos_error);
    }
    #endif

    LVAL val = cons(obj, getivar(super, CPL));
    setivar(obj, CPL, val);

    merge_slots(obj, super, inits);

    merge_keywords(obj, super, inits);

    int size = list_size(getivar(obj, SLOTS));
    setivar(obj, INSTSIZE, cvfixnum((FIXTYPE) size));

    // link into hierarchy
    val = cons(obj, getivar(super, SUBCLASSES));
    setivar(super, SUBCLASSES, val);

    drop(2);
    return obj;
}

static void merge_slots(LVAL obj, LVAL super, LVAL inits)
{
    extern LVAL xlreverse();

    LVAL slots = getivar(super, SLOTS);
    LVAL dirslots = find_key(s_direct_slots, inits, NIL);

    if (dirslots == NIL)
    {
        setivar(obj, SLOTS, slots);
        return;
    }

    slots = xlreverse(slots);   // easier to work on this way

    check(2);
    push(dirslots);

    for (; dirslots; dirslots = cdr(dirslots))
    {
        LVAL slotdesc = car(dirslots);
        if (!consp(slotdesc))
        {
            xlcerror
            (
                "bad slot description in initialize of class",
                slotdesc,
                s_telos_error
            );
        }

        LVAL slotname = find_key(s_name, slotdesc, s_unbound);

        if (slotname == s_unbound)
        {
            xlcerror
            (
                "missing slot name in initialize of class",
                slotdesc,
                s_telos_error
            );
        }

        LVAL defn = find_key(s_default, slotdesc, s_unbound);
        LVAL slotkey = find_key(s_keyword, slotdesc, s_unbound);
        LVAL reqd = find_key(s_requiredp, slotdesc, s_unbound);

        push(slots);

        if (xlmember(slotname, slots, slotequal) == NIL)
        {
            if (reqd != s_unbound && reqd != NIL && slotkey == s_unbound)
            {
                xlcerror
                (
                    "keyword required with no keyword defined",
                    slotdesc,
                    s_telos_error
                );
            }

            LVAL new = newslot(slotname);
            setslotkey(new, slotkey);
            setslotdefault(new, defn);
            setslotrequiredp(new, reqd == s_unbound ? NIL : reqd);
            slots = cons(new, slots);
        }
        else
        {
            slots =
            redefine_slot(slotname, defn, slotkey, reqd, slots, slotdesc);
        }
        drop(1);
    }

    slots = xlreverse(slots);
    setivar(obj, SLOTS, slots);

    drop(1);

    return;
}

static int slotequal(LVAL name, LVAL slot)
{
    if (symbolp(name) && symbolp(getslotname(slot)))
    {
        return symboleq(name, getslotname(slot));
    }

    return name == getslotname(slot);
}

// inheritance rules:
// inherit keywords and defaults
// illegal to shadow a keyword from a super that has one defined
// OK to shadow a default from a super
// if super is required, then new is required
static LVAL redefine_slot
(
    LVAL slotname,
    LVAL defn,
    LVAL slotkey,
    LVAL reqd,
    LVAL slots,
    LVAL slotdesc
)
{
    if (slots == NIL)
    {
        return NIL;
    }

    LVAL old = car(slots);
    LVAL new;
    if (slotequal(slotname, old))
    {
        if
        (
            (getslotkey(old) != s_unbound)
         && (slotkey != s_unbound)
         && (slotkey != getslotkey(old))
        )
        {
            xlcerror
            (
                "attempt to shadow inherited slot keyword",
                slotdesc,
                s_telos_error
            );
        }

        if ((getslotrequiredp(old) != NIL) && (reqd == NIL))
        {
            xlcerror
            (
                "attempt to make required slot keyword not required",
                slotdesc,
                s_telos_error
            );
        }

        new = newslot(slotname);
        setslotkey(new, slotkey == s_unbound ? getslotkey(old) : slotkey);
        setslotdefault(new, defn == s_unbound ? getslotdefault(old) : defn);
        setslotrequiredp(new, reqd == s_unbound ? getslotrequiredp(old) : reqd);

        if (getslotkey(new) == s_unbound && getslotrequiredp(new) != NIL)
        {
            xlcerror
            (
                "keyword required with no keyword defined or inherited",
                slotdesc,
                s_telos_error
            );
        }
    }
    else
    {
        new = car(slots);
    }

    return cons
    (
        new,
        redefine_slot
        (
            slotname,
            defn,
            slotkey,
            reqd,
            cdr(slots),
            slotdesc
        )
    );
}

static void merge_keywords(LVAL obj, LVAL super, LVAL inits)
{
    LVAL dirkeys = find_key(s_direct_keywords, inits, NIL);
    LVAL keys = getivar(super, KEYWORDS);

    for (; dirkeys; dirkeys = cdr(dirkeys))
    {
        if (!xlmember(car(dirkeys), keys, eq))
        {
            keys = cons(car(dirkeys), keys);
        }
    }

    setivar(obj, KEYWORDS, keys);
}

LVAL xclass_name()
{
    static char *cfn_name = "class-name";

    LVAL val = xlgetarg();
    xllastarg();

    if (!classp(val))
    {
        xlbadtype(val, expect_class, cfn_name);
    }

    return getivar(val, CNAME);
}

LVAL xclass_superclasses()
{
    static char *cfn_name = "class-superclasses";

    LVAL val = xlgetarg();
    xllastarg();

    if (!classp(val))
    {
        xlbadtype(val, expect_class, cfn_name);
    }

    return getivar(val, SUPERCLASS);
}

LVAL xclass_subclasses()
{
    static char *cfn_name = "class-subclasses";

    LVAL val = xlgetarg();
    xllastarg();

    if (!classp(val))
    {
        xlbadtype(val, expect_class, cfn_name);
    }

    return getivar(val, SUBCLASSES);
}

LVAL xclass_slots()
{
    static char *cfn_name = "class-slots";

    LVAL val = xlgetarg();
    xllastarg();

    if (!classp(val))
    {
        xlbadtype(val, expect_class, cfn_name);
    }

    return getivar(val, SLOTS);
}

LVAL xclass_keywords()
{
    static char *cfn_name = "class-keywords";

    LVAL val = xlgetarg();
    xllastarg();

    if (!classp(val))
    {
        xlbadtype(val, expect_class, cfn_name);
    }

    return getivar(val, KEYWORDS);
}

LVAL xset_class_keywords()
{
    static char *cfn_name = "set-class-keywords";

    LVAL cl = xlgetarg();
    LVAL val = xlgalist();
    xllastarg();

    if (!classp(cl))
    {
        xlbadtype(cl, expect_class, cfn_name);
    }

    setivar(cl, KEYWORDS, val);

    return val;
}

LVAL xclass_instsize()
{
    static char *cfn_name = "class-instance-size";

    LVAL val = xlgetarg();
    xllastarg();

    if (!classp(val))
    {
        xlbadtype(val, expect_class, cfn_name);
    }

    return getivar(val, INSTSIZE);
}

LVAL xclass_abstractp()
{
    static char *cfn_name = "class-abstract?";

    LVAL val = xlgetarg();
    xllastarg();

    if (!classp(val))
    {
        xlbadtype(val, expect_class, cfn_name);
    }

    return getivar(val, ABSTRACTP);
}

LVAL xclass_cpl()
{
    static char *cfn_name = "class-precedence-list";

    LVAL val = xlgetarg();
    xllastarg();

    if (!classp(val))
    {
        xlbadtype(val, expect_class, cfn_name);
    }

    return getivar(val, CPL);
}

LVAL xclassp()
{
    static char *cfn_name = "class?";

    LVAL obj = xlgetarg();
    xllastarg();

    return classp(obj) ? true : NIL;
}

// cl1 and cl2 are classes
int xlsubclassp(LVAL cl1, LVAL cl2)
{
    LVAL cpl = getivar(cl1, CPL);

    for (; cpl; cpl = cdr(cpl))
    {
        if (cl2 == car(cpl))
        {
            return TRUE;
        }
    }

    return FALSE;
}

LVAL xsubclassp()
{
    static char *cfn_name = "subclass?";

    LVAL cl1 = xlgetarg();
    LVAL cl2 = xlgetarg();

    if (!classp(cl1))
    {
        xlbadtype(cl1, expect_class, cfn_name);
    }

    if (!classp(cl2))
    {
        xlbadtype(cl2, expect_class, cfn_name);
    }

    return xlsubclassp(cl1, cl2) ? true : NIL;
}

LVAL xsetivar()
{
    static char *cfn_name = "setivar";

    LVAL obj = xlgaobject();
    LVAL index = xlgafixnum();
    LVAL val = xlgetarg();
    xllastarg();

    int len = getfixnum(getivar(class_of(obj), INSTSIZE));
    int i = getfixnum(index);

    if (i < 1 || i > len)
    {
        xlcerror("index out of range in setivar", index, s_telos_error);
    }

    setivar(obj, i, val);

    return val;
}

LVAL xgetivar()
{
    static char *cfn_name = "getivar";

    LVAL obj = xlgaobject();
    LVAL index = xlgafixnum();
    xllastarg();

    int len = getfixnum(getivar(class_of(obj), INSTSIZE));
    int i = getfixnum(index);

    if (i < 1 || i > len)
    {
        xlcerror("index out of range in getivar", index, s_telos_error);
    }

    return getivar(obj, i);
}

LVAL xgf_name()
{
    static char *cfn_name = "generic-name";

    LVAL gf = xlgageneric();
    xllastarg();

    return getgname(gf);
}

LVAL xgf_args()
{
    static char *cfn_name = "generic-args";

    LVAL gf = xlgageneric();
    xllastarg();

    return getgargs(gf);
}

LVAL xgf_setargs()
{
    static char *cfn_name = "set-generic-args";

    LVAL gf = xlgageneric();
    LVAL val = xlgalist();
    xllastarg();

    for (LVAL cls = val; cls; cls = cdr(cls))
    {
        if (!classp(car(cls)))
        {
            xlbadtype(car(cls), expect_class, "defgeneric");
        }
    }

    setgargs(gf, val);

    return val;
}

LVAL xgf_optargs()
{
    static char *cfn_name = "generic-optargs?";

    LVAL gf = xlgageneric();
    xllastarg();

    return getgopt(gf);
}

LVAL xgf_methods()
{
    static char *cfn_name = "generic-methods";

    LVAL gf = xlgageneric();
    xllastarg();

    return getgmethods(gf);
}

LVAL xgf_cache1()
{
    static char *cfn_name = "generic-cache1";

    LVAL gf = xlgageneric();
    xllastarg();

    return getgcache1(gf);
}

LVAL xgf_cache2()
{
    static char *cfn_name = "generic-cache2";

    LVAL gf = xlgageneric();
    xllastarg();

    return getgcache2(gf);
}

LVAL xmethod_gf()
{
    static char *cfn_name = "method-generic";

    LVAL md = xlgamethod();
    xllastarg();

    return getmdgf(md);
}

LVAL xmethod_fun()
{
    static char *cfn_name = "method-function";

    LVAL md = xlgamethod();
    xllastarg();

    return getmdfun(md);
}

LVAL xmethod_domain()
{
    static char *cfn_name = "method-domain";

    LVAL md = xlgamethod();
    xllastarg();

    return getmddomain(md);
}

LVAL xslot_name()
{
    static char *cfn_name = "slot-name";

    LVAL slot = xlgaslot();
    xllastarg();

    return getslotname(slot);
}

LVAL xslot_keyword()
{
    static char *cfn_name = "slot-keyword";

    LVAL slot = xlgaslot();
    xllastarg();

    return getslotkey(slot);
}

LVAL xslot_default()
{
    static char *cfn_name = "slot-default";

    LVAL slot = xlgaslot();
    xllastarg();
    return getslotdefault(slot);
}

LVAL xset_slot_default()
{
    static char *cfn_name = "set-slot-default";

    LVAL slot = xlgaslot();
    LVAL val = xlgetarg();
    xllastarg();

    setslotdefault(slot, val);
    return slot;
}

LVAL xslot_requiredp()
{
    static char *cfn_name = "slot-required-p";

    LVAL slot = xlgaslot();
    xllastarg();
    return getslotrequiredp(slot);
}

LVAL xset_slot_requiredp()
{
    static char *cfn_name = "set-slot-required-p";

    LVAL slot = xlgaslot();
    LVAL val = xlgetarg();
    xllastarg();

    setslotrequiredp(slot, val);
    return slot;
}

LVAL xfind_slot_index()
{
    static char *cfn_name = "find-slot-index";

    LVAL name = xlgasymbol();
    LVAL cls = xlgaobject();
    xllastarg();

    if (!classp(cls))
    {
        xlcerror("not a class in find-slot", cls, s_telos_error);
    }

    LVAL slots = getivar(cls, SLOTS);

    for (int index = 1; slots; slots = cdr(slots), index++)
    {
        if (slotequal(name, car(slots)))
        {
            return cvfixnum(index);
        }
    }

    return NIL;
}

static LVAL init_class(int type, char *name, LVAL super, LVAL absp)
{
    LVAL cl = newobject(simple_class, CLASSSIZE);
    LVAL sym = xlenter(name);
    setvalue(sym, cl);
    setivar(cl, CNAME, sym);
    setivar(cl, SUPERCLASS, cons(super, NIL));
    setivar(cl, CPL, cons(cl, getivar(super, CPL)));
    setivar(cl, SLOTS, NIL);
    setivar(cl, KEYWORDS, NIL);
    setivar(cl, SUBCLASSES, NIL);
    setivar(cl, INSTSIZE, cvfixnum((FIXTYPE) 0));
    setivar(cl, ABSTRACTP, absp);

    setivar(super, SUBCLASSES, cons(cl, getivar(super, SUBCLASSES)));

    if (type >= 0)
    {
        setelement(class_vector, type, cl);
    }

    return cl;
}

static void init_builtin_classes()
{
    // incl. NULLTYPE, KEYWORD, ISTREAM, OSTREAM, IOSTREAM
    class_vector = newvector(NTYPES + EXTRA_TYPES);

    LVAL collection_cl = init_class(-1, "<collection>", object, true);
    LVAL sequence_cl = init_class(-1, "<sequence>", collection_cl, true);
    LVAL character_sequence_cl =
        init_class(-1, "<character-sequence>", sequence_cl, true);
    init_class(STRING, "<string>", character_sequence_cl, NIL);
    init_class(VECTOR, "<vector>", sequence_cl, NIL);
    LVAL list_cl = init_class(-1, "<list>", sequence_cl, true);
    init_class(CONS, "<cons>", list_cl, NIL);
    init_class(NTYPES, "<null>", list_cl, NIL);

    LVAL number_cl = init_class(-1, "<number>", object, true);
    LVAL integer_cl = init_class(-1, "<integer>", number_cl, true);
    init_class(FIXNUM, "<fpi>", integer_cl, NIL);
    LVAL float_cl = init_class(-1, "<float>", number_cl, true);
    init_class(FLONUM, "<double-float>", float_cl, NIL);

    LVAL symbol_cl = init_class(SYMBOL, "<symbol>", object, NIL);
    init_class(KEYWORD, "<keyword>", symbol_cl, NIL);

    LVAL stream_cl = init_class(STREAM, "<stream>", object, true);
    init_class(ISTREAM, "<input-stream>", stream_cl, NIL);
    init_class(OSTREAM, "<output-stream>", stream_cl, NIL);
    init_class(IOSTREAM, "<i/o-stream>", stream_cl, NIL);

    LVAL char_cl = init_class(-1, "<char>", object, true);
    init_class(CHAR, "<simple-char>", char_cl, NIL);

    init_class(PROMISE, "<promise>", object, NIL);
    init_class(ENV, "<env>", object, NIL);
    init_class(CODE, "<code>", object, NIL);
    init_class(MODULE, "<module>", object, NIL);
    LVAL table_cl = init_class(-1, "<table>", object, true);
    init_class(TABLE, "<hash-table>", table_cl, NIL);

    LVAL function_cl = init_class(-1, "<function>", object, true);
    LVAL simplefun_cl = init_class(-1, "<simple-function>", function_cl, NIL);
    init_class(CLOSURE, "<closure>", simplefun_cl, NIL);
    init_class(SUBR, "<subr>", simplefun_cl, NIL);
    init_class(XSUBR, "<xsubr>", object, NIL);
    init_class(CSUBR, "<csubr>", object, NIL);
    init_class(CONTINUATION, "<continuation>", function_cl, NIL);

    LVAL generic_cl = init_class(-1, "<generic>", function_cl, true);
    init_class(GENERIC, "<simple-generic>", generic_cl, NIL);

    LVAL method_cl = init_class(-1, "<method>", object, true);
    init_class(METHOD, "<simple-method>", method_cl, NIL);

    LVAL slot_cl = init_class(-1, "<slot>", object, true);
    init_class(SLOT, "<local-slot>", slot_cl, NIL);
}

void xloinit()
{
    LVAL scls = xlenter("<simple-class>");
    simple_class = newobject(NIL, CLASSSIZE);
    setclass(simple_class, simple_class);
    setvalue(scls, simple_class);

    LVAL cls = xlenter("<class>");
    class = newobject(simple_class, CLASSSIZE);
    setvalue(cls, class);

    LVAL obj = xlenter("<object>");
    object = newobject(simple_class, CLASSSIZE);
    setvalue(obj, object);

    setivar(object, CNAME, obj);
    setivar(object, SUPERCLASS, cons(object, NIL));
    setivar(object, CPL, cons(object, NIL));
    setivar(object, SLOTS, NIL);
    setivar(object, KEYWORDS, NIL);
    setivar(object, SUBCLASSES, cons(class, NIL));
    setivar(object, INSTSIZE, cvfixnum((FIXTYPE) 0));
    setivar(object, ABSTRACTP, true);

    setivar(class, CNAME, cls);
    setivar(class, SUPERCLASS, cons(object, NIL));
    setivar(class, CPL, cons(class, getivar(object, CPL)));
    setivar(class, SUBCLASSES, cons(simple_class, NIL));
    setivar(class, INSTSIZE, cvfixnum((FIXTYPE) CLASSSIZE));
    setivar(class, ABSTRACTP, true);

    setivar(simple_class, CNAME, scls);
    setivar(simple_class, SUPERCLASS, cons(class, NIL));
    setivar(simple_class, CPL, cons(simple_class, getivar(class, CPL)));
    setivar(simple_class, SUBCLASSES, NIL);
    setivar(simple_class, INSTSIZE, cvfixnum((FIXTYPE) CLASSSIZE));
    setivar(simple_class, ABSTRACTP, NIL);

    LVAL sds = cons(newslot(xlenter("abstract?")), NIL);
    setslotkey(car(sds), xlenter_keyword("abstract?:"));
    sds = cons(newslot(xlenter("instance-size")), sds);
    sds = cons(newslot(xlenter("subclasses")), sds);
    sds = cons(newslot(xlenter("keywords")), sds);
    sds = cons(newslot(xlenter("slots")), sds);
    sds = cons(newslot(xlenter("class-precedence-list")), sds);
    sds = cons(newslot(xlenter("superclasses")), sds);
    setslotkey(car(sds), xlenter_keyword("superclasses:"));
    sds = cons(newslot(xlenter("name")), sds);
    setslotkey(car(sds), xlenter_keyword("name:"));
    setivar(class, SLOTS, sds);
    setivar(simple_class, SLOTS, sds);

    sds = cons(xlenter_keyword("abstract?:"), NIL);
    sds = cons(xlenter_keyword("direct-keywords:"), sds);
    sds = cons(xlenter_keyword("direct-slots:"), sds);
    sds = cons(xlenter_keyword("superclasses:"), sds);
    sds = cons(xlenter_keyword("name:"), sds);
    setivar(class, KEYWORDS, sds);
    setivar(simple_class, KEYWORDS, sds);

    init_builtin_classes();
}

// is this method applicable to this domain?
static int applicablep(LVAL md, LVAL domain)
{
    LVAL md_domain = getmddomain(md);

    for (; md_domain; md_domain = cdr(md_domain), domain = cdr(domain))
    {
        if (!xlsubclassp(car(domain), car(md_domain)))
        {
            return FALSE;
        }
    }

    return TRUE;
}

// order by domains as more or less specific
static int specific(LVAL * md1, LVAL * md2)
{
    LVAL dom1 = getmddomain(*md1);
    LVAL dom2 = getmddomain(*md2);

    for (; dom1; dom1 = cdr(dom1), dom2 = cdr(dom2))
    {
        if (car(dom1) == car(dom2))
        {
            continue;
        }
        else if (xlsubclassp(car(dom1), car(dom2)))
        {
            return -1;
        }
        else if (xlsubclassp(car(dom2), car(dom1)))
        {
            return 1;
        }
    }

    return 0;
}

// find and sort applicable methods
static LVAL applicable_methods(LVAL gf, LVAL classes)
{
    LVAL methods = getgmethods(gf);
    if (methods == NIL)
    {
        return NIL;
    }

    int app = 0;
    LVAL buf[128];

    for (app = 0; methods; methods = cdr(methods))
    {
        if (applicablep(car(methods), classes))
        {
            buf[app] = car(methods);
            app++;
        }
    }

    if (app == 0)
    {
        return NIL;
    }
    if (app == 1)
    {
        return cons(buf[0], NIL);
    }

    #if 0
    {
        xlputstr(xstdout(), "<applic");
        for (int i = 0; i < app; i++)
        {
            xlputstr(xstdout(), " ");
            xlprin1(buf[i], xstdout());
        }
        xlputstr(xstdout(), ">\n");
    }
    qsort((char *)buf, app, sizeof(LVAL), specific);
    {
        xlputstr(xstdout(), "<sorted");
        for (int i = 0; i < app; i++)
        {
            xlputstr(xstdout(), " ");
            xlprin1(buf[i], xstdout());
        }
        xlputstr(xstdout(), ">\n");
    }
    #else
    qsort
    (
        buf,
        app,
        sizeof(LVAL),
        (int (*)(const void *, const void *))specific
    );
    #endif

    LVAL applicable = NIL;
    for (int i = app - 1; i >= 0; i--)
    {
        applicable = cons(buf[i], applicable);
        }

    return applicable;
}

// get clases of required args
static LVAL classlist(LVAL l, LVAL gf)
{
    LVAL reqd = getgargs(gf);

    if (l == NIL)
    {
        if (reqd != NIL)
        {
            xlcerror("insufficient args for generic function", gf, NIL);
        }

        return NIL;
    }

    LVAL start = cons(class_of(car(l)), NIL);
    reqd = cdr(reqd);

    cpush(start);
    LVAL end;
    for (end = start, l = cdr(l); l && reqd; l = cdr(l), end = cdr(end))
    {
        rplacd(end, cons(class_of(car(l)), NIL));
        reqd = cdr(reqd);
    }

    drop(1);

    if (reqd != NIL)
    {
        xlcerror("insufficient args for generic function", gf, NIL);
    }

    if (l != NIL && getgopt(gf) == NIL)
    {
        xlcerror("too many args for generic function", gf, NIL);
    }

    return start;

}

// find, sort and cache applicable methods
LVAL find_and_cache_methods(LVAL gf, LVAL arglist)
{
    LVAL classes = classlist(arglist, gf);

    LVAL cache1 = getgcache1(gf);
    if (cache1 != NIL && equal(classes, car(cache1)))
    {
        // fprintf(stderr, "<cache1 hit>");
        return cdr(cache1);
    }

    LVAL cache2 = getgcache2(gf);
    if (cache2 != NIL)
    {
        for (; cache2; cache2 = cdr(cache2))
        {
            if (equal(classes, car(car(cache2))))
            {
                //	fprintf(stderr, "<cache2 hit>");
                setgcache1(gf, car(cache2));
                return cdr(car(cache2));
            }
        }
    }

    check(3);
    push(classes);
    push(gf);

    LVAL applicable = applicable_methods(gf, classes);
    if (applicable == NIL)
    {
        drop(2);
        return NIL;
    }
    push(applicable);

    LVAL methodfns;
    for (methodfns = applicable; applicable; applicable = cdr(applicable))
    {
        rplaca(applicable, getmdfun(car(applicable)));
    }

    cache1 = cons(classes, methodfns);
    setgcache1(gf, cache1);
    cache2 = cons(cache1, getgcache2(gf));
    setgcache2(gf, cache2);

    drop(3);
    return methodfns;
}

// replace old method of same domain, if there
static LVAL add_or_replace_method(LVAL md, LVAL mdlist)
{
    LVAL domain = getmddomain(md);
    LVAL list;
    for (list = mdlist; list; list = cdr(list))
    {
        if (equal(domain, getmddomain(car(list))))
        {
            rplaca(list, md);
            break;
        }
    }

    if (list == NIL)    // it wasn't there, so add
    {
        mdlist = cons(md, mdlist);
    }

    return mdlist;
}

static void check_domain_compatibility(LVAL domain, LVAL gf, LVAL optargs)
{
    LVAL gfdomain = getgargs(gf);

    for (; domain && gfdomain; domain = cdr(domain), gfdomain = cdr(gfdomain))
    {
        if (!classp(car(domain)))
        {
            xlbadtype(car(domain), expect_class, "defmethod");
        }

        if (!xlsubclassp(car(domain), car(gfdomain)))
        {
            xlcerror
            (
                "trying to extend generic domain in defmethod",
                gf,
                s_incompatible_md
            );
        }
    }

    if (domain || gfdomain)
    {
        xlcerror
        (
            "wrong number of required args in defmethod",
            gf,
            s_incompatible_md
        );
    }

    if (optargs != getgopt(gf))
    {
        xlcerror
        (
            "method and generic don't agree on rest args",
            gf,
            s_incompatible_md
        );
    }
}

// (make-and-add-method gf closure domain optargs?)
LVAL xmake_and_add_method()
{
    static char *cfn_name = "make-and-add-method";

    LVAL gf = xlgageneric();
    LVAL mdfn = xlgaclosure();
    LVAL domain = xlgalist();
    LVAL optargs = xlgetarg();
    xllastarg();

    check(4);
    push(gf);
    push(mdfn);
    push(domain);
    push(optargs);

    check_domain_compatibility(domain, gf, optargs);

    LVAL md = newmethod();
    setmdgf(md, gf);
    setmdfun(md, mdfn);
    setmddomain(md, domain);
    setmdopt(md, optargs);
    LVAL meths = add_or_replace_method(md, getgmethods(gf));
    setgmethods(gf, meths);
    setgcache1(gf, NIL);
    setgcache2(gf, NIL);

    drop(4);
    return gf;

}

// (make-method closure domain optargs?)
LVAL xmake_method()
{
    static char *cfn_name = "make-method";

    LVAL mdfn = xlgaclosure();
    LVAL domain = xlgalist();
    LVAL optargs = xlgetarg();
    xllastarg();

    check(3);
    push(mdfn);
    push(domain);
    push(optargs);

    LVAL md = newmethod();

    setmdgf(md, NIL);
    setmdfun(md, mdfn);
    setmddomain(md, domain);
    setmdopt(md, optargs);

    drop(3);

    return md;
}

// (add-method gf md)
LVAL xadd_method()
{
    static char *cfn_name = "add-method";

    LVAL gf = xlgageneric();
    LVAL md = xlgamethod();
    xllastarg();

    check(2);
    push(gf);
    push(md);

    check_domain_compatibility(getmddomain(md), gf, getmdopt(md));
    LVAL meths = add_or_replace_method(md, getgmethods(gf));
    setgmethods(gf, meths);
    setgcache1(gf, NIL);
    setgcache2(gf, NIL);
    setmdgf(md, gf);

    drop(2);

    return gf;
}

// (make-generic name domain optargs?)
LVAL xmake_generic()
{
    static char *cfn_name = "make-generic";

    LVAL name = xlgasymbol();
    LVAL domain = xlgalist();
    LVAL optargs = xlgetarg();
    xllastarg();

    check(3);
    push(name);
    push(domain);
    push(optargs);

    LVAL gf = newgeneric();
    setgname(gf, name);
    setgargs(gf, domain);
    setgopt(gf, optargs);
    setgmethods(gf, NIL);
    setgcache1(gf, NIL);
    setgcache2(gf, NIL);

    drop(3);

    return gf;
}

#ifndef NO_CHECK_REF
void telos_bad_ref_error(LVAL object, LVAL wanted, int interp)
{
    extern LVAL s_telos_bad_ref;

    LVAL cond = getvalue(s_telos_bad_ref);
    if (cond != s_unbound)
    {
        setivar(cond, 3, wanted);
    }

    if (interp)
    {
        xlinterror("wrong type for slot accessor", object, s_telos_bad_ref);
    }
    else
    {
        xlcerror("wrong type for slot accessor", object, s_telos_bad_ref);
    }
}

// (check-ref class obj)
LVAL xcheck_ref()
{
    static char *cfn_name = "check-ref";

    LVAL class = xlgaobject();
    LVAL object = xlgetarg();
    xllastarg();

    if (!classp(class))
    {
        xlcerror("not a class in check-ref", class, s_telos_error);
    }

    if (xlsubclassp(class_of(object), class))
    {
        return true;
    }

    telos_bad_ref_error(object, class, FALSE);

    return NIL; // not reached
}

#endif


///-----------------------------------------------------------------------------