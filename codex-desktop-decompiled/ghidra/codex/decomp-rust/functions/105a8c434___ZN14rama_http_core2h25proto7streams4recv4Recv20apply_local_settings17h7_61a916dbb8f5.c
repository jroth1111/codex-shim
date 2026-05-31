
/* WARNING: Possible PIC construction at 0x000105a8c794: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN14rama_http_core2h25proto7streams4recv4Recv20apply_local_settings17h753af637fc4ee169E
               (undefined2 *param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  char ******ppppppcVar14;
  long *plVar15;
  uint *unaff_x19;
  uint *puVar16;
  uint *puVar17;
  uint *unaff_x21;
  uint *unaff_x22;
  uint *unaff_x23;
  uint *puVar18;
  uint *puVar19;
  long lVar20;
  uint *unaff_x26;
  uint *unaff_x27;
  uint *puVar21;
  uint *unaff_x28;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined4 uStack_398;
  undefined4 uStack_394;
  char *pcStack_390;
  long ***ppplStack_388;
  long *plStack_380;
  undefined1 uStack_378;
  long **pplStack_370;
  undefined *puStack_368;
  ulong uStack_360;
  uint *puStack_358;
  uint *puStack_350;
  long *plStack_348;
  undefined1 **ppuStack_340;
  undefined8 uStack_338;
  long lStack_330;
  long lStack_328;
  undefined8 *puStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  char *pcStack_2f8;
  undefined8 *puStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined8 **ppuStack_2d8;
  undefined8 uStack_2d0;
  long *plStack_2c8;
  undefined8 *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  char **ppcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  long lStack_290;
  uint *puStack_270;
  uint *puStack_268;
  uint *puStack_260;
  uint *puStack_258;
  uint *puStack_250;
  uint *puStack_248;
  uint *puStack_240;
  uint *puStack_238;
  uint *puStack_230;
  uint *puStack_228;
  undefined1 *puStack_220;
  undefined8 uStack_218;
  char ******ppppppcStack_210;
  undefined2 *puStack_208;
  int iStack_1fc;
  char ******ppppppcStack_1f8;
  uint *puStack_1f0;
  uint uStack_1e8;
  uint uStack_1e4;
  char *******pppppppcStack_1e0;
  char *******pppppppcStack_1d8;
  undefined8 uStack_1d0;
  int iStack_1c4;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  int iStack_18c;
  char *******pppppppcStack_188;
  undefined *puStack_180;
  char *******pppppppcStack_178;
  char *******pppppppcStack_170;
  undefined8 uStack_168;
  char *******pppppppcStack_160;
  char *******pppppppcStack_158;
  undefined8 uStack_150;
  uint *puStack_148;
  char *******pppppppcStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  char *******pppppppcStack_128;
  uint *puStack_120;
  uint *puStack_118;
  uint *puStack_110;
  undefined *puStack_108;
  char *******pppppppcStack_100;
  char *******pppppppcStack_f8;
  undefined8 uStack_f0;
  char *******pppppppcStack_e8;
  undefined *puStack_e0;
  char ******ppppppcStack_d8;
  char *******pppppppcStack_d0;
  uint *puStack_c8;
  uint *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  char *******pppppppcStack_a8;
  char *******pppppppcStack_a0;
  undefined8 uStack_98;
  uint uStack_90;
  uint uStack_8c;
  char *pcStack_88;
  char *******pppppppcStack_80;
  char *******pppppppcStack_78;
  undefined *puStack_70;
  
  if (*(int *)(param_3 + 0x30) == 1) {
    *(bool *)(param_2 + 0x9d) = *(int *)(param_3 + 0x34) != 0;
  }
  if (*(int *)(param_3 + 0x18) != 1) goto LAB_105a8c348;
  uStack_1e8 = *(uint *)(param_3 + 0x1c);
  uStack_1e4 = *(uint *)(param_2 + 0x8c);
  *(uint *)(param_2 + 0x8c) = uStack_1e8;
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
     ((bVar5 = bRam000000010b638418, bRam000000010b638418 - 1 < 2 ||
      ((bRam000000010b638418 != 0 &&
       (bVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                          (0x10b638408), bVar5 != 0)))))) {
    unaff_x19 = (uint *)0x10b638000;
    iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                      (puRam000000010b638408,bVar5);
    if (iVar6 == 0) goto LAB_105a8b794;
    puStack_118 = puRam000000010b638408 + 0xc;
    ppppppcStack_d8 = (char ******)&uStack_1e8;
    pppppppcStack_d0 =
         (char *******)
         &
         __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
    ;
    puStack_c8 = &uStack_1e4;
    puStack_c0 = (uint *)&
                         __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
    ;
    pppppppcStack_f8 = &ppppppcStack_d8;
    pppppppcStack_100 = (char *******)s_update_initial_window_size__new__108b16b41;
    pppppppcStack_178 = (char *******)&pppppppcStack_100;
    pppppppcStack_170 = (char *******)&UNK_10b3f92b0;
    pppppppcStack_128 = (char *******)&pppppppcStack_178;
    auStack_130 = (undefined1  [8])0x1;
    puStack_120 = (uint *)0x1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(puRam000000010b638408,auStack_130);
    puVar19 = puRam000000010b638408;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      pppppppcStack_158 = *(char ********)(puRam000000010b638408 + 8);
      uStack_150 = *(undefined8 *)(puRam000000010b638408 + 10);
      pppppppcStack_160 = (char *******)0x5;
      unaff_x22 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        unaff_x22 = (uint *)&UNK_10b3c24c8;
      }
      unaff_x23 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        unaff_x23 = (uint *)&UNK_109adfc03;
      }
      iVar6 = (**(code **)(unaff_x22 + 6))(unaff_x23,&pppppppcStack_160);
      unaff_x21 = puVar19;
      if (iVar6 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (puVar19,unaff_x23,unaff_x22,&pppppppcStack_160,auStack_130);
      }
    }
  }
  else {
LAB_105a8b794:
    puVar19 = puRam000000010b638408;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      unaff_x23 = (uint *)0x10b638000;
      pppppppcStack_1d8 = *(char ********)(puRam000000010b638408 + 8);
      uStack_1d0 = *(undefined8 *)(puRam000000010b638408 + 10);
      pppppppcStack_1e0 = (char *******)0x5;
      unaff_x19 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        unaff_x19 = (uint *)&UNK_10b3c24c8;
      }
      unaff_x21 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        unaff_x21 = (uint *)&UNK_109adfc03;
      }
      iVar6 = (**(code **)(unaff_x19 + 6))(unaff_x21,&pppppppcStack_1e0);
      unaff_x22 = puVar19;
      if (iVar6 != 0) {
        puStack_148 = puRam000000010b638408 + 0xc;
        auStack_130 = (undefined1  [8])&uStack_1e8;
        pppppppcStack_128 =
             (char *******)
             &
             __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
        ;
        puStack_120 = &uStack_1e4;
        puStack_118 = (uint *)&
                              __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
        ;
        puStack_70 = auStack_130;
        pppppppcStack_78 = (char *******)s_update_initial_window_size__new__108b16b41;
        pppppppcStack_e8 = (char *******)&pppppppcStack_78;
        puStack_e0 = &UNK_10b3f92b0;
        pppppppcStack_158 = (char *******)&pppppppcStack_e8;
        pppppppcStack_160 = (char *******)0x1;
        uStack_150 = 1;
        pppppppcStack_a0 = pppppppcStack_1d8;
        pppppppcStack_a8 = pppppppcStack_1e0;
        uStack_98 = uStack_1d0;
        lStack_b8 = *(long *)(puVar19 + 0x18);
        uStack_b0 = *(undefined8 *)(puVar19 + 0x1a);
        pppppppcStack_d0 = *(char ********)(puVar19 + 0x14);
        puStack_c8 = *(uint **)(puVar19 + 0x16);
        ppppppcStack_d8 = (char ******)0x1;
        if (pppppppcStack_d0 == (char *******)0x0) {
          ppppppcStack_d8 = (char ******)0x2;
        }
        uStack_90 = puVar19[2];
        uStack_8c = puVar19[3];
        pppppppcStack_178 = (char *******)&pppppppcStack_160;
        pppppppcStack_170 = (char *******)CONCAT71(pppppppcStack_170._1_7_,1);
        pppppppcStack_100 = (char *******)&pppppppcStack_178;
        pppppppcStack_f8 = (char *******)&DAT_1061c2098;
        puStack_c0 = (uint *)0x1;
        if (lStack_b8 == 0) {
          puStack_c0 = (uint *)0x2;
        }
        pppppppcStack_80 = (char *******)&pppppppcStack_100;
        pcStack_88 = s__108b39f4f;
        (**(code **)(unaff_x19 + 8))(unaff_x21,&ppppppcStack_d8);
      }
    }
  }
  cVar1 = uStack_1e4 <= uStack_1e8 && uStack_1e8 - uStack_1e4 != 0;
  if (uStack_1e4 > uStack_1e8) {
    cVar1 = -1;
  }
  if (cVar1 == '\0') goto LAB_105a8c348;
  puStack_208 = param_1;
  if (cVar1 == '\x01') {
    pppppppcStack_78 = (char *******)CONCAT44(pppppppcStack_78._4_4_,uStack_1e8 - uStack_1e4);
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bVar5 = bRam000000010b638400, bRam000000010b638400 - 1 < 2 ||
         ((bRam000000010b638400 != 0 &&
          (bVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (0x10b6383f0), bVar5 != 0)))))) &&
       (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (lRam000000010b6383f0,bVar5), iVar6 != 0)) {
      puStack_c0 = (uint *)(lRam000000010b6383f0 + 0x30);
      pppppppcStack_160 = (char *******)&pppppppcStack_78;
      pppppppcStack_158 =
           (char *******)
           &
           __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
      ;
      pppppppcStack_f8 = (char *******)&pppppppcStack_160;
      pppppppcStack_100 = (char *******)s_incrementing_all_windows__inc__108b16b6c;
      pppppppcStack_178 = (char *******)&pppppppcStack_100;
      pppppppcStack_170 = (char *******)&UNK_10b3f92b0;
      pppppppcStack_d0 = (char *******)&pppppppcStack_178;
      ppppppcStack_d8 = (char ******)0x1;
      puStack_c8 = (uint *)0x1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (lRam000000010b6383f0,&ppppppcStack_d8);
      lVar9 = lRam000000010b6383f0;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppppppcStack_128 = *(char ********)(lRam000000010b6383f0 + 0x20);
        puStack_120 = *(uint **)(lRam000000010b6383f0 + 0x28);
        auStack_130 = (undefined1  [8])0x5;
        unaff_x22 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          unaff_x22 = (uint *)&UNK_10b3c24c8;
        }
        unaff_x23 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          unaff_x23 = (uint *)&UNK_109adfc03;
        }
        iVar6 = (**(code **)(unaff_x22 + 6))(unaff_x23,auStack_130);
        if (iVar6 != 0) {
          puVar12 = (undefined8 *)auStack_130;
LAB_105a8bb20:
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar9,unaff_x23,unaff_x22,puVar12,&ppppppcStack_d8);
        }
      }
    }
    else {
      lVar9 = lRam000000010b6383f0;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_1a0 = *(undefined8 *)(lRam000000010b6383f0 + 0x20);
        uStack_198 = *(undefined8 *)(lRam000000010b6383f0 + 0x28);
        uStack_1a8 = 5;
        unaff_x22 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          unaff_x22 = (uint *)&UNK_10b3c24c8;
        }
        unaff_x23 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          unaff_x23 = (uint *)&UNK_109adfc03;
        }
        iVar6 = (**(code **)(unaff_x22 + 6))(unaff_x23,&uStack_1a8);
        if (iVar6 != 0) {
          puStack_c0 = (uint *)(lRam000000010b6383f0 + 0x30);
          auStack_130 = (undefined1  [8])&pppppppcStack_78;
          pppppppcStack_128 =
               (char *******)
               &
               __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
          ;
          pppppppcStack_158 = (char *******)auStack_130;
          pppppppcStack_160 = (char *******)s_incrementing_all_windows__inc__108b16b6c;
          pppppppcStack_100 = (char *******)&pppppppcStack_160;
          pppppppcStack_f8 = (char *******)&UNK_10b3f92b0;
          pppppppcStack_d0 = (char *******)&pppppppcStack_100;
          ppppppcStack_d8 = (char ******)0x1;
          puStack_c8 = (uint *)0x1;
          puVar12 = &uStack_1a8;
          goto LAB_105a8bb20;
        }
      }
    }
    unaff_x19 = *(uint **)(param_4 + 0x58);
    param_1 = puStack_208;
    if (unaff_x19 != (uint *)0x0) {
      unaff_x21 = (uint *)0x0;
      puVar19 = *(uint **)(param_4 + 0x30);
      puStack_1f0 = *(uint **)(param_4 + 0x38);
      ppppppcStack_1f8 = (char ******)(auStack_130 + 4);
      unaff_x26 = *(uint **)(param_4 + 8);
      puVar18 = *(uint **)(param_4 + 0x10);
      iVar6 = (int)pppppppcStack_78;
      puVar16 = (uint *)((ulong)pppppppcStack_78 & 0xffffffff);
      unaff_x28 = unaff_x19;
      do {
        if (puStack_1f0 <= unaff_x21) goto LAB_105a8c3e4;
        uVar2 = puVar19[((long)unaff_x21 * 2 + 1) * 2];
        unaff_x22 = (uint *)(ulong)uVar2;
        uVar3 = puVar19[(long)unaff_x21 * 4 + 3];
        unaff_x23 = (uint *)(ulong)uVar3;
        auStack_130._4_4_ = uVar2;
        auStack_130._0_4_ = uVar3;
        if (((puVar18 <= unaff_x23) ||
            (unaff_x27 = unaff_x26 + (ulong)uVar3 * 0x56, *(long *)unaff_x27 == 2)) ||
           (unaff_x27[0x4f] != uVar2)) {
LAB_105a8c40c:
          ppppppcVar14 = ppppppcStack_1f8;
          goto LAB_105a8c418;
        }
        uVar7 = __ZN14rama_http_core2h25proto7streams12flow_control11FlowControl10inc_window17h61842d2eab291982E
                          (unaff_x27 + 0x2e,puVar16);
        if ((uVar7 & 1) != 0) {
LAB_105a8c370:
          *(undefined8 *)(puStack_208 + 0xc) = 0;
          *(undefined8 *)(puStack_208 + 0x10) = 0;
          *puStack_208 = 0x101;
          *(undefined4 *)(puStack_208 + 2) = 3;
          *(undefined **)(puStack_208 + 4) = &UNK_10b3fb1a0;
          *(undefined8 *)(puStack_208 + 8) = 1;
          return;
        }
        if ((*(long *)unaff_x27 == 2) || (unaff_x27[0x4f] != uVar2)) goto LAB_105a8c40c;
        if (SCARRY4(unaff_x27[0x2f],iVar6)) goto LAB_105a8c370;
        unaff_x27[0x2f] = unaff_x27[0x2f] + iVar6;
        if (unaff_x19 >= unaff_x28) {
          unaff_x21 = (uint *)((long)unaff_x21 + 1);
        }
        unaff_x28 = (uint *)((long)unaff_x28 - (ulong)(unaff_x19 < unaff_x28));
        param_1 = puStack_208;
      } while (unaff_x21 < unaff_x28);
    }
    goto LAB_105a8c348;
  }
  iStack_1c4 = uStack_1e4 - uStack_1e8;
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
     ((bVar5 = bRam000000010b6383e8, bRam000000010b6383e8 - 1 < 2 ||
      ((bRam000000010b6383e8 != 0 &&
       (bVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                          (0x10b6383d8), bVar5 != 0)))))) {
    unaff_x19 = (uint *)0x10b638000;
    iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                      (puRam000000010b6383d8,bVar5);
    if (iVar6 == 0) goto LAB_105a8bb50;
    puStack_c0 = puRam000000010b6383d8 + 0xc;
    pppppppcStack_160 = (char *******)&iStack_1c4;
    pppppppcStack_158 =
         (char *******)
         &
         __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
    ;
    pppppppcStack_f8 = (char *******)&pppppppcStack_160;
    pppppppcStack_100 = (char *******)s_decrementing_all_windows__dec__108ac800e;
    pppppppcStack_178 = (char *******)&pppppppcStack_100;
    pppppppcStack_170 = (char *******)&UNK_10b3f92b0;
    pppppppcStack_d0 = (char *******)&pppppppcStack_178;
    ppppppcStack_d8 = (char ******)0x1;
    puStack_c8 = (uint *)0x1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (puRam000000010b6383d8,&ppppppcStack_d8);
    puVar19 = puRam000000010b6383d8;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      pppppppcStack_128 = *(char ********)(puRam000000010b6383d8 + 8);
      puStack_120 = *(uint **)(puRam000000010b6383d8 + 10);
      auStack_130 = (undefined1  [8])0x5;
      puVar16 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar16 = (uint *)&UNK_10b3c24c8;
      }
      puVar18 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar18 = (uint *)&UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar16 + 6))(puVar18,auStack_130);
      unaff_x21 = puVar19;
      if (iVar6 == 0) goto LAB_105a8bf3c;
      puVar12 = (undefined8 *)auStack_130;
LAB_105a8bc24:
      unaff_x19 = (uint *)0x10b638000;
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (puVar19,puVar18,puVar16,puVar12,&ppppppcStack_d8);
      unaff_x21 = puVar19;
    }
  }
  else {
LAB_105a8bb50:
    puVar19 = puRam000000010b6383d8;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      unaff_x19 = (uint *)0x10b638000;
      uStack_1b8 = *(undefined8 *)(puRam000000010b6383d8 + 8);
      uStack_1b0 = *(undefined8 *)(puRam000000010b6383d8 + 10);
      uStack_1c0 = 5;
      puVar16 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar16 = (uint *)&UNK_10b3c24c8;
      }
      puVar18 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar18 = (uint *)&UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar16 + 6))(puVar18,&uStack_1c0);
      unaff_x21 = puVar19;
      if (iVar6 != 0) {
        puStack_c0 = puRam000000010b6383d8 + 0xc;
        auStack_130 = (undefined1  [8])&iStack_1c4;
        pppppppcStack_128 =
             (char *******)
             &
             __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
        ;
        pppppppcStack_158 = (char *******)auStack_130;
        pppppppcStack_160 = (char *******)s_decrementing_all_windows__dec__108ac800e;
        pppppppcStack_100 = (char *******)&pppppppcStack_160;
        pppppppcStack_f8 = (char *******)&UNK_10b3f92b0;
        pppppppcStack_d0 = (char *******)&pppppppcStack_100;
        ppppppcStack_d8 = (char ******)0x1;
        puStack_c8 = (uint *)0x1;
        puVar12 = &uStack_1c0;
        goto LAB_105a8bc24;
      }
    }
  }
LAB_105a8bf3c:
  puVar19 = *(uint **)(param_4 + 0x58);
  param_1 = puStack_208;
  if (puVar19 != (uint *)0x0) {
    unaff_x23 = (uint *)0x0;
    ppppppcStack_210 = (char ******)(auStack_130 + 4);
    iStack_1fc = iStack_1c4;
    ppppppcStack_1f8 = *(char *******)(param_4 + 0x30);
    puStack_1f0 = *(uint **)(param_4 + 0x38);
    puVar16 = *(uint **)(param_4 + 8);
    puVar18 = *(uint **)(param_4 + 0x10);
    unaff_x22 = puVar19;
    do {
      if (puStack_1f0 <= unaff_x23) goto LAB_105a8c3e4;
      auStack_130._0_4_ = *(uint *)((long)ppppppcStack_1f8 + (long)unaff_x23 * 0x10 + 0xc);
      auStack_130._4_4_ = *(uint *)(ppppppcStack_1f8 + (long)unaff_x23 * 2 + 1);
      ppppppcVar14 = ppppppcStack_210;
      if (((puVar18 <= (uint *)(ulong)(uint)auStack_130._0_4_) ||
          (unaff_x26 = puVar16 + (ulong)(uint)auStack_130._0_4_ * 0x56, *(long *)unaff_x26 == 2)) ||
         (unaff_x26[0x4f] != *(uint *)(ppppppcStack_1f8 + (long)unaff_x23 * 2 + 1)))
      goto LAB_105a8c418;
      unaff_x28 = unaff_x26 + 0x2e;
      iStack_18c = iStack_1fc;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
         (((bVar5 = bRam000000010b638280, bRam000000010b638280 - 1 < 2 ||
           ((bRam000000010b638280 != 0 &&
            (bVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (0x10b638270), bVar5 != 0)))) &&
          (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (puRam000000010b638270,bVar5), iVar6 != 0)))) {
        puStack_148 = puRam000000010b638270 + 0xc;
        puStack_110 = unaff_x26 + 0x2f;
        auStack_130 = (undefined1  [8])&iStack_18c;
        pppppppcStack_128 =
             (char *******)
             &
             __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
        ;
        puStack_118 = (uint *)&
                              __ZN95__LT_rama_http_core__h2__proto__streams__flow_control__Window_u20_as_u20_core__fmt__Display_GT_3fmt17h8f8373570c9b2abbE
        ;
        puStack_108 = &
                      __ZN95__LT_rama_http_core__h2__proto__streams__flow_control__Window_u20_as_u20_core__fmt__Display_GT_3fmt17h8f8373570c9b2abbE
        ;
        puStack_138 = auStack_130;
        pppppppcStack_140 = (char *******)s_dec_recv_window__sz____window____108b164f3;
        pppppppcStack_188 = (char *******)&pppppppcStack_140;
        puStack_180 = &UNK_10b3f92b0;
        pppppppcStack_158 = (char *******)&pppppppcStack_188;
        pppppppcStack_160 = (char *******)0x1;
        uStack_150 = 1;
        puStack_120 = unaff_x28;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (puRam000000010b638270,&pppppppcStack_160);
        puVar21 = puRam000000010b638270;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppppcStack_f8 = *(char ********)(puRam000000010b638270 + 8);
          uStack_f0 = *(undefined8 *)(puRam000000010b638270 + 10);
          pppppppcStack_100 = (char *******)0x5;
          unaff_x19 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            unaff_x19 = (uint *)&UNK_10b3c24c8;
          }
          unaff_x21 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            unaff_x21 = (uint *)&UNK_109adfc03;
          }
          iVar6 = (**(code **)(unaff_x19 + 6))(unaff_x21,&pppppppcStack_100);
          unaff_x27 = puVar21;
          if (iVar6 != 0) {
            lStack_b8 = *(long *)(puVar21 + 0x18);
            uStack_b0 = *(undefined8 *)(puVar21 + 0x1a);
            pppppppcStack_d0 = *(char ********)(puVar21 + 0x14);
            puStack_c8 = *(uint **)(puVar21 + 0x16);
            ppppppcStack_d8 = (char ******)0x1;
            if (pppppppcStack_d0 == (char *******)0x0) {
              ppppppcStack_d8 = (char ******)0x2;
            }
            uStack_90 = puVar21[2];
            uStack_8c = puVar21[3];
            pppppppcStack_e8 = (char *******)&pppppppcStack_160;
            puStack_e0 = (undefined *)CONCAT71(puStack_e0._1_7_,1);
            pppppppcStack_78 = (char *******)&pppppppcStack_e8;
            puStack_70 = &DAT_1061c2098;
            puStack_c0 = (uint *)0x1;
            if (lStack_b8 == 0) {
              puStack_c0 = (uint *)0x2;
            }
            pppppppcStack_a0 = pppppppcStack_f8;
            pppppppcStack_a8 = pppppppcStack_100;
            uStack_98 = uStack_f0;
            pppppppcStack_80 = (char *******)&pppppppcStack_78;
LAB_105a8c11c:
            pcStack_88 = s__108b39f4f;
            (**(code **)(unaff_x19 + 8))(unaff_x21,&ppppppcStack_d8);
            unaff_x27 = puVar21;
          }
        }
      }
      else {
        puVar21 = puRam000000010b638270;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppppcStack_170 = *(char ********)(puRam000000010b638270 + 8);
          uStack_168 = *(undefined8 *)(puRam000000010b638270 + 10);
          pppppppcStack_178 = (char *******)0x5;
          unaff_x19 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            unaff_x19 = (uint *)&UNK_10b3c24c8;
          }
          unaff_x21 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            unaff_x21 = (uint *)&UNK_109adfc03;
          }
          iVar6 = (**(code **)(unaff_x19 + 6))(unaff_x21,&pppppppcStack_178);
          unaff_x27 = puVar21;
          if (iVar6 != 0) {
            puStack_148 = puRam000000010b638270 + 0xc;
            puStack_110 = unaff_x26 + 0x2f;
            auStack_130 = (undefined1  [8])&iStack_18c;
            pppppppcStack_128 =
                 (char *******)
                 &
                 __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
            ;
            puStack_118 = (uint *)&
                                  __ZN95__LT_rama_http_core__h2__proto__streams__flow_control__Window_u20_as_u20_core__fmt__Display_GT_3fmt17h8f8373570c9b2abbE
            ;
            puStack_108 = &
                          __ZN95__LT_rama_http_core__h2__proto__streams__flow_control__Window_u20_as_u20_core__fmt__Display_GT_3fmt17h8f8373570c9b2abbE
            ;
            puStack_e0 = auStack_130;
            pppppppcStack_e8 = (char *******)s_dec_recv_window__sz____window____108b164f3;
            pppppppcStack_140 = (char *******)&pppppppcStack_e8;
            puStack_138 = &UNK_10b3f92b0;
            pppppppcStack_158 = (char *******)&pppppppcStack_140;
            pppppppcStack_160 = (char *******)0x1;
            uStack_150 = 1;
            lStack_b8 = *(long *)(puVar21 + 0x18);
            uStack_b0 = *(undefined8 *)(puVar21 + 0x1a);
            pppppppcStack_d0 = *(char ********)(puVar21 + 0x14);
            puStack_c8 = *(uint **)(puVar21 + 0x16);
            ppppppcStack_d8 = (char ******)0x1;
            if (pppppppcStack_d0 == (char *******)0x0) {
              ppppppcStack_d8 = (char ******)0x2;
            }
            uStack_90 = puVar21[2];
            uStack_8c = puVar21[3];
            pppppppcStack_78 = (char *******)&pppppppcStack_160;
            puStack_70 = (undefined *)CONCAT71(puStack_70._1_7_,1);
            pppppppcStack_100 = (char *******)&pppppppcStack_78;
            pppppppcStack_f8 = (char *******)&DAT_1061c2098;
            puStack_c0 = (uint *)0x1;
            if (lStack_b8 == 0) {
              puStack_c0 = (uint *)0x2;
            }
            pppppppcStack_a0 = pppppppcStack_170;
            pppppppcStack_a8 = pppppppcStack_178;
            uStack_98 = uStack_168;
            pppppppcStack_80 = (char *******)&pppppppcStack_100;
            puStack_120 = unaff_x28;
            goto LAB_105a8c11c;
          }
        }
      }
      if (SBORROW4(*unaff_x28,iStack_18c)) goto LAB_105a8c370;
      unaff_x26[0x2e] = *unaff_x28 - iStack_18c;
      if (SBORROW4(unaff_x26[0x2f],iStack_18c)) goto LAB_105a8c370;
      unaff_x26[0x2f] = unaff_x26[0x2f] - iStack_18c;
      if (puVar19 >= unaff_x22) {
        unaff_x23 = (uint *)((long)unaff_x23 + 1);
      }
      unaff_x22 = (uint *)((long)unaff_x22 - (ulong)(puVar19 < unaff_x22));
      param_1 = puStack_208;
    } while (unaff_x23 < unaff_x22);
  }
LAB_105a8c348:
  *(undefined1 *)param_1 = 4;
  return;
LAB_105a8c3e4:
  func_0x000108a079f0(&UNK_109b0e2b8,0x3e,&UNK_10b400178);
  ppppppcVar14 = ppppppcStack_210;
LAB_105a8c418:
  pppppppcStack_d0 = (char *******)&DAT_105abf048;
  puVar11 = &UNK_10b3fa5a0;
  ppppppcStack_d8 = ppppppcVar14;
  auVar23 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__dangling_store_key_for_stream_i_108b233d4,&ppppppcStack_d8);
  puVar17 = auVar23._8_8_;
  lVar10 = auVar23._0_8_;
  uStack_218 = 0x105a8c434;
  lVar20 = *(long *)puVar17;
  puVar21 = puVar17 + 2;
  uVar2 = *puVar21;
  uVar3 = puVar17[3];
  lVar9 = *(long *)puVar21;
  uStack_2a0 = *(char **)puVar21;
  puStack_270 = unaff_x28;
  puStack_268 = unaff_x27;
  puStack_260 = unaff_x26;
  puStack_258 = puVar18;
  puStack_250 = puVar19;
  puStack_248 = unaff_x23;
  puStack_240 = unaff_x22;
  puStack_238 = unaff_x21;
  puStack_230 = puVar16;
  puStack_228 = unaff_x19;
  puStack_220 = &stack0xfffffffffffffff0;
  if (((*(ulong *)(lVar20 + 0x10) <= (ulong)uVar2) ||
      (plVar13 = (long *)(*(long *)(lVar20 + 8) + (ulong)uVar2 * 0x158), *plVar13 == 2)) ||
     (*(uint *)((long)plVar13 + 0x13c) != uVar3)) goto LAB_105a8d11c;
  bVar5 = *(byte *)(plVar13 + 0xd);
  if (6 < bVar5) {
    return;
  }
  uVar4 = bVar5 - 4;
  if (bVar5 < 4) {
    uVar4 = 1;
  }
  if (uVar4 == 0) {
    return;
  }
  if (((uVar4 & 0xff) == 1 && bVar5 < 2) && (1 < *(byte *)((long)plVar13 + 0x69))) {
    return;
  }
  if ((int)plVar13[0xc] != 1000000000) {
    return;
  }
  if (*(ulong *)(puVar11 + 0x30) <= *(ulong *)(puVar11 + 0x38)) {
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bVar5 = bRam000000010b638448, bRam000000010b638448 - 1 < 2 ||
         ((bRam000000010b638448 != 0 &&
          (bVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (0x10b638438), bVar5 != 0)))))) &&
       (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (lRam000000010b638438,bVar5), iVar6 != 0)) {
      lVar9 = lRam000000010b638438 + 0x30;
      lVar10 = __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                         (puVar17);
      uStack_2a0 = (char *)(lVar10 + 0x13c);
      puStack_298 = (undefined8 *)&DAT_105abf048;
      puStack_2f0 = &uStack_2a0;
      pcStack_2f8 = s__enqueue_reset_expiration__dropp_108b16bba;
      uStack_2b0 = (char *)&pcStack_2f8;
      ppcStack_2a8 = (char **)&UNK_10b3f92b0;
      ppuStack_2d8 = (undefined8 **)&uStack_2b0;
      lStack_2e0 = 1;
      uStack_2d0 = 1;
      plStack_2c8 = (long *)lVar9;
      FUN_105a8d2b0(&lStack_2e0);
      return;
    }
    lVar9 = lRam000000010b638438;
    if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') {
      return;
    }
    if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5) {
      return;
    }
    uStack_308 = *(undefined8 *)(lRam000000010b638438 + 0x20);
    uStack_300 = *(undefined8 *)(lRam000000010b638438 + 0x28);
    uStack_310 = 5;
    puVar19 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar19 = (uint *)&UNK_10b3c24c8;
    }
    puVar16 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar16 = (uint *)&UNK_109adfc03;
    }
    iVar6 = (**(code **)(puVar19 + 6))(puVar16,&uStack_310);
    if (iVar6 == 0) {
      return;
    }
    lVar10 = lRam000000010b638438 + 0x30;
    lVar20 = __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                       (puVar17);
    uStack_2a0 = (char *)(lVar20 + 0x13c);
    puStack_298 = (undefined8 *)&DAT_105abf048;
    puStack_2f0 = &uStack_2a0;
    pcStack_2f8 = s__enqueue_reset_expiration__dropp_108b16bba;
    uStack_2b0 = (char *)&pcStack_2f8;
    ppcStack_2a8 = (char **)&UNK_10b3f92b0;
    ppuStack_2d8 = (undefined8 **)&uStack_2b0;
    lStack_2e0 = 1;
    uStack_2d0 = 1;
    puVar12 = &uStack_310;
    plStack_2c8 = (long *)lVar10;
    goto LAB_105a8cc14;
  }
  *(ulong *)(puVar11 + 0x38) = *(ulong *)(puVar11 + 0x38) + 1;
  lStack_330 = lVar10;
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
     (((bVar5 = bRam000000010b638460, bRam000000010b638460 - 1 < 2 ||
       ((bRam000000010b638460 != 0 &&
        (bVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (0x10b638450), bVar5 != 0)))) &&
      (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (lRam000000010b638450,bVar5), puVar16 = puVar17, iVar6 != 0)))) {
    plVar13 = (long *)(lRam000000010b638450 + 0x30);
    lVar9 = __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                      (puVar17);
    uStack_2a0 = (char *)(lVar9 + 0x13c);
    puStack_298 = (undefined8 *)&DAT_105abf048;
    puStack_2f0 = &uStack_2a0;
    pcStack_2f8 = s_enqueue_reset_expiration__108b238e6;
    uStack_2b0 = (char *)&pcStack_2f8;
    ppcStack_2a8 = (char **)&UNK_10b3f92b0;
    ppuStack_2d8 = (undefined8 **)&uStack_2b0;
    lStack_2e0 = 1;
    uStack_2d0 = 1;
    plVar15 = &lStack_2e0;
    uVar22 = 0x105a8c798;
    plStack_2c8 = plVar13;
    goto SUB_105a8d178;
  }
  lVar10 = lRam000000010b638450;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    puStack_320 = *(undefined8 **)(lRam000000010b638450 + 0x20);
    lStack_318 = *(long *)(lRam000000010b638450 + 0x28);
    lStack_328 = 5;
    puVar16 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar16 = (uint *)&UNK_10b3c24c8;
    }
    unaff_x21 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      unaff_x21 = (uint *)&UNK_109adfc03;
    }
    iVar6 = (**(code **)(puVar16 + 6))(unaff_x21,&lStack_328);
    if (iVar6 != 0) {
      plVar13 = (long *)(lRam000000010b638450 + 0x30);
      lVar8 = __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                        (puVar17);
      pcStack_2f8 = (char *)(lVar8 + 0x13c);
      puStack_2f0 = (undefined8 *)&DAT_105abf048;
      ppcStack_2a8 = &pcStack_2f8;
      uStack_2b0 = s_enqueue_reset_expiration__108b238e6;
      puStack_2c0 = &uStack_2b0;
      puStack_2b8 = &UNK_10b3f92b0;
      ppuStack_2d8 = &puStack_2c0;
      lStack_2e0 = 1;
      uStack_2d0 = 1;
      puStack_298 = puStack_320;
      uStack_2a0 = (char *)lStack_328;
      lStack_290 = lStack_318;
      plStack_2c8 = plVar13;
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar10,unaff_x21,puVar16,&uStack_2a0,&lStack_2e0);
    }
  }
  puVar17 = puVar16;
  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
      ((bVar5 = bRam000000010b636e28, bRam000000010b636e28 - 1 < 2 ||
       ((bRam000000010b636e28 != 0 &&
        (bVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                           ), bVar5 != 0)))))) &&
     (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                        (___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                         ,bVar5), iVar6 != 0)) {
    plStack_2c8 = (long *)(
                          ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                          + 0x30);
    pcStack_2f8 = &UNK_108c73cd0;
    puStack_2f0 = (undefined8 *)0x21;
    uStack_2b0 = (char *)&pcStack_2f8;
    ppcStack_2a8 = (char **)&UNK_10b3f92b0;
    ppuStack_2d8 = (undefined8 **)&uStack_2b0;
    lStack_2e0 = 1;
    uStack_2d0 = 1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
               ,&lStack_2e0);
    lVar10 = 
    ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puStack_298 = *(undefined8 **)
                     (
                     ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                     + 0x20);
      lStack_290 = *(long *)(
                            ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                            + 0x28);
      uStack_2a0 = (char *)0x5;
      puVar17 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar17 = (uint *)&UNK_10b3c24c8;
      }
      unaff_x21 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        unaff_x21 = (uint *)&UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar17 + 6))(unaff_x21,&uStack_2a0);
      if (iVar6 != 0) {
LAB_105a8c870:
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar10,unaff_x21,puVar17,&uStack_2a0,&lStack_2e0);
      }
    }
  }
  else {
    lVar10 = 
    ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puStack_2f0 = *(undefined8 **)
                     (
                     ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                     + 0x20);
      lStack_2e8 = *(long *)(
                            ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                            + 0x28);
      pcStack_2f8 = (char *)0x5;
      puVar17 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar17 = (uint *)&UNK_10b3c24c8;
      }
      unaff_x21 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        unaff_x21 = (uint *)&UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar17 + 6))(unaff_x21,&pcStack_2f8);
      if (iVar6 != 0) {
        plStack_2c8 = (long *)(
                              ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                              + 0x30);
        uStack_2b0 = &UNK_108c73cd0;
        ppcStack_2a8 = (char **)0x21;
        puStack_2c0 = &uStack_2b0;
        puStack_2b8 = &UNK_10b3f92b0;
        ppuStack_2d8 = &puStack_2c0;
        lStack_2e0 = 1;
        uStack_2d0 = 1;
        puStack_298 = puStack_2f0;
        uStack_2a0 = pcStack_2f8;
        lStack_290 = lStack_2e8;
        goto LAB_105a8c870;
      }
    }
  }
  uStack_2a0 = (char *)lVar9;
  if (((*(ulong *)(lVar20 + 0x10) <= (ulong)uVar2) ||
      (plVar13 = (long *)(*(long *)(lVar20 + 8) + (ulong)uVar2 * 0x158), *plVar13 == 2)) ||
     (*(uint *)((long)plVar13 + 0x13c) != uVar3)) {
LAB_105a8d11c:
    do {
      lStack_2e0 = (long)&uStack_2a0 + 4;
      ppuStack_2d8 = (undefined8 **)&DAT_105abf048;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s__dangling_store_key_for_stream_i_108b233d4,&lStack_2e0,&UNK_10b3fa588);
    } while( true );
  }
  if ((int)plVar13[0xc] != 1000000000) {
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bVar5 = bRam000000010b636e58, bRam000000010b636e58 - 1 < 2 ||
         ((bRam000000010b636e58 != 0 &&
          (bVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                             ), bVar5 != 0)))))) &&
       (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                           ,bVar5), iVar6 != 0)) {
      plStack_2c8 = (long *)(
                            ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                            + 0x30);
      uStack_2b0 = &UNK_109b0e2a6;
      ppcStack_2a8 = (char **)0x25;
      puStack_2c0 = &uStack_2b0;
      puStack_2b8 = &UNK_10b3f92b0;
      ppuStack_2d8 = &puStack_2c0;
      lStack_2e0 = 1;
      uStack_2d0 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                 ,&lStack_2e0);
      lVar9 = 
      ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
      ;
      if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') {
        return;
      }
      if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5) {
        return;
      }
      puStack_298 = *(undefined8 **)
                     (
                     ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                     + 0x20);
      lStack_290 = *(long *)(
                            ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                            + 0x28);
      uStack_2a0 = (char *)0x5;
      puVar19 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar19 = (uint *)&UNK_10b3c24c8;
      }
      puVar16 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar16 = (uint *)&UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar19 + 6))(puVar16,&uStack_2a0);
      if (iVar6 == 0) {
        return;
      }
    }
    else {
      lVar9 = 
      ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
      ;
      if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') {
        return;
      }
      if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5) {
        return;
      }
      puStack_298 = *(undefined8 **)
                     (
                     ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                     + 0x20);
      lStack_290 = *(long *)(
                            ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                            + 0x28);
      uStack_2a0 = (char *)0x5;
      puVar19 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar19 = (uint *)&UNK_10b3c24c8;
      }
      puVar16 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar16 = (uint *)&UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar19 + 6))(puVar16,&uStack_2a0);
      if (iVar6 == 0) {
        return;
      }
      plStack_2c8 = (long *)(
                            ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                            + 0x30);
      uStack_2b0 = &UNK_109b0e2a6;
      ppcStack_2a8 = (char **)0x25;
      puStack_2c0 = &uStack_2b0;
      puStack_2b8 = &UNK_10b3f92b0;
      ppuStack_2d8 = &puStack_2c0;
      lStack_2e0 = 1;
      uStack_2d0 = 1;
    }
    puVar12 = &uStack_2a0;
LAB_105a8cc14:
    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
              (lVar9,puVar16,puVar19,puVar12,&lStack_2e0);
    return;
  }
  auVar24 = func_0x000106032954(8);
  *(undefined1 (*) [12])(plVar13 + 0xb) = auVar24;
  if (*(int *)(lStack_330 + 0x78) != 1) {
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       (((bVar5 = bRam000000010b636e40, bRam000000010b636e40 - 1 < 2 ||
         ((bRam000000010b636e40 != 0 &&
          (bVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                             ), bVar5 != 0)))) &&
        (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                            ,bVar5), iVar6 != 0)))) {
      plStack_2c8 = (long *)(
                            ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                            + 0x30);
      uStack_2b0 = &UNK_109b0e297;
      ppcStack_2a8 = (char **)0x1f;
      puStack_2c0 = &uStack_2b0;
      puStack_2b8 = &UNK_10b3f92b0;
      ppuStack_2d8 = &puStack_2c0;
      lStack_2e0 = 1;
      uStack_2d0 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                 ,&lStack_2e0);
      lVar9 = 
      ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack_298 = *(undefined8 **)
                       (
                       ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                       + 0x20);
        lStack_290 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                      + 0x28);
        uStack_2a0 = (char *)0x5;
        puVar19 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar19 = (uint *)&UNK_10b3c24c8;
        }
        puVar16 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar16 = (uint *)&UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar19 + 6))(puVar16,&uStack_2a0);
        if (iVar6 != 0) {
LAB_105a8ccf4:
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar9,puVar16,puVar19,&uStack_2a0,&lStack_2e0);
        }
      }
    }
    else {
      lVar9 = 
      ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack_298 = *(undefined8 **)
                       (
                       ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                       + 0x20);
        lStack_290 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                      + 0x28);
        uStack_2a0 = (char *)0x5;
        puVar19 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar19 = (uint *)&UNK_10b3c24c8;
        }
        puVar16 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar16 = (uint *)&UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar19 + 6))(puVar16,&uStack_2a0);
        if (iVar6 != 0) {
          plStack_2c8 = (long *)(
                                ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                                + 0x30);
          uStack_2b0 = &UNK_109b0e297;
          ppcStack_2a8 = (char **)0x1f;
          puStack_2c0 = &uStack_2b0;
          puStack_2b8 = &UNK_10b3f92b0;
          ppuStack_2d8 = &puStack_2c0;
          lStack_2e0 = 1;
          uStack_2d0 = 1;
          goto LAB_105a8ccf4;
        }
      }
    }
    *(undefined4 *)(lStack_330 + 0x78) = 1;
    *(uint *)(lStack_330 + 0x7c) = uVar2;
    *(uint *)(lStack_330 + 0x80) = uVar3;
    goto LAB_105a8d098;
  }
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
     ((bVar5 = bRam000000010b636e10, bRam000000010b636e10 - 1 < 2 ||
      ((bRam000000010b636e10 != 0 &&
       (bVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                          (&
                           __ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                          ), bVar5 != 0)))))) {
    plVar13 = (long *)0x10b636000;
    iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                      (___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                       ,bVar5);
    if (iVar6 == 0) goto LAB_105a8ca68;
    plStack_2c8 = ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                  + 6;
    uStack_2b0 = &UNK_109b0e283;
    ppcStack_2a8 = (char **)0x29;
    puStack_2c0 = &uStack_2b0;
    puStack_2b8 = &UNK_10b3f92b0;
    ppuStack_2d8 = &puStack_2c0;
    lStack_2e0 = 1;
    uStack_2d0 = 1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
               ,&lStack_2e0);
    plVar15 = 
    ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puStack_298 = (undefined8 *)
                    ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                    [4];
      lStack_290 = ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                   [5];
      uStack_2a0 = (char *)0x5;
      puVar17 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar17 = (uint *)&UNK_10b3c24c8;
      }
      unaff_x21 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        unaff_x21 = (uint *)&UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar17 + 6))(unaff_x21,&uStack_2a0);
      plVar13 = plVar15;
      if (iVar6 == 0) goto LAB_105a8cf50;
LAB_105a8cb2c:
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (plVar15,unaff_x21,puVar17,&uStack_2a0,&lStack_2e0);
      plVar13 = plVar15;
    }
  }
  else {
LAB_105a8ca68:
    plVar15 = 
    ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puStack_298 = (undefined8 *)
                    ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                    [4];
      lStack_290 = ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                   [5];
      uStack_2a0 = (char *)0x5;
      puVar17 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar17 = (uint *)&UNK_10b3c24c8;
      }
      unaff_x21 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        unaff_x21 = (uint *)&UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar17 + 6))(unaff_x21,&uStack_2a0);
      plVar13 = plVar15;
      if (iVar6 != 0) {
        plStack_2c8 = ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                      + 6;
        uStack_2b0 = &UNK_109b0e283;
        ppcStack_2a8 = (char **)0x29;
        puStack_2c0 = &uStack_2b0;
        puStack_2b8 = &UNK_10b3f92b0;
        ppuStack_2d8 = &puStack_2c0;
        lStack_2e0 = 1;
        uStack_2d0 = 1;
        goto LAB_105a8cb2c;
      }
    }
  }
LAB_105a8cf50:
  uVar4 = *(uint *)(lStack_330 + 0x84);
  uStack_2b0 = *(char **)(lStack_330 + 0x84);
  if (((*(ulong *)(lVar20 + 0x10) <= (ulong)uVar4) ||
      (plVar15 = (long *)(*(long *)(lVar20 + 8) + (ulong)uVar4 * 0x158), *plVar15 == 2)) ||
     (*(int *)((long)plVar15 + 0x13c) != *(int *)(lStack_330 + 0x88))) {
    lStack_2e0 = (long)&uStack_2b0 + 4;
    ppuStack_2d8 = (undefined8 **)&DAT_105abf048;
    uVar22 = 0x105a8d178;
    plVar15 = (long *)__ZN4core9panicking9panic_fmt17h6f8816b337451651E
                                (s__dangling_store_key_for_stream_i_108b233d4,&lStack_2e0,
                                 &UNK_10b3fa5a0);
SUB_105a8d178:
    uStack_360 = (ulong)uVar3;
    puStack_358 = unaff_x21;
    puStack_350 = puVar17;
    plStack_348 = plVar13;
    ppuStack_340 = &puStack_220;
    uStack_338 = uVar22;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lRam000000010b638450,plVar15);
    lVar9 = lRam000000010b638450;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uStack_3f0 = *(undefined8 *)(lRam000000010b638450 + 0x20);
      uStack_3e8 = *(undefined8 *)(lRam000000010b638450 + 0x28);
      uStack_3f8 = 5;
      puVar19 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar19 = (uint *)&UNK_10b3c24c8;
      }
      puVar16 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar16 = (uint *)&UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar19 + 6))(puVar16,&uStack_3f8);
      if (iVar6 != 0) {
        lStack_3c0 = *(long *)(lVar9 + 0x60);
        uStack_3b8 = *(undefined8 *)(lVar9 + 0x68);
        lStack_3d8 = *(long *)(lVar9 + 0x50);
        uStack_3d0 = *(undefined8 *)(lVar9 + 0x58);
        uStack_3e0 = 1;
        if (lStack_3d8 == 0) {
          uStack_3e0 = 2;
        }
        uStack_398 = *(undefined4 *)(lVar9 + 8);
        uStack_394 = *(undefined4 *)(lVar9 + 0xc);
        uStack_378 = 1;
        pplStack_370 = &plStack_380;
        puStack_368 = &DAT_1061c2098;
        uStack_3c8 = 1;
        if (lStack_3c0 == 0) {
          uStack_3c8 = 2;
        }
        uStack_3a8 = uStack_3f0;
        uStack_3b0 = uStack_3f8;
        uStack_3a0 = uStack_3e8;
        ppplStack_388 = &pplStack_370;
        pcStack_390 = s__108b39f4f;
        plStack_380 = plVar15;
        (**(code **)(puVar19 + 8))(puVar16,&uStack_3e0);
      }
    }
    return;
  }
  *(undefined4 *)((long)plVar15 + 0x11c) = 1;
  *(uint *)(plVar15 + 0x24) = uVar2;
  *(uint *)((long)plVar15 + 0x124) = uVar3;
LAB_105a8d098:
  *(uint *)(lStack_330 + 0x84) = uVar2;
  *(uint *)(lStack_330 + 0x88) = uVar3;
  return;
}

