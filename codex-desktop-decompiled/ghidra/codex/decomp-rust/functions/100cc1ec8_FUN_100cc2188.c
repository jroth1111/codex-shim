
void FUN_100cc2188(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  code *pcVar6;
  long *plVar7;
  char *pcVar8;
  
  bVar3 = *(byte *)(param_1 + 0x20);
  if (bVar3 < 5) {
    if (bVar3 == 3) {
      if (*(char *)(param_1 + 0x98) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0x90) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0x48) != '\x04') {
        return;
      }
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x50);
      if (*(long *)(param_1 + 0x58) == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000100cc225c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x58) + 0x18))(*(undefined8 *)(param_1 + 0x60));
      return;
    }
    if (bVar3 != 4) {
      return;
    }
    if (((*(char *)(param_1 + 0x98) == '\x03') && (*(char *)(param_1 + 0x90) == '\x03')) &&
       (*(char *)(param_1 + 0x48) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x50);
      if (*(long *)(param_1 + 0x58) != 0) {
        (**(code **)(*(long *)(param_1 + 0x58) + 0x18))(*(undefined8 *)(param_1 + 0x60));
      }
    }
  }
  else {
    if (bVar3 != 5) {
      if (bVar3 != 6) {
        return;
      }
      bVar3 = *(byte *)(param_1 + 0xd2);
      if (4 < bVar3) {
        if (bVar3 == 5) {
          if (((*(char *)(param_1 + 0x148) == '\x03') && (*(char *)(param_1 + 0x140) == '\x03')) &&
             (*(char *)(param_1 + 0xf8) == '\x04')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (param_1 + 0x100);
            if (*(long *)(param_1 + 0x108) != 0) {
              (**(code **)(*(long *)(param_1 + 0x108) + 0x18))(*(undefined8 *)(param_1 + 0x110));
            }
          }
          FUN_100d0f028(param_1 + 0x150);
        }
        else {
          if (bVar3 != 6) {
            return;
          }
          if (((*(char *)(param_1 + 0x148) == '\x03') && (*(char *)(param_1 + 0x140) == '\x03')) &&
             (*(char *)(param_1 + 0xf8) == '\x04')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (param_1 + 0x100);
            if (*(long *)(param_1 + 0x108) != 0) {
              (**(code **)(*(long *)(param_1 + 0x108) + 0x18))(*(undefined8 *)(param_1 + 0x110));
            }
          }
        }
        *(undefined1 *)(param_1 + 0xd1) = 0;
        if (*(long *)(param_1 + 0xa0) != 0) {
          _free(*(undefined8 *)(param_1 + 0xa8));
        }
        *(undefined1 *)(param_1 + 0xd0) = 0;
        return;
      }
      if (bVar3 == 3) {
        if (((*(char *)(param_1 + 0x148) == '\x03') && (*(char *)(param_1 + 0x140) == '\x03')) &&
           (*(char *)(param_1 + 0xf8) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 0x100);
          if (*(long *)(param_1 + 0x108) != 0) {
            (**(code **)(*(long *)(param_1 + 0x108) + 0x18))(*(undefined8 *)(param_1 + 0x110));
          }
        }
      }
      else {
        if (bVar3 != 4) {
          return;
        }
        if (*(char *)(param_1 + 0xf8) == '\x03') {
          uVar1 = *(undefined8 *)(param_1 + 0xe8);
          puVar2 = *(undefined8 **)(param_1 + 0xf0);
          pcVar6 = (code *)*puVar2;
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(uVar1);
            param_2 = extraout_x1;
          }
          if (puVar2[1] != 0) {
            _free(uVar1);
            param_2 = extraout_x1_00;
          }
        }
        pcVar8 = *(char **)(param_1 + 0xc0);
        if (*pcVar8 == '\0') {
          *pcVar8 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar8,param_2,1000000000);
        }
        FUN_1060fa678(pcVar8,1,pcVar8);
      }
      plVar7 = (long *)(param_1 + 0xb8);
      lVar4 = *(long *)*plVar7;
      *(long *)*plVar7 = lVar4 + -1;
      LORelease();
      if (lVar4 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      goto __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h6c8cac43574eef9aE;
    }
    FUN_100cbe8c4(param_1 + 0x28);
    pcVar8 = *(char **)(param_1 + 0x18);
    if (*pcVar8 == '\0') {
      *pcVar8 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (pcVar8,extraout_x1_01,1000000000);
    }
    FUN_1060fa678(pcVar8,1,pcVar8);
  }
  plVar7 = (long *)(param_1 + 0x10);
  lVar4 = *(long *)*plVar7;
  *(long *)*plVar7 = lVar4 + -1;
  LORelease();
  if (lVar4 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
__ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h6c8cac43574eef9aE:
  lVar4 = *plVar7;
  FUN_104ad5498(lVar4 + 0x38);
  if (lVar4 != -1) {
    lVar5 = *(long *)(lVar4 + 8);
    *(long *)(lVar4 + 8) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar4);
      return;
    }
  }
  return;
}

