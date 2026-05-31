
void FUN_100cc0fdc(long param_1)

{
  if ((((*(char *)(param_1 + 0x88) == '\x03') && (*(char *)(param_1 + 0x80) == '\x03')) &&
      (*(char *)(param_1 + 0x78) == '\x03')) && (*(char *)(param_1 + 0x30) == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (param_1 + 0x38);
    if (*(long *)(param_1 + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100cc103c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x40) + 0x18))(*(undefined8 *)(param_1 + 0x48));
      return;
    }
  }
  return;
}

