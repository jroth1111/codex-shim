
void FUN_100dfe50c(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar3 = 6;
  }
  if ((long)uVar3 < 3) {
    if (uVar3 == 0) {
      if (param_1[1] == 0x8000000000000000 || param_1[1] == 0) {
        return;
      }
    }
    else {
      if ((uVar3 != 1) && (uVar3 != 2)) goto LAB_100dfe5b8;
      if ((param_1[1] & 0x7fffffffffffffff) == 0) {
        return;
      }
    }
    puVar2 = (ulong *)param_1[2];
  }
  else {
    if (uVar3 - 3 < 2) {
      return;
    }
    if (uVar3 == 5) {
      puVar2 = (ulong *)param_1[2];
      lVar4 = param_1[3] + 1;
      puVar1 = puVar2;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        FUN_100dfe50c(puVar1);
        puVar1 = puVar1 + 0xc;
      }
      if (param_1[1] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
LAB_100dfe5b8:
    uVar3 = param_1[4];
    if ((uVar3 != 0) && (uVar3 * 9 != -0x11)) {
      _free(param_1[3] + uVar3 * -8 + -8);
    }
    puVar2 = (ulong *)param_1[1];
    lVar4 = param_1[2] + 1;
    puVar1 = puVar2;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      if ((*puVar1 & 0x7fffffffffffffff) != 0) {
        _free(puVar1[1]);
      }
      FUN_100dfe50c(puVar1 + 5);
      puVar1 = puVar1 + 0x12;
    }
    if (*param_1 == 0) {
      return;
    }
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar2);
  return;
}

