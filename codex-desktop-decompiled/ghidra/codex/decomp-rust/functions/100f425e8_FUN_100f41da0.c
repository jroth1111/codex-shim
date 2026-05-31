
/* WARNING: Type propagation algorithm not settling */

ulong FUN_100f41da0(long *param_1,undefined8 param_2,long *param_3,char *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long ******pppppplVar3;
  long *******ppppppplVar4;
  long ******pppppplVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long ******pppppplVar16;
  char *pcVar17;
  long *******ppppppplVar18;
  long *plVar19;
  long lVar20;
  long ******pppppplVar21;
  char *pcVar22;
  uint uVar23;
  ulong *puVar24;
  long lVar25;
  char *pcVar26;
  undefined1 auVar27 [16];
  long *******ppppppplStack_360;
  long ******pppppplStack_358;
  long ******pppppplStack_350;
  long ******pppppplStack_348;
  long ******pppppplStack_340;
  undefined *puStack_338;
  long *******ppppppplStack_330;
  long ******pppppplStack_328;
  long ******pppppplStack_320;
  long ******pppppplStack_318;
  long ******pppppplStack_310;
  undefined *puStack_308;
  long *****ppppplStack_300;
  long lStack_2f8;
  undefined *puStack_2f0;
  undefined1 auStack_2e8 [24];
  long *******ppppppplStack_2d0;
  long ******pppppplStack_2c8;
  long ******pppppplStack_2c0;
  long ******pppppplStack_2b8;
  long ******pppppplStack_2b0;
  undefined *puStack_2a8;
  long *******ppppppplStack_2a0;
  long ******pppppplStack_298;
  long ******pppppplStack_290;
  long ******pppppplStack_280;
  long ******pppppplStack_278;
  long ******pppppplStack_270;
  long *******ppppppplStack_260;
  long ******pppppplStack_258;
  long ******pppppplStack_250;
  long ******pppppplStack_248;
  long ******pppppplStack_240;
  undefined *puStack_238;
  long *******ppppppplStack_228;
  long ******pppppplStack_220;
  long ******pppppplStack_218;
  long ******pppppplStack_210;
  long ******pppppplStack_208;
  undefined *puStack_200;
  long *******ppppppplStack_1f8;
  long ******pppppplStack_1f0;
  long ******pppppplStack_1e8;
  char *pcStack_1e0;
  undefined1 auStack_198 [16];
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined2 uStack_160;
  undefined1 uStack_15e;
  undefined5 uStack_15d;
  char *pcStack_158;
  ulong *puStack_150;
  char *pcStack_148;
  undefined1 auStack_140 [16];
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  char *pcStack_100;
  ulong *puStack_f8;
  char *pcStack_f0;
  ulong *puStack_d8;
  char *pcStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long *plStack_40;
  long *plStack_38;
  
  lVar20 = param_1[1];
  if ((long *)(param_1[2] - lVar20) < param_3) {
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(param_1,param_3,1);
    lVar20 = param_1[1];
  }
  plVar19 = param_3;
  uVar10 = _memcpy(*param_1 + lVar20,param_2);
  plStack_38 = (long *)(param_1[2] - param_1[1]);
  if (param_3 <= plStack_38) {
    param_1[1] = param_1[1] + (long)param_3;
    return uVar10;
  }
  plStack_40 = param_3;
  auStack_198 = __ZN5bytes13panic_advance17h894eeb3b0f978370E(&plStack_40);
  if (auStack_198._8_8_ == 0) {
    uStack_15e = false;
  }
  else {
    uStack_15e = *auStack_198._0_8_ == '/';
  }
  uStack_188 = 6;
  uStack_160 = 0x201;
  plVar11 = plVar19;
  __ZN80__LT_std__path__Components_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h2794890ed267533bE
            (auStack_140,auStack_198);
  if (auStack_140[0] == 10) {
LAB_100f41ea0:
    pcVar26 = (char *)0x0;
    puVar24 = (ulong *)0x8;
    pcStack_100 = (char *)0x0;
    puStack_f8 = (ulong *)0x8;
    pcStack_f0 = (char *)0x0;
    plVar11 = (long *)_malloc((long)param_4 * 0x18);
  }
  else {
    lVar20 = (auStack_140._0_8_ & 0xff) - 5;
    if (auStack_140[0] < 6) {
      lVar20 = 0;
    }
    puVar1 = &UNK_108cc3d21;
    lVar25 = 2;
    if (lVar20 != 3) {
      puVar1 = (undefined *)auStack_140._8_8_;
      lVar25 = lStack_130;
    }
    puVar2 = &UNK_108cc3d20;
    lVar12 = 1;
    if (lVar20 != 2) {
      puVar2 = puVar1;
      lVar12 = lVar25;
    }
    puVar1 = puStack_118;
    lVar25 = lStack_110;
    if (lVar20 != 0) {
      puVar1 = &UNK_108cb5505;
      lVar25 = lVar20;
    }
    if (lVar20 < 2) {
      puVar2 = puVar1;
      lVar12 = lVar25;
    }
    __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&pcStack_100,puVar2,lVar12);
    pcVar22 = pcStack_f0;
    puVar24 = puStack_f8;
    pcVar26 = pcStack_100;
    puVar13 = puStack_f8;
    if (pcStack_100 == (char *)0x8000000000000000) {
      if (pcStack_f0 == (char *)0x0) {
        puVar13 = (ulong *)0x1;
        pcVar26 = (char *)0x0;
      }
      else {
        puVar13 = (ulong *)_malloc(pcStack_f0);
        if (puVar13 == (ulong *)0x0) {
          uVar14 = func_0x0001087c9084(1,pcVar22);
          _free();
          uVar14 = __Unwind_Resume(uVar14);
          FUN_100e1ad68(&pcStack_100);
          auVar27 = __Unwind_Resume(uVar14);
          ppppppplVar18 = auVar27._8_8_;
          puVar15 = auVar27._0_8_;
          pcStack_1e0 = pcVar26;
          pppppplVar3 = ppppppplVar18[1];
          __ZN12codex_plugin9plugin_id8PluginId5parse17h2a2819ef7bfc1352E
                    (&ppppppplStack_2d0,pppppplVar3,ppppppplVar18[2]);
          pppppplVar5 = pppppplStack_2b8;
          pppppplVar16 = pppppplStack_2c0;
          pppppplVar21 = pppppplStack_2c8;
          ppppppplVar4 = ppppppplStack_2d0;
          if (ppppppplStack_2d0 == (long *******)0x8000000000000000) {
            if (*plVar11 == -0x8000000000000000) {
              uVar10 = func_0x000108856688(&UNK_108cc62eb,0x45);
              *puVar15 = 0x8000000000000000;
              puVar15[1] = uVar10;
joined_r0x000100f42630:
              if (pppppplVar21 != (long ******)0x0) {
                uVar10 = _free(pppppplVar16);
              }
              if (*ppppppplVar18 == (long ******)0x0) {
                return uVar10;
              }
              pppppplVar16 = ppppppplVar18[1];
              goto LAB_100f426e0;
            }
            __ZN12codex_plugin9plugin_id8PluginId3new17h349efe8b4db26655E
                      (&ppppppplStack_260,ppppppplVar18,plVar11);
            pppppplStack_278 = pppppplStack_250;
            pppppplStack_280 = pppppplStack_258;
            pppppplStack_270 = pppppplStack_248;
            if (ppppppplStack_260 == (long *******)0x8000000000000000) {
              uVar10 = FUN_108858af0(&pppppplStack_280);
              *puVar15 = 0x8000000000000000;
              puVar15[1] = uVar10;
            }
            else {
              puStack_200 = puStack_238;
              pppppplStack_208 = pppppplStack_240;
              pppppplStack_218 = pppppplStack_250;
              pppppplStack_220 = pppppplStack_258;
              ppppppplStack_228 = ppppppplStack_260;
              pppppplStack_210 = pppppplStack_248;
              ppppppplStack_260 = (long *******)&ppppppplStack_228;
              pppppplStack_250 = (long ******)&pppppplStack_210;
              pppppplStack_258 = (long ******)&DAT_1048e978c;
              pppppplStack_248 = (long ******)&DAT_1048e978c;
              uVar10 = __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                 (&ppppppplStack_330,s___108b03abb,&ppppppplStack_260);
              puVar15[5] = puStack_200;
              puVar15[4] = pppppplStack_208;
              puVar15[7] = pppppplStack_328;
              puVar15[6] = ppppppplStack_330;
              puVar15[8] = pppppplStack_320;
              puVar15[1] = pppppplStack_220;
              *puVar15 = ppppppplStack_228;
              puVar15[3] = pppppplStack_210;
              puVar15[2] = pppppplStack_218;
              pppppplStack_2c8 = pppppplStack_220;
              ppppppplStack_2d0 = ppppppplStack_228;
              pppppplStack_2b0 = pppppplStack_208;
              pppppplStack_2b8 = pppppplStack_210;
              pppppplStack_2c0 = pppppplStack_218;
              puStack_2a8 = puStack_200;
              pppppplStack_298 = pppppplStack_328;
              ppppppplStack_2a0 = ppppppplStack_330;
              pppppplStack_290 = pppppplStack_320;
            }
          }
          else {
            if (*plVar11 != -0x8000000000000000) {
              pppppplStack_318 = pppppplStack_2b8;
              pppppplStack_320 = pppppplStack_2c0;
              puStack_308 = puStack_2a8;
              pppppplStack_310 = pppppplStack_2b0;
              pppppplStack_328 = pppppplStack_2c8;
              ppppppplStack_330 = ppppppplStack_2d0;
              lVar20 = plVar11[1];
              ppppplStack_300 = (long *****)*plVar11;
              puStack_2f0 = (undefined *)plVar11[2];
              lStack_2f8 = lVar20;
              if (puStack_2a8 == puStack_2f0) {
                iVar9 = _memcmp(pppppplStack_2b0,lVar20);
                if (iVar9 == 0) {
                  pppppplStack_258 = pppppplStack_2c8;
                  ppppppplStack_260 = ppppppplStack_2d0;
                  pppppplStack_248 = pppppplStack_2b8;
                  pppppplStack_250 = pppppplStack_2c0;
                  puStack_238 = puStack_2a8;
                  pppppplStack_240 = pppppplStack_2b0;
                  ppppppplStack_2d0 = (long *******)&ppppppplStack_260;
                  pppppplStack_2c0 = (long ******)&pppppplStack_248;
                  pppppplStack_2c8 = (long ******)&DAT_1048e978c;
                  pppppplStack_2b8 = (long ******)&DAT_1048e978c;
                  uVar10 = __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                     (&ppppppplStack_1f8,s___108b03abb,&ppppppplStack_2d0);
                  pppppplStack_298 = pppppplStack_1f0;
                  ppppppplStack_2a0 = ppppppplStack_1f8;
                  pppppplStack_290 = pppppplStack_1e8;
                  puVar15[5] = puStack_2a8;
                  puVar15[4] = pppppplStack_2b0;
                  puVar15[7] = pppppplStack_1f0;
                  puVar15[6] = ppppppplStack_1f8;
                  puVar15[8] = pppppplStack_1e8;
                  puVar15[1] = pppppplVar21;
                  *puVar15 = ppppppplVar4;
                  puVar15[3] = pppppplVar5;
                  puVar15[2] = pppppplVar16;
                  ppppppplStack_2d0 = ppppppplVar4;
                  pppppplStack_2c8 = pppppplVar21;
                  pppppplStack_2c0 = pppppplVar16;
                  pppppplStack_2b8 = pppppplVar5;
                  if (ppppplStack_300 != (long *****)0x0) {
                    uVar10 = _free(lVar20);
                  }
                  goto LAB_100f42578;
                }
              }
              pppppplStack_2c8 = (long ******)&DAT_10112965c;
              pppppplStack_2c0 = (long ******)&pppppplStack_318;
              pppppplStack_2b8 = (long ******)&DAT_10112965c;
              pppppplStack_2b0 = &ppppplStack_300;
              puStack_2a8 = &DAT_10112965c;
              ppppppplStack_2d0 = ppppppplVar18;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (auStack_2e8,s_plugin_id_____belongs_to_marketp_108ad4031,&ppppppplStack_2d0
                        );
              uVar10 = FUN_108856624(auStack_2e8);
              *puVar15 = 0x8000000000000000;
              puVar15[1] = uVar10;
              if (ppppplStack_300 != (long *****)0x0) {
                uVar10 = _free(lStack_2f8);
              }
              pppppplVar16 = pppppplStack_310;
              pppppplVar21 = pppppplStack_318;
              if (ppppppplStack_330 != (long *******)0x0) {
                uVar10 = _free(pppppplStack_328);
                pppppplVar16 = pppppplStack_310;
                pppppplVar21 = pppppplStack_318;
              }
              goto joined_r0x000100f42630;
            }
            pppppplStack_358 = pppppplStack_2c8;
            ppppppplStack_360 = ppppppplStack_2d0;
            pppppplStack_348 = pppppplStack_2b8;
            pppppplStack_350 = pppppplStack_2c0;
            puStack_338 = puStack_2a8;
            pppppplStack_340 = pppppplStack_2b0;
            ppppppplStack_2d0 = (long *******)&ppppppplStack_360;
            pppppplStack_2c0 = (long ******)&pppppplStack_348;
            pppppplStack_2c8 = (long ******)&DAT_1048e978c;
            pppppplStack_2b8 = (long ******)&DAT_1048e978c;
            uVar10 = __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                               (&ppppppplStack_260,s___108b03abb,&ppppppplStack_2d0);
            pppppplStack_298 = pppppplStack_258;
            ppppppplStack_2a0 = ppppppplStack_260;
            pppppplStack_290 = pppppplStack_250;
            puVar15[5] = puStack_2a8;
            puVar15[4] = pppppplStack_2b0;
            puVar15[7] = pppppplStack_258;
            puVar15[6] = ppppppplStack_260;
            puVar15[8] = pppppplStack_250;
            puVar15[1] = pppppplVar21;
            *puVar15 = ppppppplVar4;
            puVar15[3] = pppppplVar5;
            puVar15[2] = pppppplVar16;
            ppppppplStack_2d0 = ppppppplVar4;
            pppppplStack_2c8 = pppppplVar21;
            pppppplStack_2c0 = pppppplVar16;
            pppppplStack_2b8 = pppppplVar5;
LAB_100f42578:
            pppppplVar21 = *ppppppplVar18;
            pppppplVar16 = pppppplVar3;
          }
          if (pppppplVar21 == (long ******)0x0) {
            return uVar10;
          }
LAB_100f426e0:
          uVar10 = _free(pppppplVar16);
          return uVar10;
        }
        _memcpy(puVar13,puVar24,pcVar22);
        pcVar26 = pcVar22;
        if (pcVar22 == (char *)0x8000000000000000) goto LAB_100f41ea0;
      }
    }
    puVar24 = (ulong *)_malloc(0x60);
    if (puVar24 == (ulong *)0x0) {
      func_0x0001087c9084(8,0x60);
      goto LAB_100f423c0;
    }
    lVar20 = 0;
    lStack_130 = CONCAT71(uStack_187,uStack_188);
    uStack_128 = uStack_180;
    uStack_108 = CONCAT53(uStack_15d,CONCAT12(uStack_15e,uStack_160));
    puStack_118 = puStack_170;
    uStack_120 = uStack_178;
    *puVar24 = (ulong)pcVar26;
    puVar24[1] = (ulong)puVar13;
    puVar24[2] = (ulong)pcVar22;
    pcStack_158 = (char *)0x4;
    pcStack_148 = (char *)0x1;
    lStack_110 = lStack_168;
    puStack_150 = puVar24;
    auStack_140 = auStack_198;
    while( true ) {
      pcVar26 = pcStack_148;
      __ZN80__LT_std__path__Components_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h2794890ed267533bE
                (&pcStack_100,auStack_140);
      if ((byte)pcStack_100 == 10) break;
      pcVar22 = (char *)(((ulong)pcStack_100 & 0xff) - 5);
      if ((byte)pcStack_100 < 6) {
        pcVar22 = (char *)0x0;
      }
      if ((long)pcVar22 < 2) {
        pcVar17 = pcStack_d0;
        if (pcVar22 != (char *)0x0) {
          pcVar17 = pcVar22;
        }
        puVar13 = puStack_d8;
        if (pcVar22 != (char *)0x0) {
          puVar13 = (ulong *)&UNK_108cb5505;
        }
      }
      else if (pcVar22 == (char *)0x2) {
        pcVar17 = (char *)0x1;
        puVar13 = (ulong *)&UNK_108cc3d20;
      }
      else {
        pcVar17 = (char *)0x2;
        if (pcVar22 != (char *)0x3) {
          pcVar17 = pcStack_f0;
        }
        puVar13 = (ulong *)&UNK_108cc3d21;
        if (pcVar22 != (char *)0x3) {
          puVar13 = puStack_f8;
        }
      }
      __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&lStack_c8,puVar13,pcVar17);
      lVar7 = lStack_b8;
      lVar6 = lStack_c0;
      lVar25 = lStack_c8;
      lVar12 = lStack_c0;
      if (lStack_c8 == -0x8000000000000000) {
        if (lStack_b8 == 0) {
          lVar12 = 1;
          lVar25 = 0;
        }
        else {
          lVar12 = _malloc(lStack_b8);
          if (lVar12 == 0) {
            func_0x0001087c9084(1,lVar7);
            goto LAB_100f423c0;
          }
          _memcpy(lVar12,lVar6,lVar7);
          lVar25 = lVar7;
          if (lVar7 == -0x8000000000000000) break;
        }
      }
      if (pcVar26 == pcStack_158) {
        FUN_108855060(&pcStack_158,pcVar26,1,8,0x18);
        puVar24 = puStack_150;
      }
      *(long *)((long)puVar24 + lVar20 + 0x18) = lVar25;
      *(long *)((long)puVar24 + lVar20 + 0x20) = lVar12;
      *(long *)((long)puVar24 + lVar20 + 0x28) = lVar7;
      pcStack_148 = pcVar26 + 1;
      lVar20 = lVar20 + 0x18;
    }
    pcVar26 = pcStack_148;
    puVar24 = puStack_150;
    puStack_f8 = puStack_150;
    pcStack_100 = pcStack_158;
    pcStack_f0 = pcStack_148;
    plVar11 = (long *)_malloc((long)param_4 * 0x18);
  }
  if (plVar11 == (long *)0x0) {
    func_0x0001087c9084(8,(long)param_4 * 0x18);
    goto LAB_100f423c0;
  }
  lVar20 = *plVar19;
  lVar25 = plVar19[1];
  auStack_140._0_8_ = param_4;
  auStack_140._8_8_ = plVar11;
  if (lVar25 != 0) {
    lVar12 = _malloc(lVar25);
    if (lVar12 != 0) goto LAB_100f41fa4;
LAB_100f42058:
    func_0x0001087c9084(1,lVar25);
LAB_100f423c0:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100f423c4);
    (*pcVar8)();
  }
  lVar12 = 1;
LAB_100f41fa4:
  _memcpy(lVar12,lVar20,lVar25);
  *plVar11 = lVar25;
  plVar11[1] = lVar12;
  plVar11[2] = lVar25;
  lVar20 = plVar19[2];
  lVar25 = plVar19[3];
  if (lVar25 == 0) {
    lVar12 = 1;
  }
  else {
    lVar12 = _malloc(lVar25);
    if (lVar12 == 0) goto LAB_100f42058;
  }
  _memcpy(lVar12,lVar20,lVar25);
  plVar11[3] = lVar25;
  plVar11[4] = lVar12;
  plVar11[5] = lVar25;
  lVar20 = plVar19[4];
  lVar25 = plVar19[5];
  if (lVar25 == 0) {
    lVar12 = 1;
  }
  else {
    lVar12 = _malloc(lVar25);
    if (lVar12 == 0) goto LAB_100f42058;
  }
  _memcpy(lVar12,lVar20,lVar25);
  plVar11[6] = lVar25;
  plVar11[7] = lVar12;
  plVar11[8] = lVar25;
  if (param_4 != (char *)0x3) {
    lVar20 = plVar19[6];
    lVar25 = plVar19[7];
    if (lVar25 == 0) {
      lVar12 = 1;
    }
    else {
      lVar12 = _malloc(lVar25);
      if (lVar12 == 0) goto LAB_100f42058;
    }
    _memcpy(lVar12,lVar20,lVar25);
    plVar11[9] = lVar25;
    plVar11[10] = lVar12;
    plVar11[0xb] = lVar25;
  }
  lVar20 = (long)pcVar26 - (long)param_4;
  if ((param_4 <= pcVar26) && (plVar11[2] == puVar24[lVar20 * 3 + 2])) {
    iVar9 = _memcmp(plVar11[1],puVar24[lVar20 * 3 + 1]);
    if ((iVar9 == 0) && (plVar11[5] == puVar24[lVar20 * 3 + 5])) {
      iVar9 = _memcmp(plVar11[4],puVar24[lVar20 * 3 + 4]);
      if ((iVar9 == 0) && (plVar11[8] == puVar24[lVar20 * 3 + 8])) {
        iVar9 = _memcmp(plVar11[7],puVar24[lVar20 * 3 + 7]);
        if (iVar9 == 0) {
          if (param_4 == (char *)0x3) {
            uVar23 = 1;
            goto LAB_100f420f8;
          }
          if (plVar11[0xb] == puVar24[lVar20 * 3 + 0xb]) {
            iVar9 = _memcmp(plVar11[10],puVar24[lVar20 * 3 + 10]);
            uVar23 = -(uint)(iVar9 == 0);
            goto LAB_100f420f8;
          }
        }
      }
    }
  }
  uVar23 = 0;
LAB_100f420f8:
  if (*plVar11 != 0) {
    _free(plVar11[1]);
  }
  if (plVar11[3] != 0) {
    _free(plVar11[4]);
  }
  if (plVar11[6] != 0) {
    _free(plVar11[7]);
  }
  if ((param_4 != (char *)0x3) && (plVar11[9] != 0)) {
    _free(plVar11[10]);
  }
  _free(plVar11);
  if (pcVar26 != (char *)0x0) {
    puVar13 = puVar24 + 1;
    do {
      if (puVar13[-1] != 0) {
        _free(*puVar13);
      }
      puVar13 = puVar13 + 3;
      pcVar26 = pcVar26 + -1;
    } while (pcVar26 != (char *)0x0);
  }
  if (pcStack_100 != (char *)0x0) {
    _free(puVar24);
  }
  return (ulong)(uVar23 & 1);
}

