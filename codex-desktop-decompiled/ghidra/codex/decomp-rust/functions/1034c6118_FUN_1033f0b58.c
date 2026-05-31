
void FUN_1033f0b58(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  long *plVar5;
  long *plStack_48;
  long *plStack_40;
  long lStack_38;
  
  cVar2 = *(char *)((long)param_1 + 0x7a);
  if (cVar2 == '\x03') {
    FUN_1033e5368(param_1 + 0x10);
    param_2 = extraout_x1_01;
  }
  else {
    if (cVar2 == '\x04') {
      if ((char)param_1[0x1f] == '\x03') {
        if ((char)param_1[0x1e] == '\x03') {
          plVar5 = (long *)param_1[0x1d];
          if (*plVar5 == 0xcc) {
            *plVar5 = 0x84;
          }
          else {
            (**(code **)(plVar5[2] + 0x20))();
            param_2 = extraout_x1_02;
          }
        }
        else if (((char)param_1[0x1e] == '\0') && (param_1[0x1a] != 0)) {
          _free(param_1[0x1b]);
          param_2 = extraout_x1_00;
        }
      }
      if (param_1[0x13] != 0) {
        _free(param_1[0x14]);
        param_2 = extraout_x1_03;
      }
    }
    else {
      if (cVar2 != '\x05') {
        return;
      }
      FUN_1032ef7b4(param_1 + 0x12);
      param_2 = extraout_x1;
    }
    if (((*(byte *)((long)param_1 + 0x79) & 1) != 0) && (param_1[10] != 0)) {
      _free(param_1[0xb]);
      param_2 = extraout_x1_04;
    }
    *(undefined1 *)((long)param_1 + 0x79) = 0;
    if (param_1[7] != 0) {
      _free(param_1[8]);
      param_2 = extraout_x1_05;
    }
  }
  if (*param_1 != 0) {
    _free(param_1[1]);
    param_2 = extraout_x1_06;
  }
  plVar5 = (long *)param_1[3];
  lVar3 = plVar5[0x29];
  plVar5[0x29] = lVar3 + -1;
  if (lVar3 == 1) {
    plVar1 = plVar5 + 0x23;
    if ((char)*plVar1 == '\0') {
      *(char *)plVar1 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(plVar1,param_2,1000000000);
    }
    plStack_48 = plVar5 + 0x22;
    lStack_38 = *plStack_48;
    plStack_40 = plVar1;
    __ZN5tokio4sync6notify11NotifyGuard14notify_waiters17hd8e3750d9b2bdaa3E(&plStack_48);
  }
  lVar3 = *plVar5;
  *plVar5 = lVar3 + -1;
  LORelease();
  if (lVar3 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar3 = param_1[3];
  plVar5 = *(long **)(lVar3 + 0x138);
  if (plVar5 != (long *)0x0) {
    lVar4 = *plVar5;
    *plVar5 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc9e4825ff52dbcf0E(lVar3 + 0x138);
    }
  }
  if (lVar3 != -1) {
    lVar4 = *(long *)(lVar3 + 8);
    *(long *)(lVar3 + 8) = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar3);
      return;
    }
  }
  return;
}

