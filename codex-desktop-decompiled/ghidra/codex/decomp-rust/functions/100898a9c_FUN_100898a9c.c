
/* WARNING: Removing unreachable block (ram,0x000100898c18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100898a9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  char cVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  long *plVar17;
  long unaff_x19;
  long *unaff_x22;
  long lVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  *(undefined1 **)(unaff_x29 + -0xe8) = &stack0x00000630;
  *(undefined **)(unaff_x29 + -0xe0) = &UNK_10b208fd0;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000420);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar18 = *unaff_x22;
    in_stack_00000020 = *(undefined8 *)(lVar18 + 0x20);
    in_stack_00000028 = *(undefined8 *)(lVar18 + 0x28);
    in_stack_00000018 = 5;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar12 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000018);
    if (iVar12 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar18,puVar3,puVar2,&stack0x00000018,&stack0x00000420);
    }
  }
  FUN_100415b30(&stack0x00000420);
  *(undefined1 *)(unaff_x19 + 0x403) = 1;
  _memcpy(&stack0x00000018,&stack0x00000420,0x1f8);
  plVar13 = (long *)_malloc(0x40);
  if (plVar13 == (long *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x40);
  }
  else {
    plVar13[1] = 1;
    *plVar13 = 1;
    plVar13[6] = 0;
    *(undefined1 *)(plVar13 + 7) = 0;
    lVar18 = *plVar13;
    *plVar13 = lVar18 + 1;
    if (-1 < lVar18) {
      *(undefined1 *)(unaff_x19 + 0x401) = 1;
      *(long **)(unaff_x19 + 0x408) = plVar13;
      *(undefined2 *)(unaff_x19 + 0x402) = 0;
      *(undefined8 *)(unaff_x19 + 0x410) = 1;
      *(long **)(unaff_x19 + 0x418) = plVar13;
      _memcpy(unaff_x19 + 0x420,&stack0x00000018,0x1f8);
      *(undefined8 *)(unaff_x19 + 0x618) = unaff_x26;
      *(undefined8 *)(unaff_x19 + 0x620) = unaff_x25;
      *(undefined1 *)(unaff_x19 + 0x8b8) = 0;
      FUN_100fcea40(&stack0x00000420,unaff_x19 + 0x410);
      _memcpy(&stack0x00000218,&stack0x00000428,0x208);
      FUN_100d4be30(unaff_x19 + 0x410);
      _memcpy(&stack0x00000428,&stack0x00000218,0x208);
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b6276a8 - 1 < 2 ||
           ((bRam000000010b6276a8 != 0 &&
            (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN16codex_app_server16outgoing_message21OutgoingMessageSender47send_server_notification_to_connection_and_wait28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1fd5be597309d3aaE
                                ), cVar11 != '\0')))) &&
          (uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender47send_server_notification_to_connection_and_wait28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1fd5be597309d3aaE
                              ), (uVar14 & 1) != 0)))) {
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN16codex_app_server16outgoing_message21OutgoingMessageSender47send_server_notification_to_connection_and_wait28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1fd5be597309d3aaE
                   ,&stack0x00000630);
        lVar18 = 
        ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender47send_server_notification_to_connection_and_wait28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1fd5be597309d3aaE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar15 = *(undefined8 *)
                    (
                    ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender47send_server_notification_to_connection_and_wait28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1fd5be597309d3aaE
                    + 0x20);
          uVar8 = *(undefined8 *)
                   (
                   ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender47send_server_notification_to_connection_and_wait28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1fd5be597309d3aaE
                   + 0x28);
          *(undefined8 *)(unaff_x29 + -0xe8) = 2;
          *(undefined8 *)(unaff_x29 + -0xe0) = uVar15;
          *(undefined8 *)(unaff_x29 + -0xd8) = uVar8;
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar2 + 0x18))(puVar3,unaff_x29 + -0xe8);
          if (iVar12 != 0) {
            lVar6 = *(long *)(lVar18 + 0x60);
            uVar8 = *(undefined8 *)(lVar18 + 0x68);
            lVar7 = *(long *)(lVar18 + 0x50);
            uVar9 = *(undefined8 *)(lVar18 + 0x58);
            uVar15 = 1;
            if (lVar7 == 0) {
              uVar15 = 2;
            }
            uVar4 = *(undefined4 *)(lVar18 + 8);
            uVar5 = *(undefined4 *)(lVar18 + 0xc);
            *(undefined1 **)(unaff_x29 + -0x70) = &stack0x00000630;
            *(undefined1 *)(unaff_x29 + -0x68) = 1;
            *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x70;
            *(undefined **)(unaff_x29 + -0x58) = &DAT_1061c2098;
            uVar1 = 1;
            if (lVar6 == 0) {
              uVar1 = 2;
            }
            *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0xe0);
            *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0xe8);
            *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0xd8);
            *(char **)(unaff_x29 + -0x80) = s__108b39f4f;
            *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x60;
            *(undefined8 *)(unaff_x29 + -0xd0) = uVar15;
            *(long *)(unaff_x29 + -200) = lVar7;
            *(undefined8 *)(unaff_x29 + -0xc0) = uVar9;
            *(undefined8 *)(unaff_x29 + -0xb8) = uVar1;
            *(long *)(unaff_x29 + -0xb0) = lVar6;
            *(undefined8 *)(unaff_x29 + -0xa8) = uVar8;
            *(undefined4 *)(unaff_x29 + -0x88) = uVar4;
            *(undefined4 *)(unaff_x29 + -0x84) = uVar5;
            (**(code **)(puVar2 + 0x20))(puVar3,unaff_x29 + -0xd0);
          }
        }
      }
      else {
        lVar18 = 
        ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender47send_server_notification_to_connection_and_wait28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1fd5be597309d3aaE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar15 = *(undefined8 *)
                    (
                    ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender47send_server_notification_to_connection_and_wait28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1fd5be597309d3aaE
                    + 0x20);
          uVar8 = *(undefined8 *)
                   (
                   ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender47send_server_notification_to_connection_and_wait28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1fd5be597309d3aaE
                   + 0x28);
          *(undefined8 *)(unaff_x29 + -0x100) = 2;
          *(undefined8 *)(unaff_x29 + -0xf8) = uVar15;
          *(undefined8 *)(unaff_x29 + -0xf0) = uVar8;
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar2 + 0x18))(puVar3,unaff_x29 + -0x100);
          if (iVar12 != 0) {
            lVar6 = ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender47send_server_notification_to_connection_and_wait28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1fd5be597309d3aaE
                    + 0x30;
            *(undefined1 **)(unaff_x29 + -0xe8) = &stack0x00000420;
            *(undefined **)(unaff_x29 + -0xe0) = &DAT_1011e1858;
            *(char **)(unaff_x29 + -0x60) = s__failed_to_send_server_notificat_108ac9fb1;
            *(long *)(unaff_x29 + -0x58) = unaff_x29 + -0xe8;
            *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x60;
            *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
            *(undefined8 *)(unaff_x29 + -0xd0) = 1;
            *(long *)(unaff_x29 + -200) = unaff_x29 + -0x70;
            *(undefined8 *)(unaff_x29 + -0xc0) = 1;
            *(long *)(unaff_x29 + -0xb8) = lVar6;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar18,puVar3,puVar2,&stack0x00000630,unaff_x29 + -0xd0);
          }
        }
      }
      FUN_100e349f0(&stack0x00000420);
      *(undefined1 *)(unaff_x19 + 0x401) = 0;
      plVar13 = (long *)(unaff_x19 + 0x408);
      cVar11 = FUN_1014017ac(plVar13);
      if (cVar11 == '\x02') {
        uVar16 = 4;
        uVar15 = 1;
      }
      else {
        lVar18 = *plVar13;
        if (lVar18 != 0) {
          LOAcquire();
          uVar14 = *(ulong *)(lVar18 + 0x30);
          *(ulong *)(lVar18 + 0x30) = uVar14 | 4;
          if ((uVar14 & 10) == 8) {
            (**(code **)(*(long *)(lVar18 + 0x10) + 0x10))(*(undefined8 *)(lVar18 + 0x18));
          }
          if (((uint)uVar14 >> 1 & 1) != 0) {
            *(undefined1 *)(lVar18 + 0x38) = 0;
          }
          plVar17 = (long *)*plVar13;
          if (plVar17 != (long *)0x0) {
            lVar18 = *plVar17;
            *plVar17 = lVar18 + -1;
            LORelease();
            if (lVar18 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc920a624365fa6d7E(plVar13);
            }
          }
        }
        *(undefined2 *)(unaff_x19 + 0x401) = 0;
        *(undefined1 *)(unaff_x19 + 0x403) = 0;
        FUN_100e5286c(unaff_x19 + 0x208);
        uVar15 = 0;
        uVar16 = 1;
      }
      *(undefined1 *)(unaff_x19 + 0x400) = uVar16;
      return uVar15;
    }
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x100898ff8);
  (*pcVar10)();
}

