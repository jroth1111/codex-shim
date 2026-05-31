
/* WARNING: Removing unreachable block (ram,0x0001013db840) */
/* WARNING: Removing unreachable block (ram,0x0001013db9b4) */
/* WARNING: Removing unreachable block (ram,0x0001013db87c) */
/* WARNING: Removing unreachable block (ram,0x0001013db7e8) */
/* WARNING: Removing unreachable block (ram,0x0001013db7a4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1013db67c(long *param_1,char *param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  long lVar5;
  byte bVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  char cVar10;
  ulong uVar11;
  int iVar12;
  undefined8 *puVar13;
  long lVar14;
  long unaff_x20;
  byte *pbVar15;
  long lVar16;
  long unaff_x24;
  char cVar17;
  long lVar18;
  undefined4 uStack_a4;
  byte bStack_88;
  byte bStack_87;
  undefined2 uStack_86;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  if (*param_2 != '\x14') {
    if (*param_2 != '\x15') {
      lVar9 = FUN_108855c40(param_2,&puStack_70,&UNK_10b214448);
      *param_1 = -0x8000000000000000;
      param_1[1] = lVar9;
      return;
    }
    lVar9 = *(long *)(param_2 + 0x10);
    lVar14 = *(long *)(param_2 + 0x18);
    if (lVar14 != 0) {
      lVar18 = 0;
      iVar12 = 2;
      cVar17 = '\x03';
      lVar16 = -0x8000000000000000;
      do {
        pbVar1 = (byte *)(lVar9 + lVar18);
        pbVar15 = pbVar1 + 0x20;
        bVar6 = *pbVar1;
        if (0xc < bVar6) {
          if (bVar6 == 0xd) {
            piVar4 = *(int **)(lVar9 + lVar18 + 8);
            lVar5 = *(long *)(lVar9 + lVar18 + 0x10);
joined_r0x0001013db734:
            if (lVar5 == 5) {
              if (*piVar4 != 0x61746f74 || (char)piVar4[1] != 'l') goto LAB_1013db8a0;
              bStack_87 = 1;
              bStack_88 = 0;
            }
            else if (lVar5 == 7) {
              if (*piVar4 != 0x4d736168 || *(int *)((long)piVar4 + 3) != 0x65726f4d)
              goto LAB_1013db8a0;
              bStack_87 = 2;
              bStack_88 = 0;
            }
            else if ((lVar5 == 6) && (*piVar4 == 0x756c6176 && (short)piVar4[1] == 0x7365)) {
              bStack_87 = 0;
              bStack_88 = 0;
            }
            else {
LAB_1013db8a0:
              bStack_87 = 3;
              bStack_88 = 0;
            }
            goto LAB_1013db8b4;
          }
          if (bVar6 == 0xe) {
            FUN_1009e903c(&bStack_88,*(undefined8 *)(lVar9 + lVar18 + 0x10),
                          *(undefined8 *)(lVar9 + lVar18 + 0x18));
          }
          else {
            if (bVar6 != 0xf) goto LAB_1013db9b8;
            FUN_1009e903c(&bStack_88,*(undefined8 *)(lVar9 + lVar18 + 8),
                          *(undefined8 *)(lVar9 + lVar18 + 0x10));
          }
          if ((bStack_88 & 1) == 0) goto LAB_1013db8b4;
LAB_1013db9dc:
          lVar9 = CONCAT44(uStack_7c,uStack_80);
LAB_1013db9ec:
          *param_1 = -0x8000000000000000;
          param_1[1] = lVar9;
          if (lVar16 == -0x8000000000000000) {
            return;
          }
joined_r0x0001013dbd5c:
          if (unaff_x24 != 0) {
            puVar13 = (undefined8 *)(unaff_x20 + 8);
            do {
              if (puVar13[-1] != 0) {
                _free(*puVar13);
              }
              puVar13 = puVar13 + 3;
              unaff_x24 = unaff_x24 + -1;
            } while (unaff_x24 != 0);
          }
          if (lVar16 == 0) {
            return;
          }
          goto LAB_1013dbd64;
        }
        if (bVar6 == 1) {
          bStack_87 = *(byte *)(lVar9 + lVar18 + 1);
          if (2 < bStack_87) {
            bStack_87 = 3;
          }
          bStack_88 = 0;
        }
        else {
          if (bVar6 != 4) {
            if (bVar6 != 0xc) {
LAB_1013db9b8:
              uVar8 = FUN_108855c40(pbVar1,&puStack_70,&UNK_10b214548);
              uStack_80 = (undefined4)uVar8;
              uStack_7c = (undefined4)((ulong)uVar8 >> 0x20);
              bStack_88 = 1;
              goto LAB_1013db9dc;
            }
            piVar4 = *(int **)(lVar9 + lVar18 + 0x10);
            lVar5 = *(long *)(lVar9 + lVar18 + 0x18);
            goto joined_r0x0001013db734;
          }
          uVar11 = *(ulong *)(lVar9 + lVar18 + 8);
          if (2 < uVar11) {
            uVar11 = 3;
          }
          bStack_87 = (byte)uVar11;
          bStack_88 = 0;
        }
LAB_1013db8b4:
        if (bStack_87 < 2) {
          if (bStack_87 == 0) {
            if (lVar16 != -0x8000000000000000) {
              puStack_70 = &UNK_108cb1c0b;
              uStack_68 = 6;
              bStack_88 = (byte)&puStack_70;
              bStack_87 = (byte)((ulong)&puStack_70 >> 8);
              uStack_86 = (undefined2)((ulong)&puStack_70 >> 0x10);
              iStack_84 = (int)((ulong)&puStack_70 >> 0x20);
              uStack_80 = 0xc7b3a0;
              uStack_7c = 1;
              lVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
              *param_1 = -0x8000000000000000;
              param_1[1] = lVar9;
              goto joined_r0x0001013dbd5c;
            }
            FUN_1004e02c0(&bStack_88,pbVar15);
            lVar16 = CONCAT44(iStack_84,CONCAT22(uStack_86,CONCAT11(bStack_87,bStack_88)));
            unaff_x20 = CONCAT44(uStack_7c,uStack_80);
            unaff_x24 = lStack_78;
            if (lVar16 != -0x8000000000000000) goto LAB_1013db6f0;
            goto LAB_1013dbac4;
          }
          if (iVar12 != 2) {
            puStack_70 = &UNK_108ca3984;
            uStack_68 = 5;
            bStack_88 = (byte)&puStack_70;
            bStack_87 = (byte)((ulong)&puStack_70 >> 8);
            uStack_86 = (undefined2)((ulong)&puStack_70 >> 0x10);
            iStack_84 = (int)((ulong)&puStack_70 >> 0x20);
            uStack_80 = 0xc7b3a0;
            uStack_7c = 1;
            lVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
            goto LAB_1013db9ec;
          }
          bVar6 = *pbVar15;
          iVar12 = 0;
          if (bVar6 != 0x10) {
            if (bVar6 == 0x11) {
              pbVar15 = *(byte **)(lVar9 + lVar18 + 0x28);
            }
            else if (bVar6 == 0x12) goto LAB_1013db6e8;
            FUN_10140d1b0(&bStack_88,pbVar15);
            iVar12 = iStack_84;
            if ((bStack_88 & 1) != 0) goto LAB_1013db9dc;
          }
LAB_1013db6e8:
          uStack_a4 = uStack_80;
        }
        else if (bStack_87 == 2) {
          if (cVar17 != '\x03') {
            puStack_70 = &UNK_108cb1c11;
            uStack_68 = 7;
            bStack_88 = (byte)&puStack_70;
            bStack_87 = (byte)((ulong)&puStack_70 >> 8);
            uStack_86 = (undefined2)((ulong)&puStack_70 >> 0x10);
            iStack_84 = (int)((ulong)&puStack_70 >> 0x20);
            uStack_80 = 0xc7b3a0;
            uStack_7c = 1;
            lVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
            goto LAB_1013db9ec;
          }
          bVar6 = *pbVar15;
          cVar17 = '\x02';
          if (bVar6 != 0x10) {
            if (bVar6 == 0x11) {
              pcVar7 = *(char **)(lVar9 + lVar18 + 0x28);
              if (*pcVar7 != '\0') {
LAB_1013dbdd4:
                lVar9 = FUN_108855c40(pcVar7,&puStack_70,&UNK_10b20a560);
                goto LAB_1013db9ec;
              }
              cVar17 = pcVar7[1];
            }
            else if (bVar6 != 0x12) {
              if (bVar6 != 0) {
                pcVar7 = (char *)(lVar9 + lVar18 + 0x20);
                goto LAB_1013dbdd4;
              }
              cVar17 = *(char *)(lVar9 + lVar18 + 0x21);
            }
          }
        }
LAB_1013db6f0:
        lVar18 = lVar18 + 0x40;
      } while (lVar14 * 0x40 - lVar18 != 0);
      if (lVar16 != -0x8000000000000000) {
        iVar2 = 0;
        if (iVar12 != 2) {
          iVar2 = iVar12;
        }
        uVar3 = 0;
        if (iVar12 != 2) {
          uVar3 = uStack_a4;
        }
        *(int *)(param_1 + 3) = iVar2;
        *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
        cVar10 = '\x02';
        if (cVar17 != '\x03') {
          cVar10 = cVar17;
        }
        *(char *)(param_1 + 4) = cVar10;
        *param_1 = lVar16;
        param_1[1] = unaff_x20;
        param_1[2] = unaff_x24;
        return;
      }
    }
    puStack_70 = &UNK_108cb1c0b;
    uStack_68 = 6;
    bStack_88 = (byte)&puStack_70;
    bStack_87 = (byte)((ulong)&puStack_70 >> 8);
    uStack_86 = (undefined2)((ulong)&puStack_70 >> 0x10);
    iStack_84 = (int)((ulong)&puStack_70 >> 0x20);
    uStack_80 = 0xc7b3a0;
    uStack_7c = 1;
    unaff_x20 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
LAB_1013dbac4:
    *param_1 = -0x8000000000000000;
    param_1[1] = unaff_x20;
    return;
  }
  lVar9 = *(long *)(param_2 + 0x18);
  if (lVar9 == 0) {
    unaff_x20 = FUN_1087e422c(0,&UNK_10b224360,&UNK_10b20a590);
    goto LAB_1013dbac4;
  }
  lVar18 = *(long *)(param_2 + 0x10);
  FUN_1004e02c0(&bStack_88,lVar18);
  lVar14 = CONCAT44(iStack_84,CONCAT22(uStack_86,CONCAT11(bStack_87,bStack_88)));
  unaff_x20 = CONCAT44(uStack_7c,uStack_80);
  if (lVar14 == -0x8000000000000000) goto LAB_1013dbac4;
  if (lVar9 == 1) {
    uVar8 = 1;
LAB_1013dbaf0:
    lVar9 = FUN_1087e422c(uVar8,&UNK_10b224360,&UNK_10b20a590);
LAB_1013dbb04:
    *param_1 = -0x8000000000000000;
    param_1[1] = lVar9;
  }
  else {
    cVar17 = *(char *)(lVar18 + 0x20);
    if (cVar17 == '\x10' || cVar17 == '\x12') {
      lVar16 = 0;
joined_r0x0001013dbbb4:
      if (lVar9 == 2) {
        uVar8 = 2;
        goto LAB_1013dbaf0;
      }
      pcVar7 = (char *)(lVar18 + 0x40);
      cVar17 = *pcVar7;
      cVar10 = '\x02';
      if (cVar17 != '\x10') {
        if (cVar17 == '\x11') {
          pcVar7 = *(char **)(lVar18 + 0x48);
          if (*pcVar7 != '\0') goto LAB_1013dbbe0;
LAB_1013dbc1c:
          cVar10 = pcVar7[1];
        }
        else if (cVar17 != '\x12') {
          if (cVar17 == '\0') goto LAB_1013dbc1c;
LAB_1013dbbe0:
          lVar9 = FUN_108855c40(pcVar7,&puStack_70,&UNK_10b20a560);
          goto LAB_1013dbb04;
        }
      }
      param_1[1] = unaff_x20;
      *param_1 = lVar14;
      param_1[2] = lStack_78;
      param_1[3] = lVar16;
      *(char *)(param_1 + 4) = cVar10;
      lVar14 = *param_1;
      if (lVar14 == -0x8000000000000000) {
        return;
      }
      if (lVar9 == 3) {
        return;
      }
      unaff_x20 = param_1[1];
      lVar18 = param_1[2];
      bStack_88 = 3;
      bStack_87 = 0;
      uStack_86 = 0;
      iStack_84 = 0;
      lVar9 = FUN_1087e422c((lVar9 + 0x7fffffffffffffdU & 0x7ffffffffffffff) + 3,&bStack_88,
                            &UNK_10b23a1b0);
      *param_1 = -0x8000000000000000;
      param_1[1] = lVar9;
      if (lVar18 != 0) {
        puVar13 = (undefined8 *)(unaff_x20 + 8);
        do {
          if (puVar13[-1] != 0) {
            _free(*puVar13);
          }
          puVar13 = puVar13 + 3;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      goto LAB_1013dbba4;
    }
    if (cVar17 == '\x11') {
      lVar16 = *(long *)(lVar18 + 0x28);
    }
    else {
      lVar16 = lVar18 + 0x20;
    }
    FUN_10140d1b0(&bStack_88,lVar16);
    if ((bStack_88 & 1) == 0) {
      lVar16 = CONCAT44(uStack_80,iStack_84);
      goto joined_r0x0001013dbbb4;
    }
    *param_1 = -0x8000000000000000;
    param_1[1] = CONCAT44(uStack_7c,uStack_80);
  }
  if (lStack_78 != 0) {
    puVar13 = (undefined8 *)(unaff_x20 + 8);
    lVar9 = lStack_78;
    do {
      if (puVar13[-1] != 0) {
        _free(*puVar13);
      }
      puVar13 = puVar13 + 3;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
LAB_1013dbba4:
  if (lVar14 == 0) {
    return;
  }
LAB_1013dbd64:
  _free(unaff_x20);
  return;
}

