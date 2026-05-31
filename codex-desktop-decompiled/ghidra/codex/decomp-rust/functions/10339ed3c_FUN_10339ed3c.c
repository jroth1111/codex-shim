
void FUN_10339ed3c(long param_1)

{
  FUN_103385fd4();
  if (*(long *)(param_1 + 0x1a8) != 0) {
    _free(*(undefined8 *)(param_1 + 0x1b0));
  }
  if (*(long *)(param_1 + 0x1c0) != 0) {
    _free(*(undefined8 *)(param_1 + 0x1c8));
  }
  if (*(long *)(param_1 + 0x1d8) != 0) {
    _free(*(undefined8 *)(param_1 + 0x1e0));
  }
  if (*(long *)(param_1 + 0x1f0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)(param_1 + 0x1f8));
    return;
  }
  return;
}

