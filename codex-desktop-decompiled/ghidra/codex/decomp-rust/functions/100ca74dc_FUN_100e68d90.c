
void FUN_100e68d90(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 8) == '\x03') {
    if (*(char *)(param_1 + 0x69) == '\x03') {
      if (*(char *)(param_1 + 0x58) == '\x03') {
        FUN_100e03d7c(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
      }
      lVar1 = **(long **)(param_1 + 0x28);
      **(long **)(param_1 + 0x28) = lVar1 + -1;
      LORelease();
      if (lVar1 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000105c30fe4();
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        _free(*(undefined8 *)(param_1 + 0x18));
      }
      *(undefined1 *)(param_1 + 0x68) = 0;
    }
    return;
  }
  if (*(char *)(param_1 + 8) != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0x41) == '\x04') {
    FUN_100cfddd4(param_1 + 0xd0);
  }
  else {
    if (*(char *)(param_1 + 0x41) != '\x03') goto LAB_100e68df0;
    FUN_100e03d7c(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
LAB_100e68df0:
  lVar1 = **(long **)(param_1 + 0x28);
  **(long **)(param_1 + 0x28) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4();
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)(param_1 + 0x18));
  return;
}

