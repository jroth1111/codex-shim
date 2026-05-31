
long FUN_108a4a02c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar1 = FUN_108a499a0(param_2,param_1);
    _free(param_1);
  }
  return lVar1;
}

