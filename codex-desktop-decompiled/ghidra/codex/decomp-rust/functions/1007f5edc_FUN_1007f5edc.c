
/* WARNING: Removing unreachable block (ram,0x0001007f7bc0) */
/* WARNING: Removing unreachable block (ram,0x0001007f9914) */
/* WARNING: Removing unreachable block (ram,0x0001007f9a64) */
/* WARNING: Removing unreachable block (ram,0x0001007f99a8) */
/* WARNING: Removing unreachable block (ram,0x0001007f99b0) */
/* WARNING: Removing unreachable block (ram,0x0001007f9a38) */
/* WARNING: Removing unreachable block (ram,0x0001007f9a40) */
/* WARNING: Removing unreachable block (ram,0x0001007f7b94) */
/* WARNING: Removing unreachable block (ram,0x0001007f7b74) */
/* WARNING: Removing unreachable block (ram,0x0001007f83a0) */
/* WARNING: Removing unreachable block (ram,0x0001007f83ac) */
/* WARNING: Removing unreachable block (ram,0x0001007f9548) */
/* WARNING: Removing unreachable block (ram,0x0001007fa154) */
/* WARNING: Removing unreachable block (ram,0x0001007fa168) */
/* WARNING: Removing unreachable block (ram,0x0001007f83c4) */
/* WARNING: Removing unreachable block (ram,0x0001007f83d0) */
/* WARNING: Removing unreachable block (ram,0x0001007f954c) */
/* WARNING: Removing unreachable block (ram,0x0001007f955c) */
/* WARNING: Removing unreachable block (ram,0x0001007f9570) */
/* WARNING: Removing unreachable block (ram,0x0001007f95b8) */
/* WARNING: Removing unreachable block (ram,0x0001007f95c4) */
/* WARNING: Removing unreachable block (ram,0x0001007f95dc) */
/* WARNING: Removing unreachable block (ram,0x0001007f7b78) */
/* WARNING: Removing unreachable block (ram,0x0001007f869c) */
/* WARNING: Removing unreachable block (ram,0x0001007f7bb8) */
/* WARNING: Removing unreachable block (ram,0x0001007f7c08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f5edc(void)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 extraout_x1;
  undefined4 uVar5;
  long *plVar6;
  undefined1 uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 uVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined *unaff_x23;
  undefined *puVar13;
  ulong *unaff_x25;
  long unaff_x27;
  long unaff_x28;
  char in_wzr;
  undefined4 *in_stack_00000018;
  undefined8 in_stack_00000550;
  undefined8 in_stack_00000558;
  long in_stack_00000890;
  uint in_stack_00000898;
  int in_stack_0000089c;
  uint in_stack_00000b88;
  undefined4 in_stack_00000b8c;
  
  puVar13 = &stack0x000003f0;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  _memcpy(&stack0x000008c0,&stack0x00000580,0x158);
  pcVar8 = *(char **)(unaff_x28 + 0x20);
  if (*pcVar8 == '\0') {
    *pcVar8 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
              (pcVar8,extraout_x1,1000000000);
  }
  _memcpy(&stack0x00000a40,&stack0x000008c0,0x158);
  puVar12 = (undefined *)(ulong)in_stack_00000b88;
  pcVar11 = pcVar8 + 0x1f0;
  func_0x000105a96624(&stack0x00000890,pcVar11,puVar12);
  if (in_stack_00000890 == 0) {
    if ((*unaff_x25 < 2) &&
       (((bRam000000010b637008 - 1 < 2 ||
         ((bRam000000010b637008 != 0 &&
          (cVar3 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core2h25proto7streams7streams5Inner17recv_push_promise10__CALLSITE17h310557bb0d3e3c61E
                             ), cVar3 != '\0')))) &&
        (iVar4 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN14rama_http_core2h25proto7streams7streams5Inner17recv_push_promise10__CALLSITE17h310557bb0d3e3c61E
                           ), iVar4 != 0)))) {
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core2h25proto7streams7streams5Inner17recv_push_promise10__CALLSITE17h310557bb0d3e3c61E
                 ,&stack0x00000ba0);
      pcVar9 = 
      ___ZN14rama_http_core2h25proto7streams7streams5Inner17recv_push_promise10__CALLSITE17h310557bb0d3e3c61E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar13 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar13 = &UNK_10b3c24c8;
        }
        puVar12 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar12 = &UNK_109adfc03;
        }
        iVar4 = (**(code **)(puVar13 + 0x18))(puVar12,&stack0x000006f0);
        pcVar11 = pcVar9;
        if (iVar4 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (pcVar9,puVar12,puVar13,&stack0x000006f0,&stack0x00000ba0);
        }
      }
    }
    else {
      pcVar9 = 
      ___ZN14rama_http_core2h25proto7streams7streams5Inner17recv_push_promise10__CALLSITE17h310557bb0d3e3c61E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar13 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar13 = &UNK_10b3c24c8;
        }
        puVar12 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar12 = &UNK_109adfc03;
        }
        iVar4 = (**(code **)(puVar13 + 0x18))(puVar12,&stack0x000006f0);
        pcVar11 = pcVar9;
        if (iVar4 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (pcVar9,puVar12,puVar13,&stack0x000006f0,&stack0x00000ba0);
        }
      }
    }
    uVar10 = SUB82(pcVar11,0);
    in_stack_00000558 = 0;
    in_stack_00000550 = 0;
    puVar12 = (undefined *)0x1;
    in_stack_00000b8c = 1;
    uVar7 = 1;
    cVar3 = '\x01';
    puVar13 = &UNK_10b209220;
    goto LAB_1007f9658;
  }
  if (in_stack_00000b88 <= *(uint *)(pcVar8 + 0x140)) {
    if (((*(ulong *)(in_stack_00000890 + 0x10) <= (ulong)in_stack_00000898) ||
        (plVar6 = (long *)(*(long *)(in_stack_00000890 + 8) + (ulong)in_stack_00000898 * 0x158),
        *plVar6 == 2)) || (*(int *)((long)plVar6 + 0x13c) != in_stack_0000089c)) {
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s__dangling_store_key_for_stream_i_108b233d4,&stack0x000006f0,&UNK_10b3fa588);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007fa264);
      (*pcVar2)();
    }
    func_0x000105a93060(&stack0x00000ba0,plVar6 + 0xd);
    in_stack_00000558 = *(undefined8 *)(unaff_x27 + 0x20);
    in_stack_00000550 = *(undefined8 *)(unaff_x27 + 0x18);
    in_stack_00000b8c = 0;
    puVar12 = (undefined *)0x1;
    uVar7 = 0;
    cVar3 = '\x01';
    uVar10 = 0;
    goto LAB_1007f9658;
  }
  pcVar9 = pcVar8;
  if (*unaff_x25 == 0) {
    pcVar9 = &
             __ZN14rama_http_core2h25proto7streams7streams5Inner17recv_push_promise10__CALLSITE17ha20bb1bc1e17d79bE
    ;
    uVar7 = 0x10;
    if (((1 < bRam000000010b637020 - 1) &&
        ((bRam000000010b637020 == 0 ||
         (cVar3 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN14rama_http_core2h25proto7streams7streams5Inner17recv_push_promise10__CALLSITE17ha20bb1bc1e17d79bE
                            ), cVar3 == '\0')))) ||
       (iVar4 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN14rama_http_core2h25proto7streams7streams5Inner17recv_push_promise10__CALLSITE17ha20bb1bc1e17d79bE
                          ), iVar4 == 0)) goto LAB_1007f6864;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN14rama_http_core2h25proto7streams7streams5Inner17recv_push_promise10__CALLSITE17ha20bb1bc1e17d79bE
               ,&stack0x000006f0);
    pcVar9 = 
    ___ZN14rama_http_core2h25proto7streams7streams5Inner17recv_push_promise10__CALLSITE17ha20bb1bc1e17d79bE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puVar12 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar12 = &UNK_10b3c24c8;
      }
      unaff_x23 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        unaff_x23 = &UNK_109adfc03;
      }
      iVar4 = (**(code **)(puVar12 + 0x18))(unaff_x23,&stack0x000003f0);
      pcVar11 = pcVar9;
      if (iVar4 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (pcVar9,unaff_x23,puVar12,&stack0x000003f0,&stack0x000006f0);
      }
    }
  }
  else {
LAB_1007f6864:
    pcVar1 = 
    ___ZN14rama_http_core2h25proto7streams7streams5Inner17recv_push_promise10__CALLSITE17ha20bb1bc1e17d79bE
    ;
    uVar7 = SUB81(pcVar9,0);
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uVar7 = 0x10;
      puVar12 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar12 = &UNK_10b3c24c8;
      }
      unaff_x23 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        unaff_x23 = &UNK_109adfc03;
      }
      iVar4 = (**(code **)(puVar12 + 0x18))(unaff_x23,&stack0x000003f0);
      pcVar11 = pcVar1;
      if (iVar4 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (pcVar1,unaff_x23,puVar12,&stack0x000003f0,&stack0x000006f0);
      }
    }
  }
  uVar10 = SUB82(pcVar11,0);
  cVar3 = '\x04';
  puVar13 = unaff_x23;
LAB_1007f9658:
  FUN_100e3fdac(&stack0x00000a40);
  if (*pcVar8 == '\x01') {
    *pcVar8 = in_wzr;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar8,0);
  }
  if (cVar3 == '\x04') {
    uVar5 = 2;
  }
  else {
    *(undefined8 *)(in_stack_00000018 + 10) = in_stack_00000558;
    *(undefined8 *)(in_stack_00000018 + 8) = in_stack_00000550;
    *(char *)(in_stack_00000018 + 2) = cVar3;
    *(undefined1 *)((long)in_stack_00000018 + 9) = uVar7;
    *(undefined2 *)((long)in_stack_00000018 + 10) = uVar10;
    in_stack_00000018[3] = in_stack_00000b8c;
    *(undefined **)(in_stack_00000018 + 4) = puVar13;
    *(undefined **)(in_stack_00000018 + 6) = puVar12;
    uVar5 = 4;
  }
  *in_stack_00000018 = uVar5;
  return;
}

