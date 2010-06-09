/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module mop-access
 **  Copyright: See file mop-access.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_boot();
extern void initialize_module_mop_prim();
extern void initialize_module_mop_key();
extern void initialize_module_mop_class();
extern void initialize_module_mop_inspect();
extern void initialize_module_mop_gf();
extern void initialize_module_mop_meth();
extern void initialize_module_mop_defcl();
extern LispRef mop_inspect_bindings[];
extern LispRef mop_key_bindings[];
extern LispRef mop_prim_bindings[];
extern LispRef boot_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_defcl_bindings[];

/* Module bindings with size 64 */
LispRef mop_access_bindings[64];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module mop-access */
void initialize_module_mop_access()
{
  if (is_initialized) return;
  initialize_module_boot();
  initialize_module_mop_prim();
  initialize_module_mop_key();
  initialize_module_mop_class();
  initialize_module_mop_inspect();
  initialize_module_mop_gf();
  initialize_module_mop_meth();
  initialize_module_mop_defcl();
  eul_fast_table_set(eul_modules,"mop_access",(LispRef) mop_access_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_3047, sym_3046, sym_3045, G003044, G003042, G003040, G003036, G003033, sym_3031, sym_3030, sym_3029, sym_3028, sym_3027, sym_3026, sym_3025, sym_3024, sym_3023, sym_3022, sym_3021, sym_3020, sym_3019, sym_3018, sym_3017, sym_3016, sym_3015, sym_3014, G003013, G003011, G003009, G003007, G003005, G003003, G003001, G002999, G002997, G002995, G002993, G002991, G002989, G002987, G002985, G002983, G002981, G002979, G002977, G002975, sym_2973, G002972, G002970;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 11 is_init: 0 index: 13 binding: anonymous */
  static const void *G002969[] = {I(ab,1b,10,1b),I(82,02,47,00),I(01,1c,50,1b),I(34,00,00,00),I(00,00,00,10),I(1f,04,32,00),I(00,00,00,13),I(1f,04,83,14),I(1f,04,11,47),I(00,00,3d,02),I(05,45,05,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 15 binding: (method-compute-primitive-writer-using-class) */
  static const void *G002971[] = {I(43,03,46,03),I(1c,82,02,1b),I(48,00,01,86),I(1b,48,00,00),I(23,00,00,00),B(mop_access ,14),I(23,00,00,00),B(mop_access ,13),I(3b,02,48,00),I(00,82,1f,03),I(47,00,00,3c),I(02,24,00,00),B(mop_defcl ,3),I(3d,01,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 16 binding: (method-compute-primitive-writer-using-slot) */
  static const void *G002974[] = {I(43,03,1c,1f),I(03,1d,24,00),B(mop_access ,12),I(3d,03,03,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 17 binding: (method-ensure-slot-writer) */
  static const void *G002976[] = {I(43,04,1b,45),I(04,00,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 18 binding: anonymous */
  static const void *G002978[] = {I(ab,47,00,00),I(3d,02,00,00)};

  /* Byte-vector with size: 31 is_init: 0 index: 19 binding: (method-ensure-slot-writer) */
  static const void *G002980[] = {I(43,04,46,01),I(1b,26,00,00),I(00,00,00,05),I(02,1b,34,00),I(00,00,00,0e),I(86,32,00,00),I(00,00,00,63),I(1f,03,1f,05),I(1f,04,24,00),B(mop_access ,7),I(3c,03,1b,48),I(00,00,1d,26),I(00,00,00,03),I(02,84,1f,07),I(86,24,00,00),B(boot1 ,37),I(3c,03,24,00),B(boot1 ,23),I(3c,00,1d,1d),I(23,00,00,00),B(mop_access ,14),I(23,00,00,00),B(mop_access ,18),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,8),I(3c,02,22,05),I(2a,1c,45,05)};

  /* Byte-vector with size: 11 is_init: 0 index: 20 binding: anonymous */
  static const void *G002982[] = {I(ab,1b,10,1b),I(82,02,47,00),I(01,1c,50,1b),I(34,00,00,00),I(00,00,00,10),I(1f,04,32,00),I(00,00,00,13),I(1f,04,83,14),I(1f,04,11,47),I(00,00,3d,02),I(05,45,05,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 21 binding: (method-compute-primitive-reader-using-class) */
  static const void *G002984[] = {I(43,03,46,03),I(1c,82,02,1b),I(48,00,01,86),I(1b,48,00,00),I(23,00,00,00),B(mop_access ,14),I(23,00,00,00),B(mop_access ,20),I(3b,02,48,00),I(00,82,1f,03),I(47,00,00,3c),I(02,24,00,00),B(mop_defcl ,6),I(3d,01,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 22 binding: (method-compute-primitive-reader-using-slot) */
  static const void *G002986[] = {I(43,03,1c,1f),I(03,1d,24,00),B(mop_access ,8),I(3d,03,03,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 23 binding: (method-ensure-slot-reader) */
  static const void *G002988[] = {I(43,04,1b,45),I(04,00,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 24 binding: anonymous */
  static const void *G002990[] = {I(aa,47,00,00),I(3d,01,00,00)};

  /* Byte-vector with size: 31 is_init: 0 index: 25 binding: (method-ensure-slot-reader) */
  static const void *G002992[] = {I(43,04,46,01),I(1b,26,00,00),I(00,00,00,05),I(02,1b,34,00),I(00,00,00,0e),I(86,32,00,00),I(00,00,00,63),I(1f,03,1f,05),I(1f,04,24,00),B(mop_access ,4),I(3c,03,1b,48),I(00,00,1d,26),I(00,00,00,03),I(02,83,1f,07),I(24,00,00,00),B(boot1 ,37),I(3c,02,24,00),B(boot1 ,23),I(3c,00,1d,1d),I(23,00,00,00),B(mop_access ,14),I(23,00,00,00),B(mop_access ,24),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,8),I(3c,02,22,05),I(2a,1c,45,05)};

  /* Byte-vector with size: 11 is_init: 0 index: 26 binding: anonymous */
  static const void *G002994[] = {I(ab,1b,10,1b),I(84,02,47,00),I(01,1c,50,1b),I(34,00,00,00),I(00,00,00,10),I(1f,04,32,00),I(00,00,00,13),I(1f,04,83,14),I(1f,04,11,47),I(00,00,3d,02),I(05,45,05,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 27 binding: (method-compute-slot-writer) */
  static const void *G002996[] = {I(43,03,46,03),I(1c,84,02,1b),I(48,00,01,86),I(1b,48,00,00),I(23,00,00,00),B(mop_access ,14),I(23,00,00,00),B(mop_access ,26),I(3b,02,48,00),I(00,82,1f,03),I(47,00,00,3c),I(02,24,00,00),B(mop_defcl ,3),I(3d,01,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 20 is_init: 0 index: 28 binding: (method-compute-slot-writer) */
  static const void *G002998[] = {I(43,03,84,1f),I(03,24,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,37),I(3c,03,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_access ,14),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,45),I(07,00,00,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 29 binding: anonymous */
  static const void *G003000[] = {I(ab,1b,10,1b),I(84,02,47,00),I(01,1c,50,1b),I(34,00,00,00),I(00,00,00,10),I(1f,04,32,00),I(00,00,00,13),I(1f,04,83,14),I(1f,04,11,47),I(00,00,3d,02),I(05,45,05,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 30 binding: (method-compute-slot-reader) */
  static const void *G003002[] = {I(43,03,46,03),I(1c,84,02,1b),I(48,00,01,86),I(1b,48,00,00),I(23,00,00,00),B(mop_access ,14),I(23,00,00,00),B(mop_access ,29),I(3b,02,48,00),I(00,82,1f,03),I(47,00,00,3c),I(02,24,00,00),B(mop_defcl ,6),I(3d,01,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 31 binding: (method-compute-slot-reader) */
  static const void *G003004[] = {I(43,03,83,1f),I(03,24,00,00),B(boot1 ,37),I(3c,02,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_access ,14),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,45),I(07,00,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 32 binding: anonymous */
  static const void *G003006[] = {I(ab,82,02,50),I(45,00,00,00)};

  /* Byte-vector with size: 38 is_init: 0 index: 33 binding: anonymous */
  static const void *G003008[] = {I(aa,1b,82,02),I(47,00,02,10),I(1c,1c,23,00),B(mop_access ,14),I(23,00,00,00),B(mop_access ,32),I(3b,02,24,00),B(boot ,20),I(3c,03,1b,34),I(00,00,00,0d),I(86,32,00,00),I(00,00,00,3c),I(47,00,00,1f),I(04,47,00,01),I(24,00,00,00),B(mop_access ,11),I(3c,03,47,00),I(00,1f,05,47),I(00,01,24,00),B(mop_access ,10),I(3c,03,1f,05),I(1d,1c,82,1d),I(03,22,02,2a),I(1f,05,1c,1c),I(83,1d,03,22),I(04,2a,1f,03),I(82,02,47,00),I(00,1f,05,47),I(00,01,1f,03),I(24,00,00,00),B(mop_access ,2),I(3c,04,2a,1f),I(04,83,02,47),I(00,00,1f,06),I(47,00,01,1f),I(03,24,00,00),B(mop_access ,6),I(3d,04,06,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 34 binding: (method-compute-and-ensure-slot-accessors) */
  static const void *G003010[] = {I(43,03,46,03),I(1d,48,00,00),I(1c,48,00,01),I(1b,48,00,02),I(23,00,00,00),B(mop_access ,14),I(23,00,00,00),B(mop_access ,33),I(3b,01,47,00),I(01,24,00,00),B(boot ,4),I(3c,02,2a,47),I(00,01,45,03)};

  /* Byte-vector with size: 671 is_init: 0 index: 53 binding: top-level */
  static const void *G003012[] = {I(a9,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_access ,35),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_access ,9),I(2a,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,49),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_access ,36),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_access ,11),I(2a,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,49),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_access ,37),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_access ,10),I(2a,26,00,00),I(00,00,00,04),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,49),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,27),I(24,00,00,00),B(boot1 ,37),I(3c,05,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_access ,38),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_access ,2),I(2a,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,49),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_access ,39),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_access ,4),I(2a,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,49),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_access ,40),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_access ,8),I(2a,26,00,00),I(00,00,00,04),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,49),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,27),I(24,00,00,00),B(boot1 ,37),I(3c,05,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_access ,41),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_access ,6),I(2a,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,49),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_access ,42),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_access ,7),I(2a,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,49),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_access ,43),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_access ,12),I(2a,24,00,00),B(mop_access ,9),I(2a,24,00,00),B(mop_access ,9),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,75),I(86,86,24,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_access ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,44),I(23,00,00,00),B(mop_access ,34),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,11),I(2a,24,00,00),B(mop_access ,11),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,49),I(86,24,00,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_access ,11),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,45),I(23,00,00,00),B(mop_access ,31),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,11),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,11),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,56),I(86,24,00,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_access ,11),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,45),I(23,00,00,00),B(mop_access ,30),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,11),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,10),I(2a,24,00,00),B(mop_access ,10),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,49),I(86,24,00,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_access ,10),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,46),I(23,00,00,00),B(mop_access ,28),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,10),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,56),I(86,24,00,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_access ,10),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,46),I(23,00,00,00),B(mop_access ,27),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,2),I(2a,24,00,00),B(mop_access ,2),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,04),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,49),I(86,24,00,00),B(mop_class ,44),I(24,00,00,00),B(boot1 ,37),I(3c,05,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_access ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,47),I(23,00,00,00),B(mop_access ,25),I(3b,04,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,2),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,04),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,56),I(86,24,00,00),B(mop_class ,27),I(24,00,00,00),B(boot1 ,37),I(3c,05,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_access ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,47),I(23,00,00,00),B(mop_access ,23),I(3b,04,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,4),I(2a,24,00,00),B(mop_access ,4),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,49),I(24,00,00,00),B(mop_class ,75),I(86,24,00,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_access ,4),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,48),I(23,00,00,00),B(mop_access ,22),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,4),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,8),I(2a,24,00,00),B(mop_access ,8),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,49),I(86,24,00,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_access ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,49),I(23,00,00,00),B(mop_access ,21),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,6),I(2a,24,00,00),B(mop_access ,6),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,04),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,49),I(86,24,00,00),B(mop_class ,44),I(24,00,00,00),B(boot1 ,37),I(3c,05,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_access ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,50),I(23,00,00,00),B(mop_access ,19),I(3b,04,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,6),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,04),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,56),I(86,24,00,00),B(mop_class ,27),I(24,00,00,00),B(boot1 ,37),I(3c,05,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_access ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,50),I(23,00,00,00),B(mop_access ,17),I(3b,04,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,7),I(2a,24,00,00),B(mop_access ,7),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,49),I(24,00,00,00),B(mop_class ,75),I(86,24,00,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_access ,7),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,51),I(23,00,00,00),B(mop_access ,16),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,12),I(2a,24,00,00),B(mop_access ,12),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,49),I(86,24,00,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_access ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,52),I(23,00,00,00),B(mop_access ,15),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,12),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,72,45),I(72,00,00,00)};

  eul_allocate_static_string(str_3034, "\n  ~a = ~a", 10);
  /* Byte-vector with size: 11 is_init: 0 index: 55 binding: anonymous */
  static const void *G003032[] = {I(aa,1b,84,02),I(1c,82,02,47),I(00,00,1c,3c),I(01,1d,1c,47),I(00,01,23,00),B(mop_access ,54),I(1f,03,1f,03),I(24,00,00,00),B(mop_gf ,17),I(3d,04,06,45),I(06,00,00,00)};

  eul_allocate_static_string(str_3037, "\nInstance ~a of class #<~a>", 27);
  eul_allocate_static_string(str_3038, "\n", 1);
  /* Byte-vector with size: 42 is_init: 0 index: 58 binding: pprint */
  static const void *G003035[] = {I(43,fe,46,02),I(1c,48,00,00),I(47,00,00,24),B(boot1 ,47),I(3c,01,1b,34),I(00,00,00,79),I(1c,34,00,00),I(00,00,00,0f),I(1c,10,32,00),I(00,00,00,07),I(87,1b,48,00),I(01,47,00,00),I(04,1b,82,02),I(47,00,01,23),B(mop_access ,56),I(47,00,00,1f),I(03,24,00,00),B(mop_gf ,17),I(3c,04,2a,1c),I(26,00,00,00),I(00,00,00,04),I(02,23,00,00),B(mop_access ,14),I(23,00,00,00),B(mop_access ,55),I(3b,01,1c,24),B(boot ,4),I(3c,02,2a,47),I(00,01,23,00),B(mop_access ,57),I(24,00,00,00),B(mop_gf ,17),I(3d,02,07,22),I(04,32,00,00),I(00,00,00,1e),I(24,00,00,00),B(boot1 ,3),I(47,00,00,1f),I(03,24,00,00),B(boot ,9),I(3d,03,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 59 binding: anonymous */
  static const void *G003039[] = {I(aa,84,02,45),I(00,00,00,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 60 binding: find-slot-names */
  static const void *G003041[] = {I(aa,04,26,00),I(00,00,00,04),I(02,23,00,00),B(mop_access ,14),I(23,00,00,00),B(mop_access ,59),I(3b,01,1c,24),B(boot ,15),I(3d,02,01,00)};

  /* Byte-vector with size: 78 is_init: 1 index: 0 binding: initialize-mop-access */
  static const void *G003043[] = {I(87,25,00,00),B(mop_access ,1),I(24,00,00,00),B(mop_defcl ,1),I(3e,0b,24,00),B(mop_defcl ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_meth ,1),I(3e,0b,24,00),B(mop_meth ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_gf ,1),I(3e,0b,24,00),B(mop_gf ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_inspect ,1),I(3e,0b,24,00),B(mop_inspect ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_class ,1),I(3e,0b,24,00),B(mop_class ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_key ,1),I(3e,0b,24,00),B(mop_key ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_prim ,1),I(3e,0b,24,00),B(mop_prim ,0),I(3c,00,21,01),I(24,00,00,00),B(boot ,1),I(3e,0b,24,00),B(boot ,0),I(3c,00,21,01),I(86,25,00,00),B(mop_access ,12),I(86,25,00,00),B(mop_access ,11),I(86,25,00,00),B(mop_access ,10),I(86,25,00,00),B(mop_access ,9),I(86,25,00,00),B(mop_access ,8),I(86,25,00,00),B(mop_access ,7),I(86,25,00,00),B(mop_access ,6),I(23,00,00,00),B(mop_access ,61),I(23,00,00,00),B(mop_access ,60),I(3b,01,25,00),B(mop_access ,5),I(86,25,00,00),B(mop_access ,4),I(23,00,00,00),B(mop_access ,62),I(23,00,00,00),B(mop_access ,58),I(3b,fe,25,00),B(mop_access ,3),I(86,25,00,00),B(mop_access ,2),I(23,00,00,00),B(mop_access ,63),I(23,00,00,00),B(mop_access ,53),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G002970,G002969);
  eul_intern_symbol(sym_2973,"anonymous");
  eul_allocate_bytevector( G002972,G002971);
  eul_allocate_bytevector( G002975,G002974);
  eul_allocate_bytevector( G002977,G002976);
  eul_allocate_bytevector( G002979,G002978);
  eul_allocate_bytevector( G002981,G002980);
  eul_allocate_bytevector( G002983,G002982);
  eul_allocate_bytevector( G002985,G002984);
  eul_allocate_bytevector( G002987,G002986);
  eul_allocate_bytevector( G002989,G002988);
  eul_allocate_bytevector( G002991,G002990);
  eul_allocate_bytevector( G002993,G002992);
  eul_allocate_bytevector( G002995,G002994);
  eul_allocate_bytevector( G002997,G002996);
  eul_allocate_bytevector( G002999,G002998);
  eul_allocate_bytevector( G003001,G003000);
  eul_allocate_bytevector( G003003,G003002);
  eul_allocate_bytevector( G003005,G003004);
  eul_allocate_bytevector( G003007,G003006);
  eul_allocate_bytevector( G003009,G003008);
  eul_allocate_bytevector( G003011,G003010);
  eul_intern_symbol(sym_3014,"compute-and-ensure-slot-accessors");
  eul_intern_symbol(sym_3015,"compute-slot-reader");
  eul_intern_symbol(sym_3016,"compute-slot-writer");
  eul_intern_symbol(sym_3017,"ensure-slot-reader");
  eul_intern_symbol(sym_3018,"compute-primitive-reader-using-slot");
  eul_intern_symbol(sym_3019,"compute-primitive-reader-using-class");
  eul_intern_symbol(sym_3020,"ensure-slot-writer");
  eul_intern_symbol(sym_3021,"compute-primitive-writer-using-slot");
  eul_intern_symbol(sym_3022,"compute-primitive-writer-using-class");
  eul_intern_symbol(sym_3023,"(method compute-and-ensure-slot-accessors)");
  eul_intern_symbol(sym_3024,"(method compute-slot-reader)");
  eul_intern_symbol(sym_3025,"(method compute-slot-writer)");
  eul_intern_symbol(sym_3026,"(method ensure-slot-reader)");
  eul_intern_symbol(sym_3027,"(method compute-primitive-reader-using-slot)");
  eul_intern_symbol(sym_3028,"(method compute-primitive-reader-using-class)");
  eul_intern_symbol(sym_3029,"(method ensure-slot-writer)");
  eul_intern_symbol(sym_3030,"(method compute-primitive-writer-using-slot)");
  eul_intern_symbol(sym_3031,"(method compute-primitive-writer-using-class)");
  eul_allocate_bytevector( G003013,G003012);
  object_class(str_3034) = eul_static_string_class;
  eul_allocate_bytevector( G003033,G003032);
  object_class(str_3037) = eul_static_string_class;
  object_class(str_3038) = eul_static_string_class;
  eul_allocate_bytevector( G003036,G003035);
  eul_allocate_bytevector( G003040,G003039);
  eul_allocate_bytevector( G003042,G003041);
  eul_intern_symbol(sym_3045,"find-slot-names");
  eul_intern_symbol(sym_3046,"pprint");
  eul_intern_symbol(sym_3047,"top-level");
  eul_allocate_bytevector( G003044,G003043);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 13; i++)
      mop_access_bindings[i] = eul_nil;
  }

  mop_access_bindings[ 13] = G002970;
  mop_access_bindings[ 14] = sym_2973;
  mop_access_bindings[ 15] = G002972;
  mop_access_bindings[ 16] = G002975;
  mop_access_bindings[ 17] = G002977;
  mop_access_bindings[ 18] = G002979;
  mop_access_bindings[ 19] = G002981;
  mop_access_bindings[ 20] = G002983;
  mop_access_bindings[ 21] = G002985;
  mop_access_bindings[ 22] = G002987;
  mop_access_bindings[ 23] = G002989;
  mop_access_bindings[ 24] = G002991;
  mop_access_bindings[ 25] = G002993;
  mop_access_bindings[ 26] = G002995;
  mop_access_bindings[ 27] = G002997;
  mop_access_bindings[ 28] = G002999;
  mop_access_bindings[ 29] = G003001;
  mop_access_bindings[ 30] = G003003;
  mop_access_bindings[ 31] = G003005;
  mop_access_bindings[ 32] = G003007;
  mop_access_bindings[ 33] = G003009;
  mop_access_bindings[ 34] = G003011;
  mop_access_bindings[ 35] = sym_3014;
  mop_access_bindings[ 36] = sym_3015;
  mop_access_bindings[ 37] = sym_3016;
  mop_access_bindings[ 38] = sym_3017;
  mop_access_bindings[ 39] = sym_3018;
  mop_access_bindings[ 40] = sym_3019;
  mop_access_bindings[ 41] = sym_3020;
  mop_access_bindings[ 42] = sym_3021;
  mop_access_bindings[ 43] = sym_3022;
  mop_access_bindings[ 44] = sym_3023;
  mop_access_bindings[ 45] = sym_3024;
  mop_access_bindings[ 46] = sym_3025;
  mop_access_bindings[ 47] = sym_3026;
  mop_access_bindings[ 48] = sym_3027;
  mop_access_bindings[ 49] = sym_3028;
  mop_access_bindings[ 50] = sym_3029;
  mop_access_bindings[ 51] = sym_3030;
  mop_access_bindings[ 52] = sym_3031;
  mop_access_bindings[ 53] = G003013;
  mop_access_bindings[ 54] = str_3034;
  mop_access_bindings[ 55] = G003033;
  mop_access_bindings[ 56] = str_3037;
  mop_access_bindings[ 57] = str_3038;
  mop_access_bindings[ 58] = G003036;
  mop_access_bindings[ 59] = G003040;
  mop_access_bindings[ 60] = G003042;
  mop_access_bindings[ 1] = eul_nil;
  mop_access_bindings[ 61] = sym_3045;
  mop_access_bindings[ 62] = sym_3046;
  mop_access_bindings[ 63] = sym_3047;
  eul_allocate_lambda( mop_access_bindings[0], "initialize-mop-access", 0, G003044);

  }
}


/* eof */
