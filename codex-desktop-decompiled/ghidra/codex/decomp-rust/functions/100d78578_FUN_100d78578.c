
void FUN_100d78578(long param_1)

{
  if (*(char *)(param_1 + 0x880) == '\0') {
    FUN_100deb62c(param_1);
    func_0x000100e3c8d4(param_1 + 0x20);
    if (*(long *)(param_1 + 0xf8) != 4) {
      __ZN78__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h6900df02db0519f4E
                ();
    }
  }
  else {
    if (*(char *)(param_1 + 0x880) != '\x03') {
      return;
    }
    func_0x000100d7a004(param_1 + 0x280);
    *(undefined1 *)(param_1 + 0x881) = 0;
    FUN_100d886e8(param_1 + 0x268);
    *(undefined2 *)(param_1 + 0x882) = 0;
  }
  if ((*(short *)(param_1 + 0xa0) != 2) && (8 < *(ulong *)(param_1 + 200))) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)(param_1 + 0xb0));
    return;
  }
  return;
}

