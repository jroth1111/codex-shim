
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1009ae544(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long unaff_x19;
  long *plVar13;
  long *unaff_x21;
  long lVar14;
  long lVar15;
  long *unaff_x24;
  undefined1 *unaff_x25;
  undefined8 uVar16;
  undefined1 *unaff_x26;
  ulong uVar17;
  long *plVar18;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_00002830;
  ulong in_stack_00002838;
  long in_stack_00002840;
  undefined8 in_stack_00002850;
  undefined8 in_stack_00002858;
  undefined8 in_stack_000028f0;
  long in_stack_00004de8;
  ulong in_stack_00004df0;
  long in_stack_000050e0;
  long in_stack_000050e8;
  long in_stack_000050f0;
  long in_stack_000050f8;
  long in_stack_00005100;
  long in_stack_00005108;
  long in_stack_00005110;
  long in_stack_00005118;
  long in_stack_00005120;
  long in_stack_00005128;
  long in_stack_00005130;
  long in_stack_00005138;
  long in_stack_00005140;
  long in_stack_00005148;
  long in_stack_00005150;
  long in_stack_00005158;
  long in_stack_00005160;
  long in_stack_00005168;
  long in_stack_00005170;
  long in_stack_00005178;
  long in_stack_00005180;
  long in_stack_00005188;
  long in_stack_00005190;
  long in_stack_00005198;
  long in_stack_000051a0;
  long in_stack_000051c0;
  ulong in_stack_000051c8;
  long in_stack_000051d0;
  undefined8 in_stack_000051d8;
  
  *(undefined8 *)(unaff_x29 + -0xa0) = 1;
  *(undefined1 **)(unaff_x29 + -0x98) = &stack0x00005220;
  *(undefined8 *)(unaff_x29 + -0x90) = 1;
  *(undefined8 *)(unaff_x29 + -0x88) = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,unaff_x29 + -0xa0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar14 = *unaff_x21;
    uVar3 = *(undefined8 *)(lVar14 + 0x20);
    uVar5 = *(undefined8 *)(lVar14 + 0x28);
    *(undefined8 *)(unaff_x29 + -0xe0) = 2;
    *(undefined8 *)(unaff_x29 + -0xd8) = uVar3;
    *(undefined8 *)(unaff_x29 + -0xd0) = uVar5;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0xe0);
    if (iVar8 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar14,puVar2,puVar1,unaff_x29 + -0xe0,unaff_x29 + -0xa0);
    }
  }
  FUN_100de3b58(&stack0x00004de0);
  plVar9 = (long *)(*
                   ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                   )();
  if ((char)plVar9[2] == '\x01') {
    lVar14 = *plVar9;
  }
  else {
    auVar21 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    lVar14 = auVar21._0_8_;
    plVar9[1] = auVar21._8_8_;
    *(undefined1 *)(plVar9 + 2) = 1;
    unaff_x28 = -0x7ffffffffffffffb;
    unaff_x26 = &stack0x00002830;
    unaff_x25 = &stack0x000051a8;
    unaff_x27 = unaff_x29 + -0xe0;
  }
  *plVar9 = lVar14 + 1;
  lVar20 = unaff_x24[1];
  plVar9 = (long *)*unaff_x24;
  lVar15 = unaff_x24[3];
  uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0x70) + 8);
  lVar14 = *(long *)(*(long *)(unaff_x19 + 0x70) + 0x10);
  if (lVar14 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = _malloc(lVar14);
    if (lVar10 == 0) {
      func_0x0001087c9084(1,lVar14);
      goto LAB_1009b0ab4;
    }
  }
  _memcpy(lVar10,uVar3,lVar14);
  *(long *)(unaff_x29 + -0xa0) = lVar14;
  *(long *)(unaff_x29 + -0x98) = lVar10;
  *(long *)(unaff_x29 + -0x90) = lVar14;
  __ZN18codex_core_plugins7manager14PluginsManager28new_with_restriction_product17hc4ed87e9f89ea398E
            (&stack0x00004de0,unaff_x29 + -0xa0,1);
  __ZN16codex_app_server6config21external_agent_config30configured_marketplace_plugins17h7423e33ac6bd9519E
            (&stack0x000051c0,&stack0x00002830,&stack0x00004de0);
  if ((*(uint *)(unaff_x25 + 0x18) & 1) == 0) {
    *(undefined8 *)(unaff_x27 + 0x10) = in_stack_000051d8;
    *(long *)(unaff_x27 + 8) = in_stack_000051d0;
    *(ulong *)(unaff_x29 + -0xe0) = in_stack_000051c8;
    FUN_100e1955c(&stack0x00004de0);
    lVar10 = *(long *)(unaff_x19 + 0x70);
    uVar3 = *(undefined8 *)(unaff_x19 + 0xa0);
    uVar5 = *(undefined8 *)(unaff_x19 + 0xa8);
    puVar12 = (undefined8 *)(lVar10 + 0x28);
    lVar14 = *(long *)(lVar10 + 0x20);
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      puVar12 = (undefined8 *)(unaff_x19 + 0x18);
      lVar14 = *(long *)(unaff_x19 + 0x10);
    }
    uVar16 = *puVar12;
    if (*(long *)(unaff_x19 + 0x80) != -0x8000000000000000) {
      uVar4 = *(undefined8 *)(unaff_x19 + 0x88);
      in_stack_00004df0 = *(ulong *)(unaff_x19 + 0x90);
      if (in_stack_00004df0 == 0) {
        in_stack_00004de8 = 1;
      }
      else {
        in_stack_00004de8 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(in_stack_00004df0,1);
        if (in_stack_00004de8 == 0) {
          func_0x0001087c9084(1,in_stack_00004df0);
LAB_1009b0ab4:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1009b0ab8);
          (*pcVar7)();
        }
      }
      _memcpy(in_stack_00004de8,uVar4,in_stack_00004df0);
      unaff_x28 = -0x7ffffffffffffffb;
      unaff_x26 = &stack0x00002830;
    }
    func_0x0001018af3dc(&stack0x000050e0,lVar10,uVar3,uVar5,lVar14,uVar16,&stack0x00004de0,
                        *(undefined8 *)(unaff_x19 + 0x290),&stack0x00004d80);
    if (in_stack_000050e0 != -0x8000000000000000) {
      plVar13 = *(long **)(unaff_x19 + 0x78);
      lVar14 = plVar13[2];
      if (lVar14 == *plVar13) {
        func_0x0001088bae7c(plVar13);
      }
      plVar11 = (long *)(plVar13[1] + lVar14 * 200);
      plVar11[0x15] = in_stack_00005188;
      plVar11[0x14] = in_stack_00005180;
      plVar11[0x17] = in_stack_00005198;
      plVar11[0x16] = in_stack_00005190;
      plVar11[0x18] = in_stack_000051a0;
      plVar11[0xd] = in_stack_00005148;
      plVar11[0xc] = in_stack_00005140;
      plVar11[0xf] = in_stack_00005158;
      plVar11[0xe] = in_stack_00005150;
      plVar11[0x11] = in_stack_00005168;
      plVar11[0x10] = in_stack_00005160;
      plVar11[0x13] = in_stack_00005178;
      plVar11[0x12] = in_stack_00005170;
      plVar11[5] = in_stack_00005108;
      plVar11[4] = in_stack_00005100;
      plVar11[7] = in_stack_00005118;
      plVar11[6] = in_stack_00005110;
      plVar11[9] = in_stack_00005128;
      plVar11[8] = in_stack_00005120;
      plVar11[0xb] = in_stack_00005138;
      plVar11[10] = in_stack_00005130;
      plVar11[1] = in_stack_000050e8;
      *plVar11 = in_stack_000050e0;
      plVar11[3] = in_stack_000050f8;
      plVar11[2] = in_stack_000050f0;
      plVar13[2] = lVar14 + 1;
    }
    if (in_stack_000051c8 != 0) {
      in_stack_00004de8 = 0;
      in_stack_00004df0 = in_stack_000051c8;
    }
    while (FUN_100f3aa14(&stack0x000051c0,&stack0x00004de0), in_stack_000051c0 != 0) {
      lVar14 = in_stack_000051c0 + in_stack_000051d0 * 0x18;
      if (*(long *)(lVar14 + 0x218) != 0) {
        _free(*(undefined8 *)(lVar14 + 0x220));
      }
      plVar13 = (long *)(in_stack_000051c0 + in_stack_000051d0 * 0x30);
      lVar14 = plVar13[1];
      if (lVar14 != 0) {
        lVar10 = plVar13[3];
        if (lVar10 != 0) {
          plVar11 = (long *)*plVar13;
          plVar18 = plVar11 + 1;
          lVar19 = *plVar11;
          uVar17 = CONCAT17(-(-1 < lVar19),
                            CONCAT16(-(-1 < (char)((ulong)lVar19 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar19 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar19 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar19 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar19 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar19 >> 8)),
                                                           -(-1 < (char)lVar19)))))))) &
                   0x8080808080808080;
          do {
            while (uVar17 == 0) {
              lVar19 = *plVar18;
              plVar11 = plVar11 + -0x18;
              plVar18 = plVar18 + 1;
              uVar17 = CONCAT17(-(-1 < lVar19),
                                CONCAT16(-(-1 < (char)((ulong)lVar19 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar19 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar19 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar19 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar19 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar19 >> 8)),
                                                           -(-1 < (char)lVar19)))))))) &
                       0x8080808080808080;
            }
            uVar6 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
            iVar8 = (int)((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3);
            if (plVar11[(long)-iVar8 * 3 + -3] != 0) {
              _free(plVar11[(long)-iVar8 * 3 + -2]);
            }
            uVar17 = uVar17 - 1 & uVar17;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        unaff_x26 = &stack0x00002830;
        if (lVar14 * 0x19 != -0x21) {
          _free(*plVar13 + lVar14 * -0x18 + -0x18);
        }
      }
    }
    if (lVar20 != 0) {
      if (lVar15 != 0) {
        plVar11 = plVar9 + 1;
        lVar14 = *plVar9;
        uVar17 = CONCAT17(-(-1 < lVar14),
                          CONCAT16(-(-1 < (char)((ulong)lVar14 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar14 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar14 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar14 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar14
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar14 >> 8)),-(-1 < (char)lVar14)))))))) &
                 0x8080808080808080;
        plVar13 = plVar9;
        do {
          while (uVar17 == 0) {
            lVar14 = *plVar11;
            plVar13 = plVar13 + -0x18;
            plVar11 = plVar11 + 1;
            uVar17 = CONCAT17(-(-1 < lVar14),
                              CONCAT16(-(-1 < (char)((ulong)lVar14 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar14 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar14 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar14 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar14 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar14 >> 8)),
                                                           -(-1 < (char)lVar14)))))))) &
                     0x8080808080808080;
          }
          uVar6 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          iVar8 = (int)((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3);
          if (plVar13[(long)-iVar8 * 3 + -3] != 0) {
            _free(plVar13[(long)-iVar8 * 3 + -2]);
          }
          uVar17 = uVar17 - 1 & uVar17;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      if (lVar20 * 0x19 != -0x21) {
        _free(plVar9 + lVar20 * -3 + -3);
      }
    }
    FUN_100de93d0(&stack0x00002830);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
      lVar14 = *(long *)(unaff_x19 + 0x70);
      __ZN29codex_external_agent_sessions6detect22detect_recent_sessions17h2131118a6765ffafE
                (&stack0x00002830,*(undefined8 *)(lVar14 + 0x20),*(undefined8 *)(lVar14 + 0x28),
                 *(undefined8 *)(lVar14 + 8),*(undefined8 *)(lVar14 + 0x10));
      if (in_stack_00002830 == -0x8000000000000000) goto LAB_1009b0010;
      if (in_stack_00002840 == 0) {
        FUN_100ca9d44(&stack0x000051c0);
      }
      else {
        plVar9 = *(long **)(unaff_x19 + 0x78);
        __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
                  (&stack0x00004de0,*(undefined8 *)(*(long *)(unaff_x19 + 0x70) + 0x20),
                   *(undefined8 *)(*(long *)(unaff_x19 + 0x70) + 0x28),&UNK_108c981d0,8);
        *(long *)(unaff_x29 + -0xe0) = in_stack_00004de8;
        *(ulong *)(unaff_x29 + -0xd8) = in_stack_00004df0;
        *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0xe0;
        *(undefined **)(unaff_x29 + -0x98) =
             &
             __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
        ;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000010,s_Migrate_recent_sessions_from_108acca4f,unaff_x29 + -0xa0);
        if (in_stack_000051c8 != 0) {
          _free(in_stack_00004de8);
        }
        uVar16 = in_stack_00000020;
        uVar5 = in_stack_00000018;
        uVar3 = in_stack_00000010;
        in_stack_00000050 = 0;
        in_stack_00000068 = 0;
        in_stack_00000080 = 0;
        in_stack_00000020 = 0;
        in_stack_00000018 = 8;
        in_stack_00000010 = 0;
        in_stack_00000048 = 8;
        in_stack_00000040 = 0;
        in_stack_00000060 = 8;
        in_stack_00000058 = 0;
        in_stack_00000078 = 8;
        in_stack_00000070 = 0;
        in_stack_00000098 = 0;
        in_stack_00000090 = 8;
        in_stack_00000088 = 0;
        unaff_x26[0xc0] = 8;
        lVar14 = plVar9[2];
        in_stack_00000028 = in_stack_00002830;
        in_stack_00000030 = in_stack_00002838;
        in_stack_00000038 = in_stack_00002840;
        if (lVar14 == *plVar9) {
          func_0x0001088bae7c(plVar9);
        }
        puVar12 = (undefined8 *)(plVar9[1] + lVar14 * 200);
        puVar12[0x13] = 8;
        puVar12[0x12] = 0;
        puVar12[0x15] = 0;
        puVar12[0x14] = 0;
        puVar12[0x17] = 0;
        puVar12[0x16] = 8;
        puVar12[0x18] = in_stack_000028f0;
        puVar12[0xb] = in_stack_00002840;
        puVar12[10] = in_stack_00002838;
        puVar12[0xd] = 8;
        puVar12[0xc] = 0;
        puVar12[0xf] = 0;
        puVar12[0xe] = 0;
        puVar12[0x11] = 0;
        puVar12[0x10] = 8;
        puVar12[3] = 0x8000000000000000;
        puVar12[2] = uVar16;
        puVar12[5] = in_stack_00002858;
        puVar12[4] = in_stack_00002850;
        puVar12[7] = 8;
        puVar12[6] = 0;
        puVar12[9] = in_stack_00002830;
        puVar12[8] = 0;
        puVar12[1] = uVar5;
        *puVar12 = uVar3;
        plVar9[2] = lVar14 + 1;
        __ZN16codex_app_server6config21external_agent_config21emit_migration_metric17h3206f93090a5fac4E
                  (&UNK_108cb45f1,0x22,8,0);
      }
    }
    if (*(long *)(unaff_x19 + 0x278) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x280));
    }
    *(undefined1 *)(unaff_x19 + 0x591) = 0;
    if (*(long *)(unaff_x19 + 0x248) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x250));
    }
    if (*(long *)(unaff_x19 + 0x230) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x238));
    }
    if (*(long *)(unaff_x19 + 0x218) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x220));
    }
    if (*(long *)(unaff_x19 + 0x200) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x208));
    }
    if (*(long *)(unaff_x19 + 0x1e8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x1f0));
    }
    if (*(long *)(unaff_x19 + 0x1d0) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x1d8));
    }
    if ((*(byte *)(unaff_x19 + 0x590) & 1) != 0) {
      lVar14 = *(long *)(unaff_x19 + 0x1c0);
      lVar15 = *(long *)(unaff_x19 + 0x1c8);
      if (lVar15 != 0) {
        puVar12 = (undefined8 *)(lVar14 + 8);
        do {
          if (puVar12[-1] != 0) {
            _free(*puVar12);
          }
          puVar12 = puVar12 + 3;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      if (*(long *)(unaff_x19 + 0x1b8) != 0) {
        _free(lVar14);
      }
    }
    *(undefined1 *)(unaff_x19 + 0x590) = 0;
    if (*(long *)(unaff_x19 + 0x1a0) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x1a8));
    }
    if (*(long *)(unaff_x19 + 0x188) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 400));
    }
    lVar14 = *(long *)(unaff_x19 + 0x178);
    lVar15 = *(long *)(unaff_x19 + 0x180);
    if (lVar15 != 0) {
      puVar12 = (undefined8 *)(lVar14 + 8);
      do {
        if (puVar12[-1] != 0) {
          _free(*puVar12);
        }
        puVar12 = puVar12 + 3;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    if (*(long *)(unaff_x19 + 0x170) != 0) {
      _free(lVar14);
    }
    FUN_100ddb5bc(unaff_x19 + 0x20);
    if (*(long *)(unaff_x19 + 0x128) != unaff_x28) {
      FUN_100de6690(unaff_x19 + 0x128);
    }
    if (*(long *)(unaff_x19 + 0x110) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x118));
    }
    if (*(long *)(unaff_x19 + 0xf8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x100));
    }
    if (*(long *)(unaff_x19 + 0xb0) != unaff_x28) {
      FUN_100de6690();
    }
    if (*(long *)(unaff_x19 + 0x98) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0xa0));
    }
    in_stack_00002838 = 0;
  }
  else {
    FUN_100e1955c(&stack0x00004de0);
    if (lVar20 != 0) {
      if (lVar15 != 0) {
        plVar11 = plVar9 + 1;
        lVar14 = *plVar9;
        uVar17 = CONCAT17(-(-1 < lVar14),
                          CONCAT16(-(-1 < (char)((ulong)lVar14 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar14 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar14 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar14 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar14
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar14 >> 8)),-(-1 < (char)lVar14)))))))) &
                 0x8080808080808080;
        plVar13 = plVar9;
        do {
          while (uVar17 == 0) {
            lVar14 = *plVar11;
            plVar13 = plVar13 + -0x18;
            plVar11 = plVar11 + 1;
            uVar17 = CONCAT17(-(-1 < lVar14),
                              CONCAT16(-(-1 < (char)((ulong)lVar14 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar14 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar14 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar14 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar14 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar14 >> 8)),
                                                           -(-1 < (char)lVar14)))))))) &
                     0x8080808080808080;
          }
          uVar6 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          iVar8 = (int)((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3);
          if (plVar13[(long)-iVar8 * 3 + -3] != 0) {
            _free(plVar13[(long)-iVar8 * 3 + -2]);
          }
          uVar17 = uVar17 - 1 & uVar17;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      if (lVar20 * 0x19 != -0x21) {
        _free(plVar9 + lVar20 * -3 + -3);
      }
    }
    FUN_100de93d0(&stack0x00002830);
    in_stack_00002838 = in_stack_000051c8;
LAB_1009b0010:
    if (*(long *)(unaff_x19 + 0x278) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x280));
    }
    *(undefined1 *)(unaff_x19 + 0x591) = 0;
    if (*(long *)(unaff_x19 + 0x248) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x250));
    }
    if (*(long *)(unaff_x19 + 0x230) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x238));
    }
    if (*(long *)(unaff_x19 + 0x218) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x220));
    }
    if (*(long *)(unaff_x19 + 0x200) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x208));
    }
    if (*(long *)(unaff_x19 + 0x1e8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x1f0));
    }
    if (*(long *)(unaff_x19 + 0x1d0) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x1d8));
    }
    if ((*(byte *)(unaff_x19 + 0x590) & 1) != 0) {
      lVar14 = *(long *)(unaff_x19 + 0x1c0);
      lVar15 = *(long *)(unaff_x19 + 0x1c8);
      if (lVar15 != 0) {
        puVar12 = (undefined8 *)(lVar14 + 8);
        do {
          if (puVar12[-1] != 0) {
            _free(*puVar12);
          }
          puVar12 = puVar12 + 3;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      if (*(long *)(unaff_x19 + 0x1b8) != 0) {
        _free(lVar14);
      }
    }
    *(undefined1 *)(unaff_x19 + 0x590) = 0;
    if (*(long *)(unaff_x19 + 0x1a0) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x1a8));
    }
    if (*(long *)(unaff_x19 + 0x188) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 400));
    }
    lVar14 = *(long *)(unaff_x19 + 0x178);
    lVar15 = *(long *)(unaff_x19 + 0x180);
    if (lVar15 != 0) {
      puVar12 = (undefined8 *)(lVar14 + 8);
      do {
        if (puVar12[-1] != 0) {
          _free(*puVar12);
        }
        puVar12 = puVar12 + 3;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    if (*(long *)(unaff_x19 + 0x170) != 0) {
      _free(lVar14);
    }
    FUN_100ddb5bc(unaff_x19 + 0x20);
    if (*(long *)(unaff_x19 + 0x128) != unaff_x28) {
      FUN_100de6690(unaff_x19 + 0x128);
    }
    if (*(long *)(unaff_x19 + 0x110) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x118));
    }
    if (*(long *)(unaff_x19 + 0xf8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x100));
    }
    if (*(long *)(unaff_x19 + 0xb0) != unaff_x28) {
      FUN_100de6690();
    }
    if (*(long *)(unaff_x19 + 0x98) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0xa0));
    }
  }
  if ((*(ulong *)(unaff_x19 + 0x80) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x88));
  }
  *(undefined1 *)(unaff_x19 + 0x592) = 1;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = in_stack_00002838;
  return auVar21 << 0x40;
}

