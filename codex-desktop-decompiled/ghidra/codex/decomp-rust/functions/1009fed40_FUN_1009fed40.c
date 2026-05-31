
/* WARNING: Removing unreachable block (ram,0x0001009fef80) */

undefined1  [16] FUN_1009fed40(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *puVar3;
  long in_stack_000000d0;
  long in_stack_00000128;
  long in_stack_00000878;
  undefined8 in_stack_00000880;
  long in_stack_00005280;
  undefined8 in_stack_00005288;
  long in_stack_00006480;
  long in_stack_00006488;
  long in_stack_00006490;
  
  func_0x00010602ab90(s__108ac265a,&stack0x00001e80);
  if (in_stack_00005280 != 0) {
    _free(in_stack_00005288);
  }
  FUN_100de6690(&stack0x00000f60);
  lVar1 = in_stack_00006490 + 1;
  lVar2 = in_stack_00006488;
  while (lVar1 = lVar1 + -1, lVar1 != 0) {
    FUN_100de6690(lVar2);
    lVar2 = lVar2 + 0x48;
  }
  if (in_stack_00006480 != 0) {
    _free(in_stack_00006488);
  }
  FUN_100e33894();
  if (in_stack_000000d0 != 0) {
    _free();
  }
  if ((in_stack_00000878 != -0x8000000000000000) && (in_stack_00000878 != 0)) {
    _free(in_stack_00000880);
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
  if (((*(long *)(unaff_x19 + 0x16b8) != -0x8000000000000000) &&
      ((*(byte *)(in_stack_00000128 + 0x739) & 1) != 0)) && (*(long *)(unaff_x19 + 0x16b8) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x16c0));
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

