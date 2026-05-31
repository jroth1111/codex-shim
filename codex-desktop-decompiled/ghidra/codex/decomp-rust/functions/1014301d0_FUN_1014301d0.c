
/* WARNING: Removing unreachable block (ram,0x0001014312e8) */

void FUN_1014301d0(undefined8 *param_1,char *param_2)

{
  byte *pbVar1;
  ulong *puVar2;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  char cVar9;
  code *pcVar10;
  bool bVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined1 uVar16;
  uint uVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  long lVar20;
  ulong uVar21;
  undefined1 uVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  long lVar28;
  byte *pbVar29;
  byte bVar30;
  byte *pbVar31;
  byte *pbVar32;
  undefined8 uVar33;
  long lVar34;
  byte *pbStack_2c8;
  byte *pbStack_2c0;
  byte *pbStack_2b0;
  byte *pbStack_270;
  byte *pbStack_268;
  byte *pbStack_260;
  byte *pbStack_258;
  long lStack_250;
  byte *pbStack_248;
  byte *pbStack_240;
  byte *pbStack_238;
  byte *pbStack_230;
  byte *pbStack_228;
  byte *pbStack_220;
  byte *pbStack_218;
  byte *pbStack_210;
  byte *pbStack_208;
  byte *pbStack_200;
  byte *pbStack_1f8;
  byte *pbStack_1f0;
  byte *pbStack_1e8;
  byte bStack_1e0;
  undefined7 uStack_1df;
  byte *pbStack_1d8;
  byte *pbStack_1d0;
  long lStack_1c8;
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  byte *pbStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined7 uStack_198;
  undefined1 uStack_191;
  undefined7 uStack_190;
  byte *pbStack_189;
  undefined8 uStack_180;
  byte *pbStack_178;
  byte *pbStack_170;
  long lStack_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  byte *pbStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
  byte *pbStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  long lStack_80;
  undefined1 auStack_71 [17];
  
  if (*param_2 != '\x14') {
    pbStack_f8 = (byte *)FUN_108855b04(param_2,auStack_71,&UNK_10b20a2a0);
    goto LAB_10143186c;
  }
  pbVar29 = *(byte **)(param_2 + 8);
  pbVar4 = *(byte **)(param_2 + 0x10);
  pbVar12 = *(byte **)(param_2 + 0x18);
  pbVar1 = pbVar4 + (long)pbVar12 * 0x20;
  lStack_250 = 0;
  pbVar19 = pbVar12;
  if ((byte *)0x7fff < pbVar12) {
    pbVar19 = (byte *)0x8000;
  }
  pbStack_270 = pbVar4;
  pbStack_268 = pbVar4;
  pbStack_260 = pbVar29;
  pbStack_258 = pbVar1;
  if (pbVar12 == (byte *)0x0) {
    pbStack_248 = (byte *)0x0;
    pbStack_240 = (byte *)0x8;
    pbStack_238 = (byte *)0x0;
    pbVar19 = pbVar4;
  }
  else {
    pbVar12 = (byte *)_malloc((long)pbVar19 << 5);
    if (pbVar12 == (byte *)0x0) {
      func_0x0001087c9084(8,(long)pbVar19 << 5);
LAB_1014319b8:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1014319bc);
      (*pcVar10)();
    }
    lVar28 = 0;
    puVar18 = (undefined8 *)((ulong)&bStack_1e0 | 1);
    pbStack_238 = (byte *)0x0;
    puVar13 = (undefined8 *)((ulong)&uStack_98 | 1);
    puVar14 = (undefined8 *)((ulong)&pbStack_100 | 1);
    pbVar25 = pbVar4;
    pbStack_248 = pbVar19;
    pbStack_240 = pbVar12;
    do {
      pbVar12 = pbVar25 + 0x20;
      bVar5 = *pbVar25;
      pbVar19 = pbVar12;
      pbStack_268 = pbVar12;
      if (bVar5 == 0x16) break;
      uVar33 = *(undefined8 *)(pbVar25 + 1);
      puVar18[1] = *(undefined8 *)(pbVar25 + 9);
      *puVar18 = uVar33;
      lVar20 = *(long *)(pbVar25 + 0x10);
      *(long *)((long)puVar18 + 0x17) = *(long *)(pbVar25 + 0x18);
      *(long *)((long)puVar18 + 0xf) = lVar20;
      lVar28 = lVar28 + 1;
      lStack_250 = lVar28;
      bStack_1e0 = bVar5;
      if ((bVar5 != 0xc) && (bVar5 != 0xd)) {
        if (bVar5 == 0x15) {
          pbStack_a0 = pbStack_1d0 + lStack_1c8 * 0x40;
          uStack_b8 = pbStack_1d0;
          pbStack_b0 = pbStack_1d0;
          pbStack_a8 = pbStack_1d8;
          if (lStack_1c8 == 0) {
LAB_101431708:
            pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0xb);
            pbVar19 = (byte *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                        (&pbStack_100,&UNK_10b20a580,&UNK_10b20a590);
          }
          else {
            pbVar19 = pbStack_1d0 + 0x40;
            bVar30 = *pbStack_1d0;
            pbStack_b0 = pbVar19;
            if (bVar30 == 0x16) goto LAB_101431708;
            uVar33 = *(undefined8 *)(pbStack_1d0 + 1);
            puVar13[1] = *(undefined8 *)(pbStack_1d0 + 9);
            *puVar13 = uVar33;
            lVar20 = *(long *)(pbStack_1d0 + 0x10);
            pbStack_178 = *(byte **)(pbStack_1d0 + 0x28);
            uStack_180 = *(byte **)(pbStack_1d0 + 0x20);
            *(long *)((long)puVar13 + 0x17) = *(long *)(pbStack_1d0 + 0x18);
            *(long *)((long)puVar13 + 0xf) = lVar20;
            lStack_168 = *(long *)(pbStack_1d0 + 0x38);
            pbStack_170 = *(byte **)(pbStack_1d0 + 0x30);
            uStack_98 = (byte *)CONCAT71(uStack_98._1_7_,bVar30);
            if (lStack_1c8 == 1) {
LAB_101430368:
              pbStack_1b8 = pbStack_90;
              pbStack_1c0 = uStack_98;
              lStack_1a8 = lStack_80;
              pbStack_1b0 = pbStack_88;
              uVar22 = (byte)uStack_180;
              uStack_1a0 = *(undefined8 *)(pbStack_1d0 + 0x21);
              uStack_198 = (undefined7)*(undefined8 *)(pbStack_1d0 + 0x29);
              pbStack_189 = *(byte **)(pbStack_1d0 + 0x38);
              uStack_191 = (undefined1)*(long *)(pbStack_1d0 + 0x30);
              uStack_190 = (undefined7)((ulong)*(long *)(pbStack_1d0 + 0x30) >> 8);
              bVar30 = 1;
              FUN_100d34830(&uStack_b8);
              goto LAB_1014303a8;
            }
            pbStack_b0 = pbStack_1d0 + 0x80;
            pbStack_f8 = *(byte **)(pbStack_1d0 + 0x48);
            pbStack_100 = *(byte **)pbVar19;
            pbStack_e8 = *(byte **)(pbStack_1d0 + 0x58);
            pbStack_f0 = *(byte **)(pbStack_1d0 + 0x50);
            pbStack_d8 = *(byte **)(pbStack_1d0 + 0x68);
            pbStack_e0 = *(byte **)(pbStack_1d0 + 0x60);
            pbStack_c8 = *(byte **)(pbStack_1d0 + 0x78);
            pbStack_d0 = *(byte **)(pbStack_1d0 + 0x70);
            if ((char)pbStack_100 == '\x16') goto LAB_101430368;
            FUN_100e077ec(&pbStack_100);
            FUN_100e077ec(&pbStack_e0);
            pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0xb);
            pbVar19 = (byte *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                        (&pbStack_100,&UNK_10b20a580,&UNK_10b20a590);
            FUN_100e077ec(&uStack_180);
            FUN_100e077ec(&uStack_98);
          }
          FUN_100d34830(&uStack_b8);
        }
        else {
          FUN_1088556a8(&pbStack_100,&bStack_1e0);
          pbVar19 = (byte *)func_0x000108a4a50c(&pbStack_100,&UNK_10b20a5b0,&UNK_10b20a590);
          FUN_100e077ec(&bStack_1e0);
        }
LAB_101431784:
        pbVar23 = pbStack_238;
        pbVar25 = pbStack_240;
        pbStack_f8 = pbVar19;
        if (pbStack_238 == (byte *)0x0) goto LAB_10143181c;
        pbVar19 = (byte *)0x0;
        goto LAB_1014317bc;
      }
      bVar30 = 0;
      pbStack_1c0 = (byte *)CONCAT71(uStack_1df,bVar5);
      pbStack_1b8 = pbStack_1d8;
      lStack_1a8 = lStack_1c8;
      pbStack_1b0 = pbStack_1d0;
      uVar22 = 0x16;
LAB_1014303a8:
      pbVar25 = pbStack_1b0;
      pbVar19 = pbStack_1b8;
      pbStack_178 = pbStack_1b8;
      uStack_180 = pbStack_1c0;
      pbVar23 = uStack_180;
      lStack_168 = lStack_1a8;
      pbStack_170 = pbStack_1b0;
      uStack_157 = uStack_198;
      uStack_15f = (undefined7)uStack_1a0;
      uStack_158 = (undefined1)((ulong)uStack_1a0 >> 0x38);
      pbStack_148 = pbStack_189;
      uStack_150 = uStack_191;
      uStack_14f = uStack_190;
      pbStack_f8 = (byte *)CONCAT71(uStack_198,uStack_158);
      pbStack_100 = (byte *)CONCAT71(uStack_15f,uVar22);
      pbStack_f0 = (byte *)CONCAT71(uStack_190,uStack_191);
      pbStack_e8 = pbStack_189;
      uStack_180._0_1_ = (byte)pbStack_1c0;
      uStack_180 = pbVar23;
      uStack_160 = uVar22;
      if ((byte)uStack_180 < 0xd) {
        if ((byte)uStack_180 == 1) {
          uStack_180._1_1_ = (byte)((ulong)pbStack_1c0 >> 8);
          pbVar19 = (byte *)(ulong)uStack_180._1_1_;
          if (uStack_180._1_1_ < 3) {
            if (uStack_180._1_1_ == 0) {
LAB_101430d8c:
              uVar22 = 0;
              uStack_b8 = (byte *)((ulong)uStack_b8._2_6_ << 0x10);
            }
            else {
              if (uStack_180._1_1_ != 1) {
                if (uStack_180._1_1_ != 2) goto LAB_101431510;
LAB_101430d04:
                uVar16 = 2;
                goto LAB_101430db8;
              }
LAB_101430d94:
              uVar22 = 0;
              uStack_b8 = (byte *)CONCAT62(uStack_b8._2_6_,0x100);
            }
          }
          else {
            if (uStack_180._1_1_ < 5) {
              if (uStack_180._1_1_ == 3) {
LAB_101430da4:
                uVar16 = 3;
              }
              else {
                if (uStack_180._1_1_ != 4) {
LAB_101431510:
                  uStack_98 = (byte *)CONCAT71(uStack_98._1_7_,1);
                  pbStack_90 = pbVar19;
                  pbStack_b0 = (byte *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                                 (&uStack_98,&UNK_10b22d540,&UNK_10b20a590);
                  goto LAB_101431534;
                }
LAB_1014308d8:
                uVar16 = 4;
              }
            }
            else if (uStack_180._1_1_ == 5) {
LAB_101430db0:
              uVar16 = 5;
            }
            else {
              if (uStack_180._1_1_ != 6) goto LAB_101431510;
LAB_101430d80:
              uVar16 = 6;
            }
LAB_101430db8:
            uVar22 = 0;
            uStack_b8 = (byte *)((ulong)CONCAT61(uStack_b8._2_6_,uVar16) << 8);
          }
        }
        else {
          if ((byte)uStack_180 != 4) {
            if ((byte)uStack_180 != 0xc) goto LAB_1014312bc;
            FUN_100aec4f8(&uStack_b8,pbStack_1b0,lStack_1a8);
            goto LAB_101430474;
          }
          if ((long)pbStack_1b8 < 3) {
            if (pbStack_1b8 == (byte *)0x0) goto LAB_101430d8c;
            if (pbStack_1b8 == (byte *)0x1) goto LAB_101430d94;
            if (pbStack_1b8 == (byte *)0x2) goto LAB_101430d04;
          }
          else if ((long)pbStack_1b8 < 5) {
            if (pbStack_1b8 == (byte *)0x3) goto LAB_101430da4;
            if (pbStack_1b8 == (byte *)0x4) goto LAB_1014308d8;
          }
          else {
            if (pbStack_1b8 == (byte *)0x5) goto LAB_101430db0;
            if (pbStack_1b8 == (byte *)0x6) goto LAB_101430d80;
          }
          pbStack_90 = pbStack_1b8;
          uStack_98 = (byte *)CONCAT71(uStack_98._1_7_,1);
          pbStack_b0 = (byte *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                         (&uStack_98,&UNK_10b22d540,&UNK_10b20a590);
LAB_101431534:
          uVar22 = 1;
        }
        uStack_b8 = (byte *)CONCAT71(uStack_b8._1_7_,uVar22);
LAB_101430dc0:
        FUN_100e077ec(&uStack_180);
LAB_101430dc8:
        if ((byte)uStack_b8 != 1) goto LAB_10143048c;
LAB_101430dd4:
        pbVar19 = pbStack_b0;
        if ((char)pbStack_100 != '\x16') {
          FUN_100e077ec(&pbStack_100);
        }
LAB_101430df0:
        pbStack_1f8 = pbVar19;
        pbVar23 = (byte *)0x8000000000000007;
        goto LAB_101430df4;
      }
      if ((byte)uStack_180 == 0xd) {
        FUN_100aec4f8(&uStack_b8,pbStack_1b8,pbStack_1b0);
        goto LAB_101430dc0;
      }
      if ((byte)uStack_180 != 0xe) {
        if ((byte)uStack_180 == 0xf) {
          FUN_100aebf28(&uStack_b8,pbStack_1b8,pbStack_1b0);
          goto LAB_101430dc0;
        }
LAB_1014312bc:
        pbStack_b0 = (byte *)FUN_108855b04(&uStack_180,auStack_71,&UNK_10b20f800);
        uStack_b8 = (byte *)CONCAT71(uStack_b8._1_7_,1);
        goto LAB_101430dd4;
      }
      FUN_100aebf28(&uStack_b8,pbStack_1b0,lStack_1a8);
LAB_101430474:
      if (pbVar19 == (byte *)0x0) goto LAB_101430dc8;
      _free(pbVar25);
      if ((byte)uStack_b8 == 1) goto LAB_101430dd4;
LAB_10143048c:
      pbVar19 = pbStack_f0;
      pbVar25 = pbStack_f8;
      pbStack_130 = pbStack_f0;
      pbStack_138 = pbStack_f8;
      pbStack_128 = pbStack_e8;
      pbStack_140 = pbStack_100;
      uVar17 = (uint)pbStack_100;
      uVar3 = uVar17 & 0xff;
      if (uStack_b8._1_1_ < 3) {
        if (uStack_b8._1_1_ == 0) {
          if (uVar3 != 0x16) {
            if ((uVar3 != 0x12) && ((uVar3 != 0x15 || (pbStack_e8 != (byte *)0x0)))) {
              pbVar19 = (byte *)FUN_108855b04(&pbStack_140,auStack_71,&UNK_10b20a5c0);
              goto LAB_101430df0;
            }
            FUN_100e077ec(&pbStack_140);
          }
          pbVar23 = (byte *)0x8000000000000000;
        }
        else {
          if (uStack_b8._1_1_ == 1) {
            if (uVar3 != 0x14) {
              if (uVar3 != 0x15) {
                if (uVar3 == 0x16) {
                  pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0xd);
                  pbVar19 = (byte *)func_0x000108a4a50c(&pbStack_100,&UNK_10b212c00,&UNK_10b20a590);
                }
                else {
                  FUN_1088556a8(&pbStack_100,&pbStack_140);
                  pbStack_1f8 = (byte *)func_0x000108a4a50c(&pbStack_100,&UNK_10b212c00,
                                                            &UNK_10b20a590);
                  FUN_100e077ec(&pbStack_140);
                  pbVar19 = pbStack_1f8;
                }
                goto LAB_101430df0;
              }
              lVar20 = (long)pbStack_e8 * 0x40;
              pbVar19 = pbStack_f0 + lVar20;
              pbStack_e0 = pbStack_f0;
              pbStack_d8 = pbStack_f0;
              pbStack_d0 = pbStack_f8;
              pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
              pbStack_c0 = (byte *)0x0;
              pbStack_c8 = pbVar19;
              if (pbStack_e8 == (byte *)0x0) {
                pbStack_120 = (byte *)0x8000000000000000;
              }
              else {
                pbVar25 = (byte *)0x0;
                pbStack_2b0 = (byte *)0x8000000000000000;
                pbVar24 = (byte *)0x8000000000000000;
                pbVar23 = pbStack_f0;
                do {
                  pbVar8 = pbStack_88;
                  pbVar7 = pbStack_90;
                  pbVar27 = uStack_98;
                  pbVar31 = pbVar23 + 0x40;
                  bVar6 = *pbVar23;
                  pbVar26 = pbVar31;
                  pbVar32 = pbVar25;
                  if (bVar6 == 0x16) break;
                  uStack_98 = (byte *)CONCAT71(uStack_98._1_7_,bVar6);
                  pbVar26 = uStack_98;
                  lVar34 = *(long *)(pbVar23 + 0x10);
                  *(long *)((long)puVar13 + 0x17) = *(long *)(pbVar23 + 0x18);
                  *(long *)((long)puVar13 + 0xf) = lVar34;
                  uVar33 = *(undefined8 *)(pbVar23 + 1);
                  puVar13[1] = *(undefined8 *)(pbVar23 + 9);
                  *puVar13 = uVar33;
                  pbStack_f8 = *(byte **)(pbVar23 + 0x28);
                  pbStack_100 = *(byte **)(pbVar23 + 0x20);
                  pbStack_e8 = *(byte **)(pbVar23 + 0x38);
                  pbStack_f0 = *(byte **)(pbVar23 + 0x30);
                  if (bVar6 < 0xd) {
                    if (bVar6 == 1) {
                      uStack_98._1_1_ = SUB81(pbVar27,1);
                      bVar11 = uStack_98._1_1_ == '\0';
LAB_101430740:
                      bVar11 = !bVar11;
LAB_101430744:
                      uStack_b8 = (byte *)((ulong)CONCAT61(uStack_b8._2_6_,bVar11) << 8);
                      uStack_98 = pbVar26;
LAB_10143074c:
                      FUN_100e077ec(&uStack_98);
                      goto LAB_101430770;
                    }
                    if (bVar6 == 4) {
                      bVar11 = pbStack_90 == (byte *)0x0;
                      goto LAB_101430740;
                    }
                    if (bVar6 == 0xc) {
                      if (lStack_80 == 0x1d) {
                        uStack_b8 = (byte *)((ulong)CONCAT61(uStack_b8._2_6_,
                                                             ((*(long *)pbStack_88 !=
                                                               0x6465736f706f7270 ||
                                                              *(long *)(pbStack_88 + 8) !=
                                                              0x6c6f70636578655f) ||
                                                             *(long *)(pbStack_88 + 0x10) !=
                                                             0x6e656d615f796369) ||
                                                             *(long *)(pbStack_88 + 0x15) !=
                                                             0x746e656d646e656d) << 8);
                      }
                      else {
                        uStack_b8 = (byte *)CONCAT62(uStack_b8._2_6_,0x100);
                      }
                      goto joined_r0x000101430764;
                    }
LAB_10143083c:
                    pbStack_b0 = (byte *)FUN_108855b04(&uStack_98,auStack_71,&UNK_10b20d0c0);
                    uStack_b8 = (byte *)CONCAT71(uStack_b8._1_7_,1);
LAB_101430864:
                    pbStack_c0 = pbVar25 + 1;
                    pbStack_118 = pbStack_2c8;
                    pbStack_110 = pbStack_2c0;
                    pbStack_200 = (byte *)0x8000000000000007;
                    pbStack_1f8 = pbStack_b0;
                    pbStack_120 = pbVar24;
                    pbStack_d8 = pbVar31;
                    if (pbStack_2b0 != (byte *)0x8000000000000000) {
joined_r0x0001014313b0:
                      pbStack_200 = (byte *)0x8000000000000007;
                      if (pbStack_2c0 != (byte *)0x0) {
                        pbStack_200 = (byte *)0x8000000000000007;
                        pbVar19 = pbStack_2c8 + 8;
                        do {
                          if (*(long *)(pbVar19 + -8) != 0) {
                            _free(*(long *)pbVar19);
                          }
                          pbVar19 = pbVar19 + 0x18;
                          pbStack_2c0 = pbStack_2c0 + -1;
                        } while (pbStack_2c0 != (byte *)0x0);
                      }
                      if (pbStack_2b0 != (byte *)0x0) {
                        _free(pbStack_2c8);
                      }
                    }
                    goto LAB_101431134;
                  }
                  if (bVar6 == 0xd) {
                    if (pbStack_88 == (byte *)0x1d) {
                      bVar11 = false;
                      if ((*(long *)pbStack_90 == 0x6465736f706f7270 &&
                          *(long *)(pbStack_90 + 8) == 0x6c6f70636578655f) &&
                          *(long *)(pbStack_90 + 0x10) == 0x6e656d615f796369) {
                        bVar11 = *(long *)(pbStack_90 + 0x15) == 0x746e656d646e656d;
                      }
                      goto LAB_101430740;
                    }
                    bVar11 = true;
                    goto LAB_101430744;
                  }
                  if (bVar6 != 0xe) {
                    if (bVar6 != 0xf) goto LAB_10143083c;
                    FUN_100bde728(&uStack_b8,pbStack_90,pbStack_88);
                    goto LAB_10143074c;
                  }
                  FUN_100bde728(&uStack_b8,pbStack_88);
joined_r0x000101430764:
                  if (pbVar7 != (byte *)0x0) {
                    _free(pbVar8);
                  }
LAB_101430770:
                  if (((ulong)uStack_b8 & 1) != 0) goto LAB_101430864;
                  cVar9 = (char)pbStack_100;
                  if (((ulong)uStack_b8 & 0x100) == 0) {
                    if (pbStack_2b0 != (byte *)0x8000000000000000) {
                      pbStack_c0 = pbVar25 + 1;
                      pbStack_118 = pbStack_2c8;
                      pbStack_110 = pbStack_2c0;
                      uStack_b8 = &UNK_108cb01a5;
                      pbStack_b0 = (byte *)0x1d;
                      uStack_98 = (byte *)&uStack_b8;
                      pbStack_90 = &DAT_100c7b3a0;
                      pbStack_120 = pbVar24;
                      pbStack_d8 = pbVar31;
                      pbStack_1f8 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_98
                                                         );
                      goto joined_r0x0001014313b0;
                    }
                    pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
                    if (cVar9 != '\x16') {
                      uVar33 = *puVar14;
                      puVar13[1] = puVar14[1];
                      *puVar13 = uVar33;
                      uVar33 = *(undefined8 *)((long)puVar14 + 0xf);
                      *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
                      *(undefined8 *)((long)puVar13 + 0xf) = uVar33;
                      uStack_98 = (byte *)CONCAT71(uStack_98._1_7_,cVar9);
                      pbStack_2b0 = (byte *)0x8000000000000000;
                      FUN_1004b5b34(&uStack_b8,&uStack_98);
                      pbStack_2c8 = pbStack_b0;
                      if (uStack_b8 != (byte *)0x8000000000000000) {
                        pbStack_2c0 = pbStack_a8;
                        pbVar24 = uStack_b8;
                        pbStack_2b0 = uStack_b8;
                        goto LAB_10143059c;
                      }
                      pbStack_c0 = pbVar25 + 1;
                      pbStack_1f8 = pbStack_b0;
                      pbStack_d8 = pbVar31;
                      goto LAB_10143112c;
                    }
                    pbStack_c0 = pbVar25 + 1;
                    pbStack_118 = pbStack_2c8;
                    pbStack_110 = pbStack_2c0;
                    pbStack_120 = pbVar24;
                    pbStack_d8 = pbVar31;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_1014319b8;
                  }
                  pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
                  if (cVar9 == '\x16') {
                    pbStack_c0 = pbVar25 + 1;
                    pbStack_118 = pbStack_2c8;
                    pbStack_110 = pbStack_2c0;
                    pbStack_120 = pbVar24;
                    pbStack_d8 = pbVar31;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_1014319b8;
                  }
                  uVar33 = *puVar14;
                  puVar13[1] = puVar14[1];
                  *puVar13 = uVar33;
                  uVar33 = *(undefined8 *)((long)puVar14 + 0xf);
                  *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
                  *(undefined8 *)((long)puVar13 + 0xf) = uVar33;
                  uStack_98 = (byte *)CONCAT71(uStack_98._1_7_,cVar9);
                  FUN_100e077ec(&uStack_98);
LAB_10143059c:
                  pbVar25 = pbVar25 + 1;
                  pbVar26 = pbVar19;
                  pbVar32 = (byte *)((lVar20 - 0x40U >> 6) + 1);
                  pbVar23 = pbVar31;
                } while (pbVar31 != pbVar19);
                pbStack_118 = pbStack_2c8;
                pbStack_110 = pbStack_2c0;
                pbStack_120 = pbVar24;
                pbStack_d8 = pbVar26;
                pbStack_c0 = pbVar32;
                if (pbStack_2b0 != (byte *)0x8000000000000000) {
                  pbStack_200 = (byte *)0x8000000000000001;
                  pbStack_1f8 = pbStack_2b0;
                  pbStack_1f0 = pbStack_2c8;
                  pbStack_1e8 = pbStack_2c0;
                  FUN_100d34830(&pbStack_e0);
                  if (pbVar19 == pbVar26) {
                    pbVar23 = (byte *)0x8000000000000001;
                  }
                  else {
                    uStack_98 = pbVar32;
                    pbStack_1f8 = (byte *)FUN_1087e422c(pbVar32 + ((ulong)((long)pbVar19 -
                                                                          (long)pbVar26) >> 6),
                                                        &uStack_98,&UNK_10b23a190);
                    pbStack_200 = (byte *)0x8000000000000007;
                    if (pbStack_2c0 != (byte *)0x0) {
                      pbVar19 = pbStack_2c8 + 8;
                      pbVar25 = pbStack_2c0;
                      do {
                        if (*(long *)(pbVar19 + -8) != 0) {
                          _free(*(long *)pbVar19);
                        }
                        pbVar19 = pbVar19 + 0x18;
                        pbVar25 = pbVar25 + -1;
                      } while (pbVar25 != (byte *)0x0);
                    }
                    if (pbStack_2b0 != (byte *)0x0) {
                      _free(pbStack_2c8);
                    }
                    pbVar23 = (byte *)0x8000000000000007;
                  }
                  goto LAB_101431218;
                }
              }
              uStack_b8 = &UNK_108cb01a5;
              pbStack_b0 = (byte *)0x1d;
              uStack_98 = (byte *)&uStack_b8;
              pbStack_90 = &DAT_100c7b3a0;
              pbStack_1f8 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_98);
LAB_10143112c:
              pbStack_200 = (byte *)0x8000000000000007;
LAB_101431134:
              FUN_100d34830(&pbStack_e0);
              if ((char)pbStack_100 != '\x16') {
                FUN_100e077ec(&pbStack_100);
              }
LAB_101431214:
              pbVar23 = (byte *)0x8000000000000007;
              goto LAB_101431218;
            }
            pbVar23 = pbStack_f0 + (long)pbStack_e8 * 0x20;
            pbStack_100 = pbStack_f0;
            pbStack_f0 = pbStack_f8;
            pbStack_e0 = (byte *)0x0;
            pbVar24 = pbVar19;
            if (pbStack_e8 == (byte *)0x0) {
LAB_101430ea0:
              pbStack_f8 = pbVar24;
              pbStack_e8 = pbVar23;
              pbStack_1f8 = (byte *)FUN_1087e422c(0,&UNK_10b232890,&UNK_10b20a590);
LAB_101430ebc:
              pbStack_200 = (byte *)0x8000000000000007;
              lVar20 = ((ulong)((long)pbVar23 - (long)pbVar24) >> 5) + 1;
              while (lVar20 = lVar20 + -1, pbVar7 = pbVar19, pbVar8 = pbVar25, lVar20 != 0) {
                FUN_100e077ec(pbVar24);
                pbVar24 = pbVar24 + 0x20;
              }
            }
            else {
              pbVar24 = pbVar19 + 0x20;
              bVar6 = *pbVar19;
              if (bVar6 == 0x16) goto LAB_101430ea0;
              uVar33 = *(undefined8 *)(pbVar19 + 1);
              puVar13[1] = *(undefined8 *)(pbVar19 + 9);
              *puVar13 = uVar33;
              lVar20 = *(long *)(pbVar19 + 0x10);
              *(long *)((long)puVar13 + 0x17) = *(long *)(pbVar19 + 0x18);
              *(long *)((long)puVar13 + 0xf) = lVar20;
              pbStack_e0 = (byte *)0x1;
              uStack_98 = (byte *)CONCAT71(uStack_98._1_7_,bVar6);
              pbStack_f8 = pbVar24;
              pbStack_e8 = pbVar23;
              FUN_1004b5b34(&uStack_b8,&uStack_98);
              pbVar27 = pbStack_a8;
              pbVar7 = pbStack_b0;
              pbVar8 = uStack_b8;
              pbStack_1f8 = pbStack_b0;
              if (uStack_b8 == (byte *)0x8000000000000000) goto LAB_101430ebc;
              pbStack_200 = (byte *)0x8000000000000001;
              pbStack_1f8 = uStack_b8;
              pbStack_1f0 = pbStack_b0;
              pbStack_1e8 = pbStack_a8;
              pbVar19 = (byte *)FUN_100fbc738(&pbStack_100);
              if (pbVar19 == (byte *)0x0) {
                pbVar23 = (byte *)0x8000000000000001;
                goto LAB_101431218;
              }
              pbStack_200 = (byte *)0x8000000000000007;
              pbStack_1f8 = pbVar19;
              if (pbVar27 != (byte *)0x0) {
                pbVar19 = pbVar7 + 8;
                do {
                  if (*(long *)(pbVar19 + -8) != 0) {
                    _free(*(long *)pbVar19);
                  }
                  pbVar19 = pbVar19 + 0x18;
                  pbVar27 = pbVar27 + -1;
                } while (pbVar27 != (byte *)0x0);
              }
            }
            if (pbVar8 != (byte *)0x0) {
              _free(pbVar7);
            }
            pbVar23 = (byte *)0x8000000000000007;
            goto LAB_101431218;
          }
          pbVar23 = (byte *)0x8000000000000002;
          if (uVar3 != 0x16) {
            if ((uVar3 != 0x12) && ((uVar3 != 0x15 || (pbStack_e8 != (byte *)0x0)))) {
              pbVar19 = (byte *)FUN_108855b04(&pbStack_140,auStack_71,&UNK_10b20a5c0);
              goto LAB_101430df0;
            }
            FUN_100e077ec(&pbStack_140);
          }
        }
      }
      else if (uStack_b8._1_1_ < 5) {
        if (uStack_b8._1_1_ == 3) {
          if (uVar3 != 0x14) {
            if (uVar3 != 0x15) {
              if (uVar3 != 0x16) {
                FUN_1088556a8(&pbStack_100,&pbStack_140);
                pbStack_1f8 = (byte *)func_0x000108a4a50c(&pbStack_100,&UNK_10b212c00,&UNK_10b20a590
                                                         );
                pbVar23 = (byte *)0x8000000000000007;
                pbStack_200 = (byte *)0x8000000000000007;
                FUN_100e077ec(&pbStack_140);
                goto LAB_101430df4;
              }
              pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0xd);
              pbVar19 = (byte *)func_0x000108a4a50c(&pbStack_100,&UNK_10b212c00,&UNK_10b20a590);
              goto LAB_101430df0;
            }
            pbVar19 = pbStack_f0 + (long)pbStack_e8 * 0x40;
            pbStack_e0 = pbStack_f0;
            pbStack_d8 = pbStack_f0;
            pbStack_d0 = pbStack_f8;
            pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
            pbStack_c0 = (byte *)0x0;
            pbStack_c8 = pbVar19;
            if (pbStack_e8 == (byte *)0x0) {
LAB_1014311b0:
              uStack_b8 = &UNK_108cb01d6;
              pbStack_b0 = (byte *)0x18;
              uStack_98 = (byte *)&uStack_b8;
              pbStack_90 = &DAT_100c7b3a0;
              pbStack_1f8 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_98);
LAB_1014311ec:
              pbStack_200 = (byte *)0x8000000000000007;
LAB_1014311f4:
              FUN_100d34830(&pbStack_e0);
              if ((char)pbStack_100 != '\x16') {
                FUN_100e077ec(&pbStack_100);
              }
              goto LAB_101431214;
            }
            pbVar25 = (byte *)0x0;
            pbStack_2c0 = (byte *)(((long)pbStack_e8 * 0x40 - 0x40U >> 6) + 1);
            pbVar23 = (byte *)0x8000000000000000;
            pbVar24 = pbStack_f0;
            do {
              pbVar8 = pbStack_88;
              pbVar7 = pbStack_90;
              pbVar27 = uStack_98;
              pbVar31 = pbVar24 + 0x40;
              bVar6 = *pbVar24;
              pbVar26 = pbVar25;
              pbVar32 = pbVar31;
              if (bVar6 == 0x16) break;
              uStack_98 = (byte *)CONCAT71(uStack_98._1_7_,bVar6);
              pbVar26 = uStack_98;
              lVar20 = *(long *)(pbVar24 + 0x10);
              *(long *)((long)puVar13 + 0x17) = *(long *)(pbVar24 + 0x18);
              *(long *)((long)puVar13 + 0xf) = lVar20;
              uVar33 = *(undefined8 *)(pbVar24 + 1);
              puVar13[1] = *(undefined8 *)(pbVar24 + 9);
              *puVar13 = uVar33;
              pbStack_f8 = *(byte **)(pbVar24 + 0x28);
              pbStack_100 = *(byte **)(pbVar24 + 0x20);
              pbStack_e8 = *(byte **)(pbVar24 + 0x38);
              pbStack_f0 = *(byte **)(pbVar24 + 0x30);
              if (bVar6 < 0xd) {
                if (bVar6 == 1) {
                  uStack_98._1_1_ = SUB81(pbVar27,1);
                  bVar11 = uStack_98._1_1_ == '\0';
LAB_101430ab4:
                  bVar11 = !bVar11;
LAB_101430ab8:
                  uStack_b8 = (byte *)((ulong)CONCAT61(uStack_b8._2_6_,bVar11) << 8);
                  uStack_98 = pbVar26;
LAB_101430ac0:
                  FUN_100e077ec(&uStack_98);
                  goto LAB_101430ae4;
                }
                if (bVar6 == 4) {
                  bVar11 = pbStack_90 == (byte *)0x0;
                  goto LAB_101430ab4;
                }
                if (bVar6 == 0xc) {
                  if (lStack_80 == 0x18) {
                    uStack_b8 = (byte *)((ulong)CONCAT61(uStack_b8._2_6_,
                                                         (*(long *)pbStack_88 != 0x5f6b726f7774656e
                                                         || *(long *)(pbStack_88 + 8) !=
                                                            0x615f7963696c6f70) ||
                                                         *(long *)(pbStack_88 + 0x10) !=
                                                         0x746e656d646e656d) << 8);
                  }
                  else {
                    uStack_b8 = (byte *)CONCAT62(uStack_b8._2_6_,0x100);
                  }
                  goto joined_r0x000101430a54;
                }
LAB_101430b9c:
                pbStack_b0 = (byte *)FUN_108855b04(&uStack_98,auStack_71,&UNK_10b20e480);
                uStack_b8 = (byte *)CONCAT71(uStack_b8._1_7_,1);
LAB_101430bc4:
                pbStack_c0 = pbVar25 + 1;
                pbVar23 = (byte *)((ulong)pbVar23 & 0x7fffffffffffffff);
                pbStack_d8 = pbVar31;
                pbStack_1f8 = pbStack_b0;
joined_r0x000101430bf0:
                pbStack_200 = (byte *)0x8000000000000007;
                if (pbVar23 != (byte *)0x0) {
                  pbStack_200 = (byte *)0x8000000000000007;
                  _free(pbStack_2b0);
                }
                goto LAB_1014311f4;
              }
              if (bVar6 == 0xd) {
                if (pbStack_88 == (byte *)0x18) {
                  bVar11 = false;
                  if (*(long *)pbStack_90 == 0x5f6b726f7774656e &&
                      *(long *)(pbStack_90 + 8) == 0x615f7963696c6f70) {
                    bVar11 = *(long *)(pbStack_90 + 0x10) == 0x746e656d646e656d;
                  }
                  goto LAB_101430ab4;
                }
                bVar11 = true;
                goto LAB_101430ab8;
              }
              if (bVar6 != 0xe) {
                if (bVar6 != 0xf) goto LAB_101430b9c;
                FUN_100bde8a8(&uStack_b8,pbStack_90,pbStack_88);
                goto LAB_101430ac0;
              }
              FUN_100bde8a8(&uStack_b8,pbStack_88);
joined_r0x000101430a54:
              if (pbVar7 != (byte *)0x0) {
                _free(pbVar8);
              }
LAB_101430ae4:
              if (((ulong)uStack_b8 & 1) != 0) goto LAB_101430bc4;
              cVar9 = (char)pbStack_100;
              if (((ulong)uStack_b8 & 0x100) == 0) {
                if (pbVar23 != (byte *)0x8000000000000000) {
                  pbStack_c0 = pbVar25 + 1;
                  uStack_b8 = &UNK_108cb01d6;
                  pbStack_b0 = (byte *)0x18;
                  uStack_98 = (byte *)&uStack_b8;
                  pbStack_90 = &DAT_100c7b3a0;
                  pbStack_d8 = pbVar31;
                  pbStack_1f8 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_98);
                  goto joined_r0x000101430bf0;
                }
                pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
                if (cVar9 != '\x16') {
                  uVar33 = *puVar14;
                  puVar13[1] = puVar14[1];
                  *puVar13 = uVar33;
                  uVar33 = *(undefined8 *)((long)puVar14 + 0xf);
                  *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
                  *(undefined8 *)((long)puVar13 + 0xf) = uVar33;
                  uStack_98 = (byte *)CONCAT71(uStack_98._1_7_,cVar9);
                  FUN_10126eb38(&uStack_b8,&uStack_98);
                  pbStack_2b0 = pbStack_b0;
                  if (uStack_b8 != (byte *)0x8000000000000000) {
                    pbStack_118 = pbStack_a0;
                    pbStack_120 = pbStack_a8;
                    pbVar23 = uStack_b8;
                    goto LAB_101430940;
                  }
                  pbStack_c0 = pbVar25 + 1;
                  pbStack_1f8 = pbStack_b0;
                  pbStack_d8 = pbVar31;
                  goto LAB_1014311ec;
                }
                pbStack_c0 = pbVar25 + 1;
                pbStack_d8 = pbVar31;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                goto LAB_1014319b8;
              }
              pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
              if (cVar9 == '\x16') {
                pbStack_c0 = pbVar25 + 1;
                pbStack_d8 = pbVar31;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                goto LAB_1014319b8;
              }
              uVar33 = *puVar14;
              puVar13[1] = puVar14[1];
              *puVar13 = uVar33;
              uVar33 = *(undefined8 *)((long)puVar14 + 0xf);
              *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
              *(undefined8 *)((long)puVar13 + 0xf) = uVar33;
              uStack_98 = (byte *)CONCAT71(uStack_98._1_7_,cVar9);
              FUN_100e077ec(&uStack_98);
LAB_101430940:
              pbVar25 = pbVar25 + 1;
              pbVar26 = pbStack_2c0;
              pbVar32 = pbVar19;
              pbVar24 = pbVar31;
            } while (pbVar31 != pbVar19);
            pbStack_d8 = pbVar32;
            pbStack_c0 = pbVar26;
            if (pbVar23 == (byte *)0x8000000000000000) goto LAB_1014311b0;
            pbStack_1e8 = pbStack_118;
            pbStack_1f0 = pbStack_120;
            pbStack_1f8 = pbStack_2b0;
            pbStack_200 = pbVar23;
            FUN_100d34830(&pbStack_e0);
            if (pbVar19 != pbVar32) {
              uStack_98 = pbVar26;
              pbStack_1f8 = (byte *)FUN_1087e422c(pbVar26 + ((ulong)((long)pbVar19 - (long)pbVar32)
                                                            >> 6),&uStack_98,&UNK_10b23a190);
              pbStack_200 = (byte *)0x8000000000000007;
              if (pbVar23 != (byte *)0x0) {
                _free(pbStack_2b0);
              }
              pbVar23 = (byte *)0x8000000000000007;
            }
            goto LAB_101431218;
          }
          pbVar24 = pbStack_f0 + (long)pbStack_e8 * 0x20;
          pbStack_100 = pbStack_f0;
          pbStack_f0 = pbStack_f8;
          pbStack_e0 = (byte *)0x0;
          pbVar27 = pbVar19;
          if (pbStack_e8 == (byte *)0x0) {
LAB_101430f20:
            pbStack_f8 = pbVar27;
            pbStack_e8 = pbVar24;
            pbStack_1f8 = (byte *)FUN_1087e422c(0,&UNK_10b2328a0,&UNK_10b20a590);
LAB_101430f38:
            pbStack_200 = (byte *)0x8000000000000007;
            lVar20 = ((ulong)((long)pbVar24 - (long)pbVar27) >> 5) + 1;
            while (lVar20 = lVar20 + -1, lVar20 != 0) {
              FUN_100e077ec(pbVar27);
              pbVar27 = pbVar27 + 0x20;
            }
          }
          else {
            pbVar27 = pbVar19 + 0x20;
            bVar6 = *pbVar19;
            if (bVar6 == 0x16) goto LAB_101430f20;
            uVar33 = *(undefined8 *)(pbVar19 + 1);
            puVar13[1] = *(undefined8 *)(pbVar19 + 9);
            *puVar13 = uVar33;
            lVar20 = *(long *)(pbVar19 + 0x10);
            *(long *)((long)puVar13 + 0x17) = *(long *)(pbVar19 + 0x18);
            *(long *)((long)puVar13 + 0xf) = lVar20;
            pbStack_e0 = (byte *)0x1;
            uStack_98 = (byte *)CONCAT71(uStack_98._1_7_,bVar6);
            pbStack_f8 = pbVar27;
            pbStack_e8 = pbVar24;
            FUN_10126eb38(&uStack_b8,&uStack_98);
            pbVar7 = pbStack_b0;
            pbVar23 = uStack_b8;
            pbStack_1f8 = pbStack_b0;
            if (uStack_b8 == (byte *)0x8000000000000000) goto LAB_101430f38;
            pbStack_1e8 = pbStack_a0;
            pbStack_1f0 = pbStack_a8;
            pbStack_200 = uStack_b8;
            pbVar19 = (byte *)FUN_100fbc738(&pbStack_100);
            if (pbVar19 == (byte *)0x0) goto LAB_101431218;
            pbStack_200 = (byte *)0x8000000000000007;
            pbStack_1f8 = pbVar19;
            pbVar19 = pbVar7;
            pbVar25 = pbVar23;
          }
          if (pbVar25 != (byte *)0x0) {
            _free(pbVar19);
          }
          pbVar23 = (byte *)0x8000000000000007;
LAB_101431218:
          if ((uVar3 != 0x16) && ((uVar17 & 0x1e) != 0x14)) {
            FUN_100e077ec(&pbStack_140);
          }
        }
        else {
          if (uVar3 != 0x16) {
            if ((uVar3 != 0x12) && ((uVar3 != 0x15 || (pbStack_e8 != (byte *)0x0)))) {
              pbVar19 = (byte *)FUN_108855b04(&pbStack_140,auStack_71,&UNK_10b20a5c0);
              goto LAB_101430df0;
            }
            FUN_100e077ec(&pbStack_140);
          }
          pbVar23 = (byte *)0x8000000000000004;
        }
      }
      else if (uStack_b8._1_1_ == 5) {
        if (uVar3 != 0x16) {
          if ((uVar3 != 0x12) && ((uVar3 != 0x15 || (pbStack_e8 != (byte *)0x0)))) {
            pbVar19 = (byte *)FUN_108855b04(&pbStack_140,auStack_71,&UNK_10b20a5c0);
            goto LAB_101430df0;
          }
          FUN_100e077ec(&pbStack_140);
        }
        pbVar23 = (byte *)0x8000000000000005;
      }
      else {
        if (uVar3 != 0x16) {
          if ((uVar3 != 0x12) && ((uVar3 != 0x15 || (pbStack_e8 != (byte *)0x0)))) {
            pbVar19 = (byte *)FUN_108855b04(&pbStack_140,auStack_71,&UNK_10b20a5c0);
            goto LAB_101430df0;
          }
          FUN_100e077ec(&pbStack_140);
        }
        pbVar23 = (byte *)0x8000000000000006;
      }
LAB_101430df4:
      bVar11 = (bool)(bVar30 ^ 1);
      if (bVar5 == 0x15) {
        bVar11 = true;
      }
      if (!bVar11) {
        FUN_100e077ec(&bStack_1e0);
      }
      pbVar25 = pbStack_238;
      pbVar19 = pbStack_1f8;
      if (pbVar23 == (byte *)0x8000000000000007) goto LAB_101431784;
      pbStack_228 = pbStack_1e8;
      pbStack_230 = pbStack_1f0;
      if (pbVar23 == (byte *)0x8000000000000008) goto LAB_101431784;
      pbStack_218 = pbStack_1f8;
      pbStack_208 = pbStack_1e8;
      pbStack_210 = pbStack_1f0;
      pbStack_220 = pbVar23;
      if (pbStack_238 == pbStack_248) {
        func_0x0001089a4bf8(&pbStack_248);
      }
      pbVar19 = pbStack_240 + (long)pbVar25 * 0x20;
      *(byte **)(pbVar19 + 8) = pbStack_218;
      *(byte **)pbVar19 = pbStack_220;
      *(byte **)(pbVar19 + 0x18) = pbStack_208;
      *(byte **)(pbVar19 + 0x10) = pbStack_210;
      pbStack_238 = pbVar25 + 1;
      pbVar19 = pbVar1;
      pbVar25 = pbVar12;
    } while (pbVar12 != pbVar1);
  }
  pbVar24 = pbStack_238;
  pbVar25 = pbStack_240;
  pbVar23 = pbStack_248;
  pbStack_f8 = pbStack_240;
  pbStack_100 = pbStack_248;
  pbStack_f0 = pbStack_238;
  pbVar12 = pbVar19;
  if (pbStack_248 == (byte *)0x8000000000000000) goto LAB_101431830;
  pbVar19 = (byte *)FUN_100fbc738(&pbStack_270);
  if (pbVar19 == (byte *)0x0) {
    param_1[1] = pbStack_f8;
    *param_1 = pbStack_100;
    param_1[2] = pbStack_f0;
    return;
  }
  pbVar1 = pbVar19;
  if (pbVar24 != (byte *)0x0) {
    pbVar29 = (byte *)0x0;
    pbStack_f8 = pbVar19;
    do {
      puVar2 = (ulong *)(pbVar25 + (long)pbVar29 * 0x20);
      uVar15 = *puVar2;
      uVar21 = uVar15 ^ 0x8000000000000000;
      if (-1 < (long)uVar15) {
        uVar21 = 3;
      }
      if (uVar21 == 3) {
        if (uVar15 != 0) {
          uVar21 = puVar2[1];
LAB_101431670:
          _free(uVar21);
        }
      }
      else if (uVar21 == 1) {
        uVar21 = puVar2[2];
        uVar15 = puVar2[3];
        if (uVar15 != 0) {
          puVar13 = (undefined8 *)(uVar21 + 8);
          do {
            if (puVar13[-1] != 0) {
              _free(*puVar13);
            }
            puVar13 = puVar13 + 3;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        if (puVar2[1] != 0) goto LAB_101431670;
      }
      pbVar29 = pbVar29 + 1;
      pbVar1 = pbStack_f8;
    } while (pbVar29 != pbVar24);
  }
  goto joined_r0x00010143185c;
LAB_1014317bc:
  do {
    puVar2 = (ulong *)(pbVar25 + (long)pbVar19 * 0x20);
    uVar15 = *puVar2;
    uVar21 = uVar15 ^ 0x8000000000000000;
    if (-1 < (long)uVar15) {
      uVar21 = 3;
    }
    if (uVar21 == 3) {
      if (uVar15 != 0) {
        uVar21 = puVar2[1];
LAB_1014317a8:
        _free(uVar21);
      }
    }
    else if (uVar21 == 1) {
      uVar21 = puVar2[2];
      uVar15 = puVar2[3];
      if (uVar15 != 0) {
        puVar13 = (undefined8 *)(uVar21 + 8);
        do {
          if (puVar13[-1] != 0) {
            _free(*puVar13);
          }
          puVar13 = puVar13 + 3;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      if (puVar2[1] != 0) goto LAB_1014317a8;
    }
    pbVar19 = pbVar19 + 1;
  } while (pbVar19 != pbVar23);
LAB_10143181c:
  if (pbStack_248 != (byte *)0x0) {
    _free(pbVar25);
  }
LAB_101431830:
  lVar28 = ((ulong)((long)pbVar1 - (long)pbVar12) >> 5) + 1;
  while (lVar28 = lVar28 + -1, pbVar25 = pbVar4, pbVar19 = pbStack_f8, pbVar1 = pbStack_f8,
        pbVar23 = pbVar29, lVar28 != 0) {
    FUN_100e077ec(pbVar12);
    pbVar12 = pbVar12 + 0x20;
  }
joined_r0x00010143185c:
  pbStack_f8 = pbVar19;
  if (pbVar23 != (byte *)0x0) {
    pbStack_f8 = pbVar1;
    _free(pbVar25);
  }
LAB_10143186c:
  *param_1 = 0x8000000000000001;
  param_1[1] = pbStack_f8;
  return;
}

