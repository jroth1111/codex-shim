
void FUN_10062a0f0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong *puStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined1 uStack_120;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined1 uStack_50;
  
  uVar12 = *param_2;
  uVar1 = param_2[1];
  uVar10 = param_2[2];
  uVar5 = param_2[0xf];
  uVar2 = param_2[0x10];
  *param_2 = 0x8000000000000001;
  if (uVar12 != 0x8000000000000001) {
    uStack_98 = param_2[8];
    uStack_a0 = param_2[7];
    uStack_88 = param_2[10];
    uStack_90 = param_2[9];
    puStack_78 = (ulong *)param_2[0xc];
    uStack_80 = param_2[0xb];
    uStack_68 = param_2[0xe];
    uStack_70 = param_2[0xd];
    uStack_a8 = param_2[6];
    uStack_b0 = param_2[5];
    uStack_50 = 0;
    uStack_60 = uVar5;
    uStack_58 = uVar2;
    FUN_10061a998(param_1,&uStack_b0);
    if (*param_1 == 2) {
      if ((uVar12 & 0x7fffffffffffffff) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(uVar1);
        return;
      }
    }
    else {
      uStack_88 = param_1[5];
      uStack_90 = param_1[4];
      puStack_78 = (ulong *)param_1[7];
      uStack_80 = param_1[6];
      uStack_68 = param_1[9];
      uStack_70 = param_1[8];
      uStack_60 = param_1[10];
      uStack_b0 = *param_1;
      uStack_98 = param_1[3];
      uStack_a8 = param_1[1];
      uStack_a0 = param_1[2];
      if ((uStack_b0 & 1) == 0) {
        uStack_b0 = 1;
        uStack_a8 = uVar5;
        uStack_a0 = uVar2;
      }
      uVar5 = uVar1;
      if (uVar12 == 0x8000000000000000) {
        if (uVar10 == 0) {
          uVar5 = 1;
        }
        else {
          uVar5 = _malloc(uVar10);
          if (uVar5 == 0) {
            FUN_107c03c64(1,uVar10);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10062a1ec);
            (*pcVar4)();
          }
        }
        _memcpy(uVar5,uVar1,uVar10);
        uVar12 = uVar10;
      }
      uVar1 = uStack_70;
      if (uStack_70 == uStack_80) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&uStack_80);
      }
      puVar7 = puStack_78;
      if (uVar1 != 0) {
        _memmove(puStack_78 + 3,puStack_78,uVar1 * 0x18);
      }
      *puVar7 = uVar12;
      puVar7[1] = uVar5;
      puVar7[2] = uVar10;
      param_1[5] = uStack_88;
      param_1[4] = uStack_90;
      param_1[7] = (ulong)puStack_78;
      param_1[6] = uStack_80;
      param_1[10] = uStack_60;
      param_1[1] = uStack_a8;
      *param_1 = uStack_b0;
      param_1[3] = uStack_98;
      param_1[2] = uStack_a0;
      param_1[9] = uStack_68;
      param_1[8] = uVar1 + 1;
    }
    return;
  }
  uVar6 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd62fe,0x8d,&UNK_10b24e0b8);
  FUN_100de3b58(&uStack_b0);
  auVar13 = __Unwind_Resume(uVar6);
  plVar8 = auVar13._8_8_;
  puVar7 = auVar13._0_8_;
  lVar9 = plVar8[0x1a];
  lStack_1a0 = *plVar8;
  *plVar8 = -0x8000000000000000;
  if (lStack_1a0 == -0x8000000000000000) {
    uStack_1b0 = 8;
  }
  else {
    lStack_1b8 = plVar8[2];
    lStack_1c0 = plVar8[1];
    uStack_1b0 = 2;
  }
  lVar11 = plVar8[0x1b];
  lStack_190 = lStack_1b8;
  lStack_198 = lStack_1c0;
  uVar12 = plVar8[3];
  uVar1 = plVar8[4];
  uVar10 = plVar8[5];
  uVar5 = plVar8[0x12];
  uVar2 = plVar8[0x13];
  plVar8[3] = -0x7fffffffffffffff;
  lStack_1a8 = lVar9;
  lStack_188 = lVar11;
  if (uVar12 != 0x8000000000000001) {
    uStack_158 = plVar8[0xd];
    uStack_160 = plVar8[0xc];
    puStack_148 = (ulong *)plVar8[0xf];
    uStack_150 = plVar8[0xe];
    uStack_138 = plVar8[0x11];
    uStack_140 = plVar8[0x10];
    uStack_178 = plVar8[9];
    uStack_180 = plVar8[8];
    uStack_168 = plVar8[0xb];
    uStack_170 = plVar8[10];
    uStack_120 = 0;
    uStack_130 = uVar5;
    uStack_128 = uVar2;
    func_0x000101572310(puVar7,&uStack_1b0,&uStack_180);
    if (*puVar7 == 2) {
      if ((uVar12 & 0x7fffffffffffffff) != 0) {
        _free(uVar1);
      }
    }
    else {
      uStack_158 = puVar7[5];
      uStack_160 = puVar7[4];
      puStack_148 = (ulong *)puVar7[7];
      uStack_150 = puVar7[6];
      uStack_138 = puVar7[9];
      uStack_140 = puVar7[8];
      uStack_130 = puVar7[10];
      uStack_180 = *puVar7;
      uStack_168 = puVar7[3];
      uStack_178 = puVar7[1];
      uStack_170 = puVar7[2];
      if ((uStack_180 & 1) == 0) {
        uStack_180 = 1;
        uStack_178 = uVar5;
        uStack_170 = uVar2;
      }
      uVar5 = uVar1;
      if (uVar12 == 0x8000000000000000) {
        if (uVar10 == 0) {
          uVar5 = 1;
        }
        else {
          uVar5 = _malloc(uVar10);
          if (uVar5 == 0) {
            FUN_107c03c64(1,uVar10);
            goto LAB_10062a510;
          }
        }
        _memcpy(uVar5,uVar1,uVar10);
        uVar12 = uVar10;
      }
      uVar1 = uStack_140;
      if (uStack_140 == uStack_150) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&uStack_150);
      }
      puVar3 = puStack_148;
      if (uVar1 != 0) {
        _memmove(puStack_148 + 3,puStack_148,uVar1 * 0x18);
      }
      *puVar3 = uVar12;
      puVar3[1] = uVar5;
      puVar3[2] = uVar10;
      puVar7[5] = uStack_158;
      puVar7[4] = uStack_160;
      puVar7[7] = (ulong)puStack_148;
      puVar7[6] = uStack_150;
      puVar7[10] = uStack_130;
      puVar7[1] = uStack_178;
      *puVar7 = uStack_180;
      puVar7[3] = uStack_168;
      puVar7[2] = uStack_170;
      puVar7[9] = uStack_138;
      puVar7[8] = uVar1 + 1;
      if (*puVar7 != 2) {
        uStack_158 = puVar7[5];
        uStack_160 = puVar7[4];
        puStack_148 = (ulong *)puVar7[7];
        uStack_150 = puVar7[6];
        uStack_138 = puVar7[9];
        uStack_140 = puVar7[8];
        uStack_130 = puVar7[10];
        uStack_178 = puVar7[1];
        uStack_180 = *puVar7;
        uStack_168 = puVar7[3];
        uStack_170 = puVar7[2];
        __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar11,lVar9);
      }
    }
    return;
  }
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd62fe,0x8d,&UNK_10b24e0b8);
LAB_10062a510:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10062a514);
  (*pcVar4)();
}

