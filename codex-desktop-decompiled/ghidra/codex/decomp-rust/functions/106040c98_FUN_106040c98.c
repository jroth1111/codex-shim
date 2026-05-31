
void FUN_106040c98(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  bool bVar4;
  uint uVar5;
  bool bVar6;
  ulong uVar7;
  ulong *puVar8;
  uint uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  
  if (param_1[6] < param_1[2]) {
    uVar9 = 1;
    uVar7 = param_1[0xe];
    uVar11 = param_1[10];
    uVar5 = uVar9;
    if (uVar7 < uVar11) goto LAB_106040d14;
LAB_106040cbc:
    bVar6 = param_1[8] <= param_1[0xc];
    puVar12 = param_1 + 0xc;
    if (uVar11 < uVar7 || bVar6) {
      puVar12 = param_1 + 8;
    }
    lVar14 = 2;
    if (uVar11 < uVar7 || bVar6) {
      lVar14 = 3;
    }
  }
  else {
    bVar6 = param_1[6] <= param_1[2] && param_1[4] < *param_1;
    uVar9 = (uint)bVar6;
    uVar7 = param_1[0xe];
    uVar11 = param_1[10];
    uVar5 = (uint)bVar6;
    if (uVar11 <= uVar7) goto LAB_106040cbc;
LAB_106040d14:
    uVar9 = uVar5;
    puVar12 = param_1 + 0xc;
    lVar14 = 2;
  }
  puVar8 = param_1 + (ulong)(uVar9 ^ 1) * 4;
  puVar1 = param_1 + (ulong)uVar9 * 4;
  param_1 = param_1 + lVar14 * 4;
  puVar10 = param_1;
  puVar13 = puVar1;
  if (puVar12[2] < puVar1[2]) {
    bVar6 = true;
    uVar7 = param_1[2];
    uVar11 = puVar8[2];
    bVar4 = true;
    if (uVar7 < uVar11) goto LAB_106040dc8;
LAB_106040d54:
    puVar2 = puVar12;
    if (uVar11 < uVar7 || *puVar8 <= *param_1) {
      puVar2 = puVar8;
    }
    puVar3 = puVar8;
    if (!bVar4) {
      puVar3 = puVar12;
      puVar13 = puVar2;
      puVar12 = puVar1;
    }
    if (uVar11 < uVar7 || *puVar8 <= *param_1) {
      puVar10 = puVar3;
      puVar8 = param_1;
    }
    uVar7 = puVar10[2];
    uVar11 = puVar13[2];
    param_1 = puVar10;
    if (uVar7 < uVar11) goto LAB_106040e08;
  }
  else {
    bVar6 = puVar12[2] <= puVar1[2] && *puVar12 < *puVar1;
    uVar7 = param_1[2];
    uVar11 = puVar8[2];
    bVar4 = bVar6;
    if (uVar11 <= uVar7) goto LAB_106040d54;
LAB_106040dc8:
    if (!bVar6) {
      puVar13 = puVar12;
      puVar12 = puVar1;
    }
    uVar11 = puVar13[2];
    if (uVar7 < uVar11) goto LAB_106040e08;
  }
  puVar10 = param_1;
  if (uVar11 < uVar7 || *puVar13 <= *param_1) {
    puVar10 = puVar13;
    puVar13 = param_1;
  }
LAB_106040e08:
  uVar7 = *puVar12;
  uVar15 = puVar12[3];
  uVar11 = puVar12[2];
  param_2[1] = puVar12[1];
  *param_2 = uVar7;
  param_2[3] = uVar15;
  param_2[2] = uVar11;
  uVar7 = *puVar10;
  uVar15 = puVar10[3];
  uVar11 = puVar10[2];
  param_2[5] = puVar10[1];
  param_2[4] = uVar7;
  param_2[7] = uVar15;
  param_2[6] = uVar11;
  uVar7 = *puVar13;
  uVar15 = puVar13[3];
  uVar11 = puVar13[2];
  param_2[9] = puVar13[1];
  param_2[8] = uVar7;
  param_2[0xb] = uVar15;
  param_2[10] = uVar11;
  uVar7 = *puVar8;
  uVar15 = puVar8[3];
  uVar11 = puVar8[2];
  param_2[0xd] = puVar8[1];
  param_2[0xc] = uVar7;
  param_2[0xf] = uVar15;
  param_2[0xe] = uVar11;
  return;
}

