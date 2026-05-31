
void FUN_100d40db0(long *param_1)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = *(byte *)(param_1 + 0x19);
  if (bVar1 < 4) {
    if (bVar1 == 0) {
      if ((param_1[3] & 0x7fffffffffffffffU) == 0) {
        lVar2 = *param_1;
      }
      else {
        _free(param_1[4]);
        lVar2 = *param_1;
      }
      if (lVar2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[1]);
      return;
    }
    if (bVar1 != 3) {
      return;
    }
    FUN_100d500d8(param_1 + 0x1a);
  }
  else if (bVar1 == 4) {
    FUN_100db1748(param_1 + 0x1a);
  }
  else {
    if (bVar1 != 5) {
      return;
    }
    FUN_100d6c6a4(param_1 + 0x1a);
  }
  *(undefined1 *)((long)param_1 + 0xcb) = 0;
  if (param_1[9] != 0) {
    _free(param_1[10]);
  }
  if (((*(byte *)((long)param_1 + 0xca) & 1) != 0) && ((param_1[0x185] & 0x7fffffffffffffffU) != 0))
  {
    _free(param_1[0x186]);
  }
  *(undefined1 *)((long)param_1 + 0xca) = 0;
  return;
}

