
void FUN_1034028c4(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
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
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  
  lVar14 = 0;
  puVar9 = param_1 + 0x26;
  puVar13 = param_1;
  do {
    puVar10 = puVar9;
    uVar5 = puVar13[0x3d];
    uVar6 = puVar13[0x3e];
    uVar7 = puVar13[0x18];
    uVar3 = uVar6;
    if (uVar7 <= uVar6) {
      uVar3 = uVar7;
    }
    iVar8 = _memcmp(uVar5,puVar13[0x17],uVar3);
    lVar2 = uVar6 - uVar7;
    if (iVar8 != 0) {
      lVar2 = (long)iVar8;
    }
    if (lVar2 < 0) {
      uVar25 = puVar10[0x11];
      uVar16 = puVar10[0x10];
      uVar42 = puVar10[0x13];
      uVar34 = puVar10[0x12];
      uVar26 = puVar10[0x15];
      uVar17 = puVar10[0x14];
      uVar11 = puVar10[0x16];
      uVar27 = puVar10[9];
      uVar18 = puVar10[8];
      uVar43 = puVar10[0xb];
      uVar35 = puVar10[10];
      uVar28 = puVar10[0xd];
      uVar19 = puVar10[0xc];
      uVar44 = puVar10[0xf];
      uVar36 = puVar10[0xe];
      uVar29 = puVar10[1];
      uVar20 = *puVar10;
      uVar45 = puVar10[3];
      uVar37 = puVar10[2];
      uVar30 = puVar10[5];
      uVar21 = puVar10[4];
      uVar46 = puVar10[7];
      uVar38 = puVar10[6];
      uVar31 = puVar13[0x48];
      uVar22 = puVar13[0x47];
      uVar47 = puVar13[0x4a];
      uVar39 = puVar13[0x49];
      uVar12 = puVar13[0x4b];
      uVar32 = puVar13[0x40];
      uVar23 = puVar13[0x3f];
      uVar48 = puVar13[0x42];
      uVar40 = puVar13[0x41];
      uVar49 = puVar13[0x44];
      uVar41 = puVar13[0x43];
      uVar33 = puVar13[0x46];
      uVar24 = puVar13[0x45];
      lVar2 = lVar14;
      do {
        lVar15 = lVar2;
        lVar1 = (long)param_1 + lVar15;
        _memcpy(lVar1 + 0x130,lVar1,0x130);
        puVar9 = param_1;
        if (lVar15 == 0) goto LAB_103402904;
        uVar7 = *(ulong *)(lVar1 + -0x70);
        uVar3 = uVar6;
        if (uVar7 <= uVar6) {
          uVar3 = uVar7;
        }
        iVar8 = _memcmp(uVar5,*(undefined8 *)(lVar1 + -0x78),uVar3);
        lVar4 = uVar6 - uVar7;
        if (iVar8 != 0) {
          lVar4 = (long)iVar8;
        }
        lVar2 = lVar15 + -0x130;
      } while (lVar4 < 0);
      puVar9 = (undefined8 *)((long)param_1 + lVar15);
LAB_103402904:
      puVar9[0xd] = uVar28;
      puVar9[0xc] = uVar19;
      puVar9[0xf] = uVar44;
      puVar9[0xe] = uVar36;
      puVar9[9] = uVar27;
      puVar9[8] = uVar18;
      puVar9[0xb] = uVar43;
      puVar9[10] = uVar35;
      puVar9[0x16] = uVar11;
      puVar9[0x13] = uVar42;
      puVar9[0x12] = uVar34;
      puVar9[0x15] = uVar26;
      puVar9[0x14] = uVar17;
      puVar9[0x11] = uVar25;
      puVar9[0x10] = uVar16;
      puVar9[1] = uVar29;
      *puVar9 = uVar20;
      puVar9[3] = uVar45;
      puVar9[2] = uVar37;
      puVar9[5] = uVar30;
      puVar9[4] = uVar21;
      puVar9[7] = uVar46;
      puVar9[6] = uVar38;
      *(undefined8 *)(lVar1 + 0xf0) = uVar49;
      *(undefined8 *)(lVar1 + 0xe8) = uVar41;
      *(undefined8 *)(lVar1 + 0xe0) = uVar48;
      *(undefined8 *)(lVar1 + 0xd8) = uVar40;
      *(undefined8 *)(lVar1 + 0xd0) = uVar32;
      *(undefined8 *)(lVar1 + 200) = uVar23;
      *(undefined8 *)(lVar1 + 0x110) = uVar31;
      *(undefined8 *)(lVar1 + 0x108) = uVar22;
      *(undefined8 *)(lVar1 + 0x120) = uVar47;
      *(undefined8 *)(lVar1 + 0x118) = uVar39;
      *(undefined8 *)(lVar1 + 0xb8) = uVar5;
      *(ulong *)(lVar1 + 0xc0) = uVar6;
      *(undefined8 *)(lVar1 + 0x128) = uVar12;
      *(undefined8 *)(lVar1 + 0x100) = uVar33;
      *(undefined8 *)(lVar1 + 0xf8) = uVar24;
    }
    lVar14 = lVar14 + 0x130;
    puVar9 = puVar10 + 0x26;
    puVar13 = puVar10;
    if (puVar10 + 0x26 == param_1 + param_2 * 0x26) {
      return;
    }
  } while( true );
}

