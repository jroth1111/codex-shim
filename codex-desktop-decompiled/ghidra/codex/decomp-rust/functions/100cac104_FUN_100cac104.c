
void FUN_100cac104(long param_1)

{
  FUN_100e17918();
  if (*(long *)(param_1 + 0x90) < -0x7ffffffffffffffe || *(long *)(param_1 + 0x90) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)(param_1 + 0x98));
  return;
}

