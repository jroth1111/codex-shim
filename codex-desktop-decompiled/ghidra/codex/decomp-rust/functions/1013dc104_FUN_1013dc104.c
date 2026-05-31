
/* WARNING: Type propagation algorithm not settling */

void FUN_1013dc104(undefined8 *param_1,ulong *param_2)

{
  undefined8 ******ppppppuVar1;
  undefined8 *******pppppppuVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  bool bVar12;
  undefined8 *******pppppppuVar13;
  ulong uVar14;
  undefined8 *******pppppppuVar15;
  undefined8 ******ppppppuStack_178;
  undefined8 *******pppppppuStack_170;
  undefined8 *******pppppppuStack_168;
  undefined8 ******ppppppuStack_160;
  undefined8 *******pppppppuStack_158;
  undefined8 ******ppppppuStack_150;
  undefined8 ******ppppppuStack_148;
  undefined8 ******ppppppuStack_140;
  undefined8 ******ppppppuStack_138;
  undefined8 ******ppppppuStack_130;
  long *plStack_128;
  long *plStack_120;
  ulong uStack_118;
  long *plStack_110;
  undefined8 *******pppppppuStack_100;
  undefined8 *******pppppppuStack_f8;
  undefined8 ******ppppppuStack_f0;
  undefined8 *******pppppppuStack_e0;
  undefined8 *******pppppppuStack_d8;
  undefined8 ******ppppppuStack_d0;
  undefined8 *******pppppppuStack_c8;
  undefined8 *******pppppppuStack_c0;
  undefined8 ******ppppppuStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined8 *******pppppppuStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 *******pppppppuStack_98;
  undefined8 ******ppppppuStack_90;
  undefined8 ******ppppppuStack_88;
  undefined8 ******ppppppuStack_80;
  undefined8 ******ppppppuStack_78;
  undefined8 ******ppppppuStack_70;
  
  uVar14 = *param_2;
  if (uVar14 == 0x8000000000000000) {
    *param_1 = 0x8000000000000000;
    uVar14 = *param_2 ^ 0x8000000000000000;
    if (-1 < (long)*param_2) {
      uVar14 = 5;
    }
    if (uVar14 < 3) {
      return;
    }
    if (uVar14 == 3) {
      if (param_2[1] == 0) {
        return;
      }
      plVar4 = (long *)param_2[2];
    }
    else if (uVar14 == 4) {
      plVar4 = (long *)param_2[2];
      lVar9 = param_2[3] + 1;
      plVar3 = plVar4;
      while (lVar9 = lVar9 + -1, lVar9 != 0) {
        FUN_100de6690(plVar3);
        plVar3 = plVar3 + 9;
      }
      if (param_2[1] == 0) {
        return;
      }
    }
    else {
      uVar14 = param_2[4];
      if ((uVar14 != 0) && (uVar14 * 9 != -0x11)) {
        _free(param_2[3] + uVar14 * -8 + -8);
      }
      plVar4 = (long *)param_2[1];
      lVar9 = param_2[2] + 1;
      plVar3 = plVar4;
      while (lVar9 = lVar9 + -1, lVar9 != 0) {
        if (*plVar3 != 0) {
          _free(plVar3[1]);
        }
        FUN_100de6690(plVar3 + 3);
        plVar3 = plVar3 + 0xd;
      }
      if (*param_2 == 0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(plVar4);
    return;
  }
  uVar5 = uVar14 ^ 0x8000000000000000;
  if (-1 < (long)uVar14) {
    uVar5 = 5;
  }
  if (uVar5 != 4) {
    if (uVar5 == 5) {
      pppppppuVar10 = (undefined8 *******)param_2[6];
      plVar4 = (long *)param_2[1];
      uVar5 = param_2[2];
      uVar8 = param_2[4];
      if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
        _free(param_2[3] + uVar8 * -8 + -8);
      }
      plVar3 = plVar4 + uVar5 * 0xd;
      pppppppuStack_170 = (undefined8 *******)0x8000000000000005;
      plStack_128 = plVar4;
      plStack_120 = plVar4;
      uStack_118 = uVar14;
      plStack_110 = plVar3;
      if (uVar5 == 0) {
        pppppppuStack_e0 = (undefined8 *******)0x8000000000000000;
      }
      else {
        pppppppuVar13 = (undefined8 *******)0x8000000000000000;
        pppppppuVar15 = (undefined8 *******)0x8000000000000000;
        pppppppuVar11 = pppppppuVar10;
        do {
          plVar6 = plVar4 + 0xd;
          plVar7 = plVar6;
          if (*plVar4 == -0x8000000000000000) break;
          pppppppuStack_158 = (undefined8 *******)plVar4[6];
          ppppppuStack_160 = (undefined8 ******)plVar4[5];
          ppppppuStack_148 = (undefined8 ******)plVar4[8];
          ppppppuStack_150 = (undefined8 ******)plVar4[7];
          ppppppuStack_138 = (undefined8 ******)plVar4[10];
          ppppppuStack_140 = (undefined8 ******)plVar4[9];
          ppppppuStack_130 = (undefined8 ******)plVar4[0xb];
          pppppppuStack_168 = (undefined8 *******)plVar4[4];
          pppppppuStack_170 = (undefined8 *******)plVar4[3];
          if (plVar4[2] == 5) {
            bVar12 = *(int *)plVar4[1] != 0x6c6f6f74 || (char)((int *)plVar4[1])[1] != 's';
          }
          else {
            bVar12 = true;
          }
          if (*plVar4 != 0) {
            _free();
          }
          pppppppuVar2 = pppppppuStack_170;
          if (!bVar12) {
            if (pppppppuVar13 != (undefined8 *******)0x8000000000000000) {
              ppppppuStack_d0 = ppppppuStack_178;
              pppppppuStack_c8 = (undefined8 *******)&UNK_108ca26d4;
              pppppppuStack_c0 = (undefined8 *******)0x5;
              pppppppuStack_b0 = &pppppppuStack_c8;
              pppppppuStack_a8 = (undefined8 *******)&DAT_100c7b3a0;
              plStack_120 = plVar6;
              pppppppuStack_e0 = pppppppuVar15;
              pppppppuStack_d8 = pppppppuVar11;
              pppppppuStack_c0 =
                   (undefined8 *******)
                   FUN_108856088(s_duplicate_field_____108ac2973,&pppppppuStack_b0);
joined_r0x0001013dc6b8:
              pppppppuStack_c8 = (undefined8 *******)0x8000000000000000;
              if (ppppppuStack_178 != (undefined8 ******)0x0) {
                pppppppuStack_c8 = (undefined8 *******)0x8000000000000000;
                pppppppuVar10 = pppppppuVar11;
                do {
                  FUN_100e658dc(pppppppuVar10);
                  pppppppuVar10 = pppppppuVar10 + 0x12;
                  ppppppuStack_178 = (undefined8 ******)((long)ppppppuStack_178 + -1);
                } while (ppppppuStack_178 != (undefined8 ******)0x0);
              }
              if (pppppppuVar13 != (undefined8 *******)0x0) {
                _free(pppppppuVar11);
              }
              goto LAB_1013dc518;
            }
            pppppppuStack_170 = (undefined8 *******)0x8000000000000005;
            if (pppppppuVar2 == (undefined8 *******)0x8000000000000005) {
              ppppppuStack_d0 = ppppppuStack_178;
              plStack_120 = plVar6;
              pppppppuStack_e0 = pppppppuVar15;
              pppppppuStack_d8 = pppppppuVar11;
              pppppppuStack_c0 = (undefined8 *******)FUN_1088561c0(&UNK_108cde170,0x10);
              plVar6 = plStack_120;
            }
            else {
              pppppppuStack_b0 = pppppppuVar2;
              ppppppuStack_a0 = ppppppuStack_160;
              pppppppuStack_a8 = pppppppuStack_168;
              ppppppuStack_90 = ppppppuStack_150;
              pppppppuStack_98 = pppppppuStack_158;
              ppppppuStack_80 = ppppppuStack_140;
              ppppppuStack_88 = ppppppuStack_148;
              ppppppuStack_70 = ppppppuStack_130;
              ppppppuStack_78 = ppppppuStack_138;
              FUN_1013b9ef8(&pppppppuStack_c8,&pppppppuStack_b0);
              if (pppppppuStack_c8 != (undefined8 *******)0x8000000000000000) {
                ppppppuStack_178 = ppppppuStack_b8;
                pppppppuVar11 = pppppppuStack_c0;
                pppppppuVar13 = pppppppuStack_c8;
                pppppppuVar15 = pppppppuStack_c8;
                goto LAB_1013dc20c;
              }
            }
            goto LAB_1013dc510;
          }
          pppppppuStack_170 = (undefined8 *******)0x8000000000000005;
          if (pppppppuVar2 == (undefined8 *******)0x8000000000000005) {
            ppppppuStack_d0 = ppppppuStack_178;
            plStack_120 = plVar6;
            pppppppuStack_e0 = pppppppuVar15;
            pppppppuStack_d8 = pppppppuVar11;
            pppppppuStack_c0 = (undefined8 *******)FUN_1088561c0(&UNK_108cde170,0x10);
            pppppppuStack_c8 = (undefined8 *******)0x8000000000000000;
            if (pppppppuVar13 != (undefined8 *******)0x8000000000000000)
            goto joined_r0x0001013dc6b8;
            goto LAB_1013dc518;
          }
          pppppppuStack_b0 = pppppppuVar2;
          ppppppuStack_a0 = ppppppuStack_160;
          pppppppuStack_a8 = pppppppuStack_168;
          ppppppuStack_90 = ppppppuStack_150;
          pppppppuStack_98 = pppppppuStack_158;
          ppppppuStack_80 = ppppppuStack_140;
          ppppppuStack_88 = ppppppuStack_148;
          ppppppuStack_70 = ppppppuStack_130;
          ppppppuStack_78 = ppppppuStack_138;
          FUN_100de6690(&pppppppuStack_b0);
LAB_1013dc20c:
          plVar7 = plVar3;
          plVar4 = plVar6;
        } while (plVar6 != plVar3);
        ppppppuStack_d0 = ppppppuStack_178;
        plStack_120 = plVar6;
        pppppppuStack_e0 = pppppppuVar15;
        pppppppuStack_d8 = pppppppuVar11;
        if (pppppppuVar13 != (undefined8 *******)0x8000000000000000) {
          ppppppuStack_b8 = ppppppuStack_178;
          ppppppuStack_f0 = ppppppuStack_178;
          pppppppuStack_100 = pppppppuVar13;
          pppppppuStack_f8 = pppppppuVar11;
          pppppppuStack_c8 = pppppppuVar13;
          pppppppuStack_c0 = pppppppuVar11;
          if (plVar3 != plVar7) {
            pppppppuStack_c0 =
                 (undefined8 *******)FUN_1087e422c(pppppppuVar10,&UNK_10b21cb90,&UNK_10b20a590);
            pppppppuStack_c8 = (undefined8 *******)0x8000000000000000;
            FUN_100e5d4d0(&pppppppuStack_100);
          }
          FUN_100de8910(&plStack_128);
          goto joined_r0x0001013dc6dc;
        }
      }
      pppppppuStack_c8 = (undefined8 *******)&UNK_108ca26d4;
      pppppppuStack_c0 = (undefined8 *******)0x5;
      pppppppuStack_b0 = &pppppppuStack_c8;
      pppppppuStack_a8 = (undefined8 *******)&DAT_100c7b3a0;
      pppppppuStack_c0 =
           (undefined8 *******)FUN_108856088(s_missing_field_____108ac28f7,&pppppppuStack_b0);
      plVar6 = plStack_120;
LAB_1013dc510:
      plStack_120 = plVar6;
      pppppppuStack_c8 = (undefined8 *******)0x8000000000000000;
LAB_1013dc518:
      FUN_100de8910(&plStack_128);
      if (pppppppuStack_170 != (undefined8 *******)0x8000000000000005) {
        FUN_100de6690(&pppppppuStack_170);
      }
    }
    else {
      pppppppuStack_c0 =
           (undefined8 *******)FUN_108832ea0(param_2,&pppppppuStack_170,&UNK_10b21d760);
      pppppppuStack_c8 = (undefined8 *******)0x8000000000000000;
    }
    goto joined_r0x0001013dc6dc;
  }
  ppppppuVar1 = (undefined8 ******)param_2[1];
  pppppppuVar10 = (undefined8 *******)param_2[2];
  uVar5 = param_2[3];
  pppppppuVar13 = pppppppuVar10 + uVar5 * 9;
  pppppppuVar11 = pppppppuVar10;
  pppppppuStack_b0 = pppppppuVar10;
  ppppppuStack_a0 = ppppppuVar1;
  pppppppuStack_98 = pppppppuVar13;
  if (uVar5 == 0) {
LAB_1013dc39c:
    pppppppuStack_a8 = pppppppuVar11;
    pppppppuStack_c0 = (undefined8 *******)FUN_1087e422c(0,&UNK_10b2319b8,&UNK_10b20a590);
LAB_1013dc3b4:
    pppppppuStack_c8 = (undefined8 *******)0x8000000000000000;
  }
  else {
    pppppppuVar11 = pppppppuVar10 + 9;
    if ((undefined8 *******)*pppppppuVar10 == (undefined8 *******)0x8000000000000005)
    goto LAB_1013dc39c;
    ppppppuStack_160 = pppppppuVar10[2];
    pppppppuStack_168 = (undefined8 *******)pppppppuVar10[1];
    ppppppuStack_150 = pppppppuVar10[4];
    pppppppuStack_158 = (undefined8 *******)pppppppuVar10[3];
    ppppppuStack_140 = pppppppuVar10[6];
    ppppppuStack_148 = pppppppuVar10[5];
    ppppppuStack_130 = pppppppuVar10[8];
    ppppppuStack_138 = pppppppuVar10[7];
    pppppppuStack_170 = (undefined8 *******)*pppppppuVar10;
    pppppppuStack_a8 = pppppppuVar11;
    FUN_1013b9ef8(&pppppppuStack_c8,&pppppppuStack_170);
    if (pppppppuStack_c8 == (undefined8 *******)0x8000000000000000) goto LAB_1013dc3b4;
    ppppppuStack_160 = ppppppuStack_b8;
    pppppppuStack_168 = pppppppuStack_c0;
    pppppppuStack_170 = pppppppuStack_c8;
    if (uVar5 != 1) {
      pppppppuStack_c0 = (undefined8 *******)FUN_1087e422c(uVar5,&UNK_10b21cb80,&UNK_10b20a590);
      pppppppuStack_c8 = (undefined8 *******)0x8000000000000000;
      FUN_100e5d4d0(&pppppppuStack_170);
    }
  }
  lVar9 = ((ulong)((long)pppppppuVar13 - (long)pppppppuVar11) >> 3) * -0x71c71c71c71c71c7 + 1;
  while (lVar9 = lVar9 + -1, lVar9 != 0) {
    FUN_100de6690(pppppppuVar11);
    pppppppuVar11 = pppppppuVar11 + 9;
  }
  if (ppppppuVar1 != (undefined8 ******)0x0) {
    _free(pppppppuVar10);
  }
joined_r0x0001013dc6dc:
  if (((long)uVar14 < 0) && ((uVar14 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690(param_2);
  }
  if (pppppppuStack_c8 == (undefined8 *******)0x8000000000000000) {
    *param_1 = 0x8000000000000001;
    param_1[1] = pppppppuStack_c0;
  }
  else {
    param_1[1] = pppppppuStack_c0;
    *param_1 = pppppppuStack_c8;
    param_1[2] = ppppppuStack_b8;
  }
  return;
}

