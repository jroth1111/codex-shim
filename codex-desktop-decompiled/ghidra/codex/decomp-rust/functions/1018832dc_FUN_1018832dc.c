
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1018832dc(undefined8 param_1)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  char cVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  char cVar17;
  undefined1 uVar18;
  uint uVar19;
  long unaff_x19;
  long *unaff_x20;
  char cVar20;
  long unaff_x23;
  long lVar21;
  long unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long unaff_x29;
  undefined1 auVar22 [16];
  undefined8 uStack0000000000000018;
  long lStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  
  *(char **)(unaff_x29 + -0x60) = s_app_server_event__108ac9f9c;
  *(long *)(unaff_x29 + -0x58) = unaff_x29 + -0xe8;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x60;
  *(undefined **)(unaff_x29 + -0x68) = &UNK_10b25d1e8;
  lStack0000000000000020 = unaff_x29 + -0x70;
  uStack0000000000000018 = 1;
  uStack0000000000000028 = 1;
  lVar21 = 1;
  if (*(long *)(unaff_x24 + 0x50) == 0) {
    lVar21 = 2;
  }
  *(undefined1 **)(unaff_x29 + -0xd0) = &stack0x00000630;
  *(undefined **)(unaff_x29 + -200) = &DAT_1061c2098;
  uStack0000000000000030 = param_1;
  (**(code **)(unaff_x23 + 0x20))();
  FUN_1017f3e74(&stack0x00000420);
  *(undefined1 *)(unaff_x19 + 0x403) = 1;
  _memcpy(&stack0x00000018,&stack0x00000420,0x1f8);
  plVar14 = (long *)_malloc(0x40);
  if (plVar14 == (long *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x40);
LAB_1018838cc:
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1018838d0);
    (*pcVar10)();
  }
  plVar14[1] = 1;
  *plVar14 = 1;
  plVar14[6] = 0;
  *(undefined1 *)(plVar14 + 7) = 0;
  lVar11 = *plVar14;
  *plVar14 = lVar11 + 1;
  if (lVar11 < 0) goto LAB_1018838cc;
  *(undefined1 *)(unaff_x19 + 0x401) = 1;
  *(long **)(unaff_x19 + 0x408) = plVar14;
  *(undefined2 *)(unaff_x19 + 0x402) = 0;
  *(undefined8 *)(unaff_x19 + 0x410) = 1;
  *(long **)(unaff_x19 + 0x418) = plVar14;
  _memcpy(unaff_x19 + 0x420,&stack0x00000018,0x1f8);
  *(undefined8 *)(unaff_x19 + 0x618) = unaff_x26;
  *(undefined8 *)(unaff_x19 + 0x620) = unaff_x25;
  *(undefined1 *)(unaff_x19 + 0x8b8) = 0;
  func_0x0001019967e0(&stack0x00000420,unaff_x19 + 0x410);
  if (lVar21 == 4) {
    uVar18 = 3;
  }
  else {
    _memcpy(&stack0x00000218,&stack0x00000428,0x208);
    FUN_101943550(unaff_x19 + 0x410);
    if (lVar21 != 3) {
      _memcpy(&stack0x00000428,&stack0x00000218,0x208);
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b6276a8 - 1 < 2 ||
           ((bRam000000010b6276a8 != 0 &&
            (cVar12 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN16codex_app_server16outgoing_message21OutgoingMessageSender47send_server_notification_to_connection_and_wait28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1fd5be597309d3aaE
                                ), cVar12 != '\0')))) &&
          (uVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender47send_server_notification_to_connection_and_wait28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1fd5be597309d3aaE
                              ), (uVar15 & 1) != 0)))) {
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN16codex_app_server16outgoing_message21OutgoingMessageSender47send_server_notification_to_connection_and_wait28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1fd5be597309d3aaE
                   ,&stack0x00000630);
        lVar21 = 
        ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender47send_server_notification_to_connection_and_wait28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1fd5be597309d3aaE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar16 = *(undefined8 *)
                    (
                    ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender47send_server_notification_to_connection_and_wait28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1fd5be597309d3aaE
                    + 0x20);
          uVar8 = *(undefined8 *)
                   (
                   ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender47send_server_notification_to_connection_and_wait28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1fd5be597309d3aaE
                   + 0x28);
          *(undefined8 *)(unaff_x29 + -0xe8) = 2;
          *(undefined8 *)(unaff_x29 + -0xe0) = uVar16;
          *(undefined8 *)(unaff_x29 + -0xd8) = uVar8;
          puVar3 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_10b3c24c8;
          }
          puVar4 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_109adfc03;
          }
          iVar13 = (**(code **)(puVar3 + 0x18))(puVar4,unaff_x29 + -0xe8);
          if (iVar13 != 0) {
            lVar11 = *(long *)(lVar21 + 0x60);
            uVar8 = *(undefined8 *)(lVar21 + 0x68);
            lVar7 = *(long *)(lVar21 + 0x50);
            uVar9 = *(undefined8 *)(lVar21 + 0x58);
            uVar16 = 1;
            if (lVar7 == 0) {
              uVar16 = 2;
            }
            uVar5 = *(undefined4 *)(lVar21 + 8);
            uVar6 = *(undefined4 *)(lVar21 + 0xc);
            *(undefined1 **)(unaff_x29 + -0x70) = &stack0x00000630;
            *(undefined1 *)(unaff_x29 + -0x68) = 1;
            *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x70;
            *(undefined **)(unaff_x29 + -0x58) = &DAT_1061c2098;
            uVar2 = 1;
            if (lVar11 == 0) {
              uVar2 = 2;
            }
            *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0xe0);
            *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0xe8);
            *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0xd8);
            *(char **)(unaff_x29 + -0x80) = s__108b39f4f;
            *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x60;
            *(undefined8 *)(unaff_x29 + -0xd0) = uVar16;
            *(long *)(unaff_x29 + -200) = lVar7;
            *(undefined8 *)(unaff_x29 + -0xc0) = uVar9;
            *(undefined8 *)(unaff_x29 + -0xb8) = uVar2;
            *(long *)(unaff_x29 + -0xb0) = lVar11;
            *(undefined8 *)(unaff_x29 + -0xa8) = uVar8;
            *(undefined4 *)(unaff_x29 + -0x88) = uVar5;
            *(undefined4 *)(unaff_x29 + -0x84) = uVar6;
            (**(code **)(puVar3 + 0x20))(puVar4,unaff_x29 + -0xd0);
          }
        }
      }
      else {
        lVar21 = 
        ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender47send_server_notification_to_connection_and_wait28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1fd5be597309d3aaE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar16 = *(undefined8 *)
                    (
                    ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender47send_server_notification_to_connection_and_wait28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1fd5be597309d3aaE
                    + 0x20);
          uVar8 = *(undefined8 *)
                   (
                   ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender47send_server_notification_to_connection_and_wait28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1fd5be597309d3aaE
                   + 0x28);
          *(undefined8 *)(unaff_x29 + -0x100) = 2;
          *(undefined8 *)(unaff_x29 + -0xf8) = uVar16;
          *(undefined8 *)(unaff_x29 + -0xf0) = uVar8;
          puVar3 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_10b3c24c8;
          }
          puVar4 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_109adfc03;
          }
          iVar13 = (**(code **)(puVar3 + 0x18))(puVar4,unaff_x29 + -0x100);
          if (iVar13 != 0) {
            lVar11 = ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender47send_server_notification_to_connection_and_wait28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1fd5be597309d3aaE
                     + 0x30;
            *(undefined1 **)(unaff_x29 + -0xe8) = &stack0x00000420;
            *(undefined **)(unaff_x29 + -0xe0) = &DAT_1019e3b1c;
            *(char **)(unaff_x29 + -0x60) = s__failed_to_send_server_notificat_108ac9fb1;
            *(long *)(unaff_x29 + -0x58) = unaff_x29 + -0xe8;
            *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x60;
            *(undefined **)(unaff_x29 + -0x68) = &UNK_10b25d1e8;
            *(undefined8 *)(unaff_x29 + -0xd0) = 1;
            *(long *)(unaff_x29 + -200) = unaff_x29 + -0x70;
            *(undefined8 *)(unaff_x29 + -0xc0) = 1;
            *(long *)(unaff_x29 + -0xb8) = lVar11;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar21,puVar4,puVar3,&stack0x00000630,unaff_x29 + -0xd0);
          }
        }
      }
      FUN_10195fc88(&stack0x00000420);
    }
    *(undefined1 *)(unaff_x19 + 0x401) = 0;
    lVar21 = *(long *)(unaff_x19 + 0x408);
    if (lVar21 == 0) {
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cf27f3,0x2b,&UNK_10b26a138);
      goto LAB_1018838cc;
    }
    lVar11 = (*
             ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
             )();
    if (*(char *)(lVar11 + 0x48) == '\x01') {
LAB_1018838ec:
      cVar12 = *(char *)(lVar11 + 0x44);
      cVar20 = *(char *)(lVar11 + 0x45);
      cVar17 = cVar20;
      if (cVar12 == '\x01') {
        if (cVar20 != '\0') {
          cVar17 = cVar20 + -1;
          goto LAB_101883908;
        }
        FUN_10610bbb4(*(undefined8 *)*unaff_x20,((undefined8 *)*unaff_x20)[1]);
        goto LAB_1018839f4;
      }
LAB_101883908:
      *(char *)(lVar11 + 0x45) = cVar17;
      uVar19 = (uint)*(undefined8 *)(lVar21 + 0x30);
      if ((uVar19 >> 1 & 1) == 0) goto LAB_10188391c;
LAB_101883a08:
      *(undefined1 *)(lVar21 + 0x38) = 0;
LAB_101883a0c:
      plVar14 = *(long **)(unaff_x19 + 0x408);
      if (plVar14 != (long *)0x0) {
        lVar21 = *plVar14;
        *plVar14 = lVar21 + -1;
        LORelease();
        if (lVar21 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc920a624365fa6d7E
                    ((undefined8 *)(unaff_x19 + 0x408));
        }
      }
      *(undefined8 *)(unaff_x19 + 0x408) = 0;
      *(undefined2 *)(unaff_x19 + 0x401) = 0;
      *(undefined1 *)(unaff_x19 + 0x403) = 0;
      FUN_10196502c(unaff_x19 + 0x208);
      uVar16 = 0;
      uVar18 = 1;
      goto LAB_101883a50;
    }
    if (*(char *)(lVar11 + 0x48) != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar11,&DAT_10192b788);
      *(undefined1 *)(lVar11 + 0x48) = 1;
      goto LAB_1018838ec;
    }
    cVar12 = '\0';
    cVar20 = '\0';
    uVar19 = (uint)*(undefined8 *)(lVar21 + 0x30);
    if ((uVar19 >> 1 & 1) != 0) goto LAB_101883a08;
LAB_10188391c:
    if ((uVar19 >> 2 & 1) != 0) goto LAB_101883a0c;
    if ((uVar19 & 1) == 0) {
LAB_101883970:
      auVar22 = (*(code *)**(undefined8 **)*unaff_x20)(((undefined8 *)*unaff_x20)[1]);
      *(undefined1 (*) [16])(lVar21 + 0x20) = auVar22;
      LOAcquire();
      uVar15 = *(ulong *)(lVar21 + 0x30);
      *(ulong *)(lVar21 + 0x30) = uVar15 | 1;
      LORelease();
      if (((uint)uVar15 >> 1 & 1) != 0) goto LAB_101883a08;
    }
    else if ((*(long *)(lVar21 + 0x28) != ((long *)*unaff_x20)[1]) ||
            (*(long *)(lVar21 + 0x20) != *(long *)*unaff_x20)) {
      puVar1 = (ulong *)(lVar21 + 0x30);
      LOAcquire();
      uVar15 = *puVar1;
      *puVar1 = uVar15 & 0xfffffffffffffffe;
      LORelease();
      if (((uint)uVar15 >> 1 & 1) != 0) {
        LOAcquire();
        *puVar1 = *puVar1 | 1;
        LORelease();
        goto LAB_101883a08;
      }
      (**(code **)(*(long *)(lVar21 + 0x20) + 0x18))(*(undefined8 *)(lVar21 + 0x28));
      goto LAB_101883970;
    }
    if (cVar12 != '\0') {
      if (*(char *)(lVar11 + 0x48) != '\x01') {
        if (*(char *)(lVar11 + 0x48) == '\x02') goto LAB_1018839f4;
        __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                  (lVar11,&DAT_1060edbcc);
        *(undefined1 *)(lVar11 + 0x48) = 1;
      }
      *(undefined1 *)(lVar11 + 0x44) = 1;
      *(char *)(lVar11 + 0x45) = cVar20;
    }
LAB_1018839f4:
    uVar18 = 4;
  }
  uVar16 = 1;
LAB_101883a50:
  *(undefined1 *)(unaff_x19 + 0x400) = uVar18;
  return uVar16;
}

