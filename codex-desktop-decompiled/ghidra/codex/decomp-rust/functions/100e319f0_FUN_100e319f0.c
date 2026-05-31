
void FUN_100e319f0(long param_1)

{
  FUN_100de5590();
  if (*(long *)(param_1 + 0xe0) == -0x8000000000000000 || *(long *)(param_1 + 0xe0) == 0) {
    if (*(long *)(param_1 + 0xf8) != -0x8000000000000000 && *(long *)(param_1 + 0xf8) != 0) {
LAB_100e31a68:
      _free(*(undefined8 *)(param_1 + 0x100));
      if (*(long *)(param_1 + 0x110) == -0x8000000000000000 || *(long *)(param_1 + 0x110) == 0) {
        return;
      }
      goto LAB_100e31a84;
    }
  }
  else {
    _free(*(undefined8 *)(param_1 + 0xe8));
    if (*(long *)(param_1 + 0xf8) != -0x8000000000000000 && *(long *)(param_1 + 0xf8) != 0)
    goto LAB_100e31a68;
  }
  if (*(long *)(param_1 + 0x110) == -0x8000000000000000 || *(long *)(param_1 + 0x110) == 0) {
    return;
  }
LAB_100e31a84:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)(param_1 + 0x118));
  return;
}

