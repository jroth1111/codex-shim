
void FUN_100d92798(long *param_1)

{
  long *plVar1;
  
  if ((char)param_1[4] == '\0') {
    if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[1]);
      return;
    }
  }
  else if ((char)param_1[4] == '\x03') {
    plVar1 = (long *)param_1[3];
    if (*plVar1 != 0xcc) {
                    /* WARNING: Could not recover jumptable at 0x000100d927c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(plVar1[2] + 0x20))();
      return;
    }
    *plVar1 = 0x84;
  }
  return;
}

