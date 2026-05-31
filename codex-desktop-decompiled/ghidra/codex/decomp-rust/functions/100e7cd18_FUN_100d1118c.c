
void FUN_100d1118c(long *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 extraout_x1;
  long *plVar4;
  char *pcVar5;
  
  bVar1 = *(byte *)((long)param_1 + 0x199);
  if (bVar1 < 5) {
    if (bVar1 == 0) goto LAB_100d11360;
    if (bVar1 != 3) {
      if (bVar1 != 4) {
        return;
      }
      if ((((char)param_1[0x42] == '\x03') && ((char)param_1[0x41] == '\x03')) &&
         ((char)param_1[0x38] == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x39);
        if (param_1[0x3a] != 0) {
          (**(code **)(param_1[0x3a] + 0x18))(param_1[0x3b]);
        }
      }
      goto LAB_100d1132c;
    }
    if ((((char)param_1[0x49] == '\x03') && ((char)param_1[0x48] == '\x03')) &&
       (((char)param_1[0x47] == '\x03' && ((char)param_1[0x46] == '\x03')))) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x3e);
      if (param_1[0x3f] != 0) {
        (**(code **)(param_1[0x3f] + 0x18))(param_1[0x40]);
      }
    }
  }
  else {
    if (bVar1 == 5) {
      FUN_100d11aa4(param_1 + 0x34);
      pcVar5 = (char *)param_1[0x25];
      if (*pcVar5 == '\0') {
        *pcVar5 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar5,extraout_x1,1000000000);
      }
      FUN_1060fa678(pcVar5,1,pcVar5);
    }
    else if (bVar1 == 6) {
      FUN_100d1147c(param_1 + 0x34);
    }
    else {
      if (bVar1 != 7) {
        return;
      }
      if (((((char)param_1[0x57] == '\x03') && ((char)param_1[0x56] == '\x03')) &&
          ((char)param_1[0x55] == '\x03')) && ((char)param_1[0x4c] == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x4d);
        if (param_1[0x4e] != 0) {
          (**(code **)(param_1[0x4e] + 0x18))(param_1[0x4f]);
        }
      }
      if (param_1[0x37] != -0x7ffffffffffffffb) {
        FUN_100de6690(param_1 + 0x37);
      }
      if (param_1[0x34] != 0) {
        _free(param_1[0x35]);
      }
    }
LAB_100d1132c:
    *(undefined1 *)((long)param_1 + 0x19c) = 0;
    if ((*(byte *)((long)param_1 + 0x19b) & 1) != 0) {
      lVar2 = *(long *)param_1[0x24];
      *(long *)param_1[0x24] = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(param_1 + 0x24);
      }
    }
  }
  *(undefined1 *)((long)param_1 + 0x19b) = 0;
  param_1 = param_1 + 0x12;
LAB_100d11360:
  lVar2 = *(long *)param_1[6];
  *(long *)param_1[6] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hfd28b7a9072c377dE();
  }
  lVar2 = *(long *)param_1[7];
  *(long *)param_1[7] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17he70a45a7d8297075E();
  }
  lVar2 = *(long *)param_1[8];
  *(long *)param_1[8] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E();
  }
  lVar2 = *(long *)param_1[9];
  *(long *)param_1[9] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha0eafd060f29ef9bE();
  }
  FUN_100e2fff8(param_1 + 10);
  lVar2 = *(long *)param_1[0xd];
  *(long *)param_1[0xd] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
  }
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  if (param_1[3] != 0) {
    _free(param_1[4]);
  }
  plVar4 = (long *)param_1[0xe];
  lVar2 = *plVar4;
  *plVar4 = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    lVar2 = param_1[0xe];
    FUN_10195c880(lVar2 + 0x10);
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
  return;
}

