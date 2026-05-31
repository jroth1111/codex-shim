
void FUN_1008f5404(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 extraout_x9;
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined8 *unaff_x22;
  long unaff_x29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000020;
  undefined1 *in_stack_00000028;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000000f8,s_failed_to_start_rollback__108acafdd,unaff_x29 + -0xb0);
  uVar3 = in_stack_00000108;
  uVar2 = in_stack_00000100;
  lVar1 = in_stack_000000f8;
  lVar4 = **(long **)(unaff_x19 + 0x228);
  **(long **)(unaff_x19 + 0x228) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7cbe8e2c0817b69fE(unaff_x19 + 0x228);
  }
  FUN_100df5738();
  if ((*(long *)(unaff_x19 + 0xf8) == -0x7fffffffffffffe0) && (*(long *)(unaff_x19 + 0x100) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x108));
  }
  if ((*(ulong *)(unaff_x19 + 0xd0) & 0x7fffffffffffffff) == 0) {
    lVar4 = **(long **)(unaff_x19 + 200);
    **(long **)(unaff_x19 + 200) = lVar4 + -1;
    LORelease();
  }
  else {
    _free(*(undefined8 *)(unaff_x19 + 0xd8));
    lVar4 = **(long **)(unaff_x19 + 200);
    **(long **)(unaff_x19 + 200) = lVar4 + -1;
    LORelease();
  }
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
  }
  if (*(long *)(unaff_x19 + 0xa0) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0xa8));
  }
  uVar9 = *(undefined8 *)(unaff_x29 + -0x98);
  uVar7 = *(undefined8 *)(unaff_x29 + -0xa0);
  uVar13 = *(undefined8 *)(unaff_x29 + -0x88);
  uVar11 = *(undefined8 *)(unaff_x29 + -0x90);
  uVar10 = *(undefined8 *)(unaff_x29 + -0x78);
  uVar8 = *(undefined8 *)(unaff_x29 + -0x80);
  uVar14 = *(undefined8 *)(unaff_x29 + -0x68);
  uVar12 = *(undefined8 *)(unaff_x29 + -0x70);
  *in_stack_00000028 = 1;
  if (lVar1 == -0x7fffffffffffffff) {
    uVar5 = 3;
    *unaff_x20 = 3;
    *unaff_x22 = 0x8000000000000071;
  }
  else {
    FUN_100d4df70();
    *unaff_x20 = 1;
    if (lVar1 == -0x8000000000000000) {
      uVar6 = 0x800000000000006f;
      in_stack_00000020 = extraout_x9;
    }
    else {
      uVar6 = 0x8000000000000070;
      in_stack_000000b0 = uVar7;
      in_stack_000000b8 = uVar9;
      in_stack_000000c0 = uVar11;
      in_stack_000000c8 = uVar13;
      in_stack_000000d0 = uVar8;
      in_stack_000000d8 = uVar10;
      in_stack_000000e0 = uVar12;
      in_stack_000000e8 = uVar14;
    }
    unaff_x22[6] = in_stack_000000b8;
    unaff_x22[5] = in_stack_000000b0;
    unaff_x22[8] = in_stack_000000c8;
    unaff_x22[7] = in_stack_000000c0;
    unaff_x22[10] = in_stack_000000d8;
    unaff_x22[9] = in_stack_000000d0;
    *unaff_x22 = uVar6;
    unaff_x22[1] = lVar1;
    unaff_x22[2] = uVar2;
    unaff_x22[3] = uVar3;
    unaff_x22[4] = in_stack_00000020;
    unaff_x22[0xc] = in_stack_000000e8;
    unaff_x22[0xb] = in_stack_000000e0;
    uVar5 = 1;
    unaff_x22[0xd] = 0xffffffffffff80a5;
  }
  *(undefined1 *)(unaff_x19 + 0xf60) = uVar5;
  return;
}

