
void FUN_100969ef8(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  long unaff_x28;
  ulong in_stack_000000a0;
  short in_stack_000000d0;
  undefined8 in_stack_000051d0;
  undefined8 in_stack_000051d8;
  undefined8 in_stack_000051e0;
  undefined8 in_stack_00006200;
  undefined8 in_stack_00006208;
  undefined8 in_stack_00006210;
  undefined8 in_stack_00006218;
  undefined8 in_stack_00006220;
  undefined8 in_stack_00006228;
  undefined8 in_stack_00006230;
  undefined8 in_stack_00006238;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000051d0,s___108add0c1,&stack0x00006b80);
  uVar1 = in_stack_000000a0;
  if (-1 < (long)in_stack_000000a0) {
    uVar1 = 4;
  }
  uVar3 = 0xffffffffffff80a8;
  if (((1L << (uVar1 & 0x3f) & 0xeceecU) != 0) ||
     (((1L << (uVar1 & 0x3f) & 0x13103U) == 0 && (in_stack_000000d0 != 0x194)))) {
    uVar3 = 0xffffffffffff80a5;
  }
  FUN_101960064(&stack0x000000a0);
  *(undefined1 *)(unaff_x28 + 0x4f2) = 0;
  if (*(long *)(unaff_x19 + 0x3610) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x3618));
  }
  if (*(long *)(unaff_x19 + 0x3578) != -0x7ffffffffffffffd) {
    FUN_100e0609c(unaff_x19 + 0x3578);
  }
  if (*(long *)(unaff_x19 + 0x3560) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x3568));
  }
  FUN_100e05b5c(unaff_x19 + 0x2628);
  if (*(long *)(unaff_x19 + 0x2f88) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x2f90));
  }
  FUN_100de93d0(unaff_x19 + 0xe0);
  if ((*(uint *)(unaff_x19 + 0xc0) & 1) == 0) {
    if (*(char *)(unaff_x28 + 0x4f0) != '\x01') goto LAB_10096a5cc;
  }
  else if ((*(byte *)(unaff_x28 + 0x4f1) & 1) == 0) goto LAB_10096a5cc;
  if (*(long *)(unaff_x19 + 200) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0xd0));
  }
LAB_10096a5cc:
  *(undefined2 *)(unaff_x28 + 0x4f0) = 0;
  if (((*(byte *)(unaff_x28 + 0x4ef) & 1) != 0) && (*(long *)(unaff_x19 + 0xa8) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0xb0));
  }
  *(undefined1 *)(unaff_x28 + 0x4ef) = 0;
  lVar2 = **(long **)(unaff_x19 + 0xa0);
  **(long **)(unaff_x19 + 0xa0) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb1fe494329e418d7E();
  }
  *(undefined2 *)(unaff_x28 + 0x4ff) = 0;
  *(undefined1 *)(unaff_x28 + 0x501) = 0;
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = in_stack_000051d0;
  unaff_x20[2] = in_stack_000051d8;
  unaff_x20[3] = in_stack_000051e0;
  unaff_x20[4] = 0x8000000000000005;
  unaff_x20[6] = in_stack_00006208;
  unaff_x20[5] = in_stack_00006200;
  unaff_x20[8] = in_stack_00006218;
  unaff_x20[7] = in_stack_00006210;
  unaff_x20[10] = in_stack_00006228;
  unaff_x20[9] = in_stack_00006220;
  unaff_x20[0xc] = in_stack_00006238;
  unaff_x20[0xb] = in_stack_00006230;
  unaff_x20[0xd] = uVar3;
  _memcpy(unaff_x20 + 0xe,&stack0x00005e48,0x348);
  *(undefined1 *)(unaff_x28 + 0x4e8) = 1;
  return;
}

