
/* WARNING: Removing unreachable block (ram,0x000100ec7480) */
/* WARNING: Removing unreachable block (ram,0x000100ec74c4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_100ec7314(ulong *param_1,char *param_2)

{
  byte *pbVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  byte bVar16;
  undefined *extraout_x10;
  undefined *puVar17;
  bool bVar18;
  undefined **ppuVar19;
  long lVar20;
  undefined *unaff_x21;
  undefined **ppuVar21;
  long lVar22;
  undefined **ppuVar23;
  byte *pbVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  if (*param_2 == '\x14') {
    lVar15 = *(long *)(param_2 + 0x10);
    lVar22 = *(long *)(param_2 + 0x18);
    lStack_90 = lVar15 + lVar22 * 0x20;
    if (lVar22 == 0) {
      puStack_78 = (undefined *)FUN_1087e422c(0,&UNK_10b229c88,&UNK_10b20a590);
LAB_100ec73bc:
      *param_1 = 2;
      param_1[1] = (ulong)puStack_78;
      return;
    }
    FUN_1004e07f8(&uStack_80,lVar15);
    puVar8 = puStack_70;
    puVar7 = puStack_78;
    ppuVar23 = uStack_80;
    if (uStack_80 == (undefined **)0x8000000000000000) goto LAB_100ec73bc;
    ppuStack_b8 = (undefined **)puVar7;
    if (lVar22 == 1) {
      puVar11 = (undefined *)FUN_1087e422c(1,&UNK_10b229c88,&UNK_10b20a590);
LAB_100ec7834:
      *param_1 = 2;
      param_1[1] = (ulong)puVar11;
    }
    else {
      FUN_1012cbef4(&uStack_80,lVar15 + 0x20);
      puVar11 = puStack_78;
      if (((ulong)uStack_80 & 1) != 0) goto LAB_100ec7834;
      if (lVar22 == 2) {
        puVar11 = (undefined *)FUN_1087e422c(2,&UNK_10b229c88,&UNK_10b20a590);
LAB_100ec7c04:
        *param_1 = 2;
        param_1[1] = (ulong)puVar11;
      }
      else {
        uVar6 = uStack_80._1_1_;
        cVar4 = *(char *)(lVar15 + 0x40);
        ppuVar26 = (undefined **)0x8000000000000000;
        puVar17 = extraout_x10;
        if (cVar4 != '\x10') {
          if (cVar4 == '\x11') {
            FUN_1004e07f8(&uStack_80,*(undefined8 *)(lVar15 + 0x48));
          }
          else {
            puVar17 = extraout_x10;
            if (cVar4 == '\x12') goto LAB_100ec7c10;
            FUN_1004e07f8(&uStack_80,lVar15 + 0x40);
          }
          ppuVar26 = uStack_80;
          if ((long)uStack_80 < -0x7ffffffffffffffe) {
            ppuVar26 = (undefined **)0x8000000000000001;
          }
          puVar17 = puStack_70;
          puVar11 = puStack_78;
          unaff_x21 = puStack_78;
          if ((long)ppuVar26 + 0x7fffffffffffffffU < 2) goto LAB_100ec7c04;
        }
LAB_100ec7c10:
        if (lVar22 == 3) {
          puVar11 = (undefined *)FUN_1087e422c(3,&UNK_10b229c88,&UNK_10b20a590);
LAB_100ec7c60:
          *param_1 = 2;
          param_1[1] = (ulong)puVar11;
        }
        else {
          FUN_1004e07f8(&uStack_80,lVar15 + 0x60);
          puVar9 = puStack_70;
          puVar11 = puStack_78;
          ppuVar25 = uStack_80;
          if (uStack_80 == (undefined **)0x8000000000000000) goto LAB_100ec7c60;
          if (lVar22 == 4) {
            puStack_a8 = (undefined *)FUN_1087e422c(4,&UNK_10b229c88,&UNK_10b20a590);
LAB_100ec7d18:
            *param_1 = 2;
            param_1[1] = (ulong)puStack_a8;
          }
          else {
            cVar4 = *(char *)(lVar15 + 0x80);
            ppuStack_b8 = (undefined **)0x8000000000000000;
            if (cVar4 != '\x10') {
              if (cVar4 == '\x11') {
                FUN_1004e07f8(&uStack_80,*(undefined8 *)(lVar15 + 0x88));
              }
              else {
                if (cVar4 == '\x12') goto LAB_100ec7d28;
                FUN_1004e07f8(&uStack_80,lVar15 + 0x80);
              }
              puStack_a8 = puStack_78;
              puStack_c8 = puStack_70;
              ppuStack_b8 = uStack_80;
              if ((long)uStack_80 < -0x7ffffffffffffffe) {
                ppuStack_b8 = (undefined **)0x8000000000000001;
              }
              if ((long)ppuStack_b8 + 0x7fffffffffffffffU < 2) goto LAB_100ec7d18;
            }
LAB_100ec7d28:
            if (lVar22 == 5) {
              uVar13 = 5;
LAB_100ec7d34:
              puVar14 = (undefined *)FUN_1087e422c(uVar13,&UNK_10b229c88,&UNK_10b20a590);
            }
            else {
              ppuVar19 = (undefined **)0x0;
              puStack_98 = (undefined *)(lVar15 + 0xc0);
              ppuStack_88 = (undefined **)0x6;
              cVar4 = *(char *)(lVar15 + 0xa0);
              if ((cVar4 == '\x10') || (cVar4 == '\x12')) {
LAB_100ec7f64:
                FUN_100f2b3c4(&uStack_80,&puStack_98);
                puVar14 = puStack_78;
                if (uStack_80 != (undefined **)0x3) {
                  if (uStack_80 != (undefined **)0x2) {
                    *param_1 = (ulong)ppuVar19;
                    param_1[1] = (ulong)puStack_d0;
                    param_1[2] = (ulong)uStack_80;
                    param_1[3] = (ulong)puStack_78;
                    param_1[4] = (ulong)ppuVar23;
                    param_1[5] = (ulong)puVar7;
                    param_1[6] = (ulong)puVar8;
                    param_1[7] = (ulong)ppuVar25;
                    param_1[8] = (ulong)puVar11;
                    param_1[9] = (ulong)puVar9;
                    param_1[10] = (ulong)ppuVar26;
                    param_1[0xb] = (ulong)unaff_x21;
                    param_1[0xc] = (ulong)puVar17;
                    param_1[0xd] = (ulong)ppuStack_b8;
                    param_1[0xe] = (ulong)puStack_a8;
                    param_1[0xf] = (ulong)puStack_c8;
                    *(undefined1 *)(param_1 + 0x10) = uVar6;
                    if (lStack_90 - (long)puStack_98 == 0) {
                      return;
                    }
                    uStack_80 = ppuStack_88;
                    uVar12 = FUN_1087e422c((long)ppuStack_88 +
                                           ((ulong)(lStack_90 - (long)puStack_98) >> 5),&uStack_80,
                                           &UNK_10b23a1b0);
                    *param_1 = 2;
                    param_1[1] = uVar12;
                    if (ppuVar23 != (undefined **)0x0) {
                      _free(puVar7);
                    }
                    if (((ulong)ppuVar26 & 0x7fffffffffffffff) != 0) {
                      _free(unaff_x21);
                    }
                    if (ppuVar25 != (undefined **)0x0) {
                      _free(puVar11);
                    }
                    ppuVar23 = (undefined **)((ulong)ppuStack_b8 & 0x7fffffffffffffff);
                    ppuStack_b8 = (undefined **)puStack_a8;
                    goto joined_r0x000100ec8058;
                  }
                  uVar13 = 6;
                  goto LAB_100ec7d34;
                }
              }
              else {
                if (cVar4 == '\x11') {
                  lVar15 = *(long *)(lVar15 + 0xa8);
                }
                else {
                  lVar15 = lVar15 + 0xa0;
                }
                FUN_101438f4c(&uStack_80,lVar15);
                puVar14 = puStack_78;
                if (uStack_80 != (undefined **)0x2) {
                  puStack_d0 = puStack_78;
                  ppuVar19 = uStack_80;
                  goto LAB_100ec7f64;
                }
              }
            }
            *param_1 = 2;
            param_1[1] = (ulong)puVar14;
            if (((ulong)ppuStack_b8 & 0x7fffffffffffffff) != 0) {
              _free(puStack_a8);
            }
          }
          if (ppuVar25 != (undefined **)0x0) {
            _free(puVar11);
          }
        }
        ppuStack_b8 = (undefined **)puVar7;
        if (((ulong)ppuVar26 & 0x7fffffffffffffff) != 0) {
          _free(unaff_x21);
        }
      }
    }
joined_r0x000100ec8058:
    if (ppuVar23 == (undefined **)0x0) {
      return;
    }
    goto LAB_100ec7b98;
  }
  if (*param_2 != '\x15') {
    uVar12 = FUN_108855c40(param_2,&puStack_98,&UNK_10b213908);
    *param_1 = 2;
    param_1[1] = uVar12;
    return;
  }
  lVar15 = *(long *)(param_2 + 0x18);
  if (lVar15 == 0) {
    ppuStack_a0 = (undefined **)0x8000000000000001;
    ppuVar26 = (undefined **)0x0;
    ppuVar23 = (undefined **)0x8000000000000001;
LAB_100ec7854:
    puStack_98 = &UNK_108cb4aeb;
    lStack_90 = 6;
    uStack_80 = &puStack_98;
    puStack_78 = &DAT_100c7b3a0;
    ppuVar25 = (undefined **)0x0;
    uVar12 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_80);
LAB_100ec7888:
    param_1[1] = uVar12;
LAB_100ec7894:
    *param_1 = 2;
joined_r0x000100ec7b38:
    bVar10 = true;
    bVar5 = true;
    bVar18 = true;
  }
  else {
    lVar22 = 0;
    lVar20 = *(long *)(param_2 + 0x10);
    cVar4 = '\x05';
    ppuVar21 = (undefined **)0x2;
    ppuVar19 = (undefined **)0x2;
    ppuVar25 = (undefined **)0x8000000000000000;
    ppuStack_a0 = (undefined **)0x8000000000000001;
    ppuVar26 = (undefined **)0x8000000000000000;
    ppuVar23 = (undefined **)0x8000000000000001;
    do {
      pbVar1 = (byte *)(lVar20 + lVar22);
      pbVar24 = pbVar1 + 0x20;
      bVar16 = *pbVar1;
      if (0xc < bVar16) {
        if (bVar16 == 0xd) {
          FUN_1009ed76c(&uStack_80,*(undefined8 *)(lVar20 + lVar22 + 8),
                        *(undefined8 *)(lVar20 + lVar22 + 0x10));
        }
        else {
          if (bVar16 == 0xe) {
            FUN_1009ed3dc(&uStack_80,*(undefined8 *)(lVar20 + lVar22 + 0x10),
                          *(undefined8 *)(lVar20 + lVar22 + 0x18));
joined_r0x000100ec7498:
            if (((ulong)uStack_80 & 1) != 0) goto LAB_100ec77cc;
            goto LAB_100ec74e0;
          }
          if (bVar16 != 0xf) goto LAB_100ec77a8;
          FUN_1009ed3dc(&uStack_80,*(undefined8 *)(lVar20 + lVar22 + 8),
                        *(undefined8 *)(lVar20 + lVar22 + 0x10));
        }
        if (((ulong)uStack_80 & 1) == 0) goto LAB_100ec74e0;
LAB_100ec77cc:
        *param_1 = 2;
        param_1[1] = (ulong)puStack_78;
        goto joined_r0x000100ec7b38;
      }
      if (bVar16 == 1) {
        bVar16 = *(byte *)(lVar20 + lVar22 + 1);
        if (6 < bVar16) {
          bVar16 = 7;
        }
        uStack_80 = (undefined **)((ulong)CONCAT61(uStack_80._2_6_,bVar16) << 8);
      }
      else {
        if (bVar16 != 4) {
          if (bVar16 == 0xc) {
            FUN_1009ed76c(&uStack_80,*(undefined8 *)(lVar20 + lVar22 + 0x10),
                          *(undefined8 *)(lVar20 + lVar22 + 0x18));
            goto joined_r0x000100ec7498;
          }
LAB_100ec77a8:
          puStack_78 = (undefined *)FUN_108855c40(pbVar1,&puStack_98,&UNK_10b2151a8);
          uStack_80 = (undefined **)CONCAT71(uStack_80._1_7_,1);
          goto LAB_100ec77cc;
        }
        uVar12 = *(ulong *)(lVar20 + lVar22 + 8);
        if (6 < uVar12) {
          uVar12 = 7;
        }
        uStack_80 = (undefined **)((ulong)CONCAT61(uStack_80._2_6_,(char)uVar12) << 8);
      }
LAB_100ec74e0:
      if (uStack_80._1_1_ < 4) {
        if (uStack_80._1_1_ < 2) {
          if (uStack_80._1_1_ == 0) {
            if (ppuVar25 != (undefined **)0x8000000000000000) {
              puStack_98 = &UNK_108cb4aeb;
              lStack_90 = 6;
              uStack_80 = &puStack_98;
              puStack_78 = &DAT_100c7b3a0;
              uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_80);
              goto LAB_100ec7888;
            }
            FUN_1004e07f8(&uStack_80,pbVar24);
            if (uStack_80 == (undefined **)0x8000000000000000) {
              *param_1 = 2;
              param_1[1] = (ulong)puStack_78;
              ppuVar25 = (undefined **)0x0;
joined_r0x000100ec7a54:
              bVar10 = true;
              bVar5 = true;
              bVar18 = true;
              goto joined_r0x000100ec7a54;
            }
            puStack_e8 = puStack_70;
            ppuVar25 = uStack_80;
            ppuStack_b8 = (undefined **)puStack_78;
          }
          else {
            if (cVar4 != '\x05') {
              puStack_98 = &UNK_108ca105e;
              lStack_90 = 6;
              uStack_80 = &puStack_98;
              puStack_78 = &DAT_100c7b3a0;
              uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_80);
              goto LAB_100ec7888;
            }
            FUN_1012cbef4(&uStack_80,pbVar24);
            if ((char)uStack_80 == '\x01') goto LAB_100ec77cc;
            cVar4 = uStack_80._1_1_;
          }
        }
        else if (uStack_80._1_1_ == 2) {
          if (ppuStack_a0 != (undefined **)0x8000000000000001) {
            puStack_98 = &UNK_108cabed5;
            lStack_90 = 0xd;
            uStack_80 = &puStack_98;
            puStack_78 = &DAT_100c7b3a0;
            uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_80);
            goto LAB_100ec7888;
          }
          bVar16 = *pbVar24;
          ppuStack_a0 = (undefined **)0x8000000000000000;
          if (bVar16 == 0x10) {
LAB_100ec75b8:
            puStack_d0 = puStack_108;
          }
          else {
            if (bVar16 == 0x11) {
              FUN_1004e07f8(&uStack_80,*(undefined8 *)(lVar20 + lVar22 + 0x28));
            }
            else {
              if (bVar16 == 0x12) goto LAB_100ec75b8;
              FUN_1004e07f8(&uStack_80,pbVar24);
            }
            puStack_108 = puStack_78;
            if (uStack_80 != (undefined **)0x8000000000000000) {
              puStack_f8 = puStack_70;
            }
            ppuStack_a0 = uStack_80;
            if ((long)uStack_80 < -0x7ffffffffffffffe) {
              ppuStack_a0 = (undefined **)0x8000000000000001;
            }
            if (ppuStack_a0 == (undefined **)0x8000000000000001) {
              *param_1 = 2;
              param_1[1] = (ulong)puStack_78;
              ppuStack_a0 = (undefined **)0x8000000000000001;
              goto joined_r0x000100ec7b38;
            }
            puStack_d0 = puStack_78;
          }
        }
        else {
          if (ppuVar26 != (undefined **)0x8000000000000000) {
            puStack_98 = &UNK_108cafc00;
            lStack_90 = 9;
            uStack_80 = &puStack_98;
            puStack_78 = &DAT_100c7b3a0;
            uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_80);
            goto LAB_100ec7888;
          }
          FUN_1004e07f8(&uStack_80,pbVar24);
          if (uStack_80 == (undefined **)0x8000000000000000) {
            *param_1 = 2;
            param_1[1] = (ulong)puStack_78;
            ppuVar26 = (undefined **)0x0;
            goto joined_r0x000100ec7a54;
          }
          puStack_f0 = puStack_70;
          ppuVar26 = uStack_80;
          puStack_c8 = puStack_78;
        }
      }
      else if (uStack_80._1_1_ < 6) {
        if (uStack_80._1_1_ == 4) {
          if (ppuVar23 != (undefined **)0x8000000000000001) {
            puStack_98 = &UNK_108cb4ba2;
            lStack_90 = 0xd;
            uStack_80 = &puStack_98;
            puStack_78 = &DAT_100c7b3a0;
            uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_80);
            *param_1 = 2;
            param_1[1] = uVar12;
            bVar10 = true;
            bVar18 = true;
            goto joined_r0x000100ec7f2c;
          }
          bVar16 = *pbVar24;
          ppuVar23 = (undefined **)0x8000000000000000;
          if (bVar16 != 0x10) {
            if (bVar16 == 0x11) {
              FUN_1004e07f8(&uStack_80,*(undefined8 *)(lVar20 + lVar22 + 0x28));
            }
            else {
              if (bVar16 == 0x12) goto LAB_100ec73d4;
              FUN_1004e07f8(&uStack_80,pbVar24);
            }
            puStack_c0 = puStack_78;
            if (uStack_80 != (undefined **)0x8000000000000000) {
              puStack_100 = puStack_70;
            }
            ppuVar23 = uStack_80;
            if ((long)uStack_80 < -0x7ffffffffffffffe) {
              ppuVar23 = (undefined **)0x8000000000000001;
            }
            if (ppuVar23 == (undefined **)0x8000000000000001) {
              *param_1 = 2;
              param_1[1] = (ulong)puStack_78;
              bVar5 = true;
              bVar10 = true;
              goto LAB_100ec7b3c;
            }
          }
        }
        else {
          if (ppuVar19 != (undefined **)0x2) {
            puStack_98 = &UNK_108cb4baf;
            lStack_90 = 3;
            uStack_80 = &puStack_98;
            puStack_78 = &DAT_100c7b3a0;
            uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_80);
            goto LAB_100ec7888;
          }
          bVar16 = *pbVar24;
          if (bVar16 == 0x10) {
LAB_100ec7648:
            puStack_e0 = puStack_78;
            ppuVar19 = (undefined **)0x0;
          }
          else {
            if (bVar16 == 0x11) {
              pbVar24 = *(byte **)(lVar20 + lVar22 + 0x28);
            }
            else if (bVar16 == 0x12) goto LAB_100ec7648;
            FUN_101438f4c(&uStack_80,pbVar24);
            if (uStack_80 == (undefined **)0x2) {
LAB_100ec7a88:
              param_1[1] = (ulong)puStack_78;
              goto LAB_100ec7894;
            }
            puStack_e0 = puStack_78;
            ppuVar19 = uStack_80;
          }
        }
      }
      else {
        if (uStack_80._1_1_ != 6) goto LAB_100ec73d4;
        if (ppuVar21 != (undefined **)0x2) {
          puStack_98 = &UNK_108cb4bb2;
          lStack_90 = 0xc;
          uStack_80 = &puStack_98;
          puStack_78 = &DAT_100c7b3a0;
          uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_80);
          goto LAB_100ec7888;
        }
        bVar16 = *pbVar24;
        if (bVar16 == 0x10) {
LAB_100ec73c8:
          puStack_d8 = puStack_78;
          ppuVar21 = (undefined **)0x0;
        }
        else {
          if (bVar16 == 0x11) {
            pbVar24 = *(byte **)(lVar20 + lVar22 + 0x28);
          }
          else if (bVar16 == 0x12) goto LAB_100ec73c8;
          FUN_101438f4c(&uStack_80,pbVar24);
          puStack_d8 = puStack_78;
          ppuVar21 = uStack_80;
          if (uStack_80 == (undefined **)0x2) goto LAB_100ec7a88;
        }
      }
LAB_100ec73d4:
      lVar22 = lVar22 + 0x40;
    } while (lVar15 * 0x40 - lVar22 != 0);
    if (ppuVar25 == (undefined **)0x8000000000000000) goto LAB_100ec7854;
    if (cVar4 == '\x05') {
      puStack_98 = &UNK_108ca105e;
      lStack_90 = 6;
      uStack_80 = &puStack_98;
      puStack_78 = &DAT_100c7b3a0;
      uVar12 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_80);
      *param_1 = 2;
      param_1[1] = uVar12;
      bVar10 = true;
    }
    else {
      bVar10 = ppuStack_a0 == (undefined **)0x8000000000000001;
      ppuVar2 = (undefined **)0x8000000000000000;
      if (!bVar10) {
        ppuVar2 = ppuStack_a0;
      }
      if (ppuVar26 != (undefined **)0x8000000000000000) {
        ppuVar3 = (undefined **)0x8000000000000000;
        if (ppuVar23 != (undefined **)0x8000000000000001) {
          ppuVar3 = ppuVar23;
        }
        ppuVar23 = (undefined **)0x0;
        if (ppuVar19 != (undefined **)0x2) {
          ppuVar23 = ppuVar19;
        }
        *param_1 = (ulong)ppuVar23;
        param_1[1] = (ulong)puStack_e0;
        ppuVar23 = (undefined **)0x0;
        if (ppuVar21 != (undefined **)0x2) {
          ppuVar23 = ppuVar21;
        }
        param_1[2] = (ulong)ppuVar23;
        param_1[3] = (ulong)puStack_d8;
        param_1[4] = (ulong)ppuVar25;
        param_1[5] = (ulong)ppuStack_b8;
        param_1[6] = (ulong)puStack_e8;
        param_1[7] = (ulong)ppuVar26;
        param_1[8] = (ulong)puStack_c8;
        param_1[9] = (ulong)puStack_f0;
        param_1[10] = (ulong)ppuVar2;
        param_1[0xb] = (ulong)puStack_d0;
        param_1[0xc] = (ulong)puStack_f8;
        param_1[0xd] = (ulong)ppuVar3;
        param_1[0xe] = (ulong)puStack_c0;
        param_1[0xf] = (ulong)puStack_100;
        *(char *)(param_1 + 0x10) = cVar4;
        return;
      }
      puStack_98 = &UNK_108cafc00;
      lStack_90 = 9;
      uStack_80 = &puStack_98;
      puStack_78 = &DAT_100c7b3a0;
      uVar12 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_80);
      *param_1 = 2;
      param_1[1] = uVar12;
      if (((ulong)ppuVar2 & 0x7fffffffffffffff) != 0) {
        _free(puStack_d0);
      }
    }
    if (ppuVar25 != (undefined **)0x0) {
      _free(ppuStack_b8);
    }
    bVar18 = false;
    bVar5 = false;
  }
joined_r0x000100ec7a54:
  if (ppuVar23 != (undefined **)0x8000000000000001) {
joined_r0x000100ec7f2c:
    bVar5 = bVar18;
    if (((ulong)ppuVar23 & 0x7fffffffffffffff) != 0) {
      _free(puStack_c0);
    }
  }
LAB_100ec7b3c:
  if (((ulong)ppuVar26 & 0x7fffffffffffffff) == 0) {
    bVar18 = false;
    if (ppuStack_a0 != (undefined **)0x8000000000000001) {
      bVar18 = bVar10;
    }
    if (!bVar18) goto LAB_100ec7b88;
LAB_100ec7b80:
    if (((ulong)ppuStack_a0 & 0x7fffffffffffffff) == 0) goto LAB_100ec7b88;
    _free(puStack_d0);
    bVar10 = false;
    if (((ulong)ppuVar25 & 0x7fffffffffffffff) != 0) {
      bVar10 = bVar5;
    }
  }
  else {
    _free(puStack_c8);
    bVar18 = false;
    if (ppuStack_a0 != (undefined **)0x8000000000000001) {
      bVar18 = bVar10;
    }
    if (bVar18) goto LAB_100ec7b80;
LAB_100ec7b88:
    bVar10 = false;
    if (((ulong)ppuVar25 & 0x7fffffffffffffff) != 0) {
      bVar10 = bVar5;
    }
  }
  if (!bVar10) {
    return;
  }
LAB_100ec7b98:
  _free(ppuStack_b8);
  return;
}

