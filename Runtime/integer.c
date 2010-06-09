/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module integer
 **  Copyright: See file integer.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_number();
extern LispRef telos_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef boot1_bindings[];
extern LispRef number_bindings[];

/* Module bindings with size 22 */
LispRef integer_bindings[22];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module integer */
void initialize_module_integer()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_number();
  eul_fast_table_set(eul_modules,"integer",(LispRef) integer_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_2215, sym_2214, sym_2213, G002212, G002210, G002208, sym_2206, sym_2205, key_2204, key_2203, key_2202, key_2201, sym_2200, key_2199, G002198, G002196, G002194;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 1 is_init: 0 index: 6 binding: (method-integerp) */
  static const void *G002193[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 7 binding: (method-integerp) */
  static const void *G002195[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 104 is_init: 0 index: 16 binding: top-level */
  static const void *G002197[] = {I(a9,24,00,00),B(number ,5),I(24,00,00,00),B(boot1 ,23),I(3c,01,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_class ,70),I(23,00,00,00),B(integer ,8),I(23,00,00,00),B(integer ,9),I(23,00,00,00),B(integer ,10),I(1f,05,23,00),B(integer ,11),I(1f,06,23,00),B(integer ,12),I(86,23,00,00),B(integer ,13),I(87,24,00,00),B(mop_gf ,2),I(3c,0b,1b,89),B(integer ,2),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,37),I(3c,02,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(integer ,14),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(integer ,3),I(2a,24,00,00),B(integer ,3),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,37),I(3c,02,24,00),B(boot1 ,23),I(3c,00,24,00),B(integer ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(integer ,15),I(23,00,00,00),B(integer ,7),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(integer ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(integer ,3),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(integer ,2),I(24,00,00,00),B(boot1 ,37),I(3c,02,24,00),B(boot1 ,23),I(3c,00,24,00),B(integer ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(integer ,15),I(23,00,00,00),B(integer ,6),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(integer ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(integer ,3),I(2a,24,00,00),B(integer ,2),I(45,13,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 17 binding: evenp */
  static const void *G002207[] = {I(aa,84,24,00),B(number ,6),I(3c,02,24,00),B(number ,8),I(3d,01,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 18 binding: oddp */
  static const void *G002209[] = {I(aa,84,24,00),B(number ,6),I(3c,02,1b,24),B(number ,8),I(3c,01,12,45),I(01,00,00,00)};

  /* Byte-vector with size: 34 is_init: 1 index: 0 binding: initialize-integer */
  static const void *G002211[] = {I(87,25,00,00),B(integer ,1),I(24,00,00,00),B(number ,1),I(3e,0b,24,00),B(number ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(integer ,19),I(23,00,00,00),B(integer ,18),I(3b,01,25,00),B(integer ,5),I(23,00,00,00),B(integer ,20),I(23,00,00,00),B(integer ,17),I(3b,01,25,00),B(integer ,4),I(86,25,00,00),B(integer ,3),I(86,25,00,00),B(integer ,2),I(23,00,00,00),B(integer ,21),I(23,00,00,00),B(integer ,16),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G002194,G002193);
  eul_allocate_bytevector( G002196,G002195);
  eul_intern_keyword(key_2199,"name");
  eul_intern_symbol(sym_2200,"integer");
  eul_intern_keyword(key_2201,"direct-superclasses");
  eul_intern_keyword(key_2202,"direct-slots");
  eul_intern_keyword(key_2203,"direct-keywords");
  eul_intern_keyword(key_2204,"abstractp");
  eul_intern_symbol(sym_2205,"integerp");
  eul_intern_symbol(sym_2206,"(method integerp)");
  eul_allocate_bytevector( G002198,G002197);
  eul_allocate_bytevector( G002208,G002207);
  eul_allocate_bytevector( G002210,G002209);
  eul_intern_symbol(sym_2213,"oddp");
  eul_intern_symbol(sym_2214,"evenp");
  eul_intern_symbol(sym_2215,"top-level");
  eul_allocate_bytevector( G002212,G002211);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 6; i++)
      integer_bindings[i] = eul_nil;
  }

  integer_bindings[ 6] = G002194;
  integer_bindings[ 7] = G002196;
  integer_bindings[ 8] = key_2199;
  integer_bindings[ 9] = sym_2200;
  integer_bindings[ 10] = key_2201;
  integer_bindings[ 11] = key_2202;
  integer_bindings[ 12] = key_2203;
  integer_bindings[ 13] = key_2204;
  integer_bindings[ 14] = sym_2205;
  integer_bindings[ 15] = sym_2206;
  integer_bindings[ 16] = G002198;
  integer_bindings[ 17] = G002208;
  integer_bindings[ 18] = G002210;
  integer_bindings[ 1] = eul_nil;
  integer_bindings[ 19] = sym_2213;
  integer_bindings[ 20] = sym_2214;
  integer_bindings[ 21] = sym_2215;
  eul_allocate_lambda( integer_bindings[0], "initialize-integer", 0, G002212);

  }
}


/* eof */
