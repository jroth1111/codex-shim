
void FUN_100e66b8c(long param_1)

{
  if (*(char *)(param_1 + 0x2b0) == '\0') {
    FUN_100e3e028(param_1);
    if (*(long *)(param_1 + 0xb8) != -0x8000000000000000 && *(long *)(param_1 + 0xb8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)(param_1 + 0xc0));
      return;
    }
  }
  else if (*(char *)(param_1 + 0x2b0) == '\x03') {
    func_0x000100d716f0(param_1 + 0x1d0);
    *(undefined2 *)(param_1 + 0x2b6) = 0;
    *(undefined1 *)(param_1 + 0x2b2) = 0;
    if ((((*(byte *)(param_1 + 0x2b1) & 1) != 0) &&
        (*(long *)(param_1 + 0x1a0) != -0x8000000000000000)) && (*(long *)(param_1 + 0x1a0) != 0)) {
      _free(*(undefined8 *)(param_1 + 0x1a8));
    }
    *(undefined1 *)(param_1 + 0x2b1) = 0;
    if (*(long *)(param_1 + 0xe8) != 0) {
      _free(*(undefined8 *)(param_1 + 0xf0));
    }
    if ((*(long *)(param_1 + 0x130) != -0x8000000000000000) && (*(long *)(param_1 + 0x130) != 0)) {
      _free(*(undefined8 *)(param_1 + 0x138));
    }
    if (*(long *)(param_1 + 0x100) != 0) {
      _free(*(undefined8 *)(param_1 + 0x108));
    }
    if (*(long *)(param_1 + 0x118) != 0) {
      _free(*(undefined8 *)(param_1 + 0x120));
    }
    *(undefined2 *)(param_1 + 0x2b3) = 0;
    *(undefined1 *)(param_1 + 0x2b5) = 0;
  }
  return;
}

