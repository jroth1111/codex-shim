
void FUN_100e28738(long *param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  
  lVar2 = param_1[4];
  if (lVar2 != 0 && lVar2 * 9 != -0x11) {
    _free(param_1[3] + lVar2 * -8 + -8);
  }
  puVar1 = (ulong *)param_1[1];
  lVar2 = param_1[2] + 1;
  puVar3 = puVar1;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
    if ((*puVar3 & 0x7fffffffffffffff) != 0) {
      _free(puVar3[1]);
    }
    FUN_100dfe50c(puVar3 + 5);
    puVar3 = puVar3 + 0x12;
  }
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(puVar1);
    return;
  }
  return;
}

