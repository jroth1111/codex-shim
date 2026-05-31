
/* WARNING: Removing unreachable block (ram,0x000100bc7638) */

void FUN_100bc4d0c(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong unaff_x19;
  uint unaff_w21;
  uint unaff_w22;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
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
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  long in_stack_00000078;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  ulong in_stack_000000d8;
  ulong in_stack_000000e0;
  long in_stack_000000e8;
  char in_stack_00000270;
  
  lVar2 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000180);
  *unaff_x27 = 0x12;
  unaff_x27[1] = lVar2;
  if (unaff_x19 != 0) {
    _free(in_stack_00000088);
  }
  if (unaff_x25 != 0) {
    _free(in_stack_00000090);
  }
  if ((in_stack_000000d8 != 0x8000000000000001) && ((in_stack_000000d8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000058);
  }
  lVar2 = in_stack_00000078;
  if (in_stack_000000e8 != -0x8000000000000000) {
    for (; unaff_x26 != 0; unaff_x26 = unaff_x26 + -1) {
      FUN_100e4af0c(lVar2);
      lVar2 = lVar2 + 0x50;
    }
    if (in_stack_000000e8 != 0) {
      _free(in_stack_00000078);
    }
  }
  if ((in_stack_000000e0 != 0x8000000000000001) && ((in_stack_000000e0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000050);
  }
  uVar1 = 0;
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w22;
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
    if ((unaff_x19 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w21;
    }
  }
  else {
    _free(in_stack_00000068);
    uVar1 = 0;
    if ((unaff_x19 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w21;
    }
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000088);
  }
  if (*unaff_x27 == 0x12) {
    FUN_100d34830(&stack0x00000290);
    if (in_stack_00000270 != '\x16') {
      FUN_100e077ec(&stack0x00000270);
    }
  }
  else {
    lVar12 = unaff_x27[0x19];
    lVar4 = unaff_x27[0x18];
    lVar27 = unaff_x27[0x1b];
    lVar20 = unaff_x27[0x1a];
    lVar13 = unaff_x27[0x1d];
    lVar5 = unaff_x27[0x1c];
    lVar3 = unaff_x27[0x1e];
    lVar14 = unaff_x27[0x11];
    lVar6 = unaff_x27[0x10];
    lVar28 = unaff_x27[0x13];
    lVar21 = unaff_x27[0x12];
    lVar15 = unaff_x27[0x15];
    lVar7 = unaff_x27[0x14];
    lVar29 = unaff_x27[0x17];
    lVar22 = unaff_x27[0x16];
    lVar16 = unaff_x27[9];
    lVar8 = unaff_x27[8];
    lVar30 = unaff_x27[0xb];
    lVar23 = unaff_x27[10];
    lVar17 = unaff_x27[0xd];
    lVar9 = unaff_x27[0xc];
    lVar31 = unaff_x27[0xf];
    lVar24 = unaff_x27[0xe];
    lVar18 = unaff_x27[1];
    lVar10 = *unaff_x27;
    lVar32 = unaff_x27[3];
    lVar25 = unaff_x27[2];
    lVar19 = unaff_x27[5];
    lVar11 = unaff_x27[4];
    lVar33 = unaff_x27[7];
    lVar26 = unaff_x27[6];
    lVar2 = FUN_100fbc67c(&stack0x00000270);
    if (lVar2 == 0) {
      unaff_x27[0x19] = lVar12;
      unaff_x27[0x18] = lVar4;
      unaff_x27[0x1b] = lVar27;
      unaff_x27[0x1a] = lVar20;
      unaff_x27[0x1d] = lVar13;
      unaff_x27[0x1c] = lVar5;
      unaff_x27[0x1e] = lVar3;
      unaff_x27[0x11] = lVar14;
      unaff_x27[0x10] = lVar6;
      unaff_x27[0x13] = lVar28;
      unaff_x27[0x12] = lVar21;
      unaff_x27[0x15] = lVar15;
      unaff_x27[0x14] = lVar7;
      unaff_x27[0x17] = lVar29;
      unaff_x27[0x16] = lVar22;
      unaff_x27[9] = lVar16;
      unaff_x27[8] = lVar8;
      unaff_x27[0xb] = lVar30;
      unaff_x27[10] = lVar23;
      unaff_x27[0xd] = lVar17;
      unaff_x27[0xc] = lVar9;
      unaff_x27[0xf] = lVar31;
      unaff_x27[0xe] = lVar24;
      unaff_x27[1] = lVar18;
      *unaff_x27 = lVar10;
      unaff_x27[3] = lVar32;
      unaff_x27[2] = lVar25;
      unaff_x27[5] = lVar19;
      unaff_x27[4] = lVar11;
      unaff_x27[7] = lVar33;
      unaff_x27[6] = lVar26;
    }
    else {
      *unaff_x27 = 0x12;
      unaff_x27[1] = lVar2;
      FUN_100e42904(&stack0x000002c0);
    }
  }
  return;
}

