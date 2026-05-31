
void FUN_106040b18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  
  uVar11 = param_1[4];
  uVar7 = param_1[1];
  uVar4 = uVar11;
  if (uVar7 <= uVar11) {
    uVar4 = uVar7;
  }
  iVar10 = _memcmp(param_1[3],*param_1,uVar4);
  uVar4 = uVar11 - uVar7;
  if (iVar10 != 0) {
    uVar4 = (long)iVar10;
  }
  uVar11 = param_1[10];
  uVar8 = param_1[7];
  uVar7 = uVar11;
  if (uVar8 <= uVar11) {
    uVar7 = uVar8;
  }
  iVar10 = _memcmp(param_1[9],param_1[6],uVar7);
  lVar5 = uVar11 - uVar8;
  if (iVar10 != 0) {
    lVar5 = (long)iVar10;
  }
  puVar14 = param_1 + ((long)uVar4 >> 0x3f) * -3;
  puVar13 = param_1 + ((long)~uVar4 >> 0x3f) * -3;
  lVar2 = 0x48;
  if (-1 < lVar5) {
    lVar2 = 0x30;
  }
  puVar1 = (undefined8 *)((long)param_1 + lVar2);
  lVar2 = 0x30;
  if (-1 < lVar5) {
    lVar2 = 0x48;
  }
  param_1 = (undefined8 *)((long)param_1 + lVar2);
  uVar7 = puVar1[1];
  uVar11 = puVar14[1];
  uVar4 = uVar7;
  if (uVar11 <= uVar7) {
    uVar4 = uVar11;
  }
  iVar10 = _memcmp(*puVar1,*puVar14,uVar4);
  lVar5 = uVar7 - uVar11;
  if (iVar10 != 0) {
    lVar5 = (long)iVar10;
  }
  uVar7 = param_1[1];
  uVar11 = puVar13[1];
  uVar4 = uVar7;
  if (uVar11 <= uVar7) {
    uVar4 = uVar11;
  }
  iVar10 = _memcmp(*param_1,*puVar13,uVar4);
  lVar2 = uVar7 - uVar11;
  if (iVar10 != 0) {
    lVar2 = (long)iVar10;
  }
  puVar6 = puVar1;
  if (-1 < lVar2) {
    puVar6 = puVar13;
  }
  puVar3 = puVar13;
  puVar9 = puVar14;
  if (-1 < lVar5) {
    puVar3 = puVar1;
    puVar9 = puVar6;
    puVar1 = puVar14;
  }
  puVar14 = param_1;
  if (-1 < lVar2) {
    puVar14 = puVar3;
    puVar13 = param_1;
  }
  uVar7 = puVar14[1];
  uVar11 = puVar9[1];
  uVar4 = uVar7;
  if (uVar11 <= uVar7) {
    uVar4 = uVar11;
  }
  iVar10 = _memcmp(*puVar14,*puVar9,uVar4);
  lVar5 = uVar7 - uVar11;
  if (iVar10 != 0) {
    lVar5 = (long)iVar10;
  }
  puVar6 = puVar9;
  if (-1 < lVar5) {
    puVar6 = puVar14;
    puVar14 = puVar9;
  }
  uVar15 = puVar1[1];
  uVar12 = *puVar1;
  param_2[2] = puVar1[2];
  param_2[1] = uVar15;
  *param_2 = uVar12;
  uVar12 = puVar14[2];
  uVar15 = *puVar14;
  param_2[4] = puVar14[1];
  param_2[3] = uVar15;
  param_2[5] = uVar12;
  uVar12 = puVar6[2];
  uVar15 = *puVar6;
  param_2[7] = puVar6[1];
  param_2[6] = uVar15;
  param_2[8] = uVar12;
  uVar12 = puVar13[2];
  uVar15 = *puVar13;
  param_2[10] = puVar13[1];
  param_2[9] = uVar15;
  param_2[0xb] = uVar12;
  return;
}

