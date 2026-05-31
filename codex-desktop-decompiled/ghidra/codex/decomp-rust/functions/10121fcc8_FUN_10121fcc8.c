
void FUN_10121fcc8(long *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  long *plVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 uVar9;
  char cVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  long *unaff_x24;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  long *plStack_268;
  long lStack_260;
  byte *pbStack_258;
  long lStack_248;
  byte *pbStack_240;
  byte *pbStack_238;
  long lStack_230;
  byte *pbStack_228;
  byte *pbStack_220;
  byte *pbStack_218;
  undefined8 uStack_210;
  byte *pbStack_208;
  byte *pbStack_200;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  byte *pbStack_188;
  long *plStack_180;
  long *plStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  byte bStack_90;
  char cStack_8f;
  undefined6 uStack_8e;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  
  bVar3 = *param_2;
  if (bVar3 != 0x14) {
    if (bVar3 != 0x15) {
      lVar11 = FUN_108855b04(param_2,&lStack_d0,&UNK_10b20aca0);
      *param_1 = -0x8000000000000000;
      param_1[1] = lVar11;
      return;
    }
    uStack_210 = *(undefined8 *)(param_2 + 8);
    pbStack_220 = *(byte **)(param_2 + 0x10);
    lVar11 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar16 = pbStack_220 + lVar11;
    pbStack_240 = (byte *)CONCAT71(pbStack_240._1_7_,0x16);
    pbStack_200 = (byte *)0x0;
    pbStack_208 = pbVar16;
    if (*(long *)(param_2 + 0x18) == 0) {
      lStack_140 = -0x7ffffffffffffffe;
      pbStack_188 = (byte *)0x8000000000000000;
      lStack_248 = -0x7ffffffffffffffe;
      plStack_268 = unaff_x24;
      pbStack_218 = pbStack_220;
    }
    else {
      pbVar17 = (byte *)0x0;
      puVar13 = (undefined8 *)((ulong)&uStack_120 | 1);
      puVar14 = (undefined8 *)((ulong)&pbStack_240 | 1);
      puVar12 = (undefined8 *)((ulong)&bStack_90 | 1);
      pbVar21 = (byte *)0x8000000000000000;
      lStack_248 = -0x7ffffffffffffffe;
      lVar15 = -0x7ffffffffffffffe;
      pbStack_258 = (byte *)0x8000000000000000;
      pbVar1 = pbStack_220;
      pbStack_218 = pbStack_220;
      do {
        plVar6 = plStack_110;
        plVar8 = plStack_118;
        pbVar5 = uStack_120;
        pbVar19 = pbVar1 + 0x40;
        bVar2 = *pbVar1;
        pbVar18 = pbVar17;
        pbVar20 = pbVar19;
        if (bVar2 == 0x16) break;
        uStack_120 = (byte *)CONCAT71(uStack_120._1_7_,bVar2);
        pbVar18 = uStack_120;
        uVar9 = *(undefined8 *)(pbVar1 + 0x10);
        *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
        *(undefined8 *)((long)puVar13 + 0xf) = uVar9;
        uVar9 = *(undefined8 *)(pbVar1 + 1);
        puVar13[1] = *(undefined8 *)(pbVar1 + 9);
        *puVar13 = uVar9;
        pbStack_238 = *(byte **)(pbVar1 + 0x28);
        pbStack_240 = *(byte **)(pbVar1 + 0x20);
        pbStack_228 = *(byte **)(pbVar1 + 0x38);
        lStack_230 = *(long *)(pbVar1 + 0x30);
        if (bVar2 < 0xd) {
          if (bVar2 == 1) {
            uStack_120._1_1_ = SUB81(pbVar5,1);
            cVar10 = '\x01';
            if (uStack_120._1_1_ != '\x01') {
              cVar10 = '\x02';
            }
            cStack_8f = '\0';
            if (uStack_120._1_1_ != '\0') {
              cStack_8f = cVar10;
            }
          }
          else {
            if (bVar2 != 4) {
              if (bVar2 != 0xc) goto LAB_101220238;
              if (lStack_108 == 0xc) {
                cStack_8f = '\x01';
                if (*plStack_110 != 0x696c696261706163 || (int)plStack_110[1] != 0x73656974) {
                  cStack_8f = '\x02';
                }
                bStack_90 = 0;
              }
              else if (lStack_108 == 10) {
                cStack_8f = '\x02';
                if (*plStack_110 == 0x6e49746e65696c63 && (short)plStack_110[1] == 0x6f66) {
                  cStack_8f = '\0';
                }
                bStack_90 = 0;
              }
              else {
                cStack_8f = '\x02';
                bStack_90 = 0;
              }
              goto joined_r0x000101220028;
            }
            cVar10 = '\x01';
            if (plStack_118 != (long *)0x1) {
              cVar10 = '\x02';
            }
            cStack_8f = '\0';
            if (plStack_118 != (long *)0x0) {
              cStack_8f = cVar10;
            }
          }
LAB_101220094:
          bStack_90 = 0;
          uStack_120 = pbVar18;
LAB_10122009c:
          FUN_100e077ec(&uStack_120);
LAB_1012200a4:
          if ((bStack_90 & 1) == 0) goto LAB_1012200ac;
LAB_101220260:
          plVar8 = (long *)CONCAT71(uStack_87,uStack_88);
LAB_101220548:
          pbStack_200 = pbVar17 + 1;
          *param_1 = -0x8000000000000000;
          param_1[1] = (long)plVar8;
          pbStack_188 = pbStack_258;
          plStack_180 = plStack_268;
          lStack_140 = lVar15;
          lStack_138 = lStack_260;
          goto joined_r0x0001012203f8;
        }
        if (bVar2 == 0xd) {
          if (plStack_110 == (long *)0xc) {
            cStack_8f = '\x01';
            if (*plStack_118 != 0x696c696261706163 || (int)plStack_118[1] != 0x73656974) {
              cStack_8f = '\x02';
            }
          }
          else if (plStack_110 == (long *)0xa) {
            cStack_8f = '\x02';
            if (*plStack_118 == 0x6e49746e65696c63 && (short)plStack_118[1] == 0x6f66) {
              cStack_8f = '\0';
            }
          }
          else {
            cStack_8f = '\x02';
          }
          goto LAB_101220094;
        }
        if (bVar2 != 0xe) {
          if (bVar2 == 0xf) {
            func_0x000100b66660(&bStack_90,plStack_118,plStack_110);
            goto LAB_10122009c;
          }
LAB_101220238:
          uVar9 = FUN_108855b04(&uStack_120,&lStack_d0,&UNK_10b211020);
          uStack_88 = (undefined1)uVar9;
          uStack_87 = (undefined7)((ulong)uVar9 >> 8);
          bStack_90 = 1;
          goto LAB_101220260;
        }
        func_0x000100b66660(&bStack_90,plStack_110);
joined_r0x000101220028:
        if (plVar8 == (long *)0x0) goto LAB_1012200a4;
        _free(plVar6);
        if ((bStack_90 & 1) != 0) goto LAB_101220260;
LAB_1012200ac:
        bVar2 = (byte)pbStack_240;
        if (cStack_8f == '\0') {
          if (pbVar21 != (byte *)0x8000000000000000) {
            pbStack_200 = pbVar17 + 1;
            lStack_138 = lStack_260;
            pbStack_188 = pbStack_258;
            plStack_180 = plStack_268;
            bStack_90 = 0x6d;
            cStack_8f = 'N';
            uStack_8e = 0x108cb;
            uStack_88 = 10;
            uStack_87 = 0;
            uStack_120 = &bStack_90;
            plStack_118 = (long *)&DAT_100c7b3a0;
            pbStack_218 = pbVar19;
            lStack_140 = lVar15;
            lVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_120);
            goto LAB_1012203e8;
          }
          pbStack_240 = (byte *)CONCAT71(pbStack_240._1_7_,0x16);
          if (bVar2 == 0x16) {
            pbStack_200 = pbVar17 + 1;
            lStack_138 = lStack_260;
            pbStack_188 = pbStack_258;
            plStack_180 = plStack_268;
            pbStack_218 = pbVar19;
            lStack_140 = lVar15;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10122090c;
          }
          uVar9 = *puVar14;
          puVar12[1] = puVar14[1];
          *puVar12 = uVar9;
          uVar9 = *(undefined8 *)((long)puVar14 + 0xf);
          *(undefined8 *)((long)puVar12 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
          *(undefined8 *)((long)puVar12 + 0xf) = uVar9;
          bStack_90 = bVar2;
          func_0x0001012a2f68(&uStack_120,&bStack_90);
          if (uStack_120 == (byte *)0x8000000000000000) {
            pbVar21 = (byte *)0x8000000000000000;
            plVar8 = plStack_118;
            goto LAB_101220548;
          }
          plStack_268 = plStack_118;
          lStack_170 = lStack_108;
          plStack_178 = plStack_110;
          lStack_160 = lStack_f8;
          lStack_168 = lStack_100;
          lStack_150 = lStack_e8;
          lStack_158 = lStack_f0;
          lStack_148 = lStack_e0;
          pbVar21 = uStack_120;
          pbStack_258 = uStack_120;
        }
        else if (cStack_8f == '\x01') {
          if (lStack_248 != -0x7ffffffffffffffe) {
            pbStack_200 = pbVar17 + 1;
            lStack_138 = lStack_260;
            pbStack_188 = pbStack_258;
            plStack_180 = plStack_268;
            bStack_90 = 0x16;
            cStack_8f = 'K';
            uStack_8e = 0x108cb;
            uStack_88 = 0xc;
            uStack_87 = 0;
            uStack_120 = &bStack_90;
            plStack_118 = (long *)&DAT_100c7b3a0;
            pbStack_218 = pbVar19;
            lStack_140 = lVar15;
            lVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_120);
            *param_1 = -0x8000000000000000;
            param_1[1] = lVar11;
            lVar11 = lStack_130;
            goto joined_r0x0001012207c8;
          }
          pbStack_240 = (byte *)CONCAT71(pbStack_240._1_7_,0x16);
          if (bVar2 == 0x16) {
            pbStack_200 = pbVar17 + 1;
            lStack_138 = lStack_260;
            pbStack_188 = pbStack_258;
            plStack_180 = plStack_268;
            pbStack_218 = pbVar19;
            lStack_140 = lVar15;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10122090c;
          }
          uVar9 = *puVar14;
          puVar12[1] = puVar14[1];
          *puVar12 = uVar9;
          uVar9 = *(undefined8 *)((long)puVar14 + 0xf);
          *(undefined8 *)((long)puVar12 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
          *(undefined8 *)((long)puVar12 + 0xf) = uVar9;
          bStack_90 = bVar2;
          if (bVar2 == 0x10) {
LAB_101220114:
            FUN_100e077ec(&bStack_90);
            lVar15 = -0x7fffffffffffffff;
          }
          else {
            if (bVar2 == 0x11) {
              puVar4 = (undefined8 *)CONCAT71(uStack_87,uStack_88);
              plStack_118 = (long *)puVar4[1];
              uStack_120 = (byte *)*puVar4;
              lStack_108 = puVar4[3];
              plStack_110 = (long *)puVar4[2];
              func_0x00010141914c(&lStack_d0,&uStack_120);
              _free(puVar4);
              lVar15 = lStack_d0;
            }
            else {
              if (bVar2 == 0x12) goto LAB_101220114;
              bStack_90 = bVar2;
              func_0x00010141914c(&lStack_d0,&bStack_90);
              lVar15 = lStack_d0;
            }
            lStack_d0 = lVar15;
            if (lVar15 == -0x7ffffffffffffffe) {
              pbStack_200 = pbVar17 + 1;
              plStack_180 = plStack_268;
              pbStack_188 = pbStack_258;
              *param_1 = -0x8000000000000000;
              param_1[1] = lStack_c8;
              pbStack_218 = pbVar19;
              goto LAB_101220570;
            }
          }
          lStack_128 = lStack_b8;
          lStack_130 = lStack_c0;
          lStack_260 = lStack_c8;
          lStack_248 = lVar15;
        }
        else {
          pbStack_240 = (byte *)CONCAT71(pbStack_240._1_7_,0x16);
          if (bVar2 == 0x16) {
            pbStack_200 = pbVar17 + 1;
            lStack_138 = lStack_260;
            pbStack_188 = pbStack_258;
            plStack_180 = plStack_268;
            pbStack_218 = pbVar19;
            lStack_140 = lVar15;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10122090c:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x101220910);
            (*pcVar7)();
          }
          uVar9 = *puVar14;
          puVar13[1] = puVar14[1];
          *puVar13 = uVar9;
          uVar9 = *(undefined8 *)((long)puVar14 + 0xf);
          *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
          *(undefined8 *)((long)puVar13 + 0xf) = uVar9;
          uStack_120 = (byte *)CONCAT71(uStack_120._1_7_,bVar2);
          FUN_100e077ec(&uStack_120);
        }
        pbVar17 = pbVar17 + 1;
        pbVar18 = (byte *)((lVar11 - 0x40U >> 6) + 1);
        pbVar20 = pbVar16;
        pbVar1 = pbVar19;
      } while (pbVar19 != pbVar16);
      lStack_138 = lStack_260;
      pbStack_188 = pbStack_258;
      plStack_180 = plStack_268;
      pbStack_218 = pbVar20;
      pbStack_200 = pbVar18;
      lStack_140 = lVar15;
      if (pbVar21 != (byte *)0x8000000000000000) {
        if (lStack_248 == -0x7ffffffffffffffe) {
          lStack_248 = -0x7fffffffffffffff;
        }
        else {
          lStack_a8 = lStack_130;
          lStack_b0 = lStack_260;
          lStack_a0 = lStack_128;
        }
        param_1[3] = lStack_170;
        param_1[2] = (long)plStack_178;
        param_1[5] = lStack_160;
        param_1[4] = lStack_168;
        param_1[7] = lStack_150;
        param_1[6] = lStack_158;
        *param_1 = (long)pbVar21;
        param_1[1] = (long)plStack_268;
        param_1[8] = lStack_148;
        param_1[9] = lStack_248;
        param_1[0xb] = lStack_a8;
        param_1[10] = lStack_b0;
        param_1[0xc] = lStack_a0;
        lStack_1e8 = param_1[1];
        lStack_1f0 = *param_1;
        lStack_1d8 = param_1[3];
        lStack_1e0 = param_1[2];
        lStack_1c8 = param_1[5];
        lStack_1d0 = param_1[4];
        lStack_1b8 = param_1[7];
        lStack_1c0 = param_1[6];
        lStack_1a8 = param_1[9];
        lStack_1b0 = param_1[8];
        lStack_198 = param_1[0xb];
        lStack_1a0 = param_1[10];
        lStack_190 = lStack_a0;
        FUN_100d34830(&pbStack_220);
        if (pbVar16 != pbVar20) {
          uStack_120 = pbVar18;
          lVar11 = FUN_1087e422c(pbVar18 + ((ulong)((long)pbVar16 - (long)pbVar20) >> 6),&uStack_120
                                 ,&UNK_10b23a190);
          *param_1 = -0x8000000000000000;
          param_1[1] = lVar11;
          FUN_100e427f4(&lStack_1f0);
        }
        goto LAB_1012205d4;
      }
    }
    bStack_90 = 0x6d;
    cStack_8f = 'N';
    uStack_8e = 0x108cb;
    uStack_88 = 10;
    uStack_87 = 0;
    uStack_120 = &bStack_90;
    plStack_118 = (long *)&DAT_100c7b3a0;
    pbVar21 = (byte *)0x8000000000000000;
    lVar11 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_120);
LAB_1012203e8:
    *param_1 = -0x8000000000000000;
    param_1[1] = lVar11;
    pbVar19 = pbStack_218;
joined_r0x0001012203f8:
    pbStack_218 = pbVar19;
    lVar11 = lStack_130;
    if (lStack_248 != -0x7ffffffffffffffe) {
joined_r0x0001012207c8:
      lStack_130 = lVar11;
      if ((lStack_248 != -0x7fffffffffffffff) && (lStack_248 != -0x8000000000000000)) {
        if (lVar11 != 0) {
          puVar12 = (undefined8 *)(lStack_260 + 8);
          do {
            if (puVar12[-1] != 0) {
              _free(*puVar12);
            }
            puVar12 = puVar12 + 3;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        if (lStack_248 != 0) {
          _free(lStack_260);
        }
      }
    }
LAB_101220570:
    if (pbVar21 != (byte *)0x8000000000000000) {
      if (pbVar21 != (byte *)0x0) {
        _free(plStack_268);
      }
      if ((lStack_158 != -0x8000000000000000) && (lStack_158 != 0)) {
        _free(lStack_150);
      }
      if (lStack_170 != 0) {
        _free(lStack_168);
      }
    }
    FUN_100d34830(&pbStack_220);
    if ((byte)pbStack_240 != '\x16') {
      FUN_100e077ec(&pbStack_240);
    }
    goto LAB_1012205d4;
  }
  lVar11 = *(long *)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  lVar15 = *(long *)(param_2 + 0x18);
  pbVar17 = pbVar1 + lVar15 * 0x20;
  pbStack_220 = (byte *)0x0;
  pbVar16 = pbVar1;
  pbStack_240 = pbVar1;
  lStack_230 = lVar11;
  pbStack_228 = pbVar17;
  if (lVar15 == 0) {
LAB_10121fdcc:
    pbStack_238 = pbVar16;
    plVar8 = (long *)FUN_1087e422c(0,&UNK_10b22f458,&UNK_10b20a590);
LAB_10121fde8:
    *param_1 = -0x8000000000000000;
    param_1[1] = (long)plVar8;
  }
  else {
    pbVar16 = pbVar1 + 0x20;
    if (*pbVar1 == 0x16) goto LAB_10121fdcc;
    uVar9 = *(undefined8 *)(pbVar1 + 1);
    uStack_87 = (undefined7)*(undefined8 *)(pbVar1 + 9);
    cStack_8f = (char)uVar9;
    uStack_8e = (undefined6)((ulong)uVar9 >> 8);
    uStack_88 = (undefined1)((ulong)uVar9 >> 0x38);
    uStack_78 = *(undefined8 *)(pbVar1 + 0x18);
    uStack_80 = (undefined1)*(undefined8 *)(pbVar1 + 0x10);
    uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar1 + 0x10) >> 8);
    pbStack_220 = (byte *)0x1;
    pbStack_238 = pbVar16;
    bStack_90 = *pbVar1;
    func_0x0001012a2f68(&uStack_120,&bStack_90);
    plVar8 = plStack_118;
    pbVar21 = uStack_120;
    if (uStack_120 == (byte *)0x8000000000000000) goto LAB_10121fde8;
    lStack_170 = lStack_108;
    plStack_178 = plStack_110;
    lStack_160 = lStack_f8;
    lStack_168 = lStack_100;
    lStack_150 = lStack_e8;
    lStack_158 = lStack_f0;
    lStack_148 = lStack_e0;
    pbStack_188 = uStack_120;
    plStack_180 = plStack_118;
    if (lVar15 == 1) {
LAB_10122031c:
      lStack_c8 = FUN_1087e422c(1,&UNK_10b22f458,&UNK_10b20a590);
LAB_101220334:
      *param_1 = -0x8000000000000000;
      param_1[1] = lStack_c8;
      if (pbVar21 != (byte *)0x0) {
        _free(plVar8);
      }
      if ((lStack_158 != -0x8000000000000000) && (lStack_158 != 0)) {
        _free(lStack_150);
      }
      if (lStack_170 != 0) {
        _free(lStack_168);
      }
    }
    else {
      pbVar16 = pbVar1 + 0x40;
      bVar2 = pbVar1[0x20];
      pbStack_238 = pbVar16;
      if (bVar2 == 0x16) goto LAB_10122031c;
      uVar9 = *(undefined8 *)(pbVar1 + 0x21);
      uStack_87 = (undefined7)*(undefined8 *)(pbVar1 + 0x29);
      cStack_8f = (char)uVar9;
      uStack_8e = (undefined6)((ulong)uVar9 >> 8);
      uStack_88 = (undefined1)((ulong)uVar9 >> 0x38);
      uStack_78 = *(undefined8 *)(pbVar1 + 0x38);
      uStack_80 = (undefined1)*(undefined8 *)(pbVar1 + 0x30);
      uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar1 + 0x30) >> 8);
      pbStack_220 = (byte *)0x2;
      bStack_90 = bVar2;
      if (bVar2 != 0x10) {
        if (bVar2 == 0x11) {
          puVar12 = (undefined8 *)CONCAT71(uStack_87,uStack_88);
          plStack_118 = (long *)puVar12[1];
          uStack_120 = (byte *)*puVar12;
          lStack_108 = puVar12[3];
          plStack_110 = (long *)puVar12[2];
          func_0x00010141914c(&lStack_d0,&uStack_120);
          _free(puVar12);
        }
        else {
          if (bVar2 == 0x12) goto LAB_10122063c;
          func_0x00010141914c(&lStack_d0,&bStack_90);
        }
        if (lStack_d0 != -0x7ffffffffffffffe) {
          lStack_138 = lStack_b8;
          lStack_140 = lStack_c0;
          if (lStack_d0 != -0x7ffffffffffffffd) goto LAB_101220648;
        }
        goto LAB_101220334;
      }
LAB_10122063c:
      lStack_c8 = FUN_100e077ec(&bStack_90);
      lStack_d0 = -0x7fffffffffffffff;
LAB_101220648:
      param_1[0xc] = lStack_138;
      param_1[0xb] = lStack_140;
      param_1[1] = (long)plStack_180;
      *param_1 = (long)pbStack_188;
      param_1[3] = lStack_170;
      param_1[2] = (long)plStack_178;
      param_1[5] = lStack_160;
      param_1[4] = lStack_168;
      param_1[7] = lStack_150;
      param_1[6] = lStack_158;
      param_1[8] = lStack_148;
      param_1[9] = lStack_d0;
      param_1[10] = lStack_c8;
      if (*param_1 != -0x8000000000000000) {
        lStack_1a8 = param_1[9];
        lStack_1b0 = param_1[8];
        lStack_198 = param_1[0xb];
        lStack_1a0 = param_1[10];
        lStack_190 = param_1[0xc];
        lStack_1e8 = param_1[1];
        lStack_1f0 = *param_1;
        lStack_1d8 = param_1[3];
        lStack_1e0 = param_1[2];
        lStack_1c8 = param_1[5];
        lStack_1d0 = param_1[4];
        lStack_1b8 = param_1[7];
        lStack_1c0 = param_1[6];
        lVar11 = FUN_100fbc738(&pbStack_240);
        if (lVar11 != 0) {
          *param_1 = -0x8000000000000000;
          param_1[1] = lVar11;
          FUN_100e427f4(&lStack_1f0);
        }
        goto LAB_1012205d4;
      }
    }
  }
  lVar15 = ((ulong)((long)pbVar17 - (long)pbVar16) >> 5) + 1;
  while (lVar15 = lVar15 + -1, lVar15 != 0) {
    FUN_100e077ec(pbVar16);
    pbVar16 = pbVar16 + 0x20;
  }
  if (lVar11 != 0) {
    _free(pbVar1);
  }
LAB_1012205d4:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

