
void __ZN18codex_core_plugins5store31validate_plugin_version_segment17h5df62f799c52e62aE
               (undefined8 *param_1,byte *param_2,long param_3,long param_4,ulong *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long *extraout_x8;
  code *pcVar22;
  long lVar23;
  uint uVar24;
  byte *pbVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 *puVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  undefined1 auVar32 [16];
  long lStack_3b8;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long alStack_360 [3];
  long lStack_348;
  long lStack_340;
  ulong uStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2d8;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long *plStack_188;
  undefined1 *puStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  if (param_3 == 2) {
    if (*(short *)param_2 != 0x2e2e) goto LAB_1038db45c;
LAB_1038db418:
    puVar13 = (undefined8 *)_malloc(0x35);
    if (puVar13 != (undefined8 *)0x0) {
      puVar13[1] = 0x76206e6967756c70;
      *puVar13 = 0x2064696c61766e69;
      puVar13[3] = 0x6172742068746170;
      puVar13[2] = 0x203a6e6f69737265;
      puVar13[5] = 0x6c6120746f6e2073;
      puVar13[4] = 0x69206c6173726576;
      *(undefined8 *)((long)puVar13 + 0x2d) = 0x6465776f6c6c6120;
      uVar21 = 0x35;
LAB_1038db5a0:
      *param_1 = uVar21;
      param_1[1] = puVar13;
      param_1[2] = uVar21;
      return;
    }
  }
  else {
    if (param_3 == 1) {
      if (*param_2 != 0x2e) goto LAB_1038db45c;
      goto LAB_1038db418;
    }
    if (param_3 != 0) {
LAB_1038db45c:
      pbVar14 = param_2;
      do {
        pbVar25 = pbVar14 + 1;
        uVar24 = (uint)*pbVar14;
        if ((char)*pbVar14 < '\0') {
          uVar2 = pbVar14[1] & 0x3f;
          if (uVar24 < 0xe0) {
            pbVar25 = pbVar14 + 2;
            uVar7 = (uVar24 & 0x1f) << 6;
            uVar24 = uVar2 | uVar7;
            if (9 < uVar24 - 0x30 && 0x19 < (pbVar14[1] & 0x1f | uVar7) - 0x41) goto LAB_1038db550;
          }
          else {
            uVar2 = uVar2 << 6;
            uVar7 = pbVar14[2] & 0x3f | uVar2;
            if (uVar24 < 0xf0) {
              pbVar25 = pbVar14 + 3;
              uVar1 = (uVar24 & 0x1f) << 0xc;
              uVar24 = uVar7 | uVar1;
              if (9 < uVar24 - 0x30 && 0x19 < (pbVar14[2] & 0x1f | uVar2 | uVar1) - 0x41)
              goto LAB_1038db550;
            }
            else {
              uVar7 = uVar7 << 6;
              uVar2 = (uVar24 & 7) << 0x12;
              uVar24 = pbVar14[3] & 0x3f | uVar7 | uVar2;
              if (uVar24 == 0x110000) break;
              pbVar25 = pbVar14 + 4;
              if (9 < uVar24 - 0x30 && 0x19 < (pbVar14[3] & 0x1f | uVar7 | uVar2) - 0x41) {
LAB_1038db550:
                if (0x34 < uVar24 - 0x2b ||
                    (1L << ((ulong)(uVar24 - 0x2b) & 0x3f) & 0x1000000000000dU) == 0) {
                  puVar13 = (undefined8 *)_malloc(0x56);
                  if (puVar13 == (undefined8 *)0x0) goto LAB_1038db5d8;
                  puVar13[5] = 0x69676964202c7372;
                  puVar13[4] = 0x657474656c204949;
                  puVar13[7] = 0x5f60202c602b6020;
                  puVar13[6] = 0x2c602e60202c7374;
                  puVar13[9] = 0x612065726120602d;
                  puVar13[8] = 0x6020646e61202c60;
                  *(undefined8 *)((long)puVar13 + 0x4e) = 0x6465776f6c6c6120;
                  puVar13[1] = 0x76206e6967756c70;
                  *puVar13 = 0x2064696c61766e69;
                  puVar13[3] = 0x43534120796c6e6f;
                  puVar13[2] = 0x203a6e6f69737265;
                  uVar21 = 0x56;
                  goto LAB_1038db5a0;
                }
              }
            }
          }
        }
        else if (9 < uVar24 - 0x30 && 0x19 < (uVar24 & 0xffffffdf) - 0x41) goto LAB_1038db550;
        pbVar14 = pbVar25;
      } while (pbVar25 != param_2 + param_3);
      *param_1 = 0x8000000000000000;
      return;
    }
    puVar13 = (undefined8 *)_malloc(0x29);
    if (puVar13 != (undefined8 *)0x0) {
      puVar13[1] = 0x76206e6967756c70;
      *puVar13 = 0x2064696c61766e69;
      puVar13[3] = 0x746f6e207473756d;
      puVar13[2] = 0x203a6e6f69737265;
      *(undefined8 *)((long)puVar13 + 0x21) = 0x7974706d65206562;
      *(undefined8 *)((long)puVar13 + 0x19) = 0x20746f6e20747375;
      uVar21 = 0x29;
      goto LAB_1038db5a0;
    }
    func_0x0001087c9084(1,0x29);
  }
  func_0x0001087c9084(1,0x35);
LAB_1038db5d8:
  auVar32 = func_0x0001087c9084(1,0x56);
  lVar20 = auVar32._8_8_;
  lVar15 = auVar32._0_8_;
  lStack_390 = 0;
  lStack_388 = 8;
  lStack_380 = 0;
  lStack_378 = 0;
  lStack_370 = 8;
  lStack_368 = 0;
  if (*param_5 == 2) {
    __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
              (&lStack_178,&UNK_108d9c130,0x10);
    uVar21 = *(undefined8 *)(lVar15 + 8);
    uVar26 = *(undefined8 *)(lVar15 + 0x10);
    __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
              (&lStack_340,uStack_170,uStack_168,uVar21,uVar26);
    lVar15 = lStack_330;
    uVar8 = uStack_338;
    lVar29 = lStack_340;
    if (lStack_178 != 0) {
      _free(uStack_170);
    }
    uVar16 = __ZN3std4path4Path7is_file17h96e282191c162e03E(uVar8,lVar15);
    if ((uVar16 & 1) != 0) {
      FUN_1038dc5c4(uVar21,uVar26,lVar20,*(undefined8 *)(param_4 + 8),
                    *(undefined8 *)(param_4 + 0x10),uVar8,lVar15,&lStack_390,&lStack_378);
    }
  }
  else {
    if ((*param_5 & 1) == 0) {
      if (param_5[3] != 0) {
        lVar29 = param_5[3] * 0x18;
        uVar21 = *(undefined8 *)(lVar15 + 8);
        uVar3 = *(undefined8 *)(lVar15 + 0x10);
        uVar26 = *(undefined8 *)(param_4 + 8);
        uVar4 = *(undefined8 *)(param_4 + 0x10);
        puVar13 = (undefined8 *)(param_5[2] + 0x10);
        do {
          FUN_1038dc5c4(uVar21,uVar3,lVar20,uVar26,uVar4,puVar13[-1],*puVar13,&lStack_390,
                        &lStack_378);
          puVar13 = puVar13 + 3;
          lVar29 = lVar29 + -0x18;
        } while (lVar29 != 0);
      }
      goto LAB_1038dbb68;
    }
    uVar21 = *(undefined8 *)(lVar15 + 8);
    lVar15 = *(long *)(lVar15 + 0x10);
    __ZN19codex_utils_plugins16plugin_namespace25find_plugin_manifest_path17h911e1004599c80acE
              (alStack_360,uVar21,lVar15);
    if (alStack_360[0] == -0x8000000000000000) {
LAB_1038db74c:
      __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                (&lStack_178,&UNK_108d98352,0x19);
      uVar26 = uStack_170;
      __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
                (&lStack_340,uStack_170,uStack_168,uVar21,lVar15);
      lVar9 = lStack_330;
      uVar8 = uStack_338;
      lVar29 = lStack_340;
      if (lStack_178 != 0) {
        _free(uVar26);
      }
      uVar16 = param_5[3];
    }
    else {
      FUN_105561214(&lStack_340,alStack_360);
      if (lStack_340 == -0x8000000000000000) {
        if ((uStack_338 & 3) == 1) {
          puVar28 = (undefined8 *)(uStack_338 - 1);
          uVar26 = *puVar28;
          puVar13 = *(undefined8 **)(uStack_338 + 7);
          pcVar22 = (code *)*puVar13;
          if (pcVar22 != (code *)0x0) {
            (*pcVar22)(uVar26);
          }
          if (puVar13[1] != 0) {
            _free(uVar26);
          }
          _free(puVar28);
        }
        goto LAB_1038db74c;
      }
      uVar16 = param_5[3];
      lVar29 = lStack_340;
      uVar8 = uStack_338;
      lVar9 = lStack_330;
    }
    if (uVar16 != 0) {
      lVar27 = 0;
      lVar30 = 0;
      uVar31 = param_5[2];
      lVar23 = uVar16 * 0xf0;
      uVar26 = *(undefined8 *)(param_4 + 8);
      lVar5 = *(long *)(param_4 + 0x10);
      uVar3 = *(undefined8 *)(lVar20 + 8);
      lVar6 = *(long *)(lVar20 + 0x10);
      lStack_3b8 = 8;
      uVar4 = *(undefined8 *)(lVar20 + 0x20);
      lVar20 = *(long *)(lVar20 + 0x28);
      do {
        lStack_348 = lVar30;
        if ((((((*(long *)(uVar31 + 0x10) != 0) || (*(long *)(uVar31 + 0x28) != 0)) ||
              (*(long *)(uVar31 + 0x40) != 0)) ||
             ((*(long *)(uVar31 + 0x58) != 0 || (*(long *)(uVar31 + 0x70) != 0)))) ||
            ((*(long *)(uVar31 + 0x88) != 0 ||
             ((*(long *)(uVar31 + 0xa0) != 0 || (*(long *)(uVar31 + 0xb8) != 0)))))) ||
           ((*(long *)(uVar31 + 0xd0) != 0 || (*(long *)(uVar31 + 0xe8) != 0)))) {
          if (lVar6 == 0) {
            uVar16 = 1;
            _memcpy(1,uVar3,0);
            if (lVar20 != 0) goto LAB_1038db8d4;
LAB_1038db904:
            lVar17 = 1;
          }
          else {
            uVar16 = _malloc(lVar6);
            if (uVar16 == 0) {
              func_0x0001087c9084(1,lVar6);
              goto LAB_1038dbbf4;
            }
            _memcpy(uVar16,uVar3,lVar6);
            if (lVar20 == 0) goto LAB_1038db904;
LAB_1038db8d4:
            lVar17 = _malloc(lVar20);
            if (lVar17 == 0) {
              func_0x0001087c9084(1,lVar20);
              goto LAB_1038dbbf4;
            }
          }
          _memcpy(lVar17,uVar4,lVar20);
          lStack_1b8 = lVar6;
          uStack_1b0 = uVar16;
          lStack_1a8 = lVar6;
          lStack_1a0 = lVar20;
          lStack_198 = lVar17;
          lStack_190 = lVar20;
          if (lVar15 == 0) {
            lVar17 = 1;
            _memcpy(1,uVar21,0);
            if (lVar5 != 0) goto LAB_1038db958;
LAB_1038db9a8:
            lVar18 = 1;
            _memcpy(1,uVar26,lVar5);
            if (lVar9 == 0) goto LAB_1038db9c0;
LAB_1038db97c:
            lVar19 = _malloc(lVar9);
            if (lVar19 == 0) {
              func_0x0001087c9084(1,lVar9);
LAB_1038dbbf4:
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x1038dbbf8);
              (*pcVar22)();
            }
          }
          else {
            lVar17 = _malloc(lVar15);
            if (lVar17 == 0) {
              func_0x0001087c9084(1,lVar15);
              goto LAB_1038dbbf4;
            }
            _memcpy(lVar17,uVar21,lVar15);
            if (lVar5 == 0) goto LAB_1038db9a8;
LAB_1038db958:
            lVar18 = _malloc(lVar5);
            if (lVar18 == 0) {
              func_0x0001087c9084(1,lVar5);
              goto LAB_1038dbbf4;
            }
            _memcpy(lVar18,uVar26,lVar5);
            if (lVar9 != 0) goto LAB_1038db97c;
LAB_1038db9c0:
            lVar19 = 1;
          }
          _memcpy(lVar19,uVar8,lVar9);
          plStack_188 = &lStack_348;
          puStack_180 = &
                        __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&lStack_178,s_plugin_json_hooks____108afa03e,&plStack_188);
          uVar12 = uStack_168;
          uVar11 = uStack_170;
          lVar10 = lStack_178;
          FUN_103981c44(&lStack_178,uVar31);
          uStack_338 = uStack_1b0;
          lStack_340 = lStack_1b8;
          lStack_328 = lStack_1a0;
          lStack_330 = lStack_1a8;
          lStack_318 = lStack_190;
          lStack_320 = lStack_198;
          lStack_2c8 = lVar10;
          uStack_2c0 = uVar11;
          uStack_2b8 = uVar12;
          uStack_2a8 = uStack_170;
          lStack_2b0 = lStack_178;
          uStack_298 = uStack_160;
          uStack_2a0 = uStack_168;
          uStack_268 = uStack_130;
          uStack_270 = uStack_138;
          uStack_258 = uStack_120;
          uStack_260 = uStack_128;
          uStack_288 = uStack_150;
          uStack_290 = uStack_158;
          uStack_278 = uStack_140;
          uStack_280 = uStack_148;
          uStack_228 = uStack_f0;
          uStack_230 = uStack_f8;
          uStack_218 = uStack_e0;
          uStack_220 = uStack_e8;
          uStack_248 = uStack_110;
          uStack_250 = uStack_118;
          uStack_238 = uStack_100;
          uStack_240 = uStack_108;
          uStack_1d8 = uStack_a0;
          uStack_1e0 = uStack_a8;
          uStack_1c8 = uStack_90;
          uStack_1d0 = uStack_98;
          uStack_208 = uStack_d0;
          uStack_210 = uStack_d8;
          uStack_1f8 = uStack_c0;
          uStack_200 = uStack_c8;
          uStack_1e8 = uStack_b0;
          uStack_1f0 = uStack_b8;
          lStack_310 = lVar15;
          lStack_308 = lVar17;
          lStack_300 = lVar15;
          lStack_2f8 = lVar5;
          lStack_2f0 = lVar18;
          lStack_2e8 = lVar5;
          lStack_2d8 = lVar19;
          if (lVar27 == lStack_390) {
            func_0x0001089506d4(&lStack_390);
            lStack_3b8 = lStack_388;
          }
          _memcpy(lStack_3b8 + lVar27 * 0x180,&lStack_340,0x180);
          lVar27 = lVar27 + 1;
          lStack_380 = lVar27;
        }
        uVar31 = uVar31 + 0xf0;
        lVar30 = lVar30 + 1;
        lVar23 = lVar23 + -0xf0;
      } while (lVar23 != 0);
    }
  }
  if (lVar29 != 0) {
    _free(uVar8);
  }
LAB_1038dbb68:
  extraout_x8[1] = lStack_388;
  *extraout_x8 = lStack_390;
  extraout_x8[2] = lStack_380;
  extraout_x8[4] = lStack_370;
  extraout_x8[3] = lStack_378;
  extraout_x8[5] = lStack_368;
  return;
}

