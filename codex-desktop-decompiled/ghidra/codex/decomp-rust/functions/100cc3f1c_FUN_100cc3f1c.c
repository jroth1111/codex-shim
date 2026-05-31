
void FUN_100cc3f1c(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x158);
  if (bVar1 < 7) {
    if (bVar1 < 5) {
      if (bVar1 == 3) {
        if (((*(char *)(param_1 + 0x20c) == '\x03') && (*(char *)(param_1 + 0x1f0) == '\x03')) &&
           ((*(char *)(param_1 + 0x1e8) == '\x03' &&
            ((*(char *)(param_1 + 0x1e0) == '\x03' && (*(char *)(param_1 + 0x198) == '\x04')))))) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 0x1a0);
          if (*(long *)(param_1 + 0x1a8) != 0) {
            (**(code **)(*(long *)(param_1 + 0x1a8) + 0x18))(*(undefined8 *)(param_1 + 0x1b0));
          }
        }
        goto LAB_100cc40d0;
      }
      if (bVar1 != 4) {
        return;
      }
      func_0x000100e82718(param_1 + 0x160);
      bVar1 = *(byte *)(param_1 + 0x155);
    }
    else {
      if (bVar1 != 5) {
        if (bVar1 != 6) {
          return;
        }
        func_0x000100cd3e48(param_1 + 0x160);
        goto LAB_100cc40a4;
      }
      FUN_100caaa14(param_1 + 0x160);
      *(undefined1 *)(param_1 + 0x157) = 0;
      bVar1 = *(byte *)(param_1 + 0x155);
    }
  }
  else {
    if (bVar1 < 9) {
      if (bVar1 == 7) {
        FUN_100e85ebc(param_1 + 0x160);
      }
      else {
        if (bVar1 != 8) {
          return;
        }
        FUN_100caaa14(param_1 + 0x160);
      }
    }
    else if (bVar1 == 9) {
      FUN_100caaa14(param_1 + 0x160);
    }
    else {
      if (bVar1 != 10) {
        return;
      }
      FUN_100d1ddbc(param_1 + 0x1f8);
      *(undefined1 *)(param_1 + 0x156) = 0;
      FUN_100df5738(param_1 + 0x160);
    }
    if ((((*(byte *)(param_1 + 0x153) & 1) != 0) &&
        (*(long *)(param_1 + 0x128) != -0x8000000000000000)) && (*(long *)(param_1 + 0x128) != 0)) {
      _free(*(undefined8 *)(param_1 + 0x130));
    }
    *(undefined1 *)(param_1 + 0x153) = 0;
    if ((*(long *)(param_1 + 0x90) != -0x7fffffffffffffe0) && (*(char *)(param_1 + 0x154) == '\x01')
       ) {
      FUN_100df5738();
    }
LAB_100cc40a4:
    *(undefined1 *)(param_1 + 0x154) = 0;
    bVar1 = *(byte *)(param_1 + 0x155);
  }
  if ((bVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      _free(*(undefined8 *)(param_1 + 0x28));
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      _free(*(undefined8 *)(param_1 + 0x40));
    }
  }
LAB_100cc40d0:
  *(undefined1 *)(param_1 + 0x155) = 0;
  return;
}

