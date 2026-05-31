
/* WARNING: Removing unreachable block (ram,0x0001009fef80) */

undefined1  [16] FUN_1009feeb8(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  long lVar2;
  undefined8 *puVar3;
  long in_stack_00000128;
  long in_stack_00000130;
  undefined8 in_stack_00000138;
  long in_stack_00005280;
  undefined8 in_stack_00005288;
  
  func_0x00010602ab90(s_To_fetch_the_next_page__run_108acd88d,&stack0x00001e80);
  if (in_stack_00005280 != 0) {
    _free(in_stack_00005288);
  }
  if (in_stack_00000130 != 0) {
    _free(in_stack_00000138);
  }
  FUN_100e33894();
  if (unaff_x21 != 0) {
    _free();
  }
  if ((*(long *)(unaff_x19 + 0x1740) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x1740) != 0)
     ) {
    _free(*(undefined8 *)(unaff_x19 + 0x1748));
  }
  lVar1 = **(long **)(unaff_x19 + 0x1710);
  **(long **)(unaff_x19 + 0x1710) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2ae7ad734e65bdd0E(unaff_x19 + 0x1710);
  }
  if (*(long *)(unaff_x19 + 0x16f8) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x1700));
  }
  if ((*(ulong *)(unaff_x19 + 0x16d0) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x16d8));
  }
  *(undefined2 *)(in_stack_00000128 + 0x738) = 1;
  FUN_100e5529c();
  if ((*(long *)(unaff_x19 + 0xe8) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0xe8) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0xf0));
  }
  lVar1 = *(long *)(unaff_x19 + 0x88);
  lVar2 = *(long *)(unaff_x19 + 0x90);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar3[-1] != 0) {
        _free(*puVar3);
      }
      puVar3 = puVar3 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    _free(lVar1);
  }
  *(undefined1 *)(in_stack_00000128 + 0x668) = 1;
  return ZEXT816(0);
}

