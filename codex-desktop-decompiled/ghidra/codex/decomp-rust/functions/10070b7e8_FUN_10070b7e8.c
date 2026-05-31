
void FUN_10070b7e8(void)

{
  long unaff_x29;
  undefined8 *in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000c20;
  long in_stack_00000f30;
  
  *(char **)(unaff_x29 + -0x68) = s_Error_reading_from_stream__108ac5064;
  *(undefined1 **)(unaff_x29 + -0x60) = &stack0x00000908;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x68;
  *(undefined **)(unaff_x29 + -0x70) = &UNK_10b208fd0;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  _memcpy(&stack0x00000f30,&stack0x00000c20,0x310);
  if (in_stack_00000f30 == 0x15) {
    FUN_100d9eca0(&stack0x00000f30);
    in_stack_00000c20 = 0x15;
  }
  else {
    _memcpy(&stack0x00000600);
  }
  *in_stack_00000000 = in_stack_00000c20;
  _memcpy(in_stack_00000000 + 1,&stack0x00000600,0x308);
  *(undefined1 *)(in_stack_00000008 + 0x10) = 1;
  return;
}

