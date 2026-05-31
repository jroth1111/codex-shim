
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100897d9c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  long unaff_x19;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 *unaff_x23;
  long unaff_x24;
  ulong *unaff_x25;
  char *unaff_x26;
  ulong *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  *(char **)(unaff_x29 + -0x78) = s_app_server_event__108ac9f9c;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x68;
  *(long *)(unaff_x29 + -0xa0) = unaff_x24;
  *(undefined8 *)(unaff_x28 + 0x438) = in_stack_00000018;
  *(undefined8 *)(unaff_x28 + 0x430) = in_stack_00000010;
  lVar3 = 1;
  if (*(long *)(unaff_x22 + 0x50) == 0) {
    lVar3 = 2;
  }
  *(undefined1 **)(unaff_x29 + -0x90) = &stack0x00000448;
  *(undefined1 *)(unaff_x29 + -0x88) = 1;
  *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x90;
  *(undefined **)(unaff_x29 + -200) = &DAT_1061c2098;
  (**(code **)(in_stack_00000000 + 0x20))(in_stack_00000008,&stack0x00000848);
  FUN_100415b30(&stack0x00000848);
  *(undefined1 *)(unaff_x19 + 0x411) = 1;
  _memcpy(unaff_x19 + 0x418,&stack0x00000848,0x1f8);
  if (unaff_x24 == 0) {
    uVar11 = *(undefined8 *)(unaff_x19 + 0x210);
    *(undefined1 *)(unaff_x19 + 0x411) = 0;
    _memcpy(&stack0x00000248,unaff_x19 + 0x418,0x1f8);
    *(undefined8 *)(unaff_x19 + 0x418) = 2;
    _memcpy(unaff_x19 + 0x420,&stack0x00000248,0x1f8);
    *(undefined8 *)(unaff_x19 + 0x628) = uVar11;
    *(undefined1 *)(unaff_x19 + 0x8c0) = 0;
    FUN_100fcea40(&stack0x00000848,unaff_x19 + 0x418);
    if (lVar3 == 4) {
      uVar11 = 1;
      uVar9 = 3;
      goto LAB_100898690;
    }
    _memcpy(&stack0x00000028,&stack0x00000850,0x208);
    FUN_100d4be30(unaff_x19 + 0x418);
    if (lVar3 != 3) {
      _memcpy(&stack0x00000850,&stack0x00000028,0x208);
      if ((*unaff_x27 < 4) &&
         (((bRam000000010b627660 - 1 < 2 ||
           ((bRam000000010b627660 != 0 &&
            (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h832e630f0b9d4020E
                               ), cVar6 != '\0')))) &&
          (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h832e630f0b9d4020E
                             ), (uVar8 & 1) != 0)))) {
        *(undefined1 **)(unaff_x29 + -0xd0) = &stack0x00000848;
        *(undefined **)(unaff_x29 + -200) = &DAT_1011e1858;
        *(char **)(unaff_x29 + -0x90) = s__failed_to_send_server_notificat_108ac9fb1;
        *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xd0;
        *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x90;
        *(undefined **)(unaff_x29 + -0x60) = &UNK_10b208fd0;
        FUN_10089874c(&stack0x00000448);
      }
      else {
        uVar11 = 
        ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h832e630f0b9d4020E
        ;
        if ((*unaff_x26 == '\0') && (1 < *unaff_x25)) {
          puVar4 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_10b3c24c8;
          }
          puVar5 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar5 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar4 + 0x18))(puVar5,&stack0x00000230);
          if (iVar7 != 0) {
            *(undefined1 **)(unaff_x29 + -0xd0) = &stack0x00000848;
            *(undefined **)(unaff_x29 + -200) = &DAT_1011e1858;
            *(char **)(unaff_x29 + -0x90) = s__failed_to_send_server_notificat_108ac9fb1;
            *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xd0;
            *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x90;
            *(undefined **)(unaff_x29 + -0x60) = &UNK_10b208fd0;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (uVar11,puVar5,puVar4,&stack0x00000230,&stack0x00000448);
          }
        }
      }
      FUN_100e349f0(&stack0x00000848);
    }
  }
  else {
    puVar10 = unaff_x23 + unaff_x24;
    *(undefined8 **)(unaff_x19 + 0x610) = unaff_x23;
    *(undefined8 **)(unaff_x19 + 0x618) = puVar10;
    while (unaff_x23 != puVar10) {
      *(undefined8 **)(unaff_x19 + 0x610) = unaff_x23 + 1;
      uVar11 = *(undefined8 *)(unaff_x19 + 0x210);
      uVar12 = *unaff_x23;
      FUN_1003f1094(&stack0x00000448,unaff_x19 + 0x418);
      _memcpy(&stack0x00000850,&stack0x00000448,0x1f8);
      _memcpy(&stack0x00000248,&stack0x00000848,0x200);
      *(undefined8 *)(unaff_x19 + 0x620) = 0;
      _memcpy(unaff_x19 + 0x628,&stack0x00000248,0x200);
      *(undefined8 *)(unaff_x19 + 0x828) = uVar12;
      *(undefined8 *)(unaff_x19 + 0x830) = uVar11;
      *(undefined1 *)(unaff_x19 + 0xac8) = 0;
      FUN_100fcea40(&stack0x00000848,unaff_x19 + 0x620);
      if (lVar3 == 4) {
        uVar11 = 1;
        uVar9 = 4;
        goto LAB_100898690;
      }
      _memcpy(&stack0x00000640,&stack0x00000850,0x208);
      FUN_100d4be30(unaff_x19 + 0x620);
      if (lVar3 != 3) {
        _memcpy(&stack0x00000850,&stack0x00000640,0x208);
        if (((*unaff_x27 < 4) &&
            ((bRam000000010b627678 - 1 < 2 ||
             ((bRam000000010b627678 != 0 &&
              (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb96ca1022f06c392E
                                 ), cVar6 != '\0')))))) &&
           (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb96ca1022f06c392E
                              ),
           lVar2 = 
           ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb96ca1022f06c392E
           , (uVar8 & 1) != 0)) {
          lVar1 = ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb96ca1022f06c392E
                  + 0x30;
          *(undefined1 **)(unaff_x29 + -0xa0) = &stack0x00000848;
          *(undefined **)(unaff_x29 + -0x98) = &DAT_1011e1858;
          *(char **)(unaff_x29 + -0xb0) = s__failed_to_send_server_notificat_108ac9fb1;
          *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0xa0;
          *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -0xb0;
          *(undefined **)(unaff_x29 + -0xf0) = &UNK_10b208fd0;
          *(undefined8 *)(unaff_x29 + -0xd0) = 1;
          *(long *)(unaff_x29 + -200) = unaff_x29 + -0xf8;
          *(undefined8 *)(unaff_x29 + -0xc0) = 1;
          *(long *)(unaff_x29 + -0xb8) = lVar1;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar2,unaff_x29 + -0xd0);
          if ((*unaff_x26 == '\0') && (1 < *unaff_x25)) {
            uVar11 = *(undefined8 *)
                      (
                      ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb96ca1022f06c392E
                      + 0x20);
            uVar12 = *(undefined8 *)
                      (
                      ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb96ca1022f06c392E
                      + 0x28);
            *(undefined8 *)(unaff_x29 + -0x90) = 2;
            *(undefined8 *)(unaff_x29 + -0x88) = uVar11;
            *(undefined8 *)(unaff_x29 + -0x80) = uVar12;
            puVar4 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar4 = &UNK_10b3c24c8;
            }
            puVar5 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar5 = &UNK_109adfc03;
            }
            iVar7 = (**(code **)(puVar4 + 0x18))(puVar5,unaff_x29 + -0x90);
            if (iVar7 != 0) {
              *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0xd0;
              *(undefined1 *)(unaff_x29 + -0x70) = 1;
              *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x78;
              *(undefined **)(unaff_x29 + -0x60) = &DAT_1061c2098;
              (**(code **)(puVar4 + 0x20))(puVar5,&stack0x00000448);
            }
          }
        }
        else if ((*unaff_x26 == '\0') && (1 < *unaff_x25)) {
          uVar11 = *(undefined8 *)
                    (
                    ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb96ca1022f06c392E
                    + 0x20);
          uVar12 = *(undefined8 *)
                    (
                    ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb96ca1022f06c392E
                    + 0x28);
          *(undefined8 *)(unaff_x29 + -0xe8) = 2;
          *(undefined8 *)(unaff_x29 + -0xe0) = uVar11;
          *(undefined8 *)(unaff_x29 + -0xd8) = uVar12;
          puVar4 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_10b3c24c8;
          }
          puVar5 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar5 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar4 + 0x18))(puVar5,unaff_x29 + -0xe8);
          if (iVar7 != 0) {
            lVar2 = ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb96ca1022f06c392E
                    + 0x30;
            *(undefined1 **)(unaff_x29 + -0x78) = &stack0x00000848;
            *(undefined **)(unaff_x29 + -0x70) = &DAT_1011e1858;
            *(char **)(unaff_x29 + -0xa0) = s__failed_to_send_server_notificat_108ac9fb1;
            *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x78;
            *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xa0;
            *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
            *(undefined8 *)(unaff_x29 + -0xd0) = 1;
            *(long *)(unaff_x29 + -200) = unaff_x29 + -0xb0;
            *(undefined8 *)(unaff_x29 + -0xc0) = 1;
            *(long *)(unaff_x29 + -0xb8) = lVar2;
            *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0xd0;
            *(undefined1 *)(unaff_x29 + -0x60) = 1;
            *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x68;
            *(undefined **)(unaff_x29 + -0x88) = &DAT_1061c2098;
            (**(code **)(puVar4 + 0x20))(puVar5,&stack0x00000448);
          }
        }
        FUN_100e349f0(&stack0x00000848);
      }
      puVar10 = *(undefined8 **)(unaff_x19 + 0x618);
      unaff_x23 = *(undefined8 **)(unaff_x19 + 0x610);
    }
    func_0x000100e4d0ac(unaff_x19 + 0x418);
  }
  *(undefined1 *)(unaff_x19 + 0x411) = 0;
  FUN_100e5286c(unaff_x19 + 0x218);
  uVar11 = 0;
  uVar9 = 1;
LAB_100898690:
  *(undefined1 *)(unaff_x19 + 0x410) = uVar9;
  return uVar11;
}

