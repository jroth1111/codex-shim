
/* WARNING: Removing unreachable block (ram,0x000101439eb0) */
/* WARNING: Removing unreachable block (ram,0x00010143a0b0) */
/* WARNING: Removing unreachable block (ram,0x000101439efc) */
/* WARNING: Removing unreachable block (ram,0x000101439e5c) */
/* WARNING: Removing unreachable block (ram,0x000101439e18) */
/* WARNING: Type propagation algorithm not settling */

void FUN_101439c98(undefined8 *param_1,char *param_2)

{
  byte *pbVar1;
  long lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *puVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *puVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  char *pcVar12;
  ulong uVar13;
  long *plVar14;
  byte bVar15;
  undefined8 ******ppppppuVar16;
  undefined8 *in_x11;
  char *pcVar17;
  byte *pbVar18;
  long lVar19;
  long lVar20;
  undefined8 *******pppppppuVar21;
  char *pcVar22;
  undefined8 *******pppppppuVar23;
  undefined8 *******pppppppuVar24;
  long lVar25;
  long lVar26;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *******pppppppuStack_3e0;
  undefined8 *******pppppppuStack_3d8;
  undefined8 *******pppppppuStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 *******pppppppuStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *******pppppppuStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *******pppppppuStack_3a0;
  undefined8 *puStack_398;
  undefined8 *******pppppppuStack_390;
  undefined8 *******pppppppuStack_388;
  undefined8 *puStack_380;
  undefined8 *******pppppppuStack_378;
  undefined8 *puStack_370;
  undefined8 *******pppppppuStack_368;
  undefined8 *puStack_360;
  undefined8 *******pppppppuStack_358;
  undefined8 *puStack_350;
  undefined8 *******pppppppuStack_348;
  undefined8 *******pppppppuStack_340;
  undefined8 *puStack_338;
  undefined8 *******pppppppuStack_330;
  undefined8 *puStack_328;
  undefined8 *******pppppppuStack_320;
  undefined8 *puStack_318;
  undefined8 *******pppppppuStack_310;
  undefined8 *puStack_308;
  undefined8 *******pppppppuStack_300;
  undefined8 uStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *******pppppppuStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *******pppppppuStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *******pppppppuStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *******pppppppuStack_2b0;
  undefined8 *******pppppppuStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *******pppppppuStack_298;
  undefined8 *puStack_290;
  undefined8 *******pppppppuStack_288;
  undefined8 *puStack_280;
  undefined8 *******pppppppuStack_278;
  undefined8 *puStack_270;
  undefined8 *******pppppppuStack_268;
  undefined8 *******pppppppuStack_260;
  undefined8 *puStack_258;
  undefined8 *******pppppppuStack_250;
  undefined8 *puStack_248;
  undefined8 *******pppppppuStack_240;
  undefined8 *puStack_238;
  undefined8 *******pppppppuStack_230;
  undefined8 *puStack_228;
  undefined8 *******pppppppuStack_220;
  undefined8 *******pppppppuStack_210;
  undefined8 *puStack_208;
  undefined8 *******pppppppuStack_200;
  undefined8 *puStack_1f8;
  undefined8 *******pppppppuStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *******pppppppuStack_1d0;
  undefined8 *******pppppppuStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *******pppppppuStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *******pppppppuStack_1a0;
  undefined8 *puStack_198;
  undefined8 *******pppppppuStack_190;
  undefined8 *puStack_188;
  undefined8 *******pppppppuStack_180;
  undefined8 *******pppppppuStack_178;
  undefined8 *puStack_170;
  undefined8 *******pppppppuStack_168;
  undefined8 *puStack_160;
  undefined8 *******pppppppuStack_158;
  undefined8 *puStack_150;
  undefined8 *******pppppppuStack_148;
  undefined8 *puStack_140;
  undefined8 *******pppppppuStack_138;
  undefined8 *puStack_130;
  undefined8 *******pppppppuStack_128;
  undefined8 *puStack_120;
  undefined8 *******pppppppuStack_118;
  undefined8 *puStack_110;
  undefined8 *******pppppppuStack_108;
  undefined8 *puStack_100;
  undefined8 *******pppppppuStack_f8;
  undefined8 *puStack_f0;
  undefined8 *******pppppppuStack_e8;
  undefined8 *puStack_e0;
  undefined8 *******pppppppuStack_d8;
  undefined8 *puStack_d0;
  undefined8 *******pppppppuStack_c8;
  undefined8 *puStack_c0;
  undefined8 *******pppppppuStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined8 *puStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined8 *puStack_98;
  undefined8 *******pppppppuStack_90;
  undefined8 *puStack_88;
  undefined8 *******pppppppuStack_80;
  
  if (*param_2 == '\x14') {
    lVar19 = *(long *)(param_2 + 0x18);
    if (lVar19 == 0) {
      puStack_2e8 = (undefined8 *)FUN_1087e422c(0,&UNK_10b22e4d8,&UNK_10b20a590);
    }
    else {
      pcVar22 = *(char **)(param_2 + 0x10);
      pcVar17 = pcVar22 + 0x20;
      cVar3 = *pcVar22;
      if (cVar3 == '\x10' || cVar3 == '\x12') {
        puStack_1b8 = param_1;
        pppppppuVar21 = (undefined8 *******)0x8000000000000001;
LAB_10143a18c:
        puStack_1a8 = puStack_3c8;
        pppppppuStack_1b0 = pppppppuStack_3d0;
        puStack_198 = puStack_3b8;
        pppppppuStack_1a0 = pppppppuStack_3c0;
        puStack_188 = puStack_3a8;
        pppppppuStack_190 = pppppppuStack_3b0;
        pppppppuStack_180 = pppppppuStack_3a0;
        pppppppuStack_1c0 = pppppppuVar21;
        if (lVar19 == 1) {
          puStack_3c8 = (undefined8 *)FUN_1087e422c(1,&UNK_10b22e4d8,&UNK_10b20a590);
LAB_10143a1cc:
          pppppppuStack_3d0 = (undefined8 *******)0x8000000000000002;
        }
        else {
          cVar3 = pcVar22[0x20];
          if (cVar3 != '\x10' && cVar3 != '\x12') {
            if (cVar3 == '\x11') {
              pcVar17 = *(char **)(pcVar22 + 0x28);
            }
            FUN_10140a0b8(&uStack_2f0,pcVar17);
            puStack_3c8 = puStack_2e8;
            if (uStack_2f0 != (undefined8 *******)0x8000000000000002) {
              pppppppuStack_3d0 = pppppppuStack_2e0;
              puStack_3b8 = puStack_2c8;
              pppppppuStack_3c0 = pppppppuStack_2d0;
              puStack_3a8 = puStack_2b8;
              pppppppuStack_3b0 = pppppppuStack_2c0;
              pppppppuStack_3a0 = pppppppuStack_2b0;
              puStack_258 = puStack_2e8;
              pppppppuVar24 = uStack_2f0;
              puVar4 = puStack_2d8;
              if (uStack_2f0 != (undefined8 *******)0x8000000000000003) goto LAB_10143a28c;
            }
            goto LAB_10143a1cc;
          }
          puStack_258 = puStack_1b8;
          pppppppuVar24 = (undefined8 *******)0x8000000000000001;
          puVar4 = puStack_3c8;
LAB_10143a28c:
          puStack_3c8 = puVar4;
          puStack_160 = puStack_3c8;
          pppppppuStack_168 = pppppppuStack_3d0;
          puStack_150 = puStack_3b8;
          pppppppuStack_158 = pppppppuStack_3c0;
          puStack_140 = puStack_3a8;
          pppppppuStack_148 = pppppppuStack_3b0;
          pppppppuStack_138 = pppppppuStack_3a0;
          pppppppuStack_178 = pppppppuVar24;
          puStack_170 = puStack_258;
          if (lVar19 == 2) {
            puStack_3c8 = (undefined8 *)FUN_1087e422c(2,&UNK_10b22e4d8,&UNK_10b20a590);
          }
          else {
            pcVar17 = pcVar22 + 0x40;
            cVar3 = *pcVar17;
            if ((cVar3 == '\x10') || (cVar3 == '\x12')) {
              pppppppuStack_260 = (undefined8 *******)0x8000000000000001;
LAB_10143a558:
              puStack_328 = puStack_208;
              pppppppuStack_330 = pppppppuStack_210;
              puStack_318 = puStack_1f8;
              pppppppuStack_320 = pppppppuStack_200;
              puStack_308 = puStack_1e8;
              pppppppuStack_310 = pppppppuStack_1f0;
              pppppppuStack_300 = pppppppuStack_1e0;
              puStack_3a8 = puStack_198;
              pppppppuStack_3b0 = pppppppuStack_1a0;
              puStack_398 = puStack_188;
              pppppppuStack_3a0 = pppppppuStack_190;
              puStack_3c8 = puStack_1b8;
              pppppppuStack_3d0 = pppppppuStack_1c0;
              puStack_3b8 = puStack_1a8;
              pppppppuStack_3c0 = pppppppuStack_1b0;
              pppppppuStack_358 = pppppppuStack_148;
              puStack_360 = puStack_150;
              pppppppuStack_348 = pppppppuStack_138;
              puStack_350 = puStack_140;
              pppppppuStack_378 = pppppppuStack_168;
              puStack_380 = puStack_170;
              pppppppuStack_368 = pppppppuStack_158;
              puStack_370 = puStack_160;
              pppppppuStack_388 = pppppppuStack_178;
              pppppppuStack_390 = pppppppuStack_180;
              pppppppuStack_340 = pppppppuStack_260;
              puStack_338 = puStack_258;
              if (pppppppuStack_1c0 == (undefined8 *******)0x8000000000000002) goto LAB_10143a754;
              puStack_248 = puStack_208;
              pppppppuStack_250 = pppppppuStack_210;
              puStack_238 = puStack_1f8;
              pppppppuStack_240 = pppppppuStack_200;
              puStack_228 = puStack_1e8;
              pppppppuStack_230 = pppppppuStack_1f0;
              pppppppuStack_220 = pppppppuStack_1e0;
              pppppppuStack_288 = pppppppuStack_158;
              puStack_290 = puStack_160;
              pppppppuStack_278 = pppppppuStack_148;
              puStack_280 = puStack_150;
              pppppppuStack_268 = pppppppuStack_138;
              puStack_270 = puStack_140;
              puStack_2c8 = puStack_198;
              pppppppuStack_2d0 = pppppppuStack_1a0;
              puStack_2b8 = puStack_188;
              pppppppuStack_2c0 = pppppppuStack_190;
              pppppppuStack_2a8 = pppppppuStack_178;
              pppppppuStack_2b0 = pppppppuStack_180;
              pppppppuStack_298 = pppppppuStack_168;
              puStack_2a0 = puStack_170;
              puStack_2e8 = puStack_1b8;
              uStack_2f0 = pppppppuStack_1c0;
              puStack_2d8 = puStack_1a8;
              pppppppuStack_2e0 = pppppppuStack_1b0;
              pppppppuVar21 = pppppppuStack_1c0;
              if (lVar19 != 3) {
                pppppppuStack_178 = (undefined8 *******)0x3;
                puStack_3c8 = (undefined8 *)
                              FUN_1087e422c((lVar19 + 0x7fffffffffffffdU & 0x7ffffffffffffff) + 3,
                                            &pppppppuStack_178,&UNK_10b23a1b0);
                goto LAB_10143a4c4;
              }
              goto LAB_10143a75c;
            }
            if (cVar3 == '\x11') {
              pcVar17 = *(char **)(pcVar22 + 0x48);
            }
            FUN_101442e24(&uStack_2f0,pcVar17);
            puStack_3c8 = puStack_2e8;
            if (uStack_2f0 != (undefined8 *******)0x8000000000000002) {
              puStack_208 = puStack_2d8;
              pppppppuStack_210 = pppppppuStack_2e0;
              puStack_1f8 = puStack_2c8;
              pppppppuStack_200 = pppppppuStack_2d0;
              puStack_1e8 = puStack_2b8;
              pppppppuStack_1f0 = pppppppuStack_2c0;
              pppppppuStack_1e0 = pppppppuStack_2b0;
              puStack_258 = puStack_2e8;
              pppppppuStack_260 = uStack_2f0;
              if (uStack_2f0 != (undefined8 *******)0x8000000000000003) goto LAB_10143a558;
            }
          }
          pppppppuStack_3d0 = (undefined8 *******)0x8000000000000002;
          if ((pppppppuVar24 != (undefined8 *******)0x8000000000000001) &&
             (pppppppuVar24 != (undefined8 *******)0x8000000000000000)) {
            if ((pppppppuStack_158 != (undefined8 *******)0x0) &&
               ((long)pppppppuStack_158 * 9 != -0x11)) {
              _free(puStack_160 + (-1 - (long)pppppppuStack_158));
            }
            func_0x000100cd7284(&pppppppuStack_178);
          }
        }
        if ((pppppppuVar21 != (undefined8 *******)0x8000000000000001) &&
           (pppppppuVar21 != (undefined8 *******)0x8000000000000000)) {
          if ((pppppppuStack_1a0 != (undefined8 *******)0x0) &&
             ((long)pppppppuStack_1a0 * 9 != -0x11)) {
            _free(puStack_1a8 + (-1 - (long)pppppppuStack_1a0));
          }
          pppppppuVar21 = &pppppppuStack_1c0;
LAB_10143a750:
          func_0x000100cd7284(pppppppuVar21);
        }
        goto LAB_10143a754;
      }
      pcVar12 = pcVar22;
      if (cVar3 == '\x11') {
        pcVar12 = *(char **)(pcVar22 + 8);
      }
      FUN_101452924(&uStack_2f0,pcVar12);
      if (uStack_2f0 != (undefined8 *******)0x8000000000000002) {
        puStack_3c8 = puStack_2d8;
        pppppppuStack_3d0 = pppppppuStack_2e0;
        puStack_3b8 = puStack_2c8;
        pppppppuStack_3c0 = pppppppuStack_2d0;
        puStack_3a8 = puStack_2b8;
        pppppppuStack_3b0 = pppppppuStack_2c0;
        pppppppuStack_3a0 = pppppppuStack_2b0;
        puStack_1b8 = puStack_2e8;
        pppppppuVar21 = uStack_2f0;
        if (uStack_2f0 != (undefined8 *******)0x8000000000000003) goto LAB_10143a18c;
      }
    }
    pppppppuStack_3d0 = (undefined8 *******)0x8000000000000002;
    puStack_3c8 = puStack_2e8;
LAB_10143a754:
    pppppppuVar21 = (undefined8 *******)0x8000000000000002;
  }
  else {
    if (*param_2 != '\x15') {
      puStack_3c8 = (undefined8 *)FUN_108855c40(param_2,&pppppppuStack_3d0,&UNK_10b20aa00);
      goto LAB_10143a768;
    }
    lVar26 = *(long *)(param_2 + 0x10);
    lVar20 = *(long *)(param_2 + 0x18) * 0x40;
    lVar19 = lVar26 + lVar20;
    pppppppuStack_210 = (undefined8 *******)0x8000000000000002;
    pppppppuStack_1c0 = (undefined8 *******)0x8000000000000002;
    pppppppuStack_178 = (undefined8 *******)0x8000000000000002;
    if (*(long *)(param_2 + 0x18) == 0) {
      ppppppuVar16 = (undefined8 ******)0x0;
      pppppppuStack_388 = (undefined8 *******)0x8000000000000001;
      pppppppuStack_3d0 = (undefined8 *******)0x8000000000000001;
      pppppppuVar24 = (undefined8 *******)0x8000000000000001;
      puStack_3e8 = in_x11;
    }
    else {
      lVar25 = 0;
      ppppppuVar16 = (undefined8 ******)((lVar20 - 0x40U >> 6) + 1);
      pppppppuVar24 = (undefined8 *******)0x8000000000000002;
      pppppppuVar21 = (undefined8 *******)0x8000000000000002;
      pppppppuVar23 = (undefined8 *******)0x8000000000000002;
      pppppppuStack_3e0 = (undefined8 *******)0x8000000000000002;
      pppppppuStack_3d8 = (undefined8 *******)0x8000000000000002;
      do {
        pbVar1 = (byte *)(lVar26 + lVar25);
        pbVar18 = pbVar1 + 0x20;
        bVar15 = *pbVar1;
        if (0xc < bVar15) {
          if (bVar15 == 0xd) {
            plVar14 = *(long **)(lVar26 + lVar25 + 8);
            lVar2 = *(long *)(lVar26 + lVar25 + 0x10);
            if (lVar2 == 5) goto LAB_101439f00;
            if (lVar2 == 0xb) {
LAB_101439eb4:
              if (*plVar14 == 0x7461746963696c65 &&
                  *(long *)((long)plVar14 + 3) == 0x6e6f697461746963) {
                uStack_2f0 = (undefined8 *******)CONCAT62(uStack_2f0._2_6_,0x100);
              }
              else {
LAB_101439f20:
                uStack_2f0 = (undefined8 *******)CONCAT62(uStack_2f0._2_6_,0x300);
              }
            }
            else {
joined_r0x000101439e7c:
              if ((lVar2 != 8) || (*plVar14 != 0x676e696c706d6173)) goto LAB_101439f20;
              uStack_2f0 = (undefined8 *******)((ulong)uStack_2f0._2_6_ << 0x10);
            }
            goto LAB_101439f34;
          }
          if (bVar15 != 0xe) {
            if (bVar15 != 0xf) goto LAB_10143a0b4;
            FUN_100b3ad80(&uStack_2f0,*(undefined8 *)(lVar26 + lVar25 + 8),
                          *(undefined8 *)(lVar26 + lVar25 + 0x10));
            if (((ulong)uStack_2f0 & 1) != 0) goto LAB_10143a0d8;
            goto LAB_101439f34;
          }
          FUN_100b3ad80(&uStack_2f0,*(undefined8 *)(lVar26 + lVar25 + 0x10),
                        *(undefined8 *)(lVar26 + lVar25 + 0x18));
          if (((ulong)uStack_2f0 & 1) == 0) goto LAB_101439f34;
LAB_10143a0d8:
          puStack_170 = puStack_3e8;
          puStack_1b8 = puStack_3f8;
          pppppppuStack_1c0 = pppppppuStack_3e0;
          puStack_208 = puStack_3f0;
          pppppppuStack_210 = pppppppuStack_3d8;
          puStack_3c8 = puStack_2e8;
          pppppppuStack_178 = pppppppuVar24;
          goto LAB_10143a108;
        }
        if (bVar15 == 1) {
          bVar15 = *(byte *)(lVar26 + lVar25 + 1);
          if (2 < bVar15) {
            bVar15 = 3;
          }
          uStack_2f0 = (undefined8 *******)((ulong)CONCAT61(uStack_2f0._2_6_,bVar15) << 8);
        }
        else if (bVar15 == 4) {
          uVar13 = *(ulong *)(lVar26 + lVar25 + 8);
          if (2 < uVar13) {
            uVar13 = 3;
          }
          uStack_2f0 = (undefined8 *******)((ulong)CONCAT61(uStack_2f0._2_6_,(char)uVar13) << 8);
        }
        else {
          if (bVar15 != 0xc) {
LAB_10143a0b4:
            puStack_2e8 = (undefined8 *)FUN_108855c40(pbVar1,&pppppppuStack_3d0,&UNK_10b20fa40);
            uStack_2f0 = (undefined8 *******)CONCAT71(uStack_2f0._1_7_,1);
            goto LAB_10143a0d8;
          }
          plVar14 = *(long **)(lVar26 + lVar25 + 0x10);
          lVar2 = *(long *)(lVar26 + lVar25 + 0x18);
          if (lVar2 != 5) {
            if (lVar2 != 0xb) goto joined_r0x000101439e7c;
            goto LAB_101439eb4;
          }
LAB_101439f00:
          if ((int)*plVar14 != 0x6c6f6f74 || *(char *)((long)plVar14 + 4) != 's')
          goto LAB_101439f20;
          uStack_2f0 = (undefined8 *******)CONCAT62(uStack_2f0._2_6_,0x200);
        }
LAB_101439f34:
        if (uStack_2f0._1_1_ < 2) {
          if (uStack_2f0._1_1_ == 0) {
            if (pppppppuVar21 == (undefined8 *******)0x8000000000000002) {
              bVar15 = *pbVar18;
              if (bVar15 == 0x10) {
LAB_101439f68:
                pppppppuVar21 = (undefined8 *******)0x8000000000000001;
              }
              else {
                if (bVar15 == 0x11) {
                  pbVar18 = *(byte **)(lVar26 + lVar25 + 0x28);
                }
                else if (bVar15 == 0x12) goto LAB_101439f68;
                FUN_101452924(&uStack_2f0,pbVar18);
                pppppppuVar21 = uStack_2f0;
                if (uStack_2f0 == (undefined8 *******)0x8000000000000002) {
                  pppppppuVar21 = (undefined8 *******)0x8000000000000002;
LAB_10143a7f8:
                  puStack_170 = puStack_3e8;
                  puStack_1b8 = puStack_3f8;
                  pppppppuStack_1c0 = pppppppuStack_3e0;
                  puStack_208 = puStack_3f0;
                  pppppppuStack_210 = pppppppuStack_3d8;
                  puStack_3c8 = puStack_2e8;
                  pppppppuStack_178 = pppppppuVar24;
                  goto LAB_10143a108;
                }
              }
              puStack_1f8 = puStack_2d8;
              pppppppuStack_200 = pppppppuStack_2e0;
              puStack_1e8 = puStack_2c8;
              pppppppuStack_1f0 = pppppppuStack_2d0;
              puStack_1d8 = puStack_2b8;
              pppppppuStack_1e0 = pppppppuStack_2c0;
              pppppppuStack_1d0 = pppppppuStack_2b0;
              puStack_3f0 = puStack_2e8;
              pppppppuStack_3d8 = pppppppuVar21;
              goto LAB_101439d64;
            }
            puStack_170 = puStack_3e8;
            puStack_1b8 = puStack_3f8;
            pppppppuStack_1c0 = pppppppuStack_3e0;
            puStack_208 = puStack_3f0;
            pppppppuStack_210 = pppppppuStack_3d8;
            pppppppuStack_3d0 = (undefined8 *******)&UNK_108c98478;
            puStack_3c8 = (undefined8 *)0x8;
            uStack_2f0 = &pppppppuStack_3d0;
            puStack_2e8 = (undefined8 *)&DAT_100c7b3a0;
            pppppppuStack_178 = pppppppuVar24;
            puStack_3c8 = (undefined8 *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_2f0);
          }
          else {
            if (pppppppuVar23 == (undefined8 *******)0x8000000000000002) {
              bVar15 = *pbVar18;
              if (bVar15 == 0x10) {
LAB_101439fc8:
                pppppppuVar23 = (undefined8 *******)0x8000000000000001;
              }
              else {
                if (bVar15 == 0x11) {
                  pbVar18 = *(byte **)(lVar26 + lVar25 + 0x28);
                }
                else if (bVar15 == 0x12) goto LAB_101439fc8;
                FUN_10140a0b8(&uStack_2f0,pbVar18);
                pppppppuVar23 = uStack_2f0;
                if (uStack_2f0 == (undefined8 *******)0x8000000000000002) {
                  pppppppuVar23 = (undefined8 *******)0x8000000000000002;
                  goto LAB_10143a7f8;
                }
              }
              puStack_1a8 = puStack_2d8;
              pppppppuStack_1b0 = pppppppuStack_2e0;
              puStack_198 = puStack_2c8;
              pppppppuStack_1a0 = pppppppuStack_2d0;
              puStack_188 = puStack_2b8;
              pppppppuStack_190 = pppppppuStack_2c0;
              pppppppuStack_180 = pppppppuStack_2b0;
              puStack_3f8 = puStack_2e8;
              pppppppuStack_3e0 = pppppppuVar23;
              goto LAB_101439d64;
            }
            puStack_170 = puStack_3e8;
            puStack_1b8 = puStack_3f8;
            pppppppuStack_1c0 = pppppppuStack_3e0;
            puStack_208 = puStack_3f0;
            pppppppuStack_210 = pppppppuStack_3d8;
            pppppppuStack_3d0 = (undefined8 *******)&UNK_108cb9329;
            puStack_3c8 = (undefined8 *)0xb;
            uStack_2f0 = &pppppppuStack_3d0;
            puStack_2e8 = (undefined8 *)&DAT_100c7b3a0;
            pppppppuStack_178 = pppppppuVar24;
            puStack_3c8 = (undefined8 *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_2f0);
          }
LAB_10143a108:
          pppppppuStack_3d0 = (undefined8 *******)0x8000000000000002;
          if (pppppppuVar24 != (undefined8 *******)0x8000000000000002) {
joined_r0x00010143a124:
            pppppppuStack_3d0 = (undefined8 *******)0x8000000000000002;
            if ((pppppppuVar24 != (undefined8 *******)0x8000000000000001) &&
               (pppppppuStack_3d0 = (undefined8 *******)0x8000000000000002,
               pppppppuVar24 != (undefined8 *******)0x8000000000000000)) {
              if ((pppppppuStack_158 != (undefined8 *******)0x0) &&
                 ((long)pppppppuStack_158 * 9 != -0x11)) {
                _free(puStack_160 + (-1 - (long)pppppppuStack_158));
              }
              func_0x000100cd7284(&pppppppuStack_178);
            }
          }
LAB_10143a6b4:
          if (((pppppppuVar23 != (undefined8 *******)0x8000000000000002) &&
              (pppppppuVar23 != (undefined8 *******)0x8000000000000001)) &&
             (pppppppuVar23 != (undefined8 *******)0x8000000000000000)) {
            if ((pppppppuStack_1a0 != (undefined8 *******)0x0) &&
               ((long)pppppppuStack_1a0 * 9 != -0x11)) {
              _free(puStack_1a8 + (-1 - (long)pppppppuStack_1a0));
            }
            func_0x000100cd7284(&pppppppuStack_1c0);
          }
          if (((pppppppuVar21 == (undefined8 *******)0x8000000000000002) ||
              (pppppppuVar21 == (undefined8 *******)0x8000000000000001)) ||
             (pppppppuVar21 == (undefined8 *******)0x8000000000000000)) goto LAB_10143a754;
          if ((pppppppuStack_1f0 != (undefined8 *******)0x0) &&
             ((long)pppppppuStack_1f0 * 9 != -0x11)) {
            _free(puStack_1f8 + (-1 - (long)pppppppuStack_1f0));
          }
          pppppppuVar21 = &pppppppuStack_210;
          goto LAB_10143a750;
        }
        if (uStack_2f0._1_1_ == 2) {
          if (pppppppuVar24 != (undefined8 *******)0x8000000000000002) {
            puStack_170 = puStack_3e8;
            puStack_1b8 = puStack_3f8;
            pppppppuStack_1c0 = pppppppuStack_3e0;
            puStack_208 = puStack_3f0;
            pppppppuStack_210 = pppppppuStack_3d8;
            pppppppuStack_3d0 = (undefined8 *******)&UNK_108ca26d4;
            puStack_3c8 = (undefined8 *)0x5;
            uStack_2f0 = &pppppppuStack_3d0;
            puStack_2e8 = (undefined8 *)&DAT_100c7b3a0;
            pppppppuStack_178 = pppppppuVar24;
            puStack_3c8 = (undefined8 *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_2f0);
            goto joined_r0x00010143a124;
          }
          bVar15 = *pbVar18;
          if (bVar15 == 0x10) {
LAB_101439d3c:
            pppppppuVar24 = (undefined8 *******)0x8000000000000001;
          }
          else {
            if (bVar15 == 0x11) {
              pbVar18 = *(byte **)(lVar26 + lVar25 + 0x28);
            }
            else if (bVar15 == 0x12) goto LAB_101439d3c;
            FUN_101442e24(&uStack_2f0,pbVar18);
            pppppppuVar24 = uStack_2f0;
            if (uStack_2f0 == (undefined8 *******)0x8000000000000002) {
              puStack_1b8 = puStack_3f8;
              pppppppuStack_1c0 = pppppppuStack_3e0;
              puStack_208 = puStack_3f0;
              pppppppuStack_210 = pppppppuStack_3d8;
              pppppppuStack_3d0 = (undefined8 *******)0x8000000000000002;
              puStack_3c8 = puStack_2e8;
              goto LAB_10143a6b4;
            }
          }
          puStack_160 = puStack_2d8;
          pppppppuStack_168 = pppppppuStack_2e0;
          puStack_150 = puStack_2c8;
          pppppppuStack_158 = pppppppuStack_2d0;
          puStack_140 = puStack_2b8;
          pppppppuStack_148 = pppppppuStack_2c0;
          pppppppuStack_138 = pppppppuStack_2b0;
          puStack_3e8 = puStack_2e8;
        }
LAB_101439d64:
        lVar25 = lVar25 + 0x40;
      } while (lVar20 - lVar25 != 0);
      puStack_1b8 = puStack_3f8;
      puStack_208 = puStack_3f0;
      pppppppuStack_3d0 = pppppppuVar21;
      pppppppuVar6 = pppppppuStack_200;
      puVar4 = puStack_3f0;
      pppppppuVar8 = pppppppuStack_1f0;
      puVar5 = puStack_1f8;
      pppppppuVar10 = pppppppuStack_1e0;
      puVar7 = puStack_1e8;
      pppppppuVar11 = pppppppuStack_1d0;
      puVar9 = puStack_1d8;
      if (pppppppuVar21 == (undefined8 *******)0x8000000000000002) {
        pppppppuStack_3d0 = (undefined8 *******)0x8000000000000001;
        pppppppuVar6 = pppppppuStack_128;
        puVar4 = puStack_130;
        pppppppuVar8 = pppppppuStack_118;
        puVar5 = puStack_120;
        pppppppuVar10 = pppppppuStack_108;
        puVar7 = puStack_110;
        pppppppuVar11 = pppppppuStack_f8;
        puVar9 = puStack_100;
      }
      puStack_100 = puVar9;
      pppppppuStack_f8 = pppppppuVar11;
      puStack_110 = puVar7;
      pppppppuStack_108 = pppppppuVar10;
      puStack_120 = puVar5;
      pppppppuStack_118 = pppppppuVar8;
      puStack_130 = puVar4;
      pppppppuStack_128 = pppppppuVar6;
      pppppppuStack_388 = pppppppuVar23;
      puVar4 = puStack_3f8;
      pppppppuVar21 = pppppppuStack_1b0;
      puVar5 = puStack_1a8;
      pppppppuVar6 = pppppppuStack_1a0;
      puVar7 = puStack_198;
      pppppppuVar8 = pppppppuStack_190;
      puVar9 = puStack_188;
      pppppppuVar10 = pppppppuStack_180;
      if (pppppppuVar23 == (undefined8 *******)0x8000000000000002) {
        pppppppuStack_388 = (undefined8 *******)0x8000000000000001;
        puVar4 = puStack_f0;
        pppppppuVar21 = pppppppuStack_e8;
        puVar5 = puStack_e0;
        pppppppuVar6 = pppppppuStack_d8;
        puVar7 = puStack_d0;
        pppppppuVar8 = pppppppuStack_c8;
        puVar9 = puStack_c0;
        pppppppuVar10 = pppppppuStack_b8;
      }
      pppppppuStack_b8 = pppppppuVar10;
      puStack_c0 = puVar9;
      pppppppuStack_c8 = pppppppuVar8;
      puStack_d0 = puVar7;
      pppppppuStack_d8 = pppppppuVar6;
      puStack_e0 = puVar5;
      pppppppuStack_e8 = pppppppuVar21;
      puStack_f0 = puVar4;
      lVar26 = lVar19;
      if (pppppppuVar24 == (undefined8 *******)0x8000000000000002) {
        pppppppuVar24 = (undefined8 *******)0x8000000000000001;
      }
      else {
        puStack_a8 = puStack_160;
        pppppppuStack_b0 = pppppppuStack_168;
        puStack_98 = puStack_150;
        pppppppuStack_a0 = pppppppuStack_158;
        puStack_88 = puStack_140;
        pppppppuStack_90 = pppppppuStack_148;
        pppppppuStack_80 = pppppppuStack_138;
      }
    }
    pppppppuStack_3c0 = pppppppuStack_128;
    puStack_3c8 = puStack_130;
    pppppppuStack_3b0 = pppppppuStack_118;
    puStack_3b8 = puStack_120;
    pppppppuStack_3a0 = pppppppuStack_108;
    puStack_3a8 = puStack_110;
    pppppppuStack_390 = pppppppuStack_f8;
    puStack_398 = puStack_100;
    pppppppuStack_378 = pppppppuStack_e8;
    puStack_380 = puStack_f0;
    pppppppuStack_368 = pppppppuStack_d8;
    puStack_370 = puStack_e0;
    pppppppuStack_358 = pppppppuStack_c8;
    puStack_360 = puStack_d0;
    pppppppuStack_348 = pppppppuStack_b8;
    puStack_350 = puStack_c0;
    pppppppuStack_300 = pppppppuStack_80;
    puStack_318 = puStack_98;
    pppppppuStack_320 = pppppppuStack_a0;
    puStack_308 = puStack_88;
    pppppppuStack_310 = pppppppuStack_90;
    puStack_328 = puStack_a8;
    pppppppuStack_330 = pppppppuStack_b0;
    pppppppuStack_220 = pppppppuStack_80;
    puStack_238 = puStack_98;
    pppppppuStack_240 = pppppppuStack_a0;
    puStack_228 = puStack_88;
    pppppppuStack_230 = pppppppuStack_90;
    puStack_2e8 = puStack_130;
    puStack_2d8 = puStack_120;
    pppppppuStack_2e0 = pppppppuStack_128;
    pppppppuStack_2b0 = pppppppuStack_f8;
    pppppppuStack_298 = pppppppuStack_e8;
    puStack_2a0 = puStack_f0;
    puStack_2c8 = puStack_110;
    pppppppuStack_2d0 = pppppppuStack_118;
    puStack_2b8 = puStack_100;
    pppppppuStack_2c0 = pppppppuStack_108;
    puStack_248 = puStack_a8;
    pppppppuStack_250 = pppppppuStack_b0;
    pppppppuStack_278 = pppppppuStack_c8;
    puStack_280 = puStack_d0;
    pppppppuStack_268 = pppppppuStack_b8;
    puStack_270 = puStack_c0;
    pppppppuStack_288 = pppppppuStack_d8;
    puStack_290 = puStack_e0;
    pppppppuVar21 = pppppppuStack_3d0;
    pppppppuStack_340 = pppppppuVar24;
    puStack_338 = puStack_3e8;
    if (lVar19 - lVar26 != 0) {
      puStack_338 = puStack_3e8;
      uStack_2f0 = pppppppuStack_3d0;
      pppppppuStack_2a8 = pppppppuStack_388;
      pppppppuStack_260 = pppppppuVar24;
      puStack_258 = puStack_3e8;
      pppppppuStack_178 = (undefined8 *******)ppppppuVar16;
      puStack_3c8 = (undefined8 *)
                    FUN_1087e422c((long)ppppppuVar16 + ((ulong)(lVar19 - lVar26) >> 6),
                                  &pppppppuStack_178,&UNK_10b23a190);
LAB_10143a4c4:
      pppppppuStack_3d0 = (undefined8 *******)0x8000000000000002;
      FUN_100e2bb8c(&uStack_2f0);
      goto LAB_10143a754;
    }
  }
LAB_10143a75c:
  if (pppppppuVar21 != (undefined8 *******)0x8000000000000002) {
    param_1[0x15] = puStack_328;
    param_1[0x14] = pppppppuStack_330;
    param_1[0x17] = puStack_318;
    param_1[0x16] = pppppppuStack_320;
    param_1[0x19] = puStack_308;
    param_1[0x18] = pppppppuStack_310;
    param_1[0x1a] = pppppppuStack_300;
    param_1[0xd] = pppppppuStack_368;
    param_1[0xc] = puStack_370;
    param_1[0xf] = pppppppuStack_358;
    param_1[0xe] = puStack_360;
    param_1[0x11] = pppppppuStack_348;
    param_1[0x10] = puStack_350;
    param_1[0x13] = puStack_338;
    param_1[0x12] = pppppppuStack_340;
    param_1[5] = puStack_3a8;
    param_1[4] = pppppppuStack_3b0;
    param_1[7] = puStack_398;
    param_1[6] = pppppppuStack_3a0;
    param_1[9] = pppppppuStack_388;
    param_1[8] = pppppppuStack_390;
    param_1[0xb] = pppppppuStack_378;
    param_1[10] = puStack_380;
    param_1[1] = puStack_3c8;
    *param_1 = pppppppuStack_3d0;
    param_1[3] = puStack_3b8;
    param_1[2] = pppppppuStack_3c0;
    return;
  }
LAB_10143a768:
  *param_1 = 0x8000000000000003;
  param_1[1] = puStack_3c8;
  return;
}

