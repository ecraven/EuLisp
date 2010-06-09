/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module i-modify
 **  Copyright: See file i-modify.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern LispRef i_all_bindings[];
extern LispRef boot1_bindings[];
extern LispRef string_bindings[];
extern LispRef i_error_bindings[];
extern LispRef boot_bindings[];
extern LispRef i_param_bindings[];
extern LispRef stream_bindings[];

/* Module bindings with size 32 */
LispRef i_modify_bindings[32];

/* Foreign functions */
static LispRef ff_stub_eul_file_newer_p3479 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G003511, G003512, res;

  POPVAL1(G003512);
  POPVAL1(G003511);
  FF_RES_CONVERT6(res,eul_file_newer_p(FF_ARG_CONVERT3(G003511), FF_ARG_CONVERT3(G003512)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module i-modify */
void initialize_module_i_modify()
{
  if (is_initialized) return;
  initialize_module_i_all();
  eul_fast_table_set(eul_modules,"i_modify",(LispRef) i_modify_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_3510, sym_3509, sym_3508, sym_3507, sym_3506, sym_3505, sym_3504, G003503, G003500, G003498, G003493, G003491, G003487, G003483, G003481;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 1 is_init: 0 index: 10 binding: library-newer? */
  static const void *G003480[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_3484, "", 0);
  eul_allocate_static_string(str_3485, "file ~a does not exist", 22);
  /* Byte-vector with size: 18 is_init: 0 index: 13 binding: absolute-file-name */
  static const void *G003482[] = {I(aa,24,00,00),B(stream ,14),I(1c,24,00,00),B(i_param ,17),I(24,00,00,00),B(boot ,9),I(3c,03,1b,34),I(00,00,00,0d),I(1b,10,32,00),I(00,00,00,21),I(23,00,00,00),B(i_modify ,11),I(23,00,00,00),B(i_modify ,12),I(1f,03,24,00),B(i_error ,4),I(3d,03,02,45),I(02,00,00,00)};

  eul_allocate_static_string(str_3488, ".em", 3);
  eul_allocate_static_string(str_3489, ".i", 2);
  /* Byte-vector with size: 30 is_init: 0 index: 16 binding: module-modified? */
  static const void *G003486[] = {I(aa,24,00,00),B(i_param ,59),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,64),I(1c,7d,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,0a),I(1d,82,02,1b),I(23,00,00,00),B(i_modify ,14),I(24,00,00,00),B(string ,11),I(3c,02,1f,04),I(7d,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,0b),I(1f,05,82,02),I(1b,23,00,00),B(i_modify ,15),I(24,00,00,00),B(string ,11),I(3c,02,1f,03),I(1c,24,00,00),B(i_modify ,8),I(3d,02,08,22),I(06,45,02,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 17 binding: external-file-exist? */
  static const void *G003490[] = {I(aa,24,00,00),B(stream ,14),I(1c,24,00,00),B(i_param ,9),I(24,00,00,00),B(boot ,9),I(3c,03,1b,34),I(00,00,00,0d),I(1b,11,32,00),I(00,00,00,07),I(86,45,02,00)};

  eul_allocate_static_string(str_3494, ".c", 2);
  eul_allocate_static_string(str_3495, ".o", 2);
  eul_allocate_static_string(str_3496, ".o", 2);
  /* Byte-vector with size: 49 is_init: 0 index: 21 binding: C-module-modified? */
  static const void *G003492[] = {I(aa,1b,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0a),I(1c,82,02,1b),I(23,00,00,00),B(i_modify ,18),I(24,00,00,00),B(string ,11),I(3c,02,24,00),B(i_param ,54),I(34,00,00,00),I(00,00,00,5c),I(1f,03,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0b),I(1f,04,82,02),I(1b,23,00,00),B(i_modify ,19),I(24,00,00,00),B(string ,11),I(3c,02,24,00),B(i_param ,23),I(1c,24,00,00),B(string ,11),I(3c,02,24,00),B(i_param ,54),I(1c,24,00,00),B(string ,11),I(3c,02,22,04),I(32,00,00,00),I(00,00,00,34),I(1f,03,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0b),I(1f,04,82,02),I(23,00,00,00),B(i_modify ,20),I(24,00,00,00),B(string ,11),I(3c,02,22,01),I(24,00,00,00),B(i_modify ,8),I(3d,02,03,00)};

  /* Byte-vector with size: 25 is_init: 0 index: 22 binding: file-exist? */
  static const void *G003497[] = {I(aa,1b,24,00),B(i_param ,11),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,4e),I(24,00,00,00),B(stream ,14),I(1d,24,00,00),B(i_param ,17),I(24,00,00,00),B(boot ,9),I(3c,03,1b,34),I(00,00,00,29),I(1b,11,24,00),B(i_param ,11),I(24,00,00,00),B(boot1 ,39),I(3c,01,1f,04),I(1d,1d,3c,02),I(2a,1c,22,02),I(32,00,00,00),I(00,00,00,09),I(86,22,01,45),I(02,00,00,00)};

  eul_allocate_static_string(str_3501, "no such file ~a", 15);
  /* Byte-vector with size: 29 is_init: 0 index: 24 binding: file-newer? */
  static const void *G003499[] = {I(ab,24,00,00),B(stream ,14),I(1d,24,00,00),B(i_param ,17),I(24,00,00,00),B(boot ,9),I(3c,03,24,00),B(stream ,14),I(1d,24,00,00),B(i_param ,17),I(24,00,00,00),B(boot ,9),I(3c,03,1c,34),I(00,00,00,29),I(1b,34,00,00),I(00,00,00,1b),I(1c,10,1c,10),I(41,00,00,00),B(i_modify ,9),I(22,02,32,00),I(00,00,00,08),I(1f,03,32,00),I(00,00,00,19),I(23,00,00,00),B(i_modify ,23),I(1f,04,24,00),B(boot ,22),I(3d,02,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 50 is_init: 1 index: 0 binding: initialize-i-modify */
  static const void *G003502[] = {I(87,25,00,00),B(i_modify ,1),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(23,00,00,00),B(i_modify ,25),I(23,00,00,00),B(i_modify ,24),I(3b,02,25,00),B(i_modify ,8),I(23,00,00,00),B(i_modify ,26),I(23,00,00,00),B(i_modify ,22),I(3b,01,25,00),B(i_modify ,7),I(23,00,00,00),B(i_modify ,27),I(23,00,00,00),B(i_modify ,21),I(3b,01,25,00),B(i_modify ,6),I(23,00,00,00),B(i_modify ,28),I(23,00,00,00),B(i_modify ,17),I(3b,01,25,00),B(i_modify ,5),I(23,00,00,00),B(i_modify ,29),I(23,00,00,00),B(i_modify ,16),I(3b,01,25,00),B(i_modify ,4),I(23,00,00,00),B(i_modify ,30),I(23,00,00,00),B(i_modify ,13),I(3b,01,25,00),B(i_modify ,3),I(23,00,00,00),B(i_modify ,31),I(23,00,00,00),B(i_modify ,10),I(3b,02,25,00),B(i_modify ,2),I(86,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G003481,G003480);
  object_class(str_3484) = eul_static_string_class;
  object_class(str_3485) = eul_static_string_class;
  eul_allocate_bytevector( G003483,G003482);
  object_class(str_3488) = eul_static_string_class;
  object_class(str_3489) = eul_static_string_class;
  eul_allocate_bytevector( G003487,G003486);
  eul_allocate_bytevector( G003491,G003490);
  object_class(str_3494) = eul_static_string_class;
  object_class(str_3495) = eul_static_string_class;
  object_class(str_3496) = eul_static_string_class;
  eul_allocate_bytevector( G003493,G003492);
  eul_allocate_bytevector( G003498,G003497);
  object_class(str_3501) = eul_static_string_class;
  eul_allocate_bytevector( G003500,G003499);
  eul_intern_symbol(sym_3504,"file-newer?");
  eul_intern_symbol(sym_3505,"file-exist?");
  eul_intern_symbol(sym_3506,"C-module-modified?");
  eul_intern_symbol(sym_3507,"external-file-exist?");
  eul_intern_symbol(sym_3508,"module-modified?");
  eul_intern_symbol(sym_3509,"absolute-file-name");
  eul_intern_symbol(sym_3510,"library-newer?");
  eul_allocate_bytevector( G003503,G003502);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 9; i++)
      i_modify_bindings[i] = eul_nil;
  }

  i_modify_bindings[ 9] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_file_newer_p3479;
  i_modify_bindings[ 10] = G003481;
  i_modify_bindings[ 11] = str_3484;
  i_modify_bindings[ 12] = str_3485;
  i_modify_bindings[ 13] = G003483;
  i_modify_bindings[ 14] = str_3488;
  i_modify_bindings[ 15] = str_3489;
  i_modify_bindings[ 16] = G003487;
  i_modify_bindings[ 17] = G003491;
  i_modify_bindings[ 18] = str_3494;
  i_modify_bindings[ 19] = str_3495;
  i_modify_bindings[ 20] = str_3496;
  i_modify_bindings[ 21] = G003493;
  i_modify_bindings[ 22] = G003498;
  i_modify_bindings[ 23] = str_3501;
  i_modify_bindings[ 24] = G003500;
  i_modify_bindings[ 1] = eul_nil;
  i_modify_bindings[ 25] = sym_3504;
  i_modify_bindings[ 26] = sym_3505;
  i_modify_bindings[ 27] = sym_3506;
  i_modify_bindings[ 28] = sym_3507;
  i_modify_bindings[ 29] = sym_3508;
  i_modify_bindings[ 30] = sym_3509;
  i_modify_bindings[ 31] = sym_3510;
  eul_allocate_lambda( i_modify_bindings[0], "initialize-i-modify", 0, G003503);

  }
}


/* eof */
