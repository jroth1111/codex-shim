
bool FUN_1016c27c8(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x23;
  long unaff_x29;
  long in_stack_00000000;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000068;
  long lStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  
  *(char **)(unaff_x29 + -0x60) = s__failed_to_read_thread_goal_afte_108adb787;
  *(long *)(unaff_x29 + -0x58) = unaff_x29 + -0x50;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x60;
  *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
  lStack0000000000000070 = unaff_x29 + -0x70;
  uStack0000000000000068 = 1;
  uStack0000000000000078 = 1;
  uStack0000000000000080 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  (**(code **)**(undefined8 **)(unaff_x29 + -0x90))();
  if ((in_stack_00000000 != 3) && (in_stack_00000000 != 2)) {
    if (in_stack_00000010 != 0) {
      _free(in_stack_00000018);
    }
    if (in_stack_00000028 != 0) {
      _free(in_stack_00000030);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x958) = 1;
  return unaff_x23 == 4;
}

