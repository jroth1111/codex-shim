
undefined8 *
FUN_1039cf408(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (undefined8 *)
              FUN_1039cf408(param_1,param_1 + param_4 * 4,param_1 + param_4 * 7,param_4);
    param_2 = (undefined8 *)
              FUN_1039cf408(param_2,param_2 + param_4 * 4,param_2 + param_4 * 7,param_4);
    param_3 = (undefined8 *)
              FUN_1039cf408(param_3,param_3 + param_4 * 4,param_3 + param_4 * 7,param_4);
  }
  iVar1 = func_0x0001039d29fc(*param_1,*param_2);
  iVar2 = func_0x0001039d29fc(*param_1,*param_3);
  if ((iVar1 == iVar2) &&
     (iVar2 = func_0x0001039d29fc(*param_2,*param_3), param_1 = param_3, iVar1 == iVar2)) {
    param_1 = param_2;
  }
  return param_1;
}

