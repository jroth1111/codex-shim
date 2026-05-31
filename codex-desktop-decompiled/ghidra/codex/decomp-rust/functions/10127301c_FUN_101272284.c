
/* WARNING: Type propagation algorithm not settling */

void FUN_101272284(ulong *param_1,byte *param_2)

{
  byte *pbVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  char cVar11;
  code *pcVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *unaff_x21;
  undefined8 *puVar23;
  ulong unaff_x22;
  long lVar24;
  byte *pbVar25;
  long lVar26;
  ulong uVar27;
  byte *pbStack_198;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_158;
  ulong uStack_140;
  ulong uStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  long lStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  undefined8 uStack_100;
  byte *pbStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  byte *pbStack_e0;
  ulong uStack_d8;
  byte bStack_d0;
  byte bStack_cf;
  undefined6 uStack_ce;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined8 uStack_b8;
  byte bStack_b0;
  byte bStack_af;
  undefined6 uStack_ae;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  long lStack_98;
  byte bStack_88;
  char cStack_87;
  undefined6 uStack_86;
  byte *pbStack_80;
  ulong uStack_78;
  
  bVar6 = *param_2;
  if (bVar6 != 0x14) {
    if (bVar6 != 0x15) {
      uVar27 = FUN_108855b04(param_2,&bStack_88,&UNK_10b20b800);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar27;
      return;
    }
    uStack_100 = *(undefined8 *)(param_2 + 8);
    pbStack_110 = *(byte **)(param_2 + 0x10);
    lVar17 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar25 = pbStack_110 + lVar17;
    pbStack_130 = (byte *)CONCAT71(pbStack_130._1_7_,0x16);
    lStack_f0 = 0;
    uStack_e8 = 0x8000000000000001;
    pbStack_f8 = pbVar25;
    if (*(long *)(param_2 + 0x18) == 0) {
      uStack_e8 = 0x8000000000000001;
      uStack_140 = 0x8000000000000001;
      uStack_138 = 0x8000000000000001;
      pbStack_198 = unaff_x21;
      pbStack_108 = pbStack_110;
    }
    else {
      lVar24 = 0;
      puVar20 = (undefined8 *)((ulong)&bStack_b0 | 1);
      puVar23 = (undefined8 *)((ulong)&pbStack_130 | 1);
      puVar18 = (undefined8 *)((ulong)&bStack_d0 | 1);
      cVar11 = '\x04';
      uVar27 = 0x8000000000000000;
      uStack_140 = 0x8000000000000001;
      uStack_138 = 0x8000000000000001;
      uStack_158 = 0x8000000000000001;
      pbVar1 = pbStack_110;
      pbStack_108 = pbStack_110;
      do {
        pbVar21 = pbVar1 + 0x40;
        bVar5 = *pbVar1;
        pbVar22 = pbVar21;
        lVar26 = lVar24;
        if (bVar5 == 0x16) break;
        uVar13 = *(undefined8 *)(pbVar1 + 0x10);
        *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
        *(undefined8 *)((long)puVar20 + 0xf) = uVar13;
        uVar13 = *(undefined8 *)(pbVar1 + 1);
        puVar20[1] = *(undefined8 *)(pbVar1 + 9);
        *puVar20 = uVar13;
        pbStack_128 = *(byte **)(pbVar1 + 0x28);
        pbStack_130 = *(byte **)(pbVar1 + 0x20);
        pbStack_118 = *(byte **)(pbVar1 + 0x38);
        lStack_120 = *(long *)(pbVar1 + 0x30);
        plVar3 = (long *)CONCAT71(uStack_a7,uStack_a8);
        plVar10 = (long *)CONCAT71(uStack_9f,uStack_a0);
        bStack_b0 = bVar5;
        if (bVar5 < 0xd) {
          if (bVar5 == 1) {
            bStack_cf = bStack_af;
            if (3 < bStack_af) {
              bStack_cf = 4;
            }
LAB_10127265c:
            bStack_d0 = 0;
            goto LAB_101272660;
          }
          if (bVar5 == 4) {
            if ((long *)0x3 < plVar3) {
              plVar3 = (long *)0x4;
            }
            bStack_cf = (byte)plVar3;
            goto LAB_10127265c;
          }
          if (bVar5 == 0xc) {
            if (lStack_98 < 0xe) {
              if (lStack_98 == 10) {
                if (*plVar10 != 0x61506e6967756c70 || (short)plVar10[1] != 0x6874)
                goto LAB_1012725d4;
                bStack_cf = 0;
              }
              else {
                if ((lStack_98 == 0xc) &&
                   (*plVar10 == 0x7261546572616873 && (int)plVar10[1] == 0x73746567)) {
                  bStack_cf = 3;
                  bStack_d0 = 0;
                  goto joined_r0x000101272510;
                }
LAB_1012725d4:
                bStack_cf = 4;
              }
              bStack_d0 = 0;
            }
            else if (lStack_98 == 0xe) {
              if (*plVar10 != 0x6c5065746f6d6572 ||
                  *(long *)((long)plVar10 + 6) != 0x64496e6967756c50) goto LAB_1012725d4;
              bStack_cf = 1;
              bStack_d0 = 0;
            }
            else {
              if ((lStack_98 != 0xf) ||
                 (*plVar10 != 0x7265766f63736964 ||
                  *(long *)((long)plVar10 + 7) != 0x7974696c69626172)) goto LAB_1012725d4;
              bStack_cf = 2;
              bStack_d0 = 0;
            }
joined_r0x000101272510:
            if (plVar3 != (long *)0x0) {
              _free(plVar10);
            }
          }
          else {
LAB_10127298c:
            uVar13 = FUN_108855b04(&bStack_b0,&bStack_88,&UNK_10b20d3e0);
            uStack_c8 = (undefined1)uVar13;
            uStack_c7 = (undefined7)((ulong)uVar13 >> 8);
            bStack_d0 = 1;
          }
        }
        else {
          if (bVar5 == 0xd) {
            if ((long)plVar10 < 0xe) {
              if (plVar10 == (long *)0xa) {
                if (*plVar3 == 0x61506e6967756c70 && (short)plVar3[1] == 0x6874) {
                  bStack_cf = 0;
                }
                else {
LAB_101272654:
                  bStack_cf = 4;
                }
              }
              else {
                if ((plVar10 != (long *)0xc) ||
                   (*plVar3 != 0x7261546572616873 || (int)plVar3[1] != 0x73746567))
                goto LAB_101272654;
                bStack_cf = 3;
              }
            }
            else if (plVar10 == (long *)0xe) {
              if (*plVar3 != 0x6c5065746f6d6572 || *(long *)((long)plVar3 + 6) != 0x64496e6967756c50
                 ) goto LAB_101272654;
              bStack_cf = 1;
            }
            else {
              if ((plVar10 != (long *)0xf) ||
                 (*plVar3 != 0x7265766f63736964 || *(long *)((long)plVar3 + 7) != 0x7974696c69626172
                 )) goto LAB_101272654;
              bStack_cf = 2;
            }
            goto LAB_10127265c;
          }
          if (bVar5 == 0xe) {
            FUN_100bb2d5c(&bStack_d0,plVar10);
            goto joined_r0x000101272510;
          }
          if (bVar5 != 0xf) goto LAB_10127298c;
          FUN_100bb2d5c(&bStack_d0,plVar3,plVar10);
LAB_101272660:
          FUN_100e077ec(&bStack_b0);
        }
        if ((bStack_d0 & 1) != 0) {
LAB_101272ab4:
          pbStack_80 = (byte *)CONCAT71(uStack_c7,uStack_c8);
LAB_101272ab8:
          lStack_f0 = lVar24 + 1;
          pbStack_e0 = pbStack_198;
          uStack_e8 = uStack_158;
          pbStack_108 = pbVar21;
          uStack_d8 = unaff_x22;
          goto LAB_101272b34;
        }
        bVar5 = (byte)pbStack_130;
        if (bStack_cf < 2) {
          if (bStack_cf == 0) {
            if (uVar27 != 0x8000000000000000) {
              lStack_f0 = lVar24 + 1;
              pbStack_e0 = pbStack_198;
              uStack_e8 = uStack_158;
              bStack_d0 = 0xe6;
              bStack_cf = 0xd;
              uStack_ce = 0x108cc;
              uStack_c8 = 10;
              uStack_c7 = 0;
              bStack_b0 = (byte)&bStack_d0;
              bStack_af = (byte)((ulong)&bStack_d0 >> 8);
              uStack_ae = (undefined6)((ulong)&bStack_d0 >> 0x10);
              uStack_a8 = 0xa0;
              uStack_a7 = 0x100c7b3;
              pbStack_108 = pbVar21;
              uStack_d8 = unaff_x22;
              pbStack_80 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_b0);
              goto LAB_101272b34;
            }
            pbStack_130 = (byte *)CONCAT71(pbStack_130._1_7_,0x16);
            if (bVar5 == 0x16) {
              lStack_f0 = lVar24 + 1;
              pbStack_e0 = pbStack_198;
              uStack_e8 = uStack_158;
              pbStack_108 = pbVar21;
              uStack_d8 = unaff_x22;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_101273160;
            }
            uVar13 = *puVar23;
            puVar20[1] = puVar23[1];
            *puVar20 = uVar13;
            uVar13 = *(undefined8 *)((long)puVar23 + 0xf);
            *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar23 + 0x17);
            *(undefined8 *)((long)puVar20 + 0xf) = uVar13;
            bStack_b0 = bVar5;
            FUN_1014a868c(&bStack_d0,&bStack_b0);
            uVar27 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0));
            if (uVar27 == 0x8000000000000000) {
              uVar27 = 0;
              goto LAB_101272ab4;
            }
            uStack_170 = CONCAT71(uStack_c7,uStack_c8);
            uStack_188 = CONCAT71(uStack_bf,uStack_c0);
          }
          else {
            if (uStack_138 != 0x8000000000000001) {
              lStack_f0 = lVar24 + 1;
              pbStack_e0 = pbStack_198;
              uStack_e8 = uStack_158;
              bStack_d0 = 0xf0;
              bStack_cf = 0xd;
              uStack_ce = 0x108cc;
              uStack_c8 = 0xe;
              uStack_c7 = 0;
              bStack_b0 = (byte)&bStack_d0;
              bStack_af = (byte)((ulong)&bStack_d0 >> 8);
              uStack_ae = (undefined6)((ulong)&bStack_d0 >> 0x10);
              uStack_a8 = 0xa0;
              uStack_a7 = 0x100c7b3;
              pbStack_108 = pbVar21;
              uStack_d8 = unaff_x22;
              pbStack_80 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_b0);
              goto LAB_101272b34;
            }
            pbStack_130 = (byte *)CONCAT71(pbStack_130._1_7_,0x16);
            if (bVar5 == 0x16) {
              lStack_f0 = lVar24 + 1;
              pbStack_e0 = pbStack_198;
              uStack_e8 = uStack_158;
              pbStack_108 = pbVar21;
              uStack_d8 = unaff_x22;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_101273160;
            }
            uVar13 = *puVar23;
            puVar20[1] = puVar23[1];
            *puVar20 = uVar13;
            uVar13 = *(undefined8 *)((long)puVar23 + 0xf);
            *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar23 + 0x17);
            *(undefined8 *)((long)puVar20 + 0xf) = uVar13;
            bStack_b0 = bVar5;
            FUN_1004b60cc(&bStack_d0,&bStack_b0);
            uStack_138 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0));
            if (uStack_138 == 0x8000000000000001) {
              uStack_138 = 0x8000000000000001;
              goto LAB_101272ab4;
            }
            uStack_178 = CONCAT71(uStack_c7,uStack_c8);
            uStack_180 = CONCAT71(uStack_bf,uStack_c0);
          }
        }
        else if (bStack_cf == 2) {
          if (cVar11 != '\x04') {
            lStack_f0 = lVar24 + 1;
            pbStack_e0 = pbStack_198;
            uStack_e8 = uStack_158;
            bStack_d0 = 0x3f;
            bStack_cf = 0x69;
            uStack_ce = 0x108cb;
            uStack_c8 = 0xf;
            uStack_c7 = 0;
            bStack_b0 = (byte)&bStack_d0;
            bStack_af = (byte)((ulong)&bStack_d0 >> 8);
            uStack_ae = (undefined6)((ulong)&bStack_d0 >> 0x10);
            uStack_a8 = 0xa0;
            uStack_a7 = 0x100c7b3;
            pbStack_108 = pbVar21;
            uStack_d8 = unaff_x22;
            pbStack_80 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_b0);
            goto LAB_101272b34;
          }
          pbStack_130 = (byte *)CONCAT71(pbStack_130._1_7_,0x16);
          if (bVar5 == 0x16) goto LAB_101272eb0;
          uVar13 = *puVar23;
          puVar18[1] = puVar23[1];
          *puVar18 = uVar13;
          uVar13 = *(undefined8 *)((long)puVar23 + 0xf);
          *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar23 + 0x17);
          *(undefined8 *)((long)puVar18 + 0xf) = uVar13;
          bStack_d0 = bVar5;
          if (bVar5 == 0x10) {
LAB_1012727b8:
            bStack_88 = 0;
            cStack_87 = '\x03';
            FUN_100e077ec(&bStack_d0);
          }
          else {
            if (bVar5 == 0x11) {
              puVar8 = (undefined8 *)CONCAT71(uStack_c7,uStack_c8);
              uVar13 = *puVar8;
              uStack_a8 = (undefined1)puVar8[1];
              uStack_a7 = (undefined7)((ulong)puVar8[1] >> 8);
              bStack_b0 = (byte)uVar13;
              bStack_af = (byte)((ulong)uVar13 >> 8);
              uStack_ae = (undefined6)((ulong)uVar13 >> 0x10);
              lStack_98 = puVar8[3];
              uStack_a0 = (undefined1)puVar8[2];
              uStack_9f = (undefined7)((ulong)puVar8[2] >> 8);
              FUN_101431cec(&bStack_88,&bStack_b0);
              _free(puVar8);
              cVar11 = cStack_87;
              if (bStack_88 != 1) goto LAB_10127234c;
              goto LAB_101272ab8;
            }
            if (bVar5 == 0x12) goto LAB_1012727b8;
            FUN_101431cec(&bStack_88,&bStack_d0);
          }
          cVar11 = cStack_87;
          if (bStack_88 == 1) goto LAB_101272ab8;
        }
        else {
          if (bStack_cf != 3) {
            pbStack_130 = (byte *)CONCAT71(pbStack_130._1_7_,0x16);
            if (bVar5 != 0x16) {
              uVar13 = *puVar23;
              puVar20[1] = puVar23[1];
              *puVar20 = uVar13;
              uVar13 = *(undefined8 *)((long)puVar23 + 0xf);
              *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar23 + 0x17);
              *(undefined8 *)((long)puVar20 + 0xf) = uVar13;
              bStack_b0 = bVar5;
              FUN_100e077ec(&bStack_b0);
              goto LAB_10127234c;
            }
LAB_101272eb0:
            pbStack_130 = (byte *)CONCAT71(pbStack_130._1_7_,0x16);
            lStack_f0 = lVar24 + 1;
            pbStack_e0 = pbStack_198;
            uStack_e8 = uStack_158;
            pbStack_108 = pbVar21;
            uStack_d8 = unaff_x22;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101273160:
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x101273164);
            (*pcVar12)();
          }
          if (uStack_140 != 0x8000000000000001) {
            lStack_f0 = lVar24 + 1;
            pbStack_e0 = pbStack_198;
            uStack_e8 = uStack_158;
            bStack_d0 = 0xfe;
            bStack_cf = 0xd;
            uStack_ce = 0x108cc;
            uStack_c8 = 0xc;
            uStack_c7 = 0;
            bStack_b0 = (byte)&bStack_d0;
            bStack_af = (byte)((ulong)&bStack_d0 >> 8);
            uStack_ae = (undefined6)((ulong)&bStack_d0 >> 0x10);
            uStack_a8 = 0xa0;
            uStack_a7 = 0x100c7b3;
            pbStack_108 = pbVar21;
            uStack_d8 = unaff_x22;
            uVar15 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_b0);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar15;
            if (uStack_140 == 0x8000000000000000) goto LAB_101272b80;
            goto LAB_101272b48;
          }
          pbStack_130 = (byte *)CONCAT71(pbStack_130._1_7_,0x16);
          if (bVar5 == 0x16) {
            lStack_f0 = lVar24 + 1;
            pbStack_e0 = pbStack_198;
            uStack_e8 = uStack_158;
            pbStack_108 = pbVar21;
            uStack_d8 = unaff_x22;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_101273160;
          }
          uVar13 = *puVar23;
          puVar18[1] = puVar23[1];
          *puVar18 = uVar13;
          uVar13 = *(undefined8 *)((long)puVar23 + 0xf);
          *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar23 + 0x17);
          *(undefined8 *)((long)puVar18 + 0xf) = uVar13;
          bStack_d0 = bVar5;
          if (bVar5 == 0x10) {
LAB_1012726e0:
            FUN_100e077ec(&bStack_d0);
            uStack_158 = 0x8000000000000000;
            uStack_140 = 0x8000000000000000;
          }
          else {
            if (bVar5 == 0x11) {
              puVar8 = (undefined8 *)CONCAT71(uStack_c7,uStack_c8);
              uVar13 = *puVar8;
              uStack_a8 = (undefined1)puVar8[1];
              uStack_a7 = (undefined7)((ulong)puVar8[1] >> 8);
              bStack_b0 = (byte)uVar13;
              bStack_af = (byte)((ulong)uVar13 >> 8);
              uStack_ae = (undefined6)((ulong)uVar13 >> 0x10);
              lStack_98 = puVar8[3];
              uStack_a0 = (undefined1)puVar8[2];
              uStack_9f = (undefined7)((ulong)puVar8[2] >> 8);
              FUN_100619ba4(&bStack_88,&bStack_b0);
              uStack_158 = CONCAT62(uStack_86,CONCAT11(cStack_87,bStack_88));
              pbStack_198 = pbStack_80;
              if (uStack_158 != 0x8000000000000000) {
                unaff_x22 = uStack_78;
              }
              if ((long)uStack_158 < -0x7ffffffffffffffe) {
                uStack_158 = 0x8000000000000001;
              }
              _free(puVar8);
            }
            else {
              if (bVar5 == 0x12) goto LAB_1012726e0;
              FUN_100619ba4(&bStack_b0,&bStack_d0);
              uStack_158 = CONCAT62(uStack_ae,CONCAT11(bStack_af,bStack_b0));
              pbStack_198 = (byte *)CONCAT71(uStack_a7,uStack_a8);
              if (uStack_158 != 0x8000000000000000) {
                unaff_x22 = CONCAT71(uStack_9f,uStack_a0);
              }
              if ((long)uStack_158 < -0x7ffffffffffffffe) {
                uStack_158 = 0x8000000000000001;
              }
            }
            uStack_140 = uStack_158;
            if (uStack_158 == 0x8000000000000001) {
              lStack_f0 = lVar24 + 1;
              *param_1 = 0x8000000000000000;
              param_1[1] = (ulong)pbStack_198;
              pbStack_108 = pbVar21;
              goto LAB_101272b80;
            }
          }
        }
LAB_10127234c:
        lVar24 = lVar24 + 1;
        pbVar22 = pbVar25;
        lVar26 = (lVar17 - 0x40U >> 6) + 1;
        pbVar1 = pbVar21;
      } while (pbVar21 != pbVar25);
      pbStack_e0 = pbStack_198;
      uStack_e8 = uStack_158;
      pbStack_108 = pbVar22;
      lStack_f0 = lVar26;
      uStack_d8 = unaff_x22;
      if (uVar27 != 0x8000000000000000) {
        uVar15 = 0x8000000000000000;
        if (uStack_138 != 0x8000000000000001) {
          uVar15 = uStack_138;
        }
        *param_1 = uVar27;
        param_1[1] = uStack_170;
        cVar2 = '\x03';
        if (cVar11 != '\x04') {
          cVar2 = cVar11;
        }
        param_1[2] = uStack_188;
        param_1[3] = uVar15;
        uVar4 = 0x8000000000000000;
        if (uStack_140 != 0x8000000000000001) {
          uVar4 = uStack_140;
        }
        param_1[4] = uStack_178;
        param_1[5] = uStack_180;
        param_1[6] = uVar4;
        param_1[7] = (ulong)pbStack_198;
        param_1[8] = unaff_x22;
        *(char *)(param_1 + 9) = cVar2;
        FUN_100d34830(&pbStack_110);
        if (pbVar25 != pbVar22) {
          bStack_b0 = (byte)lVar26;
          bStack_af = (byte)((ulong)lVar26 >> 8);
          uStack_ae = (undefined6)((ulong)lVar26 >> 0x10);
          uVar16 = FUN_1087e422c(((ulong)((long)pbVar25 - (long)pbVar22) >> 6) + lVar26,&bStack_b0,
                                 &UNK_10b23a190);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar16;
          if (uVar27 != 0) {
            _free(uStack_170);
          }
          if ((uVar15 & 0x7fffffffffffffff) != 0) {
            _free(uStack_178);
          }
          if (uVar4 != 0x8000000000000000) {
            if (unaff_x22 != 0) {
              pbVar25 = pbStack_198 + 8;
              do {
                if (*(long *)(pbVar25 + -8) != 0) {
                  _free(*(undefined8 *)pbVar25);
                }
                pbVar25 = pbVar25 + 0x20;
                unaff_x22 = unaff_x22 - 1;
              } while (unaff_x22 != 0);
            }
            if (uVar4 != 0) {
              _free(pbStack_198);
            }
          }
        }
        goto LAB_101272c40;
      }
    }
    bStack_d0 = 0xe6;
    bStack_cf = 0xd;
    uStack_ce = 0x108cc;
    uStack_c8 = 10;
    uStack_c7 = 0;
    bStack_b0 = (byte)&bStack_d0;
    bStack_af = (byte)((ulong)&bStack_d0 >> 8);
    uStack_ae = (undefined6)((ulong)&bStack_d0 >> 0x10);
    uStack_a8 = 0xa0;
    uStack_a7 = 0x100c7b3;
    uVar27 = 0;
    pbStack_80 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&bStack_b0);
LAB_101272b34:
    *param_1 = 0x8000000000000000;
    param_1[1] = (ulong)pbStack_80;
    if (-0x7fffffffffffffff < (long)uStack_140) {
LAB_101272b48:
      if (unaff_x22 != 0) {
        pbVar25 = pbStack_198 + 8;
        do {
          if (*(long *)(pbVar25 + -8) != 0) {
            _free(*(undefined8 *)pbVar25);
          }
          pbVar25 = pbVar25 + 0x20;
          unaff_x22 = unaff_x22 - 1;
        } while (unaff_x22 != 0);
      }
      if (uStack_140 != 0) {
        _free(pbStack_198);
      }
    }
LAB_101272b80:
    if ((-0x7fffffffffffffff < (long)uStack_138) && (uStack_138 != 0)) {
      _free(uStack_178);
    }
    if ((uVar27 & 0x7fffffffffffffff) != 0) {
      _free(uStack_170);
    }
    FUN_100d34830(&pbStack_110);
    if ((byte)pbStack_130 != '\x16') {
      FUN_100e077ec(&pbStack_130);
    }
    goto LAB_101272c40;
  }
  lVar17 = *(long *)(param_2 + 8);
  pbVar22 = *(byte **)(param_2 + 0x10);
  uVar27 = *(ulong *)(param_2 + 0x18);
  pbVar1 = pbVar22 + uVar27 * 0x20;
  pbStack_110 = (byte *)0x0;
  pbVar25 = pbVar22;
  pbStack_130 = pbVar22;
  lStack_120 = lVar17;
  pbStack_118 = pbVar1;
  if (uVar27 == 0) {
LAB_1012729e4:
    pbStack_128 = pbVar25;
    uVar15 = FUN_1087e422c(0,&UNK_10b231e68,&UNK_10b20a590);
LAB_101272a00:
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar15;
LAB_101272a08:
    lVar24 = ((ulong)((long)pbVar1 - (long)pbVar25) >> 5) + 1;
    while (lVar24 = lVar24 + -1, pbVar21 = pbVar22, uVar19 = lVar17, lVar24 != 0) {
      FUN_100e077ec(pbVar25);
      pbVar25 = pbVar25 + 0x20;
    }
  }
  else {
    pbVar25 = pbVar22 + 0x20;
    if (*pbVar22 == 0x16) goto LAB_1012729e4;
    uVar13 = *(undefined8 *)(pbVar22 + 1);
    uStack_a7 = (undefined7)*(undefined8 *)(pbVar22 + 9);
    bStack_af = (byte)uVar13;
    uStack_ae = (undefined6)((ulong)uVar13 >> 8);
    uStack_a8 = (undefined1)((ulong)uVar13 >> 0x38);
    lStack_98 = *(long *)(pbVar22 + 0x18);
    uStack_a0 = (undefined1)*(undefined8 *)(pbVar22 + 0x10);
    uStack_9f = (undefined7)((ulong)*(undefined8 *)(pbVar22 + 0x10) >> 8);
    pbStack_110 = (byte *)0x1;
    pbStack_128 = pbVar25;
    bStack_b0 = *pbVar22;
    FUN_1014a868c(&bStack_d0,&bStack_b0);
    uVar4 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0));
    uVar15 = CONCAT71(uStack_c7,uStack_c8);
    if (uVar4 == 0x8000000000000000) goto LAB_101272a00;
    if (uVar27 == 1) {
LAB_101272c94:
      uVar14 = FUN_1087e422c(1,&UNK_10b231e68,&UNK_10b20a590);
LAB_101272cb0:
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar14;
LAB_101272cbc:
      if (uVar4 != 0) {
        _free(uVar15);
      }
      goto LAB_101272a08;
    }
    uVar16 = CONCAT71(uStack_bf,uStack_c0);
    pbVar25 = pbVar22 + 0x40;
    pbStack_128 = pbVar25;
    if (pbVar22[0x20] == 0x16) goto LAB_101272c94;
    uVar13 = *(undefined8 *)(pbVar22 + 0x21);
    uStack_a7 = (undefined7)*(undefined8 *)(pbVar22 + 0x29);
    bStack_af = (byte)uVar13;
    uStack_ae = (undefined6)((ulong)uVar13 >> 8);
    uStack_a8 = (undefined1)((ulong)uVar13 >> 0x38);
    lStack_98 = *(long *)(pbVar22 + 0x38);
    uStack_a0 = (undefined1)*(undefined8 *)(pbVar22 + 0x30);
    uStack_9f = (undefined7)((ulong)*(undefined8 *)(pbVar22 + 0x30) >> 8);
    pbStack_110 = (byte *)0x2;
    bStack_b0 = pbVar22[0x20];
    FUN_1004b60cc(&bStack_d0,&bStack_b0);
    uVar7 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0));
    uVar14 = CONCAT71(uStack_c7,uStack_c8);
    if (uVar7 == 0x8000000000000001) goto LAB_101272cb0;
    if (uVar27 == 2) {
LAB_101272d2c:
      uVar13 = 2;
LAB_101272d30:
      pbStack_80 = (byte *)FUN_1087e422c(uVar13,&UNK_10b231e68,&UNK_10b20a590);
LAB_101272d44:
      *param_1 = 0x8000000000000000;
      param_1[1] = (ulong)pbStack_80;
      if ((uVar7 & 0x7fffffffffffffff) != 0) {
        _free(uVar14);
      }
      goto LAB_101272cbc;
    }
    uVar9 = CONCAT71(uStack_bf,uStack_c0);
    pbVar25 = pbVar22 + 0x60;
    bVar5 = pbVar22[0x40];
    pbStack_128 = pbVar25;
    if (bVar5 == 0x16) goto LAB_101272d2c;
    uVar13 = *(undefined8 *)(pbVar22 + 0x41);
    uStack_c7 = (undefined7)*(undefined8 *)(pbVar22 + 0x49);
    bStack_cf = (byte)uVar13;
    uStack_ce = (undefined6)((ulong)uVar13 >> 8);
    uStack_c8 = (undefined1)((ulong)uVar13 >> 0x38);
    uStack_b8 = *(undefined8 *)(pbVar22 + 0x58);
    uStack_c0 = (undefined1)*(undefined8 *)(pbVar22 + 0x50);
    uStack_bf = (undefined7)((ulong)*(undefined8 *)(pbVar22 + 0x50) >> 8);
    pbStack_110 = (byte *)0x3;
    bStack_d0 = bVar5;
    if (bVar5 == 0x10) {
LAB_101272e28:
      bStack_88 = 0;
      cStack_87 = '\x03';
      FUN_100e077ec(&bStack_d0);
    }
    else if (bVar5 == 0x11) {
      puVar18 = (undefined8 *)CONCAT71(uStack_c7,uStack_c8);
      uVar13 = *puVar18;
      uStack_a8 = (undefined1)puVar18[1];
      uStack_a7 = (undefined7)((ulong)puVar18[1] >> 8);
      bStack_b0 = (byte)uVar13;
      bStack_af = (byte)((ulong)uVar13 >> 8);
      uStack_ae = (undefined6)((ulong)uVar13 >> 0x10);
      lStack_98 = puVar18[3];
      uStack_a0 = (undefined1)puVar18[2];
      uStack_9f = (undefined7)((ulong)puVar18[2] >> 8);
      FUN_101431cec(&bStack_88,&bStack_b0);
      _free(puVar18);
    }
    else {
      if (bVar5 == 0x12) goto LAB_101272e28;
      FUN_101431cec(&bStack_88,&bStack_d0);
    }
    cVar11 = cStack_87;
    if ((bStack_88 & 1) != 0) goto LAB_101272d44;
    if (uVar27 == 3) {
LAB_101272ea8:
      uVar13 = 3;
      goto LAB_101272d30;
    }
    pbVar25 = pbVar22 + 0x80;
    bVar5 = pbVar22[0x60];
    pbStack_128 = pbVar25;
    if (bVar5 == 0x16) goto LAB_101272ea8;
    uVar13 = *(undefined8 *)(pbVar22 + 0x61);
    uStack_c7 = (undefined7)*(undefined8 *)(pbVar22 + 0x69);
    bStack_cf = (byte)uVar13;
    uStack_ce = (undefined6)((ulong)uVar13 >> 8);
    uStack_c8 = (undefined1)((ulong)uVar13 >> 0x38);
    uStack_b8 = *(undefined8 *)(pbVar22 + 0x78);
    uStack_c0 = (undefined1)*(undefined8 *)(pbVar22 + 0x70);
    uStack_bf = (undefined7)((ulong)*(undefined8 *)(pbVar22 + 0x70) >> 8);
    pbStack_110 = (byte *)0x4;
    bStack_d0 = bVar5;
    if (bVar5 == 0x10) {
LAB_101272f24:
      pbVar21 = (byte *)FUN_100e077ec(&bStack_d0);
      uVar19 = 0x8000000000000000;
    }
    else {
      if (bVar5 == 0x11) {
        puVar18 = (undefined8 *)CONCAT71(uStack_c7,uStack_c8);
        uVar13 = *puVar18;
        uStack_a8 = (undefined1)puVar18[1];
        uStack_a7 = (undefined7)((ulong)puVar18[1] >> 8);
        bStack_b0 = (byte)uVar13;
        bStack_af = (byte)((ulong)uVar13 >> 8);
        uStack_ae = (undefined6)((ulong)uVar13 >> 0x10);
        lStack_98 = puVar18[3];
        uStack_a0 = (undefined1)puVar18[2];
        uStack_9f = (undefined7)((ulong)puVar18[2] >> 8);
        FUN_100619ba4(&bStack_88,&bStack_b0);
        uVar19 = CONCAT62(uStack_86,CONCAT11(cStack_87,bStack_88));
        if ((long)uVar19 < -0x7ffffffffffffffe) {
          uVar19 = 0x8000000000000001;
        }
        _free(puVar18);
      }
      else {
        if (bVar5 == 0x12) goto LAB_101272f24;
        FUN_100619ba4(&bStack_b0,&bStack_d0);
        uVar19 = CONCAT62(uStack_ae,CONCAT11(bStack_af,bStack_b0));
        pbStack_80 = (byte *)CONCAT71(uStack_a7,uStack_a8);
        uStack_78 = CONCAT71(uStack_9f,uStack_a0);
        if ((long)uVar19 < -0x7ffffffffffffffe) {
          uVar19 = 0x8000000000000001;
        }
      }
      pbVar21 = pbStack_80;
      uVar27 = uStack_78;
      if (uVar19 + 0x7fffffffffffffff < 2) goto LAB_101272d44;
    }
    *param_1 = uVar4;
    param_1[1] = uVar15;
    param_1[2] = uVar16;
    param_1[3] = uVar7;
    param_1[4] = uVar14;
    param_1[5] = uVar9;
    param_1[6] = uVar19;
    param_1[7] = (ulong)pbVar21;
    param_1[8] = uVar27;
    *(char *)(param_1 + 9) = cVar11;
    uVar16 = FUN_100fbc738(&pbStack_130);
    if (uVar16 == 0) goto LAB_101272c40;
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar16;
    if (uVar4 != 0) {
      _free(uVar15);
    }
    if ((uVar7 & 0x7fffffffffffffff) != 0) {
      _free(uVar14);
    }
    if (uVar19 == 0x8000000000000000) goto LAB_101272c40;
    if (uVar27 != 0) {
      pbVar25 = pbVar21 + 8;
      do {
        if (*(long *)(pbVar25 + -8) != 0) {
          _free(*(undefined8 *)pbVar25);
        }
        pbVar25 = pbVar25 + 0x20;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
  }
  if (uVar19 != 0) {
    _free(pbVar21);
  }
LAB_101272c40:
  if ((bVar6 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

