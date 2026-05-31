
undefined1  [16] FUN_100994988(void)

{
  ulong *puVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  undefined8 *puVar8;
  ulong in_xzr;
  long in_stack_00000108;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x0001ae80,s_error_parsing__c_overrides__108acc8cc,&stack0x00013380);
  uVar5 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x14,&stack0x0001ae80);
  if (*(long *)(unaff_x19 + 0x3d80) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x3d88));
  }
  FUN_100ca8e80(unaff_x20 + 1000);
  *(undefined1 *)(in_stack_00000108 + 0xc6) = 0;
  lVar7 = *(long *)(unaff_x20 + 0x3e0);
  LOAcquire();
  lVar3 = *(long *)(lVar7 + 0x1f0);
  *(long *)(lVar7 + 0x1f0) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    LOAcquire();
    lVar3 = *(long *)(lVar7 + 0x88);
    *(long *)(lVar7 + 0x88) = lVar3 + 1;
    lVar3 = func_0x000100fcb944(lVar7 + 0x80,lVar3);
    *(ulong *)(lVar3 + 0x710) = *(ulong *)(lVar3 + 0x710) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar7 + 0x110);
    LOAcquire();
    uVar4 = *puVar1;
    *puVar1 = uVar4 | 2;
    LORelease();
    if (uVar4 == 0) {
      lVar3 = *(long *)(lVar7 + 0x100);
      *(undefined8 *)(lVar7 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar7 + 0x108));
      }
    }
  }
  plVar6 = *(long **)(unaff_x20 + 0x3e0);
  lVar3 = *plVar6;
  *plVar6 = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2e07aa192be82696E
              ((undefined8 *)(unaff_x20 + 0x3e0));
  }
  *(undefined1 *)(in_stack_00000108 + 199) = 0;
  FUN_100cdcba0(unaff_x20 + 0x3d8);
  *(undefined1 *)(in_stack_00000108 + 200) = 0;
  lVar7 = *(long *)(unaff_x20 + 0x3d0);
  LOAcquire();
  lVar3 = *(long *)(lVar7 + 0x1f0);
  *(long *)(lVar7 + 0x1f0) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    LOAcquire();
    lVar3 = *(long *)(lVar7 + 0x88);
    *(long *)(lVar7 + 0x88) = lVar3 + 1;
    lVar3 = func_0x000100fcc058(lVar7 + 0x80,lVar3);
    *(ulong *)(lVar3 + 0x4210) = *(ulong *)(lVar3 + 0x4210) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar7 + 0x110);
    LOAcquire();
    uVar4 = *puVar1;
    *puVar1 = uVar4 | 2;
    LORelease();
    if (uVar4 == 0) {
      lVar3 = *(long *)(lVar7 + 0x100);
      *(undefined8 *)(lVar7 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar7 + 0x108));
      }
    }
  }
  plVar6 = *(long **)(unaff_x20 + 0x3d0);
  lVar3 = *plVar6;
  *plVar6 = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4e24a6b0dfe710d9E
              ((undefined8 *)(unaff_x20 + 0x3d0));
  }
  *(undefined1 *)(in_stack_00000108 + 0xc9) = 0;
  FUN_100cdff70(unaff_x20 + 0x3c8);
  *(undefined1 *)(in_stack_00000108 + 0xca) = 0;
  lVar7 = *(long *)(unaff_x20 + 0x3c0);
  LOAcquire();
  lVar3 = *(long *)(lVar7 + 0x1f0);
  *(long *)(lVar7 + 0x1f0) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    LOAcquire();
    lVar3 = *(long *)(lVar7 + 0x88);
    *(long *)(lVar7 + 0x88) = lVar3 + 1;
    lVar3 = func_0x000100fcb05c(lVar7 + 0x80,lVar3);
    *(ulong *)(lVar3 + 0x1610) = *(ulong *)(lVar3 + 0x1610) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar7 + 0x110);
    LOAcquire();
    uVar4 = *puVar1;
    *puVar1 = uVar4 | 2;
    LORelease();
    if (uVar4 == 0) {
      lVar3 = *(long *)(lVar7 + 0x100);
      *(undefined8 *)(lVar7 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar7 + 0x108));
      }
    }
  }
  plVar6 = *(long **)(unaff_x20 + 0x3c0);
  lVar3 = *plVar6;
  *plVar6 = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5f0e02d478b254faE
              ((undefined8 *)(unaff_x20 + 0x3c0));
  }
  *(undefined1 *)(in_stack_00000108 + 0xcb) = 0;
  lVar3 = *(long *)(unaff_x20 + 0x370);
  if (lVar3 != -0x7fffffffffffffff) {
    if (lVar3 == -0x8000000000000000) {
      if (((*(byte *)(unaff_x20 + 0x378) & 1) != 0) || (*(long *)(unaff_x20 + 0x380) == 0))
      goto LAB_10099df30;
      lVar3 = 0x18;
    }
    else {
      if (lVar3 != 0) {
        _free(*(undefined8 *)(unaff_x20 + 0x378));
      }
      if ((*(long *)(unaff_x20 + 0x388) != -0x8000000000000000) &&
         (*(long *)(unaff_x20 + 0x388) != 0)) {
        _free(*(undefined8 *)(unaff_x20 + 0x390));
      }
      if ((*(ulong *)(unaff_x20 + 0x3a0) & 0x7fffffffffffffff) == 0) goto LAB_10099df30;
      lVar3 = 0x38;
    }
    _free(*(undefined8 *)(unaff_x20 + 0x370 + lVar3));
  }
LAB_10099df30:
  lVar3 = *(ulong *)(unaff_x20 + 0x310) + 0x7ffffffffffffffa;
  if (*(ulong *)(unaff_x20 + 0x310) < 0x8000000000000006) {
    lVar3 = 6;
  }
  if (lVar3 == 6) {
    FUN_100e0fca4(unaff_x20 + 0x310);
  }
  else if ((lVar3 == 4) && (*(long *)(unaff_x20 + 0x318) != 0)) {
    _free(*(undefined8 *)(unaff_x20 + 800));
  }
  *(undefined1 *)(in_stack_00000108 + 0xcc) = 0;
  if ((*(short *)(unaff_x20 + 0x2f0) == 3) && (*(long *)(unaff_x20 + 0x2f8) != 0)) {
    _free(*(undefined8 *)(unaff_x20 + 0x300));
  }
  *(undefined1 *)(in_stack_00000108 + 0xcd) = 0;
  if ((*(byte *)(in_stack_00000108 + 0xbd) & 1) != 0) {
    FUN_100e01cdc(unaff_x20 + 0x240);
  }
  *(undefined1 *)(in_stack_00000108 + 0xbd) = 0;
  lVar7 = *(long *)(unaff_x20 + 0x230);
  lVar3 = *(long *)(unaff_x20 + 0x238);
  if (lVar3 != 0) {
    puVar8 = (undefined8 *)(lVar7 + 8);
    do {
      if (puVar8[-1] != 0) {
        _free(*puVar8);
      }
      puVar8 = puVar8 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(long *)(unaff_x20 + 0x228) != 0) {
    _free(lVar7);
  }
  if (*(long *)(unaff_x20 + 0x1e0) == -0x8000000000000000 || *(long *)(unaff_x20 + 0x1e0) == 0) {
    lVar3 = *(long *)(unaff_x20 + 0x1f8);
  }
  else {
    _free(*(undefined8 *)(unaff_x20 + 0x1e8));
    lVar3 = *(long *)(unaff_x20 + 0x1f8);
  }
  if ((lVar3 != -0x8000000000000000) && (lVar3 != 0)) {
    _free(*(undefined8 *)(unaff_x20 + 0x200));
  }
  if ((*(ulong *)(unaff_x20 + 0x210) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x20 + 0x218));
  }
  *(undefined1 *)(in_stack_00000108 + 0xce) = 0;
  *(undefined1 *)(in_stack_00000108 + 0xb1) = 1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar5;
  return auVar2 << 0x40;
}

