
void FUN_1007f66d0(void)

{
  undefined8 extraout_x1;
  char *pcVar1;
  long unaff_x28;
  char in_wzr;
  undefined4 *in_stack_00000018;
  
  FUN_1007fa6e4(&stack0x00000ba0);
  pcVar1 = *(char **)(unaff_x28 + 0x20);
  if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
              (pcVar1,extraout_x1,1000000000);
  }
  __ZN15rama_http_types5proto2h25frame11early_frame23EarlyFrameStreamContext21record_priority_frame17h3794232fa24b36a0E
            (pcVar1 + 0x260,&stack0x00000580);
  if (*pcVar1 == '\x01') {
    *pcVar1 = in_wzr;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar1,0);
  }
  *in_stack_00000018 = 2;
  return;
}

