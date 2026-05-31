
undefined1  [16] FUN_100f57508(void)

{
  long unaff_x19;
  long *unaff_x20;
  long lVar1;
  long lVar2;
  long unaff_x22;
  undefined8 *puVar3;
  long unaff_x27;
  long in_stack_00000038;
  long in_stack_00000048;
  
  func_0x00010602ab90(s__108ac265a,&stack0x000072b0);
  if (*unaff_x20 != 0) {
    _free(unaff_x20[1]);
  }
  in_stack_00000038 = in_stack_00000038 + 1;
  lVar2 = in_stack_00000048;
  while (in_stack_00000038 = in_stack_00000038 + -1, in_stack_00000038 != 0) {
    FUN_100e02a24(lVar2);
    lVar2 = lVar2 + 0xc0;
  }
  if (unaff_x22 != 0) {
    _free(in_stack_00000048);
  }
  *(undefined4 *)(unaff_x27 + 0x10e) = 0;
  if (*(long *)(unaff_x19 + 0x3a8) != -0x8000000000000000 && *(long *)(unaff_x19 + 0x3a8) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x3b0));
  }
  if ((*(ulong *)(unaff_x19 + 0x3d8) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x3e0));
  }
  *(undefined1 *)(unaff_x19 + 0x431) = 0;
  *(undefined8 *)(unaff_x19 + 0x429) = 0;
  if ((*(long *)(unaff_x19 + 0x2d8) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x2d8) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x2e0));
  }
  if ((*(long *)(unaff_x19 + 0x2f0) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x2f0) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x2f8));
  }
  lVar1 = *(long *)(unaff_x19 + 0x2b0);
  lVar2 = *(long *)(unaff_x19 + 0x2b8);
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
  if (*(long *)(unaff_x19 + 0x2a8) != 0) {
    _free(lVar1);
  }
  *(undefined2 *)(unaff_x19 + 0x432) = 0;
  lVar2 = *(long *)(unaff_x19 + 0x1e8);
  lVar1 = *(long *)(unaff_x19 + 0x1f0);
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(lVar2 + 8);
    do {
      if (puVar3[-1] != 0) {
        _free(*puVar3);
      }
      puVar3 = puVar3 + 3;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  if (*(long *)(unaff_x19 + 0x1e0) != 0) {
    _free(lVar2);
  }
  *(undefined2 *)(unaff_x19 + 0x434) = 0;
  *(undefined1 *)(unaff_x19 + 0x428) = 1;
  return ZEXT816(0);
}

