
undefined8 FUN_10053d710(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  long unaff_x29;
  undefined8 uStack0000000000000070;
  long lStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  
  *(char **)(unaff_x29 + -0x78) = s_3failed_to_apply_goal_runtime_ma_108ac0b09;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xa0;
  *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0x78;
  *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
  lStack0000000000000078 = unaff_x29 + -0xb0;
  uStack0000000000000070 = 1;
  uStack0000000000000080 = 1;
  uStack0000000000000088 = param_1;
  FUN_10053faf0(&stack0x00000070);
  (**(code **)**(undefined8 **)(unaff_x29 + -0xe0))();
  *(undefined1 *)(unaff_x19 + 0x2e7) = 0;
  plVar3 = *(long **)(unaff_x19 + 0xa0);
  if (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    *plVar3 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      func_0x0001034c6b4c();
    }
  }
  if ((*(byte *)(unaff_x19 + 0x2e5) & 1) != 0) {
    uVar1 = *(undefined8 *)(unaff_x19 + 0x58);
    FUN_100e37258(uVar1,*(undefined8 *)(unaff_x19 + 0x60));
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      _free(uVar1);
    }
  }
  *(undefined2 *)(unaff_x19 + 0x2e5) = 0;
  lVar2 = **(long **)(unaff_x19 + 0x30);
  **(long **)(unaff_x19 + 0x30) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E();
  }
  *(undefined1 *)(unaff_x19 + 0x2e0) = 1;
  return 0;
}

