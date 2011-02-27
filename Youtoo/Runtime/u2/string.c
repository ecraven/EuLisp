/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module string
 **  Copyright: See file string.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_convert();
extern void initialize_module_copy();
extern void initialize_module_collect();
extern void initialize_module_compare();
extern void initialize_module_fpi();
extern LispRef telos_bindings[];
extern LispRef copy_bindings[];
extern LispRef fpi_bindings[];
extern LispRef compare_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef collect_bindings[];
extern LispRef boot_bindings[];
extern LispRef convert_bindings[];
extern LispRef boot1_bindings[];

/* Module bindings with size 109 */
LispRef string_bindings[109];

/* Foreign functions */
static LispRef ff_stub_eul_init_string2787 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002923, G002924, G002925, res;

  POPVAL1(G002925);
  POPVAL1(G002924);
  POPVAL1(G002923);
  FF_RES_CONVERT6(res,eul_init_string(FF_ARG_CONVERT8(G002923), FF_ARG_CONVERT0(G002924), FF_ARG_CONVERT1(G002925)));
  return res;
}

static LispRef ff_stub_strcmp2788 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002926, G002927, res;

  POPVAL1(G002927);
  POPVAL1(G002926);
  FF_RES_CONVERT0(res,strcmp(FF_ARG_CONVERT3(G002926), FF_ARG_CONVERT3(G002927)));
  return res;
}

static LispRef ff_stub_eul_reverse_str2789 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002928, res;

  POPVAL1(G002928);
  FF_RES_CONVERT3(res,eul_reverse_str(FF_ARG_CONVERT3(G002928)));
  return res;
}

static LispRef ff_stub_eul_str_append2790 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002929, G002930, res;

  POPVAL1(G002930);
  POPVAL1(G002929);
  FF_RES_CONVERT3(res,eul_str_append(FF_ARG_CONVERT3(G002929), FF_ARG_CONVERT3(G002930)));
  return res;
}

static LispRef ff_stub_eul_list_as_eul_string2791 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002931, res;

  POPVAL1(G002931);
  FF_RES_CONVERT6(res,eul_list_as_eul_string(FF_ARG_CONVERT8(G002931)));
  return res;
}

static LispRef ff_stub_eul_str_copy2792 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002932, res;

  POPVAL1(G002932);
  FF_RES_CONVERT3(res,eul_str_copy(FF_ARG_CONVERT3(G002932)));
  return res;
}

static LispRef ff_stub_atoi2793 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002933, res;

  POPVAL1(G002933);
  FF_RES_CONVERT0(res,atoi(FF_ARG_CONVERT3(G002933)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module string */
void initialize_module_string()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_convert();
  initialize_module_copy();
  initialize_module_collect();
  initialize_module_compare();
  initialize_module_fpi();
  eul_fast_table_set(eul_modules,"string",(LispRef) string_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_2922, sym_2921, sym_2920, sym_2919, sym_2918, sym_2917, sym_2916, sym_2915, sym_2914, sym_2913, sym_2912, sym_2911, sym_2910, G002909, G002907, G002905, G002903, G002901, G002899, G002897, G002895, G002893, G002891, G002889, G002887, G002885, G002883, G002881, G002879, G002877, G002875, G002873, sym_2871, sym_2869, sym_2867, sym_2866, sym_2865, sym_2864, sym_2863, sym_2862, sym_2861, sym_2860, sym_2859, sym_2858, sym_2857, sym_2856, sym_2855, sym_2854, sym_2853, sym_2852, sym_2851, sym_2850, sym_2849, sym_2848, sym_2847, key_2846, key_2845, key_2844, key_2843, sym_2842, key_2841, G002840, G002838, key_2836, key_2835, G002834, G002832, G002830, G002828, G002826, G002824, G002822, G002820, G002818, G002816, G002814, G002812, G002810, G002808, G002806, sym_2804, G002803, G002801, G002799, G002797, G002795;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 3 is_init: 0 index: 23 binding: (method-deep-copy) */
  static const void *G002794[] = {I(aa,41,00,00),B(string ,21),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 24 binding: (method-shallow-copy) */
  static const void *G002796[] = {I(aa,41,00,00),B(string ,21),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 25 binding: (method-slice) */
  static const void *G002798[] = {I(43,03,41,00),B(boot1 ,53),I(45,03,00,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 26 binding: anonymous */
  static const void *G002800[] = {I(aa,1b,12,1b),I(44,06,47,00),I(00,36,2f,1c),I(10,1b,24,00),B(string ,13),I(24,00,00,00),B(convert ,2),I(3c,02,47,00),I(00,1c,41,00),B(string ,19),I(22,02,1b,48),I(00,00,1f,04),I(11,47,00,01),I(3d,01,05,22),I(03,45,02,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 28 binding: (method-concatenate) */
  static const void *G002802[] = {I(a7,46,02,1c),I(48,00,00,86),I(1b,48,00,01),I(23,00,00,00),B(string ,27),I(23,00,00,00),B(string ,26),I(3b,01,48,00),I(01,1c,47,00),I(01,3d,01,03),I(45,03,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 29 binding: (method-reverse) */
  static const void *G002805[] = {I(aa,41,00,00),B(string ,18),I(45,01,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 30 binding: (method-size) */
  static const void *G002807[] = {I(aa,06,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 31 binding: (method-element) */
  static const void *G002809[] = {I(ab,0b,45,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 32 binding: anonymous */
  static const void *G002811[] = {I(a9,47,00,03),I(47,00,02,1a),I(1b,44,29,47),I(00,01,47,00),I(03,0b,47,00),I(00,1c,51,1b),I(44,06,47,00),I(03,36,11,47),I(00,03,2b,1b),I(48,00,03,47),I(00,04,3d,00),I(04,22,01,22),I(02,36,02,86),I(45,01,00,00)};

  /* Byte-vector with size: 21 is_init: 0 index: 33 binding: (method-member) */
  static const void *G002813[] = {I(43,fd,46,05),I(1d,48,00,00),I(1c,48,00,01),I(1b,12,1b,44),I(10,47,00,00),I(47,00,01,41),B(boot1 ,55),I(22,02,36,32),I(1c,10,47,00),I(01,06,82,1c),I(48,00,02,1b),I(48,00,03,86),I(1b,48,00,04),I(23,00,00,00),B(string ,27),I(23,00,00,00),B(string ,32),I(3b,00,48,00),I(04,47,00,04),I(3d,00,08,22),I(04,45,04,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 34 binding: (method-map) */
  static const void *G002815[] = {I(43,fd,1b,12),I(1b,44,0f,1f),I(03,1f,03,24),B(string ,4),I(3d,02,04,36),I(04,38,03,01),I(45,04,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 35 binding: (method-do) */
  static const void *G002817[] = {I(43,fd,1b,12),I(1b,44,0f,1f),I(03,1f,03,24),B(string ,10),I(3d,02,04,36),I(04,38,03,01),I(45,04,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 36 binding: (method-all?) */
  static const void *G002819[] = {I(43,fd,1b,12),I(1b,44,0f,1f),I(03,1f,03,24),B(string ,9),I(3d,02,04,36),I(04,38,03,01),I(45,04,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 37 binding: (method-any?) */
  static const void *G002821[] = {I(43,fd,1b,12),I(1b,44,0f,1f),I(03,1f,03,24),B(string ,14),I(3d,02,04,36),I(04,38,03,01),I(45,04,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 38 binding: (method-accumulate1) */
  static const void *G002823[] = {I(ab,24,00,00),B(string ,3),I(3d,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 39 binding: (method-accumulate) */
  static const void *G002825[] = {I(43,03,24,00),B(string ,15),I(3d,03,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 40 binding: (method-binary<) */
  static const void *G002827[] = {I(ab,41,00,00),B(string ,17),I(22,02,82,1a),I(45,00,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 41 binding: (method-binary=) */
  static const void *G002829[] = {I(ab,41,00,00),B(string ,17),I(22,02,2d,1b),I(44,04,87,36),I(02,86,45,01)};

  /* Byte-vector with size: 2 is_init: 0 index: 42 binding: (method-emptyp) */
  static const void *G002831[] = {I(aa,06,2d,45),I(00,00,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 45 binding: (method-initialize) */
  static const void *G002833[] = {I(ab,1c,1c,37),I(02,2a,1b,23),B(string ,43),I(82,24,00,00),B(boot ,32),I(3c,03,1c,23),B(string ,44),I(27,20,24,00),B(boot ,32),I(3c,03,1f,03),I(1d,1d,41,00),B(string ,16),I(45,07,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 46 binding: (setter-string-data) */
  static const void *G002837[] = {I(ab,1c,82,1d),I(24,00,00,00),B(string ,13),I(09,45,02,00)};

  eul_allocate_static_cons(cons_2870, NULL, NULL);
  eul_allocate_static_cons(cons_2868, NULL, eul_as_static(cons_2870));
  /* Byte-vector with size: 594 is_init: 0 index: 77 binding: top-level */
  static const void *G002839[] = {I(a9,24,00,00),B(collect ,7),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_class ,81),I(23,00,00,00),B(string ,47),I(23,00,00,00),B(string ,48),I(23,00,00,00),B(string ,49),I(1f,05,23,00),B(string ,50),I(1f,06,23,00),B(string ,51),I(86,23,00,00),B(string ,52),I(87,24,00,00),B(mop_gf ,2),I(3c,0b,1b,89),B(string ,2),I(2a,28,0f,1b),I(89,00,00,00),B(string ,13),I(2a,24,00,00),B(string ,2),I(2a,24,00,00),B(string ,13),I(24,00,00,00),B(mop_class ,81),I(05,2a,24,00),B(string ,2),I(24,00,00,00),B(boot1 ,26),I(3c,01,23,00),B(string ,47),I(23,00,00,00),B(string ,53),I(24,00,00,00),B(boot1 ,26),I(3c,02,1b,24),B(boot1 ,26),I(3c,01,23,00),B(string ,47),I(23,00,00,00),B(string ,54),I(23,00,00,00),B(string ,49),I(1f,05,23,00),B(string ,50),I(1f,05,23,00),B(string ,51),I(86,24,00,00),B(boot1 ,26),I(3c,08,24,00),B(string ,13),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(string ,12),I(23,00,00,00),B(string ,55),I(23,00,00,00),B(string ,46),I(3b,02,1d,3c),I(02,2a,24,00),B(string ,13),I(2a,24,00,00),B(mop_gf ,12),I(8a,03,02,84),I(24,00,00,00),B(string ,13),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_gf ,12),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(string ,56),I(23,00,00,00),B(string ,45),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,3),I(8a,03,02,83),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(string ,57),I(23,00,00,00),B(string ,42),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(compare ,9),I(8a,03,02,84),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(compare ,9),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(string ,58),I(23,00,00,00),B(string ,41),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(compare ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(compare ,6),I(8a,03,02,84),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(compare ,6),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(string ,59),I(23,00,00,00),B(string ,40),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(compare ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,23),I(8a,03,02,8a),I(03,24,00,00),B(mop_class ,32),I(86,24,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,23),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(string ,60),I(23,00,00,00),B(string ,39),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,23),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,12),I(8a,03,02,84),I(24,00,00,00),B(mop_class ,32),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,12),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(string ,61),I(23,00,00,00),B(string ,38),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,24),I(8a,03,02,84),I(24,00,00,00),B(mop_class ,32),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,24),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(string ,62),I(23,00,00,00),B(string ,37),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,24),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,16),I(8a,03,02,84),I(24,00,00,00),B(mop_class ,32),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,16),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(string ,63),I(23,00,00,00),B(string ,36),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,16),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,6),I(8a,03,02,84),I(24,00,00,00),B(mop_class ,32),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,6),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(string ,64),I(23,00,00,00),B(string ,35),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,2),I(8a,03,02,84),I(24,00,00,00),B(mop_class ,32),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,2),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(string ,65),I(23,00,00,00),B(string ,34),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,11),I(8a,03,02,84),I(86,24,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,11),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(string ,66),I(23,00,00,00),B(string ,33),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,11),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,20),I(8a,03,02,84),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,20),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(string ,67),I(23,00,00,00),B(string ,31),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,20),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,9),I(8a,03,02,83),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,9),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(string ,68),I(23,00,00,00),B(string ,30),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,25),I(8a,03,02,83),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,25),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(string ,69),I(23,00,00,00),B(string ,29),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,25),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,17),I(8a,03,02,83),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,17),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(string ,70),I(23,00,00,00),B(string ,28),I(3b,fe,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,17),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,4),I(8a,03,02,8a),I(03,24,00,00),B(string ,13),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,4),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(string ,71),I(23,00,00,00),B(string ,25),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,4),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(copy ,2),I(8a,03,02,83),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(copy ,2),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(string ,72),I(23,00,00,00),B(string ,24),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(copy ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(copy ,3),I(8a,03,02,83),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(copy ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(string ,73),I(23,00,00,00),B(string ,23),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(copy ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_class ,13),I(24,00,00,00),B(boot1 ,42),I(3c,01,83,24),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(string ,76),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(string ,13),I(1c,1f,06,3c),I(02,2a,24,00),B(string ,13),I(24,00,00,00),B(mop_class ,13),I(3d,01,7a,45),I(7a,00,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 78 binding: accumulate1-string */
  static const void *G002872[] = {I(ab,1b,06,2d),I(1b,44,04,86),I(36,1c,1c,82),I(0b,1d,83,41),B(boot1 ,54),I(22,02,1f,04),I(1d,1d,24,00),B(string ,15),I(3d,03,05,22),I(02,45,03,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 79 binding: anonymous */
  static const void *G002874[] = {I(a9,47,00,05),I(47,00,03,1a),I(1b,44,29,47),I(00,01,47,00),I(05,0b,1b,47),I(00,00,3c,01),I(47,00,04,47),I(00,05,1d,0c),I(2a,47,00,05),I(2b,1b,48,00),I(05,47,00,02),I(3d,00,04,22),I(03,36,04,47),I(00,04,45,01)};

  /* Byte-vector with size: 22 is_init: 0 index: 80 binding: map1-string */
  static const void *G002876[] = {I(ab,46,07,1c),I(48,00,00,1b),I(48,00,01,47),I(00,01,06,1b),I(48,00,03,24),B(string ,13),I(23,00,00,00),B(string ,43),I(47,00,03,24),B(mop_gf ,2),I(3c,03,1b,48),I(00,04,82,1b),I(48,00,05,86),I(1b,48,00,02),I(23,00,00,00),B(string ,27),I(23,00,00,00),B(string ,79),I(3b,00,48,00),I(02,47,00,02),I(3d,00,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 30 is_init: 0 index: 81 binding: anonymous */
  static const void *G002878[] = {I(ab,47,00,01),I(1d,24,00,00),B(collect ,11),I(3c,02,1d,86),I(1d,24,00,00),B(string ,6),I(3c,03,24,00),B(mop_class ,5),I(23,00,00,00),B(string ,47),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,1d,44),I(0e,1f,04,06),I(1b,2c,1f,04),I(1c,1a,22,02),I(36,02,86,1b),I(44,20,1f,03),I(2b,1f,06,1c),I(86,24,00,00),B(string ,6),I(3c,03,1f,03),I(1f,07,0f,47),I(00,00,3d,02),I(07,22,01,36),I(0f,1c,1f,05),I(0f,24,00,00),B(boot ,28),I(3d,01,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 22 is_init: 0 index: 82 binding: listify-string */
  static const void *G002880[] = {I(a7,46,03,1b),I(44,05,1b,10),I(36,03,27,20),I(1b,48,00,01),I(86,1b,48,00),I(00,23,00,00),B(string ,27),I(23,00,00,00),B(string ,81),I(3b,02,48,00),I(00,1f,03,82),I(0b,47,00,01),I(1c,51,1b,44),I(17,1f,05,83),I(86,24,00,00),B(string ,6),I(3c,03,86,47),I(00,00,3d,02),I(06,36,0a,1f),I(05,86,47,00),I(00,3d,02,06),I(45,06,00,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 83 binding: substring */
  static const void *G002882[] = {I(43,03,1c,1b),I(44,04,1b,36),I(02,82,1d,1b),I(44,04,1b,36),I(04,1f,05,06),I(1d,1c,1f,08),I(1d,1d,41,00),B(boot1 ,53),I(45,0c,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 84 binding: string-empty? */
  static const void *G002884[] = {I(aa,06,2d,45),I(00,00,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 85 binding: string-equal */
  static const void *G002886[] = {I(ab,41,00,00),B(string ,17),I(22,02,2d,45),I(00,00,00,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 86 binding: anonymous */
  static const void *G002888[] = {I(a9,47,00,03),I(47,00,02,1a),I(1b,44,27,47),I(00,01,47,00),I(03,0b,47,00),I(00,3c,01,1b),I(44,13,47,00),I(03,2b,1b,48),I(00,03,47,00),I(04,3d,00,03),I(22,01,36,02),I(86,22,01,36),I(04,47,00,01),I(45,01,00,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 87 binding: all?1-string */
  static const void *G002890[] = {I(ab,46,05,1c),I(48,00,00,1b),I(48,00,01,47),I(00,01,06,82),I(1c,48,00,02),I(1b,48,00,03),I(86,1b,48,00),I(04,23,00,00),B(string ,27),I(23,00,00,00),B(string ,86),I(3b,00,48,00),I(04,47,00,04),I(3d,00,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 88 binding: anonymous */
  static const void *G002892[] = {I(a9,47,00,03),I(47,00,02,1a),I(1b,44,20,47),I(00,01,47,00),I(03,0b,47,00),I(00,3c,01,2a),I(47,00,03,2b),I(1b,48,00,03),I(47,00,04,3d),I(00,02,22,01),I(36,02,86,45),I(01,00,00,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 89 binding: do1-string */
  static const void *G002894[] = {I(ab,46,05,1c),I(48,00,00,1b),I(48,00,01,47),I(00,01,06,82),I(1c,48,00,02),I(1b,48,00,03),I(86,1b,48,00),I(04,23,00,00),B(string ,27),I(23,00,00,00),B(string ,88),I(3b,00,48,00),I(04,47,00,04),I(3d,00,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 90 binding: string-append */
  static const void *G002896[] = {I(a8,41,00,00),B(string ,20),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 91 binding: string-data */
  static const void *G002898[] = {I(aa,82,24,00),B(string ,13),I(08,45,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 92 binding: anonymous */
  static const void *G002900[] = {I(a9,47,00,03),I(47,00,02,1a),I(1b,44,27,47),I(00,01,47,00),I(03,0b,47,00),I(00,3c,01,1b),I(44,04,1b,36),I(11,47,00,03),I(2b,1b,48,00),I(03,47,00,04),I(3d,00,03,22),I(01,22,01,36),I(02,86,45,01)};

  /* Byte-vector with size: 15 is_init: 0 index: 93 binding: anyp1-string */
  static const void *G002902[] = {I(ab,46,05,1c),I(48,00,00,1b),I(48,00,01,47),I(00,01,06,82),I(1c,48,00,02),I(1b,48,00,03),I(86,1b,48,00),I(04,23,00,00),B(string ,27),I(23,00,00,00),B(string ,92),I(3b,00,48,00),I(04,47,00,04),I(3d,00,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 94 binding: anonymous */
  static const void *G002904[] = {I(a9,47,00,04),I(47,00,03,1a),I(1b,44,27,47),I(00,02,47,00),I(04,0b,47,00),I(01,1c,47,00),I(00,3c,02,1b),I(48,00,01,47),I(00,04,2b,1b),I(48,00,04,47),I(00,05,3d,00),I(04,22,03,36),I(04,47,00,01),I(45,01,00,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 95 binding: accumulate-string */
  static const void *G002906[] = {I(43,03,46,06),I(1d,48,00,00),I(1c,48,00,01),I(1b,48,00,02),I(47,00,02,06),I(82,1c,48,00),I(03,1b,48,00),I(04,86,1b,48),I(00,05,23,00),B(string ,27),I(23,00,00,00),B(string ,94),I(3b,00,48,00),I(05,47,00,05),I(3d,00,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 114 is_init: 1 index: 0 binding: initialize-string */
  static const void *G002908[] = {I(87,25,00,00),B(string ,1),I(24,00,00,00),B(fpi ,1),I(3e,0b,24,00),B(fpi ,0),I(3c,00,21,01),I(24,00,00,00),B(compare ,1),I(3e,0b,24,00),B(compare ,0),I(3c,00,21,01),I(24,00,00,00),B(collect ,1),I(3e,0b,24,00),B(collect ,0),I(3c,00,21,01),I(24,00,00,00),B(copy ,1),I(3e,0b,24,00),B(copy ,0),I(3c,00,21,01),I(24,00,00,00),B(convert ,1),I(3e,0b,24,00),B(convert ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(string ,96),I(23,00,00,00),B(string ,95),I(3b,03,25,00),B(string ,15),I(23,00,00,00),B(string ,97),I(23,00,00,00),B(string ,93),I(3b,02,25,00),B(string ,14),I(86,25,00,00),B(string ,13),I(23,00,00,00),B(string ,98),I(23,00,00,00),B(string ,91),I(3b,01,25,00),B(string ,12),I(23,00,00,00),B(string ,99),I(23,00,00,00),B(string ,90),I(3b,ff,25,00),B(string ,11),I(23,00,00,00),B(string ,100),I(23,00,00,00),B(string ,89),I(3b,02,25,00),B(string ,10),I(23,00,00,00),B(string ,101),I(23,00,00,00),B(string ,87),I(3b,02,25,00),B(string ,9),I(23,00,00,00),B(string ,102),I(23,00,00,00),B(string ,85),I(3b,02,25,00),B(string ,8),I(23,00,00,00),B(string ,103),I(23,00,00,00),B(string ,84),I(3b,01,25,00),B(string ,7),I(23,00,00,00),B(string ,104),I(23,00,00,00),B(string ,83),I(3b,03,25,00),B(string ,6),I(23,00,00,00),B(string ,105),I(23,00,00,00),B(string ,82),I(3b,fe,25,00),B(string ,5),I(23,00,00,00),B(string ,106),I(23,00,00,00),B(string ,80),I(3b,02,25,00),B(string ,4),I(23,00,00,00),B(string ,107),I(23,00,00,00),B(string ,78),I(3b,02,25,00),B(string ,3),I(86,25,00,00),B(string ,2),I(23,00,00,00),B(string ,108),I(23,00,00,00),B(string ,77),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G002795,G002794);
  eul_allocate_bytevector( G002797,G002796);
  eul_allocate_bytevector( G002799,G002798);
  eul_allocate_bytevector( G002801,G002800);
  eul_intern_symbol(sym_2804,"anonymous");
  eul_allocate_bytevector( G002803,G002802);
  eul_allocate_bytevector( G002806,G002805);
  eul_allocate_bytevector( G002808,G002807);
  eul_allocate_bytevector( G002810,G002809);
  eul_allocate_bytevector( G002812,G002811);
  eul_allocate_bytevector( G002814,G002813);
  eul_allocate_bytevector( G002816,G002815);
  eul_allocate_bytevector( G002818,G002817);
  eul_allocate_bytevector( G002820,G002819);
  eul_allocate_bytevector( G002822,G002821);
  eul_allocate_bytevector( G002824,G002823);
  eul_allocate_bytevector( G002826,G002825);
  eul_allocate_bytevector( G002828,G002827);
  eul_allocate_bytevector( G002830,G002829);
  eul_allocate_bytevector( G002832,G002831);
  eul_intern_keyword(key_2835,"size");
  eul_intern_keyword(key_2836,"fill-value");
  eul_allocate_bytevector( G002834,G002833);
  eul_allocate_bytevector( G002838,G002837);
  eul_intern_keyword(key_2841,"name");
  eul_intern_symbol(sym_2842,"character-sequence");
  eul_intern_keyword(key_2843,"direct-superclasses");
  eul_intern_keyword(key_2844,"direct-slots");
  eul_intern_keyword(key_2845,"direct-keywords");
  eul_intern_keyword(key_2846,"abstract?");
  eul_intern_symbol(sym_2847,"data");
  eul_intern_symbol(sym_2848,"string");
  eul_intern_symbol(sym_2849,"(setter string-data)");
  eul_intern_symbol(sym_2850,"(method initialize)");
  eul_intern_symbol(sym_2851,"(method emptyp)");
  eul_intern_symbol(sym_2852,"(method binary=)");
  eul_intern_symbol(sym_2853,"(method binary<)");
  eul_intern_symbol(sym_2854,"(method accumulate)");
  eul_intern_symbol(sym_2855,"(method accumulate1)");
  eul_intern_symbol(sym_2856,"(method any?)");
  eul_intern_symbol(sym_2857,"(method all?)");
  eul_intern_symbol(sym_2858,"(method do)");
  eul_intern_symbol(sym_2859,"(method map)");
  eul_intern_symbol(sym_2860,"(method member)");
  eul_intern_symbol(sym_2861,"(method element)");
  eul_intern_symbol(sym_2862,"(method size)");
  eul_intern_symbol(sym_2863,"(method reverse)");
  eul_intern_symbol(sym_2864,"(method concatenate)");
  eul_intern_symbol(sym_2865,"(method slice)");
  eul_intern_symbol(sym_2866,"(method shallow-copy)");
  eul_intern_symbol(sym_2867,"(method deep-copy)");
  eul_intern_symbol(sym_2869,"converter");
  eul_intern_symbol(sym_2871,"<string>");
  object_class(cons_2870) = eul_static_cons_class;
  eul_car(cons_2870) = sym_2871;
  eul_cdr(cons_2870) = eul_nil;
  object_class(cons_2868) = eul_static_cons_class;
  eul_car(cons_2868) = sym_2869;
  eul_allocate_bytevector( G002840,G002839);
  eul_allocate_bytevector( G002873,G002872);
  eul_allocate_bytevector( G002875,G002874);
  eul_allocate_bytevector( G002877,G002876);
  eul_allocate_bytevector( G002879,G002878);
  eul_allocate_bytevector( G002881,G002880);
  eul_allocate_bytevector( G002883,G002882);
  eul_allocate_bytevector( G002885,G002884);
  eul_allocate_bytevector( G002887,G002886);
  eul_allocate_bytevector( G002889,G002888);
  eul_allocate_bytevector( G002891,G002890);
  eul_allocate_bytevector( G002893,G002892);
  eul_allocate_bytevector( G002895,G002894);
  eul_allocate_bytevector( G002897,G002896);
  eul_allocate_bytevector( G002899,G002898);
  eul_allocate_bytevector( G002901,G002900);
  eul_allocate_bytevector( G002903,G002902);
  eul_allocate_bytevector( G002905,G002904);
  eul_allocate_bytevector( G002907,G002906);
  eul_intern_symbol(sym_2910,"accumulate-string");
  eul_intern_symbol(sym_2911,"anyp1-string");
  eul_intern_symbol(sym_2912,"string-data");
  eul_intern_symbol(sym_2913,"string-append");
  eul_intern_symbol(sym_2914,"do1-string");
  eul_intern_symbol(sym_2915,"all?1-string");
  eul_intern_symbol(sym_2916,"string-equal");
  eul_intern_symbol(sym_2917,"string-empty?");
  eul_intern_symbol(sym_2918,"substring");
  eul_intern_symbol(sym_2919,"listify-string");
  eul_intern_symbol(sym_2920,"map1-string");
  eul_intern_symbol(sym_2921,"accumulate1-string");
  eul_intern_symbol(sym_2922,"top-level");
  eul_allocate_bytevector( G002909,G002908);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 16; i++)
      string_bindings[i] = eul_nil;
  }

  string_bindings[ 16] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_init_string2787;
  string_bindings[ 17] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_strcmp2788;
  string_bindings[ 18] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_reverse_str2789;
  string_bindings[ 19] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_str_append2790;
  string_bindings[ 20] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_list_as_eul_string2791;
  string_bindings[ 21] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_str_copy2792;
  string_bindings[ 22] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_atoi2793;
  string_bindings[ 23] = G002795;
  string_bindings[ 24] = G002797;
  string_bindings[ 25] = G002799;
  string_bindings[ 26] = G002801;
  string_bindings[ 27] = sym_2804;
  string_bindings[ 28] = G002803;
  string_bindings[ 29] = G002806;
  string_bindings[ 30] = G002808;
  string_bindings[ 31] = G002810;
  string_bindings[ 32] = G002812;
  string_bindings[ 33] = G002814;
  string_bindings[ 34] = G002816;
  string_bindings[ 35] = G002818;
  string_bindings[ 36] = G002820;
  string_bindings[ 37] = G002822;
  string_bindings[ 38] = G002824;
  string_bindings[ 39] = G002826;
  string_bindings[ 40] = G002828;
  string_bindings[ 41] = G002830;
  string_bindings[ 42] = G002832;
  string_bindings[ 43] = key_2835;
  string_bindings[ 44] = key_2836;
  string_bindings[ 45] = G002834;
  string_bindings[ 46] = G002838;
  string_bindings[ 47] = key_2841;
  string_bindings[ 48] = sym_2842;
  string_bindings[ 49] = key_2843;
  string_bindings[ 50] = key_2844;
  string_bindings[ 51] = key_2845;
  string_bindings[ 52] = key_2846;
  string_bindings[ 53] = sym_2847;
  string_bindings[ 54] = sym_2848;
  string_bindings[ 55] = sym_2849;
  string_bindings[ 56] = sym_2850;
  string_bindings[ 57] = sym_2851;
  string_bindings[ 58] = sym_2852;
  string_bindings[ 59] = sym_2853;
  string_bindings[ 60] = sym_2854;
  string_bindings[ 61] = sym_2855;
  string_bindings[ 62] = sym_2856;
  string_bindings[ 63] = sym_2857;
  string_bindings[ 64] = sym_2858;
  string_bindings[ 65] = sym_2859;
  string_bindings[ 66] = sym_2860;
  string_bindings[ 67] = sym_2861;
  string_bindings[ 68] = sym_2862;
  string_bindings[ 69] = sym_2863;
  string_bindings[ 70] = sym_2864;
  string_bindings[ 71] = sym_2865;
  string_bindings[ 72] = sym_2866;
  string_bindings[ 73] = sym_2867;
  string_bindings[ 74] = sym_2869;
  string_bindings[ 75] = sym_2871;
  string_bindings[ 76] = cons_2868;
  string_bindings[ 77] = G002840;
  string_bindings[ 78] = G002873;
  string_bindings[ 79] = G002875;
  string_bindings[ 80] = G002877;
  string_bindings[ 81] = G002879;
  string_bindings[ 82] = G002881;
  string_bindings[ 83] = G002883;
  string_bindings[ 84] = G002885;
  string_bindings[ 85] = G002887;
  string_bindings[ 86] = G002889;
  string_bindings[ 87] = G002891;
  string_bindings[ 88] = G002893;
  string_bindings[ 89] = G002895;
  string_bindings[ 90] = G002897;
  string_bindings[ 91] = G002899;
  string_bindings[ 92] = G002901;
  string_bindings[ 93] = G002903;
  string_bindings[ 94] = G002905;
  string_bindings[ 95] = G002907;
  string_bindings[ 1] = eul_nil;
  string_bindings[ 96] = sym_2910;
  string_bindings[ 97] = sym_2911;
  string_bindings[ 98] = sym_2912;
  string_bindings[ 99] = sym_2913;
  string_bindings[ 100] = sym_2914;
  string_bindings[ 101] = sym_2915;
  string_bindings[ 102] = sym_2916;
  string_bindings[ 103] = sym_2917;
  string_bindings[ 104] = sym_2918;
  string_bindings[ 105] = sym_2919;
  string_bindings[ 106] = sym_2920;
  string_bindings[ 107] = sym_2921;
  string_bindings[ 108] = sym_2922;
  eul_allocate_lambda( string_bindings[0], "initialize-string", 0, G002909);

  }
}


/* eof */