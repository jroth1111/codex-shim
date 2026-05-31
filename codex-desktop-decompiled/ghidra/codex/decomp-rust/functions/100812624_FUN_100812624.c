
void FUN_100812624(undefined8 param_1)

{
  unkbyte9 Var1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  long *unaff_x19;
  char *unaff_x20;
  char *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  long *plVar5;
  undefined4 unaff_w25;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  long unaff_x29;
  char in_wzr;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 *puStack0000000000000010;
  undefined1 *puStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined1 *puStack0000000000000070;
  undefined *puStack0000000000000078;
  char *pcStack0000000000000080;
  undefined4 *puStack0000000000000088;
  undefined4 in_stack_00000090;
  
  auVar7._8_8_ = unaff_x22;
  auVar7._0_8_ = unaff_x23;
  Var1 = auVar7._0_9_;
  puStack0000000000000088 = &stack0x00000090;
  pcStack0000000000000080 = s_poll_pending_open__stream___108ac82c8;
  puStack0000000000000070 = (undefined1 *)&stack0x00000080;
  puStack0000000000000078 = &UNK_10b208fd0;
  puStack0000000000000018 = (undefined1 *)&stack0x00000070;
  puStack0000000000000010 = (undefined1 *)0x1;
  uStack0000000000000020 = 1;
  uStack0000000000000028 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  in_stack_00000090 = (undefined4)unaff_x28;
  if (((*(ulong *)(unaff_x26 + 0x210) <= unaff_x28) ||
      (plVar5 = (long *)(*(long *)(unaff_x26 + 0x208) + (unaff_x28 & 0xffffffff) * 0x158),
      *plVar5 == 2)) || (*(int *)((long)plVar5 + 0x13c) != unaff_w27)) {
    puStack0000000000000010 = &stack0x00000094;
    puStack0000000000000018 = &DAT_105abf048;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b233d4,&stack0x00000010,&UNK_10b3fa588);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100812994);
    (*pcVar2)();
  }
  if ((*(byte *)((long)plVar5 + 0x14c) & 1) == 0) {
    if (*unaff_x21 != '\x01') {
      cVar4 = '\x05';
      goto LAB_10081294c;
    }
    *unaff_x21 = in_wzr;
LAB_1008128bc:
    if (*unaff_x19 != 0) {
      __ZN102__LT_rama_http_core__h2__proto__streams__streams__OpaqueStreamRef_u20_as_u20_core__ops__drop__Drop_GT_4drop17h15da56b666546e37E
                ();
      lVar3 = *(long *)*unaff_x19;
      *(long *)*unaff_x19 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000105ab3ae8();
      }
    }
    *unaff_x19 = 0;
    cVar4 = '\x05';
  }
  else {
    auVar7 = (*(code *)**(undefined8 **)*unaff_x22)(((undefined8 *)*unaff_x22)[1]);
    Var1 = auVar7._0_9_;
    if (plVar5[0x15] != 0) {
      (**(code **)(plVar5[0x15] + 0x18))(plVar5[0x16]);
    }
    *(undefined1 (*) [16])(plVar5 + 0x15) = auVar7;
    cVar4 = '\x06';
    if (*unaff_x21 == '\x01') {
      *unaff_x21 = in_wzr;
    }
    else {
LAB_10081294c:
      __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E();
      if (cVar4 == '\x05') goto LAB_1008128bc;
    }
    if (cVar4 != '\x06') {
      *(undefined4 *)(unaff_x20 + 4) = unaff_w25;
      *(long *)(unaff_x20 + 8) = (long)Var1;
      uVar6 = *(undefined8 *)(unaff_x29 + -0x70);
      *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x29 + -0x68);
      *(undefined8 *)(unaff_x20 + 0x10) = uVar6;
      *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x29 + -0x60);
      *unaff_x20 = cVar4;
      unaff_x20[1] = (char)((unkuint9)Var1 >> 0x40);
      return;
    }
    cVar4 = '\x06';
  }
  *unaff_x20 = cVar4;
  return;
}

