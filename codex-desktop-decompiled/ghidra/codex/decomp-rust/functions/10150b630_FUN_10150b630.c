
void FUN_10150b630(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
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
  ulong uStack_190;
  ulong uStack_188;
  long lStack_180;
  ulong uStack_178;
  undefined8 *puStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  ulong uStack_140;
  ulong uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  uint auStack_110 [4];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  uint auStack_f0 [4];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 auStack_c8 [3];
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lStack_218 = param_2[1];
  lStack_220 = *param_2;
  lStack_208 = param_2[3];
  lStack_210 = param_2[2];
  lStack_200 = param_2[4];
  lVar8 = param_2[0x12];
  uVar6 = param_2[5];
  lVar5 = param_2[6];
  uVar2 = param_2[7];
  uVar9 = param_2[8];
  uVar1 = param_2[0xf];
  lVar3 = param_2[0x10];
  uVar7 = uVar6 ^ 0x8000000000000000;
  if (-1 < (long)uVar6) {
    uVar7 = 6;
  }
  if (2 < (long)uVar7) {
    if ((long)uVar7 < 5) {
      if (uVar7 == 3) {
        func_0x000108834e78(&uStack_190,&lStack_220,lVar8,(uint)lVar5 & 1);
      }
      else {
        func_0x00010884b00c(&uStack_190,&lStack_220,lVar8);
      }
    }
    else if (uVar7 == 5) {
      uStack_98 = uVar2 + uVar9 * 0x60;
      uStack_b0 = uVar2;
      uStack_a8 = uVar2;
      lStack_a0 = lVar5;
      func_0x00010884ba24(&uStack_190,&lStack_220,lVar8,&uStack_b0);
    }
    else {
      lStack_88 = param_2[10];
      puStack_90 = (undefined8 *)param_2[9];
      lStack_78 = param_2[0xc];
      lStack_80 = param_2[0xb];
      lStack_68 = param_2[0xe];
      lStack_70 = param_2[0xd];
      uStack_a8 = param_2[6];
      uStack_b0 = param_2[5];
      uStack_98 = param_2[8];
      lStack_a0 = param_2[7];
      uStack_60 = uVar1;
      lStack_58 = lVar3;
      func_0x000108872a3c(&uStack_190,&uStack_b0,&lStack_220,lVar8);
    }
    goto joined_r0x00010150b79c;
  }
  if (uVar7 == 0) {
    if (lVar5 == -0x8000000000000000) {
      if (uVar9 == 0) {
        lVar5 = 1;
      }
      else {
        lVar5 = _malloc(uVar9);
        if (lVar5 == 0) {
          func_0x0001087c9084(1,uVar9);
LAB_10150ba38:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10150ba3c);
          (*pcVar4)();
        }
      }
      _memcpy(lVar5,uVar2,uVar9);
      uStack_188 = uVar9;
      lStack_180 = lVar5;
      uStack_178 = uVar9;
    }
    else {
      lStack_180 = param_2[7];
      uStack_188 = param_2[6];
      uStack_178 = param_2[8];
    }
LAB_10150b908:
    param_1[2] = lStack_180;
    param_1[1] = uStack_188;
    param_1[3] = uStack_178;
    *param_1 = 2;
  }
  else {
    if (uVar7 == 1) {
      lStack_128 = param_2[7];
      uStack_130 = param_2[6];
      lStack_118 = param_2[9];
      lStack_120 = param_2[8];
      auVar10 = func_0x00010612451c(&uStack_130);
      if ((auVar10._0_8_ & 1) == 0) {
        auVar10 = func_0x0001061247b8(&uStack_130);
        if ((auVar10._0_8_ & 1) == 0) {
          func_0x0001061249a4(auStack_110,&uStack_130);
          if ((auStack_110[0] & 1) == 0) {
            __ZN4toml2de6parser7devalue9DeInteger7to_u12817ha90a074fb71015bdE
                      (auStack_f0,&uStack_130);
            if ((auStack_f0[0] & 1) == 0) {
              auStack_c8[0] = 0;
              FUN_100f1395c(&uStack_b0,auStack_c8);
              lStack_168 = lStack_88;
              puStack_170 = puStack_90;
              lStack_158 = lStack_78;
              lStack_160 = lStack_80;
              lStack_148 = lStack_68;
              lStack_150 = lStack_70;
              uStack_140 = uStack_60;
              uStack_188 = uStack_a8;
              uStack_190 = uStack_b0;
              uStack_178 = uStack_98;
              lStack_180 = lStack_a0;
              uVar7 = uStack_b0;
              if ((uStack_130 & 0x7fffffffffffffff) != 0) {
                _free(lStack_128);
                uVar7 = uStack_190;
              }
              goto LAB_10150b984;
            }
            func_0x00010883e8b0(&uStack_190,&lStack_220,lVar8,uStack_e0,uStack_d8);
          }
          else {
            func_0x00010883b1a8(&uStack_190,&lStack_220,lVar8,uStack_100,uStack_f8);
          }
        }
        else {
          func_0x000108853020(&uStack_190,&lStack_220,lVar8,auVar10._8_8_);
        }
      }
      else {
        func_0x00010884681c(&uStack_190,&lStack_220,lVar8,auVar10._8_8_);
      }
      if ((uStack_130 & 0x7fffffffffffffff) != 0) {
        _free(lStack_128);
      }
joined_r0x00010150b79c:
      uVar7 = uStack_190;
      if (uStack_190 == 2) goto LAB_10150b908;
    }
    else {
      uStack_a8 = param_2[7];
      uStack_b0 = param_2[6];
      lStack_a0 = param_2[8];
      uVar7 = func_0x0001061240c0(&uStack_b0);
      if ((uVar7 & 1) != 0) {
        func_0x0001088427fc(&uStack_190,&lStack_220,lVar8);
        if ((uStack_b0 & 0x7fffffffffffffff) != 0) {
          _free(uStack_a8);
        }
        goto joined_r0x00010150b79c;
      }
      puStack_170 = (undefined8 *)_malloc(0x20);
      if (puStack_170 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x20);
        goto LAB_10150ba38;
      }
      puStack_170[1] = 0x6e20746e696f702d;
      *puStack_170 = 0x676e6974616f6c66;
      puStack_170[3] = 0x6465776f6c667265;
      puStack_170[2] = 0x766f207265626d75;
      uStack_178 = 0x20;
      lStack_160 = 0;
      lStack_168 = 0x20;
      lStack_150 = 0;
      lStack_148 = 0;
      lStack_158 = 8;
      if ((uStack_b0 & 0x7fffffffffffffff) != 0) {
        _free(uStack_a8);
      }
      uVar7 = 0;
    }
LAB_10150b984:
    param_1[4] = puStack_170;
    param_1[3] = uStack_178;
    param_1[6] = lStack_160;
    param_1[5] = lStack_168;
    param_1[8] = lStack_150;
    param_1[7] = lStack_158;
    param_1[10] = uStack_140;
    param_1[9] = lStack_148;
    lVar5 = lStack_180;
    uVar2 = uStack_188;
    if ((uVar7 & 1) == 0) {
      lVar5 = lVar3;
      uVar2 = uVar1;
    }
    *param_1 = 1;
    param_1[1] = uVar2;
    param_1[2] = lVar5;
    uStack_1e8 = param_1[1];
    uStack_1f0 = *param_1;
    uStack_1d8 = param_1[3];
    uStack_1e0 = param_1[2];
    uStack_1c8 = param_1[5];
    uStack_1d0 = param_1[4];
    uStack_1b8 = param_1[7];
    uStack_1c0 = param_1[6];
    uStack_1a8 = param_1[9];
    uStack_1b0 = param_1[8];
    uStack_1a0 = param_1[10];
    __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar8,&lStack_220);
  }
  if (((lStack_220 == 2) || (lStack_220 == 4)) && (lStack_210 != 0)) {
    _free(lStack_208);
  }
  return;
}

