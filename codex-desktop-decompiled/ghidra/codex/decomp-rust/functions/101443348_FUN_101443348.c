
/* WARNING: Removing unreachable block (ram,0x00010144356c) */
/* WARNING: Removing unreachable block (ram,0x000101443480) */
/* WARNING: Removing unreachable block (ram,0x000101443538) */
/* WARNING: Removing unreachable block (ram,0x0001014434e8) */

void FUN_101443348(undefined1 *param_1,char *param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  long *plVar3;
  byte bVar4;
  undefined *puVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  char *pcVar10;
  char cVar11;
  long lVar12;
  long lVar13;
  char cVar14;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (*param_2 == '\x14') {
    lVar7 = *(long *)(param_2 + 0x18);
    if (lVar7 == 0) {
      puStack_68 = (undefined *)FUN_1087e422c(0,&UNK_10b22e178,&UNK_10b20a590);
    }
    else {
      pcVar10 = *(char **)(param_2 + 0x10);
      cVar14 = *pcVar10;
      cVar6 = '\x02';
      if (cVar14 != '\x10') {
        if (cVar14 == '\x11') {
          param_2 = *(char **)(pcVar10 + 8);
          if (*param_2 != '\0') goto LAB_10144381c;
LAB_1014436cc:
          cVar6 = param_2[1];
        }
        else if (cVar14 != '\x12') {
          param_2 = pcVar10;
          if (cVar14 == '\0') goto LAB_1014436cc;
LAB_10144381c:
          puVar5 = &UNK_10b20a560;
          goto LAB_1014437e8;
        }
      }
      if (lVar7 == 1) {
        puStack_68 = (undefined *)FUN_1087e422c(1,&UNK_10b22e178,&UNK_10b20a590);
      }
      else {
        cVar14 = pcVar10[0x20];
        cVar11 = '\x02';
        if (cVar14 != '\x10') {
          if (cVar14 == '\x11') {
            cVar14 = **(char **)(pcVar10 + 0x28);
            param_2 = *(char **)(pcVar10 + 0x28);
          }
          else {
            param_2 = pcVar10 + 0x20;
            if (cVar14 == '\x12') goto LAB_101443710;
          }
          if (cVar14 != '\0') {
LAB_1014437cc:
            puVar5 = &UNK_10b20a560;
            goto LAB_1014437e8;
          }
          cVar11 = param_2[1];
        }
LAB_101443710:
        if (lVar7 == 2) goto LAB_101443718;
        uStack_70 = (undefined **)0x2;
        puStack_68 = (undefined *)
                     FUN_1087e422c((lVar7 + 0x7fffffffffffffeU & 0x7ffffffffffffff) + 2,&uStack_70,
                                   &UNK_10b23a1b0);
      }
    }
  }
  else {
    if (*param_2 == '\x15') {
      lVar7 = *(long *)(param_2 + 0x18);
      if (lVar7 == 0) {
        cVar6 = '\x02';
        cVar11 = '\x02';
      }
      else {
        lVar12 = 0;
        lVar13 = *(long *)(param_2 + 0x10);
        cVar14 = '\x03';
        cVar11 = '\x03';
        do {
          pbVar1 = (byte *)(lVar13 + lVar12);
          bVar4 = *pbVar1;
          uVar9 = 1;
          if (bVar4 < 0xd) {
            if (bVar4 == 1) {
              cVar6 = *(char *)(lVar13 + lVar12 + 1);
              if (cVar6 != '\x01') {
                uVar9 = 2;
              }
              uVar2 = 0;
              if (cVar6 != '\0') {
                uVar2 = uVar9;
              }
              uStack_70 = (undefined **)((ulong)CONCAT61(uStack_70._2_6_,uVar2) << 8);
            }
            else {
              if (bVar4 != 4) {
                if (bVar4 != 0xc) goto LAB_101443668;
                plVar3 = *(long **)(lVar13 + lVar12 + 0x10);
                lVar8 = *(long *)(lVar13 + lVar12 + 0x18);
                goto joined_r0x000101443434;
              }
              lVar8 = *(long *)(lVar13 + lVar12 + 8);
              uVar9 = 1;
              if (lVar8 != 1) {
                uVar9 = 2;
              }
              uVar2 = 0;
              if (lVar8 != 0) {
                uVar2 = uVar9;
              }
              uStack_70 = (undefined **)((ulong)CONCAT61(uStack_70._2_6_,uVar2) << 8);
            }
          }
          else if (bVar4 == 0xd) {
            plVar3 = *(long **)(lVar13 + lVar12 + 8);
            lVar8 = *(long *)(lVar13 + lVar12 + 0x10);
joined_r0x000101443434:
            if (lVar8 == 0xb) {
              if (*plVar3 != 0x6e6168437473696c || *(long *)((long)plVar3 + 3) != 0x6465676e61684374
                 ) {
                uVar9 = 2;
              }
              uStack_70 = (undefined **)((ulong)CONCAT61(uStack_70._2_6_,uVar9) << 8);
            }
            else if (lVar8 == 9) {
              uVar9 = 2;
              if (*plVar3 == 0x6269726373627573 && (char)plVar3[1] == 'e') {
                uVar9 = 0;
              }
              uStack_70 = (undefined **)((ulong)CONCAT61(uStack_70._2_6_,uVar9) << 8);
            }
            else {
              uStack_70 = (undefined **)CONCAT62(uStack_70._2_6_,0x200);
            }
          }
          else {
            if (bVar4 == 0xe) {
              func_0x000100b2e6b0(&uStack_70,*(undefined8 *)(lVar13 + lVar12 + 0x10),
                                  *(undefined8 *)(lVar13 + lVar12 + 0x18));
            }
            else {
              if (bVar4 != 0xf) {
LAB_101443668:
                puStack_68 = (undefined *)FUN_108855c40(pbVar1,&puStack_80,&UNK_10b215248);
                goto LAB_101443694;
              }
              func_0x000100b2e6b0(&uStack_70,*(undefined8 *)(lVar13 + lVar12 + 8),
                                  *(undefined8 *)(lVar13 + lVar12 + 0x10));
            }
            if ((char)uStack_70 == '\x01') goto LAB_101443694;
          }
          if (uStack_70._1_1_ == '\0') {
            if (cVar11 != '\x03') {
              puStack_80 = &UNK_108cb95aa;
              uStack_78 = 9;
LAB_10144379c:
              puStack_68 = &DAT_100c7b3a0;
              uStack_70 = &puStack_80;
              puStack_68 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_70);
              goto LAB_101443694;
            }
            bVar4 = pbVar1[0x20];
            cVar11 = '\x02';
            if (bVar4 != 0x10) {
              if (bVar4 == 0x11) {
                param_2 = *(char **)(lVar13 + lVar12 + 0x28);
                if (*param_2 != '\0') goto LAB_1014437cc;
                cVar11 = param_2[1];
              }
              else if (bVar4 != 0x12) {
                if (bVar4 != 0) {
LAB_1014437c4:
                  param_2 = (char *)(lVar13 + lVar12 + 0x20);
                  goto LAB_1014437cc;
                }
                cVar11 = *(char *)(lVar13 + lVar12 + 0x21);
              }
            }
          }
          else if (uStack_70._1_1_ == '\x01') {
            if (cVar14 != '\x03') {
              puStack_80 = &UNK_108cb7da7;
              uStack_78 = 0xb;
              goto LAB_10144379c;
            }
            bVar4 = pbVar1[0x20];
            cVar14 = '\x02';
            if (bVar4 != 0x10) {
              if (bVar4 == 0x11) {
                param_2 = *(char **)(lVar13 + lVar12 + 0x28);
                if (*param_2 != '\0') goto LAB_1014437cc;
                cVar14 = param_2[1];
              }
              else if (bVar4 != 0x12) {
                if (bVar4 != 0) goto LAB_1014437c4;
                cVar14 = *(char *)(lVar13 + lVar12 + 0x21);
              }
            }
          }
          lVar12 = lVar12 + 0x40;
        } while (lVar7 * 0x40 - lVar12 != 0);
        cVar6 = '\x02';
        if (cVar11 != '\x03') {
          cVar6 = cVar11;
        }
        cVar11 = '\x02';
        if (cVar14 != '\x03') {
          cVar11 = cVar14;
        }
      }
LAB_101443718:
      uVar9 = 0;
      param_1[1] = cVar6;
      param_1[2] = cVar11;
      goto LAB_101443724;
    }
    puVar5 = &UNK_10b214368;
LAB_1014437e8:
    puStack_68 = (undefined *)FUN_108855c40(param_2,&puStack_80,puVar5);
  }
LAB_101443694:
  *(undefined **)(param_1 + 8) = puStack_68;
  uVar9 = 1;
LAB_101443724:
  *param_1 = uVar9;
  return;
}

