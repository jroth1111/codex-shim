
void FUN_100b9f814(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000040,s_invalid_pid_file_contents_in_108ad1878,unaff_x29 + -0x70);
  __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(unaff_x29 + -0x70);
  in_stack_00000068 = *(undefined8 *)(unaff_x29 + -0x68);
  in_stack_00000060 = *(undefined8 *)(unaff_x29 + -0x70);
  in_stack_00000078 = *(undefined8 *)(unaff_x29 + -0x58);
  in_stack_00000070 = *(undefined8 *)(unaff_x29 + -0x60);
  in_stack_00000088 = *(undefined8 *)(unaff_x29 + -0x48);
  in_stack_00000080 = *(undefined8 *)(unaff_x29 + -0x50);
  *(undefined8 *)(unaff_x29 + -0x68) = in_stack_00000048;
  *(undefined8 *)(unaff_x29 + -0x70) = in_stack_00000040;
  *(undefined8 *)(unaff_x29 + -0x60) = in_stack_00000050;
  *(undefined8 *)(unaff_x29 + -0x58) = unaff_x21;
  uVar1 = FUN_108857ac8(unaff_x29 + -0x70,&stack0x00000060);
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x20));
  }
  *unaff_x20 = 0x8000000000000002;
  unaff_x20[1] = uVar1;
  unaff_x20[3] = in_stack_00000028;
  unaff_x20[2] = in_stack_00000020;
  *(undefined1 *)(unaff_x19 + 0x10) = 1;
  return;
}

