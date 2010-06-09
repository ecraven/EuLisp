/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module mop-defcl
 **  Copyright: See file mop-defcl.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_boot();
extern void initialize_module_mop_prim();
extern void initialize_module_mop_inspect();
extern void initialize_module_mop_key();
extern void initialize_module_mop_class();
extern void initialize_module_mop_init();
extern void initialize_module_mop_gf();
extern void initialize_module_mop_meth();
extern LispRef mop_key_bindings[];
extern LispRef mop_prim_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef mop_init_bindings[];
extern LispRef boot_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_inspect_bindings[];

/* Module bindings with size 74 */
LispRef mop_defcl_bindings[74];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module mop-defcl */
void initialize_module_mop_defcl()
{
  if (is_initialized) return;
  initialize_module_boot();
  initialize_module_mop_prim();
  initialize_module_mop_inspect();
  initialize_module_mop_key();
  initialize_module_mop_class();
  initialize_module_mop_init();
  initialize_module_mop_gf();
  initialize_module_mop_meth();
  eul_fast_table_set(eul_modules,"mop_defcl",(LispRef) mop_defcl_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_2675, sym_2674, sym_2673, sym_2672, sym_2671, sym_2670, sym_2669, G002668, key_2666, G002665, G002663, G002661, G002659, G002656, G002654, G002652, G002650, G002648, G002646, sym_2644, sym_2643, sym_2642, sym_2641, sym_2639, sym_2637, sym_2636, sym_2635, sym_2634, sym_2633, sym_2632, G002631, G002629, G002627, G002625, G002623, G002621, G002619, G002617, G002615, G002613, G002611, G002609, G002607, G002605, G002603, G002601, G002599, G002597, G002595, G002593, G002591, G002589, G002587, G002585, G002583, G002581, G002579, G002577, G002575, G002573;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 3 is_init: 0 index: 13 binding: anonymous */
  static const void *G002572[] = {I(ab,1c,26,00),I(00,00,00,0b),I(1d,03,45,02)};

  /* Byte-vector with size: 3 is_init: 0 index: 14 binding: anonymous */
  static const void *G002574[] = {I(ab,1c,26,00),I(00,00,00,0a),I(1d,03,45,02)};

  /* Byte-vector with size: 3 is_init: 0 index: 15 binding: anonymous */
  static const void *G002576[] = {I(ab,1c,26,00),I(00,00,00,09),I(1d,03,45,02)};

  /* Byte-vector with size: 3 is_init: 0 index: 16 binding: anonymous */
  static const void *G002578[] = {I(ab,1c,26,00),I(00,00,00,08),I(1d,03,45,02)};

  /* Byte-vector with size: 3 is_init: 0 index: 17 binding: anonymous */
  static const void *G002580[] = {I(ab,1c,26,00),I(00,00,00,07),I(1d,03,45,02)};

  /* Byte-vector with size: 3 is_init: 0 index: 18 binding: anonymous */
  static const void *G002582[] = {I(ab,1c,26,00),I(00,00,00,06),I(1d,03,45,02)};

  /* Byte-vector with size: 3 is_init: 0 index: 19 binding: anonymous */
  static const void *G002584[] = {I(ab,1c,26,00),I(00,00,00,05),I(1d,03,45,02)};

  /* Byte-vector with size: 3 is_init: 0 index: 20 binding: anonymous */
  static const void *G002586[] = {I(ab,1c,26,00),I(00,00,00,04),I(1d,03,45,02)};

  /* Byte-vector with size: 3 is_init: 0 index: 21 binding: anonymous */
  static const void *G002588[] = {I(ab,1c,26,00),I(00,00,00,03),I(1d,03,45,02)};

  /* Byte-vector with size: 2 is_init: 0 index: 22 binding: anonymous */
  static const void *G002590[] = {I(ab,1c,84,1d),I(03,45,02,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 23 binding: anonymous */
  static const void *G002592[] = {I(ab,1c,83,1d),I(03,45,02,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 24 binding: anonymous */
  static const void *G002594[] = {I(ab,1c,82,1d),I(03,45,02,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 25 binding: anonymous */
  static const void *G002596[] = {I(aa,26,00,00),I(00,00,00,0b),I(02,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 26 binding: anonymous */
  static const void *G002598[] = {I(aa,26,00,00),I(00,00,00,0a),I(02,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 27 binding: anonymous */
  static const void *G002600[] = {I(aa,26,00,00),I(00,00,00,09),I(02,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 28 binding: anonymous */
  static const void *G002602[] = {I(aa,26,00,00),I(00,00,00,08),I(02,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 29 binding: anonymous */
  static const void *G002604[] = {I(aa,26,00,00),I(00,00,00,07),I(02,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 30 binding: anonymous */
  static const void *G002606[] = {I(aa,26,00,00),I(00,00,00,06),I(02,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 31 binding: anonymous */
  static const void *G002608[] = {I(aa,26,00,00),I(00,00,00,05),I(02,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 32 binding: anonymous */
  static const void *G002610[] = {I(aa,26,00,00),I(00,00,00,04),I(02,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 33 binding: anonymous */
  static const void *G002612[] = {I(aa,26,00,00),I(00,00,00,03),I(02,45,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 34 binding: anonymous */
  static const void *G002614[] = {I(aa,84,02,45),I(00,00,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 35 binding: anonymous */
  static const void *G002616[] = {I(aa,83,02,45),I(00,00,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 36 binding: anonymous */
  static const void *G002618[] = {I(aa,82,02,45),I(00,00,00,00)};

  /* Byte-vector with size: 26 is_init: 0 index: 37 binding: (setter-slot-value) */
  static const void *G002620[] = {I(43,03,1d,04),I(1b,04,24,00),B(mop_inspect ,9),I(3c,01,1b,34),I(00,00,00,29),I(24,00,00,00),B(mop_inspect ,4),I(24,00,00,00),B(boot1 ,39),I(3c,01,1f,05),I(1f,05,1f,05),I(1f,03,3d,03),I(06,22,01,32),I(00,00,00,33),I(24,00,00,00),B(mop_defcl ,10),I(24,00,00,00),B(boot1 ,39),I(3c,01,1f,05),I(04,1b,1f,06),I(24,00,00,00),B(mop_defcl ,8),I(3c,02,1b,1f),I(08,1f,07,1f),I(05,3d,03,08),I(22,03,45,05)};

  /* Byte-vector with size: 6 is_init: 0 index: 38 binding: (method-(setter slot-value-using-slot)) */
  static const void *G002622[] = {I(43,03,1d,82),I(02,1b,24,00),B(boot1 ,39),I(3c,01,1f,03),I(1f,03,1d,3d),I(02,05,45,05)};

  /* Byte-vector with size: 3 is_init: 0 index: 39 binding: (method-slot-value-using-slot) */
  static const void *G002624[] = {I(ab,1c,82,02),I(1c,1c,3d,01),I(03,45,03,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 40 binding: (method-remove-class) */
  static const void *G002626[] = {I(aa,1b,84,02),I(10,1b,26,00),I(00,00,00,03),I(02,1d,1c,24),B(boot ,5),I(3c,02,1d,1c),I(1c,26,00,00),I(00,00,00,03),I(1d,03,22,02),I(2a,24,00,00),B(mop_init ,2),I(3c,00,2a,1f),I(03,45,04,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 41 binding: (method-add-subclass) */
  static const void *G002628[] = {I(ab,1c,26,00),I(00,00,00,03),I(02,1c,1c,0f),I(1f,03,1c,1c),I(26,00,00,00),I(00,00,00,03),I(1d,03,45,06)};

  eul_allocate_static_cons(cons_2640, NULL, NULL);
  eul_allocate_static_cons(cons_2638, NULL, eul_as_static(cons_2640));
  /* Byte-vector with size: 594 is_init: 0 index: 54 binding: top-level */
  static const void *G002630[] = {I(a9,84,24,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(boot1 ,37),I(3c,03,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_defcl ,42),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_defcl ,9),I(2a,83,24,00),B(mop_class ,75),I(24,00,00,00),B(boot1 ,37),I(3c,02,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_defcl ,43),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_defcl ,4),I(2a,84,24,00),B(mop_class ,49),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,37),I(3c,03,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_defcl ,44),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_defcl ,10),I(2a,86,26,00),I(00,00,00,0c),I(01,1b,89,00),B(mop_defcl ,2),I(2a,86,26,00),I(00,00,00,0c),I(01,1b,89,00),B(mop_defcl ,5),I(2a,24,00,00),B(mop_defcl ,9),I(2a,24,00,00),B(mop_defcl ,9),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(boot1 ,37),I(3c,03,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_defcl ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_defcl ,45),I(23,00,00,00),B(mop_defcl ,41),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_defcl ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_defcl ,4),I(2a,24,00,00),B(mop_defcl ,4),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,75),I(24,00,00,00),B(boot1 ,37),I(3c,02,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_defcl ,4),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_defcl ,46),I(23,00,00,00),B(mop_defcl ,40),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_defcl ,4),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_defcl ,10),I(2a,24,00,00),B(mop_defcl ,10),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,49),I(86,24,00,00),B(boot1 ,37),I(3c,03,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_defcl ,10),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_defcl ,47),I(23,00,00,00),B(mop_defcl ,39),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_defcl ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(boot1 ,39),I(24,00,00,00),B(boot1 ,39),I(3c,01,26,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,49),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_defcl ,49),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(mop_defcl ,10),I(1c,1f,06,3c),I(02,2a,24,00),B(mop_defcl ,10),I(24,00,00,00),B(boot1 ,39),I(3c,01,2a,24),B(mop_defcl ,10),I(24,00,00,00),B(boot1 ,39),I(3c,01,24,00),B(mop_defcl ,10),I(24,00,00,00),B(boot1 ,39),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,49),I(86,86,24,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_defcl ,10),I(24,00,00,00),B(boot1 ,39),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,11),I(3c,02,1f,05),I(1f,05,23,00),B(mop_defcl ,50),I(23,00,00,00),B(mop_defcl ,38),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(boot1 ,39),I(24,00,00,00),B(boot1 ,39),I(3c,01,24,00),B(mop_defcl ,7),I(23,00,00,00),B(mop_defcl ,51),I(23,00,00,00),B(mop_defcl ,37),I(3b,03,1d,3c),I(02,2a,24,00),B(mop_defcl ,2),I(82,23,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,36),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,2),I(83,23,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,35),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,2),I(84,23,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,34),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,2),I(26,00,00,00),I(00,00,00,03),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,33),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,2),I(26,00,00,00),I(00,00,00,04),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,32),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,2),I(26,00,00,00),I(00,00,00,05),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,31),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,2),I(26,00,00,00),I(00,00,00,06),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,30),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,2),I(26,00,00,00),I(00,00,00,07),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,29),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,2),I(26,00,00,00),I(00,00,00,08),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,28),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,2),I(26,00,00,00),I(00,00,00,09),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,27),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,2),I(26,00,00,00),I(00,00,00,0a),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,26),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,2),I(26,00,00,00),I(00,00,00,0b),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,25),I(3b,01,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(82,23,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,24),I(3b,02,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(83,23,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,23),I(3b,02,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(84,23,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,22),I(3b,02,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(26,00,00,00),I(00,00,00,03),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,21),I(3b,02,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(26,00,00,00),I(00,00,00,04),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,20),I(3b,02,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(26,00,00,00),I(00,00,00,05),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,19),I(3b,02,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(26,00,00,00),I(00,00,00,06),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,18),I(3b,02,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(26,00,00,00),I(00,00,00,07),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,17),I(3b,02,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(26,00,00,00),I(00,00,00,08),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,16),I(3b,02,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(26,00,00,00),I(00,00,00,09),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,15),I(3b,02,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(26,00,00,00),I(00,00,00,0a),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,14),I(3b,02,03,2a),I(24,00,00,00),B(mop_defcl ,5),I(26,00,00,00),I(00,00,00,0b),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,13),I(3b,02,03,2a),I(24,00,00,00),B(mop_class ,64),I(24,00,00,00),B(mop_class ,67),I(24,00,00,00),B(mop_defcl ,11),I(3c,02,24,00),B(mop_class ,70),I(1c,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,75),I(1c,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,24),I(1c,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,79),I(24,00,00,00),B(mop_class ,37),I(24,00,00,00),B(mop_defcl ,11),I(3c,02,1b,10),I(1c,11,1b,10),I(1f,03,11,1b),I(11,1b,10,1f),I(05,1f,04,1d),I(24,00,00,00),B(boot1 ,23),I(3c,03,24,00),B(mop_class ,38),I(24,00,00,00),B(mop_class ,43),I(26,00,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_defcl ,11),I(3c,03,24,00),B(mop_class ,27),I(1d,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,1c,1c,24),B(boot ,11),I(3c,02,24,00),B(mop_class ,2),I(1c,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,44),I(1f,0a,1c,26),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,15),I(1f,0a,1c,26),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,2),I(23,00,00,00),B(mop_defcl ,53),I(24,00,00,00),B(mop_defcl ,8),I(3c,02,1b,24),B(mop_class ,65),I(1c,82,1d,03),I(22,02,2a,24),B(mop_class ,65),I(24,00,00,00),B(boot1 ,39),I(3c,01,1c,1c),I(1c,83,1d,03),I(22,02,2a,24),B(mop_class ,26),I(24,00,00,00),B(mop_class ,34),I(24,00,00,00),B(mop_defcl ,11),I(3c,02,24,00),B(mop_class ,22),I(1c,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,54),I(1c,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,28),I(24,00,00,00),B(mop_class ,4),I(24,00,00,00),B(mop_defcl ,11),I(3c,02,1b,10),I(1c,11,1b,10),I(1d,1c,24,00),B(boot1 ,23),I(3c,02,24,00),B(mop_class ,49),I(1c,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,56),I(1f,05,1c,26),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,3),I(24,00,00,00),B(mop_class ,78),I(24,00,00,00),B(mop_defcl ,11),I(3c,02,24,00),B(mop_class ,33),I(1c,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,5),I(1c,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,81),I(1c,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,24,00,00),B(mop_class ,46),I(24,00,00,00),B(mop_class ,40),I(24,00,00,00),B(mop_defcl ,11),I(3c,02,24,00),B(mop_class ,71),I(1c,1c,26,00),I(00,00,00,04),I(1d,03,45,46)};

  /* Byte-vector with size: 3 is_init: 0 index: 55 binding: anonymous */
  static const void *G002645[] = {I(ab,1c,47,00),I(00,1d,03,45),I(02,00,00,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 56 binding: predefined-writer */
  static const void *G002647[] = {I(aa,46,01,1b),I(48,00,00,47),I(00,00,26,00),I(00,00,00,0c),I(1a,1b,34,00),I(00,00,00,1a),I(24,00,00,00),B(mop_defcl ,5),I(47,00,00,02),I(32,00,00,00),I(00,00,00,1a),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,55),I(3b,02,45,02)};

  /* Byte-vector with size: 2 is_init: 0 index: 57 binding: anonymous */
  static const void *G002649[] = {I(aa,1b,47,00),I(00,02,45,01)};

  /* Byte-vector with size: 16 is_init: 0 index: 58 binding: predefined-reader */
  static const void *G002651[] = {I(aa,46,01,1b),I(48,00,00,47),I(00,00,26,00),I(00,00,00,0c),I(1a,1b,34,00),I(00,00,00,1a),I(24,00,00,00),B(mop_defcl ,2),I(47,00,00,02),I(32,00,00,00),I(00,00,00,1a),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,57),I(3b,01,45,02)};

  /* Byte-vector with size: 18 is_init: 0 index: 59 binding: slot-value */
  static const void *G002653[] = {I(ab,1c,04,1b),I(04,24,00,00),B(mop_inspect ,9),I(3c,01,1b,34),I(00,00,00,19),I(1f,03,1f,03),I(24,00,00,00),B(mop_inspect ,4),I(3d,02,04,32),I(00,00,00,22),I(1f,03,04,1b),I(1f,04,24,00),B(mop_defcl ,8),I(3c,02,1b,1f),I(06,24,00,00),B(mop_defcl ,10),I(3d,02,06,22),I(02,45,04,00)};

  eul_allocate_static_string(str_2657, "slot ~a not found in class ~a", 29);
  /* Byte-vector with size: 20 is_init: 0 index: 61 binding: anonymous */
  static const void *G002655[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,24),I(23,00,00,00),B(mop_defcl ,60),I(47,00,01,47),I(00,00,24,00),B(boot ,22),I(3d,03,02,32),I(00,00,00,28),I(1c,10,1b,84),I(02,1b,47,00),I(01,50,1b,34),I(00,00,00,0d),I(1d,32,00,00),I(00,00,00,10),I(1f,04,11,47),I(00,02,3d,01),I(05,22,03,45),I(02,00,00,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 62 binding: find-slot */
  static const void *G002658[] = {I(ab,46,03,1c),I(48,00,00,1b),I(48,00,01,86),I(1b,48,00,02),I(23,00,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,61),I(3b,01,48,00),I(02,47,00,00),I(26,00,00,00),I(00,00,00,04),I(02,47,00,02),I(3d,01,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 63 binding: anonymous */
  static const void *G002660[] = {I(43,04,1f,03),I(12,1b,34,00),I(00,00,00,16),I(1c,24,00,00),B(boot ,24),I(3d,01,05,32),I(00,00,00,2e),I(1f,04,10,1f),I(04,10,1c,1f),I(05,1d,24,00),B(mop_defcl ,12),I(3c,03,1f,07),I(11,1f,07,11),I(1f,07,83,14),I(1f,03,1f,08),I(0f,47,00,00),I(3d,04,08,22),I(03,45,05,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 64 binding: make-slotds */
  static const void *G002662[] = {I(43,fd,46,01),I(86,1b,48,00),I(00,23,00,00),B(mop_defcl ,52),I(23,00,00,00),B(mop_defcl ,63),I(3b,04,48,00),I(00,1c,34,00),I(00,00,00,0e),I(1c,10,32,00),I(00,00,00,07),I(82,1f,04,1f),I(04,1d,86,47),I(00,00,3d,04),I(05,00,00,00)};

  /* Byte-vector with size: 35 is_init: 0 index: 66 binding: primitive-make-slot */
  static const void *G002664[] = {I(43,03,24,00),B(mop_class ,56),I(26,00,00,00),I(00,00,00,06),I(01,1b,1f,04),I(1c,84,1d,03),I(22,02,2a,1f),I(03,82,02,1b),I(41,00,00,00),B(boot1 ,53),I(22,01,1d,1c),I(1c,26,00,00),I(00,00,00,03),I(1d,03,22,02),I(2a,1f,03,23),B(mop_defcl ,65),I(50,1f,03,1c),I(1c,26,00,00),I(00,00,00,05),I(1d,03,22,02),I(2a,1f,03,1f),I(05,1c,26,00),I(00,00,00,04),I(1d,03,22,02),I(2a,1f,05,24),B(mop_defcl ,6),I(3c,01,1f,04),I(1c,1c,82,1d),I(03,22,02,2a),I(1f,06,24,00),B(mop_defcl ,3),I(3c,01,1f,05),I(1c,1c,83,1d),I(03,22,02,2a),I(1f,05,45,09)};

  /* Byte-vector with size: 94 is_init: 1 index: 0 binding: initialize-mop-defcl */
  static const void *G002667[] = {I(87,25,00,00),B(mop_defcl ,1),I(24,00,00,00),B(mop_meth ,1),I(3e,0b,24,00),B(mop_meth ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_gf ,1),I(3e,0b,24,00),B(mop_gf ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_init ,1),I(3e,0b,24,00),B(mop_init ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_class ,1),I(3e,0b,24,00),B(mop_class ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_key ,1),I(3e,0b,24,00),B(mop_key ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_inspect ,1),I(3e,0b,24,00),B(mop_inspect ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_prim ,1),I(3e,0b,24,00),B(mop_prim ,0),I(3c,00,21,01),I(24,00,00,00),B(boot ,1),I(3e,0b,24,00),B(boot ,0),I(3c,00,21,01),I(23,00,00,00),B(mop_defcl ,67),I(23,00,00,00),B(mop_defcl ,66),I(3b,03,25,00),B(mop_defcl ,12),I(23,00,00,00),B(mop_defcl ,68),I(23,00,00,00),B(mop_defcl ,64),I(3b,fd,25,00),B(mop_defcl ,11),I(86,25,00,00),B(mop_defcl ,10),I(86,25,00,00),B(mop_defcl ,9),I(23,00,00,00),B(mop_defcl ,69),I(23,00,00,00),B(mop_defcl ,62),I(3b,02,25,00),B(mop_defcl ,8),I(23,00,00,00),B(mop_defcl ,70),I(23,00,00,00),B(mop_defcl ,59),I(3b,02,25,00),B(mop_defcl ,7),I(23,00,00,00),B(mop_defcl ,71),I(23,00,00,00),B(mop_defcl ,58),I(3b,01,25,00),B(mop_defcl ,6),I(86,25,00,00),B(mop_defcl ,5),I(86,25,00,00),B(mop_defcl ,4),I(23,00,00,00),B(mop_defcl ,72),I(23,00,00,00),B(mop_defcl ,56),I(3b,01,25,00),B(mop_defcl ,3),I(86,25,00,00),B(mop_defcl ,2),I(23,00,00,00),B(mop_defcl ,73),I(23,00,00,00),B(mop_defcl ,54),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G002573,G002572);
  eul_allocate_bytevector( G002575,G002574);
  eul_allocate_bytevector( G002577,G002576);
  eul_allocate_bytevector( G002579,G002578);
  eul_allocate_bytevector( G002581,G002580);
  eul_allocate_bytevector( G002583,G002582);
  eul_allocate_bytevector( G002585,G002584);
  eul_allocate_bytevector( G002587,G002586);
  eul_allocate_bytevector( G002589,G002588);
  eul_allocate_bytevector( G002591,G002590);
  eul_allocate_bytevector( G002593,G002592);
  eul_allocate_bytevector( G002595,G002594);
  eul_allocate_bytevector( G002597,G002596);
  eul_allocate_bytevector( G002599,G002598);
  eul_allocate_bytevector( G002601,G002600);
  eul_allocate_bytevector( G002603,G002602);
  eul_allocate_bytevector( G002605,G002604);
  eul_allocate_bytevector( G002607,G002606);
  eul_allocate_bytevector( G002609,G002608);
  eul_allocate_bytevector( G002611,G002610);
  eul_allocate_bytevector( G002613,G002612);
  eul_allocate_bytevector( G002615,G002614);
  eul_allocate_bytevector( G002617,G002616);
  eul_allocate_bytevector( G002619,G002618);
  eul_allocate_bytevector( G002621,G002620);
  eul_allocate_bytevector( G002623,G002622);
  eul_allocate_bytevector( G002625,G002624);
  eul_allocate_bytevector( G002627,G002626);
  eul_allocate_bytevector( G002629,G002628);
  eul_intern_symbol(sym_2632,"add-subclass");
  eul_intern_symbol(sym_2633,"remove-class");
  eul_intern_symbol(sym_2634,"slot-value-using-slot");
  eul_intern_symbol(sym_2635,"(method add-subclass)");
  eul_intern_symbol(sym_2636,"(method remove-class)");
  eul_intern_symbol(sym_2637,"(method slot-value-using-slot)");
  eul_intern_symbol(sym_2639,"setter");
  object_class(cons_2640) = eul_static_cons_class;
  eul_car(cons_2640) = sym_2634;
  eul_cdr(cons_2640) = eul_nil;
  object_class(cons_2638) = eul_static_cons_class;
  eul_car(cons_2638) = sym_2639;
  eul_intern_symbol(sym_2641,"(method (setter slot-value-using-slot))");
  eul_intern_symbol(sym_2642,"(setter slot-value)");
  eul_intern_symbol(sym_2643,"anonymous");
  eul_intern_symbol(sym_2644,"code");
  eul_allocate_bytevector( G002631,G002630);
  eul_allocate_bytevector( G002646,G002645);
  eul_allocate_bytevector( G002648,G002647);
  eul_allocate_bytevector( G002650,G002649);
  eul_allocate_bytevector( G002652,G002651);
  eul_allocate_bytevector( G002654,G002653);
  object_class(str_2657) = eul_static_string_class;
  eul_allocate_bytevector( G002656,G002655);
  eul_allocate_bytevector( G002659,G002658);
  eul_allocate_bytevector( G002661,G002660);
  eul_allocate_bytevector( G002663,G002662);
  eul_intern_keyword(key_2666,"required");
  eul_allocate_bytevector( G002665,G002664);
  eul_intern_symbol(sym_2669,"primitive-make-slot");
  eul_intern_symbol(sym_2670,"make-slotds");
  eul_intern_symbol(sym_2671,"find-slot");
  eul_intern_symbol(sym_2672,"slot-value");
  eul_intern_symbol(sym_2673,"predefined-reader");
  eul_intern_symbol(sym_2674,"predefined-writer");
  eul_intern_symbol(sym_2675,"top-level");
  eul_allocate_bytevector( G002668,G002667);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 13; i++)
      mop_defcl_bindings[i] = eul_nil;
  }

  mop_defcl_bindings[ 13] = G002573;
  mop_defcl_bindings[ 14] = G002575;
  mop_defcl_bindings[ 15] = G002577;
  mop_defcl_bindings[ 16] = G002579;
  mop_defcl_bindings[ 17] = G002581;
  mop_defcl_bindings[ 18] = G002583;
  mop_defcl_bindings[ 19] = G002585;
  mop_defcl_bindings[ 20] = G002587;
  mop_defcl_bindings[ 21] = G002589;
  mop_defcl_bindings[ 22] = G002591;
  mop_defcl_bindings[ 23] = G002593;
  mop_defcl_bindings[ 24] = G002595;
  mop_defcl_bindings[ 25] = G002597;
  mop_defcl_bindings[ 26] = G002599;
  mop_defcl_bindings[ 27] = G002601;
  mop_defcl_bindings[ 28] = G002603;
  mop_defcl_bindings[ 29] = G002605;
  mop_defcl_bindings[ 30] = G002607;
  mop_defcl_bindings[ 31] = G002609;
  mop_defcl_bindings[ 32] = G002611;
  mop_defcl_bindings[ 33] = G002613;
  mop_defcl_bindings[ 34] = G002615;
  mop_defcl_bindings[ 35] = G002617;
  mop_defcl_bindings[ 36] = G002619;
  mop_defcl_bindings[ 37] = G002621;
  mop_defcl_bindings[ 38] = G002623;
  mop_defcl_bindings[ 39] = G002625;
  mop_defcl_bindings[ 40] = G002627;
  mop_defcl_bindings[ 41] = G002629;
  mop_defcl_bindings[ 42] = sym_2632;
  mop_defcl_bindings[ 43] = sym_2633;
  mop_defcl_bindings[ 44] = sym_2634;
  mop_defcl_bindings[ 45] = sym_2635;
  mop_defcl_bindings[ 46] = sym_2636;
  mop_defcl_bindings[ 47] = sym_2637;
  mop_defcl_bindings[ 48] = sym_2639;
  mop_defcl_bindings[ 49] = cons_2638;
  mop_defcl_bindings[ 50] = sym_2641;
  mop_defcl_bindings[ 51] = sym_2642;
  mop_defcl_bindings[ 52] = sym_2643;
  mop_defcl_bindings[ 53] = sym_2644;
  mop_defcl_bindings[ 54] = G002631;
  mop_defcl_bindings[ 55] = G002646;
  mop_defcl_bindings[ 56] = G002648;
  mop_defcl_bindings[ 57] = G002650;
  mop_defcl_bindings[ 58] = G002652;
  mop_defcl_bindings[ 59] = G002654;
  mop_defcl_bindings[ 60] = str_2657;
  mop_defcl_bindings[ 61] = G002656;
  mop_defcl_bindings[ 62] = G002659;
  mop_defcl_bindings[ 63] = G002661;
  mop_defcl_bindings[ 64] = G002663;
  mop_defcl_bindings[ 65] = key_2666;
  mop_defcl_bindings[ 66] = G002665;
  mop_defcl_bindings[ 1] = eul_nil;
  mop_defcl_bindings[ 67] = sym_2669;
  mop_defcl_bindings[ 68] = sym_2670;
  mop_defcl_bindings[ 69] = sym_2671;
  mop_defcl_bindings[ 70] = sym_2672;
  mop_defcl_bindings[ 71] = sym_2673;
  mop_defcl_bindings[ 72] = sym_2674;
  mop_defcl_bindings[ 73] = sym_2675;
  eul_allocate_lambda( mop_defcl_bindings[0], "initialize-mop-defcl", 0, G002668);

  }
}


/* eof */
