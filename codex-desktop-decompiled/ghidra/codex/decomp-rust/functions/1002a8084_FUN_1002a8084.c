
void FUN_1002a8084(undefined8 param_1)

{
  unkbyte9 Var1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  long *unaff_x19;
  char *unaff_x20;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  int unaff_w25;
  char cVar6;
  ulong unaff_x26;
  long *plVar7;
  long unaff_x27;
  ulong *unaff_x28;
  long unaff_x29;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  long lStack0000000000000020;
  undefined1 *puStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined1 *puStack0000000000000080;
  undefined *puStack0000000000000088;
  char *pcStack0000000000000090;
  long lStack0000000000000098;
  
  auVar9._8_8_ = unaff_x23;
  auVar9._0_8_ = unaff_x24;
  Var1 = auVar9._0_9_;
  lStack0000000000000098 = unaff_x29 + -0x90;
  pcStack0000000000000090 = s_poll_pending_open__stream___108ac82c8;
  puStack0000000000000080 = (undefined1 *)&stack0x00000090;
  puStack0000000000000088 = &UNK_10b1f3630;
  puStack0000000000000028 = (undefined1 *)&stack0x00000080;
  lStack0000000000000020 = 1;
  uStack0000000000000030 = 1;
  uStack0000000000000038 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(int *)(unaff_x29 + -0x90) = (int)unaff_x26;
  *(int *)(unaff_x29 + -0x8c) = unaff_w25;
  if (((*(ulong *)(unaff_x27 + 0x1e0) <= unaff_x26) ||
      (plVar7 = (long *)(*(long *)(unaff_x27 + 0x1d8) + (unaff_x26 & 0xffffffff) * 0x140),
      *plVar7 == 2)) || (*(int *)((long)plVar7 + 0x124) != unaff_w25)) {
    lStack0000000000000020 = unaff_x29 + -0x8c;
    puStack0000000000000028 = &DAT_10571bc44;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b15a2c,&stack0x00000020,&UNK_10b3a3ca8);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002a8458);
    (*pcVar2)();
  }
  if ((*(byte *)((long)plVar7 + 0x134) & 1) == 0) {
    if ((((unaff_x22 & 1) == 0) && ((*unaff_x28 & 0x7fffffffffffffff) != 0)) &&
       (uVar4 = FUN_107c05e34(), (uVar4 & 1) == 0)) {
      cVar5 = '\x05';
      goto LAB_1002a840c;
    }
    _pthread_mutex_unlock(*unaff_x21);
  }
  else {
    auVar9 = (*(code *)**(undefined8 **)*unaff_x23)(((undefined8 *)*unaff_x23)[1]);
    Var1 = auVar9._0_9_;
    if (plVar7[0x12] != 0) {
      (**(code **)(plVar7[0x12] + 0x18))(plVar7[0x13]);
    }
    *(undefined1 (*) [16])(plVar7 + 0x12) = auVar9;
    cVar6 = '\x06';
    if ((((unaff_x22 & 1) == 0) && ((*unaff_x28 & 0x7fffffffffffffff) != 0)) &&
       (uVar4 = FUN_107c05e34(), cVar5 = '\x06', (uVar4 & 1) == 0)) {
LAB_1002a840c:
      cVar6 = cVar5;
      *(undefined1 *)(unaff_x27 + 0x18) = 1;
    }
    _pthread_mutex_unlock(*unaff_x21);
    if (cVar6 != '\x05') {
      if (cVar6 != '\x06') {
        *(int *)(unaff_x20 + 4) = unaff_w25;
        *(long *)(unaff_x20 + 8) = (long)Var1;
        uVar8 = *(undefined8 *)(unaff_x29 + -0x70);
        *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x29 + -0x68);
        *(undefined8 *)(unaff_x20 + 0x10) = uVar8;
        *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x29 + -0x60);
        *unaff_x20 = cVar6;
        unaff_x20[1] = (char)((unkuint9)Var1 >> 0x40);
        return;
      }
      cVar5 = '\x06';
      goto LAB_1002a8370;
    }
  }
  if (*unaff_x19 != 0) {
    __ZN86__LT_h2__proto__streams__streams__OpaqueStreamRef_u20_as_u20_core__ops__drop__Drop_GT_4drop17h0d2bf830884bd95eE
              ();
    lVar3 = *(long *)*unaff_x19;
    *(long *)*unaff_x19 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h180a943b0a7e6fc1E();
    }
  }
  *unaff_x19 = 0;
  cVar5 = '\x05';
LAB_1002a8370:
  *unaff_x20 = cVar5;
  return;
}

