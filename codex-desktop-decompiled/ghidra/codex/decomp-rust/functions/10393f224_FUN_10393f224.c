
void FUN_10393f224(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  if ((param_1[6] & 0x7fffffffffffffffU) == 0) {
    FUN_1039415f0(param_1 + 9);
    uVar1 = param_1[0x15];
  }
  else {
    _free(param_1[7]);
    FUN_1039415f0(param_1 + 9);
    uVar1 = param_1[0x15];
  }
  if ((uVar1 & 0x7fffffffffffffff) == 0) {
    lVar2 = param_1[0x19];
  }
  else {
    _free(param_1[0x16]);
    lVar2 = param_1[0x19];
  }
  if (lVar2 == -0x8000000000000000) {
    lVar2 = param_1[4];
    lVar3 = param_1[5];
  }
  else {
    FUN_103940464();
    lVar2 = param_1[4];
    lVar3 = param_1[5];
  }
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(lVar2 + 8);
    do {
      if (puVar4[-1] != 0) {
        _free(*puVar4);
      }
      puVar4 = puVar4 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (param_1[3] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar2);
    return;
  }
  return;
}

