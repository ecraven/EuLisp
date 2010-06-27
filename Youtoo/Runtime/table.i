;;; EuLisp system 'youtoo'
;;;   Interface file for module table

(definterface table
  (import (telos convert copy collect compare list fpi string vector table1)
   syntax (_telos0)
   full-import (mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl boot boot1 telos condition event thread dynamic let-cc convert copy compare callback collect fpi integer number list string vector table1)
   export (
    ((name . hash-table?) (pos . 13) (origin table1 . hash-table?))
    ((name . *min-table-entries*) (pos) (origin table1 . *min-table-entries*) (class . constant) (value 16))
    ((name . table-keys) (pos . 2) (origin table1 . table-keys))
    ((name . table-size) (pos . 5) (origin table1 . table-size) (inline (G007359 (static-ref1) (binding-ref ? <table>) (primitive-relative-ref))) (setter (G007371 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <table>) (set-primitive-relative-ref) (nobble 2))))
    ((name . <hash-table>) (pos . 9) (origin table1 . <hash-table>) (class . constant))
    ((name . anyp1-table) (pos . 8) (origin table . anyp1-table))
    ((name . table-threshold) (pos . 12) (origin table1 . table-threshold) (inline (G007357 (static-ref0) (binding-ref ? <table>) (primitive-relative-ref))) (setter (G007369 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <table>) (set-primitive-relative-ref) (nobble 2))))
    ((name . table-entries) (pos . 15) (origin table1 . table-entries) (inline (G007363 (static-fpi-ref 3) (binding-ref ? <table>) (primitive-relative-ref))) (setter (G007373 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (binding-ref ? <table>) (set-primitive-relative-ref) (nobble 2))))
    ((name . table-comparator) (pos . 8) (origin table1 . table-comparator) (inline (G007367 (static-ref1) (binding-ref ? <hash-table>) (primitive-relative-ref))) (setter (G007377 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <hash-table>) (set-primitive-relative-ref) (nobble 2))))
    ((name . table?) (pos . 7) (origin table1 . table?))
    ((name . *table-fill-factor*) (pos) (origin table1 . *table-fill-factor*) (class . constant) (value 2))
    ((name . table-hash-function) (pos . 11) (origin table1 . table-hash-function) (inline (G007365 (static-ref0) (binding-ref ? <hash-table>) (primitive-relative-ref))) (setter (G007375 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <hash-table>) (set-primitive-relative-ref) (nobble 2))))
    ((name . table-fill-value) (pos . 17) (origin table1 . table-fill-value) (inline (G007361 (static-ref2) (binding-ref ? <table>) (primitive-relative-ref))))
    ((name . table-values) (pos . 16) (origin table1 . table-values))
    ((name . simple-hash-table?) (pos . 6) (origin table1 . simple-hash-table?))
    ((name . table-ref) (pos . 5) (origin table . table-ref))
    ((name . <table>) (pos . 4) (origin table1 . <table>) (class . constant))
    ((name . <simple-hash-table>) (pos . 14) (origin table1 . <simple-hash-table>) (class . constant))
    ((name . clear-table) (pos . 10) (origin table1 . clear-table))
    ((name . table-empty?) (pos . 4) (origin table . table-empty?))
    ((name . do1-table) (pos . 9) (origin table . do1-table))
    ((name . map1-table) (pos . 6) (origin table . map1-table))
    ((name . all1-table?) (pos . 3) (origin table . all1-table?))
   )
   local-literals (
    (top-level . 83)
    (accumulate-table . 82)
    (all1-table? . 81)
    (table-empty? . 80)
    (map1-table . 79)
    (table-rehash . 78)
    (anyp1-table . 77)
    (do1-table . 76)
    (accumulate1-table . 75)
    ((converter <table>) . 59)
    (<table> . 58)
    (converter . 57)
    (|(method accumulate1)| . 56)
    (|(method accumulate)| . 55)
    (|(method member)| . 54)
    (|(method all?)| . 53)
    (|(method any?)| . 52)
    (|(method map)| . 51)
    (|(method do)| . 50)
    (|(method emptyp)| . 49)
    (|(method (setter table-ref))| . 48)
    ((setter table-ref) . 47)
    (setter . 46)
    (|(method (setter element))| . 45)
    (|(method table-ref)| . 44)
    (|(method element)| . 43)
    (table-ref . 42)
    ("" . 38)
    ("" . 31)
    ("do on multiple tables not yet implemented" . 25)
    ("map on multiple tables not yet implemented" . 23)
    ("any? on multiple tables not yet implemented" . 21)
    ("all? on multiple tables not yet implemented" . 19)
    (anonymous . 17)
   )
   literals (
   )
))
