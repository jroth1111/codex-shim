
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100716004(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined1 uVar10;
  code *pcVar11;
  long lVar12;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar13;
  undefined8 *unaff_x23;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined1 *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
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
  char in_stack_00000470;
  long *in_stack_00000478;
  undefined8 in_stack_00000500;
  undefined8 in_stack_00000508;
  undefined8 in_stack_00000510;
  undefined8 in_stack_00000518;
  
  *(undefined1 **)(unaff_x29 + -0x70) = &stack0x00000458;
  *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000330);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar14 = *unaff_x23;
    puVar3 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_10b3c24c8;
    }
    puVar4 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_109adfc03;
    }
    iVar9 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000270);
    if (iVar9 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar14,puVar4,puVar3,&stack0x00000270,&stack0x00000330);
    }
  }
  uVar5 = *(undefined4 *)(unaff_x28 + 2);
  *(undefined8 *)(unaff_x29 + -0x78) = in_stack_00000148;
  *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000140;
  if (sStack0000000000000130 == 2) {
    puVar13 = in_stack_00000138;
    if (((ulong)in_stack_00000138 & 3) == 1) {
      puVar13 = (undefined8 *)((long)in_stack_00000138 + -1);
      uVar14 = *puVar13;
      puVar15 = *(undefined8 **)((long)in_stack_00000138 + 7);
      pcVar11 = (code *)*puVar15;
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(uVar14);
      }
      if (puVar15[1] != 0) {
        _free(uVar14);
      }
      _free(puVar13);
    }
    sStack0000000000000130 = 2;
    in_stack_00000138 = puVar13;
  }
  else {
    *(undefined4 *)(unaff_x29 + -200) = uVar5;
    *(undefined2 *)(unaff_x29 + -0xc4) = uStack0000000000000136;
    *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(unaff_x29 + -0x78);
    *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0x80);
  }
  puVar13 = (undefined8 *)_malloc(0x40);
  lVar1 = in_stack_000001e0;
  if (puVar13 != (undefined8 *)0x0) {
    puVar13[1] = in_stack_00000508;
    *puVar13 = in_stack_00000500;
    puVar13[3] = in_stack_00000518;
    puVar13[2] = in_stack_00000510;
    *(short *)(puVar13 + 4) = sStack0000000000000130;
    *(undefined4 *)((long)puVar13 + 0x22) = *(undefined4 *)(unaff_x29 + -200);
    *(undefined2 *)((long)puVar13 + 0x26) = *(undefined2 *)(unaff_x29 + -0xc4);
    puVar13[5] = in_stack_00000138;
    uVar14 = *(undefined8 *)(unaff_x29 + -0xe0);
    puVar13[7] = *(undefined8 *)(unaff_x29 + -0xd8);
    puVar13[6] = uVar14;
    if (in_stack_000001e0 == in_stack_000001d0) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd9055ff48b871d5aE(&stack0x000001d0);
    }
    lVar7 = in_stack_000001d8;
    lVar6 = in_stack_000001d0;
    plVar2 = (long *)(in_stack_000001d8 + lVar1 * 0x20);
    *plVar2 = (long)puVar13;
    plVar2[1] = (long)&UNK_10b237e70;
    plVar2[3] = 0x62ff0564f7a9ef2e;
    plVar2[2] = -0x38a02eedc53115a4;
    lVar1 = lVar1 + 1;
    *(undefined1 *)(unaff_x19 + 0x182) = 0;
    lVar19 = *(long *)(unaff_x19 + 0x150);
    lVar16 = *(long *)(unaff_x19 + 0x148);
    lVar24 = *(long *)(unaff_x19 + 0x160);
    lVar22 = *(long *)(unaff_x19 + 0x158);
    lVar20 = *(long *)(unaff_x19 + 0x170);
    lVar17 = *(long *)(unaff_x19 + 0x168);
    lVar12 = *(long *)(unaff_x19 + 0x178);
    lVar21 = *(long *)(unaff_x19 + 0x130);
    lVar18 = *(long *)(unaff_x19 + 0x128);
    lVar25 = *(long *)(unaff_x19 + 0x140);
    lVar23 = *(long *)(unaff_x19 + 0x138);
    *(undefined1 *)(unaff_x19 + 0x184) = 0;
    in_stack_000001e0 = lVar1;
    if (((*(byte *)(unaff_x19 + 0x181) & 1) != 0) && (in_stack_00000470 != '\0')) {
      lVar8 = *in_stack_00000478;
      *in_stack_00000478 = lVar8 + -1;
      LORelease();
      if (lVar8 == 1) {
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
      uVar10 = 4;
    }
    else {
      FUN_100dd9824();
      if (*(char *)(unaff_x19 + 0x828) != '\0') {
        lVar8 = **(long **)(unaff_x19 + 0x830);
        **(long **)(unaff_x19 + 0x830) = lVar8 + -1;
        LORelease();
        if (lVar8 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE(unaff_x19 + 0x830);
        }
      }
      unaff_x20[0xc] = lVar19;
      unaff_x20[0xb] = lVar16;
      unaff_x20[0xe] = lVar24;
      unaff_x20[0xd] = lVar22;
      unaff_x20[0x10] = lVar20;
      unaff_x20[0xf] = lVar17;
      unaff_x20[4] = lVar6;
      unaff_x20[3] = in_stack_000001c8;
      unaff_x20[6] = lVar1;
      unaff_x20[5] = lVar7;
      unaff_x20[8] = lVar21;
      unaff_x20[7] = lVar18;
      *(undefined1 *)(unaff_x19 + 0xb9) = 0;
      *unaff_x20 = in_stack_000001b0;
      unaff_x20[1] = in_stack_000001b8;
      unaff_x20[2] = in_stack_000001c0;
      unaff_x20[0x11] = lVar12;
      uVar10 = 1;
      unaff_x20[10] = lVar25;
      unaff_x20[9] = lVar23;
    }
    *(undefined1 *)(unaff_x19 + 0xb8) = uVar10;
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(4,0x40);
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x100714f70);
  (*pcVar11)();
}

