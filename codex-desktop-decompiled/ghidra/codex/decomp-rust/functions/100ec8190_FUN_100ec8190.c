
/* WARNING: Removing unreachable block (ram,0x000100ec83f4) */
/* WARNING: Removing unreachable block (ram,0x000100ec8560) */
/* WARNING: Removing unreachable block (ram,0x000100ec8430) */
/* WARNING: Removing unreachable block (ram,0x000100ec8388) */
/* WARNING: Removing unreachable block (ram,0x000100ec8344) */
/* WARNING: Type propagation algorithm not settling */

void FUN_100ec8190(ulong *param_1,char *param_2)

{
  byte *pbVar1;
  bool bVar2;
  undefined **ppuVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  ulong uVar8;
  long *plVar9;
  byte bVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined *puStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  ulong uStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  if (*param_2 == '\x14') {
    lVar14 = *(long *)(param_2 + 0x18);
    if (lVar14 == 0) {
      puStack_138 = (undefined *)FUN_1087e422c(0,&UNK_10b229f40,&UNK_10b20a590);
LAB_100ec8238:
      *param_1 = 0x8000000000000000;
      param_1[1] = (ulong)puStack_138;
      return;
    }
    lVar13 = *(long *)(param_2 + 0x10);
    FUN_1004e07f8(&uStack_140,lVar13);
    uVar8 = uStack_130;
    puStack_150 = puStack_138;
    ppuVar17 = uStack_140;
    if (uStack_140 == (undefined **)0x8000000000000000) goto LAB_100ec8238;
    if (lVar14 == 1) {
      puVar7 = (undefined *)FUN_1087e422c(1,&UNK_10b229f40,&UNK_10b20a590);
LAB_100ec8618:
      *param_1 = 0x8000000000000000;
      param_1[1] = (ulong)puVar7;
    }
    else {
      FUN_1004db9e8(&uStack_140,lVar13 + 0x20);
      puVar7 = puStack_138;
      if (uStack_140 == (undefined **)0x8000000000000005) goto LAB_100ec8618;
      ppuStack_b0 = ppuStack_128;
      uStack_b8 = uStack_130;
      uStack_a0 = uStack_118;
      puStack_a8 = puStack_120;
      uStack_90 = uStack_108;
      uStack_98 = uStack_110;
      uStack_88 = uStack_100;
      ppuStack_c8 = uStack_140;
      puStack_c0 = puStack_138;
      if (lVar14 == 2) {
        puVar7 = (undefined *)FUN_1087e422c(2,&UNK_10b229f40,&UNK_10b20a590);
LAB_100ec88e0:
        *param_1 = 0x8000000000000000;
        param_1[1] = (ulong)puVar7;
        FUN_100de6690(&ppuStack_c8);
      }
      else {
        cVar5 = *(char *)(lVar13 + 0x40);
        ppuVar18 = (undefined **)0x8000000000000000;
        uVar11 = uStack_100;
        if (cVar5 != '\x10') {
          if (cVar5 == '\x11') {
            FUN_1004e07f8(&uStack_140,*(undefined8 *)(lVar13 + 0x48));
          }
          else {
            if (cVar5 == '\x12') goto LAB_100ec88f8;
            FUN_1004e07f8(&uStack_140,lVar13 + 0x40);
          }
          ppuVar18 = uStack_140;
          if ((long)uStack_140 < -0x7ffffffffffffffe) {
            ppuVar18 = (undefined **)0x8000000000000001;
          }
          puVar7 = puStack_138;
          uVar11 = uStack_130;
          if ((long)ppuVar18 + 0x7fffffffffffffffU < 2) goto LAB_100ec88e0;
        }
LAB_100ec88f8:
        param_1[0xb] = uStack_a0;
        param_1[10] = (ulong)puStack_a8;
        param_1[0xd] = uStack_90;
        param_1[0xc] = uStack_98;
        param_1[0xe] = uStack_88;
        param_1[7] = (ulong)puStack_c0;
        param_1[6] = (ulong)ppuStack_c8;
        param_1[9] = (ulong)ppuStack_b0;
        param_1[8] = uStack_b8;
        *param_1 = (ulong)ppuVar17;
        param_1[1] = (ulong)puStack_150;
        param_1[2] = uVar8;
        param_1[3] = (ulong)ppuVar18;
        param_1[4] = (ulong)puStack_138;
        param_1[5] = uVar11;
        puStack_138 = (undefined *)param_1[1];
        uStack_140 = (undefined **)*param_1;
        ppuStack_128 = (undefined **)param_1[3];
        uStack_130 = param_1[2];
        uStack_118 = param_1[5];
        puStack_120 = (undefined *)param_1[4];
        uStack_108 = param_1[7];
        uStack_110 = param_1[6];
        uStack_f8 = param_1[9];
        uStack_100 = param_1[8];
        uStack_e8 = param_1[0xb];
        uStack_f0 = param_1[10];
        uStack_d8 = param_1[0xd];
        uStack_e0 = param_1[0xc];
        uStack_d0 = param_1[0xe];
        if (lVar14 == 3) {
          return;
        }
        ppuStack_c8 = (undefined **)0x3;
        uVar8 = FUN_1087e422c((lVar14 + 0x7fffffffffffffdU & 0x7ffffffffffffff) + 3,&ppuStack_c8,
                              &UNK_10b23a1b0);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar8;
        if (uStack_140 != (undefined **)0x0) {
          _free(puStack_138);
        }
        FUN_100de6690(&uStack_110);
        puStack_150 = puStack_120;
        ppuVar17 = ppuStack_128;
        if (ppuStack_128 == (undefined **)0x8000000000000000) {
          return;
        }
      }
    }
    if (ppuVar17 == (undefined **)0x0) {
      return;
    }
    goto LAB_100ec86c8;
  }
  if (*param_2 != '\x15') {
    uVar8 = FUN_108855c40(param_2,&puStack_80,&UNK_10b213fa8);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar8;
    return;
  }
  lVar14 = *(long *)(param_2 + 0x10);
  lVar13 = *(long *)(param_2 + 0x18);
  ppuStack_c8 = (undefined **)0x8000000000000005;
  if (lVar13 == 0) {
    ppuStack_c8 = (undefined **)0x8000000000000005;
    ppuVar17 = (undefined **)0x8000000000000001;
    ppuVar18 = (undefined **)0x8000000000000005;
LAB_100ec864c:
    puStack_80 = &UNK_108cb4e13;
    uStack_78 = 0xb;
    uStack_140 = &puStack_80;
    puStack_138 = &DAT_100c7b3a0;
    ppuVar16 = (undefined **)0x0;
    uVar8 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_140);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar8;
    bVar2 = true;
    bVar6 = true;
  }
  else {
    lVar12 = 0;
    ppuVar18 = (undefined **)0x8000000000000005;
    ppuVar16 = (undefined **)0x8000000000000000;
    ppuVar17 = (undefined **)0x8000000000000001;
    ppuStack_148 = (undefined **)0x8000000000000005;
    do {
      pbVar1 = (byte *)(lVar14 + lVar12);
      pbVar15 = pbVar1 + 0x20;
      bVar10 = *pbVar1;
      puStack_c0 = puStack_158;
      if (0xc < bVar10) {
        if (bVar10 == 0xd) {
          plVar9 = *(long **)(lVar14 + lVar12 + 8);
          lVar4 = *(long *)(lVar14 + lVar12 + 0x10);
          if (lVar4 == 5) goto LAB_100ec8434;
          if (lVar4 == 7) {
LAB_100ec83f8:
            if ((int)*plVar9 == 0x6d6d7573 && *(int *)((long)plVar9 + 3) == 0x7972616d) {
              uStack_140 = (undefined **)CONCAT62(uStack_140._2_6_,0x200);
            }
            else {
LAB_100ec8454:
              uStack_140 = (undefined **)CONCAT62(uStack_140._2_6_,0x300);
            }
          }
          else {
joined_r0x000100ec83a8:
            if ((lVar4 != 0xb) ||
               (*plVar9 != 0x54746e65746e6f63 || *(long *)((long)plVar9 + 3) != 0x65707954746e6574))
            goto LAB_100ec8454;
            uStack_140 = (undefined **)((ulong)uStack_140._2_6_ << 0x10);
          }
          goto LAB_100ec8468;
        }
        if (bVar10 != 0xe) {
          if (bVar10 != 0xf) goto LAB_100ec8564;
          func_0x000100a58b2c(&uStack_140,*(undefined8 *)(lVar14 + lVar12 + 8),
                              *(undefined8 *)(lVar14 + lVar12 + 0x10));
          if (((ulong)uStack_140 & 1) != 0) goto LAB_100ec8588;
          goto LAB_100ec8468;
        }
        func_0x000100a58b2c(&uStack_140,*(undefined8 *)(lVar14 + lVar12 + 0x10),
                            *(undefined8 *)(lVar14 + lVar12 + 0x18));
        if (((ulong)uStack_140 & 1) == 0) goto LAB_100ec8468;
LAB_100ec8588:
        *param_1 = 0x8000000000000000;
        param_1[1] = (ulong)puStack_138;
        ppuStack_c8 = ppuStack_148;
joined_r0x000100ec8ac4:
        bVar2 = true;
        bVar6 = true;
        goto joined_r0x000100ec8ac4;
      }
      if (bVar10 == 1) {
        bVar10 = *(byte *)(lVar14 + lVar12 + 1);
        if (2 < bVar10) {
          bVar10 = 3;
        }
        uStack_140 = (undefined **)((ulong)CONCAT61(uStack_140._2_6_,bVar10) << 8);
      }
      else if (bVar10 == 4) {
        uVar8 = *(ulong *)(lVar14 + lVar12 + 8);
        if (2 < uVar8) {
          uVar8 = 3;
        }
        uStack_140 = (undefined **)((ulong)CONCAT61(uStack_140._2_6_,(char)uVar8) << 8);
      }
      else {
        if (bVar10 != 0xc) {
LAB_100ec8564:
          puStack_138 = (undefined *)FUN_108855c40(pbVar1,&puStack_80,&UNK_10b214de8);
          uStack_140 = (undefined **)CONCAT71(uStack_140._1_7_,1);
          goto LAB_100ec8588;
        }
        plVar9 = *(long **)(lVar14 + lVar12 + 0x10);
        lVar4 = *(long *)(lVar14 + lVar12 + 0x18);
        if (lVar4 != 5) {
          if (lVar4 != 7) goto joined_r0x000100ec83a8;
          goto LAB_100ec83f8;
        }
LAB_100ec8434:
        if ((int)*plVar9 != 0x756c6176 || *(char *)((long)plVar9 + 4) != 'e') goto LAB_100ec8454;
        uStack_140 = (undefined **)CONCAT62(uStack_140._2_6_,0x100);
      }
LAB_100ec8468:
      if (uStack_140._1_1_ < 2) {
        if (uStack_140._1_1_ == 0) {
          if (ppuVar16 != (undefined **)0x8000000000000000) {
            ppuStack_c8 = ppuStack_148;
            puStack_80 = &UNK_108cb4e13;
            uStack_78 = 0xb;
            uStack_140 = &puStack_80;
            puStack_138 = &DAT_100c7b3a0;
            uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_140);
LAB_100ec8aac:
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar8;
            goto joined_r0x000100ec8ac4;
          }
          FUN_1004e07f8(&uStack_140,pbVar15);
          if (uStack_140 == (undefined **)0x8000000000000000) {
            ppuVar16 = (undefined **)0x0;
            *param_1 = 0x8000000000000000;
            param_1[1] = (ulong)puStack_138;
            ppuStack_c8 = ppuStack_148;
            goto joined_r0x000100ec8ac4;
          }
          puStack_150 = puStack_138;
          uStack_170 = uStack_130;
          ppuVar16 = uStack_140;
        }
        else {
          if (ppuVar18 != (undefined **)0x8000000000000005) {
            ppuStack_c8 = ppuStack_148;
            puStack_80 = &UNK_108cad90a;
            uStack_78 = 5;
            uStack_140 = &puStack_80;
            puStack_138 = &DAT_100c7b3a0;
            uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_140);
            goto LAB_100ec8aac;
          }
          FUN_1004db9e8(&uStack_140,pbVar15);
          if (uStack_140 == (undefined **)0x8000000000000005) {
            *param_1 = 0x8000000000000000;
            param_1[1] = (ulong)puStack_138;
            ppuVar18 = (undefined **)0x8000000000000005;
            ppuStack_c8 = ppuStack_148;
            goto joined_r0x000100ec8ac4;
          }
          puStack_158 = puStack_138;
          ppuStack_b0 = ppuStack_128;
          uStack_b8 = uStack_130;
          uStack_a0 = uStack_118;
          puStack_a8 = puStack_120;
          uStack_90 = uStack_108;
          uStack_98 = uStack_110;
          uStack_88 = uStack_100;
          ppuVar18 = uStack_140;
          ppuStack_148 = uStack_140;
        }
      }
      else if (uStack_140._1_1_ == 2) {
        if (ppuVar17 != (undefined **)0x8000000000000001) {
          ppuStack_c8 = ppuStack_148;
          puStack_80 = &UNK_108cae499;
          uStack_78 = 7;
          uStack_140 = &puStack_80;
          puStack_138 = &DAT_100c7b3a0;
          uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_140);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar8;
          bVar2 = true;
          goto joined_r0x000100ec8a18;
        }
        bVar10 = *pbVar15;
        ppuVar17 = (undefined **)0x8000000000000000;
        if (bVar10 != 0x10) {
          if (bVar10 == 0x11) {
            FUN_1004e07f8(&uStack_140,*(undefined8 *)(lVar14 + lVar12 + 0x28));
          }
          else {
            if (bVar10 == 0x12) goto LAB_100ec8290;
            FUN_1004e07f8(&uStack_140,pbVar15);
          }
          puStack_178 = puStack_138;
          if (uStack_140 != (undefined **)0x8000000000000000) {
            uStack_168 = uStack_130;
          }
          ppuVar17 = uStack_140;
          if ((long)uStack_140 < -0x7ffffffffffffffe) {
            ppuVar17 = (undefined **)0x8000000000000001;
          }
          if (ppuVar17 == (undefined **)0x8000000000000001) {
            ppuStack_c8 = ppuStack_148;
            *param_1 = 0x8000000000000000;
            param_1[1] = (ulong)puStack_138;
            bVar6 = true;
            goto LAB_100ec86a8;
          }
        }
      }
LAB_100ec8290:
      lVar12 = lVar12 + 0x40;
    } while (lVar13 * 0x40 - lVar12 != 0);
    ppuStack_c8 = ppuStack_148;
    puStack_c0 = puStack_158;
    if (ppuVar16 == (undefined **)0x8000000000000000) goto LAB_100ec864c;
    if (ppuVar18 != (undefined **)0x8000000000000005) {
      param_1[9] = (ulong)ppuStack_b0;
      param_1[8] = uStack_b8;
      param_1[0xb] = uStack_a0;
      param_1[10] = (ulong)puStack_a8;
      param_1[0xd] = uStack_90;
      param_1[0xc] = uStack_98;
      param_1[0xe] = uStack_88;
      ppuVar3 = (undefined **)0x8000000000000000;
      if (ppuVar17 != (undefined **)0x8000000000000001) {
        ppuVar3 = ppuVar17;
      }
      *param_1 = (ulong)ppuVar16;
      param_1[1] = (ulong)puStack_150;
      param_1[2] = uStack_170;
      param_1[3] = (ulong)ppuVar3;
      param_1[4] = (ulong)puStack_178;
      param_1[5] = uStack_168;
      param_1[6] = (ulong)ppuVar18;
      param_1[7] = (ulong)puStack_158;
      return;
    }
    puStack_80 = &UNK_108cad90a;
    uStack_78 = 5;
    uStack_140 = &puStack_80;
    puStack_138 = &DAT_100c7b3a0;
    uVar8 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_140);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar8;
    if (ppuVar16 != (undefined **)0x0) {
      _free(puStack_150);
    }
    bVar2 = false;
    bVar6 = false;
    ppuVar18 = (undefined **)0x8000000000000005;
  }
joined_r0x000100ec8ac4:
  if (ppuVar17 != (undefined **)0x8000000000000001) {
joined_r0x000100ec8a18:
    bVar6 = bVar2;
    if (((ulong)ppuVar17 & 0x7fffffffffffffff) != 0) {
      _free(puStack_178);
    }
  }
LAB_100ec86a8:
  if (ppuVar18 != (undefined **)0x8000000000000005) {
    FUN_100de6690(&ppuStack_c8);
  }
  bVar2 = false;
  if (((ulong)ppuVar16 & 0x7fffffffffffffff) != 0) {
    bVar2 = bVar6;
  }
  if (!bVar2) {
    return;
  }
LAB_100ec86c8:
  _free(puStack_150);
  return;
}

