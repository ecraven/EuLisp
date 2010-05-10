;;; EuLisp system 'youtoo'
;;;   Interface file for module stream1

(definterface stream1
  (import (telos)
   syntax ()
   full-import (mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl boot boot1 telos)
   export (
    ((name . O_RDONLY) (pos . 4) (origin stream1 . O_RDONLY) (class . constant))
    ((name . eul_open) (pos . 15) (origin stream1 . eul_open) (class . ff) (arity . 3) (ff (3 0 0) 0 (open . ff_stub_open4325)))
    ((name . eul_make_socket) (pos . 21) (origin stream1 . eul_make_socket) (class . ff) (arity . 3) (ff (3 3 0) 0 (eul_make_socket . ff_stub_eul_make_socket4331)))
    ((name . eul_read) (pos . 17) (origin stream1 . eul_read) (class . ff) (arity . 3) (ff (0 3 0) 0 (read . ff_stub_read4327)))
    ((name . mode-table) (pos . 5) (origin stream1 . mode-table) (class . constant))
    ((name . O_TRUNC) (pos . 13) (origin stream1 . O_TRUNC) (class . constant))
    ((name . eul_socket_accept) (pos . 22) (origin stream1 . eul_socket_accept) (class . ff) (arity . 1) (ff (0) 0 (eul_socket_accept . ff_stub_eul_socket_accept4332)))
    ((name . eul_sprintf) (pos . 19) (origin stream1 . eul_sprintf) (class . ff) (arity . 4) (ff (3 0 3 8) 0 (eul_sprintf . ff_stub_eul_sprintf4329)))
    ((name . eul_sprintf_string) (pos . 20) (origin stream1 . eul_sprintf_string) (class . ff) (arity . 6) (ff (3 0 0 0 3 3) 0 (eul_sprintf_string . ff_stub_eul_sprintf_string4330)))
    ((name . eul_socket_strerror) (pos . 24) (origin stream1 . eul_socket_strerror) (class . ff) (arity . 1) (ff (0) 3 (eul_socket_strerror . ff_stub_eul_socket_strerror4334)))
    ((name . O_NONBLOCK) (pos . 10) (origin stream1 . O_NONBLOCK) (class . constant))
    ((name . read-into-buffer) (pos . 27) (origin stream1 . read-into-buffer) (class . ff) (arity . 3) (ff (0 3 0) 0 (read_into_buffer . ff_stub_read_into_buffer4337)))
    ((name . ntok) (pos . 26) (origin stream1 . ntok) (class . ff) (arity . 2) (ff (8 8) 6 (ntok . ff_stub_ntok4336)))
    ((name . O_EXCL) (pos . 11) (origin stream1 . O_EXCL) (class . constant))
    ((name . eul_make_connection) (pos . 23) (origin stream1 . eul_make_connection) (class . ff) (arity . 3) (ff (3 3 3) 0 (eul_make_connection . ff_stub_eul_make_connection4333)))
    ((name . O_WRONLY) (pos . 12) (origin stream1 . O_WRONLY) (class . constant))
    ((name . O_APPEND) (pos . 7) (origin stream1 . O_APPEND) (class . constant))
    ((name . strerror) (pos . 6) (origin stream1 . strerror))
    ((name . O_RDWR) (pos . 2) (origin stream1 . O_RDWR) (class . constant))
    ((name . O_CREAT) (pos . 8) (origin stream1 . O_CREAT) (class . constant))
    ((name . eul_close) (pos . 16) (origin stream1 . eul_close) (class . ff) (arity . 1) (ff (0) 0 (close . ff_stub_close4326)))
    ((name . hostname) (pos . 3) (origin stream1 . hostname))
    ((name . eul_write) (pos . 18) (origin stream1 . eul_write) (class . ff) (arity . 3) (ff (0 3 0) 0 (write . ff_stub_write4328)))
   )
   local-literals (
    (top-level . 40)
    (hostname . 39)
    (strerror . 38)
    (a+ . 34)
    (w+ . 33)
    (r+ . 32)
    (a . 31)
    (w . 30)
    (r . 29)
   )
   literals (
   )
))
