(defmodule tk_utils
  (syntax (macros)
   import (level1 tk_general tk_class tk_commands)
   export (dialog))

(defclass <but-dia> ()
  ((button accessor: bd-button)
   (position accessor: bd-pos)))

(defun dialog (title text bitmap default . list-strings)
  (let* ((toplevel (tk-make-toplevel ()))
         (top  (tk-make-frame toplevel relief: "raised" bd: "1"))
         (bot (tk-make-frame toplevel relief: "raised" bd: "1"))
         (message
          (tk-make-message top width: "3i" text: text font: "-Adobe-Times-Medium-R-Normal-*-180-*"))
         (bitmapWidget ())
         (i 0)
         but-vect)
    ()
    (tk-wm "title" toplevel title)
    (tk-wm "iconname" toplevel "Dialog")
    (tk-unmap-widget ())
    (if bitmap
        (setq bitmapWidget (tk-make-label top bitmap: bitmap))
      ())
    (do (lambda (str)
          (let ((aux (make <but-dia>)))
            ((setter bd-pos) aux i)
            ((setter bd-button) aux
             (tk-make-button bot text: str command: (lambda ()
                                                      (format "buto: ~a\n" (bd-pos aux)))))
            (setq but-vect (cons aux but-vect))
            (setq i (+ i 1))))
        list-strings)
    (tk-pack top side: "top" fill: "both")
    (tk-pack bot side: "bottom" fill: "both")
    (tk-pack message side: "right" expand: "1" fill: "both" padx: "3m" pady: "3m")
    (and bitmapWidget
         (tk-pack bitmapWidget side: "left" padx: "3m" pady: "3m"))

    (do (lambda (b)
          (tk-pack (bd-button b) side: "right" expand: "1" padx: "3m" pady: "3m" ipadx: "2m" ipady: "1m"))
        but-vect)
    (tk-focus toplevel)
    (tk-grab-set toplevel)
    ))

;;;-----------------------------------------------------------------------------
)  ;; end of module
;;;-----------------------------------------------------------------------------
