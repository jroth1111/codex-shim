
/* WARNING: Removing unreachable block (ram,0x000100ebfa60) */
/* WARNING: Removing unreachable block (ram,0x000100ebfbf0) */
/* WARNING: Removing unreachable block (ram,0x000100ebfbd8) */
/* WARNING: Removing unreachable block (ram,0x000100ebf9f0) */
/* WARNING: Removing unreachable block (ram,0x000100ebf9ac) */
/* WARNING: Type propagation algorithm not settling */

void FUN_100ebf88c(ulong *param_1,char *param_2)

{
  byte *pbVar1;
  undefined **ppuVar2;
  long lVar3;
  char cVar4;
  undefined *puVar5;
  ulong uVar6;
  char *pcVar7;
  long *plVar8;
  byte bVar9;
  undefined *puVar10;
  undefined *unaff_x20;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined *unaff_x24;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  if (*param_2 != '\x14') {
    if (*param_2 != '\x15') {
      puStack_c8 = (undefined *)FUN_108855c40(param_2,&puStack_78,&UNK_10b2139c8);
      goto LAB_100ebfc70;
    }
    lVar14 = *(long *)(param_2 + 0x10);
    lVar12 = *(long *)(param_2 + 0x18);
    ppuStack_90 = (undefined **)0x8000000000000000;
    if (lVar12 == 0) {
      ppuStack_90 = (undefined **)0x8000000000000000;
      ppuVar16 = (undefined **)0x8000000000000001;
    }
    else {
      lVar11 = 0;
      ppuVar17 = (undefined **)0x2;
      ppuVar15 = (undefined **)0x8000000000000000;
      ppuVar16 = (undefined **)0x8000000000000001;
      ppuStack_d8 = (undefined **)0x8000000000000000;
      do {
        pbVar1 = (byte *)(lVar14 + lVar11);
        pbVar13 = pbVar1 + 0x20;
        bVar9 = *pbVar1;
        if (bVar9 < 0xd) {
          if (bVar9 == 1) {
            bVar9 = *(byte *)(lVar14 + lVar11 + 1);
            if (2 < bVar9) {
              bVar9 = 3;
            }
            uStack_d0 = (undefined **)((ulong)CONCAT61(uStack_d0._2_6_,bVar9) << 8);
          }
          else {
            if (bVar9 != 4) {
              if (bVar9 != 0xc) goto LAB_100ebfbf4;
              plVar8 = *(long **)(lVar14 + lVar11 + 0x10);
              lVar3 = *(long *)(lVar14 + lVar11 + 0x18);
              if (lVar3 != 10) {
                if (lVar3 == 5) goto LAB_100ebfa0c;
                goto LAB_100ebfa8c;
              }
              goto LAB_100ebfa64;
            }
            uVar6 = *(ulong *)(lVar14 + lVar11 + 8);
            if (2 < uVar6) {
              uVar6 = 3;
            }
            uStack_d0 = (undefined **)((ulong)CONCAT61(uStack_d0._2_6_,(char)uVar6) << 8);
          }
          goto LAB_100ebfaa0;
        }
        if (bVar9 != 0xd) {
          if (bVar9 == 0xe) {
            FUN_1009e9818(&uStack_d0,*(undefined8 *)(lVar14 + lVar11 + 0x10),
                          *(undefined8 *)(lVar14 + lVar11 + 0x18));
joined_r0x000100ebf9c4:
            if (((ulong)uStack_d0 & 1) == 0) goto LAB_100ebfaa0;
          }
          else {
            if (bVar9 == 0xf) {
              FUN_1009e9818(&uStack_d0,*(undefined8 *)(lVar14 + lVar11 + 8),
                            *(undefined8 *)(lVar14 + lVar11 + 0x10));
              goto joined_r0x000100ebf9c4;
            }
LAB_100ebfbf4:
            puStack_c8 = (undefined *)FUN_108855c40(pbVar1,&puStack_78,&UNK_10b214d08);
            uStack_d0 = (undefined **)CONCAT71(uStack_d0._1_7_,1);
          }
LAB_100ebfc28:
          *param_1 = 2;
          param_1[1] = (ulong)puStack_c8;
          ppuStack_90 = ppuStack_d8;
          puStack_88 = puStack_e0;
          puStack_80 = puStack_e8;
          goto joined_r0x000100ebfc40;
        }
        plVar8 = *(long **)(lVar14 + lVar11 + 8);
        lVar3 = *(long *)(lVar14 + lVar11 + 0x10);
        if (lVar3 == 10) {
LAB_100ebfa64:
          if (*plVar8 == 0x737275437478656e && (short)plVar8[1] == 0x726f) {
            uStack_d0 = (undefined **)CONCAT62(uStack_d0._2_6_,0x100);
            goto LAB_100ebfaa0;
          }
LAB_100ebfa8c:
          uStack_d0 = (undefined **)CONCAT62(uStack_d0._2_6_,0x300);
        }
        else {
          if (lVar3 != 5) goto LAB_100ebfa8c;
LAB_100ebfa0c:
          if ((int)*plVar8 == 0x6b736174 && *(char *)((long)plVar8 + 4) == 's') {
            uStack_d0 = (undefined **)((ulong)uStack_d0._2_6_ << 0x10);
          }
          else {
            if ((int)*plVar8 != 0x61746f74 || *(char *)((long)plVar8 + 4) != 'l')
            goto LAB_100ebfa8c;
            uStack_d0 = (undefined **)CONCAT62(uStack_d0._2_6_,0x200);
          }
        }
LAB_100ebfaa0:
        if (uStack_d0._1_1_ < 2) {
          if (uStack_d0._1_1_ == 0) {
            if (ppuVar15 != (undefined **)0x8000000000000000) {
              puStack_88 = puStack_e0;
              puStack_80 = puStack_e8;
              ppuStack_90 = ppuStack_d8;
              puStack_78 = &UNK_108cb1cc6;
              uStack_70 = 5;
              uStack_d0 = &puStack_78;
              puStack_c8 = &DAT_100c7b3a0;
              uVar6 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
              goto LAB_100ebfd0c;
            }
            FUN_10133a4e4(&uStack_d0,pbVar13);
            if (uStack_d0 == (undefined **)0x8000000000000000) {
              ppuVar15 = (undefined **)0x8000000000000000;
              goto LAB_100ebfc28;
            }
            puStack_e0 = puStack_c8;
            puStack_e8 = puStack_c0;
            ppuVar15 = uStack_d0;
            ppuStack_d8 = uStack_d0;
          }
          else {
            if (ppuVar16 != (undefined **)0x8000000000000001) {
              puStack_88 = puStack_e0;
              puStack_80 = puStack_e8;
              ppuStack_90 = ppuStack_d8;
              puStack_78 = &UNK_108cb1ccb;
              uStack_70 = 10;
              uStack_d0 = &puStack_78;
              puStack_c8 = &DAT_100c7b3a0;
              uVar6 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
              *param_1 = 2;
              param_1[1] = uVar6;
              ppuVar16 = (undefined **)((ulong)ppuVar16 & 0x7fffffffffffffff);
              goto joined_r0x000100ec0050;
            }
            bVar9 = *pbVar13;
            ppuVar16 = (undefined **)0x8000000000000000;
            if (bVar9 != 0x10) {
              if (bVar9 == 0x11) {
                FUN_1004e07f8(&uStack_d0,*(undefined8 *)(lVar14 + lVar11 + 0x28));
              }
              else {
                if (bVar9 == 0x12) goto LAB_100ebf900;
                FUN_1004e07f8(&uStack_d0,pbVar13);
              }
              puStack_100 = puStack_c8;
              if (uStack_d0 != (undefined **)0x8000000000000000) {
                puStack_f0 = puStack_c0;
              }
              ppuVar16 = uStack_d0;
              if ((long)uStack_d0 < -0x7ffffffffffffffe) {
                ppuVar16 = (undefined **)0x8000000000000001;
              }
              if (ppuVar16 == (undefined **)0x8000000000000001) {
                puStack_80 = puStack_e8;
                puStack_88 = puStack_e0;
                ppuStack_90 = ppuStack_d8;
                *param_1 = 2;
                param_1[1] = (ulong)puStack_c8;
                goto LAB_100ebfd30;
              }
            }
          }
        }
        else if (uStack_d0._1_1_ == 2) {
          if (ppuVar17 != (undefined **)0x2) {
            puStack_88 = puStack_e0;
            puStack_80 = puStack_e8;
            ppuStack_90 = ppuStack_d8;
            puStack_78 = &UNK_108ca3984;
            uStack_70 = 5;
            uStack_d0 = &puStack_78;
            puStack_c8 = &DAT_100c7b3a0;
            uVar6 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
            goto LAB_100ebfd0c;
          }
          bVar9 = *pbVar13;
          ppuVar17 = (undefined **)0x0;
          if (bVar9 != 0x10) {
            if (bVar9 == 0x11) {
              pbVar13 = *(byte **)(lVar14 + lVar11 + 0x28);
            }
            else if (bVar9 == 0x12) goto LAB_100ebf8f8;
            FUN_101438f4c(&uStack_d0,pbVar13);
            ppuVar17 = uStack_d0;
            if (uStack_d0 == (undefined **)0x2) goto LAB_100ebfc28;
          }
LAB_100ebf8f8:
          puStack_f8 = puStack_c8;
        }
LAB_100ebf900:
        lVar11 = lVar11 + 0x40;
      } while (lVar12 * 0x40 - lVar11 != 0);
      puStack_88 = puStack_e0;
      puStack_80 = puStack_e8;
      ppuStack_90 = ppuStack_d8;
      if (ppuVar15 != (undefined **)0x8000000000000000) {
        ppuVar2 = (undefined **)0x8000000000000000;
        if (ppuVar16 != (undefined **)0x8000000000000001) {
          ppuVar2 = ppuVar16;
        }
        ppuVar16 = (undefined **)0x0;
        if (ppuVar17 != (undefined **)0x2) {
          ppuVar16 = ppuVar17;
        }
        *param_1 = (ulong)ppuVar16;
        param_1[1] = (ulong)puStack_f8;
        param_1[2] = (ulong)ppuVar15;
        param_1[3] = (ulong)puStack_e0;
        param_1[4] = (ulong)puStack_e8;
        param_1[5] = (ulong)ppuVar2;
        param_1[6] = (ulong)puStack_100;
        param_1[7] = (ulong)puStack_f0;
        return;
      }
    }
    puStack_78 = &UNK_108cb1cc6;
    uStack_70 = 5;
    uStack_d0 = &puStack_78;
    puStack_c8 = &DAT_100c7b3a0;
    ppuVar15 = (undefined **)0x8000000000000000;
    uVar6 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_d0);
LAB_100ebfd0c:
    *param_1 = 2;
    param_1[1] = uVar6;
joined_r0x000100ebfc40:
    if (-0x7fffffffffffffff < (long)ppuVar16) {
joined_r0x000100ec0050:
      if (ppuVar16 != (undefined **)0x0) {
        _free(puStack_100);
      }
    }
LAB_100ebfd30:
    if (ppuVar15 == (undefined **)0x8000000000000000) {
      return;
    }
    goto LAB_100ebfdf8;
  }
  lVar14 = *(long *)(param_2 + 0x18);
  if (lVar14 == 0) {
    puStack_c8 = (undefined *)FUN_1087e422c(0,&UNK_10b224430,&UNK_10b20a590);
LAB_100ebfc70:
    *param_1 = 2;
    param_1[1] = (ulong)puStack_c8;
    return;
  }
  lVar12 = *(long *)(param_2 + 0x10);
  FUN_10133a4e4(&uStack_d0,lVar12);
  if (uStack_d0 == (undefined **)0x8000000000000000) goto LAB_100ebfc70;
  ppuStack_90 = uStack_d0;
  puStack_88 = puStack_c8;
  puStack_80 = puStack_c0;
  if (lVar14 == 1) {
    puVar5 = (undefined *)FUN_1087e422c(1,&UNK_10b224430,&UNK_10b20a590);
LAB_100ebfdf0:
    *param_1 = 2;
    param_1[1] = (ulong)puVar5;
  }
  else {
    cVar4 = *(char *)(lVar12 + 0x20);
    ppuVar16 = (undefined **)0x8000000000000000;
    puVar10 = puStack_c0;
    if (cVar4 != '\x10') {
      if (cVar4 == '\x11') {
        FUN_1004e07f8(&uStack_d0,*(undefined8 *)(lVar12 + 0x28));
      }
      else {
        if (cVar4 == '\x12') goto LAB_100ebfe20;
        FUN_1004e07f8(&uStack_d0,lVar12 + 0x20);
      }
      puVar10 = (undefined *)0x8000000000000001;
      ppuVar16 = uStack_d0;
      if ((long)uStack_d0 < -0x7ffffffffffffffe) {
        ppuVar16 = (undefined **)0x8000000000000001;
      }
      puVar5 = puStack_c8;
      unaff_x20 = puStack_c8;
      unaff_x24 = puStack_c0;
      if ((long)ppuVar16 + 0x7fffffffffffffffU < 2) goto LAB_100ebfdf0;
    }
LAB_100ebfe20:
    if (lVar14 == 2) {
      uVar6 = FUN_1087e422c(2,&UNK_10b224430,&UNK_10b20a590);
      *param_1 = 2;
      param_1[1] = uVar6;
    }
    else {
      pcVar7 = (char *)(lVar12 + 0x40);
      cVar4 = *pcVar7;
      if (cVar4 == '\x10' || cVar4 == '\x12') {
        uStack_d0 = (undefined **)0x0;
        puStack_c8 = puVar10;
LAB_100ebfeec:
        param_1[3] = (ulong)puStack_88;
        param_1[2] = (ulong)ppuStack_90;
        *param_1 = (ulong)uStack_d0;
        param_1[1] = (ulong)puStack_c8;
        param_1[4] = (ulong)puStack_80;
        param_1[5] = (ulong)ppuVar16;
        param_1[6] = (ulong)unaff_x20;
        param_1[7] = (ulong)unaff_x24;
        puStack_c8 = (undefined *)param_1[1];
        uStack_d0 = (undefined **)*param_1;
        uStack_b8 = param_1[3];
        puStack_c0 = (undefined *)param_1[2];
        uStack_a8 = param_1[5];
        uStack_b0 = param_1[4];
        uStack_98 = param_1[7];
        uStack_a0 = param_1[6];
        if (lVar14 == 3) {
          return;
        }
        ppuStack_90 = (undefined **)0x3;
        uVar6 = FUN_1087e422c((lVar14 + 0x7fffffffffffffdU & 0x7ffffffffffffff) + 3,&ppuStack_90,
                              &UNK_10b23a1b0);
        *param_1 = 2;
        param_1[1] = uVar6;
        FUN_100e2043c(&puStack_c0);
        if (uStack_a8 == 0x8000000000000000) {
          return;
        }
        if (uStack_a8 == 0) {
          return;
        }
        _free(uStack_a0);
        return;
      }
      if (cVar4 == '\x11') {
        pcVar7 = *(char **)(lVar12 + 0x48);
      }
      FUN_101438f4c(&uStack_d0,pcVar7);
      if (uStack_d0 != (undefined **)0x2) goto LAB_100ebfeec;
      *param_1 = 2;
      param_1[1] = (ulong)puStack_c8;
      uStack_d0 = (undefined **)0x2;
    }
    if (((ulong)ppuVar16 & 0x7fffffffffffffff) != 0) {
      _free(unaff_x20);
    }
  }
LAB_100ebfdf8:
  FUN_100e2043c(&ppuStack_90);
  return;
}

