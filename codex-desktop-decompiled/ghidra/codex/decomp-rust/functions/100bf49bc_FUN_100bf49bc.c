
undefined1  [16] FUN_100bf49bc(void)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined8 extraout_x1;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  char *pcVar5;
  
  FUN_100f3f484(&stack0x00000860,s_failed_to_read_from_websocket__108ad2566,&stack0x00000320);
  uVar2 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x15,&stack0x000005c0);
  FUN_100de8b24(&stack0x00000b00);
  lVar3 = *(long *)(unaff_x19 + 0x100);
  if (lVar3 != 6) {
    if (((lVar3 != 0) && ((*(byte *)(unaff_x19 + 0x332) & 1) != 0)) &&
       ((lVar3 != 4 || (*(short *)(unaff_x19 + 0x128) != 0x12)))) {
      (**(code **)(*(long *)(unaff_x19 + 0x108) + 0x20))
                (unaff_x19 + 0x120,*(undefined8 *)(unaff_x19 + 0x110),
                 *(undefined8 *)(unaff_x19 + 0x118));
    }
    *(undefined1 *)(unaff_x19 + 0x332) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0x332) = 0;
  FUN_100de8a5c(unaff_x19 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x78);
  FUN_100de8a5c(uVar4);
  _free(uVar4);
  pcVar5 = *(char **)(unaff_x19 + 0x60);
  if (*pcVar5 == '\0') {
    *pcVar5 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
              (pcVar5,extraout_x1,1000000000);
  }
  FUN_1060fa678(pcVar5,1,pcVar5);
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (unaff_x19 + 0x58);
  lVar3 = **(long **)(unaff_x19 + 0x58);
  **(long **)(unaff_x19 + 0x58) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(unaff_x19 + 0x58);
  }
  lVar3 = **(long **)(unaff_x19 + 0x40);
  **(long **)(unaff_x19 + 0x40) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7c8ff8c2adbe1cddE();
  }
  lVar3 = **(long **)(unaff_x19 + 0x38);
  **(long **)(unaff_x19 + 0x38) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h184b28c15061d2e4E();
  }
  lVar3 = **(long **)(unaff_x19 + 0x30);
  **(long **)(unaff_x19 + 0x30) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h02ce01b9d7472824E();
  }
  *(undefined1 *)(unaff_x19 + 0x330) = 1;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  return auVar1 << 0x40;
}

