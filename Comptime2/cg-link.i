;;; EuLisp system 'youtoo'
;;;   Interface file for module cg-link

(definterface cg-link
  (import (i-all i-modify p-env sx-obj sx-node cg-state cg-asm cg-interf i-ffi ex-expr cg-dld)
   syntax (_macros _i-aux0)
   full-import (i-error i-notify i-param i-level1 boot1 boot symbol stream3 random handler read table table1 vector convert1 format list socket stream2 lock stream1 stream float character compare collect fpi number integer copy convert string callback let-cc dynamic thread event condition bit mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl telos level1 aux-table i-all i-modify sx-obj sx-obj1 sx-obj2 p-env i-ffi sx-node cg-state op-peep-r op-peep cg-bycode2 cg-bycode1 cg-bycode cg-asm cg-interf cg-dld ex-direct ex-expose ex-syntax ex-import ex-expr)
   export (
    ((name . write-C-module-file) (pos . 4) (origin cg-link . write-C-module-file))
    ((name . decode) (pos . 23) (origin cg-link . decode))
   )
   local-literals (
    (top-level . 365)
    (write-C-state . 364)
    (set-bytevector-pos . 363)
    (write-C-module-file . 362)
    (add-initialization . 361)
    (compute-bytevector-aux . 360)
    (check-bv-delimiter . 359)
    (compute-binding . 358)
    (set-up-foreign-functions . 357)
    (reset-code-vector-str . 356)
    (write-C-file-end . 355)
    (add-statement . 354)
    (add-code-vector-def . 353)
    (as-C-string . 352)
    (compute-foreign-function-binding . 351)
    (global-index . 350)
    (compute-code-vector . 349)
    (write-C-include-file . 348)
    (wrap-init-code-aux . 347)
    (add-global . 346)
    (as-hex . 345)
    (write-ff-stub-to-C-file . 344)
    (write-to-C-file . 343)
    (open-bytevector . 342)
    (add-used-module-name . 341)
    (reset-decoder . 340)
    (initialize-imported-modules . 339)
    (set-up-bindings . 338)
    (write-next-bv-byte . 337)
    (static-allocatable-p . 336)
    (wrap-init-code . 335)
    (set-fixed-bytes . 334)
    (set-up-init-bytevector . 333)
    (compute-bytevector . 332)
    (check-method-name . 331)
    (write-to-bv-str . 330)
    (flush-bytevector-cache . 329)
    (get-imported-module-or-library . 328)
    (write-C-hook-file . 327)
    (add-decl . 326)
    (write-C-file-header . 325)
    (write-decls-to-C-file . 324)
    (set-global-index . 323)
    (close-bytevector . 322)
    (set-up-bytevectors . 321)
    (set-up-init-flag . 320)
    (register-new-global . 319)
    (get-bytevector-pos . 318)
    (compute-static . 317)
    (write-copyright-to-C-file . 316)
    (" **  Description: ~a of EuLisp module ~a
 **  Copyright: See file ~a.em
 ** ----------------------------------------------------------------------- **/

" . 314)
    (" **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
" . 313)
    ("/** ----------------------------------------------------------------------- **
" . 312)
    ("  ~a_bindings[ ~a] = ~a;
" . 308)
    ("eul_nil" . 306)
    ("  Processing bv: ~s binding-name: ~a code: ~a" . 303)
    ("  eul_allocate_bytevector( ~a,~a);
" . 301)
    ("};

" . 300)
    ("  static const void *~a[] = {" . 299)
    ("  /* Byte-vector with size: ~a is_init: ~a index: ~a binding: ~a */
" . 298)
    (";
" . 295)
    ("  LispRef ~a" . 294)
    (", ~a" . 292)
    ("  is_initialized = 1;
  {
" . 290)
    ("  eul_fast_table_set(eul_modules,"~a",(LispRef) ~a_bindings);
" . 289)
    ("  if (is_initialized) return;
" . 288)
    ("void initialize_module_~a()
{
" . 287)
    ("
/* Initialize module ~a */
" . 286)
    ("static int is_initialized = 0;
" . 285)
    ("
/* Initialize module only once */
" . 284)
    ("
/* Foreign functions */
" . 283)
    ("LispRef ~a_bindings[~a];
" . 282)
    ("
/* Module bindings with size ~a */
" . 281)
    ("
/* Imported modules */
" . 280)
    ("#include "eulisp.h"

" . 279)
    ("C source file" . 278)
    ("extern void initialize_module_~a();
" . 276)
    ("extern LispRef ~a_bindings[];
" . 274)
    ("


/* eof */
" . 270)
    ("  execute_lambda(~a_bindings[0]);
}" . 269)
    ("  initialize_module_~a();
" . 268)
    ("void run_application()
{
" . 267)
    ("
/* Run application ~a ... */
" . 266)
    ("extern LispRef ~a_bindings[];
" . 265)
    ("extern void initialize_module_~a();
" . 264)
    ("
/* Initialize module ~a ... */
" . 263)
    ("#include "eulisp.h"

" . 262)
    ("C hook file" . 261)
    ("  Creating hook ~a ..." . 260)
    ("~a~a~a" . 259)
    ("_.c" . 258)
    ("00" . 252)
    ("I(~a,~a,~a,~a)" . 251)
    ("00" . 250)
    ("00" . 249)
    ("  eul_allocate_lambda( ~a, "~a", 0, ~a);
" . 245)
    ("initialize-" . 243)
    ("~a_bindings[0]" . 242)
    ("B(~a ,~a)" . 240)
    ("B(~a ,1)" . 238)
    ("  Wrap bv: ~a" . 237)
    ("~a" . 234)
    ("I(~a,~a,~a,~a)" . 233)
    ("  }

" . 231)
    ("      ~a_bindings[i] = eul_nil;
" . 230)
    ("    for (i = ~a; i < ~a; i++)
" . 229)
    ("  {
    int i;
" . 228)
    ("  initialize_module_~a();
" . 224)
    (comparator: . 222)
    ("  Reset decoder ..." . 221)
    ("~a" . 219)
    ("}

" . 215)
    ("  return res;
" . 214)
    ("));
" . 213)
    ("" . 212)
    ("  FF_RES_CONVERT~a(res,~a(~a" . 211)
    ("FF_ARG_CONVERT~a(~a)" . 210)
    ("" . 209)
    ("  LispRef ~ares;

" . 208)
    ("LispRef *sreg_value_sb)
{
" . 207)
    ("LispRef *sreg_value_sp, " . 206)
    ("Stack *reg_value_stack, " . 205)
    ("static LispRef ~a (" . 204)
    ("" . 203)
    ("~a, " . 200)
    ("  POPVAL1(~a);
" . 198)
    (", FF_ARG_CONVERT~a(~a)" . 196)
    ("too many top-level forms after macro expansion" . 194)
    ("00" . 193)
    (decode . 190)
    (|(method G006497)| . 189)
    ("decoder error" . 187)
    ("B(~a ,1)" . 183)
    ("B(~a ,0)" . 182)
    ("


/* eof */
" . 180)
    ("/* Module binding indices */
" . 179)
    ("extern LispRef ~a_bindings[];

" . 178)
    ("C include file" . 177)
    ("  Creating ~a ..." . 176)
    ("~a~a~a" . 175)
    (".h" . 174)
    ("#define ~a_fn_index ~a 
" . 170)
    ("body of inlined function contains non exported binding ~a" . 166)
    ("" . 164)
    ("~a" . 163)
    ("~a_X~a" . 161)
    ("


/* eof */
" . 157)
    ("
  }
}" . 156)
    (("") . 154)
    ("(LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) " . 151)
    ("ff binding ~a: index ~a" . 150)
    ("ff_stub_" . 149)
    (ff . 148)
    ("set-fixed-byes ~a ~a ~a" . 146)
    (? . 145)
    ("compute-binding ~a ~a" . 144)
    (|(method G006666)| . 143)
    (ct-error-value: . 141)
    ("can't compute binding ~a of module ~a" . 140)
    ("," . 137)
    (FF . 135)
    (BINDING . 134)
    (STATIC . 133)
    (CODE-VECTOR . 132)
    ("~a" . 131)
    (*C-state* . 129)
    ("  Creating ~a.c ..." . 127)
    ("  Set up bytevector: ~a" . 125)
    ("
  /* Set local bindings */
" . 123)
    ("
  /* Initializations */
" . 122)
    ("
  /* Code vector and literal definitions */
" . 121)
    ("  /* Declarations */
" . 120)
    ("Writing link state of module ~a" . 119)
    (*c-stream* . 118)
    (anonymous . 117)
    (*clean-ups* . 116)
    (w . 115)
    (mode: . 114)
    (file-name: . 113)
    ("~a~a~a" . 112)
    (".c" . 111)
    (|(method convert-constant)| . 107)
    (|(method get-literal-entry)| . 106)
    (|(method get-constant-loc)| . 105)
    (convert-constant . 104)
    (size: . 103)
    (get-literal-entry . 102)
    (get-constant-loc . 101)
    (*actual-module* . 97)
    ("c_int_as_eul_int(~a)" . 94)
    ("  eul_allocate_double(~a,~a);
" . 92)
    ("dbl_" . 91)
    ("c_char_as_eul_char('~a')" . 89)
    ("  eul_allocate_vector(~a,~a,~a);
" . 87)
    ("vec_" . 86)
    (eul_nil . 84)
    ("  eul_cdr(~a) = ~a;
" . 82)
    ("NULL);
" . 81)
    ("eul_as_static(~a));
" . 80)
    ("~a);
" . 79)
    ("  eul_car(~a) = ~a;
" . 78)
    ("NULL, " . 77)
    ("eul_as_static(~a), " . 76)
    ("~a, " . 75)
    ("  object_class(~a) = eul_static_cons_class;~%" . 74)
    ("  eul_allocate_static_cons(~a, " . 73)
    ("cons_" . 72)
    ("  object_class(~a) = eul_static_string_class;~%" . 70)
    ("  eul_allocate_static_string(~a, ~s, ~a);
" . 69)
    ("str_" . 68)
    ("  eul_intern_symbol(~a,~s);
" . 66)
    ("sym_" . 65)
    (eul_true . 64)
    ("  eul_intern_keyword(~a,~s);
" . 62)
    ("key_" . 61)
   )
   literals (
   )
))
