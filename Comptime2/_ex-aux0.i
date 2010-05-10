;;; EuLisp system 'youtoo'
;;;   Interface file for module _ex-aux0

(definterface _ex-aux0
  (import (level1)
   syntax (macros)
   full-import (symbol stream3 random handler read table table1 vector convert1 format list socket stream2 lock stream1 stream float character compare collect fpi number integer copy convert string callback let-cc dynamic thread event condition bit mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl boot boot1 telos level1)
   export (
    ((name . get-body) (pos . 6) (origin _ex-aux0 . get-body))
    ((name . get-lambda-params) (pos . 7) (origin _ex-aux0 . get-lambda-params))
    ((name . get-top-level-forms) (pos . 8) (origin _ex-aux0 . get-top-level-forms))
    ((name . get-lambda-body) (pos . 5) (origin _ex-aux0 . get-lambda-body))
    ((name . get-directives) (pos . 4) (origin _ex-aux0 . get-directives))
    ((name . get-name) (pos . 3) (origin _ex-aux0 . get-name))
    ((name . get-params) (pos . 2) (origin _ex-aux0 . get-params))
    ((name . get-value) (pos . 9) (origin _ex-aux0 . get-value))
   )
   local-literals (
    (get-params . 45)
    (get-name . 44)
    (get-directives . 43)
    (get-lambda-body . 42)
    (get-body . 41)
    (get-lambda-params . 40)
    (get-top-level-forms . 39)
    (get-value . 38)
    ("body ~a not a list" . 33)
    (cdr . 32)
    ("body ~a not a list" . 30)
    (or . 29)
    (null . 28)
    (cddr . 27)
    (let . 24)
    (if . 23)
    (error . 22)
    ("bad value ~a" . 21)
    (and . 20)
    (eq . 19)
    (quote . 18)
    (setter . 17)
    (car . 16)
    (consp . 15)
    (symbolp . 14)
    (x . 13)
    (cadr . 12)
    (caddr . 10)
   )
   literals (
   )
))
