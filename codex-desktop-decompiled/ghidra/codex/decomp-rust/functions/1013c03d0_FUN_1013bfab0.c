
/* WARNING: Type propagation algorithm not settling */

void FUN_1013bfab0(long *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  byte *pbVar6;
  code *pcVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  long extraout_x8;
  undefined8 *puVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  byte *unaff_x24;
  undefined8 *puVar21;
  byte *pbVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lStack_170;
  ulong uStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  byte *pbStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  ulong uStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  undefined8 uStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f0;
  byte *pbStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  byte *pbStack_d0;
  long lStack_c8;
  byte *pbStack_c0;
  ulong uStack_b8;
  byte bStack_b0;
  char cStack_af;
  undefined6 uStack_ae;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  long lStack_98;
  undefined8 uStack_90;
  byte *pbStack_88;
  ulong uStack_80;
  byte *pbStack_78;
  
  bVar2 = *param_2;
  if (bVar2 != 0x14) {
    if (bVar2 != 0x15) {
      lVar10 = FUN_108855b04(param_2,&uStack_d8,&UNK_10b20ae80);
      *param_1 = -0x7fffffffffffffff;
      param_1[1] = lVar10;
      return;
    }
    uStack_110 = *(undefined8 *)(param_2 + 8);
    pbVar17 = *(byte **)(param_2 + 0x10);
    pbVar11 = pbVar17 + *(long *)(param_2 + 0x18) * 0x40;
    pbStack_140 = (byte *)CONCAT71(pbStack_140._1_7_,0x16);
    pbStack_100 = (byte *)0x0;
    pbStack_f0 = (byte *)0x8000000000000001;
    pbStack_120 = pbVar17;
    pbStack_108 = pbVar11;
    if (*(long *)(param_2 + 0x18) == 0) {
      uVar23 = 0x8000000000000001;
      pbVar22 = (byte *)0x8000000000000000;
      lStack_170 = 0;
      pbStack_118 = pbVar17;
    }
    else {
      puVar21 = (undefined8 *)((ulong)&bStack_b0 | 1);
      puVar15 = (undefined8 *)((ulong)&pbStack_140 | 1);
      puVar14 = (undefined8 *)((ulong)&uStack_90 | 1);
      pbVar22 = (byte *)0x8000000000000001;
      uVar23 = 0x8000000000000001;
      pbStack_148 = (byte *)0x8000000000000001;
      pbVar16 = pbVar17;
      pbVar8 = pbVar11;
      do {
        pbVar11 = pbVar8;
        pbVar17 = pbVar16 + 0x40;
        bVar1 = *pbVar16;
        pbStack_118 = pbVar17;
        if (bVar1 == 0x16) break;
        pbStack_100 = pbStack_100 + 1;
        uVar24 = *(undefined8 *)(pbVar16 + 1);
        uVar26 = *(undefined8 *)(pbVar16 + 0x18);
        uVar25 = *(undefined8 *)(pbVar16 + 0x10);
        pbStack_88 = *(byte **)(pbVar16 + 0x28);
        uStack_90 = *(byte **)(pbVar16 + 0x20);
        puVar21[1] = *(undefined8 *)(pbVar16 + 9);
        *puVar21 = uVar24;
        *(undefined8 *)((long)puVar21 + 0x17) = uVar26;
        *(undefined8 *)((long)puVar21 + 0xf) = uVar25;
        pbStack_78 = *(byte **)(pbVar16 + 0x38);
        uStack_80 = *(ulong *)(pbVar16 + 0x30);
        bStack_b0 = bVar1;
        if ((byte)pbStack_140 != '\x16') {
          FUN_100e077ec(&pbStack_140);
        }
        pbStack_140 = uStack_90;
        pbStack_138 = pbStack_88;
        pbStack_128 = pbStack_78;
        uStack_130 = uStack_80;
        plVar3 = (long *)CONCAT71(uStack_a7,uStack_a8);
        plVar5 = (long *)CONCAT71(uStack_9f,uStack_a0);
        if (0xc < bVar1) {
          if (bVar1 == 0xd) {
            if (plVar5 == (long *)0x10) {
              uVar13 = 1;
              if (*plVar3 != 0x6c7074656b72616d || plVar3[1] != 0x73646e694b656361) {
                uVar13 = 2;
              }
            }
            else if (plVar5 == (long *)0x4) {
              uVar13 = 2;
              if ((int)*plVar3 == 0x73647763) {
                uVar13 = 0;
              }
            }
            else {
              uVar13 = 2;
            }
            goto LAB_1013bfec0;
          }
          if (bVar1 == 0xe) {
            FUN_100baab70(&uStack_90,plVar5);
joined_r0x0001013bfdbc:
            pbVar16 = pbStack_140;
            pbVar6 = uStack_90;
            if (plVar3 != (long *)0x0) {
              _free(plVar5);
              pbVar16 = pbStack_140;
              pbVar6 = uStack_90;
            }
            goto joined_r0x0001013bfed4;
          }
          if (bVar1 == 0xf) {
            FUN_100baab70(&uStack_90,plVar3,plVar5);
            goto LAB_1013bfec8;
          }
LAB_1013c0014:
          pbStack_88 = (byte *)FUN_108855b04(&bStack_b0,&uStack_d8,&UNK_10b2103c0);
          uStack_90 = (byte *)CONCAT71(uStack_90._1_7_,1);
LAB_1013c0234:
          uStack_e0 = uStack_168;
          pbStack_e8 = pbStack_160;
          pbStack_f0 = pbStack_148;
          pbVar11 = pbStack_88;
LAB_1013c0238:
          *param_1 = -0x7fffffffffffffff;
          param_1[1] = (long)pbVar11;
          if (-0x7fffffffffffffff < (long)uVar23) {
joined_r0x0001013c0258:
            if (uVar23 != 0) {
              _free(pbStack_158);
            }
          }
LAB_1013c02d8:
          pbVar11 = pbStack_e8;
          if ((pbVar22 != (byte *)0x8000000000000001) && (pbVar22 != (byte *)0x8000000000000000)) {
            if (uStack_e0 != 0) {
              pbVar17 = pbStack_e8 + 8;
              uVar23 = uStack_e0;
              do {
                if (*(long *)(pbVar17 + -8) != 0) {
                  _free(*(undefined8 *)pbVar17);
                }
                pbVar17 = pbVar17 + 0x18;
                uVar23 = uVar23 - 1;
              } while (uVar23 != 0);
            }
            if (pbVar22 != (byte *)0x0) {
              _free(pbVar11);
            }
          }
          FUN_100d34830(&pbStack_120);
          if ((byte)pbStack_140 != '\x16') {
            FUN_100e077ec(&pbStack_140);
          }
          goto LAB_1013c0350;
        }
        if (bVar1 == 1) {
          uVar12 = 1;
          if (cStack_af != '\x01') {
            uVar12 = 2;
          }
          uVar13 = 0;
          if (cStack_af != '\0') {
            uVar13 = uVar12;
          }
        }
        else {
          if (bVar1 != 4) {
            if (bVar1 != 0xc) goto LAB_1013c0014;
            if (lStack_98 == 0x10) {
              uVar12 = 1;
              if (*plVar5 != 0x6c7074656b72616d || plVar5[1] != 0x73646e694b656361) {
                uVar12 = 2;
              }
              uStack_90 = (byte *)((ulong)CONCAT61(uStack_90._2_6_,uVar12) << 8);
            }
            else if (lStack_98 == 4) {
              uVar12 = 2;
              if ((int)*plVar5 == 0x73647763) {
                uVar12 = 0;
              }
              uStack_90 = (byte *)((ulong)CONCAT61(uStack_90._2_6_,uVar12) << 8);
            }
            else {
              uStack_90 = (byte *)CONCAT62(uStack_90._2_6_,0x200);
            }
            goto joined_r0x0001013bfdbc;
          }
          uVar12 = 1;
          if (plVar3 != (long *)0x1) {
            uVar12 = 2;
          }
          uVar13 = 0;
          if (plVar3 != (long *)0x0) {
            uVar13 = uVar12;
          }
        }
LAB_1013bfec0:
        uStack_90 = (byte *)((ulong)CONCAT61(uStack_90._2_6_,uVar13) << 8);
LAB_1013bfec8:
        FUN_100e077ec(&bStack_b0);
        pbVar16 = pbStack_140;
        pbVar6 = uStack_90;
joined_r0x0001013bfed4:
        pbStack_140 = pbVar16;
        uStack_90 = pbVar6;
        if (((ulong)pbVar6 & 1) != 0) goto LAB_1013c0234;
        uStack_90._1_1_ = (char)((ulong)pbVar6 >> 8);
        if (uStack_90._1_1_ == '\0') {
          if (pbVar22 == (byte *)0x8000000000000001) {
            FUN_100f20864(&uStack_90,&pbStack_140);
            if (uStack_90 == (byte *)0x8000000000000001) {
              pbVar22 = (byte *)0x8000000000000001;
              goto LAB_1013c0234;
            }
            pbStack_160 = pbStack_88;
            uStack_168 = uStack_80;
            pbVar17 = pbStack_118;
            pbVar22 = uStack_90;
            pbVar8 = pbStack_108;
            pbStack_148 = uStack_90;
            goto LAB_1013bfca8;
          }
          pbStack_e8 = pbStack_160;
          uStack_e0 = uStack_168;
          pbStack_f0 = pbStack_148;
          bStack_b0 = 0x60;
          cStack_af = -0x1c;
          uStack_ae = 0x108cd;
          uStack_a8 = 4;
          uStack_a7 = 0;
          uStack_90 = &bStack_b0;
          pbStack_88 = &DAT_100c7b3a0;
          pbVar11 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
          goto LAB_1013c0238;
        }
        pbStack_140._0_1_ = (byte)pbVar16;
        bVar1 = (byte)pbStack_140;
        pbStack_140._1_7_ = (undefined7)((ulong)pbVar16 >> 8);
        pbVar8 = pbVar11;
        if (uStack_90._1_1_ == '\x01') {
          if (uVar23 != 0x8000000000000001) {
            pbStack_e8 = pbStack_160;
            uStack_e0 = uStack_168;
            pbStack_f0 = pbStack_148;
            bStack_b0 = 0x20;
            cStack_af = -0x2f;
            uStack_ae = 0x108cd;
            uStack_a8 = 0x10;
            uStack_a7 = 0;
            uStack_90 = &bStack_b0;
            pbStack_88 = &DAT_100c7b3a0;
            lVar10 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
            *param_1 = -0x7fffffffffffffff;
            param_1[1] = lVar10;
            uVar23 = uVar23 & 0x7fffffffffffffff;
            goto joined_r0x0001013c0258;
          }
          pbStack_140 = (byte *)CONCAT71(pbStack_140._1_7_,0x16);
          if (bVar1 == 0x16) {
            pbStack_e8 = pbStack_160;
            uStack_e0 = uStack_168;
            pbStack_f0 = pbStack_148;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_1013c0498;
          }
          uVar24 = *puVar15;
          puVar21[1] = puVar15[1];
          *puVar21 = uVar24;
          uVar24 = *(undefined8 *)((long)puVar15 + 0xf);
          *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
          *(undefined8 *)((long)puVar21 + 0xf) = uVar24;
          bStack_b0 = bVar1;
          if (bVar1 == 0x10) {
LAB_1013bff34:
            uStack_d8 = 0x8000000000000000;
            FUN_100e077ec(&bStack_b0);
            uVar23 = 0x8000000000000000;
LAB_1013bfca0:
            lStack_170 = lStack_c8;
            pbStack_158 = pbStack_d0;
            goto LAB_1013bfca8;
          }
          if (bVar1 == 0x11) {
            puVar4 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
            pbStack_88 = (byte *)puVar4[1];
            uStack_90 = (byte *)*puVar4;
            pbStack_78 = (byte *)puVar4[3];
            uStack_80 = puVar4[2];
            FUN_1014553b8(&uStack_d8,&uStack_90);
            _free(puVar4);
            uVar23 = uStack_d8;
          }
          else {
            if (bVar1 == 0x12) goto LAB_1013bff34;
            bStack_b0 = bVar1;
            FUN_1014553b8(&uStack_d8,&bStack_b0);
            uVar23 = uStack_d8;
          }
          uStack_d8 = uVar23;
          if (uVar23 != 0x8000000000000001) goto LAB_1013bfca0;
          pbStack_e8 = pbStack_160;
          uStack_e0 = uStack_168;
          *param_1 = -0x7fffffffffffffff;
          param_1[1] = (long)pbStack_d0;
          goto LAB_1013c02d8;
        }
        pbStack_140 = (byte *)CONCAT71(pbStack_140._1_7_,0x16);
        if (bVar1 == 0x16) {
          pbStack_e8 = pbStack_160;
          uStack_e0 = uStack_168;
          pbStack_f0 = pbStack_148;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1013c0498:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1013c049c);
          (*pcVar7)();
        }
        uVar24 = *puVar15;
        puVar14[1] = puVar15[1];
        *puVar14 = uVar24;
        uVar24 = *(undefined8 *)((long)puVar15 + 0xf);
        *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
        *(undefined8 *)((long)puVar14 + 0xf) = uVar24;
        uStack_90._1_7_ = (undefined7)((ulong)pbVar6 >> 8);
        uStack_90 = (byte *)CONCAT71(uStack_90._1_7_,bVar1);
        FUN_100e077ec(&uStack_90);
LAB_1013bfca8:
        pbVar11 = pbVar17;
        pbVar16 = pbVar11;
        pbVar17 = pbVar11;
      } while (pbVar11 != pbVar8);
      pbStack_e8 = pbStack_160;
      uStack_e0 = uStack_168;
      unaff_x24 = pbStack_158;
      if (pbVar22 == (byte *)0x8000000000000001) {
        pbVar22 = (byte *)0x8000000000000000;
      }
      else {
        uStack_b8 = uStack_168;
        pbStack_c0 = pbStack_160;
      }
    }
    uVar19 = 0x8000000000000000;
    if (uVar23 != 0x8000000000000001) {
      uVar19 = uVar23;
    }
    *param_1 = (long)pbVar22;
    param_1[2] = uStack_b8;
    param_1[1] = (long)pbStack_c0;
    param_1[3] = uVar19;
    param_1[4] = (long)unaff_x24;
    param_1[5] = lStack_170;
    lVar10 = param_1[1];
    lVar18 = param_1[2];
    FUN_100d34830(&pbStack_120);
    if (pbVar11 == pbVar17) {
      lVar20 = 0;
    }
    else {
      uStack_90 = pbStack_100;
      lVar20 = FUN_1087e422c(pbStack_100 + ((ulong)((long)pbVar11 - (long)pbVar17) >> 6),&uStack_90,
                             &UNK_10b23a190);
    }
    if ((byte)pbStack_140 != '\x16') {
      FUN_100e077ec(&pbStack_140);
    }
    if (lVar20 != 0) {
      *param_1 = -0x7fffffffffffffff;
      param_1[1] = lVar20;
      if (pbVar22 != (byte *)0x8000000000000000) {
        if (lVar18 != 0) {
          puVar14 = (undefined8 *)(lVar10 + 8);
          do {
            if (puVar14[-1] != 0) {
              _free(*puVar14);
            }
            puVar14 = puVar14 + 3;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
        }
        if (pbVar22 != (byte *)0x0) {
          _free(lVar10);
        }
      }
      if ((uVar19 & 0x7fffffffffffffff) != 0) {
        _free(unaff_x24);
      }
    }
    goto LAB_1013c0350;
  }
  uStack_130 = *(ulong *)(param_2 + 8);
  pbStack_140 = *(byte **)(param_2 + 0x10);
  pbStack_128 = pbStack_140 + *(long *)(param_2 + 0x18) * 0x20;
  pbStack_120 = (byte *)0x0;
  pbStack_138 = pbStack_140;
  FUN_100f27f20(&uStack_90,&pbStack_140);
  uVar23 = uStack_80;
  pbVar22 = pbStack_88;
  pbVar17 = uStack_90;
  pbVar11 = pbStack_128;
  if (uStack_90 == (byte *)0x8000000000000002) {
LAB_1013bfb88:
    *param_1 = -0x7fffffffffffffff;
    param_1[1] = (long)pbVar22;
    pbVar11 = pbStack_128;
    pbVar16 = pbStack_138;
LAB_1013c00e8:
    lVar10 = ((ulong)((long)pbVar11 - (long)pbVar16) >> 5) + 1;
    while (lVar10 = lVar10 + -1, pbVar8 = pbStack_140, uVar23 = uStack_130, lVar10 != 0) {
      FUN_100e077ec(pbVar16);
      pbVar16 = pbVar16 + 0x20;
    }
  }
  else {
    if (uStack_90 == (byte *)0x8000000000000001) {
      pbVar22 = (byte *)FUN_1087e422c(0,&UNK_10b231878,&UNK_10b20a590);
      goto LAB_1013bfb88;
    }
    pbStack_f0 = uStack_90;
    pbStack_e8 = pbStack_88;
    uStack_e0 = uStack_80;
    pbVar16 = pbStack_138;
    if (pbStack_138 == pbStack_128) {
LAB_1013c0084:
      pbStack_138 = pbVar16;
      pbVar16 = pbStack_138;
      pbStack_d0 = (byte *)FUN_1087e422c(1,&UNK_10b231878,&UNK_10b20a590);
LAB_1013c009c:
      *param_1 = -0x7fffffffffffffff;
      param_1[1] = (long)pbStack_d0;
      if (pbVar17 != (byte *)0x8000000000000000) {
        if (uVar23 != 0) {
          pbVar8 = pbVar22 + 8;
          do {
            if (*(long *)(pbVar8 + -8) != 0) {
              _free(*(undefined8 *)pbVar8);
            }
            pbVar8 = pbVar8 + 0x18;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
        if (pbVar17 != (byte *)0x0) {
          _free(pbVar22);
        }
      }
      goto LAB_1013c00e8;
    }
    pbVar16 = pbStack_138 + 0x20;
    bVar1 = *pbStack_138;
    if (bVar1 == 0x16) goto LAB_1013c0084;
    uVar24 = *(undefined8 *)(pbStack_138 + 1);
    uStack_a7 = (undefined7)*(undefined8 *)(pbStack_138 + 9);
    cStack_af = (char)uVar24;
    uStack_ae = (undefined6)((ulong)uVar24 >> 8);
    uStack_a8 = (undefined1)((ulong)uVar24 >> 0x38);
    lStack_98 = *(long *)(pbStack_138 + 0x18);
    uStack_a0 = (undefined1)*(undefined8 *)(pbStack_138 + 0x10);
    uStack_9f = (undefined7)((ulong)*(undefined8 *)(pbStack_138 + 0x10) >> 8);
    pbStack_120 = pbStack_120 + 1;
    pbStack_138 = pbVar16;
    bStack_b0 = bVar1;
    if (bVar1 != 0x10) {
      if (bVar1 == 0x11) {
        puVar14 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
        pbStack_88 = (byte *)puVar14[1];
        uStack_90 = (byte *)*puVar14;
        pbStack_78 = (byte *)puVar14[3];
        uStack_80 = puVar14[2];
        FUN_1014553b8(&uStack_d8,&uStack_90);
        _free(puVar14);
      }
      else {
        if (bVar1 == 0x12) goto LAB_1013bfc10;
        FUN_1014553b8(&uStack_d8,&bStack_b0);
      }
      if ((uStack_d8 != 0x8000000000000001) &&
         (pbVar8 = pbStack_d0, uVar19 = uStack_d8, uStack_d8 != 0x8000000000000002))
      goto LAB_1013bfc1c;
      goto LAB_1013c009c;
    }
LAB_1013bfc10:
    pbVar8 = (byte *)FUN_100e077ec(&bStack_b0);
    lStack_c8 = extraout_x8;
    uVar19 = 0x8000000000000000;
LAB_1013bfc1c:
    param_1[1] = (long)pbStack_e8;
    *param_1 = (long)pbStack_f0;
    param_1[2] = uStack_e0;
    param_1[3] = uVar19;
    param_1[4] = (long)pbVar8;
    param_1[5] = lStack_c8;
    lVar10 = *param_1;
    if (lVar10 == -0x7fffffffffffffff) goto LAB_1013c00e8;
    lVar18 = param_1[1];
    lVar20 = param_1[2];
    lVar9 = FUN_100fbc738(&pbStack_140);
    if (lVar9 == 0) goto LAB_1013c0350;
    *param_1 = -0x7fffffffffffffff;
    param_1[1] = lVar9;
    if (lVar10 != -0x8000000000000000) {
      if (lVar20 != 0) {
        puVar14 = (undefined8 *)(lVar18 + 8);
        do {
          if (puVar14[-1] != 0) {
            _free(*puVar14);
          }
          puVar14 = puVar14 + 3;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      if (lVar10 != 0) {
        _free(lVar18);
      }
    }
    uVar23 = uVar19 & 0x7fffffffffffffff;
  }
  if (uVar23 != 0) {
    _free(pbVar8);
  }
LAB_1013c0350:
  if ((bVar2 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

