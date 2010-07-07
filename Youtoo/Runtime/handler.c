/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module handler
 **  Copyright: See file handler.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_callback();
extern void initialize_module_convert();
extern void initialize_module_convert1();
extern void initialize_module_fpi();
extern void initialize_module_float();
extern void initialize_module_string();
extern void initialize_module_collect();
extern LispRef convert1_bindings[];
extern LispRef convert_bindings[];
extern LispRef callback_bindings[];
extern LispRef telos_bindings[];
extern LispRef string_bindings[];
extern LispRef float_bindings[];
extern LispRef collect_bindings[];
extern LispRef fpi_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];

/* Module bindings with size 83 */
LispRef handler_bindings[83];

/* Foreign functions */
static LispRef ff_stub_eul_int_as_eul_int_ref10499 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010599, res;

  POPVAL1(G0010599);
  FF_RES_CONVERT6(res,eul_int_as_eul_int_ref(FF_ARG_CONVERT8(G0010599)));
  return res;
}

static LispRef ff_stub_eul_int_ref_as_c_int10500 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010600, res;

  POPVAL1(G0010600);
  FF_RES_CONVERT0(res,eul_int_ref_as_c_int(FF_ARG_CONVERT8(G0010600)));
  return res;
}

static LispRef ff_stub_eul_c_vector_ref10501 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010601, G0010602, res;

  POPVAL1(G0010602);
  POPVAL1(G0010601);
  FF_RES_CONVERT0(res,eul_c_vector_ref(FF_ARG_CONVERT9(G0010601), FF_ARG_CONVERT0(G0010602)));
  return res;
}

static LispRef ff_stub_eul_c_vector_set10502 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010603, G0010604, G0010605, res;

  POPVAL1(G0010605);
  POPVAL1(G0010604);
  POPVAL1(G0010603);
  FF_RES_CONVERT0(res,eul_c_vector_set(FF_ARG_CONVERT9(G0010603), FF_ARG_CONVERT0(G0010604), FF_ARG_CONVERT0(G0010605)));
  return res;
}

static LispRef ff_stub_eul_double_as_eul_double_ref10503 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010606, res;

  POPVAL1(G0010606);
  FF_RES_CONVERT6(res,eul_double_as_eul_double_ref(FF_ARG_CONVERT8(G0010606)));
  return res;
}

static LispRef ff_stub_eul_double_ref_as_c_double10504 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010607, res;

  POPVAL1(G0010607);
  FF_RES_CONVERT2(res,eul_double_ref_as_c_double(FF_ARG_CONVERT8(G0010607)));
  return res;
}

static LispRef ff_stub_eul_c_vector_ref10505 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010608, G0010609, res;

  POPVAL1(G0010609);
  POPVAL1(G0010608);
  FF_RES_CONVERT2(res,eul_c_vector_ref(FF_ARG_CONVERT10(G0010608), FF_ARG_CONVERT0(G0010609)));
  return res;
}

static LispRef ff_stub_eul_c_vector_set10506 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010610, G0010611, G0010612, res;

  POPVAL1(G0010612);
  POPVAL1(G0010611);
  POPVAL1(G0010610);
  FF_RES_CONVERT2(res,eul_c_vector_set(FF_ARG_CONVERT10(G0010610), FF_ARG_CONVERT0(G0010611), FF_ARG_CONVERT2(G0010612)));
  return res;
}

static LispRef ff_stub_eul_string_as_eul_string_ref10507 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010613, res;

  POPVAL1(G0010613);
  FF_RES_CONVERT6(res,eul_string_as_eul_string_ref(FF_ARG_CONVERT8(G0010613)));
  return res;
}

static LispRef ff_stub_eul_string_ref_as_c_string10508 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010614, res;

  POPVAL1(G0010614);
  FF_RES_CONVERT3(res,eul_string_ref_as_c_string(FF_ARG_CONVERT8(G0010614)));
  return res;
}

static LispRef ff_stub_eul_c_vector_ref10509 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010615, G0010616, res;

  POPVAL1(G0010616);
  POPVAL1(G0010615);
  FF_RES_CONVERT3(res,eul_c_vector_ref(FF_ARG_CONVERT11(G0010615), FF_ARG_CONVERT0(G0010616)));
  return res;
}

static LispRef ff_stub_eul_c_vector_set10510 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010617, G0010618, G0010619, res;

  POPVAL1(G0010619);
  POPVAL1(G0010618);
  POPVAL1(G0010617);
  FF_RES_CONVERT3(res,eul_c_vector_set(FF_ARG_CONVERT11(G0010617), FF_ARG_CONVERT0(G0010618), FF_ARG_CONVERT3(G0010619)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module handler */
void initialize_module_handler()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_callback();
  initialize_module_convert();
  initialize_module_convert1();
  initialize_module_fpi();
  initialize_module_float();
  initialize_module_string();
  initialize_module_collect();
  eul_fast_table_set(eul_modules,"handler",(LispRef) handler_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_10598, G0010597, G0010595, sym_10593, sym_10592, sym_10591, sym_10588, sym_10587, sym_10586, sym_10585, sym_10584, sym_10581, sym_10580, sym_10579, sym_10578, sym_10577, sym_10576, sym_10575, sym_10573, sym_10571, sym_10570, sym_10569, sym_10568, sym_10567, sym_10566, sym_10565, sym_10564, key_10562, key_10561, key_10560, sym_10559, key_10558, key_10557, sym_10556, key_10555, G0010554, G0010552, G0010550, G0010548, G0010546, G0010544, G0010542, G0010540, G0010538, G0010536, G0010534, G0010532, G0010530, G0010528, G0010526, G0010524, G0010522, G0010520, G0010518, G0010516, G0010514, G0010512;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 3 is_init: 0 index: 23 binding: (method-(setter element)) */
  static const void *G0010511[] = {I(43,03,41,00),B(handler ,22),I(45,03,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 24 binding: (method-element) */
  static const void *G0010513[] = {I(ab,41,00,00),B(handler ,21),I(45,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 25 binding: (method-(converter <string>)) */
  static const void *G0010515[] = {I(aa,41,00,00),B(handler ,20),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 26 binding: (method-(converter <string*>)) */
  static const void *G0010517[] = {I(aa,41,00,00),B(handler ,19),I(45,01,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 27 binding: (method-string*?) */
  static const void *G0010519[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 28 binding: (method-string*?) */
  static const void *G0010521[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 3 is_init: 0 index: 29 binding: (method-(setter element)) */
  static const void *G0010523[] = {I(43,03,41,00),B(handler ,18),I(45,03,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 30 binding: (method-element) */
  static const void *G0010525[] = {I(ab,41,00,00),B(handler ,17),I(45,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 31 binding: (method-(converter <double>)) */
  static const void *G0010527[] = {I(aa,41,00,00),B(handler ,16),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 32 binding: (method-(converter <double*>)) */
  static const void *G0010529[] = {I(aa,41,00,00),B(handler ,15),I(45,01,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 33 binding: (method-double*?) */
  static const void *G0010531[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 34 binding: (method-double*?) */
  static const void *G0010533[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 3 is_init: 0 index: 35 binding: (method-(setter element)) */
  static const void *G0010535[] = {I(43,03,41,00),B(handler ,14),I(45,03,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 36 binding: (method-element) */
  static const void *G0010537[] = {I(ab,41,00,00),B(handler ,13),I(45,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 37 binding: (method-(converter <int>)) */
  static const void *G0010539[] = {I(aa,41,00,00),B(handler ,12),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 38 binding: (method-(converter <int*>)) */
  static const void *G0010541[] = {I(aa,41,00,00),B(handler ,11),I(45,01,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 39 binding: (method-int*?) */
  static const void *G0010543[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 40 binding: (method-int*?) */
  static const void *G0010545[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 41 binding: (method-handler?) */
  static const void *G0010547[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 42 binding: (method-handler?) */
  static const void *G0010549[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 4 is_init: 0 index: 43 binding: (setter-handle) */
  static const void *G0010551[] = {I(ab,1c,82,1d),I(24,00,00,00),B(handler ,2),I(09,45,02,00)};

  eul_allocate_static_cons(cons_10563, NULL, NULL);
  eul_allocate_static_cons(cons_10574, NULL, NULL);
  eul_allocate_static_cons(cons_10572, NULL, eul_as_static(cons_10574));
  eul_allocate_static_cons(cons_10583, NULL, NULL);
  eul_allocate_static_cons(cons_10582, NULL, eul_as_static(cons_10583));
  eul_allocate_static_cons(cons_10590, NULL, NULL);
  eul_allocate_static_cons(cons_10589, NULL, eul_as_static(cons_10590));
  /* Byte-vector with size: 951 is_init: 0 index: 80 binding: top-level */
  static const void *G0010553[] = {I(a9,24,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,25),I(3c,01,23,00),B(handler ,44),I(23,00,00,00),B(handler ,45),I(23,00,00,00),B(handler ,46),I(23,00,00,00),B(handler ,47),I(24,00,00,00),B(boot1 ,25),I(3c,04,1b,24),B(boot1 ,25),I(3c,01,24,00),B(mop_class ,70),I(23,00,00,00),B(handler ,44),I(23,00,00,00),B(handler ,48),I(23,00,00,00),B(handler ,49),I(1f,06,23,00),B(handler ,50),I(1f,06,23,00),B(handler ,51),I(23,00,00,00),B(handler ,52),I(24,00,00,00),B(mop_gf ,2),I(3c,09,1b,89),B(handler ,2),I(2a,28,28,1b),I(89,00,00,00),B(handler ,4),I(2a,28,29,1b),I(89,00,00,00),B(handler ,5),I(2a,28,2a,1b),I(89,00,00,00),B(handler ,6),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(handler ,53),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(handler ,8),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(handler ,54),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(handler ,9),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(handler ,55),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(handler ,10),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(handler ,56),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(handler ,7),I(2a,24,00,00),B(boot1 ,41),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(handler ,3),I(23,00,00,00),B(handler ,57),I(23,00,00,00),B(handler ,43),I(3b,02,1d,3c),I(02,2a,24,00),B(handler ,8),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(handler ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,58),I(23,00,00,00),B(handler ,42),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,8),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(handler ,2),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(handler ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,58),I(23,00,00,00),B(handler ,41),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,8),I(2a,24,00,00),B(handler ,2),I(2a,24,00,00),B(handler ,4),I(24,00,00,00),B(mop_class ,70),I(05,2a,24,00),B(handler ,2),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3c,00,23,00),B(handler ,44),I(23,00,00,00),B(handler ,59),I(23,00,00,00),B(handler ,49),I(1f,04,23,00),B(handler ,50),I(1f,05,23,00),B(handler ,51),I(86,24,00,00),B(boot1 ,25),I(3c,08,24,00),B(handler ,4),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(handler ,9),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(handler ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,60),I(23,00,00,00),B(handler ,40),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,9),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(handler ,4),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(handler ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,60),I(23,00,00,00),B(handler ,39),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,9),I(2a,24,00,00),B(handler ,4),I(2a,24,00,00),B(mop_class ,13),I(24,00,00,00),B(boot1 ,41),I(3c,01,83,24),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(handler ,63),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(handler ,4),I(1c,1f,06,3c),I(02,2a,24,00),B(handler ,4),I(24,00,00,00),B(mop_class ,13),I(3c,01,2a,24),B(handler ,4),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(handler ,4),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,03),I(02,83,24,00),B(fpi ,4),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(handler ,4),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,7),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,64),I(23,00,00,00),B(handler ,38),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(fpi ,4),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(fpi ,4),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,03),I(02,83,24,00),B(handler ,4),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(fpi ,4),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,7),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,65),I(23,00,00,00),B(handler ,37),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,20),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(handler ,4),I(24,00,00,00),B(fpi ,4),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,20),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,66),I(23,00,00,00),B(handler ,36),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,20),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,20),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(collect ,20),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(handler ,4),I(24,00,00,00),B(fpi ,4),I(86,24,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,20),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,7),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,67),I(23,00,00,00),B(handler ,35),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,5),I(24,00,00,00),B(mop_class ,70),I(05,2a,24,00),B(handler ,2),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3c,00,23,00),B(handler ,44),I(23,00,00,00),B(handler ,68),I(23,00,00,00),B(handler ,49),I(1f,04,23,00),B(handler ,50),I(1f,05,23,00),B(handler ,51),I(86,24,00,00),B(boot1 ,25),I(3c,08,24,00),B(handler ,5),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(handler ,10),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(handler ,10),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,69),I(23,00,00,00),B(handler ,34),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,10),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(handler ,5),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(handler ,10),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,69),I(23,00,00,00),B(handler ,33),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,10),I(2a,24,00,00),B(handler ,5),I(2a,24,00,00),B(mop_class ,13),I(24,00,00,00),B(boot1 ,41),I(3c,01,83,24),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(handler ,71),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(handler ,5),I(1c,1f,06,3c),I(02,2a,24,00),B(handler ,5),I(24,00,00,00),B(mop_class ,13),I(3c,01,2a,24),B(handler ,5),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(handler ,5),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,03),I(02,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(handler ,5),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,7),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,72),I(23,00,00,00),B(handler ,32),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(float ,7),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(float ,7),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,03),I(02,83,24,00),B(handler ,5),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(float ,7),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,7),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,73),I(23,00,00,00),B(handler ,31),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,20),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(handler ,5),I(24,00,00,00),B(fpi ,4),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,20),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,66),I(23,00,00,00),B(handler ,30),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,20),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,20),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(collect ,20),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(handler ,5),I(24,00,00,00),B(fpi ,4),I(86,24,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,20),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,7),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,67),I(23,00,00,00),B(handler ,29),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,6),I(24,00,00,00),B(mop_class ,70),I(05,2a,24,00),B(handler ,2),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3c,00,23,00),B(handler ,44),I(23,00,00,00),B(handler ,74),I(23,00,00,00),B(handler ,49),I(1f,04,23,00),B(handler ,50),I(1f,05,23,00),B(handler ,51),I(86,24,00,00),B(boot1 ,25),I(3c,08,24,00),B(handler ,6),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(handler ,7),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(handler ,7),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,75),I(23,00,00,00),B(handler ,28),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,7),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(handler ,6),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(handler ,7),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,75),I(23,00,00,00),B(handler ,27),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,7),I(2a,24,00,00),B(handler ,6),I(2a,24,00,00),B(mop_class ,13),I(24,00,00,00),B(boot1 ,41),I(3c,01,83,24),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(handler ,77),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(handler ,6),I(1c,1f,06,3c),I(02,2a,24,00),B(handler ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,2a,24),B(handler ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(handler ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(handler ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,7),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,78),I(23,00,00,00),B(handler ,26),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(string ,13),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(string ,13),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,03),I(02,83,24,00),B(handler ,6),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(string ,13),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,7),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,79),I(23,00,00,00),B(handler ,25),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,20),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(handler ,6),I(24,00,00,00),B(fpi ,4),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,20),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,66),I(23,00,00,00),B(handler ,24),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,20),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,20),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(collect ,20),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(handler ,6),I(24,00,00,00),B(fpi ,4),I(86,24,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,20),I(24,00,00,00),B(boot1 ,41),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,7),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,67),I(23,00,00,00),B(handler ,23),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,c3,45),I(c3,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 81 binding: handle */
  static const void *G0010594[] = {I(aa,82,24,00),B(handler ,2),I(08,45,00,00)};

  /* Byte-vector with size: 70 is_init: 1 index: 0 binding: initialize-handler */
  static const void *G0010596[] = {I(87,25,00,00),B(handler ,1),I(24,00,00,00),B(collect ,1),I(3e,0b,24,00),B(collect ,0),I(3c,00,21,01),I(24,00,00,00),B(string ,1),I(3e,0b,24,00),B(string ,0),I(3c,00,21,01),I(24,00,00,00),B(float ,1),I(3e,0b,24,00),B(float ,0),I(3c,00,21,01),I(24,00,00,00),B(fpi ,1),I(3e,0b,24,00),B(fpi ,0),I(3c,00,21,01),I(24,00,00,00),B(convert1 ,1),I(3e,0b,24,00),B(convert1 ,0),I(3c,00,21,01),I(24,00,00,00),B(convert ,1),I(3e,0b,24,00),B(convert ,0),I(3c,00,21,01),I(24,00,00,00),B(callback ,1),I(3e,0b,24,00),B(callback ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(86,25,00,00),B(handler ,10),I(86,25,00,00),B(handler ,9),I(86,25,00,00),B(handler ,8),I(86,25,00,00),B(handler ,7),I(86,25,00,00),B(handler ,6),I(86,25,00,00),B(handler ,5),I(86,25,00,00),B(handler ,4),I(23,00,00,00),B(handler ,45),I(23,00,00,00),B(handler ,81),I(3b,01,25,00),B(handler ,3),I(86,25,00,00),B(handler ,2),I(23,00,00,00),B(handler ,82),I(23,00,00,00),B(handler ,80),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G0010512,G0010511);
  eul_allocate_bytevector( G0010514,G0010513);
  eul_allocate_bytevector( G0010516,G0010515);
  eul_allocate_bytevector( G0010518,G0010517);
  eul_allocate_bytevector( G0010520,G0010519);
  eul_allocate_bytevector( G0010522,G0010521);
  eul_allocate_bytevector( G0010524,G0010523);
  eul_allocate_bytevector( G0010526,G0010525);
  eul_allocate_bytevector( G0010528,G0010527);
  eul_allocate_bytevector( G0010530,G0010529);
  eul_allocate_bytevector( G0010532,G0010531);
  eul_allocate_bytevector( G0010534,G0010533);
  eul_allocate_bytevector( G0010536,G0010535);
  eul_allocate_bytevector( G0010538,G0010537);
  eul_allocate_bytevector( G0010540,G0010539);
  eul_allocate_bytevector( G0010542,G0010541);
  eul_allocate_bytevector( G0010544,G0010543);
  eul_allocate_bytevector( G0010546,G0010545);
  eul_allocate_bytevector( G0010548,G0010547);
  eul_allocate_bytevector( G0010550,G0010549);
  eul_allocate_bytevector( G0010552,G0010551);
  eul_intern_keyword(key_10555,"name");
  eul_intern_symbol(sym_10556,"handle");
  eul_intern_keyword(key_10557,"keyword");
  eul_intern_keyword(key_10558,"handle");
  eul_intern_symbol(sym_10559,"handler");
  eul_intern_keyword(key_10560,"direct-superclasses");
  eul_intern_keyword(key_10561,"direct-slots");
  eul_intern_keyword(key_10562,"direct-keywords");
  object_class(cons_10563) = eul_static_cons_class;
  eul_car(cons_10563) = key_10558;
  eul_cdr(cons_10563) = eul_nil;
  eul_intern_symbol(sym_10564,"handler?");
  eul_intern_symbol(sym_10565,"int*?");
  eul_intern_symbol(sym_10566,"double*?");
  eul_intern_symbol(sym_10567,"string*?");
  eul_intern_symbol(sym_10568,"(setter handle)");
  eul_intern_symbol(sym_10569,"(method handler?)");
  eul_intern_symbol(sym_10570,"int*");
  eul_intern_symbol(sym_10571,"(method int*?)");
  eul_intern_symbol(sym_10573,"converter");
  eul_intern_symbol(sym_10575,"<int*>");
  object_class(cons_10574) = eul_static_cons_class;
  eul_car(cons_10574) = sym_10575;
  eul_cdr(cons_10574) = eul_nil;
  object_class(cons_10572) = eul_static_cons_class;
  eul_car(cons_10572) = sym_10573;
  eul_intern_symbol(sym_10576,"(method (converter <int*>))");
  eul_intern_symbol(sym_10577,"(method (converter <int>))");
  eul_intern_symbol(sym_10578,"(method element)");
  eul_intern_symbol(sym_10579,"(method (setter element))");
  eul_intern_symbol(sym_10580,"double*");
  eul_intern_symbol(sym_10581,"(method double*?)");
  eul_intern_symbol(sym_10584,"<double*>");
  object_class(cons_10583) = eul_static_cons_class;
  eul_car(cons_10583) = sym_10584;
  eul_cdr(cons_10583) = eul_nil;
  object_class(cons_10582) = eul_static_cons_class;
  eul_car(cons_10582) = sym_10573;
  eul_intern_symbol(sym_10585,"(method (converter <double*>))");
  eul_intern_symbol(sym_10586,"(method (converter <double>))");
  eul_intern_symbol(sym_10587,"string*");
  eul_intern_symbol(sym_10588,"(method string*?)");
  eul_intern_symbol(sym_10591,"<string*>");
  object_class(cons_10590) = eul_static_cons_class;
  eul_car(cons_10590) = sym_10591;
  eul_cdr(cons_10590) = eul_nil;
  object_class(cons_10589) = eul_static_cons_class;
  eul_car(cons_10589) = sym_10573;
  eul_intern_symbol(sym_10592,"(method (converter <string*>))");
  eul_intern_symbol(sym_10593,"(method (converter <string>))");
  eul_allocate_bytevector( G0010554,G0010553);
  eul_allocate_bytevector( G0010595,G0010594);
  eul_intern_symbol(sym_10598,"top-level");
  eul_allocate_bytevector( G0010597,G0010596);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 11; i++)
      handler_bindings[i] = eul_nil;
  }

  handler_bindings[ 11] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_int_as_eul_int_ref10499;
  handler_bindings[ 12] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_int_ref_as_c_int10500;
  handler_bindings[ 13] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_ref10501;
  handler_bindings[ 14] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_set10502;
  handler_bindings[ 15] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_double_as_eul_double_ref10503;
  handler_bindings[ 16] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_double_ref_as_c_double10504;
  handler_bindings[ 17] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_ref10505;
  handler_bindings[ 18] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_set10506;
  handler_bindings[ 19] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_string_as_eul_string_ref10507;
  handler_bindings[ 20] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_string_ref_as_c_string10508;
  handler_bindings[ 21] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_ref10509;
  handler_bindings[ 22] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_set10510;
  handler_bindings[ 23] = G0010512;
  handler_bindings[ 24] = G0010514;
  handler_bindings[ 25] = G0010516;
  handler_bindings[ 26] = G0010518;
  handler_bindings[ 27] = G0010520;
  handler_bindings[ 28] = G0010522;
  handler_bindings[ 29] = G0010524;
  handler_bindings[ 30] = G0010526;
  handler_bindings[ 31] = G0010528;
  handler_bindings[ 32] = G0010530;
  handler_bindings[ 33] = G0010532;
  handler_bindings[ 34] = G0010534;
  handler_bindings[ 35] = G0010536;
  handler_bindings[ 36] = G0010538;
  handler_bindings[ 37] = G0010540;
  handler_bindings[ 38] = G0010542;
  handler_bindings[ 39] = G0010544;
  handler_bindings[ 40] = G0010546;
  handler_bindings[ 41] = G0010548;
  handler_bindings[ 42] = G0010550;
  handler_bindings[ 43] = G0010552;
  handler_bindings[ 44] = key_10555;
  handler_bindings[ 45] = sym_10556;
  handler_bindings[ 46] = key_10557;
  handler_bindings[ 47] = key_10558;
  handler_bindings[ 48] = sym_10559;
  handler_bindings[ 49] = key_10560;
  handler_bindings[ 50] = key_10561;
  handler_bindings[ 51] = key_10562;
  handler_bindings[ 52] = cons_10563;
  handler_bindings[ 53] = sym_10564;
  handler_bindings[ 54] = sym_10565;
  handler_bindings[ 55] = sym_10566;
  handler_bindings[ 56] = sym_10567;
  handler_bindings[ 57] = sym_10568;
  handler_bindings[ 58] = sym_10569;
  handler_bindings[ 59] = sym_10570;
  handler_bindings[ 60] = sym_10571;
  handler_bindings[ 61] = sym_10573;
  handler_bindings[ 62] = sym_10575;
  handler_bindings[ 63] = cons_10572;
  handler_bindings[ 64] = sym_10576;
  handler_bindings[ 65] = sym_10577;
  handler_bindings[ 66] = sym_10578;
  handler_bindings[ 67] = sym_10579;
  handler_bindings[ 68] = sym_10580;
  handler_bindings[ 69] = sym_10581;
  handler_bindings[ 70] = sym_10584;
  handler_bindings[ 71] = cons_10582;
  handler_bindings[ 72] = sym_10585;
  handler_bindings[ 73] = sym_10586;
  handler_bindings[ 74] = sym_10587;
  handler_bindings[ 75] = sym_10588;
  handler_bindings[ 76] = sym_10591;
  handler_bindings[ 77] = cons_10589;
  handler_bindings[ 78] = sym_10592;
  handler_bindings[ 79] = sym_10593;
  handler_bindings[ 80] = G0010554;
  handler_bindings[ 81] = G0010595;
  handler_bindings[ 1] = eul_nil;
  handler_bindings[ 82] = sym_10598;
  eul_allocate_lambda( handler_bindings[0], "initialize-handler", 0, G0010597);

  }
}


/* eof */
