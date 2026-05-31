
void FUN_100b09288(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x29;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack00000000000001c0;
  long lStack00000000000001c8;
  undefined8 uStack00000000000001d0;
  undefined8 uStack00000000000001d8;
  undefined8 *in_stack_00000368;
  
  *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000280;
  *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
  lStack00000000000001c8 = unaff_x29 + -0x80;
  uStack00000000000001c0 = 1;
  uStack00000000000001d0 = 1;
  uStack00000000000001d8 = param_1;
  FUN_100b0c294(&stack0x000001c0);
  FUN_100c35750(&UNK_108cb8744,0xb);
  uVar2 = FUN_100f15038();
  (**(code **)*in_stack_00000368)();
  if (*(long *)(unaff_x19 + 0x1d8) != -0x7fffffffffffffff) {
    *(undefined1 *)(unaff_x19 + 0x1fb) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0x1fb) = 0;
  FUN_100e43948(unaff_x19 + 0x158);
  if ((*(long *)(unaff_x19 + 0x110) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x110) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x118));
  }
  if (*(long *)(unaff_x19 + 0xf8) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x100));
  }
  lVar1 = **(long **)(unaff_x19 + 0xf0);
  **(long **)(unaff_x19 + 0xf0) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE();
  }
  plVar3 = *(long **)(unaff_x19 + 0xe0);
  if (plVar3 != (long *)0x0) {
    lVar1 = *plVar3;
    *plVar3 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E();
    }
  }
  if (*(char *)(unaff_x19 + 0xd0) != '\0') {
    lVar1 = **(long **)(unaff_x19 + 0xd8);
    **(long **)(unaff_x19 + 0xd8) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE();
    }
  }
  func_0x000100dfd554(unaff_x19 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x29 + -0xc0);
  uVar6 = *(undefined8 *)(unaff_x29 + -0xa8);
  uVar5 = *(undefined8 *)(unaff_x29 + -0xb0);
  unaff_x20[0xc] = *(undefined8 *)(unaff_x29 + -0xb8);
  unaff_x20[0xb] = uVar4;
  unaff_x20[0xe] = uVar6;
  unaff_x20[0xd] = uVar5;
  uVar4 = *(undefined8 *)(unaff_x29 + -0xa0);
  unaff_x20[0x10] = *(undefined8 *)(unaff_x29 + -0x98);
  unaff_x20[0xf] = uVar4;
  uVar4 = *(undefined8 *)(unaff_x29 + -0x100);
  uVar6 = *(undefined8 *)(unaff_x29 + -0xe8);
  uVar5 = *(undefined8 *)(unaff_x29 + -0xf0);
  unaff_x20[4] = *(undefined8 *)(unaff_x29 + -0xf8);
  unaff_x20[3] = uVar4;
  unaff_x20[6] = uVar6;
  unaff_x20[5] = uVar5;
  uVar4 = *(undefined8 *)(unaff_x29 + -0xe0);
  uVar6 = *(undefined8 *)(unaff_x29 + -200);
  uVar5 = *(undefined8 *)(unaff_x29 + -0xd0);
  unaff_x20[8] = *(undefined8 *)(unaff_x29 + -0xd8);
  unaff_x20[7] = uVar4;
  *(undefined1 *)(unaff_x19 + 0x1fc) = 0;
  *unaff_x20 = 2;
  unaff_x20[1] = uVar2;
  unaff_x20[2] = &UNK_10b212e38;
  unaff_x20[0x11] = *(undefined8 *)(unaff_x29 + -0x90);
  unaff_x20[10] = uVar6;
  unaff_x20[9] = uVar5;
  *(undefined1 *)(unaff_x19 + 0x1fa) = 1;
  return;
}

