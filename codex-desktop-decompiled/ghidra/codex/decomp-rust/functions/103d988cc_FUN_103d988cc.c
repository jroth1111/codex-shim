
void FUN_103d988cc(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1[1];
  for (uVar2 = (ulong)(param_1[3] - param_1[1]) >> 6; uVar2 != 0; uVar2 = uVar2 - 1) {
    func_0x000103db23f4(lVar1);
    func_0x000103db23f4(lVar1 + 0x20);
    lVar1 = lVar1 + 0x40;
  }
  if (param_1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(*param_1);
    return;
  }
  return;
}

