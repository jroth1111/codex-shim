
undefined8 FUN_1005e62d8(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long unaff_x22;
  long unaff_x27;
  long unaff_x28;
  long in_stack_00000040;
  undefined8 in_stack_00000058;
  undefined1 *in_stack_00000060;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_000000a0;
  
  FUN_1005af49c(&stack0x0000a310);
  FUN_100de3b58(&stack0x00007b80);
  if (unaff_x22 != 0) {
    _free();
  }
  if (unaff_x28 != 0) {
    _free();
  }
  if (in_stack_00000070 + -0x18 != unaff_x27) {
    puVar1 = (undefined8 *)(in_stack_00000078 + unaff_x27 + 0x20);
    uVar2 = ((in_stack_00000070 - unaff_x27) - 0x18U) / 0x18;
    do {
      if (puVar1[-1] != 0) {
        _free(*puVar1);
      }
      puVar1 = puVar1 + 3;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (in_stack_00000040 != 0) {
    _free(in_stack_00000078);
  }
  FUN_100cd3208(in_stack_000000a0 + 0x4b8);
  *(undefined2 *)(in_stack_000000a0 + 0x4d8) = 0;
  *in_stack_00000060 = 1;
  FUN_100d4e52c(in_stack_00000058);
  *(undefined1 *)(in_stack_000000a0 + 0xb170) = 1;
  uVar2 = *(ulong *)(in_stack_000000a0 + 0x200) ^ 0x8000000000000000;
  if (-1 < (long)*(ulong *)(in_stack_000000a0 + 0x200)) {
    uVar2 = 7;
  }
  if (0x18 < uVar2 || (1L << (uVar2 & 0x3f) & 0x161ff1cU) == 0) {
    FUN_100def028(in_stack_000000a0 + 0x200);
  }
  if ((*(byte *)(in_stack_000000a0 + 0x481) & 1) != 0) {
    FUN_100def028(in_stack_000000a0);
  }
  *(undefined1 *)(in_stack_000000a0 + 0x480) = 1;
  return 0;
}

