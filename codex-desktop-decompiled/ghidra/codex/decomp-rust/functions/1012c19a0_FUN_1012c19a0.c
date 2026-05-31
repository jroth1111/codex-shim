
void FUN_1012c19a0(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long extraout_x11;
  long extraout_x11_00;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long lStack_350;
  ulong uStack_348;
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
  
  uVar15 = param_2[10];
  uStack_348 = param_2[0xb];
  uVar6 = *param_2 ^ 0x8000000000000000;
  if (-1 < (long)*param_2) {
    uVar6 = 6;
  }
  uVar12 = uVar15;
  if (uVar6 == 0) {
    func_0x00010161865c(&uStack_2d8,param_2 + 1);
    uVar13 = (ulong)bStack_2d0;
    if (uStack_2d8 == 2) {
      uVar13 = (ulong)(bStack_2d0 & 1);
      goto LAB_1012c1a78;
    }
    uVar5 = (ulong)uStack_2cf;
    lVar7 = lStack_2a8;
    lVar8 = lStack_290;
    lStack_350 = lStack_288;
    uVar17 = uStack_2d8;
    puVar4 = puStack_2b8;
    lVar10 = lStack_2b0;
    lVar11 = lStack_2c0;
    lVar14 = lStack_2a0;
    lVar16 = lStack_298;
LAB_1012c1ae4:
    if ((uVar17 & 1) != 0) {
      uVar15 = uVar5 << 8;
      uStack_348 = uStack_2c8;
      uVar12 = uVar13;
    }
  }
  else {
    if (uVar6 == 6) {
      uStack_318 = param_2[5];
      uStack_320 = param_2[4];
      uStack_308 = param_2[7];
      uStack_310 = param_2[6];
      uStack_2f8 = param_2[9];
      uStack_300 = param_2[8];
      plVar18 = (long *)param_2[1];
      uVar17 = *param_2;
      uStack_328 = param_2[3];
      uVar13 = param_2[2];
      uStack_340 = uVar17;
      plStack_338 = plVar18;
      uStack_330 = uVar13;
      uStack_2f0 = uVar15;
      uStack_2e8 = uStack_348;
      if (uStack_310 == 1) {
        if ((uStack_320 != 0) && (uStack_320 * 9 != -0x11)) {
          _free(uStack_328 + uStack_320 * -8 + -8);
        }
        plStack_238 = plVar18 + uVar13 * 0x12;
        uStack_2d8 = 0x8000000000000001;
        plStack_248 = plVar18;
        plStack_250 = plVar18;
        uStack_240 = uVar17;
        uStack_230 = uVar15;
        uStack_228 = uStack_348;
        if (uVar13 == 0) {
LAB_1012c1b60:
          puVar4 = (undefined8 *)_malloc(0x36);
          if (puVar4 == (undefined8 *)0x0) {
            func_0x0001087c9084(1,0x36);
LAB_1012c1ef4:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1012c1ef8);
            (*pcVar3)();
          }
          puVar4[1] = 0x7720656c62617420;
          *puVar4 = 0x6465746365707865;
          puVar4[3] = 0x6e65203120796c74;
          puVar4[2] = 0x6361786520687469;
          puVar4[5] = 0x7974706d6520646e;
          puVar4[4] = 0x756f66202c797274;
          *(undefined8 *)((long)puVar4 + 0x2e) = 0x656c626174207974;
          lVar7 = 0;
          lVar10 = 0x36;
          lVar11 = 0x36;
          lVar8 = 0;
          lVar14 = 8;
          lVar16 = 0;
        }
        else {
          plStack_248 = plVar18 + 0x12;
          if (*plVar18 == -0x7fffffffffffffff) goto LAB_1012c1b60;
          uVar5 = plVar18[3];
          uVar1 = plVar18[4];
          lStack_e0 = plVar18[1];
          lStack_d8 = plVar18[2];
          lStack_a8 = plVar18[10];
          puStack_b0 = (undefined8 *)plVar18[9];
          lStack_98 = plVar18[0xc];
          lStack_a0 = plVar18[0xb];
          lStack_88 = plVar18[0xe];
          lStack_90 = plVar18[0xd];
          lStack_78 = plVar18[0x10];
          lStack_80 = plVar18[0xf];
          uStack_c8 = plVar18[6];
          uStack_d0 = plVar18[5];
          lStack_b8 = plVar18[8];
          uStack_c0 = plVar18[7];
          puStack_198 = (undefined8 *)plVar18[10];
          lStack_1a0 = plVar18[9];
          lStack_188 = plVar18[0xc];
          lStack_190 = plVar18[0xb];
          lStack_178 = plVar18[0xe];
          lStack_180 = plVar18[0xd];
          lStack_168 = plVar18[0x10];
          lStack_170 = plVar18[0xf];
          uStack_1b8 = plVar18[6];
          lStack_1c0 = plVar18[5];
          uStack_1a8 = plVar18[8];
          uStack_1b0 = plVar18[7];
          uStack_100 = 1;
          uStack_f8 = uVar5;
          uStack_f0 = uVar1;
          lStack_e8 = *plVar18;
          func_0x00010161865c(&uStack_158,&lStack_e8);
          lStack_350 = lStack_168;
          lVar8 = lStack_170;
          lVar16 = lStack_178;
          lVar14 = lStack_180;
          lVar7 = lStack_188;
          lVar10 = lStack_190;
          puVar4 = puStack_198;
          lVar11 = lStack_1a0;
          uStack_2c8 = uStack_1a8;
          uVar13 = uStack_1b0;
          uVar17 = uStack_1b8;
          lVar2 = lStack_1c0;
          if (uStack_158 == 2) {
            FUN_100e1fd94(&uStack_2d8);
            if (lVar2 == -0x7ffffffffffffffa) {
              if (uVar17 == 2) goto LAB_1012c1a78;
              uVar5 = uVar13 >> 8;
            }
            else {
              lStack_220 = lVar2;
              uStack_218 = uVar17;
              uStack_210 = uVar13;
              uStack_208 = uStack_2c8;
              lStack_200 = lVar11;
              puStack_1f8 = puVar4;
              lStack_1f0 = lVar10;
              lStack_1e8 = lVar7;
              lStack_1e0 = lVar14;
              lStack_1d8 = lVar16;
              lStack_1d0 = lVar8;
              lStack_1c8 = lStack_350;
              if (cStack_150 == '\0') {
                __ZN107__LT_toml__de__deserializer__table_enum__TableEnumDeserializer_u20_as_u20_serde_core__de__VariantAccess_GT_12unit_variant17h77c4a3066d09ddecE
                          (&uStack_d0,&lStack_220);
                if (uStack_d0 == 2) {
                  uVar13 = 0;
                  goto LAB_1012c1a78;
                }
              }
              else {
                __ZN107__LT_toml__de__deserializer__table_enum__TableEnumDeserializer_u20_as_u20_serde_core__de__VariantAccess_GT_12unit_variant17h77c4a3066d09ddecE
                          (&uStack_d0,&lStack_220);
                if (uStack_d0 == 2) {
                  uVar13 = 1;
LAB_1012c1a78:
                  *(char *)(param_1 + 1) = (char)uVar13;
                  *param_1 = 2;
                  return;
                }
              }
              uVar5 = uStack_c8 >> 8;
              lVar7 = lStack_a0;
              lVar8 = lStack_88;
              lStack_350 = lStack_80;
              uVar17 = uStack_d0;
              uStack_2c8 = uStack_c0;
              puVar4 = puStack_b0;
              lVar10 = lStack_a8;
              lVar11 = lStack_b8;
              uVar13 = uStack_c8;
              lVar14 = lStack_98;
              lVar16 = lStack_90;
            }
            goto LAB_1012c1ae4;
          }
          lStack_350 = lStack_108;
          FUN_100dfe50c(&lStack_1c0);
          lVar7 = lStack_128;
          puVar4 = puStack_138;
          lVar10 = lStack_130;
          lVar11 = lStack_140;
          lVar8 = lStack_110;
          lVar14 = lStack_120;
          uVar12 = CONCAT71(uStack_14f,cStack_150);
          lVar16 = lStack_118;
          uStack_348 = uStack_148;
          if ((uStack_158 & 1) == 0) {
            uVar12 = uVar5;
            uStack_348 = uVar1;
          }
        }
        FUN_100e1fd94(&uStack_2d8);
        uVar15 = uVar12;
        goto LAB_1012c1ca0;
      }
      if (uStack_310 == 0) {
        uVar9 = 0x2a;
        puVar4 = (undefined8 *)_malloc(0x2a);
        if (puVar4 == (undefined8 *)0x0) {
LAB_1012c1ed8:
          func_0x0001087c9084(1,uVar9);
          goto LAB_1012c1ef4;
        }
        puVar4[1] = 0x3120796c74636178;
        *puVar4 = 0x65206465746e6177;
        puVar4[3] = 0x20646e756f66202c;
        puVar4[2] = 0x746e656d656c6520;
        *(undefined8 *)((long)puVar4 + 0x22) = 0x73746e656d656c65;
        *(undefined8 *)((long)puVar4 + 0x1a) = 0x203020646e756f66;
        lVar10 = 0x2a;
      }
      else {
        uVar9 = 0x2d;
        puVar4 = (undefined8 *)_malloc(0x2d);
        if (puVar4 == (undefined8 *)0x0) goto LAB_1012c1ed8;
        puVar4[1] = 0x3120796c74636178;
        *puVar4 = 0x65206465746e6177;
        puVar4[3] = 0x742065726f6d202c;
        puVar4[2] = 0x746e656d656c6520;
        *(undefined8 *)((long)puVar4 + 0x25) = 0x746e656d656c6520;
        *(undefined8 *)((long)puVar4 + 0x1d) = 0x31206e6168742065;
        lVar10 = 0x2d;
      }
      if ((uStack_320 != 0) && (uStack_320 * 9 != -0x11)) {
        _free(uStack_328 + uStack_320 * -8 + -8);
      }
      func_0x000100d96fa0(&uStack_340);
      lStack_350 = extraout_x11_00;
    }
    else {
      puVar4 = (undefined8 *)_malloc(0x16);
      if (puVar4 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x16);
        goto LAB_1012c1ef4;
      }
      puVar4[1] = 0x726f20676e697274;
      *puVar4 = 0x73206465746e6177;
      *(undefined8 *)((long)puVar4 + 0xe) = 0x656c62617420726f;
      lVar10 = 0x16;
      lStack_350 = extraout_x11;
    }
    lVar16 = 0;
    lVar8 = 0;
    lVar7 = 0;
    lVar14 = 8;
    lVar11 = lVar10;
  }
  if ((uVar6 != 0) && (uVar6 != 6)) {
    FUN_100dfe50c(param_2);
  }
LAB_1012c1ca0:
  *(char *)(param_1 + 1) = (char)uVar12;
  *(char *)((long)param_1 + 0xf) = (char)(uVar15 >> 0x38);
  *(short *)((long)param_1 + 0xd) = (short)(uVar15 >> 0x28);
  *(int *)((long)param_1 + 9) = (int)(uVar15 >> 8);
  param_1[4] = puVar4;
  param_1[5] = lVar10;
  param_1[6] = lVar7;
  param_1[7] = lVar14;
  param_1[8] = lVar16;
  param_1[9] = lVar8;
  param_1[10] = lStack_350;
  *param_1 = 1;
  param_1[2] = uStack_348;
  param_1[3] = lVar11;
  return;
}

