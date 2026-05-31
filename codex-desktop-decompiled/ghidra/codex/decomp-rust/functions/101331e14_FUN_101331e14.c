
/* WARNING: Type propagation algorithm not settling */

void FUN_101331e14(long *param_1,byte *param_2)

{
  byte *pbVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  char cVar11;
  bool bVar12;
  undefined1 uVar13;
  ushort uVar14;
  code *pcVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long unaff_x21;
  ulong uVar21;
  undefined8 *puVar22;
  byte *pbVar23;
  long lVar24;
  long lVar25;
  byte *pbVar26;
  byte *pbVar27;
  ulong uVar28;
  undefined1 auVar29 [16];
  long lStack_170;
  long lStack_160;
  long lStack_158;
  long lStack_148;
  long lStack_140;
  long lStack_128;
  byte *pbStack_110;
  byte *pbStack_108;
  long lStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  long lStack_d0;
  undefined2 uStack_c0;
  long lStack_b8;
  byte bStack_b0;
  byte bStack_af;
  undefined6 uStack_ae;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  byte bStack_90;
  byte bStack_8f;
  undefined6 uStack_8e;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long lStack_78;
  
  bVar6 = *param_2;
  if (bVar6 != 0x14) {
    if (bVar6 != 0x15) {
      lVar18 = FUN_108855b04(param_2,&uStack_c0,&UNK_10b20af20);
      *param_1 = 3;
      param_1[1] = lVar18;
      return;
    }
    uStack_e0 = *(undefined8 *)(param_2 + 8);
    pbStack_f0 = *(byte **)(param_2 + 0x10);
    lVar18 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar23 = pbStack_f0 + lVar18;
    pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
    lStack_d0 = 0;
    pbStack_d8 = pbVar23;
    if (*(long *)(param_2 + 0x18) == 0) {
      uVar21 = 0x8000000000000001;
      lStack_140 = unaff_x21;
      pbStack_e8 = pbStack_f0;
    }
    else {
      lVar24 = 0;
      puVar20 = (undefined8 *)((ulong)&bStack_90 | 1);
      puVar22 = (undefined8 *)((ulong)&pbStack_110 | 1);
      puVar19 = (undefined8 *)((ulong)&bStack_b0 | 1);
      cVar11 = '\a';
      lStack_128 = 3;
      uVar28 = 0x8000000000000000;
      uVar21 = 0x8000000000000001;
      pbVar1 = pbStack_f0;
      pbStack_e8 = pbStack_f0;
      do {
        pbVar26 = pbVar1 + 0x40;
        bVar5 = *pbVar1;
        lVar25 = lVar24;
        pbVar27 = pbVar26;
        if (bVar5 == 0x16) break;
        uVar16 = *(undefined8 *)(pbVar1 + 0x10);
        *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
        *(undefined8 *)((long)puVar20 + 0xf) = uVar16;
        uVar16 = *(undefined8 *)(pbVar1 + 1);
        puVar20[1] = *(undefined8 *)(pbVar1 + 9);
        *puVar20 = uVar16;
        pbStack_108 = *(byte **)(pbVar1 + 0x28);
        pbStack_110 = *(byte **)(pbVar1 + 0x20);
        pbStack_f8 = *(byte **)(pbVar1 + 0x38);
        lStack_100 = *(long *)(pbVar1 + 0x30);
        plVar3 = (long *)CONCAT71(uStack_87,uStack_88);
        plVar10 = (long *)CONCAT71(uStack_7f,uStack_80);
        bStack_90 = bVar5;
        if (bVar5 < 0xd) {
          if (bVar5 == 1) {
            bStack_af = bStack_8f;
            if (3 < bStack_8f) {
              bStack_af = 4;
            }
LAB_1013321a8:
            bStack_b0 = 0;
            goto LAB_1013321ac;
          }
          if (bVar5 == 4) {
            if ((long *)0x3 < plVar3) {
              plVar3 = (long *)0x4;
            }
            bStack_af = (byte)plVar3;
            goto LAB_1013321a8;
          }
          if (bVar5 == 0xc) {
            if (lStack_78 < 9) {
              if (lStack_78 == 6) {
                if ((int)*plVar10 == 0x74617473 && *(short *)((long)plVar10 + 4) == 0x7375) {
                  bStack_af = 2;
                  bStack_b0 = 0;
                  goto joined_r0x00010133244c;
                }
                goto LAB_101332134;
              }
              if ((lStack_78 != 8) || (*plVar10 != 0x6449646165726874)) goto LAB_101332134;
              bStack_af = 0;
            }
            else {
              if (lStack_78 == 9) {
                if (*plVar10 == 0x76697463656a626f && (char)plVar10[1] == 'e') {
                  bStack_af = 1;
                  goto joined_r0x00010133244c;
                }
              }
              else if ((lStack_78 == 0xb) &&
                      (*plVar10 == 0x6475426e656b6f74 &&
                       *(long *)((long)plVar10 + 3) == 0x7465676475426e65)) {
                bStack_af = 3;
joined_r0x00010133244c:
                bStack_b0 = 0;
                goto joined_r0x00010133244c;
              }
LAB_101332134:
              bStack_af = 4;
            }
            bStack_b0 = 0;
            goto joined_r0x00010133244c;
          }
LAB_10133245c:
          uVar16 = FUN_108855b04(&bStack_90,&uStack_c0,&UNK_10b210900);
          uStack_a8 = (undefined1)uVar16;
          uStack_a7 = (undefined7)((ulong)uVar16 >> 8);
          bStack_b0 = 1;
        }
        else {
          if (bVar5 == 0xd) {
            if ((long)plVar10 < 9) {
              if (plVar10 == (long *)0x6) {
                if ((int)*plVar3 != 0x74617473 || *(short *)((long)plVar3 + 4) != 0x7375)
                goto LAB_1013321a0;
                bStack_af = 2;
              }
              else if ((plVar10 == (long *)0x8) && (*plVar3 == 0x6449646165726874)) {
                bStack_af = 0;
              }
              else {
LAB_1013321a0:
                bStack_af = 4;
              }
            }
            else if (plVar10 == (long *)0x9) {
              if (*plVar3 != 0x76697463656a626f || (char)plVar3[1] != 'e') goto LAB_1013321a0;
              bStack_af = 1;
            }
            else {
              if ((plVar10 != (long *)0xb) ||
                 (*plVar3 != 0x6475426e656b6f74 || *(long *)((long)plVar3 + 3) != 0x7465676475426e65
                 )) goto LAB_1013321a0;
              bStack_af = 3;
            }
            goto LAB_1013321a8;
          }
          if (bVar5 == 0xe) {
            func_0x000100bb1914(&bStack_b0,plVar10);
joined_r0x00010133244c:
            if (plVar3 != (long *)0x0) {
              _free(plVar10);
            }
            goto LAB_1013321b4;
          }
          if (bVar5 != 0xf) goto LAB_10133245c;
          func_0x000100bb1914(&bStack_b0,plVar3,plVar10);
LAB_1013321ac:
          FUN_100e077ec(&bStack_90);
        }
LAB_1013321b4:
        if ((bStack_b0 & 1) != 0) {
          lStack_b8 = CONCAT71(uStack_a7,uStack_a8);
LAB_1013325b8:
          lStack_d0 = lVar24 + 1;
          *param_1 = 3;
          param_1[1] = lStack_b8;
          pbStack_e8 = pbVar26;
          goto joined_r0x000101332864;
        }
        bVar5 = (byte)pbStack_110;
        if (bStack_af < 2) {
          if (bStack_af == 0) {
            if (uVar28 != 0x8000000000000000) {
              lStack_d0 = lVar24 + 1;
              bStack_b0 = 0xf8;
              bStack_af = 0x82;
              uStack_ae = 0x108c9;
              uStack_a8 = 8;
              uStack_a7 = 0;
              bStack_90 = (byte)&bStack_b0;
              bStack_8f = (byte)((ulong)&bStack_b0 >> 8);
              uStack_8e = (undefined6)((ulong)&bStack_b0 >> 0x10);
              uStack_88 = 0xa0;
              uStack_87 = 0x100c7b3;
              pbStack_e8 = pbVar26;
              lVar18 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
              goto LAB_101332640;
            }
            pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
            if (bVar5 == 0x16) {
              lStack_d0 = lVar24 + 1;
              pbStack_e8 = pbVar26;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_101332ba8;
            }
            uVar16 = *puVar22;
            puVar20[1] = puVar22[1];
            *puVar20 = uVar16;
            uVar16 = *(undefined8 *)((long)puVar22 + 0xf);
            *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar22 + 0x17);
            *(undefined8 *)((long)puVar20 + 0xf) = uVar16;
            bStack_90 = bVar5;
            FUN_1004b62d4(&bStack_b0,&bStack_90);
            uVar28 = CONCAT62(uStack_ae,CONCAT11(bStack_af,bStack_b0));
            if (uVar28 == 0x8000000000000000) {
              lStack_b8 = CONCAT71(uStack_a7,uStack_a8);
              uVar28 = 0;
              goto LAB_1013325b8;
            }
            lStack_140 = CONCAT71(uStack_a7,uStack_a8);
            lStack_158 = CONCAT71(uStack_9f,uStack_a0);
            uVar14 = uStack_c0;
          }
          else {
            if (uVar21 != 0x8000000000000001) {
              lStack_d0 = lVar24 + 1;
              bStack_b0 = 0xd3;
              bStack_af = 0xfb;
              uStack_ae = 0x108ca;
              uStack_a8 = 9;
              uStack_a7 = 0;
              bStack_90 = (byte)&bStack_b0;
              bStack_8f = (byte)((ulong)&bStack_b0 >> 8);
              uStack_8e = (undefined6)((ulong)&bStack_b0 >> 0x10);
              uStack_88 = 0xa0;
              uStack_87 = 0x100c7b3;
              pbStack_e8 = pbVar26;
              lVar18 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
              *param_1 = 3;
              param_1[1] = lVar18;
              uVar21 = uVar21 & 0x7fffffffffffffff;
              goto joined_r0x000101332aec;
            }
            pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
            if (bVar5 == 0x16) {
              lStack_d0 = lVar24 + 1;
              pbStack_e8 = pbVar26;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_101332ba8;
            }
            uVar16 = *puVar22;
            puVar20[1] = puVar22[1];
            *puVar20 = uVar16;
            uVar16 = *(undefined8 *)((long)puVar22 + 0xf);
            *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar22 + 0x17);
            *(undefined8 *)((long)puVar20 + 0xf) = uVar16;
            bStack_90 = bVar5;
            FUN_1004b60cc(&bStack_b0,&bStack_90);
            uVar21 = CONCAT62(uStack_ae,CONCAT11(bStack_af,bStack_b0));
            if (uVar21 == 0x8000000000000001) {
              lStack_d0 = lVar24 + 1;
              *param_1 = 3;
              param_1[1] = CONCAT71(uStack_a7,uStack_a8);
              pbStack_e8 = pbVar26;
              goto LAB_101332664;
            }
            lStack_148 = CONCAT71(uStack_a7,uStack_a8);
            lStack_160 = CONCAT71(uStack_9f,uStack_a0);
            uVar14 = uStack_c0;
          }
        }
        else if (bStack_af == 2) {
          if (cVar11 != '\a') {
            lStack_d0 = lVar24 + 1;
            bStack_b0 = 0x5e;
            bStack_af = 0x10;
            uStack_ae = 0x108ca;
            uStack_a8 = 6;
            uStack_a7 = 0;
            bStack_90 = (byte)&bStack_b0;
            bStack_8f = (byte)((ulong)&bStack_b0 >> 8);
            uStack_8e = (undefined6)((ulong)&bStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pbStack_e8 = pbVar26;
            lVar18 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
            goto LAB_101332640;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar5 == 0x16) goto LAB_1013328b8;
          uVar16 = *puVar22;
          puVar19[1] = puVar22[1];
          *puVar19 = uVar16;
          uVar16 = *(undefined8 *)((long)puVar22 + 0xf);
          *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar22 + 0x17);
          *(undefined8 *)((long)puVar19 + 0xf) = uVar16;
          bStack_b0 = bVar5;
          if (bVar5 == 0x10) {
LAB_1013322e4:
            uStack_c0 = 0x600;
            FUN_100e077ec(&bStack_b0);
LAB_101332404:
            uVar14 = uStack_c0;
          }
          else {
            if (bVar5 != 0x11) {
              if (bVar5 == 0x12) goto LAB_1013322e4;
              func_0x00010140d2fc(&uStack_c0,&bStack_b0);
              goto LAB_101332404;
            }
            puVar7 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
            uVar16 = *puVar7;
            uStack_88 = (undefined1)puVar7[1];
            uStack_87 = (undefined7)((ulong)puVar7[1] >> 8);
            bStack_90 = (byte)uVar16;
            bStack_8f = (byte)((ulong)uVar16 >> 8);
            uStack_8e = (undefined6)((ulong)uVar16 >> 0x10);
            lStack_78 = puVar7[3];
            uStack_80 = (undefined1)puVar7[2];
            uStack_7f = (undefined7)((ulong)puVar7[2] >> 8);
            func_0x00010140d2fc(&uStack_c0,&bStack_90);
            _free(puVar7);
            uVar14 = uStack_c0;
          }
          bVar12 = (char)uStack_c0 == '\x01';
          uStack_c0 = uVar14;
          if (bVar12) goto LAB_1013325b8;
          uStack_c0._1_1_ = (char)(uVar14 >> 8);
          cVar11 = uStack_c0._1_1_;
        }
        else if (bStack_af == 3) {
          if (lStack_128 != 3) {
            lStack_d0 = lVar24 + 1;
            bStack_b0 = 0xdc;
            bStack_af = 0xfb;
            uStack_ae = 0x108ca;
            uStack_a8 = 0xb;
            uStack_a7 = 0;
            bStack_90 = (byte)&bStack_b0;
            bStack_8f = (byte)((ulong)&bStack_b0 >> 8);
            uStack_8e = (undefined6)((ulong)&bStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pbStack_e8 = pbVar26;
            lVar18 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
            goto LAB_101332640;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar5 == 0x16) goto LAB_1013328b8;
          uVar16 = *puVar22;
          puVar19[1] = puVar22[1];
          *puVar19 = uVar16;
          uVar16 = *(undefined8 *)((long)puVar22 + 0xf);
          *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar22 + 0x17);
          *(undefined8 *)((long)puVar19 + 0xf) = uVar16;
          bStack_b0 = bVar5;
          if (bVar5 == 0x10) {
LAB_101332228:
            FUN_100e077ec(&bStack_b0);
            lStack_128 = 0;
            uVar14 = uStack_c0;
          }
          else {
            if (bVar5 == 0x11) {
              puVar7 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
              uVar16 = *puVar7;
              uStack_88 = (undefined1)puVar7[1];
              uStack_87 = (undefined7)((ulong)puVar7[1] >> 8);
              bStack_90 = (byte)uVar16;
              bStack_8f = (byte)((ulong)uVar16 >> 8);
              uStack_8e = (undefined6)((ulong)uVar16 >> 0x10);
              lStack_78 = puVar7[3];
              uStack_80 = (undefined1)puVar7[2];
              uStack_7f = (undefined7)((ulong)puVar7[2] >> 8);
              auVar29 = FUN_100614fd8(&bStack_90);
              _free(puVar7);
            }
            else {
              if (bVar5 == 0x12) goto LAB_101332228;
              auVar29 = FUN_100614fd8(&bStack_b0);
            }
            lStack_170 = auVar29._8_8_;
            lStack_128 = auVar29._0_8_ + 1;
            uVar14 = uStack_c0;
            if (lStack_128 == 2) {
              lStack_d0 = lVar24 + 1;
              *param_1 = 3;
              param_1[1] = lStack_170;
              pbStack_e8 = pbVar26;
              goto joined_r0x000101332864;
            }
          }
        }
        else {
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar5 == 0x16) {
LAB_1013328b8:
            pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
            lStack_d0 = lVar24 + 1;
            pbStack_e8 = pbVar26;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101332ba8:
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x101332bac);
            (*pcVar15)();
          }
          uVar16 = *puVar22;
          puVar20[1] = puVar22[1];
          *puVar20 = uVar16;
          uVar16 = *(undefined8 *)((long)puVar22 + 0xf);
          *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar22 + 0x17);
          *(undefined8 *)((long)puVar20 + 0xf) = uVar16;
          bStack_90 = bVar5;
          FUN_100e077ec(&bStack_90);
          uVar14 = uStack_c0;
        }
        uStack_c0 = uVar14;
        lVar24 = lVar24 + 1;
        lVar25 = (lVar18 - 0x40U >> 6) + 1;
        pbVar27 = pbVar23;
        pbVar1 = pbVar26;
      } while (pbVar26 != pbVar23);
      pbStack_e8 = pbVar27;
      lStack_d0 = lVar25;
      if (uVar28 != 0x8000000000000000) {
        uVar4 = 0x8000000000000000;
        if (uVar21 != 0x8000000000000001) {
          uVar4 = uVar21;
        }
        cVar2 = '\x06';
        if (cVar11 != '\a') {
          cVar2 = cVar11;
        }
        lVar18 = 2;
        if (lStack_128 != 3) {
          lVar18 = lStack_128;
        }
        *param_1 = lVar18;
        param_1[1] = lStack_170;
        param_1[2] = uVar28;
        param_1[3] = lStack_140;
        param_1[4] = lStack_158;
        param_1[5] = uVar4;
        param_1[6] = lStack_148;
        param_1[7] = lStack_160;
        *(char *)(param_1 + 8) = cVar2;
        FUN_100d34830(&pbStack_f0);
        if (pbVar23 != pbVar27) {
          bStack_90 = (byte)lVar25;
          bStack_8f = (byte)((ulong)lVar25 >> 8);
          uStack_8e = (undefined6)((ulong)lVar25 >> 0x10);
          lVar18 = FUN_1087e422c(((ulong)((long)pbVar23 - (long)pbVar27) >> 6) + lVar25,&bStack_90,
                                 &UNK_10b23a190);
          *param_1 = 3;
          param_1[1] = lVar18;
          if (uVar28 != 0) {
            _free(lStack_140);
          }
          if ((uVar4 & 0x7fffffffffffffff) != 0) {
            _free(lStack_148);
          }
        }
        goto LAB_1013326fc;
      }
    }
    bStack_b0 = 0xf8;
    bStack_af = 0x82;
    uStack_ae = 0x108c9;
    uStack_a8 = 8;
    uStack_a7 = 0;
    bStack_90 = (byte)&bStack_b0;
    bStack_8f = (byte)((ulong)&bStack_b0 >> 8);
    uStack_8e = (undefined6)((ulong)&bStack_b0 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    uVar28 = 0;
    lVar18 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
LAB_101332640:
    *param_1 = 3;
    param_1[1] = lVar18;
joined_r0x000101332864:
    if (-0x7fffffffffffffff < (long)uVar21) {
joined_r0x000101332aec:
      if (uVar21 != 0) {
        _free(lStack_148);
      }
    }
LAB_101332664:
    if ((uVar28 & 0x7fffffffffffffff) != 0) {
      _free(lStack_140);
    }
    FUN_100d34830(&pbStack_f0);
    if ((byte)pbStack_110 != '\x16') {
      FUN_100e077ec(&pbStack_110);
    }
    goto LAB_1013326fc;
  }
  uVar21 = *(ulong *)(param_2 + 8);
  pbVar27 = *(byte **)(param_2 + 0x10);
  lVar18 = *(long *)(param_2 + 0x18);
  pbVar1 = pbVar27 + lVar18 * 0x20;
  pbStack_f0 = (byte *)0x0;
  pbVar23 = pbVar27;
  pbStack_110 = pbVar27;
  lStack_100 = uVar21;
  pbStack_f8 = pbVar1;
  if (lVar18 == 0) {
LAB_1013324b4:
    pbStack_108 = pbVar23;
    lVar24 = FUN_1087e422c(0,&UNK_10b231d58,&UNK_10b20a590);
LAB_1013324d0:
    *param_1 = 3;
    param_1[1] = lVar24;
LAB_1013324d8:
    lVar18 = ((ulong)((long)pbVar1 - (long)pbVar23) >> 5) + 1;
    while (lVar18 = lVar18 + -1, lVar18 != 0) {
      FUN_100e077ec(pbVar23);
      pbVar23 = pbVar23 + 0x20;
    }
  }
  else {
    pbVar23 = pbVar27 + 0x20;
    if (*pbVar27 == 0x16) goto LAB_1013324b4;
    uVar16 = *(undefined8 *)(pbVar27 + 1);
    uStack_87 = (undefined7)*(undefined8 *)(pbVar27 + 9);
    bStack_8f = (byte)uVar16;
    uStack_8e = (undefined6)((ulong)uVar16 >> 8);
    uStack_88 = (undefined1)((ulong)uVar16 >> 0x38);
    lStack_78 = *(long *)(pbVar27 + 0x18);
    uStack_80 = (undefined1)*(undefined8 *)(pbVar27 + 0x10);
    uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar27 + 0x10) >> 8);
    pbStack_f0 = (byte *)0x1;
    pbStack_108 = pbVar23;
    bStack_90 = *pbVar27;
    FUN_1004b62d4(&bStack_b0,&bStack_90);
    lVar25 = CONCAT62(uStack_ae,CONCAT11(bStack_af,bStack_b0));
    lVar24 = CONCAT71(uStack_a7,uStack_a8);
    if (lVar25 == -0x8000000000000000) goto LAB_1013324d0;
    if (lVar18 == 1) {
LAB_101332578:
      lVar18 = FUN_1087e422c(1,&UNK_10b231d58,&UNK_10b20a590);
      *param_1 = 3;
      param_1[1] = lVar18;
joined_r0x00010133277c:
      if (lVar25 != 0) {
        _free(lVar24);
      }
      goto LAB_1013324d8;
    }
    lVar8 = CONCAT71(uStack_9f,uStack_a0);
    pbVar23 = pbVar27 + 0x40;
    pbStack_108 = pbVar23;
    if (pbVar27[0x20] == 0x16) goto LAB_101332578;
    uVar16 = *(undefined8 *)(pbVar27 + 0x21);
    uStack_87 = (undefined7)*(undefined8 *)(pbVar27 + 0x29);
    bStack_8f = (byte)uVar16;
    uStack_8e = (undefined6)((ulong)uVar16 >> 8);
    uStack_88 = (undefined1)((ulong)uVar16 >> 0x38);
    lStack_78 = *(long *)(pbVar27 + 0x38);
    uStack_80 = (undefined1)*(undefined8 *)(pbVar27 + 0x30);
    uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar27 + 0x30) >> 8);
    pbStack_f0 = (byte *)0x2;
    bStack_90 = pbVar27[0x20];
    FUN_1004b60cc(&bStack_b0,&bStack_90);
    uVar28 = CONCAT62(uStack_ae,CONCAT11(bStack_af,bStack_b0));
    pbVar26 = (byte *)CONCAT71(uStack_a7,uStack_a8);
    if (uVar28 == 0x8000000000000001) {
      *param_1 = 3;
      param_1[1] = (long)pbVar26;
      goto joined_r0x00010133277c;
    }
    if (lVar18 == 2) {
LAB_1013327f8:
      lStack_b8 = FUN_1087e422c(2,&UNK_10b231d58,&UNK_10b20a590);
LAB_101332810:
      *param_1 = 3;
      param_1[1] = lStack_b8;
      if ((uVar28 & 0x7fffffffffffffff) != 0) {
        _free(pbVar26);
      }
      goto joined_r0x00010133277c;
    }
    lVar9 = CONCAT71(uStack_9f,uStack_a0);
    pbVar23 = pbVar27 + 0x60;
    bVar5 = pbVar27[0x40];
    pbStack_108 = pbVar23;
    if (bVar5 == 0x16) goto LAB_1013327f8;
    uVar16 = *(undefined8 *)(pbVar27 + 0x41);
    uStack_a7 = (undefined7)*(undefined8 *)(pbVar27 + 0x49);
    bStack_af = (byte)uVar16;
    uStack_ae = (undefined6)((ulong)uVar16 >> 8);
    uStack_a8 = (undefined1)((ulong)uVar16 >> 0x38);
    uStack_98 = *(undefined8 *)(pbVar27 + 0x58);
    uStack_a0 = (undefined1)*(undefined8 *)(pbVar27 + 0x50);
    uStack_9f = (undefined7)((ulong)*(undefined8 *)(pbVar27 + 0x50) >> 8);
    pbStack_f0 = (byte *)0x3;
    bStack_b0 = bVar5;
    if (bVar5 == 0x10) {
LAB_1013328a4:
      uStack_c0 = 0x600;
      lVar17 = FUN_100e077ec(&bStack_b0);
    }
    else if (bVar5 == 0x11) {
      puVar19 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
      uVar16 = *puVar19;
      uStack_88 = (undefined1)puVar19[1];
      uStack_87 = (undefined7)((ulong)puVar19[1] >> 8);
      bStack_90 = (byte)uVar16;
      bStack_8f = (byte)((ulong)uVar16 >> 8);
      uStack_8e = (undefined6)((ulong)uVar16 >> 0x10);
      lStack_78 = puVar19[3];
      uStack_80 = (undefined1)puVar19[2];
      uStack_7f = (undefined7)((ulong)puVar19[2] >> 8);
      func_0x00010140d2fc(&uStack_c0,&bStack_90);
      lVar17 = _free(puVar19);
    }
    else {
      if (bVar5 == 0x12) goto LAB_1013328a4;
      lVar17 = func_0x00010140d2fc(&uStack_c0,&bStack_b0);
    }
    if ((uStack_c0 & 1) != 0) goto LAB_101332810;
    uVar13 = uStack_c0._1_1_;
    if (lVar18 == 3) {
LAB_101332958:
      lVar18 = 3;
      lStack_b8 = lVar17;
    }
    else {
      pbVar23 = pbVar27 + 0x80;
      bVar5 = pbVar27[0x60];
      pbStack_108 = pbVar23;
      if (bVar5 == 0x16) goto LAB_101332958;
      uVar16 = *(undefined8 *)(pbVar27 + 0x61);
      uStack_a7 = (undefined7)*(undefined8 *)(pbVar27 + 0x69);
      bStack_af = (byte)uVar16;
      uStack_ae = (undefined6)((ulong)uVar16 >> 8);
      uStack_a8 = (undefined1)((ulong)uVar16 >> 0x38);
      uStack_98 = *(undefined8 *)(pbVar27 + 0x78);
      uStack_a0 = (undefined1)*(undefined8 *)(pbVar27 + 0x70);
      uStack_9f = (undefined7)((ulong)*(undefined8 *)(pbVar27 + 0x70) >> 8);
      pbStack_f0 = (byte *)0x4;
      bStack_b0 = bVar5;
      if (bVar5 == 0x10) {
LAB_1013329e4:
        lStack_b8 = FUN_100e077ec(&bStack_b0);
        lVar18 = 0;
      }
      else {
        if (bVar5 == 0x11) {
          puVar19 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
          uVar16 = *puVar19;
          uStack_88 = (undefined1)puVar19[1];
          uStack_87 = (undefined7)((ulong)puVar19[1] >> 8);
          bStack_90 = (byte)uVar16;
          bStack_8f = (byte)((ulong)uVar16 >> 8);
          uStack_8e = (undefined6)((ulong)uVar16 >> 0x10);
          lStack_78 = puVar19[3];
          uStack_80 = (undefined1)puVar19[2];
          uStack_7f = (undefined7)((ulong)puVar19[2] >> 8);
          auVar29 = FUN_100614fd8(&bStack_90);
          _free(puVar19);
        }
        else {
          if (bVar5 == 0x12) goto LAB_1013329e4;
          auVar29 = FUN_100614fd8(&bStack_b0);
        }
        lStack_b8 = auVar29._8_8_;
        lStack_140 = auVar29._0_8_;
        lVar18 = lStack_140 + 1;
        if (lVar18 == 2) goto LAB_101332810;
      }
    }
    lVar17 = 2;
    if (lVar18 != 3) {
      lVar17 = lVar18;
    }
    *param_1 = lVar17;
    param_1[1] = lStack_b8;
    param_1[2] = lVar25;
    param_1[3] = lVar24;
    param_1[4] = lVar8;
    param_1[5] = uVar28;
    param_1[6] = (long)pbVar26;
    param_1[7] = lVar9;
    *(undefined1 *)(param_1 + 8) = uVar13;
    lVar18 = FUN_100fbc738(&pbStack_110);
    if (lVar18 == 0) goto LAB_1013326fc;
    *param_1 = 3;
    param_1[1] = lVar18;
    if (lVar25 != 0) {
      _free(lVar24);
    }
    uVar21 = uVar28 & 0x7fffffffffffffff;
    pbVar27 = pbVar26;
  }
  if (uVar21 != 0) {
    _free(pbVar27);
  }
LAB_1013326fc:
  if ((bVar6 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

