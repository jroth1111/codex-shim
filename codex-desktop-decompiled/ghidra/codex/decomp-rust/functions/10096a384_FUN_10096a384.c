
void FUN_10096a384(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x28;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_00006190;
  undefined8 in_stack_00006198;
  undefined8 in_stack_000061a0;
  undefined8 in_stack_000061a8;
  undefined8 in_stack_000061b0;
  undefined8 in_stack_000061b8;
  undefined8 in_stack_000061c0;
  undefined8 in_stack_000061c8;
  
  FUN_100f3f484(&stack0x000000a0,s_2remote_plugin_read_is_not_enabl_108acc1f9,&stack0x00006200);
  uVar3 = in_stack_000000b0;
  uVar2 = in_stack_000000a8;
  uVar1 = in_stack_000000a0;
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
  lVar4 = **(long **)(unaff_x19 + 0xa0);
  **(long **)(unaff_x19 + 0xa0) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb1fe494329e418d7E();
  }
  *(undefined2 *)(unaff_x28 + 0x4ff) = 0;
  *(undefined1 *)(unaff_x28 + 0x501) = 0;
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar1;
  unaff_x20[2] = uVar2;
  unaff_x20[3] = uVar3;
  unaff_x20[4] = 0x8000000000000005;
  unaff_x20[6] = in_stack_00006198;
  unaff_x20[5] = in_stack_00006190;
  unaff_x20[8] = in_stack_000061a8;
  unaff_x20[7] = in_stack_000061a0;
  unaff_x20[10] = in_stack_000061b8;
  unaff_x20[9] = in_stack_000061b0;
  unaff_x20[0xc] = in_stack_000061c8;
  unaff_x20[0xb] = in_stack_000061c0;
  unaff_x20[0xd] = 0xffffffffffff80a8;
  _memcpy(unaff_x20 + 0xe,&stack0x00005e48,0x348);
  *(undefined1 *)(unaff_x28 + 0x4e8) = 1;
  return;
}

