
void FUN_100ca5ddc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)((long)param_1 + 0x19a1) == '\0') {
    lVar1 = param_1[1];
    lVar3 = param_1[2] + 1;
    lVar2 = lVar1;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
      FUN_100e02a24(lVar2);
      lVar2 = lVar2 + 0xc0;
    }
    if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar1);
      return;
    }
  }
  else if (*(char *)((long)param_1 + 0x19a1) == '\x03') {
    FUN_100d41eac(param_1 + 8);
    lVar1 = param_1[6];
    lVar3 = param_1[7] + 1;
    lVar2 = lVar1;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
      FUN_100e02a24(lVar2);
      lVar2 = lVar2 + 0xc0;
    }
    if (param_1[5] != 0) {
      _free(lVar1);
    }
    *(undefined1 *)((long)param_1 + 0x19a2) = 0;
  }
  return;
}

