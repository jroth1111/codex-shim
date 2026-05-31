
/* WARNING: Removing unreachable block (ram,0x0001006141ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100613d44(undefined8 *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 extraout_d0;
  undefined1 auVar11 [16];
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  ulong uStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  ulong uStack_1b8;
  undefined8 *puStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined1 auStack_190 [16];
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined8 *puStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  ulong uStack_120;
  undefined8 *puStack_118;
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined1 auStack_a8 [16];
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar1 = (undefined8 *)param_2[10];
  uVar2 = param_2[0xb];
  uVar10 = *param_2;
  uVar8 = uVar10 ^ 0x8000000000000000;
  if (-1 < (long)uVar10) {
    uVar8 = 6;
  }
  if ((long)uVar8 < 3) {
    if (uVar8 == 0) {
      if (param_2[1] == 0x8000000000000000) {
        puStack_260 = (undefined8 *)param_2[2];
        uStack_258 = param_2[3];
        puStack_268 = (undefined8 *)CONCAT71(puStack_268._1_7_,5);
        thunk_FUN_1087e3db0(&puStack_d0,&puStack_268,&puStack_1b0,&UNK_10b209b80);
        auStack_110._8_8_ = auStack_a8._8_8_;
        auStack_110._0_8_ = auStack_a8._0_8_;
        puVar5 = puStack_d0;
      }
      else {
        func_0x000107c04d1c(&puStack_d0);
        auStack_110._8_8_ = auStack_a8._8_8_;
        auStack_110._0_8_ = auStack_a8._0_8_;
        puVar5 = puStack_d0;
      }
    }
    else if (uVar8 == 1) {
      uStack_178 = param_2[2];
      uStack_180 = param_2[1];
      uStack_168 = param_2[4];
      uStack_170 = param_2[3];
      auVar11 = func_0x00010612451c(&uStack_180);
      if ((auVar11._0_8_ & 1) == 0) {
        auVar11 = func_0x0001061247b8(&uStack_180);
        if ((auVar11._0_8_ & 1) == 0) {
          func_0x0001061249a4(&puStack_1b0,&uStack_180);
          if (((uint)puStack_1b0 & 1) == 0) {
            __ZN4toml2de6parser7devalue9DeInteger7to_u12817ha90a074fb71015bdE
                      (&puStack_130,&uStack_180);
            if (((uint)puStack_130 & 1) == 0) {
              puStack_d0 = (undefined8 *)0x0;
              FUN_100f1395c(&puStack_268,&puStack_d0);
              auStack_a8._0_8_ = uStack_240;
              puStack_b0 = puStack_248;
              uStack_98 = uStack_230;
              auStack_a8._8_8_ = uStack_238;
              auStack_110._8_8_ = uStack_238;
              auStack_110._0_8_ = uStack_240;
              uStack_88 = uStack_220;
              uStack_90 = uStack_228;
              uStack_80 = uStack_218;
              puStack_c8 = puStack_260;
              puStack_d0 = puStack_268;
              uStack_b8 = puStack_250;
              uStack_c0 = uStack_258;
              if ((uStack_180 & 0x7fffffffffffffff) != 0) {
                _free(uStack_178);
                auStack_110._8_8_ = auStack_a8._8_8_;
                auStack_110._0_8_ = auStack_a8._0_8_;
                puStack_268 = puStack_d0;
              }
              goto LAB_1006143a8;
            }
            func_0x000107c04a38(&puStack_d0,uStack_120,puStack_118);
          }
          else {
            func_0x000107c045dc(&puStack_d0,uStack_1a0,puStack_198);
          }
        }
        else {
          puStack_268 = (undefined8 *)CONCAT71(puStack_268._1_7_,1);
          puStack_260 = auVar11._8_8_;
          thunk_FUN_1087e3db0(&puStack_d0,&puStack_268,&puStack_1b0,&UNK_10b209b80);
        }
      }
      else {
        puStack_268 = (undefined8 *)CONCAT71(puStack_268._1_7_,2);
        puStack_260 = auVar11._8_8_;
        thunk_FUN_1087e3db0(&puStack_d0,&puStack_268,&puStack_1b0,&UNK_10b209b80);
      }
      auStack_110._8_8_ = auStack_a8._8_8_;
      auStack_110._0_8_ = auStack_a8._0_8_;
      puVar5 = puStack_d0;
      if ((uStack_180 & 0x7fffffffffffffff) != 0) {
        _free(uStack_178);
        auStack_110._8_8_ = auStack_a8._8_8_;
        auStack_110._0_8_ = auStack_a8._0_8_;
        puVar5 = puStack_d0;
      }
    }
    else {
      puStack_128 = (undefined8 *)param_2[2];
      puStack_130 = (undefined8 *)param_2[1];
      uStack_120 = param_2[3];
      uVar8 = func_0x0001061240c0(&puStack_130);
      if ((uVar8 & 1) == 0) {
        puStack_b0 = (undefined8 *)_malloc(0x20);
        if (puStack_b0 == (undefined8 *)0x0) {
          FUN_107c03c64(1,0x20);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100614458);
          (*pcVar6)();
        }
        puStack_b0[1] = 0x6e20746e696f702d;
        *puStack_b0 = 0x676e6974616f6c66;
        puStack_b0[3] = 0x6465776f6c667265;
        puStack_b0[2] = 0x766f207265626d75;
        uStack_b8 = 0x20;
        auStack_a8._8_8_ = 0;
        auStack_a8._0_8_ = 0x20;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_98 = 8;
        if (((ulong)puStack_130 & 0x7fffffffffffffff) != 0) {
          _free(puStack_128);
        }
        auStack_110._8_8_ = auStack_a8._8_8_;
        auStack_110._0_8_ = auStack_a8._0_8_;
        puStack_268 = (undefined8 *)0x0;
        goto LAB_1006143a8;
      }
      puStack_268 = (undefined8 *)CONCAT71(puStack_268._1_7_,3);
      puStack_260 = (undefined8 *)extraout_d0;
      thunk_FUN_1087e3db0(&puStack_d0,&puStack_268,&puStack_1b0,&UNK_10b209b80);
      auStack_110._8_8_ = auStack_a8._8_8_;
      auStack_110._0_8_ = auStack_a8._0_8_;
      puVar5 = puStack_d0;
      if (((ulong)puStack_130 & 0x7fffffffffffffff) != 0) {
        _free(puStack_128);
        auStack_110._8_8_ = auStack_a8._8_8_;
        auStack_110._0_8_ = auStack_a8._0_8_;
        puVar5 = puStack_d0;
      }
    }
  }
  else if ((long)uVar8 < 5) {
    if (uVar8 == 3) {
      puStack_268 = (undefined8 *)((ulong)CONCAT61(puStack_268._2_6_,(char)param_2[1]) << 8);
      thunk_FUN_1087e3db0(&puStack_d0,&puStack_268,&puStack_1b0,&UNK_10b209b80);
      auStack_110._8_8_ = auStack_a8._8_8_;
      auStack_110._0_8_ = auStack_a8._0_8_;
      puVar5 = puStack_d0;
    }
    else {
      uStack_178 = param_2[2];
      uStack_180 = param_2[1];
      uStack_170 = param_2[3];
      pauVar7 = (undefined1 (*) [16])
                (*
                ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                )();
      if (pauVar7[1][0] == '\x01') {
        auStack_110 = *pauVar7;
      }
      else {
        auStack_110 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar7 + 8) = auStack_110._8_8_;
        pauVar7[1][0] = 1;
      }
      *(long *)*pauVar7 = auStack_110._0_8_ + 1;
      puStack_130 = (undefined8 *)&UNK_108c56c70;
      puStack_128 = (undefined8 *)0x0;
      uStack_120 = 0;
      puStack_118 = (undefined8 *)0x0;
      while( true ) {
        func_0x00010061f750(&puStack_268,&uStack_180);
        if (puStack_268 != (undefined8 *)0x2) break;
        if (puStack_260 == (undefined8 *)0x8000000000000000) {
          uStack_c0 = (ulong)puStack_128;
          puStack_c8 = puStack_130;
          puStack_b0 = puStack_118;
          uStack_b8 = uStack_120;
          goto LAB_100614314;
        }
        puStack_1b0 = puStack_260;
        uStack_1a0 = puStack_250;
        uStack_1a8 = uStack_258;
        FUN_1016e4cfc(&puStack_d0,&puStack_130,&puStack_1b0,&puStack_248);
        if ((puStack_d0 != (undefined8 *)0x8000000000000000) && (puStack_d0 != (undefined8 *)0x0)) {
          _free(puStack_c8);
        }
      }
      auStack_a8._0_8_ = uStack_240;
      puStack_b0 = puStack_248;
      uStack_98 = uStack_230;
      auStack_a8._8_8_ = uStack_238;
      uStack_88 = uStack_220;
      uStack_90 = uStack_228;
      uStack_80 = uStack_218;
      puStack_c8 = puStack_260;
      puStack_d0 = puStack_268;
      uStack_b8 = puStack_250;
      uStack_c0 = uStack_258;
      FUN_100cb56bc(&puStack_130);
      auVar11._8_8_ = auStack_a8._8_8_;
      auVar11._0_8_ = auStack_a8._0_8_;
      puVar5 = puStack_d0;
      auStack_110 = auVar11;
    }
  }
  else if (uVar8 == 5) {
    uStack_258 = param_2[1];
    puStack_268 = (undefined8 *)param_2[2];
    puStack_250 = puStack_268 + param_2[3] * 0xc;
    puStack_260 = puStack_268;
    func_0x000107c05620(&puStack_d0,&puStack_268);
    auStack_110._8_8_ = auStack_a8._8_8_;
    auStack_110._0_8_ = auStack_a8._0_8_;
    puVar5 = puStack_d0;
  }
  else {
    uVar8 = param_2[1];
    uVar3 = param_2[2];
    uVar9 = param_2[4];
    if ((uVar9 != 0) && (uVar9 * 9 != -0x11)) {
      _free(param_2[3] + uVar9 * -8 + -8);
    }
    lStack_1c8 = uVar8 + uVar3 * 0x90;
    puStack_268 = (undefined8 *)0x8000000000000001;
    uStack_1e0 = uVar8;
    uStack_1d8 = uVar8;
    uStack_1d0 = uVar10;
    puStack_1c0 = puVar1;
    uStack_1b8 = uVar2;
    pauVar7 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if ((pauVar7[1][0] & 1) == 0) {
      auStack_190 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar7 + 8) = auStack_190._8_8_;
      pauVar7[1][0] = 1;
    }
    else {
      auStack_190 = *pauVar7;
    }
    *(long *)*pauVar7 = auStack_190._0_8_ + 1;
    puStack_1b0 = (undefined8 *)&UNK_108c56c70;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    puStack_198 = (undefined8 *)0x0;
    while( true ) {
      FUN_1014dfed0(&puStack_130,&puStack_268);
      puVar4 = puStack_118;
      uVar8 = uStack_120;
      puVar5 = puStack_128;
      if (puStack_130 != (undefined8 *)0x2) break;
      if (puStack_128 == (undefined8 *)0x8000000000000000) {
        uStack_c0 = uStack_1a8;
        puStack_c8 = puStack_1b0;
        puStack_b0 = puStack_198;
        uStack_b8 = uStack_1a0;
        puStack_d0 = (undefined8 *)0x2;
        auStack_a8 = auStack_190;
        goto LAB_1006142a0;
      }
      func_0x0001014e0cc4(&puStack_d0,&puStack_268);
      if (puStack_d0 != (undefined8 *)0x2) {
        uStack_150 = auStack_a8._8_8_;
        uStack_178 = uStack_90;
        uStack_180 = uStack_98;
        uStack_168 = uStack_80;
        uStack_170 = uStack_88;
        uStack_158 = auStack_a8._0_8_;
        puStack_160 = puStack_b0;
        uStack_120 = uStack_c0;
        puStack_130 = puStack_d0;
        puStack_128 = puStack_c8;
        puStack_118 = (undefined8 *)uStack_b8;
        if (puVar5 != (undefined8 *)0x0) {
          _free(uVar8);
        }
        goto LAB_100614270;
      }
      uStack_158 = uStack_c0;
      puStack_160 = puStack_c8;
      uStack_150 = uStack_b8;
      puStack_148 = puVar5;
      uStack_140 = uVar8;
      uStack_138 = puVar4;
      FUN_1016e4cfc(&puStack_d0,&puStack_1b0,&puStack_148,&puStack_160);
      if ((puStack_d0 != (undefined8 *)0x8000000000000000) && (puStack_d0 != (undefined8 *)0x0)) {
        _free(puStack_c8);
      }
    }
    uStack_150 = uStack_100;
    uStack_178 = uStack_f0;
    uStack_180 = uStack_f8;
    uStack_168 = uStack_e0;
    uStack_170 = uStack_e8;
    uStack_158 = auStack_110._8_8_;
    puStack_160 = (undefined8 *)auStack_110._0_8_;
LAB_100614270:
    auStack_a8._0_8_ = uStack_158;
    puStack_b0 = puStack_160;
    auStack_a8._8_8_ = uStack_150;
    uStack_90 = uStack_178;
    uStack_98 = uStack_180;
    uStack_80 = uStack_168;
    uStack_88 = uStack_170;
    puStack_d0 = puStack_130;
    puStack_c8 = puStack_128;
    uStack_c0 = uStack_120;
    uStack_b8 = puStack_118;
    FUN_100cb56bc(&puStack_1b0);
LAB_1006142a0:
    FUN_100e1fd94(&puStack_268);
    puVar5 = puStack_d0;
    auStack_110 = auStack_a8;
  }
  puStack_268 = puVar5;
  if (puStack_268 == (undefined8 *)0x2) {
LAB_100614314:
    param_1[2] = uStack_c0;
    param_1[1] = puStack_c8;
    param_1[4] = puStack_b0;
    param_1[3] = uStack_b8;
    *(undefined1 (*) [16])(param_1 + 5) = auStack_110;
    *param_1 = 2;
    return;
  }
LAB_1006143a8:
  param_1[4] = puStack_b0;
  param_1[3] = uStack_b8;
  *(undefined1 (*) [16])(param_1 + 5) = auStack_110;
  param_1[8] = uStack_90;
  param_1[7] = uStack_98;
  param_1[10] = uStack_80;
  param_1[9] = uStack_88;
  if (((ulong)puStack_268 & 1) == 0) {
    uStack_c0 = uVar2;
    puStack_c8 = puVar1;
  }
  *param_1 = 1;
  param_1[1] = puStack_c8;
  param_1[2] = uStack_c0;
  return;
}

