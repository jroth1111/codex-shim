
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002a8178(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  unkbyte9 Var4;
  code *pcVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  char cVar9;
  long *unaff_x19;
  char *unaff_x20;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  char cVar10;
  ulong unaff_x26;
  long *plVar11;
  long unaff_x27;
  ulong *unaff_x28;
  long unaff_x29;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  long lStack0000000000000020;
  undefined1 *puStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined1 *puStack0000000000000058;
  undefined *puStack0000000000000060;
  char *pcStack0000000000000080;
  undefined1 *puStack0000000000000088;
  
  puStack0000000000000088 = &stack0x00000090;
  pcStack0000000000000080 = s_poll_pending_open__stream___108ac82c8;
  puStack0000000000000058 = (undefined1 *)&stack0x00000080;
  puStack0000000000000060 = &UNK_10b1f3630;
  puStack0000000000000028 = (undefined1 *)&stack0x00000058;
  lStack0000000000000020 = 1;
  uStack0000000000000030 = 1;
  uStack0000000000000038 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
            (___ZN2h25proto7streams7streams35Streams_LT_B_C_h2__client__Peer_GT_17poll_pending_open10__CALLSITE17h86fcc0bf0ff2cdb9E
             ,&stack0x00000020);
  lVar6 = 
  ___ZN2h25proto7streams7streams35Streams_LT_B_C_h2__client__Peer_GT_17poll_pending_open10__CALLSITE17h86fcc0bf0ff2cdb9E
  ;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar12 = *(undefined8 *)
              (
              ___ZN2h25proto7streams7streams35Streams_LT_B_C_h2__client__Peer_GT_17poll_pending_open10__CALLSITE17h86fcc0bf0ff2cdb9E
              + 0x20);
    uVar3 = *(undefined8 *)
             (
             ___ZN2h25proto7streams7streams35Streams_LT_B_C_h2__client__Peer_GT_17poll_pending_open10__CALLSITE17h86fcc0bf0ff2cdb9E
             + 0x28);
    *(undefined8 *)(unaff_x29 + -0x90) = 5;
    *(undefined8 *)(unaff_x29 + -0x88) = uVar12;
    *(undefined8 *)(unaff_x29 + -0x80) = uVar3;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0x90);
    unaff_x24 = lVar6;
    if (iVar7 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar6,puVar2,puVar1,unaff_x29 + -0x90,&stack0x00000020);
    }
  }
  *(int *)(unaff_x29 + -0x90) = (int)unaff_x26;
  *(int *)(unaff_x29 + -0x8c) = unaff_w25;
  if (((*(ulong *)(unaff_x27 + 0x1e0) <= unaff_x26) ||
      (plVar11 = (long *)(*(long *)(unaff_x27 + 0x1d8) + (unaff_x26 & 0xffffffff) * 0x140),
      *plVar11 == 2)) || (*(int *)((long)plVar11 + 0x124) != unaff_w25)) {
    lStack0000000000000020 = unaff_x29 + -0x8c;
    puStack0000000000000028 = &DAT_10571bc44;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b15a2c,&stack0x00000020,&UNK_10b3a3ca8);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1002a8458);
    (*pcVar5)();
  }
  if ((*(byte *)((long)plVar11 + 0x134) & 1) == 0) {
    if ((((unaff_x22 & 1) == 0) && ((*unaff_x28 & 0x7fffffffffffffff) != 0)) &&
       (uVar8 = FUN_107c05e34(), (uVar8 & 1) == 0)) {
      cVar9 = '\x05';
      goto LAB_1002a840c;
    }
    _pthread_mutex_unlock(*unaff_x21);
  }
  else {
    auVar13 = (*(code *)**(undefined8 **)*unaff_x23)(((undefined8 *)*unaff_x23)[1]);
    Var4 = auVar13._0_9_;
    unaff_x23 = auVar13._8_8_;
    unaff_x24 = auVar13._0_8_;
    if (plVar11[0x12] != 0) {
      (**(code **)(plVar11[0x12] + 0x18))(plVar11[0x13]);
    }
    *(undefined1 (*) [16])(plVar11 + 0x12) = auVar13;
    cVar10 = '\x06';
    if ((((unaff_x22 & 1) == 0) && ((*unaff_x28 & 0x7fffffffffffffff) != 0)) &&
       (uVar8 = FUN_107c05e34(), cVar9 = '\x06', (uVar8 & 1) == 0)) {
LAB_1002a840c:
      cVar10 = cVar9;
      auVar13._8_8_ = unaff_x23;
      auVar13._0_8_ = unaff_x24;
      Var4 = auVar13._0_9_;
      *(undefined1 *)(unaff_x27 + 0x18) = 1;
    }
    _pthread_mutex_unlock(*unaff_x21);
    if (cVar10 != '\x05') {
      if (cVar10 != '\x06') {
        *(int *)(unaff_x20 + 4) = unaff_w25;
        *(long *)(unaff_x20 + 8) = (long)Var4;
        uVar12 = *(undefined8 *)(unaff_x29 + -0x70);
        *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x29 + -0x68);
        *(undefined8 *)(unaff_x20 + 0x10) = uVar12;
        *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x29 + -0x60);
        *unaff_x20 = cVar10;
        unaff_x20[1] = (char)((unkuint9)Var4 >> 0x40);
        return;
      }
      cVar9 = '\x06';
      goto LAB_1002a8370;
    }
  }
  if (*unaff_x19 != 0) {
    __ZN86__LT_h2__proto__streams__streams__OpaqueStreamRef_u20_as_u20_core__ops__drop__Drop_GT_4drop17h0d2bf830884bd95eE
              ();
    lVar6 = *(long *)*unaff_x19;
    *(long *)*unaff_x19 = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h180a943b0a7e6fc1E();
    }
  }
  *unaff_x19 = 0;
  cVar9 = '\x05';
LAB_1002a8370:
  *unaff_x20 = cVar9;
  return;
}

