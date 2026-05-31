
void FUN_1007170d4(void)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  code *pcVar9;
  long lVar10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined1 *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
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
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  uVar3 = *(undefined4 *)(unaff_x28 + 2);
  *(undefined8 *)(unaff_x29 + -0x78) = in_stack_00000148;
  *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000140;
  if (sStack0000000000000130 == 2) {
    puVar11 = in_stack_00000138;
    if (((ulong)in_stack_00000138 & 3) == 1) {
      puVar11 = (undefined8 *)((long)in_stack_00000138 + -1);
      uVar12 = *puVar11;
      puVar13 = *(undefined8 **)((long)in_stack_00000138 + 7);
      pcVar9 = (code *)*puVar13;
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(uVar12);
      }
      if (puVar13[1] != 0) {
        _free(uVar12);
      }
      _free(puVar11);
    }
    sStack0000000000000130 = 2;
    in_stack_00000138 = puVar11;
  }
  else {
    *(undefined4 *)(unaff_x29 + -0x88) = uVar3;
    *(undefined2 *)(unaff_x29 + -0x84) = uStack0000000000000136;
    *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x78);
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x80);
  }
  puVar11 = (undefined8 *)_malloc(0x40);
  lVar1 = in_stack_000001e0;
  if (puVar11 != (undefined8 *)0x0) {
    uVar12 = *(undefined8 *)(unaff_x29 + -0xc0);
    uVar23 = *(undefined8 *)(unaff_x29 + -0xa8);
    uVar20 = *(undefined8 *)(unaff_x29 + -0xb0);
    puVar11[1] = *(undefined8 *)(unaff_x29 + -0xb8);
    *puVar11 = uVar12;
    puVar11[3] = uVar23;
    puVar11[2] = uVar20;
    *(short *)(puVar11 + 4) = sStack0000000000000130;
    *(undefined4 *)((long)puVar11 + 0x22) = *(undefined4 *)(unaff_x29 + -0x88);
    *(undefined2 *)((long)puVar11 + 0x26) = *(undefined2 *)(unaff_x29 + -0x84);
    puVar11[5] = in_stack_00000138;
    uVar12 = *(undefined8 *)(unaff_x29 + -0xa0);
    puVar11[7] = *(undefined8 *)(unaff_x29 + -0x98);
    puVar11[6] = uVar12;
    if (in_stack_000001e0 == in_stack_000001d0) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd9055ff48b871d5aE(&stack0x000001d0);
    }
    lVar6 = in_stack_000001d8;
    lVar5 = in_stack_000001d0;
    plVar2 = (long *)(in_stack_000001d8 + lVar1 * 0x20);
    *plVar2 = (long)puVar11;
    plVar2[1] = (long)&UNK_10b237e70;
    plVar2[3] = 0x62ff0564f7a9ef2e;
    plVar2[2] = -0x38a02eedc53115a4;
    lVar1 = lVar1 + 1;
    *(undefined1 *)(unaff_x19 + 0x182) = 0;
    lVar17 = *(long *)(unaff_x19 + 0x150);
    lVar14 = *(long *)(unaff_x19 + 0x148);
    lVar24 = *(long *)(unaff_x19 + 0x160);
    lVar21 = *(long *)(unaff_x19 + 0x158);
    lVar18 = *(long *)(unaff_x19 + 0x170);
    lVar15 = *(long *)(unaff_x19 + 0x168);
    lVar10 = *(long *)(unaff_x19 + 0x178);
    lVar19 = *(long *)(unaff_x19 + 0x130);
    lVar16 = *(long *)(unaff_x19 + 0x128);
    lVar25 = *(long *)(unaff_x19 + 0x140);
    lVar22 = *(long *)(unaff_x19 + 0x138);
    *(undefined1 *)(unaff_x19 + 0x183) = 0;
    bVar4 = *(byte *)(unaff_x19 + 0x7e8);
    in_stack_000001e0 = lVar1;
    if (((bVar4 != 0x20) && (5 < bVar4 - 0x1a)) && (0x18 < bVar4)) {
      lVar7 = **(long **)(unaff_x19 + 0x7f0);
      **(long **)(unaff_x19 + 0x7f0) = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x7f0);
      }
    }
    if ((*(byte *)(unaff_x19 + 0x800) != 0x1a) && (0x18 < *(byte *)(unaff_x19 + 0x800))) {
      lVar7 = **(long **)(unaff_x19 + 0x808);
      **(long **)(unaff_x19 + 0x808) = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x808);
      }
    }
    *(undefined1 *)(unaff_x19 + 0x181) = 0;
    *(undefined1 *)(unaff_x19 + 0x182) = 0;
    *unaff_x27 = 1;
    if (in_stack_000001b0 == 3) {
      *unaff_x20 = 3;
      uVar8 = 4;
    }
    else {
      FUN_100dd9824();
      if (*(char *)(unaff_x19 + 0x828) != '\0') {
        lVar7 = **(long **)(unaff_x19 + 0x830);
        **(long **)(unaff_x19 + 0x830) = lVar7 + -1;
        LORelease();
        if (lVar7 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE(unaff_x19 + 0x830);
        }
      }
      unaff_x20[0xc] = lVar17;
      unaff_x20[0xb] = lVar14;
      unaff_x20[0xe] = lVar24;
      unaff_x20[0xd] = lVar21;
      unaff_x20[0x10] = lVar18;
      unaff_x20[0xf] = lVar15;
      unaff_x20[4] = lVar5;
      unaff_x20[3] = in_stack_000001c8;
      unaff_x20[6] = lVar1;
      unaff_x20[5] = lVar6;
      unaff_x20[8] = lVar19;
      unaff_x20[7] = lVar16;
      *(undefined1 *)(unaff_x19 + 0xb9) = 0;
      *unaff_x20 = in_stack_000001b0;
      unaff_x20[1] = in_stack_000001b8;
      unaff_x20[2] = in_stack_000001c0;
      unaff_x20[0x11] = lVar10;
      uVar8 = 1;
      unaff_x20[10] = lVar25;
      unaff_x20[9] = lVar22;
    }
    *(undefined1 *)(unaff_x19 + 0xb8) = uVar8;
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(4,0x40);
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x100714f70);
  (*pcVar9)();
}

