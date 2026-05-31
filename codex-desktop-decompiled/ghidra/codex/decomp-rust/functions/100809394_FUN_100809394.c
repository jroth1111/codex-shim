
void FUN_100809394(void)

{
  long lVar1;
  char *unaff_x28;
  long unaff_x29;
  undefined1 *in_stack_00000028;
  ulong in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000060;
  ulong in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_000000a0;
  
  *(undefined1 **)(unaff_x29 + -0x70) = &stack0x000003e8;
  *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(undefined2 *)(in_stack_00000028 + 8) = 0x101;
  *(undefined4 *)(in_stack_00000028 + 0xc) = 2;
  *(undefined **)(in_stack_00000028 + 0x10) = &UNK_10b209220;
  *(undefined8 *)(in_stack_00000028 + 0x18) = 1;
  *(undefined8 *)(in_stack_00000028 + 0x20) = 0;
  *(undefined8 *)(in_stack_00000028 + 0x28) = 0;
  *in_stack_00000028 = 10;
  FUN_100e3fdac(&stack0x00000520);
  if (in_stack_00000080 != 2) {
    lVar1 = in_stack_00000088;
    if ((in_stack_00000080 & 1) != 0) {
      lVar1 = in_stack_00000088 + (*(long *)(in_stack_00000090 + 0x10) - 1U & 0xfffffffffffffff0) +
              0x10;
    }
    (**(code **)(in_stack_00000090 + 0x68))(lVar1,&stack0x00000098);
  }
  if ((*unaff_x28 == '\0') && (in_stack_000000a0 != 0)) {
    FUN_1011d7d74(&stack0x00000080,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&stack0x00000520);
  }
  FUN_100dddd8c(&stack0x00000080);
  if (in_stack_00000040 != 2) {
    lVar1 = in_stack_00000048;
    if ((in_stack_00000040 & 1) != 0) {
      lVar1 = in_stack_00000048 + (*(long *)(in_stack_00000050 + 0x10) - 1U & 0xfffffffffffffff0) +
              0x10;
    }
    (**(code **)(in_stack_00000050 + 0x68))(lVar1,&stack0x00000058);
  }
  if ((*unaff_x28 == '\0') && (in_stack_00000060 != 0)) {
    FUN_1011d7d74(&stack0x00000040,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&stack0x00000520);
  }
  FUN_100dddd8c(&stack0x00000040);
  return;
}

