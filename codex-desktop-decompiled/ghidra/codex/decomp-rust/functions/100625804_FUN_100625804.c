
void FUN_100625804(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong *puVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 auVar22 [16];
  long lStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  ulong uStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  ulong *puStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined1 uStack_230;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong *puStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined1 uStack_160;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong *puStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined1 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  uVar11 = *param_2;
  uVar21 = param_2[1];
  uVar17 = param_2[2];
  uVar8 = param_2[0xf];
  uVar13 = param_2[0x10];
  *param_2 = 0x8000000000000001;
  if (uVar11 == 0x8000000000000001) {
    uVar9 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd62fe,0x8d,&UNK_10b24e0b8);
    FUN_100de3b58(&uStack_110);
    auVar22 = __Unwind_Resume(uVar9);
    puVar14 = auVar22._8_8_;
    puVar10 = auVar22._0_8_;
    uStack_118 = 0x100625a74;
    uVar20 = *puVar14;
    uVar3 = puVar14[1];
    uVar18 = puVar14[2];
    uVar1 = puVar14[0xf];
    uVar4 = puVar14[0x10];
    *puVar14 = 0x8000000000000001;
    uStack_150 = uVar13;
    uStack_148 = uVar11;
    uStack_140 = uVar8;
    uStack_138 = uVar17;
    uStack_130 = uVar21;
    uStack_128 = uVar9;
    puStack_120 = &stack0xfffffffffffffff0;
    if (uVar20 == 0x8000000000000001) {
      uVar9 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd62fe,0x8d,&UNK_10b24e0b8);
      FUN_100de3b58(&uStack_1c0);
      auVar22 = __Unwind_Resume(uVar9);
      plVar15 = auVar22._8_8_;
      plVar12 = auVar22._0_8_;
      lVar16 = plVar15[0x1a];
      lStack_2b0 = *plVar15;
      *plVar15 = -0x8000000000000000;
      if (lStack_2b0 == -0x8000000000000000) {
        uStack_2c0 = 8;
      }
      else {
        lStack_2c8 = plVar15[2];
        lStack_2d0 = plVar15[1];
        uStack_2c0 = 2;
      }
      lVar19 = plVar15[0x1b];
      lStack_2a0 = lStack_2c8;
      lStack_2a8 = lStack_2d0;
      uVar11 = plVar15[3];
      uVar8 = plVar15[4];
      uVar21 = plVar15[5];
      lVar2 = plVar15[0x12];
      lVar5 = plVar15[0x13];
      plVar15[3] = -0x7fffffffffffffff;
      lStack_2b8 = lVar16;
      lStack_298 = lVar19;
      if (uVar11 != 0x8000000000000001) {
        lStack_268 = plVar15[0xd];
        lStack_270 = plVar15[0xc];
        puStack_258 = (ulong *)plVar15[0xf];
        lStack_260 = plVar15[0xe];
        lStack_248 = plVar15[0x11];
        lStack_250 = plVar15[0x10];
        lStack_288 = plVar15[9];
        uStack_290 = plVar15[8];
        lStack_278 = plVar15[0xb];
        lStack_280 = plVar15[10];
        uStack_230 = 0;
        lStack_240 = lVar2;
        lStack_238 = lVar5;
        func_0x000101568438(plVar12,&uStack_2c0,&uStack_290);
        if (*plVar12 == 5) {
          uStack_290 = plVar12[1];
          lStack_268 = plVar12[6];
          lStack_270 = plVar12[5];
          puStack_258 = (ulong *)plVar12[8];
          lStack_260 = plVar12[7];
          lStack_248 = plVar12[10];
          lStack_250 = plVar12[9];
          lStack_240 = plVar12[0xb];
          lStack_278 = plVar12[4];
          lStack_288 = plVar12[2];
          lStack_280 = plVar12[3];
          if ((uStack_290 & 1) == 0) {
            uStack_290 = 1;
            lStack_288 = lVar2;
            lStack_280 = lVar5;
          }
          uVar13 = uVar8;
          if (uVar11 == 0x8000000000000000) {
            if (uVar21 == 0) {
              uVar13 = 1;
            }
            else {
              uVar13 = _malloc(uVar21);
              if (uVar13 == 0) {
                FUN_107c03c64(1,uVar21);
                goto LAB_100625eac;
              }
            }
            _memcpy(uVar13,uVar8,uVar21);
            uVar11 = uVar21;
          }
          lVar2 = lStack_250;
          if (lStack_250 == lStack_260) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_260);
          }
          puVar10 = puStack_258;
          if (lVar2 != 0) {
            _memmove(puStack_258 + 3,puStack_258,lVar2 * 0x18);
          }
          *puVar10 = uVar11;
          puVar10[1] = uVar13;
          puVar10[2] = uVar21;
          plVar12[0xb] = lStack_240;
          plVar12[6] = lStack_268;
          plVar12[5] = lStack_270;
          plVar12[8] = (long)puStack_258;
          plVar12[7] = lStack_260;
          plVar12[2] = lStack_288;
          plVar12[1] = uStack_290;
          plVar12[4] = lStack_278;
          plVar12[3] = lStack_280;
          plVar12[10] = lStack_248;
          plVar12[9] = lVar2 + 1;
          *plVar12 = 5;
          lStack_288 = plVar12[2];
          uStack_290 = plVar12[1];
          lStack_278 = plVar12[4];
          lStack_280 = plVar12[3];
          lStack_268 = plVar12[6];
          lStack_270 = plVar12[5];
          puStack_258 = (ulong *)plVar12[8];
          lStack_260 = plVar12[7];
          lStack_248 = plVar12[10];
          lStack_250 = plVar12[9];
          __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar19,lVar16);
          *plVar12 = 5;
        }
        else if ((uVar11 & 0x7fffffffffffffff) != 0) {
          _free(uVar8);
        }
        return;
      }
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd62fe,0x8d,&UNK_10b24e0b8);
LAB_100625eac:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100625eb0);
      (*pcVar6)();
    }
    uStack_1a8 = puVar14[8];
    uStack_1b0 = puVar14[7];
    uStack_198 = puVar14[10];
    uStack_1a0 = puVar14[9];
    puStack_188 = (ulong *)puVar14[0xc];
    uStack_190 = puVar14[0xb];
    uStack_178 = puVar14[0xe];
    uStack_180 = puVar14[0xd];
    uStack_1b8 = puVar14[6];
    uStack_1c0 = puVar14[5];
    uStack_160 = 0;
    uStack_170 = uVar1;
    uStack_168 = uVar4;
    func_0x0001012d0630(puVar10,&uStack_1c0);
    if (*puVar10 != 2) {
      uStack_198 = puVar10[5];
      uStack_1a0 = puVar10[4];
      puStack_188 = (ulong *)puVar10[7];
      uStack_190 = puVar10[6];
      uStack_178 = puVar10[9];
      uStack_180 = puVar10[8];
      uStack_170 = puVar10[10];
      uStack_1c0 = *puVar10;
      uStack_1a8 = puVar10[3];
      uStack_1b8 = puVar10[1];
      uStack_1b0 = puVar10[2];
      if ((uStack_1c0 & 1) == 0) {
        uStack_1c0 = 1;
        uStack_1b8 = uVar1;
        uStack_1b0 = uVar4;
      }
      uVar11 = uVar3;
      if (uVar20 == 0x8000000000000000) {
        if (uVar18 == 0) {
          uVar11 = 1;
        }
        else {
          uVar11 = _malloc(uVar18);
          if (uVar11 == 0) {
            FUN_107c03c64(1,uVar18);
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100625b70);
            (*pcVar6)();
          }
        }
        _memcpy(uVar11,uVar3,uVar18);
        uVar20 = uVar18;
      }
      uVar8 = uStack_180;
      if (uStack_180 == uStack_190) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&uStack_190);
      }
      puVar14 = puStack_188;
      if (uVar8 != 0) {
        _memmove(puStack_188 + 3,puStack_188,uVar8 * 0x18);
      }
      *puVar14 = uVar20;
      puVar14[1] = uVar11;
      puVar14[2] = uVar18;
      puVar10[5] = uStack_198;
      puVar10[4] = uStack_1a0;
      puVar10[7] = (ulong)puStack_188;
      puVar10[6] = uStack_190;
      puVar10[10] = uStack_170;
      puVar10[1] = uStack_1b8;
      *puVar10 = uStack_1c0;
      puVar10[3] = uStack_1a8;
      puVar10[2] = uStack_1b0;
      puVar10[9] = uStack_178;
      puVar10[8] = uVar8 + 1;
      return;
    }
    uVar21 = uVar3;
    if ((uVar20 & 0x7fffffffffffffff) == 0) {
      return;
    }
  }
  else {
    uStack_f8 = param_2[8];
    uStack_100 = param_2[7];
    uStack_e8 = param_2[10];
    uStack_f0 = param_2[9];
    puStack_d8 = (ulong *)param_2[0xc];
    uStack_e0 = param_2[0xb];
    uStack_c8 = param_2[0xe];
    uStack_d0 = param_2[0xd];
    uStack_108 = param_2[6];
    uStack_110 = param_2[5];
    uStack_b0 = 0;
    uStack_c0 = uVar8;
    uStack_b8 = uVar13;
    FUN_10160334c(&uStack_a8,&uStack_110);
    if (uStack_a8 == 2) {
      param_1[2] = uStack_98;
      param_1[1] = uStack_a0;
      param_1[3] = uStack_90;
      *param_1 = 2;
    }
    else {
      param_1[5] = uStack_80;
      param_1[4] = uStack_88;
      param_1[7] = uStack_70;
      param_1[6] = uStack_78;
      param_1[9] = uStack_60;
      param_1[8] = uStack_68;
      param_1[10] = uStack_58;
      param_1[1] = uStack_a0;
      *param_1 = uStack_a8;
      param_1[3] = uStack_90;
      param_1[2] = uStack_98;
      if (*param_1 != 2) {
        bVar7 = (*param_1 & 1) == 0;
        uVar20 = param_1[2];
        if (bVar7) {
          uVar20 = uVar13;
        }
        param_1[2] = uVar20;
        puStack_d8 = (ulong *)param_1[7];
        uStack_e0 = param_1[6];
        uStack_c8 = param_1[9];
        uStack_d0 = param_1[8];
        uStack_f8 = param_1[3];
        uStack_e8 = param_1[5];
        uStack_f0 = param_1[4];
        uVar20 = param_1[1];
        if (bVar7) {
          uVar20 = uVar8;
        }
        *param_1 = 1;
        param_1[1] = uVar20;
        uStack_110 = *param_1;
        uStack_c0 = param_1[10];
        uStack_108 = param_1[1];
        uStack_100 = param_1[2];
        if ((uStack_110 & 1) == 0) {
          uStack_110 = 1;
          uStack_108 = uVar8;
          uStack_100 = uVar13;
        }
        uVar8 = uVar21;
        if (uVar11 == 0x8000000000000000) {
          if (uVar17 == 0) {
            uVar8 = 1;
          }
          else {
            uVar8 = _malloc(uVar17);
            if (uVar8 == 0) {
              FUN_107c03c64(1,uVar17);
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100625978);
              (*pcVar6)();
            }
          }
          _memcpy(uVar8,uVar21,uVar17);
          uVar11 = uVar17;
        }
        uVar21 = uStack_d0;
        if (uStack_d0 == uStack_e0) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&uStack_e0);
        }
        puVar10 = puStack_d8;
        if (uVar21 != 0) {
          _memmove(puStack_d8 + 3,puStack_d8,uVar21 * 0x18);
        }
        *puVar10 = uVar11;
        puVar10[1] = uVar8;
        puVar10[2] = uVar17;
        param_1[5] = uStack_e8;
        param_1[4] = uStack_f0;
        param_1[7] = (ulong)puStack_d8;
        param_1[6] = uStack_e0;
        param_1[10] = uStack_c0;
        param_1[1] = uStack_108;
        *param_1 = uStack_110;
        param_1[3] = uStack_f8;
        param_1[2] = uStack_100;
        param_1[9] = uStack_c8;
        param_1[8] = uVar21 + 1;
        return;
      }
    }
    if ((uVar11 & 0x7fffffffffffffff) == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(uVar21);
  return;
}

