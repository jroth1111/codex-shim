
/* WARNING: Type propagation algorithm not settling */

void FUN_101214c80(undefined8 *param_1,char *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  byte *pbVar9;
  int *piVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined *unaff_x20;
  long lVar13;
  byte *pbVar14;
  undefined **ppuVar15;
  long unaff_x23;
  byte *pbVar16;
  byte *pbVar17;
  undefined **ppuStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  if (*param_2 != '\x14') {
    if (*param_2 == '\x15') {
      pbVar16 = *(byte **)(param_2 + 0x10);
      if (*(long *)(param_2 + 0x18) == 0) {
        ppuVar15 = (undefined **)0x8000000000000000;
      }
      else {
        bVar5 = false;
        ppuVar15 = (undefined **)0x8000000000000000;
        pbVar2 = pbVar16 + *(long *)(param_2 + 0x18) * 0x40;
        do {
          pbVar17 = pbVar16 + 0x40;
          pbVar9 = pbVar16 + 0x20;
          bVar3 = *pbVar16;
          pbVar14 = pbVar16;
          if (bVar3 < 0xd) {
            if (bVar3 == 1) {
              bVar3 = pbVar16[1];
              if (bVar3 == 0) goto LAB_101214e58;
joined_r0x000101214e10:
              if (bVar3 == 1) {
LAB_101214fa8:
                if (ppuVar15 != (undefined **)0x8000000000000000) {
                  puStack_70 = &UNK_108cde45c;
                  uStack_68 = 4;
                  ppuStack_88 = &puStack_70;
                  puStack_80 = &DAT_100c7b3a0;
                  uVar7 = FUN_108856088(s_duplicate_field_____108ac2973,&ppuStack_88);
                  *param_1 = 0x8000000000000000;
                  param_1[1] = uVar7;
                  goto joined_r0x000101215240;
                }
                FUN_1004e02c0(&ppuStack_88,pbVar9);
                unaff_x20 = puStack_80;
                ppuVar15 = ppuStack_88;
                unaff_x23 = lStack_78;
                if (ppuStack_88 == (undefined **)0x8000000000000000) goto LAB_101215150;
              }
            }
            else {
              if (bVar3 != 4) {
                if (bVar3 == 0xc) {
                  if (*(long *)(pbVar16 + 0x18) != 4) goto LAB_101214cdc;
                  piVar10 = *(int **)(pbVar16 + 0x10);
                  if (*piVar10 != 0x65707974) goto LAB_101214e3c;
                  goto LAB_101214e58;
                }
                goto LAB_101215274;
              }
              lVar6 = *(long *)(pbVar16 + 8);
              if (lVar6 == 0) {
LAB_101214e58:
                if (!bVar5) {
                  lVar6 = FUN_1013a1c00(pbVar9);
                  if (lVar6 != 0) {
                    *param_1 = 0x8000000000000000;
                    param_1[1] = lVar6;
                    goto joined_r0x0001012150fc;
                  }
                  if (pbVar17 == pbVar2) goto LAB_10121510c;
                  bVar3 = pbVar16[0x40];
                  pbVar1 = pbVar16 + 0x80;
                  pbVar9 = pbVar16 + 0x60;
                  pbVar14 = pbVar17;
                  pbVar17 = pbVar1;
                  if (0xc < bVar3) {
                    if (bVar3 == 0xd) {
                      if (*(long *)(pbVar16 + 0x50) == 4) {
                        piVar10 = *(int **)(pbVar16 + 0x48);
                        goto LAB_101214f7c;
                      }
                    }
                    else if (bVar3 == 0xe) {
                      if (*(long *)(pbVar16 + 0x58) == 4) {
                        pcVar11 = *(char **)(pbVar16 + 0x50);
                        cVar4 = *pcVar11;
joined_r0x000101214f20:
                        bVar5 = true;
                        if (cVar4 == 'e') goto LAB_101214d74;
                        bVar5 = true;
                        if (((cVar4 != 't') || (pcVar11[1] != 'y')) ||
                           ((pcVar11[2] != 'p' || (pcVar11[3] != 'e')))) goto LAB_101214cdc;
                        goto LAB_101215180;
                      }
                    }
                    else {
                      if (bVar3 != 0xf) goto LAB_101215274;
                      if (*(long *)(pbVar16 + 0x50) == 4) {
                        pcVar11 = *(char **)(pbVar16 + 0x48);
                        cVar4 = *pcVar11;
                        goto joined_r0x000101214f20;
                      }
                    }
LAB_101214fcc:
                    bVar5 = true;
                    goto LAB_101214cdc;
                  }
                  if (bVar3 == 1) {
                    bVar3 = pbVar16[0x41];
                    if (bVar3 != 0) {
                      bVar5 = true;
                      goto joined_r0x000101214e10;
                    }
                  }
                  else if (bVar3 == 4) {
                    lVar6 = *(long *)(pbVar16 + 0x48);
                    if (lVar6 != 0) {
                      bVar5 = true;
                      goto joined_r0x000101214efc;
                    }
                  }
                  else {
                    if (bVar3 != 0xc) {
LAB_101215274:
                      uVar7 = FUN_108855c40(pbVar14,&ppuStack_88,&UNK_10b214fe8);
                      goto LAB_1012150ac;
                    }
                    if (*(long *)(pbVar16 + 0x58) != 4) goto LAB_101214fcc;
                    piVar10 = *(int **)(pbVar16 + 0x50);
LAB_101214f7c:
                    if (*piVar10 != 0x65707974) {
                      bVar5 = true;
                      if (*piVar10 == 0x6d756e65) goto LAB_101214fa8;
                      goto LAB_101214cdc;
                    }
                  }
                }
LAB_101215180:
                puStack_70 = &UNK_108cde34c;
                uStack_68 = 4;
                ppuStack_88 = &puStack_70;
                puStack_80 = &DAT_100c7b3a0;
                uVar7 = FUN_108856088(s_duplicate_field_____108ac2973,&ppuStack_88);
                goto LAB_1012150ac;
              }
joined_r0x000101214efc:
              if (lVar6 == 1) goto LAB_101214fa8;
            }
          }
          else if (bVar3 == 0xd) {
            if (*(long *)(pbVar16 + 0x10) == 4) {
              piVar10 = *(int **)(pbVar16 + 8);
              if (*piVar10 == 0x65707974) goto LAB_101214e58;
LAB_101214e3c:
              if (*piVar10 != 0x6d756e65) goto LAB_101214cdc;
              goto LAB_101214fa8;
            }
          }
          else if (bVar3 == 0xe) {
            if (*(long *)(pbVar16 + 0x18) == 4) {
              pcVar11 = *(char **)(pbVar16 + 0x10);
              cVar4 = *pcVar11;
              if (cVar4 == 'e') {
LAB_101214d74:
                if (((pcVar11[1] == 'n') && (pcVar11[2] == 'u')) && (pcVar11[3] == 'm'))
                goto LAB_101214fa8;
              }
              else {
LAB_101214dd0:
                if ((((cVar4 == 't') && (pcVar11[1] == 'y')) && (pcVar11[2] == 'p')) &&
                   (pcVar11[3] == 'e')) goto LAB_101214e58;
              }
            }
          }
          else {
            if (bVar3 != 0xf) goto LAB_101215274;
            if (*(long *)(pbVar16 + 0x10) == 4) {
              pcVar11 = *(char **)(pbVar16 + 8);
              cVar4 = *pcVar11;
              if (cVar4 != 'e') goto LAB_101214dd0;
              goto LAB_101214d74;
            }
          }
LAB_101214cdc:
          pbVar16 = pbVar17;
        } while (pbVar16 != pbVar2);
        if (bVar5) {
LAB_10121510c:
          if (ppuVar15 != (undefined **)0x8000000000000000) {
            *param_1 = ppuVar15;
            param_1[1] = unaff_x20;
            param_1[2] = unaff_x23;
            return;
          }
          puStack_70 = &UNK_108cde45c;
          uStack_68 = 4;
          ppuStack_88 = &puStack_70;
          puStack_80 = &DAT_100c7b3a0;
          puStack_80 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&ppuStack_88);
LAB_101215150:
          *param_1 = 0x8000000000000000;
          param_1[1] = puStack_80;
          return;
        }
      }
      puStack_70 = &UNK_108cde34c;
      uStack_68 = 4;
      ppuStack_88 = &puStack_70;
      puStack_80 = &DAT_100c7b3a0;
      uVar7 = FUN_108856088(s_missing_field_____108ac28f7,&ppuStack_88);
LAB_1012150ac:
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar7;
joined_r0x0001012150fc:
      if (ppuVar15 == (undefined **)0x8000000000000000) {
        return;
      }
joined_r0x000101215240:
      if (unaff_x23 != 0) {
        puVar12 = (undefined8 *)(unaff_x20 + 8);
        do {
          if (puVar12[-1] != 0) {
            _free(*puVar12);
          }
          puVar12 = puVar12 + 3;
          unaff_x23 = unaff_x23 + -1;
        } while (unaff_x23 != 0);
      }
joined_r0x0001012152ac:
      if (ppuVar15 == (undefined **)0x0) {
        return;
      }
      _free(unaff_x20);
      return;
    }
    puVar8 = (undefined *)FUN_108855c40(param_2,&ppuStack_88,&UNK_10b2141e8);
    goto LAB_1012151d4;
  }
  lVar6 = *(long *)(param_2 + 0x18);
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    lVar13 = *(long *)(param_2 + 0x10);
    puVar8 = (undefined *)FUN_1013a1c00(lVar13);
    if (puVar8 != (undefined *)0x0) goto LAB_1012151d4;
    if (lVar6 != 1) {
      FUN_1004e02c0(&ppuStack_88,lVar13 + 0x20);
      unaff_x20 = puStack_80;
      ppuVar15 = ppuStack_88;
      puVar8 = puStack_80;
      if (ppuStack_88 != (undefined **)0x8000000000000000) {
        *param_1 = ppuStack_88;
        param_1[1] = puStack_80;
        param_1[2] = lStack_78;
        if (lVar6 == 2) {
          return;
        }
        ppuStack_88 = (undefined **)0x2;
        uVar7 = FUN_1087e422c((lVar6 + 0x7fffffffffffffeU & 0x7ffffffffffffff) + 2,&ppuStack_88,
                              &UNK_10b23a1b0);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar7;
        if (lStack_78 != 0) {
          puVar12 = (undefined8 *)(unaff_x20 + 8);
          lVar6 = lStack_78;
          do {
            if (puVar12[-1] != 0) {
              _free(*puVar12);
            }
            puVar12 = puVar12 + 3;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        goto joined_r0x0001012152ac;
      }
      goto LAB_1012151d4;
    }
    uVar7 = 1;
  }
  puVar8 = (undefined *)FUN_1087e422c(uVar7,&UNK_10b22e7b8,&UNK_10b20a590);
LAB_1012151d4:
  *param_1 = 0x8000000000000000;
  param_1[1] = puVar8;
  return;
}

