
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101881368(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  long unaff_x19;
  undefined1 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  char *unaff_x28;
  long unaff_x29;
  undefined1 *in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(char **)(unaff_x29 + -0x90) = s_app_server_event__108ac9f9c;
  *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xd0;
  *(long *)(unaff_x29 + -0x68) = unaff_x26;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000248);
  if ((*unaff_x28 == '\0') && (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar10 = *(undefined8 *)(unaff_x20 + 0x638);
    puVar3 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_10b3c24c8;
    }
    puVar4 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_109adfc03;
    }
    iVar6 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000448);
    if (iVar6 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar10,puVar4,puVar3,&stack0x00000448,&stack0x00000248);
    }
  }
  FUN_1017f3e74(&stack0x00000848);
  *(undefined1 *)(unaff_x19 + 0x611) = 1;
  _memcpy(unaff_x19 + 0x618,&stack0x00000848,0x1f8);
  if (unaff_x26 == 0) {
    uVar10 = *(undefined8 *)(unaff_x19 + 0x410);
    *(undefined1 *)(unaff_x19 + 0x611) = 0;
    _memcpy(&stack0x00000248,unaff_x19 + 0x618,0x1f8);
    *(undefined8 *)(unaff_x19 + 0x618) = 2;
    _memcpy(unaff_x19 + 0x620,&stack0x00000248,0x1f8);
    *(undefined8 *)(unaff_x19 + 0x828) = uVar10;
    *(undefined1 *)(unaff_x19 + 0xac0) = 0;
    func_0x0001019967e0(&stack0x00000848,unaff_x19 + 0x618);
    if (unaff_x29 == 0x94) {
      uVar8 = 3;
LAB_101881bec:
      *in_stack_00000000 = uVar8;
      uVar8 = 3;
      uVar10 = 1;
      goto LAB_101881bf8;
    }
    _memcpy(&stack0x00000028,&stack0x00000850,0x208);
    FUN_101943550(unaff_x19 + 0x618);
    if (unaff_x29 != 0x93) {
      _memcpy(&stack0x00000850,&stack0x00000028,0x208);
      if ((*unaff_x24 < 4) &&
         (((bRam000000010b627660 - 1 < 2 ||
           ((bRam000000010b627660 != 0 &&
            (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h832e630f0b9d4020E
                               ), cVar5 != '\0')))) &&
          (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h832e630f0b9d4020E
                             ), (uVar7 & 1) != 0)))) {
        *(undefined1 **)(unaff_x29 + -0xd0) = &stack0x00000848;
        *(undefined **)(unaff_x29 + -200) = &DAT_1019e3b1c;
        *(char **)(unaff_x29 + -0x90) = s__failed_to_send_server_notificat_108ac9fb1;
        *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xd0;
        *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x90;
        *(undefined **)(unaff_x29 + -0x60) = &UNK_10b25d1e8;
        FUN_101882f90(&stack0x00000448);
      }
      else {
        uVar10 = 
        ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h832e630f0b9d4020E
        ;
        if ((*unaff_x28 == '\0') && (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar3 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_10b3c24c8;
          }
          puVar4 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_109adfc03;
          }
          iVar6 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000230);
          if (iVar6 != 0) {
            *(undefined1 **)(unaff_x29 + -0xd0) = &stack0x00000848;
            *(undefined **)(unaff_x29 + -200) = &DAT_1019e3b1c;
            *(char **)(unaff_x29 + -0x90) = s__failed_to_send_server_notificat_108ac9fb1;
            *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xd0;
            *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x90;
            *(undefined **)(unaff_x29 + -0x60) = &UNK_10b25d1e8;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (uVar10,puVar4,puVar3,&stack0x00000230,&stack0x00000448);
          }
        }
      }
      FUN_10195fc88(&stack0x00000848);
    }
  }
  else {
    *(undefined8 **)(unaff_x19 + 0x810) = unaff_x25;
    *(undefined8 **)(unaff_x19 + 0x818) = unaff_x25 + unaff_x26;
    if (unaff_x25 != unaff_x25 + unaff_x26) {
      do {
        *(undefined8 **)(unaff_x19 + 0x810) = unaff_x25 + 1;
        uVar10 = *(undefined8 *)(unaff_x19 + 0x410);
        uVar9 = *unaff_x25;
        FUN_1017f3b64(&stack0x00000448,unaff_x19 + 0x618);
        _memcpy(&stack0x00000850,&stack0x00000448,0x1f8);
        _memcpy(&stack0x00000248,&stack0x00000848,0x200);
        *(undefined8 *)(unaff_x19 + 0x820) = 0;
        _memcpy(unaff_x19 + 0x828,&stack0x00000248,0x200);
        *(undefined8 *)(unaff_x19 + 0xa28) = uVar9;
        *(undefined8 *)(unaff_x19 + 0xa30) = uVar10;
        *(undefined1 *)(unaff_x19 + 0xcc8) = 0;
        func_0x0001019967e0(&stack0x00000848,unaff_x19 + 0x820);
        if (unaff_x29 == 0x94) {
          uVar8 = 4;
          goto LAB_101881bec;
        }
        _memcpy(&stack0x00000640,&stack0x00000850,0x208);
        FUN_101943550(unaff_x19 + 0x820);
        if (unaff_x29 != 0x93) {
          _memcpy(&stack0x00000850,&stack0x00000640,0x208);
          if (((*unaff_x24 < 4) &&
              ((bRam000000010b627678 - 1 < 2 ||
               ((bRam000000010b627678 != 0 &&
                (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb96ca1022f06c392E
                                   ), cVar5 != '\0')))))) &&
             (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (
                                ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb96ca1022f06c392E
                                ),
             lVar2 = 
             ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb96ca1022f06c392E
             , (uVar7 & 1) != 0)) {
            lVar1 = ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb96ca1022f06c392E
                    + 0x30;
            *(undefined1 **)(unaff_x29 + -0xa0) = &stack0x00000848;
            *(undefined **)(unaff_x29 + -0x98) = &DAT_1019e3b1c;
            *(char **)(unaff_x29 + -0xb0) = s__failed_to_send_server_notificat_108ac9fb1;
            *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0xa0;
            *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -0xb0;
            *(undefined **)(unaff_x29 + -0xf0) = &UNK_10b25d1e8;
            *(undefined8 *)(unaff_x29 + -0xd0) = 1;
            *(long *)(unaff_x29 + -200) = unaff_x29 + -0xf8;
            *(undefined8 *)(unaff_x29 + -0xc0) = 1;
            *(long *)(unaff_x29 + -0xb8) = lVar1;
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar2,unaff_x29 + -0xd0);
            if ((*unaff_x28 == '\0') && (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              uVar10 = *(undefined8 *)
                        (
                        ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb96ca1022f06c392E
                        + 0x20);
              uVar9 = *(undefined8 *)
                       (
                       ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb96ca1022f06c392E
                       + 0x28);
              *(undefined8 *)(unaff_x29 + -0x90) = 2;
              *(undefined8 *)(unaff_x29 + -0x88) = uVar10;
              *(undefined8 *)(unaff_x29 + -0x80) = uVar9;
              puVar3 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar3 = &UNK_10b3c24c8;
              }
              puVar4 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar4 = &UNK_109adfc03;
              }
              iVar6 = (**(code **)(puVar3 + 0x18))(puVar4,unaff_x29 + -0x90);
              if (iVar6 != 0) {
                *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0xd0;
                *(undefined1 *)(unaff_x29 + -0x70) = 1;
                *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x78;
                *(undefined **)(unaff_x29 + -0x60) = &DAT_1061c2098;
                (**(code **)(puVar3 + 0x20))(puVar4,&stack0x00000448);
              }
            }
          }
          else if ((*unaff_x28 == '\0') && (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)
                  ) {
            uVar10 = *(undefined8 *)
                      (
                      ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb96ca1022f06c392E
                      + 0x20);
            uVar9 = *(undefined8 *)
                     (
                     ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb96ca1022f06c392E
                     + 0x28);
            *(undefined8 *)(unaff_x29 + -0xe8) = 2;
            *(undefined8 *)(unaff_x29 + -0xe0) = uVar10;
            *(undefined8 *)(unaff_x29 + -0xd8) = uVar9;
            puVar3 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_10b3c24c8;
            }
            puVar4 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar4 = &UNK_109adfc03;
            }
            iVar6 = (**(code **)(puVar3 + 0x18))(puVar4,unaff_x29 + -0xe8);
            if (iVar6 != 0) {
              lVar2 = ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb96ca1022f06c392E
                      + 0x30;
              *(undefined1 **)(unaff_x29 + -0x78) = &stack0x00000848;
              *(undefined **)(unaff_x29 + -0x70) = &DAT_1019e3b1c;
              *(char **)(unaff_x29 + -0xa0) = s__failed_to_send_server_notificat_108ac9fb1;
              *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x78;
              *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xa0;
              *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b25d1e8;
              *(undefined8 *)(unaff_x29 + -0xd0) = 1;
              *(long *)(unaff_x29 + -200) = unaff_x29 + -0xb0;
              *(undefined8 *)(unaff_x29 + -0xc0) = 1;
              *(long *)(unaff_x29 + -0xb8) = lVar2;
              *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0xd0;
              *(undefined1 *)(unaff_x29 + -0x60) = 1;
              *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x68;
              *(undefined **)(unaff_x29 + -0x88) = &DAT_1061c2098;
              (**(code **)(puVar3 + 0x20))(puVar4,&stack0x00000448);
            }
          }
          FUN_10195fc88(&stack0x00000848);
        }
        unaff_x25 = *(undefined8 **)(unaff_x19 + 0x810);
      } while (unaff_x25 != *(undefined8 **)(unaff_x19 + 0x818));
    }
    func_0x00010196452c(unaff_x19 + 0x618);
  }
  *(undefined1 *)(unaff_x19 + 0x611) = 0;
  FUN_10196502c(unaff_x19 + 0x418);
  uVar8 = 1;
  *in_stack_00000000 = 1;
  FUN_101942d50(in_stack_00000008);
  uVar10 = 0;
LAB_101881bf8:
  *(undefined1 *)(unaff_x19 + 0xcd0) = uVar8;
  return uVar10;
}

