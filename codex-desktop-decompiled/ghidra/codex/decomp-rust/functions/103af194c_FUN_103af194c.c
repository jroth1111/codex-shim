
void FUN_103af194c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long *plVar4;
  long *plStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long alStack_a0 [10];
  
  plVar4 = (long *)*param_1;
  if ((*(byte *)(plVar4 + 0x37) & 1) == 0) {
    *(undefined1 *)(plVar4 + 0x37) = 1;
  }
  plVar1 = plVar4 + 0x38;
  FUN_1060faa28(plVar1);
  plStack_c8 = plVar4 + 0x31;
  if ((char)*plStack_c8 == '\0') {
    *(char *)plStack_c8 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
              (plStack_c8,extraout_x1,1000000000);
  }
  plStack_d0 = plVar4 + 0x30;
  lStack_c0 = *plStack_d0;
  __ZN5tokio4sync6notify11NotifyGuard14notify_waiters17hd8e3750d9b2bdaa3E(&plStack_d0);
  while (func_0x000103b257f4(&plStack_d0,plVar4 + 0x34,plVar4 + 0x10),
        1 < (long)plStack_d0 + 0x7ffffffffffffffdU) {
    if ((char)*plVar1 == '\0') {
      *(char *)plVar1 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (plVar1,extraout_x1_00,1000000000);
    }
    FUN_1060fa678(plVar1,1,plVar1);
    func_0x000103b13fec(&plStack_d0);
  }
  while (func_0x000103b257f4(&plStack_d0,plVar4 + 0x34,plVar4 + 0x10),
        1 < (long)plStack_d0 + 0x7ffffffffffffffdU) {
    if ((char)*plVar1 == '\0') {
      *(char *)plVar1 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (plVar1,extraout_x1_01,1000000000);
    }
    FUN_1060fa678(plVar1,1,plVar1);
    func_0x000103b13fec(&plStack_d0);
  }
  lVar2 = *plVar4;
  *plVar4 = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    lVar2 = *param_1;
    while (func_0x000103b257f4(alStack_a0,lVar2 + 0x1a0,lVar2 + 0x80),
          1 < alStack_a0[0] + 0x7ffffffffffffffdU) {
      func_0x000103b13fec(alStack_a0);
    }
    lVar3 = *(long *)(lVar2 + 0x1a8);
    do {
      lVar3 = *(long *)(lVar3 + 0x1008);
      _free();
    } while (lVar3 != 0);
    if (*(long *)(lVar2 + 0x100) != 0) {
      (**(code **)(*(long *)(lVar2 + 0x100) + 0x18))(*(undefined8 *)(lVar2 + 0x108));
    }
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

