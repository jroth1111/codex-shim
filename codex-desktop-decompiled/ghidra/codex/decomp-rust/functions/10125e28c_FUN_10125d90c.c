
/* WARNING: Type propagation algorithm not settling */

void FUN_10125d90c(ulong *param_1,byte *param_2)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte bVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  byte *pbVar16;
  long lVar17;
  ulong uVar18;
  byte *pbVar19;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  byte bStack_110;
  byte bStack_10f;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  long lStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  undefined8 uStack_d0;
  byte *pbStack_c8;
  long lStack_c0;
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
  byte *pbVar20;
  
  bVar3 = *param_2;
  if (bVar3 != 0x14) {
    if (bVar3 != 0x15) {
      uVar15 = FUN_108855b04(param_2,&bStack_110,&UNK_10b20aba0);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar15;
      return;
    }
    uStack_d0 = *(undefined8 *)(param_2 + 8);
    pbStack_e0 = *(byte **)(param_2 + 0x10);
    pbStack_c8 = pbStack_e0 + *(long *)(param_2 + 0x18) * 0x40;
    pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
    lStack_c0 = 0;
    if (*(long *)(param_2 + 0x18) == 0) {
      uVar15 = 0x8000000000000001;
      pbStack_d8 = pbStack_e0;
    }
    else {
      puVar13 = (undefined8 *)((ulong)&bStack_b0 | 1);
      puVar14 = (undefined8 *)((ulong)&pbStack_100 | 1);
      puVar12 = (undefined8 *)((ulong)&bStack_90 | 1);
      bVar10 = 7;
      uVar18 = 0x8000000000000000;
      uVar15 = 0x8000000000000001;
      pbVar16 = pbStack_c8;
      pbVar20 = pbStack_e0;
      do {
        pbVar11 = pbVar16;
        pbVar19 = pbVar20 + 0x40;
        bVar2 = *pbVar20;
        pbStack_d8 = pbVar19;
        if (bVar2 == 0x16) break;
        lStack_c0 = lStack_c0 + 1;
        uVar8 = *(undefined8 *)(pbVar20 + 1);
        uVar22 = *(undefined8 *)(pbVar20 + 0x18);
        uVar21 = *(undefined8 *)(pbVar20 + 0x10);
        uVar24 = *(undefined8 *)(pbVar20 + 0x28);
        uVar23 = *(undefined8 *)(pbVar20 + 0x20);
        puVar13[1] = *(undefined8 *)(pbVar20 + 9);
        *puVar13 = uVar8;
        *(undefined8 *)((long)puVar13 + 0x17) = uVar22;
        *(undefined8 *)((long)puVar13 + 0xf) = uVar21;
        pbStack_78 = *(byte **)(pbVar20 + 0x38);
        uStack_88 = (undefined1)uVar24;
        uStack_87 = (undefined7)((ulong)uVar24 >> 8);
        bStack_90 = (byte)uVar23;
        bStack_8f = (byte)((ulong)uVar23 >> 8);
        uStack_8e = (undefined6)((ulong)uVar23 >> 0x10);
        uStack_80 = (undefined1)*(undefined8 *)(pbVar20 + 0x30);
        uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar20 + 0x30) >> 8);
        bStack_b0 = bVar2;
        if ((byte)pbStack_100 != '\x16') {
          FUN_100e077ec(&pbStack_100);
        }
        pbStack_f8 = (byte *)CONCAT71(uStack_87,uStack_88);
        pbStack_100 = (byte *)CONCAT62(uStack_8e,CONCAT11(bStack_8f,bStack_90));
        lStack_f0 = CONCAT71(uStack_7f,uStack_80);
        pbStack_e8 = pbStack_78;
        plVar1 = (long *)CONCAT71(uStack_a7,uStack_a8);
        plVar5 = (long *)CONCAT71(uStack_9f,uStack_a0);
        if (bVar2 < 0xd) {
          if (bVar2 == 1) {
            bStack_8f = bStack_af;
            if (2 < bStack_af) {
              bStack_8f = 3;
            }
LAB_10125dc60:
            bStack_90 = 0;
            goto LAB_10125dc64;
          }
          if (bVar2 == 4) {
            if ((long *)0x2 < plVar1) {
              plVar1 = (long *)0x3;
            }
            bStack_8f = (byte)plVar1;
            goto LAB_10125dc60;
          }
          if (bVar2 == 0xc) {
            if (lStack_98 == 0x16) {
              if ((*plVar5 != 0x65706f6c65766564 || plVar5[1] != 0x757274736e695f72) ||
                  *(long *)((long)plVar5 + 0xe) != 0x736e6f6974637572) goto LAB_10125dbbc;
              bStack_8f = 2;
joined_r0x00010125ddbc:
              bStack_90 = 0;
            }
            else if (lStack_98 == 0x10) {
              if (*plVar5 != 0x6e696e6f73616572 || plVar5[1] != 0x74726f6666655f67)
              goto LAB_10125dbbc;
              bStack_8f = 1;
              bStack_90 = 0;
            }
            else {
              if ((lStack_98 != 5) ||
                 ((int)*plVar5 != 0x65646f6d || *(char *)((long)plVar5 + 4) != 'l')) {
LAB_10125dbbc:
                bStack_8f = 3;
                goto joined_r0x00010125ddbc;
              }
              bStack_8f = 0;
              bStack_90 = 0;
            }
joined_r0x00010125db6c:
            if (plVar1 != (long *)0x0) {
              _free(plVar5);
            }
          }
          else {
LAB_10125ddcc:
            uVar8 = FUN_108855b04(&bStack_b0,&bStack_110,&UNK_10b2127e0);
            uStack_88 = (undefined1)uVar8;
            uStack_87 = (undefined7)((ulong)uVar8 >> 8);
            bStack_90 = 1;
          }
        }
        else {
          if (bVar2 == 0xd) {
            if (plVar5 == (long *)0x16) {
              if ((*plVar1 != 0x65706f6c65766564 || plVar1[1] != 0x757274736e695f72) ||
                  *(long *)((long)plVar1 + 0xe) != 0x736e6f6974637572) goto LAB_10125dc58;
              bStack_8f = 2;
            }
            else if (plVar5 == (long *)0x10) {
              if (*plVar1 != 0x6e696e6f73616572 || plVar1[1] != 0x74726f6666655f67)
              goto LAB_10125dc58;
              bStack_8f = 1;
            }
            else if ((plVar5 == (long *)0x5) &&
                    ((int)*plVar1 == 0x65646f6d && *(char *)((long)plVar1 + 4) == 'l')) {
              bStack_8f = 0;
            }
            else {
LAB_10125dc58:
              bStack_8f = 3;
            }
            goto LAB_10125dc60;
          }
          if (bVar2 == 0xe) {
            FUN_100b1d824(&bStack_90,plVar5);
            goto joined_r0x00010125db6c;
          }
          if (bVar2 != 0xf) goto LAB_10125ddcc;
          FUN_100b1d824(&bStack_90,plVar1,plVar5);
LAB_10125dc64:
          FUN_100e077ec(&bStack_b0);
        }
        if ((bStack_90 & 1) != 0) {
LAB_10125ded4:
          uVar9 = CONCAT71(uStack_87,uStack_88);
          goto LAB_10125df28;
        }
        bVar2 = (byte)pbStack_100;
        pbVar16 = pbVar11;
        pbVar11 = pbVar19;
        if (bStack_8f < 2) {
          if (bStack_8f == 0) {
            if (uVar18 != 0x8000000000000000) {
              bStack_b0 = 0xfe;
              bStack_af = 0x1e;
              uStack_ae = 0x108ca;
              uStack_a8 = 5;
              uStack_a7 = 0;
              bStack_90 = (byte)&bStack_b0;
              bStack_8f = (byte)((ulong)&bStack_b0 >> 8);
              uStack_8e = (undefined6)((ulong)&bStack_b0 >> 0x10);
              uStack_88 = 0xa0;
              uStack_87 = 0x100c7b3;
              uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
              goto LAB_10125df28;
            }
            pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
            if (bVar2 == 0x16) {
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_10125e364;
            }
            uVar8 = *puVar14;
            puVar12[1] = puVar14[1];
            *puVar12 = uVar8;
            uVar8 = *(undefined8 *)((long)puVar14 + 0xf);
            *(undefined8 *)((long)puVar12 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
            *(undefined8 *)((long)puVar12 + 0xf) = uVar8;
            bStack_90 = bVar2;
            FUN_1004b62d4(&bStack_b0,&bStack_90);
            uVar18 = CONCAT62(uStack_ae,CONCAT11(bStack_af,bStack_b0));
            uVar9 = CONCAT71(uStack_a7,uStack_a8);
            if (uVar18 == 0x8000000000000000) {
              uVar18 = 0;
              goto LAB_10125df28;
            }
            uStack_150 = CONCAT71(uStack_9f,uStack_a0);
            uStack_138 = uVar9;
          }
          else {
            if (bVar10 != 7) {
              bStack_b0 = 0x30;
              bStack_af = 200;
              uStack_ae = 0x108cd;
              uStack_a8 = 0x10;
              uStack_a7 = 0;
              bStack_90 = (byte)&bStack_b0;
              bStack_8f = (byte)((ulong)&bStack_b0 >> 8);
              uStack_8e = (undefined6)((ulong)&bStack_b0 >> 0x10);
              uStack_88 = 0xa0;
              uStack_87 = 0x100c7b3;
              uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
              goto LAB_10125df28;
            }
            FUN_100f1e1c4(&bStack_90,&pbStack_100);
            pbVar16 = pbStack_c8;
            pbVar11 = pbStack_d8;
            bVar10 = bStack_8f;
            if (bStack_90 == 1) goto LAB_10125ded4;
          }
        }
        else if (bStack_8f == 2) {
          if (uVar15 != 0x8000000000000001) {
            bStack_b0 = 0x4e;
            bStack_af = 0xb9;
            uStack_ae = 0x108ca;
            uStack_a8 = 0x16;
            uStack_a7 = 0;
            bStack_90 = (byte)&bStack_b0;
            bStack_8f = (byte)((ulong)&bStack_b0 >> 8);
            uStack_8e = (undefined6)((ulong)&bStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar9;
            uVar15 = uVar15 & 0x7fffffffffffffff;
            goto joined_r0x00010125e2e8;
          }
          pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
          if (bVar2 == 0x16) {
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10125e364;
          }
          uVar8 = *puVar14;
          puVar12[1] = puVar14[1];
          *puVar12 = uVar8;
          uVar8 = *(undefined8 *)((long)puVar14 + 0xf);
          *(undefined8 *)((long)puVar12 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
          *(undefined8 *)((long)puVar12 + 0xf) = uVar8;
          bStack_90 = bVar2;
          FUN_1004b60cc(&bStack_b0,&bStack_90);
          uVar15 = CONCAT62(uStack_ae,CONCAT11(bStack_af,bStack_b0));
          uStack_140 = CONCAT71(uStack_a7,uStack_a8);
          if (uVar15 == 0x8000000000000001) {
            *param_1 = 0x8000000000000000;
            param_1[1] = uStack_140;
            goto LAB_10125df50;
          }
          uStack_148 = CONCAT71(uStack_9f,uStack_a0);
        }
        else {
          pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
          if (bVar2 == 0x16) {
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10125e364:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10125e368);
            (*pcVar7)();
          }
          uVar8 = *puVar14;
          puVar12[1] = puVar14[1];
          *puVar12 = uVar8;
          uVar8 = *(undefined8 *)((long)puVar14 + 0xf);
          *(undefined8 *)((long)puVar12 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
          *(undefined8 *)((long)puVar12 + 0xf) = uVar8;
          bStack_90 = bVar2;
          FUN_100e077ec(&bStack_90);
        }
        pbVar20 = pbVar11;
        pbVar19 = pbVar11;
      } while (pbVar11 != pbVar16);
      if (uVar18 != 0x8000000000000000) {
        bVar2 = 6;
        if (bVar10 != 7) {
          bVar2 = bVar10;
        }
        *param_1 = uVar18;
        param_1[1] = uStack_138;
        uVar9 = 0x8000000000000000;
        if (uVar15 != 0x8000000000000001) {
          uVar9 = uVar15;
        }
        param_1[2] = uStack_150;
        param_1[3] = uVar9;
        param_1[4] = uStack_140;
        param_1[5] = uStack_148;
        *(byte *)(param_1 + 6) = bVar2;
        FUN_100d34830(&pbStack_e0);
        if (pbVar11 == pbVar19) {
          uVar15 = 0;
        }
        else {
          bStack_90 = (byte)lStack_c0;
          bStack_8f = (byte)((ulong)lStack_c0 >> 8);
          uStack_8e = (undefined6)((ulong)lStack_c0 >> 0x10);
          uVar15 = FUN_1087e422c(lStack_c0 + ((ulong)((long)pbVar11 - (long)pbVar19) >> 6),
                                 &bStack_90,&UNK_10b23a190);
        }
        if ((byte)pbStack_100 != '\x16') {
          FUN_100e077ec(&pbStack_100);
        }
        if (uVar15 != 0) {
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar15;
          if (uVar18 != 0) {
            _free(uStack_138);
          }
          if ((uVar9 & 0x7fffffffffffffff) != 0) {
            _free(uStack_140);
          }
        }
        goto LAB_10125df84;
      }
    }
    bStack_b0 = 0xfe;
    bStack_af = 0x1e;
    uStack_ae = 0x108ca;
    uStack_a8 = 5;
    uStack_a7 = 0;
    bStack_90 = (byte)&bStack_b0;
    bStack_8f = (byte)((ulong)&bStack_b0 >> 8);
    uStack_8e = (undefined6)((ulong)&bStack_b0 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    uVar18 = 0;
    uVar9 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
LAB_10125df28:
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar9;
    if (-0x7fffffffffffffff < (long)uVar15) {
joined_r0x00010125e2e8:
      if (uVar15 != 0) {
        _free(uStack_140);
      }
    }
LAB_10125df50:
    if ((uVar18 & 0x7fffffffffffffff) != 0) {
      _free(uStack_138);
    }
    FUN_100d34830(&pbStack_e0);
    if ((byte)pbStack_100 != '\x16') {
      FUN_100e077ec(&pbStack_100);
    }
    goto LAB_10125df84;
  }
  uVar15 = *(ulong *)(param_2 + 8);
  pbVar11 = *(byte **)(param_2 + 0x10);
  lVar17 = *(long *)(param_2 + 0x18);
  pbVar20 = pbVar11 + lVar17 * 0x20;
  pbStack_e0 = (byte *)0x0;
  pbVar16 = pbVar11;
  pbStack_100 = pbVar11;
  lStack_f0 = uVar15;
  pbStack_e8 = pbVar20;
  if (lVar17 == 0) {
LAB_10125de28:
    pbStack_f8 = pbVar16;
    uVar18 = FUN_1087e422c(0,&UNK_10b22d4f0,&UNK_10b20a590);
LAB_10125de44:
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar18;
LAB_10125de4c:
    lVar17 = ((ulong)((long)pbVar20 - (long)pbVar16) >> 5) + 1;
    while (lVar17 = lVar17 + -1, lVar17 != 0) {
      FUN_100e077ec(pbVar16);
      pbVar16 = pbVar16 + 0x20;
    }
  }
  else {
    pbVar16 = pbVar11 + 0x20;
    if (*pbVar11 == 0x16) goto LAB_10125de28;
    uVar8 = *(undefined8 *)(pbVar11 + 1);
    uStack_87 = (undefined7)*(undefined8 *)(pbVar11 + 9);
    bStack_8f = (byte)uVar8;
    uStack_8e = (undefined6)((ulong)uVar8 >> 8);
    uStack_88 = (undefined1)((ulong)uVar8 >> 0x38);
    pbStack_78 = *(byte **)(pbVar11 + 0x18);
    uStack_80 = (undefined1)*(undefined8 *)(pbVar11 + 0x10);
    uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar11 + 0x10) >> 8);
    pbStack_e0 = (byte *)0x1;
    pbStack_f8 = pbVar16;
    bStack_90 = *pbVar11;
    FUN_1004b62d4(&bStack_b0,&bStack_90);
    uVar9 = CONCAT62(uStack_ae,CONCAT11(bStack_af,bStack_b0));
    uVar18 = CONCAT71(uStack_a7,uStack_a8);
    if (uVar9 == 0x8000000000000000) goto LAB_10125de44;
    if (lVar17 == 1) {
LAB_10125e070:
      uVar8 = 1;
LAB_10125e074:
      pbStack_108 = (byte *)FUN_1087e422c(uVar8,&UNK_10b22d4f0,&UNK_10b20a590);
LAB_10125e088:
      *param_1 = 0x8000000000000000;
      param_1[1] = (ulong)pbStack_108;
      if (uVar9 != 0) {
        _free(uVar18);
      }
      goto LAB_10125de4c;
    }
    uVar6 = CONCAT71(uStack_9f,uStack_a0);
    pbVar16 = pbVar11 + 0x40;
    bVar10 = pbVar11[0x20];
    pbStack_f8 = pbVar16;
    if (bVar10 == 0x16) goto LAB_10125e070;
    uVar8 = *(undefined8 *)(pbVar11 + 0x21);
    uStack_a7 = (undefined7)*(undefined8 *)(pbVar11 + 0x29);
    bStack_af = (byte)uVar8;
    uStack_ae = (undefined6)((ulong)uVar8 >> 8);
    uStack_a8 = (undefined1)((ulong)uVar8 >> 0x38);
    lStack_98 = *(long *)(pbVar11 + 0x38);
    uStack_a0 = (undefined1)*(undefined8 *)(pbVar11 + 0x30);
    uStack_9f = (undefined7)((ulong)*(undefined8 *)(pbVar11 + 0x30) >> 8);
    pbStack_e0 = (byte *)0x2;
    bStack_b0 = bVar10;
    if (bVar10 != 0x10) {
      if (bVar10 == 0x11) {
        puVar12 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
        uVar8 = *puVar12;
        uStack_88 = (undefined1)puVar12[1];
        uStack_87 = (undefined7)((ulong)puVar12[1] >> 8);
        bStack_90 = (byte)uVar8;
        bStack_8f = (byte)((ulong)uVar8 >> 8);
        uStack_8e = (undefined6)((ulong)uVar8 >> 0x10);
        pbStack_78 = (byte *)puVar12[3];
        uStack_80 = (undefined1)puVar12[2];
        uStack_7f = (undefined7)((ulong)puVar12[2] >> 8);
        FUN_1007913e4(&bStack_110,&bStack_90);
        _free(puVar12);
        bVar10 = bStack_10f;
        if ((bStack_110 & 1) == 0) goto LAB_10125e108;
      }
      else {
        if (bVar10 == 0x12) goto LAB_10125e0fc;
        FUN_1007913e4(&bStack_90,&bStack_b0);
        bVar10 = bStack_8f;
        if ((bStack_90 & 1) == 0) goto LAB_10125e108;
        pbStack_108 = (byte *)CONCAT71(uStack_87,uStack_88);
      }
      goto LAB_10125e088;
    }
LAB_10125e0fc:
    FUN_100e077ec(&bStack_b0);
    bVar10 = 6;
LAB_10125e108:
    if (lVar17 == 2) {
      uVar8 = 2;
      pbVar16 = pbVar20;
      goto LAB_10125e074;
    }
    pbVar16 = pbVar11 + 0x60;
    pbStack_f8 = pbVar16;
    if (pbVar11[0x40] == 0x16) {
      uVar8 = 2;
      goto LAB_10125e074;
    }
    uVar8 = *(undefined8 *)(pbVar11 + 0x41);
    uStack_87 = (undefined7)*(undefined8 *)(pbVar11 + 0x49);
    bStack_8f = (byte)uVar8;
    uStack_8e = (undefined6)((ulong)uVar8 >> 8);
    uStack_88 = (undefined1)((ulong)uVar8 >> 0x38);
    pbStack_78 = *(byte **)(pbVar11 + 0x58);
    uStack_80 = (undefined1)*(undefined8 *)(pbVar11 + 0x50);
    uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar11 + 0x50) >> 8);
    pbStack_e0 = (byte *)0x3;
    bStack_90 = pbVar11[0x40];
    FUN_1004b60cc(&bStack_b0,&bStack_90);
    uVar4 = CONCAT62(uStack_ae,CONCAT11(bStack_af,bStack_b0));
    pbVar19 = (byte *)CONCAT71(uStack_a7,uStack_a8);
    pbStack_108 = pbVar19;
    if (uVar4 == 0x8000000000000001) goto LAB_10125e088;
    *param_1 = uVar9;
    param_1[1] = uVar18;
    param_1[2] = uVar6;
    param_1[3] = uVar4;
    param_1[4] = (ulong)pbVar19;
    param_1[5] = CONCAT71(uStack_9f,uStack_a0);
    *(byte *)(param_1 + 6) = bVar10;
    uVar15 = FUN_100fbc738(&pbStack_100);
    if (uVar15 == 0) goto LAB_10125df84;
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar15;
    if (uVar9 != 0) {
      _free(uVar18);
    }
    uVar15 = uVar4 & 0x7fffffffffffffff;
    pbVar11 = pbVar19;
  }
  if (uVar15 != 0) {
    _free(pbVar11);
  }
LAB_10125df84:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

