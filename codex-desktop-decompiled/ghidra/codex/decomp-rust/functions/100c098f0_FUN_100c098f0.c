
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c098f0(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int iVar13;
  long unaff_x19;
  long *unaff_x20;
  long lVar14;
  long *plVar15;
  long lVar16;
  long unaff_x29;
  ulong in_xzr;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  undefined1 *puStack00000000000000c8;
  undefined *puStack00000000000000d0;
  char *pcStack00000000000000d8;
  undefined1 *puStack00000000000000e0;
  
  puStack00000000000000e0 = &stack0x000000e8;
  pcStack00000000000000d8 = s_websocket_receive_error__108ad2c16;
  puStack00000000000000c8 = (undefined1 *)&stack0x000000d8;
  puStack00000000000000d0 = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xf0) = 1;
  *(undefined1 ***)(unaff_x29 + -0xe8) = &stack0x000000c8;
  *(undefined8 *)(unaff_x29 + -0xe0) = 1;
  *(undefined8 *)(unaff_x29 + -0xd8) = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,unaff_x29 + -0xf0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar16 = *unaff_x20;
    in_stack_00000068 = *(undefined8 *)(lVar16 + 0x20);
    in_stack_00000070 = *(undefined8 *)(lVar16 + 0x28);
    in_stack_00000060 = 2;
    puVar4 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_10b3c24c8;
    }
    puVar5 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar5 = &UNK_109adfc03;
    }
    iVar13 = (**(code **)(puVar4 + 0x18))(puVar5,&stack0x00000060);
    if (iVar13 != 0) {
      lVar14 = *(long *)(lVar16 + 0x60);
      uVar9 = *(undefined8 *)(lVar16 + 0x68);
      lVar8 = *(long *)(lVar16 + 0x50);
      uVar10 = *(undefined8 *)(lVar16 + 0x58);
      uVar2 = 1;
      if (lVar8 == 0) {
        uVar2 = 2;
      }
      uVar6 = *(undefined4 *)(lVar16 + 8);
      uVar7 = *(undefined4 *)(lVar16 + 0xc);
      *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0xf0;
      *(undefined1 *)(unaff_x29 + -0x58) = 1;
      *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0x60;
      *(undefined **)(unaff_x29 + -0x48) = &DAT_1061c2098;
      uVar3 = 1;
      if (lVar14 == 0) {
        uVar3 = 2;
      }
      *(undefined8 *)(unaff_x29 + -0x88) = in_stack_00000068;
      *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000060;
      *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000070;
      *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
      *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x50;
      *(undefined8 *)(unaff_x29 + -0xc0) = uVar2;
      *(long *)(unaff_x29 + -0xb8) = lVar8;
      *(undefined8 *)(unaff_x29 + -0xb0) = uVar10;
      *(undefined8 *)(unaff_x29 + -0xa8) = uVar3;
      *(long *)(unaff_x29 + -0xa0) = lVar14;
      *(undefined8 *)(unaff_x29 + -0x98) = uVar9;
      *(undefined4 *)(unaff_x29 + -0x78) = uVar6;
      *(undefined4 *)(unaff_x29 + -0x74) = uVar7;
      (**(code **)(puVar4 + 0x20))(puVar5,unaff_x29 + -0xc0);
    }
  }
  puVar11 = in_stack_000000b8;
  uVar2 = in_stack_000000b0;
  if ((code *)*in_stack_000000b8 != (code *)0x0) {
    (*(code *)*in_stack_000000b8)(in_stack_000000b0);
  }
  if (puVar11[1] != 0) {
    _free(uVar2);
  }
  if (*(long *)(unaff_x19 + 0x528) != 6) {
    *(undefined1 *)(unaff_x19 + 0x9a) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0x9a) = 0;
  lVar16 = **(long **)(unaff_x19 + 0x60);
  **(long **)(unaff_x19 + 0x60) = lVar16 + -1;
  LORelease();
  if (lVar16 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4393153463fa3bcbE();
  }
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (unaff_x19 + 0x58);
  lVar16 = **(long **)(unaff_x19 + 0x58);
  **(long **)(unaff_x19 + 0x58) = lVar16 + -1;
  LORelease();
  if (lVar16 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(unaff_x19 + 0x58);
  }
  plVar15 = (long *)(unaff_x19 + 0x48);
  lVar14 = *plVar15;
  LOAcquire();
  lVar16 = *(long *)(lVar14 + 0x1f0);
  *(long *)(lVar14 + 0x1f0) = lVar16 + -1;
  LORelease();
  if (lVar16 == 1) {
    LOAcquire();
    lVar16 = *(long *)(lVar14 + 0x88);
    *(long *)(lVar14 + 0x88) = lVar16 + 1;
    lVar16 = func_0x000100fcac10(lVar14 + 0x80,lVar16);
    *(ulong *)(lVar16 + 0x610) = *(ulong *)(lVar16 + 0x610) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar14 + 0x110);
    LOAcquire();
    uVar12 = *puVar1;
    *puVar1 = uVar12 | 2;
    LORelease();
    if (uVar12 == 0) {
      lVar16 = *(long *)(lVar14 + 0x100);
      *(undefined8 *)(lVar14 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar16 != 0) {
        (**(code **)(lVar16 + 8))(*(undefined8 *)(lVar14 + 0x108));
      }
    }
  }
  lVar16 = *(long *)*plVar15;
  *(long *)*plVar15 = lVar16 + -1;
  LORelease();
  if (lVar16 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf80e57327abf0319E(plVar15);
  }
  plVar15 = (long *)(unaff_x19 + 0x40);
  lVar14 = *plVar15;
  LOAcquire();
  lVar16 = *(long *)(lVar14 + 0x1f0);
  *(long *)(lVar14 + 0x1f0) = lVar16 + -1;
  LORelease();
  if (lVar16 == 1) {
    LOAcquire();
    lVar16 = *(long *)(lVar14 + 0x88);
    *(long *)(lVar14 + 0x88) = lVar16 + 1;
    lVar16 = func_0x000100fcaed8(lVar14 + 0x80,lVar16);
    *(ulong *)(lVar16 + 0x4110) = *(ulong *)(lVar16 + 0x4110) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar14 + 0x110);
    LOAcquire();
    uVar12 = *puVar1;
    *puVar1 = uVar12 | 2;
    LORelease();
    if (uVar12 == 0) {
      lVar16 = *(long *)(lVar14 + 0x100);
      *(undefined8 *)(lVar14 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar16 != 0) {
        (**(code **)(lVar16 + 8))(*(undefined8 *)(lVar14 + 0x108));
      }
    }
  }
  lVar16 = *(long *)*plVar15;
  *(long *)*plVar15 = lVar16 + -1;
  LORelease();
  if (lVar16 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h87dced07d7317f69E(plVar15);
  }
  plVar15 = (long *)(unaff_x19 + 0x38);
  lVar14 = *plVar15;
  LOAcquire();
  lVar16 = *(long *)(lVar14 + 0x1f0);
  *(long *)(lVar14 + 0x1f0) = lVar16 + -1;
  LORelease();
  if (lVar16 == 1) {
    LOAcquire();
    lVar16 = *(long *)(lVar14 + 0x88);
    *(long *)(lVar14 + 0x88) = lVar16 + 1;
    lVar16 = func_0x000100fcb05c(lVar14 + 0x80,lVar16);
    *(ulong *)(lVar16 + 0x1610) = *(ulong *)(lVar16 + 0x1610) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar14 + 0x110);
    LOAcquire();
    uVar12 = *puVar1;
    *puVar1 = uVar12 | 2;
    LORelease();
    if (uVar12 == 0) {
      lVar16 = *(long *)(lVar14 + 0x100);
      *(undefined8 *)(lVar14 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar16 != 0) {
        (**(code **)(lVar16 + 8))(*(undefined8 *)(lVar14 + 0x108));
      }
    }
  }
  lVar16 = *(long *)*plVar15;
  *(long *)*plVar15 = lVar16 + -1;
  LORelease();
  if (lVar16 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5f0e02d478b254faE(plVar15);
  }
  *(undefined1 *)(unaff_x19 + 0x9b) = 1;
  return 0;
}

