
void FUN_1007173bc(void)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  code *pcVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined1 *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
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
  char in_stack_00000470;
  long *in_stack_00000478;
  undefined8 in_stack_00000500;
  undefined8 in_stack_00000508;
  undefined8 in_stack_00000510;
  undefined8 in_stack_00000518;
  
  *(undefined1 **)(unaff_x29 + -0x70) = &stack0x00000458;
  *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  uVar3 = *(undefined4 *)(unaff_x28 + 2);
  *(undefined8 *)(unaff_x29 + -0x78) = in_stack_00000148;
  *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000140;
  if (sStack0000000000000130 == 2) {
    puVar10 = in_stack_00000138;
    if (((ulong)in_stack_00000138 & 3) == 1) {
      puVar10 = (undefined8 *)((long)in_stack_00000138 + -1);
      uVar11 = *puVar10;
      puVar12 = *(undefined8 **)((long)in_stack_00000138 + 7);
      pcVar8 = (code *)*puVar12;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar11);
      }
      if (puVar12[1] != 0) {
        _free(uVar11);
      }
      _free(puVar10);
    }
    sStack0000000000000130 = 2;
    in_stack_00000138 = puVar10;
  }
  else {
    *(undefined4 *)(unaff_x29 + -200) = uVar3;
    *(undefined2 *)(unaff_x29 + -0xc4) = uStack0000000000000136;
    *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(unaff_x29 + -0x78);
    *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0x80);
  }
  puVar10 = (undefined8 *)_malloc(0x40);
  lVar1 = in_stack_000001e0;
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[1] = in_stack_00000508;
    *puVar10 = in_stack_00000500;
    puVar10[3] = in_stack_00000518;
    puVar10[2] = in_stack_00000510;
    *(short *)(puVar10 + 4) = sStack0000000000000130;
    *(undefined4 *)((long)puVar10 + 0x22) = *(undefined4 *)(unaff_x29 + -200);
    *(undefined2 *)((long)puVar10 + 0x26) = *(undefined2 *)(unaff_x29 + -0xc4);
    puVar10[5] = in_stack_00000138;
    uVar11 = *(undefined8 *)(unaff_x29 + -0xe0);
    puVar10[7] = *(undefined8 *)(unaff_x29 + -0xd8);
    puVar10[6] = uVar11;
    if (in_stack_000001e0 == in_stack_000001d0) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd9055ff48b871d5aE(&stack0x000001d0);
    }
    lVar5 = in_stack_000001d8;
    lVar4 = in_stack_000001d0;
    plVar2 = (long *)(in_stack_000001d8 + lVar1 * 0x20);
    *plVar2 = (long)puVar10;
    plVar2[1] = (long)&UNK_10b237e70;
    plVar2[3] = 0x62ff0564f7a9ef2e;
    plVar2[2] = -0x38a02eedc53115a4;
    lVar1 = lVar1 + 1;
    *(undefined1 *)(unaff_x19 + 0x182) = 0;
    lVar16 = *(long *)(unaff_x19 + 0x150);
    lVar13 = *(long *)(unaff_x19 + 0x148);
    lVar21 = *(long *)(unaff_x19 + 0x160);
    lVar19 = *(long *)(unaff_x19 + 0x158);
    lVar17 = *(long *)(unaff_x19 + 0x170);
    lVar14 = *(long *)(unaff_x19 + 0x168);
    lVar9 = *(long *)(unaff_x19 + 0x178);
    lVar18 = *(long *)(unaff_x19 + 0x130);
    lVar15 = *(long *)(unaff_x19 + 0x128);
    lVar22 = *(long *)(unaff_x19 + 0x140);
    lVar20 = *(long *)(unaff_x19 + 0x138);
    *(undefined1 *)(unaff_x19 + 0x184) = 0;
    in_stack_000001e0 = lVar1;
    if (((*(byte *)(unaff_x19 + 0x181) & 1) != 0) && (in_stack_00000470 != '\0')) {
      lVar6 = *in_stack_00000478;
      *in_stack_00000478 = lVar6 + -1;
      LORelease();
      if (lVar6 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE(&stack0x00000478);
      }
    }
    *(undefined1 *)(unaff_x19 + 0x181) = 0;
    if ((*(byte *)(unaff_x19 + 0x182) & 1) != 0) {
      func_0x000100dfd554(unaff_x19 + 0x128);
    }
    *(undefined1 *)(unaff_x19 + 0x182) = 0;
    *unaff_x27 = 1;
    if (in_stack_000001b0 == 3) {
      *unaff_x20 = 3;
      uVar7 = 4;
    }
    else {
      FUN_100dd9824();
      if (*(char *)(unaff_x19 + 0x828) != '\0') {
        lVar6 = **(long **)(unaff_x19 + 0x830);
        **(long **)(unaff_x19 + 0x830) = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE(unaff_x19 + 0x830);
        }
      }
      unaff_x20[0xc] = lVar16;
      unaff_x20[0xb] = lVar13;
      unaff_x20[0xe] = lVar21;
      unaff_x20[0xd] = lVar19;
      unaff_x20[0x10] = lVar17;
      unaff_x20[0xf] = lVar14;
      unaff_x20[4] = lVar4;
      unaff_x20[3] = in_stack_000001c8;
      unaff_x20[6] = lVar1;
      unaff_x20[5] = lVar5;
      unaff_x20[8] = lVar18;
      unaff_x20[7] = lVar15;
      *(undefined1 *)(unaff_x19 + 0xb9) = 0;
      *unaff_x20 = in_stack_000001b0;
      unaff_x20[1] = in_stack_000001b8;
      unaff_x20[2] = in_stack_000001c0;
      unaff_x20[0x11] = lVar9;
      uVar7 = 1;
      unaff_x20[10] = lVar22;
      unaff_x20[9] = lVar20;
    }
    *(undefined1 *)(unaff_x19 + 0xb8) = uVar7;
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(4,0x40);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x100714f70);
  (*pcVar8)();
}

