
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b1047c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  byte bVar4;
  undefined2 uVar5;
  char ***pppcVar6;
  char ***pppcVar7;
  code *pcVar8;
  long lVar9;
  char cVar10;
  int iVar11;
  short *psVar12;
  ulong uVar13;
  char ****ppppcVar14;
  char ****ppppcVar15;
  char ****ppppcVar16;
  undefined8 *puVar17;
  undefined1 uVar18;
  uint uVar19;
  uint extraout_w8;
  undefined8 uVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  char ****unaff_x23;
  char ****ppppcVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  char ***pppcStack_400;
  char cStack_3c8;
  undefined7 uStack_3c7;
  undefined8 uStack_3c0;
  char ***pppcStack_3b8;
  char ***pppcStack_3b0;
  char ***pppcStack_3a8;
  char ***pppcStack_3a0;
  char ***pppcStack_398;
  char ***pppcStack_390;
  char cStack_388;
  undefined7 uStack_387;
  undefined8 uStack_380;
  char ***pppcStack_378;
  char ***pppcStack_370;
  char ***pppcStack_368;
  long lStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  char ***pppcStack_340;
  char ***pppcStack_338;
  char ***pppcStack_330;
  char ***pppcStack_328;
  char ***pppcStack_320;
  char ***pppcStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  char ***pppcStack_280;
  char ***pppcStack_278;
  char ***pppcStack_270;
  char ***pppcStack_268;
  char ***pppcStack_260;
  char ***pppcStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined2 uStack_210;
  undefined2 uStack_20e;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  char ***pppcStack_1c0;
  char ***pppcStack_1b8;
  char ***pppcStack_1b0;
  char ***pppcStack_1a8;
  char ***pppcStack_1a0;
  char ***pppcStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  char ***pppcStack_178;
  char ***pppcStack_170;
  char ***pppcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined2 uStack_118;
  undefined2 uStack_116;
  undefined1 uStack_114;
  char ***pppcStack_108;
  char ***pppcStack_100;
  char ***pppcStack_f8;
  char ***pppcStack_f0;
  char ***pppcStack_e8;
  char ***pppcStack_e0;
  char ***pppcStack_d8;
  char ***pppcStack_d0;
  char ***pppcStack_c8;
  char ***pppcStack_c0;
  char ***pppcStack_b8;
  char ***pppcStack_b0;
  char ***pppcStack_a8;
  char ***pppcStack_a0;
  char ***pppcStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  bVar4 = *(byte *)(param_2 + 0x152);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      param_2[0x10] = param_2[3];
      param_2[0xf] = param_2[2];
      param_2[0x12] = param_2[5];
      param_2[0x11] = param_2[4];
      param_2[0x14] = param_2[7];
      param_2[0x13] = param_2[6];
      uVar27 = param_2[0xb];
      uVar25 = param_2[10];
      param_2[0x16] = param_2[9];
      param_2[0x15] = param_2[8];
      uVar20 = param_2[0xc];
      param_2[0xe] = param_2[1];
      param_2[0xd] = *param_2;
      param_2[0x18] = uVar27;
      param_2[0x17] = uVar25;
      param_2[0x19] = uVar20;
      *(undefined1 *)((long)param_2 + 0x226) = 0;
LAB_100b104f8:
      param_2[0x1b] = uVar27;
      param_2[0x1a] = uVar25;
      param_2[0x43] = param_2[0x15];
      param_2[0x42] = param_2[0x14];
      param_2[0x1e] = param_2[0x11];
      param_2[0x1d] = param_2[0x10];
      unaff_x23 = (char ****)0x60000020;
      *(undefined2 *)((long)param_2 + 0x227) = 0x100;
      param_2[0x1c] = uVar20;
      *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_2 + 0x16);
      *(undefined1 *)((long)param_2 + 0x229) = 1;
      param_2[0x20] = param_2[0x13];
      param_2[0x1f] = param_2[0x12];
      param_2[0x23] = param_2[0xf];
      param_2[0x22] = param_2[0xe];
      param_2[0x21] = param_2[0xd];
      pppcStack_340 = (char ***)0x0;
      pppcStack_338 = (char ***)0x1;
      pppcStack_330 = (char ***)0x0;
      pppcStack_280 = (char ***)&pppcStack_340;
      pppcStack_278 = (char ***)&UNK_10b209290;
      pppcStack_270 = (char ***)0x60000020;
      if (*(char *)((long)param_2 + 0x212) == '\x01') {
        iVar11 = func_0x0001055c179c((long)param_2 + 0x213,&pppcStack_280);
      }
      else {
        iVar11 = func_0x0001055c1680((long)param_2 + 0x213,&pppcStack_280);
      }
      pppcVar7 = pppcStack_338;
      pppcVar6 = pppcStack_340;
      if (iVar11 != 0) {
        func_0x000108a07a3c(&UNK_108cc3daa,0x37,&pppcStack_1c0,&UNK_10b235000,&UNK_10b2346c0);
        goto LAB_100b120a0;
      }
      __ZN19codex_network_proxy6policy14normalize_host17h2c92f2b136a2cdb4E
                (param_2 + 0x24,pppcStack_338,pppcStack_330);
      if ((char ****)pppcVar6 != (char ****)0x0) {
        _free(pppcVar7);
      }
      *(undefined2 *)((long)param_2 + 0x224) = *(undefined2 *)(param_2 + 0x42);
      if (param_2[0x26] != 0) {
        lVar24 = param_2[0x22] + param_2[0x23] * 0x20;
        lVar23 = param_2[0x23] * -0x20;
        plVar22 = (long *)(lVar24 + 8);
        do {
          plVar21 = plVar22;
          if (lVar23 == 0) goto LAB_100b106dc;
          plVar1 = (long *)(lVar24 + -0x10);
          plVar3 = (long *)(lVar24 + -8);
          lVar24 = lVar24 + -0x20;
          plVar22 = plVar21 + -4;
          lVar23 = lVar23 + 0x20;
        } while (*plVar3 != -0x4c18e0995fbd8f4b || *plVar1 != -0x4f320ff892b19c6);
        auVar28 = (**(code **)(*plVar22 + 0x38))(plVar21[-5]);
        psVar12 = auVar28._0_8_;
        (**(code **)(auVar28._8_8_ + 0x18))(&pppcStack_280);
        if (((char ****)pppcStack_278 == (char ****)0xb3e71f66a04270b5 &&
             (char ****)pppcStack_280 == (char ****)0xfb0cdf0076d4e63a) && (psVar12 != (short *)0x0)
           ) {
          pppcStack_340 = (char ***)0x0;
          pppcStack_338 = (char ***)0x1;
          pppcStack_330 = (char ***)0x0;
          pppcStack_270 = (char ***)0x60000020;
          pppcStack_280 = (char ***)&pppcStack_340;
          pppcStack_278 = (char ***)&UNK_10b209290;
          if (*psVar12 == 1) {
            iVar11 = __ZN75__LT_core__net__socket_addr__SocketAddrV6_u20_as_u20_core__fmt__Display_GT_3fmt17h32565f71722b9b9aE
                               (psVar12 + 2,&pppcStack_280);
          }
          else {
            iVar11 = __ZN75__LT_core__net__socket_addr__SocketAddrV4_u20_as_u20_core__fmt__Display_GT_3fmt17h7a4ef85fe2ccaa0dE
                               (psVar12 + 1,&pppcStack_280);
          }
          if (iVar11 != 0) {
            func_0x000108a07a3c(&UNK_108cc3daa,0x37,&pppcStack_1c0,&UNK_10b235000,&UNK_10b2346c0);
            goto LAB_100b120a0;
          }
          param_2[0x28] = pppcStack_338;
          param_2[0x27] = pppcStack_340;
          param_2[0x29] = pppcStack_330;
        }
        else {
LAB_100b106dc:
          param_2[0x27] = 0x8000000000000000;
        }
        param_2[0x46] = param_2[0x1a] + 0x10;
        *(undefined1 *)(param_2 + 0x48) = 0;
LAB_100b106fc:
        FUN_100b15e4c(&cStack_3c8,param_2 + 0x46,param_3);
        if (cStack_3c8 != '\x02') {
          param_2[0x2b] = uStack_3c0;
          param_2[0x2a] = CONCAT71(uStack_3c7,cStack_3c8);
          if (*(char *)(param_2 + 0x48) == '\x04') {
            if ((*(char *)(param_2 + 0x54) == '\x03') && (*(char *)(param_2 + 0x53) == '\x03')) {
              __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                        (param_2 + 0x4b);
              if (param_2[0x4c] != 0) {
                (**(code **)(param_2[0x4c] + 0x18))(param_2[0x4d]);
              }
            }
          }
          else if (*(char *)(param_2 + 0x48) == '\x03') {
            FUN_100cd5a2c(param_2 + 0x49);
          }
          if ((*(byte *)(param_2 + 0x2a) & 1) == 0) {
            if ((*(byte *)((long)param_2 + 0x151) & 1) != 0) {
              param_2[0x46] = param_2[0x1a] + 0x10;
              *(undefined1 *)(param_2 + 0x48) = 0;
              goto LAB_100b108c8;
            }
            uStack_220 = param_2[0x25];
            uStack_218 = param_2[0x26];
            uStack_210 = *(undefined2 *)((long)param_2 + 0x224);
            pppcStack_268 = (char ***)param_2[0x29];
            pppcStack_270 = (char ***)(char ****)0x0;
            if (param_2[0x27] != -0x8000000000000000) {
              pppcStack_270 = (char ***)param_2[0x28];
            }
            pppcStack_258 = (char ***)0xa;
            puStack_250 = &UNK_108e4862c;
            uStack_248 = 4;
            puStack_240 = &UNK_108e4864c;
            uStack_238 = 0xb;
            puStack_230 = &UNK_108cb8489;
            uStack_20e = 3;
            uStack_228 = 0xe;
            pppcStack_280 = (char ***)0x0;
            pppcStack_260 = (char ***)&UNK_108e48fc5;
            __ZN19codex_network_proxy14network_policy23emit_policy_audit_event17h5a536c6664a1e438E
                      (param_2[0x1a] + 0x10,&pppcStack_280);
            uVar20 = param_2[0x25];
            ppppcVar15 = (char ****)param_2[0x26];
            *(undefined1 *)((long)param_2 + 0x254) = 0;
            param_2[0x46] = &UNK_108cb8489;
            param_2[0x47] = 0xe;
            *(undefined2 *)((long)param_2 + 0x252) = 0x302;
            param_2[0x48] = uVar20;
            param_2[0x49] = ppppcVar15;
            *(undefined2 *)(param_2 + 0x4a) = *(undefined2 *)((long)param_2 + 0x224);
            lVar23 = param_2[0x1a];
            if (ppppcVar15 == (char ****)0x0) {
              ppppcVar14 = (char ****)0x1;
            }
            else {
              ppppcVar14 = (char ****)_malloc(ppppcVar15);
              if (ppppcVar14 == (char ****)0x0) {
                func_0x0001087c9084(1,ppppcVar15);
                goto LAB_100b120a0;
              }
            }
            _memcpy(ppppcVar14,uVar20,ppppcVar15);
            ppppcVar16 = (char ****)_malloc(0xe);
            if (ppppcVar16 == (char ****)0x0) {
              func_0x0001087c9084(1,0xe);
              goto LAB_100b120a0;
            }
            *ppppcVar16 = (char ***)0x69645f79786f7270;
            *(undefined8 *)((long)ppppcVar16 + 6) = 0x64656c6261736964;
            ppppcVar26 = (char ****)0x8000000000000000;
            if (param_2[0x27] != -0x8000000000000000) {
              uVar20 = param_2[0x28];
              ppppcVar26 = (char ****)param_2[0x29];
              if (ppppcVar26 == (char ****)0x0) {
                pppcStack_400 = (char ***)0x1;
              }
              else {
                pppcStack_400 = (char ***)_malloc(ppppcVar26);
                if ((char ****)pppcStack_400 == (char ****)0x0) {
                  func_0x0001087c9084(1,ppppcVar26);
                  goto LAB_100b120a0;
                }
              }
              _memcpy(pppcStack_400,uVar20,ppppcVar26);
            }
            puVar17 = (undefined8 *)_malloc(10);
            if (puVar17 == (undefined8 *)0x0) {
              func_0x0001087c9084(1,10);
              goto LAB_100b120a0;
            }
            *(undefined2 *)(puVar17 + 1) = 0x7064;
            *puVar17 = 0x752d35736b636f73;
            cVar10 = *(char *)((long)param_2 + 0x254);
            uVar20 = 3;
            if (cVar10 == '\0') {
              uVar20 = 4;
            }
            lVar24 = _malloc(uVar20);
            if (lVar24 == 0) {
              func_0x0001087c9084(1,uVar20);
              goto LAB_100b120a0;
            }
            puVar2 = &UNK_108cb852f;
            if (cVar10 == '\0') {
              puVar2 = &UNK_108cde39c;
            }
            _memcpy(lVar24,puVar2,uVar20);
            uVar25 = *(undefined8 *)(&UNK_108cd9d38 + (ulong)*(byte *)((long)param_2 + 0x252) * 8);
            unaff_x23 = *(char *****)(&UNK_10b253338 + (ulong)*(byte *)((long)param_2 + 0x252) * 8);
            lVar9 = _malloc(uVar25);
            if (lVar9 == 0) {
              func_0x0001087c9084(1,uVar25);
              goto LAB_100b120a0;
            }
            _memcpy(lVar9,unaff_x23,uVar25);
            uStack_116 = *(undefined2 *)((long)param_2 + 0x224);
            pppcStack_1a8 = (char ***)0xe;
            pppcStack_170 = pppcStack_400;
            uStack_114 = 2;
            uStack_190 = 10;
            pppcStack_198 = (char ***)0xe;
            uStack_180 = 10;
            uStack_160 = 0x8000000000000000;
            uStack_118 = 1;
            pppcStack_1c0 = (char ***)ppppcVar15;
            pppcStack_1b8 = (char ***)ppppcVar14;
            pppcStack_1b0 = (char ***)ppppcVar15;
            pppcStack_1a0 = (char ***)ppppcVar16;
            puStack_188 = puVar17;
            pppcStack_178 = (char ***)ppppcVar26;
            pppcStack_168 = (char ***)ppppcVar26;
            uStack_148 = uVar20;
            lStack_140 = lVar24;
            uStack_138 = uVar20;
            uStack_130 = uVar25;
            lStack_128 = lVar9;
            uStack_120 = uVar25;
            __ZN19codex_network_proxy7runtime14BlockedRequest3new17h8d8b60bc1b24a062E
                      (&pppcStack_280,&pppcStack_1c0);
            uStack_2b8 = uStack_1f8;
            uStack_2c0 = uStack_200;
            uStack_2a8 = uStack_1e8;
            uStack_2b0 = uStack_1f0;
            uStack_298 = uStack_1d8;
            uStack_2a0 = uStack_1e0;
            uStack_290 = uStack_1d0;
            uStack_2f8 = uStack_238;
            puStack_300 = puStack_240;
            uStack_2e8 = uStack_228;
            puStack_2f0 = puStack_230;
            uStack_2d0 = CONCAT44(uStack_20c,CONCAT22(uStack_20e,uStack_210));
            uStack_2d8 = uStack_218;
            uStack_2e0 = uStack_220;
            uStack_2c8 = uStack_208;
            pppcStack_338 = pppcStack_278;
            pppcStack_340 = pppcStack_280;
            pppcStack_328 = pppcStack_268;
            pppcStack_330 = pppcStack_270;
            pppcStack_318 = pppcStack_258;
            pppcStack_320 = pppcStack_260;
            uStack_308 = uStack_248;
            puStack_310 = puStack_250;
            param_2[0x5c] = uStack_1f8;
            param_2[0x5b] = uStack_200;
            param_2[0x5e] = uStack_1e8;
            param_2[0x5d] = uStack_1f0;
            param_2[0x60] = uStack_1d8;
            param_2[0x5f] = uStack_1e0;
            param_2[0x61] = uStack_1d0;
            param_2[0x54] = uStack_238;
            param_2[0x53] = puStack_240;
            param_2[0x56] = uStack_228;
            param_2[0x55] = puStack_230;
            param_2[0x58] = uStack_218;
            param_2[0x57] = uStack_220;
            param_2[0x5a] = uStack_208;
            param_2[0x59] = uStack_2d0;
            param_2[0x4c] = pppcStack_278;
            param_2[0x4b] = pppcStack_280;
            param_2[0x4e] = pppcStack_268;
            param_2[0x4d] = pppcStack_270;
            param_2[0x50] = pppcStack_258;
            param_2[0x4f] = pppcStack_260;
            param_2[0x52] = uStack_248;
            param_2[0x51] = puStack_250;
            param_2[0x62] = lVar23 + 0x10;
            *(undefined1 *)((long)param_2 + 0x534) = 0;
            goto LAB_100b11164;
          }
          pppcStack_108 = (char ***)param_2[0x2b];
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
              ((bRam000000010b62ec30 - 1 < 2 ||
               ((bRam000000010b62ec30 != 0 &&
                (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha4ad4867fa26a8f2E
                                    ), cVar10 != '\0')))))) &&
             (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha4ad4867fa26a8f2E
                                 ), (uVar13 & 1) != 0)) {
            pppcStack_268 =
                 (char ***)
                 (
                 ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha4ad4867fa26a8f2E
                 + 0x30);
            pppcStack_340 = (char ***)&pppcStack_108;
            pppcStack_338 =
                 (char ***)
                 __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
            ;
            pppcStack_1b8 = (char ***)&pppcStack_340;
            pppcStack_1c0 = (char ***)s_failed_to_read_enabled_state__108ad0645;
            pppcStack_d8 = (char ***)&pppcStack_1c0;
            pppcStack_d0 = (char ***)&UNK_10b208fd0;
            pppcStack_278 = (char ***)&pppcStack_d8;
            pppcStack_280 = (char ***)0x1;
            pppcStack_270 = (char ***)0x1;
            FUN_100b0d038(&pppcStack_280);
          }
          else {
            lVar23 = 
            ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha4ad4867fa26a8f2E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
              pppcStack_398 =
                   *(char ****)
                    (
                    ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha4ad4867fa26a8f2E
                    + 0x20);
              pppcStack_390 =
                   *(char ****)
                    (
                    ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha4ad4867fa26a8f2E
                    + 0x28);
              pppcStack_3a0 = (char ***)0x1;
              puVar2 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar2 = &UNK_10b3c24c8;
              }
              unaff_x23 = ppppcRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                unaff_x23 = (char ****)&UNK_109adfc03;
              }
              iVar11 = (**(code **)(puVar2 + 0x18))(unaff_x23,&pppcStack_3a0);
              if (iVar11 != 0) {
                pppcStack_268 =
                     (char ***)
                     (
                     ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha4ad4867fa26a8f2E
                     + 0x30);
                pppcStack_1c0 = (char ***)&pppcStack_108;
                pppcStack_1b8 =
                     (char ***)
                     __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
                ;
                pppcStack_d0 = (char ***)&pppcStack_1c0;
                pppcStack_d8 = (char ***)s_failed_to_read_enabled_state__108ad0645;
                pppcStack_f0 = (char ***)&pppcStack_d8;
                pppcStack_e8 = (char ***)&UNK_10b208fd0;
                pppcStack_278 = (char ***)&pppcStack_f0;
                pppcStack_280 = (char ***)0x1;
                pppcStack_270 = (char ***)0x1;
                pppcStack_338 = pppcStack_398;
                pppcStack_340 = pppcStack_3a0;
                pppcStack_330 = pppcStack_390;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar23,unaff_x23,puVar2,&pppcStack_340,&pppcStack_280);
              }
            }
          }
          lVar23 = FUN_100c35750(&UNK_108cb8744,0xb);
          (*(code *)**pppcStack_108)();
          goto LAB_100b11aa8;
        }
        *param_1 = -0x7fffffffffffffff;
        *(undefined1 *)((long)param_2 + 0x226) = 3;
        goto LAB_100b11b68;
      }
      lVar23 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x14,&UNK_108cb8414,0xc);
LAB_100b11ac4:
      if (param_2[0x24] != 0) {
        _free(param_2[0x25]);
      }
      func_0x000100e3c8d4(param_2 + 0x21);
      *(undefined1 *)(param_2 + 0x45) = 0;
      (**(code **)(param_2[0x1d] + 0x20))(param_2 + 0x20,param_2[0x1e],param_2[0x1f]);
      plVar22 = (long *)param_2[0x1b];
      *(undefined1 *)((long)param_2 + 0x229) = 0;
      if (plVar22 != (long *)0x0) {
        lVar24 = *plVar22;
        *plVar22 = lVar24 + -1;
        LORelease();
        if (lVar24 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E();
        }
      }
      lVar24 = *(long *)param_2[0x1a];
      *(long *)param_2[0x1a] = lVar24 + -1;
      LORelease();
      if (lVar24 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE();
      }
      lVar24 = -0x8000000000000000;
LAB_100b11b40:
      *param_1 = lVar24;
      param_1[1] = lVar23;
      param_1[2] = (long)unaff_x23;
      param_1[4] = lStack_88;
      param_1[3] = lStack_90;
      param_1[6] = lStack_78;
      param_1[5] = lStack_80;
      *(undefined1 *)((long)param_2 + 0x226) = 1;
      if (lVar24 != -0x7fffffffffffffff) {
        func_0x000100e83768(param_2 + 0xd);
        uVar18 = 1;
        goto LAB_100b11b84;
      }
LAB_100b11b68:
      *param_1 = -0x7fffffffffffffff;
      uVar18 = 3;
LAB_100b11b84:
      *(undefined1 *)(param_2 + 0x152) = uVar18;
      return;
    }
    func_0x000108a07af4(&UNK_10b22dc40);
LAB_100b11f90:
    func_0x000108a07b10(&UNK_10b22dc40);
    uVar19 = extraout_w8;
  }
  else {
    if (bVar4 != 3) goto LAB_100b11f90;
    bVar4 = *(byte *)((long)param_2 + 0x226);
    uVar19 = (uint)bVar4;
    if (4 < bVar4) {
      if (bVar4 < 7) {
        if (bVar4 == 5) {
LAB_100b108c8:
          FUN_100b13ad8(&cStack_388,param_2 + 0x46,param_3);
          if (cStack_388 == '\x02') {
            *param_1 = -0x7fffffffffffffff;
            *(undefined1 *)((long)param_2 + 0x226) = 5;
            goto LAB_100b11b68;
          }
          param_2[0x2d] = uStack_380;
          param_2[0x2c] = CONCAT71(uStack_387,cStack_388);
          if (*(char *)(param_2 + 0x48) == '\x04') {
            if ((*(char *)(param_2 + 0x54) == '\x03') && (*(char *)(param_2 + 0x53) == '\x03')) {
              __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                        (param_2 + 0x4b);
              if (param_2[0x4c] != 0) {
                (**(code **)(param_2[0x4c] + 0x18))(param_2[0x4d]);
              }
            }
          }
          else if (*(char *)(param_2 + 0x48) == '\x03') {
            FUN_100cd5a2c(param_2 + 0x49);
          }
          if ((*(byte *)(param_2 + 0x2c) & 1) != 0) {
            pppcStack_108 = (char ***)param_2[0x2d];
            if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
               (((bRam000000010b62ec48 - 1 < 2 ||
                 ((bRam000000010b62ec48 != 0 &&
                  (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hab92d244ec3b8ac0E
                                      ), cVar10 != '\0')))) &&
                (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                    (
                                    ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hab92d244ec3b8ac0E
                                    ), (uVar13 & 1) != 0)))) {
              pppcStack_268 =
                   (char ***)
                   (
                   ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hab92d244ec3b8ac0E
                   + 0x30);
              pppcStack_340 = (char ***)&pppcStack_108;
              pppcStack_338 =
                   (char ***)
                   __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
              ;
              pppcStack_1b8 = (char ***)&pppcStack_340;
              pppcStack_1c0 = (char ***)s__failed_to_evaluate_method_polic_108ad069a;
              pppcStack_d8 = (char ***)&pppcStack_1c0;
              pppcStack_d0 = (char ***)&UNK_10b208fd0;
              pppcStack_278 = (char ***)&pppcStack_d8;
              pppcStack_280 = (char ***)0x1;
              pppcStack_270 = (char ***)0x1;
              FUN_100b0cef8(&pppcStack_280);
            }
            else {
              lVar23 = 
              ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hab92d244ec3b8ac0E
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
                pppcStack_370 =
                     *(char ****)
                      (
                      ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hab92d244ec3b8ac0E
                      + 0x20);
                pppcStack_368 =
                     *(char ****)
                      (
                      ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hab92d244ec3b8ac0E
                      + 0x28);
                pppcStack_378 = (char ***)0x1;
                puVar2 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_10b3c24c8;
                }
                unaff_x23 = ppppcRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  unaff_x23 = (char ****)&UNK_109adfc03;
                }
                iVar11 = (**(code **)(puVar2 + 0x18))(unaff_x23,&pppcStack_378);
                if (iVar11 != 0) {
                  pppcStack_268 =
                       (char ***)
                       (
                       ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hab92d244ec3b8ac0E
                       + 0x30);
                  pppcStack_1c0 = (char ***)&pppcStack_108;
                  pppcStack_1b8 =
                       (char ***)
                       __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
                  ;
                  pppcStack_d0 = (char ***)&pppcStack_1c0;
                  pppcStack_d8 = (char ***)s__failed_to_evaluate_method_polic_108ad069a;
                  pppcStack_f0 = (char ***)&pppcStack_d8;
                  pppcStack_e8 = (char ***)&UNK_10b208fd0;
                  pppcStack_278 = (char ***)&pppcStack_f0;
                  pppcStack_280 = (char ***)0x1;
                  pppcStack_270 = (char ***)0x1;
                  pppcStack_338 = pppcStack_370;
                  pppcStack_340 = pppcStack_378;
                  pppcStack_330 = pppcStack_368;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar23,unaff_x23,puVar2,&pppcStack_340,&pppcStack_280);
                }
              }
            }
            lVar23 = FUN_100c35750(&UNK_108cb8744,0xb);
            (*(code *)**pppcStack_108)();
            goto LAB_100b11aa8;
          }
          if (*(char *)((long)param_2 + 0x161) == '\x01') {
            func_0x000100025ae8(&pppcStack_1c0,param_2 + 0x24);
            uVar5 = *(undefined2 *)((long)param_2 + 0x224);
            if (param_2[0x27] == -0x8000000000000000) {
              pppcStack_340 = (char ***)0x8000000000000000;
            }
            else {
              func_0x000100025ae8(&pppcStack_340,param_2 + 0x27);
            }
            pppcStack_278 = pppcStack_1b8;
            pppcStack_280 = pppcStack_1c0;
            pppcStack_270 = pppcStack_1b0;
            pppcStack_260 = pppcStack_338;
            pppcStack_268 = pppcStack_340;
            pppcStack_258 = pppcStack_330;
            param_2[0x32] = pppcStack_338;
            param_2[0x31] = pppcStack_340;
            param_2[0x33] = pppcStack_330;
            param_2[0x34] = 0x8000000000000000;
            param_2[0x37] = 0x8000000000000000;
            param_2[0x3a] = 0x8000000000000000;
            *(undefined1 *)((long)param_2 + 0x1ea) = 3;
            param_2[0x2f] = pppcStack_1b8;
            param_2[0x2e] = pppcStack_1c0;
            param_2[0x30] = pppcStack_1b0;
            *(undefined2 *)(param_2 + 0x3d) = uVar5;
            plVar22 = (long *)0x0;
            if (param_2[0x1b] != 0) {
              plVar22 = param_2 + 0x1b;
            }
            param_2[0x46] = param_2[0x1a] + 0x10;
            param_2[0x47] = param_2 + 0x2e;
            param_2[0x48] = plVar22;
            *(undefined1 *)(param_2 + 0x4c) = 0;
            goto LAB_100b10790;
          }
          uVar20 = 0;
          if (param_2[0x27] != -0x8000000000000000) {
            uVar20 = param_2[0x28];
          }
          __ZN19codex_network_proxy6socks537emit_socks_block_decision_audit_event17h443d4a0c40ce31ffE
                    (param_2[0x1a] + 0x10,1,&UNK_108cb836e,0x12,3,param_2[0x25],param_2[0x26],
                     *(undefined2 *)((long)param_2 + 0x224),uVar20,param_2[0x29]);
          *(undefined1 *)((long)param_2 + 0x254) = 0;
          param_2[0x46] = &UNK_108cb836e;
          param_2[0x47] = 0x12;
          *(undefined2 *)((long)param_2 + 0x252) = 0x301;
          param_2[0x48] = param_2[0x25];
          param_2[0x49] = param_2[0x26];
          *(undefined2 *)(param_2 + 0x4a) = *(undefined2 *)((long)param_2 + 0x224);
          lVar23 = param_2[0x1a];
          func_0x000100025ae8(&pppcStack_f0,param_2 + 0x24);
          unaff_x23 = (char ****)_malloc(0x12);
          if (unaff_x23 == (char ****)0x0) {
            func_0x0001087c9084(1,0x12);
            goto LAB_100b120a0;
          }
          *(undefined2 *)(unaff_x23 + 2) = 0x6465;
          unaff_x23[1] = (char ***)0x776f6c6c615f746f;
          *unaff_x23 = (char ***)0x6e5f646f6874656d;
          if (param_2[0x27] == -0x8000000000000000) {
            pppcStack_d8 = (char ***)0x8000000000000000;
          }
          else {
            func_0x000100025ae8(&pppcStack_d8,param_2 + 0x27);
          }
          puVar17 = (undefined8 *)_malloc(10);
          if (puVar17 == (undefined8 *)0x0) {
            func_0x0001087c9084(1,10);
            goto LAB_100b120a0;
          }
          *(undefined2 *)(puVar17 + 1) = 0x7064;
          *puVar17 = 0x752d35736b636f73;
          cVar10 = *(char *)((long)param_2 + 0x254);
          uVar20 = 3;
          if (cVar10 == '\0') {
            uVar20 = 4;
          }
          lVar24 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(uVar20,1);
          if (lVar24 == 0) {
            func_0x0001087c9084(1,uVar20);
            goto LAB_100b120a0;
          }
          puVar2 = &UNK_108cb852f;
          if (cVar10 == '\0') {
            puVar2 = &UNK_108cde39c;
          }
          _memcpy(lVar24,puVar2,uVar20);
          uVar25 = *(undefined8 *)(&UNK_108cd9d38 + (ulong)*(byte *)((long)param_2 + 0x252) * 8);
          uVar27 = *(undefined8 *)(&UNK_10b253338 + (ulong)*(byte *)((long)param_2 + 0x252) * 8);
          lVar9 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(uVar25,1);
          if (lVar9 == 0) {
            func_0x0001087c9084(1,uVar25);
            goto LAB_100b120a0;
          }
          _memcpy(lVar9,uVar27,uVar25);
          uStack_116 = *(undefined2 *)((long)param_2 + 0x224);
          pppcStack_1b8 = pppcStack_e8;
          pppcStack_1c0 = pppcStack_f0;
          pppcStack_1b0 = pppcStack_e0;
          pppcStack_1a8 = (char ***)0x12;
          pppcStack_170 = pppcStack_d0;
          pppcStack_178 = pppcStack_d8;
          uStack_114 = 0;
          uStack_190 = 10;
          pppcStack_198 = (char ***)0x12;
          pppcStack_168 = pppcStack_c8;
          uStack_180 = 10;
          uStack_160 = 0x8000000000000000;
          uStack_118 = 1;
          pppcStack_1a0 = (char ***)unaff_x23;
          puStack_188 = puVar17;
          uStack_148 = uVar20;
          lStack_140 = lVar24;
          uStack_138 = uVar20;
          uStack_130 = uVar25;
          lStack_128 = lVar9;
          uStack_120 = uVar25;
          __ZN19codex_network_proxy7runtime14BlockedRequest3new17h8d8b60bc1b24a062E
                    (&pppcStack_280,&pppcStack_1c0);
          uStack_2b8 = uStack_1f8;
          uStack_2c0 = uStack_200;
          uStack_2a8 = uStack_1e8;
          uStack_2b0 = uStack_1f0;
          uStack_298 = uStack_1d8;
          uStack_2a0 = uStack_1e0;
          uStack_290 = uStack_1d0;
          uStack_2f8 = uStack_238;
          puStack_300 = puStack_240;
          uStack_2e8 = uStack_228;
          puStack_2f0 = puStack_230;
          uStack_2d8 = uStack_218;
          uStack_2e0 = uStack_220;
          uStack_2c8 = uStack_208;
          uStack_2d0 = CONCAT44(uStack_20c,CONCAT22(uStack_20e,uStack_210));
          pppcStack_338 = pppcStack_278;
          pppcStack_340 = pppcStack_280;
          pppcStack_328 = pppcStack_268;
          pppcStack_330 = pppcStack_270;
          pppcStack_318 = pppcStack_258;
          pppcStack_320 = pppcStack_260;
          uStack_308 = uStack_248;
          puStack_310 = puStack_250;
          param_2[0x5c] = uStack_1f8;
          param_2[0x5b] = uStack_200;
          param_2[0x5e] = uStack_1e8;
          param_2[0x5d] = uStack_1f0;
          param_2[0x60] = uStack_1d8;
          param_2[0x5f] = uStack_1e0;
          param_2[0x61] = uStack_1d0;
          param_2[0x54] = uStack_238;
          param_2[0x53] = puStack_240;
          param_2[0x56] = uStack_228;
          param_2[0x55] = puStack_230;
          param_2[0x58] = uStack_218;
          param_2[0x57] = uStack_220;
          param_2[0x5a] = uStack_208;
          param_2[0x59] = uStack_2d0;
          param_2[0x4c] = pppcStack_278;
          param_2[0x4b] = pppcStack_280;
          param_2[0x4e] = pppcStack_268;
          param_2[0x4d] = pppcStack_270;
          param_2[0x50] = pppcStack_258;
          param_2[0x4f] = pppcStack_260;
          param_2[0x52] = uStack_248;
          param_2[0x51] = puStack_250;
          param_2[0x62] = lVar23 + 0x10;
          *(undefined1 *)((long)param_2 + 0x534) = 0;
        }
        auVar28 = FUN_100b13cb0(param_2 + 0x4b,param_3);
        puVar17 = auVar28._8_8_;
        if ((auVar28._0_8_ & 1) == 0) {
          FUN_100ccf34c(param_2 + 0x4b);
          if (puVar17 != (undefined8 *)0x0) {
            (**(code **)*puVar17)(puVar17);
          }
          ppppcVar15 = (char ****)_malloc(0x23);
          if (ppppcVar15 == (char ****)0x0) {
            func_0x0001087c9084(1,0x23);
            goto LAB_100b120a0;
          }
          ppppcVar15[1] = (char ***)0x776f6c6c6120746f;
          *ppppcVar15 = (char ***)0x6e20646f6874654d;
          ppppcVar15[3] = (char ***)0x6f6d20646574696d;
          ppppcVar15[2] = (char ***)0x696c206e69206465;
          *(undefined4 *)((long)ppppcVar15 + 0x1f) = 0x2e65646f;
          pppcStack_280 = (char ***)0x23;
          pppcStack_270 = (char ***)0x23;
          pppcStack_278 = (char ***)ppppcVar15;
          lVar23 = __ZN3std2io5error5Error3new17h29bf53227769a2d6E(1,&pppcStack_280);
          goto LAB_100b11aa8;
        }
        *param_1 = -0x7fffffffffffffff;
        *(undefined1 *)((long)param_2 + 0x226) = 6;
      }
      else if (bVar4 == 7) {
LAB_100b10790:
        unaff_x23 = (char ****)(param_2 + 0x46);
        FUN_100affbf8(&lStack_360,unaff_x23,param_3);
        if (lStack_360 != -0x7ffffffffffffffe) {
          *(undefined1 *)((long)param_2 + 0x227) = 1;
          param_2[0x3f] = uStack_358;
          param_2[0x3e] = lStack_360;
          param_2[0x41] = uStack_348;
          param_2[0x40] = uStack_350;
          if (*(char *)(param_2 + 0x4c) == '\x04') {
            uVar20 = param_2[0x4d];
            puVar17 = (undefined8 *)param_2[0x4e];
            pcVar8 = (code *)*puVar17;
            if (pcVar8 != (code *)0x0) {
              (*pcVar8)(uVar20);
            }
            if (puVar17[1] != 0) {
              _free(uVar20);
            }
          }
          else if (*(char *)(param_2 + 0x4c) == '\x03') {
            FUN_100cc8f78(param_2 + 0x4d);
          }
          lVar23 = param_2[0x3e];
          if (lVar23 == -0x7fffffffffffffff) {
            pppcStack_108 = (char ***)param_2[0x3f];
            if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
                ((bRam000000010b62ec00 - 1 < 2 ||
                 ((bRam000000010b62ec00 != 0 &&
                  (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h42614b5c7705b16dE
                                      ), cVar10 != '\0')))))) &&
               (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h42614b5c7705b16dE
                                   ), (uVar13 & 1) != 0)) {
              pppcStack_268 =
                   (char ***)
                   (
                   ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h42614b5c7705b16dE
                   + 0x30);
              pppcStack_340 = (char ***)&pppcStack_108;
              pppcStack_338 =
                   (char ***)
                   __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
              ;
              pppcStack_1b8 = (char ***)&pppcStack_340;
              pppcStack_1c0 = (char ***)s_failed_to_evaluate_UDP_host__108ad08dd;
              pppcStack_d8 = (char ***)&pppcStack_1c0;
              pppcStack_d0 = (char ***)&UNK_10b208fd0;
              pppcStack_278 = (char ***)&pppcStack_d8;
              pppcStack_280 = (char ***)0x1;
              pppcStack_270 = (char ***)0x1;
              FUN_100b0cdb8(&pppcStack_280);
            }
            else {
              lVar23 = 
              ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h42614b5c7705b16dE
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
                pppcStack_a0 = *(char ****)
                                (
                                ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h42614b5c7705b16dE
                                + 0x20);
                pppcStack_98 = *(char ****)
                                (
                                ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h42614b5c7705b16dE
                                + 0x28);
                pppcStack_a8 = (char ***)0x1;
                puVar2 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_10b3c24c8;
                }
                unaff_x23 = ppppcRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  unaff_x23 = (char ****)&UNK_109adfc03;
                }
                iVar11 = (**(code **)(puVar2 + 0x18))(unaff_x23,&pppcStack_a8);
                if (iVar11 != 0) {
                  pppcStack_268 =
                       (char ***)
                       (
                       ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h42614b5c7705b16dE
                       + 0x30);
                  pppcStack_1c0 = (char ***)&pppcStack_108;
                  pppcStack_1b8 =
                       (char ***)
                       __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
                  ;
                  pppcStack_d0 = (char ***)&pppcStack_1c0;
                  pppcStack_d8 = (char ***)s_failed_to_evaluate_UDP_host__108ad08dd;
                  pppcStack_f0 = (char ***)&pppcStack_d8;
                  pppcStack_e8 = (char ***)&UNK_10b208fd0;
                  pppcStack_278 = (char ***)&pppcStack_f0;
                  pppcStack_280 = (char ***)0x1;
                  pppcStack_270 = (char ***)0x1;
                  pppcStack_338 = pppcStack_a0;
                  pppcStack_340 = pppcStack_a8;
                  pppcStack_330 = pppcStack_98;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar23,unaff_x23,puVar2,&pppcStack_340,&pppcStack_280);
                }
              }
            }
            lVar23 = FUN_100c35750(&UNK_108cb8744,0xb);
            (*(code *)**pppcStack_108)();
            goto LAB_100b11cd0;
          }
          if (lVar23 != -0x8000000000000000) {
            param_2[0x48] = param_2[0x40];
            param_2[0x47] = param_2[0x3f];
            *unaff_x23 = (char ***)param_2[0x3e];
            *(undefined1 *)((long)param_2 + 0x26c) = *(undefined1 *)(param_2 + 0x41);
            param_2[0x49] = param_2[0x47];
            param_2[0x4a] = param_2[0x48];
            *(undefined1 *)((long)param_2 + 0x26a) = *(undefined1 *)((long)param_2 + 0x209);
            *(undefined1 *)((long)param_2 + 0x26b) = 3;
            param_2[0x4b] = param_2[0x25];
            param_2[0x4c] = param_2[0x26];
            *(undefined2 *)(param_2 + 0x4d) = *(undefined2 *)((long)param_2 + 0x224);
            lVar23 = param_2[0x1a];
            func_0x000100025ae8(&pppcStack_108,param_2 + 0x24);
            func_0x000100025ae8(&pppcStack_f0,unaff_x23);
            if (param_2[0x27] == -0x8000000000000000) {
              pppcStack_d8 = (char ***)0x8000000000000000;
            }
            else {
              func_0x000100025ae8(&pppcStack_d8,param_2 + 0x27);
            }
            puVar17 = (undefined8 *)_malloc(10);
            if (puVar17 == (undefined8 *)0x0) {
              func_0x0001087c9084(1,10);
              goto LAB_100b120a0;
            }
            *(undefined2 *)(puVar17 + 1) = 0x7064;
            *puVar17 = 0x752d35736b636f73;
            cVar10 = *(char *)((long)param_2 + 0x26c);
            uVar20 = 3;
            if (cVar10 == '\0') {
              uVar20 = 4;
            }
            lVar24 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(uVar20,1);
            if (lVar24 == 0) {
              func_0x0001087c9084(1,uVar20);
              goto LAB_100b120a0;
            }
            puVar2 = &UNK_108cb852f;
            if (cVar10 == '\0') {
              puVar2 = &UNK_108cde39c;
            }
            _memcpy(lVar24,puVar2,uVar20);
            uVar25 = *(undefined8 *)(&UNK_108cd9d38 + (ulong)*(byte *)((long)param_2 + 0x26a) * 8);
            uVar27 = *(undefined8 *)(&UNK_10b253338 + (ulong)*(byte *)((long)param_2 + 0x26a) * 8);
            lVar9 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(uVar25,1);
            if (lVar9 == 0) {
              func_0x0001087c9084(1,uVar25);
              goto LAB_100b120a0;
            }
            _memcpy(lVar9,uVar27,uVar25);
            uStack_116 = *(undefined2 *)((long)param_2 + 0x224);
            pppcStack_1b8 = pppcStack_100;
            pppcStack_1c0 = pppcStack_108;
            pppcStack_1a0 = pppcStack_e8;
            pppcStack_1a8 = pppcStack_f0;
            pppcStack_1b0 = pppcStack_f8;
            pppcStack_198 = pppcStack_e0;
            pppcStack_170 = pppcStack_d0;
            pppcStack_178 = pppcStack_d8;
            uStack_114 = 2;
            uStack_190 = 10;
            pppcStack_168 = pppcStack_c8;
            uStack_180 = 10;
            uStack_160 = 0x8000000000000000;
            uStack_118 = 1;
            puStack_188 = puVar17;
            uStack_148 = uVar20;
            lStack_140 = lVar24;
            uStack_138 = uVar20;
            uStack_130 = uVar25;
            lStack_128 = lVar9;
            uStack_120 = uVar25;
            __ZN19codex_network_proxy7runtime14BlockedRequest3new17h8d8b60bc1b24a062E
                      (&pppcStack_280,&pppcStack_1c0);
            uStack_2b8 = uStack_1f8;
            uStack_2c0 = uStack_200;
            uStack_2a8 = uStack_1e8;
            uStack_2b0 = uStack_1f0;
            uStack_298 = uStack_1d8;
            uStack_2a0 = uStack_1e0;
            uStack_290 = uStack_1d0;
            uStack_2f8 = uStack_238;
            puStack_300 = puStack_240;
            uStack_2e8 = uStack_228;
            puStack_2f0 = puStack_230;
            uStack_2d0 = CONCAT44(uStack_20c,CONCAT22(uStack_20e,uStack_210));
            uStack_2d8 = uStack_218;
            uStack_2e0 = uStack_220;
            uStack_2c8 = uStack_208;
            pppcStack_338 = pppcStack_278;
            pppcStack_340 = pppcStack_280;
            pppcStack_328 = pppcStack_268;
            pppcStack_330 = pppcStack_270;
            pppcStack_318 = pppcStack_258;
            pppcStack_320 = pppcStack_260;
            uStack_308 = uStack_248;
            puStack_310 = puStack_250;
            param_2[0x5f] = uStack_1f8;
            param_2[0x5e] = uStack_200;
            param_2[0x61] = uStack_1e8;
            param_2[0x60] = uStack_1f0;
            param_2[99] = uStack_1d8;
            param_2[0x62] = uStack_1e0;
            param_2[100] = uStack_1d0;
            param_2[0x57] = uStack_238;
            param_2[0x56] = puStack_240;
            param_2[0x59] = uStack_228;
            param_2[0x58] = puStack_230;
            param_2[0x5b] = uStack_218;
            param_2[0x5a] = uStack_220;
            param_2[0x5d] = uStack_208;
            param_2[0x5c] = uStack_2d0;
            param_2[0x4f] = pppcStack_278;
            param_2[0x4e] = pppcStack_280;
            param_2[0x51] = pppcStack_268;
            param_2[0x50] = pppcStack_270;
            param_2[0x53] = pppcStack_258;
            param_2[0x52] = pppcStack_260;
            param_2[0x55] = uStack_248;
            param_2[0x54] = puStack_250;
            param_2[0x65] = lVar23 + 0x10;
            *(undefined1 *)((long)param_2 + 0x54c) = 0;
            goto LAB_100b117d8;
          }
          lStack_88 = param_2[0x1e];
          lStack_90 = param_2[0x1d];
          lStack_78 = param_2[0x20];
          lStack_80 = param_2[0x1f];
          *(undefined2 *)(param_2 + 0x45) = 0;
          lVar24 = param_2[0x21];
          lVar23 = param_2[0x22];
          unaff_x23 = (char ****)param_2[0x23];
          goto LAB_100b11cd4;
        }
        *param_1 = -0x7fffffffffffffff;
        *(undefined1 *)((long)param_2 + 0x226) = 7;
      }
      else {
LAB_100b117d8:
        auVar28 = FUN_100b13cb0(param_2 + 0x4e,param_3);
        puVar17 = auVar28._8_8_;
        if ((auVar28._0_8_ & 1) == 0) {
          FUN_100ccf34c(param_2 + 0x4e);
          if (puVar17 != (undefined8 *)0x0) {
            (**(code **)*puVar17)(puVar17);
          }
          pppcStack_108 = (char ***)param_2[0x28];
          pppcStack_100 = (char ***)param_2[0x29];
          if (param_2[0x27] == -0x8000000000000000) {
            pppcStack_108 = (char ***)0x1;
            pppcStack_100 = (char ***)(char ****)0x0;
          }
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
              ((bRam000000010b62ec18 - 1 < 2 ||
               ((bRam000000010b62ec18 != 0 &&
                (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h50413effe9aa6dfbE
                                    ), cVar10 != '\0')))))) &&
             (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h50413effe9aa6dfbE
                                 ), (uVar13 & 1) != 0)) {
            pppcStack_328 =
                 (char ***)
                 (
                 ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h50413effe9aa6dfbE
                 + 0x30);
            pppcStack_260 = (char ***)(param_2 + 0x46);
            pppcStack_280 = (char ***)&pppcStack_108;
            pppcStack_278 = (char ***)&DAT_100c7b3a0;
            pppcStack_270 = (char ***)(param_2 + 0x24);
            pppcStack_268 = (char ***)&DAT_10112965c;
            pppcStack_258 = (char ***)&DAT_10112965c;
            pppcStack_1b8 = (char ***)&pppcStack_280;
            pppcStack_1c0 = (char ***)s_SOCKS_UDP_blocked__client____hos_108ad08fd;
            pppcStack_d8 = (char ***)&pppcStack_1c0;
            pppcStack_d0 = (char ***)&UNK_10b208fd0;
            pppcStack_338 = (char ***)&pppcStack_d8;
            pppcStack_340 = (char ***)0x1;
            pppcStack_330 = (char ***)0x1;
            FUN_100b0cc7c(&pppcStack_340);
          }
          else {
            lVar23 = 
            ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h50413effe9aa6dfbE
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              pppcStack_b8 = *(char ****)
                              (
                              ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h50413effe9aa6dfbE
                              + 0x20);
              pppcStack_b0 = *(char ****)
                              (
                              ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h50413effe9aa6dfbE
                              + 0x28);
              pppcStack_c0 = (char ***)0x2;
              puVar2 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar2 = &UNK_10b3c24c8;
              }
              ppppcVar15 = ppppcRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                ppppcVar15 = (char ****)&UNK_109adfc03;
              }
              iVar11 = (**(code **)(puVar2 + 0x18))(ppppcVar15,&pppcStack_c0);
              if (iVar11 != 0) {
                pppcStack_328 =
                     (char ***)
                     (
                     ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h50413effe9aa6dfbE
                     + 0x30);
                pppcStack_260 = (char ***)(param_2 + 0x46);
                pppcStack_280 = (char ***)&pppcStack_108;
                pppcStack_278 = (char ***)&DAT_100c7b3a0;
                pppcStack_270 = (char ***)(param_2 + 0x24);
                pppcStack_268 = (char ***)&DAT_10112965c;
                pppcStack_258 = (char ***)&DAT_10112965c;
                pppcStack_d0 = (char ***)&pppcStack_280;
                pppcStack_d8 = (char ***)s_SOCKS_UDP_blocked__client____hos_108ad08fd;
                pppcStack_f0 = (char ***)&pppcStack_d8;
                pppcStack_e8 = (char ***)&UNK_10b208fd0;
                pppcStack_338 = (char ***)&pppcStack_f0;
                pppcStack_340 = (char ***)0x1;
                pppcStack_330 = (char ***)0x1;
                pppcStack_1b8 = pppcStack_b8;
                pppcStack_1c0 = pppcStack_c0;
                pppcStack_1b0 = pppcStack_b0;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar23,ppppcVar15,puVar2,&pppcStack_1c0,&pppcStack_340);
              }
            }
          }
          auVar28 = FUN_1047c0578(param_2[0x47],param_2[0x48]);
          ppppcVar15 = auVar28._8_8_;
          if (ppppcVar15 == (char ****)0x0) {
            unaff_x23 = (char ****)0x1;
          }
          else {
            unaff_x23 = (char ****)_malloc(ppppcVar15);
            if (unaff_x23 == (char ****)0x0) {
              func_0x0001087c9084(1,ppppcVar15);
              goto LAB_100b120a0;
            }
          }
          _memcpy(unaff_x23,auVar28._0_8_,ppppcVar15);
          pppcStack_280 = (char ***)ppppcVar15;
          pppcStack_278 = (char ***)unaff_x23;
          pppcStack_270 = (char ***)ppppcVar15;
          lVar23 = __ZN3std2io5error5Error3new17h29bf53227769a2d6E(1,&pppcStack_280);
          if (param_2[0x46] != 0) {
            _free(param_2[0x47]);
          }
LAB_100b11cd0:
          lVar24 = -0x8000000000000000;
LAB_100b11cd4:
          if (param_2[0x3e] != -0x7fffffffffffffff) {
            *(undefined1 *)((long)param_2 + 0x227) = 0;
          }
          *(undefined1 *)((long)param_2 + 0x227) = 0;
          FUN_100e43948(param_2 + 0x2e);
          if ((param_2[0x27] != -0x8000000000000000) && (param_2[0x27] != 0)) {
            _free(param_2[0x28]);
          }
          if (param_2[0x24] != 0) {
            _free(param_2[0x25]);
          }
          if ((*(byte *)(param_2 + 0x45) & 1) != 0) {
            func_0x000100e3c8d4(param_2 + 0x21);
          }
          *(undefined1 *)(param_2 + 0x45) = 0;
          if ((*(byte *)((long)param_2 + 0x229) & 1) != 0) {
            (**(code **)(param_2[0x1d] + 0x20))(param_2 + 0x20,param_2[0x1e],param_2[0x1f]);
          }
          plVar22 = (long *)param_2[0x1b];
          *(undefined1 *)((long)param_2 + 0x229) = 0;
          if (plVar22 != (long *)0x0) {
            lVar9 = *plVar22;
            *plVar22 = lVar9 + -1;
            LORelease();
            if (lVar9 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E();
            }
          }
          lVar9 = *(long *)param_2[0x1a];
          *(long *)param_2[0x1a] = lVar9 + -1;
          LORelease();
          if (lVar9 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE();
          }
          goto LAB_100b11b40;
        }
        *param_1 = -0x7fffffffffffffff;
        *(undefined1 *)((long)param_2 + 0x226) = 8;
      }
      goto LAB_100b11b68;
    }
    if (2 < bVar4) {
      if (bVar4 == 3) goto LAB_100b106fc;
LAB_100b11164:
      auVar28 = FUN_100b13cb0(param_2 + 0x4b,param_3);
      puVar17 = auVar28._8_8_;
      if ((auVar28._0_8_ & 1) != 0) {
        *param_1 = -0x7fffffffffffffff;
        *(undefined1 *)((long)param_2 + 0x226) = 4;
        goto LAB_100b11b68;
      }
      FUN_100ccf34c(param_2 + 0x4b);
      if (puVar17 != (undefined8 *)0x0) {
        (**(code **)*puVar17)(puVar17);
      }
      pppcStack_108 = (char ***)param_2[0x28];
      pppcStack_100 = (char ***)param_2[0x29];
      if (param_2[0x27] == -0x8000000000000000) {
        pppcStack_108 = (char ***)0x1;
        pppcStack_100 = (char ***)(char ****)0x0;
      }
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b62ec60 - 1 < 2 ||
           ((bRam000000010b62ec60 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hee40387b7dd858caE
                                ), cVar10 != '\0')))) &&
          (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hee40387b7dd858caE
                              ), (uVar13 & 1) != 0)))) {
        pppcStack_328 =
             (char ***)
             (
             ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hee40387b7dd858caE
             + 0x30);
        pppcStack_270 = (char ***)(param_2 + 0x24);
        pppcStack_280 = (char ***)&pppcStack_108;
        pppcStack_278 = (char ***)&DAT_100c7b3a0;
        pppcStack_268 = (char ***)&DAT_10112965c;
        pppcStack_1b8 = (char ***)&pppcStack_280;
        pppcStack_1c0 = (char ***)s__SOCKS_UDP_blocked__proxy_disabl_108ad08a5;
        pppcStack_d8 = (char ***)&pppcStack_1c0;
        pppcStack_d0 = (char ***)&UNK_10b208fd0;
        pppcStack_338 = (char ***)&pppcStack_d8;
        pppcStack_340 = (char ***)0x1;
        pppcStack_330 = (char ***)0x1;
        FUN_100b0cb40(&pppcStack_340);
      }
      else {
        lVar23 = 
        ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hee40387b7dd858caE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppcStack_3b0 =
               *(char ****)
                (
                ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hee40387b7dd858caE
                + 0x20);
          pppcStack_3a8 =
               *(char ****)
                (
                ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hee40387b7dd858caE
                + 0x28);
          pppcStack_3b8 = (char ***)0x2;
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          unaff_x23 = ppppcRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            unaff_x23 = (char ****)&UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar2 + 0x18))(unaff_x23,&pppcStack_3b8);
          if (iVar11 != 0) {
            pppcStack_328 =
                 (char ***)
                 (
                 ___ZN19codex_network_proxy6socks518inspect_socks5_udp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hee40387b7dd858caE
                 + 0x30);
            pppcStack_270 = (char ***)(param_2 + 0x24);
            pppcStack_280 = (char ***)&pppcStack_108;
            pppcStack_278 = (char ***)&DAT_100c7b3a0;
            pppcStack_268 = (char ***)&DAT_10112965c;
            pppcStack_d0 = (char ***)&pppcStack_280;
            pppcStack_d8 = (char ***)s__SOCKS_UDP_blocked__proxy_disabl_108ad08a5;
            pppcStack_f0 = (char ***)&pppcStack_d8;
            pppcStack_e8 = (char ***)&UNK_10b208fd0;
            pppcStack_338 = (char ***)&pppcStack_f0;
            pppcStack_340 = (char ***)0x1;
            pppcStack_330 = (char ***)0x1;
            pppcStack_1b8 = pppcStack_3b0;
            pppcStack_1c0 = pppcStack_3b8;
            pppcStack_1b0 = pppcStack_3a8;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar23,unaff_x23,puVar2,&pppcStack_1c0,&pppcStack_340);
          }
        }
      }
      ppppcVar15 = (char ****)_malloc(0x19);
      if (ppppcVar15 == (char ****)0x0) {
        func_0x0001087c9084(1,0x19);
        goto LAB_100b120a0;
      }
      ppppcVar15[1] = (char ***)0x73692079786f7270;
      *ppppcVar15 = (char ***)0x206b726f7774656e;
      *(undefined8 *)((long)ppppcVar15 + 0x11) = 0x64656c6261736964;
      *(undefined8 *)((long)ppppcVar15 + 9) = 0x2073692079786f72;
      pppcStack_280 = (char ***)0x19;
      pppcStack_270 = (char ***)0x19;
      pppcStack_278 = (char ***)ppppcVar15;
      lVar23 = __ZN3std2io5error5Error3new17h29bf53227769a2d6E(1,&pppcStack_280);
LAB_100b11aa8:
      if ((param_2[0x27] != -0x8000000000000000) && (param_2[0x27] != 0)) {
        _free(param_2[0x28]);
      }
      goto LAB_100b11ac4;
    }
    if (bVar4 == 0) {
      uVar27 = param_2[0x18];
      uVar25 = param_2[0x17];
      uVar20 = param_2[0x19];
      goto LAB_100b104f8;
    }
  }
  if (uVar19 == 1) {
    func_0x000108a07af4(&UNK_10b22dc10);
  }
  else {
    func_0x000108a07b10(&UNK_10b22dc10);
  }
LAB_100b120a0:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x100b120a4);
  (*pcVar8)();
}

