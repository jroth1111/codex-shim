
void FUN_100cce4c8(long param_1)

{
  if (*(char *)(param_1 + 0x41) == '\x03') {
    if (((*(char *)(param_1 + 0xb8) == '\x03') && (*(char *)(param_1 + 0xb0) == '\x03')) &&
       (*(char *)(param_1 + 0x68) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x70);
      if (*(long *)(param_1 + 0x78) != 0) {
        (**(code **)(*(long *)(param_1 + 0x78) + 0x18))(*(undefined8 *)(param_1 + 0x80));
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x41) != '\x04') {
      return;
    }
    if (((*(char *)(param_1 + 0x250) == '\x03') && (*(char *)(param_1 + 0x248) == '\x03')) &&
       (*(char *)(param_1 + 0x200) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x208);
      if (*(long *)(param_1 + 0x210) != 0) {
        (**(code **)(*(long *)(param_1 + 0x210) + 0x18))(*(undefined8 *)(param_1 + 0x218));
      }
    }
    FUN_100e20dec(param_1 + 0x48);
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}

