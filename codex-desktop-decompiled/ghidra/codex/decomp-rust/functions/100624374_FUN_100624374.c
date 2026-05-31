
void FUN_100624374(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  long lStack_330;
  long lStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong *puStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  undefined1 uStack_290;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong *puStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined1 uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
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
  
  uVar14 = *param_2;
  uVar8 = param_2[1];
  uVar12 = param_2[2];
  uVar5 = param_2[0xf];
  uVar2 = param_2[0x10];
  *param_2 = 0x8000000000000001;
  if (uVar14 == 0x8000000000000001) {
    uVar6 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd62fe,0x8d,&UNK_10b24e0b8);
    FUN_100de3b58(&uStack_110);
    auVar15 = __Unwind_Resume(uVar6);
    puVar9 = auVar15._8_8_;
    puVar7 = auVar15._0_8_;
    uVar14 = *puVar9;
    uVar8 = puVar9[1];
    uVar12 = puVar9[2];
    uVar5 = puVar9[0xf];
    uVar2 = puVar9[0x10];
    *puVar9 = 0x8000000000000001;
    if (uVar14 == 0x8000000000000001) {
      uVar6 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd62fe,0x8d,&UNK_10b24e0b8);
      FUN_100de3b58(&uStack_220);
      auVar15 = __Unwind_Resume(uVar6);
      plVar10 = auVar15._8_8_;
      puVar7 = auVar15._0_8_;
      lVar11 = plVar10[0x1a];
      lStack_310 = *plVar10;
      *plVar10 = -0x8000000000000000;
      if (lStack_310 == -0x8000000000000000) {
        uStack_320 = 8;
      }
      else {
        lStack_328 = plVar10[2];
        lStack_330 = plVar10[1];
        uStack_320 = 2;
      }
      lVar13 = plVar10[0x1b];
      lStack_300 = lStack_328;
      lStack_308 = lStack_330;
      uVar14 = plVar10[3];
      uVar2 = plVar10[4];
      uVar12 = plVar10[5];
      uVar5 = plVar10[0x12];
      uVar8 = plVar10[0x13];
      plVar10[3] = -0x7fffffffffffffff;
      lStack_318 = lVar11;
      lStack_2f8 = lVar13;
      if (uVar14 != 0x8000000000000001) {
        uStack_2c8 = plVar10[0xd];
        uStack_2d0 = plVar10[0xc];
        puStack_2b8 = (ulong *)plVar10[0xf];
        uStack_2c0 = plVar10[0xe];
        uStack_2a8 = plVar10[0x11];
        uStack_2b0 = plVar10[0x10];
        uStack_2e8 = plVar10[9];
        uStack_2f0 = plVar10[8];
        uStack_2d8 = plVar10[0xb];
        uStack_2e0 = plVar10[10];
        uStack_290 = 0;
        uStack_2a0 = uVar5;
        uStack_298 = uVar8;
        func_0x000101540afc(puVar7,&uStack_320,&uStack_2f0);
        if (*puVar7 == 2) {
          if ((uVar14 & 0x7fffffffffffffff) != 0) {
            _free(uVar2);
          }
        }
        else {
          uStack_2c8 = puVar7[5];
          uStack_2d0 = puVar7[4];
          puStack_2b8 = (ulong *)puVar7[7];
          uStack_2c0 = puVar7[6];
          uStack_2a8 = puVar7[9];
          uStack_2b0 = puVar7[8];
          uStack_2a0 = puVar7[10];
          uStack_2f0 = *puVar7;
          uStack_2d8 = puVar7[3];
          uStack_2e8 = puVar7[1];
          uStack_2e0 = puVar7[2];
          if ((uStack_2f0 & 1) == 0) {
            uStack_2f0 = 1;
            uStack_2e8 = uVar5;
            uStack_2e0 = uVar8;
          }
          uVar5 = uVar2;
          if (uVar14 == 0x8000000000000000) {
            if (uVar12 == 0) {
              uVar5 = 1;
            }
            else {
              uVar5 = _malloc(uVar12);
              if (uVar5 == 0) {
                FUN_107c03c64(1,uVar12);
                goto LAB_100624a88;
              }
            }
            _memcpy(uVar5,uVar2,uVar12);
            uVar14 = uVar12;
          }
          uVar2 = uStack_2b0;
          if (uStack_2b0 == uStack_2c0) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&uStack_2c0);
          }
          puVar9 = puStack_2b8;
          if (uVar2 != 0) {
            _memmove(puStack_2b8 + 3,puStack_2b8,uVar2 * 0x18);
          }
          *puVar9 = uVar14;
          puVar9[1] = uVar5;
          puVar9[2] = uVar12;
          puVar7[5] = uStack_2c8;
          puVar7[4] = uStack_2d0;
          puVar7[7] = (ulong)puStack_2b8;
          puVar7[6] = uStack_2c0;
          puVar7[10] = uStack_2a0;
          puVar7[1] = uStack_2e8;
          *puVar7 = uStack_2f0;
          puVar7[3] = uStack_2d8;
          puVar7[2] = uStack_2e0;
          puVar7[9] = uStack_2a8;
          puVar7[8] = uVar2 + 1;
          if (*puVar7 != 2) {
            uStack_2c8 = puVar7[5];
            uStack_2d0 = puVar7[4];
            puStack_2b8 = (ulong *)puVar7[7];
            uStack_2c0 = puVar7[6];
            uStack_2a8 = puVar7[9];
            uStack_2b0 = puVar7[8];
            uStack_2a0 = puVar7[10];
            uStack_2e8 = puVar7[1];
            uStack_2f0 = *puVar7;
            uStack_2d8 = puVar7[3];
            uStack_2e0 = puVar7[2];
            __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar13,lVar11);
          }
        }
        return;
      }
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd62fe,0x8d,&UNK_10b24e0b8);
LAB_100624a88:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100624a8c);
      (*pcVar3)();
    }
    uStack_208 = puVar9[8];
    uStack_210 = puVar9[7];
    uStack_1f8 = puVar9[10];
    uStack_200 = puVar9[9];
    puStack_1e8 = (ulong *)puVar9[0xc];
    uStack_1f0 = puVar9[0xb];
    uStack_1d8 = puVar9[0xe];
    uStack_1e0 = puVar9[0xd];
    uStack_218 = puVar9[6];
    uStack_220 = puVar9[5];
    uStack_1c0 = 0;
    uStack_1d0 = uVar5;
    uStack_1c8 = uVar2;
    FUN_100613d44(&uStack_1b8,&uStack_220);
    if (uStack_1b8 == 2) {
      puVar7[2] = uStack_1a8;
      puVar7[1] = uStack_1b0;
      puVar7[4] = uStack_198;
      puVar7[3] = uStack_1a0;
      puVar7[6] = uStack_188;
      puVar7[5] = uStack_190;
      *puVar7 = 2;
    }
    else {
      puVar7[5] = uStack_190;
      puVar7[4] = uStack_198;
      puVar7[7] = uStack_180;
      puVar7[6] = uStack_188;
      puVar7[9] = uStack_170;
      puVar7[8] = uStack_178;
      puVar7[10] = uStack_168;
      puVar7[1] = uStack_1b0;
      *puVar7 = uStack_1b8;
      puVar7[3] = uStack_1a0;
      puVar7[2] = uStack_1a8;
      if (*puVar7 != 2) {
        bVar4 = (*puVar7 & 1) == 0;
        uVar1 = puVar7[2];
        if (bVar4) {
          uVar1 = uVar2;
        }
        puVar7[2] = uVar1;
        puStack_1e8 = (ulong *)puVar7[7];
        uStack_1f0 = puVar7[6];
        uStack_1d8 = puVar7[9];
        uStack_1e0 = puVar7[8];
        uStack_208 = puVar7[3];
        uStack_1f8 = puVar7[5];
        uStack_200 = puVar7[4];
        uVar1 = puVar7[1];
        if (bVar4) {
          uVar1 = uVar5;
        }
        *puVar7 = 1;
        puVar7[1] = uVar1;
        uStack_220 = *puVar7;
        uStack_1d0 = puVar7[10];
        uStack_218 = puVar7[1];
        uStack_210 = puVar7[2];
        if ((uStack_220 & 1) == 0) {
          uStack_220 = 1;
          uStack_218 = uVar5;
          uStack_210 = uVar2;
        }
        uVar5 = uVar8;
        if (uVar14 == 0x8000000000000000) {
          if (uVar12 == 0) {
            uVar5 = 1;
          }
          else {
            uVar5 = _malloc(uVar12);
            if (uVar5 == 0) {
              FUN_107c03c64(1,uVar12);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100624760);
              (*pcVar3)();
            }
          }
          _memcpy(uVar5,uVar8,uVar12);
          uVar14 = uVar12;
        }
        uVar2 = uStack_1e0;
        if (uStack_1e0 == uStack_1f0) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&uStack_1f0);
        }
        puVar9 = puStack_1e8;
        if (uVar2 != 0) {
          _memmove(puStack_1e8 + 3,puStack_1e8,uVar2 * 0x18);
        }
        *puVar9 = uVar14;
        puVar9[1] = uVar5;
        puVar9[2] = uVar12;
        puVar7[5] = uStack_1f8;
        puVar7[4] = uStack_200;
        puVar7[7] = (ulong)puStack_1e8;
        puVar7[6] = uStack_1f0;
        puVar7[10] = uStack_1d0;
        puVar7[1] = uStack_218;
        *puVar7 = uStack_220;
        puVar7[3] = uStack_208;
        puVar7[2] = uStack_210;
        puVar7[9] = uStack_1d8;
        puVar7[8] = uVar2 + 1;
        return;
      }
    }
    if ((uVar14 & 0x7fffffffffffffff) == 0) {
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
    uStack_c0 = uVar5;
    uStack_b8 = uVar2;
    func_0x0001014a83ac(&uStack_a8,&uStack_110);
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
        bVar4 = (*param_1 & 1) == 0;
        uVar1 = param_1[2];
        if (bVar4) {
          uVar1 = uVar2;
        }
        param_1[2] = uVar1;
        puStack_d8 = (ulong *)param_1[7];
        uStack_e0 = param_1[6];
        uStack_c8 = param_1[9];
        uStack_d0 = param_1[8];
        uStack_f8 = param_1[3];
        uStack_e8 = param_1[5];
        uStack_f0 = param_1[4];
        uVar1 = param_1[1];
        if (bVar4) {
          uVar1 = uVar5;
        }
        *param_1 = 1;
        param_1[1] = uVar1;
        uStack_110 = *param_1;
        uStack_c0 = param_1[10];
        uStack_108 = param_1[1];
        uStack_100 = param_1[2];
        if ((uStack_110 & 1) == 0) {
          uStack_110 = 1;
          uStack_108 = uVar5;
          uStack_100 = uVar2;
        }
        uVar5 = uVar8;
        if (uVar14 == 0x8000000000000000) {
          if (uVar12 == 0) {
            uVar5 = 1;
          }
          else {
            uVar5 = _malloc(uVar12);
            if (uVar5 == 0) {
              FUN_107c03c64(1,uVar12);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1006244e8);
              (*pcVar3)();
            }
          }
          _memcpy(uVar5,uVar8,uVar12);
          uVar14 = uVar12;
        }
        uVar2 = uStack_d0;
        if (uStack_d0 == uStack_e0) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&uStack_e0);
        }
        puVar7 = puStack_d8;
        if (uVar2 != 0) {
          _memmove(puStack_d8 + 3,puStack_d8,uVar2 * 0x18);
        }
        *puVar7 = uVar14;
        puVar7[1] = uVar5;
        puVar7[2] = uVar12;
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
        param_1[8] = uVar2 + 1;
        return;
      }
    }
    if ((uVar14 & 0x7fffffffffffffff) == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(uVar8);
  return;
}

