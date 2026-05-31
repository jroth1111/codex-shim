
void FUN_100b194d8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x24;
  long unaff_x26;
  long in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000007f8,s_read_108ad0b8a,&stack0x000002f0);
  if (in_stack_000000b0 != 0) {
    _free();
  }
  __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&stack0x000000b0);
  in_stack_000000b8 = *(undefined8 *)(unaff_x26 + 0x338);
  in_stack_000000b0 = *(undefined8 *)(unaff_x26 + 0x330);
  uVar1 = FUN_108857ac8(&stack0x000000b0,&stack0x000002f0);
  *unaff_x24 = 2;
  unaff_x24[1] = uVar1;
  return;
}

