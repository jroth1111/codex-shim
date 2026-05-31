
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c0877c(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int iVar12;
  long unaff_x19;
  long *unaff_x20;
  long lVar13;
  long *plVar14;
  long lVar15;
  long unaff_x24;
  long unaff_x29;
  ulong in_xzr;
  undefined8 uVar16;
  undefined1 *puStack00000000000000c8;
  undefined *puStack00000000000000d0;
  char *pcStack00000000000000d8;
  undefined1 *puStack00000000000000e0;
  undefined8 uStack0000000000000110;
  undefined1 *puStack0000000000000118;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  
  puStack00000000000000e0 = &stack0x000000e8;
  pcStack00000000000000d8 = s_websocket_receive_error__108ad2c16;
  puStack00000000000000c8 = (undefined1 *)&stack0x000000d8;
  puStack00000000000000d0 = &UNK_10b208fd0;
  puStack0000000000000118 = (undefined1 *)&stack0x000000c8;
  uStack0000000000000110 = 1;
  uStack0000000000000120 = 1;
  uStack0000000000000128 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000110);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar15 = *unaff_x20;
    uVar7 = *(undefined8 *)(lVar15 + 0x20);
    uVar9 = *(undefined8 *)(lVar15 + 0x28);
    *(undefined8 *)(unaff_x29 + -0xd8) = 2;
    *(undefined8 *)(unaff_x29 + -0xd0) = uVar7;
    *(undefined8 *)(unaff_x29 + -200) = uVar9;
    puVar3 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_10b3c24c8;
    }
    puVar4 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_109adfc03;
    }
    iVar12 = (**(code **)(puVar3 + 0x18))(puVar4,unaff_x29 + -0xd8);
    if (iVar12 != 0) {
      lVar13 = *(long *)(lVar15 + 0x60);
      uVar9 = *(undefined8 *)(lVar15 + 0x68);
      lVar8 = *(long *)(lVar15 + 0x50);
      uVar10 = *(undefined8 *)(lVar15 + 0x58);
      uVar7 = 1;
      if (lVar8 == 0) {
        uVar7 = 2;
      }
      uVar5 = *(undefined4 *)(lVar15 + 8);
      uVar6 = *(undefined4 *)(lVar15 + 0xc);
      *(undefined8 **)(unaff_x29 + -0x60) = &stack0x00000110;
      *(undefined1 *)(unaff_x29 + -0x58) = 1;
      *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0x60;
      *(undefined **)(unaff_x29 + -0x48) = &DAT_1061c2098;
      uVar2 = 1;
      if (lVar13 == 0) {
        uVar2 = 2;
      }
      uVar16 = *(undefined8 *)(unaff_x24 + 0xc0);
      *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x24 + 200);
      *(undefined8 *)(unaff_x29 + -0x90) = uVar16;
      *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -200);
      *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
      *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x50;
      *(undefined8 *)(unaff_x29 + -0xc0) = uVar7;
      *(long *)(unaff_x29 + -0xb8) = lVar8;
      *(undefined8 *)(unaff_x29 + -0xb0) = uVar10;
      *(undefined8 *)(unaff_x29 + -0xa8) = uVar2;
      *(long *)(unaff_x29 + -0xa0) = lVar13;
      *(undefined8 *)(unaff_x29 + -0x98) = uVar9;
      *(undefined4 *)(unaff_x29 + -0x78) = uVar5;
      *(undefined4 *)(unaff_x29 + -0x74) = uVar6;
      (**(code **)(puVar3 + 0x20))(puVar4,unaff_x29 + -0xc0);
    }
  }
  FUN_100de8b24(&stack0x000000a0);
  if (*(long *)(unaff_x19 + 0xa8) != 7) {
    *(undefined1 *)(unaff_x19 + 0xa2) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0xa2) = 0;
  lVar15 = **(long **)(unaff_x19 + 0x30);
  **(long **)(unaff_x19 + 0x30) = lVar15 + -1;
  LORelease();
  if (lVar15 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf0ec7bcaf6bf0fb0E();
  }
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (unaff_x19 + 0x28);
  lVar15 = **(long **)(unaff_x19 + 0x28);
  **(long **)(unaff_x19 + 0x28) = lVar15 + -1;
  LORelease();
  if (lVar15 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(unaff_x19 + 0x28);
  }
  plVar14 = (long *)(unaff_x19 + 0x18);
  lVar13 = *plVar14;
  LOAcquire();
  lVar15 = *(long *)(lVar13 + 0x1f0);
  *(long *)(lVar13 + 0x1f0) = lVar15 + -1;
  LORelease();
  if (lVar15 == 1) {
    LOAcquire();
    lVar15 = *(long *)(lVar13 + 0x88);
    *(long *)(lVar13 + 0x88) = lVar15 + 1;
    lVar15 = func_0x000100fcb944(lVar13 + 0x80,lVar15);
    *(ulong *)(lVar15 + 0x710) = *(ulong *)(lVar15 + 0x710) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar13 + 0x110);
    LOAcquire();
    uVar11 = *puVar1;
    *puVar1 = uVar11 | 2;
    LORelease();
    if (uVar11 == 0) {
      lVar15 = *(long *)(lVar13 + 0x100);
      *(undefined8 *)(lVar13 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar15 != 0) {
        (**(code **)(lVar15 + 8))(*(undefined8 *)(lVar13 + 0x108));
      }
    }
  }
  lVar15 = *(long *)*plVar14;
  *(long *)*plVar14 = lVar15 + -1;
  LORelease();
  if (lVar15 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h3ca62d46b878cf2cE(plVar14);
  }
  plVar14 = (long *)(unaff_x19 + 0x10);
  lVar13 = *plVar14;
  LOAcquire();
  lVar15 = *(long *)(lVar13 + 0x1f0);
  *(long *)(lVar13 + 0x1f0) = lVar15 + -1;
  LORelease();
  if (lVar15 == 1) {
    LOAcquire();
    lVar15 = *(long *)(lVar13 + 0x88);
    *(long *)(lVar13 + 0x88) = lVar15 + 1;
    lVar15 = func_0x000100fcaed8(lVar13 + 0x80,lVar15);
    *(ulong *)(lVar15 + 0x4110) = *(ulong *)(lVar15 + 0x4110) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar13 + 0x110);
    LOAcquire();
    uVar11 = *puVar1;
    *puVar1 = uVar11 | 2;
    LORelease();
    if (uVar11 == 0) {
      lVar15 = *(long *)(lVar13 + 0x100);
      *(undefined8 *)(lVar13 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar15 != 0) {
        (**(code **)(lVar15 + 8))(*(undefined8 *)(lVar13 + 0x108));
      }
    }
  }
  lVar15 = *(long *)*plVar14;
  *(long *)*plVar14 = lVar15 + -1;
  LORelease();
  if (lVar15 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h87dced07d7317f69E(plVar14);
  }
  plVar14 = (long *)(unaff_x19 + 8);
  lVar13 = *plVar14;
  LOAcquire();
  lVar15 = *(long *)(lVar13 + 0x1f0);
  *(long *)(lVar13 + 0x1f0) = lVar15 + -1;
  LORelease();
  if (lVar15 == 1) {
    LOAcquire();
    lVar15 = *(long *)(lVar13 + 0x88);
    *(long *)(lVar13 + 0x88) = lVar15 + 1;
    lVar15 = func_0x000100fcb05c(lVar13 + 0x80,lVar15);
    *(ulong *)(lVar15 + 0x1610) = *(ulong *)(lVar15 + 0x1610) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar13 + 0x110);
    LOAcquire();
    uVar11 = *puVar1;
    *puVar1 = uVar11 | 2;
    LORelease();
    if (uVar11 == 0) {
      lVar15 = *(long *)(lVar13 + 0x100);
      *(undefined8 *)(lVar13 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar15 != 0) {
        (**(code **)(lVar15 + 8))(*(undefined8 *)(lVar13 + 0x108));
      }
    }
  }
  lVar15 = *(long *)*plVar14;
  *(long *)*plVar14 = lVar15 + -1;
  LORelease();
  if (lVar15 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5f0e02d478b254faE(plVar14);
  }
  *(undefined1 *)(unaff_x19 + 0xa3) = 1;
  return 0;
}

