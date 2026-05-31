
void FUN_1008e3610(void)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x19;
  long lVar4;
  undefined8 uVar5;
  long unaff_x23;
  long unaff_x26;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *in_stack_00000088;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00009a00,s_thread___is_closing__retry_after_108acaa9f,&stack0x00006710);
  uVar5 = *(undefined8 *)(unaff_x26 + 0x32f0);
  uVar7 = *(undefined8 *)(unaff_x23 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x23 + 8);
  lVar4 = *(long *)(unaff_x19 + 0x138);
  if (lVar4 != 0) {
    LOAcquire();
    uVar1 = *(ulong *)(lVar4 + 0x30);
    *(ulong *)(lVar4 + 0x30) = uVar1 | 4;
    if ((uVar1 & 10) == 8) {
      (**(code **)(*(long *)(lVar4 + 0x10) + 0x10))(*(undefined8 *)(lVar4 + 0x18));
    }
    if (((uint)uVar1 >> 1 & 1) != 0) {
      *(undefined1 *)(lVar4 + 0x38) = 0;
    }
    plVar2 = *(long **)(unaff_x19 + 0x138);
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      *plVar2 = lVar4 + -1;
      LORelease();
      if (lVar4 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc920a624365fa6d7E(unaff_x19 + 0x138);
      }
    }
  }
  *(undefined1 *)(unaff_x19 + 0x1ec) = 0;
  plVar2 = *(long **)(unaff_x19 + 0x130);
  if (plVar2 != (long *)0x0) {
    uVar1 = plVar2[6];
    do {
      uVar3 = uVar1;
      if (((uint)uVar3 >> 2 & 1) != 0) goto LAB_1008e46ec;
      uVar1 = plVar2[6];
    } while (uVar1 != uVar3);
    plVar2[6] = uVar3 | 2;
LAB_1008e46ec:
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar2[4] + 0x10))(plVar2[5]);
    }
    lVar4 = *plVar2;
    *plVar2 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc920a624365fa6d7E(unaff_x19 + 0x130);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x1ed) = 0;
  lVar4 = **(long **)(unaff_x19 + 0x128);
  **(long **)(unaff_x19 + 0x128) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7cbe8e2c0817b69fE(unaff_x19 + 0x128);
  }
  *(undefined1 *)(unaff_x19 + 0x1ee) = 0;
  lVar4 = **(long **)(unaff_x19 + 0x120);
  **(long **)(unaff_x19 + 0x120) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x19 + 0x120);
  }
  *(undefined1 *)(unaff_x19 + 0x1ef) = 0;
  func_0x000100e7cd18(unaff_x19 + 0x98);
  *(undefined8 *)(unaff_x19 + 0x1f0) = 0;
  *in_stack_00000088 = uVar5;
  in_stack_00000088[2] = uVar7;
  in_stack_00000088[1] = uVar6;
  in_stack_00000088[3] = 0x8000000000000005;
  in_stack_00000088[0xc] = 0xffffffffffff80a8;
  *(undefined1 *)(unaff_x19 + 0x1e8) = 1;
  return;
}

