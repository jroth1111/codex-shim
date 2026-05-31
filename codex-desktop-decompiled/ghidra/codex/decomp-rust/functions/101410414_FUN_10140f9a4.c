
/* WARNING: Removing unreachable block (ram,0x00010140fc30) */
/* WARNING: Removing unreachable block (ram,0x00010140fca0) */
/* WARNING: Removing unreachable block (ram,0x00010140fea4) */
/* WARNING: Removing unreachable block (ram,0x00010140fb4c) */
/* WARNING: Removing unreachable block (ram,0x00010140fbec) */
/* WARNING: Removing unreachable block (ram,0x00010140fba8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10140f9a4(ulong *param_1,char *param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong uVar10;
  long *plVar11;
  undefined *puVar12;
  byte bVar13;
  long lVar14;
  char cVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  char *pcVar23;
  byte *pbVar25;
  ulong unaff_x25;
  undefined **ppuVar26;
  long unaff_x27;
  undefined **ppuVar27;
  ulong unaff_x28;
  undefined **ppuVar28;
  undefined1 auVar29 [16];
  char cStack_238;
  undefined3 uStack_237;
  undefined1 uStack_234;
  undefined3 uStack_233;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined **ppuStack_1e0;
  long lStack_1d8;
  char *pcStack_1d0;
  undefined8 uStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  ulong *puStack_198;
  undefined *puStack_190;
  char *pcStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined *puStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  ulong uStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  char cStack_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  char *pcVar24;
  
  if (*param_2 != '\x14') {
    puVar7 = (undefined *)FUN_108855c40(param_2,&puStack_78,&UNK_10b213668);
    goto LAB_1014101f8;
  }
  pcVar6 = *(char **)(param_2 + 0x10);
  ppuVar27 = *(undefined ***)(param_2 + 0x18);
  pcStack_188 = pcVar6 + (long)ppuVar27 * 0x20;
  ppuVar26 = ppuVar27;
  if ((undefined **)0x3332 < ppuVar27) {
    ppuVar26 = (undefined **)0x3333;
  }
  puStack_198 = param_1;
  if (ppuVar27 == (undefined **)0x0) {
    ppuStack_148 = (undefined **)0x0;
    puStack_140 = (undefined *)0x8;
    ppuStack_138 = (undefined **)0x0;
    ppuVar26 = (undefined **)0x0;
  }
  else {
    lVar18 = (long)ppuVar26 * 0x50;
    puStack_140 = (undefined *)_malloc(lVar18);
    if (puStack_140 == (undefined *)0x0) {
      uVar8 = func_0x0001087c9084(8,lVar18);
      FUN_100e448fc(&ppuStack_e0);
      uVar8 = __Unwind_Resume(uVar8);
      FUN_100e010fc(&ppuStack_e0);
      FUN_100e448fc(&ppuStack_148);
      uVar8 = __Unwind_Resume(uVar8);
      if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
        _free(lVar18);
      }
      if (((ulong)pcVar6 & 0x7fffffffffffffff) != 0) {
        _free(puStack_168);
      }
      if (unaff_x25 != 0) {
        _free(ppuVar26);
        FUN_100e448fc(&ppuStack_148);
        uVar8 = __Unwind_Resume(uVar8);
        FUN_100e010fc(&ppuStack_130);
        FUN_100e448fc(&ppuStack_148);
        uVar8 = __Unwind_Resume(uVar8);
        FUN_100e448fc(&ppuStack_148);
        uVar8 = __Unwind_Resume(uVar8);
        pcVar6 = (char *)0x8000000000000002;
        if ((-0x7fffffffffffffff < unaff_x27) && (unaff_x27 != 0)) {
          _free(puStack_1a8);
        }
        if ((-0x7fffffffffffffff < (long)unaff_x28) && (unaff_x28 != 0)) {
          _free(puStack_170);
        }
        if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
          _free(puStack_168);
        }
      }
      FUN_100e448fc(&ppuStack_148);
      auVar29 = __Unwind_Resume(uVar8);
      pcVar24 = auVar29._8_8_;
      puVar16 = auVar29._0_8_;
      uStack_1b8 = 0x10141068c;
      cStack_238 = *pcVar24;
      uVar17 = *(undefined8 *)(pcVar24 + 8);
      if (cStack_238 == '\x16') {
LAB_1014106b4:
        *puVar16 = 3;
        puVar16[1] = uVar17;
      }
      else {
        uStack_237 = (undefined3)*(undefined4 *)(pcVar24 + 1);
        uStack_234 = (undefined1)*(undefined4 *)(pcVar24 + 4);
        uStack_233 = (undefined3)((uint)*(undefined4 *)(pcVar24 + 4) >> 8);
        uStack_220 = *(undefined8 *)(pcVar24 + 0x18);
        uStack_228 = *(undefined8 *)(pcVar24 + 0x10);
        uStack_230 = uVar17;
        ppuStack_1e0 = ppuVar26;
        lStack_1d8 = lVar18;
        pcStack_1d0 = pcVar6;
        uStack_1c8 = uVar8;
        puStack_1c0 = &stack0xfffffffffffffff0;
        FUN_1004e07f8(&lStack_1f8,&cStack_238);
        if (lStack_1f8 == -0x8000000000000000) {
          uStack_218 = 2;
          uStack_210 = uStack_1f0;
          FUN_100d33dbc(&uStack_218);
          FUN_1004e02c0(&lStack_1f8,&cStack_238);
          if (lStack_1f8 == -0x8000000000000000) {
            uStack_218 = 2;
            uStack_210 = uStack_1f0;
            FUN_100d33dbc(&uStack_218);
            uVar17 = FUN_1088561c0(&UNK_108cc233e,0x43);
            FUN_100e077ec(&cStack_238);
            goto LAB_1014106b4;
          }
          uStack_208 = uStack_1f0;
          uStack_200 = uStack_1e8;
          uVar8 = 1;
          lVar18 = lStack_1f8;
        }
        else {
          uVar8 = 0;
          uStack_208 = uStack_1f0;
          uStack_200 = uStack_1e8;
          lVar18 = lStack_1f8;
        }
        uVar4 = uStack_200;
        uVar17 = uStack_208;
        FUN_100e077ec(&cStack_238);
        *puVar16 = uVar8;
        puVar16[1] = lVar18;
        puVar16[3] = uVar4;
        puVar16[2] = uVar17;
      }
      return;
    }
    ppuStack_138 = (undefined **)0x0;
    ppuStack_1b0 = (undefined **)(((long)ppuVar27 * 0x20 - 0x20U >> 5) + 1);
    pcVar24 = pcVar6;
    ppuStack_148 = ppuVar26;
    do {
      puVar19 = (undefined *)0x8000000000000000;
      pcVar23 = pcVar24 + 0x20;
      if (*pcVar24 == '\x14') {
        lVar18 = *(long *)(pcVar24 + 0x18);
        if (lVar18 == 0) {
          puVar7 = (undefined *)FUN_1087e422c(0,&UNK_10b22b608,&UNK_10b20a590);
        }
        else {
          lVar20 = *(long *)(pcVar24 + 0x10);
          FUN_1004e07f8(&uStack_90,lVar20);
          puVar5 = puStack_80;
          puVar22 = puStack_88;
          ppuVar26 = uStack_90;
          puVar7 = puStack_88;
          if (uStack_90 != (undefined **)0x8000000000000000) {
            if (lVar18 == 1) {
              puVar7 = (undefined *)FUN_1087e422c(1,&UNK_10b22b608,&UNK_10b20a590);
            }
            else {
              bVar13 = *(byte *)(lVar20 + 0x20);
              puVar12 = (undefined *)(ulong)bVar13;
              ppuVar27 = (undefined **)0x8000000000000000;
              if (bVar13 == 0x10) {
                if (lVar18 != 2) goto LAB_10140ffd0;
LAB_1014102f4:
                puVar7 = (undefined *)FUN_1087e422c(2,&UNK_10b22b608,&UNK_10b20a590);
              }
              else {
                if (bVar13 == 0x11) {
                  FUN_1004e07f8(&uStack_90,*(undefined8 *)(lVar20 + 0x28));
LAB_10140ff98:
                  puStack_170 = puStack_80;
                  puStack_168 = puStack_88;
                  ppuVar27 = uStack_90;
                  if ((long)uStack_90 < -0x7ffffffffffffffe) {
                    ppuVar27 = (undefined **)0x8000000000000001;
                  }
                  puVar12 = (undefined *)((long)ppuVar27 + 0x7fffffffffffffff);
                  puVar7 = puStack_168;
                  if (puVar12 < (undefined *)0x2) goto LAB_101410348;
                }
                else if (bVar13 != 0x12) {
                  FUN_1004e07f8(&uStack_90,lVar20 + 0x20);
                  goto LAB_10140ff98;
                }
                if (lVar18 == 2) goto LAB_1014102f4;
LAB_10140ffd0:
                cVar15 = *(char *)(lVar20 + 0x40);
                ppuVar28 = (undefined **)0x8000000000000000;
                puVar2 = puStack_a0;
                cVar3 = cStack_98;
                if (cVar15 == '\x10') {
joined_r0x000101410034:
                  puStack_a0 = puVar12;
                  if (lVar18 != 3) {
                    pcVar6 = (char *)(lVar20 + 0x60);
                    cVar15 = *pcVar6;
                    cStack_98 = '\x02';
                    if (cVar15 != '\x10') {
                      if (cVar15 == '\x11') {
                        pcVar6 = *(char **)(lVar20 + 0x68);
                        cVar15 = *pcVar6;
                      }
                      else if (cVar15 == '\x12') goto LAB_101410080;
                      if (cVar15 != '\0') {
                        puStack_a0 = puVar2;
                        cStack_98 = cVar3;
                        puVar7 = (undefined *)FUN_108855c40(pcVar6,&puStack_78,&UNK_10b20a560);
                        goto LAB_10141032c;
                      }
                      cStack_98 = pcVar6[1];
                    }
LAB_101410080:
                    ppuStack_e0 = ppuVar26;
                    puStack_d8 = puVar22;
                    ppuStack_d0 = (undefined **)puVar5;
                    ppuStack_c8 = ppuVar27;
                    puStack_c0 = puStack_168;
                    puStack_b8 = puStack_170;
                    ppuStack_b0 = ppuVar28;
                    puStack_a8 = puVar19;
                    if (lVar18 == 4) goto LAB_1014100a8;
                    uStack_90 = (undefined **)0x4;
                    puVar7 = (undefined *)
                             FUN_1087e422c((lVar18 + 0x7fffffffffffffcU & 0x7ffffffffffffff) + 4,
                                           &uStack_90,&UNK_10b23a1b0);
                    if (ppuVar26 != (undefined **)0x0) {
                      _free(puVar22);
                    }
                    if (((ulong)ppuVar27 & 0x7fffffffffffffff) != 0) {
                      _free(puStack_168);
                    }
                    if (((ulong)ppuVar28 & 0x7fffffffffffffff) != 0) {
                      _free(puVar19);
                    }
                    goto LAB_101410168;
                  }
                  puStack_a0 = puVar2;
                  cStack_98 = cVar3;
                  puVar7 = (undefined *)FUN_1087e422c(3,&UNK_10b22b608,&UNK_10b20a590);
LAB_10141032c:
                  if (((ulong)ppuVar28 & 0x7fffffffffffffff) != 0) {
                    _free(puVar19);
                  }
                }
                else {
                  if (cVar15 == '\x11') {
                    FUN_1004e07f8(&uStack_90,*(undefined8 *)(lVar20 + 0x48));
                  }
                  else {
                    if (cVar15 == '\x12') goto joined_r0x000101410034;
                    FUN_1004e07f8(&uStack_90,lVar20 + 0x40);
                  }
                  ppuVar28 = uStack_90;
                  if ((long)uStack_90 < -0x7ffffffffffffffe) {
                    ppuVar28 = (undefined **)0x8000000000000001;
                  }
                  puVar7 = puStack_88;
                  puVar12 = puStack_80;
                  puVar19 = puStack_88;
                  puVar2 = puStack_a0;
                  cVar3 = cStack_98;
                  if (1 < (long)ppuVar28 + 0x7fffffffffffffffU) goto joined_r0x000101410034;
                }
              }
              if (((ulong)ppuVar27 & 0x7fffffffffffffff) != 0) {
                _free(puStack_168);
              }
            }
LAB_101410348:
            puStack_168 = puVar7;
            puVar7 = puStack_168;
            if (ppuVar26 != (undefined **)0x0) {
              _free(puVar22);
              puVar7 = puStack_168;
            }
          }
        }
LAB_101410168:
        puVar19 = puStack_140;
        if (ppuStack_138 == (undefined **)0x0) goto LAB_1014101e4;
        puVar16 = (undefined8 *)(puStack_140 + 0x20);
        ppuVar26 = ppuStack_138;
        goto LAB_1014101a0;
      }
      if (*pcVar24 != '\x15') {
        puVar7 = (undefined *)FUN_108855c40(pcVar24,&puStack_78,&UNK_10b213dc8);
        goto LAB_101410168;
      }
      lVar18 = *(long *)(pcVar24 + 0x18);
      if (lVar18 == 0) {
        ppuVar28 = (undefined **)0x8000000000000001;
        ppuVar27 = (undefined **)0x8000000000000001;
LAB_101410278:
        puStack_78 = &UNK_108c61018;
        uStack_70 = 4;
        uStack_90 = &puStack_78;
        puStack_88 = &DAT_100c7b3a0;
        ppuVar26 = (undefined **)0x0;
        puVar7 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
LAB_10141011c:
        if (-0x7fffffffffffffff < (long)ppuVar27) {
joined_r0x0001014103b8:
          if (ppuVar27 != (undefined **)0x0) {
            _free(puStack_1a8);
          }
        }
LAB_101410138:
        if ((-0x7fffffffffffffff < (long)ppuVar28) && (ppuVar28 != (undefined **)0x0)) {
          _free(puStack_170);
        }
        if (((ulong)ppuVar26 & 0x7fffffffffffffff) != 0) {
          _free(puStack_168);
        }
        goto LAB_101410168;
      }
      lVar20 = 0;
      lVar21 = *(long *)(pcVar24 + 0x10);
      ppuVar28 = (undefined **)0x8000000000000001;
      ppuVar26 = (undefined **)0x8000000000000000;
      cVar15 = '\x03';
      ppuVar27 = (undefined **)0x8000000000000001;
      do {
        pbVar1 = (byte *)(lVar21 + lVar20);
        pbVar25 = pbVar1 + 0x20;
        bVar13 = *pbVar1;
        if (bVar13 < 0xd) {
          if (bVar13 == 1) {
            bVar13 = *(byte *)(lVar21 + lVar20 + 1);
            if (3 < bVar13) {
              bVar13 = 4;
            }
            uStack_90 = (undefined **)((ulong)CONCAT61(uStack_90._2_6_,bVar13) << 8);
          }
          else if (bVar13 == 4) {
            uVar10 = *(ulong *)(lVar21 + lVar20 + 8);
            if (3 < uVar10) {
              uVar10 = 4;
            }
            uStack_90 = (undefined **)((ulong)CONCAT61(uStack_90._2_6_,(char)uVar10) << 8);
          }
          else {
            if (bVar13 != 0xc) {
LAB_10140fea8:
              puVar7 = (undefined *)FUN_108855c40(pbVar1,&puStack_78,&UNK_10b215068);
              uStack_90 = (undefined **)CONCAT71(uStack_90._1_7_,1);
              puStack_88 = puVar7;
              goto LAB_10141011c;
            }
            plVar11 = *(long **)(lVar21 + lVar20 + 0x10);
            lVar14 = *(long *)(lVar21 + lVar20 + 0x18);
            if (7 < lVar14) {
              if (lVar14 != 8) goto joined_r0x00010140fc54;
              goto LAB_10140fca4;
            }
            if (lVar14 == 4) goto LAB_10140fc08;
LAB_10140fb10:
            if ((lVar14 != 5) ||
               ((int)*plVar11 != 0x6c746974 || *(char *)((long)plVar11 + 4) != 'e'))
            goto LAB_10140fcc0;
            uStack_90 = (undefined **)CONCAT62(uStack_90._2_6_,0x100);
          }
        }
        else if (bVar13 == 0xd) {
          plVar11 = *(long **)(lVar21 + lVar20 + 8);
          lVar14 = *(long *)(lVar21 + lVar20 + 0x10);
          if (lVar14 < 8) {
            if (lVar14 != 4) goto LAB_10140fb10;
LAB_10140fc08:
            if ((int)*plVar11 != 0x656d616e) goto LAB_10140fcc0;
            uStack_90 = (undefined **)((ulong)uStack_90._2_6_ << 0x10);
          }
          else if (lVar14 == 8) {
LAB_10140fca4:
            if (*plVar11 == 0x6465726975716572) {
              uStack_90 = (undefined **)CONCAT62(uStack_90._2_6_,0x300);
            }
            else {
LAB_10140fcc0:
              uStack_90 = (undefined **)CONCAT62(uStack_90._2_6_,0x400);
            }
          }
          else {
joined_r0x00010140fc54:
            if ((lVar14 != 0xb) ||
               (*plVar11 != 0x7470697263736564 || *(long *)((long)plVar11 + 3) != 0x6e6f697470697263
               )) goto LAB_10140fcc0;
            uStack_90 = (undefined **)CONCAT62(uStack_90._2_6_,0x200);
          }
        }
        else {
          if (bVar13 == 0xe) {
            FUN_100a6520c(&uStack_90,*(undefined8 *)(lVar21 + lVar20 + 0x10),
                          *(undefined8 *)(lVar21 + lVar20 + 0x18));
            puVar7 = puStack_88;
          }
          else {
            if (bVar13 != 0xf) goto LAB_10140fea8;
            FUN_100a6520c(&uStack_90,*(undefined8 *)(lVar21 + lVar20 + 8),
                          *(undefined8 *)(lVar21 + lVar20 + 0x10));
            puVar7 = puStack_88;
          }
          puStack_88 = puVar7;
          if (((ulong)uStack_90 & 1) != 0) goto LAB_10141011c;
        }
        if (uStack_90._1_1_ < 2) {
          if (uStack_90._1_1_ == 0) {
            if (ppuVar26 != (undefined **)0x8000000000000000) {
              puStack_78 = &UNK_108c61018;
              uStack_70 = 4;
              uStack_90 = &puStack_78;
              puStack_88 = &DAT_100c7b3a0;
              puVar7 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
              goto LAB_10141011c;
            }
            FUN_1004e07f8(&uStack_90,pbVar25);
            if (uStack_90 == (undefined **)0x8000000000000000) {
              ppuVar26 = (undefined **)0x0;
              puVar7 = puStack_88;
              goto LAB_10141011c;
            }
            puStack_190 = puStack_80;
            ppuVar26 = uStack_90;
            puVar19 = puStack_170;
            puStack_168 = puStack_88;
          }
          else {
            if (ppuVar28 != (undefined **)0x8000000000000001) {
              puStack_78 = &UNK_108ca1558;
              uStack_70 = 5;
              uStack_90 = &puStack_78;
              puStack_88 = &DAT_100c7b3a0;
              puVar7 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
              goto LAB_10141011c;
            }
            bVar13 = *pbVar25;
            ppuVar28 = (undefined **)0x8000000000000000;
            if (bVar13 == 0x10) {
LAB_10140fab8:
              puStack_170 = puStack_1a0;
              puVar19 = puStack_170;
            }
            else {
              if (bVar13 == 0x11) {
                FUN_1004e07f8(&uStack_90,*(undefined8 *)(lVar21 + lVar20 + 0x28));
              }
              else {
                if (bVar13 == 0x12) goto LAB_10140fab8;
                FUN_1004e07f8(&uStack_90,pbVar25);
              }
              puStack_1a0 = puStack_88;
              if (uStack_90 != (undefined **)0x8000000000000000) {
                puStack_180 = puStack_80;
              }
              ppuVar28 = uStack_90;
              if ((long)uStack_90 < -0x7ffffffffffffffe) {
                ppuVar28 = (undefined **)0x8000000000000001;
              }
              puVar19 = puStack_1a0;
              if (ppuVar28 == (undefined **)0x8000000000000001) {
                ppuVar28 = (undefined **)0x8000000000000001;
                puVar7 = puStack_88;
                goto LAB_10141011c;
              }
            }
          }
        }
        else {
          puVar19 = puStack_170;
          if (uStack_90._1_1_ == 2) {
            if (ppuVar27 != (undefined **)0x8000000000000001) {
              puStack_78 = &UNK_108ca155d;
              uStack_70 = 0xb;
              uStack_90 = &puStack_78;
              puStack_88 = &DAT_100c7b3a0;
              puVar7 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
              ppuVar27 = (undefined **)((ulong)ppuVar27 & 0x7fffffffffffffff);
              goto joined_r0x0001014103b8;
            }
            bVar13 = *pbVar25;
            ppuVar27 = (undefined **)0x8000000000000000;
            if (bVar13 != 0x10) {
              if (bVar13 == 0x11) {
                FUN_1004e07f8(&uStack_90,*(undefined8 *)(lVar21 + lVar20 + 0x28));
              }
              else {
                if (bVar13 == 0x12) goto LAB_10140fac0;
                FUN_1004e07f8(&uStack_90,pbVar25);
              }
              puStack_1a8 = puStack_88;
              if (uStack_90 != (undefined **)0x8000000000000000) {
                puStack_178 = puStack_80;
              }
              ppuVar27 = uStack_90;
              if ((long)uStack_90 < -0x7ffffffffffffffe) {
                ppuVar27 = (undefined **)0x8000000000000001;
              }
              puVar7 = puStack_88;
              puVar19 = puStack_170;
              if (ppuVar27 == (undefined **)0x8000000000000001) goto LAB_101410138;
            }
          }
          else if (uStack_90._1_1_ == 3) {
            if (cVar15 != '\x03') {
              puStack_78 = &UNK_108c78a68;
              uStack_70 = 8;
              uStack_90 = &puStack_78;
              puStack_88 = &DAT_100c7b3a0;
              puVar7 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
              goto LAB_10141011c;
            }
            bVar13 = *pbVar25;
            cVar15 = '\x02';
            if (bVar13 != 0x10) {
              if (bVar13 == 0x11) {
                pcVar6 = *(char **)(lVar21 + lVar20 + 0x28);
                if (*pcVar6 != '\0') {
LAB_1014104f8:
                  puVar7 = (undefined *)FUN_108855c40(pcVar6,&puStack_78,&UNK_10b20a560);
                  goto LAB_10141011c;
                }
                cVar15 = pcVar6[1];
              }
              else if (bVar13 != 0x12) {
                if (bVar13 != 0) {
                  pcVar6 = (char *)(lVar21 + lVar20 + 0x20);
                  goto LAB_1014104f8;
                }
                cVar15 = *(char *)(lVar21 + lVar20 + 0x21);
              }
            }
          }
        }
LAB_10140fac0:
        puStack_170 = puVar19;
        lVar20 = lVar20 + 0x40;
      } while (lVar18 * 0x40 - lVar20 != 0);
      if (ppuVar26 == (undefined **)0x8000000000000000) goto LAB_101410278;
      ppuStack_c8 = (undefined **)0x8000000000000000;
      if (ppuVar28 != (undefined **)0x8000000000000001) {
        ppuStack_c8 = ppuVar28;
      }
      ppuStack_b0 = (undefined **)0x8000000000000000;
      if (ppuVar27 != (undefined **)0x8000000000000001) {
        ppuStack_b0 = ppuVar27;
      }
      cStack_98 = '\x02';
      if (cVar15 != '\x03') {
        cStack_98 = cVar15;
      }
      ppuStack_d0 = (undefined **)puStack_190;
      puStack_c0 = puStack_170;
      puStack_b8 = puStack_180;
      puStack_a8 = puStack_1a8;
      puStack_a0 = puStack_178;
      puVar22 = puStack_168;
LAB_1014100a8:
      ppuVar27 = ppuStack_138;
      ppuStack_118 = ppuStack_c8;
      puStack_120 = (undefined *)ppuStack_d0;
      puStack_108 = puStack_b8;
      puStack_110 = puStack_c0;
      puStack_f8 = puStack_a8;
      ppuStack_100 = ppuStack_b0;
      uStack_e8 = CONCAT71(uStack_97,cStack_98);
      puStack_f0 = puStack_a0;
      ppuStack_130 = ppuVar26;
      puStack_128 = puVar22;
      ppuStack_e0 = ppuVar26;
      puStack_d8 = puVar22;
      if (ppuStack_138 == ppuStack_148) {
        func_0x000108a423ec(&ppuStack_148);
      }
      puVar9 = (ulong *)(puStack_140 + (long)ppuVar27 * 0x50);
      puVar9[1] = (ulong)puStack_128;
      *puVar9 = (ulong)ppuStack_130;
      puVar9[3] = (ulong)ppuStack_118;
      puVar9[2] = (ulong)puStack_120;
      puVar9[5] = (ulong)puStack_108;
      puVar9[4] = (ulong)puStack_110;
      puVar9[7] = (ulong)puStack_f8;
      puVar9[6] = (ulong)ppuStack_100;
      puVar9[9] = uStack_e8;
      puVar9[8] = (ulong)puStack_f0;
      ppuStack_138 = (undefined **)((long)ppuVar27 + 1);
      ppuVar26 = ppuStack_1b0;
      pcVar6 = pcStack_188;
      pcVar24 = pcVar23;
    } while (pcVar23 != pcStack_188);
  }
  puStack_d8 = puStack_140;
  ppuStack_e0 = ppuStack_148;
  ppuStack_d0 = ppuStack_138;
  param_1 = puStack_198;
  puVar7 = puStack_140;
  if (ppuStack_148 != (undefined **)0x8000000000000000) {
    puStack_158 = puStack_140;
    ppuStack_160 = ppuStack_148;
    ppuStack_150 = ppuStack_138;
    if ((long)pcStack_188 - (long)pcVar6 == 0) {
      puStack_198[1] = (ulong)puStack_140;
      *puStack_198 = (ulong)ppuStack_148;
      puStack_198[2] = (ulong)ppuStack_138;
      return;
    }
    ppuStack_130 = ppuVar26;
    puVar7 = (undefined *)
             FUN_1087e422c((long)ppuVar26 + ((ulong)((long)pcStack_188 - (long)pcVar6) >> 5),
                           &ppuStack_130,&UNK_10b23a1b0);
    FUN_100e448fc(&ppuStack_160);
    param_1 = puStack_198;
  }
LAB_1014101f8:
  *param_1 = 0x8000000000000001;
  param_1[1] = (ulong)puVar7;
  return;
LAB_1014101a0:
  do {
    if (puVar16[-4] != 0) {
      _free(puVar16[-3]);
    }
    if (puVar16[-1] != -0x8000000000000000 && puVar16[-1] != 0) {
      _free(*puVar16);
      if (puVar16[2] == -0x8000000000000000 || puVar16[2] == 0) goto LAB_101410194;
LAB_1014101d0:
      _free(puVar16[3]);
      puVar16 = puVar16 + 10;
      ppuVar26 = (undefined **)((long)ppuVar26 - 1);
      if (ppuVar26 == (undefined **)0x0) break;
      goto LAB_1014101a0;
    }
    if (puVar16[2] != -0x8000000000000000 && puVar16[2] != 0) goto LAB_1014101d0;
LAB_101410194:
    puVar16 = puVar16 + 10;
    ppuVar26 = (undefined **)((long)ppuVar26 - 1);
  } while (ppuVar26 != (undefined **)0x0);
LAB_1014101e4:
  param_1 = puStack_198;
  if (ppuStack_148 != (undefined **)0x0) {
    _free(puVar19);
    param_1 = puStack_198;
  }
  goto LAB_1014101f8;
}

