
void FUN_1016bd6cc(void)

{
  long unaff_x22;
  ulong unaff_x25;
  long unaff_x29;
  long *in_stack_00000040;
  long in_stack_00000200;
  long in_stack_00000208;
  long in_stack_00000210;
  long *in_stack_000007a0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000200,s_9failed_to_serialize_command_exe_108adb5e6,unaff_x29 + -0xd0);
  if (*in_stack_000007a0 == 1) {
    FUN_100de21d4(in_stack_000007a0 + 1);
  }
  else if ((*in_stack_000007a0 == 0) && (in_stack_000007a0[2] != 0)) {
    _free(in_stack_000007a0[1]);
  }
  _free(in_stack_000007a0);
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  in_stack_00000040[2] = in_stack_00000208;
  in_stack_00000040[3] = in_stack_00000210;
  in_stack_00000040[1] = in_stack_00000200;
  *in_stack_00000040 = unaff_x22 + -3;
  FUN_100dfca00(&stack0x00000048);
  return;
}

