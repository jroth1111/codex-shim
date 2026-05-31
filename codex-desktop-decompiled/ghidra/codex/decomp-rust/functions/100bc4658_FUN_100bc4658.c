
/* WARNING: Removing unreachable block (ram,0x000100bc7498) */
/* WARNING: Removing unreachable block (ram,0x000100bc740c) */
/* WARNING: Removing unreachable block (ram,0x000100bc7404) */

void FUN_100bc4658(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  long *unaff_x27;
  long lVar3;
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
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  ulong in_stack_000000c0;
  ulong in_stack_000000c8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  char in_stack_00000130;
  
  lVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000270);
  *unaff_x27 = 0x12;
  unaff_x27[1] = lVar1;
  if ((in_stack_000000c0 != 0x8000000000000001) && ((in_stack_000000c0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000078);
  }
  if (((in_stack_000000c8 & 1) != 0) && (unaff_x19 != 0)) {
    FUN_100e52b04();
    _free();
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
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000058);
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000080);
  }
  if (*unaff_x27 == 0x12) {
    FUN_100d34830(&stack0x00000150);
    if (in_stack_00000130 != '\x16') {
      FUN_100e077ec(&stack0x00000130);
    }
  }
  else {
    lVar11 = unaff_x27[0x19];
    lVar3 = unaff_x27[0x18];
    lVar26 = unaff_x27[0x1b];
    lVar19 = unaff_x27[0x1a];
    lVar12 = unaff_x27[0x1d];
    lVar4 = unaff_x27[0x1c];
    lVar2 = unaff_x27[0x1e];
    lVar13 = unaff_x27[0x11];
    lVar5 = unaff_x27[0x10];
    lVar27 = unaff_x27[0x13];
    lVar20 = unaff_x27[0x12];
    lVar14 = unaff_x27[0x15];
    lVar6 = unaff_x27[0x14];
    lVar28 = unaff_x27[0x17];
    lVar21 = unaff_x27[0x16];
    lVar15 = unaff_x27[9];
    lVar7 = unaff_x27[8];
    lVar29 = unaff_x27[0xb];
    lVar22 = unaff_x27[10];
    lVar16 = unaff_x27[0xd];
    lVar8 = unaff_x27[0xc];
    lVar30 = unaff_x27[0xf];
    lVar23 = unaff_x27[0xe];
    lVar17 = unaff_x27[1];
    lVar9 = *unaff_x27;
    lVar31 = unaff_x27[3];
    lVar24 = unaff_x27[2];
    lVar18 = unaff_x27[5];
    lVar10 = unaff_x27[4];
    lVar32 = unaff_x27[7];
    lVar25 = unaff_x27[6];
    lVar1 = FUN_100fbc67c(&stack0x00000130);
    if (lVar1 == 0) {
      unaff_x27[0x19] = lVar11;
      unaff_x27[0x18] = lVar3;
      unaff_x27[0x1b] = lVar26;
      unaff_x27[0x1a] = lVar19;
      unaff_x27[0x1d] = lVar12;
      unaff_x27[0x1c] = lVar4;
      unaff_x27[0x1e] = lVar2;
      unaff_x27[0x11] = lVar13;
      unaff_x27[0x10] = lVar5;
      unaff_x27[0x13] = lVar27;
      unaff_x27[0x12] = lVar20;
      unaff_x27[0x15] = lVar14;
      unaff_x27[0x14] = lVar6;
      unaff_x27[0x17] = lVar28;
      unaff_x27[0x16] = lVar21;
      unaff_x27[9] = lVar15;
      unaff_x27[8] = lVar7;
      unaff_x27[0xb] = lVar29;
      unaff_x27[10] = lVar22;
      unaff_x27[0xd] = lVar16;
      unaff_x27[0xc] = lVar8;
      unaff_x27[0xf] = lVar30;
      unaff_x27[0xe] = lVar23;
      unaff_x27[1] = lVar17;
      *unaff_x27 = lVar9;
      unaff_x27[3] = lVar31;
      unaff_x27[2] = lVar24;
      unaff_x27[5] = lVar18;
      unaff_x27[4] = lVar10;
      unaff_x27[7] = lVar32;
      unaff_x27[6] = lVar25;
    }
    else {
      *unaff_x27 = 0x12;
      unaff_x27[1] = lVar1;
      FUN_100e42904(&stack0x000002c0);
    }
  }
  return;
}

