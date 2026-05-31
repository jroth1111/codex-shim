
void FUN_101bf6e20(void)

{
  undefined8 unaff_x19;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000010,s_1failed_to_force_terminate_pid_m_108ade834,unaff_x29 + -0x40);
  __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(unaff_x29 + -0x40);
  in_stack_00000038 = *(undefined8 *)(unaff_x29 + -0x38);
  in_stack_00000030 = *(undefined8 *)(unaff_x29 + -0x40);
  in_stack_00000048 = *(undefined8 *)(unaff_x29 + -0x28);
  in_stack_00000040 = *(undefined8 *)(unaff_x29 + -0x30);
  in_stack_00000058 = *(undefined8 *)(unaff_x29 + -0x18);
  in_stack_00000050 = *(undefined8 *)(unaff_x29 + -0x20);
  *(undefined8 *)(unaff_x29 + -0x38) = in_stack_00000018;
  *(undefined8 *)(unaff_x29 + -0x40) = in_stack_00000010;
  *(undefined8 *)(unaff_x29 + -0x30) = in_stack_00000020;
  *(undefined8 *)(unaff_x29 + -0x28) = unaff_x19;
  FUN_1088c6db8(unaff_x29 + -0x40,&stack0x00000030);
  return;
}

