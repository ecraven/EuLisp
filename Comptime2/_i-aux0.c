/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module _i-aux0
 **  Copyright: See file _i-aux0.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_level1();
extern LispRef level1_bindings[];

/* Module bindings with size 148 */
LispRef _i_aux0_bindings[148];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module _i-aux0 */
void initialize_module__i_aux0()
{
  if (is_initialized) return;
  initialize_module_level1();
  eul_fast_table_set(eul_modules,"_i_aux0",(LispRef) _i_aux0_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_789, sym_788, sym_787, sym_786, sym_785, sym_784, sym_783, sym_782, sym_781, sym_780, sym_779, sym_778, sym_777, sym_776, sym_775, sym_774, sym_773, sym_772, sym_771, sym_770, sym_769, G00768, G00765, G00762, G00758, G00755, sym_742, sym_739, G00726, sym_723, sym_721, sym_715, sym_710, sym_707, sym_702, sym_699, sym_696, G00691, G00688, sym_686, sym_685, sym_684, G00683, G00680, G00677, G00674, G00671, G00667, G00664, sym_662, sym_661, G00659, sym_656, G00655, sym_651, sym_644, sym_642, sym_639, sym_631, sym_627, G00625, G00622, sym_620, sym_619, sym_618, key_617, sym_616, sym_615, sym_614, key_613, sym_612, sym_611, sym_609, sym_608, G00607, G00604, sym_598, G00595, G00592, sym_588, sym_587, G00586, sym_583, G00582, sym_580, sym_578, sym_577, sym_576, G00575, sym_573, sym_572, sym_571, sym_570, G00569;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 17 is_init: 0 index: 32 binding: destination-object-dir */
  static const void *G00568[] = {I(aa,23,00,00),B(_i_aux0 ,28),I(86,0f,23,00),B(_i_aux0 ,29),I(1c,0f,23,00),B(_i_aux0 ,30),I(1c,0f,1b,86),I(0f,1f,04,1c),I(0f,23,00,00),B(_i_aux0 ,30),I(1c,0f,1f,06),I(86,0f,1c,1c),I(0f,23,00,00),B(_i_aux0 ,28),I(1c,0f,23,00),B(_i_aux0 ,31),I(1c,0f,45,0a)};

  eul_allocate_static_string(str_579, "~a~a~a", 6);
  /* Byte-vector with size: 18 is_init: 0 index: 38 binding: destination-object-string */
  static const void *G00574[] = {I(ab,1c,86,0f),I(23,00,00,00),B(_i_aux0 ,33),I(1c,0f,1b,86),I(0f,23,00,00),B(_i_aux0 ,34),I(1c,0f,23,00),B(_i_aux0 ,35),I(1c,0f,1b,86),I(0f,23,00,00),B(_i_aux0 ,29),I(1c,0f,1f,07),I(1c,0f,23,00),B(_i_aux0 ,36),I(1c,0f,86,1c),I(0f,23,00,00),B(_i_aux0 ,37),I(1c,0f,45,0c)};

  eul_allocate_static_string(str_584, "~a~a~a", 6);
  /* Byte-vector with size: 18 is_init: 0 index: 41 binding: destination-library-link-string */
  static const void *G00581[] = {I(ab,1c,86,0f),I(23,00,00,00),B(_i_aux0 ,39),I(1c,0f,1b,86),I(0f,23,00,00),B(_i_aux0 ,29),I(1c,0f,1f,04),I(1c,0f,23,00),B(_i_aux0 ,40),I(1c,0f,86,1c),I(0f,23,00,00),B(_i_aux0 ,37),I(1c,0f,1b,86),I(0f,23,00,00),B(_i_aux0 ,34),I(1c,0f,23,00),B(_i_aux0 ,35),I(1c,0f,45,0c)};

  eul_allocate_static_string(str_589, ".o", 2);
  eul_allocate_static_string(str_590, ".o", 2);
  /* Byte-vector with size: 47 is_init: 0 index: 46 binding: as-compiled-C-file-name */
  static const void *G00585[] = {I(aa,1b,86,0f),I(23,00,00,00),B(_i_aux0 ,42),I(1c,0f,1d,86),I(0f,23,00,00),B(_i_aux0 ,43),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_i_aux0 ,35),I(1c,0f,23,00),B(_i_aux0 ,44),I(86,0f,1c,1c),I(0f,23,00,00),B(_i_aux0 ,30),I(1c,0f,1b,86),I(0f,23,00,00),B(_i_aux0 ,29),I(1c,0f,23,00),B(_i_aux0 ,30),I(1c,0f,1b,86),I(0f,23,00,00),B(_i_aux0 ,28),I(1c,0f,23,00),B(_i_aux0 ,30),I(1c,0f,1f,10),I(86,0f,23,00),B(_i_aux0 ,42),I(1c,0f,1f,12),I(86,0f,23,00),B(_i_aux0 ,43),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_i_aux0 ,35),I(1c,0f,23,00),B(_i_aux0 ,45),I(86,0f,1c,1c),I(0f,23,00,00),B(_i_aux0 ,30),I(1c,0f,1b,86),I(0f,1f,0b,1c),I(0f,23,00,00),B(_i_aux0 ,28),I(1c,0f,23,00),B(_i_aux0 ,31),I(1c,0f,45,1e)};

  eul_allocate_static_string(str_593, ".i", 2);
  /* Byte-vector with size: 16 is_init: 0 index: 48 binding: as-interface-file-name */
  static const void *G00591[] = {I(aa,1b,86,0f),I(23,00,00,00),B(_i_aux0 ,42),I(1c,0f,1d,86),I(0f,23,00,00),B(_i_aux0 ,43),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_i_aux0 ,35),I(1c,0f,23,00),B(_i_aux0 ,47),I(86,0f,1c,1c),I(0f,23,00,00),B(_i_aux0 ,30),I(1c,0f,45,0a)};

  eul_allocate_static_string(str_600, "", 0);
  eul_allocate_static_string(str_602, "-lgc", 4);
  eul_allocate_static_cons(cons_601, eul_as_static(str_602), NULL);
  eul_allocate_static_cons(cons_599, eul_as_static(str_600), eul_as_static(cons_601));
  eul_allocate_static_cons(cons_597, NULL, eul_as_static(cons_599));
  eul_allocate_static_cons(cons_596, NULL, eul_as_static(cons_597));
  /* Byte-vector with size: 3 is_init: 0 index: 51 binding: gc-link-string */
  static const void *G00594[] = {I(a9,23,00,00),B(_i_aux0 ,50),I(45,00,00,00)};

  eul_allocate_static_string(str_605, "_", 1);
  /* Byte-vector with size: 16 is_init: 0 index: 53 binding: as-C-hook-name */
  static const void *G00603[] = {I(aa,1b,86,0f),I(23,00,00,00),B(_i_aux0 ,42),I(1c,0f,1d,86),I(0f,23,00,00),B(_i_aux0 ,43),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_i_aux0 ,35),I(1c,0f,23,00),B(_i_aux0 ,52),I(86,0f,1c,1c),I(0f,23,00,00),B(_i_aux0 ,30),I(1c,0f,45,0a)};

  eul_allocate_static_string(str_610, "compile time error condition: ", 30);
  /* Byte-vector with size: 61 is_init: 0 index: 67 binding: with-ct-handler */
  static const void *G00606[] = {I(43,fd,23,00),B(_i_aux0 ,54),I(86,0f,23,00),B(_i_aux0 ,55),I(1c,0f,23,00),B(_i_aux0 ,54),I(86,0f,23,00),B(_i_aux0 ,55),I(1c,0f,23,00),B(_i_aux0 ,56),I(86,0f,23,00),B(_i_aux0 ,57),I(1c,0f,23,00),B(_i_aux0 ,37),I(1c,0f,23,00),B(_i_aux0 ,57),I(86,0f,23,00),B(_i_aux0 ,55),I(1c,0f,23,00),B(_i_aux0 ,58),I(1c,0f,1f,0b),I(86,0f,23,00),B(_i_aux0 ,59),I(1c,0f,23,00),B(_i_aux0 ,60),I(1c,0f,1f,0f),I(1c,0f,23,00),B(_i_aux0 ,61),I(1c,0f,1b,86),I(0f,86,1c,0f),I(23,00,00,00),B(_i_aux0 ,62),I(1c,0f,23,00),B(_i_aux0 ,31),I(1c,0f,1b,86),I(0f,1f,0a,1c),I(0f,1f,0e,1c),I(0f,1f,12,1c),I(0f,23,00,00),B(_i_aux0 ,60),I(86,0f,23,00),B(_i_aux0 ,55),I(1c,0f,23,00),B(_i_aux0 ,54),I(86,0f,1c,1c),I(0f,1b,86,0f),I(1b,86,0f,23),B(_i_aux0 ,63),I(1c,0f,1f,07),I(1c,0f,23,00),B(_i_aux0 ,63),I(1c,0f,1f,1e),I(1c,0f,23,00),B(_i_aux0 ,64),I(1c,0f,23,00),B(_i_aux0 ,65),I(1f,23,0f,1b),I(86,0f,1d,1c),I(0f,23,00,00),B(_i_aux0 ,66),I(1c,0f,45,28)};

  eul_allocate_static_string(str_623, ".h", 2);
  /* Byte-vector with size: 16 is_init: 0 index: 69 binding: as-included-C-file-name */
  static const void *G00621[] = {I(aa,1b,86,0f),I(23,00,00,00),B(_i_aux0 ,42),I(1c,0f,1d,86),I(0f,23,00,00),B(_i_aux0 ,43),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_i_aux0 ,35),I(1c,0f,23,00),B(_i_aux0 ,68),I(86,0f,1c,1c),I(0f,23,00,00),B(_i_aux0 ,30),I(1c,0f,45,0a)};

  eul_allocate_static_string(str_636, "Lib.~a/eul-appl.o", 17);
  eul_allocate_static_cons(cons_643, NULL, NULL);
  eul_allocate_static_cons(cons_641, NULL, eul_as_static(cons_643));
  eul_allocate_static_cons(cons_640, eul_as_static(cons_641), NULL);
  eul_allocate_static_cons(cons_638, NULL, eul_as_static(cons_640));
  eul_allocate_static_cons(cons_637, eul_as_static(cons_638), NULL);
  eul_allocate_static_cons(cons_635, eul_as_static(str_636), eul_as_static(cons_637));
  eul_allocate_static_cons(cons_634, NULL, eul_as_static(cons_635));
  eul_allocate_static_cons(cons_633, NULL, eul_as_static(cons_634));
  eul_allocate_static_cons(cons_632, eul_as_static(cons_633), NULL);
  eul_allocate_static_cons(cons_630, NULL, eul_as_static(cons_632));
  eul_allocate_static_cons(cons_629, eul_as_static(cons_630), NULL);
  eul_allocate_static_string(str_649, "~a~a~a", 6);
  eul_allocate_static_cons(cons_653, NULL, NULL);
  eul_allocate_static_cons(cons_652, NULL, eul_as_static(cons_653));
  eul_allocate_static_cons(cons_650, NULL, eul_as_static(cons_652));
  eul_allocate_static_cons(cons_648, eul_as_static(str_649), eul_as_static(cons_650));
  eul_allocate_static_cons(cons_647, NULL, eul_as_static(cons_648));
  eul_allocate_static_cons(cons_646, NULL, eul_as_static(cons_647));
  eul_allocate_static_cons(cons_645, eul_as_static(cons_646), NULL);
  eul_allocate_static_cons(cons_628, eul_as_static(cons_629), eul_as_static(cons_645));
  eul_allocate_static_cons(cons_626, NULL, eul_as_static(cons_628));
  /* Byte-vector with size: 3 is_init: 0 index: 77 binding: main-link-string */
  static const void *G00624[] = {I(a9,23,00,00),B(_i_aux0 ,76),I(45,00,00,00)};

  eul_allocate_static_string(str_657, "ff_stub_", 8);
  /* Byte-vector with size: 11 is_init: 0 index: 80 binding: as-foreign-function-stub-name */
  static const void *G00654[] = {I(aa,86,0f,23),B(_i_aux0 ,78),I(1c,0f,1b,86),I(0f,23,00,00),B(_i_aux0 ,43),I(1c,0f,1b,86),I(0f,23,00,00),B(_i_aux0 ,79),I(1c,0f,23,00),B(_i_aux0 ,30),I(1c,0f,45,06)};

  eul_allocate_static_string(str_660, "-init-fun", 9);
  /* Byte-vector with size: 25 is_init: 0 index: 84 binding: as-module-init-function-name */
  static const void *G00658[] = {I(aa,1b,86,0f),I(23,00,00,00),B(_i_aux0 ,42),I(1c,0f,1d,86),I(0f,23,00,00),B(_i_aux0 ,43),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_i_aux0 ,35),I(1c,0f,23,00),B(_i_aux0 ,81),I(86,0f,1c,1c),I(0f,23,00,00),B(_i_aux0 ,30),I(1c,0f,1b,86),I(0f,23,00,00),B(_i_aux0 ,82),I(1c,0f,86,86),I(0f,1c,1c,0f),I(23,00,00,00),B(_i_aux0 ,83),I(1c,0f,23,00),B(_i_aux0 ,31),I(1c,0f,45,10)};

  eul_allocate_static_string(str_665, "_.c", 3);
  /* Byte-vector with size: 16 is_init: 0 index: 86 binding: as-C-hook-source-file-name */
  static const void *G00663[] = {I(aa,1b,86,0f),I(23,00,00,00),B(_i_aux0 ,42),I(1c,0f,1d,86),I(0f,23,00,00),B(_i_aux0 ,43),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_i_aux0 ,35),I(1c,0f,23,00),B(_i_aux0 ,85),I(86,0f,1c,1c),I(0f,23,00,00),B(_i_aux0 ,30),I(1c,0f,45,0a)};

  eul_allocate_static_string(str_668, "_.o", 3);
  eul_allocate_static_string(str_669, "_.o", 3);
  /* Byte-vector with size: 47 is_init: 0 index: 89 binding: as-C-hook-object-file-name */
  static const void *G00666[] = {I(aa,1b,86,0f),I(23,00,00,00),B(_i_aux0 ,42),I(1c,0f,1d,86),I(0f,23,00,00),B(_i_aux0 ,43),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_i_aux0 ,35),I(1c,0f,23,00),B(_i_aux0 ,87),I(86,0f,1c,1c),I(0f,23,00,00),B(_i_aux0 ,30),I(1c,0f,1b,86),I(0f,23,00,00),B(_i_aux0 ,29),I(1c,0f,23,00),B(_i_aux0 ,30),I(1c,0f,1b,86),I(0f,23,00,00),B(_i_aux0 ,28),I(1c,0f,23,00),B(_i_aux0 ,30),I(1c,0f,1f,10),I(86,0f,23,00),B(_i_aux0 ,42),I(1c,0f,1f,12),I(86,0f,23,00),B(_i_aux0 ,43),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_i_aux0 ,35),I(1c,0f,23,00),B(_i_aux0 ,88),I(86,0f,1c,1c),I(0f,23,00,00),B(_i_aux0 ,30),I(1c,0f,1b,86),I(0f,1f,0b,1c),I(0f,23,00,00),B(_i_aux0 ,28),I(1c,0f,23,00),B(_i_aux0 ,31),I(1c,0f,45,1e)};

  eul_allocate_static_string(str_672, " -leulvm", 8);
  /* Byte-vector with size: 3 is_init: 0 index: 91 binding: vm-link-string */
  static const void *G00670[] = {I(a9,23,00,00),B(_i_aux0 ,90),I(45,00,00,00)};

  eul_allocate_static_string(str_675, " -l", 3);
  /* Byte-vector with size: 16 is_init: 0 index: 93 binding: as-C-library-link-string */
  static const void *G00673[] = {I(aa,1b,86,0f),I(23,00,00,00),B(_i_aux0 ,42),I(1c,0f,1d,86),I(0f,23,00,00),B(_i_aux0 ,43),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_i_aux0 ,35),I(1c,0f,1b,86),I(0f,23,00,00),B(_i_aux0 ,92),I(1c,0f,23,00),B(_i_aux0 ,30),I(1c,0f,45,0a)};

  eul_allocate_static_string(str_678, ".c", 2);
  /* Byte-vector with size: 16 is_init: 0 index: 95 binding: as-C-file-name */
  static const void *G00676[] = {I(aa,1b,86,0f),I(23,00,00,00),B(_i_aux0 ,42),I(1c,0f,1d,86),I(0f,23,00,00),B(_i_aux0 ,43),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_i_aux0 ,35),I(1c,0f,23,00),B(_i_aux0 ,94),I(86,0f,1c,1c),I(0f,23,00,00),B(_i_aux0 ,30),I(1c,0f,45,0a)};

  eul_allocate_static_string(str_681, ".em", 3);
  /* Byte-vector with size: 16 is_init: 0 index: 97 binding: as-source-file-name */
  static const void *G00679[] = {I(aa,1b,86,0f),I(23,00,00,00),B(_i_aux0 ,42),I(1c,0f,1d,86),I(0f,23,00,00),B(_i_aux0 ,43),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_i_aux0 ,35),I(1c,0f,23,00),B(_i_aux0 ,96),I(86,0f,1c,1c),I(0f,23,00,00),B(_i_aux0 ,30),I(1c,0f,45,0a)};

  /* Byte-vector with size: 15 is_init: 0 index: 101 binding: youtoo */
  static const void *G00682[] = {I(a8,23,00,00),B(_i_aux0 ,98),I(86,0f,23,00),B(_i_aux0 ,73),I(1c,0f,1d,86),I(0f,23,00,00),B(_i_aux0 ,73),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_i_aux0 ,99),I(1c,0f,1b,86),I(0f,23,00,00),B(_i_aux0 ,100),I(1c,0f,45,09)};

  eul_allocate_static_string(str_689, "lib~a.i", 7);
  /* Byte-vector with size: 6 is_init: 0 index: 103 binding: as-C-library-interface-file-name */
  static const void *G00687[] = {I(aa,86,0f,23),B(_i_aux0 ,102),I(1c,0f,86,1c),I(0f,23,00,00),B(_i_aux0 ,37),I(1c,0f,45,03)};

  eul_allocate_static_cons(cons_704, NULL, NULL);
  eul_allocate_static_cons(cons_708, NULL, NULL);
  eul_allocate_static_cons(cons_706, NULL, eul_as_static(cons_708));
  eul_allocate_static_cons(cons_705, eul_as_static(cons_706), NULL);
  eul_allocate_static_cons(cons_703, eul_as_static(cons_704), eul_as_static(cons_705));
  eul_allocate_static_cons(cons_701, NULL, eul_as_static(cons_703));
  eul_allocate_static_cons(cons_709, NULL, NULL);
  eul_allocate_static_cons(cons_700, eul_as_static(cons_701), eul_as_static(cons_709));
  eul_allocate_static_cons(cons_698, NULL, eul_as_static(cons_700));
  eul_allocate_static_cons(cons_697, eul_as_static(cons_698), NULL);
  eul_allocate_static_cons(cons_695, NULL, eul_as_static(cons_697));
  eul_allocate_static_cons(cons_694, eul_as_static(cons_695), NULL);
  eul_allocate_static_cons(cons_716, NULL, NULL);
  eul_allocate_static_cons(cons_714, NULL, eul_as_static(cons_716));
  eul_allocate_static_string(str_718, "", 0);
  eul_allocate_static_cons(cons_724, NULL, NULL);
  eul_allocate_static_cons(cons_722, NULL, eul_as_static(cons_724));
  eul_allocate_static_cons(cons_720, NULL, eul_as_static(cons_722));
  eul_allocate_static_cons(cons_719, eul_as_static(cons_720), NULL);
  eul_allocate_static_cons(cons_717, eul_as_static(str_718), eul_as_static(cons_719));
  eul_allocate_static_cons(cons_713, eul_as_static(cons_714), eul_as_static(cons_717));
  eul_allocate_static_cons(cons_712, NULL, eul_as_static(cons_713));
  eul_allocate_static_cons(cons_711, eul_as_static(cons_712), NULL);
  eul_allocate_static_cons(cons_693, eul_as_static(cons_694), eul_as_static(cons_711));
  eul_allocate_static_cons(cons_692, NULL, eul_as_static(cons_693));
  /* Byte-vector with size: 3 is_init: 0 index: 113 binding: full-C-library-link-string */
  static const void *G00690[] = {I(a9,23,00,00),B(_i_aux0 ,112),I(45,00,00,00)};

  eul_allocate_static_cons(cons_736, NULL, NULL);
  eul_allocate_static_cons(cons_740, NULL, NULL);
  eul_allocate_static_cons(cons_738, NULL, eul_as_static(cons_740));
  eul_allocate_static_cons(cons_737, eul_as_static(cons_738), NULL);
  eul_allocate_static_cons(cons_735, eul_as_static(cons_736), eul_as_static(cons_737));
  eul_allocate_static_cons(cons_734, NULL, eul_as_static(cons_735));
  eul_allocate_static_cons(cons_741, NULL, NULL);
  eul_allocate_static_cons(cons_733, eul_as_static(cons_734), eul_as_static(cons_741));
  eul_allocate_static_cons(cons_732, NULL, eul_as_static(cons_733));
  eul_allocate_static_cons(cons_731, eul_as_static(cons_732), NULL);
  eul_allocate_static_cons(cons_730, NULL, eul_as_static(cons_731));
  eul_allocate_static_cons(cons_729, eul_as_static(cons_730), NULL);
  eul_allocate_static_cons(cons_747, NULL, NULL);
  eul_allocate_static_cons(cons_746, NULL, eul_as_static(cons_747));
  eul_allocate_static_string(str_749, "", 0);
  eul_allocate_static_cons(cons_753, NULL, NULL);
  eul_allocate_static_cons(cons_752, NULL, eul_as_static(cons_753));
  eul_allocate_static_cons(cons_751, NULL, eul_as_static(cons_752));
  eul_allocate_static_cons(cons_750, eul_as_static(cons_751), NULL);
  eul_allocate_static_cons(cons_748, eul_as_static(str_749), eul_as_static(cons_750));
  eul_allocate_static_cons(cons_745, eul_as_static(cons_746), eul_as_static(cons_748));
  eul_allocate_static_cons(cons_744, NULL, eul_as_static(cons_745));
  eul_allocate_static_cons(cons_743, eul_as_static(cons_744), NULL);
  eul_allocate_static_cons(cons_728, eul_as_static(cons_729), eul_as_static(cons_743));
  eul_allocate_static_cons(cons_727, NULL, eul_as_static(cons_728));
  /* Byte-vector with size: 3 is_init: 0 index: 117 binding: full-C-library-dir-link-string */
  static const void *G00725[] = {I(a9,23,00,00),B(_i_aux0 ,116),I(45,00,00,00)};

  eul_allocate_static_string(str_756, "-init-flag", 10);
  /* Byte-vector with size: 19 is_init: 0 index: 119 binding: as-module-init-flag-name */
  static const void *G00754[] = {I(aa,1b,86,0f),I(23,00,00,00),B(_i_aux0 ,42),I(1c,0f,1d,86),I(0f,23,00,00),B(_i_aux0 ,43),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_i_aux0 ,35),I(1c,0f,23,00),B(_i_aux0 ,118),I(86,0f,1c,1c),I(0f,23,00,00),B(_i_aux0 ,30),I(1c,0f,1b,86),I(0f,23,00,00),B(_i_aux0 ,82),I(1c,0f,45,0c)};

  eul_allocate_static_string(str_759, "~a~alib~a.a", 11);
  eul_allocate_static_string(str_760, "lib~a.a", 7);
  /* Byte-vector with size: 23 is_init: 0 index: 122 binding: as-C-library-file-name */
  static const void *G00757[] = {I(aa,1b,86,0f),I(23,00,00,00),B(_i_aux0 ,29),I(1c,0f,23,00),B(_i_aux0 ,28),I(1c,0f,23,00),B(_i_aux0 ,120),I(1c,0f,86,1c),I(0f,23,00,00),B(_i_aux0 ,37),I(1c,0f,1f,06),I(86,0f,23,00),B(_i_aux0 ,121),I(1c,0f,86,1c),I(0f,23,00,00),B(_i_aux0 ,37),I(1c,0f,1b,86),I(0f,1f,05,1c),I(0f,23,00,00),B(_i_aux0 ,28),I(1c,0f,23,00),B(_i_aux0 ,31),I(1c,0f,45,0e)};

  eul_allocate_static_string(str_763, "~a~a~a", 6);
  /* Byte-vector with size: 15 is_init: 0 index: 124 binding: destination-link-string */
  static const void *G00761[] = {I(ab,1c,86,0f),I(23,00,00,00),B(_i_aux0 ,34),I(1c,0f,23,00),B(_i_aux0 ,35),I(1c,0f,1b,86),I(0f,23,00,00),B(_i_aux0 ,29),I(1c,0f,1f,05),I(1c,0f,23,00),B(_i_aux0 ,123),I(1c,0f,86,1c),I(0f,23,00,00),B(_i_aux0 ,37),I(1c,0f,45,0a)};

  eul_allocate_static_string(str_766, " -L", 3);
  /* Byte-vector with size: 16 is_init: 0 index: 126 binding: as-C-library-dir-link-string */
  static const void *G00764[] = {I(aa,1b,86,0f),I(23,00,00,00),B(_i_aux0 ,42),I(1c,0f,1d,86),I(0f,23,00,00),B(_i_aux0 ,43),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_i_aux0 ,35),I(1c,0f,1b,86),I(0f,23,00,00),B(_i_aux0 ,125),I(1c,0f,23,00),B(_i_aux0 ,30),I(1c,0f,45,0a)};

  /* Byte-vector with size: 164 is_init: 1 index: 0 binding: initialize-_i-aux0 */
  static const void *G00767[] = {I(87,25,00,00),B(_i_aux0 ,1),I(24,00,00,00),B(level1 ,1),I(3e,0b,24,00),B(level1 ,0),I(3c,00,21,01),I(23,00,00,00),B(_i_aux0 ,114),I(23,00,00,00),B(_i_aux0 ,126),I(3b,01,25,00),B(_i_aux0 ,27),I(23,00,00,00),B(_i_aux0 ,127),I(23,00,00,00),B(_i_aux0 ,124),I(3b,02,25,00),B(_i_aux0 ,26),I(23,00,00,00),B(_i_aux0 ,39),I(23,00,00,00),B(_i_aux0 ,122),I(3b,01,25,00),B(_i_aux0 ,25),I(23,00,00,00),B(_i_aux0 ,128),I(23,00,00,00),B(_i_aux0 ,119),I(3b,01,25,00),B(_i_aux0 ,24),I(23,00,00,00),B(_i_aux0 ,129),I(23,00,00,00),B(_i_aux0 ,117),I(3b,00,25,00),B(_i_aux0 ,23),I(23,00,00,00),B(_i_aux0 ,130),I(23,00,00,00),B(_i_aux0 ,113),I(3b,00,25,00),B(_i_aux0 ,22),I(23,00,00,00),B(_i_aux0 ,131),I(23,00,00,00),B(_i_aux0 ,103),I(3b,01,25,00),B(_i_aux0 ,21),I(23,00,00,00),B(_i_aux0 ,98),I(23,00,00,00),B(_i_aux0 ,101),I(3b,ff,25,00),B(_i_aux0 ,20),I(23,00,00,00),B(_i_aux0 ,132),I(23,00,00,00),B(_i_aux0 ,97),I(3b,01,25,00),B(_i_aux0 ,19),I(23,00,00,00),B(_i_aux0 ,133),I(23,00,00,00),B(_i_aux0 ,95),I(3b,01,25,00),B(_i_aux0 ,18),I(23,00,00,00),B(_i_aux0 ,107),I(23,00,00,00),B(_i_aux0 ,93),I(3b,01,25,00),B(_i_aux0 ,17),I(23,00,00,00),B(_i_aux0 ,134),I(23,00,00,00),B(_i_aux0 ,91),I(3b,00,25,00),B(_i_aux0 ,16),I(23,00,00,00),B(_i_aux0 ,135),I(23,00,00,00),B(_i_aux0 ,89),I(3b,01,25,00),B(_i_aux0 ,15),I(23,00,00,00),B(_i_aux0 ,136),I(23,00,00,00),B(_i_aux0 ,86),I(3b,01,25,00),B(_i_aux0 ,14),I(23,00,00,00),B(_i_aux0 ,137),I(23,00,00,00),B(_i_aux0 ,84),I(3b,01,25,00),B(_i_aux0 ,13),I(23,00,00,00),B(_i_aux0 ,138),I(23,00,00,00),B(_i_aux0 ,80),I(3b,01,25,00),B(_i_aux0 ,12),I(23,00,00,00),B(_i_aux0 ,139),I(23,00,00,00),B(_i_aux0 ,77),I(3b,00,25,00),B(_i_aux0 ,11),I(23,00,00,00),B(_i_aux0 ,140),I(23,00,00,00),B(_i_aux0 ,69),I(3b,01,25,00),B(_i_aux0 ,10),I(23,00,00,00),B(_i_aux0 ,141),I(23,00,00,00),B(_i_aux0 ,67),I(3b,fd,25,00),B(_i_aux0 ,9),I(23,00,00,00),B(_i_aux0 ,142),I(23,00,00,00),B(_i_aux0 ,53),I(3b,01,25,00),B(_i_aux0 ,8),I(23,00,00,00),B(_i_aux0 ,143),I(23,00,00,00),B(_i_aux0 ,51),I(3b,00,25,00),B(_i_aux0 ,7),I(23,00,00,00),B(_i_aux0 ,144),I(23,00,00,00),B(_i_aux0 ,48),I(3b,01,25,00),B(_i_aux0 ,6),I(23,00,00,00),B(_i_aux0 ,33),I(23,00,00,00),B(_i_aux0 ,46),I(3b,01,25,00),B(_i_aux0 ,5),I(23,00,00,00),B(_i_aux0 ,145),I(23,00,00,00),B(_i_aux0 ,41),I(3b,02,25,00),B(_i_aux0 ,4),I(23,00,00,00),B(_i_aux0 ,146),I(23,00,00,00),B(_i_aux0 ,38),I(3b,02,25,00),B(_i_aux0 ,3),I(23,00,00,00),B(_i_aux0 ,147),I(23,00,00,00),B(_i_aux0 ,32),I(3b,01,25,00),B(_i_aux0 ,2),I(86,ac,00,00)};


  /* Initializations */
  eul_intern_symbol(sym_570,"*object-dir*");
  eul_intern_symbol(sym_571,"*delimiter*");
  eul_intern_symbol(sym_572,"string-append");
  eul_intern_symbol(sym_573,"if");
  eul_allocate_bytevector( G00569,G00568);
  eul_intern_symbol(sym_576,"as-compiled-C-file-name");
  eul_intern_symbol(sym_577,"*dest-file-name*");
  eul_intern_symbol(sym_578,"or");
  object_class(str_579) = eul_static_string_class;
  eul_intern_symbol(sym_580,"format");
  eul_allocate_bytevector( G00575,G00574);
  eul_intern_symbol(sym_583,"as-C-library-file-name");
  object_class(str_584) = eul_static_string_class;
  eul_allocate_bytevector( G00582,G00581);
  eul_intern_symbol(sym_587,"stringp");
  eul_intern_symbol(sym_588,"symbol-name");
  object_class(str_589) = eul_static_string_class;
  object_class(str_590) = eul_static_string_class;
  eul_allocate_bytevector( G00586,G00585);
  object_class(str_593) = eul_static_string_class;
  eul_allocate_bytevector( G00592,G00591);
  eul_intern_symbol(sym_598,"*no-gc*");
  object_class(str_600) = eul_static_string_class;
  object_class(str_602) = eul_static_string_class;
  object_class(cons_601) = eul_static_cons_class;
  eul_cdr(cons_601) = eul_nil;
  object_class(cons_599) = eul_static_cons_class;
  object_class(cons_597) = eul_static_cons_class;
  eul_car(cons_597) = sym_598;
  object_class(cons_596) = eul_static_cons_class;
  eul_car(cons_596) = sym_573;
  eul_allocate_bytevector( G00595,G00594);
  object_class(str_605) = eul_static_string_class;
  eul_allocate_bytevector( G00604,G00603);
  eul_intern_symbol(sym_608,"f");
  eul_intern_symbol(sym_609,"c");
  object_class(str_610) = eul_static_string_class;
  eul_intern_symbol(sym_611,"stderr");
  eul_intern_symbol(sym_612,"pprint");
  eul_intern_keyword(key_613,"ct-error-value");
  eul_intern_symbol(sym_614,"<ct-error>");
  eul_intern_symbol(sym_615,"error");
  eul_intern_symbol(sym_616,"*no-ct-handlers*");
  eul_intern_keyword(key_617,"method");
  eul_intern_symbol(sym_618,"generic-lambda");
  eul_intern_symbol(sym_619,"progn");
  eul_intern_symbol(sym_620,"with-handler");
  eul_allocate_bytevector( G00607,G00606);
  object_class(str_623) = eul_static_string_class;
  eul_allocate_bytevector( G00622,G00621);
  eul_intern_symbol(sym_627,"let");
  eul_intern_symbol(sym_631,"name");
  object_class(str_636) = eul_static_string_class;
  eul_intern_symbol(sym_639,"get-config-info");
  eul_intern_symbol(sym_642,"quote");
  eul_intern_symbol(sym_644,"ARCH");
  object_class(cons_643) = eul_static_cons_class;
  eul_car(cons_643) = sym_644;
  eul_cdr(cons_643) = eul_nil;
  object_class(cons_641) = eul_static_cons_class;
  eul_car(cons_641) = sym_642;
  object_class(cons_640) = eul_static_cons_class;
  eul_cdr(cons_640) = eul_nil;
  object_class(cons_638) = eul_static_cons_class;
  eul_car(cons_638) = sym_639;
  object_class(cons_637) = eul_static_cons_class;
  eul_cdr(cons_637) = eul_nil;
  object_class(cons_635) = eul_static_cons_class;
  object_class(cons_634) = eul_static_cons_class;
  eul_car(cons_634) = eul_nil;
  object_class(cons_633) = eul_static_cons_class;
  eul_car(cons_633) = sym_580;
  object_class(cons_632) = eul_static_cons_class;
  eul_cdr(cons_632) = eul_nil;
  object_class(cons_630) = eul_static_cons_class;
  eul_car(cons_630) = sym_631;
  object_class(cons_629) = eul_static_cons_class;
  eul_cdr(cons_629) = eul_nil;
  object_class(str_649) = eul_static_string_class;
  eul_intern_symbol(sym_651,"*eulysses-dir*");
  object_class(cons_653) = eul_static_cons_class;
  eul_car(cons_653) = sym_631;
  eul_cdr(cons_653) = eul_nil;
  object_class(cons_652) = eul_static_cons_class;
  eul_car(cons_652) = sym_571;
  object_class(cons_650) = eul_static_cons_class;
  eul_car(cons_650) = sym_651;
  object_class(cons_648) = eul_static_cons_class;
  object_class(cons_647) = eul_static_cons_class;
  eul_car(cons_647) = eul_nil;
  object_class(cons_646) = eul_static_cons_class;
  eul_car(cons_646) = sym_580;
  object_class(cons_645) = eul_static_cons_class;
  eul_cdr(cons_645) = eul_nil;
  object_class(cons_628) = eul_static_cons_class;
  object_class(cons_626) = eul_static_cons_class;
  eul_car(cons_626) = sym_627;
  eul_allocate_bytevector( G00625,G00624);
  eul_intern_symbol(sym_656,"gensym");
  object_class(str_657) = eul_static_string_class;
  eul_allocate_bytevector( G00655,G00654);
  object_class(str_660) = eul_static_string_class;
  eul_intern_symbol(sym_661,"make-symbol");
  eul_intern_symbol(sym_662,"*debug*");
  eul_allocate_bytevector( G00659,G00658);
  object_class(str_665) = eul_static_string_class;
  eul_allocate_bytevector( G00664,G00663);
  object_class(str_668) = eul_static_string_class;
  object_class(str_669) = eul_static_string_class;
  eul_allocate_bytevector( G00667,G00666);
  object_class(str_672) = eul_static_string_class;
  eul_allocate_bytevector( G00671,G00670);
  object_class(str_675) = eul_static_string_class;
  eul_allocate_bytevector( G00674,G00673);
  object_class(str_678) = eul_static_string_class;
  eul_allocate_bytevector( G00677,G00676);
  object_class(str_681) = eul_static_string_class;
  eul_allocate_bytevector( G00680,G00679);
  eul_intern_symbol(sym_684,"youtoo");
  eul_intern_symbol(sym_685,"cons");
  eul_intern_symbol(sym_686,"main");
  eul_allocate_bytevector( G00683,G00682);
  object_class(str_689) = eul_static_string_class;
  eul_allocate_bytevector( G00688,G00687);
  eul_intern_symbol(sym_696,"str-list");
  eul_intern_symbol(sym_699,"map1-list");
  eul_intern_symbol(sym_702,"lambda");
  object_class(cons_704) = eul_static_cons_class;
  eul_car(cons_704) = sym_631;
  eul_cdr(cons_704) = eul_nil;
  eul_intern_symbol(sym_707,"as-C-library-link-string");
  object_class(cons_708) = eul_static_cons_class;
  eul_car(cons_708) = sym_631;
  eul_cdr(cons_708) = eul_nil;
  object_class(cons_706) = eul_static_cons_class;
  eul_car(cons_706) = sym_707;
  object_class(cons_705) = eul_static_cons_class;
  eul_cdr(cons_705) = eul_nil;
  object_class(cons_703) = eul_static_cons_class;
  object_class(cons_701) = eul_static_cons_class;
  eul_car(cons_701) = sym_702;
  eul_intern_symbol(sym_710,"*linked-C-libraries*");
  object_class(cons_709) = eul_static_cons_class;
  eul_car(cons_709) = sym_710;
  eul_cdr(cons_709) = eul_nil;
  object_class(cons_700) = eul_static_cons_class;
  object_class(cons_698) = eul_static_cons_class;
  eul_car(cons_698) = sym_699;
  object_class(cons_697) = eul_static_cons_class;
  eul_cdr(cons_697) = eul_nil;
  object_class(cons_695) = eul_static_cons_class;
  eul_car(cons_695) = sym_696;
  object_class(cons_694) = eul_static_cons_class;
  eul_cdr(cons_694) = eul_nil;
  eul_intern_symbol(sym_715,"null");
  object_class(cons_716) = eul_static_cons_class;
  eul_car(cons_716) = sym_696;
  eul_cdr(cons_716) = eul_nil;
  object_class(cons_714) = eul_static_cons_class;
  eul_car(cons_714) = sym_715;
  object_class(str_718) = eul_static_string_class;
  eul_intern_symbol(sym_721,"apply");
  eul_intern_symbol(sym_723,"concatenate");
  object_class(cons_724) = eul_static_cons_class;
  eul_car(cons_724) = sym_696;
  eul_cdr(cons_724) = eul_nil;
  object_class(cons_722) = eul_static_cons_class;
  eul_car(cons_722) = sym_723;
  object_class(cons_720) = eul_static_cons_class;
  eul_car(cons_720) = sym_721;
  object_class(cons_719) = eul_static_cons_class;
  eul_cdr(cons_719) = eul_nil;
  object_class(cons_717) = eul_static_cons_class;
  object_class(cons_713) = eul_static_cons_class;
  object_class(cons_712) = eul_static_cons_class;
  eul_car(cons_712) = sym_573;
  object_class(cons_711) = eul_static_cons_class;
  eul_cdr(cons_711) = eul_nil;
  object_class(cons_693) = eul_static_cons_class;
  object_class(cons_692) = eul_static_cons_class;
  eul_car(cons_692) = sym_627;
  eul_allocate_bytevector( G00691,G00690);
  object_class(cons_736) = eul_static_cons_class;
  eul_car(cons_736) = sym_631;
  eul_cdr(cons_736) = eul_nil;
  eul_intern_symbol(sym_739,"as-C-library-dir-link-string");
  object_class(cons_740) = eul_static_cons_class;
  eul_car(cons_740) = sym_631;
  eul_cdr(cons_740) = eul_nil;
  object_class(cons_738) = eul_static_cons_class;
  eul_car(cons_738) = sym_739;
  object_class(cons_737) = eul_static_cons_class;
  eul_cdr(cons_737) = eul_nil;
  object_class(cons_735) = eul_static_cons_class;
  object_class(cons_734) = eul_static_cons_class;
  eul_car(cons_734) = sym_702;
  eul_intern_symbol(sym_742,"*C-library-load-path*");
  object_class(cons_741) = eul_static_cons_class;
  eul_car(cons_741) = sym_742;
  eul_cdr(cons_741) = eul_nil;
  object_class(cons_733) = eul_static_cons_class;
  object_class(cons_732) = eul_static_cons_class;
  eul_car(cons_732) = sym_699;
  object_class(cons_731) = eul_static_cons_class;
  eul_cdr(cons_731) = eul_nil;
  object_class(cons_730) = eul_static_cons_class;
  eul_car(cons_730) = sym_696;
  object_class(cons_729) = eul_static_cons_class;
  eul_cdr(cons_729) = eul_nil;
  object_class(cons_747) = eul_static_cons_class;
  eul_car(cons_747) = sym_696;
  eul_cdr(cons_747) = eul_nil;
  object_class(cons_746) = eul_static_cons_class;
  eul_car(cons_746) = sym_715;
  object_class(str_749) = eul_static_string_class;
  object_class(cons_753) = eul_static_cons_class;
  eul_car(cons_753) = sym_696;
  eul_cdr(cons_753) = eul_nil;
  object_class(cons_752) = eul_static_cons_class;
  eul_car(cons_752) = sym_723;
  object_class(cons_751) = eul_static_cons_class;
  eul_car(cons_751) = sym_721;
  object_class(cons_750) = eul_static_cons_class;
  eul_cdr(cons_750) = eul_nil;
  object_class(cons_748) = eul_static_cons_class;
  object_class(cons_745) = eul_static_cons_class;
  object_class(cons_744) = eul_static_cons_class;
  eul_car(cons_744) = sym_573;
  object_class(cons_743) = eul_static_cons_class;
  eul_cdr(cons_743) = eul_nil;
  object_class(cons_728) = eul_static_cons_class;
  object_class(cons_727) = eul_static_cons_class;
  eul_car(cons_727) = sym_627;
  eul_allocate_bytevector( G00726,G00725);
  object_class(str_756) = eul_static_string_class;
  eul_allocate_bytevector( G00755,G00754);
  object_class(str_759) = eul_static_string_class;
  object_class(str_760) = eul_static_string_class;
  eul_allocate_bytevector( G00758,G00757);
  object_class(str_763) = eul_static_string_class;
  eul_allocate_bytevector( G00762,G00761);
  object_class(str_766) = eul_static_string_class;
  eul_allocate_bytevector( G00765,G00764);
  eul_intern_symbol(sym_769,"destination-link-string");
  eul_intern_symbol(sym_770,"as-module-init-flag-name");
  eul_intern_symbol(sym_771,"full-C-library-dir-link-string");
  eul_intern_symbol(sym_772,"full-C-library-link-string");
  eul_intern_symbol(sym_773,"as-C-library-interface-file-name");
  eul_intern_symbol(sym_774,"as-source-file-name");
  eul_intern_symbol(sym_775,"as-C-file-name");
  eul_intern_symbol(sym_776,"vm-link-string");
  eul_intern_symbol(sym_777,"as-C-hook-object-file-name");
  eul_intern_symbol(sym_778,"as-C-hook-source-file-name");
  eul_intern_symbol(sym_779,"as-module-init-function-name");
  eul_intern_symbol(sym_780,"as-foreign-function-stub-name");
  eul_intern_symbol(sym_781,"main-link-string");
  eul_intern_symbol(sym_782,"as-included-C-file-name");
  eul_intern_symbol(sym_783,"with-ct-handler");
  eul_intern_symbol(sym_784,"as-C-hook-name");
  eul_intern_symbol(sym_785,"gc-link-string");
  eul_intern_symbol(sym_786,"as-interface-file-name");
  eul_intern_symbol(sym_787,"destination-library-link-string");
  eul_intern_symbol(sym_788,"destination-object-string");
  eul_intern_symbol(sym_789,"destination-object-dir");
  eul_allocate_bytevector( G00768,G00767);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 28; i++)
      _i_aux0_bindings[i] = eul_nil;
  }

  _i_aux0_bindings[ 28] = sym_570;
  _i_aux0_bindings[ 29] = sym_571;
  _i_aux0_bindings[ 30] = sym_572;
  _i_aux0_bindings[ 31] = sym_573;
  _i_aux0_bindings[ 32] = G00569;
  _i_aux0_bindings[ 33] = sym_576;
  _i_aux0_bindings[ 34] = sym_577;
  _i_aux0_bindings[ 35] = sym_578;
  _i_aux0_bindings[ 36] = str_579;
  _i_aux0_bindings[ 37] = sym_580;
  _i_aux0_bindings[ 38] = G00575;
  _i_aux0_bindings[ 39] = sym_583;
  _i_aux0_bindings[ 40] = str_584;
  _i_aux0_bindings[ 41] = G00582;
  _i_aux0_bindings[ 42] = sym_587;
  _i_aux0_bindings[ 43] = sym_588;
  _i_aux0_bindings[ 44] = str_589;
  _i_aux0_bindings[ 45] = str_590;
  _i_aux0_bindings[ 46] = G00586;
  _i_aux0_bindings[ 47] = str_593;
  _i_aux0_bindings[ 48] = G00592;
  _i_aux0_bindings[ 49] = sym_598;
  _i_aux0_bindings[ 50] = cons_596;
  _i_aux0_bindings[ 51] = G00595;
  _i_aux0_bindings[ 52] = str_605;
  _i_aux0_bindings[ 53] = G00604;
  _i_aux0_bindings[ 54] = sym_608;
  _i_aux0_bindings[ 55] = sym_609;
  _i_aux0_bindings[ 56] = str_610;
  _i_aux0_bindings[ 57] = sym_611;
  _i_aux0_bindings[ 58] = sym_612;
  _i_aux0_bindings[ 59] = key_613;
  _i_aux0_bindings[ 60] = sym_614;
  _i_aux0_bindings[ 61] = sym_615;
  _i_aux0_bindings[ 62] = sym_616;
  _i_aux0_bindings[ 63] = key_617;
  _i_aux0_bindings[ 64] = sym_618;
  _i_aux0_bindings[ 65] = sym_619;
  _i_aux0_bindings[ 66] = sym_620;
  _i_aux0_bindings[ 67] = G00607;
  _i_aux0_bindings[ 68] = str_623;
  _i_aux0_bindings[ 69] = G00622;
  _i_aux0_bindings[ 70] = sym_627;
  _i_aux0_bindings[ 71] = sym_631;
  _i_aux0_bindings[ 72] = sym_639;
  _i_aux0_bindings[ 73] = sym_642;
  _i_aux0_bindings[ 74] = sym_644;
  _i_aux0_bindings[ 75] = sym_651;
  _i_aux0_bindings[ 76] = cons_626;
  _i_aux0_bindings[ 77] = G00625;
  _i_aux0_bindings[ 78] = sym_656;
  _i_aux0_bindings[ 79] = str_657;
  _i_aux0_bindings[ 80] = G00655;
  _i_aux0_bindings[ 81] = str_660;
  _i_aux0_bindings[ 82] = sym_661;
  _i_aux0_bindings[ 83] = sym_662;
  _i_aux0_bindings[ 84] = G00659;
  _i_aux0_bindings[ 85] = str_665;
  _i_aux0_bindings[ 86] = G00664;
  _i_aux0_bindings[ 87] = str_668;
  _i_aux0_bindings[ 88] = str_669;
  _i_aux0_bindings[ 89] = G00667;
  _i_aux0_bindings[ 90] = str_672;
  _i_aux0_bindings[ 91] = G00671;
  _i_aux0_bindings[ 92] = str_675;
  _i_aux0_bindings[ 93] = G00674;
  _i_aux0_bindings[ 94] = str_678;
  _i_aux0_bindings[ 95] = G00677;
  _i_aux0_bindings[ 96] = str_681;
  _i_aux0_bindings[ 97] = G00680;
  _i_aux0_bindings[ 98] = sym_684;
  _i_aux0_bindings[ 99] = sym_685;
  _i_aux0_bindings[ 100] = sym_686;
  _i_aux0_bindings[ 101] = G00683;
  _i_aux0_bindings[ 102] = str_689;
  _i_aux0_bindings[ 103] = G00688;
  _i_aux0_bindings[ 104] = sym_696;
  _i_aux0_bindings[ 105] = sym_699;
  _i_aux0_bindings[ 106] = sym_702;
  _i_aux0_bindings[ 107] = sym_707;
  _i_aux0_bindings[ 108] = sym_710;
  _i_aux0_bindings[ 109] = sym_715;
  _i_aux0_bindings[ 110] = sym_721;
  _i_aux0_bindings[ 111] = sym_723;
  _i_aux0_bindings[ 112] = cons_692;
  _i_aux0_bindings[ 113] = G00691;
  _i_aux0_bindings[ 114] = sym_739;
  _i_aux0_bindings[ 115] = sym_742;
  _i_aux0_bindings[ 116] = cons_727;
  _i_aux0_bindings[ 117] = G00726;
  _i_aux0_bindings[ 118] = str_756;
  _i_aux0_bindings[ 119] = G00755;
  _i_aux0_bindings[ 120] = str_759;
  _i_aux0_bindings[ 121] = str_760;
  _i_aux0_bindings[ 122] = G00758;
  _i_aux0_bindings[ 123] = str_763;
  _i_aux0_bindings[ 124] = G00762;
  _i_aux0_bindings[ 125] = str_766;
  _i_aux0_bindings[ 126] = G00765;
  _i_aux0_bindings[ 1] = eul_nil;
  _i_aux0_bindings[ 127] = sym_769;
  _i_aux0_bindings[ 128] = sym_770;
  _i_aux0_bindings[ 129] = sym_771;
  _i_aux0_bindings[ 130] = sym_772;
  _i_aux0_bindings[ 131] = sym_773;
  _i_aux0_bindings[ 132] = sym_774;
  _i_aux0_bindings[ 133] = sym_775;
  _i_aux0_bindings[ 134] = sym_776;
  _i_aux0_bindings[ 135] = sym_777;
  _i_aux0_bindings[ 136] = sym_778;
  _i_aux0_bindings[ 137] = sym_779;
  _i_aux0_bindings[ 138] = sym_780;
  _i_aux0_bindings[ 139] = sym_781;
  _i_aux0_bindings[ 140] = sym_782;
  _i_aux0_bindings[ 141] = sym_783;
  _i_aux0_bindings[ 142] = sym_784;
  _i_aux0_bindings[ 143] = sym_785;
  _i_aux0_bindings[ 144] = sym_786;
  _i_aux0_bindings[ 145] = sym_787;
  _i_aux0_bindings[ 146] = sym_788;
  _i_aux0_bindings[ 147] = sym_789;
  eul_allocate_lambda( _i_aux0_bindings[0], "initialize-_i-aux0", 0, G00768);

  }
}


/* eof */
