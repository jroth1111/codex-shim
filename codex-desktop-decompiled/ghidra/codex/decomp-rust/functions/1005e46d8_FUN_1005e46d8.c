
undefined8 FUN_1005e46d8(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *unaff_x25;
  long in_stack_000000a0;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if ((*(byte *)(in_stack_000000a0 + 0x559) & 1) != 0) {
    lVar3 = *(long *)(in_stack_000000a0 + 0x538);
    lVar2 = *(long *)(in_stack_000000a0 + 0x540);
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x10);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 4;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (*(long *)(in_stack_000000a0 + 0x530) != 0) {
      _free(lVar3);
    }
  }
  *(undefined2 *)(in_stack_000000a0 + 0x558) = 1;
  FUN_100d590f4();
  *(undefined1 *)(in_stack_000000a0 + 0x5d9) = 0;
  if (*(long *)(in_stack_000000a0 + 0x4d0) != 0) {
    _free(*(undefined8 *)(in_stack_000000a0 + 0x4d8));
  }
  *unaff_x25 = 1;
  FUN_100ca1cfc();
  uVar1 = *(ulong *)(in_stack_000000a0 + 0x200) ^ 0x8000000000000000;
  if (-1 < (long)*(ulong *)(in_stack_000000a0 + 0x200)) {
    uVar1 = 7;
  }
  if (0x18 < uVar1 || (1L << (uVar1 & 0x3f) & 0x161ff1cU) == 0) {
    FUN_100def028(in_stack_000000a0 + 0x200);
  }
  if ((*(byte *)(in_stack_000000a0 + 0x481) & 1) != 0) {
    FUN_100def028(in_stack_000000a0);
  }
  *(undefined1 *)(in_stack_000000a0 + 0x480) = 1;
  return 0;
}

