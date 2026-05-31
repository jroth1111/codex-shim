
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100897ebc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *unaff_x23;
  long unaff_x24;
  ulong *unaff_x25;
  char *unaff_x26;
  ulong *unaff_x27;
  long unaff_x29;
  
  *(char **)(unaff_x29 + -0x90) = s_app_server_event__108ac9f9c;
  *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xd0;
  *(long *)(unaff_x29 + -0x68) = unaff_x24;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000248);
  if ((*unaff_x26 == '\0') && (4 < *unaff_x25)) {
    uVar10 = *unaff_x22;
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
  FUN_100415b30(&stack0x00000848);
  *(undefined1 *)(unaff_x19 + 0x411) = 1;
  _memcpy(unaff_x19 + 0x418,&stack0x00000848,0x1f8);
  if (unaff_x24 == 0) {
    uVar10 = *(undefined8 *)(unaff_x19 + 0x210);
    *(undefined1 *)(unaff_x19 + 0x411) = 0;
    _memcpy(&stack0x00000248,unaff_x19 + 0x418,0x1f8);
    *(undefined8 *)(unaff_x19 + 0x418) = 2;
    _memcpy(unaff_x19 + 0x420,&stack0x00000248,0x1f8);
    *(undefined8 *)(unaff_x19 + 0x628) = uVar10;
    *(undefined1 *)(unaff_x19 + 0x8c0) = 0;
    FUN_100fcea40(&stack0x00000848,unaff_x19 + 0x418);
    if (unaff_x29 == 0x94) {
      uVar10 = 1;
      uVar8 = 3;
      goto LAB_100898690;
    }
    _memcpy(&stack0x00000028,&stack0x00000850,0x208);
    FUN_100d4be30(unaff_x19 + 0x418);
    if (unaff_x29 != 0x93) {
      _memcpy(&stack0x00000850,&stack0x00000028,0x208);
      if ((*unaff_x27 < 4) &&
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
        *(undefined **)(unaff_x29 + -200) = &DAT_1011e1858;
        *(char **)(unaff_x29 + -0x90) = s__failed_to_send_server_notificat_108ac9fb1;
        *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xd0;
        *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x90;
        *(undefined **)(unaff_x29 + -0x60) = &UNK_10b208fd0;
        FUN_10089874c(&stack0x00000448);
      }
      else {
        uVar10 = 
        ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h832e630f0b9d4020E
        ;
        if ((*unaff_x26 == '\0') && (1 < *unaff_x25)) {
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
            *(undefined **)(unaff_x29 + -200) = &DAT_1011e1858;
            *(char **)(unaff_x29 + -0x90) = s__failed_to_send_server_notificat_108ac9fb1;
            *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xd0;
            *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x90;
            *(undefined **)(unaff_x29 + -0x60) = &UNK_10b208fd0;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (uVar10,puVar4,puVar3,&stack0x00000230,&stack0x00000448);
          }
        }
      }
      FUN_100e349f0(&stack0x00000848);
    }
  }
  else {
    puVar9 = unaff_x23 + unaff_x24;
    *(undefined8 **)(unaff_x19 + 0x610) = unaff_x23;
    *(undefined8 **)(unaff_x19 + 0x618) = puVar9;
    while (unaff_x23 != puVar9) {
      *(undefined8 **)(unaff_x19 + 0x610) = unaff_x23 + 1;
      uVar10 = *(undefined8 *)(unaff_x19 + 0x210);
      uVar11 = *unaff_x23;
      FUN_1003f1094(&stack0x00000448,unaff_x19 + 0x418);
      _memcpy(&stack0x00000850,&stack0x00000448,0x1f8);
      _memcpy(&stack0x00000248,&stack0x00000848,0x200);
      *(undefined8 *)(unaff_x19 + 0x620) = 0;
      _memcpy(unaff_x19 + 0x628,&stack0x00000248,0x200);
      *(undefined8 *)(unaff_x19 + 0x828) = uVar11;
      *(undefined8 *)(unaff_x19 + 0x830) = uVar10;
      *(undefined1 *)(unaff_x19 + 0xac8) = 0;
      FUN_100fcea40(&stack0x00000848,unaff_x19 + 0x620);
      if (unaff_x29 == 0x94) {
        uVar10 = 1;
        uVar8 = 4;
        goto LAB_100898690;
      }
      _memcpy(&stack0x00000640,&stack0x00000850,0x208);
      FUN_100d4be30(unaff_x19 + 0x620);
      if (unaff_x29 != 0x93) {
        _memcpy(&stack0x00000850,&stack0x00000640,0x208);
        if (((*unaff_x27 < 4) &&
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
            uVar10 = *(undefined8 *)
                      (
                      ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb96ca1022f06c392E
                      + 0x20);
            uVar11 = *(undefined8 *)
                      (
                      ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb96ca1022f06c392E
                      + 0x28);
            *(undefined8 *)(unaff_x29 + -0x90) = 2;
            *(undefined8 *)(unaff_x29 + -0x88) = uVar10;
            *(undefined8 *)(unaff_x29 + -0x80) = uVar11;
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
        else if ((*unaff_x26 == '\0') && (1 < *unaff_x25)) {
          uVar10 = *(undefined8 *)
                    (
                    ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb96ca1022f06c392E
                    + 0x20);
          uVar11 = *(undefined8 *)
                    (
                    ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender39send_server_notification_to_connections28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb96ca1022f06c392E
                    + 0x28);
          *(undefined8 *)(unaff_x29 + -0xe8) = 2;
          *(undefined8 *)(unaff_x29 + -0xe0) = uVar10;
          *(undefined8 *)(unaff_x29 + -0xd8) = uVar11;
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
            (**(code **)(puVar3 + 0x20))(puVar4,&stack0x00000448);
          }
        }
        FUN_100e349f0(&stack0x00000848);
      }
      puVar9 = *(undefined8 **)(unaff_x19 + 0x618);
      unaff_x23 = *(undefined8 **)(unaff_x19 + 0x610);
    }
    func_0x000100e4d0ac(unaff_x19 + 0x418);
  }
  *(undefined1 *)(unaff_x19 + 0x411) = 0;
  FUN_100e5286c(unaff_x19 + 0x218);
  uVar10 = 0;
  uVar8 = 1;
LAB_100898690:
  *(undefined1 *)(unaff_x19 + 0x410) = uVar8;
  return uVar10;
}

