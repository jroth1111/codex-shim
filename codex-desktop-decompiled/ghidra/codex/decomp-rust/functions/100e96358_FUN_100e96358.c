
void FUN_100e96358(undefined8 *param_1,long param_2)

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
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar12 = 0;
  puVar1 = param_1 + 10;
  puVar9 = param_1;
  do {
    puVar10 = puVar1;
    uVar5 = puVar9[0xb];
    uVar6 = puVar9[0xc];
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
      uVar13 = puVar9[10];
      uVar17 = puVar9[0xe];
      uVar15 = puVar9[0xd];
      uVar20 = puVar9[0x10];
      uVar19 = puVar9[0xf];
      uVar18 = puVar9[0x12];
      uVar16 = puVar9[0x11];
      uVar11 = puVar9[0x13];
      lVar2 = lVar12;
      do {
        lVar14 = lVar2;
        puVar1 = (undefined8 *)((long)param_1 + lVar14);
        puVar1[0xf] = puVar1[5];
        puVar1[0xe] = puVar1[4];
        puVar1[0x11] = puVar1[7];
        puVar1[0x10] = puVar1[6];
        puVar1[0x13] = puVar1[9];
        puVar1[0x12] = puVar1[8];
        puVar1[0xb] = puVar1[1];
        puVar1[10] = *puVar1;
        puVar1[0xd] = puVar1[3];
        puVar1[0xc] = puVar1[2];
        puVar9 = param_1;
        if (lVar14 == 0) goto LAB_100e96398;
        uVar7 = puVar1[-8];
        uVar3 = uVar6;
        if (uVar7 <= uVar6) {
          uVar3 = uVar7;
        }
        iVar8 = _memcmp(uVar5,puVar1[-9],uVar3);
        lVar4 = uVar6 - uVar7;
        if (iVar8 != 0) {
          lVar4 = (long)iVar8;
        }
        lVar2 = lVar14 + -0x50;
      } while (lVar4 < 0);
      puVar9 = (undefined8 *)((long)param_1 + lVar14);
LAB_100e96398:
      *puVar9 = uVar13;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[4] = uVar17;
      puVar1[3] = uVar15;
      puVar1[6] = uVar20;
      puVar1[5] = uVar19;
      puVar1[8] = uVar18;
      puVar1[7] = uVar16;
      puVar1[9] = uVar11;
    }
    puVar1 = puVar10 + 10;
    lVar12 = lVar12 + 0x50;
    puVar9 = puVar10;
    if (puVar1 == param_1 + param_2 * 10) {
      return;
    }
  } while( true );
}

