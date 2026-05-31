
void FUN_1013d48d0(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lStack_370;
  ulong uStack_368;
  long lStack_360;
  long lStack_358;
  ulong uStack_340;
  long *plStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2d8;
  byte bStack_2d0;
  uint7 uStack_2cf;
  ulong uStack_2c8;
  long lStack_2c0;
  undefined8 *puStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long *plStack_250;
  long *plStack_248;
  ulong uStack_240;
  long *plStack_238;
  ulong uStack_230;
  ulong uStack_228;
  long lStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  long lStack_200;
  undefined8 *puStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  long lStack_1a0;
  undefined8 *puStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  ulong uStack_158;
  char cStack_150;
  undefined7 uStack_14f;
  ulong uStack_148;
  long lStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  uVar1 = param_2[10];
  uVar2 = param_2[0xb];
  uVar10 = *param_2 ^ 0x8000000000000000;
  if (-1 < (long)*param_2) {
    uVar10 = 6;
  }
  uStack_368 = uVar2;
  uVar13 = uVar1;
  if (uVar10 == 0) {
    func_0x000101618ffc(&uStack_2d8,param_2 + 1);
    uVar13 = (ulong)bStack_2d0;
    if (uStack_2d8 == 2) {
      uVar13 = (ulong)(bStack_2d0 & 1);
      goto LAB_1013d49ac;
    }
    uVar14 = (ulong)uStack_2cf;
    uStack_368 = uStack_2c8;
    lStack_358 = lStack_2a8;
    lStack_360 = lStack_290;
    lStack_370 = lStack_288;
    uVar15 = uStack_2d8;
    puVar9 = puStack_2b8;
    lVar12 = lStack_2c0;
LAB_1013d4b18:
    uVar13 = uVar13 & 0xff | uVar14 << 8;
    if ((uVar15 & 1) == 0) {
      uVar13 = uVar1;
      uStack_368 = uVar2;
    }
  }
  else if (uVar10 == 6) {
    uStack_318 = param_2[5];
    uStack_320 = param_2[4];
    uStack_308 = param_2[7];
    uStack_310 = param_2[6];
    uStack_2f8 = param_2[9];
    uStack_300 = param_2[8];
    plVar16 = (long *)param_2[1];
    uVar14 = *param_2;
    uStack_328 = param_2[3];
    uVar15 = param_2[2];
    uStack_340 = uVar14;
    plStack_338 = plVar16;
    uStack_330 = uVar15;
    uStack_2f0 = uVar1;
    uStack_2e8 = uVar2;
    if (uStack_310 == 1) {
      if ((uStack_320 != 0) && (uStack_320 * 9 != -0x11)) {
        _free(uStack_328 + uStack_320 * -8 + -8);
      }
      plStack_238 = plVar16 + uVar15 * 0x12;
      uStack_2d8 = 0x8000000000000001;
      plStack_248 = plVar16;
      plStack_250 = plVar16;
      uStack_240 = uVar14;
      uStack_230 = uVar1;
      uStack_228 = uVar2;
      if (uVar15 == 0) {
LAB_1013d4aac:
        puStack_138 = (undefined8 *)_malloc(0x36);
        if (puStack_138 == (undefined8 *)0x0) {
          func_0x0001087c9084(1,0x36);
LAB_1013d4df4:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1013d4df8);
          (*pcVar8)();
        }
        lStack_360 = 0;
        lStack_358 = 0;
        puStack_138[1] = 0x7720656c62617420;
        *puStack_138 = 0x6465746365707865;
        puStack_138[3] = 0x6e65203120796c74;
        puStack_138[2] = 0x6361786520687469;
        puStack_138[5] = 0x7974706d6520646e;
        puStack_138[4] = 0x756f66202c797274;
        *(undefined8 *)((long)puStack_138 + 0x2e) = 0x656c626174207974;
        lStack_140 = 0x36;
        lStack_120 = 8;
        lStack_130 = 0x36;
        lStack_118 = 0;
      }
      else {
        plStack_248 = plVar16 + 0x12;
        if (*plVar16 == -0x7fffffffffffffff) goto LAB_1013d4aac;
        uVar14 = plVar16[3];
        uVar3 = plVar16[4];
        lStack_e0 = plVar16[1];
        lStack_d8 = plVar16[2];
        lStack_a8 = plVar16[10];
        puStack_b0 = (undefined8 *)plVar16[9];
        lStack_98 = plVar16[0xc];
        lStack_a0 = plVar16[0xb];
        lStack_88 = plVar16[0xe];
        lStack_90 = plVar16[0xd];
        lStack_78 = plVar16[0x10];
        lStack_80 = plVar16[0xf];
        uStack_c8 = plVar16[6];
        uStack_d0 = plVar16[5];
        lStack_b8 = plVar16[8];
        uStack_c0 = plVar16[7];
        puStack_198 = (undefined8 *)plVar16[10];
        lStack_1a0 = plVar16[9];
        lStack_188 = plVar16[0xc];
        lStack_190 = plVar16[0xb];
        lStack_178 = plVar16[0xe];
        lStack_180 = plVar16[0xd];
        lStack_168 = plVar16[0x10];
        lStack_170 = plVar16[0xf];
        uStack_1b8 = plVar16[6];
        lStack_1c0 = plVar16[5];
        uStack_1a8 = plVar16[8];
        uStack_1b0 = plVar16[7];
        uStack_100 = 1;
        uStack_f8 = uVar14;
        uStack_f0 = uVar3;
        lStack_e8 = *plVar16;
        func_0x000101618ffc(&uStack_158,&lStack_e8);
        lStack_370 = lStack_168;
        lStack_360 = lStack_170;
        lVar7 = lStack_178;
        lVar6 = lStack_180;
        lStack_358 = lStack_188;
        lVar5 = lStack_190;
        puVar9 = puStack_198;
        lVar12 = lStack_1a0;
        uStack_368 = uStack_1a8;
        uVar13 = uStack_1b0;
        uVar15 = uStack_1b8;
        lVar4 = lStack_1c0;
        if (uStack_158 == 2) {
          FUN_100e1fd94(&uStack_2d8);
          if (lVar4 == -0x7ffffffffffffffa) {
            if (uVar15 != 2) {
              uVar14 = uVar13 >> 8;
              lStack_2a0 = lVar6;
              lStack_2b0 = lVar5;
              lStack_298 = lVar7;
              goto LAB_1013d4b18;
            }
          }
          else {
            lStack_220 = lVar4;
            uStack_218 = uVar15;
            uStack_210 = uVar13;
            uStack_208 = uStack_368;
            lStack_200 = lVar12;
            puStack_1f8 = puVar9;
            lStack_1f0 = lVar5;
            lStack_1e8 = lStack_358;
            lStack_1e0 = lVar6;
            lStack_1d8 = lVar7;
            lStack_1d0 = lStack_360;
            lStack_1c8 = lStack_370;
            if (cStack_150 == '\0') {
              __ZN107__LT_toml__de__deserializer__table_enum__TableEnumDeserializer_u20_as_u20_serde_core__de__VariantAccess_GT_12unit_variant17h77c4a3066d09ddecE
                        (&uStack_d0,&lStack_220);
              if (uStack_d0 != 2) goto LAB_1013d4da8;
              uVar13 = 0;
            }
            else {
              __ZN107__LT_toml__de__deserializer__table_enum__TableEnumDeserializer_u20_as_u20_serde_core__de__VariantAccess_GT_12unit_variant17h77c4a3066d09ddecE
                        (&uStack_d0,&lStack_220);
              if (uStack_d0 != 2) {
LAB_1013d4da8:
                uVar14 = uStack_c8 >> 8;
                uStack_368 = uStack_c0;
                lStack_358 = lStack_a0;
                lStack_360 = lStack_88;
                lStack_370 = lStack_80;
                uVar15 = uStack_d0;
                puVar9 = puStack_b0;
                lVar12 = lStack_b8;
                lStack_2a0 = lStack_98;
                lStack_2b0 = lStack_a8;
                uVar13 = uStack_c8;
                lStack_298 = lStack_90;
                goto LAB_1013d4b18;
              }
              uVar13 = 1;
            }
          }
LAB_1013d49ac:
          *(char *)(param_1 + 1) = (char)uVar13;
          *param_1 = 2;
          if (uVar10 == 0 || uVar10 == 6) {
            return;
          }
          goto LAB_1013d49c4;
        }
        lStack_360 = lStack_110;
        lStack_358 = lStack_128;
        lStack_370 = lStack_108;
        FUN_100dfe50c(&lStack_1c0);
        uVar13 = CONCAT71(uStack_14f,cStack_150);
        uStack_368 = uStack_148;
        if ((uStack_158 & 1) == 0) {
          uVar13 = uVar14;
          uStack_368 = uVar3;
        }
      }
      uVar14 = uVar13 >> 8;
      FUN_100e1fd94(&uStack_2d8);
      uVar15 = 1;
      puVar9 = puStack_138;
      lVar12 = lStack_140;
      lStack_2a0 = lStack_120;
      lStack_2b0 = lStack_130;
      lStack_298 = lStack_118;
      goto LAB_1013d4b18;
    }
    if (uStack_310 == 0) {
      uVar11 = 0x2a;
      puVar9 = (undefined8 *)_malloc(0x2a);
      if (puVar9 == (undefined8 *)0x0) {
LAB_1013d4dd8:
        func_0x0001087c9084(1,uVar11);
        goto LAB_1013d4df4;
      }
      puVar9[1] = 0x3120796c74636178;
      *puVar9 = 0x65206465746e6177;
      puVar9[3] = 0x20646e756f66202c;
      puVar9[2] = 0x746e656d656c6520;
      *(undefined8 *)((long)puVar9 + 0x22) = 0x73746e656d656c65;
      *(undefined8 *)((long)puVar9 + 0x1a) = 0x203020646e756f66;
      lVar12 = 0x2a;
    }
    else {
      uVar11 = 0x2d;
      puVar9 = (undefined8 *)_malloc(0x2d);
      if (puVar9 == (undefined8 *)0x0) goto LAB_1013d4dd8;
      puVar9[1] = 0x3120796c74636178;
      *puVar9 = 0x65206465746e6177;
      puVar9[3] = 0x742065726f6d202c;
      puVar9[2] = 0x746e656d656c6520;
      *(undefined8 *)((long)puVar9 + 0x25) = 0x746e656d656c6520;
      *(undefined8 *)((long)puVar9 + 0x1d) = 0x31206e6168742065;
      lVar12 = 0x2d;
    }
    if ((uStack_320 != 0) && (uStack_320 * 9 != -0x11)) {
      _free(uStack_328 + uStack_320 * -8 + -8);
    }
    func_0x000100d96fa0(&uStack_340);
    lStack_298 = 0;
    lStack_360 = 0;
    lStack_358 = 0;
    lStack_2a0 = 8;
    lStack_370 = extraout_x12_00;
    lStack_2b0 = lVar12;
  }
  else {
    puVar9 = (undefined8 *)_malloc(0x16);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0x16);
      goto LAB_1013d4df4;
    }
    lStack_298 = 0;
    lStack_360 = 0;
    lStack_358 = 0;
    puVar9[1] = 0x726f20676e697274;
    *puVar9 = 0x73206465746e6177;
    *(undefined8 *)((long)puVar9 + 0xe) = 0x656c62617420726f;
    lStack_2b0 = 0x16;
    lStack_2a0 = 8;
    lVar12 = 0x16;
    lStack_370 = extraout_x12;
  }
  *param_1 = 1;
  param_1[1] = uVar13;
  param_1[2] = uStack_368;
  param_1[3] = lVar12;
  param_1[4] = puVar9;
  param_1[5] = lStack_2b0;
  param_1[6] = lStack_358;
  param_1[7] = lStack_2a0;
  param_1[8] = lStack_298;
  param_1[9] = lStack_360;
  param_1[10] = lStack_370;
  if (uVar10 == 0 || uVar10 == 6) {
    return;
  }
LAB_1013d49c4:
  FUN_100dfe50c(param_2);
  return;
}

