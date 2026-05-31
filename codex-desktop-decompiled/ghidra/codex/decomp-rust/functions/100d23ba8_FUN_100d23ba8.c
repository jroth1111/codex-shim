
void FUN_100d23ba8(long param_1)

{
  if (*(char *)(param_1 + 0x558) == '\x03') {
    if (*(char *)(param_1 + 0x550) == '\x03') {
      FUN_100ced36c(param_1 + 0x40);
      FUN_100e76384(param_1 + 0x28);
      *(undefined1 *)(param_1 + 0x551) = 0;
    }
    else if ((*(char *)(param_1 + 0x550) == '\0') &&
            (*(long *)(param_1 + 8) != -0x8000000000000000 && *(long *)(param_1 + 8) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)(param_1 + 0x10));
      return;
    }
  }
  return;
}

