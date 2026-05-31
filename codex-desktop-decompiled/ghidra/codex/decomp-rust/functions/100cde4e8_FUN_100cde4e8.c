
void FUN_100cde4e8(long param_1)

{
  if ((((*(char *)(param_1 + 0xa0) == '\x03') && (*(char *)(param_1 + 0x98) == '\x03')) &&
      (*(char *)(param_1 + 0x90) == '\x03')) &&
     ((*(char *)(param_1 + 0x88) == '\x03' && (*(char *)(param_1 + 0x40) == '\x04')))) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (param_1 + 0x48);
    if (*(long *)(param_1 + 0x50) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100cde554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x50) + 0x18))(*(undefined8 *)(param_1 + 0x58));
      return;
    }
  }
  return;
}

