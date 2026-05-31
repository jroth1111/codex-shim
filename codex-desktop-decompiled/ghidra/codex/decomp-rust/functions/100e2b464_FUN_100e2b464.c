
void FUN_100e2b464(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  uVar2 = uVar1 ^ 0x8000000000000000;
  if (-1 < (long)uVar1) {
    uVar2 = 3;
  }
  if (uVar2 < 0xb) {
    if (uVar2 == 3) {
      if (uVar1 != 0) {
        _free(param_1[1]);
      }
      if (param_1[3] != 0) {
        uVar2 = param_1[4];
        goto code_r0x000108aa97c4;
      }
    }
  }
  else if (param_1[1] != 0) {
    uVar2 = param_1[2];
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(uVar2);
    return;
  }
  return;
}

