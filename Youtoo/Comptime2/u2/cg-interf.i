;;; EuLisp system 'youtoo'
;;;   Interface file for module cg-interf

(definterface cg-interf
  (import (i-all i-modify sx-obj sx-node p-env)
   syntax (_syntax-1 _i-aux0)
   full-import (i-error i-notify i-param i-level-1 boot1 boot symbol stream3 random handler read table table1 vector convert1 format list socket stream2 lock stream1 stream float character compare collect fpi number integer copy convert string callback let-cc dynamic thread event condition bit mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl telos level-1 aux-table i-all i-modify sx-obj2 sx-obj1 sx-obj p-env i-ffi sx-node)
   export (
    ((name . get-full-import-names) (pos . 15) (origin cg-interf . get-full-import-names))
    ((name . find-imported-module) (pos . 26) (origin cg-interf . find-imported-module))
    ((name . make-interface-binding) (pos . 22) (origin cg-interf . make-interface-binding))
    ((name . ffl-link-string) (pos . 23) (origin cg-interf . ffl-link-string))
    ((name . load-module-interface) (pos . 12) (origin cg-interf . load-module-interface))
    ((name . load-library-interfaces) (pos . 4) (origin cg-interf . load-library-interfaces))
    ((name . find-imported-syntax-module) (pos . 8) (origin cg-interf . find-imported-syntax-module))
    ((name . get-library-names) (pos . 6) (origin cg-interf . get-library-names))
    ((name . mkdir) (pos . 16) (origin cg-interf . mkdir))
    ((name . get-module-load-dir) (pos . 5) (origin cg-interf . get-module-load-dir))
    ((name . string-append-with-space) (pos . 20) (origin cg-interf . string-append-with-space))
    ((name . write-interface-file) (pos . 9) (origin cg-interf . write-interface-file))
    ((name . create-library-interface-file) (pos . 11) (origin cg-interf . create-library-interface-file))
    ((name . link-string) (pos . 17) (origin cg-interf . link-string))
    ((name . directly-or-indirectly-modified?) (pos . 7) (origin cg-interf . directly-or-indirectly-modified?))
    ((name . fff-link-string) (pos . 25) (origin cg-interf . fff-link-string))
    ((name . new-literal) (pos . 14) (origin cg-interf . new-literal))
   )
   local-literals (
    (write-library-interface-export . 197)
    (write-interface-literals . 196)
    (load-library-interfaces . 195)
    (get-module-load-dir . 194)
    (get-library-names . 193)
    (directly-or-indirectly-modified? . 192)
    (find-imported-syntax-module . 191)
    (write-interface-file . 190)
    (write-library-interface-file . 189)
    (create-library-interface-file . 188)
    (load-module-interface . 187)
    (write-interface-export . 186)
    (new-literal . 185)
    (get-full-import-names . 184)
    (mkdir . 183)
    (link-string . 182)
    (write-interface-binding . 181)
    (write-module-interface-file . 180)
    (string-append-with-space . 179)
    (get-interface-info . 178)
    (make-interface-binding . 177)
    (ffl-link-string . 176)
    (write-library-interface-literals . 175)
    (fff-link-string . 174)
    (find-imported-module . 173)
    (write-interface-local-literals . 172)
    ("   )
" . 170)
    ("   local-literals (
" . 169)
    ("    ~s
" . 167)
    ("" . 164)
    ("foreign function file ~a does not exist" . 162)
    ("~a~a~a " . 161)
    (".o" . 160)
    (".o" . 159)
    ("   )
" . 157)
    ("   literals (
" . 156)
    ("    (~s ~a)
" . 154)
    ("" . 152)
    ("foreign function library ~a does not exist" . 150)
    ("~a~a~a " . 149)
    ("lib~a.a" . 148)
    ("~a~alib~a.a" . 147)
    (info: . 145)
    (local-index: . 144)
    (imported: . 143)
    (obj: . 142)
    (immutable: . 141)
    (module: . 140)
    (local-name: . 139)
    (" " . 135)
    ("))
" . 133)
    ("   full-import ~a
" . 132)
    ("   syntax ~a
" . 131)
    ("  (import ~a
" . 130)
    ("(definterface ~a
" . 129)
    (";;;   Interface file for module ~a

" . 128)
    (";;; EuLisp system 'youtoo'
" . 127)
    ("  Creating ~a ..." . 126)
    ("~a~a~a" . 125)
    (".i" . 124)
    ("    ~s
" . 121)
    (origin . 120)
    (pos . 119)
    (name . 118)
    (".o" . 116)
    (".o" . 115)
    (" " . 113)
    (".o" . 112)
    (".o" . 111)
    ("cannot make directory ~a " . 109)
    ("mkdir -p" . 108)
    (|(method G001048)| . 106)
    ("  Get-full-import-names spec: ~a" . 105)
    ("  dir ~a ..." . 104)
    ("No such file or directory ~a in ~a" . 103)
    ("  Getting full import from ~a ..." . 102)
    (".i" . 101)
    ("  Get-full-import-names module-name: ~a" . 100)
    ("bad interface syntax ~a" . 97)
    ("compile time error condition: " . 96)
    ("   )
" . 92)
    ("   export (
" . 91)
    (nl . 88)
    (local-literals . 87)
    (export . 86)
    (syntax . 85)
    (full-import . 84)
    (import . 83)
    (|(method G00905)| . 82)
    (*actual-module* . 81)
    ("  Reading interface ~a ..." . 80)
    ("Reading library interface ~a ..." . 79)
    ("No such file or directory ~a in ~a" . 78)
    (".i" . 77)
    ("~a~alib~a.i" . 76)
    (ct-error-value: . 72)
    ("bad interface syntax ~a" . 71)
    ("compile time error condition: " . 70)
    ("Create library interface file ..." . 67)
    ("  )
)  ; end of interface" . 65)
    ("   literals (
   )
" . 64)
    ("   full-import ~a
" . 63)
    ("   syntax ()
" . 62)
    ("  (import ()
" . 61)
    ("(definterface ~a
" . 60)
    (";;;   Library interface file for module ~a

" . 59)
    (";;; EuLisp system 'youtoo'
" . 58)
    (*clean-ups* . 57)
    (w . 56)
    (mode: . 55)
    (file-name: . 54)
    ("  Writing library interface file ~a" . 53)
    ("~a~a~a" . 52)
    ("~a~alib~a.i" . 51)
    (".c" . 46)
    (".i" . 44)
    (".em" . 43)
    (".i" . 39)
    ("   )
" . 35)
    ("   literals (
" . 34)
    ("  )
" . 32)
    ("   export (
" . 31)
    (anonymous . 29)
   )
   literals (
   )
))
