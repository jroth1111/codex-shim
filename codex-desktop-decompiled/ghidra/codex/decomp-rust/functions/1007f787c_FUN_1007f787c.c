
/* WARNING: Removing unreachable block (ram,0x0001007f94d4) */

void FUN_1007f787c(void)

{
  char *unaff_x20;
  char in_wzr;
  undefined4 *in_stack_00000018;
  undefined1 *puStack0000000000000020;
  undefined *puStack0000000000000028;
  long in_stack_00000580;
  undefined8 in_stack_00000588;
  undefined8 in_stack_00000590;
  
  puStack0000000000000020 = &stack0x000008c0;
  puStack0000000000000028 = &UNK_10b208fd0;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  (**(code **)(in_stack_00000580 + 0x20))(&stack0x00000598,in_stack_00000588,in_stack_00000590);
  if (*unaff_x20 == '\x01') {
    *unaff_x20 = in_wzr;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E();
  }
  *in_stack_00000018 = 2;
  return;
}

