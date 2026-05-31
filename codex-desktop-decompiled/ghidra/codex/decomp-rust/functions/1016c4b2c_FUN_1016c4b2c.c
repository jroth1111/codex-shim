
void FUN_1016c4b2c(void)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 unaff_x21;
  undefined8 uVar7;
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
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if ((in_stack_00015cf0 & 3) == 1) {
    uVar7 = *(undefined8 *)(in_stack_00015cf0 - 1);
    puVar5 = *(undefined8 **)(in_stack_00015cf0 + 7);
    pcVar3 = (code *)*puVar5;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar7);
    }
    if (puVar5[1] != 0) {
      _free(uVar7);
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
    lVar2 = **(long **)(in_stack_00000108 + 0x5840);
    **(long **)(in_stack_00000108 + 0x5840) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2208656e6791b8a3E(in_stack_00000108 + 0x5840);
    }
  }
  *(undefined1 *)(unaff_x27 + 0x504) = 0;
  if (((*(byte *)(unaff_x27 + 0x505) & 1) != 0) &&
     (plVar4 = *(long **)(in_stack_00000108 + 0x5838), plVar4 != (long *)0x0)) {
    lVar2 = *plVar4;
    *plVar4 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E(in_stack_00000108 + 0x5838);
    }
  }
  *(undefined1 *)(unaff_x27 + 0x505) = 0;
  if ((*(byte *)(unaff_x27 + 0x506) & 1) != 0) {
    FUN_100dea73c(in_stack_00000108 + 0x5800);
  }
  *(undefined1 *)(unaff_x27 + 0x506) = 0;
  lVar2 = **(long **)(in_stack_00000108 + 0x57f8);
  **(long **)(in_stack_00000108 + 0x57f8) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc9edeb079b4dcf91E(in_stack_00000108 + 0x57f8);
  }
  if (*(long *)(in_stack_00000108 + 0x310) == 1) {
    bVar1 = *(byte *)(unaff_x27 + 0x507);
  }
  else {
    if (*(long *)(in_stack_00000108 + 0x310) != 2) goto LAB_1016c71e0;
    bVar1 = *(byte *)(unaff_x27 + 0x508);
  }
  if (((bVar1 & 1) != 0) && ((*(ulong *)(in_stack_00000108 + 0x318) & 0x7fffffffffffffff) != 0)) {
    _free(*(undefined8 *)(in_stack_00000108 + 800));
  }
LAB_1016c71e0:
  *(undefined2 *)(unaff_x27 + 0x507) = 0;
  lVar6 = *(long *)(in_stack_00000108 + 0x57e8);
  lVar2 = *(long *)(in_stack_00000108 + 0x57f0);
  if (lVar2 != 0) {
    puVar5 = (undefined8 *)(lVar6 + 8);
    do {
      if (puVar5[-1] != 0) {
        _free(*puVar5);
      }
      puVar5 = puVar5 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (*(long *)(in_stack_00000108 + 0x57e0) != 0) {
    _free(lVar6);
  }
  if (*(long *)(in_stack_00000108 + 0x57c8) == -0x8000000000000000 ||
      *(long *)(in_stack_00000108 + 0x57c8) == 0) {
    bVar1 = *(byte *)(unaff_x27 + 0x509);
  }
  else {
    _free(*(undefined8 *)(in_stack_00000108 + 0x57d0));
    bVar1 = *(byte *)(unaff_x27 + 0x509);
  }
  if ((((bVar1 & 1) != 0) && (*(long *)(in_stack_00000108 + 0x57b0) != -0x8000000000000000)) &&
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

