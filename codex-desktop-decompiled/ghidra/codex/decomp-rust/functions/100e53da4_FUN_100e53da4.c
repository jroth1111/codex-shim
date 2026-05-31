
void FUN_100e53da4(ulong *param_1)

{
  if (*param_1 < 3) {
                    /* WARNING: Could not recover jumptable at 0x000100e53dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
    return;
  }
  if (*param_1 == 3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100e53e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[3] + 0x20))(param_1 + 6,param_1[4],param_1[5]);
  return;
}

