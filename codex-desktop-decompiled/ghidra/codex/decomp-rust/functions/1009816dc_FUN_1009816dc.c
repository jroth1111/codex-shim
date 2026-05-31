
undefined8 FUN_1009816dc(void)

{
  long lVar1;
  long unaff_x20;
  long unaff_x25;
  
  FUN_10098e72c(&stack0x00002d30);
  FUN_100df5738(&stack0x00000af0);
  FUN_100de65d4(unaff_x20 + 0x1a50);
  *(undefined1 *)(unaff_x25 + 0xa2d) = 0;
  if (*(long *)(unaff_x20 + 0xcd8) != 0) {
    _free(*(undefined8 *)(unaff_x20 + 0xce0));
  }
  if ((*(long *)(unaff_x20 + 0xcc0) != -0x8000000000000000) && (*(long *)(unaff_x20 + 0xcc0) != 0))
  {
    _free(*(undefined8 *)(unaff_x20 + 0xcc8));
  }
  *(undefined1 *)(unaff_x25 + 0x9f8) = 0;
  FUN_100e3d3a4(unaff_x20 + 0xc78);
  *(undefined1 *)(unaff_x25 + 0xa2e) = 0;
  if ((*(long *)(unaff_x20 + 0xba0) != -0x8000000000000000) && (*(long *)(unaff_x20 + 0xba0) != 0))
  {
    _free(*(undefined8 *)(unaff_x20 + 0xba8));
  }
  *(undefined2 *)(unaff_x25 + 0x9f9) = 0;
  *(undefined1 *)(unaff_x25 + 0x9fb) = 0;
  switch(*(undefined4 *)(unaff_x20 + 0x308)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x15:
  case 0x16:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x30:
  case 0x32:
  case 0x33:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x3a:
  case 0x3b:
  case 0x47:
    break;
  default:
    func_0x000100dfc74c(unaff_x20 + 0x308);
  }
  *(undefined1 *)(unaff_x25 + 0x9e6) = 0;
  if (*(long *)(unaff_x20 + 0x2f0) != 0) {
    _free(*(undefined8 *)(unaff_x20 + 0x2f8));
  }
  *(undefined1 *)(unaff_x25 + 0x9e7) = 0;
  if (*(long *)(unaff_x20 + 0x2d8) != 0) {
    _free(*(undefined8 *)(unaff_x20 + 0x2e0));
  }
  lVar1 = **(long **)(unaff_x20 + 0x2d0);
  **(long **)(unaff_x20 + 0x2d0) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE(unaff_x20 + 0x2d0);
  }
  FUN_100e2fff8(unaff_x20 + 0x2b8);
  lVar1 = **(long **)(unaff_x20 + 0x2b0);
  **(long **)(unaff_x20 + 0x2b0) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7cbe8e2c0817b69fE(unaff_x20 + 0x2b0);
  }
  *(undefined1 *)(unaff_x25 + 0x9e8) = 0;
  lVar1 = **(long **)(unaff_x20 + 0x290);
  **(long **)(unaff_x20 + 0x290) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E(unaff_x20 + 0x290);
  }
  lVar1 = **(long **)(unaff_x20 + 0x298);
  **(long **)(unaff_x20 + 0x298) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc434be58f634db7bE(unaff_x20 + 0x298);
  }
  *(undefined1 *)(unaff_x25 + 0x9e9) = 0;
  lVar1 = **(long **)(unaff_x20 + 0x288);
  **(long **)(unaff_x20 + 0x288) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hfd28b7a9072c377dE(unaff_x20 + 0x288);
  }
  lVar1 = **(long **)(unaff_x20 + 0x280);
  **(long **)(unaff_x20 + 0x280) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x20 + 0x280);
  }
  *(undefined1 *)(unaff_x25 + 0x9ea) = 0;
  *(undefined1 *)(unaff_x25 + 0x9e0) = 1;
  return 0;
}

