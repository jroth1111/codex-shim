
void FUN_107c03c70(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_4 < 0) {
    param_4 = 0;
    uVar1 = 1;
    lVar2 = 8;
    goto LAB_1087c9184;
  }
  if (param_2 == 0) {
    if (param_4 == 0) {
      lVar2 = 1;
    }
    else {
      lVar2 = _malloc(param_4);
      if (lVar2 == 0) goto LAB_1087c9168;
    }
LAB_1087c9178:
    uVar1 = 0;
    param_1[1] = lVar2;
  }
  else {
    lVar2 = _realloc(param_3,param_4);
    if (lVar2 != 0) goto LAB_1087c9178;
LAB_1087c9168:
    uVar1 = 1;
    param_1[1] = 1;
  }
  lVar2 = 0x10;
LAB_1087c9184:
  *(long *)((long)param_1 + lVar2) = param_4;
  *param_1 = uVar1;
  return;
}

