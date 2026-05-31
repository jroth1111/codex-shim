
void __ZN18codex_core_plugins6loader17load_plugin_hooks17hbbc18a28bd5906afE
               (long *param_1,long param_2,long param_3,long param_4,ulong *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long lStack_398;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long alStack_340 [3];
  long lStack_328;
  long lStack_320;
  ulong uStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2b8;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
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
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_198;
  ulong uStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long *plStack_168;
  undefined1 *puStack_160;
  long lStack_158;
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lStack_370 = 0;
  lStack_368 = 8;
  lStack_360 = 0;
  lStack_358 = 0;
  lStack_350 = 8;
  lStack_348 = 0;
  if (*param_5 == 2) {
    __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
              (&lStack_158,&UNK_108d9c130,0x10);
    uVar1 = *(undefined8 *)(param_2 + 8);
    uVar19 = *(undefined8 *)(param_2 + 0x10);
    __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
              (&lStack_320,uStack_150,uStack_148,uVar1,uVar19);
    lVar23 = lStack_310;
    uVar8 = uStack_318;
    lVar7 = lStack_320;
    if (lStack_158 != 0) {
      _free(uStack_150);
    }
    uVar13 = __ZN3std4path4Path7is_file17h96e282191c162e03E(uVar8,lVar23);
    if ((uVar13 & 1) != 0) {
      func_0x0001038dc5c4(uVar1,uVar19,param_3,*(undefined8 *)(param_4 + 8),
                          *(undefined8 *)(param_4 + 0x10),uVar8,lVar23,&lStack_370,&lStack_358);
    }
  }
  else {
    if ((*param_5 & 1) == 0) {
      if (param_5[3] != 0) {
        lVar23 = param_5[3] * 0x18;
        uVar1 = *(undefined8 *)(param_2 + 8);
        uVar2 = *(undefined8 *)(param_2 + 0x10);
        uVar19 = *(undefined8 *)(param_4 + 8);
        uVar3 = *(undefined8 *)(param_4 + 0x10);
        puVar21 = (undefined8 *)(param_5[2] + 0x10);
        do {
          func_0x0001038dc5c4(uVar1,uVar2,param_3,uVar19,uVar3,puVar21[-1],*puVar21,&lStack_370,
                              &lStack_358);
          puVar21 = puVar21 + 3;
          lVar23 = lVar23 + -0x18;
        } while (lVar23 != 0);
      }
      goto LAB_1038dbb68;
    }
    uVar1 = *(undefined8 *)(param_2 + 8);
    lVar23 = *(long *)(param_2 + 0x10);
    __ZN19codex_utils_plugins16plugin_namespace25find_plugin_manifest_path17h911e1004599c80acE
              (alStack_340,uVar1,lVar23);
    if (alStack_340[0] == -0x8000000000000000) {
LAB_1038db74c:
      __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                (&lStack_158,&UNK_108d98352,0x19);
      uVar19 = uStack_150;
      __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
                (&lStack_320,uStack_150,uStack_148,uVar1,lVar23);
      lVar9 = lStack_310;
      uVar8 = uStack_318;
      lVar7 = lStack_320;
      if (lStack_158 != 0) {
        _free(uVar19);
      }
      uVar13 = param_5[3];
    }
    else {
      FUN_105561214(&lStack_320,alStack_340);
      if (lStack_320 == -0x8000000000000000) {
        if ((uStack_318 & 3) == 1) {
          puVar22 = (undefined8 *)(uStack_318 - 1);
          uVar19 = *puVar22;
          puVar21 = *(undefined8 **)(uStack_318 + 7);
          pcVar17 = (code *)*puVar21;
          if (pcVar17 != (code *)0x0) {
            (*pcVar17)(uVar19);
          }
          if (puVar21[1] != 0) {
            _free(uVar19);
          }
          _free(puVar22);
        }
        goto LAB_1038db74c;
      }
      uVar13 = param_5[3];
      lVar7 = lStack_320;
      uVar8 = uStack_318;
      lVar9 = lStack_310;
    }
    if (uVar13 != 0) {
      lVar20 = 0;
      lVar24 = 0;
      uVar25 = param_5[2];
      lVar18 = uVar13 * 0xf0;
      uVar19 = *(undefined8 *)(param_4 + 8);
      lVar4 = *(long *)(param_4 + 0x10);
      uVar2 = *(undefined8 *)(param_3 + 8);
      lVar5 = *(long *)(param_3 + 0x10);
      lStack_398 = 8;
      uVar3 = *(undefined8 *)(param_3 + 0x20);
      lVar6 = *(long *)(param_3 + 0x28);
      do {
        lStack_328 = lVar24;
        if ((((((*(long *)(uVar25 + 0x10) != 0) || (*(long *)(uVar25 + 0x28) != 0)) ||
              (*(long *)(uVar25 + 0x40) != 0)) ||
             ((*(long *)(uVar25 + 0x58) != 0 || (*(long *)(uVar25 + 0x70) != 0)))) ||
            ((*(long *)(uVar25 + 0x88) != 0 ||
             ((*(long *)(uVar25 + 0xa0) != 0 || (*(long *)(uVar25 + 0xb8) != 0)))))) ||
           ((*(long *)(uVar25 + 0xd0) != 0 || (*(long *)(uVar25 + 0xe8) != 0)))) {
          if (lVar5 == 0) {
            uVar13 = 1;
            _memcpy(1,uVar2,0);
            if (lVar6 != 0) goto LAB_1038db8d4;
LAB_1038db904:
            lVar14 = 1;
          }
          else {
            uVar13 = _malloc(lVar5);
            if (uVar13 == 0) {
              func_0x0001087c9084(1,lVar5);
              goto LAB_1038dbbf4;
            }
            _memcpy(uVar13,uVar2,lVar5);
            if (lVar6 == 0) goto LAB_1038db904;
LAB_1038db8d4:
            lVar14 = _malloc(lVar6);
            if (lVar14 == 0) {
              func_0x0001087c9084(1,lVar6);
              goto LAB_1038dbbf4;
            }
          }
          _memcpy(lVar14,uVar3,lVar6);
          lStack_198 = lVar5;
          uStack_190 = uVar13;
          lStack_188 = lVar5;
          lStack_180 = lVar6;
          lStack_178 = lVar14;
          lStack_170 = lVar6;
          if (lVar23 == 0) {
            lVar14 = 1;
            _memcpy(1,uVar1,0);
            if (lVar4 != 0) goto LAB_1038db958;
LAB_1038db9a8:
            lVar15 = 1;
            _memcpy(1,uVar19,lVar4);
            if (lVar9 != 0) goto LAB_1038db97c;
LAB_1038db9c0:
            lVar16 = 1;
          }
          else {
            lVar14 = _malloc(lVar23);
            if (lVar14 == 0) {
              func_0x0001087c9084(1,lVar23);
              goto LAB_1038dbbf4;
            }
            _memcpy(lVar14,uVar1,lVar23);
            if (lVar4 == 0) goto LAB_1038db9a8;
LAB_1038db958:
            lVar15 = _malloc(lVar4);
            if (lVar15 == 0) {
              func_0x0001087c9084(1,lVar4);
              goto LAB_1038dbbf4;
            }
            _memcpy(lVar15,uVar19,lVar4);
            if (lVar9 == 0) goto LAB_1038db9c0;
LAB_1038db97c:
            lVar16 = _malloc(lVar9);
            if (lVar16 == 0) {
              func_0x0001087c9084(1,lVar9);
LAB_1038dbbf4:
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x1038dbbf8);
              (*pcVar17)();
            }
          }
          _memcpy(lVar16,uVar8,lVar9);
          plStack_168 = &lStack_328;
          puStack_160 = &
                        __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&lStack_158,s_plugin_json_hooks____108afa03e,&plStack_168);
          uVar12 = uStack_148;
          uVar11 = uStack_150;
          lVar10 = lStack_158;
          func_0x000103981c44(&lStack_158,uVar25);
          uStack_318 = uStack_190;
          lStack_320 = lStack_198;
          lStack_308 = lStack_180;
          lStack_310 = lStack_188;
          lStack_2f8 = lStack_170;
          lStack_300 = lStack_178;
          lStack_2a8 = lVar10;
          uStack_2a0 = uVar11;
          uStack_298 = uVar12;
          uStack_288 = uStack_150;
          lStack_290 = lStack_158;
          uStack_278 = uStack_140;
          uStack_280 = uStack_148;
          uStack_248 = uStack_110;
          uStack_250 = uStack_118;
          uStack_238 = uStack_100;
          uStack_240 = uStack_108;
          uStack_268 = uStack_130;
          uStack_270 = uStack_138;
          uStack_258 = uStack_120;
          uStack_260 = uStack_128;
          uStack_208 = uStack_d0;
          uStack_210 = uStack_d8;
          uStack_1f8 = uStack_c0;
          uStack_200 = uStack_c8;
          uStack_228 = uStack_f0;
          uStack_230 = uStack_f8;
          uStack_218 = uStack_e0;
          uStack_220 = uStack_e8;
          uStack_1b8 = uStack_80;
          uStack_1c0 = uStack_88;
          uStack_1a8 = uStack_70;
          uStack_1b0 = uStack_78;
          uStack_1e8 = uStack_b0;
          uStack_1f0 = uStack_b8;
          uStack_1d8 = uStack_a0;
          uStack_1e0 = uStack_a8;
          uStack_1c8 = uStack_90;
          uStack_1d0 = uStack_98;
          lStack_2f0 = lVar23;
          lStack_2e8 = lVar14;
          lStack_2e0 = lVar23;
          lStack_2d8 = lVar4;
          lStack_2d0 = lVar15;
          lStack_2c8 = lVar4;
          lStack_2b8 = lVar16;
          if (lVar20 == lStack_370) {
            func_0x0001089506d4(&lStack_370);
            lStack_398 = lStack_368;
          }
          _memcpy(lStack_398 + lVar20 * 0x180,&lStack_320,0x180);
          lVar20 = lVar20 + 1;
          lStack_360 = lVar20;
        }
        uVar25 = uVar25 + 0xf0;
        lVar24 = lVar24 + 1;
        lVar18 = lVar18 + -0xf0;
      } while (lVar18 != 0);
    }
  }
  if (lVar7 != 0) {
    _free(uVar8);
  }
LAB_1038dbb68:
  param_1[1] = lStack_368;
  *param_1 = lStack_370;
  param_1[2] = lStack_360;
  param_1[4] = lStack_350;
  param_1[3] = lStack_358;
  param_1[5] = lStack_348;
  return;
}

