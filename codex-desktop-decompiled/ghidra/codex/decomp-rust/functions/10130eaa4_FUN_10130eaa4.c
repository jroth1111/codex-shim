
/* WARNING: Type propagation algorithm not settling */

void FUN_10130eaa4(long *param_1,byte *param_2)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  long unaff_x21;
  undefined8 *puVar13;
  byte *pbVar14;
  long unaff_x23;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  byte *pbVar19;
  long unaff_x26;
  long lVar20;
  long unaff_x27;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  long lStack_170;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_140;
  long lStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  long lStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  byte *pbStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  byte bStack_b0;
  byte bStack_af;
  undefined6 uStack_ae;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  long lStack_98;
  byte bStack_90;
  byte bStack_8f;
  undefined6 uStack_8e;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  byte *pbStack_78;
  undefined1 auStack_69 [9];
  
  bVar3 = *param_2;
  if (bVar3 == 0x14) {
    lStack_110 = *(long *)(param_2 + 8);
    pbStack_120 = *(byte **)(param_2 + 0x10);
    pbVar11 = pbStack_120 + *(long *)(param_2 + 0x18) * 0x20;
    pbStack_100 = (byte *)0x0;
    pbVar14 = pbStack_120;
    pbStack_108 = pbVar11;
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_10130f054:
      pbStack_118 = pbVar14;
      lVar21 = FUN_1087e422c(0,&UNK_10b231bc8,&UNK_10b20a590);
LAB_10130f070:
      *param_1 = 2;
      param_1[1] = lVar21;
    }
    else {
      pbVar14 = pbStack_120 + 0x20;
      if (*pbStack_120 == 0x16) goto LAB_10130f054;
      uVar7 = *(undefined8 *)(pbStack_120 + 1);
      uStack_87 = (undefined7)*(undefined8 *)(pbStack_120 + 9);
      bStack_8f = (byte)uVar7;
      uStack_8e = (undefined6)((ulong)uVar7 >> 8);
      uStack_88 = (undefined1)((ulong)uVar7 >> 0x38);
      pbStack_78 = *(byte **)(pbStack_120 + 0x18);
      uStack_80 = (undefined1)*(undefined8 *)(pbStack_120 + 0x10);
      uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbStack_120 + 0x10) >> 8);
      pbStack_100 = (byte *)0x1;
      pbStack_118 = pbVar14;
      bStack_90 = *pbStack_120;
      FUN_1004b62d4(&bStack_b0,&bStack_90);
      lVar16 = CONCAT62(uStack_ae,CONCAT11(bStack_af,bStack_b0));
      lVar21 = CONCAT71(uStack_a7,uStack_a8);
      if (lVar16 == -0x8000000000000000) goto LAB_10130f070;
      lVar8 = CONCAT71(uStack_9f,uStack_a0);
      FUN_100f26234(&bStack_90,&pbStack_120);
      lVar20 = CONCAT62(uStack_8e,CONCAT11(bStack_8f,bStack_90));
      lVar17 = CONCAT71(uStack_87,uStack_88);
      if (lVar20 != -0x7ffffffffffffffe) {
        if (lVar20 == -0x7fffffffffffffff) {
          lVar20 = -0x8000000000000000;
        }
        else {
          unaff_x27 = CONCAT71(uStack_7f,uStack_80);
          lStack_d0 = lVar17;
          lStack_c8 = unaff_x27;
        }
        pbVar11 = pbStack_118;
        lStack_d8 = lVar20;
        if (pbStack_118 == pbStack_108) {
LAB_10130f35c:
          pbStack_118 = pbVar11;
          lVar9 = 2;
        }
        else {
          pbVar11 = pbStack_118 + 0x20;
          bVar2 = *pbStack_118;
          if (bVar2 == 0x16) goto LAB_10130f35c;
          uVar7 = *(undefined8 *)(pbStack_118 + 1);
          uStack_a7 = (undefined7)*(undefined8 *)(pbStack_118 + 9);
          bStack_af = (byte)uVar7;
          uStack_ae = (undefined6)((ulong)uVar7 >> 8);
          uStack_a8 = (undefined1)((ulong)uVar7 >> 0x38);
          lStack_98 = *(long *)(pbStack_118 + 0x18);
          uStack_a0 = (undefined1)*(undefined8 *)(pbStack_118 + 0x10);
          uStack_9f = (undefined7)((ulong)*(undefined8 *)(pbStack_118 + 0x10) >> 8);
          pbStack_100 = pbStack_100 + 1;
          pbStack_118 = pbVar11;
          bStack_b0 = bVar2;
          if (bVar2 == 0x10) {
LAB_10130f424:
            FUN_100e077ec(&bStack_b0);
            lVar9 = 0;
          }
          else {
            if (bVar2 == 0x11) {
              puVar10 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
              uVar7 = *puVar10;
              uStack_88 = (undefined1)puVar10[1];
              uStack_87 = (undefined7)((ulong)puVar10[1] >> 8);
              bStack_90 = (byte)uVar7;
              bStack_8f = (byte)((ulong)uVar7 >> 8);
              uStack_8e = (undefined6)((ulong)uVar7 >> 0x10);
              pbStack_78 = (byte *)puVar10[3];
              uStack_80 = (undefined1)puVar10[2];
              uStack_7f = (undefined7)((ulong)puVar10[2] >> 8);
              auVar26 = FUN_100614fd8(&bStack_90);
              _free(puVar10);
            }
            else {
              if (bVar2 == 0x12) goto LAB_10130f424;
              auVar26 = FUN_100614fd8(&bStack_b0);
            }
            unaff_x23 = auVar26._8_8_;
            lVar9 = auVar26._0_8_ + 1;
            if (lVar9 == 2) {
              *param_1 = 2;
              param_1[1] = unaff_x23;
              if (lVar20 != -0x8000000000000000) {
                if (unaff_x27 != 0) {
                  puVar10 = (undefined8 *)(lVar17 + 8);
                  do {
                    if (puVar10[-1] != 0) {
                      _free(*puVar10);
                    }
                    puVar10 = puVar10 + 3;
                    unaff_x27 = unaff_x27 + -1;
                  } while (unaff_x27 != 0);
                }
                if (lVar20 != 0) {
                  _free(lVar17);
                }
              }
              goto LAB_10130ebe0;
            }
          }
        }
        lVar17 = lStack_c8;
        lVar20 = 0;
        if (lVar9 != 2) {
          lVar20 = lVar9;
        }
        param_1[6] = lStack_d0;
        param_1[5] = lStack_d8;
        param_1[7] = lStack_c8;
        *param_1 = lVar20;
        param_1[1] = unaff_x23;
        param_1[2] = lVar16;
        param_1[3] = lVar21;
        param_1[4] = lVar8;
        lStack_128 = param_1[5];
        pbVar11 = (byte *)param_1[6];
        lVar8 = FUN_100fbc738(&pbStack_120);
        if (lVar8 == 0) goto LAB_10130f2e0;
        *param_1 = 2;
        param_1[1] = lVar8;
        if (lVar16 != 0) {
          _free(lVar21);
        }
        if (lStack_128 == -0x8000000000000000) goto LAB_10130f2e0;
        if (lVar17 != 0) {
          pbVar14 = pbVar11 + 8;
          do {
            if (*(long *)(pbVar14 + -8) != 0) {
              _free(*(undefined8 *)pbVar14);
            }
            pbVar14 = pbVar14 + 0x18;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        goto joined_r0x00010130f434;
      }
      *param_1 = 2;
      param_1[1] = lVar17;
LAB_10130ebe0:
      pbVar11 = pbStack_108;
      pbVar14 = pbStack_118;
      if (lVar16 != 0) {
        _free(lVar21);
        pbVar11 = pbStack_108;
        pbVar14 = pbStack_118;
      }
    }
    lVar21 = ((ulong)((long)pbVar11 - (long)pbVar14) >> 5) + 1;
    while (lVar21 = lVar21 + -1, pbVar11 = pbStack_120, lStack_128 = lStack_110, lVar21 != 0) {
      FUN_100e077ec(pbVar14);
      pbVar14 = pbVar14 + 0x20;
    }
joined_r0x00010130f434:
    if (lStack_128 != 0) {
      _free(pbVar11);
    }
  }
  else {
    if (bVar3 != 0x15) {
      lVar21 = FUN_108855b04(param_2,auStack_69,&UNK_10b20b7a0);
      *param_1 = 2;
      param_1[1] = lVar21;
      return;
    }
    uStack_f0 = *(undefined8 *)(param_2 + 8);
    pbStack_100 = *(byte **)(param_2 + 0x10);
    pbStack_e8 = pbStack_100 + *(long *)(param_2 + 0x18) * 0x40;
    pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
    lStack_e0 = 0;
    lStack_d8 = -0x7fffffffffffffff;
    if (*(long *)(param_2 + 0x18) == 0) {
      lStack_d8 = -0x7fffffffffffffff;
      lStack_128 = -0x7fffffffffffffff;
      lStack_150 = unaff_x26;
      pbStack_f8 = pbStack_100;
    }
    else {
      puVar13 = (undefined8 *)((ulong)&bStack_b0 | 1);
      puVar15 = (undefined8 *)((ulong)&pbStack_120 | 1);
      puVar10 = (undefined8 *)((ulong)&bStack_90 | 1);
      lStack_140 = 2;
      lStack_128 = -0x7fffffffffffffff;
      uVar18 = 0x8000000000000000;
      lVar21 = -0x7fffffffffffffff;
      pbVar11 = pbStack_100;
      pbVar14 = pbStack_e8;
      do {
        pbVar19 = pbVar14;
        pbVar12 = pbVar11 + 0x40;
        bVar2 = *pbVar11;
        pbStack_f8 = pbVar12;
        if (bVar2 == 0x16) break;
        lStack_e0 = lStack_e0 + 1;
        uVar7 = *(undefined8 *)(pbVar11 + 1);
        uVar23 = *(undefined8 *)(pbVar11 + 0x18);
        uVar22 = *(undefined8 *)(pbVar11 + 0x10);
        uVar25 = *(undefined8 *)(pbVar11 + 0x28);
        uVar24 = *(undefined8 *)(pbVar11 + 0x20);
        puVar13[1] = *(undefined8 *)(pbVar11 + 9);
        *puVar13 = uVar7;
        *(undefined8 *)((long)puVar13 + 0x17) = uVar23;
        *(undefined8 *)((long)puVar13 + 0xf) = uVar22;
        pbStack_78 = *(byte **)(pbVar11 + 0x38);
        uStack_88 = (undefined1)uVar25;
        uStack_87 = (undefined7)((ulong)uVar25 >> 8);
        bStack_90 = (byte)uVar24;
        bStack_8f = (byte)((ulong)uVar24 >> 8);
        uStack_8e = (undefined6)((ulong)uVar24 >> 0x10);
        uStack_80 = (undefined1)*(undefined8 *)(pbVar11 + 0x30);
        uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar11 + 0x30) >> 8);
        bStack_b0 = bVar2;
        if ((byte)pbStack_120 != '\x16') {
          FUN_100e077ec(&pbStack_120);
        }
        pbStack_118 = (byte *)CONCAT71(uStack_87,uStack_88);
        pbStack_120 = (byte *)CONCAT62(uStack_8e,CONCAT11(bStack_8f,bStack_90));
        lStack_110 = CONCAT71(uStack_7f,uStack_80);
        pbStack_108 = pbStack_78;
        plVar1 = (long *)CONCAT71(uStack_a7,uStack_a8);
        plVar5 = (long *)CONCAT71(uStack_9f,uStack_a0);
        if (bVar2 < 0xd) {
          if (bVar2 == 1) {
            bStack_8f = bStack_af;
            if (2 < bStack_af) {
              bStack_8f = 3;
            }
LAB_10130ee54:
            bStack_90 = 0;
            goto LAB_10130ee58;
          }
          if (bVar2 == 4) {
            if ((long *)0x2 < plVar1) {
              plVar1 = (long *)0x3;
            }
            bStack_8f = (byte)plVar1;
            goto LAB_10130ee54;
          }
          if (bVar2 == 0xc) {
            if (lStack_98 == 0xb) {
              if (*plVar5 != 0x5374756f656d6974 || *(long *)((long)plVar5 + 3) != 0x7363655374756f65
                 ) goto LAB_10130edd4;
              bStack_8f = 2;
              bStack_90 = 0;
            }
            else {
              if (lStack_98 == 6) {
                if ((int)*plVar5 == 0x706f6373 && *(short *)((long)plVar5 + 4) == 0x7365) {
                  bStack_8f = 1;
                  bStack_90 = 0;
                  goto joined_r0x00010130f01c;
                }
LAB_10130edd4:
                bStack_8f = 3;
              }
              else {
                if ((lStack_98 != 4) || ((int)*plVar5 != 0x656d616e)) goto LAB_10130edd4;
                bStack_8f = 0;
              }
              bStack_90 = 0;
            }
joined_r0x00010130f01c:
            if (plVar1 != (long *)0x0) {
              _free(plVar5);
            }
          }
          else {
LAB_10130f02c:
            uVar7 = FUN_108855b04(&bStack_b0,auStack_69,&UNK_10b210a20);
            uStack_88 = (undefined1)uVar7;
            uStack_87 = (undefined7)((ulong)uVar7 >> 8);
            bStack_90 = 1;
          }
        }
        else {
          if (bVar2 == 0xd) {
            if (plVar5 == (long *)0xb) {
              if (*plVar1 != 0x5374756f656d6974 || *(long *)((long)plVar1 + 3) != 0x7363655374756f65
                 ) goto LAB_10130ee4c;
              bStack_8f = 2;
            }
            else if (plVar5 == (long *)0x6) {
              if ((int)*plVar1 != 0x706f6373 || *(short *)((long)plVar1 + 4) != 0x7365)
              goto LAB_10130ee4c;
              bStack_8f = 1;
            }
            else if ((plVar5 == (long *)0x4) && ((int)*plVar1 == 0x656d616e)) {
              bStack_8f = 0;
            }
            else {
LAB_10130ee4c:
              bStack_8f = 3;
            }
            goto LAB_10130ee54;
          }
          if (bVar2 == 0xe) {
            func_0x000100bb1504(&bStack_90,plVar5);
            goto joined_r0x00010130f01c;
          }
          if (bVar2 != 0xf) goto LAB_10130f02c;
          func_0x000100bb1504(&bStack_90,plVar1,plVar5);
LAB_10130ee58:
          FUN_100e077ec(&bStack_b0);
        }
        if ((bStack_90 & 1) != 0) {
          lStack_170 = CONCAT71(uStack_87,uStack_88);
LAB_10130f138:
          lStack_d0 = lStack_150;
          lStack_d8 = lVar21;
          lStack_c8 = unaff_x21;
          goto LAB_10130f144;
        }
        bVar2 = (byte)pbStack_120;
        pbVar14 = pbVar19;
        if (bStack_8f < 2) {
          if (bStack_8f == 0) {
            if (uVar18 != 0x8000000000000000) {
              lStack_d0 = lStack_150;
              bStack_b0 = 0x18;
              bStack_af = 0x10;
              uStack_ae = 0x108c6;
              uStack_a8 = 4;
              uStack_a7 = 0;
              bStack_90 = (byte)&bStack_b0;
              bStack_8f = (byte)((ulong)&bStack_b0 >> 8);
              uStack_8e = (undefined6)((ulong)&bStack_b0 >> 0x10);
              uStack_88 = 0xa0;
              uStack_87 = 0x100c7b3;
              lStack_d8 = lVar21;
              lStack_c8 = unaff_x21;
              lStack_170 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
              goto LAB_10130f144;
            }
            pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
            if (bVar2 == 0x16) {
              lStack_d0 = lStack_150;
              lStack_d8 = lVar21;
              lStack_c8 = unaff_x21;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_10130f658;
            }
            uVar7 = *puVar15;
            puVar10[1] = puVar15[1];
            *puVar10 = uVar7;
            uVar7 = *(undefined8 *)((long)puVar15 + 0xf);
            *(undefined8 *)((long)puVar10 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
            *(undefined8 *)((long)puVar10 + 0xf) = uVar7;
            bStack_90 = bVar2;
            FUN_1004b62d4(&bStack_b0,&bStack_90);
            uVar18 = CONCAT62(uStack_ae,CONCAT11(bStack_af,bStack_b0));
            if (uVar18 == 0x8000000000000000) {
              uVar18 = 0;
              lStack_170 = CONCAT71(uStack_a7,uStack_a8);
              goto LAB_10130f138;
            }
            lStack_158 = CONCAT71(uStack_a7,uStack_a8);
            lStack_160 = CONCAT71(uStack_9f,uStack_a0);
          }
          else {
            if (lStack_128 != -0x7fffffffffffffff) {
              lStack_d0 = lStack_150;
              bStack_b0 = 0x46;
              bStack_af = 0xc9;
              uStack_ae = 0x108ca;
              uStack_a8 = 6;
              uStack_a7 = 0;
              bStack_90 = (byte)&bStack_b0;
              bStack_8f = (byte)((ulong)&bStack_b0 >> 8);
              uStack_8e = (undefined6)((ulong)&bStack_b0 >> 0x10);
              uStack_88 = 0xa0;
              uStack_87 = 0x100c7b3;
              lStack_d8 = lVar21;
              lStack_c8 = unaff_x21;
              lVar21 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
              *param_1 = 2;
              param_1[1] = lVar21;
              goto joined_r0x00010130f588;
            }
            FUN_100f21028(&bStack_90,&pbStack_120);
            lVar21 = CONCAT62(uStack_8e,CONCAT11(bStack_8f,bStack_90));
            lStack_150 = CONCAT71(uStack_87,uStack_88);
            if (lVar21 == -0x7fffffffffffffff) {
              *param_1 = 2;
              param_1[1] = lStack_150;
              goto LAB_10130f2b4;
            }
            unaff_x21 = CONCAT71(uStack_7f,uStack_80);
            pbVar12 = pbStack_f8;
            pbVar14 = pbStack_e8;
            lStack_128 = lVar21;
          }
        }
        else if (bStack_8f == 2) {
          if (lStack_140 != 2) {
            lStack_d0 = lStack_150;
            bStack_b0 = 0x47;
            bStack_af = 8;
            uStack_ae = 0x108cc;
            uStack_a8 = 0xb;
            uStack_a7 = 0;
            bStack_90 = (byte)&bStack_b0;
            bStack_8f = (byte)((ulong)&bStack_b0 >> 8);
            uStack_8e = (undefined6)((ulong)&bStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            lStack_d8 = lVar21;
            lStack_c8 = unaff_x21;
            lStack_170 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
            goto LAB_10130f144;
          }
          pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
          if (bVar2 == 0x16) goto LAB_10130f4f8;
          uVar7 = *puVar15;
          puVar13[1] = puVar15[1];
          *puVar13 = uVar7;
          uVar7 = *(undefined8 *)((long)puVar15 + 0xf);
          *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
          *(undefined8 *)((long)puVar13 + 0xf) = uVar7;
          bStack_b0 = bVar2;
          if (bVar2 == 0x10) {
LAB_10130ebf8:
            bStack_b0 = bVar2;
            FUN_100e077ec(&bStack_b0);
            lStack_140 = 0;
          }
          else {
            if (bVar2 == 0x11) {
              puVar4 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
              uVar7 = *puVar4;
              uStack_88 = (undefined1)puVar4[1];
              uStack_87 = (undefined7)((ulong)puVar4[1] >> 8);
              bStack_90 = (byte)uVar7;
              bStack_8f = (byte)((ulong)uVar7 >> 8);
              uStack_8e = (undefined6)((ulong)uVar7 >> 0x10);
              pbStack_78 = (byte *)puVar4[3];
              uStack_80 = (undefined1)puVar4[2];
              uStack_7f = (undefined7)((ulong)puVar4[2] >> 8);
              auVar26 = FUN_100614fd8(&bStack_90);
              _free(puVar4);
            }
            else {
              if (bVar2 == 0x12) goto LAB_10130ebf8;
              auVar26 = FUN_100614fd8(&bStack_b0);
            }
            lStack_170 = auVar26._8_8_;
            lStack_140 = auVar26._0_8_ + 1;
            if (lStack_140 == 2) {
              lStack_d0 = lStack_150;
              lStack_d8 = lVar21;
              lStack_c8 = unaff_x21;
              goto LAB_10130f144;
            }
          }
        }
        else {
          pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
          if (bVar2 == 0x16) {
LAB_10130f4f8:
            pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
            lStack_d0 = lStack_150;
            lStack_d8 = lVar21;
            lStack_c8 = unaff_x21;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10130f658:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10130f65c);
            (*pcVar6)();
          }
          uVar7 = *puVar15;
          puVar10[1] = puVar15[1];
          *puVar10 = uVar7;
          uVar7 = *(undefined8 *)((long)puVar15 + 0xf);
          *(undefined8 *)((long)puVar10 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
          *(undefined8 *)((long)puVar10 + 0xf) = uVar7;
          bStack_90 = bVar2;
          FUN_100e077ec(&bStack_90);
        }
        pbVar11 = pbVar12;
        pbVar19 = pbVar12;
      } while (pbVar12 != pbVar14);
      lStack_d0 = lStack_150;
      lStack_d8 = lVar21;
      lStack_c8 = unaff_x21;
      if (uVar18 != 0x8000000000000000) {
        if (lStack_128 == -0x7fffffffffffffff) {
          lStack_128 = -0x8000000000000000;
        }
        else {
          lStack_c0 = lStack_150;
          lStack_b8 = unaff_x21;
        }
        lVar21 = 0;
        if (lStack_140 != 2) {
          lVar21 = lStack_140;
        }
        *param_1 = lVar21;
        param_1[1] = lStack_170;
        param_1[2] = uVar18;
        param_1[3] = lStack_158;
        param_1[4] = lStack_160;
        param_1[5] = lStack_128;
        param_1[7] = lStack_b8;
        param_1[6] = lStack_c0;
        pbVar11 = (byte *)param_1[6];
        lVar21 = param_1[7];
        FUN_100d34830(&pbStack_100);
        if (pbVar19 == pbVar12) {
          lVar16 = 0;
        }
        else {
          bStack_90 = (byte)lStack_e0;
          bStack_8f = (byte)((ulong)lStack_e0 >> 8);
          uStack_8e = (undefined6)((ulong)lStack_e0 >> 0x10);
          lVar16 = FUN_1087e422c(lStack_e0 + ((ulong)((long)pbVar19 - (long)pbVar12) >> 6),
                                 &bStack_90,&UNK_10b23a190);
        }
        if ((byte)pbStack_120 != '\x16') {
          FUN_100e077ec(&pbStack_120);
        }
        if (lVar16 == 0) goto LAB_10130f2e0;
        *param_1 = 2;
        param_1[1] = lVar16;
        if (uVar18 != 0) {
          _free(lStack_158);
        }
        if (lStack_128 == -0x8000000000000000) goto LAB_10130f2e0;
        if (lVar21 != 0) {
          pbVar14 = pbVar11 + 8;
          do {
            if (*(long *)(pbVar14 + -8) != 0) {
              _free(*(undefined8 *)pbVar14);
            }
            pbVar14 = pbVar14 + 0x18;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
        }
        goto joined_r0x00010130f434;
      }
    }
    bStack_b0 = 0x18;
    bStack_af = 0x10;
    uStack_ae = 0x108c6;
    uStack_a8 = 4;
    uStack_a7 = 0;
    bStack_90 = (byte)&bStack_b0;
    bStack_8f = (byte)((ulong)&bStack_b0 >> 8);
    uStack_8e = (undefined6)((ulong)&bStack_b0 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    uVar18 = 0;
    lStack_170 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
LAB_10130f144:
    *param_1 = 2;
    param_1[1] = lStack_170;
    if (lStack_128 != -0x7fffffffffffffff) {
joined_r0x00010130f588:
      if (lStack_128 != -0x8000000000000000) {
        if (unaff_x21 != 0) {
          puVar10 = (undefined8 *)(lStack_150 + 8);
          do {
            if (puVar10[-1] != 0) {
              _free(*puVar10);
            }
            puVar10 = puVar10 + 3;
            unaff_x21 = unaff_x21 + -1;
          } while (unaff_x21 != 0);
        }
        if (lStack_128 != 0) {
          _free(lStack_150);
        }
      }
    }
LAB_10130f2b4:
    if ((uVar18 & 0x7fffffffffffffff) != 0) {
      _free(lStack_158);
    }
    FUN_100d34830(&pbStack_100);
    if ((byte)pbStack_120 != '\x16') {
      FUN_100e077ec(&pbStack_120);
    }
  }
LAB_10130f2e0:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

