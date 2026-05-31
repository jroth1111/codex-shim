
/* WARNING: Possible PIC construction at 0x0001013ed44c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013ed450) */
/* WARNING: Type propagation algorithm not settling */

char * FUN_1013ec718(undefined1 param_1 [16],undefined1 param_2 [16],long *param_3,
                    undefined8 param_4,undefined8 param_5,undefined8 param_6)

{
  ulong *puVar1;
  undefined8 **ppuVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined **ppuVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  long *plVar10;
  char *pcVar11;
  ulong uVar12;
  long lVar13;
  char *pcVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *extraout_x1;
  undefined1 *puVar19;
  undefined *puVar20;
  undefined8 **ppuVar21;
  undefined *puVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  code *pcVar25;
  ulong extraout_x8_04;
  long lVar26;
  long lVar27;
  ulong uVar28;
  ulong extraout_x9;
  ulong uVar29;
  long extraout_x11;
  long lVar30;
  long *plVar31;
  undefined8 **unaff_x20;
  char *pcVar32;
  undefined1 *unaff_x21;
  undefined8 *puVar33;
  char *unaff_x23;
  undefined8 *puVar34;
  ulong unaff_x24;
  ulong unaff_x25;
  long *plVar35;
  undefined *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long lVar36;
  long lVar37;
  byte *pbVar38;
  undefined8 *******pppppppuVar39;
  ulong extraout_d0;
  long lVar40;
  long lVar41;
  ulong uVar42;
  undefined8 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined *puStack_4c0;
  undefined8 uStack_4b8;
  char *pcStack_4b0;
  undefined1 **ppuStack_4a8;
  undefined1 *puStack_4a0;
  undefined *puStack_498;
  char **ppcStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  ulong uStack_478;
  char ***pppcStack_470;
  undefined *puStack_468;
  undefined1 *******pppppppuStack_430;
  undefined8 uStack_428;
  undefined1 ******ppppppuStack_3f0;
  undefined8 uStack_3e8;
  undefined1 auStack_3d8 [40];
  undefined1 *****pppppuStack_380;
  undefined8 uStack_378;
  undefined1 ****ppppuStack_340;
  undefined8 uStack_338;
  undefined1 auStack_329 [41];
  undefined1 ***pppuStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2b8 [24];
  undefined1 **ppuStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 **ppuStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  char *pcStack_1f0;
  undefined1 auStack_1b0 [8];
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 **ppuStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  char *pcStack_c0;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar42 = param_2._8_8_;
  uVar29 = param_2._0_8_;
  if (*param_3 == -0x8000000000000000) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24c5f0);
  }
  else {
    unaff_x20 = (undefined8 **)param_3[9];
    param_3[9] = -0x8000000000000000;
    if (unaff_x20 != (undefined8 **)0x8000000000000000) {
      lStack_d0 = param_3[0xb];
      lStack_d8 = param_3[10];
      ppuStack_e0 = unaff_x20;
      func_0x000100684748(&lStack_c8);
      if (lStack_c8 == -0x7ffffffffffffffb) {
        if (unaff_x20 != (undefined8 **)0x0) {
          _free(lStack_d8);
        }
      }
      else {
        FUN_101497a9c(auStack_80,param_3,&ppuStack_e0,&lStack_c8);
        uStack_128 = uStack_70;
        lStack_130 = lStack_78;
        uStack_118 = uStack_60;
        uStack_120 = uStack_68;
        uStack_108 = uStack_50;
        uStack_110 = uStack_58;
        uStack_f8 = uStack_40;
        uStack_100 = uStack_48;
        uStack_f0 = uStack_38;
        if (lStack_78 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_130);
        }
        pcStack_c0 = (char *)0x0;
      }
      return pcStack_c0;
    }
  }
  uVar9 = func_0x000108a079f0(&UNK_108cd2aad,0x2b,&UNK_10b24c5d8);
  if (unaff_x20 != (undefined8 **)0x0) {
    _free(lStack_d8);
  }
  plVar10 = (long *)__Unwind_Resume(uVar9);
  uStack_138 = 0x1013ec844;
  puStack_140 = &stack0xfffffffffffffff0;
  if (*plVar10 == -0x8000000000000000) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24c5f0);
  }
  else {
    unaff_x20 = (undefined8 **)plVar10[9];
    plVar10[9] = -0x8000000000000000;
    if (unaff_x20 != (undefined8 **)0x8000000000000000) {
      lStack_200 = plVar10[0xb];
      lStack_208 = plVar10[10];
      ppuStack_210 = unaff_x20;
      func_0x000100684748(&lStack_1f8);
      if (lStack_1f8 == -0x7ffffffffffffffb) {
        if (unaff_x20 != (undefined8 **)0x0) {
          _free(lStack_208);
        }
      }
      else {
        FUN_101497a9c(auStack_1b0,plVar10,&ppuStack_210,&lStack_1f8);
        uStack_258 = uStack_1a0;
        lStack_260 = lStack_1a8;
        uStack_248 = uStack_190;
        uStack_250 = uStack_198;
        uStack_238 = uStack_180;
        uStack_240 = uStack_188;
        uStack_228 = uStack_170;
        uStack_230 = uStack_178;
        uStack_220 = uStack_168;
        if (lStack_1a8 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_260);
        }
        pcStack_1f0 = (char *)0x0;
      }
      return pcStack_1f0;
    }
  }
  uVar9 = func_0x000108a079f0(&UNK_108cd2aad,0x2b,&UNK_10b24c5d8);
  if (unaff_x20 != (undefined8 **)0x0) {
    _free(lStack_208);
  }
  pcVar11 = (char *)__Unwind_Resume(uVar9);
  uStack_268 = 0x1013ec970;
  if (*(long *)(pcVar11 + 0x10) != 0) {
    return pcVar11;
  }
  uVar12 = extraout_x1[4];
  uVar24 = extraout_x1[1];
  ppuStack_270 = &puStack_140;
  if (uVar12 < uVar24) {
    if (*pcVar11 != '\x01') {
      puVar33 = (undefined8 *)(*extraout_x1 + uVar12 * 0x10);
      uVar9 = *puVar33;
      uVar23 = puVar33[1];
      puVar33 = *(undefined8 **)(pcVar11 + 8);
      if ((pcVar11[1] == '\x01') ||
         (lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7635,1), lVar13 == 0)) {
        pcVar11[1] = '\x02';
        lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7632,1);
        if ((lVar13 == 0) &&
           (((lVar13 = func_0x0001006571a0(*puVar33,puVar33[1],uVar9,uVar23), lVar13 == 0 &&
             (lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7632,1), lVar13 == 0)) &&
            (lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7636,1), lVar13 == 0)))) {
          if ((extraout_d0 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
            lVar13 = __ZN45__LT_f64_u20_as_u20_zmij__private__Sealed_GT_20write_to_zmij_buffer17h198f4ea1a070a853E
                               (auStack_2b8);
            lVar13 = lVar13 - (long)auStack_2b8;
            uVar9 = *puVar33;
            uVar23 = puVar33[1];
            puVar20 = auStack_2b8;
          }
          else {
            uVar9 = *puVar33;
            uVar23 = puVar33[1];
            puVar20 = &UNK_108c78dd4;
            lVar13 = 4;
          }
          lVar13 = FUN_100c34858(uVar9,uVar23,puVar20,lVar13);
          pcVar14 = (char *)0x0;
          if (lVar13 == 0) goto LAB_1013eca98;
        }
      }
      pcVar14 = (char *)func_0x000108a4a084();
LAB_1013eca98:
      *(char **)(pcVar11 + 0x10) = pcVar14;
      return pcVar14;
    }
    uVar12 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d3e8);
    uVar24 = extraout_x8;
  }
  ppuVar21 = (undefined8 **)&UNK_10b4d73f8;
  auVar44 = func_0x000108a07bdc(uVar12,uVar24);
  plVar10 = auVar44._8_8_;
  pcVar11 = auVar44._0_8_;
  uStack_2c8 = 0x1013ecae4;
  if (*(long *)(pcVar11 + 0x10) != 0) {
    return pcVar11;
  }
  uVar12 = plVar10[4];
  uVar24 = plVar10[1];
  pppuStack_2d0 = &ppuStack_270;
  if (uVar12 < uVar24) {
    if (*pcVar11 == '\x01') {
      uVar12 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d3e8);
      uVar24 = extraout_x8_00;
      goto LAB_1013ecc48;
    }
    puVar33 = (undefined8 *)(*plVar10 + uVar12 * 0x10);
    uVar9 = *puVar33;
    uVar23 = puVar33[1];
    unaff_x23 = *(char **)(pcVar11 + 8);
    if ((pcVar11[1] != '\x01') &&
       (lVar13 = FUN_100c34858(*(undefined8 *)unaff_x23,*(undefined8 *)(unaff_x23 + 8),
                               &UNK_108ca7635,1), lVar13 != 0)) {
LAB_1013ecc28:
      pcVar14 = (char *)func_0x000108a4a084();
LAB_1013ecc0c:
      *(char **)(pcVar11 + 0x10) = pcVar14;
      return pcVar14;
    }
    pcVar11[1] = '\x02';
    lVar13 = FUN_100c34858(*(undefined8 *)unaff_x23,*(undefined8 *)(unaff_x23 + 8),&UNK_108ca7632,1)
    ;
    if ((lVar13 != 0) ||
       ((lVar13 = func_0x0001006571a0(*(undefined8 *)unaff_x23,*(undefined8 *)(unaff_x23 + 8),uVar9,
                                      uVar23), lVar13 != 0 ||
        (lVar13 = FUN_100c34858(*(undefined8 *)unaff_x23,*(undefined8 *)(unaff_x23 + 8),
                                &UNK_108ca7632,1), lVar13 != 0)))) goto LAB_1013ecc28;
    param_6 = 1;
    lVar13 = FUN_100c34858(*(undefined8 *)unaff_x23,*(undefined8 *)(unaff_x23 + 8),&UNK_108ca7636);
    if (lVar13 != 0) goto LAB_1013ecc28;
    ppuVar2 = (undefined8 **)-(long)ppuVar21;
    if (-1 < (long)ppuVar21) {
      ppuVar2 = ppuVar21;
    }
    unaff_x21 = auStack_329 + 1;
    uVar12 = __ZN38__LT_u64_u20_as_u20_itoa__Unsigned_GT_3fmt17h24f06047e6494a0aE
                       (ppuVar2,auStack_329 + 1);
    uVar24 = uVar12;
    if (-1 < (long)ppuVar21) {
LAB_1013ecbf0:
      lVar13 = FUN_100c34858(*(undefined8 *)unaff_x23,*(undefined8 *)(unaff_x23 + 8),
                             unaff_x21 + uVar24,0x14 - uVar24);
      pcVar14 = (char *)0x0;
      if (lVar13 == 0) goto LAB_1013ecc0c;
      goto LAB_1013ecc28;
    }
    uVar24 = uVar12 - 1;
    unaff_x20 = ppuVar21;
    if (uVar24 < 0x14) {
      auStack_329[uVar12] = 0x2d;
      goto LAB_1013ecbf0;
    }
  }
  else {
LAB_1013ecc48:
    uVar24 = func_0x000108a07bdc(uVar12,uVar24,&UNK_10b4d73f8);
  }
  puVar20 = &UNK_10b2364b8;
  auVar44 = func_0x000108a07bdc(uVar24,0x14,&UNK_10b2364b8);
  plVar10 = auVar44._8_8_;
  pcVar11 = auVar44._0_8_;
  uStack_338 = 0x1013ecc68;
  if (*(long *)(pcVar11 + 0x10) != 0) {
    return pcVar11;
  }
  uVar12 = plVar10[4];
  uVar24 = plVar10[1];
  ppppuStack_340 = &pppuStack_2d0;
  if (uVar12 < uVar24) {
    if (*pcVar11 != '\x01') {
      puVar33 = (undefined8 *)(*plVar10 + uVar12 * 0x10);
      uVar9 = *puVar33;
      uVar23 = puVar33[1];
      puVar33 = *(undefined8 **)(pcVar11 + 8);
      if ((pcVar11[1] == '\x01') ||
         (lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7635,1), lVar13 == 0)) {
        pcVar11[1] = '\x02';
        lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7632,1);
        if ((lVar13 == 0) &&
           ((((lVar13 = func_0x0001006571a0(*puVar33,puVar33[1],uVar9,uVar23), lVar13 == 0 &&
              (lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7632,1), lVar13 == 0)) &&
             (lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7636,1), lVar13 == 0)) &&
            ((lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7632,1), lVar13 == 0 &&
             (lVar13 = func_0x0001006571a0(*puVar33,puVar33[1],puVar20,param_6), lVar13 == 0)))))) {
          lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7632,1);
          pcVar14 = (char *)0x0;
          if (lVar13 == 0) goto LAB_1013ecd8c;
        }
      }
      pcVar14 = (char *)func_0x000108a4a084();
LAB_1013ecd8c:
      *(char **)(pcVar11 + 0x10) = pcVar14;
      return pcVar14;
    }
    uVar12 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d3e8);
    uVar24 = extraout_x8_01;
  }
  puVar20 = &UNK_10b4d73f8;
  auVar44 = func_0x000108a07bdc(uVar12,uVar24,&UNK_10b4d73f8);
  plVar10 = auVar44._8_8_;
  pcVar11 = auVar44._0_8_;
  uStack_378 = 0x1013ecdcc;
  if (*(long *)(pcVar11 + 0x10) != 0) {
    return pcVar11;
  }
  uVar12 = plVar10[4];
  uVar24 = plVar10[1];
  pppppuStack_380 = &ppppuStack_340;
  if (uVar12 < uVar24) {
    if (*pcVar11 != '\x01') {
      puVar33 = (undefined8 *)(*plVar10 + uVar12 * 0x10);
      uVar9 = *puVar33;
      uVar23 = puVar33[1];
      puVar33 = *(undefined8 **)(pcVar11 + 8);
      if ((pcVar11[1] == '\x01') ||
         (lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7635,1), lVar13 == 0)) {
        pcVar11[1] = '\x02';
        lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7632,1);
        if ((lVar13 == 0) &&
           (((lVar13 = func_0x0001006571a0(*puVar33,puVar33[1],uVar9,uVar23), lVar13 == 0 &&
             (lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7632,1), lVar13 == 0)) &&
            (lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7636,1), lVar13 == 0)))) {
          lVar13 = __ZN38__LT_u64_u20_as_u20_itoa__Unsigned_GT_3fmt17h24f06047e6494a0aE
                             (puVar20,auStack_3d8);
          lVar13 = FUN_100c34858(*puVar33,puVar33[1],auStack_3d8 + lVar13,0x14 - lVar13);
          pcVar14 = (char *)0x0;
          if (lVar13 == 0) goto LAB_1013eced4;
        }
      }
      pcVar14 = (char *)func_0x000108a4a084();
LAB_1013eced4:
      *(char **)(pcVar11 + 0x10) = pcVar14;
      return pcVar14;
    }
    uVar12 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d3e8);
    uVar24 = extraout_x8_02;
  }
  uVar28 = 0;
  auVar44 = func_0x000108a07bdc(uVar12,uVar24);
  plVar10 = auVar44._8_8_;
  pcVar11 = auVar44._0_8_;
  uStack_3e8 = 0x1013ecf20;
  if (*(long *)(pcVar11 + 0x10) != 0) {
    return pcVar11;
  }
  uVar12 = plVar10[4];
  uVar24 = plVar10[1];
  ppppppuStack_3f0 = &pppppuStack_380;
  if (uVar12 < uVar24) {
    if (*pcVar11 != '\x01') {
      puVar33 = (undefined8 *)(*plVar10 + uVar12 * 0x10);
      uVar9 = *puVar33;
      uVar23 = puVar33[1];
      puVar33 = *(undefined8 **)(pcVar11 + 8);
      if ((pcVar11[1] == '\x01') ||
         (lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7635,1), lVar13 == 0)) {
        pcVar11[1] = '\x02';
        lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7632,1);
        if (((lVar13 == 0) &&
            ((lVar13 = func_0x0001006571a0(*puVar33,puVar33[1],uVar9,uVar23), lVar13 == 0 &&
             (lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7632,1), lVar13 == 0)))) &&
           (lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7636,1), lVar13 == 0)) {
          if ((uVar28 & 1) == 0) {
            puVar20 = &UNK_108ca1574;
            uVar9 = 5;
          }
          else {
            puVar20 = &UNK_108c78dd0;
            uVar9 = 4;
          }
          lVar13 = FUN_100c34858(*puVar33,puVar33[1],puVar20,uVar9);
          if (lVar13 == 0) {
            pcVar32 = (char *)0x0;
            pcVar14 = (char *)0x0;
            goto LAB_1013ed028;
          }
        }
      }
      pcVar32 = (char *)func_0x000108a4a084();
      plVar10 = *(long **)(pcVar11 + 0x10);
      pcVar14 = pcVar32;
      if (plVar10 != (long *)0x0) {
        if (*plVar10 == 1) {
          FUN_100de21d4(plVar10 + 1);
        }
        else if ((*plVar10 == 0) && (plVar10[2] != 0)) {
          _free(plVar10[1]);
        }
        pcVar14 = (char *)_free(plVar10);
      }
LAB_1013ed028:
      *(char **)(pcVar11 + 0x10) = pcVar32;
      return pcVar14;
    }
    uVar12 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d3e8);
    uVar24 = extraout_x8_03;
  }
  puVar20 = &UNK_10b4d73f8;
  puVar33 = (undefined8 *)func_0x000108a07bdc(uVar12,uVar24);
  _free(unaff_x21);
  *(undefined8 ***)(pcVar11 + 0x10) = unaff_x20;
  auVar44 = __Unwind_Resume(puVar33);
  plVar10 = auVar44._8_8_;
  pcVar11 = auVar44._0_8_;
  uStack_428 = 0x1013ed0c8;
  pppppppuVar39 = &pppppppuStack_430;
  if (*(long *)(pcVar11 + 0x10) != 0) {
    return pcVar11;
  }
  uVar24 = plVar10[4];
  puStack_4c0 = puVar20;
  uStack_4b8 = param_6;
  pppppppuStack_430 = &ppppppuStack_3f0;
  if (uVar24 < (ulong)plVar10[1]) {
    puVar34 = (undefined8 *)(*plVar10 + uVar24 * 0x10);
    unaff_x20 = (undefined8 **)*puVar34;
    unaff_x21 = (undefined1 *)puVar34[1];
    puStack_498 = &DAT_100c7a470;
    ppuStack_4a8 = &puStack_4a0;
    pcStack_4b0 = s__108b1bd74;
    if (*pcVar11 == '\x01') {
      puStack_4a0 = (undefined1 *)&puStack_4c0;
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d3e8);
    }
    else {
      puVar33 = *(undefined8 **)(pcVar11 + 8);
      puStack_4a0 = (undefined1 *)&puStack_4c0;
      if ((pcVar11[1] != '\x01') &&
         (puStack_4a0 = (undefined1 *)&puStack_4c0,
         lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7635,1), lVar13 != 0))
      goto LAB_1013ed28c;
      pcVar11[1] = '\x02';
      lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7632,1);
      if ((lVar13 != 0) ||
         (((lVar13 = func_0x0001006571a0(*puVar33,puVar33[1],unaff_x20,unaff_x21), lVar13 != 0 ||
           (lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7632,1), lVar13 != 0)) ||
          (lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7636,1), lVar13 != 0))))
      goto LAB_1013ed28c;
      ppcStack_490 = &pcStack_4b0;
      lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7632,1);
      if (lVar13 != 0) goto LAB_1013ed28c;
      puStack_480 = puVar33 + 2;
      unaff_x20 = &puStack_488;
      uStack_478 = 0;
      pppcStack_470 = &ppcStack_490;
      puStack_468 = &DAT_100c7bb54;
      puStack_488 = puVar33;
      iVar7 = __ZN4core3fmt5write17h64810b21425781ecE
                        (&puStack_488,&UNK_10b208d50,s__108b1bd74,&pppcStack_470);
      if (iVar7 == 0) {
        lVar13 = FUN_100c34858(*puVar33,puVar33[1],&UNK_108ca7632,1);
        if (lVar13 == 0) {
          pcVar14 = (char *)0x0;
        }
        else {
          pcVar14 = (char *)func_0x000108a4a084();
        }
        pcVar32 = pcVar14;
        if ((uStack_478 & 3) == 1) {
          puVar33 = (undefined8 *)(uStack_478 - 1);
          uVar9 = *puVar33;
          puVar34 = *(undefined8 **)(uStack_478 + 7);
          pcVar25 = (code *)*puVar34;
          if (pcVar25 != (code *)0x0) {
            (*pcVar25)(uVar9);
          }
          if (puVar34[1] != 0) {
            _free(uVar9);
          }
          pcVar32 = (char *)_free(puVar33);
        }
        *(char **)(pcVar11 + 0x10) = pcVar14;
        return pcVar32;
      }
    }
    if (uStack_478 != 0) {
LAB_1013ed28c:
      pcVar14 = (char *)func_0x000108a4a084();
      *(char **)(pcVar11 + 0x10) = pcVar14;
      return pcVar14;
    }
  }
  else {
    func_0x000108a07bdc(uVar24,plVar10[1],&UNK_10b4d73f8);
  }
  puVar20 = &UNK_10b208d38;
  uVar9 = func_0x000108a079f0(&UNK_108ca1016,0x18);
  if (*(long *)(unaff_x23 + 8) != 0) {
    _free(puVar33);
  }
  _free(unaff_x20);
  puVar15 = (undefined *)__Unwind_Resume(uVar9);
  if (uStack_478 != 0) {
    FUN_100de21d4(unaff_x20 + 2);
  }
  __Unwind_Resume(puVar15);
  uVar9 = 0x1013ed350;
  auVar44 = func_0x000108a07bc4();
  ppuVar5 = &puStack_4c0;
SUB_1013ed350:
  puVar22 = puVar20;
  puVar19 = auVar44._8_8_;
  pcVar11 = auVar44._0_8_;
  *(long *)((long)ppuVar5 + -0x60) = unaff_x28;
  *(long *)((long)ppuVar5 + -0x58) = unaff_x27;
  *(undefined **)((long)ppuVar5 + -0x50) = unaff_x26;
  *(ulong *)((long)ppuVar5 + -0x48) = unaff_x25;
  *(ulong *)((long)ppuVar5 + -0x40) = unaff_x24;
  *(char **)((long)ppuVar5 + -0x38) = unaff_x23;
  *(undefined8 **)((long)ppuVar5 + -0x30) = puVar33;
  *(undefined1 **)((long)ppuVar5 + -0x28) = unaff_x21;
  *(undefined8 ***)((long)ppuVar5 + -0x20) = unaff_x20;
  *(undefined **)((long)ppuVar5 + -0x18) = puVar15;
  *(undefined8 ********)((long)ppuVar5 + -0x10) = pppppppuVar39;
  *(undefined8 *)((long)ppuVar5 + -8) = uVar9;
  pppppppuVar39 = (undefined8 *******)((long)ppuVar5 + -0x10);
  *(char **)((long)ppuVar5 + -0xe8) = pcVar11;
  if (puVar22 == (undefined *)0x0) {
    *(undefined8 *)((long)ppuVar5 + -200) = 0;
    *(undefined8 *)((long)ppuVar5 + -0xc0) = 8;
LAB_1013ed50c:
    uVar9 = *(undefined8 *)((long)ppuVar5 + -200);
    puVar33 = *(undefined8 **)((long)ppuVar5 + -0xe8);
    puVar33[1] = *(undefined8 *)((long)ppuVar5 + -0xc0);
    *puVar33 = uVar9;
    puVar33[2] = puVar22;
    return pcVar11;
  }
  puVar33 = (undefined8 *)((long)puVar22 * 0x48);
  puVar20 = puVar22;
  pcVar14 = (char *)_malloc(puVar33);
  if (pcVar14 != (char *)0x0) {
    unaff_x28 = 0;
    unaff_x27 = 0;
    *(undefined **)((long)ppuVar5 + -200) = puVar22;
    *(char **)((long)ppuVar5 + -0xc0) = pcVar14;
    unaff_x20 = (undefined8 **)0x5;
    pcVar11 = pcVar14;
    uVar24 = extraout_x8_04;
    do {
      unaff_x26 = (undefined *)((long)ppuVar5 + -0x98);
      if ((long)puVar33 - unaff_x28 == 0) goto LAB_1013ed50c;
      uVar28 = *(ulong *)(puVar19 + unaff_x28);
      uVar12 = uVar28 ^ 0x8000000000000000;
      if (-1 < (long)uVar28) {
        uVar12 = 5;
      }
      if ((long)uVar12 < 3) {
        if (uVar12 != 0) {
          unaff_x24 = *(ulong *)(puVar19 + unaff_x28 + 8);
          unaff_x25 = *(ulong *)(puVar19 + unaff_x28 + 0x10);
          uVar24 = *(ulong *)(puVar19 + unaff_x28 + 0x18);
          uVar9 = *(undefined8 *)(puVar19 + unaff_x28 + 0x20);
          *(undefined8 *)((long)ppuVar5 + -0xa8) = *(undefined8 *)(puVar19 + unaff_x28 + 0x28);
          *(undefined8 *)((long)ppuVar5 + -0xb0) = uVar9;
          *(undefined8 *)((long)ppuVar5 + -0xa0) = *(undefined8 *)(puVar19 + unaff_x28 + 0x30);
          goto LAB_1013ed4d4;
        }
        uVar28 = 0x8000000000000000;
      }
      else if (uVar12 == 3) {
        *(ulong *)((long)ppuVar5 + -0xd8) = uVar42;
        *(ulong *)((long)ppuVar5 + -0xe0) = uVar29;
        uVar9 = *(undefined8 *)(puVar19 + unaff_x28 + 0x10);
        uVar24 = *(ulong *)(puVar19 + unaff_x28 + 0x18);
        if (uVar24 == 0) {
          unaff_x25 = 1;
        }
        else {
          unaff_x25 = _malloc(uVar24);
          if (unaff_x25 == 0) {
            func_0x0001087c9084(1,uVar24);
                    /* WARNING: Does not return */
            pcVar25 = (code *)SoftwareBreakpoint(1,0x1013ed54c);
            (*pcVar25)();
          }
        }
        pcVar11 = (char *)_memcpy(unaff_x25,uVar9,uVar24);
        uVar28 = 0x8000000000000003;
        uVar42 = *(ulong *)((long)ppuVar5 + -0xd8);
        uVar29 = *(ulong *)((long)ppuVar5 + -0xe0);
        unaff_x24 = uVar24;
      }
      else {
        if (uVar12 == 4) goto code_r0x0001013ed43c;
        *(undefined8 *)((long)ppuVar5 + -0x78) = 0;
        *(undefined **)((long)ppuVar5 + -0x80) = &UNK_108c56c70;
        *(undefined8 *)((long)ppuVar5 + -0x68) = 0;
        *(undefined8 *)((long)ppuVar5 + -0x70) = 0;
        *(undefined8 *)((long)ppuVar5 + -0x98) = 0;
        *(undefined8 *)((long)ppuVar5 + -0x90) = 8;
        *(undefined8 *)((long)ppuVar5 + -0x88) = 0;
        pcVar11 = (char *)FUN_1011a27dc((undefined1 *)((long)ppuVar5 + -0x98),puVar19 + unaff_x28);
        uVar28 = *(ulong *)((long)ppuVar5 + -0x98);
        unaff_x24 = *(ulong *)((long)ppuVar5 + -0x90);
        unaff_x25 = *(ulong *)((long)ppuVar5 + -0x88);
        uVar24 = *(ulong *)((long)ppuVar5 + -0x80);
        *(undefined8 *)((long)ppuVar5 + -0xa8) = *(undefined8 *)((long)ppuVar5 + -0x70);
        *(undefined8 *)((long)ppuVar5 + -0xb0) = *(undefined8 *)((long)ppuVar5 + -0x78);
        *(undefined8 *)((long)ppuVar5 + -0xa0) = *(undefined8 *)((long)ppuVar5 + -0x68);
LAB_1013ed4d4:
        uVar42 = *(ulong *)(puVar19 + unaff_x28 + 0x40);
        uVar29 = *(ulong *)(puVar19 + unaff_x28 + 0x38);
      }
      puVar1 = (ulong *)(pcVar14 + unaff_x28);
      *puVar1 = uVar28;
      puVar1[1] = unaff_x24;
      puVar1[2] = unaff_x25;
      puVar1[3] = uVar24;
      uVar12 = *(ulong *)((long)ppuVar5 + -0xb0);
      puVar1[5] = *(ulong *)((long)ppuVar5 + -0xa8);
      puVar1[4] = uVar12;
      puVar1[6] = *(ulong *)((long)ppuVar5 + -0xa0);
      puVar1[8] = uVar42;
      puVar1[7] = uVar29;
      unaff_x28 = unaff_x28 + 0x48;
      unaff_x27 = unaff_x27 + 1;
      if ((long)puVar33 - unaff_x28 == 0) goto LAB_1013ed50c;
    } while( true );
  }
  uVar9 = func_0x0001087c9084(8,puVar33);
  *(long *)((long)ppuVar5 + -0xb8) = unaff_x27;
  FUN_100e238ac((undefined1 *)((long)ppuVar5 + -200));
  __Unwind_Resume(uVar9);
  func_0x000108a07bc4();
  auVar44 = func_0x000108a07bc4();
  puVar34 = auVar44._0_8_;
  *(undefined8 **)((long)ppuVar5 + -0x120) = puVar33;
  *(undefined1 **)((long)ppuVar5 + -0x118) = puVar19;
  *(undefined8 ***)((long)ppuVar5 + -0x110) = unaff_x20;
  *(undefined8 *)((long)ppuVar5 + -0x108) = uVar9;
  *(undefined8 ********)((long)ppuVar5 + -0x100) = pppppppuVar39;
  *(undefined8 *)((long)ppuVar5 + -0xf8) = 0x1013ed58c;
  puVar15 = puVar20;
  lVar13 = _malloc(puVar20);
  if (lVar13 != 0) {
    *puVar34 = puVar20;
    puVar34[1] = lVar13;
    pcVar11 = (char *)_memcpy(lVar13,auVar44._8_8_,puVar20);
    puVar34[2] = puVar20;
    return pcVar11;
  }
  auVar45 = func_0x0001087c9084(1,puVar20);
  lVar13 = auVar45._8_8_;
  pcVar11 = auVar45._0_8_;
  *(long *)((long)ppuVar5 + -0x180) = unaff_x28;
  *(long *)((long)ppuVar5 + -0x178) = unaff_x27;
  *(undefined **)((long)ppuVar5 + -0x170) = unaff_x26;
  *(ulong *)((long)ppuVar5 + -0x168) = unaff_x25;
  *(ulong *)((long)ppuVar5 + -0x160) = unaff_x24;
  *(char **)((long)ppuVar5 + -0x158) = unaff_x23;
  *(undefined8 **)((long)ppuVar5 + -0x150) = puVar33;
  *(long *)((long)ppuVar5 + -0x148) = auVar44._8_8_;
  *(undefined8 **)((long)ppuVar5 + -0x140) = puVar34;
  *(undefined **)((long)ppuVar5 + -0x138) = puVar20;
  *(undefined1 **)((long)ppuVar5 + -0x130) = (undefined1 *)((long)ppuVar5 + -0x100);
  *(undefined8 *)((long)ppuVar5 + -0x128) = 0x1013ed5e4;
  *(char **)((long)ppuVar5 + -0x1e0) = pcVar11;
  *(undefined **)((long)ppuVar5 + -0x1d8) = puVar15;
  if (puVar15 == (undefined *)0x0) {
    *(undefined8 *)((long)ppuVar5 + -0x1b0) = 0;
    *(undefined8 *)((long)ppuVar5 + -0x1a8) = 8;
    goto LAB_1013ed838;
  }
  lVar36 = (long)puVar15 * 0x38;
  puVar20 = puVar15;
  pcVar11 = (char *)_malloc(lVar36);
  if (pcVar11 != (char *)0x0) {
    lVar30 = 0;
    *(undefined **)((long)ppuVar5 + -0x1b0) = puVar15;
    *(char **)((long)ppuVar5 + -0x1a8) = pcVar11;
    *(long *)((long)ppuVar5 + -0x1d0) = lVar13;
    *(long *)((long)ppuVar5 + -0x1c8) = lVar36;
    *(char **)((long)ppuVar5 + -0x1c0) = pcVar11;
    uVar29 = extraout_x9;
    goto LAB_1013ed688;
  }
  uVar9 = func_0x0001087c9084(8,lVar36);
  *(undefined8 **)((long)ppuVar5 + -0x1a0) = puVar34;
  FUN_100e4a774((undefined1 *)((long)ppuVar5 + -0x1b0));
  auVar44 = __Unwind_Resume(uVar9);
  lVar30 = auVar44._8_8_;
  pcVar11 = auVar44._0_8_;
  *(long *)((long)ppuVar5 + -0x240) = lVar36;
  *(long *)((long)ppuVar5 + -0x238) = unaff_x27;
  *(undefined **)((long)ppuVar5 + -0x230) = unaff_x26;
  *(ulong *)((long)ppuVar5 + -0x228) = unaff_x25;
  *(ulong *)((long)ppuVar5 + -0x220) = unaff_x24;
  *(char **)((long)ppuVar5 + -0x218) = unaff_x23;
  *(long *)((long)ppuVar5 + -0x210) = lVar13;
  *(undefined **)((long)ppuVar5 + -0x208) = puVar15;
  *(undefined8 **)((long)ppuVar5 + -0x200) = puVar34;
  *(undefined8 *)((long)ppuVar5 + -0x1f8) = uVar9;
  *(undefined1 **)((long)ppuVar5 + -0x1f0) = (undefined1 *)((long)ppuVar5 + -0x130);
  *(undefined8 *)((long)ppuVar5 + -0x1e8) = 0x1013ed8fc;
  if (puVar20 == (undefined *)0x0) {
    *(undefined8 *)((long)ppuVar5 + -600) = 0;
    *(undefined8 *)((long)ppuVar5 + -0x250) = 8;
    pcVar14 = pcVar11;
    goto LAB_1013ed9b0;
  }
  lVar13 = (long)puVar20 * 0x18;
  puVar15 = puVar20;
  pcVar14 = (char *)_malloc(lVar13);
  if (pcVar14 != (char *)0x0) {
    *(undefined **)((long)ppuVar5 + -600) = puVar20;
    *(char **)((long)ppuVar5 + -0x250) = pcVar14;
    plVar10 = (long *)(pcVar14 + 0x10);
    goto LAB_1013ed97c;
  }
  uVar9 = func_0x0001087c9084(8,lVar13);
  *(undefined **)((long)ppuVar5 + -0x248) = unaff_x26;
  FUN_100e582c8((undefined1 *)((long)ppuVar5 + -600));
  auVar44 = __Unwind_Resume(uVar9);
  pcVar14 = auVar44._0_8_;
  *(long *)((long)ppuVar5 + -0x2c0) = lVar36;
  *(long *)((long)ppuVar5 + -0x2b8) = unaff_x27;
  *(undefined **)((long)ppuVar5 + -0x2b0) = unaff_x26;
  *(ulong *)((long)ppuVar5 + -0x2a8) = unaff_x25;
  *(ulong *)((long)ppuVar5 + -0x2a0) = unaff_x24;
  *(char **)((long)ppuVar5 + -0x298) = unaff_x23;
  *(long *)((long)ppuVar5 + -0x290) = lVar13;
  *(long *)((long)ppuVar5 + -0x288) = lVar30;
  *(char **)((long)ppuVar5 + -0x280) = pcVar11;
  *(undefined8 *)((long)ppuVar5 + -0x278) = uVar9;
  *(undefined1 **)((long)ppuVar5 + -0x270) = (undefined1 *)((long)ppuVar5 + -0x1f0);
  *(undefined8 *)((long)ppuVar5 + -0x268) = 0x1013eda00;
  *(undefined **)((long)ppuVar5 + -0x368) = puVar15;
  *(long *)((long)ppuVar5 + -0x360) = auVar44._8_8_;
  *(char **)((long)ppuVar5 + -0x370) = pcVar14;
  if (puVar15 == (undefined *)0x0) {
    *(undefined8 *)((long)ppuVar5 + -0x348) = 0;
    *(undefined8 *)((long)ppuVar5 + -0x340) = 8;
    goto LAB_1013edba8;
  }
  lVar17 = (long)puVar15 << 7;
  puVar20 = puVar15;
  pcVar14 = (char *)_malloc(lVar17);
  if (pcVar14 != (char *)0x0) {
    lVar30 = 0;
    *(undefined **)((long)ppuVar5 + -0x348) = puVar15;
    *(char **)((long)ppuVar5 + -0x340) = pcVar14;
    lVar36 = *(long *)((long)ppuVar5 + -0x360);
    *(char **)((long)ppuVar5 + -0x358) = pcVar14;
    *(long *)((long)ppuVar5 + -0x350) = lVar17;
    goto LAB_1013eda54;
  }
  uVar9 = func_0x0001087c9084(8,lVar17);
  if (unaff_x26 != (undefined *)0x0) {
    _free(unaff_x27);
  }
  if (puVar15 != (undefined *)0x0) {
    _free(lVar30);
  }
  *(ulong *)((long)ppuVar5 + -0x338) = unaff_x24;
  FUN_100e4a54c((undefined1 *)((long)ppuVar5 + -0x348));
  auVar44 = __Unwind_Resume(uVar9);
  lVar17 = auVar44._8_8_;
  pcVar11 = auVar44._0_8_;
  *(long *)((long)ppuVar5 + -0x3d0) = lVar36;
  *(long *)((long)ppuVar5 + -0x3c8) = unaff_x27;
  *(undefined **)((long)ppuVar5 + -0x3c0) = unaff_x26;
  *(ulong *)((long)ppuVar5 + -0x3b8) = unaff_x25;
  *(ulong *)((long)ppuVar5 + -0x3b0) = unaff_x24;
  *(char **)((long)ppuVar5 + -0x3a8) = unaff_x23;
  *(long *)((long)ppuVar5 + -0x3a0) = lVar13;
  *(long *)((long)ppuVar5 + -0x398) = lVar30;
  *(undefined8 *)((long)ppuVar5 + -0x390) = uVar9;
  *(undefined **)((long)ppuVar5 + -0x388) = puVar15;
  *(undefined1 **)((long)ppuVar5 + -0x380) = (undefined1 *)((long)ppuVar5 + -0x270);
  *(undefined8 *)((long)ppuVar5 + -0x378) = 0x1013edc8c;
  if (puVar20 == (undefined *)0x0) {
    *(undefined8 *)((long)ppuVar5 + -0x450) = 0;
    *(undefined8 *)((long)ppuVar5 + -0x448) = 8;
    pcVar14 = pcVar11;
    goto LAB_1013edd7c;
  }
  lVar30 = (long)puVar20 * 0x68;
  puVar15 = puVar20;
  pcVar14 = (char *)_malloc(lVar30);
  if (pcVar14 != (char *)0x0) {
    *(undefined **)((long)ppuVar5 + -0x450) = puVar20;
    *(char **)((long)ppuVar5 + -0x448) = pcVar14;
    lVar13 = (long)puVar20 * 0x68;
    pcVar32 = pcVar14;
    goto LAB_1013edce8;
  }
  uVar9 = func_0x0001087c9084(8,lVar30);
  *(undefined **)((long)ppuVar5 + -0x440) = unaff_x26;
  FUN_100e76384((undefined1 *)((long)ppuVar5 + -0x450));
  __Unwind_Resume(uVar9);
  auVar44 = func_0x000108a07bc4();
  pbVar38 = auVar44._8_8_;
  pcVar14 = auVar44._0_8_;
  *(long *)((long)ppuVar5 + -0x4b0) = lVar36;
  *(long *)((long)ppuVar5 + -0x4a8) = unaff_x27;
  *(undefined **)((long)ppuVar5 + -0x4a0) = unaff_x26;
  *(ulong *)((long)ppuVar5 + -0x498) = unaff_x25;
  *(ulong *)((long)ppuVar5 + -0x490) = unaff_x24;
  *(long *)((long)ppuVar5 + -0x488) = lVar30;
  *(long *)((long)ppuVar5 + -0x480) = lVar13;
  *(long *)((long)ppuVar5 + -0x478) = lVar17;
  *(char **)((long)ppuVar5 + -0x470) = pcVar11;
  *(undefined8 *)((long)ppuVar5 + -0x468) = uVar9;
  *(undefined1 **)((long)ppuVar5 + -0x460) = (undefined1 *)((long)ppuVar5 + -0x380);
  *(undefined8 *)((long)ppuVar5 + -0x458) = 0x1013eddf8;
  *(char **)((long)ppuVar5 + -0x538) = pcVar14;
  *(undefined **)((long)ppuVar5 + -0x530) = puVar15;
  if (puVar15 == (undefined *)0x0) {
    *(undefined8 *)((long)ppuVar5 + -0x4e0) = 0;
    *(undefined8 *)((long)ppuVar5 + -0x4d8) = 8;
    goto LAB_1013ee158;
  }
  lVar36 = (long)puVar15 * 0x38;
  pcVar14 = (char *)_malloc(lVar36);
  if (pcVar14 == (char *)0x0) {
    uVar9 = func_0x0001087c9084(8,lVar36);
    if (*(long *)((long)ppuVar5 + -0x518) != 0) {
      _free(*(undefined8 *)((long)ppuVar5 + -0x4f8));
    }
    *(undefined8 *)((long)ppuVar5 + -0x4d0) = *(undefined8 *)((long)ppuVar5 + -0x510);
    FUN_100c96358((undefined1 *)((long)ppuVar5 + -0x4e0));
    auVar44 = __Unwind_Resume(uVar9);
    puVar33 = auVar44._8_8_;
    *(undefined **)((long)ppuVar5 + -0x560) = puVar15;
    *(long *)((long)ppuVar5 + -0x558) = lVar36;
    *(undefined1 **)((long)ppuVar5 + -0x550) = (undefined1 *)((long)ppuVar5 + -0x460);
    *(undefined8 *)((long)ppuVar5 + -0x548) = 0x1013ee274;
    *(long *)((long)ppuVar5 + -0x578) = auVar44._0_8_ + 0x18;
    uVar6 = (**(code **)(puVar33[1] + 0x18))(*puVar33,&UNK_108cd5475,7);
    *(undefined8 **)((long)ppuVar5 + -0x570) = puVar33;
    *(undefined1 *)((long)ppuVar5 + -0x568) = uVar6;
    *(undefined1 *)((long)ppuVar5 + -0x567) = 0;
    __ZN4core3fmt8builders11DebugStruct5field17h58caabf81ace0911E
              ((undefined1 *)((long)ppuVar5 + -0x570),&UNK_108cde3c8,4,auVar44._0_8_,&UNK_10b24c620)
    ;
    __ZN4core3fmt8builders11DebugStruct5field17h58caabf81ace0911E
              ((undefined1 *)((long)ppuVar5 + -0x570),&UNK_108cb1c0b,6,
               (undefined1 *)((long)ppuVar5 + -0x578),&UNK_10b24c640);
    uVar8 = (uint)(*(byte *)((long)ppuVar5 + -0x567) | *(byte *)((long)ppuVar5 + -0x568));
    if ((*(byte *)((long)ppuVar5 + -0x567) == 1) && ((*(byte *)((long)ppuVar5 + -0x568) & 1) == 0))
    {
      puVar33 = *(undefined8 **)((long)ppuVar5 + -0x570);
      if (*(char *)((long)puVar33 + 0x12) < '\0') {
        uVar9 = *puVar33;
        pcVar25 = *(code **)(puVar33[1] + 0x18);
        puVar20 = &UNK_108f5894b;
        uVar23 = 1;
      }
      else {
        uVar9 = *puVar33;
        pcVar25 = *(code **)(puVar33[1] + 0x18);
        puVar20 = &UNK_108f5894c;
        uVar23 = 2;
      }
      uVar8 = (*pcVar25)(uVar9,puVar20,uVar23);
    }
    return (char *)(ulong)(uVar8 & 1);
  }
  lVar36 = 0;
  *(undefined **)((long)ppuVar5 + -0x4e0) = puVar15;
  *(char **)((long)ppuVar5 + -0x4d8) = pcVar14;
  *(byte **)((long)ppuVar5 + -0x508) = pbVar38 + (long)puVar15 * 0x38;
  *(char **)((long)ppuVar5 + -0x540) = pcVar14;
  lVar30 = extraout_x11;
  pcVar11 = pcVar14;
  goto LAB_1013edeb0;
code_r0x0001013ed43c:
  *(ulong *)((long)ppuVar5 + -0xd8) = uVar42;
  *(ulong *)((long)ppuVar5 + -0xe0) = uVar29;
  auVar44._8_8_ = *(undefined8 *)(puVar19 + unaff_x28 + 0x10);
  auVar44._0_8_ = (undefined1 *)((long)ppuVar5 + -0x98);
  uVar9 = 0x1013ed450;
  ppuVar5 = (undefined **)((long)ppuVar5 + -0xf0);
  puVar20 = *(undefined **)(puVar19 + unaff_x28 + 0x18);
  puVar15 = puVar22;
  unaff_x21 = puVar19;
  unaff_x23 = pcVar14;
  goto SUB_1013ed350;
LAB_1013ed688:
  do {
    if (lVar36 == lVar30) break;
    bVar4 = *(byte *)(lVar13 + lVar30);
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        uVar9 = *(undefined8 *)(lVar13 + lVar30 + 0x10);
        lVar17 = *(long *)(lVar13 + lVar30 + 0x18);
        if (lVar17 == 0) goto LAB_1013ed640;
        lVar16 = _malloc(lVar17);
        if (lVar16 != 0) goto LAB_1013ed644;
LAB_1013ed868:
        func_0x0001087c9084(1,lVar17);
LAB_1013ed8a4:
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1013ed8a8);
        (*pcVar25)();
      }
      *(int *)((long)ppuVar5 + -0x1b4) = (int)uVar29;
      lVar26 = lVar13 + lVar30;
      uVar9 = *(undefined8 *)(lVar26 + 0x10);
      lVar17 = *(long *)(lVar26 + 0x18);
      if (lVar17 == 0) {
        lVar16 = 1;
      }
      else {
        lVar16 = _malloc(lVar17);
        if (lVar16 == 0) goto LAB_1013ed868;
      }
      _memcpy(lVar16,uVar9,lVar17);
      pcVar11 = (char *)FUN_10114b9b4((undefined1 *)((long)ppuVar5 + -0x198),
                                      *(undefined8 *)(lVar26 + 0x28),*(undefined8 *)(lVar26 + 0x30))
      ;
      puVar15 = *(undefined **)((long)ppuVar5 + -0x198);
      unaff_x27 = *(long *)((long)ppuVar5 + -400);
      unaff_x26 = *(undefined **)((long)ppuVar5 + -0x188);
LAB_1013ed824:
      lVar26 = *(long *)((long)ppuVar5 + -0x1c0);
      uVar29 = (ulong)*(uint *)((long)ppuVar5 + -0x1b4);
    }
    else {
      if (bVar4 != 2) {
        *(int *)((long)ppuVar5 + -0x1b4) = (int)uVar29;
        lVar36 = lVar13 + lVar30;
        if (bVar4 == 3) {
          uVar9 = *(undefined8 *)(lVar36 + 0x10);
          lVar17 = *(long *)(lVar36 + 0x18);
          if (lVar17 == 0) {
            lVar16 = 1;
            _memcpy(1,uVar9,0);
            uVar9 = *(undefined8 *)(lVar36 + 0x28);
            puVar15 = *(undefined **)(lVar36 + 0x30);
          }
          else {
            lVar16 = _malloc(lVar17);
            if (lVar16 == 0) goto LAB_1013ed868;
            _memcpy(lVar16,uVar9,lVar17);
            uVar9 = *(undefined8 *)(lVar36 + 0x28);
            puVar15 = *(undefined **)(lVar36 + 0x30);
          }
          if (puVar15 == (undefined *)0x0) {
LAB_1013ed7dc:
            unaff_x27 = 1;
          }
          else {
            unaff_x27 = _malloc(puVar15);
            if (unaff_x27 == 0) {
              func_0x0001087c9084(1,puVar15);
              goto LAB_1013ed8a4;
            }
          }
        }
        else {
          uVar9 = *(undefined8 *)(lVar36 + 0x10);
          lVar17 = *(long *)(lVar36 + 0x18);
          if (lVar17 == 0) {
            lVar16 = 1;
            _memcpy(1,uVar9,0);
            uVar9 = *(undefined8 *)(lVar36 + 0x28);
            puVar15 = *(undefined **)(lVar36 + 0x30);
          }
          else {
            lVar16 = _malloc(lVar17);
            if (lVar16 == 0) goto LAB_1013ed868;
            _memcpy(lVar16,uVar9,lVar17);
            uVar9 = *(undefined8 *)(lVar36 + 0x28);
            puVar15 = *(undefined **)(lVar36 + 0x30);
          }
          if (puVar15 == (undefined *)0x0) goto LAB_1013ed7dc;
          unaff_x27 = _malloc(puVar15);
          if (unaff_x27 == 0) {
            func_0x0001087c9084(1,puVar15);
            goto LAB_1013ed8a4;
          }
        }
        pcVar11 = (char *)_memcpy(unaff_x27,uVar9,puVar15);
        lVar36 = *(long *)((long)ppuVar5 + -0x1c8);
        unaff_x26 = puVar15;
        goto LAB_1013ed824;
      }
      uVar9 = *(undefined8 *)(lVar13 + lVar30 + 0x10);
      lVar17 = *(long *)(lVar13 + lVar30 + 0x18);
      if (lVar17 == 0) {
LAB_1013ed640:
        lVar16 = 1;
      }
      else {
        lVar16 = _malloc(lVar17);
        if (lVar16 == 0) {
          func_0x0001087c9084(1,lVar17);
          goto LAB_1013ed8a4;
        }
      }
LAB_1013ed644:
      pcVar11 = (char *)_memcpy(lVar16,uVar9,lVar17);
      uVar29 = (ulong)*(byte *)(lVar13 + lVar30 + 1);
      lVar13 = *(long *)((long)ppuVar5 + -0x1d0);
      lVar36 = *(long *)((long)ppuVar5 + -0x1c8);
      lVar26 = *(long *)((long)ppuVar5 + -0x1c0);
    }
    pbVar38 = (byte *)(lVar26 + lVar30);
    *pbVar38 = bVar4;
    pbVar38[1] = (byte)uVar29;
    *(long *)(pbVar38 + 8) = lVar17;
    *(long *)(pbVar38 + 0x10) = lVar16;
    *(long *)(pbVar38 + 0x18) = lVar17;
    *(undefined **)(pbVar38 + 0x20) = puVar15;
    lVar30 = lVar30 + 0x38;
    *(long *)(pbVar38 + 0x28) = unaff_x27;
    *(undefined **)(pbVar38 + 0x30) = unaff_x26;
  } while (lVar36 != lVar30);
LAB_1013ed838:
  uVar23 = *(undefined8 *)((long)ppuVar5 + -0x1b0);
  puVar33 = *(undefined8 **)((long)ppuVar5 + -0x1e0);
  uVar9 = *(undefined8 *)((long)ppuVar5 + -0x1d8);
  puVar33[1] = *(undefined8 *)((long)ppuVar5 + -0x1a8);
  *puVar33 = uVar23;
  puVar33[2] = uVar9;
  return pcVar11;
  while( true ) {
    uVar9 = *(undefined8 *)(lVar30 + 8);
    lVar36 = *(long *)(lVar30 + 0x10);
    if (lVar36 == 0) {
      lVar17 = 1;
    }
    else {
      lVar17 = _malloc(lVar36);
      if (lVar17 == 0) {
        func_0x0001087c9084(1,lVar36);
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1013ed9a8);
        (*pcVar25)();
      }
    }
    lVar30 = lVar30 + 0x18;
    pcVar14 = (char *)_memcpy(lVar17,uVar9,lVar36);
    plVar10[-2] = lVar36;
    plVar10[-1] = lVar17;
    *plVar10 = lVar36;
    lVar13 = lVar13 + -0x18;
    plVar10 = plVar10 + 3;
    if (lVar13 == 0) break;
LAB_1013ed97c:
    if (lVar13 == 0) break;
  }
LAB_1013ed9b0:
  uVar9 = *(undefined8 *)((long)ppuVar5 + -600);
  *(undefined8 *)(pcVar11 + 8) = *(undefined8 *)((long)ppuVar5 + -0x250);
  *(undefined8 *)pcVar11 = uVar9;
  *(undefined **)(pcVar11 + 0x10) = puVar20;
  return pcVar14;
LAB_1013eda54:
  do {
    if (lVar17 == lVar30) break;
    uVar9 = *(undefined8 *)(lVar36 + 8);
    lVar17 = *(long *)(lVar36 + 0x10);
    if (lVar17 == 0) {
      lVar26 = 1;
      _memcpy(1,uVar9,0);
      uVar9 = *(undefined8 *)(lVar36 + 0x20);
      lVar16 = *(long *)(lVar36 + 0x28);
      if (lVar16 != 0) goto LAB_1013eda88;
LAB_1013edab8:
      lVar18 = 1;
    }
    else {
      lVar26 = _malloc(lVar17);
      if (lVar26 == 0) {
        func_0x0001087c9084(1,lVar17);
        goto LAB_1013edc04;
      }
      _memcpy(lVar26,uVar9,lVar17);
      uVar9 = *(undefined8 *)(lVar36 + 0x20);
      lVar16 = *(long *)(lVar36 + 0x28);
      if (lVar16 == 0) goto LAB_1013edab8;
LAB_1013eda88:
      lVar18 = _malloc(lVar16);
      if (lVar18 == 0) {
        func_0x0001087c9084(1,lVar16);
        goto LAB_1013edc04;
      }
    }
    _memcpy(lVar18,uVar9,lVar16);
    lVar37 = -0x8000000000000000;
    if (*(long *)(lVar36 + 0x60) != -0x8000000000000000) {
      uVar9 = *(undefined8 *)(*(long *)((long)ppuVar5 + -0x360) + lVar30 + 0x68);
      lVar37 = *(long *)(*(long *)((long)ppuVar5 + -0x360) + lVar30 + 0x70);
      if (lVar37 == 0) {
        lVar13 = 1;
      }
      else {
        lVar13 = _malloc(lVar37);
        if (lVar13 == 0) {
          func_0x0001087c9084(1,lVar37);
LAB_1013edc04:
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(1,0x1013edc08);
          (*pcVar25)();
        }
      }
      _memcpy(lVar13,uVar9,lVar37);
    }
    uVar6 = *(undefined1 *)(lVar36 + 0x78);
    FUN_101146714((undefined1 *)((long)ppuVar5 + -0x2f8),*(undefined8 *)(lVar36 + 0x38),
                  *(undefined8 *)(lVar36 + 0x40));
    FUN_101144fc8((undefined1 *)((long)ppuVar5 + -0x2e0),*(undefined8 *)(lVar36 + 0x50),
                  *(undefined8 *)(lVar36 + 0x58));
    lVar36 = lVar36 + 0x80;
    lVar41 = *(long *)((long)ppuVar5 + -0x2f0);
    lVar40 = *(long *)((long)ppuVar5 + -0x2f8);
    *(long *)((long)ppuVar5 + -0x308) = lVar41;
    *(long *)((long)ppuVar5 + -0x310) = lVar40;
    lVar27 = *(long *)((long)ppuVar5 + -0x2e8);
    *(long *)((long)ppuVar5 + -0x300) = lVar27;
    *(undefined8 *)((long)ppuVar5 + -0x328) = *(undefined8 *)((long)ppuVar5 + -0x2d8);
    *(undefined8 *)((long)ppuVar5 + -0x330) = *(undefined8 *)((long)ppuVar5 + -0x2e0);
    *(undefined8 *)((long)ppuVar5 + -800) = *(undefined8 *)((long)ppuVar5 + -0x2d0);
    pcVar14 = *(char **)((long)ppuVar5 + -0x358);
    plVar10 = (long *)(pcVar14 + lVar30);
    *plVar10 = lVar17;
    plVar10[1] = lVar26;
    plVar10[2] = lVar17;
    plVar10[3] = lVar16;
    plVar10[4] = lVar18;
    plVar10[5] = lVar16;
    plVar10[7] = lVar41;
    plVar10[6] = lVar40;
    plVar10[8] = lVar27;
    lVar17 = *(long *)((long)ppuVar5 + -0x330);
    plVar10[10] = *(long *)((long)ppuVar5 + -0x328);
    plVar10[9] = lVar17;
    plVar10[0xb] = *(long *)((long)ppuVar5 + -800);
    plVar10[0xc] = lVar37;
    plVar10[0xd] = lVar13;
    plVar10[0xe] = lVar37;
    lVar30 = lVar30 + 0x80;
    *(undefined1 *)(plVar10 + 0xf) = uVar6;
    lVar17 = *(long *)((long)ppuVar5 + -0x350);
  } while (lVar17 != lVar30);
LAB_1013edba8:
  uVar23 = *(undefined8 *)((long)ppuVar5 + -0x348);
  puVar33 = *(undefined8 **)((long)ppuVar5 + -0x370);
  uVar9 = *(undefined8 *)((long)ppuVar5 + -0x368);
  puVar33[1] = *(undefined8 *)((long)ppuVar5 + -0x340);
  *puVar33 = uVar23;
  puVar33[2] = uVar9;
  return pcVar14;
  while( true ) {
    uVar9 = *(undefined8 *)(lVar17 + 8);
    lVar36 = *(long *)(lVar17 + 0x10);
    if (lVar36 == 0) {
      lVar30 = 1;
    }
    else {
      lVar30 = _malloc(lVar36);
      if (lVar30 == 0) {
        func_0x0001087c9084(1,lVar36);
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1013eddb8);
        (*pcVar25)();
      }
    }
    _memcpy(lVar30,uVar9,lVar36);
    *(long *)((long)ppuVar5 + -0x438) = lVar36;
    *(long *)((long)ppuVar5 + -0x430) = lVar30;
    *(long *)((long)ppuVar5 + -0x428) = lVar36;
    pcVar14 = (char *)FUN_100f19a3c((undefined1 *)((long)ppuVar5 + -0x420),lVar17 + 0x18);
    lVar17 = lVar17 + 0x68;
    uVar9 = *(undefined8 *)((long)ppuVar5 + -0x3f8);
    uVar43 = *(undefined8 *)((long)ppuVar5 + -0x3e0);
    uVar23 = *(undefined8 *)((long)ppuVar5 + -1000);
    *(undefined8 *)(pcVar32 + 0x48) = *(undefined8 *)((long)ppuVar5 + -0x3f0);
    *(undefined8 *)(pcVar32 + 0x40) = uVar9;
    *(undefined8 *)(pcVar32 + 0x58) = uVar43;
    *(undefined8 *)(pcVar32 + 0x50) = uVar23;
    *(undefined8 *)(pcVar32 + 0x60) = *(undefined8 *)((long)ppuVar5 + -0x3d8);
    uVar9 = *(undefined8 *)((long)ppuVar5 + -0x438);
    uVar43 = *(undefined8 *)((long)ppuVar5 + -0x420);
    uVar23 = *(undefined8 *)((long)ppuVar5 + -0x428);
    *(undefined8 *)(pcVar32 + 8) = *(undefined8 *)((long)ppuVar5 + -0x430);
    *(undefined8 *)pcVar32 = uVar9;
    *(undefined8 *)(pcVar32 + 0x18) = uVar43;
    *(undefined8 *)(pcVar32 + 0x10) = uVar23;
    uVar23 = *(undefined8 *)((long)ppuVar5 + -0x400);
    uVar9 = *(undefined8 *)((long)ppuVar5 + -0x408);
    uVar43 = *(undefined8 *)((long)ppuVar5 + -0x418);
    *(undefined8 *)(pcVar32 + 0x28) = *(undefined8 *)((long)ppuVar5 + -0x410);
    *(undefined8 *)(pcVar32 + 0x20) = uVar43;
    *(undefined8 *)(pcVar32 + 0x38) = uVar23;
    *(undefined8 *)(pcVar32 + 0x30) = uVar9;
    pcVar32 = pcVar32 + 0x68;
    lVar13 = lVar13 + -0x68;
    if (lVar13 == 0) break;
LAB_1013edce8:
    if (lVar13 == 0) break;
  }
LAB_1013edd7c:
  uVar9 = *(undefined8 *)((long)ppuVar5 + -0x450);
  *(undefined8 *)(pcVar11 + 8) = *(undefined8 *)((long)ppuVar5 + -0x448);
  *(undefined8 *)pcVar11 = uVar9;
  *(undefined **)(pcVar11 + 0x10) = puVar20;
  return pcVar14;
LAB_1013edeb0:
  do {
    if (pbVar38 == *(byte **)((long)ppuVar5 + -0x508)) break;
    bVar4 = *pbVar38;
    *(byte **)((long)ppuVar5 + -0x4e8) = pbVar38 + 0x38;
    uVar8 = (uint)bVar4;
    *(uint *)((long)ppuVar5 + -0x4ec) = uVar8;
    if (bVar4 < 2) {
      if (uVar8 != 0) {
        *(uint *)((long)ppuVar5 + -0x4f0) = (uint)pbVar38[1];
        uVar9 = *(undefined8 *)(pbVar38 + 0x10);
        lVar17 = *(long *)(pbVar38 + 0x18);
        if (lVar17 == 0) goto LAB_1013ee080;
        lVar16 = _malloc(lVar17);
        if (lVar16 != 0) goto LAB_1013ee088;
LAB_1013ee198:
        *(long *)((long)ppuVar5 + -0x510) = lVar36;
        func_0x0001087c9084(1,lVar17);
LAB_1013ee1f4:
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1013ee1f8);
        (*pcVar25)();
      }
      uVar9 = *(undefined8 *)(pbVar38 + 0x10);
      lVar17 = *(long *)(pbVar38 + 0x18);
      if (lVar17 == 0) {
        *(undefined8 *)((long)ppuVar5 + -0x4f8) = 1;
        pcVar14 = (char *)_memcpy(1,uVar9,0);
        lVar30 = *(long *)(pbVar38 + 0x30);
      }
      else {
        lVar30 = _malloc(lVar17);
        if (lVar30 == 0) goto LAB_1013ee198;
        *(long *)((long)ppuVar5 + -0x4f8) = lVar30;
        pcVar14 = (char *)_memcpy(lVar30,uVar9,lVar17);
        lVar30 = *(long *)(pbVar38 + 0x30);
      }
      if (lVar30 == 0) {
        unaff_x25 = 8;
      }
      else {
        *(undefined **)((long)ppuVar5 + -0x520) = puVar15;
        *(long *)((long)ppuVar5 + -0x518) = lVar17;
        *(long *)((long)ppuVar5 + -0x510) = lVar36;
        plVar10 = *(long **)(pbVar38 + 0x28);
        lVar36 = lVar30 * 0x28;
        pcVar14 = (char *)_malloc(lVar36);
        if (pcVar14 == (char *)0x0) {
          func_0x0001087c9084(8,lVar36);
          goto LAB_1013ee1f4;
        }
        lVar17 = 0;
        *(long *)((long)ppuVar5 + -0x4c8) = lVar30;
        *(char **)((long)ppuVar5 + -0x4c0) = pcVar14;
        plVar35 = plVar10 + 2;
        *(char **)((long)ppuVar5 + -0x528) = pcVar14;
        plVar31 = (long *)(pcVar14 + 0x10);
        *(long *)((long)ppuVar5 + -0x500) = lVar30;
        do {
          if (lVar36 == 0) break;
          lVar16 = plVar10[3];
          lVar26 = plVar10[4];
          lVar18 = -0x8000000000000000;
          if (*plVar10 != -0x8000000000000000) {
            lVar13 = plVar35[-1];
            lVar18 = *plVar35;
            if (lVar18 == 0) {
              unaff_x26 = (undefined *)0x1;
            }
            else {
              unaff_x26 = (undefined *)_malloc();
              if (unaff_x26 == (undefined *)0x0) {
                func_0x0001087c9084(1,lVar18);
                goto LAB_1013ee1f4;
              }
            }
            pcVar14 = (char *)_memcpy(unaff_x26,lVar13,lVar18);
            lVar30 = *(long *)((long)ppuVar5 + -0x500);
            lVar13 = lVar18;
          }
          plVar10 = plVar10 + 5;
          lVar17 = lVar17 + 1;
          plVar31[-2] = lVar18;
          plVar31[-1] = (long)unaff_x26;
          *plVar31 = lVar13;
          plVar31[1] = lVar16;
          plVar35 = plVar35 + 5;
          lVar36 = lVar36 + -0x28;
          plVar31[2] = lVar26;
          plVar31 = plVar31 + 5;
        } while (lVar30 != lVar17);
        lVar17 = *(long *)((long)ppuVar5 + -0x518);
        lVar36 = *(long *)((long)ppuVar5 + -0x510);
        pcVar11 = *(char **)((long)ppuVar5 + -0x540);
        unaff_x25 = *(ulong *)((long)ppuVar5 + -0x528);
        puVar15 = *(undefined **)((long)ppuVar5 + -0x520);
      }
LAB_1013ede7c:
      lVar16 = *(long *)((long)ppuVar5 + -0x4f8);
    }
    else {
      if (uVar8 != 2) {
        if (uVar8 == 3) {
          uVar9 = *(undefined8 *)(pbVar38 + 0x10);
          lVar17 = *(long *)(pbVar38 + 0x18);
          if (lVar17 == 0) {
            *(undefined8 *)((long)ppuVar5 + -0x4f8) = 1;
            _memcpy(1,uVar9,0);
            uVar9 = *(undefined8 *)(pbVar38 + 0x28);
            lVar30 = *(long *)(pbVar38 + 0x30);
          }
          else {
            lVar30 = _malloc(lVar17);
            if (lVar30 == 0) goto LAB_1013ee198;
            *(long *)((long)ppuVar5 + -0x4f8) = lVar30;
            _memcpy(lVar30,uVar9,lVar17);
            uVar9 = *(undefined8 *)(pbVar38 + 0x28);
            lVar30 = *(long *)(pbVar38 + 0x30);
          }
          if (lVar30 == 0) {
LAB_1013ede60:
            unaff_x25 = 1;
          }
          else {
            unaff_x25 = _malloc(lVar30);
            if (unaff_x25 == 0) {
              *(long *)((long)ppuVar5 + -0x510) = lVar36;
              func_0x0001087c9084(1,lVar30);
              goto LAB_1013ee1f4;
            }
          }
        }
        else {
          uVar9 = *(undefined8 *)(pbVar38 + 0x10);
          lVar17 = *(long *)(pbVar38 + 0x18);
          if (lVar17 == 0) {
            *(undefined8 *)((long)ppuVar5 + -0x4f8) = 1;
            _memcpy(1,uVar9,0);
            uVar9 = *(undefined8 *)(pbVar38 + 0x28);
            lVar30 = *(long *)(pbVar38 + 0x30);
          }
          else {
            lVar30 = _malloc(lVar17);
            if (lVar30 == 0) goto LAB_1013ee198;
            *(long *)((long)ppuVar5 + -0x4f8) = lVar30;
            _memcpy(lVar30,uVar9,lVar17);
            uVar9 = *(undefined8 *)(pbVar38 + 0x28);
            lVar30 = *(long *)(pbVar38 + 0x30);
          }
          if (lVar30 == 0) goto LAB_1013ede60;
          unaff_x25 = _malloc(lVar30);
          if (unaff_x25 == 0) {
            *(long *)((long)ppuVar5 + -0x510) = lVar36;
            func_0x0001087c9084(1,lVar30);
            goto LAB_1013ee1f4;
          }
        }
        pcVar14 = (char *)_memcpy(unaff_x25,uVar9,lVar30);
        goto LAB_1013ede7c;
      }
      *(uint *)((long)ppuVar5 + -0x4f0) = (uint)pbVar38[1];
      uVar9 = *(undefined8 *)(pbVar38 + 0x10);
      lVar17 = *(long *)(pbVar38 + 0x18);
      if (lVar17 == 0) {
LAB_1013ee080:
        lVar16 = 1;
      }
      else {
        lVar16 = _malloc(lVar17);
        if (lVar16 == 0) {
          *(long *)((long)ppuVar5 + -0x510) = lVar36;
          func_0x0001087c9084(1,lVar17);
          goto LAB_1013ee1f4;
        }
      }
LAB_1013ee088:
      pcVar14 = (char *)_memcpy(lVar16,uVar9,lVar17);
    }
    pcVar32 = pcVar11 + lVar36 * 0x38;
    uVar3 = *(undefined4 *)((long)ppuVar5 + -0x4f0);
    *pcVar32 = (char)*(undefined4 *)((long)ppuVar5 + -0x4ec);
    pcVar32[1] = (char)uVar3;
    lVar36 = lVar36 + 1;
    *(long *)(pcVar32 + 8) = lVar17;
    *(long *)(pcVar32 + 0x10) = lVar16;
    *(long *)(pcVar32 + 0x18) = lVar17;
    *(long *)(pcVar32 + 0x20) = lVar30;
    *(ulong *)(pcVar32 + 0x28) = unaff_x25;
    *(long *)(pcVar32 + 0x30) = lVar30;
    pbVar38 = *(byte **)((long)ppuVar5 + -0x4e8);
    puVar15 = puVar15 + -1;
  } while (puVar15 != (undefined *)0x0);
LAB_1013ee158:
  uVar23 = *(undefined8 *)((long)ppuVar5 + -0x4e0);
  puVar33 = *(undefined8 **)((long)ppuVar5 + -0x538);
  uVar9 = *(undefined8 *)((long)ppuVar5 + -0x530);
  puVar33[1] = *(undefined8 *)((long)ppuVar5 + -0x4d8);
  *puVar33 = uVar23;
  puVar33[2] = uVar9;
  return pcVar14;
}

