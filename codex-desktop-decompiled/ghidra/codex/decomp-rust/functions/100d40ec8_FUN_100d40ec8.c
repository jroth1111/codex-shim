
void FUN_100d40ec8(ulong *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)((long)param_1 + 0x31);
  if (cVar1 == '\0') {
    if ((*param_1 & 0x7fffffffffffffff) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[1]);
      return;
    }
  }
  else {
    if (cVar1 == '\x03') {
      func_0x000100d54a84(param_1 + 7);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_100db1748(param_1 + 7);
    }
    *(undefined1 *)((long)param_1 + 0x33) = 0;
    if (((*(byte *)((long)param_1 + 0x32) & 1) != 0) && ((param_1[0x22] & 0x7fffffffffffffff) != 0))
    {
      _free(param_1[0x23]);
    }
    *(undefined1 *)((long)param_1 + 0x32) = 0;
  }
  return;
}

