;;; Copyright 1994-2010 Fraunhofer ISST
;;; Copyright 2010 Henry G. Weller
;;;-----------------------------------------------------------------------------
;;  This file is part of
;;; ---                           EuLisp System 'Eu2C'
;;;-----------------------------------------------------------------------------
;;
;;  Eu2C is free software: you can redistribute it and/or modify it under the
;;  terms of the GNU General Public License version 2 as published by the Free
;;  Software Foundation.
;;
;;  Eu2C is distributed in the hope that it will be useful, but WITHOUT ANY
;;  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
;;  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
;;  details.
;;
;;  You should have received a copy of the GNU General Public License along with
;;  this program.  If not, see <http://www.gnu.org/licenses/>.
;;
;;;-----------------------------------------------------------------------------
;;; Title: Benchmark 'takl'
;;;  Authors: Ingo Mohr
;;;  Maintainer: Henry G. Weller
;;;  Description:
;;    This benchmark was taken from R.P.Gabriel: "Performance and Evaluation of
;;    Lisp-Systems" and adapted to EuLisp.
;;
;;    In this version the function 'shorter?' is realized as a generic function
;;    with two methods specializing on the first argument.
;;;  Notes:
;;    The benchmark is called with 26, 16 and 6 instead of 18, 12 and 6 as in
;;    Gabriel to get times greater than one second on current machines.
;;;  Compilation:
;;    Compile this module with basic system level-0.
;;;  See also:
;;    tak, gtakl and gtakl2
;;;-----------------------------------------------------------------------------
(defmodule takl
  (import (level-0)
   syntax (syntax-0))

(defun listn (n)
  (if (eql n 0)
      ()
    (cons n (listn (- n 1)))))

(deflocal l26 (listn 26))
(deflocal l16 (listn 16))
(deflocal l6 (listn 6))

(defun takl (x y z)
  (if (null? (shorter? y x))
      z
    (takl (takl (cdr x) y z)
          (takl (cdr y) z x)
          (takl (cdr z) x y))))

(defun shorter? (x y)
  (if (null? y )
      ()
    (if  (null? x) t
      (shorter? (cdr x)
                (cdr y))) ))

;;;-----------------------------------------------------------------------------
;;; Run the test
;;;-----------------------------------------------------------------------------

(format "~%(takl l26 l16 l6) => ~a~%" (takl l26 l16 l6))

;;;-----------------------------------------------------------------------------
)  ;; End of module takl
;;;-----------------------------------------------------------------------------
