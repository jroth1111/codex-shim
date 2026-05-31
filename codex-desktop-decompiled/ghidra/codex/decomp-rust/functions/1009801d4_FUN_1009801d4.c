
undefined8 FUN_1009801d4(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  long unaff_x25;
  undefined1 *in_stack_00000058;
  undefined8 in_stack_00000760;
  undefined8 in_stack_00000768;
  undefined8 in_stack_00000af0;
  undefined8 in_stack_00000af8;
  undefined8 in_stack_00000b00;
  
  FUN_100f3f484(&stack0x00000af0,s__failed_to_acquire_thread_list_s_108acb263,&stack0x00002d30);
  unaff_x22[1] = in_stack_00000af8;
  *unaff_x22 = in_stack_00000af0;
  unaff_x22[2] = in_stack_00000b00;
  *(undefined8 *)(unaff_x20 + 0x19c0) = 0x8000000000000005;
  *(undefined8 *)(unaff_x20 + 0x1a08) = 0xffffffffffff80a5;
  *(undefined8 *)(unaff_x20 + 0x1a10) = unaff_x19;
  *(undefined8 *)(unaff_x20 + 0x1a18) = unaff_x23;
  *(undefined8 *)(unaff_x20 + 0x1a28) = in_stack_00000768;
  *(undefined8 *)(unaff_x20 + 0x1a20) = in_stack_00000760;
  *(long *)(unaff_x20 + 0x1a30) = unaff_x20 + 0x290;
  *in_stack_00000058 = 0;
  iVar2 = func_0x000100899140(unaff_x20 + 0x19a8);
  if (iVar2 == 0) {
    FUN_100d8fbc8(unaff_x20 + 0x19a8);
    if (((*(byte *)(unaff_x25 + 0x9eb) & 1) == 0) ||
       ((*(ulong *)(unaff_x20 + 0x1568) & 0x7fffffffffffffff) == 0)) {
      *(undefined1 *)(unaff_x25 + 0x9eb) = 0;
    }
    else {
      _free(*(undefined8 *)(unaff_x20 + 0x1570));
      *(undefined1 *)(unaff_x25 + 0x9eb) = 0;
    }
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
    uVar3 = 0;
    *(undefined1 *)(unaff_x25 + 0x9ea) = 0;
    uVar4 = 1;
  }
  else {
    uVar3 = 1;
    uVar4 = 0x50;
  }
  *(undefined1 *)(unaff_x25 + 0x9e0) = uVar4;
  return uVar3;
}

