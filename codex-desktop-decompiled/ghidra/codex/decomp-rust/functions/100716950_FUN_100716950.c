
void FUN_100716950(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  code *pcVar7;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
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
  undefined8 in_stack_00000480;
  undefined8 in_stack_00000488;
  undefined8 in_stack_00000490;
  undefined8 in_stack_00000498;
  undefined8 in_stack_000004e0;
  undefined8 in_stack_000004e8;
  undefined4 in_stack_000004f8;
  undefined4 uVar22;
  undefined2 in_stack_000004fc;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  uVar22 = *(undefined4 *)(unaff_x28 + 2);
  *(undefined8 *)(unaff_x29 + -0x68) = in_stack_00000148;
  *(undefined8 *)(unaff_x29 + -0x70) = in_stack_00000140;
  if (sStack0000000000000130 == 2) {
    puVar9 = in_stack_00000138;
    if (((ulong)in_stack_00000138 & 3) == 1) {
      puVar9 = (undefined8 *)((long)in_stack_00000138 + -1);
      uVar10 = *puVar9;
      puVar11 = *(undefined8 **)((long)in_stack_00000138 + 7);
      pcVar7 = (code *)*puVar11;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar10);
      }
      if (puVar11[1] != 0) {
        _free(uVar10);
      }
      _free(puVar9);
    }
    sStack0000000000000130 = 2;
    in_stack_00000138 = puVar9;
    uVar22 = in_stack_000004f8;
  }
  else {
    in_stack_000004e8 = *(undefined8 *)(unaff_x29 + -0x68);
    in_stack_000004e0 = *(undefined8 *)(unaff_x29 + -0x70);
    in_stack_000004fc = uStack0000000000000136;
  }
  puVar9 = (undefined8 *)_malloc(0x40);
  lVar1 = in_stack_000001e0;
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[1] = in_stack_00000488;
    *puVar9 = in_stack_00000480;
    puVar9[3] = in_stack_00000498;
    puVar9[2] = in_stack_00000490;
    *(short *)(puVar9 + 4) = sStack0000000000000130;
    *(undefined4 *)((long)puVar9 + 0x22) = uVar22;
    *(undefined2 *)((long)puVar9 + 0x26) = in_stack_000004fc;
    puVar9[5] = in_stack_00000138;
    puVar9[7] = in_stack_000004e8;
    puVar9[6] = in_stack_000004e0;
    if (in_stack_000001e0 == in_stack_000001d0) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd9055ff48b871d5aE(&stack0x000001d0);
    }
    lVar4 = in_stack_000001d8;
    lVar3 = in_stack_000001d0;
    plVar2 = (long *)(in_stack_000001d8 + lVar1 * 0x20);
    *plVar2 = (long)puVar9;
    plVar2[1] = (long)&UNK_10b237e70;
    plVar2[3] = 0x62ff0564f7a9ef2e;
    plVar2[2] = -0x38a02eedc53115a4;
    lVar1 = lVar1 + 1;
    *(undefined1 *)(unaff_x19 + 0x182) = 0;
    lVar15 = *(long *)(unaff_x19 + 0x150);
    lVar12 = *(long *)(unaff_x19 + 0x148);
    lVar20 = *(long *)(unaff_x19 + 0x160);
    lVar18 = *(long *)(unaff_x19 + 0x158);
    lVar16 = *(long *)(unaff_x19 + 0x170);
    lVar13 = *(long *)(unaff_x19 + 0x168);
    lVar8 = *(long *)(unaff_x19 + 0x178);
    lVar17 = *(long *)(unaff_x19 + 0x130);
    lVar14 = *(long *)(unaff_x19 + 0x128);
    lVar21 = *(long *)(unaff_x19 + 0x140);
    lVar19 = *(long *)(unaff_x19 + 0x138);
    in_stack_000001e0 = lVar1;
    if (((*(byte *)(unaff_x19 + 0x181) & 1) != 0) && (in_stack_00000470 != '\0')) {
      lVar5 = *in_stack_00000478;
      *in_stack_00000478 = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
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
      uVar6 = 4;
    }
    else {
      FUN_100dd9824();
      if (*(char *)(unaff_x19 + 0x828) != '\0') {
        lVar5 = **(long **)(unaff_x19 + 0x830);
        **(long **)(unaff_x19 + 0x830) = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE(unaff_x19 + 0x830);
        }
      }
      unaff_x20[0xc] = lVar15;
      unaff_x20[0xb] = lVar12;
      unaff_x20[0xe] = lVar20;
      unaff_x20[0xd] = lVar18;
      unaff_x20[0x10] = lVar16;
      unaff_x20[0xf] = lVar13;
      unaff_x20[4] = lVar3;
      unaff_x20[3] = in_stack_000001c8;
      unaff_x20[6] = lVar1;
      unaff_x20[5] = lVar4;
      unaff_x20[8] = lVar17;
      unaff_x20[7] = lVar14;
      *(undefined1 *)(unaff_x19 + 0xb9) = 0;
      *unaff_x20 = in_stack_000001b0;
      unaff_x20[1] = in_stack_000001b8;
      unaff_x20[2] = in_stack_000001c0;
      unaff_x20[0x11] = lVar8;
      uVar6 = 1;
      unaff_x20[10] = lVar21;
      unaff_x20[9] = lVar19;
    }
    *(undefined1 *)(unaff_x19 + 0xb8) = uVar6;
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(4,0x40);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100714f70);
  (*pcVar7)();
}

