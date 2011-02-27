/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module i-compile
 **  Copyright: See file i-compile.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_i_modify();
extern void initialize_module_p_read();
extern void initialize_module_p_env();
extern void initialize_module_p_parse();
extern void initialize_module_sx_obj();
extern void initialize_module_sx_write();
extern void initialize_module_ex_module();
extern void initialize_module_ex_body();
extern void initialize_module_cg_gen();
extern void initialize_module_cg_asm();
extern void initialize_module_cg_dld();
extern void initialize_module_cg_interf();
extern void initialize_module_cg_link();
extern void initialize_module_cg_exec();
extern LispRef cg_dld_bindings[];
extern LispRef ex_body_bindings[];
extern LispRef ex_module_bindings[];
extern LispRef sx_write_bindings[];
extern LispRef sx_obj_bindings[];
extern LispRef i_all_bindings[];
extern LispRef cg_link_bindings[];
extern LispRef p_read_bindings[];
extern LispRef cg_exec_bindings[];
extern LispRef cg_asm_bindings[];
extern LispRef cg_gen_bindings[];
extern LispRef p_parse_bindings[];
extern LispRef sx_obj1_bindings[];
extern LispRef p_env_bindings[];
extern LispRef i_error_bindings[];
extern LispRef number_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef string_bindings[];
extern LispRef i_modify_bindings[];
extern LispRef collect_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef boot1_bindings[];
extern LispRef i_param_bindings[];
extern LispRef format_bindings[];
extern LispRef cg_interf_bindings[];
extern LispRef dynamic_bindings[];

/* Module bindings with size 84 */
LispRef i_compile_bindings[84];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module i-compile */
void initialize_module_i_compile()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_i_modify();
  initialize_module_p_read();
  initialize_module_p_env();
  initialize_module_p_parse();
  initialize_module_sx_obj();
  initialize_module_sx_write();
  initialize_module_ex_module();
  initialize_module_ex_body();
  initialize_module_cg_gen();
  initialize_module_cg_asm();
  initialize_module_cg_dld();
  initialize_module_cg_interf();
  initialize_module_cg_link();
  initialize_module_cg_exec();
  eul_fast_table_set(eul_modules,"i_compile",(LispRef) i_compile_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_4523, sym_4522, sym_4521, sym_4520, sym_4519, sym_4518, sym_4517, sym_4516, sym_4515, G004514, sym_4511, G004509, G004507, G004504, G004502, G004483, G004480, G004477, G004475, G004465, G004463, sym_4452, G004450, sym_4448, G004447, sym_4445, sym_4444, sym_4442, sym_4441, sym_4439, sym_4437, G004435, G004433;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 6 is_init: 0 index: 10 binding: anonymous */
  static const void *G004432[] = {I(a9,83,24,00),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  eul_allocate_static_cons(cons_4440, NULL, NULL);
  eul_allocate_static_cons(cons_4438, NULL, eul_as_static(cons_4440));
  eul_allocate_static_cons(cons_4436, NULL, eul_as_static(cons_4438));
  eul_allocate_static_string(str_4443, "  ~a", 4);
  /* Byte-vector with size: 43 is_init: 0 index: 19 binding: (method-compile-module) */
  static const void *G004434[] = {I(aa,1b,23,00),B(i_compile ,14),I(86,6c,1b,34),I(00,00,00,15),I(1c,87,24,00),B(cg_interf ,12),I(3d,02,02,32),I(00,00,00,8f),I(23,00,00,00),B(i_compile ,15),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(i_compile ,16),I(1c,24,00,00),B(format ,2),I(3c,02,23,00),B(i_compile ,15),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,23),B(i_compile ,17),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(i_compile ,18),I(23,00,00,00),B(i_compile ,10),I(3b,00,1c,0f),I(23,00,00,00),B(i_compile ,17),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,1f),I(05,24,00,00),B(i_compile ,9),I(3c,01,83,24),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1b),I(22,05,45,02)};

  /* Byte-vector with size: 26 is_init: 0 index: 21 binding: top-level */
  static const void *G004446[] = {I(a9,24,00,00),B(i_param ,18),I(8a,03,02,83),I(86,24,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(i_param ,18),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(i_compile ,20),I(23,00,00,00),B(i_compile ,19),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(i_param ,18),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,06,45),I(06,00,00,00)};

  eul_allocate_static_string(str_4451, ".c", 2);
  eul_allocate_static_string(str_4453, ".c", 2);
  eul_allocate_static_string(str_4454, ".o", 2);
  eul_allocate_static_string(str_4455, ".o", 2);
  eul_allocate_static_string(str_4456, "~a~a~a", 6);
  eul_allocate_static_string(str_4457, "-o", 2);
  eul_allocate_static_string(str_4458, "-c", 2);
  eul_allocate_static_string(str_4459, "  Compiling ~a using ~a ...", 27);
  eul_allocate_static_string(str_4460, "file ~a can't be compiled correctly", 35);
  eul_allocate_static_string(str_4461, "  Module file ~a need not be recompiled.", 40);
  /* Byte-vector with size: 170 is_init: 0 index: 33 binding: compile-C-file-aux */
  static const void *G004449[] = {I(aa,1b,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0a),I(1c,82,02,24),B(i_param ,35),I(24,00,00,00),B(i_param ,22),I(1d,23,00,00),B(i_compile ,22),I(24,00,00,00),B(collect ,17),I(3c,04,24,00),B(i_param ,23),I(23,00,00,00),B(i_compile ,23),I(24,00,00,00),B(collect ,17),I(3c,02,1f,04),I(24,00,00,00),B(i_param ,23),I(50,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,26),I(1f,05,1d,50),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,10),I(24,00,00,00),B(i_param ,36),I(12,22,01,1b),I(34,00,00,00),I(00,00,00,18),I(1f,06,24,00),B(i_modify ,6),I(3c,01,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,01,ee),I(1f,04,24,00),B(i_modify ,3),I(3c,01,1f,08),I(7d,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,0b),I(1f,09,82,02),I(24,00,00,00),B(i_param ,35),I(24,00,00,00),B(i_param ,22),I(1d,23,00,00),B(i_compile ,24),I(24,00,00,00),B(collect ,17),I(3c,04,24,00),B(i_modify ,7),I(3c,01,24,00),B(i_param ,6),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,97),I(24,00,00,00),B(i_param ,53),I(34,00,00,00),I(00,00,00,5c),I(1f,0c,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0b),I(1f,0d,82,02),I(24,00,00,00),B(i_param ,53),I(24,00,00,00),B(i_param ,22),I(24,00,00,00),B(i_param ,35),I(24,00,00,00),B(i_param ,22),I(1f,04,23,00),B(i_compile ,25),I(24,00,00,00),B(collect ,17),I(3c,06,22,02),I(32,00,00,00),I(00,00,00,34),I(1f,0c,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0b),I(1f,0d,82,02),I(23,00,00,00),B(i_compile ,26),I(24,00,00,00),B(string ,11),I(3c,02,22,01),I(23,00,00,00),B(i_compile ,27),I(1f,03,24,00),B(i_param ,22),I(1f,03,24,00),B(format ,2),I(3c,04,24,00),B(i_param ,53),I(34,00,00,00),I(00,00,00,38),I(1f,03,24,00),B(i_param ,22),I(24,00,00,00),B(i_param ,53),I(24,00,00,00),B(i_param ,22),I(24,00,00,00),B(i_param ,35),I(24,00,00,00),B(collect ,17),I(3c,05,32,00),I(00,00,00,08),I(1f,03,24,00),B(i_param ,45),I(24,00,00,00),B(i_param ,55),I(23,00,00,00),B(i_compile ,28),I(1f,04,23,00),B(i_compile ,29),I(1f,0c,24,00),B(cg_interf ,20),I(3c,06,23,00),B(i_compile ,30),I(1f,0e,24,00),B(i_param ,45),I(24,00,00,00),B(i_notify ,3),I(3c,03,2a,1b),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,1c),I(24,00,00,00),B(cg_interf ,16),I(3c,01,2a,1b),I(24,00,00,00),B(boot1 ,51),I(3c,01,24,00),B(number ,16),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,22),I(26,00,00,00),I(ff,ff,ff,fe),I(23,00,00,00),B(i_compile ,31),I(1f,10,24,00),B(i_error ,4),I(3d,03,12,22),I(0a,32,00,00),I(00,00,00,1a),I(23,00,00,00),B(i_compile ,32),I(1f,05,24,00),B(i_notify ,3),I(3d,02,08,45),I(08,00,00,00)};

  /* Byte-vector with size: 37 is_init: 0 index: 34 binding: link */
  static const void *G004462[] = {I(aa,24,00,00),B(i_compile ,7),I(3c,00,2a,24),B(i_param ,61),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,29),I(24,00,00,00),B(i_param ,28),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,0f),I(24,00,00,00),B(i_param ,7),I(22,01,1b,34),I(00,00,00,4d),I(24,00,00,00),B(i_param ,28),I(34,00,00,00),I(00,00,00,18),I(1d,24,00,00),B(i_compile ,4),I(3d,01,03,32),I(00,00,00,26),I(24,00,00,00),B(i_param ,7),I(34,00,00,00),I(00,00,00,18),I(1d,24,00,00),B(i_compile ,6),I(3d,01,03,32),I(00,00,00,06),I(86,32,00,00),I(00,00,00,08),I(86,45,03,00)};

  eul_allocate_static_string(str_4466, "Creating library of module ~a ...", 33);
  eul_allocate_static_string(str_4467, ".o", 2);
  eul_allocate_static_string(str_4468, ".o", 2);
  eul_allocate_static_string(str_4469, "~a~alib~a.a", 11);
  eul_allocate_static_string(str_4470, "lib~a.a", 7);
  eul_allocate_static_string(str_4471, "~a~a~a", 6);
  eul_allocate_static_string(str_4472, "library ~a can't be created correctly", 37);
  eul_allocate_static_string(str_4473, "archive ~a can't be converted correctly", 39);
  /* Byte-vector with size: 130 is_init: 0 index: 43 binding: create-C-library */
  static const void *G004464[] = {I(aa,23,00,00),B(i_compile ,35),I(1c,24,00,00),B(i_notify ,3),I(3c,02,2a,24),B(i_param ,6),I(86,89,00,00),B(i_param ,6),I(2a,1c,24,00),B(i_compile ,5),I(3c,01,2a,1b),I(89,00,00,00),B(i_param ,6),I(2a,1c,24,00),B(cg_interf ,17),I(3c,01,24,00),B(cg_interf ,25),I(3c,00,24,00),B(i_param ,53),I(34,00,00,00),I(00,00,00,5c),I(1f,03,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0b),I(1f,04,82,02),I(24,00,00,00),B(i_param ,53),I(24,00,00,00),B(i_param ,22),I(24,00,00,00),B(i_param ,35),I(24,00,00,00),B(i_param ,22),I(1f,04,23,00),B(i_compile ,36),I(24,00,00,00),B(collect ,17),I(3c,06,22,02),I(32,00,00,00),I(00,00,00,34),I(1f,03,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0b),I(1f,04,82,02),I(23,00,00,00),B(i_compile ,37),I(24,00,00,00),B(string ,11),I(3c,02,22,01),I(24,00,00,00),B(i_modify ,7),I(3c,01,24,00),B(i_param ,6),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,6b),I(24,00,00,00),B(i_param ,53),I(34,00,00,00),I(00,00,00,30),I(23,00,00,00),B(i_compile ,38),I(24,00,00,00),B(i_param ,53),I(24,00,00,00),B(i_param ,22),I(1f,08,24,00),B(format ,2),I(3c,04,32,00),I(00,00,00,18),I(23,00,00,00),B(i_compile ,39),I(1f,06,24,00),B(format ,2),I(3c,02,23,00),B(i_compile ,40),I(1f,03,24,00),B(i_param ,22),I(1f,03,24,00),B(format ,2),I(3c,04,22,01),I(24,00,00,00),B(i_param ,38),I(1c,1f,06,1f),I(06,24,00,00),B(cg_interf ,20),I(3c,04,24,00),B(i_param ,8),I(1d,24,00,00),B(cg_interf ,20),I(3c,02,1c,24),B(i_notify ,4),I(3c,01,2a,1c),I(24,00,00,00),B(boot1 ,51),I(3c,01,24,00),B(number ,16),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,19),I(85,23,00,00),B(i_compile ,41),I(1f,05,24,00),B(i_error ,4),I(3c,03,2a,1c),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,1c),I(24,00,00,00),B(boot1 ,51),I(3c,01,24,00),B(number ,16),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,19),I(85,23,00,00),B(i_compile ,42),I(1f,06,24,00),B(i_error ,4),I(3c,03,2a,1f),I(0a,24,00,00),B(cg_interf ,11),I(3d,01,0b,00)};

  /* Byte-vector with size: 22 is_init: 0 index: 44 binding: compile-C-file */
  static const void *G004474[] = {I(aa,1b,24,00),B(p_env ,14),I(3c,01,1b,34),I(00,00,00,15),I(1b,83,24,00),B(sx_obj1 ,59),I(08,32,00,00),I(00,00,00,11),I(1c,24,00,00),B(cg_interf ,15),I(3c,01,24,00),B(cg_interf ,6),I(3c,00,24,00),B(number ,9),I(3c,02,24,00),B(i_compile ,2),I(1c,24,00,00),B(boot ,17),I(3c,02,2a,1d),I(24,00,00,00),B(i_compile ,2),I(3d,01,03,00)};

  eul_allocate_static_string(str_4478, " -L", 3);
  /* Byte-vector with size: 10 is_init: 0 index: 46 binding: anonymous */
  static const void *G004476[] = {I(aa,1b,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0a),I(1c,82,02,23),B(i_compile ,45),I(1c,24,00,00),B(string ,11),I(3d,02,03,00)};

  eul_allocate_static_string(str_4481, " -l", 3);
  /* Byte-vector with size: 10 is_init: 0 index: 48 binding: anonymous */
  static const void *G004479[] = {I(aa,1b,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0a),I(1c,82,02,23),B(i_compile ,47),I(1c,24,00,00),B(string ,11),I(3d,02,03,00)};

  eul_allocate_static_string(str_4484, "Creating stand-alone application of module ~a ...", 49);
  eul_allocate_static_string(str_4485, "_", 1);
  eul_allocate_static_string(str_4486, "  Linking ~a.o with imports using ~a ...", 40);
  eul_allocate_static_string(str_4487, "_.o", 3);
  eul_allocate_static_string(str_4488, "_.o", 3);
  eul_allocate_static_string(str_4489, " -leulvm", 8);
  eul_allocate_static_string(str_4490, ".o", 2);
  eul_allocate_static_string(str_4491, ".o", 2);
  eul_allocate_static_string(str_4492, "~a~a~a", 6);
  eul_allocate_static_string(str_4493, "", 0);
  eul_allocate_static_string(str_4494, "", 0);
  eul_allocate_static_string(str_4495, "-lgc", 4);
  eul_allocate_static_string(str_4496, "", 0);
  eul_allocate_static_string(str_4497, "-o", 2);
  eul_allocate_static_string(str_4498, "strip ", 6);
  eul_allocate_static_string(str_4499, "executable ~a can't be stipped correctly", 40);
  eul_allocate_static_string(str_4500, "module ~a can't be linked correctly", 35);
  /* Byte-vector with size: 232 is_init: 0 index: 66 binding: create-stand-alone-application */
  static const void *G004482[] = {I(aa,23,00,00),B(i_compile ,49),I(1c,24,00,00),B(i_notify ,3),I(3c,02,2a,1b),I(24,00,00,00),B(i_compile ,5),I(3c,01,2a,1b),I(7d,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,0a),I(1c,82,02,1b),I(23,00,00,00),B(i_compile ,50),I(24,00,00,00),B(string ,11),I(3c,02,1b,41),B(boot1 ,56),I(22,01,24,00),B(i_compile ,2),I(3c,01,2a,23),B(i_compile ,51),I(1f,04,24,00),B(i_param ,67),I(24,00,00,00),B(i_notify ,3),I(3c,03,2a,24),B(i_param ,53),I(34,00,00,00),I(00,00,00,5c),I(1f,03,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0b),I(1f,04,82,02),I(24,00,00,00),B(i_param ,53),I(24,00,00,00),B(i_param ,22),I(24,00,00,00),B(i_param ,35),I(24,00,00,00),B(i_param ,22),I(1f,04,23,00),B(i_compile ,52),I(24,00,00,00),B(collect ,17),I(3c,06,22,02),I(32,00,00,00),I(00,00,00,34),I(1f,03,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0b),I(1f,04,82,02),I(23,00,00,00),B(i_compile ,53),I(24,00,00,00),B(string ,11),I(3c,02,22,01),I(24,00,00,00),B(i_modify ,3),I(3c,01,23,00),B(i_compile ,54),I(24,00,00,00),B(cg_interf ,25),I(3c,00,24,00),B(cg_interf ,23),I(3c,00,1f,07),I(24,00,00,00),B(cg_interf ,17),I(3c,01,24,00),B(i_param ,53),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,a1),I(24,00,00,00),B(i_param ,53),I(34,00,00,00),I(00,00,00,5c),I(1f,09,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0b),I(1f,0a,82,02),I(24,00,00,00),B(i_param ,53),I(24,00,00,00),B(i_param ,22),I(24,00,00,00),B(i_param ,35),I(24,00,00,00),B(i_param ,22),I(1f,04,23,00),B(i_compile ,55),I(24,00,00,00),B(collect ,17),I(3c,06,22,02),I(32,00,00,00),I(00,00,00,34),I(1f,09,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0b),I(1f,0a,82,02),I(23,00,00,00),B(i_compile ,56),I(24,00,00,00),B(string ,11),I(3c,02,22,01),I(24,00,00,00),B(i_modify ,7),I(3c,01,24,00),B(i_param ,6),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,09),I(1f,0b,23,00),B(i_compile ,57),I(1f,03,24,00),B(i_param ,22),I(1f,03,24,00),B(format ,2),I(3c,04,23,00),B(i_compile ,18),I(23,00,00,00),B(i_compile ,48),I(3b,01,24,00),B(i_param ,14),I(24,00,00,00),B(boot ,11),I(3c,02,1b,12),I(1b,34,00,00),I(00,00,00,17),I(23,00,00,00),B(i_compile ,58),I(32,00,00,00),I(00,00,00,1a),I(24,00,00,00),B(collect ,17),I(1d,24,00,00),B(boot ,5),I(3c,02,24,00),B(i_param ,62),I(34,00,00,00),I(00,00,00,18),I(23,00,00,00),B(i_compile ,59),I(32,00,00,00),I(00,00,00,10),I(23,00,00,00),B(i_compile ,60),I(23,00,00,00),B(i_compile ,18),I(23,00,00,00),B(i_compile ,46),I(3b,01,24,00),B(i_param ,9),I(24,00,00,00),B(boot ,11),I(3c,02,1b,12),I(1b,34,00,00),I(00,00,00,17),I(23,00,00,00),B(i_compile ,61),I(32,00,00,00),I(00,00,00,1a),I(24,00,00,00),B(collect ,17),I(1d,24,00,00),B(boot ,5),I(3c,02,24,00),B(i_param ,67),I(24,00,00,00),B(i_param ,55),I(23,00,00,00),B(i_compile ,62),I(1f,0a,1f,10),I(1f,15,24,00),B(i_param ,54),I(1f,15,1f,08),I(1f,16,1f,19),I(1f,0f,1f,0f),I(24,00,00,00),B(i_param ,21),I(24,00,00,00),B(cg_interf ,20),I(3c,0e,1b,24),B(i_notify ,4),I(3c,01,2a,1b),I(24,00,00,00),B(boot1 ,51),I(3c,01,82,19),I(1b,34,00,00),I(00,00,00,67),I(24,00,00,00),B(i_param ,57),I(12,1b,34,00),I(00,00,00,0e),I(86,32,00,00),I(00,00,00,48),I(23,00,00,00),B(i_compile ,63),I(1f,0b,24,00),B(string ,11),I(3c,02,1b,24),B(boot1 ,51),I(3c,01,82,19),I(1b,34,00,00),I(00,00,00,0f),I(86,32,00,00),I(00,00,00,1a),I(86,23,00,00),B(i_compile ,64),I(1f,1b,24,00),B(i_error ,4),I(3d,03,1a,22),I(02,22,01,32),I(00,00,00,18),I(86,23,00,00),B(i_compile ,65),I(1f,18,24,00),B(i_error ,4),I(3d,03,17,45),I(17,00,00,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 67 binding: check-stop */
  static const void *G004501[] = {I(a9,24,00,00),B(i_param ,60),I(34,00,00,00),I(00,00,00,40),I(24,00,00,00),B(i_param ,60),I(24,00,00,00),B(i_param ,24),I(50,1b,34,00),I(00,00,00,1e),I(86,89,00,00),B(i_param ,24),I(2a,24,00,00),B(i_error ,2),I(3d,00,01,32),I(00,00,00,06),I(86,22,01,32),I(00,00,00,06),I(86,45,00,00)};

  eul_allocate_static_string(str_4505, "Interactive compiling ...", 25);
  /* Byte-vector with size: 16 is_init: 0 index: 69 binding: interactive-compile */
  static const void *G004503[] = {I(aa,23,00,00),B(i_compile ,68),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,24),B(p_parse ,2),I(3c,01,1b,24),B(cg_gen ,18),I(3c,01,1c,1c),I(24,00,00,00),B(cg_asm ,3),I(3c,02,1d,1c),I(24,00,00,00),B(cg_exec ,4),I(3d,02,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 70 binding: anonymous */
  static const void *G004506[] = {I(a9,83,24,00),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  eul_allocate_static_string(str_4510, "Compiling module ~a ...", 23);
  eul_allocate_static_string(str_4512, "... module ~a compiled.", 23);
  /* Byte-vector with size: 73 is_init: 0 index: 74 binding: compile */
  static const void *G004508[] = {I(aa,23,00,00),B(i_compile ,71),I(1c,24,00,00),B(i_notify ,3),I(3c,02,2a,1b),I(89,00,00,00),B(i_param ,63),I(2a,86,86,86),I(86,1f,04,24),B(p_read ,2),I(3c,01,1b,20),I(05,24,00,00),B(i_compile ,7),I(3c,00,2a,1f),I(04,24,00,00),B(i_param ,17),I(3c,01,23,00),B(i_compile ,72),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,23),B(i_compile ,17),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(i_compile ,18),I(23,00,00,00),B(i_compile ,70),I(3b,00,1c,0f),I(23,00,00,00),B(i_compile ,17),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,24),B(i_compile ,7),I(3c,00,2a,1d),I(86,24,00,00),B(cg_gen ,9),I(3c,02,1b,20),I(08,24,00,00),B(i_compile ,7),I(3c,00,2a,1f),I(03,1f,08,24),B(cg_asm ,3),I(3c,02,1b,20),I(08,24,00,00),B(i_compile ,7),I(3c,00,2a,1f),I(04,1f,08,24),B(cg_link ,23),I(3c,02,1b,20),I(08,24,00,00),B(i_compile ,7),I(3c,00,2a,1f),I(05,1f,08,24),B(cg_link ,4),I(3c,02,2a,24),B(i_compile ,7),I(3c,00,2a,1f),I(05,24,00,00),B(cg_interf ,9),I(3c,01,2a,23),B(i_compile ,73),I(1f,0c,24,00),B(i_notify ,3),I(3c,02,2a,1f),I(05,83,24,00),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1b),I(45,0d,00,00)};

  /* Byte-vector with size: 131 is_init: 1 index: 0 binding: initialize-i-compile */
  static const void *G004513[] = {I(87,25,00,00),B(i_compile ,1),I(24,00,00,00),B(cg_exec ,1),I(3e,0b,24,00),B(cg_exec ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_link ,1),I(3e,0b,24,00),B(cg_link ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_interf ,1),I(3e,0b,24,00),B(cg_interf ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_dld ,1),I(3e,0b,24,00),B(cg_dld ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_asm ,1),I(3e,0b,24,00),B(cg_asm ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_gen ,1),I(3e,0b,24,00),B(cg_gen ,0),I(3c,00,21,01),I(24,00,00,00),B(ex_body ,1),I(3e,0b,24,00),B(ex_body ,0),I(3c,00,21,01),I(24,00,00,00),B(ex_module ,1),I(3e,0b,24,00),B(ex_module ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_write ,1),I(3e,0b,24,00),B(sx_write ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(p_parse ,1),I(3e,0b,24,00),B(p_parse ,0),I(3c,00,21,01),I(24,00,00,00),B(p_env ,1),I(3e,0b,24,00),B(p_env ,0),I(3c,00,21,01),I(24,00,00,00),B(p_read ,1),I(3e,0b,24,00),B(p_read ,0),I(3c,00,21,01),I(24,00,00,00),B(i_modify ,1),I(3e,0b,24,00),B(i_modify ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(23,00,00,00),B(i_compile ,75),I(23,00,00,00),B(i_compile ,74),I(3b,01,25,00),B(i_compile ,9),I(23,00,00,00),B(i_compile ,76),I(23,00,00,00),B(i_compile ,69),I(3b,01,25,00),B(i_compile ,8),I(23,00,00,00),B(i_compile ,77),I(23,00,00,00),B(i_compile ,67),I(3b,00,25,00),B(i_compile ,7),I(23,00,00,00),B(i_compile ,78),I(23,00,00,00),B(i_compile ,66),I(3b,01,25,00),B(i_compile ,6),I(23,00,00,00),B(i_compile ,79),I(23,00,00,00),B(i_compile ,44),I(3b,01,25,00),B(i_compile ,5),I(23,00,00,00),B(i_compile ,80),I(23,00,00,00),B(i_compile ,43),I(3b,01,25,00),B(i_compile ,4),I(23,00,00,00),B(i_compile ,81),I(23,00,00,00),B(i_compile ,34),I(3b,01,25,00),B(i_compile ,3),I(23,00,00,00),B(i_compile ,82),I(23,00,00,00),B(i_compile ,33),I(3b,01,25,00),B(i_compile ,2),I(23,00,00,00),B(i_compile ,83),I(23,00,00,00),B(i_compile ,21),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G004433,G004432);
  eul_intern_symbol(sym_4437,"telos");
  eul_intern_symbol(sym_4439,"level-1");
  eul_intern_symbol(sym_4441,"math");
  object_class(cons_4440) = eul_static_cons_class;
  eul_car(cons_4440) = sym_4441;
  eul_cdr(cons_4440) = eul_nil;
  object_class(cons_4438) = eul_static_cons_class;
  eul_car(cons_4438) = sym_4439;
  object_class(cons_4436) = eul_static_cons_class;
  eul_car(cons_4436) = sym_4437;
  eul_intern_symbol(sym_4442,"*indent*");
  object_class(str_4443) = eul_static_string_class;
  eul_intern_symbol(sym_4444,"*clean-ups*");
  eul_intern_symbol(sym_4445,"anonymous");
  eul_allocate_bytevector( G004435,G004434);
  eul_intern_symbol(sym_4448,"(method compile-module)");
  eul_allocate_bytevector( G004447,G004446);
  object_class(str_4451) = eul_static_string_class;
  eul_intern_symbol(sym_4452,"_");
  object_class(str_4453) = eul_static_string_class;
  object_class(str_4454) = eul_static_string_class;
  object_class(str_4455) = eul_static_string_class;
  object_class(str_4456) = eul_static_string_class;
  object_class(str_4457) = eul_static_string_class;
  object_class(str_4458) = eul_static_string_class;
  object_class(str_4459) = eul_static_string_class;
  object_class(str_4460) = eul_static_string_class;
  object_class(str_4461) = eul_static_string_class;
  eul_allocate_bytevector( G004450,G004449);
  eul_allocate_bytevector( G004463,G004462);
  object_class(str_4466) = eul_static_string_class;
  object_class(str_4467) = eul_static_string_class;
  object_class(str_4468) = eul_static_string_class;
  object_class(str_4469) = eul_static_string_class;
  object_class(str_4470) = eul_static_string_class;
  object_class(str_4471) = eul_static_string_class;
  object_class(str_4472) = eul_static_string_class;
  object_class(str_4473) = eul_static_string_class;
  eul_allocate_bytevector( G004465,G004464);
  eul_allocate_bytevector( G004475,G004474);
  object_class(str_4478) = eul_static_string_class;
  eul_allocate_bytevector( G004477,G004476);
  object_class(str_4481) = eul_static_string_class;
  eul_allocate_bytevector( G004480,G004479);
  object_class(str_4484) = eul_static_string_class;
  object_class(str_4485) = eul_static_string_class;
  object_class(str_4486) = eul_static_string_class;
  object_class(str_4487) = eul_static_string_class;
  object_class(str_4488) = eul_static_string_class;
  object_class(str_4489) = eul_static_string_class;
  object_class(str_4490) = eul_static_string_class;
  object_class(str_4491) = eul_static_string_class;
  object_class(str_4492) = eul_static_string_class;
  object_class(str_4493) = eul_static_string_class;
  object_class(str_4494) = eul_static_string_class;
  object_class(str_4495) = eul_static_string_class;
  object_class(str_4496) = eul_static_string_class;
  object_class(str_4497) = eul_static_string_class;
  object_class(str_4498) = eul_static_string_class;
  object_class(str_4499) = eul_static_string_class;
  object_class(str_4500) = eul_static_string_class;
  eul_allocate_bytevector( G004483,G004482);
  eul_allocate_bytevector( G004502,G004501);
  object_class(str_4505) = eul_static_string_class;
  eul_allocate_bytevector( G004504,G004503);
  eul_allocate_bytevector( G004507,G004506);
  object_class(str_4510) = eul_static_string_class;
  eul_intern_symbol(sym_4511,"*actual-module*");
  object_class(str_4512) = eul_static_string_class;
  eul_allocate_bytevector( G004509,G004508);
  eul_intern_symbol(sym_4515,"compile");
  eul_intern_symbol(sym_4516,"interactive-compile");
  eul_intern_symbol(sym_4517,"check-stop");
  eul_intern_symbol(sym_4518,"create-stand-alone-application");
  eul_intern_symbol(sym_4519,"compile-C-file");
  eul_intern_symbol(sym_4520,"create-C-library");
  eul_intern_symbol(sym_4521,"link");
  eul_intern_symbol(sym_4522,"compile-C-file-aux");
  eul_intern_symbol(sym_4523,"top-level");
  eul_allocate_bytevector( G004514,G004513);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 10; i++)
      i_compile_bindings[i] = eul_nil;
  }

  i_compile_bindings[ 10] = G004433;
  i_compile_bindings[ 11] = sym_4437;
  i_compile_bindings[ 12] = sym_4439;
  i_compile_bindings[ 13] = sym_4441;
  i_compile_bindings[ 14] = cons_4436;
  i_compile_bindings[ 15] = sym_4442;
  i_compile_bindings[ 16] = str_4443;
  i_compile_bindings[ 17] = sym_4444;
  i_compile_bindings[ 18] = sym_4445;
  i_compile_bindings[ 19] = G004435;
  i_compile_bindings[ 20] = sym_4448;
  i_compile_bindings[ 21] = G004447;
  i_compile_bindings[ 22] = str_4451;
  i_compile_bindings[ 23] = sym_4452;
  i_compile_bindings[ 24] = str_4453;
  i_compile_bindings[ 25] = str_4454;
  i_compile_bindings[ 26] = str_4455;
  i_compile_bindings[ 27] = str_4456;
  i_compile_bindings[ 28] = str_4457;
  i_compile_bindings[ 29] = str_4458;
  i_compile_bindings[ 30] = str_4459;
  i_compile_bindings[ 31] = str_4460;
  i_compile_bindings[ 32] = str_4461;
  i_compile_bindings[ 33] = G004450;
  i_compile_bindings[ 34] = G004463;
  i_compile_bindings[ 35] = str_4466;
  i_compile_bindings[ 36] = str_4467;
  i_compile_bindings[ 37] = str_4468;
  i_compile_bindings[ 38] = str_4469;
  i_compile_bindings[ 39] = str_4470;
  i_compile_bindings[ 40] = str_4471;
  i_compile_bindings[ 41] = str_4472;
  i_compile_bindings[ 42] = str_4473;
  i_compile_bindings[ 43] = G004465;
  i_compile_bindings[ 44] = G004475;
  i_compile_bindings[ 45] = str_4478;
  i_compile_bindings[ 46] = G004477;
  i_compile_bindings[ 47] = str_4481;
  i_compile_bindings[ 48] = G004480;
  i_compile_bindings[ 49] = str_4484;
  i_compile_bindings[ 50] = str_4485;
  i_compile_bindings[ 51] = str_4486;
  i_compile_bindings[ 52] = str_4487;
  i_compile_bindings[ 53] = str_4488;
  i_compile_bindings[ 54] = str_4489;
  i_compile_bindings[ 55] = str_4490;
  i_compile_bindings[ 56] = str_4491;
  i_compile_bindings[ 57] = str_4492;
  i_compile_bindings[ 58] = str_4493;
  i_compile_bindings[ 59] = str_4494;
  i_compile_bindings[ 60] = str_4495;
  i_compile_bindings[ 61] = str_4496;
  i_compile_bindings[ 62] = str_4497;
  i_compile_bindings[ 63] = str_4498;
  i_compile_bindings[ 64] = str_4499;
  i_compile_bindings[ 65] = str_4500;
  i_compile_bindings[ 66] = G004483;
  i_compile_bindings[ 67] = G004502;
  i_compile_bindings[ 68] = str_4505;
  i_compile_bindings[ 69] = G004504;
  i_compile_bindings[ 70] = G004507;
  i_compile_bindings[ 71] = str_4510;
  i_compile_bindings[ 72] = sym_4511;
  i_compile_bindings[ 73] = str_4512;
  i_compile_bindings[ 74] = G004509;
  i_compile_bindings[ 1] = eul_nil;
  i_compile_bindings[ 75] = sym_4515;
  i_compile_bindings[ 76] = sym_4516;
  i_compile_bindings[ 77] = sym_4517;
  i_compile_bindings[ 78] = sym_4518;
  i_compile_bindings[ 79] = sym_4519;
  i_compile_bindings[ 80] = sym_4520;
  i_compile_bindings[ 81] = sym_4521;
  i_compile_bindings[ 82] = sym_4522;
  i_compile_bindings[ 83] = sym_4523;
  eul_allocate_lambda( i_compile_bindings[0], "initialize-i-compile", 0, G004514);

  }
}


/* eof */