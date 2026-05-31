
/* WARNING: Removing unreachable block (ram,0x0001009fc944) */

undefined1  [16] FUN_1009fbdc8(void)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *unaff_x24;
  long unaff_x25;
  long in_stack_00000128;
  long in_stack_00001e80;
  undefined8 in_stack_00001e88;
  
  func_0x00010602ab90(s__108ac265a,&stack0x00001660);
  if (in_stack_00001e80 != 0) {
    _free(in_stack_00001e88);
  }
  if (unaff_x25 != 0) {
    _free();
  }
  if (*(long *)(unaff_x19 + 0x1758) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x1760));
  }
  if (*(long *)(unaff_x19 + 0x1740) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x1748));
  }
  if (*(long *)(unaff_x19 + 0x1728) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x1730));
  }
  lVar1 = **(long **)(unaff_x19 + 0x1718);
  **(long **)(unaff_x19 + 0x1718) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2ae7ad734e65bdd0E(unaff_x19 + 0x1718);
  }
  if (*(long *)(unaff_x19 + 0x1700) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x1708));
  }
  if ((*(long *)(unaff_x19 + 0x16e0) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x16e0) != 0)
     ) {
    _free(*(undefined8 *)(unaff_x19 + 0x16e8));
  }
  if (*(long *)(unaff_x19 + 0x16c8) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x16d0));
  }
  *(undefined1 *)(in_stack_00000128 + 0x771) = 0;
  *unaff_x24 = 1;
  FUN_100e54fd4();
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

