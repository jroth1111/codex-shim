
undefined1  [16] FUN_1009967f0(void)

{
  ulong *puVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined8 *puVar8;
  ulong in_xzr;
  long in_stack_00000108;
  undefined8 in_stack_00013380;
  undefined8 *in_stack_00013388;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x0001ae80,s_error_loading_otel_config__108acc744,&stack0x00017100);
  uVar4 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x15,&stack0x0001ae80);
  if ((code *)*in_stack_00013388 != (code *)0x0) {
    (*(code *)*in_stack_00013388)(in_stack_00013380);
  }
  if (in_stack_00013388[1] != 0) {
    _free(in_stack_00013380);
  }
  *(undefined1 *)(in_stack_00000108 + 0xda) = 0;
  FUN_100de93d0(unaff_x20 + 0x2ac0);
  *(undefined1 *)(in_stack_00000108 + 0xc2) = 0;
  lVar7 = *(long *)(unaff_x20 + 0x2ab0);
  lVar6 = *(long *)(unaff_x20 + 0x2ab8);
  if (lVar6 != 0) {
    puVar8 = (undefined8 *)(lVar7 + 0x60);
    do {
      while( true ) {
        if (puVar8[-7] != 0) {
          _free(puVar8[-6]);
        }
        if (puVar8[-4] == -0x8000000000000000 || puVar8[-4] == 0) break;
        _free(puVar8[-3]);
        if (puVar8[-1] == -0x8000000000000000 || puVar8[-1] == 0) goto LAB_10099dc38;
LAB_10099dc74:
        _free(*puVar8);
        lVar6 = lVar6 + -1;
        puVar8 = puVar8 + 0xe;
        if (lVar6 == 0) goto LAB_10099dc84;
      }
      if (puVar8[-1] != -0x8000000000000000 && puVar8[-1] != 0) goto LAB_10099dc74;
LAB_10099dc38:
      puVar8 = puVar8 + 0xe;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
LAB_10099dc84:
  if (*(long *)(unaff_x20 + 0x2aa8) != 0) {
    _free(lVar7);
  }
  *(undefined1 *)(in_stack_00000108 + 0xc3) = 0;
  FUN_100e23b84(unaff_x20 + 0x428);
  *(undefined1 *)(in_stack_00000108 + 0xc4) = 0;
  lVar6 = **(long **)(unaff_x20 + 0x420);
  **(long **)(unaff_x20 + 0x420) = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2208656e6791b8a3E(unaff_x20 + 0x420);
  }
  *(undefined1 *)(in_stack_00000108 + 0xc5) = 0;
  *(undefined1 *)(in_stack_00000108 + 0xdc) = 0;
  if (*(long *)(unaff_x20 + 0x408) != 0) {
    _free(*(undefined8 *)(unaff_x20 + 0x410));
  }
  FUN_100e76384(unaff_x20 + 0x3f0);
  FUN_100ca8e80(unaff_x20 + 1000);
  *(undefined1 *)(in_stack_00000108 + 0xc6) = 0;
  lVar7 = *(long *)(unaff_x20 + 0x3e0);
  LOAcquire();
  lVar6 = *(long *)(lVar7 + 0x1f0);
  *(long *)(lVar7 + 0x1f0) = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    LOAcquire();
    lVar6 = *(long *)(lVar7 + 0x88);
    *(long *)(lVar7 + 0x88) = lVar6 + 1;
    lVar6 = func_0x000100fcb944(lVar7 + 0x80,lVar6);
    *(ulong *)(lVar6 + 0x710) = *(ulong *)(lVar6 + 0x710) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar7 + 0x110);
    LOAcquire();
    uVar3 = *puVar1;
    *puVar1 = uVar3 | 2;
    LORelease();
    if (uVar3 == 0) {
      lVar6 = *(long *)(lVar7 + 0x100);
      *(undefined8 *)(lVar7 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 8))(*(undefined8 *)(lVar7 + 0x108));
      }
    }
  }
  plVar5 = *(long **)(unaff_x20 + 0x3e0);
  lVar6 = *plVar5;
  *plVar5 = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2e07aa192be82696E
              ((undefined8 *)(unaff_x20 + 0x3e0));
  }
  *(undefined1 *)(in_stack_00000108 + 199) = 0;
  FUN_100cdcba0(unaff_x20 + 0x3d8);
  *(undefined1 *)(in_stack_00000108 + 200) = 0;
  lVar7 = *(long *)(unaff_x20 + 0x3d0);
  LOAcquire();
  lVar6 = *(long *)(lVar7 + 0x1f0);
  *(long *)(lVar7 + 0x1f0) = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    LOAcquire();
    lVar6 = *(long *)(lVar7 + 0x88);
    *(long *)(lVar7 + 0x88) = lVar6 + 1;
    lVar6 = func_0x000100fcc058(lVar7 + 0x80,lVar6);
    *(ulong *)(lVar6 + 0x4210) = *(ulong *)(lVar6 + 0x4210) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar7 + 0x110);
    LOAcquire();
    uVar3 = *puVar1;
    *puVar1 = uVar3 | 2;
    LORelease();
    if (uVar3 == 0) {
      lVar6 = *(long *)(lVar7 + 0x100);
      *(undefined8 *)(lVar7 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 8))(*(undefined8 *)(lVar7 + 0x108));
      }
    }
  }
  plVar5 = *(long **)(unaff_x20 + 0x3d0);
  lVar6 = *plVar5;
  *plVar5 = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4e24a6b0dfe710d9E
              ((undefined8 *)(unaff_x20 + 0x3d0));
  }
  *(undefined1 *)(in_stack_00000108 + 0xc9) = 0;
  FUN_100cdff70(unaff_x20 + 0x3c8);
  *(undefined1 *)(in_stack_00000108 + 0xca) = 0;
  lVar7 = *(long *)(unaff_x20 + 0x3c0);
  LOAcquire();
  lVar6 = *(long *)(lVar7 + 0x1f0);
  *(long *)(lVar7 + 0x1f0) = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    LOAcquire();
    lVar6 = *(long *)(lVar7 + 0x88);
    *(long *)(lVar7 + 0x88) = lVar6 + 1;
    lVar6 = func_0x000100fcb05c(lVar7 + 0x80,lVar6);
    *(ulong *)(lVar6 + 0x1610) = *(ulong *)(lVar6 + 0x1610) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar7 + 0x110);
    LOAcquire();
    uVar3 = *puVar1;
    *puVar1 = uVar3 | 2;
    LORelease();
    if (uVar3 == 0) {
      lVar6 = *(long *)(lVar7 + 0x100);
      *(undefined8 *)(lVar7 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 8))(*(undefined8 *)(lVar7 + 0x108));
      }
    }
  }
  plVar5 = *(long **)(unaff_x20 + 0x3c0);
  lVar6 = *plVar5;
  *plVar5 = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5f0e02d478b254faE
              ((undefined8 *)(unaff_x20 + 0x3c0));
  }
  *(undefined1 *)(in_stack_00000108 + 0xcb) = 0;
  lVar6 = *(long *)(unaff_x20 + 0x370);
  if (lVar6 != -0x7fffffffffffffff) {
    if (lVar6 == -0x8000000000000000) {
      if (((*(byte *)(unaff_x20 + 0x378) & 1) != 0) || (*(long *)(unaff_x20 + 0x380) == 0))
      goto LAB_10099df30;
      lVar6 = 0x18;
    }
    else {
      if (lVar6 != 0) {
        _free(*(undefined8 *)(unaff_x20 + 0x378));
      }
      if ((*(long *)(unaff_x20 + 0x388) != -0x8000000000000000) &&
         (*(long *)(unaff_x20 + 0x388) != 0)) {
        _free(*(undefined8 *)(unaff_x20 + 0x390));
      }
      if ((*(ulong *)(unaff_x20 + 0x3a0) & 0x7fffffffffffffff) == 0) goto LAB_10099df30;
      lVar6 = 0x38;
    }
    _free(*(undefined8 *)(unaff_x20 + 0x370 + lVar6));
  }
LAB_10099df30:
  lVar6 = *(ulong *)(unaff_x20 + 0x310) + 0x7ffffffffffffffa;
  if (*(ulong *)(unaff_x20 + 0x310) < 0x8000000000000006) {
    lVar6 = 6;
  }
  if (lVar6 == 6) {
    FUN_100e0fca4(unaff_x20 + 0x310);
  }
  else if ((lVar6 == 4) && (*(long *)(unaff_x20 + 0x318) != 0)) {
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
  lVar6 = *(long *)(unaff_x20 + 0x238);
  if (lVar6 != 0) {
    puVar8 = (undefined8 *)(lVar7 + 8);
    do {
      if (puVar8[-1] != 0) {
        _free(*puVar8);
      }
      puVar8 = puVar8 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (*(long *)(unaff_x20 + 0x228) != 0) {
    _free(lVar7);
  }
  if (*(long *)(unaff_x20 + 0x1e0) == -0x8000000000000000 || *(long *)(unaff_x20 + 0x1e0) == 0) {
    lVar6 = *(long *)(unaff_x20 + 0x1f8);
  }
  else {
    _free(*(undefined8 *)(unaff_x20 + 0x1e8));
    lVar6 = *(long *)(unaff_x20 + 0x1f8);
  }
  if ((lVar6 != -0x8000000000000000) && (lVar6 != 0)) {
    _free(*(undefined8 *)(unaff_x20 + 0x200));
  }
  if ((*(ulong *)(unaff_x20 + 0x210) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x20 + 0x218));
  }
  *(undefined1 *)(in_stack_00000108 + 0xce) = 0;
  *(undefined1 *)(in_stack_00000108 + 0xb1) = 1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  return auVar2 << 0x40;
}

