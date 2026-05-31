
void FUN_1008d8450(void)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x22;
  long unaff_x29;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000058;
  undefined1 uStack0000000000000060;
  undefined7 uStack0000000000000061;
  undefined1 uStack0000000000000068;
  undefined7 uStack0000000000000069;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000058,s_thread___does_not_support_realti_108aca848,unaff_x29 + -0xc0);
  uVar1 = uStack0000000000000060;
  uVar3 = in_stack_00000058;
  *(ulong *)(unaff_x29 + -0x70) = CONCAT17(uStack0000000000000068,uStack0000000000000061);
  *(ulong *)(unaff_x22 + 7) = CONCAT71(uStack0000000000000069,uStack0000000000000068);
  lVar2 = **(long **)(unaff_x19 + 0x38);
  **(long **)(unaff_x19 + 0x38) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
  }
  *unaff_x20 = uVar3;
  *(undefined1 *)(unaff_x20 + 1) = uVar1;
  *(undefined8 *)((long)unaff_x20 + 9) = *(undefined8 *)(unaff_x29 + -0x70);
  unaff_x20[2] = *(undefined8 *)(unaff_x22 + 7);
  unaff_x20[3] = 0x8000000000000005;
  uVar3 = *(undefined8 *)(unaff_x29 + -0xb0);
  uVar5 = *(undefined8 *)(unaff_x29 + -0x98);
  uVar4 = *(undefined8 *)(unaff_x29 + -0xa0);
  unaff_x20[5] = *(undefined8 *)(unaff_x29 + -0xa8);
  unaff_x20[4] = uVar3;
  unaff_x20[7] = uVar5;
  unaff_x20[6] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x29 + -0x90);
  uVar5 = *(undefined8 *)(unaff_x29 + -0x78);
  uVar4 = *(undefined8 *)(unaff_x29 + -0x80);
  unaff_x20[9] = *(undefined8 *)(unaff_x29 + -0x88);
  unaff_x20[8] = uVar3;
  unaff_x20[0xb] = uVar5;
  unaff_x20[10] = uVar4;
  unaff_x20[0xc] = 0xffffffffffff80a8;
  *(undefined1 *)(unaff_x19 + 0x30) = 1;
  return;
}

