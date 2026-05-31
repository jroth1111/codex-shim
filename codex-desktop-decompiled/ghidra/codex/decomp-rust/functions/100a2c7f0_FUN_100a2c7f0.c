
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100a2c7f0(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  code *pcVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined1 uVar11;
  char ***pppcVar12;
  long *plVar13;
  char *pcVar14;
  ulong unaff_x24;
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  char **ppcStack_240;
  char **ppcStack_238;
  undefined *puStack_230;
  char *pcStack_228;
  undefined1 **ppuStack_220;
  undefined1 *puStack_218;
  code *pcStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  char ***pppcStack_1f0;
  char ***pppcStack_1e8;
  ulong uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  char ***pppcStack_1c0;
  char ***pppcStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  char *pcStack_1a0;
  char ***pppcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  char ***pppcStack_180;
  char ***pppcStack_178;
  ulong uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  char ***pppcStack_150;
  char ***pppcStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  char *pcStack_130;
  char ***pppcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  char ***pppcStack_110;
  char ***pppcStack_108;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  char ***pppcStack_e0;
  char ***pppcStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  char *pcStack_c0;
  char ***pppcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char ***pppcStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  ulong uStack_88;
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  bVar4 = *(byte *)(param_1 + 2);
  if (bVar4 < 3) {
    if (bVar4 != 0) {
      if (bVar4 == 1) {
        func_0x000108a07af4(&UNK_10b22ac60);
      }
      func_0x000108a07b10();
LAB_100a2d028:
      func_0x000108a07af4(&UNK_10b22afb8);
      goto LAB_100a2d034;
    }
    param_1[3] = *param_1;
    *(undefined1 *)(param_1 + 0x13) = 0;
LAB_100a2c860:
    plVar13 = param_1 + 3;
    auVar15 = func_0x000100a2bdc4(plVar13,param_2);
    lVar6 = auVar15._8_8_;
    if ((auVar15._0_8_ & 1) != 0) {
      uVar10 = 1;
      uVar11 = 3;
      goto LAB_100a2cf9c;
    }
    param_1[1] = lVar6;
    if (*(char *)(param_1 + 0x13) == '\x03') {
      if (((*(char *)(param_1 + 0x12) == '\x03') && (*(char *)(param_1 + 0x11) == '\x03')) &&
         (*(char *)(param_1 + 8) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 9);
        if (param_1[10] != 0) {
          (**(code **)(param_1[10] + 0x18))(param_1[0xb]);
        }
      }
      lVar6 = param_1[1];
    }
    if (lVar6 != 0) {
      param_1[4] = plVar13;
      param_1[3] = lVar6;
      *(undefined1 *)(param_1 + 8) = 0;
LAB_100a2c900:
      param_1[5] = plVar13;
      param_1[9] = *plVar13 + 0x48;
      *(undefined1 *)(param_1 + 0x17) = 0;
      goto LAB_100a2c914;
    }
LAB_100a2cf94:
    uVar10 = 0;
    uVar11 = 1;
  }
  else {
    if (bVar4 == 3) goto LAB_100a2c860;
    bVar4 = *(byte *)(param_1 + 8);
    if (bVar4 < 4) {
      if (bVar4 < 2) {
        if (bVar4 != 0) goto LAB_100a2d028;
        plVar13 = (long *)param_1[4];
        goto LAB_100a2c900;
      }
      if (bVar4 != 3) {
        func_0x000108a07b10(&UNK_10b22afb8);
        goto LAB_100a2d034;
      }
LAB_100a2c914:
      auVar15 = FUN_100fd3e50(param_1 + 9,param_2);
      uVar10 = auVar15._8_8_;
      pcVar14 = auVar15._0_8_;
      if (pcVar14 != (char *)0x0) {
        if (((*(char *)(param_1 + 0x17) == '\x03') && (*(char *)(param_1 + 0x16) == '\x03')) &&
           (*(char *)(param_1 + 0xd) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 0xe);
          uVar10 = extraout_x1;
          if (param_1[0xf] != 0) {
            (**(code **)(param_1[0xf] + 0x18))(param_1[0x10]);
            uVar10 = extraout_x1_00;
          }
        }
        if (*(long *)(pcVar14 + 0x28) == 2) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(pcVar14 + 0x98);
          unaff_x24 = *(ulong *)(pcVar14 + 0xa0);
        }
        if (*pcVar14 == '\0') {
          *pcVar14 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar14,uVar10,1000000000);
        }
        FUN_1060fa678(pcVar14,1,pcVar14);
        if (iVar8 != 0) {
          auVar16 = func_0x000106032954(0);
          pppuStack_80 = auVar16._0_8_;
          puStack_78 = (undefined *)CONCAT44(puStack_78._4_4_,auVar16._8_4_);
          pppcStack_1f0 = (char ***)0x0;
          pppcStack_1e8 = (char ***)((ulong)pppcStack_1e8 & 0xffffffff00000000);
          func_0x000106032878(&pppcStack_180,&pppuStack_80,&pppcStack_1f0);
          uVar9 = 0;
          if (((ulong)pppcStack_180 & 1) == 0) {
            uVar9 = (long)pppcStack_178 * 1000 + (uStack_170 & 0xffffffff) / 1000000;
          }
          uVar1 = uVar9 + 30000;
          if (0xffffffffffff8acf < uVar9) {
            uVar1 = 0xffffffffffffffff;
          }
          if (unaff_x24 <= uVar1) {
            plVar13 = *(long **)(*(long *)param_1[5] + 0x40);
            lVar6 = *plVar13;
            *plVar13 = lVar6 + 1;
            if (lVar6 < 0) {
LAB_100a2d034:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100a2d038);
              (*pcVar5)();
            }
            param_1[6] = plVar13;
            param_1[9] = plVar13 + 2;
            *(undefined1 *)(param_1 + 0x17) = 0;
            goto LAB_100a2ca70;
          }
        }
        pppcVar12 = (char ***)0x0;
        goto LAB_100a2ce58;
      }
      *(undefined1 *)(param_1 + 8) = 3;
    }
    else {
      if (bVar4 == 4) {
LAB_100a2ca70:
        lVar6 = FUN_100fd3e50(param_1 + 9,param_2);
        if (lVar6 == 0) {
          *(undefined1 *)(param_1 + 8) = 4;
          goto LAB_100a2ce68;
        }
        param_1[7] = lVar6;
        if (((*(char *)(param_1 + 0x17) == '\x03') && (*(char *)(param_1 + 0x16) == '\x03')) &&
           (*(char *)(param_1 + 0xd) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 0xe);
          if (param_1[0xf] != 0) {
            (**(code **)(param_1[0xf] + 0x18))(param_1[0x10]);
          }
        }
        param_1[0x1d] = param_1[7] + 0x28;
        *(undefined1 *)((long)param_1 + 0xf2) = 0;
LAB_100a2cad4:
        FUN_100f004cc(&pppcStack_180,param_1 + 9,param_2);
        if ((char ****)pppcStack_180 == (char ****)0x3) {
          *(undefined1 *)(param_1 + 8) = 5;
          goto LAB_100a2ce68;
        }
        uStack_c8 = uStack_138;
        uStack_d0 = uStack_140;
        pppcStack_b8 = pppcStack_128;
        pcStack_c0 = pcStack_130;
        uStack_a8 = uStack_118;
        uStack_b0 = uStack_120;
        pppcStack_108 = pppcStack_178;
        pppcStack_110 = pppcStack_180;
        lStack_f8 = lStack_168;
        uStack_100 = uStack_170;
        lStack_e8 = lStack_158;
        lStack_f0 = lStack_160;
        pppcStack_d8 = pppcStack_148;
        pppcStack_e0 = pppcStack_150;
        FUN_100cbe8c4(param_1 + 9);
        if ((char ****)pppcStack_110 == (char ****)0x2) {
          plVar13 = (long *)((ulong)&pppcStack_110 | 8);
          pppcStack_180 = (char ***)(*(long *)param_1[5] + 0x10);
          pppcStack_178 = (char ***)&DAT_10112965c;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&pppcStack_98,s__failed_to_refresh_OAuth_tokens_f_108acea3b,&pppcStack_180);
          __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&pppcStack_180);
          puStack_78 = (undefined *)pppcStack_178;
          pppuStack_80 = (undefined8 ***)pppcStack_180;
          lStack_68 = lStack_168;
          uStack_70 = uStack_170;
          lStack_58 = lStack_158;
          lStack_60 = lStack_160;
          pppcStack_178 = (char ***)CONCAT71(uStack_8f,uStack_90);
          pppcStack_180 = pppcStack_98;
          lStack_160 = plVar13[1];
          lStack_168 = *plVar13;
          pppcStack_150 = (char ***)plVar13[3];
          lStack_158 = plVar13[2];
          uStack_170 = uStack_88;
          auVar15 = FUN_1088571d4(&pppcStack_180,&pppuStack_80);
          pppcVar12 = auVar15._0_8_;
          pcVar14 = (char *)param_1[7];
          if (*pcVar14 == '\0') {
            *pcVar14 = '\x01';
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                      (pcVar14,auVar15._8_8_,1000000000);
          }
          FUN_1060fa678(pcVar14,1,pcVar14);
          lVar6 = *(long *)param_1[6];
          *(long *)param_1[6] = lVar6 + -1;
          LORelease();
          if (lVar6 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h6c8cac43574eef9aE();
          }
          goto LAB_100a2ce58;
        }
        pppcStack_1b8 = pppcStack_d8;
        pppcStack_1c0 = pppcStack_e0;
        uStack_1a8 = uStack_c8;
        uStack_1b0 = uStack_d0;
        pppcStack_198 = pppcStack_b8;
        pcStack_1a0 = pcStack_c0;
        uStack_188 = uStack_a8;
        uStack_190 = uStack_b0;
        lStack_1d8 = lStack_f8;
        uStack_1e0 = uStack_100;
        lStack_1c8 = lStack_e8;
        lStack_1d0 = lStack_f0;
        pppcStack_1f0 = pppcStack_110;
        pppcStack_1e8 = pppcStack_108;
        FUN_100d0f028(&pppcStack_1f0);
        pcVar14 = (char *)param_1[7];
        if (*pcVar14 == '\0') {
          *pcVar14 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar14,extraout_x1_01,1000000000);
        }
        FUN_1060fa678(pcVar14,1,pcVar14);
        lVar6 = *(long *)param_1[6];
        *(long *)param_1[6] = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h6c8cac43574eef9aE();
        }
        param_1[0x1d] = param_1[5];
        *(undefined1 *)((long)param_1 + 0xf2) = 0;
      }
      else if (bVar4 == 5) goto LAB_100a2cad4;
      auVar15 = FUN_100a426c4(param_1 + 9,param_2);
      pppcVar12 = auVar15._8_8_;
      if ((auVar15._0_8_ & 1) == 0) {
        func_0x000100cc1ec8(param_1 + 9);
LAB_100a2ce58:
        *(undefined1 *)(param_1 + 8) = 1;
        FUN_100cc2188(param_1 + 4);
        if (pppcVar12 != (char ***)0x0) {
          ppcStack_240 = (char **)pppcVar12;
          if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
             (((bRam000000010b62f720 - 1 < 2 ||
               ((bRam000000010b62f720 != 0 &&
                (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN17codex_rmcp_client11rmcp_client10RmcpClient23refresh_oauth_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h03ccebdb49e34817E
                                   ), cVar7 != '\0')))) &&
              (uVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN17codex_rmcp_client11rmcp_client10RmcpClient23refresh_oauth_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h03ccebdb49e34817E
                                 ), (uVar9 & 1) != 0)))) {
            lStack_168 = ___ZN17codex_rmcp_client11rmcp_client10RmcpClient23refresh_oauth_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h03ccebdb49e34817E
                         + 0x30;
            pcStack_210 = 
            __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
            ;
            ppuStack_220 = &puStack_218;
            pcStack_228 = s_failed_to_refresh_OAuth_tokens__108ace71a;
            ppcStack_238 = &pcStack_228;
            puStack_230 = &UNK_10b208fd0;
            pppcStack_178 = &ppcStack_238;
            pppcStack_180 = (char ***)0x1;
            uStack_170 = 1;
            puStack_218 = (undefined1 *)&ppcStack_240;
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                      (___ZN17codex_rmcp_client11rmcp_client10RmcpClient23refresh_oauth_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h03ccebdb49e34817E
                       ,&pppcStack_180);
            lVar6 = 
            ___ZN17codex_rmcp_client11rmcp_client10RmcpClient23refresh_oauth_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h03ccebdb49e34817E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              pppcStack_1e8 =
                   *(char ****)
                    (
                    ___ZN17codex_rmcp_client11rmcp_client10RmcpClient23refresh_oauth_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h03ccebdb49e34817E
                    + 0x20);
              uStack_1e0 = *(ulong *)(
                                     ___ZN17codex_rmcp_client11rmcp_client10RmcpClient23refresh_oauth_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h03ccebdb49e34817E
                                     + 0x28);
              pppcStack_1f0 = (char ***)0x2;
              puVar2 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar2 = &UNK_10b3c24c8;
              }
              puVar3 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar3 = &UNK_109adfc03;
              }
              iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&pppcStack_1f0);
              if (iVar8 != 0) {
                lStack_f0 = *(long *)(lVar6 + 0x60);
                lStack_e8 = *(long *)(lVar6 + 0x68);
                pppcStack_108 = *(char ****)(lVar6 + 0x50);
                uStack_100 = *(ulong *)(lVar6 + 0x58);
                pppcStack_110 = (char ***)0x1;
                if ((char ****)pppcStack_108 == (char ****)0x0) {
                  pppcStack_110 = (char ***)0x2;
                }
                uStack_c8 = *(undefined8 *)(lVar6 + 8);
                pppcStack_98 = (char ***)&pppcStack_180;
                uStack_90 = 1;
                pppuStack_80 = &pppcStack_98;
                puStack_78 = &DAT_1061c2098;
                lStack_f8 = 1;
                if (lStack_f0 == 0) {
                  lStack_f8 = 2;
                }
                pppcStack_d8 = pppcStack_1e8;
                pppcStack_e0 = pppcStack_1f0;
                uStack_d0 = uStack_1e0;
                pppcStack_b8 = (char ***)&pppuStack_80;
                pcStack_c0 = s__108b39f4f;
                (**(code **)(puVar2 + 0x20))(puVar3,&pppcStack_110);
              }
            }
          }
          else {
            lVar6 = 
            ___ZN17codex_rmcp_client11rmcp_client10RmcpClient23refresh_oauth_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h03ccebdb49e34817E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              uStack_200 = *(undefined8 *)
                            (
                            ___ZN17codex_rmcp_client11rmcp_client10RmcpClient23refresh_oauth_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h03ccebdb49e34817E
                            + 0x20);
              uStack_1f8 = *(undefined8 *)
                            (
                            ___ZN17codex_rmcp_client11rmcp_client10RmcpClient23refresh_oauth_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h03ccebdb49e34817E
                            + 0x28);
              uStack_208 = 2;
              puVar2 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar2 = &UNK_10b3c24c8;
              }
              puVar3 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar3 = &UNK_109adfc03;
              }
              iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&uStack_208);
              if (iVar8 != 0) {
                lStack_f8 = ___ZN17codex_rmcp_client11rmcp_client10RmcpClient23refresh_oauth_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h03ccebdb49e34817E
                            + 0x30;
                pppcStack_178 =
                     (char ***)
                     __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
                ;
                pppcStack_1e8 = (char ***)&pppcStack_180;
                pppcStack_1f0 = (char ***)s_failed_to_refresh_OAuth_tokens__108ace71a;
                pppuStack_80 = &pppcStack_1f0;
                puStack_78 = &UNK_10b208fd0;
                pppcStack_108 = (char ***)&pppuStack_80;
                pppcStack_110 = (char ***)0x1;
                uStack_100 = 1;
                pppcStack_180 = &ppcStack_240;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar6,puVar3,puVar2,&uStack_208,&pppcStack_110);
              }
            }
          }
          (**(code **)*ppcStack_240)();
        }
        lVar6 = *(long *)param_1[3];
        *(long *)param_1[3] = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          func_0x000103e32944();
        }
        goto LAB_100a2cf94;
      }
      *(undefined1 *)(param_1 + 8) = 6;
    }
LAB_100a2ce68:
    uVar10 = 1;
    uVar11 = 4;
  }
LAB_100a2cf9c:
  *(undefined1 *)(param_1 + 2) = uVar11;
  return uVar10;
}

