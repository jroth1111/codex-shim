
undefined1  [16] FUN_100b9fc44(void)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long *unaff_x19;
  
  uVar2 = FUN_108858fa8(s__timed_out_waiting_for_pid_manag_108ad18da,&stack0x000000a0);
  if (*unaff_x19 != 0) {
    _free(unaff_x19[1]);
  }
  *(undefined1 *)((long)unaff_x19 + 0x55) = 1;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  return auVar1 << 0x40;
}

