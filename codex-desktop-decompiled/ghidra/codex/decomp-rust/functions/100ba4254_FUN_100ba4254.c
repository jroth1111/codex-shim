
void FUN_100ba4254(undefined2 *param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined **ppuVar7;
  byte bVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lStack_178;
  long *plStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long *plStack_d0;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  lVar13 = *param_2;
  lVar16 = param_2[1];
  lVar14 = param_2[3];
  FUN_100ae9b20(&uStack_130,lVar16,param_2[2]);
  if (lVar13 != 0) {
    _free(lVar16);
  }
  if ((char)uStack_130 == '\x01') {
    puVar12 = puStack_128;
    if (lVar14 != -0x7ffffffffffffffb) {
      FUN_100de6690(param_2 + 3);
    }
  }
  else {
    puVar12 = (undefined *)(ulong)uStack_130._1_1_;
    if (lVar14 == -0x7ffffffffffffffa) goto LAB_100ba42e0;
    lVar13 = param_2[5];
    plStack_e8 = (long *)param_2[4];
    lStack_158 = param_2[7];
    lStack_160 = param_2[6];
    lVar16 = param_2[9];
    lStack_150 = param_2[8];
    lStack_138 = param_2[0xb];
    lStack_140 = param_2[10];
    lStack_178 = lVar14;
    plStack_170 = plStack_e8;
    lStack_168 = lVar13;
    lStack_148 = lVar16;
    if (uStack_130._1_1_ < 2) {
      if (uStack_130._1_1_ == 0) {
        if (lVar14 == -0x7ffffffffffffffb) {
LAB_100ba46bc:
          *param_1 = 0x200;
          return;
        }
        if (lVar14 == -0x8000000000000000) {
          FUN_105dc6c20(&lStack_178);
          goto LAB_100ba46bc;
        }
        puVar12 = (undefined *)FUN_108a4a234(&lStack_178,&puStack_78);
      }
      else {
        if (lVar14 == -0x7ffffffffffffffb) {
LAB_100ba4730:
          *param_1 = 0x300;
          return;
        }
        if (lVar14 == -0x8000000000000000) {
          FUN_105dc6c20(&lStack_178);
          goto LAB_100ba4730;
        }
        puVar12 = (undefined *)FUN_108a4a234(&lStack_178,&puStack_78);
      }
    }
    else if (uStack_130._1_1_ == 2) {
      if (lVar14 == -0x7ffffffffffffffb) {
LAB_100ba46e4:
        *param_1 = 0x400;
        return;
      }
      if (lVar14 == -0x8000000000000000) {
        FUN_105dc6c20(&lStack_178);
        goto LAB_100ba46e4;
      }
      puVar12 = (undefined *)FUN_108a4a234(&lStack_178,&puStack_78);
    }
    else {
      if (uStack_130._1_1_ == 3) {
        if (lVar14 == -0x7ffffffffffffffb) {
          uStack_130 = (undefined **)CONCAT71(uStack_130._1_7_,0xd);
          uVar9 = func_0x000108a4a50c(&uStack_130,&UNK_10b212c00,&UNK_10b20a590);
          *(undefined8 *)(param_1 + 4) = uVar9;
          *(undefined1 *)param_1 = 1;
          return;
        }
        if (lVar14 < 0) {
          __ZN10serde_json5value2de42__LT_impl_u20_serde_json__value__Value_GT_10unexpected17he5d1f58814edc489E
                    (&uStack_130,&lStack_178);
          uVar9 = func_0x000108a4a50c(&uStack_130,&UNK_10b212c00,&UNK_10b20a590);
          *(undefined8 *)(param_1 + 4) = uVar9;
          *(undefined1 *)param_1 = 1;
          FUN_100de6690(&lStack_178);
          return;
        }
        if ((lStack_158 != 0) && (lStack_158 * 9 != -0x11)) {
          _free(lStack_160 + lStack_158 * -8 + -8);
        }
        plVar15 = plStack_e8 + lVar13 * 0xd;
        uStack_130 = (undefined **)0x8000000000000005;
        plStack_e0 = plStack_e8;
        lStack_d8 = lVar14;
        plStack_d0 = plVar15;
        if (lVar13 != 0) {
          bVar2 = 2;
          bVar4 = 2;
          bVar5 = 2;
          bVar6 = 2;
          bVar3 = 2;
          plVar1 = plStack_e8;
          plStack_e0 = plStack_e8;
          do {
            plVar10 = plVar1 + 0xd;
            lVar13 = *plVar1;
            plVar11 = plVar10;
            if (lVar13 == -0x8000000000000000) break;
            lVar14 = plVar1[1];
            lStack_118 = plVar1[6];
            lStack_120 = plVar1[5];
            lStack_108 = plVar1[8];
            lStack_110 = plVar1[7];
            lStack_f8 = plVar1[10];
            lStack_100 = plVar1[9];
            lStack_f0 = plVar1[0xb];
            puStack_128 = (undefined *)plVar1[4];
            uStack_130 = (undefined **)plVar1[3];
            FUN_100b2f800(&uStack_c0,lVar14,plVar1[2]);
            if (lVar13 != 0) {
              _free(lVar14);
            }
            puVar12 = puStack_b8;
            ppuVar7 = uStack_130;
            if ((char)uStack_c0 == '\x01') goto LAB_100ba479c;
            puStack_b8._0_1_ = (byte)puStack_128;
            bVar8 = (byte)puStack_b8;
            puStack_b8 = puVar12;
            if (uStack_c0._1_1_ < 3) {
              if (uStack_c0._1_1_ == 0) {
                if (bVar4 != 2) {
                  puStack_78 = &UNK_108cdc7b0;
                  uStack_70 = 0x10;
                  uStack_c0 = &puStack_78;
                  puStack_b8 = &DAT_100c7b3a0;
                  plStack_e0 = plVar10;
                  puVar12 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_c0);
                  plVar10 = plStack_e0;
                  goto LAB_100ba479c;
                }
                uStack_130 = (undefined **)0x8000000000000005;
                if (ppuVar7 == (undefined **)0x8000000000000005) {
                  plStack_e0 = plVar10;
                  puVar12 = (undefined *)FUN_1088561c0(&UNK_108cde170,0x10);
                  plVar10 = plStack_e0;
                  goto LAB_100ba479c;
                }
                uStack_c0 = ppuVar7;
                lStack_b0 = lStack_120;
                puStack_b8 = puStack_128;
                lStack_a0 = lStack_110;
                lStack_a8 = lStack_118;
                lStack_90 = lStack_100;
                lStack_98 = lStack_108;
                lStack_80 = lStack_f0;
                lStack_88 = lStack_f8;
                if (ppuVar7 != (undefined **)0x8000000000000001) {
                  plStack_e0 = plVar10;
                  puVar12 = (undefined *)FUN_108832ea0(&uStack_c0,&puStack_78,&UNK_10b20a560);
                  FUN_100de6690(&uStack_c0);
                  plVar10 = plStack_e0;
                  goto LAB_100ba479c;
                }
                FUN_100de6690(&uStack_c0);
                bVar4 = bVar8;
              }
              else if (uStack_c0._1_1_ == 1) {
                if (bVar2 != 2) {
                  puStack_78 = &UNK_108ca10cd;
                  uStack_70 = 5;
                  uStack_c0 = &puStack_78;
                  puStack_b8 = &DAT_100c7b3a0;
                  plStack_e0 = plVar10;
                  puVar12 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_c0);
                  plVar10 = plStack_e0;
                  goto LAB_100ba479c;
                }
                uStack_130 = (undefined **)0x8000000000000005;
                if (ppuVar7 == (undefined **)0x8000000000000005) {
                  plStack_e0 = plVar10;
                  puVar12 = (undefined *)FUN_1088561c0(&UNK_108cde170,0x10);
                  plVar10 = plStack_e0;
                  goto LAB_100ba479c;
                }
                uStack_c0 = ppuVar7;
                lStack_b0 = lStack_120;
                puStack_b8 = puStack_128;
                lStack_a0 = lStack_110;
                lStack_a8 = lStack_118;
                lStack_90 = lStack_100;
                lStack_98 = lStack_108;
                lStack_80 = lStack_f0;
                lStack_88 = lStack_f8;
                if (ppuVar7 != (undefined **)0x8000000000000001) {
                  plStack_e0 = plVar10;
                  puVar12 = (undefined *)FUN_108832ea0(&uStack_c0,&puStack_78,&UNK_10b20a560);
                  FUN_100de6690(&uStack_c0);
                  plVar10 = plStack_e0;
                  goto LAB_100ba479c;
                }
                FUN_100de6690(&uStack_c0);
                bVar2 = bVar8;
              }
              else {
                if (bVar6 != 2) {
                  puStack_78 = &UNK_108ca10d2;
                  uStack_70 = 0xe;
                  uStack_c0 = &puStack_78;
                  puStack_b8 = &DAT_100c7b3a0;
                  plStack_e0 = plVar10;
                  puVar12 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_c0);
                  plVar10 = plStack_e0;
                  goto LAB_100ba479c;
                }
                uStack_130 = (undefined **)0x8000000000000005;
                if (ppuVar7 == (undefined **)0x8000000000000005) {
                  plStack_e0 = plVar10;
                  puVar12 = (undefined *)FUN_1088561c0(&UNK_108cde170,0x10);
                  plVar10 = plStack_e0;
                  goto LAB_100ba479c;
                }
                uStack_c0 = ppuVar7;
                lStack_b0 = lStack_120;
                puStack_b8 = puStack_128;
                lStack_a0 = lStack_110;
                lStack_a8 = lStack_118;
                lStack_90 = lStack_100;
                lStack_98 = lStack_108;
                lStack_80 = lStack_f0;
                lStack_88 = lStack_f8;
                if (ppuVar7 != (undefined **)0x8000000000000001) {
                  plStack_e0 = plVar10;
                  puVar12 = (undefined *)FUN_108832ea0(&uStack_c0,&puStack_78,&UNK_10b20a560);
                  FUN_100de6690(&uStack_c0);
                  plVar10 = plStack_e0;
                  goto LAB_100ba479c;
                }
                FUN_100de6690(&uStack_c0);
                bVar6 = bVar8;
              }
            }
            else if (uStack_c0._1_1_ == 3) {
              if (bVar5 != 2) {
                puStack_78 = &UNK_108ca10e0;
                uStack_70 = 0x13;
                uStack_c0 = &puStack_78;
                puStack_b8 = &DAT_100c7b3a0;
                plStack_e0 = plVar10;
                puVar12 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_c0);
                plVar10 = plStack_e0;
                goto LAB_100ba479c;
              }
              uStack_130 = (undefined **)0x8000000000000005;
              if (ppuVar7 == (undefined **)0x8000000000000005) {
                plStack_e0 = plVar10;
                puVar12 = (undefined *)FUN_1088561c0(&UNK_108cde170,0x10);
                plVar10 = plStack_e0;
                goto LAB_100ba479c;
              }
              uStack_c0 = ppuVar7;
              lStack_b0 = lStack_120;
              puStack_b8 = puStack_128;
              lStack_a0 = lStack_110;
              lStack_a8 = lStack_118;
              lStack_90 = lStack_100;
              lStack_98 = lStack_108;
              lStack_80 = lStack_f0;
              lStack_88 = lStack_f8;
              if (ppuVar7 != (undefined **)0x8000000000000001) {
                plStack_e0 = plVar10;
                puVar12 = (undefined *)FUN_108832ea0(&uStack_c0,&puStack_78,&UNK_10b20a560);
                FUN_100de6690(&uStack_c0);
                plVar10 = plStack_e0;
                goto LAB_100ba479c;
              }
              FUN_100de6690(&uStack_c0);
              bVar5 = bVar8;
            }
            else if (uStack_c0._1_1_ == 4) {
              if (bVar3 != 2) {
                puStack_78 = &UNK_108cdc7c0;
                uStack_70 = 0x10;
                uStack_c0 = &puStack_78;
                puStack_b8 = &DAT_100c7b3a0;
                plStack_e0 = plVar10;
                puVar12 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_c0);
                plVar10 = plStack_e0;
                goto LAB_100ba479c;
              }
              uStack_130 = (undefined **)0x8000000000000005;
              if (ppuVar7 == (undefined **)0x8000000000000005) {
                plStack_e0 = plVar10;
                puVar12 = (undefined *)FUN_1088561c0(&UNK_108cde170,0x10);
                plVar10 = plStack_e0;
                goto LAB_100ba479c;
              }
              uStack_c0 = ppuVar7;
              lStack_b0 = lStack_120;
              puStack_b8 = puStack_128;
              lStack_a0 = lStack_110;
              lStack_a8 = lStack_118;
              lStack_90 = lStack_100;
              lStack_98 = lStack_108;
              lStack_80 = lStack_f0;
              lStack_88 = lStack_f8;
              if (ppuVar7 != (undefined **)0x8000000000000001) {
                plStack_e0 = plVar10;
                puVar12 = (undefined *)FUN_108832ea0(&uStack_c0,&puStack_78,&UNK_10b20a560);
                FUN_100de6690(&uStack_c0);
                plVar10 = plStack_e0;
                goto LAB_100ba479c;
              }
              FUN_100de6690(&uStack_c0);
              bVar3 = bVar8;
            }
            else {
              uStack_130 = (undefined **)0x8000000000000005;
              if (ppuVar7 == (undefined **)0x8000000000000005) {
                plStack_e0 = plVar10;
                puVar12 = (undefined *)FUN_1088561c0(&UNK_108cde170,0x10);
                plVar10 = plStack_e0;
                goto LAB_100ba479c;
              }
              uStack_c0 = ppuVar7;
              lStack_b0 = lStack_120;
              puStack_b8 = puStack_128;
              lStack_a0 = lStack_110;
              lStack_a8 = lStack_118;
              lStack_90 = lStack_100;
              lStack_98 = lStack_108;
              lStack_80 = lStack_f0;
              lStack_88 = lStack_f8;
              FUN_100de6690(&uStack_c0);
            }
            plVar11 = plVar15;
            plVar1 = plVar10;
          } while (plVar10 != plVar15);
          plStack_e0 = plVar10;
          if (bVar4 != 2) {
            if (bVar2 == 2) {
              puStack_78 = &UNK_108ca10cd;
              uStack_70 = 5;
              uStack_c0 = &puStack_78;
              puStack_b8 = &DAT_100c7b3a0;
              puVar12 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_c0);
              plVar10 = plStack_e0;
            }
            else {
              if (bVar3 != 2) {
                *(byte *)((long)param_1 + 1) = bVar4;
                *(byte *)(param_1 + 1) = bVar2;
                *(byte *)((long)param_1 + 3) = bVar6 & 1;
                *(byte *)(param_1 + 2) = bVar5 & 1;
                *(byte *)((long)param_1 + 5) = bVar3;
                *(undefined1 *)param_1 = 0;
                if (plVar15 != plVar11) {
                  uVar9 = FUN_1087e422c(lVar16,&UNK_10b21cb90,&UNK_10b20a590);
                  *(undefined8 *)(param_1 + 4) = uVar9;
                }
                *(bool *)param_1 = plVar15 != plVar11;
                FUN_100de8910(&plStack_e8);
                return;
              }
              puStack_78 = &UNK_108cdc7c0;
              uStack_70 = 0x10;
              uStack_c0 = &puStack_78;
              puStack_b8 = &DAT_100c7b3a0;
              puVar12 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_c0);
              plVar10 = plStack_e0;
            }
            goto LAB_100ba479c;
          }
        }
        puStack_78 = &UNK_108cdc7b0;
        uStack_70 = 0x10;
        uStack_c0 = &puStack_78;
        puStack_b8 = &DAT_100c7b3a0;
        puVar12 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_c0);
        plVar10 = plStack_e0;
LAB_100ba479c:
        plStack_e0 = plVar10;
        *(undefined **)(param_1 + 4) = puVar12;
        *(undefined1 *)param_1 = 1;
        FUN_100de8910(&plStack_e8);
        if (uStack_130 == (undefined **)0x8000000000000005) {
          return;
        }
        FUN_100de6690(&uStack_130);
        return;
      }
      if (lVar14 == -0x7ffffffffffffffb) {
LAB_100ba470c:
        *param_1 = 0x600;
        return;
      }
      if (lVar14 == -0x8000000000000000) {
        FUN_105dc6c20(&lStack_178);
        goto LAB_100ba470c;
      }
      puVar12 = (undefined *)FUN_108a4a234(&lStack_178,&puStack_78);
    }
    FUN_105dc6c20(&lStack_178);
  }
LAB_100ba42e0:
  *(undefined **)(param_1 + 4) = puVar12;
  *(undefined1 *)param_1 = 1;
  return;
}

