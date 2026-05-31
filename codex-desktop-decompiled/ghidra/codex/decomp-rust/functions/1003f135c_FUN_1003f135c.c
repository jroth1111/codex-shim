
void FUN_1003f135c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_2[4];
  if (*param_2 == -0x8000000000000000) {
    lVar2 = -0x8000000000000000;
    uStack_48 = 0x8000000000000000;
  }
  else {
    func_0x000101149e6c(&uStack_48,param_2[1],param_2[2]);
    lVar2 = param_2[3];
    uStack_58 = uStack_38;
    uStack_60 = uStack_40;
  }
  *(char *)(param_1 + 4) = (char)lVar1;
  *param_1 = uStack_48;
  param_1[2] = uStack_58;
  param_1[1] = uStack_60;
  param_1[3] = lVar2;
  return;
}

