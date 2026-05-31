
/* WARNING: Type propagation algorithm not settling */

void FUN_10137e37c(long *param_1,char *param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined8 *******pppppppuVar12;
  long lVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  long lVar16;
  undefined *puStack_180;
  undefined8 *******pppppppuStack_178;
  undefined4 uStack_16c;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 *******pppppppuStack_150;
  undefined *puStack_148;
  undefined8 *******pppppppuStack_140;
  undefined *puStack_138;
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  undefined8 *******pppppppuStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 *******pppppppuStack_f0;
  undefined *puStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined *puStack_d8;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 *******pppppppuStack_c0;
  undefined *puStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  undefined8 *******pppppppuStack_90;
  undefined *puStack_88;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  undefined8 *******pppppppuStack_70;
  
  if (*param_2 != '\x14') {
    if (*param_2 != '\x15') {
      puStack_158 = (undefined *)FUN_108855c40(param_2,&uStack_160,&UNK_10b2138c8);
      goto LAB_10137ea50;
    }
    lVar9 = *(long *)(param_2 + 0x10);
    lVar13 = *(long *)(param_2 + 0x18);
    pppppppuStack_f0 = (undefined8 *******)0x8000000000000006;
    if (lVar13 == 0) {
      pppppppuStack_f0 = (undefined8 *******)0x8000000000000006;
      pppppppuVar14 = (undefined8 *******)0x8000000000000001;
      pppppppuVar15 = (undefined8 *******)0x8000000000000006;
    }
    else {
      lVar16 = 0;
      bVar4 = false;
      pppppppuVar15 = (undefined8 *******)0x8000000000000006;
      pppppppuVar14 = (undefined8 *******)0x8000000000000001;
      pppppppuVar12 = (undefined8 *******)0x8000000000000006;
      do {
        bVar2 = *(byte *)(lVar9 + lVar16);
        if (bVar2 < 0xd) {
          if (bVar2 == 1) {
            cVar3 = *(char *)(lVar9 + lVar16 + 1);
            if (cVar3 != '\0') {
              if (cVar3 == '\x01') goto LAB_10137e634;
              if (cVar3 != '\x02') goto LAB_10137e444;
LAB_10137e5cc:
              if (pppppppuVar15 == (undefined8 *******)0x8000000000000006) {
                bVar2 = ((byte *)(lVar9 + lVar16))[0x20];
                pppppppuVar12 = (undefined8 *******)0x8000000000000005;
                if (bVar2 != 0x10) {
                  if (bVar2 == 0x11) {
                    FUN_1004db9e8(&uStack_160,*(undefined8 *)(lVar9 + lVar16 + 0x28));
                  }
                  else {
                    if (bVar2 == 0x12) goto LAB_10137e428;
                    FUN_1004db9e8(&uStack_160);
                  }
                  pppppppuVar12 = (undefined8 *******)0x8000000000000006;
                  if (uStack_160 != (undefined8 *******)0x8000000000000005) {
                    puStack_98 = puStack_148;
                    pppppppuStack_a0 = pppppppuStack_150;
                    puStack_88 = puStack_138;
                    pppppppuStack_90 = pppppppuStack_140;
                    puStack_78 = puStack_128;
                    pppppppuStack_80 = pppppppuStack_130;
                    pppppppuStack_70 = pppppppuStack_120;
                    pppppppuVar12 = uStack_160;
                  }
                  puStack_180 = puStack_158;
                  if (pppppppuVar12 == (undefined8 *******)0x8000000000000006) {
                    *param_1 = -0x7fffffffffffffff;
                    param_1[1] = (long)puStack_158;
                    goto LAB_10137e7ec;
                  }
                }
LAB_10137e428:
                puStack_d8 = puStack_98;
                pppppppuStack_e0 = pppppppuStack_a0;
                puStack_c8 = puStack_88;
                pppppppuStack_d0 = pppppppuStack_90;
                puStack_b8 = puStack_78;
                pppppppuStack_c0 = pppppppuStack_80;
                pppppppuStack_b0 = pppppppuStack_70;
                pppppppuVar15 = pppppppuVar12;
                goto LAB_10137e444;
              }
              puStack_e8 = puStack_180;
              pppppppuStack_a0 = (undefined8 *******)&UNK_108c61024;
              puStack_98 = (undefined *)0x4;
              uStack_160 = &pppppppuStack_a0;
              puStack_158 = &DAT_100c7b3a0;
              pppppppuStack_f0 = pppppppuVar12;
              lVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_160);
              *param_1 = -0x7fffffffffffffff;
              param_1[1] = lVar9;
              if (pppppppuVar15 == (undefined8 *******)0x8000000000000005) goto LAB_10137e7ec;
              goto LAB_10137e7e4;
            }
          }
          else {
            if (bVar2 != 4) {
              if (bVar2 == 0xc) {
                piVar11 = *(int **)(lVar9 + lVar16 + 0x10);
                lVar10 = *(long *)(lVar9 + lVar16 + 0x18);
                if (lVar10 == 7) goto LAB_10137e610;
LAB_10137e488:
                if (lVar10 == 4) {
                  if (*piVar11 == 0x65646f63) goto LAB_10137e690;
                  if (*piVar11 == 0x61746164) goto LAB_10137e5cc;
                }
                goto LAB_10137e444;
              }
LAB_10137ea8c:
              puStack_e8 = puStack_180;
              pppppppuStack_f0 = pppppppuVar12;
              puVar6 = (undefined *)FUN_108855c40(lVar9 + lVar16,&uStack_160,&UNK_10b214f88);
              goto LAB_10137e7c8;
            }
            lVar10 = *(long *)(lVar9 + lVar16 + 8);
            if (lVar10 != 0) {
              if (lVar10 != 1) {
                if (lVar10 == 2) goto LAB_10137e5cc;
                goto LAB_10137e444;
              }
              goto LAB_10137e634;
            }
          }
LAB_10137e690:
          if (bVar4) {
            puStack_e8 = puStack_180;
            pppppppuStack_a0 = (undefined8 *******)&UNK_108c520a8;
            puStack_98 = (undefined *)0x4;
            uStack_160 = &pppppppuStack_a0;
            puStack_158 = &DAT_100c7b3a0;
            pppppppuStack_f0 = pppppppuVar12;
            puVar6 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_160);
            goto LAB_10137e7c8;
          }
          FUN_101333bac(&uStack_160);
          if ((int)uStack_160 == 1) {
            puStack_e8 = puStack_180;
            puVar6 = puStack_158;
            pppppppuStack_f0 = pppppppuVar12;
            goto LAB_10137e7c8;
          }
          uStack_16c = uStack_160._4_4_;
          bVar4 = true;
        }
        else if (bVar2 == 0xd) {
          piVar11 = *(int **)(lVar9 + lVar16 + 8);
          lVar10 = *(long *)(lVar9 + lVar16 + 0x10);
          if (lVar10 != 7) goto LAB_10137e488;
LAB_10137e610:
          if (*piVar11 != 0x7373656d || *(int *)((long)piVar11 + 3) != 0x65676173)
          goto LAB_10137e444;
LAB_10137e634:
          if (pppppppuVar14 != (undefined8 *******)0x8000000000000001) {
            puStack_e8 = puStack_180;
            pppppppuStack_a0 = (undefined8 *******)&UNK_108ca1064;
            puStack_98 = (undefined *)0x7;
            uStack_160 = &pppppppuStack_a0;
            puStack_158 = &DAT_100c7b3a0;
            pppppppuStack_f0 = pppppppuVar12;
            puVar6 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_160);
            goto LAB_10137e7c8;
          }
          FUN_1004e07f8(&uStack_160);
          if (uStack_160 == (undefined8 *******)0x8000000000000000) {
            puStack_e8 = puStack_180;
            pppppppuVar14 = (undefined8 *******)0x8000000000000001;
            puVar6 = puStack_158;
            pppppppuStack_f0 = pppppppuVar12;
            goto LAB_10137e7c8;
          }
          puStack_168 = puStack_158;
          pppppppuStack_178 = pppppppuStack_150;
          pppppppuVar14 = uStack_160;
        }
        else {
          if (bVar2 == 0xe) {
            pcVar1 = *(char **)(lVar9 + lVar16 + 0x10);
            lVar10 = *(long *)(lVar9 + lVar16 + 0x18);
          }
          else {
            if (bVar2 != 0xf) goto LAB_10137ea8c;
            pcVar1 = *(char **)(lVar9 + lVar16 + 8);
            lVar10 = *(long *)(lVar9 + lVar16 + 0x10);
          }
          if (lVar10 == 7) {
            if (((*pcVar1 == 'm') && (pcVar1[1] == 'e')) &&
               ((pcVar1[2] == 's' &&
                ((((pcVar1[3] == 's' && (pcVar1[4] == 'a')) && (pcVar1[5] == 'g')) &&
                 (pcVar1[6] == 'e')))))) goto LAB_10137e634;
          }
          else if (lVar10 == 4) {
            if (*pcVar1 == 'c') {
              if (((pcVar1[1] == 'o') && (pcVar1[2] == 'd')) && (pcVar1[3] == 'e'))
              goto LAB_10137e690;
            }
            else if (((*pcVar1 == 'd') && (pcVar1[1] == 'a')) &&
                    ((pcVar1[2] == 't' && (pcVar1[3] == 'a')))) goto LAB_10137e5cc;
          }
        }
LAB_10137e444:
        lVar16 = lVar16 + 0x40;
      } while (lVar13 * 0x40 - lVar16 != 0);
      puStack_e8 = puStack_180;
      pppppppuStack_f0 = pppppppuVar12;
      if (bVar4) {
        if (pppppppuVar14 != (undefined8 *******)0x8000000000000001) {
          if (pppppppuVar15 == (undefined8 *******)0x8000000000000006) {
            pppppppuVar15 = (undefined8 *******)0x8000000000000005;
          }
          else {
            puStack_158 = puStack_d8;
            uStack_160 = pppppppuStack_e0;
            puStack_148 = puStack_c8;
            pppppppuStack_150 = pppppppuStack_d0;
            puStack_138 = puStack_b8;
            pppppppuStack_140 = pppppppuStack_c0;
            pppppppuStack_130 = pppppppuStack_b0;
          }
          *param_1 = (long)pppppppuVar14;
          param_1[1] = (long)puStack_168;
          param_1[2] = (long)pppppppuStack_178;
          param_1[3] = (long)pppppppuVar15;
          param_1[4] = (long)puStack_180;
          param_1[6] = (long)puStack_158;
          param_1[5] = (long)uStack_160;
          param_1[8] = (long)puStack_148;
          param_1[7] = (long)pppppppuStack_150;
          param_1[10] = (long)puStack_138;
          param_1[9] = (long)pppppppuStack_140;
          param_1[0xb] = (long)pppppppuStack_130;
          *(undefined4 *)(param_1 + 0xc) = uStack_16c;
          return;
        }
        pppppppuStack_a0 = (undefined8 *******)&UNK_108ca1064;
        puStack_98 = (undefined *)0x7;
        uStack_160 = &pppppppuStack_a0;
        puStack_158 = &DAT_100c7b3a0;
        pppppppuVar14 = (undefined8 *******)0x8000000000000001;
        puVar6 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_160);
        goto LAB_10137e7c8;
      }
    }
    pppppppuStack_a0 = (undefined8 *******)&UNK_108c520a8;
    puStack_98 = (undefined *)0x4;
    uStack_160 = &pppppppuStack_a0;
    puStack_158 = &DAT_100c7b3a0;
    puVar6 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_160);
LAB_10137e7c8:
    *param_1 = -0x7fffffffffffffff;
    param_1[1] = (long)puVar6;
    if ((undefined *)0x1 < (undefined *)((long)pppppppuVar15 + 0x7ffffffffffffffb)) {
LAB_10137e7e4:
      FUN_100de6690(&pppppppuStack_f0);
    }
LAB_10137e7ec:
    if ((-0x7fffffffffffffff < (long)pppppppuVar14) && (pppppppuVar14 != (undefined8 *******)0x0)) {
      _free(puStack_168);
    }
    return;
  }
  lVar9 = *(long *)(param_2 + 0x18);
  if (lVar9 == 0) {
    uVar8 = 0;
  }
  else {
    lVar13 = *(long *)(param_2 + 0x10);
    FUN_101333bac(&uStack_160,lVar13);
    if (((ulong)uStack_160 & 1) != 0) goto LAB_10137ea50;
    if (lVar9 != 1) {
      uVar5 = uStack_160._4_4_;
      puVar7 = (undefined *)FUN_1004e07f8(&uStack_160,lVar13 + 0x20);
      pppppppuVar15 = pppppppuStack_150;
      puVar6 = puStack_158;
      pppppppuVar14 = uStack_160;
      if (uStack_160 != (undefined8 *******)0x8000000000000000) {
        if (lVar9 == 2) {
          puStack_158 = (undefined *)FUN_1087e422c(2,&UNK_10b224280,&UNK_10b20a590);
LAB_10137e82c:
          *param_1 = -0x7fffffffffffffff;
          param_1[1] = (long)puStack_158;
          if (pppppppuVar14 == (undefined8 *******)0x0) {
            return;
          }
          _free(puVar6);
          return;
        }
        cVar3 = *(char *)(lVar13 + 0x40);
        pppppppuVar12 = (undefined8 *******)0x8000000000000005;
        if (cVar3 != '\x10') {
          if (cVar3 == '\x11') {
            FUN_1004db9e8(&uStack_160,*(undefined8 *)(lVar13 + 0x48));
          }
          else {
            if (cVar3 == '\x12') goto LAB_10137e974;
            FUN_1004db9e8(&uStack_160,lVar13 + 0x40);
          }
          pppppppuVar12 = (undefined8 *******)0x8000000000000006;
          if (uStack_160 != (undefined8 *******)0x8000000000000005) {
            puStack_e8 = puStack_148;
            pppppppuStack_f0 = pppppppuStack_150;
            puStack_d8 = puStack_138;
            pppppppuStack_e0 = pppppppuStack_140;
            puStack_c8 = puStack_128;
            pppppppuStack_d0 = pppppppuStack_130;
            pppppppuStack_c0 = pppppppuStack_120;
            pppppppuVar12 = uStack_160;
          }
          puVar7 = puStack_158;
          if (pppppppuVar12 == (undefined8 *******)0x8000000000000006) goto LAB_10137e82c;
        }
LAB_10137e974:
        param_1[6] = (long)puStack_e8;
        param_1[5] = (long)pppppppuStack_f0;
        param_1[8] = (long)puStack_d8;
        param_1[7] = (long)pppppppuStack_e0;
        param_1[10] = (long)puStack_c8;
        param_1[9] = (long)pppppppuStack_d0;
        param_1[0xb] = (long)pppppppuStack_c0;
        *param_1 = (long)pppppppuVar14;
        param_1[1] = (long)puVar6;
        param_1[2] = (long)pppppppuVar15;
        param_1[3] = (long)pppppppuVar12;
        param_1[4] = (long)puVar7;
        *(undefined4 *)(param_1 + 0xc) = uVar5;
        puStack_158 = (undefined *)param_1[1];
        uStack_160 = (undefined8 *******)*param_1;
        puStack_148 = (undefined *)param_1[3];
        pppppppuStack_150 = (undefined8 *******)param_1[2];
        puStack_138 = (undefined *)param_1[5];
        pppppppuStack_140 = (undefined8 *******)param_1[4];
        puStack_128 = (undefined *)param_1[7];
        pppppppuStack_130 = (undefined8 *******)param_1[6];
        lStack_118 = param_1[9];
        pppppppuStack_120 = (undefined8 *******)param_1[8];
        lStack_108 = param_1[0xb];
        lStack_110 = param_1[10];
        lStack_100 = param_1[0xc];
        if (lVar9 == 3) {
          return;
        }
        pppppppuStack_f0 = (undefined8 *******)0x3;
        lVar9 = FUN_1087e422c((lVar9 + 0x7fffffffffffffdU & 0x7ffffffffffffff) + 3,&pppppppuStack_f0
                              ,&UNK_10b23a1b0);
        *param_1 = -0x7fffffffffffffff;
        param_1[1] = lVar9;
        if ((uStack_160 != (undefined8 *******)0x8000000000000000) &&
           (uStack_160 != (undefined8 *******)0x0)) {
          _free(puStack_158);
        }
        if (puStack_148 == (undefined *)0x8000000000000005) {
          return;
        }
        FUN_100de6690(&puStack_148);
        return;
      }
      goto LAB_10137ea50;
    }
    uVar8 = 1;
  }
  puStack_158 = (undefined *)FUN_1087e422c(uVar8,&UNK_10b224280,&UNK_10b20a590);
LAB_10137ea50:
  *param_1 = -0x7fffffffffffffff;
  param_1[1] = (long)puStack_158;
  return;
}

