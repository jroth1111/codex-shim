
void FUN_100d57368(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 extraout_x1;
  long *plVar3;
  byte abStack_e8 [160];
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar3 = (long *)*param_1;
  if ((*(byte *)(plVar3 + 0x37) & 1) == 0) {
    *(undefined1 *)(plVar3 + 0x37) = 1;
  }
  FUN_1060faa28(plVar3 + 0x38);
  plStack_40 = plVar3 + 0x31;
  if ((char)*plStack_40 == '\0') {
    *(char *)plStack_40 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
              (plStack_40,extraout_x1,1000000000);
  }
  plStack_48 = plVar3 + 0x30;
  plStack_38 = (long *)*plStack_48;
  __ZN5tokio4sync6notify11NotifyGuard14notify_waiters17hd8e3750d9b2bdaa3E(&plStack_48);
  plStack_48 = plVar3 + 0x34;
  plStack_40 = plVar3 + 0x10;
  plStack_38 = plVar3 + 0x38;
  FUN_1011ea300(&plStack_48);
  FUN_1011ea300(&plStack_48);
  lVar1 = *plVar3;
  *plVar3 = lVar1 + -1;
  LORelease();
  if (lVar1 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar1 = *param_1;
  while (FUN_1017af08c(abStack_e8,lVar1 + 0x1a0,lVar1 + 0x80), 1 < abStack_e8[0] - 0xf) {
    FUN_10179fd88(abStack_e8);
  }
  lVar2 = *(long *)(lVar1 + 0x1a8);
  do {
    lVar2 = *(long *)(lVar2 + 0x1908);
    _free();
  } while (lVar2 != 0);
  if (*(long *)(lVar1 + 0x100) != 0) {
    (**(code **)(*(long *)(lVar1 + 0x100) + 0x18))(*(undefined8 *)(lVar1 + 0x108));
  }
  if (lVar1 != -1) {
    lVar2 = *(long *)(lVar1 + 8);
    *(long *)(lVar1 + 8) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar1);
      return;
    }
  }
  return;
}

