
void FUN_100d54a84(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0x13) != '\x03') {
    if (*(char *)(param_1 + 0x13) != '\x04') {
      return;
    }
    if (((*(char *)(param_1 + 0x90) == '\x03') && (*(char *)(param_1 + 0x88) == '\x03')) &&
       (*(char *)(param_1 + 0x40) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x48);
      if (*(long *)(param_1 + 0x50) != 0) {
        (**(code **)(*(long *)(param_1 + 0x50) + 0x18))(*(undefined8 *)(param_1 + 0x58));
      }
    }
    lVar1 = **(long **)(param_1 + 0x18);
    **(long **)(param_1 + 0x18) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
    }
    *(undefined1 *)(param_1 + 0x10) = 0;
    if (*(long *)(param_1 + 0x98) != 0) {
      _free(*(undefined8 *)(param_1 + 0xa0));
    }
    plVar2 = *(long **)(param_1 + 0xb0);
    if (*plVar2 == 0xcc) {
      *plVar2 = 0x84;
    }
    else {
      (**(code **)(plVar2[2] + 0x20))();
    }
    lVar1 = **(long **)(param_1 + 0xb8);
    **(long **)(param_1 + 0xb8) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
    }
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  return;
}

