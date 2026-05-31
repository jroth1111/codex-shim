
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100715a84(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined1 uVar9;
  code *pcVar10;
  long lVar11;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar12;
  undefined8 *unaff_x23;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined1 *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
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
  undefined4 uVar25;
  undefined2 in_stack_000004fc;
  
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000330);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar13 = *unaff_x23;
    puVar3 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_10b3c24c8;
    }
    puVar4 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_109adfc03;
    }
    iVar8 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000230);
    if (iVar8 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar13,puVar4,puVar3,&stack0x00000230,&stack0x00000330);
    }
  }
  uVar25 = *(undefined4 *)(unaff_x28 + 2);
  *(undefined8 *)(unaff_x29 + -0x68) = in_stack_00000148;
  *(undefined8 *)(unaff_x29 + -0x70) = in_stack_00000140;
  if (sStack0000000000000130 == 2) {
    puVar12 = in_stack_00000138;
    if (((ulong)in_stack_00000138 & 3) == 1) {
      puVar12 = (undefined8 *)((long)in_stack_00000138 + -1);
      uVar13 = *puVar12;
      puVar14 = *(undefined8 **)((long)in_stack_00000138 + 7);
      pcVar10 = (code *)*puVar14;
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(uVar13);
      }
      if (puVar14[1] != 0) {
        _free(uVar13);
      }
      _free(puVar12);
    }
    sStack0000000000000130 = 2;
    in_stack_00000138 = puVar12;
    uVar25 = in_stack_000004f8;
  }
  else {
    in_stack_000004e8 = *(undefined8 *)(unaff_x29 + -0x68);
    in_stack_000004e0 = *(undefined8 *)(unaff_x29 + -0x70);
    in_stack_000004fc = uStack0000000000000136;
  }
  puVar12 = (undefined8 *)_malloc(0x40);
  lVar1 = in_stack_000001e0;
  if (puVar12 != (undefined8 *)0x0) {
    puVar12[1] = in_stack_00000488;
    *puVar12 = in_stack_00000480;
    puVar12[3] = in_stack_00000498;
    puVar12[2] = in_stack_00000490;
    *(short *)(puVar12 + 4) = sStack0000000000000130;
    *(undefined4 *)((long)puVar12 + 0x22) = uVar25;
    *(undefined2 *)((long)puVar12 + 0x26) = in_stack_000004fc;
    puVar12[5] = in_stack_00000138;
    puVar12[7] = in_stack_000004e8;
    puVar12[6] = in_stack_000004e0;
    if (in_stack_000001e0 == in_stack_000001d0) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd9055ff48b871d5aE(&stack0x000001d0);
    }
    lVar6 = in_stack_000001d8;
    lVar5 = in_stack_000001d0;
    plVar2 = (long *)(in_stack_000001d8 + lVar1 * 0x20);
    *plVar2 = (long)puVar12;
    plVar2[1] = (long)&UNK_10b237e70;
    plVar2[3] = 0x62ff0564f7a9ef2e;
    plVar2[2] = -0x38a02eedc53115a4;
    lVar1 = lVar1 + 1;
    *(undefined1 *)(unaff_x19 + 0x182) = 0;
    lVar18 = *(long *)(unaff_x19 + 0x150);
    lVar15 = *(long *)(unaff_x19 + 0x148);
    lVar23 = *(long *)(unaff_x19 + 0x160);
    lVar21 = *(long *)(unaff_x19 + 0x158);
    lVar19 = *(long *)(unaff_x19 + 0x170);
    lVar16 = *(long *)(unaff_x19 + 0x168);
    lVar11 = *(long *)(unaff_x19 + 0x178);
    lVar20 = *(long *)(unaff_x19 + 0x130);
    lVar17 = *(long *)(unaff_x19 + 0x128);
    lVar24 = *(long *)(unaff_x19 + 0x140);
    lVar22 = *(long *)(unaff_x19 + 0x138);
    in_stack_000001e0 = lVar1;
    if (((*(byte *)(unaff_x19 + 0x181) & 1) != 0) && (in_stack_00000470 != '\0')) {
      lVar7 = *in_stack_00000478;
      *in_stack_00000478 = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
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
      uVar9 = 4;
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
      unaff_x20[0xc] = lVar18;
      unaff_x20[0xb] = lVar15;
      unaff_x20[0xe] = lVar23;
      unaff_x20[0xd] = lVar21;
      unaff_x20[0x10] = lVar19;
      unaff_x20[0xf] = lVar16;
      unaff_x20[4] = lVar5;
      unaff_x20[3] = in_stack_000001c8;
      unaff_x20[6] = lVar1;
      unaff_x20[5] = lVar6;
      unaff_x20[8] = lVar20;
      unaff_x20[7] = lVar17;
      *(undefined1 *)(unaff_x19 + 0xb9) = 0;
      *unaff_x20 = in_stack_000001b0;
      unaff_x20[1] = in_stack_000001b8;
      unaff_x20[2] = in_stack_000001c0;
      unaff_x20[0x11] = lVar11;
      uVar9 = 1;
      unaff_x20[10] = lVar24;
      unaff_x20[9] = lVar22;
    }
    *(undefined1 *)(unaff_x19 + 0xb8) = uVar9;
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(4,0x40);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x100714f70);
  (*pcVar10)();
}

