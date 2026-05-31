
void FUN_103949ffc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  char cVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  cVar7 = FUN_1038d9fcc(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  cVar8 = FUN_1038d9fcc(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  puVar11 = (undefined8 *)(param_1 + (ulong)(cVar7 == -1) * 0x18);
  puVar10 = (undefined8 *)(param_1 + (ulong)(cVar7 != -1) * 0x18);
  lVar3 = 0x48;
  if (cVar8 != -1) {
    lVar3 = 0x30;
  }
  puVar1 = (undefined8 *)(param_1 + lVar3);
  lVar3 = 0x30;
  if (cVar8 != -1) {
    lVar3 = 0x48;
  }
  puVar2 = (undefined8 *)(param_1 + lVar3);
  cVar7 = FUN_1038d9fcc(puVar1[1],puVar1[2],puVar11[1],puVar11[2]);
  cVar8 = FUN_1038d9fcc(puVar2[1],puVar2[2],puVar10[1],puVar10[2]);
  puVar4 = puVar1;
  if (cVar8 != -1) {
    puVar4 = puVar10;
  }
  puVar5 = puVar10;
  puVar6 = puVar11;
  if (cVar7 != -1) {
    puVar5 = puVar1;
    puVar6 = puVar4;
    puVar1 = puVar11;
  }
  puVar11 = puVar2;
  if (cVar8 != -1) {
    puVar11 = puVar5;
    puVar10 = puVar2;
  }
  cVar7 = FUN_1038d9fcc(puVar11[1],puVar11[2],puVar6[1],puVar6[2]);
  puVar2 = puVar6;
  if (cVar7 != -1) {
    puVar2 = puVar11;
    puVar11 = puVar6;
  }
  uVar12 = puVar1[1];
  uVar9 = *puVar1;
  param_2[2] = puVar1[2];
  param_2[1] = uVar12;
  *param_2 = uVar9;
  uVar9 = puVar11[2];
  uVar12 = *puVar11;
  param_2[4] = puVar11[1];
  param_2[3] = uVar12;
  param_2[5] = uVar9;
  uVar9 = puVar2[2];
  uVar12 = *puVar2;
  param_2[7] = puVar2[1];
  param_2[6] = uVar12;
  param_2[8] = uVar9;
  uVar9 = puVar10[2];
  uVar12 = *puVar10;
  param_2[10] = puVar10[1];
  param_2[9] = uVar12;
  param_2[0xb] = uVar9;
  return;
}

