/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module op-peep-r
 **  Copyright: See file op-peep-r.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_op_peep();
extern LispRef i_all_bindings[];
extern LispRef op_peep_bindings[];
extern LispRef boot1_bindings[];

/* Module bindings with size 86 */
LispRef op_peep_r_bindings[86];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module op-peep-r */
void initialize_module_op_peep_r()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_op_peep();
  eul_fast_table_set(eul_modules,"op_peep_r",(LispRef) op_peep_r_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_5941, G005940, sym_5914, sym_5909, sym_5904, sym_5902, sym_5895, sym_5892, sym_5879, sym_5876, sym_5872, sym_5865, sym_5856, sym_5832, sym_5824, sym_5820, sym_5818, sym_5815, sym_5812, G005809, G005807, G005805, sym_5803, G005802, G005800, G005798, G005796, G005794, sym_5792, G005791, G005789, sym_5787, G005786, sym_5784, G005783, sym_5781, G005780, sym_5778, G005777, G005775, G005773, sym_5771, G005770, sym_5768, G005767, sym_5765, G005764, G005762, G005760, G005758, sym_5756, G005755, sym_5753, G005752, sym_5750, G005749, sym_5747, G005746, sym_5744, G005743, sym_5741, G005740;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 7 is_init: 0 index: 3 binding: anonymous */
  static const void *G005739[] = {I(a9,23,00,00),B(op_peep_r ,2),I(24,00,00,00),B(boot1 ,23),I(3c,01,24,00),B(boot1 ,23),I(3d,01,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 5 binding: anonymous */
  static const void *G005742[] = {I(a9,23,00,00),B(op_peep_r ,4),I(24,00,00,00),B(boot1 ,23),I(3c,01,24,00),B(boot1 ,23),I(3d,01,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 7 binding: anonymous */
  static const void *G005745[] = {I(a9,23,00,00),B(op_peep_r ,6),I(24,00,00,00),B(boot1 ,23),I(3c,01,24,00),B(boot1 ,23),I(3d,01,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 9 binding: anonymous */
  static const void *G005748[] = {I(a9,23,00,00),B(op_peep_r ,8),I(24,00,00,00),B(boot1 ,23),I(3c,01,24,00),B(boot1 ,23),I(3d,01,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 11 binding: anonymous */
  static const void *G005751[] = {I(a9,23,00,00),B(op_peep_r ,10),I(24,00,00,00),B(boot1 ,23),I(3c,01,24,00),B(boot1 ,23),I(3d,01,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 13 binding: anonymous */
  static const void *G005754[] = {I(a9,23,00,00),B(op_peep_r ,12),I(24,00,00,00),B(boot1 ,23),I(3c,01,24,00),B(boot1 ,23),I(3d,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 14 binding: anonymous */
  static const void *G005757[] = {I(aa,24,00,00),B(boot1 ,23),I(3d,00,01,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 15 binding: anonymous */
  static const void *G005759[] = {I(ab,24,00,00),B(boot1 ,23),I(3d,00,02,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 16 binding: anonymous */
  static const void *G005761[] = {I(aa,24,00,00),B(boot1 ,23),I(3d,00,01,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 18 binding: anonymous */
  static const void *G005763[] = {I(aa,23,00,00),B(op_peep_r ,17),I(24,00,00,00),B(boot1 ,23),I(3c,01,24,00),B(boot1 ,23),I(3d,01,01,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 20 binding: anonymous */
  static const void *G005766[] = {I(aa,23,00,00),B(op_peep_r ,19),I(24,00,00,00),B(boot1 ,23),I(3c,01,24,00),B(boot1 ,23),I(3d,01,01,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 22 binding: anonymous */
  static const void *G005769[] = {I(aa,23,00,00),B(op_peep_r ,21),I(24,00,00,00),B(boot1 ,23),I(3c,01,24,00),B(boot1 ,23),I(3d,01,01,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 23 binding: anonymous */
  static const void *G005772[] = {I(ab,24,00,00),B(boot1 ,23),I(3d,00,02,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 24 binding: anonymous */
  static const void *G005774[] = {I(ab,50,45,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 26 binding: anonymous */
  static const void *G005776[] = {I(ab,23,00,00),B(op_peep_r ,25),I(1d,24,00,00),B(boot1 ,23),I(3c,02,24,00),B(boot1 ,23),I(3d,01,02,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 28 binding: anonymous */
  static const void *G005779[] = {I(aa,23,00,00),B(op_peep_r ,27),I(1c,24,00,00),B(boot1 ,23),I(3c,02,24,00),B(boot1 ,23),I(3d,01,01,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 30 binding: anonymous */
  static const void *G005782[] = {I(aa,23,00,00),B(op_peep_r ,29),I(1c,24,00,00),B(boot1 ,23),I(3c,02,24,00),B(boot1 ,23),I(3d,01,01,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 32 binding: anonymous */
  static const void *G005785[] = {I(ab,14,23,00),B(op_peep_r ,31),I(1c,24,00,00),B(boot1 ,23),I(3c,02,24,00),B(boot1 ,23),I(3d,01,01,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 33 binding: anonymous */
  static const void *G005788[] = {I(ab,14,26,00),I(00,00,01,00),I(1a,45,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 35 binding: anonymous */
  static const void *G005790[] = {I(ab,14,23,00),B(op_peep_r ,34),I(1c,24,00,00),B(boot1 ,23),I(3c,02,24,00),B(boot1 ,23),I(3d,01,01,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 36 binding: anonymous */
  static const void *G005793[] = {I(ab,14,26,00),I(00,00,01,00),I(1a,45,00,00)};

  /* Byte-vector with size: 72 is_init: 0 index: 37 binding: anonymous */
  static const void *G005795[] = {I(aa,23,00,00),B(op_peep_r ,31),I(26,00,00,00),I(00,00,00,ff),I(24,00,00,00),B(boot1 ,23),I(3c,02,1c,26),I(00,00,00,ff),I(15,26,00,00),I(00,00,00,ff),I(1c,1a,1b,34),I(00,00,00,15),I(26,00,00,00),I(00,00,00,ff),I(32,00,00,00),I(00,00,00,1f),I(1c,82,1a,1b),I(34,00,00,00),I(00,00,00,10),I(1d,32,00,00),I(00,00,00,08),I(82,22,01,23),B(op_peep_r ,31),I(1c,24,00,00),B(boot1 ,23),I(3c,02,84,26),I(00,00,00,ff),I(16,1f,06,1c),I(15,26,00,00),I(00,00,00,ff),I(1c,1a,1b,34),I(00,00,00,15),I(26,00,00,00),I(00,00,00,ff),I(32,00,00,00),I(00,00,00,1f),I(1c,82,1a,1b),I(34,00,00,00),I(00,00,00,10),I(1d,32,00,00),I(00,00,00,08),I(82,22,01,23),B(op_peep_r ,31),I(1c,24,00,00),B(boot1 ,23),I(3c,02,26,00),I(00,00,00,03),I(26,00,00,00),I(00,00,00,ff),I(16,1f,0b,1c),I(15,26,00,00),I(00,00,00,ff),I(1c,1a,1b,34),I(00,00,00,15),I(26,00,00,00),I(00,00,00,ff),I(32,00,00,00),I(00,00,00,1f),I(1c,82,1a,1b),I(34,00,00,00),I(00,00,00,10),I(1d,32,00,00),I(00,00,00,08),I(82,22,01,23),B(op_peep_r ,31),I(1c,24,00,00),B(boot1 ,23),I(3c,02,1f,0e),I(1f,0b,1f,07),I(1f,03,24,00),B(boot1 ,23),I(3d,04,10,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 38 binding: anonymous */
  static const void *G005797[] = {I(aa,26,00,00),I(00,00,00,ff),I(1c,1a,45,01)};

  /* Byte-vector with size: 3 is_init: 0 index: 39 binding: anonymous */
  static const void *G005799[] = {I(aa,24,00,00),B(boot1 ,23),I(3d,00,01,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 41 binding: anonymous */
  static const void *G005801[] = {I(43,03,23,00),B(op_peep_r ,40),I(1f,03,1f,03),I(24,00,00,00),B(boot1 ,23),I(3c,03,24,00),B(boot1 ,23),I(3d,01,03,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 42 binding: anonymous */
  static const void *G005804[] = {I(ab,23,00,00),B(op_peep_r ,40),I(1d,1d,24,00),B(boot1 ,23),I(3c,03,24,00),B(boot1 ,23),I(3d,01,02,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 43 binding: anonymous */
  static const void *G005806[] = {I(a9,24,00,00),B(boot1 ,23),I(3d,00,00,00)};

  eul_allocate_static_cons(cons_5811, NULL, NULL);
  eul_allocate_static_cons(cons_5814, NULL, NULL);
  eul_allocate_static_cons(cons_5813, eul_as_static(cons_5814), NULL);
  eul_allocate_static_cons(cons_5810, eul_as_static(cons_5811), eul_as_static(cons_5813));
  eul_allocate_static_cons(cons_5819, NULL, NULL);
  eul_allocate_static_cons(cons_5817, NULL, eul_as_static(cons_5819));
  eul_allocate_static_cons(cons_5823, NULL, NULL);
  eul_allocate_static_cons(cons_5822, NULL, eul_as_static(cons_5823));
  eul_allocate_static_cons(cons_5821, eul_as_static(cons_5822), NULL);
  eul_allocate_static_cons(cons_5816, eul_as_static(cons_5817), eul_as_static(cons_5821));
  eul_allocate_static_cons(cons_5828, NULL, NULL);
  eul_allocate_static_cons(cons_5827, NULL, eul_as_static(cons_5828));
  eul_allocate_static_cons(cons_5826, NULL, eul_as_static(cons_5827));
  eul_allocate_static_cons(cons_5831, NULL, NULL);
  eul_allocate_static_cons(cons_5830, NULL, eul_as_static(cons_5831));
  eul_allocate_static_cons(cons_5829, eul_as_static(cons_5830), NULL);
  eul_allocate_static_cons(cons_5825, eul_as_static(cons_5826), eul_as_static(cons_5829));
  eul_allocate_static_cons(cons_5835, c_int_as_eul_int(0), NULL);
  eul_allocate_static_cons(cons_5834, NULL, eul_as_static(cons_5835));
  eul_allocate_static_cons(cons_5833, eul_as_static(cons_5834), NULL);
  eul_allocate_static_cons(cons_5838, NULL, NULL);
  eul_allocate_static_cons(cons_5837, NULL, eul_as_static(cons_5838));
  eul_allocate_static_cons(cons_5836, eul_as_static(cons_5837), NULL);
  eul_allocate_static_cons(cons_5841, NULL, NULL);
  eul_allocate_static_cons(cons_5840, NULL, eul_as_static(cons_5841));
  eul_allocate_static_cons(cons_5844, NULL, NULL);
  eul_allocate_static_cons(cons_5843, NULL, eul_as_static(cons_5844));
  eul_allocate_static_cons(cons_5842, eul_as_static(cons_5843), NULL);
  eul_allocate_static_cons(cons_5839, eul_as_static(cons_5840), eul_as_static(cons_5842));
  eul_allocate_static_cons(cons_5847, NULL, NULL);
  eul_allocate_static_cons(cons_5846, NULL, eul_as_static(cons_5847));
  eul_allocate_static_cons(cons_5850, NULL, NULL);
  eul_allocate_static_cons(cons_5849, NULL, eul_as_static(cons_5850));
  eul_allocate_static_cons(cons_5848, eul_as_static(cons_5849), NULL);
  eul_allocate_static_cons(cons_5845, eul_as_static(cons_5846), eul_as_static(cons_5848));
  eul_allocate_static_cons(cons_5852, NULL, NULL);
  eul_allocate_static_cons(cons_5855, NULL, NULL);
  eul_allocate_static_cons(cons_5854, NULL, eul_as_static(cons_5855));
  eul_allocate_static_cons(cons_5853, eul_as_static(cons_5854), NULL);
  eul_allocate_static_cons(cons_5851, eul_as_static(cons_5852), eul_as_static(cons_5853));
  eul_allocate_static_cons(cons_5858, NULL, NULL);
  eul_allocate_static_cons(cons_5861, NULL, NULL);
  eul_allocate_static_cons(cons_5860, NULL, eul_as_static(cons_5861));
  eul_allocate_static_cons(cons_5859, eul_as_static(cons_5860), NULL);
  eul_allocate_static_cons(cons_5857, eul_as_static(cons_5858), eul_as_static(cons_5859));
  eul_allocate_static_cons(cons_5864, NULL, NULL);
  eul_allocate_static_cons(cons_5863, NULL, eul_as_static(cons_5864));
  eul_allocate_static_cons(cons_5868, NULL, NULL);
  eul_allocate_static_cons(cons_5867, NULL, eul_as_static(cons_5868));
  eul_allocate_static_cons(cons_5866, eul_as_static(cons_5867), NULL);
  eul_allocate_static_cons(cons_5862, eul_as_static(cons_5863), eul_as_static(cons_5866));
  eul_allocate_static_cons(cons_5871, NULL, NULL);
  eul_allocate_static_cons(cons_5870, NULL, eul_as_static(cons_5871));
  eul_allocate_static_cons(cons_5875, NULL, NULL);
  eul_allocate_static_cons(cons_5874, NULL, eul_as_static(cons_5875));
  eul_allocate_static_cons(cons_5873, eul_as_static(cons_5874), NULL);
  eul_allocate_static_cons(cons_5869, eul_as_static(cons_5870), eul_as_static(cons_5873));
  eul_allocate_static_cons(cons_5880, c_int_as_eul_int(0), NULL);
  eul_allocate_static_cons(cons_5878, NULL, eul_as_static(cons_5880));
  eul_allocate_static_cons(cons_5877, eul_as_static(cons_5878), NULL);
  eul_allocate_static_cons(cons_5883, c_int_as_eul_int(1), NULL);
  eul_allocate_static_cons(cons_5882, NULL, eul_as_static(cons_5883));
  eul_allocate_static_cons(cons_5881, eul_as_static(cons_5882), NULL);
  eul_allocate_static_cons(cons_5886, c_int_as_eul_int(2), NULL);
  eul_allocate_static_cons(cons_5885, NULL, eul_as_static(cons_5886));
  eul_allocate_static_cons(cons_5884, eul_as_static(cons_5885), NULL);
  eul_allocate_static_cons(cons_5889, NULL, NULL);
  eul_allocate_static_cons(cons_5888, NULL, eul_as_static(cons_5889));
  eul_allocate_static_cons(cons_5891, NULL, NULL);
  eul_allocate_static_cons(cons_5890, eul_as_static(cons_5891), NULL);
  eul_allocate_static_cons(cons_5887, eul_as_static(cons_5888), eul_as_static(cons_5890));
  eul_allocate_static_cons(cons_5897, NULL, NULL);
  eul_allocate_static_cons(cons_5896, NULL, eul_as_static(cons_5897));
  eul_allocate_static_cons(cons_5894, NULL, eul_as_static(cons_5896));
  eul_allocate_static_cons(cons_5899, NULL, NULL);
  eul_allocate_static_cons(cons_5898, eul_as_static(cons_5899), NULL);
  eul_allocate_static_cons(cons_5893, eul_as_static(cons_5894), eul_as_static(cons_5898));
  eul_allocate_static_cons(cons_5903, NULL, NULL);
  eul_allocate_static_cons(cons_5901, NULL, eul_as_static(cons_5903));
  eul_allocate_static_cons(cons_5906, NULL, NULL);
  eul_allocate_static_cons(cons_5905, eul_as_static(cons_5906), NULL);
  eul_allocate_static_cons(cons_5900, eul_as_static(cons_5901), eul_as_static(cons_5905));
  eul_allocate_static_cons(cons_5908, NULL, NULL);
  eul_allocate_static_cons(cons_5911, NULL, NULL);
  eul_allocate_static_cons(cons_5910, eul_as_static(cons_5911), NULL);
  eul_allocate_static_cons(cons_5907, eul_as_static(cons_5908), eul_as_static(cons_5910));
  eul_allocate_static_cons(cons_5913, NULL, NULL);
  eul_allocate_static_cons(cons_5916, NULL, NULL);
  eul_allocate_static_cons(cons_5915, eul_as_static(cons_5916), NULL);
  eul_allocate_static_cons(cons_5912, eul_as_static(cons_5913), eul_as_static(cons_5915));
  eul_allocate_static_cons(cons_5918, NULL, NULL);
  eul_allocate_static_cons(cons_5920, NULL, NULL);
  eul_allocate_static_cons(cons_5919, eul_as_static(cons_5920), NULL);
  eul_allocate_static_cons(cons_5917, eul_as_static(cons_5918), eul_as_static(cons_5919));
  eul_allocate_static_cons(cons_5922, NULL, NULL);
  eul_allocate_static_cons(cons_5924, NULL, NULL);
  eul_allocate_static_cons(cons_5923, eul_as_static(cons_5924), NULL);
  eul_allocate_static_cons(cons_5921, eul_as_static(cons_5922), eul_as_static(cons_5923));
  eul_allocate_static_cons(cons_5926, NULL, NULL);
  eul_allocate_static_cons(cons_5928, NULL, NULL);
  eul_allocate_static_cons(cons_5930, NULL, NULL);
  eul_allocate_static_cons(cons_5929, eul_as_static(cons_5930), NULL);
  eul_allocate_static_cons(cons_5927, eul_as_static(cons_5928), eul_as_static(cons_5929));
  eul_allocate_static_cons(cons_5925, eul_as_static(cons_5926), eul_as_static(cons_5927));
  eul_allocate_static_cons(cons_5932, NULL, NULL);
  eul_allocate_static_cons(cons_5934, NULL, NULL);
  eul_allocate_static_cons(cons_5936, NULL, NULL);
  eul_allocate_static_cons(cons_5938, NULL, NULL);
  eul_allocate_static_cons(cons_5937, eul_as_static(cons_5938), NULL);
  eul_allocate_static_cons(cons_5935, eul_as_static(cons_5936), eul_as_static(cons_5937));
  eul_allocate_static_cons(cons_5933, eul_as_static(cons_5934), eul_as_static(cons_5935));
  eul_allocate_static_cons(cons_5931, eul_as_static(cons_5932), eul_as_static(cons_5933));
  /* Byte-vector with size: 205 is_init: 0 index: 84 binding: top-level */
  static const void *G005808[] = {I(a9,23,00,00),B(op_peep_r ,45),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,43),I(3b,00,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,50),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,42),I(3b,02,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,52),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,41),I(3b,03,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,53),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,39),I(3b,01,83,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,54),I(23,00,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,38),I(3b,01,23,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,37),I(3b,01,83,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,55),I(23,00,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,36),I(3b,02,23,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,35),I(3b,02,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,56),I(23,00,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,33),I(3b,02,23,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,32),I(3b,02,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,58),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,30),I(3b,01,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,59),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,28),I(3b,01,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,61),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,26),I(3b,02,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,64),I(23,00,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,24),I(3b,02,23,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,23),I(3b,02,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,66),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,22),I(3b,01,83,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,67),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,20),I(3b,01,83,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,68),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,18),I(3b,01,83,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,70),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,16),I(3b,01,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,72),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,15),I(3b,02,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,75),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,14),I(3b,01,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,77),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,13),I(3b,00,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,79),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,11),I(3b,00,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,80),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,9),I(3b,00,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,81),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,7),I(3b,00,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,82),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,5),I(3b,00,26,00),I(00,00,00,03),I(24,00,00,00),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,83),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,3),I(3b,00,26,00),I(00,00,00,04),I(24,00,00,00),B(op_peep ,5),I(3d,04,00,00)};

  /* Byte-vector with size: 18 is_init: 1 index: 0 binding: initialize-op-peep-r */
  static const void *G005939[] = {I(87,25,00,00),B(op_peep_r ,1),I(24,00,00,00),B(op_peep ,1),I(3e,0b,24,00),B(op_peep ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(23,00,00,00),B(op_peep_r ,85),I(23,00,00,00),B(op_peep_r ,84),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_intern_symbol(sym_5741,"cadddr");
  eul_allocate_bytevector( G005740,G005739);
  eul_intern_symbol(sym_5744,"caddr");
  eul_allocate_bytevector( G005743,G005742);
  eul_intern_symbol(sym_5747,"cddr");
  eul_allocate_bytevector( G005746,G005745);
  eul_intern_symbol(sym_5750,"cdar");
  eul_allocate_bytevector( G005749,G005748);
  eul_intern_symbol(sym_5753,"cadr");
  eul_allocate_bytevector( G005752,G005751);
  eul_intern_symbol(sym_5756,"caar");
  eul_allocate_bytevector( G005755,G005754);
  eul_allocate_bytevector( G005758,G005757);
  eul_allocate_bytevector( G005760,G005759);
  eul_allocate_bytevector( G005762,G005761);
  eul_intern_symbol(sym_5765,"stack-ref2");
  eul_allocate_bytevector( G005764,G005763);
  eul_intern_symbol(sym_5768,"stack-ref1");
  eul_allocate_bytevector( G005767,G005766);
  eul_intern_symbol(sym_5771,"stack-ref0");
  eul_allocate_bytevector( G005770,G005769);
  eul_allocate_bytevector( G005773,G005772);
  eul_allocate_bytevector( G005775,G005774);
  eul_intern_symbol(sym_5778,"branch");
  eul_allocate_bytevector( G005777,G005776);
  eul_intern_symbol(sym_5781,"branch-nil");
  eul_allocate_bytevector( G005780,G005779);
  eul_intern_symbol(sym_5784,"branch-true");
  eul_allocate_bytevector( G005783,G005782);
  eul_intern_symbol(sym_5787,"nobble");
  eul_allocate_bytevector( G005786,G005785);
  eul_allocate_bytevector( G005789,G005788);
  eul_intern_symbol(sym_5792,"return");
  eul_allocate_bytevector( G005791,G005790);
  eul_allocate_bytevector( G005794,G005793);
  eul_allocate_bytevector( G005796,G005795);
  eul_allocate_bytevector( G005798,G005797);
  eul_allocate_bytevector( G005800,G005799);
  eul_intern_symbol(sym_5803,"tail-call-operator");
  eul_allocate_bytevector( G005802,G005801);
  eul_allocate_bytevector( G005805,G005804);
  eul_allocate_bytevector( G005807,G005806);
  eul_intern_symbol(sym_5812,"null");
  object_class(cons_5811) = eul_static_cons_class;
  eul_car(cons_5811) = sym_5812;
  eul_cdr(cons_5811) = eul_nil;
  object_class(cons_5814) = eul_static_cons_class;
  eul_car(cons_5814) = sym_5812;
  eul_cdr(cons_5814) = eul_nil;
  object_class(cons_5813) = eul_static_cons_class;
  eul_cdr(cons_5813) = eul_nil;
  object_class(cons_5810) = eul_static_cons_class;
  eul_intern_symbol(sym_5815,"anonymous");
  eul_intern_symbol(sym_5818,"call-operator");
  eul_intern_symbol(sym_5820,"nargs");
  object_class(cons_5819) = eul_static_cons_class;
  eul_car(cons_5819) = sym_5820;
  eul_cdr(cons_5819) = eul_nil;
  object_class(cons_5817) = eul_static_cons_class;
  eul_car(cons_5817) = sym_5818;
  eul_intern_symbol(sym_5824,"n");
  object_class(cons_5823) = eul_static_cons_class;
  eul_car(cons_5823) = sym_5824;
  eul_cdr(cons_5823) = eul_nil;
  object_class(cons_5822) = eul_static_cons_class;
  eul_car(cons_5822) = sym_5792;
  object_class(cons_5821) = eul_static_cons_class;
  eul_cdr(cons_5821) = eul_nil;
  object_class(cons_5816) = eul_static_cons_class;
  object_class(cons_5828) = eul_static_cons_class;
  eul_car(cons_5828) = sym_5824;
  eul_cdr(cons_5828) = eul_nil;
  object_class(cons_5827) = eul_static_cons_class;
  eul_car(cons_5827) = sym_5820;
  object_class(cons_5826) = eul_static_cons_class;
  eul_car(cons_5826) = sym_5803;
  eul_intern_symbol(sym_5832,"m");
  object_class(cons_5831) = eul_static_cons_class;
  eul_car(cons_5831) = sym_5832;
  eul_cdr(cons_5831) = eul_nil;
  object_class(cons_5830) = eul_static_cons_class;
  eul_car(cons_5830) = sym_5792;
  object_class(cons_5829) = eul_static_cons_class;
  eul_cdr(cons_5829) = eul_nil;
  object_class(cons_5825) = eul_static_cons_class;
  object_class(cons_5835) = eul_static_cons_class;
  eul_cdr(cons_5835) = eul_nil;
  object_class(cons_5834) = eul_static_cons_class;
  eul_car(cons_5834) = sym_5787;
  object_class(cons_5833) = eul_static_cons_class;
  eul_cdr(cons_5833) = eul_nil;
  object_class(cons_5838) = eul_static_cons_class;
  eul_car(cons_5838) = sym_5824;
  eul_cdr(cons_5838) = eul_nil;
  object_class(cons_5837) = eul_static_cons_class;
  eul_car(cons_5837) = sym_5787;
  object_class(cons_5836) = eul_static_cons_class;
  eul_cdr(cons_5836) = eul_nil;
  object_class(cons_5841) = eul_static_cons_class;
  eul_car(cons_5841) = sym_5824;
  eul_cdr(cons_5841) = eul_nil;
  object_class(cons_5840) = eul_static_cons_class;
  eul_car(cons_5840) = sym_5787;
  object_class(cons_5844) = eul_static_cons_class;
  eul_car(cons_5844) = sym_5832;
  eul_cdr(cons_5844) = eul_nil;
  object_class(cons_5843) = eul_static_cons_class;
  eul_car(cons_5843) = sym_5792;
  object_class(cons_5842) = eul_static_cons_class;
  eul_cdr(cons_5842) = eul_nil;
  object_class(cons_5839) = eul_static_cons_class;
  object_class(cons_5847) = eul_static_cons_class;
  eul_car(cons_5847) = sym_5824;
  eul_cdr(cons_5847) = eul_nil;
  object_class(cons_5846) = eul_static_cons_class;
  eul_car(cons_5846) = sym_5787;
  object_class(cons_5850) = eul_static_cons_class;
  eul_car(cons_5850) = sym_5832;
  eul_cdr(cons_5850) = eul_nil;
  object_class(cons_5849) = eul_static_cons_class;
  eul_car(cons_5849) = sym_5787;
  object_class(cons_5848) = eul_static_cons_class;
  eul_cdr(cons_5848) = eul_nil;
  object_class(cons_5845) = eul_static_cons_class;
  object_class(cons_5852) = eul_static_cons_class;
  eul_car(cons_5852) = sym_5812;
  eul_cdr(cons_5852) = eul_nil;
  eul_intern_symbol(sym_5856,"label");
  object_class(cons_5855) = eul_static_cons_class;
  eul_car(cons_5855) = sym_5856;
  eul_cdr(cons_5855) = eul_nil;
  object_class(cons_5854) = eul_static_cons_class;
  eul_car(cons_5854) = sym_5781;
  object_class(cons_5853) = eul_static_cons_class;
  eul_cdr(cons_5853) = eul_nil;
  object_class(cons_5851) = eul_static_cons_class;
  object_class(cons_5858) = eul_static_cons_class;
  eul_car(cons_5858) = sym_5812;
  eul_cdr(cons_5858) = eul_nil;
  object_class(cons_5861) = eul_static_cons_class;
  eul_car(cons_5861) = sym_5856;
  eul_cdr(cons_5861) = eul_nil;
  object_class(cons_5860) = eul_static_cons_class;
  eul_car(cons_5860) = sym_5784;
  object_class(cons_5859) = eul_static_cons_class;
  eul_cdr(cons_5859) = eul_nil;
  object_class(cons_5857) = eul_static_cons_class;
  eul_intern_symbol(sym_5865,"lab");
  object_class(cons_5864) = eul_static_cons_class;
  eul_car(cons_5864) = sym_5865;
  eul_cdr(cons_5864) = eul_nil;
  object_class(cons_5863) = eul_static_cons_class;
  eul_car(cons_5863) = sym_5778;
  object_class(cons_5868) = eul_static_cons_class;
  eul_car(cons_5868) = sym_5824;
  eul_cdr(cons_5868) = eul_nil;
  object_class(cons_5867) = eul_static_cons_class;
  eul_car(cons_5867) = sym_5792;
  object_class(cons_5866) = eul_static_cons_class;
  eul_cdr(cons_5866) = eul_nil;
  object_class(cons_5862) = eul_static_cons_class;
  eul_intern_symbol(sym_5872,"lab1");
  object_class(cons_5871) = eul_static_cons_class;
  eul_car(cons_5871) = sym_5872;
  eul_cdr(cons_5871) = eul_nil;
  object_class(cons_5870) = eul_static_cons_class;
  eul_car(cons_5870) = sym_5778;
  eul_intern_symbol(sym_5876,"lab2");
  object_class(cons_5875) = eul_static_cons_class;
  eul_car(cons_5875) = sym_5876;
  eul_cdr(cons_5875) = eul_nil;
  object_class(cons_5874) = eul_static_cons_class;
  eul_car(cons_5874) = sym_5856;
  object_class(cons_5873) = eul_static_cons_class;
  eul_cdr(cons_5873) = eul_nil;
  object_class(cons_5869) = eul_static_cons_class;
  eul_intern_symbol(sym_5879,"stack-ref");
  object_class(cons_5880) = eul_static_cons_class;
  eul_cdr(cons_5880) = eul_nil;
  object_class(cons_5878) = eul_static_cons_class;
  eul_car(cons_5878) = sym_5879;
  object_class(cons_5877) = eul_static_cons_class;
  eul_cdr(cons_5877) = eul_nil;
  object_class(cons_5883) = eul_static_cons_class;
  eul_cdr(cons_5883) = eul_nil;
  object_class(cons_5882) = eul_static_cons_class;
  eul_car(cons_5882) = sym_5879;
  object_class(cons_5881) = eul_static_cons_class;
  eul_cdr(cons_5881) = eul_nil;
  object_class(cons_5886) = eul_static_cons_class;
  eul_cdr(cons_5886) = eul_nil;
  object_class(cons_5885) = eul_static_cons_class;
  eul_car(cons_5885) = sym_5879;
  object_class(cons_5884) = eul_static_cons_class;
  eul_cdr(cons_5884) = eul_nil;
  object_class(cons_5889) = eul_static_cons_class;
  eul_car(cons_5889) = sym_5824;
  eul_cdr(cons_5889) = eul_nil;
  object_class(cons_5888) = eul_static_cons_class;
  eul_car(cons_5888) = sym_5879;
  eul_intern_symbol(sym_5892,"pop1");
  object_class(cons_5891) = eul_static_cons_class;
  eul_car(cons_5891) = sym_5892;
  eul_cdr(cons_5891) = eul_nil;
  object_class(cons_5890) = eul_static_cons_class;
  eul_cdr(cons_5890) = eul_nil;
  object_class(cons_5887) = eul_static_cons_class;
  eul_intern_symbol(sym_5895,"display-ref");
  object_class(cons_5897) = eul_static_cons_class;
  eul_car(cons_5897) = sym_5832;
  eul_cdr(cons_5897) = eul_nil;
  object_class(cons_5896) = eul_static_cons_class;
  eul_car(cons_5896) = sym_5824;
  object_class(cons_5894) = eul_static_cons_class;
  eul_car(cons_5894) = sym_5895;
  object_class(cons_5899) = eul_static_cons_class;
  eul_car(cons_5899) = sym_5892;
  eul_cdr(cons_5899) = eul_nil;
  object_class(cons_5898) = eul_static_cons_class;
  eul_cdr(cons_5898) = eul_nil;
  object_class(cons_5893) = eul_static_cons_class;
  eul_intern_symbol(sym_5902,"register-ref");
  eul_intern_symbol(sym_5904,"*");
  object_class(cons_5903) = eul_static_cons_class;
  eul_car(cons_5903) = sym_5904;
  eul_cdr(cons_5903) = eul_nil;
  object_class(cons_5901) = eul_static_cons_class;
  eul_car(cons_5901) = sym_5902;
  object_class(cons_5906) = eul_static_cons_class;
  eul_car(cons_5906) = sym_5892;
  eul_cdr(cons_5906) = eul_nil;
  object_class(cons_5905) = eul_static_cons_class;
  eul_cdr(cons_5905) = eul_nil;
  object_class(cons_5900) = eul_static_cons_class;
  eul_intern_symbol(sym_5909,"car");
  object_class(cons_5908) = eul_static_cons_class;
  eul_car(cons_5908) = sym_5909;
  eul_cdr(cons_5908) = eul_nil;
  object_class(cons_5911) = eul_static_cons_class;
  eul_car(cons_5911) = sym_5909;
  eul_cdr(cons_5911) = eul_nil;
  object_class(cons_5910) = eul_static_cons_class;
  eul_cdr(cons_5910) = eul_nil;
  object_class(cons_5907) = eul_static_cons_class;
  eul_intern_symbol(sym_5914,"cdr");
  object_class(cons_5913) = eul_static_cons_class;
  eul_car(cons_5913) = sym_5914;
  eul_cdr(cons_5913) = eul_nil;
  object_class(cons_5916) = eul_static_cons_class;
  eul_car(cons_5916) = sym_5909;
  eul_cdr(cons_5916) = eul_nil;
  object_class(cons_5915) = eul_static_cons_class;
  eul_cdr(cons_5915) = eul_nil;
  object_class(cons_5912) = eul_static_cons_class;
  object_class(cons_5918) = eul_static_cons_class;
  eul_car(cons_5918) = sym_5909;
  eul_cdr(cons_5918) = eul_nil;
  object_class(cons_5920) = eul_static_cons_class;
  eul_car(cons_5920) = sym_5914;
  eul_cdr(cons_5920) = eul_nil;
  object_class(cons_5919) = eul_static_cons_class;
  eul_cdr(cons_5919) = eul_nil;
  object_class(cons_5917) = eul_static_cons_class;
  object_class(cons_5922) = eul_static_cons_class;
  eul_car(cons_5922) = sym_5914;
  eul_cdr(cons_5922) = eul_nil;
  object_class(cons_5924) = eul_static_cons_class;
  eul_car(cons_5924) = sym_5914;
  eul_cdr(cons_5924) = eul_nil;
  object_class(cons_5923) = eul_static_cons_class;
  eul_cdr(cons_5923) = eul_nil;
  object_class(cons_5921) = eul_static_cons_class;
  object_class(cons_5926) = eul_static_cons_class;
  eul_car(cons_5926) = sym_5914;
  eul_cdr(cons_5926) = eul_nil;
  object_class(cons_5928) = eul_static_cons_class;
  eul_car(cons_5928) = sym_5914;
  eul_cdr(cons_5928) = eul_nil;
  object_class(cons_5930) = eul_static_cons_class;
  eul_car(cons_5930) = sym_5909;
  eul_cdr(cons_5930) = eul_nil;
  object_class(cons_5929) = eul_static_cons_class;
  eul_cdr(cons_5929) = eul_nil;
  object_class(cons_5927) = eul_static_cons_class;
  object_class(cons_5925) = eul_static_cons_class;
  object_class(cons_5932) = eul_static_cons_class;
  eul_car(cons_5932) = sym_5914;
  eul_cdr(cons_5932) = eul_nil;
  object_class(cons_5934) = eul_static_cons_class;
  eul_car(cons_5934) = sym_5914;
  eul_cdr(cons_5934) = eul_nil;
  object_class(cons_5936) = eul_static_cons_class;
  eul_car(cons_5936) = sym_5914;
  eul_cdr(cons_5936) = eul_nil;
  object_class(cons_5938) = eul_static_cons_class;
  eul_car(cons_5938) = sym_5909;
  eul_cdr(cons_5938) = eul_nil;
  object_class(cons_5937) = eul_static_cons_class;
  eul_cdr(cons_5937) = eul_nil;
  object_class(cons_5935) = eul_static_cons_class;
  object_class(cons_5933) = eul_static_cons_class;
  object_class(cons_5931) = eul_static_cons_class;
  eul_allocate_bytevector( G005809,G005808);
  eul_intern_symbol(sym_5941,"top-level");
  eul_allocate_bytevector( G005940,G005939);

  /* Set local bindings */
  op_peep_r_bindings[ 2] = sym_5741;
  op_peep_r_bindings[ 3] = G005740;
  op_peep_r_bindings[ 4] = sym_5744;
  op_peep_r_bindings[ 5] = G005743;
  op_peep_r_bindings[ 6] = sym_5747;
  op_peep_r_bindings[ 7] = G005746;
  op_peep_r_bindings[ 8] = sym_5750;
  op_peep_r_bindings[ 9] = G005749;
  op_peep_r_bindings[ 10] = sym_5753;
  op_peep_r_bindings[ 11] = G005752;
  op_peep_r_bindings[ 12] = sym_5756;
  op_peep_r_bindings[ 13] = G005755;
  op_peep_r_bindings[ 14] = G005758;
  op_peep_r_bindings[ 15] = G005760;
  op_peep_r_bindings[ 16] = G005762;
  op_peep_r_bindings[ 17] = sym_5765;
  op_peep_r_bindings[ 18] = G005764;
  op_peep_r_bindings[ 19] = sym_5768;
  op_peep_r_bindings[ 20] = G005767;
  op_peep_r_bindings[ 21] = sym_5771;
  op_peep_r_bindings[ 22] = G005770;
  op_peep_r_bindings[ 23] = G005773;
  op_peep_r_bindings[ 24] = G005775;
  op_peep_r_bindings[ 25] = sym_5778;
  op_peep_r_bindings[ 26] = G005777;
  op_peep_r_bindings[ 27] = sym_5781;
  op_peep_r_bindings[ 28] = G005780;
  op_peep_r_bindings[ 29] = sym_5784;
  op_peep_r_bindings[ 30] = G005783;
  op_peep_r_bindings[ 31] = sym_5787;
  op_peep_r_bindings[ 32] = G005786;
  op_peep_r_bindings[ 33] = G005789;
  op_peep_r_bindings[ 34] = sym_5792;
  op_peep_r_bindings[ 35] = G005791;
  op_peep_r_bindings[ 36] = G005794;
  op_peep_r_bindings[ 37] = G005796;
  op_peep_r_bindings[ 38] = G005798;
  op_peep_r_bindings[ 39] = G005800;
  op_peep_r_bindings[ 40] = sym_5803;
  op_peep_r_bindings[ 41] = G005802;
  op_peep_r_bindings[ 42] = G005805;
  op_peep_r_bindings[ 43] = G005807;
  op_peep_r_bindings[ 44] = sym_5812;
  op_peep_r_bindings[ 45] = cons_5810;
  op_peep_r_bindings[ 46] = sym_5815;
  op_peep_r_bindings[ 47] = sym_5818;
  op_peep_r_bindings[ 48] = sym_5820;
  op_peep_r_bindings[ 49] = sym_5824;
  op_peep_r_bindings[ 50] = cons_5816;
  op_peep_r_bindings[ 51] = sym_5832;
  op_peep_r_bindings[ 52] = cons_5825;
  op_peep_r_bindings[ 53] = cons_5833;
  op_peep_r_bindings[ 54] = cons_5836;
  op_peep_r_bindings[ 55] = cons_5839;
  op_peep_r_bindings[ 56] = cons_5845;
  op_peep_r_bindings[ 57] = sym_5856;
  op_peep_r_bindings[ 58] = cons_5851;
  op_peep_r_bindings[ 59] = cons_5857;
  op_peep_r_bindings[ 60] = sym_5865;
  op_peep_r_bindings[ 61] = cons_5862;
  op_peep_r_bindings[ 62] = sym_5872;
  op_peep_r_bindings[ 63] = sym_5876;
  op_peep_r_bindings[ 64] = cons_5869;
  op_peep_r_bindings[ 65] = sym_5879;
  op_peep_r_bindings[ 66] = cons_5877;
  op_peep_r_bindings[ 67] = cons_5881;
  op_peep_r_bindings[ 68] = cons_5884;
  op_peep_r_bindings[ 69] = sym_5892;
  op_peep_r_bindings[ 70] = cons_5887;
  op_peep_r_bindings[ 71] = sym_5895;
  op_peep_r_bindings[ 72] = cons_5893;
  op_peep_r_bindings[ 73] = sym_5902;
  op_peep_r_bindings[ 74] = sym_5904;
  op_peep_r_bindings[ 75] = cons_5900;
  op_peep_r_bindings[ 76] = sym_5909;
  op_peep_r_bindings[ 77] = cons_5907;
  op_peep_r_bindings[ 78] = sym_5914;
  op_peep_r_bindings[ 79] = cons_5912;
  op_peep_r_bindings[ 80] = cons_5917;
  op_peep_r_bindings[ 81] = cons_5921;
  op_peep_r_bindings[ 82] = cons_5925;
  op_peep_r_bindings[ 83] = cons_5931;
  op_peep_r_bindings[ 84] = G005809;
  op_peep_r_bindings[ 1] = eul_nil;
  op_peep_r_bindings[ 85] = sym_5941;
  eul_allocate_lambda( op_peep_r_bindings[0], "initialize-op-peep-r", 0, G005940);

  }
}


/* eof */
