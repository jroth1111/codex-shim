
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106039040(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  long extraout_x9;
  long lVar9;
  undefined8 *extraout_x10;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined *puStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
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
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
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
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  long *plStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long **pplStack_80;
  ulong uStack_78;
  
  if (param_2 == (long *)0x0) {
    if (lRam000000010b66fea8 == 0) {
      puVar6 = (undefined *)0x0;
      lVar8 = 0;
    }
    else {
      plVar4 = (long *)(*___ZN3std6thread7current2id2ID17hf33fc0a13e09aaafE)
                                 (&__ZN3std6thread7current2id2ID17hf33fc0a13e09aaafE);
      lVar8 = *plVar4;
      param_1 = extraout_x10;
      lVar9 = extraout_x9;
LAB_1060390c0:
      puVar6 = &UNK_109bd66e6;
      if (lVar8 != lVar9) {
        puVar6 = (undefined *)0x0;
      }
      lVar8 = 4;
    }
  }
  else {
    lVar8 = *param_2;
    puVar6 = *(undefined **)(lVar8 + 0x18);
    if (puVar6 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
      if (lRam000000010b66fea8 != 0) {
        lVar9 = *(long *)(lVar8 + 0x10);
        lVar8 = lRam000000010b66fea8;
        goto LAB_1060390c0;
      }
    }
    else {
      lVar8 = *(long *)(lVar8 + 0x20) + -1;
    }
  }
  uVar12 = *param_1;
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  lVar9 = param_1[3];
  puStack_2f8 = &UNK_109bd6828;
  if (puVar6 != (undefined *)0x0) {
    puStack_2f8 = puVar6;
  }
  lStack_2f0 = 9;
  if (puVar6 != (undefined *)0x0) {
    lStack_2f0 = lVar8;
  }
  lStack_2e0 = 0;
  iVar3 = _pthread_threadid_np(0,&lStack_2e0);
  lVar8 = lStack_2e0;
  if (iVar3 == 0) {
LAB_10603916c:
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2d8 = 0;
    lStack_2e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0x200;
    ppuStack_c0 = &puStack_2f8;
    puStack_b8 = &DAT_10603bec4;
    plStack_b0 = &lStack_2e8;
    puStack_a8 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    puStack_98 = &DAT_10603be64;
    puStack_88 = &DAT_10603bec4;
    pplStack_80 = &plStack_d8;
    uStack_78 = 0;
    lStack_2e8 = lVar8;
    plStack_d8 = &lStack_2e0;
    uStack_a0 = uVar12;
    uStack_90 = uVar2;
    iVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                      (&pplStack_80,&UNK_10b4ad758,s_thread_________panicked_at___108b34d36,
                       &ppuStack_c0);
    if (iVar3 != 0) {
      if (uStack_78 != 0) {
        if ((uStack_78 & 3) == 1) {
          puVar10 = (undefined8 *)(uStack_78 - 1);
          uVar11 = *puVar10;
          puVar13 = *(undefined8 **)(uStack_78 + 7);
          pcVar7 = (code *)*puVar13;
          if (pcVar7 != (code *)0x0) {
            (*pcVar7)(uVar11);
          }
          if (puVar13[1] != 0) {
            _free(uVar11);
          }
          _free(puVar10);
        }
        ppuStack_c0 = &puStack_2f8;
        puStack_b8 = &DAT_10603bec4;
        plStack_b0 = &lStack_2e8;
        puStack_a8 = &
                     __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        puStack_98 = &DAT_10603be64;
        puStack_88 = &DAT_10603bec4;
        uStack_a0 = uVar12;
        uStack_90 = uVar2;
        uVar5 = (**(code **)(lVar9 + 0x48))
                          (uVar1,s_thread_________panicked_at___108b34d36,&ppuStack_c0);
        if ((uVar5 & 3) != 1) {
          return;
        }
        puVar10 = (undefined8 *)(uVar5 - 1);
        uVar12 = *puVar10;
        puVar13 = *(undefined8 **)(uVar5 + 7);
        if ((code *)*puVar13 != (code *)0x0) {
          (*(code *)*puVar13)(uVar12);
        }
LAB_106039318:
        if (puVar13[1] != 0) {
          _free(uVar12);
        }
        _free(puVar10);
        return;
      }
      goto LAB_1060393a8;
    }
    if ((uStack_78 & 3) == 1) {
      puVar10 = (undefined8 *)(uStack_78 - 1);
      uVar12 = *puVar10;
      puVar13 = *(undefined8 **)(uStack_78 + 7);
      pcVar7 = (code *)*puVar13;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar12);
      }
      if (puVar13[1] != 0) {
        _free(uVar12);
      }
      _free(puVar10);
    }
    if (uStack_c8 < 0x201) {
      uVar5 = (**(code **)(lVar9 + 0x38))(uVar1,&lStack_2e0);
      if ((uVar5 & 3) != 1) {
        return;
      }
      puVar10 = (undefined8 *)(uVar5 - 1);
      uVar12 = *puVar10;
      puVar13 = *(undefined8 **)(uVar5 + 7);
      if ((code *)*puVar13 != (code *)0x0) {
        (*(code *)*puVar13)(uVar12);
      }
      goto LAB_106039318;
    }
    __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uStack_c8,0x200,&UNK_10b4ae418);
  }
  else {
    plVar4 = (long *)(*___ZN3std6thread7current2id2ID17hf33fc0a13e09aaafE)();
    lVar8 = *plVar4;
    if (*plVar4 != 0) goto LAB_10603916c;
    if (lRam000000010b66feb0 != -1) {
      lVar8 = lRam000000010b66feb0 + 1;
      lRam000000010b66feb0 = lVar8;
      *plVar4 = lVar8;
      goto LAB_10603916c;
    }
  }
  FUN_108a82a30();
LAB_1060393a8:
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd58ef,0xad,&UNK_10b4ad788);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1060393c4);
  (*pcVar7)();
}

