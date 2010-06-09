/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module _stream0
 **  Copyright: See file _stream0.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_level1();
extern LispRef level1_bindings[];
extern LispRef boot_bindings[];
extern LispRef symbol_bindings[];
extern LispRef collect_bindings[];

/* Module bindings with size 49 */
LispRef _stream0_bindings[49];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module _stream0 */
void initialize_module__stream0()
{
  if (is_initialized) return;
  initialize_module_level1();
  eul_fast_table_set(eul_modules,"_stream0",(LispRef) _stream0_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_516, sym_515, sym_514, sym_513, sym_512, sym_511, G00510, G00508, sym_506, sym_505, G00504, G00502, sym_500, sym_499, G00498, sym_496, sym_495, sym_493, sym_492, G00491, sym_489, sym_488, sym_487, sym_486, key_485, key_484, sym_483, sym_482, G00481, sym_479, sym_478, G00477, sym_475, sym_474, sym_473, sym_472, sym_471, sym_470, G00469, G00467;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 2 is_init: 0 index: 9 binding: anonymous */
  static const void *G00466[] = {I(aa,10,86,86),I(0f,0f,45,00)};

  /* Byte-vector with size: 43 is_init: 0 index: 16 binding: anonymous */
  static const void *G00468[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,9b),I(47,00,01,86),I(0f,23,00,00),B(_stream0 ,10),I(1c,0f,1f,03),I(72,1f,04,10),I(1b,73,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_stream0 ,11),I(1c,0f,1f,09),I(72,47,00,01),I(86,0f,23,00),B(_stream0 ,12),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_stream0 ,11),I(1c,0f,47,00),I(01,86,0f,23),B(_stream0 ,13),I(1c,0f,1b,86),I(0f,47,00,01),I(1c,0f,23,00),B(_stream0 ,11),I(1c,0f,1b,86),I(0f,1f,06,1c),I(0f,23,00,00),B(_stream0 ,14),I(1c,0f,1b,86),I(0f,1f,0f,1c),I(0f,1f,16,1c),I(0f,23,00,00),B(_stream0 ,15),I(1c,0f,1f,1b),I(11,1b,47,00),I(00,3c,01,1d),I(1c,0f,22,1c),I(45,02,00,00)};

  /* Byte-vector with size: 69 is_init: 0 index: 19 binding: match-let */
  static const void *G00476[] = {I(43,fd,46,03),I(1c,24,00,00),B(collect ,9),I(3c,01,83,1c),I(19,1b,34,00),I(00,00,00,5a),I(1f,03,72,1f),I(05,86,0f,23),B(_stream0 ,10),I(1c,0f,1f,06),I(10,1b,73,1f),I(09,86,0f,23),B(_stream0 ,12),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,1f,06,1c),I(0f,23,00,00),B(_stream0 ,15),I(1c,0f,1b,86),I(0f,1f,0b,1c),I(0f,1b,86,0f),I(1b,1f,11,0f),I(23,00,00,00),B(_stream0 ,17),I(1c,0f,22,0f),I(32,00,00,00),I(00,00,00,ac),I(1f,04,7c,1b),I(34,00,00,00),I(00,00,00,10),I(1f,05,32,00),I(00,00,00,10),I(24,00,00,00),B(symbol ,6),I(3c,00,1b,48),I(00,01,86,1b),I(48,00,00,23),B(_stream0 ,18),I(23,00,00,00),B(_stream0 ,16),I(3b,01,48,00),I(00,1f,06,47),I(00,00,3c,01),I(1f,08,7c,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,14),I(1f,09,86,0f),I(47,00,01,1c),I(0f,86,0f,22),I(01,23,00,00),B(_stream0 ,18),I(23,00,00,00),B(_stream0 ,9),I(3b,01,1f,0a),I(24,00,00,00),B(collect ,2),I(3c,02,1c,1c),I(24,00,00,00),B(boot ,11),I(3c,02,23,00),B(_stream0 ,14),I(1f,05,0f,1b),I(1f,0c,0f,1d),I(1c,0f,23,00),B(_stream0 ,17),I(1c,0f,22,0b),I(45,05,00,00)};

  /* Byte-vector with size: 43 is_init: 0 index: 28 binding: with-output-file */
  static const void *G00480[] = {I(43,fe,1c,10),I(1d,11,1b,10),I(24,00,00,00),B(symbol ,6),I(3c,00,1f,03),I(1d,1d,23,00),B(_stream0 ,20),I(86,0f,23,00),B(_stream0 ,21),I(1c,0f,1b,86),I(0f,23,00,00),B(_stream0 ,22),I(1c,0f,1f,05),I(1c,0f,23,00),B(_stream0 ,23),I(1c,0f,23,00),B(_stream0 ,24),I(1c,0f,23,00),B(_stream0 ,25),I(1c,0f,1b,86),I(0f,1f,0b,1c),I(0f,86,86,0f),I(1f,0b,1c,0f),I(1b,86,0f,1f),I(03,1c,0f,23),B(_stream0 ,14),I(1f,16,0f,1b),I(86,0f,1f,10),I(1c,0f,23,00),B(_stream0 ,11),I(1c,0f,1f,14),I(86,0f,23,00),B(_stream0 ,26),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_stream0 ,27),I(1c,0f,1f,17),I(86,0f,1c,1c),I(0f,1f,0b,1c),I(0f,23,00,00),B(_stream0 ,17),I(1c,0f,45,23)};

  eul_allocate_static_string(str_494, "No such file or directory ~a in ~a", 34);
  /* Byte-vector with size: 65 is_init: 0 index: 34 binding: with-input-file-of-path */
  static const void *G00490[] = {I(43,fe,1c,10),I(1d,11,1b,10),I(1f,04,11,1b),I(11,1b,10,1f),I(07,11,1b,11),I(1b,11,1b,10),I(24,00,00,00),B(symbol ,6),I(3c,00,24,00),B(symbol ,6),I(3c,00,24,00),B(symbol ,6),I(3c,00,1f,0c),I(1f,0b,1f,09),I(1f,06,1f,06),I(1f,06,1f,06),I(1f,03,86,0f),I(1f,06,1c,0f),I(23,00,00,00),B(_stream0 ,29),I(1c,0f,23,00),B(_stream0 ,30),I(1c,0f,1b,86),I(0f,1f,07,1c),I(0f,1b,86,0f),I(1f,09,86,0f),I(23,00,00,00),B(_stream0 ,10),I(1c,0f,1f,0c),I(86,0f,1f,0f),I(1c,0f,23,00),B(_stream0 ,31),I(1c,0f,23,00),B(_stream0 ,32),I(1c,0f,1f,0f),I(86,0f,23,00),B(_stream0 ,12),I(1c,0f,1b,86),I(0f,1f,11,1c),I(0f,1f,13,86),I(0f,23,00,00),B(_stream0 ,13),I(1c,0f,1b,86),I(0f,1f,18,1c),I(0f,1b,86,0f),I(1f,05,1c,0f),I(1f,18,86,0f),I(1f,1e,1c,0f),I(1b,1f,2e,0f),I(23,00,00,00),B(_stream0 ,33),I(1c,0f,1b,86),I(0f,1f,05,1c),I(0f,23,00,00),B(_stream0 ,17),I(1c,0f,1b,86),I(0f,1f,12,1c),I(0f,1f,17,1c),I(0f,23,00,00),B(_stream0 ,15),I(1c,0f,1b,86),I(0f,1f,1c,1c),I(0f,23,00,00),B(_stream0 ,17),I(1c,0f,45,3a)};

  /* Byte-vector with size: 30 is_init: 0 index: 37 binding: with-source */
  static const void *G00497[] = {I(43,fe,24,00),B(symbol ,6),I(3c,00,1d,10),I(1b,86,0f,23),B(_stream0 ,35),I(1c,0f,1b,86),I(0f,1f,04,1c),I(0f,1b,86,0f),I(1f,08,11,1b),I(10,1f,0a,10),I(1b,86,0f,1d),I(1c,0f,23,00),B(_stream0 ,36),I(1c,0f,23,00),B(_stream0 ,14),I(1f,0e,0f,1f),I(0f,10,1b,86),I(0f,1f,0f,1c),I(0f,23,00,00),B(_stream0 ,36),I(1c,0f,1b,86),I(0f,1f,05,1c),I(0f,23,00,00),B(_stream0 ,27),I(1c,0f,1b,86),I(0f,1f,09,1c),I(0f,1f,10,1c),I(0f,23,00,00),B(_stream0 ,17),I(1c,0f,45,1a)};

  /* Byte-vector with size: 30 is_init: 0 index: 38 binding: with-sink */
  static const void *G00501[] = {I(43,fe,24,00),B(symbol ,6),I(3c,00,1d,10),I(1b,86,0f,23),B(_stream0 ,35),I(1c,0f,1b,86),I(0f,1f,04,1c),I(0f,1b,86,0f),I(1f,08,11,1b),I(10,1f,0a,10),I(1b,86,0f,1d),I(1c,0f,23,00),B(_stream0 ,36),I(1c,0f,23,00),B(_stream0 ,14),I(1f,0e,0f,1f),I(0f,10,1b,86),I(0f,1f,0f,1c),I(0f,23,00,00),B(_stream0 ,36),I(1c,0f,1b,86),I(0f,1f,05,1c),I(0f,23,00,00),B(_stream0 ,27),I(1c,0f,1b,86),I(0f,1f,09,1c),I(0f,1f,10,1c),I(0f,23,00,00),B(_stream0 ,17),I(1c,0f,45,1a)};

  /* Byte-vector with size: 22 is_init: 0 index: 41 binding: with-lock */
  static const void *G00503[] = {I(43,fe,24,00),B(symbol ,6),I(3c,00,1d,86),I(0f,1c,1c,0f),I(1b,86,0f,1f),I(03,86,0f,23),B(_stream0 ,39),I(1c,0f,1b,1f),I(07,0f,23,00),B(_stream0 ,14),I(1c,0f,1f,07),I(86,0f,23,00),B(_stream0 ,40),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_stream0 ,27),I(1c,0f,1b,86),I(0f,1f,0a,1c),I(0f,23,00,00),B(_stream0 ,17),I(1c,0f,45,11)};

  /* Byte-vector with size: 36 is_init: 0 index: 42 binding: with-input-file */
  static const void *G00507[] = {I(43,fe,1c,10),I(1d,11,1b,10),I(24,00,00,00),B(symbol ,6),I(3c,00,1f,03),I(1d,1d,1c,86),I(0f,23,00,00),B(_stream0 ,23),I(1c,0f,23,00),B(_stream0 ,24),I(1c,0f,23,00),B(_stream0 ,25),I(1c,0f,1b,86),I(0f,1f,07,1c),I(0f,86,86,0f),I(1f,07,1c,0f),I(1b,86,0f,1f),I(03,1c,0f,23),B(_stream0 ,14),I(1f,12,0f,1b),I(86,0f,1f,0c),I(1c,0f,23,00),B(_stream0 ,11),I(1c,0f,1f,10),I(86,0f,23,00),B(_stream0 ,26),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_stream0 ,27),I(1c,0f,1f,13),I(86,0f,1c,1c),I(0f,1f,0b,1c),I(0f,23,00,00),B(_stream0 ,17),I(1c,0f,45,1f)};

  /* Byte-vector with size: 50 is_init: 1 index: 0 binding: initialize-_stream0 */
  static const void *G00509[] = {I(87,25,00,00),B(_stream0 ,1),I(24,00,00,00),B(level1 ,1),I(3e,0b,24,00),B(level1 ,0),I(3c,00,21,01),I(23,00,00,00),B(_stream0 ,33),I(23,00,00,00),B(_stream0 ,42),I(3b,fe,25,00),B(_stream0 ,8),I(23,00,00,00),B(_stream0 ,43),I(23,00,00,00),B(_stream0 ,41),I(3b,fe,25,00),B(_stream0 ,7),I(23,00,00,00),B(_stream0 ,44),I(23,00,00,00),B(_stream0 ,38),I(3b,fe,25,00),B(_stream0 ,6),I(23,00,00,00),B(_stream0 ,45),I(23,00,00,00),B(_stream0 ,37),I(3b,fe,25,00),B(_stream0 ,5),I(23,00,00,00),B(_stream0 ,46),I(23,00,00,00),B(_stream0 ,34),I(3b,fe,25,00),B(_stream0 ,4),I(23,00,00,00),B(_stream0 ,47),I(23,00,00,00),B(_stream0 ,28),I(3b,fe,25,00),B(_stream0 ,3),I(23,00,00,00),B(_stream0 ,48),I(23,00,00,00),B(_stream0 ,19),I(3b,fd,25,00),B(_stream0 ,2),I(86,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G00467,G00466);
  eul_intern_symbol(sym_470,"null?");
  eul_intern_symbol(sym_471,"setq");
  eul_intern_symbol(sym_472,"car");
  eul_intern_symbol(sym_473,"cdr");
  eul_intern_symbol(sym_474,"progn");
  eul_intern_symbol(sym_475,"if");
  eul_allocate_bytevector( G00469,G00468);
  eul_intern_symbol(sym_478,"let");
  eul_intern_symbol(sym_479,"anonymous");
  eul_allocate_bytevector( G00477,G00476);
  eul_intern_symbol(sym_482,"w");
  eul_intern_symbol(sym_483,"quote");
  eul_intern_keyword(key_484,"mode");
  eul_intern_keyword(key_485,"file-name");
  eul_intern_symbol(sym_486,"<file-stream>");
  eul_intern_symbol(sym_487,"make");
  eul_intern_symbol(sym_488,"disconnect");
  eul_intern_symbol(sym_489,"unwind-protect");
  eul_allocate_bytevector( G00481,G00480);
  eul_intern_symbol(sym_492,"file-lookup");
  eul_intern_symbol(sym_493,"apply");
  object_class(str_494) = eul_static_string_class;
  eul_intern_symbol(sym_495,"error");
  eul_intern_symbol(sym_496,"with-input-file");
  eul_allocate_bytevector( G00491,G00490);
  eul_intern_symbol(sym_499,"source");
  eul_intern_symbol(sym_500,"reconnect");
  eul_allocate_bytevector( G00498,G00497);
  eul_allocate_bytevector( G00502,G00501);
  eul_intern_symbol(sym_505,"lock");
  eul_intern_symbol(sym_506,"unlock");
  eul_allocate_bytevector( G00504,G00503);
  eul_allocate_bytevector( G00508,G00507);
  eul_intern_symbol(sym_511,"with-lock");
  eul_intern_symbol(sym_512,"with-sink");
  eul_intern_symbol(sym_513,"with-source");
  eul_intern_symbol(sym_514,"with-input-file-of-path");
  eul_intern_symbol(sym_515,"with-output-file");
  eul_intern_symbol(sym_516,"match-let");
  eul_allocate_bytevector( G00510,G00509);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 9; i++)
      _stream0_bindings[i] = eul_nil;
  }

  _stream0_bindings[ 9] = G00467;
  _stream0_bindings[ 10] = sym_470;
  _stream0_bindings[ 11] = sym_471;
  _stream0_bindings[ 12] = sym_472;
  _stream0_bindings[ 13] = sym_473;
  _stream0_bindings[ 14] = sym_474;
  _stream0_bindings[ 15] = sym_475;
  _stream0_bindings[ 16] = G00469;
  _stream0_bindings[ 17] = sym_478;
  _stream0_bindings[ 18] = sym_479;
  _stream0_bindings[ 19] = G00477;
  _stream0_bindings[ 20] = sym_482;
  _stream0_bindings[ 21] = sym_483;
  _stream0_bindings[ 22] = key_484;
  _stream0_bindings[ 23] = key_485;
  _stream0_bindings[ 24] = sym_486;
  _stream0_bindings[ 25] = sym_487;
  _stream0_bindings[ 26] = sym_488;
  _stream0_bindings[ 27] = sym_489;
  _stream0_bindings[ 28] = G00481;
  _stream0_bindings[ 29] = sym_492;
  _stream0_bindings[ 30] = sym_493;
  _stream0_bindings[ 31] = str_494;
  _stream0_bindings[ 32] = sym_495;
  _stream0_bindings[ 33] = sym_496;
  _stream0_bindings[ 34] = G00491;
  _stream0_bindings[ 35] = sym_499;
  _stream0_bindings[ 36] = sym_500;
  _stream0_bindings[ 37] = G00498;
  _stream0_bindings[ 38] = G00502;
  _stream0_bindings[ 39] = sym_505;
  _stream0_bindings[ 40] = sym_506;
  _stream0_bindings[ 41] = G00504;
  _stream0_bindings[ 42] = G00508;
  _stream0_bindings[ 1] = eul_nil;
  _stream0_bindings[ 43] = sym_511;
  _stream0_bindings[ 44] = sym_512;
  _stream0_bindings[ 45] = sym_513;
  _stream0_bindings[ 46] = sym_514;
  _stream0_bindings[ 47] = sym_515;
  _stream0_bindings[ 48] = sym_516;
  eul_allocate_lambda( _stream0_bindings[0], "initialize-_stream0", 0, G00510);

  }
}


/* eof */
