
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c41b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x21;
  undefined8 unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined8 in_stack_000000b8;
  undefined8 *in_stack_000000f0;
  long in_stack_00000108;
  undefined4 in_stack_00015c68;
  undefined2 in_stack_00015c6c;
  undefined8 in_stack_00015c70;
  undefined8 in_stack_00015c78;
  ulong in_stack_00015cf0;
  
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x000100d0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar9 = *unaff_x20;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000370);
    if (iVar5 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar9,puVar2,puVar1,&stack0x00000370,&stack0x000100d0);
    }
  }
  if ((in_stack_00015cf0 & 3) == 1) {
    uVar9 = *(undefined8 *)(in_stack_00015cf0 - 1);
    puVar8 = *(undefined8 **)(in_stack_00015cf0 + 7);
    pcVar6 = (code *)*puVar8;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(uVar9);
    }
    if (puVar8[1] != 0) {
      _free(uVar9);
    }
    _free((undefined8 *)(in_stack_00015cf0 - 1));
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
    lVar4 = **(long **)(in_stack_00000108 + 0x5840);
    **(long **)(in_stack_00000108 + 0x5840) = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2208656e6791b8a3E(in_stack_00000108 + 0x5840);
    }
  }
  *(undefined1 *)(unaff_x27 + 0x504) = 0;
  if (((*(byte *)(unaff_x27 + 0x505) & 1) != 0) &&
     (plVar7 = *(long **)(in_stack_00000108 + 0x5838), plVar7 != (long *)0x0)) {
    lVar4 = *plVar7;
    *plVar7 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E(in_stack_00000108 + 0x5838);
    }
  }
  *(undefined1 *)(unaff_x27 + 0x505) = 0;
  if ((*(byte *)(unaff_x27 + 0x506) & 1) != 0) {
    FUN_100dea73c(in_stack_00000108 + 0x5800);
  }
  *(undefined1 *)(unaff_x27 + 0x506) = 0;
  lVar4 = **(long **)(in_stack_00000108 + 0x57f8);
  **(long **)(in_stack_00000108 + 0x57f8) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc9edeb079b4dcf91E(in_stack_00000108 + 0x57f8);
  }
  if (*(long *)(in_stack_00000108 + 0x310) == 1) {
    bVar3 = *(byte *)(unaff_x27 + 0x507);
  }
  else {
    if (*(long *)(in_stack_00000108 + 0x310) != 2) goto LAB_1016c71e0;
    bVar3 = *(byte *)(unaff_x27 + 0x508);
  }
  if (((bVar3 & 1) != 0) && ((*(ulong *)(in_stack_00000108 + 0x318) & 0x7fffffffffffffff) != 0)) {
    _free(*(undefined8 *)(in_stack_00000108 + 800));
  }
LAB_1016c71e0:
  *(undefined2 *)(unaff_x27 + 0x507) = 0;
  lVar10 = *(long *)(in_stack_00000108 + 0x57e8);
  lVar4 = *(long *)(in_stack_00000108 + 0x57f0);
  if (lVar4 != 0) {
    puVar8 = (undefined8 *)(lVar10 + 8);
    do {
      if (puVar8[-1] != 0) {
        _free(*puVar8);
      }
      puVar8 = puVar8 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*(long *)(in_stack_00000108 + 0x57e0) != 0) {
    _free(lVar10);
  }
  if (*(long *)(in_stack_00000108 + 0x57c8) == -0x8000000000000000 ||
      *(long *)(in_stack_00000108 + 0x57c8) == 0) {
    bVar3 = *(byte *)(unaff_x27 + 0x509);
  }
  else {
    _free(*(undefined8 *)(in_stack_00000108 + 0x57d0));
    bVar3 = *(byte *)(unaff_x27 + 0x509);
  }
  if ((((bVar3 & 1) != 0) && (*(long *)(in_stack_00000108 + 0x57b0) != -0x8000000000000000)) &&
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
  *in_stack_000000f0 = 0x8000000000000000;
  in_stack_000000f0[1] = in_stack_000000b8;
  in_stack_000000f0[2] = unaff_x26;
  in_stack_000000f0[3] = 0x8000000000000000;
  in_stack_000000f0[4] = unaff_x21;
  in_stack_000000f0[5] = unaff_x28;
  in_stack_000000f0[7] = 0;
  in_stack_000000f0[6] = 0;
  in_stack_000000f0[9] = 0;
  in_stack_000000f0[8] = 0;
  in_stack_000000f0[10] = 0;
  *(undefined1 *)(in_stack_000000f0 + 0xb) = 0;
  *(undefined8 *)((long)in_stack_000000f0 + 0x61) = in_stack_00015c78;
  *(undefined8 *)((long)in_stack_000000f0 + 0x59) = in_stack_00015c70;
  *(undefined1 *)((long)in_stack_000000f0 + 0x69) = 5;
  *(undefined2 *)((long)in_stack_000000f0 + 0x6e) = in_stack_00015c6c;
  *(undefined4 *)((long)in_stack_000000f0 + 0x6a) = in_stack_00015c68;
  *(undefined1 *)(unaff_x27 + 0x4eb) = 1;
  return;
}

