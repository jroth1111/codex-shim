
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100812718(undefined8 param_1)

{
  undefined *puVar1;
  unkbyte9 Var2;
  code *pcVar3;
  long lVar4;
  int iVar5;
  char cVar6;
  long *unaff_x19;
  char *unaff_x20;
  char *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long *plVar7;
  undefined *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  long unaff_x29;
  char in_wzr;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  long lStack0000000000000010;
  undefined1 *puStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined1 *puStack0000000000000048;
  undefined *puStack0000000000000050;
  char *pcStack0000000000000070;
  undefined1 *puStack0000000000000078;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  
  puStack0000000000000078 = &stack0x00000080;
  pcStack0000000000000070 = s_poll_pending_open__stream___108ac82c8;
  puStack0000000000000048 = (undefined1 *)&stack0x00000070;
  puStack0000000000000050 = &UNK_10b208fd0;
  puStack0000000000000018 = (undefined1 *)&stack0x00000048;
  lStack0000000000000010 = 1;
  uStack0000000000000020 = 1;
  uStack0000000000000028 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(*unaff_x23,&stack0x00000010);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    unaff_x23 = (undefined8 *)*unaff_x23;
    in_stack_00000098 = unaff_x23[4];
    in_stack_000000a0 = unaff_x23[5];
    in_stack_00000090 = 5;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    unaff_x25 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      unaff_x25 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar1 + 0x18))(unaff_x25,&stack0x00000090);
    if (iVar5 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (unaff_x23,unaff_x25,puVar1,&stack0x00000090,&stack0x00000010);
    }
  }
  in_stack_00000090 = CONCAT44(unaff_w27,(int)unaff_x28);
  if (((*(ulong *)(unaff_x26 + 0x210) <= unaff_x28) ||
      (plVar7 = (long *)(*(long *)(unaff_x26 + 0x208) + (unaff_x28 & 0xffffffff) * 0x158),
      *plVar7 == 2)) || (*(int *)((long)plVar7 + 0x13c) != unaff_w27)) {
    lStack0000000000000010 = (long)&stack0x00000090 + 4;
    puStack0000000000000018 = &DAT_105abf048;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b233d4,&stack0x00000010,&UNK_10b3fa588);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100812994);
    (*pcVar3)();
  }
  if ((*(byte *)((long)plVar7 + 0x14c) & 1) == 0) {
    if (*unaff_x21 != '\x01') {
      cVar6 = '\x05';
      goto LAB_10081294c;
    }
    *unaff_x21 = in_wzr;
LAB_1008128bc:
    if (*unaff_x19 != 0) {
      __ZN102__LT_rama_http_core__h2__proto__streams__streams__OpaqueStreamRef_u20_as_u20_core__ops__drop__Drop_GT_4drop17h15da56b666546e37E
                ();
      lVar4 = *(long *)*unaff_x19;
      *(long *)*unaff_x19 = lVar4 + -1;
      LORelease();
      if (lVar4 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000105ab3ae8();
      }
    }
    *unaff_x19 = 0;
    cVar6 = '\x05';
  }
  else {
    auVar9 = (*(code *)**(undefined8 **)*unaff_x22)(((undefined8 *)*unaff_x22)[1]);
    Var2 = auVar9._0_9_;
    unaff_x22 = auVar9._8_8_;
    unaff_x23 = auVar9._0_8_;
    if (plVar7[0x15] != 0) {
      (**(code **)(plVar7[0x15] + 0x18))(plVar7[0x16]);
    }
    *(undefined1 (*) [16])(plVar7 + 0x15) = auVar9;
    cVar6 = '\x06';
    if (*unaff_x21 == '\x01') {
      *unaff_x21 = in_wzr;
    }
    else {
LAB_10081294c:
      auVar9._8_8_ = unaff_x22;
      auVar9._0_8_ = unaff_x23;
      Var2 = auVar9._0_9_;
      __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E();
      if (cVar6 == '\x05') goto LAB_1008128bc;
    }
    if (cVar6 != '\x06') {
      *(int *)(unaff_x20 + 4) = (int)unaff_x25;
      *(long *)(unaff_x20 + 8) = (long)Var2;
      uVar8 = *(undefined8 *)(unaff_x29 + -0x70);
      *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x29 + -0x68);
      *(undefined8 *)(unaff_x20 + 0x10) = uVar8;
      *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x29 + -0x60);
      *unaff_x20 = cVar6;
      unaff_x20[1] = (char)((unkuint9)Var2 >> 0x40);
      return;
    }
    cVar6 = '\x06';
  }
  *unaff_x20 = cVar6;
  return;
}

