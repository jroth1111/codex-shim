
void FUN_100df9368(long param_1)

{
  if (*(long *)(param_1 + 0x60) == -0x8000000000000000 || *(long *)(param_1 + 0x60) == 0) {
    if (*(long *)(param_1 + 0x78) != -0x8000000000000000 && *(long *)(param_1 + 0x78) != 0) {
LAB_100df93c8:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)(param_1 + 0x80));
      return;
    }
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x68));
    if (*(long *)(param_1 + 0x78) != -0x8000000000000000 && *(long *)(param_1 + 0x78) != 0)
    goto LAB_100df93c8;
  }
  return;
}

