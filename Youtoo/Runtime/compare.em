;;; Copyright 1997 A. Kind & University of Bath
;;; Copyright 2010 Henry G. Weller
;;;-----------------------------------------------------------------------------
;;  This file is part of
;;; ---                         EuLisp System 'Youtoo'
;;;-----------------------------------------------------------------------------
;;
;;  Youtoo is free software: you can redistribute it and/or modify it under the
;;  terms of the GNU General Public License version 2 as published by the Free
;;  Software Foundation.
;;
;;  Youtoo is distributed in the hope that it will be useful, but WITHOUT ANY
;;  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
;;  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
;;  details.
;;
;;  You should have received a copy of the GNU General Public License along with
;;  this program.  If not, see <http://www.gnu.org/licenses/>.
;;
;;;-----------------------------------------------------------------------------
;;; Title: comparison
;;;  Library: level-1
;;;  Authors: Andreas Kind, Julian Padget
;;;  Maintainer: Henry G. Weller
;;;-----------------------------------------------------------------------------

(defmodule compare
  (syntax (_telos0)
   import (telos
           callback)
   export (eq
           eql
           =
           !=
           binary=
           <
           <=
           binary<
           >
           >=
           max
           min))

;;;-----------------------------------------------------------------------------
;;; = and binary=
;;;-----------------------------------------------------------------------------
(defun = (arg . args)
  (primitive-print "=")
  (labels
   ((loop (l)
          (if (null? l) t
            (if (null? (binary= arg (car l))) ()
              (loop (cdr l))))))
   (loop args)))

(defgeneric binary= (x y))
(defmethod binary= (x y)
  (eql x y))

;;;-----------------------------------------------------------------------------
;;; !=
;;;-----------------------------------------------------------------------------
(defun != (arg . args)
  (null? (apply = arg args)))

;;;-----------------------------------------------------------------------------
;;; < binary< and <=
;;;-----------------------------------------------------------------------------
(defun < (arg . args)
  (labels
   ((loop (l)
          (let ((rest (cdr l)))
            (if (null? rest) t
              (if (null? (binary< (car l) (car rest))) ()
                (loop rest))))))
   (loop (cons arg args))))

(defun <= (arg . args)
  (labels
   ((loop (l)
          (let ((rest (cdr l)))
            (if (null? rest) t
              (if (let ((arg1 (car l))
                        (arg2 (car rest)))
                    (and (null? (binary< arg1 arg2))
                         (null? (binary= arg1 arg2))))
                  ()
                (loop rest))))))
   (loop (cons arg args))))

(defgeneric binary< (x y))

;;;-----------------------------------------------------------------------------
;;; > and >=
;;;-----------------------------------------------------------------------------
(defun > args (apply < (reverse-list args)))
(defun >= args (apply <= (reverse-list args)))

;;;-----------------------------------------------------------------------------
;;; Install callback traps
;;;-----------------------------------------------------------------------------
(install-callback (fpi-binary+ first-arithmetic-cb 5) binary=)
(install-callback (fpi-binary+ first-arithmetic-cb 6) binary<)

;;;-----------------------------------------------------------------------------
;;; Max and Min
;;;-----------------------------------------------------------------------------
(defun max (arg . args)
  (labels
   ((loop (l res)
          (if (null? l) res
            (let ((x (car l))
                  (ll (cdr l)))
              (if (binary< res x)
                  (loop ll x)
                (loop ll res))))))
   (loop args arg)))

(defun min (arg . args)
  (labels
   ((loop (l res)
          (if (null? l) res
            (let ((x (car l))
                  (ll (cdr l)))
              (if (binary< res x)
                  (loop ll res)
                (loop ll x))))))
   (loop args arg)))

;;;-----------------------------------------------------------------------------
)  ;; End of module compare
;;;-----------------------------------------------------------------------------
