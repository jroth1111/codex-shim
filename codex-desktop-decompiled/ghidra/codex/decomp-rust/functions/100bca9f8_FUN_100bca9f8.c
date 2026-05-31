
void FUN_100bca9f8(void)

{
  long lVar1;
  long lVar2;
  ulong in_x10;
  undefined8 unaff_x23;
  undefined8 *puVar3;
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
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  long in_stack_000000d0;
  ulong in_stack_000000d8;
  ulong in_stack_000000e0;
  long *in_stack_000000f0;
  char in_stack_00000130;
  long in_stack_00000180;
  long in_stack_00000258;
  long in_stack_00000260;
  
  lVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000270);
  *in_stack_000000f0 = 0x12;
  in_stack_000000f0[1] = lVar1;
  if ((in_stack_000000d0 != -0x7fffffffffffffff) && (in_stack_000000d0 != -0x8000000000000000)) {
    if (in_stack_00000260 != 0) {
      puVar3 = (undefined8 *)(in_stack_00000258 + 0x10);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 4;
        in_stack_00000260 = in_stack_00000260 + -1;
      } while (in_stack_00000260 != 0);
    }
    if (in_stack_000000d0 != 0) {
      _free(in_stack_00000258);
    }
  }
  if (in_stack_00000180 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000180);
  }
  if ((in_stack_000000e0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000080);
  }
  if ((in_stack_000000d8 != 0x8000000000000001) && ((in_stack_000000d8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000078);
  }
  if ((in_x10 & 0x7fffffffffffffff) != 0) {
    _free(unaff_x23);
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
    lVar2 = in_stack_000000f0[0x1e];
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
    lVar1 = FUN_100fbc67c(&stack0x00000130);
    if (lVar1 == 0) {
      in_stack_000000f0[0x19] = lVar12;
      in_stack_000000f0[0x18] = lVar4;
      in_stack_000000f0[0x1b] = lVar27;
      in_stack_000000f0[0x1a] = lVar20;
      in_stack_000000f0[0x1d] = lVar13;
      in_stack_000000f0[0x1c] = lVar5;
      in_stack_000000f0[0x1e] = lVar2;
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
      in_stack_000000f0[1] = lVar1;
      FUN_100e42904(&stack0x000002c0);
    }
  }
  return;
}

