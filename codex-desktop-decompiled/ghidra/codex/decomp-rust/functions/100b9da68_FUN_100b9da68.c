
void FUN_100b9da68(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x22;
  long unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000150;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000110,s_invalid_pid_file_contents_in_108ad1878,&stack0x00000140);
  *(undefined8 *)(unaff_x29 + -0x80) = unaff_x22;
  __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&stack0x00000140);
  in_stack_00000048 = *(undefined8 *)(unaff_x27 + 0x108);
  in_stack_00000040 = *(undefined8 *)(unaff_x27 + 0x100);
  in_stack_00000058 = *(undefined8 *)(unaff_x27 + 0x118);
  in_stack_00000050 = *(undefined8 *)(unaff_x27 + 0x110);
  in_stack_00000068 = *(undefined8 *)(unaff_x27 + 0x128);
  in_stack_00000060 = *(undefined8 *)(unaff_x27 + 0x120);
  *(undefined8 *)(unaff_x27 + 0x108) = *(undefined8 *)(unaff_x27 + 0xd8);
  *(undefined8 *)(unaff_x27 + 0x100) = *(undefined8 *)(unaff_x27 + 0xd0);
  in_stack_00000150 = in_stack_00000120;
  uVar1 = FUN_108857ac8(&stack0x00000140,&stack0x00000040);
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x38));
  }
  *unaff_x20 = 0x8000000000000002;
  unaff_x20[1] = uVar1;
  unaff_x20[3] = in_stack_00000038;
  unaff_x20[2] = in_stack_00000030;
  *(undefined1 *)(unaff_x19 + 0x29) = 1;
  return;
}

