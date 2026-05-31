
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10052cc60(void)

{
  ushort *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  byte bVar14;
  undefined1 uVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  undefined8 uVar26;
  long lVar27;
  undefined1 *unaff_x24;
  long lVar28;
  ulong uVar29;
  char *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  ulong uVar30;
  ulong uVar31;
  byte bVar32;
  undefined1 auVar33 [16];
  undefined8 in_stack_000000a0;
  long *in_stack_000000b8;
  undefined4 *in_stack_000000c0;
  char *in_stack_00000110;
  undefined8 *in_stack_00000118;
  char *in_stack_00000150;
  undefined8 *in_stack_00000158;
  long *in_stack_00000160;
  code *in_stack_00000168;
  long in_stack_00000170;
  long in_stack_00000178;
  long in_stack_00000308;
  undefined8 *in_stack_00000310;
  long in_stack_000005d0;
  long in_stack_000005d8;
  long in_stack_000005e0;
  long in_stack_000005e8;
  long in_stack_000005f0;
  long in_stack_000005f8;
  long *in_stack_00000600;
  undefined8 *in_stack_00000608;
  long *in_stack_00000610;
  code *in_stack_00000618;
  long in_stack_00000620;
  long in_stack_00000628;
  long *in_stack_00002100;
  undefined8 *in_stack_00002108;
  long *in_stack_00002110;
  code *in_stack_00002118;
  long in_stack_00002120;
  long in_stack_00002128;
  long *in_stack_00002130;
  undefined8 *in_stack_00002138;
  long *in_stack_00002140;
  undefined4 in_stack_00002148;
  undefined4 in_stack_0000214c;
  char *in_stack_00002150;
  undefined8 *in_stack_00002158;
  long in_stack_00002160;
  long in_stack_00002168;
  long in_stack_00002170;
  long in_stack_00002178;
  long in_stack_00002180;
  long in_stack_00002188;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00002100,s__config_persistence_task_panicke_108ac5a9d,&stack0x00000150);
  puVar9 = (undefined8 *)_malloc(0x18);
  if (puVar9 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
LAB_10052d4ac:
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x10052d4b0);
    (*pcVar17)();
  }
  *puVar9 = in_stack_00002100;
  puVar9[1] = in_stack_00002108;
  puVar9[2] = in_stack_00002110;
  puVar10 = (undefined8 *)_malloc(0x18);
  if (puVar10 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    goto LAB_10052d4ac;
  }
  *puVar10 = puVar9;
  puVar10[1] = &UNK_10b209118;
  *(undefined1 *)(puVar10 + 2) = 0x28;
  if (in_stack_00000308 != 0) {
    if ((code *)*in_stack_00000310 != (code *)0x0) {
      (*(code *)*in_stack_00000310)(in_stack_00000308);
    }
    if (in_stack_00000310[1] != 0) {
      _free(in_stack_00000308);
    }
  }
  *unaff_x24 = 1;
  if ((long)puVar10 + 1U == 0) {
    *(undefined1 *)((long)unaff_x27 + 0x5c3) = 0;
    lVar22 = unaff_x27[0x76];
    *unaff_x27 = lVar22;
    unaff_x27[1] = lVar22;
    unaff_x27[2] = unaff_x27[0x75];
    unaff_x27[3] = lVar22 + unaff_x27[0x77] * 0x1c8;
    while( true ) {
      plVar16 = (long *)unaff_x27[3];
      plVar24 = (long *)unaff_x27[1];
      if (plVar24 == plVar16) break;
      plVar25 = plVar24 + 0x39;
      unaff_x27[1] = (long)plVar25;
      _memcpy(unaff_x27 + 0x78,plVar24,0x1c8);
      if (unaff_x27[0x7b] == 2) goto joined_r0x00010052e480;
      lVar23 = plVar24[1];
      lVar22 = *plVar24;
      unaff_x27[0xb3] = plVar24[2];
      unaff_x27[0xb2] = lVar23;
      unaff_x27[0xb1] = lVar22;
      _memcpy(unaff_x27 + 0x1a,unaff_x27 + 0x7b,0x1b0);
      unaff_x27[0xb9] = (long)(unaff_x27 + 0x1a);
      *(undefined1 *)(unaff_x27 + 0x158) = 0;
      FUN_1016483c4(&stack0x00002100,unaff_x27 + 0xb9);
      if (in_stack_00002100 == (long *)0x8000000000000002) {
        uVar26 = 1;
        uVar15 = 6;
        goto LAB_10052ea70;
      }
      FUN_100e6b604(unaff_x27 + 0xb9);
      uVar11 = (ulong)((long)in_stack_00002100 + 0x8000000000000001U) &
               (long)in_stack_00002100 >> 0x3f;
      puVar9 = in_stack_00002108;
      if (uVar11 == 2) {
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
           (((bRam000000010b629fd0 - 1 < 2 ||
             ((bRam000000010b629fd0 != 0 &&
              (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0b59aa6f45e4a0aaE
                                 ), cVar7 != '\0')))) &&
            (uVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (
                                ___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0b59aa6f45e4a0aaE
                                ), (uVar11 & 1) != 0)))) {
          in_stack_00000618 =
               (code *)(
                       ___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0b59aa6f45e4a0aaE
                       + 0x30);
          in_stack_00002100 = unaff_x27 + 0xb1;
          in_stack_00002110 = (long *)&stack0x00000580;
          in_stack_00002118 =
               __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
          ;
          in_stack_00000158 = (undefined8 *)&stack0x00002100;
          in_stack_00000150 = s_7MCP_server_may_or_may_not_requi_108ac0763;
          in_stack_00000110 = (char *)&stack0x00000150;
          in_stack_00000118 = (undefined8 *)&UNK_10b208fd0;
          in_stack_00000608 = &stack0x00000110;
          in_stack_00000600 = (long *)0x1;
          in_stack_00000610 = (long *)0x1;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0b59aa6f45e4a0aaE
                     ,&stack0x00000600);
          lVar22 = 
          ___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0b59aa6f45e4a0aaE
          ;
          puVar9 = (undefined8 *)&DAT_10112965c;
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
            iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000300);
            if (iVar8 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar22,puVar3,puVar2,&stack0x00000300,&stack0x00000600);
            }
          }
        }
        else {
          lVar22 = 
          ___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0b59aa6f45e4a0aaE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puVar10 = *(undefined8 **)
                       (
                       ___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0b59aa6f45e4a0aaE
                       + 0x20);
            plVar16 = *(long **)(
                                ___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0b59aa6f45e4a0aaE
                                + 0x28);
            puVar2 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000560);
            if (iVar8 != 0) {
              in_stack_00000600 = unaff_x27 + 0xb1;
              in_stack_00000608 = (undefined8 *)&DAT_10112965c;
              in_stack_00000610 = (long *)&stack0x00000580;
              in_stack_00000618 =
                   __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
              ;
              in_stack_00002130 = (long *)0x2;
              in_stack_00002120 = *(long *)(lVar22 + 0x60);
              in_stack_00002128 = *(long *)(lVar22 + 0x68);
              puVar9 = *(undefined8 **)(lVar22 + 0x50);
              in_stack_00002110 = *(long **)(lVar22 + 0x58);
              in_stack_00002100 = (long *)0x1;
              if (puVar9 == (undefined8 *)0x0) {
                in_stack_00002100 = (long *)0x2;
              }
              in_stack_00002148 = *(undefined4 *)(lVar22 + 8);
              in_stack_0000214c = *(undefined4 *)(lVar22 + 0xc);
              in_stack_00000110 = &stack0x00000300;
              in_stack_00000118 = (undefined8 *)CONCAT71(in_stack_00000118._1_7_,1);
              in_stack_00000150 = (char *)&stack0x00000110;
              in_stack_00000158 = (undefined8 *)&DAT_1061c2098;
              in_stack_00002118 = (code *)0x1;
              if (in_stack_00002120 == 0) {
                in_stack_00002118 = (code *)0x2;
              }
              in_stack_00002158 = &stack0x00000150;
              in_stack_00002150 = s__108b39f4f;
              (**(code **)(puVar2 + 0x20))(puVar3,&stack0x00002100);
              in_stack_00002138 = puVar10;
              in_stack_00002140 = plVar16;
            }
          }
        }
        (**(code **)*in_stack_00002108)();
      }
      else if (uVar11 != 1) {
        *(undefined2 *)(unaff_x27 + 0xb8) = 0x101;
        unaff_x27[0x50] = (long)in_stack_00002100;
        unaff_x27[0x51] = (long)in_stack_00002108;
        unaff_x27[0x5b] = (long)in_stack_00002158;
        unaff_x27[0x5a] = (long)in_stack_00002150;
        unaff_x27[0x5d] = in_stack_00002168;
        unaff_x27[0x5c] = in_stack_00002160;
        unaff_x27[0x5f] = in_stack_00002178;
        unaff_x27[0x5e] = in_stack_00002170;
        unaff_x27[0x61] = in_stack_00002188;
        unaff_x27[0x60] = in_stack_00002180;
        unaff_x27[0x53] = (long)in_stack_00002118;
        unaff_x27[0x52] = (long)in_stack_00002110;
        unaff_x27[0x55] = in_stack_00002128;
        unaff_x27[0x54] = in_stack_00002120;
        unaff_x27[0x57] = (long)in_stack_00002138;
        unaff_x27[0x56] = (long)in_stack_00002130;
        unaff_x27[0x59] = CONCAT44(in_stack_0000214c,in_stack_00002148);
        unaff_x27[0x58] = (long)in_stack_00002140;
        if (unaff_x27[0x36] == -0x8000000000000000) {
          in_stack_00000600 = (long *)0x8000000000000000;
        }
        else {
          FUN_101146714(&stack0x00000600,unaff_x27[0x37],unaff_x27[0x38]);
        }
        if (unaff_x27[0x53] == -0x8000000000000000) {
          in_stack_00002100 = (long *)0x8000000000000000;
        }
        else {
          FUN_101146714(&stack0x00002100,unaff_x27[0x54],unaff_x27[0x55]);
        }
        __ZN9codex_mcp3mcp4auth20resolve_oauth_scopes17h594097b0b31defecE
                  (unaff_x27 + 4,&stack0x00000300,&stack0x00000600,&stack0x00002100);
        lVar22 = 0;
        if (-0x7fffffffffffffff < unaff_x27[0x3c]) {
          lVar22 = unaff_x27[0x3d];
        }
        unaff_x27[0x62] = lVar22;
        unaff_x27[99] = unaff_x27[0x3e];
        lVar22 = unaff_x27[0xb2];
        lVar23 = unaff_x27[0xb3];
        lVar27 = unaff_x27[0x51];
        lVar28 = unaff_x27[0x52];
        uVar15 = *(undefined1 *)(unaff_x27[0x6e] + 0x2539);
        if (unaff_x27[0x56] == 0) {
          in_stack_00000600 = (long *)0x0;
          if (unaff_x27[0x5c] == 0) goto LAB_10052d8e0;
LAB_10052d8c0:
          FUN_1011ee9ec(&stack0x00002100,unaff_x27 + 0x5c);
        }
        else {
          FUN_1011ee9ec(&stack0x00000600,unaff_x27 + 0x56);
          if (unaff_x27[0x5c] != 0) goto LAB_10052d8c0;
LAB_10052d8e0:
          in_stack_00002100 = (long *)0x0;
        }
        lVar12 = 0;
        if (unaff_x27[0x39] != -0x8000000000000000) {
          lVar12 = unaff_x27[0x3a];
        }
        lVar20 = unaff_x27[0x6e];
        uVar4 = *(undefined4 *)(lVar20 + 0x2510);
        lVar21 = *(long *)(lVar20 + 0x2008);
        lVar18 = 0;
        if (*(long *)(lVar20 + 0x1ff8) != -0x8000000000000000) {
          lVar18 = *(long *)(lVar20 + 0x2000);
        }
        unaff_x27[0xb9] = lVar22;
        unaff_x27[0xba] = lVar23;
        unaff_x27[0xbb] = lVar27;
        unaff_x27[0xbc] = lVar28;
        unaff_x27[0xbd] = unaff_x27[5];
        unaff_x27[0xbe] = unaff_x27[6];
        unaff_x27[0xc0] = (long)in_stack_00000608;
        unaff_x27[0xbf] = (long)in_stack_00000600;
        unaff_x27[0xc2] = (long)in_stack_00000618;
        unaff_x27[0xc1] = (long)in_stack_00000610;
        unaff_x27[0xc4] = in_stack_00000628;
        unaff_x27[0xc3] = in_stack_00000620;
        unaff_x27[0xc6] = (long)in_stack_00002108;
        unaff_x27[0xc5] = (long)in_stack_00002100;
        unaff_x27[200] = (long)in_stack_00002118;
        unaff_x27[199] = (long)in_stack_00002110;
        unaff_x27[0xca] = in_stack_00002128;
        unaff_x27[0xc9] = in_stack_00002120;
        unaff_x27[0xcb] = unaff_x27[0x62];
        unaff_x27[0xcc] = unaff_x27[99];
        unaff_x27[0xcd] = lVar12;
        unaff_x27[0xce] = unaff_x27[0x3b];
        unaff_x27[0xcf] = lVar18;
        unaff_x27[0xd0] = lVar21;
        *in_stack_000000c0 = uVar4;
        *(undefined1 *)(in_stack_000000c0 + 1) = uVar15;
        *(undefined1 *)((long)in_stack_000000c0 + 5) = 0;
        plVar16 = unaff_x27 + 0xb9;
        in_stack_00000150 = (char *)in_stack_00002100;
        in_stack_00000158 = in_stack_00002108;
        in_stack_00000160 = in_stack_00002110;
        in_stack_00000168 = in_stack_00002118;
        in_stack_00000170 = in_stack_00002120;
        in_stack_00000178 = in_stack_00002128;
        auVar33 = FUN_100a40794(plVar16);
        plVar24 = auVar33._8_8_;
        if ((auVar33._0_8_ & 1) != 0) {
          uVar26 = 1;
          uVar15 = 7;
          goto LAB_10052ea70;
        }
        unaff_x27[0xb4] = (long)plVar24;
        if (*(char *)((long)in_stack_000000c0 + 5) == '\x03') {
          FUN_100d03a44(unaff_x27 + 0xd1);
LAB_10052da24:
          plVar24 = (long *)unaff_x27[0xb4];
        }
        else if (*(char *)((long)in_stack_000000c0 + 5) == '\0') {
          if (unaff_x27[0xbf] != 0) {
            FUN_100cb56bc(unaff_x27 + 0xbf);
          }
          if (unaff_x27[0xc5] != 0) {
            FUN_100cb56bc(unaff_x27 + 0xc5);
          }
          goto LAB_10052da24;
        }
        if (plVar24 != (long *)0x0) {
          unaff_x27[0xb9] = (long)plVar24;
          if ((char)unaff_x27[7] == '\x02') {
            puVar9 = (undefined8 *)0x5bd684223bac086b;
            in_stack_00002100 = (long *)0x611250da3c9dec41;
            lVar22 = (**(code **)(*plVar24 + 0x20))(plVar24,&stack0x00002100);
            if (lVar22 == 0) goto LAB_10052db68;
            lVar23 = unaff_x27[0x6e];
            uVar15 = *(undefined1 *)(lVar23 + 0x2539);
            *(undefined2 *)(unaff_x27 + 0xb8) = 0;
            lVar22 = 0;
            if (unaff_x27[0x39] != -0x8000000000000000) {
              lVar22 = unaff_x27[0x3a];
            }
            uVar4 = *(undefined4 *)(lVar23 + 0x2510);
            lVar28 = *(long *)(lVar23 + 0x2008);
            lVar27 = 0;
            if (*(long *)(lVar23 + 0x1ff8) != -0x8000000000000000) {
              lVar27 = *(long *)(lVar23 + 0x2000);
            }
            unaff_x27[0xbb] = unaff_x27[0xb3];
            unaff_x27[0xba] = unaff_x27[0xb2];
            unaff_x27[0xbc] = unaff_x27[0x51];
            unaff_x27[0xbd] = unaff_x27[0x52];
            unaff_x27[0xbe] = 8;
            unaff_x27[0xbf] = 0;
            unaff_x27[0xc5] = unaff_x27[0x5b];
            unaff_x27[0xc4] = unaff_x27[0x5a];
            unaff_x27[0xc3] = unaff_x27[0x59];
            unaff_x27[0xc2] = unaff_x27[0x58];
            unaff_x27[0xc1] = unaff_x27[0x57];
            unaff_x27[0xc0] = unaff_x27[0x56];
            unaff_x27[0xcb] = unaff_x27[0x61];
            unaff_x27[0xca] = unaff_x27[0x60];
            unaff_x27[0xc9] = unaff_x27[0x5f];
            unaff_x27[200] = unaff_x27[0x5e];
            unaff_x27[199] = unaff_x27[0x5d];
            unaff_x27[0xc6] = unaff_x27[0x5c];
            unaff_x27[0xcc] = unaff_x27[0x62];
            unaff_x27[0xcd] = unaff_x27[99];
            unaff_x27[0xce] = lVar22;
            unaff_x27[0xcf] = unaff_x27[0x3b];
            unaff_x27[0xd0] = lVar27;
            unaff_x27[0xd1] = lVar28;
            in_stack_000000c0[2] = uVar4;
            *(undefined1 *)(in_stack_000000c0 + 3) = uVar15;
            *(undefined1 *)((long)in_stack_000000c0 + 0xd) = 0;
            auVar33 = FUN_100a40794(unaff_x27 + 0xba);
            if ((auVar33._0_8_ & 1) != 0) {
              uVar26 = 1;
              uVar15 = 8;
              goto LAB_10052ea70;
            }
            if (*(char *)((long)in_stack_000000c0 + 0xd) == '\x03') {
              FUN_100d03a44(unaff_x27 + 0xd2);
            }
            else if (*(char *)((long)in_stack_000000c0 + 0xd) == '\0') {
              if (unaff_x27[0xc0] != 0) {
                FUN_100cb56bc(unaff_x27 + 0xc0);
              }
              if (unaff_x27[0xc6] != 0) {
                FUN_100cb56bc(unaff_x27 + 0xc6);
              }
            }
            if (auVar33._8_8_ != (undefined8 *)0x0) {
              if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                  ((bRam000000010b62a018 - 1 < 2 ||
                   ((bRam000000010b62a018 != 0 &&
                    (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                       (&
                                        __ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h69b0ff075f794641E
                                       ), cVar7 != '\0')))))) &&
                 (uVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                     (
                                     ___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h69b0ff075f794641E
                                     ), (uVar11 & 1) != 0)) {
                in_stack_00000600 = unaff_x27 + 0xb1;
                in_stack_00000608 = (undefined8 *)&DAT_10112965c;
                in_stack_00000610 = (long *)&stack0x00000578;
                in_stack_00000618 =
                     __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
                ;
                __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                          (___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h69b0ff075f794641E
                           ,&stack0x00000300);
                lVar22 = 
                ___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h69b0ff075f794641E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  in_stack_00000158 =
                       *(undefined8 **)
                        (
                        ___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h69b0ff075f794641E
                        + 0x20);
                  in_stack_00000160 =
                       *(long **)(
                                 ___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h69b0ff075f794641E
                                 + 0x28);
                  in_stack_00000150 = (char *)0x2;
                  puVar2 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar2 = &UNK_10b3c24c8;
                  }
                  puVar3 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar3 = &UNK_109adfc03;
                  }
                  iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000150);
                  plVar24 = in_stack_00000160;
                  puVar10 = in_stack_00000158;
                  plVar16 = (long *)in_stack_00000150;
                  if (iVar8 != 0) {
                    in_stack_00002120 = *(long *)(lVar22 + 0x60);
                    in_stack_00002128 = *(long *)(lVar22 + 0x68);
                    puVar9 = *(undefined8 **)(lVar22 + 0x50);
                    in_stack_00002110 = *(long **)(lVar22 + 0x58);
                    in_stack_00002100 = (long *)0x1;
                    if (puVar9 == (undefined8 *)0x0) {
                      in_stack_00002100 = (long *)0x2;
                    }
                    in_stack_00002148 = *(undefined4 *)(lVar22 + 8);
                    in_stack_0000214c = *(undefined4 *)(lVar22 + 0xc);
                    in_stack_00000110 = &stack0x000004b0;
                    in_stack_00000118 = (undefined8 *)&DAT_1061c2098;
                    in_stack_00002118 = (code *)0x1;
                    if (in_stack_00002120 == 0) {
                      in_stack_00002118 = (code *)0x2;
                    }
                    in_stack_00002158 = &stack0x00000110;
                    in_stack_00002150 = s__108b39f4f;
                    (**(code **)(puVar2 + 0x20))(puVar3,&stack0x00002100);
                    in_stack_00002130 = plVar16;
                    in_stack_00002138 = puVar10;
                    in_stack_00002140 = plVar24;
                  }
                }
              }
              else {
                lVar22 = 
                ___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h69b0ff075f794641E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  puVar10 = *(undefined8 **)
                             (
                             ___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h69b0ff075f794641E
                             + 0x20);
                  plVar16 = *(long **)(
                                      ___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h69b0ff075f794641E
                                      + 0x28);
                  puVar2 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar2 = &UNK_10b3c24c8;
                  }
                  puVar3 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar3 = &UNK_109adfc03;
                  }
                  iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000590);
                  if (iVar8 != 0) {
                    in_stack_00000600 = unaff_x27 + 0xb1;
                    in_stack_00000608 = (undefined8 *)&DAT_10112965c;
                    in_stack_00000610 = (long *)&stack0x00000578;
                    in_stack_00000618 =
                         __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
                    ;
                    in_stack_00002130 = (long *)0x2;
                    in_stack_00002120 = *(long *)(lVar22 + 0x60);
                    in_stack_00002128 = *(long *)(lVar22 + 0x68);
                    puVar9 = *(undefined8 **)(lVar22 + 0x50);
                    in_stack_00002110 = *(long **)(lVar22 + 0x58);
                    in_stack_00002100 = (long *)0x1;
                    if (puVar9 == (undefined8 *)0x0) {
                      in_stack_00002100 = (long *)0x2;
                    }
                    in_stack_00002148 = *(undefined4 *)(lVar22 + 8);
                    in_stack_0000214c = *(undefined4 *)(lVar22 + 0xc);
                    in_stack_00000110 = &stack0x00000300;
                    in_stack_00000118 = (undefined8 *)CONCAT71(in_stack_00000118._1_7_,1);
                    in_stack_00000150 = (char *)&stack0x00000110;
                    in_stack_00000158 = (undefined8 *)&DAT_1061c2098;
                    in_stack_00002118 = (code *)0x1;
                    if (in_stack_00002120 == 0) {
                      in_stack_00002118 = (code *)0x2;
                    }
                    in_stack_00002158 = &stack0x00000150;
                    in_stack_00002150 = s__108b39f4f;
                    (**(code **)(puVar2 + 0x20))(puVar3,&stack0x00002100);
                    in_stack_00002138 = puVar10;
                    in_stack_00002140 = plVar16;
                  }
                }
              }
              (**(code **)*auVar33._8_8_)();
            }
          }
          else {
LAB_10052db68:
            if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                ((bRam000000010b629fe8 - 1 < 2 ||
                 ((bRam000000010b629fe8 != 0 &&
                  (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                     (&
                                      __ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1825532470a91deeE
                                     ), cVar7 != '\0')))))) &&
               (uVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1825532470a91deeE
                                   ), (uVar11 & 1) != 0)) {
              in_stack_00000618 =
                   (code *)(
                           ___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1825532470a91deeE
                           + 0x30);
              in_stack_00002100 = unaff_x27 + 0xb1;
              puVar9 = (undefined8 *)&DAT_10112965c;
              in_stack_00002118 =
                   __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
              ;
              in_stack_00000158 = (undefined8 *)&stack0x00002100;
              in_stack_00000150 = s__failed_to_login_to_MCP_dependen_108ac073a;
              in_stack_00000110 = (char *)&stack0x00000150;
              in_stack_00000118 = (undefined8 *)&UNK_10b208fd0;
              in_stack_00000608 = &stack0x00000110;
              in_stack_00000600 = (long *)0x1;
              in_stack_00000610 = (long *)0x1;
              __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                        (___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1825532470a91deeE
                         ,&stack0x00000600);
              lVar22 = 
              ___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1825532470a91deeE
              ;
              in_stack_00002110 = plVar16;
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
                iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000300);
                if (iVar8 != 0) {
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar22,puVar3,puVar2,&stack0x00000300,&stack0x00000600);
                }
              }
            }
            else {
              lVar22 = 
              ___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1825532470a91deeE
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                puVar10 = *(undefined8 **)
                           (
                           ___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1825532470a91deeE
                           + 0x20);
                plVar24 = *(long **)(
                                    ___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1825532470a91deeE
                                    + 0x28);
                puVar2 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_10b3c24c8;
                }
                puVar3 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar3 = &UNK_109adfc03;
                }
                iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x000005a8);
                if (iVar8 != 0) {
                  in_stack_00000600 = unaff_x27 + 0xb1;
                  in_stack_00000608 = (undefined8 *)&DAT_10112965c;
                  in_stack_00000618 =
                       __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
                  ;
                  in_stack_00002130 = (long *)0x2;
                  in_stack_00002120 = *(long *)(lVar22 + 0x60);
                  in_stack_00002128 = *(long *)(lVar22 + 0x68);
                  puVar9 = *(undefined8 **)(lVar22 + 0x50);
                  in_stack_00002110 = *(long **)(lVar22 + 0x58);
                  in_stack_00002100 = (long *)0x1;
                  if (puVar9 == (undefined8 *)0x0) {
                    in_stack_00002100 = (long *)0x2;
                  }
                  in_stack_00002148 = *(undefined4 *)(lVar22 + 8);
                  in_stack_0000214c = *(undefined4 *)(lVar22 + 0xc);
                  in_stack_00000110 = &stack0x00000300;
                  in_stack_00000118 = (undefined8 *)CONCAT71(in_stack_00000118._1_7_,1);
                  in_stack_00000150 = (char *)&stack0x00000110;
                  in_stack_00000158 = (undefined8 *)&DAT_1061c2098;
                  in_stack_00002118 = (code *)0x1;
                  if (in_stack_00002120 == 0) {
                    in_stack_00002118 = (code *)0x2;
                  }
                  in_stack_00002158 = &stack0x00000150;
                  in_stack_00002150 = s__108b39f4f;
                  (**(code **)(puVar2 + 0x20))(puVar3,&stack0x00002100);
                  in_stack_00000610 = plVar16;
                  in_stack_00002138 = puVar10;
                  in_stack_00002140 = plVar24;
                }
              }
            }
          }
          (*(code *)**(undefined8 **)unaff_x27[0xb9])();
        }
        lVar22 = unaff_x27[5];
        lVar23 = unaff_x27[6];
        if (lVar23 != 0) {
          puVar10 = (undefined8 *)(lVar22 + 8);
          do {
            if (puVar10[-1] != 0) {
              _free(*puVar10);
            }
            puVar10 = puVar10 + 3;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
        }
        if (unaff_x27[4] != 0) {
          _free(lVar22);
        }
        if (unaff_x27[0x50] != 0) {
          _free(unaff_x27[0x51]);
        }
        if (((*(byte *)((long)unaff_x27 + 0x5c1) & 1) != 0) && (unaff_x27[0x56] != 0)) {
          FUN_100cb56bc(unaff_x27 + 0x56);
        }
        if (((*(byte *)(unaff_x27 + 0xb8) & 1) != 0) && (unaff_x27[0x5c] != 0)) {
          FUN_100cb56bc(unaff_x27 + 0x5c);
        }
        lVar22 = unaff_x27[0x53];
        if (lVar22 != -0x8000000000000000) {
          lVar27 = unaff_x27[0x54];
          lVar23 = unaff_x27[0x55];
          if (lVar23 != 0) {
            puVar10 = (undefined8 *)(lVar27 + 8);
            do {
              if (puVar10[-1] != 0) {
                _free(*puVar10);
              }
              puVar10 = puVar10 + 3;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
          }
          if (lVar22 != 0) {
            _free(lVar27);
          }
        }
      }
      *(undefined2 *)(unaff_x27 + 0xb8) = 0;
      FUN_100e0ea40(unaff_x27 + 0x1a);
      in_stack_00002108 = puVar9;
      if (unaff_x27[0xb1] != 0) {
        _free(unaff_x27[0xb2]);
      }
    }
    unaff_x27[0x7b] = 2;
    plVar25 = plVar24;
joined_r0x00010052e480:
    uVar11 = (long)plVar16 - (long)plVar25;
    if (uVar11 != 0) {
      uVar11 = uVar11 / 0x1c8;
      plVar25 = plVar25 + 3;
      do {
        if (plVar25[-3] != 0) {
          _free(plVar25[-2]);
        }
        FUN_100e0ea40(plVar25);
        plVar25 = plVar25 + 0x39;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (unaff_x27[2] != 0) {
      _free(*unaff_x27);
    }
    unaff_x27[0xb9] = *(long *)(unaff_x27[0x6c] + 0x3a8) + 0x10;
    unaff_x27[0xba] = unaff_x27[0x6e];
    *unaff_x25 = '\0';
    FUN_10052f26c(&stack0x000005d0,unaff_x27 + 0xb9);
    uVar26 = 1;
    if (in_stack_000005d0 == 0) {
      uVar15 = 9;
      goto LAB_10052ea70;
    }
    *(undefined1 *)((long)unaff_x27 + 0x5c5) = 1;
    unaff_x27[0x65] = in_stack_000005d8;
    unaff_x27[100] = in_stack_000005d0;
    unaff_x27[0x67] = in_stack_000005e8;
    unaff_x27[0x66] = in_stack_000005e0;
    unaff_x27[0x69] = in_stack_000005f8;
    unaff_x27[0x68] = in_stack_000005f0;
    if (*unaff_x25 == '\x03') {
      FUN_100e6adb8(unaff_x27 + 0xbb);
    }
    lVar22 = unaff_x27[0x72];
    if ((lVar22 != 0) && (lVar23 = unaff_x27[0x74], lVar23 != 0)) {
      lVar27 = 0;
      uVar11 = unaff_x27[0x73];
      do {
        if (lVar27 == 0) {
          for (; lVar27 = lVar22, uVar11 != 0; uVar11 = uVar11 - 1) {
            lVar22 = *(long *)(lVar27 + 0x13a8);
          }
          lVar22 = 0;
          uVar11 = 0;
          lVar28 = lVar27;
          if (*(short *)(lVar27 + 0x13a2) == 0) goto LAB_10052e690;
        }
        else {
          lVar28 = lVar27;
          if (*(ushort *)(lVar27 + 0x13a2) <= uVar11) {
LAB_10052e690:
            do {
              lVar27 = *(long *)(lVar28 + 0x1290);
              if (lVar27 == 0) {
                FUN_107c05cb0(&UNK_10b2382c8);
                goto LAB_10052d4ac;
              }
              lVar22 = lVar22 + 1;
              puVar1 = (ushort *)(lVar28 + 0x13a0);
              uVar11 = (ulong)*puVar1;
              lVar28 = lVar27;
            } while (*(ushort *)(lVar27 + 0x13a2) <= *puVar1);
          }
        }
        uVar31 = uVar11 + 1;
        if (lVar22 == 0) {
          lVar22 = lVar27 + uVar11 * 0x18;
          uVar26 = *(undefined8 *)(lVar22 + 0x12a0);
          lVar22 = *(long *)(lVar22 + 0x12a8);
          lVar28 = lVar27;
          if (lVar22 == 0) goto LAB_10052e714;
LAB_10052e6e8:
          lVar12 = _malloc(lVar22);
          if (lVar12 == 0) {
            FUN_107c03c64(1,lVar22);
            goto LAB_10052d4ac;
          }
        }
        else {
          lVar28 = lVar27 + uVar31 * 8;
          do {
            lVar28 = *(long *)(lVar28 + 0x13a8);
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          uVar31 = 0;
          lVar22 = lVar27 + uVar11 * 0x18;
          uVar26 = *(undefined8 *)(lVar22 + 0x12a0);
          lVar22 = *(long *)(lVar22 + 0x12a8);
          if (lVar22 != 0) goto LAB_10052e6e8;
LAB_10052e714:
          lVar12 = 1;
        }
        lVar23 = lVar23 + -1;
        _memcpy(lVar12,uVar26,lVar22);
        uVar13 = FUN_100e8dd9c(in_stack_000000b8[0x68],in_stack_000000b8[0x69],lVar12,lVar22);
        lVar18 = 0;
        uVar29 = in_stack_000000b8[0x65];
        lVar20 = in_stack_000000b8[100];
        bVar6 = (byte)(uVar13 >> 0x38);
        bVar14 = bVar6 >> 1;
        uVar30 = uVar13 & uVar29;
        uVar26 = *(undefined8 *)(lVar20 + uVar30);
        uVar19 = CONCAT17(-((byte)((ulong)uVar26 >> 0x38) == bVar14),
                          CONCAT16(-((byte)((ulong)uVar26 >> 0x30) == bVar14),
                                   CONCAT15(-((byte)((ulong)uVar26 >> 0x28) == bVar14),
                                            CONCAT14(-((byte)((ulong)uVar26 >> 0x20) == bVar14),
                                                     CONCAT13(-((byte)((ulong)uVar26 >> 0x18) ==
                                                               bVar14),CONCAT12(-((byte)((ulong)
                                                  uVar26 >> 0x10) == bVar14),
                                                  CONCAT11(-((byte)((ulong)uVar26 >> 8) == bVar14),
                                                           -((byte)uVar26 == bVar14))))))));
        while( true ) {
          for (uVar19 = uVar19 & 0x8080808080808080; uVar19 != 0; uVar19 = uVar19 - 1 & uVar19) {
            uVar5 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
            lVar21 = lVar20 + (uVar30 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) &
                              uVar29) * -0x1c8;
            if ((*(long *)(lVar21 + -0x1b8) == lVar22) &&
               (iVar8 = _memcmp(*(undefined8 *)(lVar21 + -0x1c0),lVar12,lVar22), iVar8 == 0)) {
              if (lVar22 != 0) {
                _free(lVar12);
              }
              goto LAB_10052e648;
            }
          }
          bVar32 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar26 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar26 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar26 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar26 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar26 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar26 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar26 >> 8) ==
                                                                     -1),-((char)uVar26 == -1)))))))
                                      ),1);
          if ((bVar32 & 1) != 0) break;
          lVar18 = lVar18 + 8;
          uVar30 = uVar30 + lVar18 & uVar29;
          uVar26 = *(undefined8 *)(lVar20 + uVar30);
          uVar19 = CONCAT17(-((byte)((ulong)uVar26 >> 0x38) == bVar14),
                            CONCAT16(-((byte)((ulong)uVar26 >> 0x30) == bVar14),
                                     CONCAT15(-((byte)((ulong)uVar26 >> 0x28) == bVar14),
                                              CONCAT14(-((byte)((ulong)uVar26 >> 0x20) == bVar14),
                                                       CONCAT13(-((byte)((ulong)uVar26 >> 0x18) ==
                                                                 bVar14),CONCAT12(-((byte)((ulong)
                                                  uVar26 >> 0x10) == bVar14),
                                                  CONCAT11(-((byte)((ulong)uVar26 >> 8) == bVar14),
                                                           -((byte)uVar26 == bVar14))))))));
        }
        if (in_stack_000000b8[0x66] == 0) {
          __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17ha6c039ef7ad51686E
                    (in_stack_000000b8 + 100,1,in_stack_000000b8 + 0x68,1);
        }
        if (lVar22 != -0x8000000000000000) {
          FUN_1011d04d8(&stack0x00002100,lVar27 + uVar11 * 0x1b0);
          plVar16 = (long *)in_stack_000000b8[100];
          uVar11 = in_stack_000000b8[0x65];
          uVar13 = uVar11 & uVar13;
          lVar27 = *(long *)((long)plVar16 + uVar13);
          uVar19 = CONCAT17(-(lVar27 < 0),
                            CONCAT16(-((char)((ulong)lVar27 >> 0x30) < '\0'),
                                     CONCAT15(-((char)((ulong)lVar27 >> 0x28) < '\0'),
                                              CONCAT14(-((char)((ulong)lVar27 >> 0x20) < '\0'),
                                                       CONCAT13(-((char)((ulong)lVar27 >> 0x18) <
                                                                 '\0'),CONCAT12(-((char)((ulong)
                                                  lVar27 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar27 >> 8) < '\0'),
                                                           -((char)lVar27 < '\0'))))))));
          if (uVar19 == 0) {
            lVar27 = 8;
            do {
              uVar13 = uVar13 + lVar27 & uVar11;
              lVar18 = *(long *)((long)plVar16 + uVar13);
              uVar19 = CONCAT17(-(lVar18 < 0),
                                CONCAT16(-((char)((ulong)lVar18 >> 0x30) < '\0'),
                                         CONCAT15(-((char)((ulong)lVar18 >> 0x28) < '\0'),
                                                  CONCAT14(-((char)((ulong)lVar18 >> 0x20) < '\0'),
                                                           CONCAT13(-((char)((ulong)lVar18 >> 0x18)
                                                                     < '\0'),CONCAT12(-((char)((
                                                  ulong)lVar18 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar18 >> 8) < '\0'),
                                                           -((char)lVar18 < '\0'))))))));
              lVar27 = lVar27 + 8;
            } while (uVar19 == 0);
          }
          uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
          uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
          uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
          uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
          uVar30 = uVar13 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3) & uVar11;
          uVar19 = (ulong)*(char *)((long)plVar16 + uVar30);
          if (-1 < *(char *)((long)plVar16 + uVar30)) {
            lVar27 = *plVar16;
            uVar19 = CONCAT17(-(lVar27 < 0),
                              CONCAT16(-((char)((ulong)lVar27 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar27 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar27 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar27 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar27 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar27 >> 8) < '\0'),
                                                           -((char)lVar27 < '\0'))))))));
            uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
            uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
            uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
            uVar30 = (ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3;
            uVar19 = (ulong)*(byte *)((long)plVar16 + uVar30);
          }
          bVar6 = bVar6 >> 1;
          *(byte *)((long)plVar16 + uVar30) = bVar6;
          *(byte *)((long)plVar16 + (uVar30 - 8 & uVar11) + 8) = bVar6;
          in_stack_000000b8[0x66] = in_stack_000000b8[0x66] - (uVar19 & 1);
          plVar16[uVar30 * -0x39 + -0x39] = lVar22;
          plVar16[uVar30 * -0x39 + -0x38] = lVar12;
          plVar16[uVar30 * -0x39 + -0x37] = lVar22;
          _memcpy(plVar16 + uVar30 * -0x39 + -0x36,&stack0x00002100,0x1b0);
          in_stack_000000b8[0x67] = in_stack_000000b8[0x67] + 1;
        }
LAB_10052e648:
        lVar22 = 0;
        lVar27 = lVar28;
        unaff_x27 = in_stack_000000b8;
        uVar11 = uVar31;
      } while (lVar23 != 0);
    }
    lVar27 = unaff_x27[0x6c];
    lVar28 = unaff_x27[0x6d];
    *(undefined1 *)((long)unaff_x27 + 0x5c5) = 0;
    cVar7 = *(char *)(unaff_x27[0x6e] + 0x2539);
    *(undefined1 *)((long)unaff_x27 + 0x5c4) = 0;
    lVar22 = unaff_x27[0xc];
    lVar23 = unaff_x27[0xd];
    _memcpy(&stack0x00000600,&stack0x00002100,0x1b00);
    unaff_x27[0xb9] = lVar22;
    unaff_x27[0xba] = lVar23;
    _memcpy(unaff_x27 + 0xbb,&stack0x00000600,0x1b00);
    unaff_x27[0x41b] = lVar27;
    unaff_x27[0x41c] = lVar28;
    unaff_x25[0x488] = '\0';
    unaff_x25[0x489] = cVar7;
    unaff_x27[0xe3] = lVar22;
    unaff_x27[0xe4] = lVar23;
    _memcpy(unaff_x27 + 0xe5,&stack0x00002100,0x160);
    unaff_x27[0x13d] = lVar27;
    unaff_x27[0x13e] = lVar28;
    *(undefined1 *)((long)unaff_x27 + 0xa01) = 0;
    *(char *)((long)unaff_x27 + 0xa02) = cVar7;
    uVar11 = FUN_100579fcc(unaff_x27 + 0xbb,in_stack_000000a0);
    if ((uVar11 & 1) != 0) {
      unaff_x25[0x488] = '\x03';
      uVar26 = 1;
      uVar15 = 10;
      goto LAB_10052ea70;
    }
    FUN_100d5e848(unaff_x27 + 0xbb);
    unaff_x25[0x488] = '\x01';
    *(undefined1 *)((long)unaff_x27 + 0x5c5) = 0;
    *(undefined1 *)((long)unaff_x27 + 0x5c3) = 0;
    while (FUN_100f3b35c(&stack0x00000600,&stack0x00002100), in_stack_00000600 != (long *)0x0) {
      if (in_stack_00000600[(long)in_stack_00000610 * 3 + 0x253] != 0) {
        _free(in_stack_00000600[(long)in_stack_00000610 * 3 + 0x254]);
      }
      FUN_100e0ea40(in_stack_00000600 + (long)in_stack_00000610 * 0x36);
    }
    *(undefined1 *)((long)unaff_x27 + 0x5c2) = 0;
    FUN_100cf8c18(unaff_x27 + 0xe);
    if (unaff_x27[0x6f] != 0) {
      _free(unaff_x27[0x70]);
    }
  }
  else {
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
       (((bRam000000010b62a000 - 1 < 2 ||
         ((bRam000000010b62a000 != 0 &&
          (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h24f883c306f7a914E
                             ), unaff_x27 = in_stack_000000b8, cVar7 != '\0')))) &&
        (uVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h24f883c306f7a914E
                            ), (uVar11 & 1) != 0)))) {
      in_stack_00000158 = (undefined8 *)&stack0x00000300;
      in_stack_00000150 = s_9failed_to_persist_MCP_dependenc_108ac06fe;
      in_stack_00000110 = (char *)&stack0x00000150;
      in_stack_00000118 = (undefined8 *)&UNK_10b208fd0;
      FUN_10052eeac(&stack0x00002100);
    }
    else {
      lVar22 = 
      ___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h24f883c306f7a914E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar26 = *(undefined8 *)
                  (
                  ___ZN10codex_core22mcp_skill_dependencies30maybe_install_mcp_dependencies28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h24f883c306f7a914E
                  + 0x20);
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x000004c8);
        if (iVar8 != 0) {
          in_stack_00000150 = &stack0x000005c0;
          in_stack_00000158 =
               (undefined8 *)
               &
               __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
          ;
          in_stack_00000118 = &stack0x00000150;
          in_stack_00000110 = s_9failed_to_persist_MCP_dependenc_108ac06fe;
          unaff_x26[1] = uVar26;
          *unaff_x26 = 2;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar22,puVar3,puVar2,&stack0x00000300,&stack0x00002100);
        }
      }
    }
    if (((long)puVar10 + 1U & 3) == 1) {
      uVar26 = *puVar10;
      puVar9 = (undefined8 *)puVar10[1];
      pcVar17 = (code *)*puVar9;
      if (pcVar17 != (code *)0x0) {
        (*pcVar17)(uVar26);
      }
      if (puVar9[1] != 0) {
        _free(uVar26);
      }
      _free(puVar10);
    }
    lVar23 = unaff_x27[0x76];
    lVar22 = unaff_x27[0x77];
    if (lVar22 != 0) {
      lVar27 = lVar23 + 0x18;
      do {
        if (*(long *)(lVar27 + -0x18) != 0) {
          _free(*(undefined8 *)(lVar27 + -0x10));
        }
        FUN_100e0ea40(lVar27);
        lVar27 = lVar27 + 0x1c8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
    if (unaff_x27[0x75] != 0) {
      _free(lVar23);
    }
    *(undefined1 *)((long)unaff_x27 + 0x5c3) = 0;
    while (FUN_100f3b35c(&stack0x00000600,&stack0x00002100), in_stack_00000600 != (long *)0x0) {
      if (in_stack_00000600[(long)in_stack_00000610 * 3 + 0x253] != 0) {
        _free(in_stack_00000600[(long)in_stack_00000610 * 3 + 0x254]);
      }
      FUN_100e0ea40(in_stack_00000600 + (long)in_stack_00000610 * 0x36);
    }
    if ((*(byte *)((long)unaff_x27 + 0x5c2) & 1) != 0) {
      FUN_100cf8c18(unaff_x27 + 0x14);
    }
    *(undefined1 *)((long)unaff_x27 + 0x5c2) = 0;
    FUN_100cf8c18(unaff_x27 + 0xe);
    if (unaff_x27[0x6f] != 0) {
      _free(unaff_x27[0x70]);
    }
    plVar16 = (long *)unaff_x27[0xc];
    if (plVar16 != (long *)0x0) {
      lVar22 = *plVar16;
      *plVar16 = lVar22 + -1;
      LORelease();
      if (lVar22 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h889d73266575641eE();
      }
    }
  }
  uVar26 = 0;
  *(undefined1 *)((long)unaff_x27 + 0x5c4) = 0;
  uVar15 = 1;
LAB_10052ea70:
  *(undefined1 *)((long)unaff_x27 + 0x5c6) = uVar15;
  return uVar26;
}

