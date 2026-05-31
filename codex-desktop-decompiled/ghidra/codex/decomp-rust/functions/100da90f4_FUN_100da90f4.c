
void FUN_100da90f4(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 extraout_x1;
  char *pcVar4;
  long lVar5;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 auStack_150 [30];
  ulong uStack_60;
  ulong uStack_50;
  
  lVar5 = *param_1;
  if ((*(byte *)(lVar5 + 0x1b8) & 1) == 0) {
    *(undefined1 *)(lVar5 + 0x1b8) = 1;
  }
  puVar1 = (ulong *)(lVar5 + 0x1c0);
  *puVar1 = *puVar1 | 1;
  LORelease();
  pcVar4 = (char *)(lVar5 + 0x188);
  if (*pcVar4 == '\0') {
    *pcVar4 = '\x01';
    goto LAB_100da9144;
  }
  do {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar4,param_2,1000000000);
LAB_100da9144:
    puStack_160 = (undefined8 *)(lVar5 + 0x180);
    auStack_150[0] = *puStack_160;
    pcStack_158 = pcVar4;
    __ZN5tokio4sync6notify11NotifyGuard14notify_waiters17hd8e3750d9b2bdaa3E(&puStack_160);
    pcVar4 = (char *)(lVar5 + 0x1a0);
    lVar5 = lVar5 + 0x80;
    while (func_0x000100fca014(&puStack_160,pcVar4,lVar5), uStack_60 < 2) {
      uVar2 = *puVar1;
      *puVar1 = uVar2 - 2;
      LORelease();
      if (uVar2 < 2) goto LAB_100da9228;
      FUN_100d89d24(&puStack_160);
    }
    while( true ) {
      func_0x000100fca014(&puStack_160,pcVar4,lVar5);
      if (1 < uStack_60) {
        lVar5 = *(long *)*param_1;
        *(long *)*param_1 = lVar5 + -1;
        LORelease();
        if (lVar5 != 1) {
          return;
        }
        DataMemoryBarrier(2,1);
        lVar5 = *param_1;
        while (FUN_1047fa8b0(auStack_150,lVar5 + 0x1a0,lVar5 + 0x80), uStack_50 < 2) {
          FUN_1047d03d8(auStack_150);
        }
        lVar3 = *(long *)(lVar5 + 0x1a8);
        do {
          lVar3 = *(long *)(lVar3 + 0x2408);
          _free();
        } while (lVar3 != 0);
        if (*(long *)(lVar5 + 0x100) != 0) {
          (**(code **)(*(long *)(lVar5 + 0x100) + 0x18))(*(undefined8 *)(lVar5 + 0x108));
        }
        if (lVar5 != -1) {
          lVar3 = *(long *)(lVar5 + 8);
          *(long *)(lVar5 + 8) = lVar3 + -1;
          LORelease();
          if (lVar3 == 1) {
            DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__free_10b61b0a8)(lVar5);
            return;
          }
        }
        return;
      }
      uVar2 = *puVar1;
      *puVar1 = uVar2 - 2;
      LORelease();
      if (uVar2 < 2) break;
      FUN_100d89d24(&puStack_160);
    }
LAB_100da9228:
    __ZN3std7process5abort17hdc01e45e25b715e8E();
    param_2 = extraout_x1;
  } while( true );
}

