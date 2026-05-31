
undefined8 FUN_1005e61dc(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  long unaff_x22;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x27;
  long unaff_x28;
  long in_stack_00000040;
  undefined8 in_stack_00000058;
  undefined1 *in_stack_00000060;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_000000a0;
  
  FUN_1005af360(&stack0x00007b80);
  uVar3 = *(ulong *)(unaff_x22 + 0x40);
  if ((uVar3 & 3) == 1) {
    uVar4 = *(undefined8 *)(uVar3 - 1);
    puVar2 = *(undefined8 **)(uVar3 + 7);
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar4);
    }
    if (puVar2[1] != 0) {
      _free(uVar4);
    }
    _free((undefined8 *)(uVar3 - 1));
  }
  if (unaff_x28 != 0) {
    _free();
  }
  if (in_stack_00000070 + -0x18 != unaff_x27) {
    puVar2 = (undefined8 *)(in_stack_00000078 + unaff_x27 + 0x20);
    uVar3 = ((in_stack_00000070 - unaff_x27) - 0x18U) / 0x18;
    do {
      if (puVar2[-1] != 0) {
        _free(*puVar2);
      }
      puVar2 = puVar2 + 3;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (in_stack_00000040 != 0) {
    _free(in_stack_00000078);
  }
  FUN_100cd3208(in_stack_000000a0 + 0x4b8);
  *(undefined2 *)(in_stack_000000a0 + 0x4d8) = 0;
  *in_stack_00000060 = 1;
  FUN_100d4e52c(in_stack_00000058);
  *(undefined1 *)(in_stack_000000a0 + 0xb170) = 1;
  uVar3 = *(ulong *)(in_stack_000000a0 + 0x200) ^ 0x8000000000000000;
  if (-1 < (long)*(ulong *)(in_stack_000000a0 + 0x200)) {
    uVar3 = 7;
  }
  if (0x18 < uVar3 || (1L << (uVar3 & 0x3f) & 0x161ff1cU) == 0) {
    FUN_100def028(in_stack_000000a0 + 0x200);
  }
  if ((*(byte *)(in_stack_000000a0 + 0x481) & 1) != 0) {
    FUN_100def028(in_stack_000000a0);
  }
  *(undefined1 *)(in_stack_000000a0 + 0x480) = 1;
  return 0;
}

