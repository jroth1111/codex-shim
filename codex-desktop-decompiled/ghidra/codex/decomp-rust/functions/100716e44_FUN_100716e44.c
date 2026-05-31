
void FUN_100716e44(void)

{
  long *plVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long unaff_x26;
  long unaff_x28;
  long unaff_x29;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
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
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  uVar8 = in_stack_000002a0;
  uVar12 = in_stack_000002a8;
  uVar2 = *(undefined4 *)(unaff_x26 + 0x62);
  uVar3 = in_stack_00000296;
  if (in_stack_00000290 == 2) {
    puVar7 = in_stack_00000298;
    if (((ulong)in_stack_00000298 & 3) == 1) {
      puVar7 = (undefined8 *)((long)in_stack_00000298 + -1);
      uVar8 = *puVar7;
      puVar9 = *(undefined8 **)((long)in_stack_00000298 + 7);
      pcVar5 = (code *)*puVar9;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar8);
      }
      if (puVar9[1] != 0) {
        _free(uVar8);
      }
      _free(puVar7);
    }
    in_stack_00000290 = 2;
    in_stack_00000298 = puVar7;
    uVar8 = in_stack_00000170;
    uVar12 = in_stack_00000178;
    uVar2 = uStack0000000000000188;
    uVar3 = uStack000000000000018c;
  }
  uStack000000000000018c = uVar3;
  uStack0000000000000188 = uVar2;
  in_stack_00000178 = uVar12;
  in_stack_00000170 = uVar8;
  puVar7 = (undefined8 *)_malloc(0x40);
  if (puVar7 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(4,0x40);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100714f70);
    (*pcVar5)();
  }
  puVar7[1] = in_stack_00000118;
  *puVar7 = in_stack_00000110;
  puVar7[3] = in_stack_00000128;
  puVar7[2] = in_stack_00000120;
  *(short *)(puVar7 + 4) = in_stack_00000290;
  *(undefined4 *)((long)puVar7 + 0x22) = uStack0000000000000188;
  *(undefined2 *)((long)puVar7 + 0x26) = uStack000000000000018c;
  puVar7[5] = in_stack_00000298;
  puVar7[7] = in_stack_00000178;
  puVar7[6] = in_stack_00000170;
  if (in_stack_00000260 == in_stack_00000250) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd9055ff48b871d5aE(&stack0x00000250);
  }
  plVar1 = (long *)(in_stack_00000258 + in_stack_00000260 * 0x20);
  *plVar1 = (long)puVar7;
  plVar1[1] = (long)&UNK_10b237e70;
  plVar1[3] = 0x62ff0564f7a9ef2e;
  plVar1[2] = -0x38a02eedc53115a4;
  *(undefined1 *)(unaff_x19 + 0x182) = 0;
  uVar8 = *(undefined8 *)(unaff_x19 + 0x148);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x160);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x158);
  *(undefined8 *)(unaff_x28 + 0x60) = *(undefined8 *)(unaff_x19 + 0x150);
  *(undefined8 *)(unaff_x28 + 0x58) = uVar8;
  *(undefined8 *)(unaff_x28 + 0x70) = uVar14;
  *(undefined8 *)(unaff_x28 + 0x68) = uVar12;
  uVar8 = *(undefined8 *)(unaff_x19 + 0x168);
  *(undefined8 *)(unaff_x28 + 0x80) = *(undefined8 *)(unaff_x19 + 0x170);
  *(undefined8 *)(unaff_x28 + 0x78) = uVar8;
  lVar6 = *(long *)(unaff_x19 + 0x178);
  uVar8 = *(undefined8 *)(unaff_x19 + 0x128);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x140);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x138);
  *(undefined8 *)(unaff_x28 + 0x40) = *(undefined8 *)(unaff_x19 + 0x130);
  *(undefined8 *)(unaff_x28 + 0x38) = uVar8;
  *(undefined8 *)(unaff_x28 + 0x50) = uVar14;
  *(undefined8 *)(unaff_x28 + 0x48) = uVar12;
  *(undefined1 *)(unaff_x19 + 0x181) = 0;
  if ((*(byte *)(unaff_x19 + 0x182) & 1) != 0) {
    func_0x000100dfd554(unaff_x19 + 0x128);
  }
  *(undefined1 *)(unaff_x19 + 0x182) = 0;
  lVar11 = *(long *)(unaff_x28 + 0xf0);
  lVar10 = *(long *)(unaff_x28 + 0xe8);
  lVar15 = *(long *)(unaff_x28 + 0x100);
  lVar13 = *(long *)(unaff_x28 + 0xf8);
  *in_stack_00000008 = 1;
  if (in_stack_00000230 == 3) {
    uVar4 = 3;
    *unaff_x20 = 3;
  }
  else {
    FUN_100d92020();
    unaff_x20[0xc] = lVar11;
    unaff_x20[0xb] = lVar10;
    unaff_x20[0xe] = lVar15;
    unaff_x20[0xd] = lVar13;
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
    unaff_x20[0x11] = lVar6;
    uVar4 = 1;
    unaff_x20[10] = in_stack_00000380;
    unaff_x20[9] = in_stack_00000378;
  }
  *(undefined1 *)(unaff_x19 + 0xb8) = uVar4;
  return;
}

