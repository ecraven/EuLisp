/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module sx-node
 **  Copyright: See file sx-node.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_i_ffi();
extern void initialize_module_sx_obj();
extern void initialize_module_p_env();
extern LispRef i_all_bindings[];
extern LispRef i_ffi_bindings[];
extern LispRef mop_defcl_bindings[];
extern LispRef number_bindings[];
extern LispRef sx_obj2_bindings[];
extern LispRef mop_inspect_bindings[];
extern LispRef thread_bindings[];
extern LispRef list_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef p_env_bindings[];
extern LispRef aux_table_bindings[];
extern LispRef dynamic_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef i_param_bindings[];
extern LispRef sx_obj_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef sx_obj1_bindings[];

/* Module bindings with size 124 */
LispRef sx_node_bindings[124];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module sx-node */
void initialize_module_sx_node()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_i_ffi();
  initialize_module_sx_obj();
  initialize_module_p_env();
  eul_fast_table_set(eul_modules,"sx_node",(LispRef) sx_node_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_1151, sym_1150, sym_1149, sym_1148, sym_1147, sym_1146, sym_1145, sym_1144, sym_1143, sym_1142, sym_1141, sym_1140, sym_1139, sym_1138, sym_1137, sym_1136, sym_1135, sym_1134, sym_1133, sym_1132, sym_1131, sym_1130, sym_1129, sym_1128, sym_1127, G001126, G001124, G001122, G001120, G001118, G001116, G001114, G001112, G001110, G001108, G001106, G001104, G001100, sym_1098, G001097, G001095, key_1093, key_1092, G001091, key_1089, G001088, G001086, sym_1084, G001083, sym_1081, sym_1080, sym_1079, sym_1078, sym_1077, G001076, key_1074, key_1073, key_1072, key_1071, sym_1070, G001069, G001067, G001065, sym_1063, G001062, sym_1060, sym_1059, sym_1058, G001056, key_1054, key_1053, key_1052, key_1051, key_1050, G001049, sym_1047, G001046, sym_1044, sym_1043, sym_1042, sym_1041, sym_1040, G001039, G001037, G001035, sym_1033, G001032, key_1030, key_1029, key_1028, key_1027, key_1026, key_1025, key_1024, G001023;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 44 is_init: 0 index: 35 binding: (method-clone-node) */
  static const void *G001022[] = {I(aa,1b,04,1c),I(26,00,00,00),I(00,00,00,06),I(24,00,00,00),B(sx_obj1 ,42),I(08,1d,26,00),I(00,00,00,05),I(24,00,00,00),B(sx_obj1 ,42),I(08,1f,03,26),I(00,00,00,04),I(24,00,00,00),B(sx_obj1 ,42),I(08,1f,04,26),I(00,00,00,03),I(24,00,00,00),B(sx_obj1 ,42),I(08,1f,05,84),I(24,00,00,00),B(sx_obj1 ,42),I(08,1f,06,83),I(24,00,00,00),B(sx_obj1 ,42),I(08,1f,07,82),I(24,00,00,00),B(sx_obj1 ,42),I(08,1f,07,23),B(sx_node ,28),I(1f,08,23,00),B(sx_node ,29),I(1f,09,23,00),B(sx_node ,30),I(1f,0a,23,00),B(sx_node ,31),I(1f,0b,23,00),B(sx_node ,32),I(1f,0c,23,00),B(sx_node ,33),I(1f,0d,23,00),B(sx_node ,34),I(1f,0e,24,00),B(mop_gf ,2),I(3d,0f,09,45),I(09,00,00,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 37 binding: (method-get-named-encl-lambda) */
  static const void *G001031[] = {I(aa,1b,34,00),I(00,00,00,46),I(1b,26,00,00),I(00,00,00,07),I(24,00,00,00),B(sx_obj ,17),I(08,23,00,00),B(sx_node ,36),I(50,1b,34,00),I(00,00,00,1e),I(1c,82,24,00),B(sx_obj1 ,3),I(08,24,00,00),B(i_param ,39),I(3d,01,02,32),I(00,00,00,06),I(1c,22,01,32),I(00,00,00,06),I(86,45,01,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 38 binding: (method-binding-origin-module-name) */
  static const void *G001034[] = {I(aa,26,00,00),I(00,00,00,05),I(24,00,00,00),B(sx_obj1 ,42),I(08,45,00,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 39 binding: (method-binding-origin-module-name) */
  static const void *G001036[] = {I(aa,26,00,00),I(00,00,00,05),I(24,00,00,00),B(sx_obj1 ,42),I(08,26,00,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,59),I(08,45,00,00)};

  /* Byte-vector with size: 154 is_init: 0 index: 45 binding: top-level */
  static const void *G001038[] = {I(a9,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(sx_node ,40),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(sx_node ,27),I(2a,83,24,00),B(sx_obj1 ,27),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(sx_node ,41),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(sx_node ,21),I(2a,24,00,00),B(sx_node ,27),I(2a,24,00,00),B(sx_node ,27),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(sx_obj1 ,42),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(sx_node ,27),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(sx_node ,42),I(23,00,00,00),B(sx_node ,39),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_node ,27),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_node ,27),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(sx_obj1 ,72),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(sx_node ,27),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(sx_node ,42),I(23,00,00,00),B(sx_node ,38),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_node ,27),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(i_param ,39),I(26,00,00,00),I(00,00,00,03),I(02,83,86,24),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(i_param ,39),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(sx_node ,43),I(23,00,00,00),B(sx_node ,37),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(i_param ,39),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_node ,21),I(2a,24,00,00),B(sx_node ,21),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(sx_obj1 ,42),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(sx_node ,21),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(sx_node ,44),I(23,00,00,00),B(sx_node ,35),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_node ,21),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,20,45),I(20,00,00,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 47 binding: register-delegated-vars */
  static const void *G001045[] = {I(aa,23,00,00),B(sx_node ,46),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(sx_node ,46),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,83),I(24,00,00,00),B(sx_obj ,13),I(08,1b,1f,04),I(24,00,00,00),B(boot ,7),I(3c,02,1f,03),I(1c,1c,83,1d),I(24,00,00,00),B(sx_obj ,13),I(09,45,07,00)};

  /* Byte-vector with size: 34 is_init: 0 index: 53 binding: make-module */
  static const void *G001048[] = {I(aa,24,00,00),B(aux_table ,4),I(3c,00,24,00),B(aux_table ,4),I(3c,00,24,00),B(aux_table ,4),I(3c,00,24,00),B(aux_table ,4),I(3c,00,24,00),B(sx_obj1 ,59),I(23,00,00,00),B(sx_node ,48),I(1f,06,23,00),B(sx_node ,49),I(1f,07,23,00),B(sx_node ,50),I(1f,08,23,00),B(sx_node ,51),I(1f,09,23,00),B(sx_node ,52),I(1f,0a,24,00),B(mop_gf ,2),I(3c,0b,1f,05),I(1c,24,00,00),B(p_env ,16),I(3c,02,2a,1b),I(24,00,00,00),B(i_param ,36),I(1c,26,00,00),I(00,00,00,14),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1b,45,06,00)};

  eul_allocate_static_string(str_1057, "no lexical binding ~a available", 31);
  /* Byte-vector with size: 67 is_init: 0 index: 58 binding: get-imported-inlined-setter-binding */
  static const void *G001055[] = {I(ab,1c,73,1b),I(24,00,00,00),B(p_env ,7),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,3d),I(1c,1f,03,24),B(p_env ,18),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,23),I(1d,24,00,00),B(sx_node ,5),I(3c,01,1b,23),B(sx_node ,54),I(1f,05,24,00),B(i_notify ,6),I(3c,03,22,01),I(22,01,1b,23),B(sx_node ,55),I(24,00,00,00),B(sx_node ,20),I(3c,02,1b,34),I(00,00,00,a5),I(1c,26,00,00),I(00,00,00,05),I(24,00,00,00),B(sx_obj1 ,42),I(08,23,00,00),B(sx_node ,56),I(1d,0f,1b,86),I(0f,24,00,00),B(sx_obj1 ,72),I(23,00,00,00),B(sx_node ,28),I(1f,0a,23,00),B(sx_node ,29),I(1f,06,23,00),B(sx_node ,30),I(87,23,00,00),B(sx_node ,32),I(1f,10,23,00),B(sx_node ,31),I(87,23,00,00),B(sx_node ,34),I(1f,0c,24,00),B(mop_gf ,2),I(3c,0d,23,00),B(sx_node ,57),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,26),I(00,00,00,0a),I(24,00,00,00),B(sx_obj1 ,59),I(08,1d,1c,0f),I(1d,1c,1c,26),I(00,00,00,0a),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,03,22,07),I(32,00,00,00),I(00,00,00,09),I(86,45,06,00)};

  /* Byte-vector with size: 23 is_init: 0 index: 60 binding: make-dummy-binding */
  static const void *G001061[] = {I(a8,1b,34,00),I(00,00,00,0e),I(1b,10,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,0f),I(23,00,00,00),B(sx_node ,59),I(23,00,00,00),B(sx_node ,57),I(24,00,00,00),B(dynamic ,3),I(3c,01,24,00),B(sx_obj1 ,42),I(23,00,00,00),B(sx_node ,28),I(1f,03,23,00),B(sx_node ,29),I(1f,04,24,00),B(mop_gf ,2),I(3d,05,04,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 61 binding: make-defined-fun */
  static const void *G001064[] = {I(43,03,24,00),B(sx_obj ,13),I(1f,03,1f,03),I(1f,03,24,00),B(sx_node ,8),I(3c,04,1b,24),B(sx_node ,22),I(3c,01,24,00),B(p_env ,5),I(3c,01,2a,1b),I(45,04,00,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 62 binding: compute-arity */
  static const void *G001066[] = {I(aa,1b,24,00),B(list ,25),I(3c,01,1b,34),I(00,00,00,15),I(1c,24,00,00),B(boot ,18),I(3d,01,02,32),I(00,00,00,2d),I(1c,7a,12,1b),I(34,00,00,00),I(00,00,00,10),I(85,32,00,00),I(00,00,00,19),I(1d,24,00,00),B(boot ,18),I(3c,01,1b,83),I(14,82,1c,15),I(22,02,22,01),I(45,02,00,00)};

  /* Byte-vector with size: 99 is_init: 0 index: 68 binding: make-fun */
  static const void *G001068[] = {I(43,fb,1f,03),I(7a,1b,34,00),I(00,00,00,1a),I(1f,04,24,00),B(boot ,18),I(3c,01,83,19),I(32,00,00,00),I(00,00,00,09),I(86,1b,34,00),I(00,00,00,0e),I(1f,05,10,32),I(00,00,00,07),I(1f,05,1f,05),I(7c,1b,34,00),I(00,00,00,16),I(1f,06,24,00),B(boot1 ,25),I(3c,01,32,00),I(00,00,00,08),I(1f,06,1f,07),I(24,00,00,00),B(sx_node ,7),I(3c,01,1f,07),I(24,00,00,00),B(sx_obj1 ,70),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,12),I(23,00,00,00),B(sx_node ,63),I(1f,09,0f,1f),I(08,34,00,00),I(00,00,00,0f),I(1f,08,10,32),I(00,00,00,06),I(86,1f,0d,23),B(sx_node ,48),I(1f,08,23,00),B(sx_node ,64),I(1f,08,23,00),B(sx_node ,65),I(1f,09,23,00),B(sx_node ,66),I(1f,09,23,00),B(sx_node ,67),I(1f,0a,24,00),B(mop_gf ,2),I(3c,0b,1b,24),B(sx_obj ,44),I(3c,01,1b,34),I(00,00,00,b9),I(1f,0e,23,00),B(sx_node ,36),I(50,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,09),I(1f,0a,1b,34),I(00,00,00,4d),I(23,00,00,00),B(sx_node ,57),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,26),I(00,00,00,08),I(24,00,00,00),B(sx_obj1 ,59),I(08,1b,1f,06),I(24,00,00,00),B(thread ,28),I(3c,02,1d,1c),I(1c,26,00,00),I(00,00,00,08),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,05,32),I(00,00,00,48),I(23,00,00,00),B(sx_node ,57),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,26),I(00,00,00,09),I(24,00,00,00),B(sx_obj1 ,59),I(08,1b,1f,06),I(24,00,00,00),B(thread ,28),I(3c,02,1d,1c),I(1c,26,00,00),I(00,00,00,09),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,05,22),I(02,32,00,00),I(00,00,00,08),I(86,2a,1c,45),I(10,00,00,00)};

  /* Byte-vector with size: 68 is_init: 0 index: 74 binding: true-local-binding? */
  static const void *G001075[] = {I(aa,1b,24,00),B(sx_obj1 ,14),I(3c,01,1b,34),I(00,00,01,01),I(1c,84,24,00),B(sx_obj1 ,42),I(08,1d,24,00),B(sx_obj1 ,10),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,db),I(1f,03,26,00),I(00,00,00,03),I(24,00,00,00),B(sx_obj1 ,42),I(08,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,b9),I(1d,24,00,00),B(sx_obj ,7),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,9f),I(1f,05,23,00),B(sx_node ,69),I(24,00,00,00),B(sx_node ,20),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,7d),I(1f,06,23,00),B(sx_node ,70),I(24,00,00,00),B(sx_node ,20),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,5b),I(1f,07,23,00),B(sx_node ,71),I(24,00,00,00),B(sx_node ,20),I(3c,02,23,00),B(sx_node ,72),I(50,1b,34,00),I(00,00,00,1e),I(1f,08,23,00),B(sx_node ,73),I(24,00,00,00),B(sx_node ,20),I(3c,02,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,11),I(1f,07,24,00),B(mop_inspect ,8),I(3c,01,22,02),I(22,01,22,01),I(22,01,22,01),I(12,22,02,32),I(00,00,00,06),I(86,45,02,00)};

  /* Byte-vector with size: 23 is_init: 0 index: 76 binding: make-defined-opencoded-fun */
  static const void *G001082[] = {I(43,03,86,1f),I(03,24,00,00),B(sx_node ,22),I(3c,02,1d,24),B(sx_node ,7),I(3c,01,1c,24),B(p_env ,5),I(3c,01,2a,23),B(sx_node ,71),I(23,00,00,00),B(sx_node ,69),I(0f,23,00,00),B(sx_node ,75),I(1d,0f,23,00),B(sx_node ,69),I(1f,05,0f,1b),I(86,0f,1d,1c),I(0f,1f,04,1c),I(0f,1f,07,1c),I(1c,82,1d,24),B(sx_obj1 ,42),I(09,22,02,2a),I(1f,07,45,0b)};

  /* Byte-vector with size: 7 is_init: 0 index: 77 binding: get-binding-spec-info */
  static const void *G001085[] = {I(ab,1b,1d,1b),I(1d,86,6a,22),I(02,1b,34,00),I(00,00,00,0e),I(1b,11,32,00),I(00,00,00,07),I(86,45,03,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 79 binding: make-setq */
  static const void *G001087[] = {I(ab,24,00,00),B(sx_obj2 ,25),I(23,00,00,00),B(sx_node ,78),I(1f,03,23,00),B(sx_node ,32),I(1f,04,24,00),B(mop_gf ,2),I(3d,05,02,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 82 binding: make-local-static-var */
  static const void *G001090[] = {I(43,fe,1b,34),I(00,00,00,0d),I(1b,10,32,00),I(00,00,00,07),I(86,24,00,00),B(sx_obj2 ,9),I(23,00,00,00),B(sx_node ,48),I(1f,04,23,00),B(sx_node ,80),I(1f,04,23,00),B(sx_node ,81),I(82,24,00,00),B(mop_gf ,2),I(3c,07,1b,24),B(sx_node ,15),I(3c,01,2a,1b),I(45,04,00,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 83 binding: foldable-constant? */
  static const void *G001094[] = {I(aa,1b,24,00),B(number ,24),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,1b),I(1c,81,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,09),I(1d,12,22,01),I(45,02,00,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 85 binding: make-mutable-binding */
  static const void *G001096[] = {I(43,fe,1b,34),I(00,00,00,0d),I(1b,10,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,19),I(1d,23,00,00),B(sx_node ,84),I(24,00,00,00),B(mop_defcl ,7),I(3c,02,1f,03),I(1c,86,24,00),B(sx_node ,23),I(3d,03,04,00)};

  eul_allocate_static_cons(cons_1102, NULL, NULL);
  eul_allocate_static_cons(cons_1101, eul_as_static(cons_1102), NULL);
  /* Byte-vector with size: 70 is_init: 0 index: 87 binding: make-named-const */
  static const void *G001099[] = {I(ab,24,00,00),B(sx_obj2 ,22),I(23,00,00,00),B(sx_node ,48),I(1f,03,23,00),B(sx_node ,80),I(1f,04,24,00),B(mop_gf ,2),I(3c,05,1b,24),B(sx_node ,22),I(3c,01,24,00),B(i_param ,10),I(12,1b,34,00),I(00,00,00,16),I(1f,03,24,00),B(sx_node ,14),I(3c,01,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,56),I(23,00,00,00),B(sx_node ,71),I(23,00,00,00),B(sx_node ,72),I(0f,1f,05,86),I(0f,23,00,00),B(sx_node ,73),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,1f,07,82),I(24,00,00,00),B(sx_obj1 ,42),I(08,1c,1c,24),B(boot ,7),I(3c,02,1f,09),I(1c,1c,82,1d),I(24,00,00,00),B(sx_obj1 ,42),I(09,22,09,32),I(00,00,00,6c),I(23,00,00,00),B(sx_node ,86),I(1f,03,82,24),B(sx_obj1 ,42),I(08,1c,1c,24),B(boot ,7),I(3c,02,1f,05),I(1c,1c,82,1d),I(24,00,00,00),B(sx_obj1 ,42),I(09,22,02,2a),I(23,00,00,00),B(sx_node ,57),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,26),I(00,00,00,0d),I(24,00,00,00),B(sx_obj1 ,59),I(08,1f,08,1c),I(0f,1d,1c,1c),I(26,00,00,00),I(00,00,00,0d),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,08,2a),I(1d,24,00,00),B(p_env ,5),I(3c,01,2a,1f),I(03,45,06,00)};

  /* Byte-vector with size: 29 is_init: 0 index: 88 binding: make-global-var */
  static const void *G001103[] = {I(ab,24,00,00),B(sx_obj2 ,28),I(23,00,00,00),B(sx_node ,48),I(1f,03,23,00),B(sx_node ,80),I(1f,04,23,00),B(sx_node ,81),I(82,24,00,00),B(mop_gf ,2),I(3c,07,1b,24),B(sx_node ,15),I(3c,01,24,00),B(p_env ,5),I(3c,01,2a,23),B(sx_node ,57),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,26),I(00,00,00,0c),I(24,00,00,00),B(sx_obj1 ,59),I(08,1d,1c,0f),I(1d,1c,1c,26),I(00,00,00,0c),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,03,45,06)};

  /* Byte-vector with size: 60 is_init: 0 index: 89 binding: make-defined-external-fun */
  static const void *G001105[] = {I(43,04,24,00),B(i_ffi ,7),I(1f,03,24,00),B(boot ,10),I(3c,02,1d,24),B(i_ffi ,3),I(3c,01,86,1f),I(06,24,00,00),B(sx_node ,22),I(3c,02,1f,05),I(24,00,00,00),B(sx_node ,7),I(3c,01,1f,04),I(34,00,00,00),I(00,00,00,10),I(1f,04,10,32),I(00,00,00,06),I(86,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,0b),I(1f,08,82,02),I(1f,03,24,00),B(p_env ,5),I(3c,01,2a,23),B(sx_node ,71),I(23,00,00,00),B(sx_node ,70),I(0f,23,00,00),B(sx_node ,75),I(1f,04,0f,1d),I(86,0f,1f,07),I(1c,0f,1f,09),I(1c,0f,23,00),B(sx_node ,70),I(1c,0f,1b,86),I(0f,1f,05,1c),I(0f,1f,07,1c),I(0f,1f,0c,1c),I(1c,82,1d,24),B(sx_obj1 ,42),I(09,22,02,2a),I(23,00,00,00),B(sx_node ,57),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,26),I(00,00,00,07),I(24,00,00,00),B(sx_obj1 ,59),I(08,1b,1f,0f),I(24,00,00,00),B(thread ,28),I(3c,02,1d,1c),I(1c,26,00,00),I(00,00,00,07),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,0f,45,16)};

  /* Byte-vector with size: 5 is_init: 0 index: 90 binding: anonymous */
  static const void *G001107[] = {I(aa,1b,47,00),I(00,1c,83,1d),I(24,00,00,00),B(sx_obj2 ,9),I(09,45,03,00)};

  /* Byte-vector with size: 20 is_init: 0 index: 91 binding: make-let* */
  static const void *G001109[] = {I(ab,46,01,24),B(sx_obj ,2),I(23,00,00,00),B(sx_node ,36),I(1f,03,1f,03),I(24,00,00,00),B(sx_node ,8),I(3c,04,1b,48),I(00,00,23,00),B(sx_node ,36),I(23,00,00,00),B(sx_node ,90),I(3b,01,1f,03),I(24,00,00,00),B(boot ,16),I(3c,02,2a,1d),I(24,00,00,00),B(sx_node ,2),I(3c,01,2a,47),I(00,00,45,03)};

  /* Byte-vector with size: 5 is_init: 0 index: 92 binding: get-binding-info */
  static const void *G001111[] = {I(ab,1c,82,24),B(sx_obj1 ,42),I(08,24,00,00),B(sx_node ,11),I(3d,02,01,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 93 binding: make-immutable-binding */
  static const void *G001113[] = {I(43,fe,1b,34),I(00,00,00,0d),I(1b,10,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,19),I(1d,23,00,00),B(sx_node ,84),I(24,00,00,00),B(mop_defcl ,7),I(3c,02,1f,03),I(1c,87,24,00),B(sx_node ,23),I(3d,03,04,00)};

  /* Byte-vector with size: 31 is_init: 0 index: 94 binding: make-binding */
  static const void *G001115[] = {I(43,fd,23,00),B(sx_node ,57),I(24,00,00,00),B(dynamic ,3),I(3c,01,1c,34),I(00,00,00,0d),I(1c,10,32,00),I(00,00,00,07),I(86,24,00,00),B(sx_obj1 ,42),I(23,00,00,00),B(sx_node ,28),I(1f,05,23,00),B(sx_node ,29),I(1f,05,23,00),B(sx_node ,30),I(1f,06,23,00),B(sx_node ,32),I(1f,0c,24,00),B(mop_gf ,2),I(3c,09,1f,05),I(24,00,00,00),B(sx_obj1 ,70),I(3c,01,1b,34),I(00,00,00,15),I(1f,06,1d,24),B(sx_obj ,33),I(3c,02,32,00),I(00,00,00,07),I(86,2a,1c,45),I(07,00,00,00)};

  /* Byte-vector with size: 17 is_init: 0 index: 95 binding: anonymous */
  static const void *G001117[] = {I(aa,1b,34,00),I(00,00,00,3e),I(1b,10,1b,26),I(00,00,00,06),I(24,00,00,00),B(sx_obj1 ,42),I(08,1b,73,1b),I(47,00,01,50),I(1b,34,00,00),I(00,00,00,0f),I(1f,04,10,32),I(00,00,00,0e),I(1f,04,11,47),I(00,00,3d,01),I(05,22,04,32),I(00,00,00,06),I(86,45,01,00)};

  /* Byte-vector with size: 26 is_init: 0 index: 96 binding: get-inlined-setter-binding */
  static const void *G001119[] = {I(ab,46,03,1c),I(73,1b,48,00),I(01,86,1b,48),I(00,00,23,00),B(sx_node ,36),I(23,00,00,00),B(sx_node ,95),I(3b,01,48,00),I(00,1f,03,1f),I(03,24,00,00),B(sx_node ,4),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,30),I(23,00,00,00),B(sx_node ,57),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,26),I(00,00,00,0a),I(24,00,00,00),B(sx_obj1 ,59),I(08,47,00,00),I(3d,01,06,22),I(01,45,05,00)};

  /* Byte-vector with size: 30 is_init: 0 index: 97 binding: register-binding-ref */
  static const void *G001121[] = {I(aa,23,00,00),B(sx_node ,46),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(sx_node ,57),I(24,00,00,00),B(dynamic ,3),I(3c,01,1c,34),I(00,00,00,25),I(1c,82,24,00),B(sx_obj ,13),I(08,1f,03,1c),I(0f,1f,03,1c),I(1c,82,1d,24),B(sx_obj ,13),I(09,22,04,32),I(00,00,00,30),I(1b,26,00,00),I(00,00,00,05),I(24,00,00,00),B(sx_obj1 ,59),I(08,1f,03,1c),I(0f,1d,1c,1c),I(26,00,00,00),I(00,00,00,05),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,04,45),I(03,00,00,00)};

  /* Byte-vector with size: 29 is_init: 0 index: 98 binding: make-inlined-setter */
  static const void *G001123[] = {I(43,03,24,00),B(sx_obj ,13),I(1f,03,1f,03),I(1f,03,24,00),B(sx_node ,8),I(3c,04,1b,24),B(sx_node ,22),I(3c,01,1c,87),I(1c,84,1d,24),B(sx_obj ,13),I(09,22,02,2a),I(23,00,00,00),B(sx_node ,57),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,26),I(00,00,00,0a),I(24,00,00,00),B(sx_obj1 ,59),I(08,1b,1f,03),I(24,00,00,00),B(thread ,28),I(3c,02,1d,1c),I(1c,26,00,00),I(00,00,00,0a),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,04,45,08)};

  /* Byte-vector with size: 176 is_init: 1 index: 0 binding: initialize-sx-node */
  static const void *G001125[] = {I(87,25,00,00),B(sx_node ,1),I(24,00,00,00),B(p_env ,1),I(3e,0b,24,00),B(p_env ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(i_ffi ,1),I(3e,0b,24,00),B(i_ffi ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(86,25,00,00),B(sx_node ,27),I(23,00,00,00),B(sx_node ,99),I(23,00,00,00),B(sx_node ,98),I(3b,03,25,00),B(sx_node ,26),I(23,00,00,00),B(sx_node ,100),I(23,00,00,00),B(sx_node ,97),I(3b,01,25,00),B(sx_node ,25),I(23,00,00,00),B(sx_node ,101),I(23,00,00,00),B(sx_node ,96),I(3b,02,25,00),B(sx_node ,24),I(23,00,00,00),B(sx_node ,102),I(23,00,00,00),B(sx_node ,94),I(3b,fd,25,00),B(sx_node ,23),I(23,00,00,00),B(sx_node ,103),I(23,00,00,00),B(sx_node ,93),I(3b,fe,25,00),B(sx_node ,22),I(86,25,00,00),B(sx_node ,21),I(23,00,00,00),B(sx_node ,104),I(23,00,00,00),B(sx_node ,92),I(3b,02,25,00),B(sx_node ,20),I(23,00,00,00),B(sx_node ,105),I(23,00,00,00),B(sx_node ,91),I(3b,02,25,00),B(sx_node ,19),I(23,00,00,00),B(sx_node ,106),I(23,00,00,00),B(sx_node ,89),I(3b,04,25,00),B(sx_node ,18),I(23,00,00,00),B(sx_node ,107),I(23,00,00,00),B(sx_node ,88),I(3b,02,25,00),B(sx_node ,17),I(23,00,00,00),B(sx_node ,108),I(23,00,00,00),B(sx_node ,87),I(3b,02,25,00),B(sx_node ,16),I(23,00,00,00),B(sx_node ,109),I(23,00,00,00),B(sx_node ,85),I(3b,fe,25,00),B(sx_node ,15),I(23,00,00,00),B(sx_node ,110),I(23,00,00,00),B(sx_node ,83),I(3b,01,25,00),B(sx_node ,14),I(23,00,00,00),B(sx_node ,111),I(23,00,00,00),B(sx_node ,82),I(3b,fe,25,00),B(sx_node ,13),I(23,00,00,00),B(sx_node ,112),I(23,00,00,00),B(sx_node ,79),I(3b,02,25,00),B(sx_node ,12),I(23,00,00,00),B(sx_node ,113),I(23,00,00,00),B(sx_node ,77),I(3b,02,25,00),B(sx_node ,11),I(23,00,00,00),B(sx_node ,114),I(23,00,00,00),B(sx_node ,76),I(3b,03,25,00),B(sx_node ,10),I(23,00,00,00),B(sx_node ,115),I(23,00,00,00),B(sx_node ,74),I(3b,01,25,00),B(sx_node ,9),I(23,00,00,00),B(sx_node ,116),I(23,00,00,00),B(sx_node ,68),I(3b,fb,25,00),B(sx_node ,8),I(23,00,00,00),B(sx_node ,117),I(23,00,00,00),B(sx_node ,62),I(3b,01,25,00),B(sx_node ,7),I(23,00,00,00),B(sx_node ,118),I(23,00,00,00),B(sx_node ,61),I(3b,03,25,00),B(sx_node ,6),I(23,00,00,00),B(sx_node ,119),I(23,00,00,00),B(sx_node ,60),I(3b,ff,25,00),B(sx_node ,5),I(23,00,00,00),B(sx_node ,120),I(23,00,00,00),B(sx_node ,58),I(3b,02,25,00),B(sx_node ,4),I(23,00,00,00),B(sx_node ,121),I(23,00,00,00),B(sx_node ,53),I(3b,01,25,00),B(sx_node ,3),I(23,00,00,00),B(sx_node ,122),I(23,00,00,00),B(sx_node ,47),I(3b,01,25,00),B(sx_node ,2),I(23,00,00,00),B(sx_node ,123),I(23,00,00,00),B(sx_node ,45),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_intern_keyword(key_1024,"local-name");
  eul_intern_keyword(key_1025,"module");
  eul_intern_keyword(key_1026,"immutable");
  eul_intern_keyword(key_1027,"imported");
  eul_intern_keyword(key_1028,"obj");
  eul_intern_keyword(key_1029,"local-index");
  eul_intern_keyword(key_1030,"info");
  eul_allocate_bytevector( G001023,G001022);
  eul_intern_symbol(sym_1033,"anonymous");
  eul_allocate_bytevector( G001032,G001031);
  eul_allocate_bytevector( G001035,G001034);
  eul_allocate_bytevector( G001037,G001036);
  eul_intern_symbol(sym_1040,"binding-origin-module-name");
  eul_intern_symbol(sym_1041,"clone-node");
  eul_intern_symbol(sym_1042,"(method binding-origin-module-name)");
  eul_intern_symbol(sym_1043,"(method get-named-encl-lambda)");
  eul_intern_symbol(sym_1044,"(method clone-node)");
  eul_allocate_bytevector( G001039,G001038);
  eul_intern_symbol(sym_1047,"*encl-lambda*");
  eul_allocate_bytevector( G001046,G001045);
  eul_intern_keyword(key_1050,"name");
  eul_intern_keyword(key_1051,"lexical-env");
  eul_intern_keyword(key_1052,"interactive-lexical-env");
  eul_intern_keyword(key_1053,"external-env");
  eul_intern_keyword(key_1054,"syntax-env");
  eul_allocate_bytevector( G001049,G001048);
  object_class(str_1057) = eul_static_string_class;
  eul_intern_symbol(sym_1058,"setter");
  eul_intern_symbol(sym_1059,"inline");
  eul_intern_symbol(sym_1060,"*actual-module*");
  eul_allocate_bytevector( G001056,G001055);
  eul_intern_symbol(sym_1063," unbound ");
  eul_allocate_bytevector( G001062,G001061);
  eul_allocate_bytevector( G001065,G001064);
  eul_allocate_bytevector( G001067,G001066);
  eul_intern_symbol(sym_1070,"progn");
  eul_intern_keyword(key_1071,"args");
  eul_intern_keyword(key_1072,"arity");
  eul_intern_keyword(key_1073,"body");
  eul_intern_keyword(key_1074,"has-unknown-appls");
  eul_allocate_bytevector( G001069,G001068);
  eul_intern_symbol(sym_1077,"opencoding");
  eul_intern_symbol(sym_1078,"ff");
  eul_intern_symbol(sym_1079,"class");
  eul_intern_symbol(sym_1080,"constant");
  eul_intern_symbol(sym_1081,"value");
  eul_allocate_bytevector( G001076,G001075);
  eul_intern_symbol(sym_1084,"arity");
  eul_allocate_bytevector( G001083,G001082);
  eul_allocate_bytevector( G001086,G001085);
  eul_intern_keyword(key_1089,"binding");
  eul_allocate_bytevector( G001088,G001087);
  eul_intern_keyword(key_1092,"value");
  eul_intern_keyword(key_1093,"used");
  eul_allocate_bytevector( G001091,G001090);
  eul_allocate_bytevector( G001095,G001094);
  eul_intern_symbol(sym_1098,"name");
  eul_allocate_bytevector( G001097,G001096);
  object_class(cons_1102) = eul_static_cons_class;
  eul_car(cons_1102) = sym_1079;
  eul_cdr(cons_1102) = sym_1080;
  object_class(cons_1101) = eul_static_cons_class;
  eul_cdr(cons_1101) = eul_nil;
  eul_allocate_bytevector( G001100,G001099);
  eul_allocate_bytevector( G001104,G001103);
  eul_allocate_bytevector( G001106,G001105);
  eul_allocate_bytevector( G001108,G001107);
  eul_allocate_bytevector( G001110,G001109);
  eul_allocate_bytevector( G001112,G001111);
  eul_allocate_bytevector( G001114,G001113);
  eul_allocate_bytevector( G001116,G001115);
  eul_allocate_bytevector( G001118,G001117);
  eul_allocate_bytevector( G001120,G001119);
  eul_allocate_bytevector( G001122,G001121);
  eul_allocate_bytevector( G001124,G001123);
  eul_intern_symbol(sym_1127,"make-inlined-setter");
  eul_intern_symbol(sym_1128,"register-binding-ref");
  eul_intern_symbol(sym_1129,"get-inlined-setter-binding");
  eul_intern_symbol(sym_1130,"make-binding");
  eul_intern_symbol(sym_1131,"make-immutable-binding");
  eul_intern_symbol(sym_1132,"get-binding-info");
  eul_intern_symbol(sym_1133,"make-let*");
  eul_intern_symbol(sym_1134,"make-defined-external-fun");
  eul_intern_symbol(sym_1135,"make-global-var");
  eul_intern_symbol(sym_1136,"make-named-const");
  eul_intern_symbol(sym_1137,"make-mutable-binding");
  eul_intern_symbol(sym_1138,"foldable-constant?");
  eul_intern_symbol(sym_1139,"make-local-static-var");
  eul_intern_symbol(sym_1140,"make-setq");
  eul_intern_symbol(sym_1141,"get-binding-spec-info");
  eul_intern_symbol(sym_1142,"make-defined-opencoded-fun");
  eul_intern_symbol(sym_1143,"true-local-binding?");
  eul_intern_symbol(sym_1144,"make-fun");
  eul_intern_symbol(sym_1145,"compute-arity");
  eul_intern_symbol(sym_1146,"make-defined-fun");
  eul_intern_symbol(sym_1147,"make-dummy-binding");
  eul_intern_symbol(sym_1148,"get-imported-inlined-setter-binding");
  eul_intern_symbol(sym_1149,"make-module");
  eul_intern_symbol(sym_1150,"register-delegated-vars");
  eul_intern_symbol(sym_1151,"top-level");
  eul_allocate_bytevector( G001126,G001125);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 28; i++)
      sx_node_bindings[i] = eul_nil;
  }

  sx_node_bindings[ 28] = key_1024;
  sx_node_bindings[ 29] = key_1025;
  sx_node_bindings[ 30] = key_1026;
  sx_node_bindings[ 31] = key_1027;
  sx_node_bindings[ 32] = key_1028;
  sx_node_bindings[ 33] = key_1029;
  sx_node_bindings[ 34] = key_1030;
  sx_node_bindings[ 35] = G001023;
  sx_node_bindings[ 36] = sym_1033;
  sx_node_bindings[ 37] = G001032;
  sx_node_bindings[ 38] = G001035;
  sx_node_bindings[ 39] = G001037;
  sx_node_bindings[ 40] = sym_1040;
  sx_node_bindings[ 41] = sym_1041;
  sx_node_bindings[ 42] = sym_1042;
  sx_node_bindings[ 43] = sym_1043;
  sx_node_bindings[ 44] = sym_1044;
  sx_node_bindings[ 45] = G001039;
  sx_node_bindings[ 46] = sym_1047;
  sx_node_bindings[ 47] = G001046;
  sx_node_bindings[ 48] = key_1050;
  sx_node_bindings[ 49] = key_1051;
  sx_node_bindings[ 50] = key_1052;
  sx_node_bindings[ 51] = key_1053;
  sx_node_bindings[ 52] = key_1054;
  sx_node_bindings[ 53] = G001049;
  sx_node_bindings[ 54] = str_1057;
  sx_node_bindings[ 55] = sym_1058;
  sx_node_bindings[ 56] = sym_1059;
  sx_node_bindings[ 57] = sym_1060;
  sx_node_bindings[ 58] = G001056;
  sx_node_bindings[ 59] = sym_1063;
  sx_node_bindings[ 60] = G001062;
  sx_node_bindings[ 61] = G001065;
  sx_node_bindings[ 62] = G001067;
  sx_node_bindings[ 63] = sym_1070;
  sx_node_bindings[ 64] = key_1071;
  sx_node_bindings[ 65] = key_1072;
  sx_node_bindings[ 66] = key_1073;
  sx_node_bindings[ 67] = key_1074;
  sx_node_bindings[ 68] = G001069;
  sx_node_bindings[ 69] = sym_1077;
  sx_node_bindings[ 70] = sym_1078;
  sx_node_bindings[ 71] = sym_1079;
  sx_node_bindings[ 72] = sym_1080;
  sx_node_bindings[ 73] = sym_1081;
  sx_node_bindings[ 74] = G001076;
  sx_node_bindings[ 75] = sym_1084;
  sx_node_bindings[ 76] = G001083;
  sx_node_bindings[ 77] = G001086;
  sx_node_bindings[ 78] = key_1089;
  sx_node_bindings[ 79] = G001088;
  sx_node_bindings[ 80] = key_1092;
  sx_node_bindings[ 81] = key_1093;
  sx_node_bindings[ 82] = G001091;
  sx_node_bindings[ 83] = G001095;
  sx_node_bindings[ 84] = sym_1098;
  sx_node_bindings[ 85] = G001097;
  sx_node_bindings[ 86] = cons_1101;
  sx_node_bindings[ 87] = G001100;
  sx_node_bindings[ 88] = G001104;
  sx_node_bindings[ 89] = G001106;
  sx_node_bindings[ 90] = G001108;
  sx_node_bindings[ 91] = G001110;
  sx_node_bindings[ 92] = G001112;
  sx_node_bindings[ 93] = G001114;
  sx_node_bindings[ 94] = G001116;
  sx_node_bindings[ 95] = G001118;
  sx_node_bindings[ 96] = G001120;
  sx_node_bindings[ 97] = G001122;
  sx_node_bindings[ 98] = G001124;
  sx_node_bindings[ 1] = eul_nil;
  sx_node_bindings[ 99] = sym_1127;
  sx_node_bindings[ 100] = sym_1128;
  sx_node_bindings[ 101] = sym_1129;
  sx_node_bindings[ 102] = sym_1130;
  sx_node_bindings[ 103] = sym_1131;
  sx_node_bindings[ 104] = sym_1132;
  sx_node_bindings[ 105] = sym_1133;
  sx_node_bindings[ 106] = sym_1134;
  sx_node_bindings[ 107] = sym_1135;
  sx_node_bindings[ 108] = sym_1136;
  sx_node_bindings[ 109] = sym_1137;
  sx_node_bindings[ 110] = sym_1138;
  sx_node_bindings[ 111] = sym_1139;
  sx_node_bindings[ 112] = sym_1140;
  sx_node_bindings[ 113] = sym_1141;
  sx_node_bindings[ 114] = sym_1142;
  sx_node_bindings[ 115] = sym_1143;
  sx_node_bindings[ 116] = sym_1144;
  sx_node_bindings[ 117] = sym_1145;
  sx_node_bindings[ 118] = sym_1146;
  sx_node_bindings[ 119] = sym_1147;
  sx_node_bindings[ 120] = sym_1148;
  sx_node_bindings[ 121] = sym_1149;
  sx_node_bindings[ 122] = sym_1150;
  sx_node_bindings[ 123] = sym_1151;
  eul_allocate_lambda( sx_node_bindings[0], "initialize-sx-node", 0, G001126);

  }
}


/* eof */
