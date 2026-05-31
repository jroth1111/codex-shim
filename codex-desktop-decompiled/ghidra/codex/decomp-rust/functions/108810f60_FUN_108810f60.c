
void FUN_108810f60(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_48 [8];
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_3[1];
  lStack_38 = param_3[2];
  auStack_48[0] = 5;
  lStack_40 = lVar1;
  FUN_1087e3db0(param_1,auStack_48,param_2,&UNK_10b219630);
  if (*param_3 != 0) {
    _free(lVar1);
  }
  return;
}

