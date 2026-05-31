
/* WARNING: Removing unreachable block (ram,0x00010060caa4) */

void FUN_10060c644(undefined8 *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 extraout_d0;
  undefined1 auVar11 [16];
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  ulong uStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  long lStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  
  puVar1 = (undefined8 *)param_2[10];
  puVar2 = (undefined8 *)param_2[0xb];
  uVar10 = *param_2;
  uVar8 = uVar10 ^ 0x8000000000000000;
  if (-1 < (long)uVar10) {
    uVar8 = 6;
  }
  if ((long)uVar8 < 3) {
    if (uVar8 == 0) {
      if (param_2[1] == 0x8000000000000000) {
        puStack_258 = (undefined8 *)param_2[2];
        puStack_250 = (undefined8 *)param_2[3];
        puStack_260 = (undefined8 *)CONCAT71(puStack_260._1_7_,5);
        thunk_FUN_1087e3db0(&puStack_d0,&puStack_260,&puStack_190,&UNK_10b209cc0);
        puVar6 = puStack_d0;
      }
      else {
        func_0x000107c04a74(&puStack_d0);
        puVar6 = puStack_d0;
      }
    }
    else if (uVar8 == 1) {
      puStack_278 = (undefined8 *)param_2[2];
      puStack_280 = (undefined8 *)param_2[1];
      uStack_268 = param_2[4];
      puStack_270 = (undefined8 *)param_2[3];
      auVar11 = func_0x00010612451c(&puStack_280);
      if ((auVar11._0_8_ & 1) == 0) {
        auVar11 = func_0x0001061247b8(&puStack_280);
        if ((auVar11._0_8_ & 1) == 0) {
          func_0x0001061249a4(&puStack_190,&puStack_280);
          if (((uint)puStack_190 & 1) == 0) {
            __ZN4toml2de6parser7devalue9DeInteger7to_u12817ha90a074fb71015bdE
                      (&puStack_130,&puStack_280);
            if (((uint)puStack_130 & 1) == 0) {
              puStack_d0 = (undefined8 *)0x0;
              FUN_100f1395c(&puStack_260,&puStack_d0);
              puStack_a8 = puStack_238;
              puStack_b0 = puStack_240;
              puStack_98 = puStack_228;
              puStack_a0 = puStack_230;
              puStack_88 = puStack_218;
              puStack_90 = puStack_220;
              uStack_80 = uStack_210;
              puStack_c8 = puStack_258;
              puStack_d0 = puStack_260;
              puStack_b8 = puStack_248;
              puStack_c0 = puStack_250;
              if (((ulong)puStack_280 & 0x7fffffffffffffff) != 0) {
                _free(puStack_278);
                puStack_260 = puStack_d0;
              }
              goto LAB_10060cd28;
            }
            func_0x000107c04a58(&puStack_d0,puStack_120,puStack_118);
          }
          else {
            func_0x000107c045ec(&puStack_d0,puStack_180,uStack_178);
          }
        }
        else {
          puStack_260 = (undefined8 *)CONCAT71(puStack_260._1_7_,1);
          puStack_258 = auVar11._8_8_;
          thunk_FUN_1087e3db0(&puStack_d0,&puStack_260,&puStack_190,&UNK_10b209cc0);
        }
      }
      else {
        puStack_260 = (undefined8 *)CONCAT71(puStack_260._1_7_,2);
        puStack_258 = auVar11._8_8_;
        thunk_FUN_1087e3db0(&puStack_d0,&puStack_260,&puStack_190,&UNK_10b209cc0);
      }
      puVar6 = puStack_d0;
      if (((ulong)puStack_280 & 0x7fffffffffffffff) != 0) {
        _free(puStack_278);
        puVar6 = puStack_d0;
      }
    }
    else {
      puStack_128 = (undefined8 *)param_2[2];
      puStack_130 = (undefined8 *)param_2[1];
      puStack_120 = (undefined8 *)param_2[3];
      uVar8 = func_0x0001061240c0(&puStack_130);
      if ((uVar8 & 1) == 0) {
        puStack_b0 = (undefined8 *)_malloc(0x20);
        if (puStack_b0 == (undefined8 *)0x0) {
          FUN_107c03c64(1,0x20);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10060cd98);
          (*pcVar7)();
        }
        puStack_b0[1] = 0x6e20746e696f702d;
        *puStack_b0 = 0x676e6974616f6c66;
        puStack_b0[3] = 0x6465776f6c667265;
        puStack_b0[2] = 0x766f207265626d75;
        puStack_b8 = (undefined8 *)0x20;
        puStack_a0 = (undefined8 *)0x0;
        puStack_a8 = (undefined8 *)0x20;
        puStack_90 = (undefined8 *)0x0;
        puStack_88 = (undefined8 *)0x0;
        puStack_98 = (undefined8 *)0x8;
        if (((ulong)puStack_130 & 0x7fffffffffffffff) != 0) {
          _free(puStack_128);
        }
        puStack_260 = (undefined8 *)0x0;
        goto LAB_10060cd28;
      }
      puStack_260 = (undefined8 *)CONCAT71(puStack_260._1_7_,3);
      puStack_258 = (undefined8 *)extraout_d0;
      thunk_FUN_1087e3db0(&puStack_d0,&puStack_260,&puStack_190,&UNK_10b209cc0);
      puVar6 = puStack_d0;
      if (((ulong)puStack_130 & 0x7fffffffffffffff) != 0) {
        _free(puStack_128);
        puVar6 = puStack_d0;
      }
    }
  }
  else if ((long)uVar8 < 5) {
    if (uVar8 == 3) {
      puStack_260 = (undefined8 *)((ulong)CONCAT61(puStack_260._2_6_,(char)param_2[1]) << 8);
      thunk_FUN_1087e3db0(&puStack_d0,&puStack_260,&puStack_190,&UNK_10b209cc0);
      puVar6 = puStack_d0;
    }
    else {
      puStack_148 = (undefined8 *)param_2[2];
      puStack_150 = (undefined8 *)param_2[1];
      puStack_140 = (undefined8 *)param_2[3];
      puStack_280 = (undefined8 *)0x0;
      puStack_270 = (undefined8 *)0x0;
      while (func_0x00010061f750(&puStack_260,&puStack_150), puStack_260 == (undefined8 *)0x2) {
        if (puStack_258 == (undefined8 *)0x8000000000000000) {
          puStack_c0 = puStack_278;
          puStack_c8 = puStack_280;
          puStack_b8 = puStack_270;
          goto LAB_10060cca8;
        }
        puStack_190 = puStack_258;
        puStack_180 = puStack_248;
        puStack_188 = puStack_250;
        func_0x000100f38238(&puStack_d0,&puStack_280,&puStack_190,&puStack_240);
        if ((puStack_d0 != (undefined8 *)0x8000000000000000) && (puStack_d0 != (undefined8 *)0x0)) {
          _free(puStack_c8);
        }
      }
      puStack_a8 = puStack_238;
      puStack_b0 = puStack_240;
      puStack_98 = puStack_228;
      puStack_a0 = puStack_230;
      puStack_88 = puStack_218;
      puStack_90 = puStack_220;
      uStack_80 = uStack_210;
      puStack_c8 = puStack_258;
      puStack_d0 = puStack_260;
      puStack_b8 = puStack_248;
      puStack_c0 = puStack_250;
      if (puStack_280 == (undefined8 *)0x0) {
        puStack_220 = (undefined8 *)0x0;
      }
      else {
        puStack_258 = (undefined8 *)0x0;
        puStack_250 = puStack_280;
        puStack_248 = puStack_278;
        puStack_238 = (undefined8 *)0x0;
        puStack_230 = puStack_280;
        puStack_228 = puStack_278;
        puStack_220 = puStack_270;
      }
      puStack_260 = (undefined8 *)(ulong)(puStack_280 != (undefined8 *)0x0);
      puStack_240 = puStack_260;
      while (FUN_100f3a3c8(&puStack_130,&puStack_260), puVar5 = puStack_120, puVar4 = puStack_130,
            puVar6 = puStack_d0, puStack_130 != (undefined8 *)0x0) {
        if (puStack_130[(long)puStack_120 * 3 + 1] != 0) {
          _free(puStack_130[(long)puStack_120 * 3 + 2]);
        }
        if (puVar4[(long)puVar5 * 3 + 0x22] != 0) {
          _free(puVar4[(long)puVar5 * 3 + 0x23]);
        }
      }
    }
  }
  else if (uVar8 == 5) {
    puStack_250 = (undefined8 *)param_2[1];
    puStack_260 = (undefined8 *)param_2[2];
    puStack_248 = puStack_260 + param_2[3] * 0xc;
    puStack_258 = puStack_260;
    func_0x000107c0560c(&puStack_d0,&puStack_260);
    puVar6 = puStack_d0;
  }
  else {
    uVar8 = param_2[1];
    uVar3 = param_2[2];
    uVar9 = param_2[4];
    if ((uVar9 != 0) && (uVar9 * 9 != -0x11)) {
      _free(param_2[3] + uVar9 * -8 + -8);
    }
    lStack_1c0 = uVar8 + uVar3 * 0x90;
    puStack_1a8 = (undefined8 *)0x0;
    puStack_260 = (undefined8 *)0x8000000000000001;
    puStack_198 = (undefined8 *)0x0;
    uStack_1d8 = uVar8;
    uStack_1d0 = uVar8;
    uStack_1c8 = uVar10;
    puStack_1b8 = puVar1;
    puStack_1b0 = puVar2;
    while (func_0x0001014dfed0(&puStack_130,&puStack_260), puVar5 = puStack_118,
          puVar4 = puStack_120, puVar6 = puStack_128, puStack_130 == (undefined8 *)0x2) {
      if (puStack_128 == (undefined8 *)0x8000000000000000) {
        puStack_c0 = puStack_1a0;
        puStack_c8 = puStack_1a8;
        puStack_b8 = puStack_198;
        puStack_d0 = (undefined8 *)0x2;
        goto LAB_10060cae8;
      }
      func_0x0001014e0cc4(&puStack_d0,&puStack_260);
      if (puStack_d0 != (undefined8 *)0x2) {
        puStack_160 = puStack_a0;
        puStack_188 = puStack_90;
        puStack_190 = puStack_98;
        uStack_178 = uStack_80;
        puStack_180 = puStack_88;
        puStack_168 = puStack_a8;
        puStack_170 = puStack_b0;
        puStack_130 = puStack_d0;
        if (puVar6 != (undefined8 *)0x0) {
          _free(puVar4);
        }
        goto LAB_10060cb3c;
      }
      puStack_168 = puStack_c0;
      puStack_170 = puStack_c8;
      puStack_160 = puStack_b8;
      puStack_150 = puVar6;
      puStack_148 = puVar4;
      puStack_140 = puVar5;
      func_0x000100f38238(&puStack_d0,&puStack_1a8,&puStack_150,&puStack_170);
      if ((puStack_d0 != (undefined8 *)0x8000000000000000) && (puStack_d0 != (undefined8 *)0x0)) {
        _free(puStack_c8);
      }
    }
    puStack_160 = puStack_100;
    puStack_188 = puStack_f0;
    puStack_190 = puStack_f8;
    uStack_178 = uStack_e0;
    puStack_180 = puStack_e8;
    puStack_168 = puStack_108;
    puStack_170 = puStack_110;
    puStack_c0 = puStack_120;
    puStack_b8 = puStack_118;
    puStack_c8 = puStack_128;
LAB_10060cb3c:
    puStack_a8 = puStack_168;
    puStack_b0 = puStack_170;
    puStack_a0 = puStack_160;
    puStack_90 = puStack_188;
    puStack_98 = puStack_190;
    uStack_80 = uStack_178;
    puStack_88 = puStack_180;
    if (puStack_1a8 == (undefined8 *)0x0) {
      puStack_f0 = (undefined8 *)0x0;
    }
    else {
      puStack_128 = (undefined8 *)0x0;
      puStack_120 = puStack_1a8;
      puStack_118 = puStack_1a0;
      puStack_108 = (undefined8 *)0x0;
      puStack_100 = puStack_1a8;
      puStack_f8 = puStack_1a0;
      puStack_f0 = puStack_198;
    }
    puStack_110 = (undefined8 *)(ulong)(puStack_1a8 != (undefined8 *)0x0);
    puVar6 = puStack_110;
    puStack_d0 = puStack_130;
    while (puStack_130 = puVar6, FUN_100f3a3c8(&puStack_280,&puStack_130), puVar5 = puStack_270,
          puVar4 = puStack_280, puStack_280 != (undefined8 *)0x0) {
      if (puStack_280[(long)puStack_270 * 3 + 1] != 0) {
        _free(puStack_280[(long)puStack_270 * 3 + 2]);
      }
      puVar6 = puStack_130;
      if (puVar4[(long)puVar5 * 3 + 0x22] != 0) {
        _free(puVar4[(long)puVar5 * 3 + 0x23]);
        puVar6 = puStack_130;
      }
    }
LAB_10060cae8:
    FUN_100e1fd94(&puStack_260);
    puVar6 = puStack_d0;
  }
  puStack_260 = puVar6;
  if (puStack_260 == (undefined8 *)0x2) {
LAB_10060cca8:
    param_1[2] = puStack_c0;
    param_1[1] = puStack_c8;
    param_1[3] = puStack_b8;
    *param_1 = 2;
    return;
  }
LAB_10060cd28:
  param_1[4] = puStack_b0;
  param_1[3] = puStack_b8;
  param_1[6] = puStack_a0;
  param_1[5] = puStack_a8;
  param_1[8] = puStack_90;
  param_1[7] = puStack_98;
  param_1[10] = uStack_80;
  param_1[9] = puStack_88;
  if (((ulong)puStack_260 & 1) == 0) {
    puStack_c0 = puVar2;
    puStack_c8 = puVar1;
  }
  *param_1 = 1;
  param_1[1] = puStack_c8;
  param_1[2] = puStack_c0;
  return;
}

