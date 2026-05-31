
void __ZN25codex_utils_stream_parser13proposed_plan26extract_proposed_plan_text17ha2a939085aeee5c1E
               (long *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *extraout_x8;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong unaff_x22;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined2 uStack_238;
  long lStack_230;
  long lStack_228;
  ulong uStack_220;
  long lStack_210;
  long lStack_208;
  ulong uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_198;
  long lStack_188;
  long lStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined2 uStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long *plStack_130;
  long *plStack_128;
  long lStack_120;
  long *plStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  long *plStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long *plStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  
  puVar3 = (undefined8 *)_malloc(0x20);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &UNK_108f56cc9;
    puVar3[1] = 0xf;
    puVar3[2] = &UNK_108f56cd8;
    puVar3[3] = 0x10;
    lStack_180 = 1;
    lStack_168 = 0;
    uStack_170 = 1;
    uStack_160 = 1;
    uStack_158 = 0;
    uStack_150 = 0x100;
    lStack_148 = 0;
    lStack_140 = 1;
    lStack_138 = 0;
    puStack_178 = puVar3;
    __ZN137__LT_codex_utils_stream_parser__proposed_plan__ProposedPlanParser_u20_as_u20_codex_utils_stream_parser__stream_text__StreamTextParser_GT_8push_str17he703a1e085c48493E
              (&lStack_110,&lStack_180,param_2,param_3);
    plStack_118 = plStack_f0 + lStack_e8 * 4;
    plStack_130 = plStack_f0;
    plStack_128 = plStack_f0;
    lStack_120 = lStack_f8;
    __ZN137__LT_codex_utils_stream_parser__proposed_plan__ProposedPlanParser_u20_as_u20_codex_utils_stream_parser__stream_text__StreamTextParser_GT_6finish17ha249fd6908b04651E
              (&lStack_e0,&lStack_180);
    plVar2 = plStack_118;
    lVar11 = lStack_120;
    lStack_188 = 0;
    bVar1 = false;
    plStack_a8 = plStack_128;
    plStack_b0 = plStack_130;
    plStack_98 = plStack_118;
    lStack_a0 = lStack_120;
    plStack_90 = plStack_c0;
    lStack_198 = 1;
    plVar8 = plStack_128;
    plVar12 = plStack_130;
    plVar15 = plStack_c0;
    do {
      while (plVar7 = plVar8, plVar12 != (long *)0x0) {
        if (plVar8 == plVar2) {
LAB_105595b78:
          uVar10 = (long)plVar2 - (long)plVar7;
          if (uVar10 != 0) {
            uVar10 = uVar10 >> 5;
            plVar8 = plVar7 + 1;
            do {
              if (((plVar8[-1] == 0) || (plVar8[-1] == 2)) && (*plVar8 != 0)) {
                _free(plVar8[1]);
              }
              plVar8 = plVar8 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          if (lVar11 != 0) {
            _free(plVar12);
          }
          plStack_b0 = (long *)0x0;
          break;
        }
        plVar7 = plVar8 + 4;
        lVar5 = *plVar8;
        plStack_a8 = plVar7;
        if (lVar5 == 4) goto LAB_105595b78;
        lVar9 = plVar8[1];
        lVar13 = plVar8[2];
        plVar6 = plVar8;
        plVar14 = plVar15;
        if (lVar5 < 2) goto LAB_105595c00;
LAB_105595b24:
        plVar8 = plVar7;
        plVar15 = plVar14;
        if (lVar5 != 3) {
          uVar10 = plVar6[3];
          if ((ulong)(lStack_148 - lStack_188) < uVar10) {
            FUN_108a05fa4(&lStack_148,lStack_188,uVar10,1,1);
            lStack_198 = lStack_140;
            lStack_188 = lStack_138;
          }
          _memcpy(lStack_198 + lStack_188,lVar13,uVar10);
          lStack_188 = lStack_188 + uVar10;
          lStack_138 = lStack_188;
joined_r0x000105595c58:
          plVar8 = plVar7;
          if (lVar9 != 0) {
            _free(lVar13);
          }
        }
      }
      if (plVar15 == plStack_c0 + lStack_b8 * 4) goto LAB_105595ca4;
      plVar14 = plVar15 + 4;
      lVar5 = *plVar15;
      if (lVar5 == 4) goto LAB_105595ca4;
      plVar12 = (long *)0x0;
      lVar9 = plVar15[1];
      lVar13 = plVar15[2];
      plVar6 = plVar15;
      plVar15 = plVar14;
      if (1 < lVar5) goto LAB_105595b24;
LAB_105595c00:
      if (lVar5 == 0) goto joined_r0x000105595c58;
      lStack_188 = 0;
      lStack_138 = 0;
      bVar1 = true;
      plVar8 = plVar7;
    } while( true );
  }
  uVar4 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
  if (param_3 != 0) {
    _free();
  }
  func_0x000105596c30(&plStack_b0);
  if (lStack_e0 != 0) {
    _free(uStack_d8);
  }
  if (lStack_110 != 0) goto LAB_105595dc8;
  while (lStack_148 == 0) {
    func_0x000105596e78(&lStack_180);
    __Unwind_Resume(uVar4);
LAB_105595dc8:
    _free(uStack_108);
  }
  _free(lStack_140);
  func_0x000105596e78(&lStack_180);
  auVar16 = __Unwind_Resume(uVar4);
  puVar3 = (undefined8 *)_malloc(0x20);
  if (puVar3 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
LAB_105595fe0:
    FUN_108a05fa4(&lStack_230,unaff_x22,auVar16._0_8_,1,1);
  }
  else {
    *puVar3 = &UNK_108f56cc9;
    puVar3[1] = 0xf;
    puVar3[2] = &UNK_108f56cd8;
    puVar3[3] = 0x10;
    lStack_268 = 1;
    lStack_250 = 0;
    uStack_258 = 1;
    uStack_248 = 1;
    uStack_240 = 0;
    uStack_238 = 0x100;
    puStack_260 = puVar3;
    __ZN137__LT_codex_utils_stream_parser__proposed_plan__ProposedPlanParser_u20_as_u20_codex_utils_stream_parser__stream_text__StreamTextParser_GT_8push_str17he703a1e085c48493E
              (&lStack_210,&lStack_268,auVar16._0_8_,auVar16._8_8_);
    lVar11 = lStack_1f0;
    lStack_228 = lStack_208;
    lStack_230 = lStack_210;
    uStack_220 = uStack_200;
    if (lStack_1e8 != 0) {
      plVar12 = (long *)(lStack_1f0 + 8);
      lVar5 = lStack_1e8;
      do {
        if (((plVar12[-1] == 0) || (plVar12[-1] == 2)) && (*plVar12 != 0)) {
          _free(plVar12[1]);
        }
        plVar12 = plVar12 + 4;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (lStack_1f8 != 0) {
      _free(lVar11);
    }
    __ZN137__LT_codex_utils_stream_parser__proposed_plan__ProposedPlanParser_u20_as_u20_codex_utils_stream_parser__stream_text__StreamTextParser_GT_6finish17ha249fd6908b04651E
              (&lStack_210,&lStack_268);
    auVar16._8_8_ = lStack_208;
    auVar16._0_8_ = uStack_200;
    unaff_x22 = uStack_220;
    if (lStack_230 - uStack_220 < uStack_200) goto LAB_105595fe0;
  }
  uVar10 = uStack_220;
  _memcpy(lStack_228 + uStack_220,auVar16._8_8_,auVar16._0_8_);
  uStack_220 = uVar10 + auVar16._0_8_;
  if (lStack_210 != 0) {
    _free(auVar16._8_8_);
  }
  if (lStack_1e8 != 0) {
    plVar12 = (long *)(lStack_1f0 + 8);
    lVar11 = lStack_1e8;
    do {
      if (((plVar12[-1] == 0) || (plVar12[-1] == 2)) && (*plVar12 != 0)) {
        _free(plVar12[1]);
      }
      plVar12 = plVar12 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if (lStack_1f8 != 0) {
    _free(lStack_1f0);
  }
  extraout_x8[1] = lStack_228;
  *extraout_x8 = lStack_230;
  extraout_x8[2] = uStack_220;
  if (lStack_268 != 0) {
    _free(puStack_260);
  }
  uVar4 = uStack_248;
  if (lStack_250 == 0) {
    return;
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(uVar4);
  return;
LAB_105595ca4:
  func_0x000105596c30(&plStack_b0);
  if (lStack_e0 != 0) {
    _free(uStack_d8);
  }
  if (lStack_110 != 0) {
    _free(uStack_108);
  }
  if (bVar1) {
    *param_1 = lStack_148;
    param_1[1] = lStack_198;
    param_1[2] = lStack_188;
  }
  else {
    *param_1 = -0x8000000000000000;
    if (lStack_148 != 0) {
      _free(lStack_198);
    }
  }
  if (lStack_180 != 0) {
    _free(puStack_178);
  }
  uVar4 = uStack_160;
  if (lStack_168 == 0) {
    return;
  }
  goto code_r0x000108aa97c4;
}

