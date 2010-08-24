;;; Copyright (c) 1997 by A Kind & University of Bath. All rights reserved.
;;;-----------------------------------------------------------------------------
;;; ---                         EuLisp System 'youtoo'
;;;-----------------------------------------------------------------------------
;;;  Library: comp (EuLisp to Bytecode Compiler -- EuLysses))
;;;  Authors: Andreas Kind
;;; Description: Parse module (defined in i-param)
;;;-----------------------------------------------------------------------------
;;;  ME: Module expander (import, top-lexical bindings)
;;;  SE: Syntax expander (macros)
;;;  EE: Export expander (export)
;;;  XE: Expression expander (expressions)
;;;-----------------------------------------------------------------------------
(defmodule p-parse
  (syntax (_macros)
   import (i-all p-env ex-module ex-body sx-write sx-node)
   export (interactive-parse))

(defmethod parse-module (sexprs)
  (notify "  Parsing module ~a ..." *tmp-source-file-name*)
  (setq *pass* 'parse)
  (notify0 " .ME/SE")
  (if (and (cons? sexprs)
           (eq (car sexprs) 'defmodule))
      (let ((module (expand-module sexprs)))
        (dynamic-let  ((*actual-module* module))
                      (notify0 " .EE")
                      (expand-export module)
                      (notify0 " .XE/SE")
                      (expand-bodies module)
                      module))
    (ct-serious-warning
     () "bad defmodule syntax in module ~a ..." *tmp-source-file-name*)))

(defun interactive-parse (sexpr)
  (let ((module (dynamic *actual-module*)))
    (setq *pass* 'parse)
    (notify0 " .ME/SE")
    (expand-module sexpr)
    (notify0 " .XE/SE")
    (expand-bodies module)
    module))

;;;-----------------------------------------------------------------------------
)  ;; end of module
;;;-----------------------------------------------------------------------------
