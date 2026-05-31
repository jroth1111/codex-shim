
void FUN_100ca357c(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  if (*(char *)(param_1 + 0x11) == '\x03') {
    if (((*(char *)(param_1 + 0x88) == '\x03') && (*(char *)(param_1 + 0x80) == '\x03')) &&
       (*(char *)(param_1 + 0x38) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x40);
      if (*(long *)(param_1 + 0x48) != 0) {
        (**(code **)(*(long *)(param_1 + 0x48) + 0x18))(*(undefined8 *)(param_1 + 0x50));
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x11) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x38) == '\x03') {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      pcVar3 = (code *)*puVar2;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar1);
      }
      if (puVar2[1] != 0) {
        _free(uVar1);
      }
    }
    FUN_100e19d88(param_1 + 0x40);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}

