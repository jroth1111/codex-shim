
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100c07930(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  code *pcVar7;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x22;
  undefined8 uVar8;
  long unaff_x23;
  char *unaff_x24;
  ulong *unaff_x25;
  long unaff_x26;
  undefined8 *puVar9;
  long unaff_x29;
  ulong in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined1 *puStack0000000000000038;
  undefined *puStack0000000000000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 uStack0000000000000060;
  undefined1 *puStack0000000000000068;
  undefined8 uStack0000000000000070;
  long lStack0000000000000078;
  char *pcStack0000000000000080;
  undefined *puStack0000000000000088;
  undefined8 uStack0000000000000090;
  long lStack0000000000000098;
  undefined8 uStack00000000000000a0;
  long lStack00000000000000a8;
  long lStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000d0;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  char *pcStack00000000000000e0;
  long lStack00000000000000e8;
  
  puStack0000000000000088 = (undefined *)(unaff_x29 + -0x70);
  pcStack0000000000000080 = s_websocket_acceptor_failed__108ad2bf8;
  puStack0000000000000038 = (undefined1 *)&stack0x00000080;
  puStack0000000000000040 = &UNK_10b208fd0;
  puStack0000000000000068 = (undefined1 *)&stack0x00000038;
  uStack0000000000000060 = 1;
  uStack0000000000000070 = 1;
  *(undefined8 *)(unaff_x23 + 0x38) = in_stack_00000028;
  *(undefined8 *)(unaff_x23 + 0x30) = in_stack_00000020;
  uStack00000000000000d0 = in_stack_00000030;
  lStack00000000000000b0 = *(long *)(unaff_x26 + 0x60);
  uStack00000000000000b8 = *(undefined8 *)(unaff_x26 + 0x68);
  lStack0000000000000098 = *(long *)(unaff_x26 + 0x50);
  uStack00000000000000a0 = *(undefined8 *)(unaff_x26 + 0x58);
  uStack0000000000000090 = 1;
  if (lStack0000000000000098 == 0) {
    uStack0000000000000090 = 2;
  }
  uStack00000000000000d8 = *(undefined4 *)(unaff_x26 + 8);
  uStack00000000000000dc = *(undefined4 *)(unaff_x26 + 0xc);
  *(undefined8 **)(unaff_x29 + -0x60) = &stack0x00000060;
  *(undefined1 *)(unaff_x29 + -0x58) = 1;
  *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x60;
  *(undefined **)(unaff_x29 + -0x80) = &DAT_1061c2098;
  lStack00000000000000a8 = 1;
  if (lStack00000000000000b0 == 0) {
    lStack00000000000000a8 = 2;
  }
  lStack00000000000000e8 = unaff_x29 + -0x88;
  pcStack00000000000000e0 = s__108b39f4f;
  lStack0000000000000078 = param_1;
  (**(code **)(unaff_x22 + 0x20))();
  if ((in_stack_00000008 & 3) == 1) {
    uVar8 = *(undefined8 *)(in_stack_00000008 - 1);
    puVar9 = *(undefined8 **)(in_stack_00000008 + 7);
    pcVar7 = (code *)*puVar9;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(uVar8);
    }
    if (puVar9[1] != 0) {
      _free(uVar8);
    }
    _free((undefined8 *)(in_stack_00000008 - 1));
    uVar6 = *unaff_x25;
  }
  else {
    uVar6 = *unaff_x25;
  }
  if ((uVar6 < 3) &&
     (((bRam000000010b628d28 - 1 < 2 ||
       ((bRam000000010b628d28 != 0 &&
        (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN26codex_app_server_transport9transport9websocket24start_websocket_acceptor28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf090482c21a3b60cE
                           ), cVar4 != '\0')))) &&
      (uVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN26codex_app_server_transport9transport9websocket24start_websocket_acceptor28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf090482c21a3b60cE
                         ),
      lVar3 = 
      ___ZN26codex_app_server_transport9transport9websocket24start_websocket_acceptor28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf090482c21a3b60cE
      , (uVar6 & 1) != 0)))) {
    lStack00000000000000a8 =
         ___ZN26codex_app_server_transport9transport9websocket24start_websocket_acceptor28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf090482c21a3b60cE
         + 0x30;
    *(undefined **)(unaff_x29 + -0x88) = &UNK_108cc341a;
    *(undefined8 *)(unaff_x29 + -0x80) = 0x41;
    *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x88;
    *(undefined **)(unaff_x29 + -0x58) = &UNK_10b208fd0;
    lStack0000000000000098 = unaff_x29 + -0x60;
    uStack0000000000000090 = 1;
    uStack00000000000000a0 = 1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar3,&stack0x00000090);
    lVar3 = 
    ___ZN26codex_app_server_transport9transport9websocket24start_websocket_acceptor28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf090482c21a3b60cE
    ;
    if ((*unaff_x24 == '\0') && (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puStack0000000000000068 =
           *(undefined1 **)
            (
            ___ZN26codex_app_server_transport9transport9websocket24start_websocket_acceptor28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf090482c21a3b60cE
            + 0x20);
      uStack0000000000000070 =
           *(undefined8 *)
            (
            ___ZN26codex_app_server_transport9transport9websocket24start_websocket_acceptor28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf090482c21a3b60cE
            + 0x28);
      uStack0000000000000060 = 3;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000060);
      if (iVar5 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar3,puVar2,puVar1,&stack0x00000060,&stack0x00000090);
      }
    }
  }
  else {
    lVar3 = 
    ___ZN26codex_app_server_transport9transport9websocket24start_websocket_acceptor28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf090482c21a3b60cE
    ;
    if ((*unaff_x24 == '\0') && (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      in_stack_00000050 =
           *(undefined8 *)
            (
            ___ZN26codex_app_server_transport9transport9websocket24start_websocket_acceptor28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf090482c21a3b60cE
            + 0x20);
      in_stack_00000058 =
           *(undefined8 *)
            (
            ___ZN26codex_app_server_transport9transport9websocket24start_websocket_acceptor28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf090482c21a3b60cE
            + 0x28);
      in_stack_00000048 = 3;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000048);
      if (iVar5 != 0) {
        lStack0000000000000078 =
             ___ZN26codex_app_server_transport9transport9websocket24start_websocket_acceptor28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf090482c21a3b60cE
             + 0x30;
        *(undefined **)(unaff_x29 + -0x70) = &UNK_108cc341a;
        *(undefined8 *)(unaff_x29 + -0x68) = 0x41;
        pcStack0000000000000080 = (char *)(unaff_x29 + -0x70);
        puStack0000000000000088 = &UNK_10b208fd0;
        puStack0000000000000068 = (undefined1 *)&stack0x00000080;
        uStack0000000000000060 = 1;
        uStack0000000000000070 = 1;
        lStack00000000000000b0 = *(long *)(lVar3 + 0x60);
        uStack00000000000000b8 = *(undefined8 *)(lVar3 + 0x68);
        lStack0000000000000098 = *(long *)(lVar3 + 0x50);
        uStack00000000000000a0 = *(undefined8 *)(lVar3 + 0x58);
        uStack0000000000000090 = 1;
        if (lStack0000000000000098 == 0) {
          uStack0000000000000090 = 2;
        }
        uStack00000000000000d8 = *(undefined4 *)(lVar3 + 8);
        uStack00000000000000dc = *(undefined4 *)(lVar3 + 0xc);
        *(undefined8 **)(unaff_x29 + -0x60) = &stack0x00000060;
        *(undefined1 *)(unaff_x29 + -0x58) = 1;
        *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x60;
        *(undefined **)(unaff_x29 + -0x80) = &DAT_1061c2098;
        lStack00000000000000a8 = 1;
        if (lStack00000000000000b0 == 0) {
          lStack00000000000000a8 = 2;
        }
        *(undefined8 *)(unaff_x23 + 0x38) = in_stack_00000050;
        *(undefined8 *)(unaff_x23 + 0x30) = in_stack_00000048;
        uStack00000000000000d0 = in_stack_00000058;
        lStack00000000000000e8 = unaff_x29 + -0x88;
        pcStack00000000000000e0 = s__108b39f4f;
        (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000090);
      }
    }
  }
  *(undefined1 *)(unaff_x19 + 0x90) = 1;
  return unaff_w20 & 1;
}

