
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100c0764c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  code *pcVar7;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  undefined8 uVar8;
  long unaff_x23;
  char *unaff_x24;
  ulong *unaff_x25;
  long lVar9;
  undefined8 *puVar10;
  long unaff_x29;
  ulong in_stack_00000008;
  undefined1 *puStack0000000000000010;
  undefined *puStack0000000000000018;
  char *pcStack0000000000000038;
  undefined8 *puStack0000000000000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 uStack0000000000000060;
  undefined8 *puStack0000000000000068;
  undefined8 uStack0000000000000070;
  long lStack0000000000000078;
  long in_stack_00000080;
  undefined *in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000d0;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  char *in_stack_000000e0;
  long in_stack_000000e8;
  
  puStack0000000000000040 = &stack0x00000080;
  pcStack0000000000000038 = s_websocket_acceptor_failed__108ad2bf8;
  puStack0000000000000010 = (undefined1 *)&stack0x00000038;
  puStack0000000000000018 = &UNK_10b208fd0;
  puStack0000000000000068 = &stack0x00000010;
  uStack0000000000000060 = 1;
  uStack0000000000000070 = 1;
  lStack0000000000000078 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000060);
  if ((*unaff_x24 == '\0') && (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
    lVar9 = *unaff_x21;
    uVar8 = *(undefined8 *)(lVar9 + 0x20);
    uVar3 = *(undefined8 *)(lVar9 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x88) = 1;
    *(undefined8 *)(unaff_x29 + -0x80) = uVar8;
    *(undefined8 *)(unaff_x29 + -0x78) = uVar3;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0x88);
    if (iVar5 != 0) {
      in_stack_000000b0 = *(long *)(lVar9 + 0x60);
      in_stack_000000b8 = *(undefined8 *)(lVar9 + 0x68);
      in_stack_00000098 = *(long *)(lVar9 + 0x50);
      in_stack_000000a0 = *(undefined8 *)(lVar9 + 0x58);
      in_stack_00000090 = 1;
      if (in_stack_00000098 == 0) {
        in_stack_00000090 = 2;
      }
      uStack00000000000000d8 = *(undefined4 *)(lVar9 + 8);
      uStack00000000000000dc = *(undefined4 *)(lVar9 + 0xc);
      *(undefined8 **)(unaff_x29 + -0x70) = &stack0x00000060;
      *(undefined1 *)(unaff_x29 + -0x68) = 1;
      *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x70;
      *(undefined **)(unaff_x29 + -0x58) = &DAT_1061c2098;
      in_stack_000000a8 = 1;
      if (in_stack_000000b0 == 0) {
        in_stack_000000a8 = 2;
      }
      uVar8 = *(undefined8 *)(unaff_x29 + -0x88);
      *(undefined8 *)(unaff_x23 + 0x38) = *(undefined8 *)(unaff_x29 + -0x80);
      *(undefined8 *)(unaff_x23 + 0x30) = uVar8;
      in_stack_000000d0 = *(undefined8 *)(unaff_x29 + -0x78);
      in_stack_000000e8 = unaff_x29 + -0x60;
      in_stack_000000e0 = s__108b39f4f;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000090);
    }
  }
  if ((in_stack_00000008 & 3) == 1) {
    uVar8 = *(undefined8 *)(in_stack_00000008 - 1);
    puVar10 = *(undefined8 **)(in_stack_00000008 + 7);
    pcVar7 = (code *)*puVar10;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(uVar8);
    }
    if (puVar10[1] != 0) {
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
      lVar9 = 
      ___ZN26codex_app_server_transport9transport9websocket24start_websocket_acceptor28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf090482c21a3b60cE
      , (uVar6 & 1) != 0)))) {
    in_stack_000000a8 =
         ___ZN26codex_app_server_transport9transport9websocket24start_websocket_acceptor28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf090482c21a3b60cE
         + 0x30;
    *(undefined **)(unaff_x29 + -0x88) = &UNK_108cc341a;
    *(undefined8 *)(unaff_x29 + -0x80) = 0x41;
    *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x88;
    *(undefined **)(unaff_x29 + -0x58) = &UNK_10b208fd0;
    in_stack_00000098 = unaff_x29 + -0x60;
    in_stack_00000090 = 1;
    in_stack_000000a0 = 1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar9,&stack0x00000090);
    lVar9 = 
    ___ZN26codex_app_server_transport9transport9websocket24start_websocket_acceptor28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf090482c21a3b60cE
    ;
    if ((*unaff_x24 == '\0') && (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puStack0000000000000068 =
           *(undefined8 **)
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
                  (lVar9,puVar2,puVar1,&stack0x00000060,&stack0x00000090);
      }
    }
  }
  else {
    lVar9 = 
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
        in_stack_00000080 = unaff_x29 + -0x70;
        in_stack_00000088 = &UNK_10b208fd0;
        puStack0000000000000068 = &stack0x00000080;
        uStack0000000000000060 = 1;
        uStack0000000000000070 = 1;
        in_stack_000000b0 = *(long *)(lVar9 + 0x60);
        in_stack_000000b8 = *(undefined8 *)(lVar9 + 0x68);
        in_stack_00000098 = *(long *)(lVar9 + 0x50);
        in_stack_000000a0 = *(undefined8 *)(lVar9 + 0x58);
        in_stack_00000090 = 1;
        if (in_stack_00000098 == 0) {
          in_stack_00000090 = 2;
        }
        uStack00000000000000d8 = *(undefined4 *)(lVar9 + 8);
        uStack00000000000000dc = *(undefined4 *)(lVar9 + 0xc);
        *(undefined8 **)(unaff_x29 + -0x60) = &stack0x00000060;
        *(undefined1 *)(unaff_x29 + -0x58) = 1;
        *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x60;
        *(undefined **)(unaff_x29 + -0x80) = &DAT_1061c2098;
        in_stack_000000a8 = 1;
        if (in_stack_000000b0 == 0) {
          in_stack_000000a8 = 2;
        }
        *(undefined8 *)(unaff_x23 + 0x38) = in_stack_00000050;
        *(undefined8 *)(unaff_x23 + 0x30) = in_stack_00000048;
        in_stack_000000d0 = in_stack_00000058;
        in_stack_000000e8 = unaff_x29 + -0x88;
        in_stack_000000e0 = s__108b39f4f;
        (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000090);
      }
    }
  }
  *(undefined1 *)(unaff_x19 + 0x90) = 1;
  return unaff_w20 & 1;
}

