
undefined8 FUN_10051f9c4(undefined8 param_1)

{
  long unaff_x19;
  undefined1 *unaff_x27;
  long unaff_x29;
  undefined8 *in_stack_00000230;
  
  *(undefined8 *)(unaff_x29 + -0xf0) = 1;
  *(undefined1 **)(unaff_x29 + -0xe8) = &stack0x00000260;
  *(undefined8 *)(unaff_x29 + -0xe0) = 1;
  *(undefined8 *)(unaff_x29 + -0xd8) = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  (**(code **)*in_stack_00000230)();
  *unaff_x27 = 1;
  *(undefined1 *)(unaff_x19 + 0x670) = 1;
  return 0;
}

