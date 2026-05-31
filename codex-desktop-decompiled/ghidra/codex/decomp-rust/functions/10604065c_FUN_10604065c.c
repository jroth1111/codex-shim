
ulong * FUN_10604065c(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (ulong *)FUN_10604065c(param_1,param_1 + param_4 * 8,param_1 + param_4 * 0xe,param_4);
    param_2 = (ulong *)FUN_10604065c(param_2,param_2 + param_4 * 8,param_2 + param_4 * 0xe,param_4);
    param_3 = (ulong *)FUN_10604065c(param_3,param_3 + param_4 * 8,param_3 + param_4 * 0xe,param_4);
  }
  uVar2 = *param_1;
  uVar3 = *param_2;
  puVar1 = param_3;
  if (uVar2 < uVar3 == uVar3 < *param_3) {
    puVar1 = param_2;
  }
  if (uVar2 < uVar3 == uVar2 < *param_3) {
    param_1 = puVar1;
  }
  return param_1;
}

