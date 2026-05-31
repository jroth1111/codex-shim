
void FUN_100b9d9a4(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x27;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_00000150;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000000b0,s_failed_to_read_pid_file_108ad185d,&stack0x00000140);
  __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&stack0x00000140);
  in_stack_00000048 = *(undefined8 *)(unaff_x27 + 0x108);
  in_stack_00000040 = *(undefined8 *)(unaff_x27 + 0x100);
  in_stack_00000058 = *(undefined8 *)(unaff_x27 + 0x118);
  in_stack_00000050 = *(undefined8 *)(unaff_x27 + 0x110);
  in_stack_00000068 = *(undefined8 *)(unaff_x27 + 0x128);
  in_stack_00000060 = *(undefined8 *)(unaff_x27 + 0x120);
  *(undefined8 *)(unaff_x27 + 0x108) = *(undefined8 *)(unaff_x27 + 0x78);
  *(undefined8 *)(unaff_x27 + 0x100) = *(undefined8 *)(unaff_x27 + 0x70);
  in_stack_00000150 = in_stack_000000c0;
  uVar1 = FUN_108857510(&stack0x00000140,&stack0x00000040);
  *(undefined1 *)(unaff_x19 + 0x28) = 0;
  *unaff_x20 = 0x8000000000000002;
  unaff_x20[1] = uVar1;
  unaff_x20[3] = in_stack_00000038;
  unaff_x20[2] = in_stack_00000030;
  *(undefined1 *)(unaff_x19 + 0x29) = 1;
  return;
}

