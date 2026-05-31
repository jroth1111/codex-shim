
void FUN_100c98dd4(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x04') {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (param_1 + 0x18);
    if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100c98e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x20) + 0x18))(*(undefined8 *)(param_1 + 0x28));
      return;
    }
  }
  return;
}

