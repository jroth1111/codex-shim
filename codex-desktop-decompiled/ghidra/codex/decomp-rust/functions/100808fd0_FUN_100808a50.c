
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100808a50(void)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long unaff_x21;
  long unaff_x22;
  byte bVar11;
  ulong uVar12;
  char *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  ulong in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000060;
  long in_stack_00000070;
  uint uStack0000000000000078;
  int iStack000000000000007c;
  ulong in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined1 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  ulong in_stack_000000e8;
  ulong in_stack_000000f0;
  undefined8 in_stack_000000f8;
  ulong in_stack_00000100;
  uint uStack0000000000000108;
  int iStack000000000000010c;
  byte in_stack_00000110;
  undefined4 uStack0000000000000118;
  byte bStack000000000000011e;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  ulong in_stack_000003a0;
  ulong in_stack_000003a8;
  undefined8 in_stack_000003b0;
  undefined4 in_stack_000003b8;
  byte in_stack_000003be;
  ulong in_stack_00000420;
  undefined *in_stack_00000428;
  long in_stack_00000430;
  long lVar13;
  long in_stack_00000440;
  uint in_stack_000004b4;
  undefined *puVar14;
  long lVar15;
  
  *(undefined1 **)(unaff_x29 + -0x70) = &stack0x000003e8;
  *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
  puVar10 = (undefined *)(unaff_x29 + -0x70);
  lVar15 = 1;
  FUN_100809878(&stack0x00000520);
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
     (((bRam000000010b636a68 - 1 < 2 ||
       ((bRam000000010b636a68 != 0 &&
        (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hddeb3815592805afE
                           ), cVar4 != '\0')))) &&
      (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hddeb3815592805afE
                         ), iVar6 != 0)))) {
    __ZN7tracing4span4Span3new17hfb1cb23559a61740E
              (&stack0x00000420,
               ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hddeb3815592805afE
               ,&stack0x00000520);
    puVar10 = in_stack_00000428;
    lVar15 = in_stack_00000430;
    puVar14 = (undefined *)0x8;
    lVar13 = 0;
  }
  else {
    in_stack_00000440 =
         ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hddeb3815592805afE
    ;
    in_stack_00000420 = 2;
    puVar14 = puVar10;
    lVar13 = lVar15;
    if (*unaff_x28 == '\0') {
      __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&stack0x00000520,&stack0x00000420);
    }
  }
  if (in_stack_00000420 != 2) {
    puVar8 = puVar10;
    if ((in_stack_00000420 & 1) != 0) {
      puVar8 = puVar10 + (*(long *)(lVar15 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(lVar15 + 0x60))(puVar8,&stack0x00000438);
  }
  if ((*unaff_x28 == '\0') && (in_stack_00000440 != 0)) {
    puVar14 = &DAT_100c7b3a0;
    FUN_1011d7d74(&stack0x00000420,&UNK_108cd3ef5,0x15,s__>___108ab67cd,&stack0x00000520);
  }
  iVar6 = iStack000000000000007c;
  uVar1 = uStack0000000000000078;
  if ((((ulong)uStack0000000000000078 < *(ulong *)(in_stack_00000070 + 0x10)) &&
      (plVar7 = (long *)(*(long *)(in_stack_00000070 + 8) + (ulong)uStack0000000000000078 * 0x158),
      *plVar7 != 2)) && (*(int *)((long)plVar7 + 0x13c) == iStack000000000000007c)) {
    __ZN14rama_http_core2h25proto7streams6stream6Stream9send_data17h290d3ac73d294ff5E
              (plVar7,in_stack_000004b4,*(undefined4 *)(unaff_x21 + 0x54));
    if (!SCARRY4(*(int *)(unaff_x21 + 0x4c),in_stack_000004b4)) {
      *(uint *)(unaff_x21 + 0x4c) = *(int *)(unaff_x21 + 0x4c) + in_stack_000004b4;
    }
    if (in_stack_00000420 != 2) {
      puVar8 = puVar10;
      if ((in_stack_00000420 & 1) != 0) {
        puVar8 = puVar10 + (*(long *)(lVar15 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
      }
      (**(code **)(lVar15 + 0x68))(puVar8,&stack0x00000438);
    }
    if ((*unaff_x28 == '\0') && (in_stack_00000440 != 0)) {
      puVar14 = &DAT_100c7b3a0;
      FUN_1011d7d74(&stack0x00000420,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&stack0x00000520);
    }
    FUN_100dddd8c(&stack0x00000420);
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bRam000000010b636a50 - 1 < 2 ||
         ((bRam000000010b636a50 != 0 &&
          (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hadfe2e7f1a559cb8E
                             ), cVar4 != '\0')))))) &&
       (iVar5 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hadfe2e7f1a559cb8E
                          ), iVar5 != 0)) {
      __ZN7tracing4span4Span3new17hfb1cb23559a61740E
                (&stack0x00000420,
                 ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hadfe2e7f1a559cb8E
                 ,&stack0x00000520);
      puVar14 = puVar10;
      lVar13 = lVar15;
    }
    else {
      in_stack_00000440 =
           ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hadfe2e7f1a559cb8E
      ;
      in_stack_00000420 = 2;
      if (*unaff_x28 == '\0') {
        __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&stack0x00000520,&stack0x00000420);
      }
    }
    if (in_stack_00000420 != 2) {
      puVar10 = puVar14;
      if ((in_stack_00000420 & 1) != 0) {
        puVar10 = puVar14 + (*(long *)(lVar13 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
      }
      (**(code **)(lVar13 + 0x60))(puVar10,&stack0x00000438);
    }
    if ((*unaff_x28 == '\0') && (in_stack_00000440 != 0)) {
      FUN_1011d7d74(&stack0x00000420,&UNK_108cd3ef5,0x15,s__>___108ab67cd,&stack0x00000520);
    }
    __ZN14rama_http_core2h25proto7streams12flow_control11FlowControl9send_data17h2af0595716b0e8a7E
              (unaff_x21 + 0x48,in_stack_000004b4);
    uVar12 = (ulong)in_stack_000004b4;
    bVar11 = in_stack_000003be;
    if (unaff_x22 != 2) {
      uVar9 = in_stack_000003a8;
      if (unaff_x22 == 1) {
        uVar9 = 0;
        if (in_stack_000003a8 <= in_stack_000003a0) {
          uVar9 = in_stack_000003a0 - in_stack_000003a8;
        }
      }
      if (uVar12 < uVar9) {
        bVar11 = in_stack_000003be & 0xfe;
      }
    }
    if (in_stack_00000420 != 2) {
      if ((in_stack_00000420 & 1) != 0) {
        puVar14 = puVar14 + (*(long *)(lVar13 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
      }
      (**(code **)(lVar13 + 0x68))(puVar14,&stack0x00000438);
    }
    if ((*unaff_x28 == '\0') && (in_stack_00000440 != 0)) {
      FUN_1011d7d74(&stack0x00000420,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&stack0x00000520);
    }
    FUN_100dddd8c(&stack0x00000420);
    in_stack_00000110 = in_stack_000003be & 1;
    uStack0000000000000108 = uVar1;
    iStack000000000000010c = iVar6;
    in_stack_000000d0 = 0;
    in_stack_000000d8 = in_stack_00000390;
    in_stack_000000e0 = in_stack_00000398;
    in_stack_000000e8 = in_stack_000003a0;
    in_stack_000000f0 = in_stack_000003a8;
    in_stack_000000f8 = in_stack_000003b0;
    in_stack_00000100 = uVar12;
    uStack0000000000000118 = in_stack_000003b8;
    bStack000000000000011e = bVar11;
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bRam000000010b636a20 - 1 < 2 ||
         ((bRam000000010b636a20 != 0 &&
          (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h9c1a42d4092438d0E
                             ), cVar4 != '\0')))))) &&
       (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h9c1a42d4092438d0E
                          ), iVar6 != 0)) {
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h9c1a42d4092438d0E
                 ,&stack0x00000520);
      uVar2 = 
      ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h9c1a42d4092438d0E
      ;
      if ((*unaff_x28 == '\0') && (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar10 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar10 = &UNK_10b3c24c8;
        }
        puVar14 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar14 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar10 + 0x18))(puVar14,&stack0x00000230);
        if (iVar6 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (uVar2,puVar14,puVar10,&stack0x00000230,&stack0x00000520);
        }
      }
    }
    else if ((*unaff_x28 == '\0') && (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puVar10 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar10 = &UNK_10b3c24c8;
      }
      puVar14 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar14 = &UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar10 + 0x18))(puVar14,&stack0x00000508);
      if (iVar6 != 0) {
        *(char **)(unaff_x29 + -0x70) = s_pop_frame__frame__108ab9837;
        *(undefined1 **)(unaff_x29 + -0x68) = &stack0x000003e8;
        *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x70;
        *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
        (**(code **)(puVar10 + 0x20))(puVar14,&stack0x00000520);
      }
    }
    if ((ulong)uStack0000000000000078 < *(ulong *)(in_stack_00000070 + 0x10)) {
      plVar7 = (long *)(*(long *)(in_stack_00000070 + 8) + (ulong)uStack0000000000000078 * 0x158);
      if ((*plVar7 != 2) && (*(int *)((long)plVar7 + 0x13c) == iStack000000000000007c)) {
        if ((*plVar7 != 0) || ((*(byte *)(plVar7 + 0xd) < 7 && (*(byte *)(plVar7 + 0xd) == 6)))) {
          func_0x00010080dc60();
        }
        __ZN14rama_http_core2h25proto7streams6counts6Counts16transition_after17ha1da6b7002dcf5f5E
                  (in_stack_00000030,&stack0x00000520,in_stack_000000b0._7_1_);
        _memcpy(in_stack_00000028,&stack0x000000d0,0x160);
        if (in_stack_00000080 != 2) {
          lVar15 = in_stack_00000088;
          if ((in_stack_00000080 & 1) != 0) {
            lVar15 = in_stack_00000088 +
                     (*(long *)(in_stack_00000090 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
          }
          (**(code **)(in_stack_00000090 + 0x68))(lVar15,&stack0x00000098);
        }
        if ((*unaff_x28 == '\0') && (in_stack_000000a0 != 0)) {
          FUN_1011d7d74(&stack0x00000080,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&stack0x00000520);
        }
        FUN_100dddd8c(&stack0x00000080);
        if (in_stack_00000040 != 2) {
          lVar15 = in_stack_00000048;
          if ((in_stack_00000040 & 1) != 0) {
            lVar15 = in_stack_00000048 +
                     (*(long *)(in_stack_00000050 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
          }
          (**(code **)(in_stack_00000050 + 0x68))(lVar15,&stack0x00000058);
        }
        if ((*unaff_x28 == '\0') && (in_stack_00000060 != 0)) {
          FUN_1011d7d74(&stack0x00000040,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&stack0x00000520);
        }
        FUN_100dddd8c(&stack0x00000040);
        return;
      }
    }
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b233d4,&stack0x00000520,&UNK_10b3fa588);
  }
  else {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b233d4,&stack0x00000520,&UNK_10b3fa5a0);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100809614);
  (*pcVar3)();
}

