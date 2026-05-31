
/* WARNING: Removing unreachable block (ram,0x00010143f6c8) */
/* WARNING: Removing unreachable block (ram,0x00010143f684) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10143f4f8(ulong *param_1,char *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  char cVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  ulong in_x13;
  char cVar14;
  undefined *unaff_x20;
  char *pcVar15;
  byte *pbVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  long lVar19;
  long lVar20;
  ulong uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  if (*param_2 != '\x14') {
    if (*param_2 == '\x15') {
      lVar8 = *(long *)(param_2 + 0x18);
      ppuVar17 = (undefined **)0x8000000000000000;
      if (lVar8 == 0) {
        cVar12 = '\x02';
        cVar11 = '\x02';
        cVar7 = '\x02';
        cVar13 = '\x02';
      }
      else {
        lVar19 = 0;
        lVar20 = *(long *)(param_2 + 0x10);
        cVar11 = '\x03';
        cVar12 = '\x03';
        cVar14 = '\x03';
        cVar13 = '\x03';
        ppuVar18 = (undefined **)0x8000000000000001;
        do {
          pbVar1 = (byte *)(lVar20 + lVar19);
          pbVar16 = pbVar1 + 0x20;
          bVar10 = *pbVar1;
          if (bVar10 < 0xd) {
            if (bVar10 == 1) {
              bVar10 = *(byte *)(lVar20 + lVar19 + 1);
              if (4 < bVar10) {
                bVar10 = 5;
              }
              uStack_88 = (undefined **)((ulong)CONCAT61(uStack_88._2_6_,bVar10) << 8);
            }
            else {
              if (bVar10 != 4) {
                if (bVar10 == 0xc) {
                  FUN_100a5f400(&uStack_88,*(undefined8 *)(lVar20 + lVar19 + 0x10),
                                *(undefined8 *)(lVar20 + lVar19 + 0x18));
                  goto joined_r0x00010143f69c;
                }
LAB_10143f88c:
                puStack_80 = (undefined *)FUN_108855c40(pbVar1,&puStack_70,&UNK_10b211240);
                uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,1);
                goto LAB_10143f8b0;
              }
              uVar9 = *(ulong *)(lVar20 + lVar19 + 8);
              if (4 < uVar9) {
                uVar9 = 5;
              }
              uStack_88 = (undefined **)((ulong)CONCAT61(uStack_88._2_6_,(char)uVar9) << 8);
            }
          }
          else {
            if (bVar10 == 0xd) {
              FUN_100a5f400(&uStack_88,*(undefined8 *)(lVar20 + lVar19 + 8),
                            *(undefined8 *)(lVar20 + lVar19 + 0x10));
            }
            else {
              if (bVar10 == 0xe) {
                uVar3 = *(undefined8 *)(lVar20 + lVar19 + 0x10);
                uVar6 = *(undefined8 *)(lVar20 + lVar19 + 0x18);
              }
              else {
                if (bVar10 != 0xf) goto LAB_10143f88c;
                uVar3 = *(undefined8 *)(lVar20 + lVar19 + 8);
                uVar6 = *(undefined8 *)(lVar20 + lVar19 + 0x10);
              }
              FUN_100a5f0ac(&uStack_88,uVar3,uVar6);
            }
joined_r0x00010143f69c:
            if (((ulong)uStack_88 & 1) != 0) {
LAB_10143f8b0:
              puVar4 = puStack_80;
              if ((long)ppuVar18 < -0x7ffffffffffffffe) goto LAB_10143fad8;
              goto joined_r0x00010143facc;
            }
          }
          if (2 < uStack_88._1_1_) {
            if (uStack_88._1_1_ == 3) {
              if (cVar13 != '\x03') {
                puStack_70 = &UNK_108cb5e4b;
                uStack_68 = 0xe;
                uStack_88 = &puStack_70;
                puStack_80 = &DAT_100c7b3a0;
                puVar4 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_88);
                goto LAB_10143fd04;
              }
              bVar10 = *pbVar16;
              cVar13 = '\x02';
              if (bVar10 != 0x10) {
                if (bVar10 == 0x11) {
                  pcVar2 = *(char **)(lVar20 + lVar19 + 0x28);
                  if (*pcVar2 != '\0') {
LAB_10143fcbc:
                    puVar4 = (undefined *)FUN_108855c40(pcVar2,&puStack_70,&UNK_10b20a560);
                    goto LAB_10143fd04;
                  }
                  cVar13 = pcVar2[1];
                }
                else if (bVar10 != 0x12) {
                  if (bVar10 != 0) {
                    pcVar2 = (char *)(lVar20 + lVar19 + 0x20);
                    goto LAB_10143fcbc;
                  }
                  cVar13 = *(char *)(lVar20 + lVar19 + 0x21);
                }
              }
            }
            else if (uStack_88._1_1_ == 4) {
              if (cVar14 != '\x03') {
                puStack_70 = &UNK_108cb5e59;
                uStack_68 = 0xd;
                uStack_88 = &puStack_70;
                puStack_80 = &DAT_100c7b3a0;
                puVar4 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_88);
                goto LAB_10143fd04;
              }
              bVar10 = *pbVar16;
              cVar14 = '\x02';
              if (bVar10 != 0x10) {
                if (bVar10 == 0x11) {
                  pcVar2 = *(char **)(lVar20 + lVar19 + 0x28);
                  if (*pcVar2 != '\0') {
LAB_10143fca0:
                    puVar4 = (undefined *)FUN_108855c40(pcVar2,&puStack_70,&UNK_10b20a560);
                    goto LAB_10143fd04;
                  }
                  cVar14 = pcVar2[1];
                }
                else if (bVar10 != 0x12) {
                  if (bVar10 != 0) {
                    pcVar2 = (char *)(lVar20 + lVar19 + 0x20);
                    goto LAB_10143fca0;
                  }
                  cVar14 = *(char *)(lVar20 + lVar19 + 0x21);
                }
              }
            }
            goto LAB_10143f5e8;
          }
          if (uStack_88._1_1_ == 0) {
            if (ppuVar18 != (undefined **)0x8000000000000001) {
              puStack_70 = &UNK_108ca1558;
              uStack_68 = 5;
              uStack_88 = &puStack_70;
              puStack_80 = &DAT_100c7b3a0;
              puVar4 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_88);
              ppuVar18 = (undefined **)((ulong)ppuVar18 & 0x7fffffffffffffff);
              goto joined_r0x00010143facc;
            }
            bVar10 = *pbVar16;
            ppuVar18 = (undefined **)0x8000000000000000;
            if (bVar10 != 0x10) {
              if (bVar10 == 0x11) {
                FUN_1004e07f8(&uStack_88,*(undefined8 *)(lVar20 + lVar19 + 0x28));
              }
              else {
                if (bVar10 == 0x12) goto LAB_10143f5e8;
                FUN_1004e07f8(&uStack_88,pbVar16);
              }
              if (uStack_88 != (undefined **)0x8000000000000000) {
                uStack_a0 = uStack_78;
              }
              puStack_98 = puStack_80;
              ppuVar18 = uStack_88;
              if ((long)uStack_88 < -0x7ffffffffffffffe) {
                ppuVar18 = (undefined **)0x8000000000000001;
              }
              puVar4 = puStack_80;
              if (ppuVar18 == (undefined **)0x8000000000000001) goto LAB_10143fad8;
            }
          }
          else if (uStack_88._1_1_ == 1) {
            if (cVar11 != '\x03') {
              puStack_70 = &UNK_108cb5e30;
              uStack_68 = 0xc;
              uStack_88 = &puStack_70;
              puStack_80 = &DAT_100c7b3a0;
              puVar4 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_88);
LAB_10143fd04:
              if (-0x7fffffffffffffff < (long)ppuVar18) goto joined_r0x00010143facc;
              goto LAB_10143fad8;
            }
            bVar10 = *pbVar16;
            cVar11 = '\x02';
            if (bVar10 != 0x10) {
              if (bVar10 == 0x11) {
                pcVar2 = *(char **)(lVar20 + lVar19 + 0x28);
                if (*pcVar2 != '\0') {
LAB_10143fcf4:
                  puVar4 = (undefined *)FUN_108855c40(pcVar2,&puStack_70,&UNK_10b20a560);
                  goto LAB_10143fd04;
                }
                cVar11 = pcVar2[1];
              }
              else if (bVar10 != 0x12) {
                if (bVar10 != 0) {
                  pcVar2 = (char *)(lVar20 + lVar19 + 0x20);
                  goto LAB_10143fcf4;
                }
                cVar11 = *(char *)(lVar20 + lVar19 + 0x21);
              }
            }
          }
          else {
            if (cVar12 != '\x03') {
              puStack_70 = &UNK_108cb5e3c;
              uStack_68 = 0xf;
              uStack_88 = &puStack_70;
              puStack_80 = &DAT_100c7b3a0;
              puVar4 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_88);
              goto LAB_10143fd04;
            }
            bVar10 = *pbVar16;
            cVar12 = '\x02';
            if (bVar10 != 0x10) {
              if (bVar10 == 0x11) {
                pcVar2 = *(char **)(lVar20 + lVar19 + 0x28);
                if (*pcVar2 != '\0') {
LAB_10143fcd8:
                  puVar4 = (undefined *)FUN_108855c40(pcVar2,&puStack_70,&UNK_10b20a560);
                  goto LAB_10143fd04;
                }
                cVar12 = pcVar2[1];
              }
              else if (bVar10 != 0x12) {
                if (bVar10 != 0) {
                  pcVar2 = (char *)(lVar20 + lVar19 + 0x20);
                  goto LAB_10143fcd8;
                }
                cVar12 = *(char *)(lVar20 + lVar19 + 0x21);
              }
            }
          }
LAB_10143f5e8:
          lVar19 = lVar19 + 0x40;
        } while (lVar8 * 0x40 - lVar19 != 0);
        ppuVar17 = (undefined **)0x8000000000000000;
        if (ppuVar18 != (undefined **)0x8000000000000001) {
          ppuVar17 = ppuVar18;
        }
        cVar7 = '\x02';
        if (cVar11 != '\x03') {
          cVar7 = cVar11;
        }
        cVar11 = '\x02';
        if (cVar12 != '\x03') {
          cVar11 = cVar12;
        }
        cVar12 = '\x02';
        if (cVar13 != '\x03') {
          cVar12 = cVar13;
        }
        in_x13 = uStack_a0;
        unaff_x20 = puStack_98;
        cVar13 = '\x02';
        if (cVar14 != '\x03') {
          cVar13 = cVar14;
        }
      }
      goto LAB_10143f920;
    }
    puVar4 = (undefined *)FUN_108855c40(param_2,&puStack_70,&UNK_10b20a980);
    goto LAB_10143fad8;
  }
  lVar8 = *(long *)(param_2 + 0x18);
  if (lVar8 == 0) {
    puVar4 = (undefined *)FUN_1087e422c(0,&UNK_10b22b518,&UNK_10b20a590);
    goto LAB_10143fad8;
  }
  pcVar15 = *(char **)(param_2 + 0x10);
  pcVar2 = pcVar15 + 0x20;
  cVar7 = *pcVar15;
  if (cVar7 != '\x10') {
    if (cVar7 == '\x11') {
      pcVar5 = *(char **)(pcVar15 + 8);
LAB_10143f944:
      FUN_1004e07f8(&uStack_88,pcVar5);
      ppuVar17 = uStack_88;
      if ((long)uStack_88 < -0x7ffffffffffffffe) {
        ppuVar17 = (undefined **)0x8000000000000001;
      }
      puStack_98 = puStack_80;
      in_x13 = uStack_78;
      puVar4 = puStack_80;
      if ((long)ppuVar17 + 0x7fffffffffffffffU < 2) goto LAB_10143fad8;
    }
    else {
      ppuVar17 = (undefined **)0x8000000000000000;
      pcVar5 = pcVar15;
      if (cVar7 != '\x12') goto LAB_10143f944;
    }
    if (lVar8 != 1) goto LAB_10143f998;
LAB_10143f97c:
    uVar3 = 1;
    goto LAB_10143fab0;
  }
  ppuVar17 = (undefined **)0x8000000000000000;
  if (lVar8 == 1) goto LAB_10143f97c;
LAB_10143f998:
  cVar11 = pcVar15[0x20];
  cVar7 = '\x02';
  if (cVar11 != '\x10') {
    if (cVar11 == '\x11') {
      pcVar2 = *(char **)(pcVar15 + 0x28);
      cVar11 = *pcVar2;
    }
    else if (cVar11 == '\x12') goto joined_r0x00010143f9e0;
    if (cVar11 == '\0') {
      cVar7 = pcVar2[1];
      goto joined_r0x00010143f9e0;
    }
    goto LAB_10143fb30;
  }
joined_r0x00010143f9e0:
  if (lVar8 == 2) {
    uVar3 = 2;
LAB_10143fab0:
    puVar4 = (undefined *)FUN_1087e422c(uVar3,&UNK_10b22b518,&UNK_10b20a590);
  }
  else {
    cVar12 = pcVar15[0x40];
    cVar11 = '\x02';
    if (cVar12 != '\x10') {
      if (cVar12 == '\x11') {
        pcVar2 = *(char **)(pcVar15 + 0x48);
        cVar12 = *pcVar2;
      }
      else {
        if (cVar12 == '\x12') goto LAB_10143fa58;
        pcVar2 = pcVar15 + 0x40;
      }
      if (cVar12 != '\0') goto LAB_10143fb30;
      cVar11 = pcVar2[1];
    }
LAB_10143fa58:
    if (lVar8 == 3) {
      uVar3 = 3;
      goto LAB_10143fab0;
    }
    cVar14 = pcVar15[0x60];
    cVar12 = '\x02';
    if (cVar14 != '\x10') {
      if (cVar14 == '\x11') {
        pcVar2 = *(char **)(pcVar15 + 0x68);
        cVar14 = *pcVar2;
      }
      else {
        if (cVar14 == '\x12') goto LAB_10143faa4;
        pcVar2 = pcVar15 + 0x60;
      }
      if (cVar14 != '\0') goto LAB_10143fb30;
      cVar12 = pcVar2[1];
    }
LAB_10143faa4:
    if (lVar8 == 4) {
      uVar3 = 4;
      goto LAB_10143fab0;
    }
    pcVar2 = pcVar15 + 0x80;
    cVar14 = *pcVar2;
    cVar13 = '\x02';
    if (cVar14 == '\x10') {
LAB_10143fb58:
      unaff_x20 = puStack_98;
      if (lVar8 == 5) {
LAB_10143f920:
        *param_1 = (ulong)ppuVar17;
        param_1[1] = (ulong)unaff_x20;
        param_1[2] = in_x13;
        *(char *)(param_1 + 3) = cVar7;
        *(char *)((long)param_1 + 0x19) = cVar11;
        *(char *)((long)param_1 + 0x1a) = cVar12;
        *(char *)((long)param_1 + 0x1b) = cVar13;
        return;
      }
      uStack_88 = (undefined **)0x5;
      puVar4 = (undefined *)
               FUN_1087e422c((lVar8 + 0x7fffffffffffffbU & 0x7ffffffffffffff) + 5,&uStack_88,
                             &UNK_10b23a1b0);
    }
    else {
      if (cVar14 == '\x11') {
        pcVar2 = *(char **)(pcVar15 + 0x88);
        if (*pcVar2 != '\0') goto LAB_10143fb30;
LAB_10143fb54:
        cVar13 = pcVar2[1];
        goto LAB_10143fb58;
      }
      if (cVar14 == '\x12') goto LAB_10143fb58;
      if (cVar14 == '\0') goto LAB_10143fb54;
LAB_10143fb30:
      puVar4 = (undefined *)FUN_108855c40(pcVar2,&puStack_70,&UNK_10b20a560);
    }
  }
  ppuVar18 = (undefined **)((ulong)ppuVar17 & 0x7fffffffffffffff);
joined_r0x00010143facc:
  if (ppuVar18 != (undefined **)0x0) {
    _free(puStack_98);
  }
LAB_10143fad8:
  *param_1 = 0x8000000000000002;
  param_1[1] = (ulong)puVar4;
  return;
}

