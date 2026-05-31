
/* WARNING: Removing unreachable block (ram,0x0001015e6894) */
/* WARNING: Removing unreachable block (ram,0x0001015e6860) */
/* WARNING: Removing unreachable block (ram,0x0001015e6b40) */

void FUN_1015e67e0(undefined8 *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong extraout_x14;
  ulong extraout_x14_00;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  ulong *unaff_x24;
  undefined8 *unaff_x28;
  ulong uStack_238;
  undefined8 *puStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong *puStack_218;
  ulong uStack_210;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined8 auStack_1c8 [3];
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong *puStack_180;
  ulong uStack_178;
  undefined8 *puStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong *puStack_158;
  ulong uStack_150;
  undefined8 *puStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong *puStack_130;
  ulong uStack_128;
  undefined8 *puStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong *puStack_108;
  ulong *puStack_100;
  ulong uStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  ulong *puStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong *puStack_c0;
  ulong uStack_b8;
  undefined8 *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  undefined8 *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  puVar1 = (ulong *)param_2[10];
  puVar3 = (ulong *)param_2[0xb];
  uVar16 = *param_2;
  uVar13 = uVar16 ^ 0x8000000000000000;
  if (-1 < (long)uVar16) {
    uVar13 = 6;
  }
  if ((long)uVar13 < 3) {
    if (uVar13 == 0) {
      if ((param_2[1] & 0x7fffffffffffffff) != 0) {
        _free(param_2[2]);
      }
      goto LAB_1015e6c38;
    }
    if (uVar13 == 1) {
      uStack_1e8 = param_2[2];
      uStack_1f0 = param_2[1];
      uStack_1d8 = param_2[4];
      uStack_1e0 = param_2[3];
      uVar16 = func_0x00010612451c(&uStack_1f0);
      if (((((uVar16 & 1) != 0) || (uVar16 = func_0x0001061247b8(&uStack_1f0), (uVar16 & 1) != 0))
          || (func_0x0001061249a4(&uStack_1b0,&uStack_1f0), ((uint)uStack_1b0 & 1) != 0)) ||
         (__ZN4toml2de6parser7devalue9DeInteger7to_u12817ha90a074fb71015bdE(&uStack_d0,&uStack_1f0),
         ((uint)uStack_d0 & 1) != 0)) {
        if ((uStack_1f0 & 0x7fffffffffffffff) != 0) {
          _free(uStack_1e8);
        }
        goto LAB_1015e6c38;
      }
      auStack_1c8[0] = 0;
      FUN_100f1395c(&uStack_190,auStack_1c8);
      unaff_x24 = (ulong *)(uStack_188 & 0xff);
      uStack_238 = uStack_188 >> 8;
      if ((uStack_1f0 & 0x7fffffffffffffff) != 0) {
        _free(uStack_1e8);
      }
      goto LAB_1015e6dbc;
    }
    uStack_188 = param_2[2];
    uStack_190 = param_2[1];
    puStack_180 = (ulong *)param_2[3];
    uVar16 = func_0x0001061240c0(&uStack_190);
    if ((uVar16 & 1) != 0) {
      if ((uStack_190 & 0x7fffffffffffffff) != 0) {
        _free(uStack_188);
      }
      goto LAB_1015e6c38;
    }
    puVar11 = (undefined8 *)_malloc(0x20);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0x20);
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1015e6e1c);
      (*pcVar10)();
    }
    puVar11[1] = 0x6e20746e696f702d;
    *puVar11 = 0x676e6974616f6c66;
    puVar11[3] = 0x6465776f6c667265;
    puVar11[2] = 0x766f207265626d75;
    uStack_140 = extraout_x14;
    if ((uStack_190 & 0x7fffffffffffffff) != 0) {
      _free(uStack_188);
      uStack_140 = extraout_x14_00;
    }
    uStack_160 = 0;
    uStack_150 = 0;
    puStack_148 = (undefined8 *)0x0;
    puStack_158 = (ulong *)0x8;
    uStack_178 = 0x20;
    uStack_168 = 0x20;
  }
  else {
    if ((long)uVar13 < 5) {
      if (uVar13 != 3) {
        uStack_c8 = param_2[2];
        uStack_d0 = param_2[1];
        puStack_c0 = (ulong *)param_2[3];
        while ((uint)uStack_d0 != 2) {
          FUN_101509040(&uStack_190,&uStack_d0);
          if (uStack_190 != 2) {
            unaff_x24 = (ulong *)(uStack_188 & 0xff);
            uStack_238 = uStack_188 >> 8;
            uVar13 = uStack_190;
            puVar15 = puStack_180;
            uVar6 = uStack_178;
            puVar11 = puStack_170;
            uVar7 = uStack_168;
            uVar16 = uStack_160;
            puVar5 = puStack_158;
            uVar14 = uStack_150;
            puVar8 = puStack_148;
            uVar9 = uStack_140;
            goto joined_r0x0001015e6d2c;
          }
        }
      }
LAB_1015e6c38:
      *param_1 = 2;
      return;
    }
    if (uVar13 != 5) {
      puVar15 = (ulong *)param_2[1];
      uVar13 = param_2[2];
      uVar14 = param_2[4];
      if ((uVar14 != 0) && (uVar14 * 9 != -0x11)) {
        _free(param_2[3] + uVar14 * -8 + -8);
      }
      puStack_f0 = puVar15 + uVar13 * 0x12;
      uStack_190 = 0x8000000000000001;
      puStack_108 = puVar15;
      puStack_100 = puVar15;
      uStack_f8 = uVar16;
      puStack_e8 = puVar1;
      puStack_e0 = puVar3;
      if (uVar13 != 0) {
        do {
          puStack_100 = puVar15 + 0x12;
          uVar16 = *puVar15;
          if (uVar16 == 0x8000000000000001) break;
          uVar13 = puVar15[1];
          puVar5 = (ulong *)puVar15[2];
          uVar14 = puVar15[3];
          puVar11 = (undefined8 *)puVar15[4];
          uStack_a8 = puVar15[10];
          puStack_b0 = (undefined8 *)puVar15[9];
          puStack_98 = (ulong *)puVar15[0xc];
          uStack_a0 = puVar15[0xb];
          puStack_88 = (undefined8 *)puVar15[0xe];
          uStack_90 = puVar15[0xd];
          uStack_78 = puVar15[0x10];
          uStack_80 = puVar15[0xf];
          uStack_c8 = puVar15[6];
          uStack_d0 = puVar15[5];
          uStack_b8 = puVar15[8];
          puStack_c0 = (ulong *)puVar15[7];
          if (uStack_190 != 0x8000000000000001) {
            if ((uStack_190 & 0x7fffffffffffffff) != 0) {
              _free(uStack_188);
            }
            FUN_100dfe50c(&uStack_168);
          }
          uStack_140 = uStack_a8;
          puStack_148 = puStack_b0;
          puStack_130 = puStack_98;
          uStack_138 = uStack_a0;
          puStack_120 = puStack_88;
          uStack_128 = uStack_90;
          uStack_110 = uStack_78;
          uStack_118 = uStack_80;
          uStack_160 = uStack_c8;
          uStack_168 = uStack_d0;
          uStack_150 = uStack_b8;
          puStack_158 = puStack_c0;
          uStack_190 = uVar16;
          uStack_188 = uVar13;
          puStack_180 = puVar5;
          uStack_178 = uVar14;
          puStack_170 = puVar11;
          func_0x0001014e08dc(&uStack_d0,&uStack_190);
          uVar9 = uStack_80;
          puVar8 = puStack_88;
          uVar14 = uStack_90;
          puVar5 = puStack_98;
          uVar16 = uStack_a0;
          uVar7 = uStack_a8;
          puVar11 = puStack_b0;
          uVar6 = uStack_b8;
          puVar15 = puStack_c0;
          uVar13 = uStack_d0;
          if (uStack_d0 != 2) {
            unaff_x24 = (ulong *)(uStack_c8 & 0xff);
            uStack_238 = uStack_c8 >> 8;
            FUN_100e1fd94(&uStack_190);
            goto joined_r0x0001015e6d2c;
          }
          puVar15 = puStack_100;
        } while (puStack_100 != puStack_f0);
      }
      FUN_100e1fd94(&uStack_190);
      goto LAB_1015e6c38;
    }
    uVar2 = param_2[1];
    uVar4 = param_2[2];
    lVar17 = param_2[3] * 0x60;
    uVar14 = uVar4 + lVar17;
    uVar13 = uVar4;
    uStack_1b0 = uVar4;
    uStack_1a0 = uVar2;
    uStack_198 = uVar14;
    if (param_2[3] != 0) {
      uVar16 = 0;
      unaff_x24 = &uStack_190;
      unaff_x28 = (undefined8 *)0x8000000000000006;
LAB_1015e6950:
      if (*(ulong *)(uVar4 + uVar16) != 0x8000000000000006) {
        lVar12 = uVar4 + uVar16;
        puStack_170 = *(undefined8 **)(lVar12 + 0x20);
        uStack_178 = *(ulong *)(lVar12 + 0x18);
        uStack_160 = *(ulong *)(lVar12 + 0x30);
        uStack_168 = *(ulong *)(lVar12 + 0x28);
        uStack_150 = *(ulong *)(lVar12 + 0x40);
        puStack_158 = *(ulong **)(lVar12 + 0x38);
        puStack_148 = *(undefined8 **)(lVar12 + 0x48);
        puStack_180 = *(ulong **)(lVar12 + 0x10);
        uStack_188 = *(ulong *)(lVar12 + 8);
        uStack_138 = *(ulong *)(lVar12 + 0x58);
        uStack_140 = *(ulong *)(lVar12 + 0x50);
        puStack_130 = (ulong *)((ulong)puStack_130 & 0xffffffffffffff00);
        uStack_190 = *(ulong *)(uVar4 + uVar16);
        FUN_1015e67e0(&uStack_d0,&uStack_190);
        if (uStack_d0 == 2) goto code_r0x0001015e69b0;
        unaff_x24 = (ulong *)(uStack_c8 & 0xff);
        uStack_238 = uStack_c8 >> 8;
        lVar17 = ((lVar17 - uVar16) - 0x60) / 0x60 + 1;
        lVar12 = uVar4 + uVar16;
        while( true ) {
          lVar12 = lVar12 + 0x60;
          lVar17 = lVar17 + -1;
          puStack_218 = puStack_98;
          uStack_210 = uStack_b8;
          puStack_230 = puStack_88;
          uStack_228 = uStack_80;
          uStack_220 = uStack_a8;
          uVar13 = uStack_d0;
          param_2 = puStack_c0;
          unaff_x28 = puStack_b0;
          uVar16 = uStack_a0;
          uVar14 = uStack_90;
          if (lVar17 == 0) break;
          FUN_100dfe50c(lVar12);
        }
        goto joined_r0x0001015e6d40;
      }
      uVar13 = uVar4 + uVar16 + 0x60;
    }
LAB_1015e6bd4:
    lVar17 = (uVar14 - uVar13 >> 5) * -0x5555555555555555 + 1;
    uStack_1a8 = uVar13;
    while (lVar17 = lVar17 + -1, lVar17 != 0) {
      uVar13 = uVar13 + 0x60;
      FUN_100dfe50c();
      uVar16 = uVar13;
    }
    uVar13 = 2;
    uVar14 = 5;
joined_r0x0001015e6d40:
    puVar15 = param_2;
    uVar6 = uStack_210;
    puVar11 = unaff_x28;
    uVar7 = uStack_220;
    puVar5 = puStack_218;
    puVar8 = puStack_230;
    uVar9 = uStack_228;
    if (uVar2 != 0) {
      _free(uVar4);
      puVar15 = param_2;
      uVar6 = uStack_210;
      puVar11 = unaff_x28;
      uVar7 = uStack_220;
      puVar5 = puStack_218;
      puVar8 = puStack_230;
      uVar9 = uStack_228;
    }
joined_r0x0001015e6d2c:
    uStack_140 = uVar9;
    puStack_148 = puVar8;
    uStack_150 = uVar14;
    puStack_158 = puVar5;
    uStack_160 = uVar16;
    uStack_168 = uVar7;
    puStack_170 = puVar11;
    uStack_178 = uVar6;
    puStack_180 = puVar15;
    uStack_190 = uVar13;
    if (uStack_190 == 2) goto LAB_1015e6c38;
LAB_1015e6dbc:
    puVar11 = puStack_170;
    if ((uStack_190 & 1) != 0) goto LAB_1015e6dcc;
  }
  uStack_238 = (ulong)puVar1 >> 8;
  puStack_180 = puVar3;
  unaff_x24 = puVar1;
LAB_1015e6dcc:
  *param_1 = 1;
  param_1[1] = (ulong)unaff_x24 & 0xff | uStack_238 << 8;
  param_1[2] = puStack_180;
  param_1[3] = uStack_178;
  param_1[4] = puVar11;
  param_1[5] = uStack_168;
  param_1[6] = uStack_160;
  param_1[7] = puStack_158;
  param_1[8] = uStack_150;
  param_1[9] = puStack_148;
  param_1[10] = uStack_140;
  return;
code_r0x0001015e69b0:
  uVar16 = uVar16 + 0x60;
  uVar13 = uVar14;
  if (lVar17 - uVar16 == 0) goto LAB_1015e6bd4;
  goto LAB_1015e6950;
}

