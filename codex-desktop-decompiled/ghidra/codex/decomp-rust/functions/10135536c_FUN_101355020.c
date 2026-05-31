
void FUN_101355020(undefined8 *param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  int *piVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined *unaff_x20;
  byte *pbVar8;
  undefined **ppuVar9;
  long unaff_x23;
  long lVar10;
  undefined **ppuStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  if (*param_2 == '\x14') {
    lVar10 = *(long *)(param_2 + 0x18);
    if (lVar10 == 0) {
      puStack_80 = (undefined *)FUN_1087e422c(0,&UNK_10b22e628,&UNK_10b20a590);
    }
    else {
      FUN_10121b158(&ppuStack_88,*(undefined8 *)(param_2 + 0x10));
      ppuVar9 = ppuStack_88;
      if (ppuStack_88 != (undefined **)0x8000000000000000) {
        *param_1 = ppuStack_88;
        param_1[1] = puStack_80;
        param_1[2] = lStack_78;
        uVar3 = lVar10 - 1;
        if (uVar3 == 0) {
          return;
        }
        ppuStack_88 = (undefined **)0x1;
        uVar4 = FUN_1087e422c((uVar3 & 0x7ffffffffffffff) + 1,&ppuStack_88,&UNK_10b23a1b0);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar4;
        if (lStack_78 != 0) {
          puVar7 = (undefined8 *)(puStack_80 + 0x20);
          lVar10 = lStack_78;
          do {
            if (puVar7[-4] != 0) {
              _free(puVar7[-3]);
            }
            if (puVar7[-1] != 0) {
              _free(*puVar7);
            }
            puVar7 = puVar7 + 6;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        if (ppuVar9 == (undefined **)0x0) {
          return;
        }
        _free(puStack_80);
        return;
      }
    }
  }
  else {
    if (*param_2 == '\x15') {
      pbVar8 = *(byte **)(param_2 + 0x10);
      if (*(long *)(param_2 + 0x18) != 0) {
        lVar10 = *(long *)(param_2 + 0x18) << 6;
        ppuVar9 = (undefined **)0x8000000000000000;
        do {
          bVar1 = *pbVar8;
          if (bVar1 < 0xd) {
            if (bVar1 == 1) {
              if (pbVar8[1] == 0) goto LAB_1013551d8;
            }
            else if (bVar1 == 4) {
              if (*(long *)(pbVar8 + 8) == 0) goto LAB_1013551d8;
            }
            else {
              if (bVar1 != 0xc) {
LAB_101355388:
                uVar4 = FUN_108855c40(pbVar8,&ppuStack_88,&UNK_10b214ae8);
                *param_1 = 0x8000000000000000;
                param_1[1] = uVar4;
                if (ppuVar9 == (undefined **)0x8000000000000000) {
                  return;
                }
                goto LAB_1013553b4;
              }
              if (*(long *)(pbVar8 + 0x18) == 5) {
                piVar5 = *(int **)(pbVar8 + 0x10);
                if (*piVar5 != 0x4f796e61 || (char)piVar5[1] != 'f') goto LAB_1013551c4;
                goto LAB_1013551d8;
              }
            }
          }
          else if (bVar1 == 0xd) {
            if (*(long *)(pbVar8 + 0x10) == 5) {
              piVar5 = *(int **)(pbVar8 + 8);
              if (*piVar5 != 0x4f796e61 || (char)piVar5[1] != 'f') {
LAB_1013551c4:
                if (*piVar5 != 0x4f656e6f || (char)piVar5[1] != 'f') goto LAB_101355090;
              }
LAB_1013551d8:
              if (ppuVar9 != (undefined **)0x8000000000000000) {
                puStack_70 = &UNK_108cb9fa5;
                uStack_68 = 5;
                ppuStack_88 = &puStack_70;
                puStack_80 = &DAT_100c7b3a0;
                uVar4 = FUN_108856088(s_duplicate_field_____108ac2973,&ppuStack_88);
                *param_1 = 0x8000000000000000;
                param_1[1] = uVar4;
LAB_1013553b4:
                if (unaff_x23 != 0) {
                  puVar7 = (undefined8 *)(unaff_x20 + 0x20);
                  do {
                    if (puVar7[-4] != 0) {
                      _free(puVar7[-3]);
                    }
                    if (puVar7[-1] != 0) {
                      _free(*puVar7);
                    }
                    puVar7 = puVar7 + 6;
                    unaff_x23 = unaff_x23 + -1;
                  } while (unaff_x23 != 0);
                }
                if (ppuVar9 == (undefined **)0x0) {
                  return;
                }
                _free(unaff_x20);
                return;
              }
              FUN_10121b158(&ppuStack_88,pbVar8 + 0x20);
              unaff_x20 = puStack_80;
              ppuVar9 = ppuStack_88;
              unaff_x23 = lStack_78;
              if (ppuStack_88 == (undefined **)0x8000000000000000) goto LAB_1013552c8;
            }
          }
          else if (bVar1 == 0xe) {
            if (*(long *)(pbVar8 + 0x18) == 5) {
              pcVar6 = *(char **)(pbVar8 + 0x10);
              cVar2 = *pcVar6;
              if (cVar2 == 'o') goto LAB_101355120;
LAB_101355158:
              if (((cVar2 == 'a') && (pcVar6[1] == 'n')) && (pcVar6[2] == 'y')) goto LAB_101355178;
            }
          }
          else {
            if (bVar1 != 0xf) goto LAB_101355388;
            if (*(long *)(pbVar8 + 0x10) == 5) {
              pcVar6 = *(char **)(pbVar8 + 8);
              cVar2 = *pcVar6;
              if (cVar2 != 'o') goto LAB_101355158;
LAB_101355120:
              if ((pcVar6[1] == 'n') && (pcVar6[2] == 'e')) {
LAB_101355178:
                if ((pcVar6[3] == 'O') && (pcVar6[4] == 'f')) goto LAB_1013551d8;
              }
            }
          }
LAB_101355090:
          pbVar8 = pbVar8 + 0x40;
          lVar10 = lVar10 + -0x40;
        } while (lVar10 != 0);
        if (ppuVar9 != (undefined **)0x8000000000000000) {
          *param_1 = ppuVar9;
          param_1[1] = unaff_x20;
          param_1[2] = unaff_x23;
          return;
        }
      }
      puStack_70 = &UNK_108cb9fa5;
      uStack_68 = 5;
      ppuStack_88 = &puStack_70;
      puStack_80 = &DAT_100c7b3a0;
      puStack_80 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&ppuStack_88);
LAB_1013552c8:
      *param_1 = 0x8000000000000000;
      param_1[1] = puStack_80;
      return;
    }
    puStack_80 = (undefined *)FUN_108855c40(param_2,&ppuStack_88,&UNK_10b213808);
  }
  *param_1 = 0x8000000000000000;
  param_1[1] = puStack_80;
  return;
}

