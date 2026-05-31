
void FUN_108a85ef0(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 1;
  lVar2 = 8;
  uVar3 = 0;
  if ((param_4 >> 0x3c != 0) || (param_4 = param_4 * 0x10, 0x7ffffffffffffff8 < param_4))
  goto LAB_108a85f64;
  if (param_2 == 0) {
    lVar2 = _malloc(param_4);
    if (lVar2 == 0) goto LAB_108a85f50;
LAB_108a85f38:
    uVar1 = 0;
    param_1[1] = lVar2;
  }
  else {
    lVar2 = _realloc(param_3,param_4);
    if (lVar2 != 0) goto LAB_108a85f38;
LAB_108a85f50:
    param_1[1] = 8;
    uVar1 = 1;
  }
  lVar2 = 0x10;
  uVar3 = param_4;
LAB_108a85f64:
  *(ulong *)((long)param_1 + lVar2) = uVar3;
  *param_1 = uVar1;
  return;
}

