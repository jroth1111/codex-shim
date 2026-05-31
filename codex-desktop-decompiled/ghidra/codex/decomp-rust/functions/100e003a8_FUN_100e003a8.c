
void FUN_100e003a8(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (param_1[5] != 0) {
    _free(param_1[6]);
  }
  if (param_1[8] == 0x8000000000000000 || param_1[8] == 0) {
    uVar1 = param_1[0xb];
  }
  else {
    _free(param_1[9]);
    uVar1 = param_1[0xb];
  }
  if (uVar1 != 0) {
    _free(param_1[0xc]);
  }
  lVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    lVar2 = 1;
  }
  if ((lVar2 == 0) || (lVar2 != 1)) {
    if (param_1[1] == 0) {
      return;
    }
    lVar2 = 0x10;
  }
  else {
    if (param_1[2] == 0) {
      return;
    }
    lVar2 = 0x18;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)((long)param_1 + lVar2));
  return;
}

