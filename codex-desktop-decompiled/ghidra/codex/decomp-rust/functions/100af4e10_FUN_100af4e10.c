
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100af4e10(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  long unaff_x19;
  undefined8 *unaff_x25;
  long unaff_x29;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack00000000000000c0;
  long lStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 in_stack_00000150;
  int iStack0000000000000160;
  long in_stack_00000168;
  undefined8 in_stack_00000170;
  long in_stack_00000178;
  
  *(char **)(unaff_x29 + -0xa0) = s_CONNECT_route_selected__host____p_108ad0021;
  *(int **)(unaff_x29 + -0x98) = &stack0x00000160;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xa0;
  *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
  lStack00000000000000c8 = unaff_x29 + -0x70;
  uStack00000000000000c0 = 1;
  uStack00000000000000d0 = 1;
  uStack00000000000000d8 = param_1;
  FUN_100af5c28(&stack0x000000c0);
  *(undefined2 *)(unaff_x19 + 0xba) = 0;
  uVar9 = *(undefined8 *)(unaff_x19 + 0x58);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x70);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x68);
  unaff_x25[0x21] = *(undefined8 *)(unaff_x19 + 0x60);
  unaff_x25[0x20] = uVar9;
  unaff_x25[0x23] = uVar12;
  unaff_x25[0x22] = uVar11;
  uVar9 = *(undefined8 *)(unaff_x19 + 0x78);
  unaff_x25[0x25] = *(undefined8 *)(unaff_x19 + 0x80);
  unaff_x25[0x24] = uVar9;
  in_stack_00000150 = *(undefined8 *)(unaff_x19 + 0x88);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined1 *)(unaff_x19 + 0xbc) = 0;
  uVar12 = *(undefined8 *)(unaff_x19 + 0xe0);
  uVar14 = *(undefined8 *)(unaff_x19 + 0xf8);
  uVar13 = *(undefined8 *)(unaff_x19 + 0xf0);
  unaff_x25[0x19] = *(undefined8 *)(unaff_x19 + 0xe8);
  unaff_x25[0x18] = uVar12;
  unaff_x25[0x1b] = uVar14;
  unaff_x25[0x1a] = uVar13;
  uVar12 = *(undefined8 *)(unaff_x19 + 0x100);
  unaff_x25[0x1d] = *(undefined8 *)(unaff_x19 + 0x108);
  unaff_x25[0x1c] = uVar12;
  unaff_x25[0x1f] = uVar11;
  unaff_x25[0x1e] = uVar9;
  uVar12 = *(undefined8 *)(unaff_x19 + 0xc0);
  uVar11 = *(undefined8 *)(unaff_x19 + 0xd8);
  uVar9 = *(undefined8 *)(unaff_x19 + 0xd0);
  unaff_x25[0x15] = *(undefined8 *)(unaff_x19 + 200);
  unaff_x25[0x14] = uVar12;
  unaff_x25[0x17] = uVar11;
  unaff_x25[0x16] = uVar9;
  uVar9 = *(undefined8 *)(unaff_x19 + 0xb0);
  unaff_x25[1] = unaff_x25[0x15];
  *unaff_x25 = unaff_x25[0x14];
  unaff_x25[3] = unaff_x25[0x17];
  unaff_x25[2] = unaff_x25[0x16];
  unaff_x25[9] = unaff_x25[0x1d];
  unaff_x25[8] = unaff_x25[0x1c];
  unaff_x25[0xb] = unaff_x25[0x1f];
  unaff_x25[10] = unaff_x25[0x1e];
  unaff_x25[5] = unaff_x25[0x19];
  unaff_x25[4] = unaff_x25[0x18];
  unaff_x25[7] = unaff_x25[0x1b];
  unaff_x25[6] = unaff_x25[0x1a];
  unaff_x25[0xd] = unaff_x25[0x21];
  unaff_x25[0xc] = unaff_x25[0x20];
  unaff_x25[0xf] = unaff_x25[0x23];
  unaff_x25[0xe] = unaff_x25[0x22];
  unaff_x25[0x11] = unaff_x25[0x25];
  unaff_x25[0x10] = unaff_x25[0x24];
  uVar11 = unaff_x25[0xc];
  uVar13 = unaff_x25[0xf];
  uVar12 = unaff_x25[0xe];
  *(undefined8 *)(unaff_x19 + 0x178) = unaff_x25[0xd];
  *(undefined8 *)(unaff_x19 + 0x170) = uVar11;
  *(undefined8 *)(unaff_x19 + 0x188) = uVar13;
  *(undefined8 *)(unaff_x19 + 0x180) = uVar12;
  uVar11 = unaff_x25[0x10];
  *(undefined8 *)(unaff_x19 + 0x198) = unaff_x25[0x11];
  *(undefined8 *)(unaff_x19 + 400) = uVar11;
  uVar11 = unaff_x25[4];
  uVar13 = unaff_x25[7];
  uVar12 = unaff_x25[6];
  *(undefined8 *)(unaff_x19 + 0x138) = unaff_x25[5];
  *(undefined8 *)(unaff_x19 + 0x130) = uVar11;
  *(undefined8 *)(unaff_x19 + 0x148) = uVar13;
  *(undefined8 *)(unaff_x19 + 0x140) = uVar12;
  uVar11 = unaff_x25[8];
  uVar13 = unaff_x25[0xb];
  uVar12 = unaff_x25[10];
  *(undefined8 *)(unaff_x19 + 0x158) = unaff_x25[9];
  *(undefined8 *)(unaff_x19 + 0x150) = uVar11;
  *(undefined8 *)(unaff_x19 + 0x168) = uVar13;
  *(undefined8 *)(unaff_x19 + 0x160) = uVar12;
  uVar11 = *unaff_x25;
  uVar13 = unaff_x25[3];
  uVar12 = unaff_x25[2];
  *(undefined8 *)(unaff_x19 + 0x118) = unaff_x25[1];
  *(undefined8 *)(unaff_x19 + 0x110) = uVar11;
  *(undefined8 *)(unaff_x19 + 0x128) = uVar13;
  *(undefined8 *)(unaff_x19 + 0x120) = uVar12;
  *(undefined8 *)(unaff_x19 + 0x1a0) = in_stack_00000150;
  *(undefined8 *)(unaff_x19 + 0x1a8) = uVar9;
  *(undefined1 *)(unaff_x19 + 0x360) = 0;
  FUN_100afa4e8(&stack0x00000160,unaff_x19 + 0x110);
  if (iStack0000000000000160 == 1) {
    uVar9 = 1;
    uVar8 = 5;
  }
  else {
    uVar9 = unaff_x25[0x16];
    lVar4 = unaff_x25[0x15];
    FUN_100caf68c(unaff_x19 + 0x110);
    if (lVar4 != 0) {
      unaff_x25[0x29] = uVar9;
      unaff_x25[0x28] = lVar4;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b62e7f8 - 1 < 2 ||
           ((bRam000000010b62e7f8 != 0 &&
            (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN19codex_network_proxy10http_proxy18http_connect_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h01085ede2a73afceE
                               ), cVar5 != '\0')))) &&
          (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN19codex_network_proxy10http_proxy18http_connect_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h01085ede2a73afceE
                             ), (uVar7 & 1) != 0)))) {
        in_stack_00000178 =
             ___ZN19codex_network_proxy10http_proxy18http_connect_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h01085ede2a73afceE
             + 0x30;
        *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0xe0;
        *(undefined8 *)(unaff_x29 + -0x98) = 0x10117aba8;
        *(char **)(unaff_x29 + -0x70) = s_tunnel_error__108ad00a5;
        *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0xa0;
        *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x70;
        *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
        in_stack_00000168 = unaff_x29 + -0x80;
        _iStack0000000000000160 = 1;
        in_stack_00000170 = 1;
        FUN_100af6118(&stack0x00000160);
      }
      else {
        lVar4 = 
        ___ZN19codex_network_proxy10http_proxy18http_connect_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h01085ede2a73afceE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar9 = *(undefined8 *)
                   (
                   ___ZN19codex_network_proxy10http_proxy18http_connect_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h01085ede2a73afceE
                   + 0x20);
          uVar11 = *(undefined8 *)
                    (
                    ___ZN19codex_network_proxy10http_proxy18http_connect_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h01085ede2a73afceE
                    + 0x28);
          *(undefined8 *)(unaff_x29 + -200) = 2;
          *(undefined8 *)(unaff_x29 + -0xc0) = uVar9;
          *(undefined8 *)(unaff_x29 + -0xb8) = uVar11;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -200);
          if (iVar6 != 0) {
            in_stack_00000178 =
                 ___ZN19codex_network_proxy10http_proxy18http_connect_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h01085ede2a73afceE
                 + 0x30;
            *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xe0;
            *(undefined8 *)(unaff_x29 + -0x68) = 0x10117aba8;
            *(char **)(unaff_x29 + -0x80) = s_tunnel_error__108ad00a5;
            *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
            *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0x80;
            *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
            in_stack_00000168 = unaff_x29 + -0xb0;
            _iStack0000000000000160 = 1;
            in_stack_00000170 = 1;
            uVar9 = *(undefined8 *)(unaff_x29 + -200);
            unaff_x25[0x31] = *(undefined8 *)(unaff_x29 + -0xc0);
            unaff_x25[0x30] = uVar9;
            *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0xb8);
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar4,puVar2,puVar1,unaff_x29 + -0xa0,&stack0x00000160);
          }
        }
      }
      uVar9 = *(undefined8 *)(unaff_x29 + -0xe0);
      puVar3 = *(undefined8 **)(unaff_x29 + -0xd8);
      pcVar10 = (code *)*puVar3;
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(uVar9);
      }
      if (puVar3[1] != 0) {
        _free(uVar9);
      }
    }
    *(undefined2 *)(unaff_x19 + 0xbb) = 0;
    if ((*(byte *)(unaff_x19 + 0x90) != 0x1a) && (0x18 < *(byte *)(unaff_x19 + 0x90))) {
      lVar4 = **(long **)(unaff_x19 + 0x98);
      **(long **)(unaff_x19 + 0x98) = lVar4 + -1;
      LORelease();
      if (lVar4 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
    }
    uVar9 = 0;
    *(undefined1 *)(unaff_x19 + 0xba) = 0;
    uVar8 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0xb8) = uVar8;
  return uVar9;
}

