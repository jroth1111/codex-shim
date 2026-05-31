
void FUN_1017a968c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = ((ulong)(param_1[3] - param_1[1]) >> 5) + 1;
  lVar1 = param_1[1];
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
    func_0x0001017a6a48(lVar1);
    lVar1 = lVar1 + 0x20;
  }
  if (param_1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(*param_1);
    return;
  }
  return;
}

