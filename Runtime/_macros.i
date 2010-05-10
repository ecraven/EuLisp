;;; EuLisp system 'youtoo'
;;;   Interface file for module _macros

(definterface _macros
  (import (level1 _telos0 _stream0)
   syntax (_boot0)
   full-import (symbol stream3 random handler read table table1 vector convert1 format list socket stream2 lock stream1 stream float character compare collect fpi number integer copy convert string callback let-cc dynamic thread event condition bit mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl boot boot1 telos level1 _mop-defcl0 _mop-meth0 _mop-gf0 _boot0 _telos0 _stream0)
   export (
    ((name . defgeneric) (pos . 2) (origin _mop-gf0 . defgeneric))
    ((name . dynamic-let) (pos . 11) (origin _macros . dynamic-let))
    ((name . defmethod-sig) (pos . 8) (origin _mop-meth0 . defmethod-sig))
    ((name . dynamic-setq) (pos . 14) (origin _macros . dynamic-setq))
    ((name . defmethod-domain) (pos . 4) (origin _mop-meth0 . defmethod-domain))
    ((name . match-let) (pos . 2) (origin _stream0 . match-let))
    ((name . with-source) (pos . 5) (origin _stream0 . with-source))
    ((name . butlast) (pos . 12) (origin _macros . butlast))
    ((name . dynamic) (pos . 18) (origin _macros . dynamic))
    ((name . method-function-lambda) (pos . 6) (origin _mop-meth0 . method-function-lambda))
    ((name . last) (pos . 4) (origin _macros . last))
    ((name . return-from) (pos . 13) (origin _macros . return-from))
    ((name . not) (pos . 9) (origin _macros . not))
    ((name . defmethod-body) (pos . 7) (origin _mop-meth0 . defmethod-body))
    ((name . get-global-register) (pos . 5) (origin _boot0 . get-global-register))
    ((name . unless) (pos . 7) (origin _boot0 . unless))
    ((name . set-global-register) (pos . 6) (origin _boot0 . set-global-register))
    ((name . named-method-function-lambda) (pos . 10) (origin _mop-meth0 . named-method-function-lambda))
    ((name . with-output-file) (pos . 3) (origin _stream0 . with-output-file))
    ((name . block) (pos . 5) (origin _macros . block))
    ((name . or) (pos . 8) (origin _boot0 . or))
    ((name . catch) (pos . 19) (origin _macros . catch))
    ((name . throw) (pos . 17) (origin _macros . throw))
    ((name . with-input-file) (pos . 8) (origin _stream0 . with-input-file))
    ((name . with-handler) (pos . 2) (origin _macros . with-handler))
    ((name . generic-lambda) (pos . 5) (origin _mop-gf0 . generic-lambda))
    ((name . for) (pos . 8) (origin _macros . for))
    ((name . defmethod) (pos . 5) (origin _mop-meth0 . defmethod))
    ((name . cond) (pos . 3) (origin _boot0 . cond))
    ((name . method-lambda) (pos . 3) (origin _mop-meth0 . method-lambda))
    ((name . defclass) (pos . 11) (origin _mop-defcl0 . defclass))
    ((name . let/cc) (pos . 3) (origin _macros . let/cc))
    ((name . defprimclass) (pos . 5) (origin _mop-defcl0 . defprimclass))
    ((name . time) (pos . 16) (origin _macros . time))
    ((name . defmethod-args) (pos . 2) (origin _mop-meth0 . defmethod-args))
    ((name . unwind-protect) (pos . 7) (origin _macros . unwind-protect))
    ((name . with-input-file-of-path) (pos . 4) (origin _stream0 . with-input-file-of-path))
    ((name . and) (pos . 4) (origin _boot0 . and))
    ((name . when) (pos . 2) (origin _boot0 . when))
    ((name . with-lock) (pos . 7) (origin _stream0 . with-lock))
    ((name . with-sink) (pos . 6) (origin _stream0 . with-sink))
    ((name . defcondition) (pos . 15) (origin _macros . defcondition))
    ((name . defglobal) (pos . 6) (origin _macros . defglobal))
    ((name . while) (pos . 10) (origin _macros . while))
    ((name . defmethod-keywords) (pos . 9) (origin _mop-meth0 . defmethod-keywords))
   )
   local-literals (
    (with-handler . 89)
    (last . 88)
    (block . 87)
    (defglobal . 86)
    (for . 85)
    (not . 84)
    (butlast . 83)
    (return-from . 82)
    (dynamic-setq . 81)
    (defcondition . 80)
    (time . 79)
    (throw . 78)
    (catch . 77)
    (dynamic-let . 75)
    (format . 71)
    ("real: ~a
user: ~a
system: ~a
" . 70)
    (vector-ref . 69)
    (time-stop . 68)
    (time-start . 67)
    ("time" . 66)
    ("time" . 65)
    (defclass . 63)
    (<condition> . 62)
    (setter . 60)
    (dynamic-variable-ref . 59)
    (reverse-list . 56)
    (unwind-protect . 54)
    (anonymous . 53)
    (break . 50)
    (labels . 49)
    (when . 48)
    (null . 46)
    (while . 44)
    (cons . 42)
    (dynamic . 41)
    (lambda . 40)
    (pop-dynamic-variables . 39)
    (*clean-ups* . 38)
    (push-dynamic-variable . 36)
    (quote . 35)
    (let/cc . 33)
    (list-drop . 31)
    (- . 30)
    (list-size . 29)
    (call/ep . 27)
    (named-lambda . 26)
    (call/ep-lambda . 25)
    (let . 23)
    (pop-error-handlers . 22)
    (progn . 21)
    (push-error-handler . 20)
   )
   literals (
   )
))
