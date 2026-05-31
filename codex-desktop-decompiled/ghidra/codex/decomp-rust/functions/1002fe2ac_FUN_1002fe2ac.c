
void FUN_1002fe2ac(void)

{
  long lVar1;
  undefined8 *unaff_x19;
  char *unaff_x26;
  int unaff_w27;
  long unaff_x29;
  undefined1 auVar2 [16];
  ulong in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000030;
  
  *(undefined1 **)(unaff_x29 + -0x98) = &stack0x00000390;
  *(undefined **)(unaff_x29 + -0x90) = &UNK_10b1f8a98;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  FUN_1002f7c70();
  auVar2 = __ZN22aws_smithy_runtime_api6client18runtime_components17RuntimeComponents21validate_final_config17h5c7200b1b4830a82E
                     (&stack0x000003d0);
  if (auVar2._0_8_ == 0) {
    _memcpy();
    FUN_10031bdc4(&stack0x000001f0);
    FUN_10031bdc4(&stack0x00000040);
    if (unaff_w27 == 0) {
      return;
    }
    if (in_stack_00000010 != 2) {
      lVar1 = in_stack_00000018;
      if ((in_stack_00000010 & 1) != 0) {
        lVar1 = in_stack_00000018 + (*(long *)(in_stack_00000020 + 0x10) - 1U & 0xfffffffffffffff0)
                + 0x10;
      }
      (**(code **)(in_stack_00000020 + 0x68))(lVar1,&stack0x00000028);
    }
    if ((*unaff_x26 == '\0') && (in_stack_00000030 != 0)) {
      FUN_1003239f0(&stack0x00000010,&UNK_108c80723,0x15,s_<____108ab67c5,&stack0x00000890);
    }
  }
  else {
    *(undefined1 (*) [16])(unaff_x19 + 1) = auVar2;
    *unaff_x19 = 0x8000000000000000;
    FUN_10031b7e8(&stack0x000003d0);
    FUN_10031bdc4(&stack0x000001f0);
    FUN_10031bdc4(&stack0x00000040);
    if (unaff_w27 == 0) {
      return;
    }
    if (in_stack_00000010 != 2) {
      lVar1 = in_stack_00000018;
      if ((in_stack_00000010 & 1) != 0) {
        lVar1 = in_stack_00000018 + (*(long *)(in_stack_00000020 + 0x10) - 1U & 0xfffffffffffffff0)
                + 0x10;
      }
      (**(code **)(in_stack_00000020 + 0x68))(lVar1,&stack0x00000028);
    }
    if ((*unaff_x26 == '\0') && (in_stack_00000030 != 0)) {
      FUN_1003239f0(&stack0x00000010,&UNK_108c80723,0x15,s_<____108ab67c5,&stack0x00000890);
    }
  }
  FUN_100319104(&stack0x00000010);
  return;
}

