
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100715e70(undefined8 param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined1 uVar7;
  code *pcVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar10;
  undefined8 *unaff_x23;
  undefined8 uVar11;
  undefined8 *puVar12;
  long unaff_x26;
  long unaff_x28;
  long unaff_x29;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined1 *in_stack_00000008;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined4 uStack0000000000000188;
  undefined2 uStack000000000000018c;
  long in_stack_00000230;
  long in_stack_00000238;
  long in_stack_00000240;
  long in_stack_00000248;
  long in_stack_00000250;
  long in_stack_00000258;
  long in_stack_00000260;
  short in_stack_00000290;
  undefined2 in_stack_00000296;
  undefined8 *in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  long in_stack_00000368;
  long in_stack_00000370;
  long in_stack_00000378;
  long in_stack_00000380;
  long in_stack_000003a8;
  long in_stack_000003b0;
  
  *(char **)(unaff_x29 + -0x70) = s_Afailed_to_receive_local_addr_of_108ac7554;
  *(undefined1 **)(unaff_x29 + -0x68) = &stack0x00000458;
  *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x70;
  *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000330);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar11 = *unaff_x23;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar6 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000210);
    if (iVar6 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar11,puVar3,puVar2,&stack0x00000210,&stack0x00000330);
    }
  }
  uVar11 = in_stack_000002a0;
  uVar15 = in_stack_000002a8;
  uVar4 = *(undefined4 *)(unaff_x26 + 0x62);
  uVar5 = in_stack_00000296;
  if (in_stack_00000290 == 2) {
    puVar10 = in_stack_00000298;
    if (((ulong)in_stack_00000298 & 3) == 1) {
      puVar10 = (undefined8 *)((long)in_stack_00000298 + -1);
      uVar11 = *puVar10;
      puVar12 = *(undefined8 **)((long)in_stack_00000298 + 7);
      pcVar8 = (code *)*puVar12;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar11);
      }
      if (puVar12[1] != 0) {
        _free(uVar11);
      }
      _free(puVar10);
    }
    in_stack_00000290 = 2;
    in_stack_00000298 = puVar10;
    uVar11 = in_stack_00000170;
    uVar15 = in_stack_00000178;
    uVar4 = uStack0000000000000188;
    uVar5 = uStack000000000000018c;
  }
  uStack000000000000018c = uVar5;
  uStack0000000000000188 = uVar4;
  in_stack_00000178 = uVar15;
  in_stack_00000170 = uVar11;
  puVar10 = (undefined8 *)_malloc(0x40);
  if (puVar10 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(4,0x40);
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100714f70);
    (*pcVar8)();
  }
  puVar10[1] = in_stack_00000118;
  *puVar10 = in_stack_00000110;
  puVar10[3] = in_stack_00000128;
  puVar10[2] = in_stack_00000120;
  *(short *)(puVar10 + 4) = in_stack_00000290;
  *(undefined4 *)((long)puVar10 + 0x22) = uStack0000000000000188;
  *(undefined2 *)((long)puVar10 + 0x26) = uStack000000000000018c;
  puVar10[5] = in_stack_00000298;
  puVar10[7] = in_stack_00000178;
  puVar10[6] = in_stack_00000170;
  if (in_stack_00000260 == in_stack_00000250) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd9055ff48b871d5aE(&stack0x00000250);
  }
  plVar1 = (long *)(in_stack_00000258 + in_stack_00000260 * 0x20);
  *plVar1 = (long)puVar10;
  plVar1[1] = (long)&UNK_10b237e70;
  plVar1[3] = 0x62ff0564f7a9ef2e;
  plVar1[2] = -0x38a02eedc53115a4;
  *(undefined1 *)(unaff_x19 + 0x182) = 0;
  uVar11 = *(undefined8 *)(unaff_x19 + 0x148);
  uVar17 = *(undefined8 *)(unaff_x19 + 0x160);
  uVar15 = *(undefined8 *)(unaff_x19 + 0x158);
  *(undefined8 *)(unaff_x28 + 0x60) = *(undefined8 *)(unaff_x19 + 0x150);
  *(undefined8 *)(unaff_x28 + 0x58) = uVar11;
  *(undefined8 *)(unaff_x28 + 0x70) = uVar17;
  *(undefined8 *)(unaff_x28 + 0x68) = uVar15;
  uVar11 = *(undefined8 *)(unaff_x19 + 0x168);
  *(undefined8 *)(unaff_x28 + 0x80) = *(undefined8 *)(unaff_x19 + 0x170);
  *(undefined8 *)(unaff_x28 + 0x78) = uVar11;
  lVar9 = *(long *)(unaff_x19 + 0x178);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x128);
  uVar17 = *(undefined8 *)(unaff_x19 + 0x140);
  uVar15 = *(undefined8 *)(unaff_x19 + 0x138);
  *(undefined8 *)(unaff_x28 + 0x40) = *(undefined8 *)(unaff_x19 + 0x130);
  *(undefined8 *)(unaff_x28 + 0x38) = uVar11;
  *(undefined8 *)(unaff_x28 + 0x50) = uVar17;
  *(undefined8 *)(unaff_x28 + 0x48) = uVar15;
  *(undefined1 *)(unaff_x19 + 0x181) = 0;
  if ((*(byte *)(unaff_x19 + 0x182) & 1) != 0) {
    func_0x000100dfd554(unaff_x19 + 0x128);
  }
  *(undefined1 *)(unaff_x19 + 0x182) = 0;
  lVar14 = *(long *)(unaff_x28 + 0xf0);
  lVar13 = *(long *)(unaff_x28 + 0xe8);
  lVar18 = *(long *)(unaff_x28 + 0x100);
  lVar16 = *(long *)(unaff_x28 + 0xf8);
  *in_stack_00000008 = 1;
  if (in_stack_00000230 == 3) {
    uVar7 = 3;
    *unaff_x20 = 3;
  }
  else {
    FUN_100d92020();
    unaff_x20[0xc] = lVar14;
    unaff_x20[0xb] = lVar13;
    unaff_x20[0xe] = lVar18;
    unaff_x20[0xd] = lVar16;
    unaff_x20[0x10] = in_stack_000003b0;
    unaff_x20[0xf] = in_stack_000003a8;
    unaff_x20[4] = in_stack_00000250;
    unaff_x20[3] = in_stack_00000248;
    unaff_x20[6] = in_stack_00000260 + 1;
    unaff_x20[5] = in_stack_00000258;
    unaff_x20[8] = in_stack_00000370;
    unaff_x20[7] = in_stack_00000368;
    *(undefined1 *)(unaff_x19 + 0xb9) = 0;
    *unaff_x20 = in_stack_00000230;
    unaff_x20[1] = in_stack_00000238;
    unaff_x20[2] = in_stack_00000240;
    unaff_x20[0x11] = lVar9;
    uVar7 = 1;
    unaff_x20[10] = in_stack_00000380;
    unaff_x20[9] = in_stack_00000378;
  }
  *(undefined1 *)(unaff_x19 + 0xb8) = uVar7;
  return;
}

