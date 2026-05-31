
undefined1  [16] FUN_1055971bc(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined *extraout_x1;
  undefined *extraout_x1_00;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  char *pcVar18;
  undefined *extraout_x8;
  ulong *extraout_x8_00;
  long lVar19;
  byte *pbVar20;
  uint extraout_w9;
  undefined *extraout_x9;
  long lVar21;
  long lVar22;
  byte *pbVar23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
  byte *pbVar27;
  uint uVar28;
  undefined *extraout_x13;
  uint uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  int aiStack_88 [2];
  undefined *puStack_80;
  byte bStack_70;
  undefined1 uStack_6f;
  byte bStack_6e;
  undefined5 uStack_6d;
  ulong uStack_68;
  undefined *puStack_60;
  undefined *puStack_50;
  long lStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  __ZN4core3str7pattern11StrSearcher3new17h644cd50388149c5cE(aiStack_88);
  auVar39._8_8_ = puStack_38;
  auVar39._0_8_ = lStack_40;
  if (aiStack_88[0] == 1) {
    puVar25 = puStack_28 + -1;
    if (puStack_50 == (undefined *)0xffffffffffffffff) {
      puVar16 = puStack_60 + (long)puVar25;
      if (puVar16 < puStack_38) {
        puVar17 = puStack_80;
        if (puStack_80 <= puStack_28) {
          puVar17 = puStack_28;
        }
        puVar14 = puStack_60;
        if (puStack_80 + -1 < puStack_28) {
LAB_10559735c:
          if ((uStack_68 >> ((ulong)(byte)puVar16[lStack_40] & 0x3f) & 1) == 0) {
            puVar14 = puVar14 + (long)puStack_28;
          }
          else {
            lVar22 = -(long)puVar14;
            puVar16 = puStack_80 + (long)puVar14;
            lVar15 = (long)puVar17 - (long)puStack_80;
            pcVar18 = puStack_80 + lStack_30;
            do {
              if (lVar15 == 0) {
                puVar16 = puStack_80;
                goto LAB_1055973b0;
              }
              if (puStack_38 <= puVar16) goto LAB_1055975d0;
              cVar4 = *pcVar18;
              pcVar1 = puVar16 + lStack_40;
              lVar22 = lVar22 + -1;
              puVar16 = puVar16 + 1;
              lVar15 = lVar15 + -1;
              pcVar18 = pcVar18 + 1;
            } while (cVar4 == *pcVar1);
            puVar14 = (undefined *)-lVar22;
          }
          goto LAB_10559734c;
        }
        do {
          while (lVar15 = lStack_30, puStack_60 = puVar14, puVar11 = puVar17,
                (uStack_68 >> ((ulong)(byte)puVar16[lStack_40] & 0x3f) & 1) == 0) {
            puVar14 = puVar14 + (long)puStack_28;
            uVar10 = 0;
            puVar16 = puVar14 + (long)puVar25;
            puStack_60 = puVar14;
            if (puStack_38 <= puVar16) goto LAB_105597584;
          }
          do {
            if (puStack_80 == puVar11) {
              if (puStack_80 == (undefined *)0x0) goto LAB_105597580;
              puVar14 = &UNK_10b390c08;
              auVar39 = func_0x000108a07bdc(puStack_80 + -1,puStack_28);
              puStack_80 = puVar14;
              uVar28 = extraout_w9;
              goto LAB_1055974f4;
            }
            if (puStack_38 <= puStack_80 + (long)puStack_60) goto LAB_1055975d0;
            pcVar18 = puStack_80 + lVar15;
            pcVar1 = puStack_80 + lStack_40 + (long)puStack_60;
            puStack_60 = puStack_60 + 1;
            lVar15 = lVar15 + 1;
            puVar11 = puVar11 + -1;
          } while (*pcVar18 == *pcVar1);
          uVar10 = 0;
          puVar16 = puStack_60 + (long)puVar25;
          puVar14 = puStack_60;
        } while (puVar16 < puStack_38);
        goto LAB_105597584;
      }
    }
    else {
      puVar14 = puStack_60 + (long)puVar25;
      if (puVar14 < puStack_38) {
        lVar15 = CONCAT53(uStack_6d,CONCAT12(bStack_6e,CONCAT11(uStack_6f,bStack_70)));
LAB_105597268:
        if ((uStack_68 >> ((ulong)(byte)puVar14[lStack_40] & 0x3f) & 1) == 0) {
          puStack_50 = (undefined *)0x0;
          puStack_60 = puStack_60 + (long)puStack_28;
        }
        else {
          puVar14 = puStack_50;
          if (puStack_50 <= puStack_80) {
            puVar14 = puStack_80;
          }
          puVar17 = puStack_60 + (long)puVar14;
          puVar16 = puVar17 + -(long)puStack_80;
          pcVar18 = puVar14 + lStack_30;
          lVar22 = 0;
          if (puVar14 <= puStack_28) {
            lVar22 = (long)puStack_28 - (long)puVar14;
          }
          do {
            puVar11 = puStack_80;
            if (lVar22 == 0) goto LAB_1055972c4;
            if (puStack_38 <= puVar17) {
              puVar25 = puStack_38;
              if (puStack_38 <= puVar14 + (long)puStack_60) {
                puVar25 = puVar14 + (long)puStack_60;
              }
              func_0x000108a07bdc(puVar25,puStack_38,&UNK_10b390c38);
              puStack_38 = extraout_x1;
              puVar14 = extraout_x9;
              goto LAB_1055975b0;
            }
            cVar4 = *pcVar18;
            pcVar1 = puVar17 + lStack_40;
            puVar16 = puVar16 + 1;
            puVar17 = puVar17 + 1;
            pcVar18 = pcVar18 + 1;
            lVar22 = lVar22 + -1;
          } while (cVar4 == *pcVar1);
          puStack_60 = puVar16;
          puStack_50 = (undefined *)0x0;
        }
        goto LAB_105597254;
      }
    }
  }
  else {
    puStack_60 = param_3;
    if ((bStack_6e & 1) == 0) {
      puVar14 = puStack_80;
      if (puStack_80 == (undefined *)0x0) {
LAB_1055973e8:
        if (puStack_80 == puStack_38) {
          uVar10 = (ulong)bStack_70 & 1;
          puStack_60 = puStack_80;
          goto LAB_105597584;
        }
        pbVar23 = puStack_80 + lStack_40;
        uVar28 = (uint)*pbVar23;
        if ((char)*pbVar23 < '\0') {
          if (uVar28 < 0xe0) {
            uVar28 = pbVar23[1] & 0x3f | (uVar28 & 0x1f) << 6;
          }
          else {
            uVar29 = pbVar23[2] & 0x3f | (pbVar23[1] & 0x3f) << 6;
            if (uVar28 < 0xf0) {
              uVar28 = uVar29 | (uVar28 & 0x1f) << 0xc;
            }
            else {
              uVar28 = pbVar23[3] & 0x3f | uVar29 << 6 | (uVar28 & 7) << 0x12;
            }
          }
        }
        if ((bStack_70 & 1) == 0) {
          if (uVar28 < 0x80) {
            lVar15 = 1;
          }
          else {
LAB_1055974f4:
            if (uVar28 < 0x800) {
              lVar15 = 2;
            }
            else {
              lVar15 = 3;
              if (0xffff < uVar28) {
                lVar15 = 4;
              }
            }
          }
          puVar14 = puStack_80 + lVar15;
          if (puVar14 != (undefined *)0x0) {
            uVar9 = puVar14 == auVar39._8_8_;
            if (auVar39._8_8_ <= puVar14) goto LAB_10559754c;
            uVar9 = puVar14[auVar39._0_8_] == -0x40;
            if ((char)puVar14[auVar39._0_8_] < -0x40) goto LAB_10559753c;
          }
          goto LAB_105597550;
        }
      }
      else {
        if (puStack_80 < puStack_38) {
          uVar9 = puStack_80[lStack_40] == -0x40;
          if (-0x41 < (char)puStack_80[lStack_40]) goto LAB_1055973e8;
        }
        else {
          uVar9 = 0;
          if (puStack_80 == puStack_38) goto LAB_1055973e8;
        }
LAB_10559753c:
        do {
          auVar39 = __ZN4core3str16slice_error_fail17h7d5f7302866db666E();
LAB_10559754c:
        } while (!(bool)uVar9);
LAB_105597550:
        if (puVar14 == auVar39._8_8_) {
          uVar10 = 1;
          puStack_60 = auVar39._8_8_;
          goto LAB_105597584;
        }
      }
LAB_105597580:
      uVar10 = 1;
      puStack_60 = puVar14;
      goto LAB_105597584;
    }
  }
  uVar10 = 0;
LAB_105597584:
  auVar37._8_8_ = puStack_60;
  auVar37._0_8_ = uVar10;
  return auVar37;
  while( true ) {
    auVar38._8_8_ = puStack_38;
    auVar38._0_8_ = puVar14 + (long)puVar16 + -1;
    if (puStack_38 <= puVar14 + (long)puVar16 + -1) goto LAB_1055975e8;
    pcVar18 = puVar16 + lStack_30 + -1;
    puVar11 = puVar14 + lStack_40 + (long)puVar16;
    puVar16 = puVar16 + -1;
    if (*pcVar18 != puVar11[-1]) break;
LAB_1055973b0:
    if (puVar16 == (undefined *)0x0) goto LAB_105597580;
  }
  puVar14 = puVar14 + CONCAT53(uStack_6d,CONCAT12(bStack_6e,CONCAT11(uStack_6f,bStack_70)));
LAB_10559734c:
  uVar10 = 0;
  puVar16 = puVar14 + (long)puVar25;
  puStack_60 = puVar14;
  if (puStack_38 <= puVar16) goto LAB_105597584;
  goto LAB_10559735c;
  while( true ) {
    puVar11 = puVar11 + -1;
    if (puStack_28 <= puVar11) goto LAB_1055975c0;
    puVar14 = puVar11 + (long)puStack_60;
    if (puStack_38 <= puVar14) goto LAB_1055975b0;
    if (puVar11[lStack_30] != puVar14[lStack_40]) break;
LAB_1055972c4:
    puVar14 = puStack_60;
    if (puVar11 <= puStack_50) goto LAB_105597580;
  }
  puStack_60 = puStack_60 + lVar15;
  puStack_50 = puStack_28 + -lVar15;
LAB_105597254:
  uVar10 = 0;
  puVar14 = puStack_60 + (long)puVar25;
  if (puStack_38 <= puVar14) goto LAB_105597584;
  goto LAB_105597268;
LAB_1055975b0:
  puVar11 = (undefined *)func_0x000108a07bdc(puVar14,puStack_38,&UNK_10b390c20);
  puStack_28 = extraout_x8;
LAB_1055975c0:
  puVar14 = &UNK_10b390c08;
  func_0x000108a07bdc(puVar11,puStack_28);
  puStack_38 = extraout_x1_00;
  puStack_80 = extraout_x13;
LAB_1055975d0:
  puVar25 = puStack_38;
  if (puStack_38 <= puVar14 + (long)puStack_80) {
    puVar25 = puVar14 + (long)puStack_80;
  }
  auVar38 = func_0x000108a07bdc(puVar25,puStack_38,&UNK_10b390c38);
LAB_1055975e8:
  auVar39 = func_0x000108a07bdc(auVar38._0_8_,auVar38._8_8_,&UNK_10b390c20);
  uVar10 = auVar39._8_8_;
  lStack_108 = 0;
  lStack_100 = 1;
  lStack_f8 = 0;
  if (uVar10 == 0) {
    bVar8 = true;
  }
  else {
    uVar12 = uVar10 >> 2;
    if ((uVar10 & 3) != 0) {
      uVar12 = uVar12 + 1;
    }
    FUN_108a060a4(&lStack_108,0,uVar12);
    pbVar23 = auVar39._0_8_;
    do {
      lVar15 = lStack_f8;
      pbVar20 = pbVar23 + 1;
      uVar28 = (uint)*pbVar23;
      if ((char)*pbVar23 < '\0') {
        if (uVar28 < 0xe0) {
          pbVar20 = pbVar23 + 2;
          uVar28 = pbVar23[1] & 0x3f | (uVar28 & 0x1f) << 6;
        }
        else {
          uVar29 = pbVar23[2] & 0x3f | (pbVar23[1] & 0x3f) << 6;
          if (uVar28 < 0xf0) {
            pbVar20 = pbVar23 + 3;
            uVar28 = uVar29 | (uVar28 & 0x1f) << 0xc;
          }
          else {
            uVar28 = pbVar23[3] & 0x3f | uVar29 << 6 | (uVar28 & 7) << 0x12;
            if (uVar28 == 0x110000) break;
            pbVar20 = pbVar23 + 4;
          }
        }
      }
      if (uVar28 - 0x30 < 10 || (uVar28 & 0x1fffdf) - 0x41 < 0x1a) {
        uVar12 = 3;
        if (0xffff < uVar28) {
          uVar12 = 4;
        }
        uVar3 = 2;
        if (0x7ff < uVar28) {
          uVar3 = uVar12;
        }
        bVar8 = uVar28 < 0x80;
        uVar12 = 1;
        if (!bVar8) {
          uVar12 = uVar3;
        }
      }
      else {
        if (0x32 < uVar28 - 0x2d || (1L << ((ulong)(uVar28 - 0x2d) & 0x3f) & 0x4000000000007U) == 0)
        {
          uVar28 = 0x5f;
        }
        bVar8 = true;
        uVar12 = 1;
      }
      if ((ulong)(lStack_108 - lStack_f8) < uVar12) {
        FUN_108a060a4(&lStack_108,lStack_f8);
        pbVar23 = (byte *)(lStack_100 + lStack_f8);
        if (!bVar8) goto LAB_105597a8c;
LAB_105597978:
        *pbVar23 = (byte)uVar28;
      }
      else {
        pbVar23 = (byte *)(lStack_100 + lStack_f8);
        if (bVar8) goto LAB_105597978;
LAB_105597a8c:
        bVar5 = (byte)uVar28 & 0x3f | 0x80;
        if (uVar28 < 0x800) {
          *pbVar23 = (byte)(uVar28 >> 6) | 0xc0;
          pbVar23[1] = bVar5;
        }
        else {
          bVar6 = (byte)(uVar28 >> 6) & 0x3f | 0x80;
          if (uVar28 < 0x10000) {
            *pbVar23 = (byte)(uVar28 >> 0xc) | 0xe0;
            pbVar23[1] = bVar6;
            pbVar23[2] = bVar5;
          }
          else {
            *pbVar23 = (byte)(uVar28 >> 0x12) | 0xf0;
            pbVar23[1] = (byte)(uVar28 >> 0xc) & 0x3f | 0x80;
            pbVar23[2] = bVar6;
            pbVar23[3] = bVar5;
          }
        }
      }
      lStack_f8 = uVar12 + lVar15;
      pbVar23 = pbVar20;
    } while (pbVar20 != auVar39._0_8_ + uVar10);
    bVar8 = lStack_108 == 0;
  }
  lVar15 = lStack_100;
  lVar22 = 0;
  do {
    lVar19 = lVar22;
    if (lVar19 == lStack_f8) {
      lVar22 = 0;
      lVar19 = 0;
      lVar24 = lStack_f8;
      break;
    }
    pbVar20 = (byte *)(lStack_100 + lVar19);
    pbVar23 = pbVar20 + 1;
    uVar28 = (uint)*pbVar20;
    if ((char)*pbVar20 < '\0') {
      if (uVar28 < 0xe0) {
        pbVar23 = pbVar20 + 2;
        uVar28 = pbVar20[1] & 0x3f | (uVar28 & 0x1f) << 6;
      }
      else {
        uVar29 = pbVar20[2] & 0x3f | (pbVar20[1] & 0x3f) << 6;
        if (uVar28 < 0xf0) {
          pbVar23 = pbVar20 + 3;
          uVar28 = uVar29 | (uVar28 & 0x1f) << 0xc;
        }
        else {
          pbVar23 = pbVar20 + 4;
          uVar28 = pbVar20[3] & 0x3f | uVar29 << 6 | (uVar28 & 7) << 0x12;
        }
      }
    }
    lVar22 = (long)pbVar23 - lStack_100;
    lVar24 = lVar22;
  } while (uVar28 == 0x5f);
  lVar2 = lStack_f8;
  do {
    lVar21 = lVar2;
    lVar26 = lVar22;
    if (lVar24 == lVar21) break;
    lVar2 = lStack_100 + lVar21;
    pbVar23 = (byte *)(lVar2 + -1);
    uVar28 = (uint)(char)*pbVar23;
    if ((int)uVar28 < 0) {
      pbVar23 = (byte *)(lVar2 + -2);
      bVar5 = *pbVar23;
      if ((char)bVar5 < -0x40) {
        pbVar23 = (byte *)(lVar2 + -3);
        bVar6 = *pbVar23;
        if ((char)bVar6 < -0x40) {
          pbVar23 = (byte *)(lVar2 + -4);
          uVar29 = bVar6 & 0x3f | (*pbVar23 & 7) << 6;
        }
        else {
          uVar29 = (int)(char)bVar6 & 0xf;
        }
        uVar29 = bVar5 & 0x3f | uVar29 << 6;
      }
      else {
        uVar29 = (int)(char)bVar5 & 0x1f;
      }
      uVar28 = uVar28 & 0x3f | uVar29 << 6;
    }
    lVar2 = (long)pbVar23 - lStack_100;
    lVar26 = lVar21;
  } while (uVar28 == 0x5f);
  uVar10 = lVar26 - lVar19;
  if (uVar10 == 0) {
LAB_10559776c:
    uVar10 = 0xb;
    auVar39 = _malloc(0xb);
    puVar13 = auVar39._0_8_;
    if (puVar13 != (undefined8 *)0x0) {
      *(undefined4 *)((long)puVar13 + 7) = 0x64656966;
      *puVar13 = 0x6669636570736e75;
      *extraout_x8_00 = 0xb;
      extraout_x8_00[1] = (ulong)puVar13;
      extraout_x8_00[2] = 0xb;
joined_r0x0001055978a4:
      if (bVar8) {
        return auVar39;
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar39 = (*(code *)PTR__free_10b61b0a8)(lVar15);
      return auVar39;
    }
  }
  else {
    pbVar23 = (byte *)(lStack_100 + lVar19);
    pbVar20 = pbVar23;
    do {
      if (pbVar20 == (byte *)(lStack_100 + lVar26)) goto LAB_10559776c;
      pbVar27 = pbVar20 + 1;
      uVar28 = (uint)*pbVar20;
      if ((char)*pbVar20 < '\0') {
        if (uVar28 < 0xe0) {
          pbVar27 = pbVar20 + 2;
          uVar28 = pbVar20[1] & 0x3f | (uVar28 & 0x1f) << 6;
        }
        else {
          uVar29 = pbVar20[2] & 0x3f | (pbVar20[1] & 0x3f) << 6;
          if (uVar28 < 0xf0) {
            pbVar27 = pbVar20 + 3;
            uVar28 = uVar29 | (uVar28 & 0x1f) << 0xc;
          }
          else {
            uVar28 = pbVar20[3] & 0x3f | uVar29 << 6 | (uVar28 & 7) << 0x12;
            if (uVar28 == 0x110000) goto LAB_10559776c;
            pbVar27 = pbVar20 + 4;
          }
        }
      }
      pbVar20 = pbVar27;
    } while (9 < uVar28 - 0x30 && 0x19 < (uVar28 & 0x1fffdf) - 0x41);
    if (uVar10 < 0x101) {
      uVar12 = _malloc(uVar10);
      if (uVar12 != 0) {
        auVar39 = _memcpy(uVar12,pbVar23,uVar10);
        *extraout_x8_00 = uVar10;
        extraout_x8_00[1] = uVar12;
        extraout_x8_00[2] = uVar10;
        goto joined_r0x0001055978a4;
      }
    }
    else {
      if ((char)pbVar23[0x100] < -0x40) {
        __ZN4core3str16slice_error_fail17h7d5f7302866db666E(pbVar23,uVar10,0,0x100,&UNK_10b390c68);
        goto LAB_105597b68;
      }
      uVar10 = 0x100;
      auVar39 = _malloc(0x100);
      puVar13 = auVar39._0_8_;
      if (puVar13 != (undefined8 *)0x0) {
        uVar31 = *(undefined8 *)(pbVar23 + 8);
        uVar30 = *(undefined8 *)pbVar23;
        uVar33 = *(undefined8 *)(pbVar23 + 0x18);
        uVar32 = *(undefined8 *)(pbVar23 + 0x10);
        uVar34 = *(undefined8 *)(pbVar23 + 0x20);
        uVar36 = *(undefined8 *)(pbVar23 + 0x38);
        uVar35 = *(undefined8 *)(pbVar23 + 0x30);
        puVar13[5] = *(undefined8 *)(pbVar23 + 0x28);
        puVar13[4] = uVar34;
        puVar13[7] = uVar36;
        puVar13[6] = uVar35;
        puVar13[1] = uVar31;
        *puVar13 = uVar30;
        puVar13[3] = uVar33;
        puVar13[2] = uVar32;
        uVar31 = *(undefined8 *)(pbVar23 + 0x48);
        uVar30 = *(undefined8 *)(pbVar23 + 0x40);
        uVar33 = *(undefined8 *)(pbVar23 + 0x58);
        uVar32 = *(undefined8 *)(pbVar23 + 0x50);
        uVar34 = *(undefined8 *)(pbVar23 + 0x60);
        uVar36 = *(undefined8 *)(pbVar23 + 0x78);
        uVar35 = *(undefined8 *)(pbVar23 + 0x70);
        puVar13[0xd] = *(undefined8 *)(pbVar23 + 0x68);
        puVar13[0xc] = uVar34;
        puVar13[0xf] = uVar36;
        puVar13[0xe] = uVar35;
        puVar13[9] = uVar31;
        puVar13[8] = uVar30;
        puVar13[0xb] = uVar33;
        puVar13[10] = uVar32;
        uVar31 = *(undefined8 *)(pbVar23 + 0x88);
        uVar30 = *(undefined8 *)(pbVar23 + 0x80);
        uVar33 = *(undefined8 *)(pbVar23 + 0x98);
        uVar32 = *(undefined8 *)(pbVar23 + 0x90);
        uVar34 = *(undefined8 *)(pbVar23 + 0xa0);
        uVar36 = *(undefined8 *)(pbVar23 + 0xb8);
        uVar35 = *(undefined8 *)(pbVar23 + 0xb0);
        puVar13[0x15] = *(undefined8 *)(pbVar23 + 0xa8);
        puVar13[0x14] = uVar34;
        puVar13[0x17] = uVar36;
        puVar13[0x16] = uVar35;
        puVar13[0x11] = uVar31;
        puVar13[0x10] = uVar30;
        puVar13[0x13] = uVar33;
        puVar13[0x12] = uVar32;
        uVar31 = *(undefined8 *)(pbVar23 + 200);
        uVar30 = *(undefined8 *)(pbVar23 + 0xc0);
        uVar33 = *(undefined8 *)(pbVar23 + 0xd8);
        uVar32 = *(undefined8 *)(pbVar23 + 0xd0);
        uVar34 = *(undefined8 *)(pbVar23 + 0xe0);
        uVar36 = *(undefined8 *)(pbVar23 + 0xf8);
        uVar35 = *(undefined8 *)(pbVar23 + 0xf0);
        puVar13[0x1d] = *(undefined8 *)(pbVar23 + 0xe8);
        puVar13[0x1c] = uVar34;
        puVar13[0x1f] = uVar36;
        puVar13[0x1e] = uVar35;
        puVar13[0x19] = uVar31;
        puVar13[0x18] = uVar30;
        puVar13[0x1b] = uVar33;
        puVar13[0x1a] = uVar32;
        *extraout_x8_00 = 0x100;
        extraout_x8_00[1] = (ulong)puVar13;
        extraout_x8_00[2] = 0x100;
        goto joined_r0x0001055978a4;
      }
    }
  }
  func_0x0001087c9084(1,uVar10);
LAB_105597b68:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x105597b6c);
  (*pcVar7)();
}

