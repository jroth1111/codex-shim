
void FUN_10131b34c(ulong *param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  int *piVar5;
  char cVar6;
  code *pcVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  byte *pbVar22;
  long lVar23;
  byte *pbVar24;
  long lVar25;
  char cVar26;
  undefined *puVar27;
  byte *unaff_x25;
  byte *pbVar28;
  byte *unaff_x28;
  byte *pbVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  byte *pbStack_190;
  byte *pbStack_180;
  byte *pbStack_160;
  byte *pbStack_158;
  ulong uStack_150;
  byte *pbStack_148;
  long lStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  byte abStack_120 [8];
  long lStack_118;
  byte *pbStack_110;
  long lStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  long lStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  long lStack_d0;
  byte *pbStack_c8;
  undefined8 *puStack_c0;
  byte bStack_b8;
  byte bStack_b7;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  undefined8 uStack_90;
  byte *pbStack_88;
  int *piStack_80;
  long lStack_78;
  undefined1 auStack_69 [9];
  
  if (*param_2 == '\x14') {
    uVar11 = *(ulong *)(param_2 + 8);
    pbVar1 = *(byte **)(param_2 + 0x10);
    uVar12 = *(ulong *)(param_2 + 0x18);
    pbVar22 = pbVar1 + uVar12 * 0x20;
    lStack_140 = 0;
    uVar19 = uVar12;
    if (0x7fff < uVar12) {
      uVar19 = 0x8000;
    }
    pbStack_160 = pbVar1;
    uStack_150 = uVar11;
    pbStack_148 = pbVar22;
    if (uVar12 == 0) {
      uStack_138 = 0;
      uStack_130 = 8;
      uStack_128 = 0;
      pbVar13 = pbVar1;
      lVar16 = lStack_140;
    }
    else {
      pbStack_158 = pbVar1;
      uVar8 = _malloc(uVar19 << 5);
      if (uVar8 == 0) {
        func_0x0001087c9084(8,uVar19 << 5);
LAB_10131be98:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10131be9c);
        (*pcVar7)();
      }
      uStack_128 = 0;
      bVar2 = *pbVar1;
      uStack_138 = uVar19;
      uStack_130 = uVar8;
      if (bVar2 != 0x16) {
        lVar23 = 0;
        puVar14 = (undefined8 *)((ulong)abStack_120 | 1);
        puVar20 = (undefined8 *)((ulong)&uStack_90 | 1);
        puVar15 = (undefined8 *)((ulong)&pbStack_100 | 1);
        pbVar13 = pbVar1 + 0x20;
        pbVar28 = pbVar1;
LAB_10131b434:
        pbVar21 = pbVar13;
        lVar25 = lStack_108;
        pbVar13 = pbStack_110;
        lVar16 = lStack_118;
        uVar31 = *(undefined8 *)(pbVar28 + 9);
        uVar30 = *(undefined8 *)(pbVar28 + 1);
        uVar32 = *(undefined8 *)(pbVar28 + 0x10);
        *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)(pbVar28 + 0x18);
        *(undefined8 *)((long)puVar14 + 0xf) = uVar32;
        puVar14[1] = uVar31;
        *puVar14 = uVar30;
        lVar23 = lVar23 + 1;
        abStack_120[0] = bVar2;
        if (bVar2 != 0x14) {
          if (bVar2 == 0x15) {
            lVar16 = lStack_108 * 0x40;
            pbVar13 = pbStack_110 + lVar16;
            pbStack_e0 = pbStack_110;
            pbStack_d8 = pbStack_110;
            lStack_d0 = lStack_118;
            pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
            puStack_c0 = (undefined8 *)0x0;
            pbVar29 = unaff_x28;
            pbStack_c8 = pbVar13;
            if (lStack_108 == 0) {
LAB_10131b988:
              uStack_a8 = &UNK_108cde430;
              pbStack_a0 = (byte *)0x4;
              uStack_90 = &uStack_a8;
              pbStack_88 = &DAT_100c7b3a0;
              pbVar10 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
            }
            else {
              puVar17 = (undefined8 *)0x0;
              puVar27 = (undefined *)0x8000000000000000;
              cVar26 = '\x03';
              unaff_x25 = pbStack_110;
              do {
                piVar5 = piStack_80;
                pbVar29 = pbStack_88;
                puVar4 = uStack_90;
                pbVar24 = unaff_x25 + 0x40;
                bVar3 = *unaff_x25;
                puVar18 = puVar17;
                pbVar28 = pbVar24;
                if (bVar3 == 0x16) break;
                uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,bVar3);
                puVar18 = uStack_90;
                uVar30 = *(undefined8 *)(unaff_x25 + 0x10);
                *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)(unaff_x25 + 0x18);
                *(undefined8 *)((long)puVar20 + 0xf) = uVar30;
                uVar30 = *(undefined8 *)(unaff_x25 + 1);
                puVar20[1] = *(undefined8 *)(unaff_x25 + 9);
                *puVar20 = uVar30;
                pbStack_f8 = *(byte **)(unaff_x25 + 0x28);
                pbStack_100 = *(byte **)(unaff_x25 + 0x20);
                pbStack_e8 = *(byte **)(unaff_x25 + 0x38);
                lStack_f0 = *(long *)(unaff_x25 + 0x30);
                if (bVar3 < 0xd) {
                  if (bVar3 == 1) {
                    uStack_90._1_1_ = SUB81(puVar4,1);
                    if (uStack_90._1_1_ != 0) {
                      if (uStack_90._1_1_ == 1) {
LAB_10131b6d8:
                        bStack_b7 = 1;
                        bStack_b8 = 0;
                        uStack_90 = puVar18;
                        goto LAB_10131b6e4;
                      }
                      uStack_a8 = (undefined *)CONCAT71(uStack_a8._1_7_,1);
                      pbStack_a0 = (byte *)(ulong)uStack_90._1_1_;
                      uStack_90 = puVar18;
                      pbStack_b0 = (byte *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                                     (&uStack_a8,&UNK_10b22d740,&UNK_10b20a590);
                      goto LAB_10131b650;
                    }
LAB_10131b664:
                    bStack_b8 = 0;
                    bStack_b7 = 0;
                    uStack_90 = puVar18;
LAB_10131b6e4:
                    FUN_100e077ec(&uStack_90);
                    goto LAB_10131b708;
                  }
                  if (bVar3 == 4) {
                    if (pbStack_88 == (byte *)0x0) goto LAB_10131b664;
                    if (pbStack_88 == (byte *)0x1) goto LAB_10131b6d8;
                    pbStack_a0 = pbStack_88;
                    uStack_a8 = (undefined *)CONCAT71(uStack_a8._1_7_,1);
                    pbStack_b0 = (byte *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                                   (&uStack_a8,&UNK_10b22d740,&UNK_10b20a590);
LAB_10131b650:
                    bStack_b8 = 1;
                    goto LAB_10131b6e4;
                  }
                  if (bVar3 == 0xc) {
                    if (lStack_78 == 4) {
                      if (*piStack_80 != 0x70657473) {
LAB_10131b544:
                        pbStack_b0 = (byte *)FUN_1087e41dc(piStack_80,lStack_78,&UNK_10b2231c8,2);
                        bStack_b8 = 1;
                        goto joined_r0x00010131b6a8;
                      }
                      bStack_b7 = 0;
                    }
                    else {
                      if ((lStack_78 != 6) ||
                         (*piStack_80 != 0x74617473 || (short)piStack_80[1] != 0x7375))
                      goto LAB_10131b544;
                      bStack_b7 = 1;
                    }
                    bStack_b8 = 0;
                    goto joined_r0x00010131b6a8;
                  }
LAB_10131b7d4:
                  pbStack_b0 = (byte *)FUN_108855b04(&uStack_90,auStack_69,&UNK_10b20d860);
                  bStack_b8 = 1;
                  pbVar10 = pbStack_b0;
joined_r0x00010131b818:
                  puStack_c0 = (undefined8 *)((long)puVar17 + 1);
                  pbStack_d8 = pbVar24;
joined_r0x00010131b818:
                  if (((ulong)puVar27 & 0x7fffffffffffffff) != 0) {
                    _free(pbStack_180);
                  }
                  goto LAB_10131ba84;
                }
                if (bVar3 == 0xd) {
                  if (piStack_80 == (int *)0x4) {
                    if (*(int *)pbStack_88 == 0x70657473) goto LAB_10131b664;
                  }
                  else if ((piStack_80 == (int *)0x6) &&
                          (*(int *)pbStack_88 == 0x74617473 && *(short *)(pbStack_88 + 4) == 0x7375)
                          ) goto LAB_10131b6d8;
                  pbStack_b0 = (byte *)FUN_1087e41dc(pbStack_88,piStack_80,&UNK_10b2231c8,2);
                  goto LAB_10131b650;
                }
                if (bVar3 != 0xe) {
                  if (bVar3 != 0xf) goto LAB_10131b7d4;
                  FUN_100ae3f38(&bStack_b8,pbStack_88,piStack_80);
                  goto LAB_10131b6e4;
                }
                FUN_100ae3f38(&bStack_b8,piStack_80);
joined_r0x00010131b6a8:
                if (pbVar29 != (byte *)0x0) {
                  _free(piVar5);
                }
LAB_10131b708:
                pbVar10 = pbStack_b0;
                if ((bStack_b8 & 1) != 0) goto joined_r0x00010131b818;
                cVar6 = (char)pbStack_100;
                if ((bStack_b7 & 1) != 0) {
                  if (cVar26 != '\x03') {
                    puStack_c0 = (undefined8 *)((long)puVar17 + 1);
                    uStack_a8 = &UNK_108ca105e;
                    pbStack_a0 = (byte *)0x6;
                    uStack_90 = &uStack_a8;
                    pbStack_88 = &DAT_100c7b3a0;
                    pbStack_d8 = pbVar24;
                    pbVar10 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
                    goto joined_r0x00010131b818;
                  }
                  pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
                  if (cVar6 != '\x16') {
                    uVar30 = *puVar15;
                    puVar20[1] = puVar15[1];
                    *puVar20 = uVar30;
                    uVar30 = *(undefined8 *)((long)puVar15 + 0xf);
                    *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
                    *(undefined8 *)((long)puVar20 + 0xf) = uVar30;
                    uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,cVar6);
                    FUN_10133cd80(&uStack_a8,&uStack_90);
                    pbVar10 = pbStack_a0;
                    if ((char)uStack_a8 == '\x01') goto joined_r0x00010131b818;
                    cVar26 = uStack_a8._1_1_;
                    goto LAB_10131b4b8;
                  }
                  puStack_c0 = (undefined8 *)((long)puVar17 + 1);
                  pbStack_158 = pbVar21;
                  lStack_140 = lVar23;
                  pbStack_d8 = pbVar24;
                  func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                  goto LAB_10131be98;
                }
                if (puVar27 != (undefined *)0x8000000000000000) {
                  puStack_c0 = (undefined8 *)((long)puVar17 + 1);
                  uStack_a8 = &UNK_108cde430;
                  pbStack_a0 = (byte *)0x4;
                  uStack_90 = &uStack_a8;
                  pbStack_88 = &DAT_100c7b3a0;
                  pbStack_d8 = pbVar24;
                  pbVar10 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
                  goto joined_r0x00010131b818;
                }
                pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
                if (cVar6 == '\x16') {
                  puStack_c0 = (undefined8 *)((long)puVar17 + 1);
                  pbStack_158 = pbVar21;
                  lStack_140 = lVar23;
                  pbStack_d8 = pbVar24;
                  func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                  goto LAB_10131be98;
                }
                uVar30 = *puVar15;
                puVar20[1] = puVar15[1];
                *puVar20 = uVar30;
                uVar30 = *(undefined8 *)((long)puVar15 + 0xf);
                *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
                *(undefined8 *)((long)puVar20 + 0xf) = uVar30;
                uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,cVar6);
                FUN_1004b62d4(&uStack_a8,&uStack_90);
                pbStack_180 = pbStack_a0;
                if (uStack_a8 == (undefined *)0x8000000000000000) {
                  puStack_c0 = (undefined8 *)((long)puVar17 + 1);
                  pbVar10 = pbStack_a0;
                  pbStack_d8 = pbVar24;
                  goto LAB_10131ba84;
                }
                pbStack_190 = pbStack_98;
                puVar27 = uStack_a8;
LAB_10131b4b8:
                puVar17 = (undefined8 *)((long)puVar17 + 1);
                puVar18 = (undefined8 *)((lVar16 - 0x40U >> 6) + 1);
                pbVar28 = pbVar13;
                unaff_x28 = pbVar29;
                unaff_x25 = pbVar24;
              } while (pbVar24 != pbVar13);
              pbVar29 = unaff_x28;
              unaff_x25 = pbStack_190;
              pbStack_d8 = pbVar28;
              puStack_c0 = puVar18;
              if (puVar27 == (undefined *)0x8000000000000000) goto LAB_10131b988;
              if (cVar26 != '\x03') {
                FUN_100d34830(&pbStack_e0);
                pbVar10 = pbStack_180;
                if (pbVar13 != pbVar28) {
                  uStack_90 = puVar18;
                  pbVar10 = (byte *)FUN_1087e422c(((ulong)((long)pbVar13 - (long)pbVar28) >> 6) +
                                                  (long)puVar18,&uStack_90,&UNK_10b23a190);
                  if (puVar27 != (undefined *)0x0) {
                    _free(pbStack_180);
                  }
                  puVar27 = (undefined *)0x8000000000000000;
                }
                goto LAB_10131baac;
              }
              uStack_a8 = &UNK_108ca105e;
              pbStack_a0 = (byte *)0x6;
              uStack_90 = &uStack_a8;
              pbStack_88 = &DAT_100c7b3a0;
              pbVar10 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
              if (puVar27 != (undefined *)0x0) {
                _free(pbStack_180);
              }
            }
LAB_10131ba84:
            FUN_100d34830(&pbStack_e0);
            if ((char)pbStack_100 != '\x16') {
              FUN_100e077ec(&pbStack_100);
            }
            cVar26 = '\0';
            puVar27 = (undefined *)0x8000000000000000;
            goto LAB_10131baac;
          }
          pbStack_158 = pbVar21;
          lStack_140 = lVar23;
          uVar19 = FUN_108855b04(abStack_120,auStack_69,&UNK_10b20b720);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar19;
          uVar12 = uStack_130;
          uVar19 = uStack_128;
joined_r0x00010131bc94:
          uStack_130 = uVar12;
          uStack_128 = uVar19;
          if (uVar19 != 0) {
            puVar14 = (undefined8 *)(uVar12 + 8);
            do {
              if (puVar14[-1] != 0) {
                _free(*puVar14);
              }
              puVar14 = puVar14 + 4;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          if (uStack_138 != 0) {
            _free(uVar12);
          }
          goto LAB_10131bcf8;
        }
        pbVar24 = pbStack_110 + lStack_108 * 0x20;
        pbStack_100 = pbStack_110;
        lStack_f0 = lStack_118;
        pbStack_e0 = (byte *)0x0;
        pbVar28 = pbStack_110;
        pbStack_e8 = pbVar24;
        if (lStack_108 == 0) {
LAB_10131b85c:
          pbStack_f8 = pbVar28;
          pbVar9 = (byte *)FUN_1087e422c(0,&UNK_10b22cc40,&UNK_10b20a590);
LAB_10131b878:
          lVar25 = ((ulong)((long)pbVar24 - (long)pbVar28) >> 5) + 1;
          pbVar29 = unaff_x28;
          while (lVar25 = lVar25 + -1, lVar25 != 0) {
            pbVar29 = pbVar28 + 0x20;
            FUN_100e077ec(pbVar28);
            pbVar28 = pbVar29;
          }
          cVar26 = '\0';
          pbVar10 = pbVar13;
          cVar6 = '\0';
          if (lVar16 == 0) {
            puVar27 = (undefined *)0x8000000000000000;
            unaff_x25 = pbVar13;
            pbVar10 = pbVar9;
            goto LAB_10131baac;
          }
        }
        else {
          pbVar28 = pbStack_110 + 0x20;
          bVar3 = *pbStack_110;
          if (bVar3 == 0x16) goto LAB_10131b85c;
          uVar30 = *(undefined8 *)(pbStack_110 + 1);
          puVar20[1] = *(undefined8 *)(pbStack_110 + 9);
          *puVar20 = uVar30;
          uVar30 = *(undefined8 *)(pbStack_110 + 0x10);
          *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)(pbStack_110 + 0x18);
          *(undefined8 *)((long)puVar20 + 0xf) = uVar30;
          pbStack_e0 = (byte *)0x1;
          uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,bVar3);
          pbStack_f8 = pbVar28;
          FUN_1004b62d4(&uStack_a8,&uStack_90);
          pbVar29 = pbStack_98;
          pbVar10 = pbStack_a0;
          puVar27 = uStack_a8;
          pbVar9 = pbStack_a0;
          if (uStack_a8 == (undefined *)0x8000000000000000) goto LAB_10131b878;
          if (lVar25 == 1) {
LAB_10131b92c:
            pbVar9 = (byte *)FUN_1087e422c(1,&UNK_10b22cc40,&UNK_10b20a590);
            unaff_x28 = pbVar9;
            if (puVar27 != (undefined *)0x0) {
LAB_10131b94c:
              _free(pbVar10);
              unaff_x28 = pbVar9;
            }
            goto LAB_10131b878;
          }
          pbVar28 = pbVar13 + 0x40;
          bVar3 = pbVar13[0x20];
          pbStack_f8 = pbVar28;
          if (bVar3 == 0x16) goto LAB_10131b92c;
          uVar30 = *(undefined8 *)(pbVar13 + 0x21);
          puVar20[1] = *(undefined8 *)(pbVar13 + 0x29);
          *puVar20 = uVar30;
          uVar30 = *(undefined8 *)(pbVar13 + 0x30);
          *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)(pbVar13 + 0x38);
          *(undefined8 *)((long)puVar20 + 0xf) = uVar30;
          pbStack_e0 = (byte *)0x2;
          uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,bVar3);
          FUN_10133cd80(&uStack_a8,&uStack_90);
          if (((ulong)uStack_a8 & 1) != 0) {
            pbVar9 = pbStack_a0;
            unaff_x28 = pbStack_a0;
            if (puVar27 == (undefined *)0x0) goto LAB_10131b878;
            goto LAB_10131b94c;
          }
          cVar26 = uStack_a8._1_1_;
          pbVar9 = (byte *)FUN_100fbc738(&pbStack_100);
          unaff_x25 = pbVar29;
          if (pbVar9 == (byte *)0x0) goto LAB_10131baac;
          cVar6 = cVar26;
          if (puVar27 == (undefined *)0x0) {
            puVar27 = (undefined *)0x8000000000000000;
            pbVar10 = pbVar9;
            goto LAB_10131baac;
          }
        }
        cVar26 = cVar6;
        _free(pbVar10);
        puVar27 = (undefined *)0x8000000000000000;
        unaff_x25 = pbVar29;
        pbVar10 = pbVar9;
LAB_10131baac:
        if ((bVar2 & 0x1e) != 0x14) {
          FUN_100e077ec(abStack_120);
        }
        uVar19 = uStack_128;
        if ((long)puVar27 < -0x7ffffffffffffffe) {
          *param_1 = 0x8000000000000000;
          param_1[1] = (ulong)pbVar10;
          lStack_140 = lVar23;
          pbStack_158 = pbVar21;
          uVar12 = uStack_130;
          goto joined_r0x00010131bc94;
        }
        if (uStack_128 == uStack_138) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h1234d0a79bfd3277E(&uStack_138);
        }
        puVar17 = (undefined8 *)(uStack_130 + uVar19 * 0x20);
        *puVar17 = puVar27;
        puVar17[1] = pbVar10;
        puVar17[2] = unaff_x25;
        *(char *)(puVar17 + 3) = cVar26;
        uStack_128 = uVar19 + 1;
        pbVar13 = pbVar22;
        lVar16 = (uVar12 * 0x20 - 0x20 >> 5) + 1;
        if (pbVar21 != pbVar22) goto code_r0x00010131bb10;
        goto LAB_10131bcd4;
      }
      pbVar13 = pbVar1 + 0x20;
      lVar16 = 0;
    }
LAB_10131bcd4:
    lStack_140 = lVar16;
    param_1[1] = uStack_130;
    *param_1 = uStack_138;
    param_1[2] = uStack_128;
    uVar19 = *param_1;
    pbVar21 = pbVar13;
    pbStack_158 = pbVar13;
    if (uVar19 == 0x8000000000000000) {
LAB_10131bcf8:
      lVar23 = ((ulong)((long)pbVar22 - (long)pbVar21) >> 5) + 1;
      while (lVar23 = lVar23 + -1, lVar23 != 0) {
        FUN_100e077ec(pbVar21);
        pbVar21 = pbVar21 + 0x20;
      }
    }
    else {
      pbVar1 = (byte *)param_1[1];
      uVar12 = param_1[2];
      uVar11 = FUN_100fbc738(&pbStack_160);
      if (uVar11 == 0) {
        return;
      }
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar11;
      uVar11 = uVar19;
      if (uVar12 != 0) {
        pbVar22 = pbVar1 + 8;
        do {
          if (*(long *)(pbVar22 + -8) != 0) {
            _free(*(undefined8 *)pbVar22);
          }
          pbVar22 = pbVar22 + 0x20;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    if (uVar11 != 0) {
      _free(pbVar1);
    }
  }
  else {
    uVar19 = FUN_108855b04(param_2,auStack_69,&UNK_10b20a0a0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar19;
  }
  return;
code_r0x00010131bb10:
  bVar2 = *pbVar21;
  pbVar13 = pbVar21 + 0x20;
  pbVar28 = pbVar21;
  unaff_x28 = pbVar29;
  lVar16 = lVar23;
  if (bVar2 == 0x16) goto LAB_10131bcd4;
  goto LAB_10131b434;
}

