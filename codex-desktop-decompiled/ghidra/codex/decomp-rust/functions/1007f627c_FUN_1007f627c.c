
void FUN_1007f627c(void)

{
  code *pcVar1;
  char cVar2;
  undefined8 extraout_x1;
  undefined8 uVar3;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  uint uVar4;
  char *unaff_x20;
  char unaff_w21;
  long *plVar5;
  long unaff_x28;
  char in_wzr;
  undefined4 *in_stack_00000018;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  cVar2 = __ZN14rama_http_core2h25proto9ping_pong8PingPong9recv_ping17h98a0783e428024b7E
                    (*(undefined8 *)(unaff_x28 + 0x18),&stack0x00000ba0);
  if (cVar2 != '\x02') goto LAB_1007f9e54;
  plVar5 = *(long **)(unaff_x28 + 8);
  if ((int)plVar5[5] == 0) {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cb06ea,0x43,&UNK_10b2232e0);
    uVar3 = extraout_x1_00;
LAB_1007f9ff8:
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(unaff_x20,uVar3,1000000000);
    uVar4 = *(uint *)(unaff_x20 + 0x13c);
    cVar2 = *unaff_x20;
    if (cVar2 == unaff_w21) {
      *unaff_x20 = in_wzr;
    }
    uVar3 = extraout_x1_01;
    if (cVar2 != '\x01') {
LAB_1007fa018:
      __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(unaff_x20,0);
      uVar3 = extraout_x1_02;
    }
  }
  else {
    unaff_x20 = *(char **)(unaff_x28 + 0x20);
    unaff_w21 = '\x01';
    uVar3 = extraout_x1;
    if (*unaff_x20 != '\0') goto LAB_1007f9ff8;
    *unaff_x20 = '\x01';
    uVar4 = *(uint *)(unaff_x20 + 0x13c);
    if (*unaff_x20 != '\x01') goto LAB_1007fa018;
    *unaff_x20 = in_wzr;
  }
  if (*unaff_x20 == '\0') {
    *unaff_x20 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(unaff_x20,uVar3,1000000000);
  }
  *(uint *)(unaff_x20 + 0x140) = uVar4;
  if (*unaff_x20 == '\x01') {
    *unaff_x20 = in_wzr;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(unaff_x20,0);
  }
  if (((int)plVar5[5] == 1) && (*(uint *)((long)plVar5 + 0x2c) < uVar4)) {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__GOAWAY_stream_IDs_shouldn_t_be_h_108b23577,&stack0x00000a40,&UNK_10b3fc618);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007fa264);
    (*pcVar1)();
  }
  *(undefined4 *)(plVar5 + 5) = 1;
  *(uint *)((long)plVar5 + 0x2c) = uVar4;
  *(undefined4 *)(plVar5 + 6) = 0;
  if (*plVar5 != 0) {
    (**(code **)(*plVar5 + 0x20))(plVar5 + 3,plVar5[1],plVar5[2]);
  }
  plVar5[4] = (ulong)uVar4;
  plVar5[1] = 1;
  *plVar5 = (long)&UNK_10b209220;
  plVar5[3] = 0;
  plVar5[2] = 0;
LAB_1007f9e54:
  *in_stack_00000018 = 2;
  return;
}

