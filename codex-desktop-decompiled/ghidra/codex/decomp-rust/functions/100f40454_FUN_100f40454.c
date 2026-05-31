
void FUN_100f40454(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = param_1[2];
  if (lVar2 == *param_1) {
    func_0x0001088f86e8(param_1);
  }
  puVar1 = (undefined8 *)(param_1[1] + lVar2 * 0x50);
  uVar3 = param_2[4];
  uVar5 = param_2[7];
  uVar4 = param_2[6];
  puVar1[5] = param_2[5];
  puVar1[4] = uVar3;
  puVar1[7] = uVar5;
  puVar1[6] = uVar4;
  uVar3 = param_2[8];
  puVar1[9] = param_2[9];
  puVar1[8] = uVar3;
  uVar5 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  puVar1[1] = param_2[1];
  *puVar1 = uVar5;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  param_1[2] = lVar2 + 1;
  return;
}

