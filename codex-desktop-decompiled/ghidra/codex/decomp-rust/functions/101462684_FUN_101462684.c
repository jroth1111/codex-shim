
void FUN_101462684(undefined1 *param_1,char *param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 **ppuVar4;
  undefined *puVar5;
  char cVar6;
  undefined1 uVar7;
  char *pcVar8;
  long lVar9;
  char cVar10;
  long lVar11;
  long *plVar12;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if (*param_2 == '\x14') {
    if (*(long *)(param_2 + 0x18) == 0) {
      ppuVar4 = (undefined1 **)&UNK_10b22d710;
      puVar5 = &UNK_10b20a590;
      lVar9 = 0;
    }
    else {
      pcVar8 = *(char **)(param_2 + 0x10);
      cVar6 = *pcVar8;
      cVar10 = '\x02';
      if (cVar6 != '\x10') {
        if (cVar6 == '\x11') {
          pcVar8 = *(char **)(pcVar8 + 8);
          cVar6 = *pcVar8;
        }
        else if (cVar6 == '\x12') goto LAB_101462910;
        if (cVar6 != '\0') {
LAB_1014629fc:
          uVar3 = FUN_108855c40(pcVar8,&puStack_30,&UNK_10b20a560);
          goto LAB_101462950;
        }
        cVar10 = pcVar8[1];
      }
LAB_101462910:
      uVar2 = *(long *)(param_2 + 0x18) - 1;
      if (uVar2 == 0) goto LAB_101462918;
      puStack_30 = (undefined1 *)0x1;
      puVar5 = &UNK_10b23a1b0;
      lVar9 = (uVar2 & 0x7ffffffffffffff) + 1;
      ppuVar4 = &puStack_30;
    }
    uVar3 = FUN_1087e422c(lVar9,ppuVar4,puVar5);
  }
  else {
    if (*param_2 == '\x15') {
      if (*(long *)(param_2 + 0x18) == 0) {
        cVar10 = '\x02';
      }
      else {
        lVar9 = 0;
        lVar11 = *(long *)(param_2 + 0x10);
        cVar6 = '\x03';
        do {
          bVar1 = *(byte *)(lVar11 + lVar9);
          if (bVar1 < 0xd) {
            if (bVar1 == 1) {
              if (*(char *)(lVar11 + lVar9 + 1) == '\0') {
LAB_101462860:
                if (cVar6 != '\x03') {
                  puStack_40 = &UNK_108cb7da7;
                  uStack_38 = 0xb;
                  puStack_28 = &DAT_100c7b3a0;
                  puStack_30 = (undefined1 *)&puStack_40;
                  uVar3 = FUN_108856088(s_duplicate_field_____108ac2973,&puStack_30);
                  goto LAB_101462950;
                }
                bVar1 = ((byte *)(lVar11 + lVar9))[0x20];
                cVar6 = '\x02';
                if (bVar1 != 0x10) {
                  if (bVar1 == 0x11) {
                    pcVar8 = *(char **)(lVar11 + lVar9 + 0x28);
                    if (*pcVar8 != '\0') goto LAB_1014629fc;
                    cVar6 = pcVar8[1];
                  }
                  else if (bVar1 != 0x12) {
                    if (bVar1 != 0) {
                      pcVar8 = (char *)(lVar11 + lVar9 + 0x20);
                      goto LAB_1014629fc;
                    }
                    cVar6 = *(char *)(lVar11 + lVar9 + 0x21);
                  }
                }
              }
            }
            else if (bVar1 == 4) {
              if (*(long *)(lVar11 + lVar9 + 8) == 0) goto LAB_101462860;
            }
            else {
              if (bVar1 != 0xc) {
LAB_10146299c:
                puVar5 = &UNK_10b214628;
                param_2 = (char *)(lVar11 + lVar9);
                goto LAB_1014629c0;
              }
              if ((*(long *)(lVar11 + lVar9 + 0x18) == 0xb) &&
                 (plVar12 = *(long **)(lVar11 + lVar9 + 0x10),
                 *plVar12 == 0x6e6168437473696c &&
                 *(long *)((long)plVar12 + 3) == 0x6465676e61684374)) goto LAB_101462860;
            }
          }
          else if (bVar1 == 0xd) {
            if ((*(long *)(lVar11 + lVar9 + 0x10) == 0xb) &&
               (plVar12 = *(long **)(lVar11 + lVar9 + 8),
               *plVar12 == 0x6e6168437473696c && *(long *)((long)plVar12 + 3) == 0x6465676e61684374)
               ) goto LAB_101462860;
          }
          else if (bVar1 == 0xe) {
            if (*(long *)(lVar11 + lVar9 + 0x18) == 0xb) {
              pcVar8 = *(char **)(lVar11 + lVar9 + 0x10);
              cVar10 = *pcVar8;
joined_r0x0001014627a8:
              if ((((((cVar10 == 'l') && (pcVar8[1] == 'i')) && (pcVar8[2] == 's')) &&
                   ((pcVar8[3] == 't' && (pcVar8[4] == 'C')))) &&
                  ((pcVar8[5] == 'h' && ((pcVar8[6] == 'a' && (pcVar8[7] == 'n')))))) &&
                 ((pcVar8[8] == 'g' && ((pcVar8[9] == 'e' && (pcVar8[10] == 'd'))))))
              goto LAB_101462860;
            }
          }
          else {
            if (bVar1 != 0xf) goto LAB_10146299c;
            if (*(long *)(lVar11 + lVar9 + 0x10) == 0xb) {
              pcVar8 = *(char **)(lVar11 + lVar9 + 8);
              cVar10 = *pcVar8;
              goto joined_r0x0001014627a8;
            }
          }
          lVar9 = lVar9 + 0x40;
        } while (*(long *)(param_2 + 0x18) * 0x40 - lVar9 != 0);
        cVar10 = '\x02';
        if (cVar6 != '\x03') {
          cVar10 = cVar6;
        }
      }
LAB_101462918:
      uVar7 = 0;
      param_1[1] = cVar10;
      goto LAB_101462920;
    }
    puVar5 = &UNK_10b213a88;
LAB_1014629c0:
    uVar3 = FUN_108855c40(param_2,&puStack_30,puVar5);
  }
LAB_101462950:
  *(undefined8 *)(param_1 + 8) = uVar3;
  uVar7 = 1;
LAB_101462920:
  *param_1 = uVar7;
  return;
}

