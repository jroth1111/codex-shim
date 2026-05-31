
void FUN_100b176e4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *unaff_x24;
  long unaff_x27;
  long in_stack_00000078;
  long in_stack_00000238;
  undefined8 in_stack_00000240;
  long in_stack_000002f0;
  long in_stack_00000300;
  long in_stack_00000478;
  undefined8 in_stack_00000480;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000007f8,s_open_trace_event_log_108ad0b92,&stack0x000002f0);
  __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&stack0x000002f0);
  uVar1 = FUN_108857510(&stack0x000002f0,&stack0x00000be0);
  *unaff_x24 = 2;
  unaff_x24[1] = uVar1;
  if (in_stack_00000478 != 0) {
    _free(in_stack_00000480);
  }
  FUN_100e0fd70(&stack0x000000b0);
  if (in_stack_00000238 != 0) {
    _free(in_stack_00000240);
  }
  FUN_100d1d094(&stack0x00000278);
  FUN_100d1d094(&stack0x00000290);
  FUN_100d36c38(&stack0x000002a8);
  while (FUN_100f3aba0(&stack0x00000be0,&stack0x000002f0), in_stack_000002f0 != 0) {
    lVar2 = in_stack_000002f0 + in_stack_00000300 * 0x18;
    if (*(long *)(lVar2 + 0x6e8) != 0) {
      _free(*(undefined8 *)(lVar2 + 0x6f0));
    }
    FUN_100dcbaa8(in_stack_000002f0 + in_stack_00000300 * 0xa0);
  }
  FUN_100d85790(&stack0x000002d8);
  FUN_100cd332c(&stack0x00000250);
  if (in_stack_00000078 != 0) {
    _free();
  }
  if (unaff_x27 != 0) {
    _free();
  }
  return;
}

