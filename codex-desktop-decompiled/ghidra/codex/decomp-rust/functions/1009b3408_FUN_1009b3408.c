
undefined8 FUN_1009b3408(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x24;
  long in_stack_00000210;
  long *in_stack_00000218;
  
  unaff_x24[0x4b] = unaff_x24[1];
  unaff_x24[0x4a] = *unaff_x24;
  (**(code **)(unaff_x21 + 0x20))();
  if ((in_stack_00000210 != 0) && (in_stack_00000218 != (long *)0x0)) {
    uVar1 = in_stack_00000218[6];
    do {
      uVar3 = uVar1;
      if (((uint)uVar3 >> 2 & 1) != 0) goto LAB_1009b3510;
      uVar1 = in_stack_00000218[6];
    } while (uVar1 != uVar3);
    in_stack_00000218[6] = uVar3 | 2;
LAB_1009b3510:
    if ((uVar3 & 5) == 1) {
      (**(code **)(in_stack_00000218[4] + 0x10))(in_stack_00000218[5]);
    }
    lVar2 = *in_stack_00000218;
    *in_stack_00000218 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc920a624365fa6d7E(&stack0x00000218);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x8cc) = 0;
  if ((*(byte *)(unaff_x19 + 0x8c9) & 1) != 0) {
    func_0x000100e4d0ac(&stack0x00000018);
  }
  *(undefined1 *)(unaff_x19 + 0x8c9) = 0;
  *(undefined1 *)(unaff_x19 + 0x8c8) = 1;
  return 0;
}

