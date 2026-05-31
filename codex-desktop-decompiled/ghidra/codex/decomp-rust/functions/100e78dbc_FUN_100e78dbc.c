
void FUN_100e78dbc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if (lVar4 != -0x8000000000000000) {
    lVar2 = param_1[1];
    lVar1 = lVar2;
    for (lVar3 = param_1[2]; lVar3 != 0; lVar3 = lVar3 + -1) {
      FUN_100e0f5d0(lVar1);
      lVar1 = lVar1 + 0x1f8;
    }
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar2);
      return;
    }
  }
  return;
}

