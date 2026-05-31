
void FUN_1017c27c8(undefined8 *param_1,ulong *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined **unaff_x21;
  long lVar15;
  undefined *puVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined *unaff_x25;
  ulong uVar19;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined **ppuStack_180;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined *puStack_160;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  ulong uStack_d8;
  undefined8 *puStack_d0;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  
  uVar19 = *param_2;
  if (uVar19 == 0x8000000000000000) {
    *param_1 = 2;
    uVar19 = *param_2 ^ 0x8000000000000000;
    if (-1 < (long)*param_2) {
      uVar19 = 5;
    }
    if (uVar19 < 3) {
      return;
    }
    if (uVar19 == 3) {
      if (param_2[1] == 0) {
        return;
      }
      plVar6 = (long *)param_2[2];
    }
    else if (uVar19 == 4) {
      plVar6 = (long *)param_2[2];
      FUN_1017a5c10(plVar6,param_2[3]);
      if (param_2[1] == 0) {
        return;
      }
    }
    else {
      uVar19 = param_2[4];
      if ((uVar19 != 0) && (uVar19 * 9 != -0x11)) {
        _free(param_2[3] + uVar19 * -8 + -8);
      }
      plVar6 = (long *)param_2[1];
      lVar15 = param_2[2] + 1;
      plVar14 = plVar6;
      while (lVar15 = lVar15 + -1, lVar15 != 0) {
        if (*plVar14 != 0) {
          _free(plVar14[1]);
        }
        FUN_1017a4698(plVar14 + 3);
        plVar14 = plVar14 + 0xd;
      }
      if (*param_2 == 0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(plVar6);
    return;
  }
  uVar10 = uVar19 ^ 0x8000000000000000;
  if (-1 < (long)uVar19) {
    uVar10 = 5;
  }
  if (uVar10 != 4) {
    if (uVar10 != 5) {
      ppuStack_138 = (undefined **)FUN_10887f604(param_2,&ppuStack_130,&UNK_10b259430);
      puVar16 = (undefined *)0x2;
      goto LAB_1017c2eac;
    }
    uVar11 = param_2[6];
    puVar18 = (undefined8 *)param_2[1];
    uVar10 = param_2[2];
    uVar12 = param_2[4];
    if ((uVar12 != 0) && (uVar12 * 9 != -0x11)) {
      _free(param_2[3] + uVar12 * -8 + -8);
    }
    puStack_d0 = puVar18 + uVar10 * 0xd;
    ppuStack_130 = (undefined **)0x8000000000000005;
    unaff_x21 = (undefined **)0x0;
    puStack_e8 = puVar18;
    puStack_e0 = puVar18;
    uStack_d8 = uVar19;
    if (uVar10 == 0) {
LAB_1017c2e54:
      puStack_78 = &UNK_108ce3de5;
      ppuStack_70 = (undefined **)0xc;
      ppuStack_c0 = &puStack_78;
      ppuStack_b8 = (undefined **)&DAT_10179e9f8;
      ppuVar8 = (undefined **)FUN_108880790(s_missing_field_____108ac28f7,&ppuStack_c0);
LAB_1017c2e88:
      ppuStack_138 = ppuVar8;
      FUN_1017a4824(&puStack_e8);
      puVar16 = (undefined *)0x2;
    }
    else {
      unaff_x21 = (undefined **)*puVar18;
      puStack_e0 = puVar18 + 0xd;
      if (unaff_x21 == (undefined **)0x8000000000000000) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = false;
        puStack_160 = (undefined *)0x2;
        puVar20 = (undefined *)0x2;
      }
      else {
        bVar1 = false;
        bVar2 = false;
        bVar3 = false;
        puStack_160 = (undefined *)0x2;
        puVar20 = (undefined *)0x2;
        do {
          plVar6 = (long *)puVar18[1];
          unaff_x25 = (undefined *)puVar18[2];
          ppuStack_a8 = (undefined **)puVar18[6];
          puStack_b0 = (undefined *)puVar18[5];
          puStack_98 = (undefined *)puVar18[8];
          puStack_a0 = (undefined *)puVar18[7];
          puStack_88 = (undefined *)puVar18[10];
          puStack_90 = (undefined *)puVar18[9];
          puStack_80 = (undefined *)puVar18[0xb];
          ppuStack_b8 = (undefined **)puVar18[4];
          ppuStack_c0 = (undefined **)puVar18[3];
          if (ppuStack_130 != (undefined **)0x8000000000000005) {
            FUN_1017a4698(&ppuStack_130);
          }
          puStack_108 = puStack_98;
          puStack_110 = puStack_a0;
          puStack_f8 = puStack_88;
          puStack_100 = puStack_90;
          puStack_f0 = puStack_80;
          ppuStack_128 = ppuStack_b8;
          ppuStack_130 = ppuStack_c0;
          ppuStack_118 = ppuStack_a8;
          puStack_120 = puStack_b0;
          if ((long)unaff_x25 < 0x14) {
            if (unaff_x25 == (undefined *)0xc) {
              if (*plVar6 == 0x6f745f7475706e69 && (int)plVar6[1] == 0x736e656b) {
                uVar17 = 0;
              }
              else {
                if (*plVar6 != 0x6f745f6c61746f74 || (int)plVar6[1] != 0x736e656b)
                goto LAB_1017c2ba8;
                uVar17 = 4;
              }
            }
            else {
              if ((unaff_x25 != (undefined *)0xd) ||
                 (*plVar6 != 0x745f74757074756f || *(long *)((long)plVar6 + 5) != 0x736e656b6f745f74
                 )) goto LAB_1017c2ba8;
              uVar17 = 2;
            }
          }
          else if (unaff_x25 == (undefined *)0x14) {
            if ((*plVar6 != 0x6f745f7475706e69 || plVar6[1] != 0x7465645f736e656b) ||
                (int)plVar6[2] != 0x736c6961) goto LAB_1017c2ba8;
            uVar17 = 1;
          }
          else if ((unaff_x25 == (undefined *)0x15) &&
                  ((*plVar6 == 0x745f74757074756f && plVar6[1] == 0x65645f736e656b6f) &&
                   *(long *)((long)plVar6 + 0xd) == 0x736c69617465645f)) {
            uVar17 = 3;
          }
          else {
LAB_1017c2ba8:
            uVar17 = 5;
          }
          if (unaff_x21 != (undefined **)0x0) {
            _free(plVar6);
          }
          ppuVar8 = ppuStack_130;
          if (uVar17 < 3) {
            if (uVar17 == 0) {
              if (bVar3) {
                puStack_78 = &UNK_108ce3de5;
                ppuStack_70 = (undefined **)0xc;
                ppuStack_c0 = &puStack_78;
                ppuStack_b8 = (undefined **)&DAT_10179e9f8;
                ppuVar8 = (undefined **)FUN_108880790(s_duplicate_field_____108ac2973,&ppuStack_c0);
                goto LAB_1017c2e88;
              }
              auVar21 = func_0x0001017acad4(&ppuStack_130);
              ppuStack_138 = auVar21._8_8_;
              ppuVar8 = ppuStack_138;
              if ((auVar21._0_8_ & 1) != 0) goto LAB_1017c2e88;
              bVar3 = true;
            }
            else {
              if (uVar17 == 1) {
                if (puVar20 == (undefined *)0x2) {
                  ppuStack_130 = (undefined **)0x8000000000000005;
                  if (ppuVar8 != (undefined **)0x8000000000000005) {
                    ppuStack_c0 = ppuVar8;
                    puStack_b0 = puStack_120;
                    ppuStack_b8 = ppuStack_128;
                    puStack_a0 = puStack_110;
                    ppuStack_a8 = ppuStack_118;
                    puStack_90 = puStack_100;
                    puStack_98 = puStack_108;
                    puStack_80 = puStack_f0;
                    puStack_88 = puStack_f8;
                    FUN_1017bb908(&puStack_78,&ppuStack_c0);
                    puVar20 = puStack_78;
                    ppuStack_180 = ppuStack_70;
                    goto joined_r0x0001017c2d0c;
                  }
                  ppuVar8 = (undefined **)FUN_108880728(&UNK_108cde170,0x10);
                }
                else {
                  puStack_78 = &UNK_108ce3df1;
                  ppuStack_70 = (undefined **)0x14;
                  ppuStack_c0 = &puStack_78;
                  ppuStack_b8 = (undefined **)&DAT_10179e9f8;
                  ppuVar8 = (undefined **)
                            FUN_108880790(s_duplicate_field_____108ac2973,&ppuStack_c0);
                }
                goto LAB_1017c2e88;
              }
              if (bVar2) {
                puStack_78 = &UNK_108ce3e05;
                ppuStack_70 = (undefined **)0xd;
                ppuStack_c0 = &puStack_78;
                ppuStack_b8 = (undefined **)&DAT_10179e9f8;
                ppuVar8 = (undefined **)FUN_108880790(s_duplicate_field_____108ac2973,&ppuStack_c0);
                goto LAB_1017c2e88;
              }
              auVar21 = func_0x0001017acad4(&ppuStack_130);
              ppuStack_140 = auVar21._8_8_;
              ppuVar8 = ppuStack_140;
              if ((auVar21._0_8_ & 1) != 0) goto LAB_1017c2e88;
              bVar2 = true;
            }
          }
          else if (uVar17 == 3) {
            if (puStack_160 != (undefined *)0x2) {
              puStack_78 = &UNK_108ce3e12;
              ppuStack_70 = (undefined **)0x15;
              ppuStack_c0 = &puStack_78;
              ppuStack_b8 = (undefined **)&DAT_10179e9f8;
              ppuVar8 = (undefined **)FUN_108880790(s_duplicate_field_____108ac2973,&ppuStack_c0);
              goto LAB_1017c2e88;
            }
            ppuStack_130 = (undefined **)0x8000000000000005;
            if (ppuVar8 == (undefined **)0x8000000000000005) {
              ppuVar8 = (undefined **)FUN_108880728(&UNK_108cde170,0x10);
              goto LAB_1017c2e88;
            }
            ppuStack_c0 = ppuVar8;
            puStack_b0 = puStack_120;
            ppuStack_b8 = ppuStack_128;
            puStack_a0 = puStack_110;
            ppuStack_a8 = ppuStack_118;
            puStack_90 = puStack_100;
            puStack_98 = puStack_108;
            puStack_80 = puStack_f0;
            puStack_88 = puStack_f8;
            FUN_1017bd29c(&puStack_78,&ppuStack_c0);
            ppuStack_170 = ppuStack_70;
            puStack_160 = puStack_78;
joined_r0x0001017c2d0c:
            ppuVar8 = ppuStack_70;
            if (puStack_78 == (undefined *)0x2) goto LAB_1017c2e88;
          }
          else if (uVar17 == 4) {
            if (bVar1) {
              puStack_78 = &UNK_108ce3e27;
              ppuStack_70 = (undefined **)0xc;
              ppuStack_c0 = &puStack_78;
              ppuStack_b8 = (undefined **)&DAT_10179e9f8;
              ppuVar8 = (undefined **)FUN_108880790(s_duplicate_field_____108ac2973,&ppuStack_c0);
              goto LAB_1017c2e88;
            }
            auVar21 = func_0x0001017acad4(&ppuStack_130);
            ppuStack_168 = auVar21._8_8_;
            ppuVar8 = ppuStack_168;
            if ((auVar21._0_8_ & 1) != 0) goto LAB_1017c2e88;
            bVar1 = true;
          }
          else {
            ppuStack_130 = (undefined **)0x8000000000000005;
            if (ppuVar8 == (undefined **)0x8000000000000005) {
              ppuVar8 = (undefined **)FUN_108880728(&UNK_108cde170,0x10);
              goto LAB_1017c2e88;
            }
            ppuStack_c0 = ppuVar8;
            puStack_b0 = puStack_120;
            ppuStack_b8 = ppuStack_128;
            puStack_a0 = puStack_110;
            ppuStack_a8 = ppuStack_118;
            puStack_90 = puStack_100;
            puStack_98 = puStack_108;
            puStack_80 = puStack_f0;
            puStack_88 = puStack_f8;
            FUN_1017a4698(&ppuStack_c0);
          }
          unaff_x21 = ppuStack_138;
          puVar18 = puStack_d0;
          if (puStack_e0 == puStack_d0) goto joined_r0x0001017c2e50;
          puVar13 = puStack_e0 + 0xd;
          unaff_x21 = (undefined **)*puStack_e0;
          puVar18 = puStack_e0;
          puStack_e0 = puVar13;
        } while (unaff_x21 != (undefined **)0x8000000000000000);
      }
      unaff_x21 = ppuStack_138;
      puVar18 = puVar18 + 0xd;
joined_r0x0001017c2e50:
      if (!bVar3) goto LAB_1017c2e54;
      puVar16 = (undefined *)0x0;
      if (puVar20 != (undefined *)0x2) {
        puVar16 = puVar20;
      }
      if (!bVar2) {
        puStack_78 = &UNK_108ce3e05;
        ppuStack_70 = (undefined **)0xd;
        ppuStack_c0 = &puStack_78;
        ppuStack_b8 = (undefined **)&DAT_10179e9f8;
        ppuVar8 = (undefined **)FUN_108880790(s_missing_field_____108ac28f7,&ppuStack_c0);
        goto LAB_1017c2e88;
      }
      if (!bVar1) {
        puStack_78 = &UNK_108ce3e27;
        ppuStack_70 = (undefined **)0xc;
        ppuStack_c0 = &puStack_78;
        ppuStack_b8 = (undefined **)&DAT_10179e9f8;
        ppuVar8 = (undefined **)FUN_108880790(s_missing_field_____108ac28f7,&ppuStack_c0);
        goto LAB_1017c2e88;
      }
      unaff_x25 = (undefined *)0x0;
      if (puStack_160 != (undefined *)0x2) {
        unaff_x25 = puStack_160;
      }
      if (puStack_d0 != puVar18) {
        ppuStack_180 = (undefined **)FUN_108878f3c(uVar11,&UNK_10b2593e0,&UNK_10b258940);
        puVar16 = (undefined *)0x2;
      }
      FUN_1017a4824(&puStack_e8);
      ppuStack_138 = ppuStack_180;
    }
    if (ppuStack_130 != (undefined **)0x8000000000000005) {
      FUN_1017a4698(&ppuStack_130);
    }
    goto LAB_1017c2eac;
  }
  puStack_b0 = (undefined *)param_2[1];
  ppuStack_c0 = (undefined **)param_2[2];
  uVar10 = param_2[3];
  ppuStack_a8 = ppuStack_c0 + uVar10 * 9;
  ppuStack_b8 = ppuStack_c0;
  FUN_1017ad36c(&ppuStack_130,&ppuStack_c0);
  ppuVar8 = ppuStack_128;
  ppuStack_138 = ppuStack_128;
  if (ppuStack_130 == (undefined **)0x2) {
LAB_1017c29ac:
    FUN_1017a5c10(ppuStack_b8,
                  ((ulong)((long)ppuStack_a8 - (long)ppuStack_b8) >> 3) * -0x71c71c71c71c71c7);
    puVar16 = (undefined *)0x2;
  }
  else {
    if (((ulong)ppuStack_130 & 1) == 0) {
      uVar7 = 0;
LAB_1017c2994:
      ppuStack_138 = (undefined **)FUN_108878f3c(uVar7,&UNK_10b259b10,&UNK_10b258940);
      goto LAB_1017c29ac;
    }
    ppuVar9 = ppuStack_b8;
    if (ppuStack_b8 == ppuStack_a8) {
LAB_1017c2990:
      ppuStack_b8 = ppuVar9;
      uVar7 = 1;
      goto LAB_1017c2994;
    }
    unaff_x21 = ppuStack_128;
    ppuVar9 = ppuStack_b8 + 9;
    if ((undefined **)*ppuStack_b8 == (undefined **)0x8000000000000005) goto LAB_1017c2990;
    puStack_120 = ppuStack_b8[2];
    ppuStack_128 = (undefined **)ppuStack_b8[1];
    puStack_110 = ppuStack_b8[4];
    ppuStack_118 = (undefined **)ppuStack_b8[3];
    puStack_100 = ppuStack_b8[6];
    puStack_108 = ppuStack_b8[5];
    puStack_f0 = ppuStack_b8[8];
    puStack_f8 = ppuStack_b8[7];
    ppuStack_130 = (undefined **)*ppuStack_b8;
    ppuStack_b8 = ppuStack_b8 + 9;
    FUN_1017bb908(&puStack_78,&ppuStack_130);
    ppuVar9 = ppuStack_70;
    puVar16 = puStack_78;
    unaff_x21 = ppuVar8;
    ppuStack_138 = ppuStack_70;
    if ((puStack_78 == (undefined *)0x2) ||
       (FUN_1017ad36c(&ppuStack_130,&ppuStack_c0), ppuVar8 = ppuStack_128,
       ppuStack_138 = ppuStack_128, ppuStack_130 == (undefined **)0x2)) goto LAB_1017c29ac;
    if (((ulong)ppuStack_130 & 1) == 0) {
      uVar7 = 2;
      goto LAB_1017c2994;
    }
    ppuVar5 = ppuStack_b8;
    if (ppuStack_b8 == ppuStack_a8) {
LAB_1017c2f58:
      ppuStack_b8 = ppuVar5;
      uVar7 = 3;
      goto LAB_1017c2994;
    }
    ppuVar5 = ppuStack_b8 + 9;
    if ((undefined **)*ppuStack_b8 == (undefined **)0x8000000000000005) goto LAB_1017c2f58;
    ppuStack_140 = ppuStack_128;
    puStack_120 = ppuStack_b8[2];
    ppuStack_128 = (undefined **)ppuStack_b8[1];
    puStack_110 = ppuStack_b8[4];
    ppuStack_118 = (undefined **)ppuStack_b8[3];
    puStack_100 = ppuStack_b8[6];
    puStack_108 = ppuStack_b8[5];
    puStack_f0 = ppuStack_b8[8];
    puStack_f8 = ppuStack_b8[7];
    ppuStack_130 = (undefined **)*ppuStack_b8;
    ppuStack_b8 = ppuStack_b8 + 9;
    FUN_1017bd29c(&puStack_78,&ppuStack_130);
    ppuStack_170 = ppuStack_70;
    unaff_x25 = puStack_78;
    ppuStack_138 = ppuStack_70;
    if ((puStack_78 == (undefined *)0x2) ||
       (FUN_1017ad36c(&ppuStack_130,&ppuStack_c0), ppuVar4 = ppuStack_b8, ppuVar5 = ppuStack_128,
       ppuStack_138 = ppuStack_128, ppuStack_130 == (undefined **)0x2)) goto LAB_1017c29ac;
    if (((ulong)ppuStack_130 & 1) == 0) {
      uVar7 = 4;
      goto LAB_1017c2994;
    }
    uVar11 = (long)ppuStack_a8 - (long)ppuStack_b8;
    if (uVar11 != 0) {
      ppuVar9 = (undefined **)FUN_108878f3c(uVar10,&UNK_10b2593d0,&UNK_10b258940);
      puVar16 = (undefined *)0x2;
    }
    FUN_1017a5c10(ppuVar4,(uVar11 >> 3) * -0x71c71c71c71c71c7);
    ppuStack_138 = ppuVar9;
    ppuStack_140 = ppuVar8;
    ppuStack_168 = ppuVar5;
  }
  if (puStack_b0 != (undefined *)0x0) {
    _free(ppuStack_c0);
  }
LAB_1017c2eac:
  if (((long)uVar19 < 0) && ((uVar19 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_1017a4698(param_2);
  }
  if (puVar16 == (undefined *)0x2) {
    puVar16 = (undefined *)0x3;
  }
  else {
    param_1[2] = unaff_x25;
    param_1[3] = ppuStack_170;
    param_1[4] = unaff_x21;
    param_1[5] = ppuStack_140;
    param_1[6] = ppuStack_168;
  }
  *param_1 = puVar16;
  param_1[1] = ppuStack_138;
  return;
}

