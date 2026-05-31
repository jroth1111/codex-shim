
/* WARNING: Type propagation algorithm not settling */

void FUN_10121b158(ulong *param_1,char *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  char cVar12;
  ulong *puVar13;
  int *piVar14;
  char *pcVar15;
  undefined **ppuVar16;
  byte *extraout_x10;
  ulong uVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  long lVar22;
  undefined8 *puVar23;
  ulong uVar24;
  byte *pbVar25;
  undefined8 *puVar26;
  undefined *puVar27;
  ulong unaff_x24;
  undefined **ppuVar28;
  undefined *puVar29;
  long lVar30;
  undefined **ppuVar31;
  undefined ***pppuVar32;
  byte *pbVar33;
  long lVar34;
  undefined1 auVar35 [16];
  byte *pbStack_230;
  byte *pbStack_228;
  undefined *puStack_220;
  byte *pbStack_218;
  byte *pbStack_210;
  byte *pbStack_208;
  undefined8 uStack_200;
  byte *pbStack_1f8;
  long lStack_1f0;
  undefined *puStack_1e8;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  undefined *puStack_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1c0;
  byte bStack_1b8;
  char cStack_1b7;
  undefined6 uStack_1b6;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  long lStack_1a0;
  undefined ***pppuStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined **ppuStack_f0;
  byte *pbStack_e8;
  undefined ***pppuStack_e0;
  undefined **ppuStack_d8;
  byte *pbStack_d0;
  undefined ***pppuStack_c8;
  undefined **ppuStack_c0;
  byte *pbStack_b8;
  undefined ***pppuStack_b0;
  undefined **ppuStack_a8;
  byte *pbStack_a0;
  undefined ***pppuStack_98;
  undefined **ppuStack_90;
  byte *pbStack_88;
  undefined ***pppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  if (*param_2 != '\x14') {
    uVar9 = FUN_108855c40(param_2,&ppuStack_90,&UNK_10b2136c8);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar9;
    return;
  }
  pbVar25 = *(byte **)(param_2 + 0x10);
  uVar17 = *(ulong *)(param_2 + 0x18);
  pbVar11 = pbVar25 + uVar17 * 0x20;
  uVar9 = uVar17;
  if (0x5554 < uVar17) {
    uVar9 = 0x5555;
  }
  if (uVar17 == 0) {
    ppuVar16 = (undefined **)0x0;
    uStack_108 = 0;
    uStack_100 = 8;
    uStack_f8 = 0;
LAB_10121b4f0:
    param_1[1] = uStack_100;
    *param_1 = uStack_108;
    param_1[2] = uStack_f8;
    uVar17 = *param_1;
    if ((uVar17 != 0x8000000000000000) && ((long)pbVar11 - (long)pbVar25 != 0)) {
      uVar9 = param_1[1];
      uVar24 = param_1[2];
      ppuStack_c0 = ppuVar16;
      uVar7 = FUN_1087e422c((long)ppuVar16 + ((ulong)((long)pbVar11 - (long)pbVar25) >> 5),
                            &ppuStack_c0,&UNK_10b23a1b0);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar7;
      if (uVar24 != 0) {
        puVar23 = (undefined8 *)(uVar9 + 0x20);
        do {
          if (puVar23[-4] != 0) {
            _free(puVar23[-3]);
          }
          if (puVar23[-1] != 0) {
            _free(*puVar23);
          }
          puVar23 = puVar23 + 6;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
      if (uVar17 != 0) {
LAB_10121b81c:
        _free(uVar9);
      }
    }
    return;
  }
  pbVar21 = (byte *)(uVar9 * 0x30);
  uStack_100 = _malloc(pbVar21);
  if (uStack_100 != 0) {
    uStack_f8 = 0;
    ppuVar16 = (undefined **)((uVar17 * 0x20 - 0x20 >> 5) + 1);
    pbVar19 = pbVar25;
    uStack_108 = uVar9;
    do {
      pppuVar32 = &ppuStack_c0;
      pbVar33 = pbVar19 + 0x20;
      if (*pbVar19 == 0x14) {
        lVar30 = *(long *)(pbVar19 + 0x18);
        if (lVar30 == 0) {
          pbVar25 = (byte *)FUN_1087e422c(0,&UNK_10b22e4e8,&UNK_10b20a590);
        }
        else {
          lVar22 = *(long *)(pbVar19 + 0x10);
          FUN_1004e07f8(&ppuStack_90,lVar22);
          pppuVar32 = pppuStack_80;
          pbVar19 = pbStack_88;
          ppuVar28 = ppuStack_90;
          pbVar25 = pbStack_88;
          if (ppuStack_90 != (undefined **)0x8000000000000000) {
            if (lVar30 == 1) {
              pbVar25 = (byte *)FUN_1087e422c(1,&UNK_10b22e4e8,&UNK_10b20a590);
LAB_10121b684:
              if (ppuVar28 != (undefined **)0x0) {
                _free(pbVar19);
              }
              *param_1 = 0x8000000000000000;
              param_1[1] = (ulong)pbVar25;
              uVar9 = uStack_100;
              uVar17 = uStack_f8;
            }
            else {
              FUN_1004e07f8(&ppuStack_90,lVar22 + 0x20);
              pbVar25 = pbStack_88;
              ppuVar31 = ppuStack_90;
              if (ppuStack_90 == (undefined **)0x8000000000000000) goto LAB_10121b684;
              ppuStack_c0 = ppuVar28;
              pbStack_b8 = pbVar19;
              pppuStack_b0 = pppuVar32;
              ppuStack_a8 = ppuStack_90;
              pbStack_a0 = pbStack_88;
              pppuStack_98 = pppuStack_80;
              pbVar21 = pbStack_88;
              if (lVar30 == 2) goto LAB_10121b4b4;
              ppuStack_90 = (undefined **)0x2;
              uVar9 = FUN_1087e422c((lVar30 + 0x7fffffffffffffeU & 0x7ffffffffffffff) + 2,
                                    &ppuStack_90,&UNK_10b23a1b0);
              if (ppuVar28 != (undefined **)0x0) {
                _free(pbVar19);
              }
              if (ppuVar31 != (undefined **)0x0) {
                _free(pbVar25);
              }
              *param_1 = 0x8000000000000000;
              param_1[1] = uVar9;
              uVar9 = uStack_100;
              uVar17 = uStack_f8;
            }
            goto joined_r0x00010121b62c;
          }
        }
LAB_10121b594:
        *param_1 = 0x8000000000000000;
        param_1[1] = (ulong)pbVar25;
        uVar9 = uStack_100;
        uVar17 = uStack_f8;
joined_r0x00010121b62c:
        uStack_100 = uVar9;
        uStack_f8 = uVar17;
        if (uVar17 != 0) {
          puVar23 = (undefined8 *)(uVar9 + 0x20);
          do {
            if (puVar23[-4] != 0) {
              _free(puVar23[-3]);
            }
            if (puVar23[-1] != 0) {
              _free(*puVar23);
            }
            puVar23 = puVar23 + 6;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        if (uStack_108 == 0) {
          return;
        }
        goto LAB_10121b81c;
      }
      if (*pbVar19 != 0x15) {
        pbVar25 = (byte *)FUN_108855c40(pbVar19,&ppuStack_90,&UNK_10b213e08);
        goto LAB_10121b594;
      }
      if (*(long *)(pbVar19 + 0x18) == 0) {
        ppuVar31 = (undefined **)0x0;
LAB_10121b5b0:
        puStack_78 = &UNK_108cb9ca8;
        uStack_70 = 5;
        ppuStack_90 = &puStack_78;
        pbStack_88 = &DAT_100c7b3a0;
        ppuVar28 = (undefined **)0x0;
        pbVar8 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&ppuStack_90);
        pbVar20 = pbVar19;
joined_r0x00010121b558:
        ppuVar31 = (undefined **)((ulong)ppuVar31 & 0x7fffffffffffffff);
joined_r0x00010121b798:
        if (ppuVar31 != (undefined **)0x0) {
          _free(pbVar21);
        }
LAB_10121b5fc:
        if (((ulong)ppuVar28 & 0x7fffffffffffffff) == 0) {
          *param_1 = 0x8000000000000000;
          param_1[1] = (ulong)pbVar8;
          uVar9 = uStack_100;
          uVar17 = uStack_f8;
        }
        else {
          _free(pbVar20);
          *param_1 = 0x8000000000000000;
          param_1[1] = (ulong)pbVar8;
          uVar9 = uStack_100;
          uVar17 = uStack_f8;
        }
        goto joined_r0x00010121b62c;
      }
      pbVar25 = *(byte **)(pbVar19 + 0x10);
      lVar30 = *(long *)(pbVar19 + 0x18) << 6;
      ppuVar28 = (undefined **)0x8000000000000000;
      ppuVar31 = (undefined **)0x8000000000000000;
      pbVar20 = pbVar19;
      do {
        bVar2 = *pbVar25;
        pbVar19 = pbVar20;
        if (bVar2 < 0xd) {
          if (bVar2 == 1) {
            cVar12 = '\x01';
            if (pbVar25[1] != 1) {
              cVar12 = '\x02';
            }
            if (pbVar25[1] == 0) goto LAB_10121b400;
LAB_10121b374:
            if (cVar12 != '\x02') {
LAB_10121b3d4:
              if (ppuVar31 != (undefined **)0x8000000000000000) {
                puStack_78 = &UNK_108ca1558;
                uStack_70 = 5;
                ppuStack_90 = &puStack_78;
                pbStack_88 = &DAT_100c7b3a0;
                pbVar8 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&ppuStack_90);
                goto joined_r0x00010121b798;
              }
              FUN_1004e07f8(&ppuStack_90,pbVar25 + 0x20);
              pbVar8 = pbStack_88;
              if (ppuStack_90 == (undefined **)0x8000000000000000) goto LAB_10121b5fc;
              pppuStack_110 = pppuStack_80;
              pbVar21 = pbStack_88;
              ppuVar31 = ppuStack_90;
            }
          }
          else if (bVar2 == 4) {
            cVar12 = '\x01';
            if (*(long *)(pbVar25 + 8) != 1) {
              cVar12 = '\x02';
            }
            if (*(long *)(pbVar25 + 8) != 0) goto LAB_10121b374;
LAB_10121b400:
            if (ppuVar28 != (undefined **)0x8000000000000000) {
              puStack_78 = &UNK_108cb9ca8;
              uStack_70 = 5;
              ppuStack_90 = &puStack_78;
              pbStack_88 = &DAT_100c7b3a0;
              pbVar8 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&ppuStack_90);
              goto joined_r0x00010121b558;
            }
            FUN_1004e07f8(&ppuStack_90,pbVar25 + 0x20);
            pbVar19 = pbStack_88;
            ppuVar28 = ppuStack_90;
            pppuVar32 = pppuStack_80;
            if (ppuStack_90 == (undefined **)0x8000000000000000) {
              ppuVar28 = (undefined **)0x0;
              pbVar8 = pbStack_88;
              goto joined_r0x00010121b558;
            }
          }
          else {
            if (bVar2 != 0xc) {
LAB_10121b714:
              pbVar8 = (byte *)FUN_108855c40(pbVar25,&ppuStack_90,&UNK_10b2146c8);
              goto joined_r0x00010121b558;
            }
            if (*(long *)(pbVar25 + 0x18) == 5) {
              piVar14 = *(int **)(pbVar25 + 0x10);
              goto LAB_10121b394;
            }
          }
        }
        else if (bVar2 == 0xd) {
          if (*(long *)(pbVar25 + 0x10) == 5) {
            piVar14 = *(int **)(pbVar25 + 8);
LAB_10121b394:
            if (*piVar14 == 0x736e6f63 && (char)piVar14[1] == 't') goto LAB_10121b400;
            if (*piVar14 == 0x6c746974 && (char)piVar14[1] == 'e') goto LAB_10121b3d4;
          }
        }
        else if (bVar2 == 0xe) {
          if (*(long *)(pbVar25 + 0x18) == 5) {
            pcVar15 = *(char **)(pbVar25 + 0x10);
            cVar12 = *pcVar15;
            if (cVar12 == 't') goto LAB_10121b2c0;
LAB_10121b328:
            if (((cVar12 == 'c') && (pcVar15[1] == 'o')) &&
               ((pcVar15[2] == 'n' && ((pcVar15[3] == 's' && (pcVar15[4] == 't'))))))
            goto LAB_10121b400;
          }
        }
        else {
          if (bVar2 != 0xf) goto LAB_10121b714;
          if (*(long *)(pbVar25 + 0x10) == 5) {
            pcVar15 = *(char **)(pbVar25 + 8);
            cVar12 = *pcVar15;
            if (cVar12 != 't') goto LAB_10121b328;
LAB_10121b2c0:
            if ((pcVar15[1] == 'i') &&
               (((pcVar15[2] == 't' && (pcVar15[3] == 'l')) && (pcVar15[4] == 'e'))))
            goto LAB_10121b3d4;
          }
        }
        pbVar25 = pbVar25 + 0x40;
        lVar30 = lVar30 + -0x40;
        pbVar20 = pbVar19;
      } while (lVar30 != 0);
      if (ppuVar28 == (undefined **)0x8000000000000000) goto LAB_10121b5b0;
      if (ppuVar31 == (undefined **)0x8000000000000000) {
        puStack_78 = &UNK_108ca1558;
        uStack_70 = 5;
        ppuStack_90 = &puStack_78;
        pbStack_88 = &DAT_100c7b3a0;
        pbVar25 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&ppuStack_90);
        goto LAB_10121b684;
      }
      pppuStack_98 = pppuStack_110;
      pppuStack_b0 = pppuVar32;
      ppuStack_a8 = ppuVar31;
LAB_10121b4b4:
      uVar9 = uStack_f8;
      ppuStack_d8 = ppuStack_a8;
      pppuStack_e0 = pppuStack_b0;
      pppuStack_c8 = pppuStack_98;
      ppuStack_f0 = ppuVar28;
      pbStack_e8 = pbVar19;
      pbStack_d0 = pbVar21;
      ppuStack_c0 = ppuVar28;
      pbStack_b8 = pbVar19;
      pbStack_a0 = pbVar21;
      if (uStack_f8 == uStack_108) {
        func_0x000108a425f4(&uStack_108);
      }
      puVar13 = (ulong *)(uStack_100 + uVar9 * 0x30);
      puVar13[1] = (ulong)pbStack_e8;
      *puVar13 = (ulong)ppuStack_f0;
      puVar13[3] = (ulong)ppuStack_d8;
      puVar13[2] = (ulong)pppuStack_e0;
      puVar13[5] = (ulong)pppuStack_c8;
      puVar13[4] = (ulong)pbStack_d0;
      uStack_f8 = uVar9 + 1;
      pbVar25 = pbVar11;
      pbVar19 = pbVar33;
    } while (pbVar33 != pbVar11);
    goto LAB_10121b4f0;
  }
  uVar10 = func_0x0001087c9084(8,pbVar21);
  FUN_100e5bdb0(uVar9);
  uVar10 = __Unwind_Resume(uVar10);
  FUN_100c96660(&ppuStack_c0);
  FUN_100e5bdb0(&uStack_108);
  uVar10 = __Unwind_Resume(uVar10);
  uVar9 = unaff_x24;
  while (uVar9 != 0) {
    _free(pbVar25);
    FUN_100e5bdb0(&uStack_108);
    uVar10 = __Unwind_Resume(uVar10);
    FUN_100e5bdb0(&uStack_108);
    uVar10 = __Unwind_Resume(uVar10);
    if (((ulong)pbVar11 & 0x7fffffffffffffff) != 0) {
      _free(pbVar21);
    }
    uVar9 = unaff_x24 & 0x7fffffffffffffff;
  }
  FUN_100e5bdb0(&uStack_108);
  auVar35 = __Unwind_Resume(uVar10);
  pbVar11 = auVar35._8_8_;
  puVar23 = auVar35._0_8_;
  bVar2 = *pbVar11;
  if (bVar2 == 0x14) {
    puVar29 = *(undefined **)(pbVar11 + 8);
    pbVar19 = *(byte **)(pbVar11 + 0x10);
    lVar30 = *(long *)(pbVar11 + 0x18) * 0x20;
    pbStack_218 = pbVar19 + lVar30;
    pbStack_210 = (byte *)0x0;
    pbStack_230 = pbVar19;
    puStack_220 = puVar29;
    if (*(long *)(pbVar11 + 0x18) == 0) {
      pbVar25 = (byte *)0x0;
      puVar27 = (undefined *)0x8000000000000000;
      pbStack_1c0 = extraout_x10;
      pbStack_228 = pbVar19;
    }
    else {
      pbVar21 = pbVar19 + 0x20;
      pbStack_228 = pbVar21;
      if (*pbVar19 == 0x16) {
        pbVar25 = pbVar21;
        puVar27 = (undefined *)0x8000000000000000;
        pbStack_1c0 = extraout_x10;
      }
      else {
        uVar10 = *(undefined8 *)(pbVar19 + 1);
        uStack_1af = (undefined7)*(undefined8 *)(pbVar19 + 9);
        cStack_1b7 = (char)uVar10;
        uStack_1b6 = (undefined6)((ulong)uVar10 >> 8);
        uStack_1b0 = (undefined1)((ulong)uVar10 >> 0x38);
        lStack_1a0 = *(long *)(pbVar19 + 0x18);
        uStack_1a8 = (undefined1)*(undefined8 *)(pbVar19 + 0x10);
        uStack_1a7 = (undefined7)((ulong)*(undefined8 *)(pbVar19 + 0x10) >> 8);
        pbStack_210 = (byte *)0x1;
        bStack_1b8 = *pbVar19;
        FUN_10061cfd8(&puStack_1d0,&bStack_1b8);
        pbVar25 = pbStack_1c8;
        puVar27 = puStack_1d0;
        if (puStack_1d0 == (undefined *)0x8000000000000000) {
          *puVar23 = 0x8000000000000000;
          puVar23[1] = pbStack_1c8;
          lVar30 = (lVar30 - 0x20U >> 5) + 1;
          while (lVar30 = lVar30 + -1, lVar30 != 0) {
            FUN_100e077ec(pbVar21);
            pbVar21 = pbVar21 + 0x20;
          }
          goto LAB_10121be60;
        }
      }
    }
    bVar6 = puVar27 != (undefined *)0x8000000000000000;
    puVar29 = (undefined *)0x0;
    if (bVar6) {
      puVar29 = puVar27;
    }
    pbVar19 = (byte *)0x8;
    if (bVar6) {
      pbVar19 = pbVar25;
    }
    pbVar25 = (byte *)0x0;
    if (bVar6) {
      pbVar25 = pbStack_1c0;
    }
    *puVar23 = puVar29;
    puVar23[1] = pbVar19;
    puVar23[2] = pbVar25;
    lVar30 = FUN_100fbc738(&pbStack_230);
    if (lVar30 == 0) goto LAB_10121be6c;
    *puVar23 = 0x8000000000000000;
    puVar23[1] = lVar30;
    if (pbVar25 != (byte *)0x0) {
      pbVar21 = pbVar19 + 8;
      do {
        if (*(long *)(pbVar21 + -8) != 0) {
          _free(*(undefined8 *)pbVar21);
        }
        pbVar21 = pbVar21 + 0x18;
        pbVar25 = pbVar25 + -1;
      } while (pbVar25 != (byte *)0x0);
    }
  }
  else {
    if (bVar2 != 0x15) {
      uVar10 = FUN_108855b04(pbVar11,&puStack_1d0,&UNK_10b20b2c0);
      *puVar23 = 0x8000000000000000;
      puVar23[1] = uVar10;
      return;
    }
    uStack_200 = *(undefined8 *)(pbVar11 + 8);
    pbStack_210 = *(byte **)(pbVar11 + 0x10);
    lVar30 = *(long *)(pbVar11 + 0x18) * 0x40;
    pbVar33 = pbStack_210 + lVar30;
    pbStack_230 = (byte *)CONCAT71(pbStack_230._1_7_,0x16);
    lStack_1f0 = 0;
    pbStack_1f8 = pbVar33;
    if (*(long *)(pbVar11 + 0x18) == 0) {
      puVar27 = (undefined *)0x8000000000000000;
      pbVar20 = pbStack_210;
      lVar22 = lStack_1f0;
    }
    else {
      lVar34 = 0;
      puVar18 = (undefined8 *)((ulong)&bStack_1b8 | 1);
      puVar26 = (undefined8 *)((ulong)&pbStack_230 | 1);
      puVar27 = (undefined *)0x8000000000000000;
      puVar29 = (undefined *)0x8000000000000000;
      pbVar19 = pbStack_210;
      pbStack_208 = pbStack_210;
      do {
        pbVar8 = pbVar19 + 0x40;
        bVar3 = *pbVar19;
        pbVar20 = pbVar8;
        lVar22 = lVar34;
        if (bVar3 == 0x16) break;
        uVar10 = *(undefined8 *)(pbVar19 + 0x10);
        *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)(pbVar19 + 0x18);
        *(undefined8 *)((long)puVar18 + 0xf) = uVar10;
        uVar10 = *(undefined8 *)(pbVar19 + 1);
        puVar18[1] = *(undefined8 *)(pbVar19 + 9);
        *puVar18 = uVar10;
        pbStack_228 = *(byte **)(pbVar19 + 0x28);
        pbStack_230 = *(byte **)(pbVar19 + 0x20);
        pbStack_218 = *(byte **)(pbVar19 + 0x38);
        puStack_220 = *(undefined **)(pbVar19 + 0x30);
        piVar14 = (int *)CONCAT71(uStack_1af,uStack_1b0);
        piVar4 = (int *)CONCAT71(uStack_1a7,uStack_1a8);
        bStack_1b8 = bVar3;
        if (bVar3 < 0xd) {
          if (bVar3 != 1) {
            if (bVar3 == 4) {
              bVar6 = piVar14 == (int *)0x0;
              goto LAB_10121bb78;
            }
            if (bVar3 == 0xc) {
              if (lStack_1a0 == 4) {
                iVar1 = *piVar4;
                if (piVar14 != (int *)0x0) {
                  _free();
                }
                if (iVar1 == 0x73647763) goto LAB_10121bbf0;
              }
              else if (piVar14 != (int *)0x0) {
                _free();
              }
              goto LAB_10121bb90;
            }
LAB_10121bf94:
            lStack_1f0 = lVar34 + 1;
            pbStack_208 = pbVar8;
            puStack_1e8 = puVar29;
            pbStack_1e0 = pbVar21;
            pbStack_1d8 = pbVar25;
            uVar10 = FUN_108855b04(&bStack_1b8,&puStack_1d0,&UNK_10b20e400);
            *puVar23 = 0x8000000000000000;
            puVar23[1] = uVar10;
            if (puVar27 != (undefined *)0x8000000000000000) goto LAB_10121bf28;
            goto LAB_10121be20;
          }
          bVar6 = cStack_1b7 == '\0';
LAB_10121bb78:
          bVar6 = !bVar6;
LAB_10121bb84:
          FUN_100e077ec(&bStack_1b8);
LAB_10121bb8c:
          if (!bVar6) goto LAB_10121bbf0;
LAB_10121bb90:
          bVar3 = (byte)pbStack_230;
          pbStack_230 = (byte *)CONCAT71(pbStack_230._1_7_,0x16);
          if (bVar3 == 0x16) {
            lStack_1f0 = lVar34 + 1;
            pbStack_208 = pbVar8;
            puStack_1e8 = puVar29;
            pbStack_1e0 = pbVar21;
            pbStack_1d8 = pbVar25;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10121bf90;
          }
          uVar10 = *puVar26;
          puVar18[1] = puVar26[1];
          *puVar18 = uVar10;
          uVar10 = *(undefined8 *)((long)puVar26 + 0xf);
          *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar26 + 0x17);
          *(undefined8 *)((long)puVar18 + 0xf) = uVar10;
          bStack_1b8 = bVar3;
          FUN_100e077ec(&bStack_1b8);
        }
        else {
          if (bVar3 == 0xd) {
            if (piVar4 == (int *)0x4) {
              bVar6 = *piVar14 == 0x73647763;
              goto LAB_10121bb78;
            }
LAB_10121bb80:
            bVar6 = true;
            goto LAB_10121bb84;
          }
          if (bVar3 != 0xe) {
            if (bVar3 != 0xf) goto LAB_10121bf94;
            if ((((piVar4 != (int *)0x4) || ((char)*piVar14 != 'c')) ||
                (*(char *)((long)piVar14 + 1) != 'w')) || (*(char *)((long)piVar14 + 2) != 'd'))
            goto LAB_10121bb80;
            bVar6 = *(char *)((long)piVar14 + 3) == 's';
            goto LAB_10121bb78;
          }
          if (((lStack_1a0 == 4) && ((char)*piVar4 == 'c')) &&
             ((*(char *)((long)piVar4 + 1) == 'w' && (*(char *)((long)piVar4 + 2) == 'd')))) {
            bVar6 = *(char *)((long)piVar4 + 3) != 's';
          }
          else {
            bVar6 = true;
          }
          if (piVar14 == (int *)0x0) goto LAB_10121bb8c;
          _free();
          if (bVar6) goto LAB_10121bb90;
LAB_10121bbf0:
          if (puVar27 != (undefined *)0x8000000000000000) {
            lStack_1f0 = lVar34 + 1;
            puStack_1d0 = &UNK_108cde460;
            pbStack_1c8 = (byte *)0x4;
            bStack_1b8 = (byte)&puStack_1d0;
            cStack_1b7 = (char)((ulong)&puStack_1d0 >> 8);
            uStack_1b6 = (undefined6)((ulong)&puStack_1d0 >> 0x10);
            uStack_1b0 = 0xa0;
            uStack_1af = 0x100c7b3;
            pbStack_208 = pbVar8;
            puStack_1e8 = puVar29;
            pbStack_1e0 = pbVar21;
            pbStack_1d8 = pbVar25;
            uVar10 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_1b8);
            *puVar23 = 0x8000000000000000;
            puVar23[1] = uVar10;
LAB_10121bf28:
            if (pbVar25 != (byte *)0x0) {
              pbVar19 = pbVar21 + 8;
              do {
                if (*(long *)(pbVar19 + -8) != 0) {
                  _free(*(undefined8 *)pbVar19);
                }
                pbVar19 = pbVar19 + 0x18;
                pbVar25 = pbVar25 + -1;
              } while (pbVar25 != (byte *)0x0);
            }
            if (puVar27 != (undefined *)0x0) {
              _free(pbVar21);
            }
LAB_10121be20:
            FUN_100d34830(&pbStack_210);
            if ((byte)pbStack_230 != '\x16') {
              FUN_100e077ec(&pbStack_230);
            }
            goto LAB_10121be6c;
          }
          bVar3 = (byte)pbStack_230;
          pbStack_230 = (byte *)CONCAT71(pbStack_230._1_7_,0x16);
          if (bVar3 == 0x16) {
            lStack_1f0 = lVar34 + 1;
            pbStack_208 = pbVar8;
            puStack_1e8 = puVar29;
            pbStack_1e0 = pbVar21;
            pbStack_1d8 = pbVar25;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10121bf90:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10121bf94);
            (*pcVar5)();
          }
          uVar10 = *puVar26;
          puVar18[1] = puVar26[1];
          *puVar18 = uVar10;
          uVar10 = *(undefined8 *)((long)puVar26 + 0xf);
          *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar26 + 0x17);
          *(undefined8 *)((long)puVar18 + 0xf) = uVar10;
          bStack_1b8 = bVar3;
          FUN_10061cfd8(&puStack_1d0,&bStack_1b8);
          pbVar25 = pbStack_1c0;
          pbVar21 = pbStack_1c8;
          puVar27 = puStack_1d0;
          puVar29 = puStack_1d0;
          if (puStack_1d0 == (undefined *)0x8000000000000000) {
            lStack_1f0 = lVar34 + 1;
            *puVar23 = 0x8000000000000000;
            puVar23[1] = pbStack_1c8;
            pbStack_208 = pbVar8;
            goto LAB_10121be20;
          }
        }
        lVar34 = lVar34 + 1;
        pbVar20 = pbVar33;
        pbVar19 = pbVar8;
        lVar22 = (lVar30 - 0x40U >> 6) + 1;
      } while (pbVar8 != pbVar33);
    }
    lStack_1f0 = lVar22;
    lVar30 = lStack_1f0;
    bVar6 = puVar27 != (undefined *)0x8000000000000000;
    puVar29 = (undefined *)0x0;
    if (bVar6) {
      puVar29 = puVar27;
    }
    pbVar19 = (byte *)0x8;
    if (bVar6) {
      pbVar19 = pbVar21;
    }
    pbVar21 = (byte *)0x0;
    if (bVar6) {
      pbVar21 = pbVar25;
    }
    *puVar23 = puVar29;
    puVar23[1] = pbVar19;
    puVar23[2] = pbVar21;
    pbStack_208 = pbVar20;
    FUN_100d34830(&pbStack_210);
    if (pbVar33 == pbVar20) goto LAB_10121be6c;
    bStack_1b8 = (byte)lVar30;
    cStack_1b7 = (char)((ulong)lVar30 >> 8);
    uStack_1b6 = (undefined6)((ulong)lVar30 >> 0x10);
    uVar10 = FUN_1087e422c(((ulong)((long)pbVar33 - (long)pbVar20) >> 6) + lVar30,&bStack_1b8,
                           &UNK_10b23a190);
    *puVar23 = 0x8000000000000000;
    puVar23[1] = uVar10;
    if (pbVar21 != (byte *)0x0) {
      pbVar25 = pbVar19 + 8;
      do {
        if (*(long *)(pbVar25 + -8) != 0) {
          _free(*(undefined8 *)pbVar25);
        }
        pbVar25 = pbVar25 + 0x18;
        pbVar21 = pbVar21 + -1;
      } while (pbVar21 != (byte *)0x0);
    }
  }
LAB_10121be60:
  if (puVar29 != (undefined *)0x0) {
    _free(pbVar19);
  }
LAB_10121be6c:
  if ((bVar2 & 0x1e) != 0x14) {
    FUN_100e077ec(pbVar11);
  }
  return;
}

