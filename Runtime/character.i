;;; EuLisp system 'youtoo'
;;;   Interface file for module character

(definterface character
  (import (telos compare collect string)
   syntax (_telos0)
   full-import (mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl boot boot1 telos callback let-cc dynamic thread event condition compare collect fpi number integer copy convert string)
   export (
    ((name . uppercasep) (pos . 5) (origin character . uppercasep))
    ((name . alnump) (pos . 10) (origin character . alnump))
    ((name . digitp) (pos . 3) (origin character . digitp))
    ((name . lowercasep) (pos . 2) (origin character . lowercasep))
    ((name . character-as-string) (pos . 11) (origin character . character-as-string))
    ((name . <character>) (pos . 7) (origin character . <character>) (class . constant))
    ((name . alphap) (pos . 6) (origin character . alphap))
    ((name . characterp) (pos . 24) (origin boot1 . characterp) (inline (G0041 (characterp))))
    ((name . graphp) (pos . 8) (origin character . graphp))
    ((name . as-lowercase) (pos . 4) (origin character . as-lowercase))
    ((name . as-uppercase) (pos . 9) (origin character . as-uppercase))
   )
   local-literals (
    (top-level . 53)
    (lowercasep . 52)
    (digitp . 51)
    (uppercasep . 50)
    (alphap . 49)
    (graphp . 48)
    (alnump . 47)
    (character-as-string . 46)
    (fill-value: . 44)
    (size: . 43)
    ((converter <character>) . 35)
    (<character> . 34)
    (converter . 33)
    (|(method as-uppercase)| . 32)
    (|(method as-lowercase)| . 31)
    (|(method binary<)| . 30)
    (direct-keywords: . 29)
    (direct-slots: . 28)
    (direct-superclasses: . 27)
    (character . 26)
    (name: . 25)
    (as-uppercase . 24)
    (as-lowercase . 23)
   )
   literals (
   )
))
