
/* WARNING: Removing unreachable block (ram,0x000100bc7bd8) */

void FUN_100bc67a4(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
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
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000a8;
  long in_stack_000000e0;
  ulong in_stack_000000e8;
  long in_stack_000001d0;
  long in_stack_000001d8;
  long in_stack_000001e0;
  char in_stack_00000270;
  
  lVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000180);
  *unaff_x25 = 0x12;
  unaff_x25[1] = lVar1;
  if (unaff_x27 != 0) {
    _free(in_stack_000000a8);
  }
  if (in_stack_000000e0 != 0) {
    FUN_100d42e74(&stack0x00000130);
  }
  if ((in_stack_000000e8 != 0x8000000000000001) && ((in_stack_000000e8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000078);
  }
  if ((unaff_x28 != 0x8000000000000001) && ((unaff_x28 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000080);
  }
  lVar2 = in_stack_000001d8;
  lVar1 = in_stack_000001d0;
  if (in_stack_000001d0 != -0x8000000000000000) {
    if (in_stack_000001e0 != 0) {
      puVar3 = (undefined8 *)(in_stack_000001d8 + 8);
      lVar4 = in_stack_000001e0;
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (lVar1 != 0) {
      _free(lVar2);
    }
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000088);
  }
  if (*unaff_x25 == 0x12) {
    FUN_100d34830(&stack0x00000290);
    if (in_stack_00000270 != '\x16') {
      FUN_100e077ec(&stack0x00000270);
    }
  }
  else {
    lVar12 = unaff_x25[0x19];
    lVar4 = unaff_x25[0x18];
    lVar27 = unaff_x25[0x1b];
    lVar20 = unaff_x25[0x1a];
    lVar13 = unaff_x25[0x1d];
    lVar5 = unaff_x25[0x1c];
    lVar2 = unaff_x25[0x1e];
    lVar14 = unaff_x25[0x11];
    lVar6 = unaff_x25[0x10];
    lVar28 = unaff_x25[0x13];
    lVar21 = unaff_x25[0x12];
    lVar15 = unaff_x25[0x15];
    lVar7 = unaff_x25[0x14];
    lVar29 = unaff_x25[0x17];
    lVar22 = unaff_x25[0x16];
    lVar16 = unaff_x25[9];
    lVar8 = unaff_x25[8];
    lVar30 = unaff_x25[0xb];
    lVar23 = unaff_x25[10];
    lVar17 = unaff_x25[0xd];
    lVar9 = unaff_x25[0xc];
    lVar31 = unaff_x25[0xf];
    lVar24 = unaff_x25[0xe];
    lVar18 = unaff_x25[1];
    lVar10 = *unaff_x25;
    lVar32 = unaff_x25[3];
    lVar25 = unaff_x25[2];
    lVar19 = unaff_x25[5];
    lVar11 = unaff_x25[4];
    lVar33 = unaff_x25[7];
    lVar26 = unaff_x25[6];
    lVar1 = FUN_100fbc67c(&stack0x00000270);
    if (lVar1 == 0) {
      unaff_x25[0x19] = lVar12;
      unaff_x25[0x18] = lVar4;
      unaff_x25[0x1b] = lVar27;
      unaff_x25[0x1a] = lVar20;
      unaff_x25[0x1d] = lVar13;
      unaff_x25[0x1c] = lVar5;
      unaff_x25[0x1e] = lVar2;
      unaff_x25[0x11] = lVar14;
      unaff_x25[0x10] = lVar6;
      unaff_x25[0x13] = lVar28;
      unaff_x25[0x12] = lVar21;
      unaff_x25[0x15] = lVar15;
      unaff_x25[0x14] = lVar7;
      unaff_x25[0x17] = lVar29;
      unaff_x25[0x16] = lVar22;
      unaff_x25[9] = lVar16;
      unaff_x25[8] = lVar8;
      unaff_x25[0xb] = lVar30;
      unaff_x25[10] = lVar23;
      unaff_x25[0xd] = lVar17;
      unaff_x25[0xc] = lVar9;
      unaff_x25[0xf] = lVar31;
      unaff_x25[0xe] = lVar24;
      unaff_x25[1] = lVar18;
      *unaff_x25 = lVar10;
      unaff_x25[3] = lVar32;
      unaff_x25[2] = lVar25;
      unaff_x25[5] = lVar19;
      unaff_x25[4] = lVar11;
      unaff_x25[7] = lVar33;
      unaff_x25[6] = lVar26;
    }
    else {
      *unaff_x25 = 0x12;
      unaff_x25[1] = lVar1;
      FUN_100e42904(&stack0x000002c0);
    }
  }
  return;
}

