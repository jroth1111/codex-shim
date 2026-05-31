
undefined8 FUN_10098c168(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x25;
  undefined1 *unaff_x27;
  long unaff_x29;
  
  *(char **)(unaff_x29 + -0xe0) = s__failed_to_submit_UserInputAnswe_108acc54e;
  *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0xb0;
  FUN_10098f8d0(&stack0x00000280);
  FUN_100df5738(&stack0x00000340);
  *(undefined1 *)(unaff_x19 + 0x201) = 0;
  if (*(long *)(unaff_x19 + 0x220) != unaff_x25) {
    FUN_100de6690(unaff_x19 + 0x220);
  }
  if (*(long *)(unaff_x19 + 0x208) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x210));
  }
  if (*(long *)(unaff_x19 + 400) != -0x7fffffffffffffff) {
    *(undefined1 *)(unaff_x19 + 0x1f9) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0x1f9) = 0;
  *(undefined2 *)(unaff_x19 + 0x1fb) = 0;
  *(undefined1 *)(unaff_x19 + 0x1fd) = 0;
  lVar1 = **(long **)(unaff_x19 + 0x140);
  **(long **)(unaff_x19 + 0x140) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7cbe8e2c0817b69fE(unaff_x19 + 0x140);
  }
  lVar1 = **(long **)(unaff_x19 + 0x138);
  **(long **)(unaff_x19 + 0x138) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x19 + 0x138);
  }
  *(undefined1 *)(unaff_x19 + 0x1fe) = 0;
  if (((*(byte *)(unaff_x19 + 0x1fa) & 1) != 0) && (*(long *)(unaff_x19 + 0x120) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x128));
  }
  *(undefined1 *)(unaff_x19 + 0x1fa) = 0;
  *unaff_x27 = 1;
  FUN_100cecd1c();
  *(undefined1 *)(unaff_x19 + 0xf50) = 1;
  return 0;
}

