
void FUN_100e1ecb8(long *param_1)

{
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x000100e1ecf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[3] + 0x20))(param_1 + 6,param_1[4],param_1[5]);
  return;
}

