
void FUN_100716bc0(void)

{
  long *plVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x26;
  long unaff_x28;
  long unaff_x29;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 *in_stack_00000008;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined4 in_stack_00000208;
  undefined4 uVar14;
  undefined2 in_stack_0000020c;
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
  
  *(char **)(unaff_x29 + -0x80) = s_Ofailed_to_receive_local_addr_of_108ac7598;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  uVar14 = *(undefined4 *)(unaff_x26 + 0x62);
  if (in_stack_00000290 == 2) {
    puVar5 = in_stack_00000298;
    if (((ulong)in_stack_00000298 & 3) == 1) {
      puVar5 = (undefined8 *)((long)in_stack_00000298 + -1);
      uVar6 = *puVar5;
      puVar7 = *(undefined8 **)((long)in_stack_00000298 + 7);
      pcVar3 = (code *)*puVar7;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar6);
      }
      if (puVar7[1] != 0) {
        _free(uVar6);
      }
      _free(puVar5);
    }
    in_stack_00000290 = 2;
    in_stack_00000298 = puVar5;
    in_stack_000002a0 = in_stack_000001f0;
    in_stack_000002a8 = in_stack_000001f8;
    uVar14 = in_stack_00000208;
    in_stack_00000296 = in_stack_0000020c;
  }
  puVar5 = (undefined8 *)_malloc(0x40);
  if (puVar5 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(4,0x40);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100714f70);
    (*pcVar3)();
  }
  puVar5[1] = in_stack_00000198;
  *puVar5 = in_stack_00000190;
  puVar5[3] = in_stack_000001a8;
  puVar5[2] = in_stack_000001a0;
  *(short *)(puVar5 + 4) = in_stack_00000290;
  *(undefined4 *)((long)puVar5 + 0x22) = uVar14;
  *(undefined2 *)((long)puVar5 + 0x26) = in_stack_00000296;
  puVar5[5] = in_stack_00000298;
  puVar5[7] = in_stack_000002a8;
  puVar5[6] = in_stack_000002a0;
  if (in_stack_00000260 == in_stack_00000250) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd9055ff48b871d5aE(&stack0x00000250);
  }
  plVar1 = (long *)(in_stack_00000258 + in_stack_00000260 * 0x20);
  *plVar1 = (long)puVar5;
  plVar1[1] = (long)&UNK_10b237e70;
  plVar1[3] = 0x62ff0564f7a9ef2e;
  plVar1[2] = -0x38a02eedc53115a4;
  *(undefined1 *)(unaff_x19 + 0x182) = 0;
  uVar6 = *(undefined8 *)(unaff_x19 + 0x148);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x160);
  uVar10 = *(undefined8 *)(unaff_x19 + 0x158);
  *(undefined8 *)(unaff_x28 + 0x60) = *(undefined8 *)(unaff_x19 + 0x150);
  *(undefined8 *)(unaff_x28 + 0x58) = uVar6;
  *(undefined8 *)(unaff_x28 + 0x70) = uVar12;
  *(undefined8 *)(unaff_x28 + 0x68) = uVar10;
  uVar6 = *(undefined8 *)(unaff_x19 + 0x168);
  *(undefined8 *)(unaff_x28 + 0x80) = *(undefined8 *)(unaff_x19 + 0x170);
  *(undefined8 *)(unaff_x28 + 0x78) = uVar6;
  lVar4 = *(long *)(unaff_x19 + 0x178);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x128);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x140);
  uVar10 = *(undefined8 *)(unaff_x19 + 0x138);
  *(undefined8 *)(unaff_x28 + 0x40) = *(undefined8 *)(unaff_x19 + 0x130);
  *(undefined8 *)(unaff_x28 + 0x38) = uVar6;
  *(undefined8 *)(unaff_x28 + 0x50) = uVar12;
  *(undefined8 *)(unaff_x28 + 0x48) = uVar10;
  *(undefined1 *)(unaff_x19 + 0x184) = 0;
  *(undefined1 *)(unaff_x19 + 0x181) = 0;
  if ((*(byte *)(unaff_x19 + 0x182) & 1) != 0) {
    func_0x000100dfd554(unaff_x19 + 0x128);
  }
  *(undefined1 *)(unaff_x19 + 0x182) = 0;
  lVar9 = *(long *)(unaff_x28 + 0xf0);
  lVar8 = *(long *)(unaff_x28 + 0xe8);
  lVar13 = *(long *)(unaff_x28 + 0x100);
  lVar11 = *(long *)(unaff_x28 + 0xf8);
  *in_stack_00000008 = 1;
  if (in_stack_00000230 == 3) {
    uVar2 = 3;
    *unaff_x20 = 3;
  }
  else {
    FUN_100d92020();
    unaff_x20[0xc] = lVar9;
    unaff_x20[0xb] = lVar8;
    unaff_x20[0xe] = lVar13;
    unaff_x20[0xd] = lVar11;
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
    unaff_x20[0x11] = lVar4;
    uVar2 = 1;
    unaff_x20[10] = in_stack_00000380;
    unaff_x20[9] = in_stack_00000378;
  }
  *(undefined1 *)(unaff_x19 + 0xb8) = uVar2;
  return;
}

