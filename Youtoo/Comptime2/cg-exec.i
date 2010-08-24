;;; EuLisp system 'youtoo'
;;;   Interface file for module cg-exec

(definterface cg-exec
  (import (cg-exec-word-length i-all i-modify p-env sx-obj sx-node cg-state cg-asm cg-interf i-ffi ex-expr cg-dld)
   syntax (_macros _i-aux0)
   full-import (ex-expr ex-import ex-syntax ex-expose ex-direct cg-dld cg-interf cg-asm cg-bycode cg-bycode1 cg-bycode2 op-peep op-peep-r cg-state sx-node i-ffi p-env sx-obj2 sx-obj1 sx-obj i-modify i-all aux-table level1 telos boot mop-defcl mop-meth mop-gf mop-inspect mop-init mop-class mop-key mop-prim mop-access mop-alloc bit condition event thread dynamic let-cc callback string convert copy integer number fpi collect compare character float stream stream1 lock stream2 socket list format convert1 vector table1 table read handler random stream3 symbol boot1 i-level1 i-param i-notify i-error cg-exec-word-length)
   export (
    ((name . execute) (pos . 4) (origin cg-exec . execute))
    ((name . reset-interactive-module) (pos . 18) (origin cg-exec . reset-interactive-module))
   )
   local-literals (
    (top-level . 82)
    (set-bytevector-pos . 81)
    (run-init-bytevector . 80)
    (compute-bytevector-aux . 79)
    (next-local-index . 78)
    (compute-binding . 77)
    (compute-foreign-function-binding . 76)
    (compute-code-vector . 75)
    (set-up-bindings . 74)
    (compute-bytevector . 73)
    (register-new-local . 72)
    (get-imported-module-or-library . 71)
    (set-up-bytevectors . 70)
    (reset-interactive-module . 69)
    (get-bytevector-pos . 68)
    (compute-static . 67)
    (idle . 63)
    ("  compute-bytevector ~a ~a" . 56)
    ("  set-up-binding ~a ~a" . 53)
    ("bad index ~a of foreign function ~a" . 50)
    ("body of inlined function contains non exported binding ~a" . 49)
    (? . 47)
    ("  compute-binding ~a ~a" . 46)
    (|(method G007952)| . 45)
    (ct-error-value: . 43)
    ("can't compute binding ~a of module ~a" . 42)
    ("compile time error condition: " . 41)
    ("module ~a cannot have more than ~a bindings" . 38)
    ("statically linked module ~a cannot get new bindings" . 37)
    (FF . 35)
    (BINDING . 34)
    (STATIC . 33)
    (CODE-VECTOR . 32)
    (anonymous . 30)
    (*clean-ups* . 29)
    (execute . 28)
    ("initialize-" . 25)
    ((172) . 24)
   )
   literals (
   )
))
