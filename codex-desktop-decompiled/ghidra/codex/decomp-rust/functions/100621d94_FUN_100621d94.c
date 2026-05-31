
void FUN_100621d94(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong *puStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined1 uStack_180;
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
  undefined1 uStack_a0;
  undefined7 uStack_9f;
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
  uVar2 = param_2[1];
  uVar12 = param_2[2];
  uVar7 = param_2[0xf];
  uVar3 = param_2[0x10];
  *param_2 = 0x8000000000000001;
  if (uVar14 != 0x8000000000000001) {
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
    uStack_c0 = uVar7;
    uStack_b8 = uVar3;
    FUN_10061703c(&uStack_a8,&uStack_110);
    if (uStack_a8 == 2) {
      *(undefined1 *)(param_1 + 1) = uStack_a0;
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
      param_1[1] = CONCAT71(uStack_9f,uStack_a0);
      *param_1 = uStack_a8;
      param_1[3] = uStack_90;
      param_1[2] = uStack_98;
      if (*param_1 != 2) {
        bVar6 = (*param_1 & 1) == 0;
        uVar1 = param_1[2];
        if (bVar6) {
          uVar1 = uVar3;
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
        if (bVar6) {
          uVar1 = uVar7;
        }
        *param_1 = 1;
        param_1[1] = uVar1;
        uStack_110 = *param_1;
        uStack_c0 = param_1[10];
        uStack_108 = param_1[1];
        uStack_100 = param_1[2];
        if ((uStack_110 & 1) == 0) {
          uStack_110 = 1;
          uStack_108 = uVar7;
          uStack_100 = uVar3;
        }
        uVar7 = uVar2;
        if (uVar14 == 0x8000000000000000) {
          if (uVar12 == 0) {
            uVar7 = 1;
          }
          else {
            uVar7 = _malloc(uVar12);
            if (uVar7 == 0) {
              FUN_107c03c64(1,uVar12);
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100621f00);
              (*pcVar5)();
            }
          }
          _memcpy(uVar7,uVar2,uVar12);
          uVar14 = uVar12;
        }
        uVar2 = uStack_d0;
        if (uStack_d0 == uStack_e0) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&uStack_e0);
        }
        puVar9 = puStack_d8;
        if (uVar2 != 0) {
          _memmove(puStack_d8 + 3,puStack_d8,uVar2 * 0x18);
        }
        *puVar9 = uVar14;
        puVar9[1] = uVar7;
        puVar9[2] = uVar12;
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
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(uVar2);
    return;
  }
  uVar8 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd62fe,0x8d,&UNK_10b24e0b8);
  FUN_100de3b58(&uStack_110);
  auVar15 = __Unwind_Resume(uVar8);
  plVar10 = auVar15._8_8_;
  puVar9 = auVar15._0_8_;
  lVar11 = plVar10[0x1a];
  lStack_200 = *plVar10;
  *plVar10 = -0x8000000000000000;
  if (lStack_200 == -0x8000000000000000) {
    uStack_210 = 8;
  }
  else {
    lStack_218 = plVar10[2];
    lStack_220 = plVar10[1];
    uStack_210 = 2;
  }
  lVar13 = plVar10[0x1b];
  lStack_1f0 = lStack_218;
  lStack_1f8 = lStack_220;
  uVar14 = plVar10[3];
  uVar2 = plVar10[4];
  uVar12 = plVar10[5];
  uVar7 = plVar10[0x12];
  uVar3 = plVar10[0x13];
  plVar10[3] = -0x7fffffffffffffff;
  lStack_208 = lVar11;
  lStack_1e8 = lVar13;
  if (uVar14 == 0x8000000000000001) {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd62fe,0x8d,&UNK_10b24e0b8);
LAB_100622228:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10062222c);
    (*pcVar5)();
  }
  uStack_1b8 = plVar10[0xd];
  uStack_1c0 = plVar10[0xc];
  puStack_1a8 = (ulong *)plVar10[0xf];
  uStack_1b0 = plVar10[0xe];
  uStack_198 = plVar10[0x11];
  uStack_1a0 = plVar10[0x10];
  uStack_1d8 = plVar10[9];
  uStack_1e0 = plVar10[8];
  uStack_1c8 = plVar10[0xb];
  uStack_1d0 = plVar10[10];
  uStack_180 = 0;
  uStack_190 = uVar7;
  uStack_188 = uVar3;
  func_0x000101535a38(puVar9,&uStack_210,&uStack_1e0);
  if (*puVar9 == 2) {
    if ((uVar14 & 0x7fffffffffffffff) != 0) {
      _free(uVar2);
    }
  }
  else {
    uStack_1b8 = puVar9[5];
    uStack_1c0 = puVar9[4];
    puStack_1a8 = (ulong *)puVar9[7];
    uStack_1b0 = puVar9[6];
    uStack_198 = puVar9[9];
    uStack_1a0 = puVar9[8];
    uStack_190 = puVar9[10];
    uStack_1e0 = *puVar9;
    uStack_1c8 = puVar9[3];
    uStack_1d8 = puVar9[1];
    uStack_1d0 = puVar9[2];
    if ((uStack_1e0 & 1) == 0) {
      uStack_1e0 = 1;
      uStack_1d8 = uVar7;
      uStack_1d0 = uVar3;
    }
    uVar7 = uVar2;
    if (uVar14 == 0x8000000000000000) {
      if (uVar12 == 0) {
        uVar7 = 1;
      }
      else {
        uVar7 = _malloc(uVar12);
        if (uVar7 == 0) {
          FUN_107c03c64(1,uVar12);
          goto LAB_100622228;
        }
      }
      _memcpy(uVar7,uVar2,uVar12);
      uVar14 = uVar12;
    }
    uVar2 = uStack_1a0;
    if (uStack_1a0 == uStack_1b0) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&uStack_1b0);
    }
    puVar4 = puStack_1a8;
    if (uVar2 != 0) {
      _memmove(puStack_1a8 + 3,puStack_1a8,uVar2 * 0x18);
    }
    *puVar4 = uVar14;
    puVar4[1] = uVar7;
    puVar4[2] = uVar12;
    puVar9[5] = uStack_1b8;
    puVar9[4] = uStack_1c0;
    puVar9[7] = (ulong)puStack_1a8;
    puVar9[6] = uStack_1b0;
    puVar9[10] = uStack_190;
    puVar9[1] = uStack_1d8;
    *puVar9 = uStack_1e0;
    puVar9[3] = uStack_1c8;
    puVar9[2] = uStack_1d0;
    puVar9[9] = uStack_198;
    puVar9[8] = uVar2 + 1;
    if (*puVar9 != 2) {
      uStack_1b8 = puVar9[5];
      uStack_1c0 = puVar9[4];
      puStack_1a8 = (ulong *)puVar9[7];
      uStack_1b0 = puVar9[6];
      uStack_198 = puVar9[9];
      uStack_1a0 = puVar9[8];
      uStack_190 = puVar9[10];
      uStack_1d8 = puVar9[1];
      uStack_1e0 = *puVar9;
      uStack_1c8 = puVar9[3];
      uStack_1d0 = puVar9[2];
      __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar13,lVar11);
    }
  }
  return;
}

