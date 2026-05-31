
/* WARNING: Removing unreachable block (ram,0x0001007f9f90) */
/* WARNING: Removing unreachable block (ram,0x0001007f9e54) */

void FUN_1007f976c(void)

{
  char *unaff_x20;
  undefined2 unaff_w22;
  undefined8 unaff_x28;
  char in_wzr;
  undefined4 *in_stack_00000018;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined4 in_stack_0000054c;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  FUN_100e3fdac(&stack0x000003f0);
  if (*unaff_x20 == '\x01') {
    *unaff_x20 = in_wzr;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E();
  }
  *(undefined8 *)(in_stack_00000018 + 10) = in_stack_00000198;
  *(undefined8 *)(in_stack_00000018 + 8) = in_stack_00000190;
  *(undefined1 *)(in_stack_00000018 + 2) = 0;
  *(undefined1 *)((long)in_stack_00000018 + 9) = 1;
  *(undefined2 *)((long)in_stack_00000018 + 10) = unaff_w22;
  in_stack_00000018[3] = in_stack_0000054c;
  *(undefined8 *)(in_stack_00000018 + 4) = 5;
  *(undefined8 *)(in_stack_00000018 + 6) = unaff_x28;
  *in_stack_00000018 = 4;
  return;
}

