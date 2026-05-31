
void FUN_100e1fd94(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = (param_1[0x14] - (long)param_1[0x12] >> 4) * -0x71c71c71c71c71c7 + 1;
  puVar2 = (ulong *)param_1[0x12];
  while (lVar5 = lVar5 + -1, lVar5 != 0) {
    if ((*puVar2 & 0x7fffffffffffffff) != 0) {
      _free(puVar2[1]);
    }
    FUN_100dfe50c(puVar2 + 5);
    puVar2 = puVar2 + 0x12;
  }
  if (param_1[0x13] != 0) {
    _free(param_1[0x11]);
  }
  if (*param_1 == 0x8000000000000001) {
    return;
  }
  if ((*param_1 & 0x7fffffffffffffff) != 0) {
    _free(param_1[1]);
  }
  uVar3 = param_1[5];
  uVar4 = uVar3 ^ 0x8000000000000000;
  if (-1 < (long)uVar3) {
    uVar4 = 6;
  }
  if ((long)uVar4 < 3) {
    if (uVar4 == 0) {
      if (param_1[6] == 0x8000000000000000 || param_1[6] == 0) {
        return;
      }
    }
    else {
      if ((uVar4 != 1) && (uVar4 != 2)) goto LAB_100dfe5b8;
      if ((param_1[6] & 0x7fffffffffffffff) == 0) {
        return;
      }
    }
    puVar2 = (ulong *)param_1[7];
  }
  else {
    if (uVar4 - 3 < 2) {
      return;
    }
    if (uVar4 == 5) {
      puVar2 = (ulong *)param_1[7];
      lVar5 = param_1[8] + 1;
      puVar1 = puVar2;
      while (lVar5 = lVar5 + -1, lVar5 != 0) {
        FUN_100dfe50c(puVar1);
        puVar1 = puVar1 + 0xc;
      }
      if (param_1[6] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
LAB_100dfe5b8:
    uVar4 = param_1[9];
    if ((uVar4 != 0) && (uVar4 * 9 != -0x11)) {
      _free(param_1[8] + uVar4 * -8 + -8);
    }
    puVar2 = (ulong *)param_1[6];
    lVar5 = param_1[7] + 1;
    puVar1 = puVar2;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      if ((*puVar1 & 0x7fffffffffffffff) != 0) {
        _free(puVar1[1]);
      }
      FUN_100dfe50c(puVar1 + 5);
      puVar1 = puVar1 + 0x12;
    }
    if (param_1[5] == 0) {
      return;
    }
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar2);
  return;
}

