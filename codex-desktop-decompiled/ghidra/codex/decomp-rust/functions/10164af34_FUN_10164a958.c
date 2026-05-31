
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10164a958(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  bool bVar5;
  long **pplVar6;
  long ****pppplVar7;
  code *pcVar8;
  char cVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined1 uVar13;
  long *****ppppplVar14;
  long lVar15;
  char *****pppppcVar16;
  char *****unaff_x25;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 *puStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  undefined1 auStack_3f8 [440];
  long **pplStack_240;
  long ****pppplStack_238;
  char ****ppppcStack_230;
  char ****ppppcStack_228;
  char ****ppppcStack_220;
  undefined *puStack_218;
  char ****ppppcStack_210;
  char ****ppppcStack_208;
  char ****ppppcStack_200;
  undefined *puStack_1f8;
  long ***ppplStack_1f0;
  undefined *puStack_1e8;
  long ****pppplStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long ***ppplStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long ***ppplStack_180;
  long ***ppplStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  char ****ppppcStack_150;
  char ****ppppcStack_148;
  char ****ppppcStack_140;
  undefined *puStack_138;
  long ***ppplStack_130;
  undefined *puStack_128;
  long lStack_120;
  char *pcStack_110;
  char ****ppppcStack_108;
  long ****pppplStack_100;
  long ***ppplStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  long ****pppplStack_e0;
  undefined *puStack_d8;
  long **pplStack_d0;
  long ****pppplStack_c8;
  char ****ppppcStack_c0;
  char ****ppppcStack_b8;
  char ****ppppcStack_b0;
  undefined *puStack_a8;
  long ***ppplStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  char *pcStack_80;
  char ****ppppcStack_78;
  
  bVar4 = *(byte *)((long)param_2 + 0x712);
  if (bVar4 < 2) {
    if (bVar4 != 0) {
      func_0x000108a07af4(&UNK_10b250350);
LAB_10164b358:
      func_0x000108a07b10(&UNK_10b250350);
LAB_10164b364:
      func_0x000108a07af4(&UNK_10b250308);
LAB_10164b3a8:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10164b3ac);
      (*pcVar8)();
    }
    if (*param_2 == 2) goto LAB_10164b2a8;
    lVar15 = param_2[0x37];
    lVar19 = param_2[0x38];
    uVar13 = *(undefined1 *)((long)param_2 + 0x711);
    param_2[0x39] = lVar15;
    param_2[0x3a] = lVar19;
    param_2[0xe0] = (long)param_2;
    *(undefined1 *)(param_2 + 0xe1) = 0;
    *(undefined1 *)((long)param_2 + 0x709) = uVar13;
    *(char *)((long)param_2 + 0x70a) = (char)param_2[0xe2];
    cVar9 = (char)param_2[0x35];
    plVar1 = param_2;
joined_r0x00010164aa08:
    if (cVar9 == '\x01') {
      if ((*(byte *)((long)param_2 + 0x70a) & 1) == 0) {
        if ((int)*plVar1 != 1) goto LAB_10164aabc;
        unaff_x25 = (char *****)plVar1[0x11];
        lVar17 = plVar1[0x12];
        lVar12 = plVar1[0xf];
        lVar18 = 0;
        if (plVar1[0xd] != -0x8000000000000000) {
          lVar18 = plVar1[0xe];
        }
        if (plVar1[1] == 0) {
          ppppcStack_150 = (char ****)0x0;
          if (plVar1[7] == 0) goto LAB_10164ac00;
LAB_10164aaac:
          FUN_1011ee9ec(&pplStack_d0,plVar1 + 7);
        }
        else {
          FUN_1011ee9ec(&ppppcStack_150,plVar1 + 1);
          if (plVar1[7] != 0) goto LAB_10164aaac;
LAB_10164ac00:
          pplStack_d0 = (long **)0x0;
        }
        puStack_1f8 = puStack_138;
        ppppcStack_200 = ppppcStack_140;
        puStack_1e8 = puStack_128;
        ppplStack_1f0 = ppplStack_130;
        pppplStack_238 = pppplStack_c8;
        pplStack_240 = pplStack_d0;
        ppppcStack_228 = ppppcStack_b8;
        ppppcStack_230 = ppppcStack_c0;
        puStack_218 = puStack_a8;
        ppppcStack_220 = ppppcStack_b0;
        ppppcStack_208 = ppppcStack_148;
        ppppcStack_210 = ppppcStack_150;
        param_2[199] = lVar18;
        param_2[200] = lVar12;
        param_2[0xca] = (long)ppppcStack_148;
        param_2[0xc9] = (long)ppppcStack_150;
        param_2[0xcc] = (long)puStack_138;
        param_2[0xcb] = (long)ppppcStack_140;
        param_2[0xce] = (long)puStack_128;
        param_2[0xcd] = (long)ppplStack_130;
        param_2[0xd0] = (long)pppplStack_c8;
        param_2[0xcf] = (long)pplStack_d0;
        param_2[0xd2] = (long)ppppcStack_b8;
        param_2[0xd1] = (long)ppppcStack_c0;
        param_2[0xd4] = (long)puStack_a8;
        param_2[0xd3] = (long)ppppcStack_b0;
        param_2[0xdb] = lVar15;
        param_2[0xdc] = lVar19;
        param_2[0xdd] = (long)unaff_x25;
        param_2[0xde] = lVar17;
        *(undefined1 *)((long)param_2 + 0x6fa) = 0;
        *(undefined1 *)((long)param_2 + 0x6fb) = uVar13;
LAB_10164ac70:
        param_2[0xd5] = lVar15;
        param_2[0xd6] = lVar19;
        param_2[0xd7] = (long)unaff_x25;
        param_2[0xd8] = lVar17;
        param_2[0xd9] = lVar18;
        param_2[0xda] = lVar12;
        *(undefined1 *)((long)param_2 + 0x6f9) = 1;
        puStack_1d8 = (undefined *)param_2[0xca];
        pppplStack_1e0 = (long ****)param_2[0xc9];
        lStack_1c8 = param_2[0xcc];
        lStack_1d0 = param_2[0xcb];
        lStack_1b8 = param_2[0xce];
        lStack_1c0 = param_2[0xcd];
        *(undefined1 *)(param_2 + 0xdf) = 1;
        puStack_1a8 = (undefined *)param_2[0xd0];
        ppplStack_1b0 = (long ***)param_2[0xcf];
        lStack_198 = param_2[0xd2];
        lStack_1a0 = param_2[0xd1];
        lStack_188 = param_2[0xd4];
        lStack_190 = param_2[0xd3];
        if (lVar18 == 0) {
          *(undefined2 *)(param_2 + 0xdf) = 0;
          ppplStack_178 = (long ***)param_2[0xca];
          ppplStack_180 = (long ***)param_2[0xc9];
          lStack_168 = param_2[0xcc];
          lStack_170 = param_2[0xcb];
          lStack_158 = param_2[0xce];
          lStack_160 = param_2[0xcd];
          ppppcStack_148 = (char ****)param_2[0xd0];
          ppppcStack_150 = (char ****)param_2[0xcf];
          puStack_138 = (undefined *)param_2[0xd2];
          ppppcStack_140 = (char ****)param_2[0xd1];
          puStack_128 = (undefined *)param_2[0xd4];
          ppplStack_130 = (long ***)param_2[0xd3];
          __ZN17codex_rmcp_client5utils21build_default_headers17h15a866f95cb27f54E
                    (&pplStack_d0,&ppplStack_180,&ppppcStack_150);
          unaff_x25 = (char *****)pppplStack_c8;
          if ((long ***)pplStack_d0 == (long ***)0x3) {
            bVar5 = true;
          }
          else {
            puStack_128 = puStack_98;
            ppplStack_130 = ppplStack_a0;
            lStack_120 = lStack_90;
            ppppcStack_108 = ppppcStack_78;
            pcStack_110 = pcStack_80;
            ppppcStack_148 = ppppcStack_b8;
            ppppcStack_150 = ppppcStack_c0;
            puStack_138 = puStack_a8;
            ppppcStack_140 = ppppcStack_b0;
            plVar1 = param_2 + 0xbb;
            param_2[0xbb] = (long)pplStack_d0;
            param_2[0xbc] = (long)pppplStack_c8;
            param_2[0xc2] = (long)puStack_98;
            param_2[0xc1] = (long)ppplStack_a0;
            param_2[0xc4] = CONCAT44(uStack_84,uStack_88);
            param_2[0xc3] = lStack_90;
            param_2[0xc6] = (long)ppppcStack_78;
            param_2[0xc5] = (long)pcStack_80;
            param_2[0xbe] = (long)ppppcStack_b8;
            param_2[0xbd] = (long)ppppcStack_c0;
            param_2[0xc0] = (long)puStack_a8;
            param_2[0xbf] = (long)ppppcStack_b0;
            pppplStack_c8 = (long ****)0x10;
            pplStack_d0 = (long **)0x0;
            ppppcStack_b8 = (char ****)0x0;
            ppppcStack_c0 = (char ****)0x0;
            uVar11 = FUN_100ea213c(plVar1,&pplStack_d0);
            if ((uVar11 & 1) == 0) {
              __ZN17codex_rmcp_client5oauth16has_oauth_tokens17hce239c8797299c26E
                        (&pplStack_d0,param_2[0xd5],param_2[0xd6],param_2[0xd7],param_2[0xd8],uVar13
                        );
              if (((ulong)pplStack_d0 & 1) == 0) {
                if (((ulong)pplStack_d0 & 0x100) == 0) {
                  param_2[0x41] = param_2[0xd7];
                  param_2[0x42] = param_2[0xd8];
                  param_2[0x61] = (long)plVar1;
                  *(undefined1 *)((long)param_2 + 0x312) = 0;
                  goto LAB_10164aad4;
                }
                param_3 = 3;
                goto LAB_10164ad84;
              }
              bVar5 = true;
              unaff_x25 = (char *****)pppplStack_c8;
            }
            else {
              param_3 = 2;
LAB_10164ad84:
              bVar5 = false;
            }
            FUN_100def764(plVar1);
          }
        }
        else {
          bVar5 = false;
          param_3 = 2;
        }
        uVar13 = (undefined1)param_3;
        if (((char)param_2[0xdf] == '\x01') && ((long ****)ppplStack_1b0 != (long ****)0x0)) {
          FUN_100cb56bc(&ppplStack_1b0);
        }
        *(undefined1 *)(param_2 + 0xdf) = 0;
        if ((*(char *)((long)param_2 + 0x6f9) == '\x01') &&
           ((char *****)pppplStack_1e0 != (char *****)0x0)) {
          FUN_100cb56bc(&pppplStack_1e0);
        }
        *(undefined1 *)((long)param_2 + 0x6f9) = 0;
        goto LAB_10164afac;
      }
      uVar13 = 2;
    }
    else {
LAB_10164aabc:
      uVar13 = 0;
    }
    *(undefined1 *)(param_2 + 0xe1) = 1;
  }
  else {
    if (bVar4 != 3) goto LAB_10164b358;
    bVar4 = *(byte *)(param_2 + 0xe1);
    if (bVar4 < 2) {
      if (bVar4 == 0) {
        lVar15 = param_2[0x39];
        lVar19 = param_2[0x3a];
        uVar13 = *(undefined1 *)((long)param_2 + 0x709);
        cVar9 = (char)((long *)param_2[0xe0])[0x35];
        plVar1 = (long *)param_2[0xe0];
        goto joined_r0x00010164aa08;
      }
      goto LAB_10164b364;
    }
    if (bVar4 != 3) {
      func_0x000108a07b10(&UNK_10b250308);
      goto LAB_10164b3a8;
    }
    bVar4 = *(byte *)((long)param_2 + 0x6fa);
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        func_0x000108a07af4(&UNK_10b22aaf8);
        goto LAB_10164b3a8;
      }
      lVar15 = param_2[0xdb];
      lVar19 = param_2[0xdc];
      unaff_x25 = (char *****)param_2[0xdd];
      lVar17 = param_2[0xde];
      lVar18 = param_2[199];
      lVar12 = param_2[200];
      uVar13 = *(undefined1 *)((long)param_2 + 0x6fb);
      goto LAB_10164ac70;
    }
    if (bVar4 != 3) {
      func_0x000108a07b10(&UNK_10b22aaf8);
      goto LAB_10164b3a8;
    }
LAB_10164aad4:
    FUN_100a29480(&pplStack_d0,param_2 + 0x3b,param_3);
    ppppplVar14 = (long *****)ppppcStack_c0;
    pppplVar7 = pppplStack_c8;
    pplVar6 = pplStack_d0;
    if ((long ***)pplStack_d0 == (long ***)0x8000000000000003) {
      uVar13 = 3;
      *(undefined1 *)((long)param_2 + 0x6fa) = 3;
      *(undefined1 *)(param_2 + 0xe1) = 3;
      *(undefined8 *)(param_1 + 0x18) = 3;
      goto LAB_10164b2e8;
    }
    FUN_100cf8490(param_2 + 0x3b);
    if ((long ***)pplVar6 == (long ***)0x8000000000000000) {
LAB_10164ae38:
      uVar13 = 1;
    }
    else {
      if ((long ***)pplVar6 != (long ***)0x8000000000000001) {
        if ((long ***)pplVar6 != (long ***)0x8000000000000002) {
          if (ppppplVar14 != (long *****)0x0) {
            pppppcVar16 = (char *****)(pppplVar7 + 1);
            do {
              if (pppppcVar16[-1] != (char ****)0x0) {
                _free(*pppppcVar16);
              }
              pppppcVar16 = pppppcVar16 + 3;
              ppppplVar14 = (long *****)((long)ppppplVar14 + -1);
            } while (ppppplVar14 != (long *****)0x0);
          }
          if ((long ***)pplVar6 != (long ***)0x0) {
            _free(pppplVar7);
          }
          goto LAB_10164ae38;
        }
        pppplStack_100 = pppplVar7;
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
           (((bRam000000010b62f6c0 - 1 < 2 ||
             ((bRam000000010b62f6c0 != 0 &&
              (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN17codex_rmcp_client11auth_status37determine_streamable_http_auth_status28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc111868a4528619E
                                 ), cVar9 != '\0')))) &&
            (uVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (
                                ___ZN17codex_rmcp_client11auth_status37determine_streamable_http_auth_status28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc111868a4528619E
                                ), (uVar11 & 1) != 0)))) {
          puStack_138 = (undefined *)
                        (
                        ___ZN17codex_rmcp_client11auth_status37determine_streamable_http_auth_status28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc111868a4528619E
                        + 0x30);
          pplStack_d0 = (long **)(param_2 + 0xd5);
          ppppcStack_c0 = (char ****)(param_2 + 0xd7);
          pppplStack_c8 = (long ****)&DAT_100c7b3a0;
          ppppcStack_b8 = (char ****)&DAT_100c7b3a0;
          ppppcStack_b0 = (char ****)&pppplStack_100;
          puStack_a8 = &
                       __ZN6anyhow5error60__LT_impl_u20_core__fmt__Debug_u20_for_u20_anyhow__Error_GT_3fmt17h444c4cfbbbe96d3bE
          ;
          ppplStack_178 = &pplStack_d0;
          ppplStack_180 = (long ***)s__failed_to_detect_OAuth_support_f_108ace648;
          pppplStack_e0 = &ppplStack_180;
          puStack_d8 = &UNK_10b208fd0;
          ppppcStack_148 = (char ****)&pppplStack_e0;
          ppppcStack_150 = (char ****)0x1;
          ppppcStack_140 = (char ****)0x1;
          FUN_100a29344(&ppppcStack_150);
        }
        else {
          lVar15 = 
          ___ZN17codex_rmcp_client11auth_status37determine_streamable_http_auth_status28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc111868a4528619E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puStack_f0 = *(undefined **)
                          (
                          ___ZN17codex_rmcp_client11auth_status37determine_streamable_http_auth_status28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc111868a4528619E
                          + 0x20);
            uStack_e8 = *(undefined8 *)
                         (
                         ___ZN17codex_rmcp_client11auth_status37determine_streamable_http_auth_status28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc111868a4528619E
                         + 0x28);
            ppplStack_f8 = (long ***)0x4;
            puVar2 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar10 = (**(code **)(puVar2 + 0x18))(puVar3,&ppplStack_f8);
            if (iVar10 != 0) {
              puStack_138 = (undefined *)
                            (
                            ___ZN17codex_rmcp_client11auth_status37determine_streamable_http_auth_status28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc111868a4528619E
                            + 0x30);
              pplStack_d0 = (long **)(param_2 + 0xd5);
              ppppcStack_c0 = (char ****)(param_2 + 0xd7);
              pppplStack_c8 = (long ****)&DAT_100c7b3a0;
              ppppcStack_b8 = (char ****)&DAT_100c7b3a0;
              ppppcStack_b0 = (char ****)&pppplStack_100;
              puStack_a8 = &
                           __ZN6anyhow5error60__LT_impl_u20_core__fmt__Debug_u20_for_u20_anyhow__Error_GT_3fmt17h444c4cfbbbe96d3bE
              ;
              ppplStack_178 = &pplStack_d0;
              ppplStack_180 = (long ***)s__failed_to_detect_OAuth_support_f_108ace648;
              pppplStack_e0 = &ppplStack_180;
              puStack_d8 = &UNK_10b208fd0;
              ppppcStack_148 = (char ****)&pppplStack_e0;
              ppppcStack_150 = (char ****)0x1;
              ppppcStack_140 = (char ****)0x1;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar15,puVar3,puVar2,&ppplStack_f8,&ppppcStack_150);
            }
          }
        }
        (*(code *)**pppplStack_100)();
      }
      uVar13 = 0;
    }
    FUN_100def764(param_2 + 0xbb);
    bVar5 = false;
    *(undefined2 *)(param_2 + 0xdf) = 0;
LAB_10164afac:
    puStack_430 = (undefined1 *)((long)param_2 + 0x6fa);
    *puStack_430 = 1;
    FUN_100ce189c(param_2 + 0x3b);
    *(undefined1 *)(param_2 + 0xe1) = 1;
    if (bVar5) {
      pppplStack_e0 = (long ****)unaff_x25;
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
          ((bRam000000010b62d928 - 1 < 2 ||
           ((bRam000000010b62d928 != 0 &&
            (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN9codex_mcp3mcp4auth21compute_auth_statuses28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0f6fa19e1a253229E
                               ), cVar9 != '\0')))))) &&
         (uVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN9codex_mcp3mcp4auth21compute_auth_statuses28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0f6fa19e1a253229E
                             ), (uVar11 & 1) != 0)) {
        lStack_168 = ___ZN9codex_mcp3mcp4auth21compute_auth_statuses28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0f6fa19e1a253229E
                     + 0x30;
        ppppcStack_150 = (char ****)(param_2 + 0x36);
        ppppcStack_148 = (char ****)&DAT_10112965c;
        ppppcStack_140 = (char ****)&pppplStack_e0;
        puStack_138 = &
                      __ZN6anyhow5error60__LT_impl_u20_core__fmt__Debug_u20_for_u20_anyhow__Error_GT_3fmt17h444c4cfbbbe96d3bE
        ;
        pppplStack_238 = (long ****)&ppppcStack_150;
        pplStack_240 = (long **)s_0failed_to_determine_auth_status_108ad9f17;
        ppplStack_f8 = &pplStack_240;
        puStack_f0 = &UNK_10b208fd0;
        ppplStack_178 = (long ***)&ppplStack_f8;
        ppplStack_180 = (long ***)0x1;
        lStack_170 = 1;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN9codex_mcp3mcp4auth21compute_auth_statuses28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0f6fa19e1a253229E
                   ,&ppplStack_180);
        lVar15 = 
        ___ZN9codex_mcp3mcp4auth21compute_auth_statuses28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0f6fa19e1a253229E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puStack_1a8 = *(undefined **)
                         (
                         ___ZN9codex_mcp3mcp4auth21compute_auth_statuses28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0f6fa19e1a253229E
                         + 0x20);
          lStack_1a0 = *(long *)(
                                ___ZN9codex_mcp3mcp4auth21compute_auth_statuses28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0f6fa19e1a253229E
                                + 0x28);
          ppplStack_1b0 = (long ***)0x2;
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar10 = (**(code **)(puVar2 + 0x18))(puVar3,&ppplStack_1b0);
          if (iVar10 != 0) {
            ppppcStack_b0 = *(char *****)(lVar15 + 0x60);
            puStack_a8 = *(undefined **)(lVar15 + 0x68);
            pppplStack_c8 = *(long *****)(lVar15 + 0x50);
            ppppcStack_c0 = *(char *****)(lVar15 + 0x58);
            pplStack_d0 = (long **)0x1;
            if ((char *****)pppplStack_c8 == (char *****)0x0) {
              pplStack_d0 = (long **)0x2;
            }
            uStack_88 = *(undefined4 *)(lVar15 + 8);
            uStack_84 = *(undefined4 *)(lVar15 + 0xc);
            ppppcStack_210 = (char ****)&ppplStack_180;
            ppppcStack_208 = (char ****)CONCAT71(ppppcStack_208._1_7_,1);
            pppplStack_1e0 = (long ****)&ppppcStack_210;
            puStack_1d8 = &DAT_1061c2098;
            ppppcStack_b8 = (char ****)0x1;
            if ((long *****)ppppcStack_b0 == (long *****)0x0) {
              ppppcStack_b8 = (char ****)0x2;
            }
            puStack_98 = puStack_1a8;
            ppplStack_a0 = ppplStack_1b0;
            lStack_90 = lStack_1a0;
            ppppcStack_78 = (char ****)&pppplStack_1e0;
            pcStack_80 = s__108b39f4f;
            (**(code **)(puVar2 + 0x20))(puVar3,&pplStack_d0);
          }
        }
      }
      else {
        lVar15 = 
        ___ZN9codex_mcp3mcp4auth21compute_auth_statuses28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0f6fa19e1a253229E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uStack_420 = *(undefined8 *)
                        (
                        ___ZN9codex_mcp3mcp4auth21compute_auth_statuses28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0f6fa19e1a253229E
                        + 0x20);
          uStack_418 = *(undefined8 *)
                        (
                        ___ZN9codex_mcp3mcp4auth21compute_auth_statuses28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0f6fa19e1a253229E
                        + 0x28);
          uStack_428 = 2;
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar10 = (**(code **)(puVar2 + 0x18))(puVar3,&uStack_428);
          if (iVar10 != 0) {
            puStack_138 = (undefined *)
                          (
                          ___ZN9codex_mcp3mcp4auth21compute_auth_statuses28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0f6fa19e1a253229E
                          + 0x30);
            pplStack_d0 = (long **)(param_2 + 0x36);
            pppplStack_c8 = (long ****)&DAT_10112965c;
            ppppcStack_c0 = (char ****)&pppplStack_e0;
            ppppcStack_b8 =
                 (char ****)
                 &
                 __ZN6anyhow5error60__LT_impl_u20_core__fmt__Debug_u20_for_u20_anyhow__Error_GT_3fmt17h444c4cfbbbe96d3bE
            ;
            ppplStack_178 = &pplStack_d0;
            ppplStack_180 = (long ***)s_0failed_to_determine_auth_status_108ad9f17;
            ppplStack_1b0 = (long ***)&ppplStack_180;
            puStack_1a8 = &UNK_10b208fd0;
            ppppcStack_148 = (char ****)&ppplStack_1b0;
            ppppcStack_150 = (char ****)0x1;
            ppppcStack_140 = (char ****)0x1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar15,puVar3,puVar2,&uStack_428,&ppppcStack_150);
          }
        }
      }
      (*(code *)**pppplStack_e0)();
LAB_10164b2a8:
      uVar13 = 0;
    }
  }
  _memcpy(auStack_3f8,param_2,0x1b0);
  lStack_408 = param_2[0x37];
  lStack_410 = param_2[0x36];
  lStack_400 = param_2[0x38];
  _memcpy(param_1,&lStack_410,0x1c8);
  *(undefined1 *)(param_1 + 0x1c8) = uVar13;
  uVar13 = 1;
LAB_10164b2e8:
  *(undefined1 *)((long)param_2 + 0x712) = uVar13;
  return;
}

