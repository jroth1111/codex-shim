
void FUN_102c48988(long param_1,undefined8 *param_2)

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
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  
  uVar12 = *(ulong *)(param_1 + 0x28);
  uVar8 = *(ulong *)(param_1 + 0x10);
  uVar6 = uVar12;
  if (uVar8 <= uVar12) {
    uVar6 = uVar8;
  }
  iVar11 = _memcmp(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 8),uVar6);
  uVar6 = uVar12 - uVar8;
  if (iVar11 != 0) {
    uVar6 = (long)iVar11;
  }
  uVar12 = *(ulong *)(param_1 + 0x58);
  uVar9 = *(ulong *)(param_1 + 0x40);
  uVar8 = uVar12;
  if (uVar9 <= uVar12) {
    uVar8 = uVar9;
  }
  iVar11 = _memcmp(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x38),uVar8);
  lVar7 = uVar12 - uVar9;
  if (iVar11 != 0) {
    lVar7 = (long)iVar11;
  }
  puVar15 = (undefined8 *)(param_1 + ((long)uVar6 >> 0x3f) * -0x18);
  puVar14 = (undefined8 *)(param_1 + ((long)~uVar6 >> 0x3f) * -0x18);
  lVar3 = 0x48;
  if (-1 < lVar7) {
    lVar3 = 0x30;
  }
  puVar1 = (undefined8 *)(param_1 + lVar3);
  lVar3 = 0x30;
  if (-1 < lVar7) {
    lVar3 = 0x48;
  }
  puVar2 = (undefined8 *)(param_1 + lVar3);
  uVar8 = puVar1[2];
  uVar12 = puVar15[2];
  uVar6 = uVar8;
  if (uVar12 <= uVar8) {
    uVar6 = uVar12;
  }
  iVar11 = _memcmp(puVar1[1],puVar15[1],uVar6);
  lVar7 = uVar8 - uVar12;
  if (iVar11 != 0) {
    lVar7 = (long)iVar11;
  }
  uVar8 = puVar2[2];
  uVar12 = puVar14[2];
  uVar6 = uVar8;
  if (uVar12 <= uVar8) {
    uVar6 = uVar12;
  }
  iVar11 = _memcmp(puVar2[1],puVar14[1],uVar6);
  lVar3 = uVar8 - uVar12;
  if (iVar11 != 0) {
    lVar3 = (long)iVar11;
  }
  puVar4 = puVar1;
  if (-1 < lVar3) {
    puVar4 = puVar14;
  }
  puVar5 = puVar14;
  puVar10 = puVar15;
  if (-1 < lVar7) {
    puVar5 = puVar1;
    puVar10 = puVar4;
    puVar1 = puVar15;
  }
  puVar15 = puVar2;
  if (-1 < lVar3) {
    puVar15 = puVar5;
    puVar14 = puVar2;
  }
  uVar8 = puVar15[2];
  uVar12 = puVar10[2];
  uVar6 = uVar8;
  if (uVar12 <= uVar8) {
    uVar6 = uVar12;
  }
  iVar11 = _memcmp(puVar15[1],puVar10[1],uVar6);
  lVar7 = uVar8 - uVar12;
  if (iVar11 != 0) {
    lVar7 = (long)iVar11;
  }
  puVar2 = puVar10;
  if (-1 < lVar7) {
    puVar2 = puVar15;
    puVar15 = puVar10;
  }
  uVar16 = puVar1[1];
  uVar13 = *puVar1;
  param_2[2] = puVar1[2];
  param_2[1] = uVar16;
  *param_2 = uVar13;
  uVar13 = puVar15[2];
  uVar16 = *puVar15;
  param_2[4] = puVar15[1];
  param_2[3] = uVar16;
  param_2[5] = uVar13;
  uVar13 = puVar2[2];
  uVar16 = *puVar2;
  param_2[7] = puVar2[1];
  param_2[6] = uVar16;
  param_2[8] = uVar13;
  uVar13 = puVar14[2];
  uVar16 = *puVar14;
  param_2[10] = puVar14[1];
  param_2[9] = uVar16;
  param_2[0xb] = uVar13;
  return;
}

