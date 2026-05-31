
void FUN_108816b44(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined1 auStack_50 [8];
  long lStack_48;
  long lStack_40;
  undefined1 uStack_31;
  
  lVar1 = param_2[1];
  lStack_40 = param_2[2];
  auStack_50[0] = 5;
  lStack_48 = lVar1;
  FUN_1087e3db0(param_1 + 1,auStack_50,&uStack_31,&UNK_10b21b370);
  *param_1 = 4;
  if (*param_2 != 0) {
    _free(lVar1);
  }
  return;
}

