
void FUN_103403038(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  
  lVar11 = 0;
  puVar1 = param_1 + 0x1f;
  puVar9 = param_1;
  do {
    puVar10 = puVar1;
    uVar5 = puVar9[0x20];
    uVar6 = puVar9[0x21];
    uVar7 = puVar9[2];
    uVar3 = uVar6;
    if (uVar7 <= uVar6) {
      uVar3 = uVar7;
    }
    iVar8 = _memcmp(uVar5,puVar9[1],uVar3);
    lVar2 = uVar6 - uVar7;
    if (iVar8 != 0) {
      lVar2 = (long)iVar8;
    }
    if (lVar2 < 0) {
      uVar12 = puVar9[0x1f];
      uVar21 = puVar9[0x37];
      uVar14 = puVar9[0x36];
      uVar35 = puVar9[0x39];
      uVar28 = puVar9[0x38];
      uVar22 = puVar9[0x3b];
      uVar15 = puVar9[0x3a];
      uVar36 = puVar9[0x3d];
      uVar29 = puVar9[0x3c];
      uVar23 = puVar9[0x2f];
      uVar16 = puVar9[0x2e];
      uVar37 = puVar9[0x31];
      uVar30 = puVar9[0x30];
      uVar24 = puVar9[0x33];
      uVar17 = puVar9[0x32];
      uVar38 = puVar9[0x35];
      uVar31 = puVar9[0x34];
      uVar25 = puVar9[0x27];
      uVar18 = puVar9[0x26];
      uVar39 = puVar9[0x29];
      uVar32 = puVar9[0x28];
      uVar26 = puVar9[0x2b];
      uVar19 = puVar9[0x2a];
      uVar40 = puVar9[0x2d];
      uVar33 = puVar9[0x2c];
      uVar27 = puVar9[0x23];
      uVar20 = puVar9[0x22];
      uVar41 = puVar9[0x25];
      uVar34 = puVar9[0x24];
      lVar2 = lVar11;
      do {
        lVar13 = lVar2;
        puVar1 = (undefined8 *)((long)param_1 + lVar13);
        puVar1[0x3a] = puVar1[0x1b];
        puVar1[0x39] = puVar1[0x1a];
        puVar1[0x3c] = puVar1[0x1d];
        puVar1[0x3b] = puVar1[0x1c];
        puVar1[0x32] = puVar1[0x13];
        puVar1[0x31] = puVar1[0x12];
        puVar1[0x34] = puVar1[0x15];
        puVar1[0x33] = puVar1[0x14];
        puVar1[0x36] = puVar1[0x17];
        puVar1[0x35] = puVar1[0x16];
        puVar1[0x38] = puVar1[0x19];
        puVar1[0x37] = puVar1[0x18];
        puVar1[0x2a] = puVar1[0xb];
        puVar1[0x29] = puVar1[10];
        puVar1[0x2c] = puVar1[0xd];
        puVar1[0x2b] = puVar1[0xc];
        puVar1[0x2e] = puVar1[0xf];
        puVar1[0x2d] = puVar1[0xe];
        puVar1[0x30] = puVar1[0x11];
        puVar1[0x2f] = puVar1[0x10];
        puVar1[0x20] = puVar1[1];
        puVar1[0x1f] = *puVar1;
        puVar1[0x22] = puVar1[3];
        puVar1[0x21] = puVar1[2];
        puVar1[0x24] = puVar1[5];
        puVar1[0x23] = puVar1[4];
        puVar1[0x3d] = puVar1[0x1e];
        puVar1[0x26] = puVar1[7];
        puVar1[0x25] = puVar1[6];
        puVar1[0x28] = puVar1[9];
        puVar1[0x27] = puVar1[8];
        puVar9 = param_1;
        if (lVar13 == 0) goto LAB_103403078;
        uVar7 = puVar1[-0x1d];
        uVar3 = uVar6;
        if (uVar7 <= uVar6) {
          uVar3 = uVar7;
        }
        iVar8 = _memcmp(uVar5,puVar1[-0x1e],uVar3);
        lVar4 = uVar6 - uVar7;
        if (iVar8 != 0) {
          lVar4 = (long)iVar8;
        }
        lVar2 = lVar13 + -0xf8;
      } while (lVar4 < 0);
      puVar9 = (undefined8 *)((long)param_1 + lVar13);
LAB_103403078:
      *puVar9 = uVar12;
      puVar1[0x18] = uVar21;
      puVar1[0x17] = uVar14;
      puVar1[0x1a] = uVar35;
      puVar1[0x19] = uVar28;
      puVar1[0x1c] = uVar22;
      puVar1[0x1b] = uVar15;
      puVar1[0x1e] = uVar36;
      puVar1[0x1d] = uVar29;
      puVar1[0x10] = uVar23;
      puVar1[0xf] = uVar16;
      puVar1[0x12] = uVar37;
      puVar1[0x11] = uVar30;
      puVar1[0x14] = uVar24;
      puVar1[0x13] = uVar17;
      puVar1[0x16] = uVar38;
      puVar1[0x15] = uVar31;
      puVar1[8] = uVar25;
      puVar1[7] = uVar18;
      puVar1[10] = uVar39;
      puVar1[9] = uVar32;
      puVar1[0xc] = uVar26;
      puVar1[0xb] = uVar19;
      puVar1[0xe] = uVar40;
      puVar1[0xd] = uVar33;
      puVar1[4] = uVar27;
      puVar1[3] = uVar20;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[6] = uVar41;
      puVar1[5] = uVar34;
    }
    puVar1 = puVar10 + 0x1f;
    lVar11 = lVar11 + 0xf8;
    puVar9 = puVar10;
    if (puVar1 == param_1 + param_2 * 0x1f) {
      return;
    }
  } while( true );
}

