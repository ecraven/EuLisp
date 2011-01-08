/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module sx-write
 **  Copyright: See file sx-write.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_sx_obj();
extern LispRef i_all_bindings[];
extern LispRef stream_bindings[];
extern LispRef aux_table_bindings[];
extern LispRef mop_inspect_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef stream2_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef mop_defcl_bindings[];
extern LispRef mop_access_bindings[];
extern LispRef sx_obj1_bindings[];
extern LispRef number_bindings[];
extern LispRef dynamic_bindings[];
extern LispRef boot_bindings[];
extern LispRef sx_obj2_bindings[];
extern LispRef format_bindings[];
extern LispRef sx_obj_bindings[];

/* Module bindings with size 70 */
LispRef sx_write_bindings[70];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module sx-write */
void initialize_module_sx_write()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_sx_obj();
  eul_fast_table_set(eul_modules,"sx_write",(LispRef) sx_write_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_3715, sym_3714, sym_3713, G003712, sym_3706, G003705, G003703, G003700, G003697, G003694, G003690, sym_3688, sym_3687, sym_3686, G003685, G003682, G003678, G003676, G003673, sym_3669, G003668, G003665, G003662, G003659, G003656, G003653, G003650, sym_3644, G003643, G003640, sym_3637, G003635, G003632, G003629, G003626;

  /* Code vector and literal definitions */
  eul_allocate_static_string(str_3627, "(if ~a ~a ~a)", 13);
  /* Byte-vector with size: 14 is_init: 0 index: 6 binding: (method-new-generic-print) */
  static const void *G003625[] = {I(ab,1c,84,24),B(sx_obj ,12),I(08,1d,83,24),B(sx_obj ,12),I(08,1f,03,82),I(24,00,00,00),B(sx_obj ,12),I(08,1f,03,23),B(sx_write ,5),I(1f,04,1f,04),I(1f,04,24,00),B(format ,4),I(3d,05,05,45),I(05,00,00,00)};

  eul_allocate_static_string(str_3630, "~a", 2);
  /* Byte-vector with size: 11 is_init: 0 index: 8 binding: (method-new-generic-print) */
  static const void *G003628[] = {I(ab,1c,83,24),B(sx_obj ,39),I(08,1d,82,24),B(sx_obj ,39),I(08,1c,1c,0f),I(1f,03,23,00),B(sx_write ,7),I(1d,24,00,00),B(format ,4),I(3d,03,05,45),I(05,00,00,00)};

  eul_allocate_static_string(str_3633, "(~a ~a)", 7);
  /* Byte-vector with size: 15 is_init: 0 index: 10 binding: anonymous */
  static const void *G003631[] = {I(aa,1b,24,00),B(sx_obj2 ,33),I(3c,01,1b,34),I(00,00,00,15),I(1c,83,24,00),B(sx_obj2 ,11),I(08,32,00,00),I(00,00,00,08),I(86,47,00,00),I(23,00,00,00),B(sx_write ,9),I(1f,04,1f,03),I(24,00,00,00),B(format ,4),I(3d,04,03,00)};

  eul_allocate_static_string(str_3636, "(let* (", 7);
  eul_allocate_static_string(str_3638, ") ~a)", 5);
  /* Byte-vector with size: 25 is_init: 0 index: 14 binding: (method-new-generic-print) */
  static const void *G003634[] = {I(ab,46,01,1b),I(48,00,00,47),I(00,00,23,00),B(sx_write ,11),I(24,00,00,00),B(format ,4),I(3c,02,2a,1c),I(8a,05,24,00),B(sx_obj ,17),I(08,23,00,00),B(sx_write ,12),I(23,00,00,00),B(sx_write ,10),I(3b,01,1c,24),B(boot ,17),I(3c,02,2a,1d),I(84,24,00,00),B(sx_obj ,17),I(08,47,00,00),I(23,00,00,00),B(sx_write ,13),I(1d,24,00,00),B(format ,4),I(3d,03,04,45),I(04,00,00,00)};

  eul_allocate_static_string(str_3641, "(opencoded-lambda ~a ~a)", 24);
  /* Byte-vector with size: 12 is_init: 0 index: 16 binding: (method-new-generic-print) */
  static const void *G003639[] = {I(ab,1c,8a,05),I(24,00,00,00),B(sx_obj ,17),I(08,1d,84,24),B(sx_obj ,17),I(08,1d,23,00),B(sx_write ,15),I(1f,03,1f,03),I(24,00,00,00),B(format ,4),I(3d,04,04,45),I(04,00,00,00)};

  eul_allocate_static_string(str_3645, "~a", 2);
  eul_allocate_static_string(str_3646, "inlined-lambda", 14);
  eul_allocate_static_string(str_3647, "lambda", 6);
  eul_allocate_static_string(str_3648, "(~a ~a ~a)", 10);
  /* Byte-vector with size: 50 is_init: 0 index: 22 binding: (method-new-generic-print) */
  static const void *G003642[] = {I(ab,23,00,00),B(sx_write ,17),I(24,00,00,00),B(dynamic ,3),I(3c,01,24,00),B(number ,24),I(3c,01,1b,34),I(00,00,00,21),I(23,00,00,00),B(sx_write ,17),I(24,00,00,00),B(dynamic ,3),I(3c,01,84,1a),I(32,00,00,00),I(00,00,00,09),I(86,1b,34,00),I(00,00,00,2e),I(1f,03,8a,07),I(24,00,00,00),B(sx_obj ,17),I(08,1f,03,23),B(sx_write ,18),I(1d,24,00,00),B(format ,4),I(3d,03,05,22),I(01,32,00,00),I(00,00,00,60),I(1f,03,84,24),B(sx_obj ,13),I(08,1b,34,00),I(00,00,00,16),I(23,00,00,00),B(sx_write ,19),I(32,00,00,00),I(00,00,00,10),I(23,00,00,00),B(sx_write ,20),I(1f,05,8a,05),I(24,00,00,00),B(sx_obj ,17),I(08,1f,06,84),I(24,00,00,00),B(sx_obj ,17),I(08,1f,06,23),B(sx_write ,21),I(1f,04,1f,04),I(1f,04,24,00),B(format ,4),I(3d,05,08,22),I(04,45,04,00)};

  eul_allocate_static_string(str_3651, "~a", 2);
  /* Byte-vector with size: 8 is_init: 0 index: 24 binding: (method-new-generic-print) */
  static const void *G003649[] = {I(ab,1c,82,24),B(sx_obj2 ,29),I(08,1c,23,00),B(sx_write ,23),I(1d,24,00,00),B(format ,4),I(3d,03,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_3654, "~a", 2);
  /* Byte-vector with size: 8 is_init: 0 index: 26 binding: (method-new-generic-print) */
  static const void *G003652[] = {I(ab,1c,83,24),B(sx_obj2 ,22),I(08,1c,23,00),B(sx_write ,25),I(1d,24,00,00),B(format ,4),I(3d,03,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_3657, "(setq ~a ~a)", 12);
  /* Byte-vector with size: 11 is_init: 0 index: 28 binding: (method-new-generic-print) */
  static const void *G003655[] = {I(ab,1c,83,24),B(sx_obj2 ,25),I(08,1d,82,24),B(sx_obj2 ,25),I(08,1d,23,00),B(sx_write ,27),I(1f,03,1f,03),I(24,00,00,00),B(format ,4),I(3d,04,04,45),I(04,00,00,00)};

  eul_allocate_static_string(str_3660, "~a", 2);
  /* Byte-vector with size: 9 is_init: 0 index: 30 binding: (method-new-generic-print) */
  static const void *G003658[] = {I(ab,1c,8a,03),I(24,00,00,00),B(sx_obj2 ,11),I(08,1c,23,00),B(sx_write ,29),I(1d,24,00,00),B(format ,4),I(3d,03,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_3663, "~a", 2);
  /* Byte-vector with size: 9 is_init: 0 index: 32 binding: (method-new-generic-print) */
  static const void *G003661[] = {I(ab,1c,8a,06),I(24,00,00,00),B(sx_obj1 ,42),I(08,1c,23,00),B(sx_write ,31),I(1d,24,00,00),B(format ,4),I(3d,03,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_3666, "~a", 2);
  /* Byte-vector with size: 9 is_init: 0 index: 34 binding: (method-new-generic-print) */
  static const void *G003664[] = {I(ab,1c,8a,15),I(24,00,00,00),B(sx_obj1 ,59),I(08,1c,23,00),B(sx_write ,33),I(1d,24,00,00),B(format ,4),I(3d,03,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_3670, "~a", 2);
  eul_allocate_static_string(str_3671, "<unprintable syntax object>", 27);
  /* Byte-vector with size: 25 is_init: 0 index: 38 binding: (method-new-generic-print) */
  static const void *G003667[] = {I(ab,1c,24,00),B(mop_access ,5),I(3c,01,23,00),B(sx_write ,35),I(1c,86,6c,1b),I(34,00,00,00),I(00,00,00,38),I(1f,03,23,00),B(sx_write ,35),I(24,00,00,00),B(mop_defcl ,8),I(3c,02,1f,03),I(23,00,00,00),B(sx_write ,36),I(1d,24,00,00),B(format ,4),I(3d,03,05,22),I(01,32,00,00),I(00,00,00,1a),I(1d,23,00,00),B(sx_write ,37),I(24,00,00,00),B(format ,4),I(3d,02,04,45),I(04,00,00,00)};

  eul_allocate_static_string(str_3674, "#<syntax-operator>", 18);
  /* Byte-vector with size: 5 is_init: 0 index: 40 binding: (method-new-generic-print) */
  static const void *G003672[] = {I(ab,23,00,00),B(sx_write ,39),I(24,00,00,00),B(format ,4),I(3d,02,01,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 41 binding: (method-generic-print) */
  static const void *G003675[] = {I(ab,23,00,00),B(sx_write ,17),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,34),I(00,00,00,15),I(1d,1d,24,00),B(sx_write ,3),I(3d,02,03,32),I(00,00,00,08),I(38,02,01,45),I(03,00,00,00)};

  eul_allocate_static_string(str_3679, "#<binding: ~a:~a:~a>", 20);
  eul_allocate_static_string(str_3680, "#<binding: ~a:~a>", 17);
  /* Byte-vector with size: 35 is_init: 0 index: 44 binding: (method-generic-print) */
  static const void *G003677[] = {I(ab,1c,8a,05),I(24,00,00,00),B(sx_obj1 ,42),I(08,1d,8a,06),I(24,00,00,00),B(sx_obj1 ,42),I(08,1f,03,83),I(24,00,00,00),B(sx_obj1 ,42),I(08,1d,24,00),B(sx_obj1 ,45),I(3c,01,1b,34),I(00,00,00,19),I(1f,03,8a,15),I(24,00,00,00),B(sx_obj1 ,59),I(08,32,00,00),I(00,00,00,09),I(1f,03,1d,7e),I(1b,34,00,00),I(00,00,00,23),I(1f,06,23,00),B(sx_write ,42),I(1f,03,1f,07),I(1f,07,24,00),B(format ,4),I(3d,05,08,32),I(00,00,00,1c),I(1f,06,23,00),B(sx_write ,43),I(1f,03,1f,07),I(24,00,00,00),B(format ,4),I(3d,04,08,45),I(08,00,00,00)};

  eul_allocate_static_string(str_3683, "#<module: ~a>", 13);
  /* Byte-vector with size: 9 is_init: 0 index: 46 binding: (method-generic-print) */
  static const void *G003681[] = {I(ab,1c,8a,15),I(24,00,00,00),B(sx_obj1 ,59),I(08,1c,23,00),B(sx_write ,45),I(1d,24,00,00),B(format ,4),I(3d,03,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 447 is_init: 0 index: 50 binding: top-level */
  static const void *G003684[] = {I(a9,84,24,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(sx_write ,47),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(sx_write ,3),I(2a,24,00,00),B(stream2 ,31),I(8a,03,02,84),I(24,00,00,00),B(sx_obj1 ,59),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,31),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,48),I(23,00,00,00),B(sx_write ,46),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,31),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,31),I(8a,03,02,84),I(24,00,00,00),B(sx_obj1 ,42),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,31),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,48),I(23,00,00,00),B(sx_write ,44),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,31),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,31),I(8a,03,02,84),I(24,00,00,00),B(sx_obj1 ,27),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,31),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,48),I(23,00,00,00),B(sx_write ,41),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,31),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(2a,24,00,00),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(mop_class ,32),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,40),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj1 ,27),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,38),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj1 ,59),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,34),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj1 ,42),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,32),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj2 ,11),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,30),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj2 ,25),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,28),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj2 ,22),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,26),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj2 ,32),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,24),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj ,13),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,22),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj ,8),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,16),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj ,2),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,14),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj ,39),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,8),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj ,12),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,6),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,64,45),I(64,00,00,00)};

  eul_allocate_static_string(str_3691, "#<syntax-operator>", 18);
  eul_allocate_static_string(str_3692, "~a", 2);
  /* Byte-vector with size: 16 is_init: 0 index: 53 binding: binding-print-string */
  static const void *G003689[] = {I(aa,84,24,00),B(sx_obj1 ,42),I(08,1b,24,00),B(mop_inspect ,8),I(3c,01,1b,34),I(00,00,00,15),I(23,00,00,00),B(sx_write ,51),I(32,00,00,00),I(00,00,00,1b),I(23,00,00,00),B(sx_write ,52),I(1d,24,00,00),B(format ,2),I(3d,02,02,45),I(02,00,00,00)};

  eul_allocate_static_string(str_3695, "\n   (~a . ~a)", 13);
  /* Byte-vector with size: 13 is_init: 0 index: 55 binding: anonymous */
  static const void *G003693[] = {I(ab,1b,8a,06),I(24,00,00,00),B(sx_obj1 ,42),I(08,1c,24,00),B(sx_write ,2),I(3c,01,47,00),I(00,23,00,00),B(sx_write ,54),I(1f,03,1f,03),I(24,00,00,00),B(format ,4),I(3d,04,04,45),I(04,00,00,00)};

  eul_allocate_static_string(str_3698, "\n   (~a . ~a)", 13);
  /* Byte-vector with size: 13 is_init: 0 index: 57 binding: anonymous */
  static const void *G003696[] = {I(ab,1b,8a,06),I(24,00,00,00),B(sx_obj1 ,42),I(08,1c,24,00),B(sx_write ,2),I(3c,01,47,00),I(00,23,00,00),B(sx_write ,56),I(1f,03,1f,03),I(24,00,00,00),B(format ,4),I(3d,04,04,45),I(04,00,00,00)};

  eul_allocate_static_string(str_3701, "\n   (~a . ~a)", 13);
  /* Byte-vector with size: 13 is_init: 0 index: 59 binding: anonymous */
  static const void *G003699[] = {I(ab,1b,8a,06),I(24,00,00,00),B(sx_obj1 ,42),I(08,1c,24,00),B(sx_write ,2),I(3c,01,47,00),I(00,23,00,00),B(sx_write ,58),I(1f,03,1f,03),I(24,00,00,00),B(format ,4),I(3d,04,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 60 binding: anonymous */
  static const void *G003702[] = {I(a9,83,24,00),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  eul_allocate_static_string(str_3707, "\nPretty printed environment of module ~a:", 41);
  eul_allocate_static_string(str_3708, "\n  lexical-env:", 15);
  eul_allocate_static_string(str_3709, "\n  external-env:", 16);
  eul_allocate_static_string(str_3710, "\n  syntax-env:", 14);
  /* Byte-vector with size: 92 is_init: 0 index: 66 binding: pprint-module */
  static const void *G003704[] = {I(43,fe,46,01),I(1b,34,00,00),I(00,00,00,0f),I(1b,10,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,08),I(87,1b,48,00),I(00,23,00,00),B(sx_write ,17),I(87,24,00,00),B(dynamic ,2),I(3c,02,2a,23),B(sx_write ,61),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(sx_write ,12),I(23,00,00,00),B(sx_write ,60),I(3b,00,1c,0f),I(23,00,00,00),B(sx_write ,61),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,47),I(00,00,1f,06),I(24,00,00,00),B(mop_access ,8),I(3c,02,2a,1f),I(05,8a,15,24),B(sx_obj1 ,59),I(08,47,00,00),I(23,00,00,00),B(sx_write ,62),I(1d,24,00,00),B(format ,4),I(3c,03,2a,47),I(00,00,23,00),B(sx_write ,63),I(24,00,00,00),B(format ,4),I(3c,02,2a,1f),I(06,8a,10,24),B(sx_obj1 ,59),I(08,23,00,00),B(sx_write ,12),I(23,00,00,00),B(sx_write ,59),I(3b,02,1c,24),B(aux_table ,7),I(3c,02,2a,47),I(00,00,23,00),B(sx_write ,64),I(24,00,00,00),B(format ,4),I(3c,02,2a,1f),I(07,8a,0f,24),B(sx_obj1 ,59),I(08,23,00,00),B(sx_write ,12),I(23,00,00,00),B(sx_write ,57),I(3b,02,1c,24),B(aux_table ,7),I(3c,02,2a,47),I(00,00,23,00),B(sx_write ,65),I(24,00,00,00),B(format ,4),I(3c,02,2a,1f),I(08,8a,0e,24),B(sx_obj1 ,59),I(08,23,00,00),B(sx_write ,12),I(23,00,00,00),B(sx_write ,55),I(3b,02,1c,24),B(aux_table ,7),I(3c,02,2a,47),I(00,00,27,0a),I(24,00,00,00),B(stream ,8),I(3c,02,83,24),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1f),I(0a,45,0b,00)};

  /* Byte-vector with size: 32 is_init: 1 index: 0 binding: initialize-sx-write */
  static const void *G003711[] = {I(87,25,00,00),B(sx_write ,1),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(23,00,00,00),B(sx_write ,67),I(23,00,00,00),B(sx_write ,66),I(3b,fe,25,00),B(sx_write ,4),I(86,25,00,00),B(sx_write ,3),I(23,00,00,00),B(sx_write ,68),I(23,00,00,00),B(sx_write ,53),I(3b,01,25,00),B(sx_write ,2),I(23,00,00,00),B(sx_write ,69),I(23,00,00,00),B(sx_write ,50),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  object_class(str_3627) = eul_static_string_class;
  eul_allocate_bytevector( G003626,G003625);
  object_class(str_3630) = eul_static_string_class;
  eul_allocate_bytevector( G003629,G003628);
  object_class(str_3633) = eul_static_string_class;
  eul_allocate_bytevector( G003632,G003631);
  object_class(str_3636) = eul_static_string_class;
  eul_intern_symbol(sym_3637,"anonymous");
  object_class(str_3638) = eul_static_string_class;
  eul_allocate_bytevector( G003635,G003634);
  object_class(str_3641) = eul_static_string_class;
  eul_allocate_bytevector( G003640,G003639);
  eul_intern_symbol(sym_3644,"*pprint*");
  object_class(str_3645) = eul_static_string_class;
  object_class(str_3646) = eul_static_string_class;
  object_class(str_3647) = eul_static_string_class;
  object_class(str_3648) = eul_static_string_class;
  eul_allocate_bytevector( G003643,G003642);
  object_class(str_3651) = eul_static_string_class;
  eul_allocate_bytevector( G003650,G003649);
  object_class(str_3654) = eul_static_string_class;
  eul_allocate_bytevector( G003653,G003652);
  object_class(str_3657) = eul_static_string_class;
  eul_allocate_bytevector( G003656,G003655);
  object_class(str_3660) = eul_static_string_class;
  eul_allocate_bytevector( G003659,G003658);
  object_class(str_3663) = eul_static_string_class;
  eul_allocate_bytevector( G003662,G003661);
  object_class(str_3666) = eul_static_string_class;
  eul_allocate_bytevector( G003665,G003664);
  eul_intern_symbol(sym_3669,"binding");
  object_class(str_3670) = eul_static_string_class;
  object_class(str_3671) = eul_static_string_class;
  eul_allocate_bytevector( G003668,G003667);
  object_class(str_3674) = eul_static_string_class;
  eul_allocate_bytevector( G003673,G003672);
  eul_allocate_bytevector( G003676,G003675);
  object_class(str_3679) = eul_static_string_class;
  object_class(str_3680) = eul_static_string_class;
  eul_allocate_bytevector( G003678,G003677);
  object_class(str_3683) = eul_static_string_class;
  eul_allocate_bytevector( G003682,G003681);
  eul_intern_symbol(sym_3686,"new-generic-print");
  eul_intern_symbol(sym_3687,"(method generic-print)");
  eul_intern_symbol(sym_3688,"(method new-generic-print)");
  eul_allocate_bytevector( G003685,G003684);
  object_class(str_3691) = eul_static_string_class;
  object_class(str_3692) = eul_static_string_class;
  eul_allocate_bytevector( G003690,G003689);
  object_class(str_3695) = eul_static_string_class;
  eul_allocate_bytevector( G003694,G003693);
  object_class(str_3698) = eul_static_string_class;
  eul_allocate_bytevector( G003697,G003696);
  object_class(str_3701) = eul_static_string_class;
  eul_allocate_bytevector( G003700,G003699);
  eul_allocate_bytevector( G003703,G003702);
  eul_intern_symbol(sym_3706,"*clean-ups*");
  object_class(str_3707) = eul_static_string_class;
  object_class(str_3708) = eul_static_string_class;
  object_class(str_3709) = eul_static_string_class;
  object_class(str_3710) = eul_static_string_class;
  eul_allocate_bytevector( G003705,G003704);
  eul_intern_symbol(sym_3713,"pprint-module");
  eul_intern_symbol(sym_3714,"binding-print-string");
  eul_intern_symbol(sym_3715,"top-level");
  eul_allocate_bytevector( G003712,G003711);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 5; i++)
      sx_write_bindings[i] = eul_nil;
  }

  sx_write_bindings[ 5] = str_3627;
  sx_write_bindings[ 6] = G003626;
  sx_write_bindings[ 7] = str_3630;
  sx_write_bindings[ 8] = G003629;
  sx_write_bindings[ 9] = str_3633;
  sx_write_bindings[ 10] = G003632;
  sx_write_bindings[ 11] = str_3636;
  sx_write_bindings[ 12] = sym_3637;
  sx_write_bindings[ 13] = str_3638;
  sx_write_bindings[ 14] = G003635;
  sx_write_bindings[ 15] = str_3641;
  sx_write_bindings[ 16] = G003640;
  sx_write_bindings[ 17] = sym_3644;
  sx_write_bindings[ 18] = str_3645;
  sx_write_bindings[ 19] = str_3646;
  sx_write_bindings[ 20] = str_3647;
  sx_write_bindings[ 21] = str_3648;
  sx_write_bindings[ 22] = G003643;
  sx_write_bindings[ 23] = str_3651;
  sx_write_bindings[ 24] = G003650;
  sx_write_bindings[ 25] = str_3654;
  sx_write_bindings[ 26] = G003653;
  sx_write_bindings[ 27] = str_3657;
  sx_write_bindings[ 28] = G003656;
  sx_write_bindings[ 29] = str_3660;
  sx_write_bindings[ 30] = G003659;
  sx_write_bindings[ 31] = str_3663;
  sx_write_bindings[ 32] = G003662;
  sx_write_bindings[ 33] = str_3666;
  sx_write_bindings[ 34] = G003665;
  sx_write_bindings[ 35] = sym_3669;
  sx_write_bindings[ 36] = str_3670;
  sx_write_bindings[ 37] = str_3671;
  sx_write_bindings[ 38] = G003668;
  sx_write_bindings[ 39] = str_3674;
  sx_write_bindings[ 40] = G003673;
  sx_write_bindings[ 41] = G003676;
  sx_write_bindings[ 42] = str_3679;
  sx_write_bindings[ 43] = str_3680;
  sx_write_bindings[ 44] = G003678;
  sx_write_bindings[ 45] = str_3683;
  sx_write_bindings[ 46] = G003682;
  sx_write_bindings[ 47] = sym_3686;
  sx_write_bindings[ 48] = sym_3687;
  sx_write_bindings[ 49] = sym_3688;
  sx_write_bindings[ 50] = G003685;
  sx_write_bindings[ 51] = str_3691;
  sx_write_bindings[ 52] = str_3692;
  sx_write_bindings[ 53] = G003690;
  sx_write_bindings[ 54] = str_3695;
  sx_write_bindings[ 55] = G003694;
  sx_write_bindings[ 56] = str_3698;
  sx_write_bindings[ 57] = G003697;
  sx_write_bindings[ 58] = str_3701;
  sx_write_bindings[ 59] = G003700;
  sx_write_bindings[ 60] = G003703;
  sx_write_bindings[ 61] = sym_3706;
  sx_write_bindings[ 62] = str_3707;
  sx_write_bindings[ 63] = str_3708;
  sx_write_bindings[ 64] = str_3709;
  sx_write_bindings[ 65] = str_3710;
  sx_write_bindings[ 66] = G003705;
  sx_write_bindings[ 1] = eul_nil;
  sx_write_bindings[ 67] = sym_3713;
  sx_write_bindings[ 68] = sym_3714;
  sx_write_bindings[ 69] = sym_3715;
  eul_allocate_lambda( sx_write_bindings[0], "initialize-sx-write", 0, G003712);

  }
}


/* eof */
