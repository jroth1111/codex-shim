
/* WARNING: Removing unreachable block (ram,0x000100a2ce68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100a2cb58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  char cVar12;
  int iVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long unaff_x19;
  char *pcVar16;
  undefined1 *unaff_x23;
  long unaff_x29;
  undefined1 auVar17 [16];
  undefined8 *in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined *in_stack_00000010;
  char *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined1 *in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  char *in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined1 *in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined1 *in_stack_000001a8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x88,s__failed_to_refresh_OAuth_tokens_f_108acea3b,&stack0x000000c0);
  __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&stack0x000000c0);
  *(undefined8 *)(unaff_x29 + -0x68) = in_stack_000000c8;
  *(undefined1 **)(unaff_x29 + -0x70) = in_stack_000000c0;
  *(undefined8 *)(unaff_x29 + -0x58) = in_stack_000000d8;
  *(undefined8 *)(unaff_x29 + -0x60) = in_stack_000000d0;
  *(undefined8 *)(unaff_x29 + -0x48) = in_stack_000000e8;
  *(undefined8 *)(unaff_x29 + -0x50) = in_stack_000000e0;
  in_stack_000000c0 = in_stack_000001a8;
  auVar17 = FUN_1088571d4(&stack0x000000c0,unaff_x29 + -0x70);
  puVar14 = auVar17._0_8_;
  pcVar16 = *(char **)(unaff_x19 + 0x38);
  if (*pcVar16 == '\0') {
    *pcVar16 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
              (pcVar16,auVar17._8_8_,1000000000);
  }
  FUN_1060fa678(pcVar16,1,pcVar16);
  lVar11 = **(long **)(unaff_x19 + 0x30);
  **(long **)(unaff_x19 + 0x30) = lVar11 + -1;
  LORelease();
  if (lVar11 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h6c8cac43574eef9aE();
  }
  *unaff_x23 = 1;
  FUN_100cc2188();
  if (puVar14 != (undefined8 *)0x0) {
    in_stack_00000000 = puVar14;
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
       (((bRam000000010b62f720 - 1 < 2 ||
         ((bRam000000010b62f720 != 0 &&
          (cVar12 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN17codex_rmcp_client11rmcp_client10RmcpClient23refresh_oauth_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h03ccebdb49e34817E
                              ), cVar12 != '\0')))) &&
        (uVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN17codex_rmcp_client11rmcp_client10RmcpClient23refresh_oauth_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h03ccebdb49e34817E
                            ), (uVar15 & 1) != 0)))) {
      in_stack_00000020 = &stack0x00000028;
      in_stack_00000018 = s_failed_to_refresh_OAuth_tokens__108ace71a;
      in_stack_00000008 = &stack0x00000018;
      in_stack_00000010 = &UNK_10b208fd0;
      in_stack_000000c0 = (undefined1 *)0x1;
      in_stack_00000028 = (undefined1 *)register0x00000008;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN17codex_rmcp_client11rmcp_client10RmcpClient23refresh_oauth_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h03ccebdb49e34817E
                 ,&stack0x000000c0);
      lVar11 = 
      ___ZN17codex_rmcp_client11rmcp_client10RmcpClient23refresh_oauth_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h03ccebdb49e34817E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_00000058 =
             *(undefined8 **)
              (
              ___ZN17codex_rmcp_client11rmcp_client10RmcpClient23refresh_oauth_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h03ccebdb49e34817E
              + 0x20);
        in_stack_00000060 =
             *(undefined8 *)
              (
              ___ZN17codex_rmcp_client11rmcp_client10RmcpClient23refresh_oauth_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h03ccebdb49e34817E
              + 0x28);
        in_stack_00000050 = (char *)0x2;
        puVar3 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar13 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000050);
        if (iVar13 != 0) {
          lVar7 = *(long *)(lVar11 + 0x60);
          uVar9 = *(undefined8 *)(lVar11 + 0x68);
          lVar8 = *(long *)(lVar11 + 0x50);
          uVar10 = *(undefined8 *)(lVar11 + 0x58);
          uVar1 = 1;
          if (lVar8 == 0) {
            uVar1 = 2;
          }
          uVar5 = *(undefined4 *)(lVar11 + 8);
          uVar6 = *(undefined4 *)(lVar11 + 0xc);
          *(undefined1 ***)(unaff_x29 + -0x88) = &stack0x000000c0;
          *(undefined1 *)(unaff_x29 + -0x80) = 1;
          *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x88;
          *(undefined **)(unaff_x29 + -0x68) = &DAT_1061c2098;
          uVar2 = 1;
          if (lVar7 == 0) {
            uVar2 = 2;
          }
          *(undefined8 **)(unaff_x29 + -200) = in_stack_00000058;
          *(char **)(unaff_x29 + -0xd0) = in_stack_00000050;
          *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_00000060;
          *(char **)(unaff_x29 + -0xb0) = s__108b39f4f;
          *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0x70;
          *(undefined8 *)(unaff_x29 + -0x100) = uVar1;
          *(long *)(unaff_x29 + -0xf8) = lVar8;
          *(undefined8 *)(unaff_x29 + -0xf0) = uVar10;
          *(undefined8 *)(unaff_x29 + -0xe8) = uVar2;
          *(long *)(unaff_x29 + -0xe0) = lVar7;
          *(undefined8 *)(unaff_x29 + -0xd8) = uVar9;
          *(undefined4 *)(unaff_x29 + -0xb8) = uVar5;
          *(undefined4 *)(unaff_x29 + -0xb4) = uVar6;
          (**(code **)(puVar3 + 0x20))(puVar4,unaff_x29 + -0x100);
        }
      }
    }
    else {
      lVar11 = 
      ___ZN17codex_rmcp_client11rmcp_client10RmcpClient23refresh_oauth_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h03ccebdb49e34817E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_00000040 =
             *(undefined8 *)
              (
              ___ZN17codex_rmcp_client11rmcp_client10RmcpClient23refresh_oauth_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h03ccebdb49e34817E
              + 0x20);
        in_stack_00000048 =
             *(undefined8 *)
              (
              ___ZN17codex_rmcp_client11rmcp_client10RmcpClient23refresh_oauth_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h03ccebdb49e34817E
              + 0x28);
        in_stack_00000038 = 2;
        puVar3 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar13 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000038);
        if (iVar13 != 0) {
          lVar7 = ___ZN17codex_rmcp_client11rmcp_client10RmcpClient23refresh_oauth_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h03ccebdb49e34817E
                  + 0x30;
          in_stack_00000058 = &stack0x000000c0;
          in_stack_00000050 = s_failed_to_refresh_OAuth_tokens__108ace71a;
          *(char ***)(unaff_x29 + -0x70) = &stack0x00000050;
          *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
          *(undefined8 *)(unaff_x29 + -0x100) = 1;
          *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -0x70;
          *(undefined8 *)(unaff_x29 + -0xf0) = 1;
          *(long *)(unaff_x29 + -0xe8) = lVar7;
          in_stack_000000c0 = (undefined1 *)register0x00000008;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar11,puVar4,puVar3,&stack0x00000038,unaff_x29 + -0x100);
        }
      }
    }
    (**(code **)*in_stack_00000000)();
  }
  lVar11 = **(long **)(unaff_x19 + 0x18);
  **(long **)(unaff_x19 + 0x18) = lVar11 + -1;
  LORelease();
  if (lVar11 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000103e32944();
  }
  *(undefined1 *)(unaff_x19 + 0x10) = 1;
  return 0;
}

