;;; Copyright 1994 Russell Bradford
;;; Copyright 2010 Henry G. Weller
;;;-----------------------------------------------------------------------------
;;  This file is part of
;;; ---                           EuLisp System 'EuXLisp'
;;;-----------------------------------------------------------------------------
;;
;;  EuXLisp is free software: you can redistribute it and/or modify it under the
;;  terms of the GNU General Public License version 2 as published by the Free
;;  Software Foundation.
;;
;;  EuXLisp is distributed in the hope that it will be useful, but WITHOUT ANY
;;  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
;;  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
;;  details.
;;
;;  You should have received a copy of the GNU General Public License along with
;;  this program.  If not, see <http://www.gnu.org/licenses/>.
;;
;;;-----------------------------------------------------------------------------
;;; Title: EuLisp Level-0 formatted-io module
;;;  Description:
;;    formatted output
;;;  Maintainer: Henry G. Weller
;;;-----------------------------------------------------------------------------

(defmodule formatted-io
  (import (root
           condition
           thread
           setter
           convert)
   export (sformat
           format
           fmt))

(deflocal escape-char #\~)

(defcondition <stream-error> <error>
  ()
  abstract?: t)

(defcondition <format-error> <stream-error> ())

(defun format-error (msg val)
  (error <format-error> msg value: val))

(defun sformat (stream string . args)
  (%print (format-loop
           string args 0 (string-size string) ()) stream)
  stream)

(defun format (string . args)
  (%print (format-loop
           string args 0 (string-size string) ()))
  stdout)

(defun fmt (string . args)
  (format-loop
   string args 0 (string-size string) ()))

(defun format-loop (string args n len result)
  (if (%< n len)
      (let ((char (string-ref string n)))
        (if (eql char escape-char)
            (format-escape string args (%+ n 1) len result)
          (format-loop string args (%+ n 1) len
                       (cons char result))))
    (list->string (reverse-list result))))

(defun format-escape (string args n len result)
  (if (%< n len)
      (let* ((char (string-ref string n))
             (op (table-ref escape-table char)))
        (if (null? op)
            (format-error "unknown escape in format"
                          (list->string (list #\~ char)))
          (op char string args (%+ n 1) len result)))
    (format-error "misplaced escape at end of format string" string)))

(deflocal escape-table (make-table eql))
(deflocal escape-arg-table (make-table eql))

(defun check-args (args string)
  (if (atom? args)
      (format-error "not enough args for format" string)
    (car args)))

; a prin arg
(defun escape-a (char string args n len result)
  (check-args args string)
  (format-loop string (cdr args) n len
               (append (prin-to-string (car args)) result)))

((setter table-ref) escape-table #\a escape-a)

; b binary integer
(defun binary-int (char string args n len result)
  (check-args args string)
  (format-loop string (cdr args) n len
               (append (radix (car args) 2) result)))

((setter table-ref) escape-table #\b binary-int)

; c character
(defun escape-c (char string args n len result)
  (let ((ch (check-args args string)))
    (if (not (char? ch))
        (format-error "not a character for ~c in format" ch)
      (escape-s char string args n len result))))

((setter table-ref) escape-table #\c escape-c)

; d decimal integer
(defun decimal-int (char string args n len result)
  (check-args args string)
  (format-loop string (cdr args) n len
               (append (radix (car args) 10) result)))

((setter table-ref) escape-table #\d decimal-int)

; e fixed floating point
; f exponential floating point
; g general floating point
(defun escape-float (char string args n len result)
  (escape-arg-float char "" string args n len result))

((setter table-ref) escape-table #\e escape-float)
((setter table-ref) escape-table #\f escape-float)
((setter table-ref) escape-table #\g escape-float)

(defun escape-arg-float (char arg string args n len result)
  (check-args args string)
  (format-loop string (cdr args) n len
               (append (reverse-list
                        (string->list (xsprintf arg char (car args))))
                       result)))

((setter table-ref) escape-arg-table #\e escape-arg-float)
((setter table-ref) escape-arg-table #\f escape-arg-float)
((setter table-ref) escape-arg-table #\g escape-arg-float)

; o octal
(defun octal-int (char string args n len result)
  (check-args args string)
  (format-loop string (cdr args) n len
               (append (radix (car args) 8) result)))

((setter table-ref) escape-table #\o octal-int)

; r radix
(defun escape-r (char string args n len result)
  (format-error "missing count for radix in format" string))

((setter table-ref) escape-table #\r escape-r)
((setter table-ref) escape-table #\R escape-r)

(defun escape-int-r (char arg string args n len result)
  (let ((count (string->number arg)))
    (if (not (integer? count))
        (format-error "bad base for ~r in format" arg)
      (progn
        (check-args args string)
        (format-loop string (cdr args) n len
                     (append (radix (car args) count)
                             result))))))

((setter table-ref) escape-arg-table #\r escape-int-r)

; s write arg
(defun escape-s (char string args n len result)
  (check-args args string)
  (format-loop string (cdr args) n len
               (append (write-to-string (car args)) result)))

((setter table-ref) escape-table #\s escape-s)

; t tab
(defun escape-tab (char string args n len result)
  (escape-int-tab char "1" string args n len result))

((setter table-ref) escape-table #\t escape-tab)

(defun escape-int-tab (char arg string args n len result)
  (let ((count (string->number arg)))
    (if (not (integer? count))
        (format-error "bad count for ~t in format" arg)
      (format-loop string args n len
                   (n-tabs count result)))))

(defun n-tabs (count result)
  (if (%> count 0)
      (n-tabs (%- count 1) (cons #\\t result))
    result))

((setter table-ref) escape-arg-table #\t escape-int-tab)

; x hexadecimal integer
(defun hex-int (char string args n len result)
  (check-args args string)
  (format-loop string (cdr args) n len
               (append (radix (car args) 16) result)))

((setter table-ref) escape-table #\x hex-int)

; % newline
(defun escape-% (char string args n len result)
  (format-loop string args n len
               (cons #\\n result)))

((setter table-ref) escape-table #\% escape-%)

; & conditional newline
((setter table-ref) escape-table #\& escape-%)

; | newpage
(defun escape-pipe (char string args n len result)
  (format-loop string args n len
               (cons #\\f result)))

((setter table-ref) escape-table #\| escape-pipe)

; escape
(defun escape-escape (char string args n len result)
  (format-loop string args n len
               (cons escape-char result)))

((setter table-ref) escape-table escape-char escape-escape)

(defun escape-arg (char string args n len result)
  (let* ((end (get-arg-end string (%- n 1) len))
         (arg (substring string (%- n 1) end))
         (char (string-ref string end))
         (op (table-ref escape-arg-table char)))
    (if (null? op)
        (format-error "unknown escape in format" char)
      (op char arg string args (%+ end 1) len result))))

(defun check-string-ref (string n len)
  (if (%= n len)
      (format-error "missing op in format" string)
    (string-ref string n)))

(defun get-arg-end (string n len)
  (letfuns ((loop1 (ind)
                   (let ((ch (check-string-ref string ind len)))
                     (cond ((eql ch #\.)
                            (loop2 (%+ ind 1)))
                           ((memv ch '(#\0 #\1 #\2 #\3 #\4 #\5 #\6 #\7 #\8 #\9))
                            (loop1 (%+ ind 1)))
                           (t ind))))
            (loop2 (ind)
                   (let ((ch (check-string-ref string ind len)))
                     (if (memv ch '(#\0 #\1 #\2 #\3 #\4 #\5 #\6 #\7 #\8 #\9))
                         (loop2 (%+ ind 1))
                       ind))))
    (loop1 n)))

(defun char->int (char)
  (cdr (assv char
             '((#\1 . 1) (#\2 . 2) (#\3 . 3) (#\4 . 4) (#\5 . 5)
               (#\6 . 6) (#\7 . 7) (#\8 . 8) (#\9 . 9) (#\0 . 0)))))

((setter table-ref) escape-table #\0 escape-arg)
((setter table-ref) escape-table #\1 escape-arg)
((setter table-ref) escape-table #\2 escape-arg)
((setter table-ref) escape-table #\3 escape-arg)
((setter table-ref) escape-table #\4 escape-arg)
((setter table-ref) escape-table #\5 escape-arg)
((setter table-ref) escape-table #\6 escape-arg)
((setter table-ref) escape-table #\7 escape-arg)
((setter table-ref) escape-table #\8 escape-arg)
((setter table-ref) escape-table #\9 escape-arg)
((setter table-ref) escape-table #\. escape-arg)

(defun radix (n base)
  (cond ((or (not (integer? base)) (%< base 1) (%> base 36))
         (format-error "bad base in format" base))
        ((integer? n)
         (cond ((%= n 0) (list #\0))
               ((%< n 0) (append (convert-radix (%- n) base) (list #\-)))
               (t (convert-radix n base))))
        (format-error "expecting an integer in format" n)))

(defun convert-radix (n base)
  (if (%= n 0)
      ()
    (cons (int->char (remainder n base))
          (convert-radix (quotient n base) base))))

(defun int->char (n)
  (string-ref "0123456789abcdefghijlkmnopqrstuvwxyz" n))

(defun prin-to-string (obj)
  (output-to-string %print obj))

(defun write-to-string (obj)
  (output-to-string write obj))

; cheating
(defun output-to-string (fn obj)
  (let ((stream (tmpfile)))
    (fn obj stream)
    (set-file-position stream 0 0)     ; seek-set
    (let ((s (read-string stream '())))
      (close-stream stream)
      s)))

(defun read-string (stream sofar)
  (let ((ch (read-char stream)))
    (if (eof-object? ch)
        sofar
      (read-string stream (cons ch sofar)))))

;;;-----------------------------------------------------------------------------
)  ;; End of module formatted-io
;;;-----------------------------------------------------------------------------
