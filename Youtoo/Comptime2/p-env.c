/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module p-env
 **  Copyright: See file p-env.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_sx_obj();
extern LispRef i_all_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef sx_obj2_bindings[];
extern LispRef i_error_bindings[];
extern LispRef boot1_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef sx_obj_bindings[];
extern LispRef dynamic_bindings[];
extern LispRef boot_bindings[];
extern LispRef sx_obj1_bindings[];
extern LispRef aux_table_bindings[];
extern LispRef i_param_bindings[];

/* Module bindings with size 77 */
LispRef p_env_bindings[77];

/* Foreign functions */
static LispRef ff_stub_eul_dyn_level1_syntax_binding_info414 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00495, res;

  POPVAL1(G00495);
  FF_RES_CONVERT6(res,eul_dyn_level1_syntax_binding_info(FF_ARG_CONVERT8(G00495)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module p-env */
void initialize_module_p_env()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_sx_obj();
  eul_fast_table_set(eul_modules,"p_env",(LispRef) p_env_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_494, sym_493, sym_492, sym_491, sym_490, sym_489, sym_488, sym_487, sym_486, sym_485, sym_484, sym_483, sym_482, sym_481, sym_480, sym_479, sym_478, sym_477, G00476, G00474, G00472, G00470, G00468, G00466, G00461, G00459, G00457, G00455, G00451, G00449, G00447, G00444, key_442, key_441, key_440, key_439, key_438, G00437, G00435, G00433, G00431, sym_426, G00425, G00423, sym_421, G00420, G00418, G00416;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 5 is_init: 0 index: 21 binding: loaded-syntax-modules */
  static const void *G00415[] = {I(a9,24,00,00),B(i_param ,30),I(24,00,00,00),B(aux_table ,8),I(3d,01,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 22 binding: anonymous */
  static const void *G00417[] = {I(aa,1b,26,00),I(00,00,00,06),I(24,00,00,00),B(sx_obj1 ,42),I(08,1b,1d,0f),I(45,02,00,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 24 binding: add-local-static-bindings */
  static const void *G00419[] = {I(ab,23,00,00),B(p_env ,23),I(23,00,00,00),B(p_env ,22),I(3b,01,1d,24),B(boot ,10),I(3c,02,1b,1d),I(24,00,00,00),B(boot ,7),I(3d,02,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 25 binding: find-module */
  static const void *G00422[] = {I(aa,1b,24,00),B(p_env ,14),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,12),I(1c,24,00,00),B(i_param ,18),I(3d,01,02,45),I(02,00,00,00)};

  eul_allocate_static_string(str_427, "new lexical binding ~a shadows lexical binding ~a", 49);
  eul_allocate_static_string(str_428, "new lexical binding ~a is shadowed by syntax binding ~a", 55);
  eul_allocate_static_string(str_429, "no actual module", 16);
  /* Byte-vector with size: 114 is_init: 0 index: 30 binding: set-lexical-binding */
  static const void *G00424[] = {I(43,fe,23,00),B(p_env ,26),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,34),I(00,00,01,95),I(1b,26,00,00),I(00,00,00,10),I(24,00,00,00),B(sx_obj1 ,59),I(08,1f,03,1f),I(03,1d,24,00),B(p_env ,8),I(3c,03,1b,26),I(00,00,00,06),I(24,00,00,00),B(sx_obj1 ,42),I(08,1c,24,00),B(sx_obj ,16),I(3c,01,1c,24),B(p_env ,7),I(3c,01,1d,24),B(p_env ,10),I(3c,01,1c,24),B(sx_obj1 ,14),I(3c,01,1b,34),I(00,00,00,89),I(1d,24,00,00),B(sx_obj ,16),I(3c,01,1f,03),I(83,24,00,00),B(sx_obj1 ,42),I(08,24,00,00),B(i_param ,31),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,0b),I(1d,1f,07,50),I(1b,34,00,00),I(00,00,00,33),I(1f,09,1f,04),I(1c,26,00,00),I(00,00,00,05),I(1d,24,00,00),B(sx_obj1 ,42),I(09,22,02,2a),I(1f,09,1f,03),I(1c,83,1d,24),B(sx_obj1 ,42),I(09,22,02,32),I(00,00,00,1b),I(86,23,00,00),B(p_env ,27),I(1f,0b,1f,09),I(24,00,00,00),B(i_notify ,5),I(3c,04,22,04),I(32,00,00,00),I(00,00,00,63),I(1c,24,00,00),B(sx_obj1 ,14),I(3c,01,1b,34),I(00,00,00,29),I(1f,03,1f,03),I(50,12,1b,34),I(00,00,00,15),I(24,00,00,00),B(i_param ,10),I(12,32,00,00),I(00,00,00,08),I(86,22,01,32),I(00,00,00,06),I(86,1b,34,00),I(00,00,00,22),I(86,23,00,00),B(p_env ,28),I(1f,09,1f,06),I(24,00,00,00),B(i_notify ,5),I(3c,04,32,00),I(00,00,00,07),I(86,22,02,2a),I(1f,07,26,00),I(00,00,00,10),I(24,00,00,00),B(sx_obj1 ,59),I(08,1b,24,00),B(boot1 ,41),I(3c,01,1f,06),I(1f,08,1d,3c),I(02,2a,24,00),B(i_param ,10),I(12,1b,34,00),I(00,00,00,0e),I(86,32,00,00),I(00,00,00,23),I(1f,0a,82,24),B(sx_obj1 ,59),I(08,1b,24,00),B(boot1 ,41),I(3c,01,1f,09),I(1f,0b,1d,3d),I(02,0f,22,02),I(22,0a,32,00),I(00,00,00,21),I(24,00,00,00),B(i_error ,5),I(23,00,00,00),B(p_env ,29),I(24,00,00,00),B(boot ,12),I(3d,02,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 31 binding: loaded-modules */
  static const void *G00430[] = {I(a9,24,00,00),B(i_param ,19),I(24,00,00,00),B(aux_table ,8),I(3d,01,00,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 32 binding: anonymous */
  static const void *G00432[] = {I(ab,26,00,00),I(00,00,00,10),I(24,00,00,00),B(sx_obj1 ,59),I(08,1c,1c,3c),I(01,1b,34,00),I(00,00,00,22),I(1b,1f,03,1f),I(03,24,00,00),B(p_env ,8),I(3c,03,1b,48),I(00,00,47,00),I(00,22,01,32),I(00,00,00,06),I(86,45,03,00)};

  /* Byte-vector with size: 49 is_init: 0 index: 33 binding: get-lexical-binding */
  static const void *G00434[] = {I(43,fe,46,01),I(1b,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,42),I(23,00,00,00),B(p_env ,26),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,34),I(00,00,00,25),I(23,00,00,00),B(p_env ,26),I(24,00,00,00),B(dynamic ,3),I(3c,01,24,00),B(boot1 ,25),I(3c,01,32,00),I(00,00,00,07),I(86,22,01,86),I(1b,48,00,00),I(1f,04,1d,23),B(p_env ,23),I(23,00,00,00),B(p_env ,32),I(3b,02,24,00),B(boot ,24),I(3c,03,2a,47),I(00,00,34,00),I(00,00,00,4a),I(47,00,00,84),I(24,00,00,00),B(sx_obj1 ,42),I(08,1b,24,00),B(sx_obj2 ,33),I(3c,01,1b,34),I(00,00,00,25),I(1c,82,24,00),B(sx_obj2 ,11),I(08,1b,83,14),I(1f,03,1c,1c),I(82,1d,24,00),B(sx_obj2 ,11),I(09,22,04,32),I(00,00,00,06),I(86,22,02,32),I(00,00,00,06),I(86,2a,47,00),I(00,45,05,00)};

  /* Byte-vector with size: 36 is_init: 0 index: 39 binding: expand-hard-coded-level1-binding */
  static const void *G00436[] = {I(43,03,1d,7a),I(1b,34,00,00),I(00,00,00,87),I(1f,03,10,1f),I(04,73,1f,05),I(75,1f,05,7a),I(1b,34,00,00),I(00,00,00,0f),I(1f,06,10,32),I(00,00,00,18),I(1f,06,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,08),I(1d,22,01,24),B(sx_obj1 ,72),I(23,00,00,00),B(p_env ,34),I(1d,23,00,00),B(p_env ,35),I(1f,07,23,00),B(p_env ,36),I(1f,08,23,00),B(p_env ,37),I(87,23,00,00),B(p_env ,38),I(1f,0e,24,00),B(mop_gf ,2),I(3c,0b,1f,07),I(24,00,00,00),B(boot1 ,41),I(3c,01,1d,1d),I(1d,3c,02,2a),I(1c,22,07,32),I(00,00,00,07),I(1f,03,45,04)};

  eul_allocate_static_string(str_445, "reloading of syntax module ~a", 29);
  /* Byte-vector with size: 18 is_init: 0 index: 41 binding: new-syntax-module */
  static const void *G00443[] = {I(ab,1c,24,00),B(p_env ,17),I(3c,01,1b,34),I(00,00,00,1d),I(86,23,00,00),B(p_env ,40),I(1f,04,24,00),B(i_notify ,5),I(3d,03,03,32),I(00,00,00,21),I(24,00,00,00),B(i_param ,30),I(24,00,00,00),B(boot1 ,41),I(3c,01,1f,03),I(1f,03,1d,3d),I(02,04,22,01),I(45,03,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 42 binding: anonymous */
  static const void *G00446[] = {I(ab,1b,26,00),I(00,00,00,0e),I(24,00,00,00),B(sx_obj1 ,59),I(08,1d,1c,3c),I(01,1b,34,00),I(00,00,00,2e),I(1b,1f,04,1f),I(03,24,00,00),B(p_env ,8),I(3c,03,1b,1f),I(04,24,00,00),B(p_env ,12),I(3c,02,1b,48),I(00,00,47,00),I(00,22,02,32),I(00,00,00,06),I(86,45,04,00)};

  /* Byte-vector with size: 29 is_init: 0 index: 43 binding: get-syntax-binding */
  static const void *G00448[] = {I(43,fe,46,01),I(1b,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,42),I(23,00,00,00),B(p_env ,26),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,34),I(00,00,00,25),I(23,00,00,00),B(p_env ,26),I(24,00,00,00),B(dynamic ,3),I(3c,01,24,00),B(boot1 ,25),I(3c,01,32,00),I(00,00,00,07),I(86,22,01,86),I(1b,48,00,00),I(1f,04,1d,23),B(p_env ,23),I(23,00,00,00),B(p_env ,42),I(3b,02,24,00),B(boot ,24),I(3c,03,2a,47),I(00,00,45,05)};

  eul_allocate_static_string(str_452, "conflicting exported bindings ~a and ~a", 39);
  eul_allocate_static_string(str_453, "no actual module specified", 26);
  /* Byte-vector with size: 72 is_init: 0 index: 46 binding: set-external-binding */
  static const void *G00450[] = {I(43,fe,23,00),B(p_env ,26),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,34),I(00,00,00,ed),I(1b,26,00,00),I(00,00,00,0f),I(24,00,00,00),B(sx_obj1 ,59),I(08,1f,03,1f),I(03,1d,24,00),B(p_env ,8),I(3c,03,1b,26),I(00,00,00,06),I(24,00,00,00),B(sx_obj1 ,42),I(08,1c,24,00),B(sx_obj ,16),I(3c,01,1c,24),B(p_env ,19),I(3c,01,1b,24),B(sx_obj1 ,14),I(3c,01,1b,34),I(00,00,00,71),I(1c,24,00,00),B(sx_obj ,16),I(3c,01,1d,83),I(24,00,00,00),B(sx_obj1 ,42),I(08,1c,1f,05),I(50,12,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,1e),I(1f,09,26,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,59),I(08,1f,03,1c),I(50,22,01,1b),I(34,00,00,00),I(00,00,00,24),I(86,23,00,00),B(p_env ,44),I(1f,0a,1f,08),I(24,00,00,00),B(i_notify ,5),I(3c,04,32,00),I(00,00,00,07),I(86,22,04,32),I(00,00,00,06),I(86,2a,1f,06),I(26,00,00,00),I(00,00,00,0f),I(24,00,00,00),B(sx_obj1 ,59),I(08,1b,24,00),B(boot1 ,41),I(3c,01,1f,05),I(1f,07,1d,3d),I(02,0b,22,08),I(32,00,00,00),I(00,00,00,23),I(24,00,00,00),B(i_error ,5),I(23,00,00,00),B(p_env ,45),I(24,00,00,00),B(boot ,12),I(3d,02,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 17 is_init: 0 index: 47 binding: expand-interpreter-defined-syntax-binding */
  static const void *G00454[] = {I(ab,24,00,00),B(i_param ,10),I(34,00,00,00),I(00,00,00,10),I(1c,7c,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,26),I(1c,26,00,00),I(00,00,00,10),I(24,00,00,00),B(sx_obj1 ,59),I(08,1f,03,1c),I(3d,01,04,22),I(01,32,00,00),I(00,00,00,08),I(1d,45,03,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 48 binding: find-syntax-module */
  static const void *G00456[] = {I(aa,1b,24,00),B(p_env ,14),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,2c),I(1c,24,00,00),B(p_env ,17),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,12),I(1d,24,00,00),B(i_param ,5),I(3d,01,03,22),I(01,45,02,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 49 binding: get-module */
  static const void *G00458[] = {I(aa,24,00,00),B(i_param ,19),I(3d,01,00,00)};

  eul_allocate_static_string(str_462, "new syntax binding ~a shadows syntax binding ~a", 47);
  eul_allocate_static_string(str_463, "new syntax binding ~a shadows lexical binding ~a", 48);
  eul_allocate_static_string(str_464, "no actual module specified", 26);
  /* Byte-vector with size: 99 is_init: 0 index: 53 binding: set-syntax-binding */
  static const void *G00460[] = {I(43,fe,23,00),B(p_env ,26),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,34),I(00,00,01,59),I(1b,26,00,00),I(00,00,00,0e),I(24,00,00,00),B(sx_obj1 ,59),I(08,1f,03,1f),I(03,1d,24,00),B(p_env ,8),I(3c,03,1b,1f),I(03,24,00,00),B(p_env ,12),I(3c,02,1b,24),B(sx_obj ,16),I(3c,01,1c,26),I(00,00,00,06),I(24,00,00,00),B(sx_obj1 ,42),I(08,1b,24,00),B(p_env ,7),I(3c,01,1c,24),B(p_env ,10),I(3c,01,1b,24),B(sx_obj1 ,14),I(3c,01,1b,34),I(00,00,00,89),I(1c,24,00,00),B(sx_obj ,16),I(3c,01,1d,83),I(24,00,00,00),B(sx_obj1 ,42),I(08,24,00,00),B(i_param ,31),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,0b),I(1d,1f,08,50),I(1b,34,00,00),I(00,00,00,33),I(1f,09,1f,04),I(1c,26,00,00),I(00,00,00,05),I(1d,24,00,00),B(sx_obj1 ,42),I(09,22,02,2a),I(1f,09,1f,03),I(1c,83,1d,24),B(sx_obj1 ,42),I(09,22,02,32),I(00,00,00,1b),I(86,23,00,00),B(p_env ,50),I(1f,0b,1f,08),I(24,00,00,00),B(i_notify ,5),I(3c,04,22,04),I(32,00,00,00),I(00,00,00,4b),I(1d,24,00,00),B(sx_obj1 ,14),I(3c,01,1b,34),I(00,00,00,11),I(1f,03,1f,0c),I(50,12,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,22),I(86,23,00,00),B(p_env ,51),I(1f,09,1f,07),I(24,00,00,00),B(i_notify ,5),I(3c,04,32,00),I(00,00,00,07),I(86,22,02,2a),I(1f,08,26,00),I(00,00,00,0e),I(24,00,00,00),B(sx_obj1 ,59),I(08,1b,24,00),B(boot1 ,41),I(3c,01,1f,05),I(1f,08,1d,3d),I(02,0d,22,0a),I(32,00,00,00),I(00,00,00,23),I(24,00,00,00),B(i_error ,5),I(23,00,00,00),B(p_env ,52),I(24,00,00,00),B(boot ,12),I(3d,02,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 54 binding: new-module */
  static const void *G00465[] = {I(ab,24,00,00),B(i_param ,19),I(24,00,00,00),B(boot1 ,41),I(3c,01,1d,1d),I(1d,3d,02,03),I(45,03,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 55 binding: get-syntax-module */
  static const void *G00467[] = {I(aa,24,00,00),B(i_param ,30),I(3d,01,00,00)};

  /* Byte-vector with size: 23 is_init: 0 index: 56 binding: get-local-static-binding */
  static const void *G00469[] = {I(ab,1b,1d,1b),I(1d,86,6a,22),I(02,1b,34,00),I(00,00,00,4e),I(1b,11,1b,84),I(24,00,00,00),B(sx_obj1 ,42),I(08,1b,24,00),B(sx_obj2 ,33),I(3c,01,1b,34),I(00,00,00,25),I(1c,82,24,00),B(sx_obj2 ,11),I(08,1b,83,14),I(1f,03,1c,1c),I(82,1d,24,00),B(sx_obj2 ,11),I(09,22,04,32),I(00,00,00,06),I(86,2a,1d,22),I(03,32,00,00),I(00,00,00,08),I(86,45,03,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 57 binding: anonymous */
  static const void *G00471[] = {I(ab,26,00,00),I(00,00,00,0f),I(24,00,00,00),B(sx_obj1 ,59),I(08,1c,1c,3c),I(01,1b,34,00),I(00,00,00,22),I(1b,1f,03,1f),I(03,24,00,00),B(p_env ,8),I(3c,03,1b,48),I(00,00,47,00),I(00,22,01,32),I(00,00,00,06),I(86,45,03,00)};

  /* Byte-vector with size: 29 is_init: 0 index: 58 binding: get-external-binding */
  static const void *G00473[] = {I(43,fe,46,01),I(1b,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,42),I(23,00,00,00),B(p_env ,26),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,34),I(00,00,00,25),I(23,00,00,00),B(p_env ,26),I(24,00,00,00),B(dynamic ,3),I(3c,01,24,00),B(boot1 ,25),I(3c,01,32,00),I(00,00,00,07),I(86,22,01,86),I(1b,48,00,00),I(1f,04,1d,23),B(p_env ,23),I(23,00,00,00),B(p_env ,57),I(3b,02,24,00),B(boot ,24),I(3c,03,2a,47),I(00,00,45,05)};

  /* Byte-vector with size: 121 is_init: 1 index: 0 binding: initialize-p-env */
  static const void *G00475[] = {I(87,25,00,00),B(p_env ,1),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(23,00,00,00),B(p_env ,59),I(23,00,00,00),B(p_env ,58),I(3b,fe,25,00),B(p_env ,19),I(23,00,00,00),B(p_env ,60),I(23,00,00,00),B(p_env ,56),I(3b,02,25,00),B(p_env ,18),I(23,00,00,00),B(p_env ,61),I(23,00,00,00),B(p_env ,55),I(3b,01,25,00),B(p_env ,17),I(23,00,00,00),B(p_env ,62),I(23,00,00,00),B(p_env ,54),I(3b,02,25,00),B(p_env ,16),I(23,00,00,00),B(p_env ,63),I(23,00,00,00),B(p_env ,53),I(3b,fe,25,00),B(p_env ,15),I(23,00,00,00),B(p_env ,64),I(23,00,00,00),B(p_env ,49),I(3b,01,25,00),B(p_env ,14),I(23,00,00,00),B(p_env ,65),I(23,00,00,00),B(p_env ,48),I(3b,01,25,00),B(p_env ,13),I(23,00,00,00),B(p_env ,66),I(23,00,00,00),B(p_env ,47),I(3b,02,25,00),B(p_env ,12),I(23,00,00,00),B(p_env ,67),I(23,00,00,00),B(p_env ,46),I(3b,fe,25,00),B(p_env ,11),I(23,00,00,00),B(p_env ,68),I(23,00,00,00),B(p_env ,43),I(3b,fe,25,00),B(p_env ,10),I(23,00,00,00),B(p_env ,69),I(23,00,00,00),B(p_env ,41),I(3b,02,25,00),B(p_env ,9),I(23,00,00,00),B(p_env ,70),I(23,00,00,00),B(p_env ,39),I(3b,03,25,00),B(p_env ,8),I(23,00,00,00),B(p_env ,71),I(23,00,00,00),B(p_env ,33),I(3b,fe,25,00),B(p_env ,7),I(23,00,00,00),B(p_env ,72),I(23,00,00,00),B(p_env ,31),I(3b,00,25,00),B(p_env ,6),I(23,00,00,00),B(p_env ,73),I(23,00,00,00),B(p_env ,30),I(3b,fe,25,00),B(p_env ,5),I(23,00,00,00),B(p_env ,74),I(23,00,00,00),B(p_env ,25),I(3b,01,25,00),B(p_env ,4),I(23,00,00,00),B(p_env ,75),I(23,00,00,00),B(p_env ,24),I(3b,02,25,00),B(p_env ,3),I(23,00,00,00),B(p_env ,76),I(23,00,00,00),B(p_env ,21),I(3b,00,25,00),B(p_env ,2),I(86,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G00416,G00415);
  eul_allocate_bytevector( G00418,G00417);
  eul_intern_symbol(sym_421,"anonymous");
  eul_allocate_bytevector( G00420,G00419);
  eul_allocate_bytevector( G00423,G00422);
  eul_intern_symbol(sym_426,"*actual-module*");
  object_class(str_427) = eul_static_string_class;
  object_class(str_428) = eul_static_string_class;
  object_class(str_429) = eul_static_string_class;
  eul_allocate_bytevector( G00425,G00424);
  eul_allocate_bytevector( G00431,G00430);
  eul_allocate_bytevector( G00433,G00432);
  eul_allocate_bytevector( G00435,G00434);
  eul_intern_keyword(key_438,"local-name");
  eul_intern_keyword(key_439,"module");
  eul_intern_keyword(key_440,"obj");
  eul_intern_keyword(key_441,"imported");
  eul_intern_keyword(key_442,"local-index");
  eul_allocate_bytevector( G00437,G00436);
  object_class(str_445) = eul_static_string_class;
  eul_allocate_bytevector( G00444,G00443);
  eul_allocate_bytevector( G00447,G00446);
  eul_allocate_bytevector( G00449,G00448);
  object_class(str_452) = eul_static_string_class;
  object_class(str_453) = eul_static_string_class;
  eul_allocate_bytevector( G00451,G00450);
  eul_allocate_bytevector( G00455,G00454);
  eul_allocate_bytevector( G00457,G00456);
  eul_allocate_bytevector( G00459,G00458);
  object_class(str_462) = eul_static_string_class;
  object_class(str_463) = eul_static_string_class;
  object_class(str_464) = eul_static_string_class;
  eul_allocate_bytevector( G00461,G00460);
  eul_allocate_bytevector( G00466,G00465);
  eul_allocate_bytevector( G00468,G00467);
  eul_allocate_bytevector( G00470,G00469);
  eul_allocate_bytevector( G00472,G00471);
  eul_allocate_bytevector( G00474,G00473);
  eul_intern_symbol(sym_477,"get-external-binding");
  eul_intern_symbol(sym_478,"get-local-static-binding");
  eul_intern_symbol(sym_479,"get-syntax-module");
  eul_intern_symbol(sym_480,"new-module");
  eul_intern_symbol(sym_481,"set-syntax-binding");
  eul_intern_symbol(sym_482,"get-module");
  eul_intern_symbol(sym_483,"find-syntax-module");
  eul_intern_symbol(sym_484,"expand-interpreter-defined-syntax-binding");
  eul_intern_symbol(sym_485,"set-external-binding");
  eul_intern_symbol(sym_486,"get-syntax-binding");
  eul_intern_symbol(sym_487,"new-syntax-module");
  eul_intern_symbol(sym_488,"expand-hard-coded-level1-binding");
  eul_intern_symbol(sym_489,"get-lexical-binding");
  eul_intern_symbol(sym_490,"loaded-modules");
  eul_intern_symbol(sym_491,"set-lexical-binding");
  eul_intern_symbol(sym_492,"find-module");
  eul_intern_symbol(sym_493,"add-local-static-bindings");
  eul_intern_symbol(sym_494,"loaded-syntax-modules");
  eul_allocate_bytevector( G00476,G00475);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 20; i++)
      p_env_bindings[i] = eul_nil;
  }

  p_env_bindings[ 20] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_dyn_level1_syntax_binding_info414;
  p_env_bindings[ 21] = G00416;
  p_env_bindings[ 22] = G00418;
  p_env_bindings[ 23] = sym_421;
  p_env_bindings[ 24] = G00420;
  p_env_bindings[ 25] = G00423;
  p_env_bindings[ 26] = sym_426;
  p_env_bindings[ 27] = str_427;
  p_env_bindings[ 28] = str_428;
  p_env_bindings[ 29] = str_429;
  p_env_bindings[ 30] = G00425;
  p_env_bindings[ 31] = G00431;
  p_env_bindings[ 32] = G00433;
  p_env_bindings[ 33] = G00435;
  p_env_bindings[ 34] = key_438;
  p_env_bindings[ 35] = key_439;
  p_env_bindings[ 36] = key_440;
  p_env_bindings[ 37] = key_441;
  p_env_bindings[ 38] = key_442;
  p_env_bindings[ 39] = G00437;
  p_env_bindings[ 40] = str_445;
  p_env_bindings[ 41] = G00444;
  p_env_bindings[ 42] = G00447;
  p_env_bindings[ 43] = G00449;
  p_env_bindings[ 44] = str_452;
  p_env_bindings[ 45] = str_453;
  p_env_bindings[ 46] = G00451;
  p_env_bindings[ 47] = G00455;
  p_env_bindings[ 48] = G00457;
  p_env_bindings[ 49] = G00459;
  p_env_bindings[ 50] = str_462;
  p_env_bindings[ 51] = str_463;
  p_env_bindings[ 52] = str_464;
  p_env_bindings[ 53] = G00461;
  p_env_bindings[ 54] = G00466;
  p_env_bindings[ 55] = G00468;
  p_env_bindings[ 56] = G00470;
  p_env_bindings[ 57] = G00472;
  p_env_bindings[ 58] = G00474;
  p_env_bindings[ 1] = eul_nil;
  p_env_bindings[ 59] = sym_477;
  p_env_bindings[ 60] = sym_478;
  p_env_bindings[ 61] = sym_479;
  p_env_bindings[ 62] = sym_480;
  p_env_bindings[ 63] = sym_481;
  p_env_bindings[ 64] = sym_482;
  p_env_bindings[ 65] = sym_483;
  p_env_bindings[ 66] = sym_484;
  p_env_bindings[ 67] = sym_485;
  p_env_bindings[ 68] = sym_486;
  p_env_bindings[ 69] = sym_487;
  p_env_bindings[ 70] = sym_488;
  p_env_bindings[ 71] = sym_489;
  p_env_bindings[ 72] = sym_490;
  p_env_bindings[ 73] = sym_491;
  p_env_bindings[ 74] = sym_492;
  p_env_bindings[ 75] = sym_493;
  p_env_bindings[ 76] = sym_494;
  eul_allocate_lambda( p_env_bindings[0], "initialize-p-env", 0, G00476);

  }
}


/* eof */
