
void FUN_105dc68fc(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*param_1 == 0x8000000000000005) {
    uVar1 = param_1[1];
    FUN_105dc6d4c(uVar1);
    goto code_r0x000108aa97c4;
  }
  uVar2 = *param_1;
  uVar1 = uVar2 ^ 0x8000000000000000;
  if (-1 < (long)uVar2) {
    uVar1 = 5;
  }
  if (2 < uVar1) {
    if (uVar1 == 3) {
      if (param_1[1] != 0) {
        uVar1 = param_1[2];
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(uVar1);
        return;
      }
    }
    else {
      if (uVar1 == 4) {
        uVar1 = param_1[2];
        lVar3 = param_1[3] + 1;
        uVar2 = uVar1;
        while (lVar3 = lVar3 + -1, lVar3 != 0) {
          FUN_105dc6c20(uVar2);
          uVar2 = uVar2 + 0x48;
        }
        uVar2 = param_1[1];
      }
      else {
        uVar1 = param_1[4];
        if ((uVar1 != 0) && (uVar1 * 9 != -0x11)) {
          _free(param_1[3] + uVar1 * -8 + -8);
        }
        uVar1 = param_1[1];
        FUN_105dc6958(uVar1,param_1[2]);
      }
      if (uVar2 != 0) goto code_r0x000108aa97c4;
    }
  }
  return;
}

