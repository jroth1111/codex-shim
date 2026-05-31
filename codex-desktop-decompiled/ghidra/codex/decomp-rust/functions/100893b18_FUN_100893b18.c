
/* WARNING: Removing unreachable block (ram,0x0001008942fc) */
/* WARNING: Removing unreachable block (ram,0x0001008942d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100893b18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  char cVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x19;
  char *unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long lVar15;
  ulong *unaff_x28;
  long unaff_x29;
  undefined1 auVar16 [12];
  undefined8 in_stack_000001a0;
  long in_stack_000003a8;
  undefined8 in_stack_000003b0;
  long in_stack_000003b8;
  long in_stack_000003f0;
  undefined8 in_stack_000005e8;
  undefined8 in_stack_000005f0;
  
  *(char **)(unaff_x29 + -0x70) = s_client_responded_with_error_for___108ac9f2d;
  *(undefined1 **)(unaff_x29 + -0x68) = &stack0x000003d8;
  *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x70;
  *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xe0) = 1;
  *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0x80;
  *(undefined8 *)(unaff_x29 + -0xd0) = 1;
  *(undefined8 *)(unaff_x29 + -200) = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,unaff_x29 + -0xe0);
  if ((*unaff_x21 == '\0') && (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar12 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000498);
    if (iVar12 != 0) {
      *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -0xe0;
      *(undefined1 *)(unaff_x29 + -0xf0) = 1;
      (**(code **)(puVar2 + 0x20))(puVar3,&stack0x000004d0);
    }
  }
  lVar15 = *(long *)(unaff_x19 + 0x88);
  auVar16 = func_0x000106032954(0);
  *(undefined1 (*) [12])(unaff_x29 + -0xe0) = auVar16;
  func_0x000106032878(&stack0x000004d0,unaff_x29 + -0xe0,&stack0x000003d8);
  if (in_stack_000003a8 != -0x8000000000000000) {
    if (in_stack_000003b8 == 0) {
      lVar13 = 1;
    }
    else {
      lVar13 = _malloc(in_stack_000003b8);
      if (lVar13 == 0) {
        func_0x0001087c9084(1,in_stack_000003b8);
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100894420);
        (*pcVar10)();
      }
    }
    _memcpy(lVar13,in_stack_000003b0,in_stack_000003b8);
  }
  FUN_101725e54(*(undefined8 *)(lVar15 + 0xc0),&stack0x000004d0);
  *(undefined1 *)(unaff_x19 + 0x1a9) = 0;
  FUN_100fd5730(&stack0x000003d8,in_stack_000001a0,&stack0x000004d0);
  if ((*unaff_x28 < 4) &&
     (((bRam000000010b627588 - 1 < 2 ||
       ((bRam000000010b627588 != 0 &&
        (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN16codex_app_server16outgoing_message21OutgoingMessageSender19notify_client_error28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4cc353f4d0ae5b29E
                            ), cVar11 != '\0')))) &&
      (uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender19notify_client_error28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4cc353f4d0ae5b29E
                          ), (uVar14 & 1) != 0)))) {
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN16codex_app_server16outgoing_message21OutgoingMessageSender19notify_client_error28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4cc353f4d0ae5b29E
               ,&stack0x00000440);
    lVar15 = 
    ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender19notify_client_error28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4cc353f4d0ae5b29E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uVar6 = *(undefined8 *)
               (
               ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender19notify_client_error28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4cc353f4d0ae5b29E
               + 0x20);
      uVar8 = *(undefined8 *)
               (
               ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender19notify_client_error28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4cc353f4d0ae5b29E
               + 0x28);
      *(undefined8 *)(unaff_x29 + -0xf8) = 2;
      *(undefined8 *)(unaff_x29 + -0xf0) = uVar6;
      *(undefined8 *)(unaff_x29 + -0xe8) = uVar8;
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar12 = (**(code **)(puVar2 + 0x18))(puVar3,unaff_x29 + -0xf8);
      if (iVar12 != 0) {
        lVar13 = *(long *)(lVar15 + 0x60);
        uVar8 = *(undefined8 *)(lVar15 + 0x68);
        lVar7 = *(long *)(lVar15 + 0x50);
        uVar9 = *(undefined8 *)(lVar15 + 0x58);
        uVar6 = 1;
        if (lVar7 == 0) {
          uVar6 = 2;
        }
        uVar4 = *(undefined4 *)(lVar15 + 8);
        uVar5 = *(undefined4 *)(lVar15 + 0xc);
        *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000440;
        *(undefined1 *)(unaff_x29 + -0x78) = 1;
        *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x80;
        *(undefined **)(unaff_x29 + -0x68) = &DAT_1061c2098;
        uVar1 = 1;
        if (lVar13 == 0) {
          uVar1 = 2;
        }
        *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_000005f0;
        *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_000005e8;
        *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0xe8);
        *(char **)(unaff_x29 + -0x90) = s__108b39f4f;
        *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x70;
        *(undefined8 *)(unaff_x29 + -0xe0) = uVar6;
        *(long *)(unaff_x29 + -0xd8) = lVar7;
        *(undefined8 *)(unaff_x29 + -0xd0) = uVar9;
        *(undefined8 *)(unaff_x29 + -200) = uVar1;
        *(long *)(unaff_x29 + -0xc0) = lVar13;
        *(undefined8 *)(unaff_x29 + -0xb8) = uVar8;
        *(undefined4 *)(unaff_x29 + -0x98) = uVar4;
        *(undefined4 *)(unaff_x29 + -0x94) = uVar5;
        (**(code **)(puVar2 + 0x20))(puVar3,unaff_x29 + -0xe0);
      }
    }
  }
  else {
    lVar15 = 
    ___ZN16codex_app_server16outgoing_message21OutgoingMessageSender19notify_client_error28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4cc353f4d0ae5b29E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar12 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000480);
      if (iVar12 != 0) {
        *(undefined1 **)(unaff_x29 + -0xe0) = &stack0x000003a8;
        *(undefined **)(unaff_x29 + -0xd8) = &DAT_10114c790;
        *(undefined1 **)(unaff_x29 + -0xd0) = &stack0x000004d0;
        *(undefined **)(unaff_x29 + -200) = &DAT_10118848c;
        *(char **)(unaff_x29 + -0xf8) = s_could_not_notify_callback_for_du_108ac9ee2;
        *(long *)(unaff_x29 + -0xf0) = unaff_x29 + -0xe0;
        *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xf8;
        *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar15,puVar3,puVar2,&stack0x00000440,&stack0x00000498);
      }
    }
  }
  if (in_stack_000003f0 != unaff_x25) {
    FUN_100de6690(&stack0x000004e8);
  }
  func_0x000100e45ab8();
  if ((in_stack_000003a8 != -0x8000000000000000) && (in_stack_000003a8 != 0)) {
    _free(in_stack_000003b0);
  }
  if ((*(byte *)(unaff_x19 + 0x1a9) & 1) != 0) {
    if (*(long *)(unaff_x19 + 0xc0) != unaff_x25) {
      FUN_100de6690();
    }
    if (*(long *)(unaff_x19 + 0xa8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0xb0));
    }
  }
  *(undefined1 *)(unaff_x19 + 0x1a9) = 0;
  if ((*(long *)(unaff_x19 + 0x90) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x90) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x98));
  }
  *(undefined1 *)(unaff_x19 + 0x1a8) = 1;
  return unaff_x23 == unaff_x24;
}

