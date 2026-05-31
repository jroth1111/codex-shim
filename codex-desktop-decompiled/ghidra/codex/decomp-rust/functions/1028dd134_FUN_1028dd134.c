
ulong * FUN_1028dd134(long *param_1,long param_2,ulong *param_3,undefined8 param_4,
                     undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  char in_wzr;
  ulong uStack_58;
  ulong uStack_50;
  long lStack_48;
  
  *(long *)(param_2 + 0x18) = param_1[5];
  uVar4 = *(ulong *)(param_2 + *(long *)(*(long *)(param_2 + 0x10) + 0x48));
  pcVar3 = (char *)(*param_1 + (param_1[4] & uVar4) * 0x18);
  if (*pcVar3 == '\0') {
    *pcVar3 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar3,param_2,1000000000);
  }
  if ((char)param_1[6] == '\0') {
    uStack_50 = *(ulong *)(param_2 + *(long *)(*(long *)(param_2 + 0x10) + 0x48));
    uStack_58 = uVar4;
    if (uStack_50 == uVar4) {
      lVar2 = *(long *)(pcVar3 + 8);
      lStack_48 = param_2;
      if (lVar2 != param_2) {
        *(long *)(param_2 + *(long *)(*(long *)(param_2 + 0x10) + 0x38) + 8) = lVar2;
        *(undefined8 *)(param_2 + *(long *)(*(long *)(param_2 + 0x10) + 0x38)) = 0;
        if (lVar2 != 0) {
          *(long *)(lVar2 + *(long *)(*(long *)(lVar2 + 0x10) + 0x38)) = param_2;
        }
        *(long *)(pcVar3 + 8) = param_2;
        if (*(long *)(pcVar3 + 0x10) == 0) {
          *(long *)(pcVar3 + 0x10) = param_2;
        }
        param_1[2] = param_1[2] + 1;
        lVar2 = param_1[3];
        param_1[3] = lVar2 + 1;
        if (*pcVar3 != '\x01') {
          __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(lVar2,pcVar3,0);
          return param_3;
        }
        *pcVar3 = in_wzr;
        return param_3;
      }
      __ZN4core9panicking13assert_failed17h4965dcc32c4f2a5eE
                (1,pcVar3 + 8,&lStack_48,0,param_5,&UNK_10b291c98);
      goto LAB_1028dd468;
    }
  }
  else {
    if (*pcVar3 == '\x01') {
      *pcVar3 = in_wzr;
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar3,0);
    }
    (**(code **)(*(long *)(param_2 + 0x10) + 0x30))(param_2);
    LOAcquire();
    uVar4 = *param_3;
    *param_3 = uVar4 - 0x40;
    LORelease();
    if (0x3f < uVar4) {
      if ((uVar4 & 0xffffffffffffffc0) == 0x40) {
        (**(code **)(param_3[2] + 0x10))(param_3);
      }
      return (ulong *)0x0;
    }
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109beb9af,0x27,&UNK_10b4cddd8);
  }
  func_0x000108a07b2c(0,&uStack_50,&uStack_58,0,param_5,&UNK_10b291cb0);
LAB_1028dd468:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028dd46c);
  (*pcVar1)();
}

