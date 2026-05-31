
/* WARNING: Removing unreachable block (ram,0x000100bc740c) */

void FUN_100bc64a0(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  long unaff_x23;
  long unaff_x24;
  long lVar4;
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
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  ulong in_stack_000000b8;
  ulong in_stack_000000c0;
  ulong in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long *in_stack_000000f0;
  char in_stack_00000130;
  
  lVar2 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000270);
  *in_stack_000000f0 = 0x12;
  in_stack_000000f0[1] = lVar2;
  if (in_stack_000000b8 != 0) {
    _free(in_stack_00000058);
  }
  if (unaff_x19 != 0) {
    _free(in_stack_00000080);
  }
  if (in_stack_000000d0 != 0) {
    _free(in_stack_00000088);
  }
  if ((in_stack_000000c0 != 0x8000000000000001) && ((in_stack_000000c0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000078);
  }
  if (((in_stack_000000c8 & 1) != 0) && (in_stack_00000060 != 0)) {
    FUN_100e52b04(in_stack_00000060);
    _free(in_stack_00000060);
  }
  if ((-0x7fffffffffffffff < in_stack_000000e0) && (in_stack_000000e0 != 0)) {
    _free(in_stack_00000040);
  }
  if ((-0x7fffffffffffffff < in_stack_000000e8) && (in_stack_000000e8 != 0)) {
    _free(in_stack_00000048);
  }
  if (unaff_x23 != unaff_x24) {
    FUN_100de6690(&stack0x00000180);
  }
  uVar1 = 0;
  if ((in_stack_000000b8 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w20;
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
    if ((unaff_x19 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w21;
    }
  }
  else {
    _free(in_stack_00000058);
    uVar1 = 0;
    if ((unaff_x19 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w21;
    }
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000080);
  }
  if (*in_stack_000000f0 == 0x12) {
    FUN_100d34830(&stack0x00000150);
    if (in_stack_00000130 != '\x16') {
      FUN_100e077ec(&stack0x00000130);
    }
  }
  else {
    lVar12 = in_stack_000000f0[0x19];
    lVar4 = in_stack_000000f0[0x18];
    lVar27 = in_stack_000000f0[0x1b];
    lVar20 = in_stack_000000f0[0x1a];
    lVar13 = in_stack_000000f0[0x1d];
    lVar5 = in_stack_000000f0[0x1c];
    lVar3 = in_stack_000000f0[0x1e];
    lVar14 = in_stack_000000f0[0x11];
    lVar6 = in_stack_000000f0[0x10];
    lVar28 = in_stack_000000f0[0x13];
    lVar21 = in_stack_000000f0[0x12];
    lVar15 = in_stack_000000f0[0x15];
    lVar7 = in_stack_000000f0[0x14];
    lVar29 = in_stack_000000f0[0x17];
    lVar22 = in_stack_000000f0[0x16];
    lVar16 = in_stack_000000f0[9];
    lVar8 = in_stack_000000f0[8];
    lVar30 = in_stack_000000f0[0xb];
    lVar23 = in_stack_000000f0[10];
    lVar17 = in_stack_000000f0[0xd];
    lVar9 = in_stack_000000f0[0xc];
    lVar31 = in_stack_000000f0[0xf];
    lVar24 = in_stack_000000f0[0xe];
    lVar18 = in_stack_000000f0[1];
    lVar10 = *in_stack_000000f0;
    lVar32 = in_stack_000000f0[3];
    lVar25 = in_stack_000000f0[2];
    lVar19 = in_stack_000000f0[5];
    lVar11 = in_stack_000000f0[4];
    lVar33 = in_stack_000000f0[7];
    lVar26 = in_stack_000000f0[6];
    lVar2 = FUN_100fbc67c(&stack0x00000130);
    if (lVar2 == 0) {
      in_stack_000000f0[0x19] = lVar12;
      in_stack_000000f0[0x18] = lVar4;
      in_stack_000000f0[0x1b] = lVar27;
      in_stack_000000f0[0x1a] = lVar20;
      in_stack_000000f0[0x1d] = lVar13;
      in_stack_000000f0[0x1c] = lVar5;
      in_stack_000000f0[0x1e] = lVar3;
      in_stack_000000f0[0x11] = lVar14;
      in_stack_000000f0[0x10] = lVar6;
      in_stack_000000f0[0x13] = lVar28;
      in_stack_000000f0[0x12] = lVar21;
      in_stack_000000f0[0x15] = lVar15;
      in_stack_000000f0[0x14] = lVar7;
      in_stack_000000f0[0x17] = lVar29;
      in_stack_000000f0[0x16] = lVar22;
      in_stack_000000f0[9] = lVar16;
      in_stack_000000f0[8] = lVar8;
      in_stack_000000f0[0xb] = lVar30;
      in_stack_000000f0[10] = lVar23;
      in_stack_000000f0[0xd] = lVar17;
      in_stack_000000f0[0xc] = lVar9;
      in_stack_000000f0[0xf] = lVar31;
      in_stack_000000f0[0xe] = lVar24;
      in_stack_000000f0[1] = lVar18;
      *in_stack_000000f0 = lVar10;
      in_stack_000000f0[3] = lVar32;
      in_stack_000000f0[2] = lVar25;
      in_stack_000000f0[5] = lVar19;
      in_stack_000000f0[4] = lVar11;
      in_stack_000000f0[7] = lVar33;
      in_stack_000000f0[6] = lVar26;
    }
    else {
      *in_stack_000000f0 = 0x12;
      in_stack_000000f0[1] = lVar2;
      FUN_100e42904(&stack0x000002c0);
    }
  }
  return;
}

