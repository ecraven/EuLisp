;;; EuLisp system 'youtoo'
;;;   Interface file for module table1

(definterface table1
  (import (telos convert copy collect compare list fpi string vector)
   syntax (_telos0)
   full-import (mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl boot boot1 telos condition event thread dynamic let-cc convert copy compare callback collect fpi integer number list string vector)
   export (
    ((name . hash-table?) (pos . 13) (origin table1 . hash-table?))
    ((name . *min-table-entries*) (pos) (origin table1 . *min-table-entries*) (class . constant) (value 16))
    ((name . table-keys) (pos . 2) (origin table1 . table-keys))
    ((name . table-size) (pos . 5) (origin table1 . table-size) (inline (G007359 (static-ref1) (binding-ref ? <table>) (primitive-relative-ref))) (setter (G007371 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <table>) (set-primitive-relative-ref) (nobble 2))))
    ((name . <hash-table>) (pos . 9) (origin table1 . <hash-table>) (class . constant))
    ((name . table-threshold) (pos . 12) (origin table1 . table-threshold) (inline (G007357 (static-ref0) (binding-ref ? <table>) (primitive-relative-ref))) (setter (G007369 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <table>) (set-primitive-relative-ref) (nobble 2))))
    ((name . table-entries) (pos . 15) (origin table1 . table-entries) (inline (G007363 (static-fpi-ref 3) (binding-ref ? <table>) (primitive-relative-ref))) (setter (G007373 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (binding-ref ? <table>) (set-primitive-relative-ref) (nobble 2))))
    ((name . table-comparator) (pos . 8) (origin table1 . table-comparator) (inline (G007367 (static-ref1) (binding-ref ? <hash-table>) (primitive-relative-ref))) (setter (G007377 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <hash-table>) (set-primitive-relative-ref) (nobble 2))))
    ((name . table?) (pos . 7) (origin table1 . table?))
    ((name . *table-fill-factor*) (pos) (origin table1 . *table-fill-factor*) (class . constant) (value 2))
    ((name . table-hash-function) (pos . 11) (origin table1 . table-hash-function) (inline (G007365 (static-ref0) (binding-ref ? <hash-table>) (primitive-relative-ref))) (setter (G007375 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <hash-table>) (set-primitive-relative-ref) (nobble 2))))
    ((name . table-fill-value) (pos . 17) (origin table1 . table-fill-value) (inline (G007361 (static-ref2) (binding-ref ? <table>) (primitive-relative-ref))))
    ((name . table-values) (pos . 16) (origin table1 . table-values))
    ((name . simple-hash-table?) (pos . 6) (origin table1 . simple-hash-table?))
    ((name . <table>) (pos . 4) (origin table1 . <table>) (class . constant))
    ((name . <simple-hash-table>) (pos . 14) (origin table1 . <simple-hash-table>) (class . constant))
    ((name . clear-table) (pos . 10) (origin table1 . clear-table))
   )
   local-literals (
    (top-level . 101)
    (table-size . 100)
    (table-comparator . 99)
    (table-hash-function . 98)
    (table-threshold . 97)
    (table-entries . 96)
    (table-fill-value . 95)
    (|(method table-keys)| . 87)
    (|(method table-values)| . 86)
    (|(method size)| . 85)
    (|(method reset)| . 84)
    (|(method clear-table)| . 83)
    (|(method initialize)| . 82)
    (|(method hash-table?)| . 81)
    (|(setter table-comparator)| . 80)
    (|(setter table-hash-function)| . 79)
    (|(method simple-hash-table?)| . 78)
    (simple-hash-table . 77)
    (|(method table?)| . 76)
    (|(setter table-entries)| . 75)
    (|(setter table-size)| . 74)
    (|(setter table-threshold)| . 73)
    (table-keys . 72)
    (table-values . 71)
    (clear-table . 70)
    (hash-table? . 69)
    (simple-hash-table? . 68)
    (table? . 67)
    ((hash-function: comparator:) . 66)
    (hash-table . 65)
    (hash-function . 64)
    (comparator . 63)
    ((fill-value:) . 62)
    (direct-keywords: . 61)
    (direct-slots: . 60)
    (direct-superclasses: . 59)
    (table . 58)
    (threshold . 57)
    (default: . 56)
    (size . 55)
    (fill-value: . 54)
    (keyword: . 53)
    (fill-value . 52)
    (entries . 51)
    (name: . 50)
    ("table initialization of ~a without hash function" . 32)
    ((comparator: hash-function:) . 31)
    (hash-function: . 30)
    (comparator: . 29)
    (anonymous . 22)
    ("keys of table ~a not accessable" . 19)
   )
   literals (
   )
))
