
void FUN_101412d00(undefined1 *param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  char cVar6;
  long lVar7;
  undefined1 uVar8;
  long *plVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  if (*param_2 == '\x14') {
    lVar7 = *(long *)(param_2 + 0x18);
    if (lVar7 == 0) {
      puVar4 = (undefined8 *)&UNK_10b229f78;
      puVar5 = &UNK_10b20a590;
      lVar7 = 0;
    }
    else {
      pcVar10 = *(char **)(param_2 + 0x10);
      cVar6 = *pcVar10;
      if (cVar6 == '\x10') {
LAB_101412f80:
        uStack_60 = (undefined **)0x300;
      }
      else {
        if (cVar6 == '\x11') {
          pcVar10 = *(char **)(pcVar10 + 8);
        }
        else if (cVar6 == '\x12') goto LAB_101412f80;
        FUN_1014140e4(&uStack_60,pcVar10);
        if ((char)uStack_60 == '\x01') goto LAB_101412fe0;
      }
      uVar3 = lVar7 - 1;
      if (uVar3 == 0) {
        goto LAB_101412fb8;
      }
      uStack_60 = (undefined **)0x1;
      puVar5 = &UNK_10b23a1b0;
      lVar7 = (uVar3 & 0x7ffffffffffffff) + 1;
      puVar4 = &uStack_60;
    }
    puStack_58 = (undefined *)FUN_1087e422c(lVar7,puVar4,puVar5);
  }
  else {
    if (*param_2 == '\x15') {
      lVar7 = *(long *)(param_2 + 0x18);
      if (lVar7 == 0) {
        uStack_60._1_1_ = '\x03';
      }
      else {
        lVar11 = 0;
        lVar12 = *(long *)(param_2 + 0x10);
        cVar6 = '\x04';
        do {
          bVar1 = *(byte *)(lVar12 + lVar11);
          if (bVar1 < 0xd) {
            if (bVar1 == 1) {
              if (*(char *)(lVar12 + lVar11 + 1) == '\0') {
LAB_101412f04:
                if (cVar6 != '\x04') {
                  puStack_70 = &UNK_108cb4ea6;
                  uStack_68 = 0xb;
                  puStack_58 = &DAT_100c7b3a0;
                  uStack_60 = &puStack_70;
                  puStack_58 = (undefined *)
                               FUN_108856088(s_duplicate_field_____108ac2973,&uStack_60);
                  goto LAB_101412fe0;
                }
                bVar1 = ((byte *)(lVar12 + lVar11))[0x20];
                if (bVar1 == 0x10) {
LAB_101412d74:
                  uStack_60 = (undefined **)CONCAT62(uStack_60._2_6_,0x300);
                }
                else {
                  if (bVar1 == 0x11) {
                    FUN_1014140e4(&uStack_60,*(undefined8 *)(lVar12 + lVar11 + 0x28));
                  }
                  else {
                    if (bVar1 == 0x12) goto LAB_101412d74;
                    FUN_1014140e4(&uStack_60);
                  }
                  if (((ulong)uStack_60 & 1) != 0) goto LAB_101412fe0;
                }
                cVar6 = uStack_60._1_1_;
              }
            }
            else if (bVar1 == 4) {
              if (*(long *)(lVar12 + lVar11 + 8) == 0) goto LAB_101412f04;
            }
            else {
              if (bVar1 != 0xc) {
LAB_101413058:
                puVar5 = &UNK_10b20d520;
                param_2 = (char *)(lVar12 + lVar11);
                goto LAB_101413074;
              }
              if ((*(long *)(lVar12 + lVar11 + 0x18) == 0xb) &&
                 (plVar9 = *(long **)(lVar12 + lVar11 + 0x10),
                 *plVar9 == 0x707075536b736174 && *(long *)((long)plVar9 + 3) == 0x74726f707075536b)
                 ) goto LAB_101412f04;
            }
          }
          else if (bVar1 == 0xd) {
            if ((*(long *)(lVar12 + lVar11 + 0x10) == 0xb) &&
               (plVar9 = *(long **)(lVar12 + lVar11 + 8),
               *plVar9 == 0x707075536b736174 && *(long *)((long)plVar9 + 3) == 0x74726f707075536b))
            goto LAB_101412f04;
          }
          else if (bVar1 == 0xe) {
            if (*(long *)(lVar12 + lVar11 + 0x18) == 0xb) {
              pcVar10 = *(char **)(lVar12 + lVar11 + 0x10);
              cVar2 = *pcVar10;
joined_r0x000101412e4c:
              if ((((((cVar2 == 't') && (pcVar10[1] == 'a')) && (pcVar10[2] == 's')) &&
                   ((pcVar10[3] == 'k' && (pcVar10[4] == 'S')))) &&
                  ((pcVar10[5] == 'u' && ((pcVar10[6] == 'p' && (pcVar10[7] == 'p')))))) &&
                 ((pcVar10[8] == 'o' && ((pcVar10[9] == 'r' && (pcVar10[10] == 't'))))))
              goto LAB_101412f04;
            }
          }
          else {
            if (bVar1 != 0xf) goto LAB_101413058;
            if (*(long *)(lVar12 + lVar11 + 0x10) == 0xb) {
              pcVar10 = *(char **)(lVar12 + lVar11 + 8);
              cVar2 = *pcVar10;
              goto joined_r0x000101412e4c;
            }
          }
          lVar11 = lVar11 + 0x40;
        } while (lVar7 * 0x40 - lVar11 != 0);
        uStack_60._1_1_ = '\x03';
        if (cVar6 != '\x04') {
          uStack_60._1_1_ = cVar6;
        }
      }
LAB_101412fb8:
      uVar8 = 0;
      param_1[1] = uStack_60._1_1_;
      goto LAB_101412fe8;
    }
    puVar5 = &UNK_10b20c960;
LAB_101413074:
    puStack_58 = (undefined *)FUN_108855c40(param_2,&uStack_60,puVar5);
  }
LAB_101412fe0:
  *(undefined **)(param_1 + 8) = puStack_58;
  uVar8 = 1;
LAB_101412fe8:
  *param_1 = uVar8;
  return;
}

