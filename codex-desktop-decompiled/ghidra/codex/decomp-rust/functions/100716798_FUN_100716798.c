
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100716798(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined1 uVar11;
  code *pcVar12;
  long lVar13;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar14;
  undefined8 *unaff_x23;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined1 *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  short sStack0000000000000130;
  undefined2 uStack0000000000000136;
  undefined8 *in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  long in_stack_000001b0;
  long in_stack_000001b8;
  long in_stack_000001c0;
  long in_stack_000001c8;
  long in_stack_000001d0;
  long in_stack_000001d8;
  long in_stack_000001e0;
  
  *(undefined1 **)(unaff_x29 + -0x70) = &stack0x00000458;
  *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000330);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar15 = *unaff_x23;
    puVar3 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_10b3c24c8;
    }
    puVar4 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_109adfc03;
    }
    iVar10 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000270);
    if (iVar10 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar15,puVar4,puVar3,&stack0x00000270,&stack0x00000330);
    }
  }
  uVar5 = *(undefined4 *)(unaff_x28 + 2);
  *(undefined8 *)(unaff_x29 + -0x78) = in_stack_00000148;
  *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000140;
  if (sStack0000000000000130 == 2) {
    puVar14 = in_stack_00000138;
    if (((ulong)in_stack_00000138 & 3) == 1) {
      puVar14 = (undefined8 *)((long)in_stack_00000138 + -1);
      uVar15 = *puVar14;
      puVar16 = *(undefined8 **)((long)in_stack_00000138 + 7);
      pcVar12 = (code *)*puVar16;
      if (pcVar12 != (code *)0x0) {
        (*pcVar12)(uVar15);
      }
      if (puVar16[1] != 0) {
        _free(uVar15);
      }
      _free(puVar14);
    }
    sStack0000000000000130 = 2;
    in_stack_00000138 = puVar14;
  }
  else {
    *(undefined4 *)(unaff_x29 + -0x88) = uVar5;
    *(undefined2 *)(unaff_x29 + -0x84) = uStack0000000000000136;
    *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x78);
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x80);
  }
  puVar14 = (undefined8 *)_malloc(0x40);
  lVar1 = in_stack_000001e0;
  if (puVar14 != (undefined8 *)0x0) {
    uVar15 = *(undefined8 *)(unaff_x29 + -0xc0);
    uVar26 = *(undefined8 *)(unaff_x29 + -0xa8);
    uVar23 = *(undefined8 *)(unaff_x29 + -0xb0);
    puVar14[1] = *(undefined8 *)(unaff_x29 + -0xb8);
    *puVar14 = uVar15;
    puVar14[3] = uVar26;
    puVar14[2] = uVar23;
    *(short *)(puVar14 + 4) = sStack0000000000000130;
    *(undefined4 *)((long)puVar14 + 0x22) = *(undefined4 *)(unaff_x29 + -0x88);
    *(undefined2 *)((long)puVar14 + 0x26) = *(undefined2 *)(unaff_x29 + -0x84);
    puVar14[5] = in_stack_00000138;
    uVar15 = *(undefined8 *)(unaff_x29 + -0xa0);
    puVar14[7] = *(undefined8 *)(unaff_x29 + -0x98);
    puVar14[6] = uVar15;
    if (in_stack_000001e0 == in_stack_000001d0) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd9055ff48b871d5aE(&stack0x000001d0);
    }
    lVar8 = in_stack_000001d8;
    lVar7 = in_stack_000001d0;
    plVar2 = (long *)(in_stack_000001d8 + lVar1 * 0x20);
    *plVar2 = (long)puVar14;
    plVar2[1] = (long)&UNK_10b237e70;
    plVar2[3] = 0x62ff0564f7a9ef2e;
    plVar2[2] = -0x38a02eedc53115a4;
    lVar1 = lVar1 + 1;
    *(undefined1 *)(unaff_x19 + 0x182) = 0;
    lVar20 = *(long *)(unaff_x19 + 0x150);
    lVar17 = *(long *)(unaff_x19 + 0x148);
    lVar27 = *(long *)(unaff_x19 + 0x160);
    lVar24 = *(long *)(unaff_x19 + 0x158);
    lVar21 = *(long *)(unaff_x19 + 0x170);
    lVar18 = *(long *)(unaff_x19 + 0x168);
    lVar13 = *(long *)(unaff_x19 + 0x178);
    lVar22 = *(long *)(unaff_x19 + 0x130);
    lVar19 = *(long *)(unaff_x19 + 0x128);
    lVar28 = *(long *)(unaff_x19 + 0x140);
    lVar25 = *(long *)(unaff_x19 + 0x138);
    *(undefined1 *)(unaff_x19 + 0x183) = 0;
    bVar6 = *(byte *)(unaff_x19 + 0x7e8);
    in_stack_000001e0 = lVar1;
    if (((bVar6 != 0x20) && (5 < bVar6 - 0x1a)) && (0x18 < bVar6)) {
      lVar9 = **(long **)(unaff_x19 + 0x7f0);
      **(long **)(unaff_x19 + 0x7f0) = lVar9 + -1;
      LORelease();
      if (lVar9 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x7f0);
      }
    }
    if ((*(byte *)(unaff_x19 + 0x800) != 0x1a) && (0x18 < *(byte *)(unaff_x19 + 0x800))) {
      lVar9 = **(long **)(unaff_x19 + 0x808);
      **(long **)(unaff_x19 + 0x808) = lVar9 + -1;
      LORelease();
      if (lVar9 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x808);
      }
    }
    *(undefined1 *)(unaff_x19 + 0x181) = 0;
    *(undefined1 *)(unaff_x19 + 0x182) = 0;
    *unaff_x27 = 1;
    if (in_stack_000001b0 == 3) {
      *unaff_x20 = 3;
      uVar11 = 4;
    }
    else {
      FUN_100dd9824();
      if (*(char *)(unaff_x19 + 0x828) != '\0') {
        lVar9 = **(long **)(unaff_x19 + 0x830);
        **(long **)(unaff_x19 + 0x830) = lVar9 + -1;
        LORelease();
        if (lVar9 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE(unaff_x19 + 0x830);
        }
      }
      unaff_x20[0xc] = lVar20;
      unaff_x20[0xb] = lVar17;
      unaff_x20[0xe] = lVar27;
      unaff_x20[0xd] = lVar24;
      unaff_x20[0x10] = lVar21;
      unaff_x20[0xf] = lVar18;
      unaff_x20[4] = lVar7;
      unaff_x20[3] = in_stack_000001c8;
      unaff_x20[6] = lVar1;
      unaff_x20[5] = lVar8;
      unaff_x20[8] = lVar22;
      unaff_x20[7] = lVar19;
      *(undefined1 *)(unaff_x19 + 0xb9) = 0;
      *unaff_x20 = in_stack_000001b0;
      unaff_x20[1] = in_stack_000001b8;
      unaff_x20[2] = in_stack_000001c0;
      unaff_x20[0x11] = lVar13;
      uVar11 = 1;
      unaff_x20[10] = lVar28;
      unaff_x20[9] = lVar25;
    }
    *(undefined1 *)(unaff_x19 + 0xb8) = uVar11;
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(4,0x40);
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x100714f70);
  (*pcVar12)();
}

