
void FUN_1016c9440(void)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined1 unaff_w23;
  undefined8 *puVar8;
  ulong *unaff_x25;
  undefined8 unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *in_stack_000000f0;
  undefined8 in_stack_00000100;
  long in_stack_00000108;
  long in_stack_000100d0;
  undefined8 in_stack_000100d8;
  undefined4 in_stack_00015c68;
  undefined2 in_stack_00015c6c;
  undefined8 in_stack_00015c70;
  undefined8 in_stack_00015c78;
  undefined8 in_stack_00015c80;
  undefined8 in_stack_00015c88;
  undefined8 in_stack_00015c90;
  undefined8 in_stack_00015c98;
  undefined8 in_stack_00015ca0;
  undefined8 in_stack_00015ec0;
  undefined8 in_stack_00015ec8;
  undefined8 in_stack_00015ed0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00015ec0,s_Failed_to_fork_session_from_108adb851,&stack0x00015cf0);
  if (in_stack_000100d0 != 0) {
    _free(in_stack_000100d8);
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x22 + 8);
  *(undefined8 *)(unaff_x22 + 8) = 0;
  puVar4 = (undefined8 *)_malloc(0x38);
  if (puVar4 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x38);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1016d2ab4);
    (*pcVar2)();
  }
  puVar4[1] = uVar9;
  *puVar4 = &UNK_10b236028;
  puVar4[3] = in_stack_00015ec0;
  puVar4[2] = uVar10;
  puVar4[5] = in_stack_00015ed0;
  puVar4[4] = in_stack_00015ec8;
  puVar4[6] = unaff_x22;
  if ((*unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x27 + 0x520));
  }
  if ((*(long *)(in_stack_00000108 + 0x5a88) != -0x8000000000000000) &&
     (*(long *)(in_stack_00000108 + 0x5a88) != 0)) {
    _free(*(undefined8 *)(in_stack_00000108 + 0x5a90));
  }
  if ((*(byte *)(unaff_x27 + 0x4fe) & 1) != 0) {
    lVar3 = **(long **)(in_stack_00000108 + 0x620);
    **(long **)(in_stack_00000108 + 0x620) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1feaf2fe4a03fe20E(in_stack_00000108 + 0x620);
    }
  }
  *(undefined1 *)(unaff_x27 + 0x4fe) = 0;
  lVar3 = **(long **)(in_stack_00000108 + 0x5a80);
  **(long **)(in_stack_00000108 + 0x5a80) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001060e2224(in_stack_00000108 + 0x5a80);
  }
  lVar3 = **(long **)(in_stack_00000108 + 0x5a78);
  **(long **)(in_stack_00000108 + 0x5a78) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001060e2224(in_stack_00000108 + 0x5a78);
  }
  FUN_100e3ec2c(in_stack_00000108 + 0x4f0);
  lVar3 = *(long *)(in_stack_00000108 + 0x4c0);
  if ((lVar3 != -0x7ffffffffffffffe) && (lVar3 != -0x7fffffffffffffff)) {
    if ((lVar3 != -0x8000000000000000) && (lVar3 != 0)) {
      _free(*(undefined8 *)(in_stack_00000108 + 0x4c8));
    }
    if ((*(long *)(in_stack_00000108 + 0x4d8) != -0x8000000000000000) &&
       (*(long *)(in_stack_00000108 + 0x4d8) != 0)) {
      _free(*(undefined8 *)(in_stack_00000108 + 0x4e0));
    }
  }
  if ((*(byte *)(unaff_x27 + 0x4ff) & 1) != 0) {
    lVar3 = **(long **)(in_stack_00000108 + 0x5a70);
    **(long **)(in_stack_00000108 + 0x5a70) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbdb8a343cfce21e7E(in_stack_00000108 + 0x5a70);
    }
  }
  *(undefined1 *)(unaff_x27 + 0x4ff) = 0;
  lVar7 = *(long *)(in_stack_00000108 + 0x5a60);
  lVar3 = lVar7;
  for (lVar6 = *(long *)(in_stack_00000108 + 0x5a68); lVar6 != 0; lVar6 = lVar6 + -1) {
    FUN_100e171c4(lVar3);
    lVar3 = lVar3 + 0x1a0;
  }
  if (*(long *)(in_stack_00000108 + 0x5a58) != 0) {
    _free(lVar7);
  }
  if (*(long *)(in_stack_00000108 + 0x5a40) != 0) {
    _free(*(undefined8 *)(in_stack_00000108 + 0x5a48));
  }
  if ((*(long *)(in_stack_00000108 + 0x3f0) != -0x8000000000000000) &&
     (*(long *)(in_stack_00000108 + 0x3f0) != 0)) {
    _free(*(undefined8 *)(in_stack_00000108 + 0x3f8));
  }
  lVar3 = *(long *)(in_stack_00000108 + 0x408);
  if ((lVar3 != -0x7ffffffffffffffe) && (lVar3 != -0x7fffffffffffffff)) {
    if ((lVar3 != -0x8000000000000000) && (lVar3 != 0)) {
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
    lVar3 = **(long **)(in_stack_00000108 + 0x5840);
    **(long **)(in_stack_00000108 + 0x5840) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2208656e6791b8a3E(in_stack_00000108 + 0x5840);
    }
  }
  *(undefined1 *)(unaff_x27 + 0x504) = 0;
  if (((*(byte *)(unaff_x27 + 0x505) & 1) != 0) &&
     (plVar5 = *(long **)(in_stack_00000108 + 0x5838), plVar5 != (long *)0x0)) {
    lVar3 = *plVar5;
    *plVar5 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E(in_stack_00000108 + 0x5838);
    }
  }
  *(undefined1 *)(unaff_x27 + 0x505) = 0;
  if ((*(byte *)(unaff_x27 + 0x506) & 1) != 0) {
    FUN_100dea73c(in_stack_00000108 + 0x5800);
  }
  *(undefined1 *)(unaff_x27 + 0x506) = 0;
  lVar3 = **(long **)(in_stack_00000108 + 0x57f8);
  **(long **)(in_stack_00000108 + 0x57f8) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
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
  lVar3 = *(long *)(in_stack_00000108 + 0x57f0);
  if (lVar3 != 0) {
    puVar8 = (undefined8 *)(lVar6 + 8);
    do {
      if (puVar8[-1] != 0) {
        _free(*puVar8);
      }
      puVar8 = puVar8 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
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
  *in_stack_000000f0 = 0x8000000000000001;
  in_stack_000000f0[1] = puVar4;
  in_stack_000000f0[2] = unaff_x26;
  in_stack_000000f0[3] = in_stack_00000100;
  in_stack_000000f0[4] = unaff_x21;
  in_stack_000000f0[5] = unaff_x28;
  in_stack_000000f0[7] = in_stack_00015c88;
  in_stack_000000f0[6] = in_stack_00015c80;
  in_stack_000000f0[9] = in_stack_00015c98;
  in_stack_000000f0[8] = in_stack_00015c90;
  in_stack_000000f0[10] = in_stack_00015ca0;
  *(char *)(in_stack_000000f0 + 0xb) = (char)unaff_x22;
  *(undefined8 *)((long)in_stack_000000f0 + 0x61) = in_stack_00015c78;
  *(undefined8 *)((long)in_stack_000000f0 + 0x59) = in_stack_00015c70;
  *(undefined1 *)((long)in_stack_000000f0 + 0x69) = unaff_w23;
  *(undefined2 *)((long)in_stack_000000f0 + 0x6e) = in_stack_00015c6c;
  *(undefined4 *)((long)in_stack_000000f0 + 0x6a) = in_stack_00015c68;
  *(undefined1 *)(unaff_x27 + 0x4eb) = 1;
  return;
}

