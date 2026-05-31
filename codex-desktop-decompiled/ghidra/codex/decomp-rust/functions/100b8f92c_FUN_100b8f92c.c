
void FUN_100b8f92c(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x24;
  long unaff_x29;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x80,s__managed_Codex_version_was_not_u_108ad14ba,&stack0x000003b0);
  __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&stack0x000003b0);
  in_stack_00000048 = unaff_x24[1];
  in_stack_00000040 = *unaff_x24;
  in_stack_00000058 = unaff_x24[3];
  in_stack_00000050 = unaff_x24[2];
  in_stack_00000068 = unaff_x24[5];
  in_stack_00000060 = unaff_x24[4];
  unaff_x24[1] = unaff_x24[0x79];
  *unaff_x24 = unaff_x24[0x78];
  uVar1 = FUN_108857318(&stack0x000003b0,&stack0x00000040);
  if (in_stack_00000020 != 0) {
    _free(in_stack_00000028);
  }
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar1;
  unaff_x20[2] = 0x8000000000000000;
  *(undefined1 *)(unaff_x19 + 0x458) = 1;
  return;
}

