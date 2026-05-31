
/* WARNING: Removing unreachable block (ram,0x000100977758) */
/* WARNING: Removing unreachable block (ram,0x00010097778c) */
/* WARNING: Removing unreachable block (ram,0x0001009777b4) */
/* WARNING: Removing unreachable block (ram,0x0001009777bc) */
/* WARNING: Removing unreachable block (ram,0x000100977610) */
/* WARNING: Removing unreachable block (ram,0x000100977644) */
/* WARNING: Removing unreachable block (ram,0x00010097766c) */
/* WARNING: Removing unreachable block (ram,0x000100977674) */
/* WARNING: Removing unreachable block (ram,0x0001009777c8) */
/* WARNING: Removing unreachable block (ram,0x0001009777dc) */
/* WARNING: Removing unreachable block (ram,0x0001009777e8) */
/* WARNING: Removing unreachable block (ram,0x0001009777f8) */
/* WARNING: Removing unreachable block (ram,0x000100977808) */
/* WARNING: Removing unreachable block (ram,0x000100977810) */
/* WARNING: Removing unreachable block (ram,0x000100977824) */
/* WARNING: Removing unreachable block (ram,0x00010097782c) */
/* WARNING: Removing unreachable block (ram,0x000100977818) */
/* WARNING: Removing unreachable block (ram,0x000100977838) */
/* WARNING: Removing unreachable block (ram,0x00010097783c) */
/* WARNING: Removing unreachable block (ram,0x000100977844) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100976f54(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  code *pcVar10;
  char cVar11;
  int iVar12;
  ulong *puVar13;
  undefined1 uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar18;
  long lVar19;
  long unaff_x26;
  long *unaff_x28;
  long *plVar20;
  long lVar21;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 *in_stack_00000168;
  undefined *in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  long *in_stack_00000188;
  char *in_stack_00000190;
  undefined1 *in_stack_00000198;
  long in_stack_00008618;
  undefined8 in_stack_00008620;
  undefined8 in_stack_00008628;
  
code_r0x000100976f54:
  *unaff_x28 = (long)&stack0x00000398;
  unaff_x28[1] = (long)&UNK_10b208fd0;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00005a88);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar18 = *unaff_x20;
    puVar3 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_10b3c24c8;
    }
    puVar4 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_109adfc03;
    }
    iVar12 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00002f10);
    if (iVar12 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar18,puVar4,puVar3,&stack0x00002f10,&stack0x00005a88);
    }
  }
LAB_10097744c:
  (*(code *)**(undefined8 **)unaff_x28[0x56e])();
  do {
    FUN_100e0ea40(unaff_x19 + 0xa8);
    *(undefined1 *)(unaff_x19 + 0x124) = 0;
    if (unaff_x19[0x11f] != 0) {
      _free(unaff_x19[0x120]);
    }
    *(undefined1 *)((long)unaff_x19 + 0x921) = 0;
    if (unaff_x19[0xa7] == 0) {
      unaff_x19[0xe9] = 2;
LAB_100977488:
      func_0x000100d08108(unaff_x19 + 0xa0);
      uVar18 = 0;
      uVar14 = 1;
LAB_1009774a4:
      *(undefined1 *)((long)unaff_x19 + 0x922) = uVar14;
      return uVar18;
    }
    uVar16 = unaff_x19[0xa4];
    lVar15 = unaff_x19[0xa3];
    if (uVar16 == 0) {
      plVar20 = (long *)unaff_x19[0xa5];
      do {
        plVar17 = plVar20 + 1;
        lVar21 = *plVar20;
        lVar15 = lVar15 + -0xe40;
        uVar16 = CONCAT17(-(-1 < lVar21),
                          CONCAT16(-(-1 < (char)((ulong)lVar21 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar21 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar21 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar21 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar21
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar21 >> 8)),-(-1 < (char)lVar21)))))))) &
                 0x8080808080808080;
        plVar20 = plVar17;
      } while (uVar16 == 0);
      unaff_x19[0xa5] = (long)plVar17;
      unaff_x19[0xa3] = lVar15;
    }
    uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    unaff_x19[0xa4] = uVar16 - 1 & uVar16;
    unaff_x19[0xa7] = unaff_x19[0xa7] + -1;
    _memmove(unaff_x19 + 0xe6,
             lVar15 + (long)-(int)((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) * 0x1c8 +
             -0x1c8,0x1c8);
    if (unaff_x19[0xe9] == 2) goto LAB_100977488;
    unaff_x19[0x120] = unaff_x19[0xe7];
    unaff_x19[0x11f] = unaff_x19[0xe6];
    unaff_x19[0x121] = unaff_x19[0xe8];
    *(undefined2 *)(unaff_x19 + 0x124) = 0x101;
    _memcpy(unaff_x19 + 0xa8,unaff_x19 + 0xe9,0x1b0);
    *unaff_x19 = (long)(unaff_x19 + 0xa8);
    *(undefined1 *)(unaff_x19 + 0x9f) = 0;
    FUN_1016483c4(&stack0x00008600);
    lVar15 = *(long *)(unaff_x26 + 0x2b78);
    if (lVar15 == -0x7ffffffffffffffe) {
      uVar18 = 1;
      uVar14 = 3;
      goto LAB_1009774a4;
    }
    lVar21 = *(long *)(unaff_x26 + 0x2b80);
    FUN_100e6b604();
    uVar16 = lVar15 + 0x8000000000000001U & lVar15 >> 0x3f;
    if (uVar16 == 2) break;
    if (uVar16 != 1) {
      if (unaff_x19[0xc4] != -0x8000000000000000) {
        FUN_101146714(&stack0x00005a88,unaff_x19[0xc5],unaff_x19[0xc6]);
      }
      if (in_stack_00008618 == -0x8000000000000000) {
        *(undefined8 *)(unaff_x26 + 0x2b78) = 0x8000000000000000;
      }
      else {
        FUN_101146714(&stack0x00008600,in_stack_00008620,in_stack_00008628);
      }
      __ZN9codex_mcp3mcp4auth20resolve_oauth_scopes17h594097b0b31defecE
                (&stack0x00000168,&stack0x00002f10,&stack0x00005a88,&stack0x00008600);
      lVar15 = unaff_x19[0xe5];
      if (*(long *)(lVar15 + 0x1ff8) != -0x8000000000000000) {
        uVar18 = *(undefined8 *)(lVar15 + 0x2000);
        lVar21 = *(long *)(lVar15 + 0x2008);
        lVar15 = 1;
        if ((lVar21 != 0) && (lVar15 = _malloc(lVar21), lVar15 == 0)) {
          func_0x0001087c9084(1,lVar21);
          goto LAB_1009779b0;
        }
        _memcpy(lVar15,uVar18,lVar21);
      }
      plVar20 = *(long **)(unaff_x19[0xe4] + 0x148);
      lVar15 = *plVar20;
      *plVar20 = lVar15 + 1;
      if (-1 < lVar15) {
        lVar19 = unaff_x19[0x120];
        lVar15 = 1;
        lVar21 = unaff_x19[0x121];
        in_stack_00000188 = plVar20;
        if ((lVar21 == 0) || (lVar15 = _malloc(lVar21), lVar15 != 0)) {
          _memcpy(lVar15,lVar19,lVar21);
          *(undefined2 *)(unaff_x19 + 0x124) = 0;
          _memcpy(&stack0x00000190,unaff_x19 + 0xa8,0x1b0);
          do {
            lVar15 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
            bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
            ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar15;
          } while (bVar1);
          _memcpy(&stack0x000003a8,&stack0x00000190,0x200);
          puVar13 = (ulong *)(*
                             ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                             )();
          if ((char)puVar13[9] == '\x01') {
LAB_1009774e0:
            _memcpy(&stack0x00002f10,&stack0x00000398,0x2b78);
            if (0x7ffffffffffffffe < *puVar13) {
              FUN_107c05c9c(&UNK_10b2435a0);
              goto LAB_1009779b0;
            }
            *puVar13 = *puVar13 + 1;
            uVar16 = puVar13[1];
            _memcpy(&stack0x00005a88,&stack0x00000398,0x2b78);
            if (uVar16 != 2) {
              if ((uVar16 & 1) == 0) {
                plVar20 = (long *)puVar13[2];
                lVar15 = *plVar20;
                *plVar20 = lVar15 + 1;
                if ((-1 < lVar15) &&
                   ((plVar20 = (long *)plVar20[0x5e], plVar20 == (long *)0x0 ||
                    (lVar15 = *plVar20, *plVar20 = lVar15 + 1, -1 < lVar15)))) {
                  _memcpy(&stack0x0000b204,&stack0x00002f20,0x2b68);
                  _memcpy((ulong)&stack0x00008600 | 0x34,&stack0x0000b200,0x2b6c);
                  _posix_memalign(&stack0x0000dd70,0x80,0x2c00);
                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x2c00);
                }
              }
              else {
                plVar20 = (long *)puVar13[2];
                lVar15 = *plVar20;
                *plVar20 = lVar15 + 1;
                if ((-1 < lVar15) &&
                   ((plVar20 = (long *)plVar20[0x4a], plVar20 == (long *)0x0 ||
                    (lVar15 = *plVar20, *plVar20 = lVar15 + 1, -1 < lVar15)))) {
                  _memcpy(&stack0x0000b204,&stack0x00002f20,0x2b68);
                  _memcpy((ulong)&stack0x00008600 | 0x34,&stack0x0000b200,0x2b6c);
                  _posix_memalign(&stack0x0000dd70,0x80,0x2c00);
                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x2c00);
                }
              }
              goto LAB_1009779b0;
            }
            FUN_100d7fcfc(&stack0x00005a98);
            *puVar13 = *puVar13 - 1;
          }
          else {
            if ((char)puVar13[9] != '\x02') {
              __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                        (puVar13,&DAT_100c35d48);
              *(undefined1 *)(puVar13 + 9) = 1;
              goto LAB_1009774e0;
            }
            FUN_100d7fcfc(&stack0x000003a8);
          }
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__108b1bd74,&stack0x00008600,&UNK_10b228e60);
        }
        else {
          func_0x0001087c9084(1,lVar21);
        }
      }
LAB_1009779b0:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1009779b4);
      (*pcVar10)();
    }
  } while( true );
  unaff_x28[0x56e] = lVar21;
  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
    unaff_x20 = (undefined8 *)
                &
                __ZN16codex_app_server18request_processors7plugins22PluginRequestProcessor29start_plugin_mcp_oauth_logins28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h85a1a46effecb896E
    ;
    if (((bRam000000010b627ea0 - 1 < 2) ||
        ((bRam000000010b627ea0 != 0 &&
         (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN16codex_app_server18request_processors7plugins22PluginRequestProcessor29start_plugin_mcp_oauth_logins28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h85a1a46effecb896E
                             ), cVar11 != '\0')))) &&
       (uVar16 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN16codex_app_server18request_processors7plugins22PluginRequestProcessor29start_plugin_mcp_oauth_logins28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h85a1a46effecb896E
                           ), (uVar16 & 1) != 0)) goto code_r0x000100976f20;
  }
  lVar15 = 
  ___ZN16codex_app_server18request_processors7plugins22PluginRequestProcessor29start_plugin_mcp_oauth_logins28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h85a1a46effecb896E
  ;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    in_stack_00000158 =
         *(undefined8 *)
          (
          ___ZN16codex_app_server18request_processors7plugins22PluginRequestProcessor29start_plugin_mcp_oauth_logins28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h85a1a46effecb896E
          + 0x20);
    in_stack_00000160 =
         *(undefined8 *)
          (
          ___ZN16codex_app_server18request_processors7plugins22PluginRequestProcessor29start_plugin_mcp_oauth_logins28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h85a1a46effecb896E
          + 0x28);
    in_stack_00000150 = 2;
    puVar3 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_10b3c24c8;
    }
    puVar4 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_109adfc03;
    }
    iVar12 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000150);
    if (iVar12 != 0) {
      in_stack_00000198 = &stack0x00005a88;
      in_stack_00000190 = s__MCP_server_may_or_may_not_requi_108acc308;
      in_stack_00000168 = &stack0x00000190;
      in_stack_00000170 = &UNK_10b208fd0;
      *(undefined8 *)(unaff_x26 + 0x2bb8) = in_stack_00000160;
      lVar21 = *(long *)(lVar15 + 0x60);
      uVar7 = *(undefined8 *)(lVar15 + 0x68);
      lVar19 = *(long *)(lVar15 + 0x50);
      uVar8 = *(undefined8 *)(lVar15 + 0x58);
      uVar18 = 1;
      if (lVar19 == 0) {
        uVar18 = 2;
      }
      uVar5 = *(undefined4 *)(lVar15 + 8);
      uVar6 = *(undefined4 *)(lVar15 + 0xc);
      *(undefined1 **)(unaff_x26 + 0x5778) = &stack0x00002f10;
      *(undefined1 *)(unaff_x28 + 1) = 1;
      uVar2 = 1;
      if (lVar21 == 0) {
        uVar2 = 2;
      }
      *(char **)(unaff_x26 + 0x2bc8) = s__108b39f4f;
      *(undefined1 **)(unaff_x26 + 0x2bd0) = &stack0x00000398;
      *(undefined8 *)(unaff_x26 + 0x2b78) = uVar18;
      *(long *)(unaff_x26 + 0x2b80) = lVar19;
      *(undefined8 *)(unaff_x26 + 0x2b88) = uVar8;
      *(undefined8 *)(unaff_x26 + 0x2b90) = uVar2;
      *(long *)(unaff_x26 + 0x2b98) = lVar21;
      *(undefined8 *)(unaff_x26 + 0x2ba0) = uVar7;
      *(undefined4 *)(unaff_x26 + 0x2bc0) = uVar5;
      *(undefined4 *)(unaff_x26 + 0x2bc4) = uVar6;
      (**(code **)(puVar3 + 0x20))(puVar4,&stack0x00008600);
    }
  }
  goto LAB_10097744c;
code_r0x000100976f20:
  *(long **)(unaff_x26 + 0x2b78) = unaff_x19 + 0x11f;
  *(undefined **)(unaff_x26 + 0x2b80) = &DAT_10112965c;
  *(undefined1 **)(unaff_x26 + 0x2b88) = &stack0x0000dd70;
  *(code **)(unaff_x26 + 0x2b90) =
       __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
  ;
  param_1 = 
  ___ZN16codex_app_server18request_processors7plugins22PluginRequestProcessor29start_plugin_mcp_oauth_logins28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h85a1a46effecb896E
  ;
  goto code_r0x000100976f54;
}

