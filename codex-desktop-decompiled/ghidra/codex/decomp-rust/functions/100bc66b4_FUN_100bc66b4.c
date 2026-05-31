
/* WARNING: Removing unreachable block (ram,0x000100bc7638) */

void FUN_100bc66b4(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int unaff_w20;
  uint unaff_w21;
  uint unaff_w22;
  ulong unaff_x23;
  long unaff_x26;
  ulong unaff_x28;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
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
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  long in_stack_00000078;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  ulong in_stack_000000c8;
  long in_stack_000000d0;
  ulong in_stack_000000d8;
  ulong in_stack_000000e0;
  long in_stack_000000e8;
  long *in_stack_000000f0;
  char in_stack_00000270;
  
  lVar3 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000180);
  *in_stack_000000f0 = 0x12;
  in_stack_000000f0[1] = lVar3;
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  if (in_stack_000000c8 != 0) {
    _free(in_stack_00000068);
  }
  if (unaff_x28 != 0) {
    _free(in_stack_00000088);
  }
  if (in_stack_000000d0 != 0) {
    _free(in_stack_00000090);
  }
  if ((in_stack_000000d8 != 0x8000000000000001) && ((in_stack_000000d8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000058);
  }
  lVar3 = in_stack_00000078;
  if (in_stack_000000e8 != -0x8000000000000000) {
    for (; unaff_x26 != 0; unaff_x26 = unaff_x26 + -1) {
      FUN_100e4af0c(lVar3);
      lVar3 = lVar3 + 0x50;
    }
    if (in_stack_000000e8 != 0) {
      _free(in_stack_00000078);
    }
  }
  iVar1 = 0;
  if (in_stack_000000e0 != 0x8000000000000001) {
    iVar1 = unaff_w20;
  }
  if ((iVar1 == 1) && ((in_stack_000000e0 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000050);
  }
  uVar2 = 0;
  if ((in_stack_000000c8 & 0x7fffffffffffffff) != 0) {
    uVar2 = unaff_w22;
  }
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
    if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
      uVar2 = unaff_w21;
    }
  }
  else {
    _free(in_stack_00000068);
    uVar2 = 0;
    if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
      uVar2 = unaff_w21;
    }
  }
  if ((uVar2 & 1) != 0) {
    _free(in_stack_00000088);
  }
  if (*in_stack_000000f0 == 0x12) {
    FUN_100d34830(&stack0x00000290);
    if (in_stack_00000270 != '\x16') {
      FUN_100e077ec(&stack0x00000270);
    }
  }
  else {
    lVar13 = in_stack_000000f0[0x19];
    lVar5 = in_stack_000000f0[0x18];
    lVar28 = in_stack_000000f0[0x1b];
    lVar21 = in_stack_000000f0[0x1a];
    lVar14 = in_stack_000000f0[0x1d];
    lVar6 = in_stack_000000f0[0x1c];
    lVar4 = in_stack_000000f0[0x1e];
    lVar15 = in_stack_000000f0[0x11];
    lVar7 = in_stack_000000f0[0x10];
    lVar29 = in_stack_000000f0[0x13];
    lVar22 = in_stack_000000f0[0x12];
    lVar16 = in_stack_000000f0[0x15];
    lVar8 = in_stack_000000f0[0x14];
    lVar30 = in_stack_000000f0[0x17];
    lVar23 = in_stack_000000f0[0x16];
    lVar17 = in_stack_000000f0[9];
    lVar9 = in_stack_000000f0[8];
    lVar31 = in_stack_000000f0[0xb];
    lVar24 = in_stack_000000f0[10];
    lVar18 = in_stack_000000f0[0xd];
    lVar10 = in_stack_000000f0[0xc];
    lVar32 = in_stack_000000f0[0xf];
    lVar25 = in_stack_000000f0[0xe];
    lVar19 = in_stack_000000f0[1];
    lVar11 = *in_stack_000000f0;
    lVar33 = in_stack_000000f0[3];
    lVar26 = in_stack_000000f0[2];
    lVar20 = in_stack_000000f0[5];
    lVar12 = in_stack_000000f0[4];
    lVar34 = in_stack_000000f0[7];
    lVar27 = in_stack_000000f0[6];
    lVar3 = FUN_100fbc67c(&stack0x00000270);
    if (lVar3 == 0) {
      in_stack_000000f0[0x19] = lVar13;
      in_stack_000000f0[0x18] = lVar5;
      in_stack_000000f0[0x1b] = lVar28;
      in_stack_000000f0[0x1a] = lVar21;
      in_stack_000000f0[0x1d] = lVar14;
      in_stack_000000f0[0x1c] = lVar6;
      in_stack_000000f0[0x1e] = lVar4;
      in_stack_000000f0[0x11] = lVar15;
      in_stack_000000f0[0x10] = lVar7;
      in_stack_000000f0[0x13] = lVar29;
      in_stack_000000f0[0x12] = lVar22;
      in_stack_000000f0[0x15] = lVar16;
      in_stack_000000f0[0x14] = lVar8;
      in_stack_000000f0[0x17] = lVar30;
      in_stack_000000f0[0x16] = lVar23;
      in_stack_000000f0[9] = lVar17;
      in_stack_000000f0[8] = lVar9;
      in_stack_000000f0[0xb] = lVar31;
      in_stack_000000f0[10] = lVar24;
      in_stack_000000f0[0xd] = lVar18;
      in_stack_000000f0[0xc] = lVar10;
      in_stack_000000f0[0xf] = lVar32;
      in_stack_000000f0[0xe] = lVar25;
      in_stack_000000f0[1] = lVar19;
      *in_stack_000000f0 = lVar11;
      in_stack_000000f0[3] = lVar33;
      in_stack_000000f0[2] = lVar26;
      in_stack_000000f0[5] = lVar20;
      in_stack_000000f0[4] = lVar12;
      in_stack_000000f0[7] = lVar34;
      in_stack_000000f0[6] = lVar27;
    }
    else {
      *in_stack_000000f0 = 0x12;
      in_stack_000000f0[1] = lVar3;
      FUN_100e42904(&stack0x000002c0);
    }
  }
  return;
}

