
void FUN_100cde0a4(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  cVar1 = *(char *)(param_1 + 0x78);
  if (cVar1 == '\x03') {
    if (((*(char *)(param_1 + 0xe8) == '\x03') && (*(char *)(param_1 + 0xe0) == '\x03')) &&
       (*(char *)(param_1 + 0xd8) == '\x03')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x98);
      if (*(long *)(param_1 + 0xa0) != 0) {
        (**(code **)(*(long *)(param_1 + 0xa0) + 0x18))(*(undefined8 *)(param_1 + 0xa8));
      }
    }
  }
  else {
    if (cVar1 == '\x04') {
      if (((*(char *)(param_1 + 0x108) == '\x03') && (*(char *)(param_1 + 0x100) == '\x03')) &&
         (*(char *)(param_1 + 0xf8) == '\x03')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0xb8);
        if (*(long *)(param_1 + 0xc0) != 0) {
          (**(code **)(*(long *)(param_1 + 0xc0) + 0x18))(*(undefined8 *)(param_1 + 200));
        }
      }
    }
    else {
      if (cVar1 != '\x05') {
        return;
      }
      if (((*(char *)(param_1 + 0x118) == '\x03') && (*(char *)(param_1 + 0x110) == '\x03')) &&
         ((*(char *)(param_1 + 0x108) == '\x03' &&
          ((*(char *)(param_1 + 0x100) == '\x03' && (*(char *)(param_1 + 0xb8) == '\x04')))))) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0xc0);
        if (*(long *)(param_1 + 200) != 0) {
          (**(code **)(*(long *)(param_1 + 200) + 0x18))(*(undefined8 *)(param_1 + 0xd0));
        }
      }
      lVar2 = **(long **)(param_1 + 0x80);
      **(long **)(param_1 + 0x80) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
      }
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      _free(*(undefined8 *)(param_1 + 0x48));
    }
  }
  FUN_100d98490(param_1 + 0x18);
  plVar4 = *(long **)(param_1 + 0x10);
  lVar2 = *plVar4;
  *plVar4 = lVar2 + -1;
  LORelease();
  if (lVar2 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar2 = *(long *)(param_1 + 0x10);
  FUN_1033b1db4(lVar2 + 0x10);
  if (lVar2 != -1) {
    lVar3 = *(long *)(lVar2 + 8);
    *(long *)(lVar2 + 8) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar2);
      return;
    }
  }
  return;
}

