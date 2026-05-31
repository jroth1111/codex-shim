
void FUN_101399f7c(undefined8 *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  ulong uVar8;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  undefined8 *extraout_x9_01;
  undefined8 *extraout_x9_02;
  undefined8 *extraout_x10;
  undefined8 *extraout_x10_00;
  undefined8 *extraout_x10_01;
  undefined8 *extraout_x10_02;
  undefined8 *extraout_x11;
  undefined8 *extraout_x11_00;
  undefined8 *extraout_x11_01;
  undefined8 *extraout_x11_02;
  undefined8 *extraout_x12;
  undefined8 *extraout_x12_00;
  undefined8 *extraout_x12_01;
  undefined8 *extraout_x12_02;
  undefined1 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *extraout_x15;
  undefined8 *extraout_x15_00;
  undefined8 *extraout_x15_01;
  undefined8 *extraout_x15_02;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *unaff_x25;
  undefined8 *puVar15;
  undefined8 *unaff_x27;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2e8;
  ulong uStack_2e0;
  long *plStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_278;
  byte bStack_270;
  uint7 uStack_26f;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  long *plStack_1f0;
  long *plStack_1e8;
  ulong uStack_1e0;
  long *plStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  ulong uStack_158;
  char cStack_150;
  undefined7 uStack_14f;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
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
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  
  puVar11 = (undefined8 *)param_2[10];
  puVar14 = (undefined8 *)param_2[0xb];
  uVar8 = *param_2 ^ 0x8000000000000000;
  if (-1 < (long)*param_2) {
    uVar8 = 6;
  }
  puStack_318 = puVar14;
  if (uVar8 == 0) {
    func_0x000101616ec0(&puStack_278,param_2 + 1);
    puVar12 = (undefined8 *)(ulong)bStack_270;
    puVar7 = extraout_x8;
    puStack_2f8 = extraout_x9;
    puStack_308 = extraout_x10;
    puStack_300 = extraout_x11;
    puStack_310 = extraout_x12;
    puStack_318 = extraout_x15;
    puVar16 = puStack_278;
    if (puStack_278 != (undefined8 *)0x2) {
      unaff_x27 = (undefined8 *)(ulong)uStack_26f;
      puVar7 = puStack_228;
      puStack_2f8 = puStack_238;
      puStack_308 = puStack_230;
      puStack_300 = puStack_248;
      puStack_310 = puStack_260;
      puStack_318 = puStack_268;
      unaff_x21 = puStack_258;
      unaff_x22 = puStack_250;
      unaff_x25 = puStack_240;
      puVar16 = puStack_278;
    }
    goto LAB_10139a240;
  }
  if (uVar8 == 6) {
    uStack_2b8 = param_2[5];
    uStack_2c0 = param_2[4];
    uStack_2a8 = param_2[7];
    uStack_2b0 = param_2[6];
    uStack_298 = param_2[9];
    uStack_2a0 = param_2[8];
    plVar19 = (long *)param_2[1];
    uVar18 = *param_2;
    uStack_2c8 = param_2[3];
    uVar17 = param_2[2];
    uStack_2e0 = uVar18;
    plStack_2d8 = plVar19;
    uStack_2d0 = uVar17;
    puStack_290 = puVar11;
    puStack_288 = puVar14;
    if (uStack_2b0 == 1) {
      if ((uStack_2c0 != 0) && (uStack_2c0 * 9 != -0x11)) {
        _free(uStack_2c8 + uStack_2c0 * -8 + -8);
      }
      plStack_1d8 = plVar19 + uVar17 * 0x12;
      puStack_278 = (undefined8 *)0x8000000000000001;
      plStack_1e8 = plVar19;
      plStack_1f0 = plVar19;
      uStack_1e0 = uVar18;
      puStack_1d0 = puVar11;
      puStack_1c8 = puVar14;
      if (uVar17 == 0) {
LAB_10139a144:
        unaff_x21 = (undefined8 *)_malloc(0x36);
        if (unaff_x21 == (undefined8 *)0x0) {
          func_0x0001087c9084(1,0x36);
LAB_10139a57c:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10139a580);
          (*pcVar5)();
        }
        puStack_300 = (undefined8 *)0x0;
        puStack_2f8 = (undefined8 *)0x0;
        unaff_x21[1] = 0x7720656c62617420;
        *unaff_x21 = 0x6465746365707865;
        unaff_x21[3] = 0x6e65203120796c74;
        unaff_x21[2] = 0x6361786520687469;
        unaff_x21[5] = 0x7974706d6520646e;
        unaff_x21[4] = 0x756f66202c797274;
        *(undefined8 *)((long)unaff_x21 + 0x2e) = 0x656c626174207974;
        puStack_310 = (undefined8 *)0x36;
        puStack_308 = (undefined8 *)0x0;
        unaff_x27 = puVar11;
        unaff_x22 = (undefined8 *)0x36;
        puVar15 = (undefined8 *)0x8;
LAB_10139a190:
        FUN_100e1fd94(&puStack_278);
        puVar16 = (undefined8 *)0x1;
      }
      else {
        plStack_1e8 = plVar19 + 0x12;
        if (*plVar19 == -0x7fffffffffffffff) goto LAB_10139a144;
        puVar12 = (undefined8 *)plVar19[3];
        puVar7 = (undefined8 *)plVar19[4];
        lStack_e0 = plVar19[1];
        lStack_d8 = plVar19[2];
        puStack_a8 = (undefined8 *)plVar19[10];
        puStack_b0 = (undefined8 *)plVar19[9];
        puStack_98 = (undefined8 *)plVar19[0xc];
        puStack_a0 = (undefined8 *)plVar19[0xb];
        puStack_88 = (undefined8 *)plVar19[0xe];
        puStack_90 = (undefined8 *)plVar19[0xd];
        puStack_78 = (undefined8 *)plVar19[0x10];
        puStack_80 = (undefined8 *)plVar19[0xf];
        puStack_c8 = (undefined8 *)plVar19[6];
        puStack_d0 = (undefined8 *)plVar19[5];
        puStack_b8 = (undefined8 *)plVar19[8];
        puStack_c0 = (undefined8 *)plVar19[7];
        puStack_198 = (undefined8 *)plVar19[10];
        puStack_1a0 = (undefined8 *)plVar19[9];
        puStack_188 = (undefined8 *)plVar19[0xc];
        puStack_190 = (undefined8 *)plVar19[0xb];
        puStack_178 = (undefined8 *)plVar19[0xe];
        puStack_180 = (undefined8 *)plVar19[0xd];
        puStack_168 = (undefined8 *)plVar19[0x10];
        puStack_170 = (undefined8 *)plVar19[0xf];
        puStack_1b8 = (undefined8 *)plVar19[6];
        puStack_1c0 = (undefined8 *)plVar19[5];
        puStack_1a8 = (undefined8 *)plVar19[8];
        puStack_1b0 = (undefined8 *)plVar19[7];
        uStack_100 = 1;
        puStack_f8 = puVar12;
        puStack_f0 = puVar7;
        lStack_e8 = *plVar19;
        func_0x000101616ec0(&uStack_158,&lStack_e8);
        puVar4 = puStack_168;
        puVar3 = puStack_170;
        puStack_2f8 = puStack_178;
        puVar15 = puStack_180;
        puStack_300 = puStack_188;
        unaff_x22 = puStack_190;
        unaff_x21 = puStack_198;
        puVar2 = puStack_1a0;
        puVar1 = puStack_1a8;
        unaff_x27 = puStack_1b0;
        puVar16 = puStack_1b8;
        unaff_x25 = puStack_1c0;
        if (uStack_158 != 2) {
          puStack_300 = puStack_128;
          puStack_2f8 = puStack_118;
          puStack_310 = puStack_140;
          puStack_308 = puStack_110;
          puStack_2e8 = puStack_108;
          FUN_100dfe50c(&puStack_1c0);
          unaff_x27 = (undefined8 *)CONCAT71(uStack_14f,cStack_150);
          unaff_x21 = puStack_138;
          unaff_x22 = puStack_130;
          puVar15 = puStack_120;
          puStack_318 = puStack_148;
          if ((uStack_158 & 1) == 0) {
            unaff_x27 = puVar12;
            puStack_318 = puVar7;
          }
          goto LAB_10139a190;
        }
        puStack_318 = puStack_1a8;
        puStack_310 = puStack_1a0;
        puStack_308 = puStack_170;
        puStack_2e8 = puStack_168;
        FUN_100e1fd94(&puStack_278);
        if (unaff_x25 != (undefined8 *)0x8000000000000006) {
          puStack_d0 = unaff_x25;
          puStack_c8 = puVar16;
          puStack_c0 = unaff_x27;
          puStack_b8 = puVar1;
          puStack_b0 = puVar2;
          puStack_a8 = unaff_x21;
          puStack_a0 = unaff_x22;
          puStack_98 = puStack_300;
          puStack_90 = puVar15;
          puStack_88 = puStack_2f8;
          puStack_80 = puVar3;
          puStack_78 = puVar4;
          if (cStack_150 == '\0') {
            __ZN107__LT_toml__de__deserializer__table_enum__TableEnumDeserializer_u20_as_u20_serde_core__de__VariantAccess_GT_12unit_variant17h77c4a3066d09ddecE
                      (&puStack_1c0,&puStack_d0);
            if (puStack_1c0 != (undefined8 *)0x2) goto LAB_10139a528;
            puVar12 = (undefined8 *)0x0;
            puVar7 = extraout_x8_02;
            puStack_2f8 = extraout_x9_01;
            puStack_308 = extraout_x10_01;
            puStack_300 = extraout_x11_01;
            puStack_310 = extraout_x12_01;
            puStack_318 = extraout_x15_01;
            puVar16 = puStack_1c0;
          }
          else if (cStack_150 == '\x01') {
            __ZN107__LT_toml__de__deserializer__table_enum__TableEnumDeserializer_u20_as_u20_serde_core__de__VariantAccess_GT_12unit_variant17h77c4a3066d09ddecE
                      (&puStack_1c0,&puStack_d0);
            if (puStack_1c0 == (undefined8 *)0x2) {
              puVar12 = (undefined8 *)0x1;
              puVar7 = extraout_x8_01;
              puStack_2f8 = extraout_x9_00;
              puStack_308 = extraout_x10_00;
              puStack_300 = extraout_x11_00;
              puStack_310 = extraout_x12_00;
              puStack_318 = extraout_x15_00;
              puVar16 = puStack_1c0;
            }
            else {
LAB_10139a528:
              unaff_x27 = (undefined8 *)((ulong)puStack_1b8 >> 8);
              puVar7 = puStack_170;
              puStack_2f8 = puStack_180;
              puStack_308 = puStack_178;
              puStack_300 = puStack_190;
              puStack_310 = puStack_1a8;
              puVar12 = puStack_1b8;
              puStack_318 = puStack_1b0;
              unaff_x21 = puStack_1a0;
              unaff_x22 = puStack_198;
              unaff_x25 = puStack_188;
              puVar16 = puStack_1c0;
            }
          }
          else {
            __ZN107__LT_toml__de__deserializer__table_enum__TableEnumDeserializer_u20_as_u20_serde_core__de__VariantAccess_GT_12unit_variant17h77c4a3066d09ddecE
                      (&puStack_1c0,&puStack_d0);
            if (puStack_1c0 != (undefined8 *)0x2) goto LAB_10139a528;
            puVar12 = (undefined8 *)0x2;
            puVar7 = extraout_x8_03;
            puStack_2f8 = extraout_x9_02;
            puStack_308 = extraout_x10_02;
            puStack_300 = extraout_x11_02;
            puStack_310 = extraout_x12_02;
            puStack_318 = extraout_x15_02;
            puVar16 = puStack_1c0;
          }
          goto LAB_10139a240;
        }
      }
      puVar7 = puStack_2e8;
      puVar12 = unaff_x27;
      unaff_x25 = puVar15;
      unaff_x27 = (undefined8 *)((ulong)unaff_x27 >> 8);
    }
    else {
      if (uStack_2b0 == 0) {
        uVar13 = 0x2a;
        unaff_x21 = (undefined8 *)_malloc(0x2a);
        if (unaff_x21 == (undefined8 *)0x0) {
LAB_10139a560:
          func_0x0001087c9084(1,uVar13);
          goto LAB_10139a57c;
        }
        unaff_x21[1] = 0x3120796c74636178;
        *unaff_x21 = 0x65206465746e6177;
        unaff_x21[3] = 0x20646e756f66202c;
        unaff_x21[2] = 0x746e656d656c6520;
        *(undefined8 *)((long)unaff_x21 + 0x22) = 0x73746e656d656c65;
        *(undefined8 *)((long)unaff_x21 + 0x1a) = 0x203020646e756f66;
        puStack_310 = (undefined8 *)0x2a;
      }
      else {
        uVar13 = 0x2d;
        unaff_x21 = (undefined8 *)_malloc(0x2d);
        if (unaff_x21 == (undefined8 *)0x0) goto LAB_10139a560;
        unaff_x21[1] = 0x3120796c74636178;
        *unaff_x21 = 0x65206465746e6177;
        unaff_x21[3] = 0x742065726f6d202c;
        unaff_x21[2] = 0x746e656d656c6520;
        *(undefined8 *)((long)unaff_x21 + 0x25) = 0x746e656d656c6520;
        *(undefined8 *)((long)unaff_x21 + 0x1d) = 0x31206e6168742065;
        puStack_310 = (undefined8 *)0x2d;
      }
      if ((uStack_2c0 != 0) && (uStack_2c0 * 9 != -0x11)) {
        _free(uStack_2c8 + uStack_2c0 * -8 + -8);
      }
      func_0x000100d96fa0(&uStack_2e0);
      puStack_308 = (undefined8 *)0x0;
      puVar7 = extraout_x8_00;
      puStack_2f8 = (undefined8 *)0x0;
      puStack_300 = (undefined8 *)0x0;
      puVar12 = puVar11;
      unaff_x22 = puStack_310;
      unaff_x25 = (undefined8 *)0x8;
      unaff_x27 = (undefined8 *)((ulong)puVar11 >> 8);
      puVar16 = (undefined8 *)0x1;
    }
LAB_10139a240:
    if (puVar16 == (undefined8 *)0x2) {
      bVar6 = true;
      uVar13 = 2;
      puVar11 = puVar12;
      if (uVar8 != 0 && uVar8 != 6) {
LAB_10139a29c:
        FUN_100dfe50c(param_2);
        uVar9 = SUB81(puVar11,0);
        goto joined_r0x00010139a2fc;
      }
    }
    else {
      bVar6 = ((ulong)puVar16 & 1) == 0;
      uVar10 = (uint)puVar12;
      if (bVar6) {
        uVar10 = (uint)puVar11;
      }
      puVar12 = (undefined8 *)((long)unaff_x27 << 8);
      if (bVar6) {
        puStack_318 = puVar14;
        puVar12 = puVar11;
      }
      bVar6 = false;
      unaff_x27 = (undefined8 *)((ulong)puVar12 >> 8);
      uVar13 = 1;
      puVar11 = (undefined8 *)(ulong)uVar10;
      puVar14 = puStack_318;
      puStack_2e8 = puVar7;
      if (uVar8 != 0 && uVar8 != 6) goto LAB_10139a29c;
    }
  }
  else {
    unaff_x21 = (undefined8 *)_malloc(0x16);
    if (unaff_x21 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0x16);
      goto LAB_10139a57c;
    }
    puStack_2f8 = (undefined8 *)0x0;
    puStack_308 = (undefined8 *)0x0;
    puStack_300 = (undefined8 *)0x0;
    unaff_x21[1] = 0x726f20676e697274;
    *unaff_x21 = 0x73206465746e6177;
    *(undefined8 *)((long)unaff_x21 + 0xe) = 0x656c62617420726f;
    unaff_x22 = (undefined8 *)0x16;
    unaff_x25 = (undefined8 *)0x8;
    puStack_310 = (undefined8 *)0x16;
    bVar6 = false;
    unaff_x27 = (undefined8 *)((ulong)puVar11 >> 8);
    uVar13 = 1;
    if (uVar8 != 0 && uVar8 != 6) goto LAB_10139a29c;
  }
  uVar9 = SUB81(puVar11,0);
joined_r0x00010139a2fc:
  if (bVar6) {
    *(undefined1 *)(param_1 + 1) = uVar9;
    uVar13 = 2;
  }
  else {
    *(int *)((long)param_1 + 9) = (int)unaff_x27;
    *(char *)((long)param_1 + 0xf) = (char)((ulong)unaff_x27 >> 0x30);
    *(short *)((long)param_1 + 0xd) = (short)((ulong)unaff_x27 >> 0x20);
    param_1[4] = unaff_x21;
    param_1[5] = unaff_x22;
    param_1[6] = puStack_300;
    param_1[7] = unaff_x25;
    param_1[8] = puStack_2f8;
    param_1[9] = puStack_308;
    param_1[10] = puStack_2e8;
    *(undefined1 *)(param_1 + 1) = uVar9;
    param_1[2] = puVar14;
    param_1[3] = puStack_310;
  }
  *param_1 = uVar13;
  return;
}

