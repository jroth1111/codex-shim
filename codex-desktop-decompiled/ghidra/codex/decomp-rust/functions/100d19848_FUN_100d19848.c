
void FUN_100d19848(undefined8 *param_1)

{
  FUN_100cb5f44(param_1[1],(ulong)(param_1[3] - param_1[1]) >> 3);
  if (param_1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(*param_1);
    return;
  }
  return;
}

