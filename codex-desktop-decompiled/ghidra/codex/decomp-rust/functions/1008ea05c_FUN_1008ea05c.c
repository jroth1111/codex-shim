
undefined8 FUN_1008ea05c(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x29;
  undefined1 *puStack0000000000000060;
  undefined *puStack0000000000000068;
  char *pcStack0000000000000070;
  undefined1 *puStack0000000000000078;
  
  puStack0000000000000078 = &stack0x00000080;
  pcStack0000000000000070 = s__failed_to_submit_Shutdown_to_th_108acab6d;
  puStack0000000000000060 = (undefined1 *)&stack0x00000070;
  puStack0000000000000068 = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0x68) = 1;
  *(undefined1 ***)(unaff_x29 + -0x60) = &stack0x00000060;
  *(undefined8 *)(unaff_x29 + -0x58) = 1;
  *(undefined8 *)(unaff_x29 + -0x50) = param_1;
  FUN_1008eae5c(unaff_x29 + -0x68);
  lVar1 = **(long **)(unaff_x19 + 0x28);
  **(long **)(unaff_x19 + 0x28) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
  }
  lVar1 = **(long **)(unaff_x19 + 0x30);
  **(long **)(unaff_x19 + 0x30) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hfd28b7a9072c377dE();
  }
  FUN_100e2fff8(unaff_x19 + 0x10);
  lVar1 = **(long **)(unaff_x19 + 0x38);
  **(long **)(unaff_x19 + 0x38) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha0eafd060f29ef9bE();
  }
  lVar1 = **(long **)(unaff_x19 + 0x40);
  **(long **)(unaff_x19 + 0x40) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E();
  }
  *(undefined1 *)(unaff_x19 + 0x49) = 1;
  return 0;
}

