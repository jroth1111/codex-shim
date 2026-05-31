
void FUN_100bcbc14(void)

{
  long lVar1;
  long lVar2;
  long unaff_x26;
  ulong unaff_x28;
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
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  long in_stack_00000078;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  ulong in_stack_000000c8;
  ulong in_stack_000000d0;
  ulong in_stack_000000d8;
  ulong in_stack_000000e0;
  long in_stack_000000e8;
  long *in_stack_000000f0;
  char in_stack_00000270;
  
  lVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000180);
  *in_stack_000000f0 = 0x12;
  in_stack_000000f0[1] = lVar1;
  if ((in_stack_000000d8 != 0x8000000000000001) && ((in_stack_000000d8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000058);
  }
  lVar1 = in_stack_00000078;
  if (in_stack_000000e8 != -0x8000000000000000) {
    for (; unaff_x26 != 0; unaff_x26 = unaff_x26 + -1) {
      FUN_100e4af0c(lVar1);
      lVar1 = lVar1 + 0x50;
    }
    if (in_stack_000000e8 != 0) {
      _free(in_stack_00000078);
    }
  }
  if ((in_stack_000000e0 != 0x8000000000000001) && ((in_stack_000000e0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000050);
  }
  if ((in_stack_000000c8 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000068);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000088);
  }
  if ((in_stack_000000d0 & 0x7fffffffffffffff) == 0) {
    lVar1 = *in_stack_000000f0;
  }
  else {
    _free(in_stack_00000090);
    lVar1 = *in_stack_000000f0;
  }
  if (lVar1 == 0x12) {
    FUN_100d34830(&stack0x00000290);
    if (in_stack_00000270 != '\x16') {
      FUN_100e077ec(&stack0x00000270);
    }
  }
  else {
    lVar11 = in_stack_000000f0[0x19];
    lVar3 = in_stack_000000f0[0x18];
    lVar26 = in_stack_000000f0[0x1b];
    lVar19 = in_stack_000000f0[0x1a];
    lVar12 = in_stack_000000f0[0x1d];
    lVar4 = in_stack_000000f0[0x1c];
    lVar2 = in_stack_000000f0[0x1e];
    lVar13 = in_stack_000000f0[0x11];
    lVar5 = in_stack_000000f0[0x10];
    lVar27 = in_stack_000000f0[0x13];
    lVar20 = in_stack_000000f0[0x12];
    lVar14 = in_stack_000000f0[0x15];
    lVar6 = in_stack_000000f0[0x14];
    lVar28 = in_stack_000000f0[0x17];
    lVar21 = in_stack_000000f0[0x16];
    lVar15 = in_stack_000000f0[9];
    lVar7 = in_stack_000000f0[8];
    lVar29 = in_stack_000000f0[0xb];
    lVar22 = in_stack_000000f0[10];
    lVar16 = in_stack_000000f0[0xd];
    lVar8 = in_stack_000000f0[0xc];
    lVar30 = in_stack_000000f0[0xf];
    lVar23 = in_stack_000000f0[0xe];
    lVar17 = in_stack_000000f0[1];
    lVar9 = *in_stack_000000f0;
    lVar31 = in_stack_000000f0[3];
    lVar24 = in_stack_000000f0[2];
    lVar18 = in_stack_000000f0[5];
    lVar10 = in_stack_000000f0[4];
    lVar32 = in_stack_000000f0[7];
    lVar25 = in_stack_000000f0[6];
    lVar1 = FUN_100fbc67c(&stack0x00000270);
    if (lVar1 == 0) {
      in_stack_000000f0[0x19] = lVar11;
      in_stack_000000f0[0x18] = lVar3;
      in_stack_000000f0[0x1b] = lVar26;
      in_stack_000000f0[0x1a] = lVar19;
      in_stack_000000f0[0x1d] = lVar12;
      in_stack_000000f0[0x1c] = lVar4;
      in_stack_000000f0[0x1e] = lVar2;
      in_stack_000000f0[0x11] = lVar13;
      in_stack_000000f0[0x10] = lVar5;
      in_stack_000000f0[0x13] = lVar27;
      in_stack_000000f0[0x12] = lVar20;
      in_stack_000000f0[0x15] = lVar14;
      in_stack_000000f0[0x14] = lVar6;
      in_stack_000000f0[0x17] = lVar28;
      in_stack_000000f0[0x16] = lVar21;
      in_stack_000000f0[9] = lVar15;
      in_stack_000000f0[8] = lVar7;
      in_stack_000000f0[0xb] = lVar29;
      in_stack_000000f0[10] = lVar22;
      in_stack_000000f0[0xd] = lVar16;
      in_stack_000000f0[0xc] = lVar8;
      in_stack_000000f0[0xf] = lVar30;
      in_stack_000000f0[0xe] = lVar23;
      in_stack_000000f0[1] = lVar17;
      *in_stack_000000f0 = lVar9;
      in_stack_000000f0[3] = lVar31;
      in_stack_000000f0[2] = lVar24;
      in_stack_000000f0[5] = lVar18;
      in_stack_000000f0[4] = lVar10;
      in_stack_000000f0[7] = lVar32;
      in_stack_000000f0[6] = lVar25;
    }
    else {
      *in_stack_000000f0 = 0x12;
      in_stack_000000f0[1] = lVar1;
      FUN_100e42904(&stack0x000002c0);
    }
  }
  return;
}

