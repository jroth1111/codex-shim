
undefined8 FUN_1008e8d80(void)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined1 uVar4;
  long *plVar5;
  long *unaff_x19;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  FUN_100df5738(&stack0x00002d00);
  unaff_x19[0xdc] = unaff_x19[0x15] + 0x10;
  *(undefined1 *)(unaff_x19 + 0xea) = 0;
  auVar8 = FUN_100fd3e50(unaff_x19 + 0xdc);
  uVar3 = auVar8._8_8_;
  pcVar2 = auVar8._0_8_;
  if (pcVar2 == (char *)0x0) {
    uVar3 = 1;
    uVar4 = 0xc;
  }
  else {
    if ((((char)unaff_x19[0xea] == '\x03') && ((char)unaff_x19[0xe9] == '\x03')) &&
       ((char)unaff_x19[0xe0] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x19 + 0xe1);
      uVar3 = extraout_x1;
      if (unaff_x19[0xe2] != 0) {
        (**(code **)(unaff_x19[0xe2] + 0x18))(unaff_x19[0xe3]);
        uVar3 = extraout_x1_00;
      }
    }
    if (*(long *)(pcVar2 + 0x300) == unaff_x19[0x20]) {
      __ZN16codex_app_server12thread_state11ThreadState14clear_listener17hc75eda210718d102E
                (pcVar2 + 0x28);
      uVar3 = extraout_x1_01;
    }
    if (*pcVar2 == '\0') {
      *pcVar2 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar2,uVar3,1000000000);
    }
    FUN_1060fa678(pcVar2,1,pcVar2);
    plVar7 = unaff_x19 + 0x1d;
    lVar6 = *plVar7;
    if (lVar6 != 0) {
      LOAcquire();
      uVar1 = *(ulong *)(lVar6 + 0x30);
      *(ulong *)(lVar6 + 0x30) = uVar1 | 4;
      if ((uVar1 & 10) == 8) {
        (**(code **)(*(long *)(lVar6 + 0x10) + 0x10))(*(undefined8 *)(lVar6 + 0x18));
      }
      if (((uint)uVar1 >> 1 & 1) != 0) {
        *(undefined1 *)(lVar6 + 0x38) = 0;
      }
      plVar5 = (long *)*plVar7;
      if (plVar5 != (long *)0x0) {
        lVar6 = *plVar5;
        *plVar5 = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc920a624365fa6d7E(plVar7);
        }
      }
    }
    FUN_100d052c4(unaff_x19 + 0x12);
    lVar6 = *(long *)unaff_x19[0x13];
    *(long *)unaff_x19[0x13] = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
    }
    FUN_100e6a018(unaff_x19 + 6);
    if (*unaff_x19 != 0) {
      _free(unaff_x19[1]);
    }
    lVar6 = *(long *)unaff_x19[0x14];
    *(long *)unaff_x19[0x14] = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17he70a45a7d8297075E();
    }
    lVar6 = *(long *)unaff_x19[0x15];
    *(long *)unaff_x19[0x15] = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7cbe8e2c0817b69fE();
    }
    FUN_100e2fff8(unaff_x19 + 0x16);
    lVar6 = *(long *)unaff_x19[0x19];
    *(long *)unaff_x19[0x19] = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E();
    }
    lVar6 = *(long *)unaff_x19[0x1a];
    *(long *)unaff_x19[0x1a] = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha0eafd060f29ef9bE();
    }
    lVar6 = *(long *)unaff_x19[0x1b];
    *(long *)unaff_x19[0x1b] = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hfd28b7a9072c377dE();
    }
    lVar6 = *(long *)unaff_x19[0x1c];
    *(long *)unaff_x19[0x1c] = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
    }
    if (unaff_x19[3] != 0) {
      _free(unaff_x19[4]);
    }
    uVar3 = 0;
    uVar4 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0xdb) = uVar4;
  return uVar3;
}

