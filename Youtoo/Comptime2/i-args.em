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
;;;  Library: comp (EuLisp to Bytecode Compiler -- EuLysses)
;;;  Authors: Andreas Kind, Keith Playford
;;; Description: parse arguments
;;;-----------------------------------------------------------------------------
(defmodule i-args
  (syntax (_macros _i-aux0)
   import (i-all)
   export (parse-args print-version print-params print-help))

;;;-----------------------------------------------------------------------------
;;; Parse the arguments of the compiler invocation
;;;-----------------------------------------------------------------------------
(defun parse-args (argv)
  (let ((n (vector-size argv)))
    (labels
     ((loop (i)
            (with-ct-handler (fmt "bad parameter ~a" argv) argv
                             (if (= i n) t
                               (let ((arg (vector-ref argv i)))
                                 (cond
                                   ((string-equal arg "-help")
                                    (print-help)
                                    (ct-exit))
                                   ((string-equal arg "-version")
                                    (print-version)
                                    (ct-exit))
                                   ((string-equal arg "-params")
                                    (print-params)
                                    (ct-exit))
                                   ((string-equal arg "-load_path")
                                    (setq *load-path*
                                          (cons (vector-ref argv (+ i 1)) *load-path*))
                                    (loop (+ i 2)))
                                   ((string-equal arg "-o")
                                    (setq *dest-file-name*
                                          (make-symbol (vector-ref argv (+ i 1))))
                                    (loop (+ i 2)))
                                   ((string-equal arg "-od")
                                    (setq *object-dir*
                                          (make-symbol (vector-ref argv (+ i 1))))
                                    (loop (+ i 2)))
                                   ((string-equal arg "--script")
                                    (setq *script-file* (vector-ref argv (+ i 1)))
                                    (setq *script* t)
                                    (setq *verbose* ())
                                    (setq *silent* t)
                                    (setq *interpreter* t)
                                    (loop (+ i 2)))
                                   ((string-equal arg "-silent")
                                    (setq *silent* t)
                                    (setq *verbose* ())
                                    (setq *C-cc-flags* (string-append *C-cc-flags* " -w"))
                                    (loop (+ i 1)))
                                   ((string-equal arg "-verbose")
                                    (setq *silent* ())
                                    (setq *verbose* t)
                                    (setq *C-cc-flags* (string-append *C-cc-flags* " -v"))
                                    (loop (+ i 1)))
                                   ((string-equal arg "-no_warnings")
                                    (setq *warnings* ())
                                    (loop (+ i 1)))
                                   ((string-equal arg "-no_inline")
                                    (setq *inline-level* 0)
                                    (loop (+ i 1)))
                                   ((string-equal arg "-no_peephole")
                                    (setq *peephole* ())
                                    (loop (+ i 1)))
                                   ((string-equal arg "-no_errors")
                                    (setq *errors* ())
                                    (loop (+ i 1)))
                                   ((string-equal arg "-i")
                                    (setq *interpreter* t)
                                    (setq *silent* t)
                                    (setq *verbose* ())
                                    (loop (+ i 1)))
                                   ((string-equal arg "-cc")
                                    (setq *C-cc* (vector-ref argv (+ i 1)))
                                    (loop (+ i 2)))
                                   ((string-equal arg "-ld")
                                    (setq *C-ld* (vector-ref argv (+ i 1)))
                                    (loop (+ i 2)))
                                   ((string-equal arg "-cflags")
                                    (setq *C-cc-flags*
                                          (string-append
                                           (string-append *C-cc-flags* " ")
                                           (vector-ref argv (+ i 1))))
                                    (if (eq (string-ref (vector-ref argv (+ i 2)) 0) #\-)
                                        ()
                                      (setq *C-cc-flags*
                                            (string-append
                                             (string-append *C-cc-flags* " ")
                                             (vector-ref argv (+ i 2)))))
                                    (loop (+ i 2)))
                                   ((string-equal arg "-static")
                                    (let ((flag
                                           (cond
                                             ((string-equal *C-cc* "gcc") " -static")
                                             ((string-equal *ostype* "SUNOS5") " -dn")
                                             ((string-equal *ostype* "IRIX") " -non_shared")
                                             (t " -static"))))
                                      (setq *C-cc-flags* (string-append *C-cc-flags* flag))
                                      (loop (+ i 1))))
                                   ((string-equal arg "-no_else")
                                    (setq *no-else* t)
                                    (loop (+ i 1)))
                                   ((string-equal arg "-redefine")
                                    (setq *redefine-imported-bindings* t)
                                    (loop (+ i 1)))
                                   ((string-equal arg "-g")
                                    (setq *C-cc-flags* (string-append *C-cc-flags* " -g"))
                                    (setq *strip-stand-alone* ())
                                    (setq *debug* t)
                                    (loop (+ i 1)))
                                   ((string-equal arg "-ar_cmd")
                                    (setq *C-ar* (vector-ref argv (+ i 1)))
                                    (loop (+ i 2)))
                                   ((string-equal arg "-ranlib_cmd")
                                    (setq *C-ranlib* (vector-ref argv (+ i 1)))
                                    (loop (+ i 2)))
                                   ((string-equal arg "-l")
                                    (setq *linked-C-libraries*
                                          (cons (make-symbol (vector-ref argv (+ i 1)))
                                                *linked-C-libraries*))
                                    (loop (+ i 2)))
                                   ((string-equal arg "-L")
                                    (setq *C-library-load-path*
                                          (cons (vector-ref argv (+ i 1))
                                                *C-library-load-path*))
                                    (loop (+ i 2)))
                                   ((string-equal arg "-fff")
                                    (setq *linked-C-ff-files*
                                          (cons (make-symbol (vector-ref argv (+ i 1)))
                                                *linked-C-ff-files*))
                                    (loop (+ i 2)))
                                   ((string-equal arg "-ffl")
                                    (setq *linked-C-ff-libraries*
                                          (cons (make-symbol (vector-ref argv (+ i 1)))
                                                *linked-C-ff-libraries*))
                                    (loop (+ i 2)))
                                   ((string-equal arg "-stop_after")
                                    (stop-after-pass (make-symbol (vector-ref argv (+ i 1))))
                                    (loop (+ i 2)))
                                   ((string-equal arg "-c")
                                    (setq *create-C-module* t)
                                    (setq *stand-alone* ())
                                    (loop (+ i 1)))
                                   ((string-equal arg "-stand_alone")
                                    (setq *stand-alone* t)
                                    (loop (+ i 1)))
                                   ((string-equal arg "-ar")
                                    (setq *create-C-library* t)
                                    (setq *stand-alone* ())
                                    (loop (+ i 1)))
                                   ((string-equal arg "-recompile")
                                    (setq *recompile* t)
                                    (setq *no-recompile* ())
                                    (loop (+ i 1)))
                                   ((string-equal arg "-no_recompile")
                                    (setq *no-recompile* t)
                                    (setq *recompile* ())
                                    (loop (+ i 1)))
                                   ((string-equal arg "-no_gc")
                                    (setq *no-gc* t)
                                    (loop (+ i 1)))
                                   ((string-equal arg "-no_ct_handlers")
                                    (setq *no-ct-handlers* t)
                                    (loop (+ i 1)))
                                   (t
                                    (if (eq (string-ref arg 0) #\-)
                                        (progn
                                          (ct-serious-warning () "bad parameter ~a" arg)
                                          (loop (+ i 1)))
                                      (let* ((n (string-size arg))
                                             (name
                                              (if (and (eql (string-ref arg (- n 3)) #\.)
                                                       (eql (string-ref arg (- n 2)) #\e)
                                                       (eql (string-ref arg (- n 1)) #\m))
                                                  (make <symbol> name: (substring arg 0 (- n 3)))
                                                (make <symbol> name: arg))))
                                        (setq *source-file-names* (cons name *source-file-names*))
                                        (loop (+ i 1)))))))))))
     (notify0 "Parse arguments ...")
     (if (= n 1)
         (progn
           (setq *interpreter* t)
           (setq *silent* t)
           (setq *verbose* ()))
       (loop 1)))))

;;;-----------------------------------------------------------------------------
;;; Print main parameters
;;;-----------------------------------------------------------------------------
(defun print-params ()
  (print nl)
  (print "PARAMETER SETTINGS:")
  (print-param "*silent*" *silent*)
  (print-param "*verbose*" *verbose*)
  (print-param "*warnings*" *warnings*)
  (print-param "*errors*" *errors*)
  (print-param "*load-path*" *load-path*)
  (print-param "*C-library-load-path*" *C-library-load-path*)
  (print-param "*eulysses-dir*" *eulysses-dir*)
  (print-param "*create-C-module*" *create-C-module*)
  (print-param "*create-C-library*" *create-C-library*)
  (print-param "*stand-alone*" *stand-alone*)
  (print-param "*C-cc*" *C-cc*)
  (print-param "*C-ld*" *C-ld*)
  (print-param "*C-cc-flags*" *C-cc-flags*)
  (print-param "*C-ar*" *C-ar*)
  (print-param "*C-ranlib*" *C-ranlib*)
  (print-param "*no-ct-handlers*" *no-ct-handlers*)
  (print-param "*inline-level*" *inline-level*)
  (print-param "*recompile*" *recompile*)
  (flush))

(defun print-param (name value)
  (format "  ~a = ~a\n" name value))

;;;-----------------------------------------------------------------------------
;;; Print usage
;;;-----------------------------------------------------------------------------
(defun print-help ()
  (print "Usage: youtoo [<options>] <source-file(s)> [<options>]")
  (print "  -help                 --  show usage")
  (print "  -version              --  show current release")
  (print "  -params               --  show current parameter setting")
  (print "  -load_path <dir>      --  add <dir> to load path")
  (print "  -c                    --  create C linkable module file only")
  (print "  -ar                   --  create C linkable library file")
  (print "  -l <lib>              --  specify C linkable library")
  (print "  -L <dir>              --  extent C linkable library load path")
  (print "  -fff <file>           --  specify C foreign function file")
  (print "  -ffl <lib>            --  specify C foreign function library")
  (print "  -o <file>             --  destination file")
  (print "  -od <dir>             --  destination directory for object files")
  (print "  --script <file>       --  script mode")
  (print "  -silent               --  silent mode")
  (print "  -verbose              --  verbose mode")
  (print "  -no_warnings          --  no warning messages")
  (print "  -no_errors            --  no error messages")
  (print "  -no_else              --  omit warning for if without else")
  (print "  -redefine             --  redefine imported bindings")
  (print "  -no_inline            --  ignore inline declarations")
  (print "  -stop_after <phase>   --  stop after compilation phase (e.g. read)")
  (print "  -recompile            --  recompile imported modules")
  (print "  -no_recompile         --  no automatic recompilation of imports")
  (print "  -no_gc                --  garbage collection library not linked")
  (print "  -cc                   --  used C compiler")
  (print "  -ld                   --  used C linker")
  (print "  -ar_cmd               --  used C ar command")
  (print "  -ranlib_cmd           --  used C ranlib command")
  (print "  -cflags               --  additional C flag")
  (print "  -static               --  no shared libraries used")
  (print "  -g                    --  C debug info")
  (print "  -i                    --  force interpretation mode")
  (print "  -no_ct_handlers       --  no compile-time error handling")
  (flush))

(defun print-version ()
  (print "EuLisp System 'youtoo'")
  (format "Version ~a updated\n" *version*)
  (print "Copyright 1996, 1997 A. Kind & University of Bath")
  (print "Copyright 2010 Henry G. Weller")
  (print "This is free software; see the source and the file COPYING for copying conditions.")
  (print "There is NO warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.")
  (print nl)
  (flush))

;;;-----------------------------------------------------------------------------
)  ;; End of module
;;;-----------------------------------------------------------------------------
