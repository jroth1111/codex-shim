
void FUN_100e84cd8(long param_1)

{
  if (*(char *)(param_1 + 0x568) == '\x03') {
    FUN_100cf2ae0(param_1 + 0x60);
    if (*(long *)(param_1 + 0x10) != 0) {
      _free(*(undefined8 *)(param_1 + 0x18));
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      _free(*(undefined8 *)(param_1 + 0x30));
    }
    if (*(long *)(param_1 + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)(param_1 + 0x48));
      return;
    }
  }
  return;
}

