
void FUN_100d84038(long param_1)

{
  if (*(char *)(param_1 + 0x21) == '\x03') {
    if ((((*(char *)(param_1 + 0xa8) == '\x03') && (*(char *)(param_1 + 0xa0) == '\x03')) &&
        (*(char *)(param_1 + 0x98) == '\x03')) && (*(char *)(param_1 + 0x50) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x58);
      if (*(long *)(param_1 + 0x60) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100d840c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(param_1 + 0x60) + 0x18))(*(undefined8 *)(param_1 + 0x68));
        return;
      }
    }
  }
  else if (*(char *)(param_1 + 0x21) == '\x04') {
    FUN_100cf2ea8(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}

