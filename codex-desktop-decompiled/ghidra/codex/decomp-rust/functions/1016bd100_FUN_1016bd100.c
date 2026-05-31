
void FUN_1016bd100(void)

{
  long unaff_x21;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000040;
  long in_stack_00000200;
  long in_stack_00000208;
  long in_stack_00000210;
  long *in_stack_000007a0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000200,s__failed_to_serialize_MCP_elicita_108adb549,unaff_x29 + -0xd0);
  if (*in_stack_000007a0 == 1) {
    FUN_100de21d4(in_stack_000007a0 + 1);
  }
  else if ((*in_stack_000007a0 == 0) && (in_stack_000007a0[2] != 0)) {
    _free(in_stack_000007a0[1]);
  }
  _free(in_stack_000007a0);
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000018);
  }
  in_stack_00000040[2] = in_stack_00000208;
  in_stack_00000040[3] = in_stack_00000210;
  *in_stack_00000040 = unaff_x24 + -3;
  in_stack_00000040[1] = in_stack_00000200;
  if (unaff_x21 != 0) {
    _free(in_stack_00000038);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  FUN_100dfca00(&stack0x00000048);
  return;
}

