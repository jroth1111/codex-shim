
void FUN_103949774(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar12 = *(ulong *)(param_1 + 0x60);
  uVar8 = *(ulong *)(param_1 + 0x10);
  uVar6 = uVar12;
  if (uVar8 <= uVar12) {
    uVar6 = uVar8;
  }
  iVar11 = _memcmp(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 8),uVar6);
  uVar6 = uVar12 - uVar8;
  if (iVar11 != 0) {
    uVar6 = (long)iVar11;
  }
  uVar12 = *(ulong *)(param_1 + 0x100);
  uVar9 = *(ulong *)(param_1 + 0xb0);
  uVar8 = uVar12;
  if (uVar9 <= uVar12) {
    uVar8 = uVar9;
  }
  iVar11 = _memcmp(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0xa8),uVar8);
  lVar7 = uVar12 - uVar9;
  if (iVar11 != 0) {
    lVar7 = (long)iVar11;
  }
  puVar14 = (undefined8 *)(param_1 + ((long)uVar6 >> 0x3f) * -0x50);
  puVar13 = (undefined8 *)(param_1 + ((long)~uVar6 >> 0x3f) * -0x50);
  lVar3 = 0xf0;
  if (-1 < lVar7) {
    lVar3 = 0xa0;
  }
  puVar1 = (undefined8 *)(param_1 + lVar3);
  lVar3 = 0xa0;
  if (-1 < lVar7) {
    lVar3 = 0xf0;
  }
  puVar2 = (undefined8 *)(param_1 + lVar3);
  uVar8 = puVar1[2];
  uVar12 = puVar14[2];
  uVar6 = uVar8;
  if (uVar12 <= uVar8) {
    uVar6 = uVar12;
  }
  iVar11 = _memcmp(puVar1[1],puVar14[1],uVar6);
  lVar7 = uVar8 - uVar12;
  if (iVar11 != 0) {
    lVar7 = (long)iVar11;
  }
  uVar8 = puVar2[2];
  uVar12 = puVar13[2];
  uVar6 = uVar8;
  if (uVar12 <= uVar8) {
    uVar6 = uVar12;
  }
  iVar11 = _memcmp(puVar2[1],puVar13[1],uVar6);
  lVar3 = uVar8 - uVar12;
  if (iVar11 != 0) {
    lVar3 = (long)iVar11;
  }
  puVar4 = puVar1;
  if (-1 < lVar3) {
    puVar4 = puVar13;
  }
  puVar5 = puVar13;
  puVar10 = puVar14;
  if (-1 < lVar7) {
    puVar5 = puVar1;
    puVar10 = puVar4;
    puVar1 = puVar14;
  }
  puVar14 = puVar2;
  if (-1 < lVar3) {
    puVar14 = puVar5;
    puVar13 = puVar2;
  }
  uVar8 = puVar14[2];
  uVar12 = puVar10[2];
  uVar6 = uVar8;
  if (uVar12 <= uVar8) {
    uVar6 = uVar12;
  }
  iVar11 = _memcmp(puVar14[1],puVar10[1],uVar6);
  lVar7 = uVar8 - uVar12;
  if (iVar11 != 0) {
    lVar7 = (long)iVar11;
  }
  puVar2 = puVar10;
  if (-1 < lVar7) {
    puVar2 = puVar14;
    puVar14 = puVar10;
  }
  uVar15 = *puVar1;
  param_2[1] = puVar1[1];
  *param_2 = uVar15;
  uVar16 = puVar1[3];
  uVar15 = puVar1[2];
  uVar18 = puVar1[5];
  uVar17 = puVar1[4];
  uVar19 = puVar1[6];
  uVar21 = puVar1[9];
  uVar20 = puVar1[8];
  param_2[7] = puVar1[7];
  param_2[6] = uVar19;
  param_2[9] = uVar21;
  param_2[8] = uVar20;
  param_2[3] = uVar16;
  param_2[2] = uVar15;
  param_2[5] = uVar18;
  param_2[4] = uVar17;
  uVar16 = puVar14[3];
  uVar15 = puVar14[2];
  uVar18 = puVar14[5];
  uVar17 = puVar14[4];
  uVar19 = puVar14[6];
  uVar21 = puVar14[9];
  uVar20 = puVar14[8];
  param_2[0x11] = puVar14[7];
  param_2[0x10] = uVar19;
  param_2[0x13] = uVar21;
  param_2[0x12] = uVar20;
  param_2[0xd] = uVar16;
  param_2[0xc] = uVar15;
  param_2[0xf] = uVar18;
  param_2[0xe] = uVar17;
  uVar15 = *puVar14;
  param_2[0xb] = puVar14[1];
  param_2[10] = uVar15;
  uVar15 = *puVar2;
  param_2[0x15] = puVar2[1];
  param_2[0x14] = uVar15;
  uVar15 = puVar2[6];
  uVar17 = puVar2[9];
  uVar16 = puVar2[8];
  uVar21 = puVar2[3];
  uVar20 = puVar2[2];
  uVar19 = puVar2[5];
  uVar18 = puVar2[4];
  param_2[0x1b] = puVar2[7];
  param_2[0x1a] = uVar15;
  param_2[0x1d] = uVar17;
  param_2[0x1c] = uVar16;
  param_2[0x17] = uVar21;
  param_2[0x16] = uVar20;
  param_2[0x19] = uVar19;
  param_2[0x18] = uVar18;
  uVar16 = puVar13[3];
  uVar15 = puVar13[2];
  uVar18 = puVar13[5];
  uVar17 = puVar13[4];
  uVar19 = puVar13[6];
  uVar21 = puVar13[9];
  uVar20 = puVar13[8];
  param_2[0x25] = puVar13[7];
  param_2[0x24] = uVar19;
  param_2[0x27] = uVar21;
  param_2[0x26] = uVar20;
  param_2[0x21] = uVar16;
  param_2[0x20] = uVar15;
  param_2[0x23] = uVar18;
  param_2[0x22] = uVar17;
  uVar15 = *puVar13;
  param_2[0x1f] = puVar13[1];
  param_2[0x1e] = uVar15;
  return;
}

