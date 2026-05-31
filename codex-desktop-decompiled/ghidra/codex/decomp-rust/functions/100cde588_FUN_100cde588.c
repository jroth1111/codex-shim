
void FUN_100cde588(ulong *param_1)

{
  long lVar1;
  
  if ((char)param_1[0x32] == '\0') {
    if ((*param_1 & 0x7fffffffffffffff) == 0) {
      return;
    }
    lVar1 = 8;
  }
  else {
    if (((char)param_1[0x32] != '\x03') ||
       (FUN_100cb96cc(param_1 + 9), (param_1[4] & 0x7fffffffffffffff) == 0)) {
      return;
    }
    lVar1 = 0x28;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)((long)param_1 + lVar1));
  return;
}

