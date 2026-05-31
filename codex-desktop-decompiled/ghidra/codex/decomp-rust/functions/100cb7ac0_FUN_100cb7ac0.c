
void FUN_100cb7ac0(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x148);
  if (bVar1 < 7) {
    if (bVar1 < 5) {
      if (bVar1 == 3) {
        if (((*(char *)(param_1 + 0x1fc) == '\x03') && (*(char *)(param_1 + 0x1e0) == '\x03')) &&
           ((*(char *)(param_1 + 0x1d8) == '\x03' &&
            ((*(char *)(param_1 + 0x1d0) == '\x03' && (*(char *)(param_1 + 0x188) == '\x04')))))) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 400);
          if (*(long *)(param_1 + 0x198) != 0) {
            (**(code **)(*(long *)(param_1 + 0x198) + 0x18))(*(undefined8 *)(param_1 + 0x1a0));
          }
        }
        goto LAB_100cb7c74;
      }
      if (bVar1 != 4) {
        return;
      }
      func_0x000100e82718(param_1 + 0x150);
      bVar1 = *(byte *)(param_1 + 0x145);
    }
    else {
      if (bVar1 != 5) {
        if (bVar1 != 6) {
          return;
        }
        func_0x000100ccabd4(param_1 + 0x150);
        goto LAB_100cb7c48;
      }
      FUN_100caaa14(param_1 + 0x150);
      *(undefined1 *)(param_1 + 0x147) = 0;
      bVar1 = *(byte *)(param_1 + 0x145);
    }
  }
  else {
    if (bVar1 < 9) {
      if (bVar1 == 7) {
        FUN_100e85ebc(param_1 + 0x150);
      }
      else {
        if (bVar1 != 8) {
          return;
        }
        FUN_100caaa14(param_1 + 0x150);
      }
    }
    else if (bVar1 == 9) {
      FUN_100caaa14(param_1 + 0x150);
    }
    else {
      if (bVar1 != 10) {
        return;
      }
      FUN_100d1ddbc(param_1 + 0x1e8);
      *(undefined1 *)(param_1 + 0x146) = 0;
      FUN_100df5738(param_1 + 0x150);
    }
    if ((((*(byte *)(param_1 + 0x143) & 1) != 0) &&
        (*(long *)(param_1 + 0x118) != -0x8000000000000000)) && (*(long *)(param_1 + 0x118) != 0)) {
      _free(*(undefined8 *)(param_1 + 0x120));
    }
    *(undefined1 *)(param_1 + 0x143) = 0;
    if ((*(long *)(param_1 + 0x80) != -0x7fffffffffffffe0) && (*(char *)(param_1 + 0x144) == '\x01')
       ) {
      FUN_100df5738();
    }
LAB_100cb7c48:
    *(undefined1 *)(param_1 + 0x144) = 0;
    bVar1 = *(byte *)(param_1 + 0x145);
  }
  if ((bVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      _free(*(undefined8 *)(param_1 + 0x18));
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      _free(*(undefined8 *)(param_1 + 0x30));
    }
  }
LAB_100cb7c74:
  *(undefined1 *)(param_1 + 0x145) = 0;
  return;
}

