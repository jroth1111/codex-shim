
undefined1  [16] FUN_100f941d0(void)

{
  undefined1 auVar1 [16];
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  undefined8 *unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000020,s_No_MCP_server_named_____found__108aca36c,unaff_x29 + -0xe0);
  unaff_x25[1] = in_stack_00000028;
  *unaff_x25 = in_stack_00000020;
  uVar3 = FUN_108856624(&stack0x00004aa0);
  FUN_100cf8c18(&stack0x00004da0);
  lVar2 = **(long **)(unaff_x19 + 0x2598);
  **(long **)(unaff_x19 + 0x2598) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb1fe494329e418d7E(unaff_x19 + 0x2598);
  }
  FUN_100de93d0(unaff_x19 + 0x50);
  *(undefined1 *)(unaff_x19 + 0x49) = 0;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x30));
  }
  *(undefined1 *)(unaff_x19 + 0x48) = 1;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  return auVar1 << 0x40;
}

