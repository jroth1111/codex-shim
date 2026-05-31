
void FUN_100d5bc3c(long param_1)

{
  if ((((*(char *)(param_1 + 0x81) == '\x03') && (*(char *)(param_1 + 0x70) == '\x03')) &&
      (*(char *)(param_1 + 0x68) == '\x03')) && (*(char *)(param_1 + 0x20) == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (param_1 + 0x28);
    if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100d5bc9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x30) + 0x18))(*(undefined8 *)(param_1 + 0x38));
      return;
    }
  }
  return;
}

