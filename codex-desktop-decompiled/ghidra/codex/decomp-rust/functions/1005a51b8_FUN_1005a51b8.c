
void FUN_1005a51b8(void)

{
  long unaff_x19;
  char *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000550;
  undefined8 in_stack_00000558;
  undefined8 in_stack_00000560;
  undefined8 in_stack_00000568;
  undefined8 in_stack_00000570;
  undefined8 in_stack_00000578;
  undefined8 in_stack_00000580;
  undefined8 in_stack_00000588;
  undefined8 in_stack_00000590;
  undefined8 in_stack_00000598;
  undefined8 in_stack_000005a0;
  undefined8 in_stack_000005a8;
  undefined8 in_stack_000005b0;
  undefined8 in_stack_000005b8;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(undefined8 *)(unaff_x28 + 0x5020) = in_stack_000005b8;
  *(undefined8 *)(unaff_x29 + -0x98) = in_stack_000005a0;
  *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000598;
  *(undefined8 *)(unaff_x29 + -0x88) = in_stack_000005b0;
  *(undefined8 *)(unaff_x29 + -0x90) = in_stack_000005a8;
  *(undefined8 *)(unaff_x29 + -0xd8) = in_stack_00000560;
  *(undefined8 *)(unaff_x29 + -0xe0) = in_stack_00000558;
  *(undefined8 *)(unaff_x29 + -200) = in_stack_00000570;
  *(undefined8 *)(unaff_x29 + -0xd0) = in_stack_00000568;
  *(undefined8 *)(unaff_x29 + -0xb8) = in_stack_00000580;
  *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_00000578;
  *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000590;
  *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000588;
  if (*unaff_x20 == '\0') {
    *unaff_x20 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E();
  }
  FUN_1060fa678();
  FUN_100e3079c(unaff_x19 + 0x1c8);
  uVar3 = *(undefined8 *)(unaff_x29 + -0xb8);
  uVar2 = *(undefined8 *)(unaff_x29 + -0xc0);
  uVar1 = *(undefined8 *)(unaff_x29 + -0xb0);
  unaff_x21[8] = *(undefined8 *)(unaff_x29 + -0xa8);
  unaff_x21[7] = uVar1;
  uVar1 = *(undefined8 *)(unaff_x29 + -0xa0);
  uVar5 = *(undefined8 *)(unaff_x29 + -0x88);
  uVar4 = *(undefined8 *)(unaff_x29 + -0x90);
  unaff_x21[10] = *(undefined8 *)(unaff_x29 + -0x98);
  unaff_x21[9] = uVar1;
  unaff_x21[0xc] = uVar5;
  unaff_x21[0xb] = uVar4;
  uVar1 = *(undefined8 *)(unaff_x29 + -0xe0);
  uVar5 = *(undefined8 *)(unaff_x29 + -200);
  uVar4 = *(undefined8 *)(unaff_x29 + -0xd0);
  unaff_x21[2] = *(undefined8 *)(unaff_x29 + -0xd8);
  unaff_x21[1] = uVar1;
  unaff_x21[4] = uVar5;
  unaff_x21[3] = uVar4;
  *unaff_x21 = in_stack_00000550;
  unaff_x21[0xd] = *(undefined8 *)(unaff_x28 + 0x5020);
  unaff_x21[6] = uVar3;
  unaff_x21[5] = uVar2;
  *(undefined1 *)(unaff_x19 + 0x380) = 1;
  return;
}

