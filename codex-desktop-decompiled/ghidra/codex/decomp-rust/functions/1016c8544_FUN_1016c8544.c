
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c8544(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  int iVar8;
  long *plVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *unaff_x20;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long *unaff_x24;
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x27;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 *in_stack_000000f0;
  long in_stack_00000108;
  ulong in_stack_00015cf0;
  
  *unaff_x24 = (long)&stack0x0000f7f0;
  unaff_x24[1] = (long)&UNK_10b208fd0;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x000100d0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar16 = *unaff_x20;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000370);
    if (iVar8 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar16,puVar2,puVar1,&stack0x00000370,&stack0x000100d0);
    }
  }
  if ((in_stack_00015cf0 & 3) == 1) {
    uVar16 = *(undefined8 *)(in_stack_00015cf0 - 1);
    puVar14 = *(undefined8 **)(in_stack_00015cf0 + 7);
    pcVar10 = (code *)*puVar14;
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(uVar16);
    }
    if (puVar14[1] != 0) {
      _free(uVar16);
    }
    _free((undefined8 *)(in_stack_00015cf0 - 1));
  }
  uVar24 = *(undefined8 *)(in_stack_00000108 + 0x145c0);
  uVar22 = *(undefined8 *)(in_stack_00000108 + 0x145b8);
  uVar27 = *(undefined8 *)(in_stack_00000108 + 0x145d0);
  uVar26 = *(undefined8 *)(in_stack_00000108 + 0x145c8);
  uVar19 = *(undefined8 *)(unaff_x27 + 0x8f0);
  uVar12 = *(undefined8 *)(unaff_x27 + 0x8f8);
  uVar20 = *(undefined8 *)(unaff_x27 + 0x900);
  uVar13 = *(undefined8 *)(unaff_x27 + 0x908);
  uVar18 = *(undefined8 *)(unaff_x27 + 0x910);
  uVar21 = *(undefined8 *)(unaff_x27 + 0x918);
  uVar16 = *(undefined8 *)(in_stack_00000108 + 0x145d8);
  uVar5 = *(undefined1 *)(unaff_x27 + 0x948);
  uVar25 = *(undefined8 *)(in_stack_00000108 + 0x145e9);
  uVar23 = *(undefined8 *)(in_stack_00000108 + 0x145e1);
  uVar6 = *(undefined1 *)(unaff_x27 + 0x959);
  uVar3 = *(undefined4 *)(in_stack_00000108 + 0x145f2);
  uVar7 = *(undefined2 *)(in_stack_00000108 + 0x145f6);
  lVar17 = *(long *)(in_stack_00000108 + 0x5a60);
  lVar11 = lVar17;
  for (lVar15 = *(long *)(in_stack_00000108 + 0x5a68); lVar15 != 0; lVar15 = lVar15 + -1) {
    FUN_100e171c4(lVar11);
    lVar11 = lVar11 + 0x1a0;
  }
  if (*(long *)(in_stack_00000108 + 0x5a58) != 0) {
    _free(lVar17);
  }
  if (*(long *)(in_stack_00000108 + 0x5a40) != 0) {
    _free(*(undefined8 *)(in_stack_00000108 + 0x5a48));
  }
  if ((*(long *)(in_stack_00000108 + 0x3f0) != -0x8000000000000000) &&
     (*(long *)(in_stack_00000108 + 0x3f0) != 0)) {
    _free(*(undefined8 *)(in_stack_00000108 + 0x3f8));
  }
  lVar11 = *(long *)(in_stack_00000108 + 0x408);
  if ((lVar11 != -0x7ffffffffffffffe) && (lVar11 != -0x7fffffffffffffff)) {
    if ((lVar11 != -0x8000000000000000) && (lVar11 != 0)) {
      _free(*(undefined8 *)(in_stack_00000108 + 0x410));
    }
    if ((*(long *)(in_stack_00000108 + 0x420) != -0x8000000000000000) &&
       (*(long *)(in_stack_00000108 + 0x420) != 0)) {
      _free(*(undefined8 *)(in_stack_00000108 + 0x428));
    }
  }
  *(undefined2 *)(unaff_x27 + 0x511) = 0;
  if (((*(long *)(in_stack_00000108 + 0x5a28) != -0x8000000000000000) &&
      (*(char *)(unaff_x27 + 0x500) == '\x01')) && (*(long *)(in_stack_00000108 + 0x5a28) != 0)) {
    _free(*(undefined8 *)(in_stack_00000108 + 0x5a30));
  }
  *(undefined1 *)(unaff_x27 + 0x500) = 0;
  *(undefined1 *)(unaff_x27 + 0x513) = 0;
  if ((*(byte *)(unaff_x27 + 0x501) & 1) != 0) {
    FUN_100dff6cc(in_stack_00000108 + 0x5858);
  }
  *(undefined1 *)(unaff_x27 + 0x501) = 0;
  if ((*(byte *)(unaff_x27 + 0x502) & 1) != 0) {
    FUN_100cac5bc(in_stack_00000108 + 0x5850);
  }
  *(undefined1 *)(unaff_x27 + 0x502) = 0;
  FUN_100cb5b60(in_stack_00000108 + 0x5848);
  *(undefined1 *)(unaff_x27 + 0x514) = 0;
  if ((*(long *)(in_stack_00000108 + 0x340) != -0x8000000000000000) &&
     ((*(byte *)(unaff_x27 + 0x503) & 1) != 0)) {
    FUN_100e52c20(in_stack_00000108 + 0x340);
  }
  *(undefined1 *)(unaff_x27 + 0x503) = 0;
  if ((*(byte *)(unaff_x27 + 0x504) & 1) != 0) {
    lVar11 = **(long **)(in_stack_00000108 + 0x5840);
    **(long **)(in_stack_00000108 + 0x5840) = lVar11 + -1;
    LORelease();
    if (lVar11 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2208656e6791b8a3E(in_stack_00000108 + 0x5840);
    }
  }
  *(undefined1 *)(unaff_x27 + 0x504) = 0;
  if (((*(byte *)(unaff_x27 + 0x505) & 1) != 0) &&
     (plVar9 = *(long **)(in_stack_00000108 + 0x5838), plVar9 != (long *)0x0)) {
    lVar11 = *plVar9;
    *plVar9 = lVar11 + -1;
    LORelease();
    if (lVar11 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E(in_stack_00000108 + 0x5838);
    }
  }
  *(undefined1 *)(unaff_x27 + 0x505) = 0;
  if ((*(byte *)(unaff_x27 + 0x506) & 1) != 0) {
    FUN_100dea73c(in_stack_00000108 + 0x5800);
  }
  *(undefined1 *)(unaff_x27 + 0x506) = 0;
  lVar11 = **(long **)(in_stack_00000108 + 0x57f8);
  **(long **)(in_stack_00000108 + 0x57f8) = lVar11 + -1;
  LORelease();
  if (lVar11 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc9edeb079b4dcf91E(in_stack_00000108 + 0x57f8);
  }
  if (*(long *)(in_stack_00000108 + 0x310) == 1) {
    bVar4 = *(byte *)(unaff_x27 + 0x507);
  }
  else {
    if (*(long *)(in_stack_00000108 + 0x310) != 2) goto LAB_1016c71e0;
    bVar4 = *(byte *)(unaff_x27 + 0x508);
  }
  if (((bVar4 & 1) != 0) && ((*(ulong *)(in_stack_00000108 + 0x318) & 0x7fffffffffffffff) != 0)) {
    _free(*(undefined8 *)(in_stack_00000108 + 800));
  }
LAB_1016c71e0:
  *(undefined2 *)(unaff_x27 + 0x507) = 0;
  lVar15 = *(long *)(in_stack_00000108 + 0x57e8);
  lVar11 = *(long *)(in_stack_00000108 + 0x57f0);
  if (lVar11 != 0) {
    puVar14 = (undefined8 *)(lVar15 + 8);
    do {
      if (puVar14[-1] != 0) {
        _free(*puVar14);
      }
      puVar14 = puVar14 + 3;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if (*(long *)(in_stack_00000108 + 0x57e0) != 0) {
    _free(lVar15);
  }
  if (*(long *)(in_stack_00000108 + 0x57c8) == -0x8000000000000000 ||
      *(long *)(in_stack_00000108 + 0x57c8) == 0) {
    bVar4 = *(byte *)(unaff_x27 + 0x509);
  }
  else {
    _free(*(undefined8 *)(in_stack_00000108 + 0x57d0));
    bVar4 = *(byte *)(unaff_x27 + 0x509);
  }
  if ((((bVar4 & 1) != 0) && (*(long *)(in_stack_00000108 + 0x57b0) != -0x8000000000000000)) &&
     (*(long *)(in_stack_00000108 + 0x57b0) != 0)) {
    _free(*(undefined8 *)(in_stack_00000108 + 0x57b8));
  }
  *(undefined1 *)(unaff_x27 + 0x509) = 0;
  if ((*(byte *)(unaff_x27 + 0x50a) & 1) != 0) {
    FUN_100e01cdc(in_stack_00000108 + 0x260);
  }
  *(undefined1 *)(unaff_x27 + 0x50a) = 0;
  *(undefined1 *)(unaff_x27 + 0x515) = 0;
  if ((*(byte *)(unaff_x27 + 0x50b) & 1) != 0) {
    FUN_100e76384(in_stack_00000108 + 0x5798);
  }
  *(undefined1 *)(unaff_x27 + 0x50b) = 0;
  if ((*(byte *)(unaff_x27 + 0x50c) & 1) != 0) {
    FUN_100de93d0(in_stack_00000108 + 0x3250);
  }
  *(undefined1 *)(unaff_x27 + 0x50c) = 0;
  if ((*(byte *)(unaff_x27 + 0x50d) & 1) != 0) {
    func_0x000100e24f80(in_stack_00000108 + 0x1d0);
  }
  *(undefined1 *)(unaff_x27 + 0x50d) = 0;
  *in_stack_000000f0 = uVar19;
  in_stack_000000f0[1] = uVar12;
  in_stack_000000f0[2] = uVar20;
  in_stack_000000f0[3] = uVar13;
  in_stack_000000f0[4] = uVar18;
  in_stack_000000f0[5] = uVar21;
  in_stack_000000f0[7] = uVar24;
  in_stack_000000f0[6] = uVar22;
  in_stack_000000f0[9] = uVar27;
  in_stack_000000f0[8] = uVar26;
  in_stack_000000f0[10] = uVar16;
  *(undefined1 *)(in_stack_000000f0 + 0xb) = uVar5;
  *(undefined8 *)((long)in_stack_000000f0 + 0x61) = uVar25;
  *(undefined8 *)((long)in_stack_000000f0 + 0x59) = uVar23;
  *(undefined1 *)((long)in_stack_000000f0 + 0x69) = uVar6;
  *(undefined2 *)((long)in_stack_000000f0 + 0x6e) = uVar7;
  *(undefined4 *)((long)in_stack_000000f0 + 0x6a) = uVar3;
  *(undefined1 *)(unaff_x27 + 0x4eb) = 1;
  return;
}

