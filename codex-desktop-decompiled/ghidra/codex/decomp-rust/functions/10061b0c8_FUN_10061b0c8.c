
void FUN_10061b0c8(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  undefined8 extraout_d0;
  undefined1 auVar17 [16];
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined8 *puStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong *puStack_150;
  ulong *puStack_148;
  ulong uStack_140;
  ulong *puStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 *puStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 uStack_70;
  
  uVar1 = param_2[10];
  uVar3 = param_2[0xb];
  uVar11 = *param_2 ^ 0x8000000000000000;
  if (-1 < (long)*param_2) {
    uVar11 = 6;
  }
  if ((long)uVar11 < 3) {
    if (uVar11 == 0) {
      if (param_2[1] == 0x8000000000000000) {
        uStack_c8 = param_2[2];
        uStack_c0 = param_2[3];
        uStack_d0 = CONCAT71(uStack_d0._1_7_,5);
        thunk_FUN_1087e3db0(&uStack_1d0,&uStack_d0,&puStack_150,&UNK_10b20a460);
        uVar11 = uStack_1d0;
      }
      else {
        func_0x000107c04c24(&uStack_1d0);
        uVar11 = uStack_1d0;
      }
    }
    else if (uVar11 == 1) {
      uStack_168 = param_2[2];
      uStack_170 = param_2[1];
      uStack_158 = param_2[4];
      uStack_160 = param_2[3];
      auVar17 = func_0x00010612451c(&uStack_170);
      if ((auVar17._0_8_ & 1) == 0) {
        auVar17 = func_0x0001061247b8(&uStack_170);
        if ((auVar17._0_8_ & 1) == 0) {
          func_0x0001061249a4(&puStack_150,&uStack_170);
          if (((uint)puStack_150 & 1) == 0) {
            __ZN4toml2de6parser7devalue9DeInteger7to_u12817ha90a074fb71015bdE
                      (&uStack_130,&uStack_170);
            if (((uint)uStack_130 & 1) == 0) {
              uStack_1d0 = 0;
              FUN_100f1395c(&uStack_d0,&uStack_1d0);
              uStack_1a8 = uStack_a8;
              puStack_1b0 = puStack_b0;
              uStack_198 = uStack_98;
              uStack_1a0 = uStack_a0;
              uStack_188 = uStack_88;
              uStack_190 = uStack_90;
              uStack_180 = uStack_80;
              uStack_1c8 = uStack_c8;
              uStack_1d0 = uStack_d0;
              uStack_1b8 = uStack_b8;
              uStack_1c0 = uStack_c0;
              if ((uStack_170 & 0x7fffffffffffffff) != 0) {
                _free(uStack_168);
                uStack_d0 = uStack_1d0;
              }
              goto LAB_10061b644;
            }
            func_0x000107c049f0(&uStack_1d0,uStack_120,uStack_118);
          }
          else {
            func_0x000107c04638(&uStack_1d0,uStack_140,puStack_138);
          }
        }
        else {
          uStack_d0 = CONCAT71(uStack_d0._1_7_,1);
          uStack_c8 = auVar17._8_8_;
          thunk_FUN_1087e3db0(&uStack_1d0,&uStack_d0,&puStack_150,&UNK_10b20a460);
        }
      }
      else {
        uStack_d0 = CONCAT71(uStack_d0._1_7_,2);
        uStack_c8 = auVar17._8_8_;
        thunk_FUN_1087e3db0(&uStack_1d0,&uStack_d0,&puStack_150,&UNK_10b20a460);
      }
      uVar11 = uStack_1d0;
      if ((uStack_170 & 0x7fffffffffffffff) != 0) {
        _free(uStack_168);
        uVar11 = uStack_1d0;
      }
    }
    else {
      uStack_128 = param_2[2];
      uStack_130 = param_2[1];
      uStack_120 = param_2[3];
      uVar11 = func_0x0001061240c0(&uStack_130);
      if ((uVar11 & 1) == 0) {
        puStack_1b0 = (undefined8 *)_malloc(0x20);
        if (puStack_1b0 == (undefined8 *)0x0) {
          FUN_107c03c64(1,0x20);
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10061b6b0);
          (*pcVar8)();
        }
        puStack_1b0[1] = 0x6e20746e696f702d;
        *puStack_1b0 = 0x676e6974616f6c66;
        puStack_1b0[3] = 0x6465776f6c667265;
        puStack_1b0[2] = 0x766f207265626d75;
        uStack_1b8 = 0x20;
        uStack_1a0 = 0;
        uStack_1a8 = 0x20;
        uStack_190 = 0;
        uStack_188 = 0;
        uStack_198 = 8;
        if ((uStack_130 & 0x7fffffffffffffff) != 0) {
          _free(uStack_128);
        }
        uStack_d0 = 0;
        goto LAB_10061b644;
      }
      uStack_d0 = CONCAT71(uStack_d0._1_7_,3);
      uStack_c8 = extraout_d0;
      thunk_FUN_1087e3db0(&uStack_1d0,&uStack_d0,&puStack_150,&UNK_10b20a460);
      uVar11 = uStack_1d0;
      if ((uStack_130 & 0x7fffffffffffffff) != 0) {
        _free(uStack_128);
        uVar11 = uStack_1d0;
      }
    }
  }
  else if ((long)uVar11 < 5) {
    if (uVar11 == 3) {
      uStack_d0 = (ulong)CONCAT61(uStack_d0._2_6_,(char)param_2[1]) << 8;
      thunk_FUN_1087e3db0(&uStack_1d0,&uStack_d0,&puStack_150,&UNK_10b20a460);
      uVar11 = uStack_1d0;
    }
    else {
      uStack_d0 = CONCAT71(uStack_d0._1_7_,0xb);
      thunk_FUN_1087e3db0(&uStack_1d0,&uStack_d0,&puStack_150,&UNK_10b20a460);
      uVar11 = uStack_1d0;
    }
  }
  else if (uVar11 == 5) {
    uVar2 = param_2[1];
    puVar4 = (ulong *)param_2[2];
    puVar12 = puVar4 + param_2[3] * 0xc;
    uStack_170 = 0;
    uStack_168 = 8;
    uStack_160 = 0;
    puVar10 = puVar4;
    puVar16 = puVar4;
    puStack_150 = puVar4;
    puStack_148 = puVar4;
    uStack_140 = uVar2;
    puStack_138 = puVar12;
    if (param_2[3] != 0) {
LAB_10061b218:
      puVar9 = puVar16 + 0xc;
      if (*puVar16 == 0x8000000000000006) {
        puVar10 = puVar16 + 0xc;
      }
      else {
        puStack_b0 = (undefined8 *)puVar16[4];
        uStack_b8 = puVar16[3];
        uStack_a0 = puVar16[6];
        uStack_a8 = puVar16[5];
        uStack_90 = puVar16[8];
        uStack_98 = puVar16[7];
        uStack_88 = puVar16[9];
        uStack_c0 = puVar16[2];
        uStack_c8 = puVar16[1];
        uStack_78 = puVar16[0xb];
        uStack_80 = puVar16[10];
        uStack_70 = 0;
        uStack_d0 = *puVar16;
        func_0x0001014a83ac(&uStack_130,&uStack_d0);
        uVar7 = uStack_118;
        uVar6 = uStack_120;
        uVar5 = uStack_128;
        uVar13 = uStack_160;
        uVar11 = uStack_168;
        if (uStack_130 != 2) {
          uStack_1a8 = uStack_108;
          puStack_1b0 = puStack_110;
          uStack_198 = uStack_f8;
          uStack_1a0 = uStack_100;
          uStack_188 = uStack_e8;
          uStack_190 = uStack_f0;
          uStack_180 = uStack_e0;
          uStack_1d0 = uStack_130;
          uStack_1c0 = uStack_120;
          uStack_1c8 = uStack_128;
          uStack_1b8 = uStack_118;
          puStack_148 = puVar9;
          if (uStack_160 != 0) {
            puVar15 = (undefined8 *)(uStack_168 + 8);
            do {
              if (puVar15[-1] != 0) {
                _free(*puVar15);
              }
              puVar15 = puVar15 + 3;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          if (uStack_170 != 0) {
            _free(uVar11);
          }
          goto LAB_10061b540;
        }
        puVar10 = puVar9;
        if (uStack_128 != 0x8000000000000000) goto code_r0x00010061b290;
      }
    }
LAB_10061b528:
    puVar9 = puVar10;
    uStack_1c0 = uStack_168;
    uStack_1c8 = uStack_170;
    uStack_1b8 = uStack_160;
    uStack_1d0 = 2;
    puStack_148 = puVar9;
LAB_10061b540:
    lVar14 = ((ulong)((long)puVar12 - (long)puVar9) >> 5) * -0x5555555555555555 + 1;
    while (lVar14 = lVar14 + -1, lVar14 != 0) {
      FUN_100dfe50c(puVar9);
      puVar9 = puVar9 + 0xc;
    }
    uVar11 = uStack_1d0;
    if (uVar2 != 0) {
      _free(puVar4);
      uVar11 = uStack_1d0;
    }
  }
  else {
    uStack_a8 = param_2[5];
    puStack_b0 = (undefined8 *)param_2[4];
    uStack_98 = param_2[7];
    uStack_a0 = param_2[6];
    uStack_88 = param_2[9];
    uStack_90 = param_2[8];
    uStack_c8 = param_2[1];
    uStack_d0 = *param_2;
    uStack_b8 = param_2[3];
    uStack_c0 = param_2[2];
    uStack_80 = uVar1;
    uStack_78 = uVar3;
    func_0x000107c059e4(&uStack_1d0,&uStack_d0);
    uVar11 = uStack_1d0;
  }
  uStack_d0 = uVar11;
  if (uStack_d0 == 2) {
    param_1[2] = uStack_1c0;
    param_1[1] = uStack_1c8;
    param_1[3] = uStack_1b8;
    *param_1 = 2;
    return;
  }
LAB_10061b644:
  param_1[4] = puStack_1b0;
  param_1[3] = uStack_1b8;
  param_1[6] = uStack_1a0;
  param_1[5] = uStack_1a8;
  param_1[8] = uStack_190;
  param_1[7] = uStack_198;
  param_1[10] = uStack_180;
  param_1[9] = uStack_188;
  if ((uStack_d0 & 1) == 0) {
    uStack_1c0 = uVar3;
    uStack_1c8 = uVar1;
  }
  *param_1 = 1;
  param_1[1] = uStack_1c8;
  param_1[2] = uStack_1c0;
  return;
code_r0x00010061b290:
  if (uStack_160 == uStack_170) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h0fc00cbe580b1e89E(&uStack_170);
  }
  puVar10 = (ulong *)(uStack_168 + uVar13 * 0x18);
  *puVar10 = uVar5;
  puVar10[1] = uVar6;
  puVar10[2] = uVar7;
  uStack_160 = uVar13 + 1;
  puVar10 = puVar12;
  puVar16 = puVar9;
  if (puVar9 == puVar12) goto LAB_10061b528;
  goto LAB_10061b218;
}

