
void FUN_1016c8ca8(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  long *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *unaff_x24;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x27;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 *in_stack_000000f0;
  long in_stack_00000108;
  ulong in_stack_00015cf0;
  
  *unaff_x24 = (long)&stack0x0000f7f0;
  unaff_x24[1] = (long)&UNK_10b208fd0;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if ((in_stack_00015cf0 & 3) == 1) {
    uVar7 = *(undefined8 *)(in_stack_00015cf0 - 1);
    puVar12 = *(undefined8 **)(in_stack_00015cf0 + 7);
    pcVar8 = (code *)*puVar12;
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(uVar7);
    }
    if (puVar12[1] != 0) {
      _free(uVar7);
    }
    _free((undefined8 *)(in_stack_00015cf0 - 1));
  }
  uVar21 = *(undefined8 *)(in_stack_00000108 + 0x145c0);
  uVar19 = *(undefined8 *)(in_stack_00000108 + 0x145b8);
  uVar24 = *(undefined8 *)(in_stack_00000108 + 0x145d0);
  uVar23 = *(undefined8 *)(in_stack_00000108 + 0x145c8);
  uVar16 = *(undefined8 *)(unaff_x27 + 0x8f0);
  uVar10 = *(undefined8 *)(unaff_x27 + 0x8f8);
  uVar17 = *(undefined8 *)(unaff_x27 + 0x900);
  uVar11 = *(undefined8 *)(unaff_x27 + 0x908);
  uVar15 = *(undefined8 *)(unaff_x27 + 0x910);
  uVar18 = *(undefined8 *)(unaff_x27 + 0x918);
  uVar7 = *(undefined8 *)(in_stack_00000108 + 0x145d8);
  uVar3 = *(undefined1 *)(unaff_x27 + 0x948);
  uVar22 = *(undefined8 *)(in_stack_00000108 + 0x145e9);
  uVar20 = *(undefined8 *)(in_stack_00000108 + 0x145e1);
  uVar4 = *(undefined1 *)(unaff_x27 + 0x959);
  uVar1 = *(undefined4 *)(in_stack_00000108 + 0x145f2);
  uVar5 = *(undefined2 *)(in_stack_00000108 + 0x145f6);
  lVar14 = *(long *)(in_stack_00000108 + 0x5a60);
  lVar9 = lVar14;
  for (lVar13 = *(long *)(in_stack_00000108 + 0x5a68); lVar13 != 0; lVar13 = lVar13 + -1) {
    FUN_100e171c4(lVar9);
    lVar9 = lVar9 + 0x1a0;
  }
  if (*(long *)(in_stack_00000108 + 0x5a58) != 0) {
    _free(lVar14);
  }
  if (*(long *)(in_stack_00000108 + 0x5a40) != 0) {
    _free(*(undefined8 *)(in_stack_00000108 + 0x5a48));
  }
  if ((*(long *)(in_stack_00000108 + 0x3f0) != -0x8000000000000000) &&
     (*(long *)(in_stack_00000108 + 0x3f0) != 0)) {
    _free(*(undefined8 *)(in_stack_00000108 + 0x3f8));
  }
  lVar9 = *(long *)(in_stack_00000108 + 0x408);
  if ((lVar9 != -0x7ffffffffffffffe) && (lVar9 != -0x7fffffffffffffff)) {
    if ((lVar9 != -0x8000000000000000) && (lVar9 != 0)) {
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
    lVar9 = **(long **)(in_stack_00000108 + 0x5840);
    **(long **)(in_stack_00000108 + 0x5840) = lVar9 + -1;
    LORelease();
    if (lVar9 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2208656e6791b8a3E(in_stack_00000108 + 0x5840);
    }
  }
  *(undefined1 *)(unaff_x27 + 0x504) = 0;
  if (((*(byte *)(unaff_x27 + 0x505) & 1) != 0) &&
     (plVar6 = *(long **)(in_stack_00000108 + 0x5838), plVar6 != (long *)0x0)) {
    lVar9 = *plVar6;
    *plVar6 = lVar9 + -1;
    LORelease();
    if (lVar9 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E(in_stack_00000108 + 0x5838);
    }
  }
  *(undefined1 *)(unaff_x27 + 0x505) = 0;
  if ((*(byte *)(unaff_x27 + 0x506) & 1) != 0) {
    FUN_100dea73c(in_stack_00000108 + 0x5800);
  }
  *(undefined1 *)(unaff_x27 + 0x506) = 0;
  lVar9 = **(long **)(in_stack_00000108 + 0x57f8);
  **(long **)(in_stack_00000108 + 0x57f8) = lVar9 + -1;
  LORelease();
  if (lVar9 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc9edeb079b4dcf91E(in_stack_00000108 + 0x57f8);
  }
  if (*(long *)(in_stack_00000108 + 0x310) == 1) {
    bVar2 = *(byte *)(unaff_x27 + 0x507);
  }
  else {
    if (*(long *)(in_stack_00000108 + 0x310) != 2) goto LAB_1016c71e0;
    bVar2 = *(byte *)(unaff_x27 + 0x508);
  }
  if (((bVar2 & 1) != 0) && ((*(ulong *)(in_stack_00000108 + 0x318) & 0x7fffffffffffffff) != 0)) {
    _free(*(undefined8 *)(in_stack_00000108 + 800));
  }
LAB_1016c71e0:
  *(undefined2 *)(unaff_x27 + 0x507) = 0;
  lVar13 = *(long *)(in_stack_00000108 + 0x57e8);
  lVar9 = *(long *)(in_stack_00000108 + 0x57f0);
  if (lVar9 != 0) {
    puVar12 = (undefined8 *)(lVar13 + 8);
    do {
      if (puVar12[-1] != 0) {
        _free(*puVar12);
      }
      puVar12 = puVar12 + 3;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if (*(long *)(in_stack_00000108 + 0x57e0) != 0) {
    _free(lVar13);
  }
  if (*(long *)(in_stack_00000108 + 0x57c8) == -0x8000000000000000 ||
      *(long *)(in_stack_00000108 + 0x57c8) == 0) {
    bVar2 = *(byte *)(unaff_x27 + 0x509);
  }
  else {
    _free(*(undefined8 *)(in_stack_00000108 + 0x57d0));
    bVar2 = *(byte *)(unaff_x27 + 0x509);
  }
  if ((((bVar2 & 1) != 0) && (*(long *)(in_stack_00000108 + 0x57b0) != -0x8000000000000000)) &&
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
  *in_stack_000000f0 = uVar16;
  in_stack_000000f0[1] = uVar10;
  in_stack_000000f0[2] = uVar17;
  in_stack_000000f0[3] = uVar11;
  in_stack_000000f0[4] = uVar15;
  in_stack_000000f0[5] = uVar18;
  in_stack_000000f0[7] = uVar21;
  in_stack_000000f0[6] = uVar19;
  in_stack_000000f0[9] = uVar24;
  in_stack_000000f0[8] = uVar23;
  in_stack_000000f0[10] = uVar7;
  *(undefined1 *)(in_stack_000000f0 + 0xb) = uVar3;
  *(undefined8 *)((long)in_stack_000000f0 + 0x61) = uVar22;
  *(undefined8 *)((long)in_stack_000000f0 + 0x59) = uVar20;
  *(undefined1 *)((long)in_stack_000000f0 + 0x69) = uVar4;
  *(undefined2 *)((long)in_stack_000000f0 + 0x6e) = uVar5;
  *(undefined4 *)((long)in_stack_000000f0 + 0x6a) = uVar1;
  *(undefined1 *)(unaff_x27 + 0x4eb) = 1;
  return;
}

