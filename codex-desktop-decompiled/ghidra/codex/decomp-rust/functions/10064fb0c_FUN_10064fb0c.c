
/* WARNING: Removing unreachable block (ram,0x00010064ff18) */
/* WARNING: Removing unreachable block (ram,0x00010064ff78) */
/* WARNING: Removing unreachable block (ram,0x00010064ff1c) */
/* WARNING: Removing unreachable block (ram,0x00010064ff20) */
/* WARNING: Removing unreachable block (ram,0x00010064ff28) */
/* WARNING: Removing unreachable block (ram,0x00010064ff30) */
/* WARNING: Removing unreachable block (ram,0x00010064ff38) */
/* WARNING: Removing unreachable block (ram,0x00010064ff3c) */
/* WARNING: Removing unreachable block (ram,0x00010064ff44) */
/* WARNING: Removing unreachable block (ram,0x00010064ff4c) */
/* WARNING: Removing unreachable block (ram,0x00010064ff54) */
/* WARNING: Removing unreachable block (ram,0x00010064ff58) */
/* WARNING: Removing unreachable block (ram,0x00010064ff60) */
/* WARNING: Removing unreachable block (ram,0x00010064ffbc) */
/* WARNING: Removing unreachable block (ram,0x000100650014) */
/* WARNING: Removing unreachable block (ram,0x000100650024) */
/* WARNING: Removing unreachable block (ram,0x00010065002c) */
/* WARNING: Removing unreachable block (ram,0x000100650044) */
/* WARNING: Removing unreachable block (ram,0x000100650054) */
/* WARNING: Removing unreachable block (ram,0x000100650058) */
/* WARNING: Removing unreachable block (ram,0x0001006500ec) */
/* WARNING: Removing unreachable block (ram,0x000100650100) */
/* WARNING: Removing unreachable block (ram,0x000100650104) */
/* WARNING: Removing unreachable block (ram,0x000100650108) */
/* WARNING: Removing unreachable block (ram,0x00010065005c) */
/* WARNING: Removing unreachable block (ram,0x000100650070) */
/* WARNING: Removing unreachable block (ram,0x00010065008c) */
/* WARNING: Removing unreachable block (ram,0x00010065001c) */
/* WARNING: Removing unreachable block (ram,0x000100650098) */
/* WARNING: Removing unreachable block (ram,0x0001006500a8) */
/* WARNING: Removing unreachable block (ram,0x0001006500ac) */
/* WARNING: Removing unreachable block (ram,0x00010065016c) */
/* WARNING: Removing unreachable block (ram,0x000100650118) */
/* WARNING: Removing unreachable block (ram,0x00010065012c) */
/* WARNING: Removing unreachable block (ram,0x000100650134) */
/* WARNING: Removing unreachable block (ram,0x000100650138) */
/* WARNING: Removing unreachable block (ram,0x000100650140) */
/* WARNING: Removing unreachable block (ram,0x000100650144) */
/* WARNING: Removing unreachable block (ram,0x00010065014c) */
/* WARNING: Removing unreachable block (ram,0x000100650154) */
/* WARNING: Removing unreachable block (ram,0x00010065015c) */
/* WARNING: Removing unreachable block (ram,0x000100650164) */
/* WARNING: Removing unreachable block (ram,0x0001006500b0) */
/* WARNING: Removing unreachable block (ram,0x0001006500c0) */
/* WARNING: Removing unreachable block (ram,0x0001006500cc) */
/* WARNING: Removing unreachable block (ram,0x0001006500d8) */
/* WARNING: Removing unreachable block (ram,0x00010064fd24) */
/* WARNING: Removing unreachable block (ram,0x00010064fd30) */
/* WARNING: Removing unreachable block (ram,0x00010064fe90) */

void FUN_10064fb0c(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 extraout_x17;
  undefined8 extraout_x17_00;
  undefined8 extraout_x17_01;
  undefined8 extraout_x17_02;
  undefined8 extraout_x17_03;
  undefined8 *unaff_x19;
  ulong unaff_x21;
  uint uVar8;
  long unaff_x29;
  undefined1 auVar9 [12];
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  ulong in_stack_00000080;
  undefined8 in_stack_00000090;
  ulong in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  undefined4 in_stack_000000f8;
  byte bStack0000000000000100;
  byte bStack0000000000000101;
  char in_stack_00000108;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_000001a8;
  
  auVar9 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000128);
  uVar3 = auVar9._0_8_;
  uVar6 = extraout_x17;
  if ((in_stack_00000070 != -0x8000000000000000) && (in_stack_00000070 != 0)) {
    auVar9 = _free(in_stack_00000090);
    uVar6 = extraout_x17_00;
  }
  if ((in_stack_00000098 & 0x7fffffffffffffff) != 0) {
    auVar9 = _free(in_stack_00000068);
    uVar6 = extraout_x17_01;
  }
  if ((in_stack_00000080 & 0x7fffffffffffffff) != 0) {
    auVar9 = _free(in_stack_000000a8);
    uVar6 = extraout_x17_02;
  }
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
    auVar9 = _free(in_stack_000000a0);
    uVar6 = extraout_x17_03;
  }
  in_stack_00000108 = in_stack_00000108 + '\x01';
  in_stack_00000128 = 0x8000000000000000;
  in_stack_00000130 = uVar3;
  while( true ) {
    uVar1 = in_stack_000000f8;
    if ((bStack0000000000000100 & 1) == 0) {
      *(undefined1 *)(unaff_x29 + -0x80) = 0;
      while (lVar4 = _read(uVar1,unaff_x29 + -0x80,1), lVar4 == -1) {
        piVar5 = (int *)___error();
        if (*piVar5 != 4) {
          plVar7 = (long *)func_0x000107c05db8((long)*piVar5 << 0x20 | 2);
          goto LAB_10064fecc;
        }
      }
      if (lVar4 == 0) {
        *(undefined8 *)(unaff_x29 + -0x80) = 3;
        plVar7 = (long *)FUN_107c05dbc(unaff_x29 + -0x80,in_stack_000000e0,in_stack_000000e8);
        goto LAB_10064fecc;
      }
      bStack0000000000000101 = *(byte *)(unaff_x29 + -0x80);
      in_stack_000000e8 = in_stack_000000e8 + 1;
      if (bStack0000000000000101 == 10) {
        in_stack_000000f0 = in_stack_000000f0 + in_stack_000000e8;
        in_stack_000000e0 = in_stack_000000e0 + 1;
        in_stack_000000e8 = 0;
      }
      bStack0000000000000100 = 1;
    }
    bVar2 = bStack0000000000000101;
    lVar4 = in_stack_000000d8;
    uVar8 = (uint)bStack0000000000000101;
    if (0x2c < uVar8) goto LAB_10065049c;
    if ((1L << ((ulong)uVar8 & 0x3f) & 0x100002600U) == 0) break;
    bStack0000000000000100 = 0;
    if (in_stack_000000c8 != -0x8000000000000000) {
      if (in_stack_000000d8 == in_stack_000000c8) {
        FUN_107c03c6c(&stack0x000000c8);
      }
      *(byte *)(in_stack_000000d0 + lVar4) = bVar2;
      in_stack_000000d8 = lVar4 + 1;
    }
  }
  if ((ulong)uVar8 == 0x2c) {
    *(undefined8 *)(unaff_x29 + -0x80) = 0x15;
    plVar7 = (long *)FUN_107c05dbc(unaff_x29 + -0x80,in_stack_000000e0,in_stack_000000e8);
  }
  else {
LAB_10065049c:
    if (uVar8 == 0x7d) {
      bStack0000000000000100 = 0;
      if (in_stack_000000c8 == -0x8000000000000000) {
        plVar7 = (long *)0x0;
      }
      else {
        if (in_stack_000000d8 == in_stack_000000c8) {
          FUN_107c03c6c(&stack0x000000c8);
        }
        plVar7 = (long *)0x0;
        *(undefined1 *)(in_stack_000000d0 + lVar4) = 0x7d;
        in_stack_000000d8 = lVar4 + 1;
      }
    }
    else {
      *(undefined8 *)(unaff_x29 + -0x80) = 0x16;
      plVar7 = (long *)FUN_107c05dbc(unaff_x29 + -0x80,in_stack_000000e0,in_stack_000000e8);
    }
  }
LAB_10064fecc:
  *(undefined8 *)(unaff_x29 + -0x78) = uVar6;
  *(long *)(unaff_x29 + -0x80) = auVar9._0_8_;
  *(ulong *)(unaff_x29 + -0x70) = CONCAT44(in_stack_000001a8._4_4_,auVar9._8_4_);
  if (plVar7 != (long *)0x0) {
    if (*plVar7 == 1) {
      FUN_100de21d4(plVar7 + 1);
    }
    else if ((*plVar7 == 0) && (plVar7[2] != 0)) {
      _free(plVar7[1]);
    }
    _free(plVar7);
  }
  uVar6 = thunk_FUN_108832e54(uVar3,in_stack_000000e0,in_stack_000000e8);
  *unaff_x19 = 0x8000000000000000;
  unaff_x19[1] = uVar6;
  _close(in_stack_000000f8);
  if ((in_stack_000000c8 != -0x8000000000000000) && (in_stack_000000c8 != 0)) {
    _free(in_stack_000000d0);
  }
  if (in_stack_000000b0 != 0) {
    _free(in_stack_000000b8);
  }
  return;
}

