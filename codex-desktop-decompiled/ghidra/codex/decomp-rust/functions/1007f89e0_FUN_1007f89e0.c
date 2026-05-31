
/* WARNING: Removing unreachable block (ram,0x0001007f91d0) */

void FUN_1007f89e0(void)

{
  char *unaff_x20;
  char in_wzr;
  undefined4 *in_stack_00000018;
  
  FUN_100811410(&stack0x00000ba0);
  FUN_100e3fdac(&stack0x000003f0);
  if (*unaff_x20 == '\x01') {
    *unaff_x20 = in_wzr;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E();
  }
  *in_stack_00000018 = 2;
  return;
}

