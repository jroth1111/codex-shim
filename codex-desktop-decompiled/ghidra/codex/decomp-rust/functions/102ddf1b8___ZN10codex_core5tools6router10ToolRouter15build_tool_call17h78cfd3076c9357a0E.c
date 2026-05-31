
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN10codex_core5tools6router10ToolRouter15build_tool_call17h78cfd3076c9357a0E
               (undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int *piVar5;
  long lVar6;
  bool bVar7;
  code *pcVar8;
  char cVar9;
  int iVar10;
  long *******ppppppplVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *******pppppppuVar15;
  long *******ppppppplVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long *******unaff_x26;
  long *******ppppppplVar20;
  bool bVar21;
  long *******ppppppplVar22;
  undefined8 *******pppppppuVar23;
  undefined8 uVar24;
  undefined8 *******pppppppuVar25;
  int *piVar26;
  undefined8 uVar27;
  long lVar28;
  long *******ppppppplStack_330;
  undefined8 *******pppppppuStack_328;
  long *******ppppppplStack_2f0;
  undefined8 *******pppppppuStack_2e8;
  long *******ppppppplStack_2d8;
  undefined8 *******pppppppuStack_2d0;
  undefined8 *******pppppppuStack_2c8;
  long *******ppppppplStack_2c0;
  undefined8 *******pppppppuStack_2b8;
  undefined8 ******ppppppuStack_2b0;
  undefined8 *******pppppppuStack_2a0;
  undefined8 *******pppppppuStack_298;
  long *******ppppppplStack_290;
  undefined8 *******pppppppuStack_288;
  undefined8 ******ppppppuStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  char *pcStack_250;
  undefined8 *******pppppppuStack_248;
  undefined8 uStack_240;
  ulong uStack_238;
  undefined8 *******pppppppuStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *******pppppppuStack_1c8;
  undefined8 *******pppppppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *******ppppppplStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *******pppppppuStack_140;
  undefined8 *******pppppppuStack_138;
  long *******ppppppplStack_130;
  undefined8 *******pppppppuStack_128;
  undefined8 ******ppppppuStack_120;
  undefined8 ******ppppppuStack_118;
  undefined8 ******ppppppuStack_110;
  undefined8 ******ppppppuStack_108;
  undefined8 ******ppppppuStack_100;
  long *plStack_f0;
  long *plStack_e0;
  undefined8 *******pppppppuStack_d0;
  undefined8 *******pppppppuStack_c8;
  long *******ppppppplStack_c0;
  undefined8 *******pppppppuStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined8 ******ppppppuStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 ******ppppppuStack_98;
  undefined8 ******ppppppuStack_90;
  long *******ppppppplStack_80;
  long *******ppppppplStack_78;
  
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) ||
     (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0')) {
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       (((bRam000000010b62b3c8 - 1 < 2 ||
         ((bRam000000010b62b3c8 != 0 &&
          (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (0x10b62b3b8), cVar9 != '\0')))) &&
        (iVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (ppppppuRam000000010b62b3b8), iVar10 != 0)))) {
      pppppppuStack_288 = (undefined8 *******)(ppppppuRam000000010b62b3b8 + 6);
      pppppppuStack_2a0 = (undefined8 *******)0x1;
      pppppppuStack_298 = (undefined8 *******)0x8;
      ppppppplStack_290 = (long *******)0x0;
      __ZN7tracing4span4Span3new17hfb1cb23559a61740E
                (&pppppppuStack_140,ppppppuRam000000010b62b3b8,&pppppppuStack_2a0);
    }
    else {
      pppppppuStack_2a0 = (undefined8 *******)0x2;
      ppppppuStack_280 = ppppppuRam000000010b62b3b8;
      if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
        pppppppuStack_128 = (undefined8 *******)(ppppppuRam000000010b62b3b8 + 6);
        pppppppuStack_140 = (undefined8 *******)0x1;
        pppppppuStack_138 = (undefined8 *******)0x8;
        ppppppplStack_130 = (long *******)0x0;
        __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE
                  (&pppppppuStack_2a0,&pppppppuStack_140);
      }
      pppppppuStack_138 = pppppppuStack_298;
      pppppppuStack_140 = pppppppuStack_2a0;
      pppppppuStack_128 = pppppppuStack_288;
      ppppppplStack_130 = ppppppplStack_290;
      ppppppuStack_120 = ppppppuStack_280;
    }
    pppppppuStack_2c8 = pppppppuStack_138;
    pppppppuStack_2d0 = pppppppuStack_140;
    pppppppuStack_2b8 = pppppppuStack_128;
    ppppppplStack_2c0 = ppppppplStack_130;
    ppppppuStack_2b0 = ppppppuStack_120;
    if (pppppppuStack_140 != (undefined8 *******)0x2) {
      pppppppuVar25 = pppppppuStack_138;
      if (((ulong)pppppppuStack_140 & 1) != 0) {
        pppppppuVar25 =
             (undefined8 *******)
             ((long)pppppppuStack_138 +
             ((long)ppppppplStack_130[2] - 1U & 0xfffffffffffffff0) + 0x10);
      }
      (*(code *)ppppppplStack_130[0xc])(pppppppuVar25,&pppppppuStack_2b8);
    }
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (ppppppuStack_2b0 != (undefined8 ******)0x0)) {
      pppppppuStack_140 = (undefined8 *******)ppppppuStack_2b0[2];
      pppppppuStack_138 = (undefined8 *******)ppppppuStack_2b0[3];
      pppppppuStack_2a0 = &pppppppuStack_140;
      pppppppuStack_298 = (undefined8 *******)&DAT_103296230;
      FUN_10362ff54(&pppppppuStack_2d0,&UNK_108d906cc,0x15,s__>___108ab67cd,&pppppppuStack_2a0);
    }
    bVar21 = true;
  }
  else {
    bVar21 = false;
  }
  uStack_218 = param_2[0x11];
  uStack_220 = param_2[0x10];
  uStack_208 = param_2[0x13];
  uStack_210 = param_2[0x12];
  uStack_1f8 = param_2[0x15];
  uStack_200 = param_2[0x14];
  uStack_1e8 = param_2[0x17];
  uStack_1f0 = param_2[0x16];
  uVar24 = param_2[9];
  uVar13 = param_2[8];
  pppppppuStack_248 = (undefined8 *******)param_2[0xb];
  pcStack_250 = (char *)param_2[10];
  uStack_238 = param_2[0xd];
  uStack_240 = param_2[0xc];
  uStack_228 = param_2[0xf];
  pppppppuStack_230 = (undefined8 *******)param_2[0xe];
  pppppppuVar25 = (undefined8 *******)param_2[1];
  pppppppuStack_2a0 = (undefined8 *******)*param_2;
  pppppppuStack_288 = (undefined8 *******)param_2[3];
  piVar26 = (int *)param_2[2];
  uStack_278 = param_2[5];
  ppppppuStack_280 = (undefined8 ******)param_2[4];
  lVar28 = param_2[7];
  uStack_270 = param_2[6];
  lVar18 = 2;
  if ((undefined8 *******)0x1 < pppppppuStack_2a0) {
    lVar18 = (long)pppppppuStack_2a0 + -2;
  }
  pppppppuStack_298 = pppppppuVar25;
  ppppppplStack_290 = (long *******)piVar26;
  lStack_268 = lVar28;
  uStack_260 = uVar13;
  uStack_258 = uVar24;
  if (lVar18 == 3) {
    uStack_1b0 = param_2[3];
    uStack_1b8 = param_2[2];
    pppppppuStack_1c0 = (undefined8 *******)param_2[1];
    uStack_1a0 = param_2[0xe];
    uStack_1a8 = param_2[0xd];
    uStack_198 = param_2[0xf];
    ppppppplVar20 = (long *******)0x2;
    *param_1 = 2;
    param_1[2] = uStack_278;
    param_1[1] = ppppppuStack_280;
    param_1[3] = uStack_270;
    param_1[10] = uStack_198;
    param_1[9] = uStack_1a0;
    param_1[8] = uStack_1a8;
    param_1[7] = uStack_1b0;
    param_1[6] = uStack_1b8;
    param_1[5] = pppppppuStack_1c0;
    param_1[0xc] = uVar13;
    param_1[0xb] = lVar28;
    bVar7 = true;
    param_1[0xd] = uVar24;
    lVar18 = 2;
    if ((undefined8 *******)0x1 < pppppppuStack_2a0) {
      lVar18 = (long)pppppppuStack_2a0 + -2;
    }
    if (lVar18 == 3) goto LAB_102ddfb08;
LAB_102ddf490:
    if (lVar18 == 4) {
      if ((ppppppuStack_280 != (undefined8 ******)0x8000000000000000) &&
         (ppppppuStack_280 != (undefined8 ******)0x0)) {
        _free(uStack_278);
      }
      bVar2 = false;
      if (lStack_268 != -0x8000000000000000) {
        bVar2 = bVar7;
      }
      if ((bVar2) && (lStack_268 != 0)) {
        _free(uStack_260);
      }
      if ((pcStack_250 != (char *)0x8000000000000000) && (pcStack_250 != (char *)0x0)) {
        _free(pppppppuStack_248);
      }
      if (bVar7) {
        if (pppppppuStack_298 != (undefined8 *******)0x0) {
          _free(ppppppplStack_290);
        }
        func_0x000103382b94(&uStack_238);
      }
    }
    else if (lVar18 == 6) {
      if ((pcStack_250 != (char *)0x8000000000000000) && (pcStack_250 != (char *)0x0)) {
        _free(pppppppuStack_248);
      }
      if ((uStack_238 & 0x7fffffffffffffff) != 0) {
        _free(pppppppuStack_230);
      }
    }
    else {
      FUN_103396fdc(&pppppppuStack_2a0);
    }
joined_r0x000102ddf4d4:
    if (ppppppplVar20 != (long *******)0x6) goto LAB_102ddfc48;
  }
  else {
    if (lVar18 != 4) {
      if (lVar18 != 6) goto LAB_102ddf3f4;
      uVar13 = param_2[4];
      param_1[6] = param_2[5];
      param_1[5] = uVar13;
      uVar13 = param_2[6];
      uVar24 = param_2[7];
      param_1[2] = param_2[8];
      param_1[1] = uVar24;
      param_1[3] = param_2[9];
      uVar24 = param_2[1];
      param_1[0xc] = param_2[2];
      param_1[0xb] = uVar24;
      param_1[0xd] = param_2[3];
      ppppppplVar20 = (long *******)0x4;
      param_1[7] = uVar13;
      param_1[8] = 0x8000000000000000;
      bVar7 = true;
      *param_1 = 4;
      lVar18 = 2;
      if ((undefined8 *******)0x1 < pppppppuStack_2a0) {
        lVar18 = (long)pppppppuStack_2a0 + -2;
      }
joined_r0x000102ddf414:
      if (lVar18 != 3) goto LAB_102ddf490;
LAB_102ddfb08:
      if (((ulong)pcStack_250 & 0x7fffffffffffffff) != 0) {
        _free(pppppppuStack_248);
      }
      goto joined_r0x000102ddf4d4;
    }
    if (((lVar28 == -0x8000000000000000) || (pppppppuStack_288 != (undefined8 *******)0x6)) ||
       (*piVar26 != 0x65696c63 || (short)piVar26[1] != 0x746e)) {
LAB_102ddf3f4:
      ppppppplVar20 = (long *******)0x5;
      *param_1 = 5;
      bVar7 = true;
      lVar18 = 2;
      if ((undefined8 *******)0x1 < pppppppuStack_2a0) {
        lVar18 = (long)pppppppuStack_2a0 + -2;
      }
      goto joined_r0x000102ddf414;
    }
    puStack_188 = (undefined *)param_2[0xe];
    ppppppplVar22 = (long *******)param_2[0xd];
    uStack_178 = param_2[0x10];
    uStack_180 = param_2[0xf];
    uStack_168 = param_2[0x12];
    uStack_170 = param_2[0x11];
    uStack_158 = param_2[0x14];
    uVar27 = param_2[0x13];
    uStack_150 = param_2[0x15];
    uVar17 = (ulong)ppppppplVar22 ^ 0x8000000000000000;
    if (-1 < (long)ppppppplVar22) {
      uVar17 = 5;
    }
    ppppppplStack_190 = ppppppplVar22;
    uStack_160 = uVar27;
    if (uVar17 == 4) {
      ppppppplStack_c0 = (long *******)param_2[0xe];
      pppppppuStack_d0 = (undefined8 *******)param_2[0xf];
      lVar18 = param_2[0x10];
      pppppppuStack_b8 = pppppppuStack_d0 + lVar18 * 9;
      pppppppuStack_c8 = pppppppuStack_d0;
      if (lVar18 == 0) {
LAB_102ddf8f8:
        ppppppplVar11 = (long *******)func_0x0001089224d4(0,&UNK_10b2be810,&UNK_10b29b520);
LAB_102ddf974:
        ppppppplStack_330 = ppppppplVar11;
        ppppppplVar20 = (long *******)0x2;
      }
      else {
        pppppppuStack_c8 = pppppppuStack_d0 + 9;
        pppppppuVar15 = (undefined8 *******)*pppppppuStack_d0;
        if (pppppppuVar15 == (undefined8 *******)0x8000000000000005) goto LAB_102ddf8f8;
        ppppppplVar11 = (long *******)pppppppuStack_d0[2];
        pppppppuVar23 = (undefined8 *******)pppppppuStack_d0[1];
        ppppppuStack_120 = pppppppuStack_d0[4];
        pppppppuStack_128 = (undefined8 *******)pppppppuStack_d0[3];
        ppppppuStack_110 = pppppppuStack_d0[6];
        ppppppuStack_118 = pppppppuStack_d0[5];
        ppppppuStack_100 = pppppppuStack_d0[8];
        ppppppuStack_108 = pppppppuStack_d0[7];
        pppppppuStack_140 = pppppppuVar15;
        pppppppuStack_138 = pppppppuVar23;
        ppppppplStack_130 = ppppppplVar11;
        if (pppppppuVar15 != (undefined8 *******)0x8000000000000003) {
          ppppppplVar11 =
               (long *******)
               func_0x000108938b38(&pppppppuStack_140,&ppppppplStack_80,&UNK_10b29b570);
          func_0x000103382b94(&pppppppuStack_140);
          goto LAB_102ddf974;
        }
        if ((pppppppuVar23 == (undefined8 *******)0x8000000000000000) ||
           (pppppppuStack_2e8 = pppppppuVar23,
           pppppppuVar23 == (undefined8 *******)0x8000000000000001)) goto LAB_102ddf974;
        pppppppuStack_328 = pppppppuStack_128;
        if (lVar18 == 1) {
          ppppppplVar20 = (long *******)0x0;
          ppppppplStack_330 = (long *******)0x1;
          ppppppplStack_2d8 = ppppppplVar11;
        }
        else {
          pppppppuStack_c8 = pppppppuStack_d0 + 0x12;
          pppppppuStack_140 = (undefined8 *******)pppppppuStack_d0[9];
          if (pppppppuStack_140 == (undefined8 *******)0x8000000000000005) {
            ppppppplVar16 = (long *******)0x2;
            pppppppuStack_140 = pppppppuVar15;
          }
          else {
            ppppppplStack_130 = (long *******)pppppppuStack_d0[0xb];
            pppppppuStack_138 = (undefined8 *******)pppppppuStack_d0[10];
            ppppppuStack_120 = pppppppuStack_d0[0xd];
            pppppppuStack_128 = (undefined8 *******)pppppppuStack_d0[0xc];
            ppppppuStack_110 = pppppppuStack_d0[0xf];
            ppppppuStack_118 = pppppppuStack_d0[0xe];
            ppppppuStack_100 = pppppppuStack_d0[0x11];
            ppppppuStack_108 = pppppppuStack_d0[0x10];
            func_0x00010370ca0c(&ppppppplStack_80,&pppppppuStack_140);
            ppppppplStack_330 = ppppppplStack_78;
            ppppppplVar16 = ppppppplStack_80;
            if (ppppppplStack_80 == (long *******)0x2) {
              if (pppppppuVar23 != (undefined8 *******)0x0) {
                _free(ppppppplVar11);
              }
              ppppppplVar20 = (long *******)0x2;
              goto LAB_102ddf978;
            }
          }
          ppppppplVar20 = (long *******)0x0;
          if (ppppppplVar16 != (long *******)0x2) {
            ppppppplVar20 = ppppppplVar16;
          }
          ppppppplStack_2d8 = ppppppplVar11;
          if (lVar18 != 2) {
            ppppppplStack_330 =
                 (long *******)func_0x0001089224d4(lVar18,&UNK_10b2b6868,&UNK_10b29b520);
            if (pppppppuVar23 == (undefined8 *******)0x0) {
              pppppppuStack_2e8 = (undefined8 *******)0x0;
            }
            else {
              _free(ppppppplVar11);
            }
            ppppppplVar20 = (long *******)0x2;
          }
        }
      }
LAB_102ddf978:
      func_0x0001033ce080(&pppppppuStack_d0);
    }
    else if (uVar17 == 5) {
      __ZN10serde_json5value2de15MapDeserializer3new17hd3edd1e3d737bb9dE
                (&pppppppuStack_140,param_2 + 0xd);
      if (plStack_f0 == plStack_e0) {
LAB_102ddf9a0:
        ppppppplStack_80 = (long *******)&UNK_108d65219;
        ppppppplStack_78 = (long *******)0x5;
        pppppppuStack_d0 = &ppppppplStack_80;
        pppppppuStack_c8 = (undefined8 *******)&DAT_103296230;
        ppppppplVar11 =
             (long *******)func_0x00010893eb24(s_missing_field_____108ac28f7,&pppppppuStack_d0);
LAB_102ddf9dc:
        ppppppplVar20 = (long *******)0x2;
        ppppppplStack_330 = ppppppplVar11;
      }
      else {
        ppppppplStack_2f0 = (long *******)0x2;
        pppppppuStack_2e8 = (undefined8 *******)0x8000000000000000;
        plVar14 = plStack_f0;
        do {
          ppppppplVar20 = unaff_x26;
          plVar1 = plVar14 + 0xd;
          lVar18 = *plVar14;
          plVar19 = plVar1;
          unaff_x26 = ppppppplVar20;
          plStack_f0 = plVar1;
          if (lVar18 == -0x8000000000000000) break;
          piVar5 = (int *)plVar14[1];
          lVar6 = plVar14[2];
          pppppppuStack_b8 = (undefined8 *******)plVar14[6];
          ppppppplStack_c0 = (long *******)plVar14[5];
          ppppppuStack_a8 = (undefined8 ******)plVar14[8];
          ppppppuStack_b0 = (undefined8 ******)plVar14[7];
          ppppppuStack_98 = (undefined8 ******)plVar14[10];
          ppppppuStack_a0 = (undefined8 ******)plVar14[9];
          ppppppuStack_90 = (undefined8 ******)plVar14[0xb];
          pppppppuStack_c8 = (undefined8 *******)plVar14[4];
          pppppppuStack_d0 = (undefined8 *******)plVar14[3];
          if (pppppppuStack_140 != (undefined8 *******)0x8000000000000005) {
            func_0x000103382b94(&pppppppuStack_140);
          }
          ppppppuStack_118 = ppppppuStack_a8;
          ppppppuStack_120 = ppppppuStack_b0;
          ppppppuStack_108 = ppppppuStack_98;
          ppppppuStack_110 = ppppppuStack_a0;
          ppppppuStack_100 = ppppppuStack_90;
          pppppppuStack_138 = pppppppuStack_c8;
          pppppppuStack_140 = pppppppuStack_d0;
          pppppppuStack_128 = pppppppuStack_b8;
          ppppppplStack_130 = ppppppplStack_c0;
          if (lVar6 == 5) {
            if (*piVar5 == 0x72657571 && (char)piVar5[1] == 'y') {
              iVar10 = 0;
            }
            else {
              iVar10 = 1;
              if (*piVar5 != 0x696d696c || (char)piVar5[1] != 't') {
                iVar10 = 2;
              }
            }
          }
          else {
            iVar10 = 2;
          }
          if (lVar18 != 0) {
            _free(piVar5);
          }
          pppppppuVar15 = pppppppuStack_140;
          ppppppplStack_2d8 = ppppppplVar20;
          if (iVar10 != 0) {
            if (iVar10 == 1) {
              if (ppppppplStack_2f0 == (long *******)0x2) {
                pppppppuStack_140 = (undefined8 *******)0x8000000000000005;
                if (pppppppuVar15 == (undefined8 *******)0x8000000000000005) {
                  ppppppplStack_330 = (long *******)func_0x00010893f0c4(&UNK_108cde170,0x10);
                }
                else {
                  pppppppuStack_d0 = pppppppuVar15;
                  ppppppplStack_c0 = ppppppplStack_130;
                  pppppppuStack_c8 = pppppppuStack_138;
                  ppppppuStack_b0 = ppppppuStack_120;
                  pppppppuStack_b8 = pppppppuStack_128;
                  ppppppuStack_a0 = ppppppuStack_110;
                  ppppppuStack_a8 = ppppppuStack_118;
                  ppppppuStack_90 = ppppppuStack_100;
                  ppppppuStack_98 = ppppppuStack_108;
                  func_0x00010370ca0c(&ppppppplStack_80,&pppppppuStack_d0);
                  ppppppplStack_2f0 = ppppppplStack_80;
                  ppppppplStack_330 = ppppppplStack_78;
                  if (ppppppplStack_80 != (long *******)0x2) {
                    goto LAB_102ddf66c;
                  }
                }
              }
              else {
                ppppppplStack_80 = (long *******)&UNK_108d6521e;
                ppppppplStack_78 = (long *******)0x5;
                pppppppuStack_d0 = &ppppppplStack_80;
                pppppppuStack_c8 = (undefined8 *******)&DAT_103296230;
                ppppppplStack_330 =
                     (long *******)
                     func_0x00010893eb24(s_duplicate_field_____108ac2973,&pppppppuStack_d0);
              }
            }
            else {
              pppppppuStack_140 = (undefined8 *******)0x8000000000000005;
              if (pppppppuVar15 != (undefined8 *******)0x8000000000000005) {
                pppppppuStack_d0 = pppppppuVar15;
                ppppppplStack_c0 = ppppppplStack_130;
                pppppppuStack_c8 = pppppppuStack_138;
                ppppppuStack_b0 = ppppppuStack_120;
                pppppppuStack_b8 = pppppppuStack_128;
                ppppppuStack_a0 = ppppppuStack_110;
                ppppppuStack_a8 = ppppppuStack_118;
                ppppppuStack_90 = ppppppuStack_100;
                ppppppuStack_98 = ppppppuStack_108;
                func_0x000103382b94(&pppppppuStack_d0);
                goto LAB_102ddf66c;
              }
              ppppppplStack_330 = (long *******)func_0x00010893f0c4(&UNK_108cde170,0x10);
            }
            ppppppplVar11 = ppppppplStack_330;
            if (((ulong)pppppppuStack_2e8 & 0x7fffffffffffffff) != 0) {
LAB_102ddffd4:
              _free(ppppppplVar20);
              ppppppplVar11 = ppppppplStack_330;
            }
            goto LAB_102ddf9dc;
          }
          if (pppppppuStack_2e8 != (undefined8 *******)0x8000000000000000) {
            ppppppplStack_80 = (long *******)&UNK_108d65219;
            ppppppplStack_78 = (long *******)0x5;
            pppppppuStack_d0 = &ppppppplStack_80;
            pppppppuStack_c8 = (undefined8 *******)&DAT_103296230;
            ppppppplStack_330 =
                 (long *******)
                 func_0x00010893eb24(s_duplicate_field_____108ac2973,&pppppppuStack_d0);
            if (pppppppuStack_2e8 != (undefined8 *******)0x0) goto LAB_102ddffd4;
            goto LAB_102de018c;
          }
          pppppppuStack_140 = (undefined8 *******)0x8000000000000005;
          if (pppppppuVar15 == (undefined8 *******)0x8000000000000005) {
            ppppppplVar11 = (long *******)func_0x00010893f0c4(&UNK_108cde170,0x10);
            goto LAB_102ddf9dc;
          }
          pppppppuStack_d0 = pppppppuVar15;
          ppppppplStack_c0 = ppppppplStack_130;
          pppppppuStack_c8 = pppppppuStack_138;
          ppppppuStack_b0 = ppppppuStack_120;
          pppppppuStack_b8 = pppppppuStack_128;
          ppppppuStack_a0 = ppppppuStack_110;
          ppppppuStack_a8 = ppppppuStack_118;
          ppppppuStack_90 = ppppppuStack_100;
          ppppppuStack_98 = ppppppuStack_108;
          if (pppppppuVar15 != (undefined8 *******)0x8000000000000003) {
            ppppppplVar11 =
                 (long *******)
                 func_0x000108938b38(&pppppppuStack_d0,&ppppppplStack_80,&UNK_10b29b570);
            func_0x000103382b94(&pppppppuStack_d0);
            goto LAB_102ddf9dc;
          }
          pppppppuStack_2e8 = pppppppuStack_138;
          ppppppplVar11 = ppppppplStack_130;
          if (pppppppuStack_138 == (undefined8 *******)0x8000000000000000) goto LAB_102ddf9dc;
          pppppppuStack_328 = pppppppuStack_128;
          unaff_x26 = ppppppplStack_130;
          pppppppuStack_d0 = pppppppuVar15;
LAB_102ddf66c:
          plVar14 = plVar1;
          plVar19 = plStack_e0;
        } while (plVar1 != plStack_e0);
        if (pppppppuStack_2e8 == (undefined8 *******)0x8000000000000000) goto LAB_102ddf9a0;
        ppppppplVar20 = (long *******)0x0;
        if (ppppppplStack_2f0 != (long *******)0x2) {
          ppppppplVar20 = ppppppplStack_2f0;
        }
        ppppppplStack_2d8 = unaff_x26;
        if (plStack_e0 != plVar19) {
          ppppppplStack_330 =
               (long *******)func_0x0001089224d4(uVar27,&UNK_10b2b6878,&UNK_10b29b520);
          if (pppppppuStack_2e8 == (undefined8 *******)0x0) {
            pppppppuStack_2e8 = (undefined8 *******)0x0;
          }
          else {
            _free(unaff_x26);
          }
LAB_102de018c:
          ppppppplVar20 = (long *******)0x2;
        }
      }
      func_0x00010339d6d0(&pppppppuStack_140);
    }
    else {
      ppppppplStack_330 =
           (long *******)func_0x000108938b38(param_2 + 0xd,&ppppppplStack_80,&UNK_10b2b6928);
      ppppppplVar20 = (long *******)0x2;
    }
    if (((long)ppppppplVar22 < 0) &&
       (((ulong)ppppppplVar22 & 0xfffffffffffffffe) != 0x8000000000000004)) {
      func_0x000103382b94(&ppppppplStack_190);
    }
    if (ppppppplVar20 != (long *******)0x2) {
      puVar12 = (undefined8 *)_malloc(0xb);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0xb);
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x102de026c);
        (*pcVar8)();
      }
      *(undefined4 *)((long)puVar12 + 7) = 0x68637261;
      *puVar12 = 0x6165735f6c6f6f74;
      *param_1 = ppppppplVar20;
      param_1[1] = ppppppplStack_330;
      param_1[2] = pppppppuStack_2e8;
      param_1[3] = ppppppplStack_2d8;
      param_1[4] = pppppppuStack_328;
      param_1[5] = 0xb;
      param_1[6] = puVar12;
      param_1[8] = 0x8000000000000000;
      param_1[7] = 0xb;
      param_1[0xb] = lVar28;
      param_1[0xc] = uVar13;
      param_1[0xd] = uVar24;
      if (pppppppuVar25 != (undefined8 *******)0x0) {
        _free(piVar26);
      }
      bVar7 = false;
      lVar18 = 2;
      if ((undefined8 *******)0x1 < pppppppuStack_2a0) {
        lVar18 = (long)pppppppuStack_2a0 + -2;
      }
      goto joined_r0x000102ddf414;
    }
    pppppppuStack_d0 = &ppppppplStack_80;
    pppppppuStack_c8 =
         (undefined8 *******)
         __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
    ;
    ppppppplStack_80 = ppppppplStack_330;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&pppppppuStack_140,s__failed_to_parse_tool_search_arg_108af2883,&pppppppuStack_d0);
    ppppppplVar22 = ppppppplStack_80;
    ppppppplVar20 = ppppppplStack_130;
    pppppppuVar23 = pppppppuStack_138;
    pppppppuVar15 = pppppppuStack_140;
    if (*ppppppplStack_80 == (long ******)0x1) {
      func_0x00010337f5d0(ppppppplStack_80 + 1);
    }
    else if ((*ppppppplStack_80 == (long ******)0x0) && (ppppppplStack_80[2] != (long ******)0x0)) {
      _free(ppppppplStack_80[1]);
    }
    _free(ppppppplVar22);
    param_1[2] = pppppppuVar15;
    param_1[3] = pppppppuVar23;
    param_1[4] = ppppppplVar20;
    param_1[1] = 0;
    *param_1 = 6;
    if (pppppppuVar25 != (undefined8 *******)0x0) {
      _free(piVar26);
    }
    if (lVar28 != 0) {
      _free(uVar13);
    }
    lVar18 = 2;
    if ((undefined8 *******)0x1 < pppppppuStack_2a0) {
      lVar18 = (long)pppppppuStack_2a0 + -2;
    }
    if (lVar18 == 3) {
LAB_102ddfeec:
      pppppppuVar25 = pppppppuStack_248;
      if (((ulong)pcStack_250 & 0x7fffffffffffffff) != 0) {
LAB_102ddfefc:
        _free(pppppppuVar25);
      }
    }
    else {
      if (lVar18 == 4) {
        if ((ppppppuStack_280 != (undefined8 ******)0x8000000000000000) &&
           (ppppppuStack_280 != (undefined8 ******)0x0)) {
          _free(uStack_278);
        }
        goto LAB_102ddfeec;
      }
      if (lVar18 == 6) {
        if ((pcStack_250 != (char *)0x8000000000000000) && (pcStack_250 != (char *)0x0)) {
          _free(pppppppuStack_248);
        }
        pppppppuVar25 = pppppppuStack_230;
        if ((uStack_238 & 0x7fffffffffffffff) == 0) goto LAB_102ddfb1c;
        goto LAB_102ddfefc;
      }
      FUN_103396fdc(&pppppppuStack_2a0);
    }
  }
LAB_102ddfb1c:
  pppppppuStack_c8 = (undefined8 *******)param_1[2];
  pppppppuStack_d0 = (undefined8 *******)param_1[1];
  pppppppuStack_b8 = (undefined8 *******)param_1[4];
  ppppppplStack_c0 = (long *******)param_1[3];
  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
      ((bRam000000010b62b3b0 - 1 < 2 ||
       ((bRam000000010b62b3b0 != 0 &&
        (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (0x10b62b3a0), cVar9 != '\0')))))) &&
     (iVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE(lRam000000010b62b3a0)
     , iVar10 != 0)) {
    pppppppuStack_288 = (undefined8 *******)(lRam000000010b62b3a0 + 0x30);
    pppppppuStack_1c0 = &pppppppuStack_d0;
    ppppppplStack_190 = (long *******)&pppppppuStack_1c0;
    puStack_188 = &UNK_10b2aad10;
    pppppppuStack_298 = &ppppppplStack_190;
    pppppppuStack_2a0 = (undefined8 *******)0x1;
    ppppppplStack_290 = (long *******)0x1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (lRam000000010b62b3a0,&pppppppuStack_2a0);
    lVar18 = lRam000000010b62b3a0;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
      pppppppuStack_138 = *(undefined8 ********)(lRam000000010b62b3a0 + 0x20);
      ppppppplStack_130 = *(long ********)(lRam000000010b62b3a0 + 0x28);
      pppppppuStack_140 = (undefined8 *******)0x1;
      puVar3 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_10b3c24c8;
      }
      puVar4 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar4 = &UNK_109adfc03;
      }
      iVar10 = (**(code **)(puVar3 + 0x18))(puVar4,&pppppppuStack_140);
      if (iVar10 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar18,puVar4,puVar3,&pppppppuStack_140,&pppppppuStack_2a0);
      }
    }
  }
  else {
    lVar18 = lRam000000010b62b3a0;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
      lStack_1d8 = *(long *)(lRam000000010b62b3a0 + 0x20);
      uStack_1d0 = *(undefined8 *)(lRam000000010b62b3a0 + 0x28);
      uStack_1e0 = 1;
      puVar3 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_10b3c24c8;
      }
      puVar4 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar4 = &UNK_109adfc03;
      }
      iVar10 = (**(code **)(puVar3 + 0x18))(puVar4,&uStack_1e0);
      if (iVar10 != 0) {
        pppppppuStack_128 = (undefined8 *******)(lRam000000010b62b3a0 + 0x30);
        pppppppuStack_1c8 = &pppppppuStack_d0;
        ppppppplStack_80 = (long *******)&pppppppuStack_1c8;
        ppppppplStack_78 = (long *******)&UNK_10b2aad10;
        pppppppuStack_138 = &ppppppplStack_80;
        pppppppuStack_140 = (undefined8 *******)0x1;
        ppppppplStack_130 = (long *******)0x1;
        ppppppuStack_280 = *(undefined8 *******)(lVar18 + 0x60);
        uStack_278 = *(undefined8 *)(lVar18 + 0x68);
        pppppppuStack_298 = *(undefined8 ********)(lVar18 + 0x50);
        ppppppplStack_290 = *(long ********)(lVar18 + 0x58);
        pppppppuStack_2a0 = (undefined8 *******)0x1;
        if (pppppppuStack_298 == (undefined8 *******)0x0) {
          pppppppuStack_2a0 = (undefined8 *******)0x2;
        }
        uStack_258 = *(undefined8 *)(lVar18 + 8);
        pppppppuStack_1c0 = &pppppppuStack_140;
        uStack_1b8 = CONCAT71(uStack_1b8._1_7_,1);
        ppppppplStack_190 = (long *******)&pppppppuStack_1c0;
        puStack_188 = &DAT_1061c2098;
        pppppppuStack_288 = (undefined8 *******)0x1;
        if (ppppppuStack_280 == (undefined8 ******)0x0) {
          pppppppuStack_288 = (undefined8 *******)0x2;
        }
        lStack_268 = lStack_1d8;
        uStack_270 = uStack_1e0;
        uStack_260 = uStack_1d0;
        pppppppuStack_248 = &ppppppplStack_190;
        pcStack_250 = s__108b39f4f;
        (**(code **)(puVar3 + 0x20))(puVar4,&pppppppuStack_2a0);
      }
    }
  }
  param_1[2] = pppppppuStack_c8;
  param_1[1] = pppppppuStack_d0;
  param_1[4] = pppppppuStack_b8;
  param_1[3] = ppppppplStack_c0;
  *param_1 = 6;
LAB_102ddfc48:
  if (bVar21) {
    if (pppppppuStack_2d0 != (undefined8 *******)0x2) {
      pppppppuVar25 = pppppppuStack_2c8;
      if (((ulong)pppppppuStack_2d0 & 1) != 0) {
        pppppppuVar25 =
             (undefined8 *******)
             ((long)pppppppuStack_2c8 +
             ((long)ppppppplStack_2c0[2] - 1U & 0xfffffffffffffff0) + 0x10);
      }
      (*(code *)ppppppplStack_2c0[0xd])(pppppppuVar25,&pppppppuStack_2b8);
    }
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (ppppppuStack_2b0 != (undefined8 ******)0x0)) {
      pppppppuStack_140 = (undefined8 *******)ppppppuStack_2b0[2];
      pppppppuStack_138 = (undefined8 *******)ppppppuStack_2b0[3];
      pppppppuStack_2a0 = &pppppppuStack_140;
      pppppppuStack_298 = (undefined8 *******)&DAT_103296230;
      FUN_10362ff54(&pppppppuStack_2d0,&UNK_108d906cc,0x15,s_<____108ab67c5,&pppppppuStack_2a0);
    }
    FUN_10337c6bc(&pppppppuStack_2d0);
  }
  return;
}

