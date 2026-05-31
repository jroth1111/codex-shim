
/* WARNING: Type propagation algorithm not settling */

void FUN_101445a44(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *******pppppppbVar2;
  long *plVar3;
  byte ******ppppppbVar4;
  ulong uVar5;
  byte *******pppppppbVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  byte *******pppppppbVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  byte *pbVar22;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  byte *******pppppppbVar23;
  undefined8 unaff_x23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined8 unaff_x27;
  long lVar26;
  undefined8 uVar27;
  undefined8 uStack_1a0;
  byte *******pppppppbStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_160;
  ulong uStack_158;
  byte ******ppppppbStack_150;
  undefined8 uStack_148;
  byte bStack_140;
  byte bStack_13f;
  undefined6 uStack_13e;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  byte ******ppppppbStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  byte *******pppppppbStack_108;
  undefined8 uStack_100;
  byte *******pppppppbStack_f0;
  byte *******pppppppbStack_e8;
  ulong uStack_e0;
  byte *******pppppppbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  long lStack_b0;
  byte bStack_a8;
  byte bStack_a7;
  undefined6 uStack_a6;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  byte ******ppppppbStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  bVar8 = *param_2;
  if (bVar8 == 0x14) {
    uVar5 = *(ulong *)(param_2 + 8);
    pppppppbVar6 = *(byte ********)(param_2 + 0x10);
    lVar26 = *(long *)(param_2 + 0x18);
    pppppppbVar2 = pppppppbVar6 + lVar26 * 4;
    pbStack_d0 = (byte *)0x0;
    pppppppbVar23 = pppppppbVar6;
    pppppppbStack_f0 = pppppppbVar6;
    uStack_e0 = uVar5;
    pppppppbStack_d8 = pppppppbVar2;
    if (lVar26 == 0) {
LAB_101445b34:
      pppppppbStack_e8 = pppppppbVar23;
      uStack_80 = FUN_1087e422c(0,&UNK_10b22b7e8,&UNK_10b20a590);
LAB_101445b50:
      bStack_140 = 1;
      bStack_13f = 0;
      uStack_13e = 0x800000000000;
      uStack_138 = (undefined1)uStack_80;
      uStack_137 = (undefined7)((ulong)uStack_80 >> 8);
LAB_101445b58:
      lVar26 = ((ulong)((long)pppppppbVar2 - (long)pppppppbVar23) >> 5) + 1;
      while (lVar26 = lVar26 + -1, lVar26 != 0) {
        FUN_100e077ec(pppppppbVar23);
        pppppppbVar23 = pppppppbVar23 + 4;
      }
    }
    else {
      pppppppbVar23 = pppppppbVar6 + 4;
      bVar7 = *(byte *)pppppppbVar6;
      if (bVar7 == 0x16) goto LAB_101445b34;
      uVar17 = *(undefined8 *)((long)pppppppbVar6 + 1);
      uStack_9f = (undefined7)*(undefined8 *)((long)pppppppbVar6 + 9);
      bStack_a7 = (byte)uVar17;
      uStack_a6 = (undefined6)((ulong)uVar17 >> 8);
      uStack_a0 = (undefined1)((ulong)uVar17 >> 0x38);
      ppppppbStack_90 = pppppppbVar6[3];
      uStack_98 = SUB81(pppppppbVar6[2],0);
      uStack_97 = (undefined7)((ulong)pppppppbVar6[2] >> 8);
      pbStack_d0 = (byte *)0x1;
      pppppppbStack_e8 = pppppppbVar23;
      bStack_a8 = bVar7;
      if (bVar7 != 0x10) {
        if (bVar7 != 0x11) {
          if (bVar7 == 0x12) goto LAB_1014460d0;
          FUN_1004b62d4(&bStack_140,&bStack_a8);
          uVar25 = CONCAT62(uStack_13e,CONCAT11(bStack_13f,bStack_140));
          uStack_80 = CONCAT71(uStack_137,uStack_138);
          if (uVar25 == 0x8000000000000000) goto LAB_101445b50;
          uStack_148 = CONCAT71(uStack_12f,uStack_130);
          unaff_x23 = uStack_80;
          goto LAB_1014460dc;
        }
        puVar19 = (undefined8 *)CONCAT71(uStack_9f,uStack_a0);
        uVar17 = *puVar19;
        uStack_138 = (undefined1)puVar19[1];
        uStack_137 = (undefined7)((ulong)puVar19[1] >> 8);
        bStack_140 = (byte)uVar17;
        bStack_13f = (byte)((ulong)uVar17 >> 8);
        uStack_13e = (undefined6)((ulong)uVar17 >> 0x10);
        ppppppbStack_128 = (byte ******)puVar19[3];
        uStack_130 = (undefined1)puVar19[2];
        uStack_12f = (undefined7)((ulong)puVar19[2] >> 8);
        FUN_1004b62d4(&uStack_88,&bStack_140);
        if (uStack_88 != 0x8000000000000000) {
          uStack_148 = uStack_78;
          _free(puVar19);
          unaff_x23 = uStack_80;
          uVar25 = uStack_88;
          goto LAB_1014460dc;
        }
        _free(puVar19);
        goto LAB_101445b50;
      }
LAB_1014460d0:
      FUN_100e077ec(&bStack_a8);
      uVar25 = 0x8000000000000000;
LAB_1014460dc:
      if (lVar26 == 1) {
LAB_1014460f8:
        uVar17 = FUN_1087e422c(1,&UNK_10b22b7e8,&UNK_10b20a590);
LAB_101446114:
        bStack_140 = 1;
        bStack_13f = 0;
        uStack_13e = 0x800000000000;
        uStack_138 = (undefined1)uVar17;
        uStack_137 = (undefined7)((ulong)uVar17 >> 8);
LAB_10144611c:
        if ((uVar25 & 0x7fffffffffffffff) != 0) {
          _free(unaff_x23);
        }
        goto LAB_101445b58;
      }
      pppppppbVar23 = pppppppbVar6 + 8;
      pppppppbStack_e8 = pppppppbVar23;
      if (*(byte *)(pppppppbVar6 + 4) == 0x16) goto LAB_1014460f8;
      uVar17 = *(undefined8 *)((long)pppppppbVar6 + 0x21);
      uStack_137 = (undefined7)*(undefined8 *)((long)pppppppbVar6 + 0x29);
      bStack_13f = (byte)uVar17;
      uStack_13e = (undefined6)((ulong)uVar17 >> 8);
      uStack_138 = (undefined1)((ulong)uVar17 >> 0x38);
      ppppppbStack_128 = pppppppbVar6[7];
      uStack_130 = SUB81(pppppppbVar6[6],0);
      uStack_12f = (undefined7)((ulong)pppppppbVar6[6] >> 8);
      pbStack_d0 = (byte *)0x2;
      bStack_140 = *(byte *)(pppppppbVar6 + 4);
      FUN_1004b60cc(&bStack_a8,&bStack_140);
      ppppppbVar4 = (byte ******)CONCAT62(uStack_a6,CONCAT11(bStack_a7,bStack_a8));
      uVar17 = CONCAT71(uStack_9f,uStack_a0);
      if (ppppppbVar4 == (byte ******)0x8000000000000001) goto LAB_101446114;
      if (lVar26 == 2) {
LAB_101446324:
        pppppppbVar16 = (byte *******)FUN_1087e422c(2,&UNK_10b22b7e8,&UNK_10b20a590);
LAB_10144633c:
        bStack_140 = 1;
        bStack_13f = 0;
        uStack_13e = 0x800000000000;
        uStack_138 = SUB81(pppppppbVar16,0);
        uStack_137 = (undefined7)((ulong)pppppppbVar16 >> 8);
        if (((ulong)ppppppbVar4 & 0x7fffffffffffffff) != 0) {
          _free(uVar17);
        }
        goto LAB_10144611c;
      }
      uVar13 = CONCAT71(uStack_97,uStack_98);
      pppppppbVar23 = pppppppbVar6 + 0xc;
      pppppppbStack_e8 = pppppppbVar23;
      if (*(byte *)(pppppppbVar6 + 8) == 0x16) goto LAB_101446324;
      uVar27 = *(undefined8 *)((long)pppppppbVar6 + 0x41);
      uStack_137 = (undefined7)*(undefined8 *)((long)pppppppbVar6 + 0x49);
      bStack_13f = (byte)uVar27;
      uStack_13e = (undefined6)((ulong)uVar27 >> 8);
      uStack_138 = (undefined1)((ulong)uVar27 >> 0x38);
      ppppppbStack_128 = pppppppbVar6[0xb];
      uStack_130 = SUB81(pppppppbVar6[10],0);
      uStack_12f = (undefined7)((ulong)pppppppbVar6[10] >> 8);
      pbStack_d0 = (byte *)0x3;
      bStack_140 = *(byte *)(pppppppbVar6 + 8);
      FUN_1004b60cc(&bStack_a8,&bStack_140);
      uVar11 = CONCAT62(uStack_a6,CONCAT11(bStack_a7,bStack_a8));
      pppppppbVar16 = (byte *******)CONCAT71(uStack_9f,uStack_a0);
      if (uVar11 == 0x8000000000000001) goto LAB_10144633c;
      uStack_100 = CONCAT71(uStack_97,uStack_98);
      bStack_140 = (byte)uVar25;
      bStack_13f = (byte)(uVar25 >> 8);
      uStack_13e = (undefined6)(uVar25 >> 0x10);
      uStack_138 = (undefined1)unaff_x23;
      uStack_137 = (undefined7)((ulong)unaff_x23 >> 8);
      uStack_130 = (undefined1)uStack_148;
      uStack_12f = (undefined7)((ulong)uStack_148 >> 8);
      ppppppbStack_128 = ppppppbVar4;
      uStack_120 = uVar17;
      uStack_118 = uVar13;
      uStack_110 = uVar11;
      pppppppbStack_108 = pppppppbVar16;
      lVar26 = FUN_100fbc738(&pppppppbStack_f0);
      if (lVar26 == 0) goto LAB_1014461f0;
      bStack_140 = 1;
      bStack_13f = 0;
      uStack_13e = 0x800000000000;
      uStack_138 = (undefined1)lVar26;
      uStack_137 = (undefined7)((ulong)lVar26 >> 8);
      pppppppbVar6 = pppppppbVar16;
      if ((uVar25 & 0x7fffffffffffffff) == 0) {
        if (((ulong)ppppppbVar4 & 0x7fffffffffffffff) != 0) goto LAB_10144649c;
LAB_10144647c:
        uVar5 = uVar11 & 0x7fffffffffffffff;
      }
      else {
        _free(unaff_x23);
        if (((ulong)ppppppbVar4 & 0x7fffffffffffffff) == 0) goto LAB_10144647c;
LAB_10144649c:
        _free(uVar17);
        uVar5 = uVar11 & 0x7fffffffffffffff;
      }
    }
    if (uVar5 != 0) {
      _free(pppppppbVar6);
    }
  }
  else {
    if (bVar8 != 0x15) {
      uVar17 = FUN_108855b04(param_2,&uStack_88,&UNK_10b20c560);
      goto LAB_101446220;
    }
    uStack_c0 = *(undefined8 *)(param_2 + 8);
    pbStack_d0 = *(byte **)(param_2 + 0x10);
    lVar18 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar1 = pbStack_d0 + lVar18;
    pppppppbStack_f0 = (byte *******)CONCAT71(pppppppbStack_f0._1_7_,0x16);
    lStack_b0 = 0;
    lVar26 = 0;
    pbStack_b8 = pbVar1;
    if (*(long *)(param_2 + 0x18) == 0) {
      uStack_158 = 0x8000000000000001;
      ppppppbStack_150 = (byte ******)0x8000000000000001;
      uStack_160 = 0x8000000000000001;
      uStack_188 = 0;
      uStack_190 = 0x16;
      pppppppbStack_198 = (byte *******)&pppppppbStack_f0;
      pbVar22 = pbStack_d0;
      lVar14 = lStack_b0;
    }
    else {
      puVar20 = (undefined8 *)((ulong)&bStack_140 | 1);
      puVar24 = (undefined8 *)((ulong)&pppppppbStack_f0 | 1);
      puVar19 = (undefined8 *)((ulong)&bStack_a8 | 1);
      ppppppbStack_150 = (byte ******)0x8000000000000001;
      uStack_160 = 0x8000000000000001;
      uStack_158 = 0x8000000000000001;
      pbVar9 = pbStack_d0;
      pbStack_c8 = pbStack_d0;
      do {
        pbVar21 = pbVar9 + 0x40;
        bStack_140 = *pbVar9;
        pbVar22 = pbVar21;
        lVar14 = lVar26;
        if (bStack_140 == 0x16) break;
        uVar17 = *(undefined8 *)(pbVar9 + 0x10);
        *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)(pbVar9 + 0x18);
        *(undefined8 *)((long)puVar20 + 0xf) = uVar17;
        uVar17 = *(undefined8 *)(pbVar9 + 1);
        puVar20[1] = *(undefined8 *)(pbVar9 + 9);
        *puVar20 = uVar17;
        pppppppbStack_e8 = *(byte ********)(pbVar9 + 0x28);
        pppppppbStack_f0 = *(byte ********)(pbVar9 + 0x20);
        pppppppbStack_d8 = *(byte ********)(pbVar9 + 0x38);
        uStack_e0 = *(ulong *)(pbVar9 + 0x30);
        plVar3 = (long *)CONCAT71(uStack_137,uStack_138);
        plVar10 = (long *)CONCAT71(uStack_12f,uStack_130);
        if (bStack_140 < 0xd) {
          if (bStack_140 == 1) {
            bStack_a7 = bStack_13f;
            if (2 < bStack_13f) {
              bStack_a7 = 3;
            }
LAB_101445e34:
            bStack_a8 = 0;
            goto LAB_101445e38;
          }
          if (bStack_140 == 4) {
            if ((long *)0x2 < plVar3) {
              plVar3 = (long *)0x3;
            }
            bStack_a7 = (byte)plVar3;
            goto LAB_101445e34;
          }
          if (bStack_140 == 0xc) {
            if (ppppppbStack_128 == (byte ******)0x6) {
              if ((int)*plVar10 != 0x6e617262 || *(short *)((long)plVar10 + 4) != 0x6863)
              goto LAB_101445db4;
              bStack_a7 = 1;
joined_r0x000101446064:
              bStack_a8 = 0;
            }
            else if (ppppppbStack_128 == (byte ******)0xe) {
              if (*plVar10 != 0x6f7469736f706572 ||
                  *(long *)((long)plVar10 + 6) != 0x6c72755f79726f74) goto LAB_101445db4;
              bStack_a7 = 2;
              bStack_a8 = 0;
            }
            else {
              if ((ppppppbStack_128 != (byte ******)0xb) ||
                 (*plVar10 != 0x685f74696d6d6f63 ||
                  *(long *)((long)plVar10 + 3) != 0x687361685f74696d)) {
LAB_101445db4:
                bStack_a7 = 3;
                goto joined_r0x000101446064;
              }
              bStack_a7 = 0;
              bStack_a8 = 0;
            }
joined_r0x000101445d8c:
            if (plVar3 != (long *)0x0) {
              _free(plVar10);
            }
          }
          else {
LAB_101446074:
            uVar17 = FUN_108855b04(&bStack_140,&uStack_88,&UNK_10b2121a0);
            uStack_a0 = (undefined1)uVar17;
            uStack_9f = (undefined7)((ulong)uVar17 >> 8);
            bStack_a8 = 1;
          }
        }
        else {
          if (bStack_140 == 0xd) {
            if (plVar10 == (long *)0x6) {
              if ((int)*plVar3 != 0x6e617262 || *(short *)((long)plVar3 + 4) != 0x6863)
              goto LAB_101445e2c;
              bStack_a7 = 1;
            }
            else if (plVar10 == (long *)0xe) {
              if (*plVar3 != 0x6f7469736f706572 || *(long *)((long)plVar3 + 6) != 0x6c72755f79726f74
                 ) goto LAB_101445e2c;
              bStack_a7 = 2;
            }
            else if ((plVar10 == (long *)0xb) &&
                    (*plVar3 == 0x685f74696d6d6f63 &&
                     *(long *)((long)plVar3 + 3) == 0x687361685f74696d)) {
              bStack_a7 = 0;
            }
            else {
LAB_101445e2c:
              bStack_a7 = 3;
            }
            goto LAB_101445e34;
          }
          if (bStack_140 == 0xe) {
            FUN_100ac2c20(&bStack_a8,plVar10);
            goto joined_r0x000101445d8c;
          }
          if (bStack_140 != 0xf) goto LAB_101446074;
          FUN_100ac2c20(&bStack_a8,plVar3,plVar10);
LAB_101445e38:
          FUN_100e077ec(&bStack_140);
        }
        if ((bStack_a8 & 1) != 0) {
          lStack_b0 = lVar26 + 1;
          uStack_80 = CONCAT71(uStack_9f,uStack_a0);
          pbStack_c8 = pbVar21;
LAB_101446150:
          uStack_138 = (undefined1)uStack_80;
          uStack_137 = (undefined7)((ulong)uStack_80 >> 8);
joined_r0x0001014465f4:
          if ((long)uStack_158 < -0x7ffffffffffffffe) {
            uStack_13e = 0x800000000000;
            bStack_13f = 0;
            bStack_140 = 1;
          }
          else {
joined_r0x0001014465fc:
            uStack_13e = 0x800000000000;
            bStack_13f = 0;
            bStack_140 = 1;
            if (uStack_158 != 0) {
              uStack_13e = 0x800000000000;
              bStack_13f = 0;
              bStack_140 = 1;
              _free(pppppppbStack_198);
            }
          }
LAB_10144660c:
          if ((-0x7fffffffffffffff < (long)ppppppbStack_150) &&
             (ppppppbStack_150 != (byte ******)0x0)) {
            _free(uStack_190);
          }
          if ((-0x7fffffffffffffff < (long)uStack_160) && (uStack_160 != 0)) {
            _free(uStack_188);
          }
          FUN_100d34830(&pbStack_d0);
          if ((byte)pppppppbStack_f0 != '\x16') {
            FUN_100e077ec(&pppppppbStack_f0);
          }
          goto LAB_1014461f0;
        }
        bVar7 = (byte)pppppppbStack_f0;
        if (bStack_a7 < 2) {
          if (bStack_a7 == 0) {
            if (uStack_160 == 0x8000000000000001) {
              pppppppbStack_f0 = (byte *******)CONCAT71(pppppppbStack_f0._1_7_,0x16);
              if (bVar7 == 0x16) {
                lStack_b0 = lVar26 + 1;
                pbStack_c8 = pbVar21;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                goto LAB_1014466f8;
              }
              uVar17 = *puVar24;
              puVar19[1] = puVar24[1];
              *puVar19 = uVar17;
              uVar17 = *(undefined8 *)((long)puVar24 + 0xf);
              *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar24 + 0x17);
              *(undefined8 *)((long)puVar19 + 0xf) = uVar17;
              bStack_a8 = bVar7;
              if (bVar7 == 0x10) {
LAB_101445eac:
                FUN_100e077ec(&bStack_a8);
                uStack_160 = 0x8000000000000000;
              }
              else {
                if (bVar7 == 0x11) {
                  puVar12 = (undefined8 *)CONCAT71(uStack_9f,uStack_a0);
                  uVar17 = *puVar12;
                  uStack_138 = (undefined1)puVar12[1];
                  uStack_137 = (undefined7)((ulong)puVar12[1] >> 8);
                  bStack_140 = (byte)uVar17;
                  bStack_13f = (byte)((ulong)uVar17 >> 8);
                  uStack_13e = (undefined6)((ulong)uVar17 >> 0x10);
                  ppppppbStack_128 = (byte ******)puVar12[3];
                  uStack_130 = (undefined1)puVar12[2];
                  uStack_12f = (undefined7)((ulong)puVar12[2] >> 8);
                  FUN_1004b62d4(&uStack_88,&bStack_140);
                  unaff_x22 = uStack_78;
                  uStack_1a0 = uStack_80;
                  if (uStack_88 != 0x8000000000000000) {
                    uStack_160 = uStack_88;
                    _free(puVar12);
                    uStack_188 = uStack_1a0;
                    goto LAB_101445bb8;
                  }
                  lStack_b0 = lVar26 + 1;
                  pbStack_c8 = pbVar21;
                  _free(puVar12);
LAB_1014463e4:
                  uStack_160 = 0x8000000000000001;
                  goto LAB_101446150;
                }
                if (bVar7 == 0x12) goto LAB_101445eac;
                FUN_1004b62d4(&bStack_140,&bStack_a8);
                uStack_160 = CONCAT62(uStack_13e,CONCAT11(bStack_13f,bStack_140));
                uStack_1a0 = CONCAT71(uStack_137,uStack_138);
                if (uStack_160 == 0x8000000000000000) {
                  lStack_b0 = lVar26 + 1;
                  uStack_80 = uStack_1a0;
                  pbStack_c8 = pbVar21;
                  goto LAB_1014463e4;
                }
                unaff_x22 = CONCAT71(uStack_12f,uStack_130);
              }
              uStack_188 = uStack_1a0;
              goto LAB_101445bb8;
            }
            lStack_b0 = lVar26 + 1;
            bStack_a8 = 0xbf;
            bStack_a7 = 0xf1;
            uStack_a6 = 0x108ca;
            uStack_a0 = 0xb;
            uStack_9f = 0;
            bStack_140 = (byte)&bStack_a8;
            bStack_13f = (byte)((ulong)&bStack_a8 >> 8);
            uStack_13e = (undefined6)((ulong)&bStack_a8 >> 0x10);
            uStack_138 = 0xa0;
            uStack_137 = 0x100c7b3;
            pbStack_c8 = pbVar21;
            uVar17 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_140);
          }
          else {
            if (ppppppbStack_150 == (byte ******)0x8000000000000001) {
              pppppppbStack_f0 = (byte *******)CONCAT71(pppppppbStack_f0._1_7_,0x16);
              if (bVar7 == 0x16) {
                lStack_b0 = lVar26 + 1;
                pbStack_c8 = pbVar21;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                goto LAB_1014466f8;
              }
              uVar17 = *puVar24;
              puVar20[1] = puVar24[1];
              *puVar20 = uVar17;
              uVar17 = *(undefined8 *)((long)puVar24 + 0xf);
              *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar24 + 0x17);
              *(undefined8 *)((long)puVar20 + 0xf) = uVar17;
              bStack_140 = bVar7;
              FUN_1004b60cc(&bStack_a8,&bStack_140);
              ppppppbStack_150 = (byte ******)CONCAT62(uStack_a6,CONCAT11(bStack_a7,bStack_a8));
              if (ppppppbStack_150 == (byte ******)0x8000000000000001) {
                lStack_b0 = lVar26 + 1;
                uStack_80 = CONCAT71(uStack_9f,uStack_a0);
                ppppppbStack_150 = (byte ******)0x8000000000000001;
                pbStack_c8 = pbVar21;
                goto LAB_101446150;
              }
              uStack_190 = CONCAT71(uStack_9f,uStack_a0);
              unaff_x27 = CONCAT71(uStack_97,uStack_98);
              goto LAB_101445bb8;
            }
            lStack_b0 = lVar26 + 1;
            bStack_a8 = 0xca;
            bStack_a7 = 0xf1;
            uStack_a6 = 0x108ca;
            uStack_a0 = 6;
            uStack_9f = 0;
            bStack_140 = (byte)&bStack_a8;
            bStack_13f = (byte)((ulong)&bStack_a8 >> 8);
            uStack_13e = (undefined6)((ulong)&bStack_a8 >> 0x10);
            uStack_138 = 0xa0;
            uStack_137 = 0x100c7b3;
            pbStack_c8 = pbVar21;
            uVar17 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_140);
          }
          uStack_138 = (undefined1)uVar17;
          uStack_137 = (undefined7)((ulong)uVar17 >> 8);
          goto joined_r0x0001014465f4;
        }
        if (bStack_a7 == 2) {
          if (uStack_158 != 0x8000000000000001) {
            lStack_b0 = lVar26 + 1;
            bStack_a8 = 0xd0;
            bStack_a7 = 0xf1;
            uStack_a6 = 0x108ca;
            uStack_a0 = 0xe;
            uStack_9f = 0;
            bStack_140 = (byte)&bStack_a8;
            bStack_13f = (byte)((ulong)&bStack_a8 >> 8);
            uStack_13e = (undefined6)((ulong)&bStack_a8 >> 0x10);
            uStack_138 = 0xa0;
            uStack_137 = 0x100c7b3;
            pbStack_c8 = pbVar21;
            uVar17 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_140);
            uStack_138 = (undefined1)uVar17;
            uStack_137 = (undefined7)((ulong)uVar17 >> 8);
            uStack_158 = uStack_158 & 0x7fffffffffffffff;
            goto joined_r0x0001014465fc;
          }
          pppppppbStack_f0 = (byte *******)CONCAT71(pppppppbStack_f0._1_7_,0x16);
          if (bVar7 == 0x16) {
            lStack_b0 = lVar26 + 1;
            pbStack_c8 = pbVar21;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_1014466f8;
          }
          uVar17 = *puVar24;
          puVar20[1] = puVar24[1];
          *puVar20 = uVar17;
          uVar17 = *(undefined8 *)((long)puVar24 + 0xf);
          *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar24 + 0x17);
          *(undefined8 *)((long)puVar20 + 0xf) = uVar17;
          bStack_140 = bVar7;
          FUN_1004b60cc(&bStack_a8,&bStack_140);
          uStack_158 = CONCAT62(uStack_a6,CONCAT11(bStack_a7,bStack_a8));
          if (uStack_158 != 0x8000000000000001) {
            pppppppbStack_198 = (byte *******)CONCAT71(uStack_9f,uStack_a0);
            unaff_x21 = CONCAT71(uStack_97,uStack_98);
            goto LAB_101445bb8;
          }
          lStack_b0 = lVar26 + 1;
          bStack_140 = 1;
          bStack_13f = 0;
          uStack_13e = 0x800000000000;
          uStack_138 = uStack_a0;
          uStack_137 = uStack_9f;
          pbStack_c8 = pbVar21;
          goto LAB_10144660c;
        }
        pppppppbStack_f0 = (byte *******)CONCAT71(pppppppbStack_f0._1_7_,0x16);
        if (bVar7 == 0x16) {
          lStack_b0 = lVar26 + 1;
          pbStack_c8 = pbVar21;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1014466f8:
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x1014466fc);
          (*pcVar15)();
        }
        uVar17 = *puVar24;
        puVar20[1] = puVar24[1];
        *puVar20 = uVar17;
        uVar17 = *(undefined8 *)((long)puVar24 + 0xf);
        *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar24 + 0x17);
        *(undefined8 *)((long)puVar20 + 0xf) = uVar17;
        bStack_140 = bVar7;
        FUN_100e077ec(&bStack_140);
LAB_101445bb8:
        lVar26 = lVar26 + 1;
        pbVar22 = pbVar1;
        pbVar9 = pbVar21;
        lVar14 = (lVar18 - 0x40U >> 6) + 1;
      } while (pbVar21 != pbVar1);
    }
    lStack_b0 = lVar14;
    lVar26 = lStack_b0;
    uVar5 = 0x8000000000000000;
    if (uStack_160 != 0x8000000000000001) {
      uVar5 = uStack_160;
    }
    bStack_140 = (byte)uVar5;
    bStack_13f = (byte)(uVar5 >> 8);
    uStack_13e = (undefined6)(uVar5 >> 0x10);
    uStack_138 = (undefined1)uStack_188;
    uStack_137 = (undefined7)((ulong)uStack_188 >> 8);
    ppppppbVar4 = (byte ******)0x8000000000000000;
    if (ppppppbStack_150 != (byte ******)0x8000000000000001) {
      ppppppbVar4 = ppppppbStack_150;
    }
    uVar25 = 0x8000000000000000;
    if (uStack_158 != 0x8000000000000001) {
      uVar25 = uStack_158;
    }
    uStack_130 = (undefined1)unaff_x22;
    uStack_12f = (undefined7)((ulong)unaff_x22 >> 8);
    ppppppbStack_128 = ppppppbVar4;
    uStack_120 = uStack_190;
    uStack_118 = unaff_x27;
    uStack_110 = uVar25;
    pppppppbStack_108 = pppppppbStack_198;
    uStack_100 = unaff_x21;
    pbStack_c8 = pbVar22;
    FUN_100d34830(&pbStack_d0);
    if (pbVar1 != pbVar22) {
      bStack_a8 = (byte)lVar26;
      bStack_a7 = (byte)((ulong)lVar26 >> 8);
      uStack_a6 = (undefined6)((ulong)lVar26 >> 0x10);
      uVar17 = FUN_1087e422c(((ulong)((long)pbVar1 - (long)pbVar22) >> 6) + lVar26,&bStack_a8,
                             &UNK_10b23a190);
      bStack_140 = 1;
      bStack_13f = 0;
      uStack_13e = 0x800000000000;
      uStack_138 = (undefined1)uVar17;
      uStack_137 = (undefined7)((ulong)uVar17 >> 8);
      if ((uVar5 & 0x7fffffffffffffff) != 0) {
        _free(uStack_188);
      }
      if (((ulong)ppppppbVar4 & 0x7fffffffffffffff) != 0) {
        _free(uStack_190);
      }
      if ((uVar25 & 0x7fffffffffffffff) != 0) {
        _free(pppppppbStack_198);
      }
    }
  }
LAB_1014461f0:
  if ((bVar8 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  if (CONCAT62(uStack_13e,CONCAT11(bStack_13f,bStack_140)) != -0x7fffffffffffffff) {
    param_1[5] = uStack_118;
    param_1[4] = uStack_120;
    param_1[7] = pppppppbStack_108;
    param_1[6] = uStack_110;
    param_1[8] = uStack_100;
    param_1[1] = CONCAT71(uStack_137,uStack_138);
    *param_1 = CONCAT62(uStack_13e,CONCAT11(bStack_13f,bStack_140));
    param_1[3] = ppppppbStack_128;
    param_1[2] = CONCAT71(uStack_12f,uStack_130);
    return;
  }
  uVar17 = CONCAT71(uStack_137,uStack_138);
LAB_101446220:
  *param_1 = 0x8000000000000002;
  param_1[1] = uVar17;
  return;
}

