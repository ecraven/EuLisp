;;; -----------------------------------------------------------------------
;;; ---                 EuLisp System 'youtoo'
;;; -----------------------------------------------------------------------
;;;  Library: pipe
;;;  Description: print the output from "ls -l"
;;; -----------------------------------------------------------------------

(defmodule test2
    (syntax (macros)
     import (level1 pipe))

  (let ((x (make <pipe> process: "ls -l"))
        (str ""))
    (while
        (setq str (read-line x nil nil))
      (prin str)))

  )  ;; End of module test2

;;; -----------------------------------------------------------------------