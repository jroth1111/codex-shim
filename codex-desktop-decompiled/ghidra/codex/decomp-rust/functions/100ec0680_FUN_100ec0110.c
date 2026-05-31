
/* WARNING: Removing unreachable block (ram,0x000100ec03b8) */
/* WARNING: Removing unreachable block (ram,0x000100ec0304) */
/* WARNING: Removing unreachable block (ram,0x000100ec056c) */
/* WARNING: Removing unreachable block (ram,0x000100ec0584) */
/* WARNING: Removing unreachable block (ram,0x000100ec0348) */

void FUN_100ec0110(ulong *param_1,char *param_2)

{
  byte *pbVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong *puVar7;
  long *plVar8;
  byte bVar9;
  undefined ***pppuVar10;
  undefined **in_x13;
  bool bVar11;
  long lVar12;
  char *pcVar13;
  undefined *puVar14;
  undefined ***pppuVar15;
  long lVar16;
  ulong *unaff_x23;
  long lVar17;
  byte *pbVar18;
  undefined ***pppuVar19;
  undefined **unaff_x26;
  undefined ***pppuVar20;
  undefined ***pppuVar21;
  long lVar22;
  undefined **ppuStack_1c8;
  ulong *puStack_1c0;
  ulong *puStack_1b8;
  ulong *puStack_1b0;
  undefined **ppuStack_1a8;
  ulong *puStack_1a0;
  ulong *puStack_198;
  undefined8 uStack_190;
  ulong *puStack_188;
  undefined **ppuStack_180;
  undefined *puStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined ***pppuStack_110;
  ulong *puStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined ***pppuStack_c8;
  ulong *puStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  if (*param_2 == '\x14') {
    lVar16 = *(long *)(param_2 + 0x18);
    if (lVar16 == 0) {
      puStack_108 = (ulong *)FUN_1087e422c(0,&UNK_10b224440,&UNK_10b20a590);
      goto LAB_100ec0a54;
    }
    pcVar13 = *(char **)(param_2 + 0x10);
    cVar3 = *pcVar13;
    pppuVar10 = (undefined ***)0x8000000000000000;
    puStack_108 = param_1;
    if (cVar3 != '\x10') {
      if (cVar3 == '\x11') {
        FUN_1004de164(&uStack_190,*(undefined8 *)(pcVar13 + 8));
        pppuVar10 = uStack_190;
        puStack_108 = puStack_188;
      }
      else {
        if (cVar3 == '\x12') goto LAB_100ec076c;
        FUN_1004de164(&uStack_190,pcVar13);
        pppuVar10 = uStack_190;
        puStack_108 = puStack_188;
      }
      if ((pppuVar10 == (undefined ***)0x8000000000000000) ||
         (uStack_190 = pppuVar10, puStack_188 = puStack_108, ppuStack_b0 = ppuStack_180,
         puStack_a8 = puStack_178, uStack_a0 = uStack_170, uStack_98 = uStack_168,
         uStack_90 = uStack_160, uStack_88 = uStack_158, uStack_80 = uStack_150,
         pppuVar10 == (undefined ***)0x8000000000000001)) {
LAB_100ec0a54:
        *param_1 = 0x8000000000000000;
        param_1[1] = (ulong)puStack_108;
        return;
      }
    }
LAB_100ec076c:
    puStack_f8 = puStack_a8;
    ppuStack_100 = ppuStack_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_d0 = uStack_80;
    pppuStack_110 = pppuVar10;
    if (lVar16 == 1) {
      puVar7 = (ulong *)FUN_1087e422c(1,&UNK_10b224440,&UNK_10b20a590);
LAB_100ec0898:
      *param_1 = 0x8000000000000000;
      param_1[1] = (ulong)puVar7;
    }
    else {
      cVar3 = pcVar13[0x20];
      pppuVar19 = (undefined ***)0x8000000000000000;
      if (cVar3 != '\x10') {
        if (cVar3 == '\x11') {
          FUN_1004e07f8(&uStack_190,*(undefined8 *)(pcVar13 + 0x28));
        }
        else {
          if (cVar3 == '\x12') goto LAB_100ec08b0;
          FUN_1004e07f8(&uStack_190,pcVar13 + 0x20);
        }
        pppuVar19 = uStack_190;
        if ((long)uStack_190 < -0x7ffffffffffffffe) {
          pppuVar19 = (undefined ***)0x8000000000000001;
        }
        puVar7 = puStack_188;
        unaff_x23 = puStack_188;
        unaff_x26 = ppuStack_180;
        if ((long)pppuVar19 + 0x7fffffffffffffffU < 2) goto LAB_100ec0898;
      }
LAB_100ec08b0:
      if (lVar16 == 2) {
        puVar7 = (ulong *)FUN_1087e422c(2,&UNK_10b224440,&UNK_10b20a590);
      }
      else {
        FUN_10135bc4c(&uStack_190,pcVar13 + 0x40);
        puVar7 = puStack_188;
        if (uStack_190 != (undefined ***)0x8000000000000000) {
          param_1[6] = (ulong)puStack_f8;
          param_1[5] = (ulong)ppuStack_100;
          param_1[8] = uStack_e8;
          param_1[7] = uStack_f0;
          param_1[10] = uStack_d8;
          param_1[9] = uStack_e0;
          param_1[4] = (ulong)puStack_108;
          param_1[3] = (ulong)pppuStack_110;
          *param_1 = (ulong)uStack_190;
          param_1[1] = (ulong)puStack_188;
          param_1[2] = (ulong)ppuStack_180;
          param_1[0xb] = uStack_d0;
          param_1[0xc] = (ulong)pppuVar19;
          param_1[0xd] = (ulong)unaff_x23;
          param_1[0xe] = (ulong)unaff_x26;
          puStack_188 = (ulong *)param_1[1];
          uStack_190 = (undefined ***)*param_1;
          puStack_178 = (undefined *)param_1[3];
          ppuStack_180 = (undefined **)param_1[2];
          uStack_168 = param_1[5];
          uStack_170 = param_1[4];
          uStack_158 = param_1[7];
          uStack_160 = param_1[6];
          uStack_148 = param_1[9];
          uStack_150 = param_1[8];
          uStack_138 = param_1[0xb];
          uStack_140 = param_1[10];
          uStack_128 = param_1[0xd];
          uStack_130 = param_1[0xc];
          if (lVar16 == 3) {
            return;
          }
          pppuStack_110 = (undefined ***)0x3;
          uVar6 = FUN_1087e422c((lVar16 + 0x7fffffffffffffdU & 0x7ffffffffffffff) + 3,&pppuStack_110
                                ,&UNK_10b23a1b0);
          goto LAB_100ec0728;
        }
      }
      *param_1 = 0x8000000000000000;
      param_1[1] = (ulong)puVar7;
      if (((ulong)pppuVar19 & 0x7fffffffffffffff) != 0) {
        _free(unaff_x23);
      }
    }
    goto joined_r0x000100ec08a8;
  }
  if (*param_2 != '\x15') {
    puStack_108 = (ulong *)FUN_108855c40(param_2,&ppuStack_b0,&UNK_10b2141a8);
    goto LAB_100ec0a54;
  }
  lVar22 = *(long *)(param_2 + 0x10);
  lVar12 = *(long *)(param_2 + 0x18) * 0x40;
  lVar16 = lVar22 + lVar12;
  pppuStack_110 = (undefined ***)0x8000000000000001;
  pppuStack_c8 = (undefined ***)0x8000000000000000;
  if (*(long *)(param_2 + 0x18) == 0) {
    pppuVar10 = (undefined ***)0x0;
    pppuStack_c8 = (undefined ***)0x8000000000000000;
    pppuStack_110 = (undefined ***)0x8000000000000001;
    pppuVar21 = (undefined ***)0x8000000000000000;
    pppuVar19 = (undefined ***)0x8000000000000001;
    puStack_1b8 = (ulong *)0x8000000000000001;
    ppuStack_1c8 = in_x13;
LAB_100ec0638:
    uStack_190 = (undefined ***)0x8000000000000000;
    bVar11 = true;
  }
  else {
    lVar17 = 0;
    pppuVar10 = (undefined ***)((lVar12 - 0x40U >> 6) + 1);
    pppuVar21 = (undefined ***)0x8000000000000000;
    pppuVar19 = (undefined ***)0x8000000000000001;
    pppuVar20 = (undefined ***)0x8000000000000000;
    pppuVar15 = (undefined ***)0x8000000000000001;
    do {
      pbVar1 = (byte *)(lVar22 + lVar17);
      pbVar18 = pbVar1 + 0x20;
      bVar9 = *pbVar1;
      if (bVar9 < 0xd) {
        if (bVar9 == 1) {
          bVar9 = *(byte *)(lVar22 + lVar17 + 1);
          if (2 < bVar9) {
            bVar9 = 3;
          }
          uStack_190 = (undefined ***)((ulong)CONCAT61(uStack_190._2_6_,bVar9) << 8);
        }
        else {
          if (bVar9 != 4) {
            if (bVar9 != 0xc) goto LAB_100ec0588;
            plVar8 = *(long **)(lVar22 + lVar17 + 0x10);
            lVar2 = *(long *)(lVar22 + lVar17 + 0x18);
            if (lVar2 != 10) {
              if (lVar2 == 5) goto LAB_100ec0364;
              goto LAB_100ec03e4;
            }
            goto LAB_100ec03bc;
          }
          uVar6 = *(ulong *)(lVar22 + lVar17 + 8);
          if (2 < uVar6) {
            uVar6 = 3;
          }
          uStack_190 = (undefined ***)((ulong)CONCAT61(uStack_190._2_6_,(char)uVar6) << 8);
        }
        goto LAB_100ec03f8;
      }
      if (bVar9 != 0xd) {
        if (bVar9 == 0xe) {
          FUN_1009e9948(&uStack_190,*(undefined8 *)(lVar22 + lVar17 + 0x10),
                        *(undefined8 *)(lVar22 + lVar17 + 0x18));
joined_r0x000100ec031c:
          if (((ulong)uStack_190 & 1) == 0) goto LAB_100ec03f8;
        }
        else {
          if (bVar9 == 0xf) {
            FUN_1009e9948(&uStack_190,*(undefined8 *)(lVar22 + lVar17 + 8),
                          *(undefined8 *)(lVar22 + lVar17 + 0x10));
            goto joined_r0x000100ec031c;
          }
LAB_100ec0588:
          puStack_188 = (ulong *)FUN_108855c40(pbVar1,&ppuStack_b0,&UNK_10b214808);
          uStack_190 = (undefined ***)CONCAT71(uStack_190._1_7_,1);
        }
        puStack_c0 = puStack_1b8;
        ppuStack_b8 = ppuStack_1a8;
        puStack_108 = puStack_1b0;
        puVar7 = puStack_188;
        pppuStack_110 = pppuVar15;
        pppuStack_c8 = pppuVar20;
        goto LAB_100ec05c4;
      }
      plVar8 = *(long **)(lVar22 + lVar17 + 8);
      lVar2 = *(long *)(lVar22 + lVar17 + 0x10);
      if (lVar2 == 10) {
LAB_100ec03bc:
        if (*plVar8 == 0x737275437478656e && (short)plVar8[1] == 0x726f) {
          uStack_190 = (undefined ***)CONCAT62(uStack_190._2_6_,0x100);
          goto LAB_100ec03f8;
        }
LAB_100ec03e4:
        uStack_190 = (undefined ***)CONCAT62(uStack_190._2_6_,0x300);
      }
      else {
        if (lVar2 != 5) goto LAB_100ec03e4;
LAB_100ec0364:
        if ((int)*plVar8 == 0x74656d5f && *(char *)((long)plVar8 + 4) == 'a') {
          uStack_190 = (undefined ***)((ulong)uStack_190._2_6_ << 0x10);
        }
        else {
          if ((int)*plVar8 != 0x6c6f6f74 || *(char *)((long)plVar8 + 4) != 's') goto LAB_100ec03e4;
          uStack_190 = (undefined ***)CONCAT62(uStack_190._2_6_,0x200);
        }
      }
LAB_100ec03f8:
      if (uStack_190._1_1_ < 2) {
        if (uStack_190._1_1_ == 0) {
          if (pppuVar15 == (undefined ***)0x8000000000000001) {
            bVar9 = *pbVar18;
            pppuVar15 = (undefined ***)0x8000000000000000;
            if (bVar9 != 0x10) {
              if (bVar9 == 0x11) {
                FUN_1004de164(&uStack_190,*(undefined8 *)(lVar22 + lVar17 + 0x28));
                if (uStack_190 != (undefined ***)0x8000000000000000) goto LAB_100ec0450;
LAB_100ec0518:
                pppuVar15 = (undefined ***)0x8000000000000001;
              }
              else {
                if (bVar9 == 0x12) goto LAB_100ec0530;
                FUN_1004de164(&uStack_190,pbVar18);
                if (uStack_190 == (undefined ***)0x8000000000000000) goto LAB_100ec0518;
LAB_100ec0450:
                puStack_a8 = puStack_178;
                ppuStack_b0 = ppuStack_180;
                uStack_98 = uStack_168;
                uStack_a0 = uStack_170;
                uStack_88 = uStack_158;
                uStack_90 = uStack_160;
                uStack_80 = uStack_150;
                pppuVar15 = uStack_190;
              }
              if (pppuVar15 == (undefined ***)0x8000000000000001) {
                puStack_108 = puStack_1b0;
                ppuStack_b8 = ppuStack_1a8;
                puStack_c0 = puStack_1b8;
                pppuStack_110 = (undefined ***)0x8000000000000001;
                puVar7 = puStack_188;
                pppuStack_c8 = pppuVar20;
                goto LAB_100ec05c4;
              }
              puStack_1a0 = puStack_188;
            }
LAB_100ec0530:
            puStack_f8 = puStack_a8;
            ppuStack_100 = ppuStack_b0;
            uStack_e8 = uStack_98;
            uStack_f0 = uStack_a0;
            uStack_d8 = uStack_88;
            uStack_e0 = uStack_90;
            uStack_d0 = uStack_80;
            puStack_1b0 = puStack_1a0;
            goto LAB_100ec0258;
          }
          puStack_c0 = puStack_1b8;
          ppuStack_b8 = ppuStack_1a8;
          puStack_108 = puStack_1b0;
          ppuStack_b0 = (undefined **)&UNK_108cadf95;
          puStack_a8 = (undefined *)0x5;
          uStack_190 = &ppuStack_b0;
          puStack_188 = (ulong *)&DAT_100c7b3a0;
          pppuStack_110 = pppuVar15;
          pppuStack_c8 = pppuVar20;
          puVar7 = (ulong *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_190);
        }
        else {
          if (pppuVar19 == (undefined ***)0x8000000000000001) {
            bVar9 = *pbVar18;
            pppuVar19 = (undefined ***)0x8000000000000000;
            if (bVar9 != 0x10) {
              if (bVar9 == 0x11) {
                FUN_1004e07f8(&uStack_190,*(undefined8 *)(lVar22 + lVar17 + 0x28));
              }
              else {
                if (bVar9 == 0x12) goto LAB_100ec0250;
                FUN_1004e07f8(&uStack_190,pbVar18);
              }
              puStack_198 = puStack_188;
              if (uStack_190 != (undefined ***)0x8000000000000000) {
                ppuStack_1c8 = ppuStack_180;
              }
              pppuVar19 = uStack_190;
              if ((long)uStack_190 < -0x7ffffffffffffffe) {
                pppuVar19 = (undefined ***)0x8000000000000001;
              }
              if (pppuVar19 == (undefined ***)0x8000000000000001) {
                puStack_c0 = puStack_1b8;
                ppuStack_b8 = ppuStack_1a8;
                pppuVar19 = (undefined ***)0x8000000000000001;
                puStack_108 = puStack_1b0;
                puVar7 = puStack_188;
                pppuStack_110 = pppuVar15;
                pppuStack_c8 = pppuVar20;
                goto LAB_100ec05c4;
              }
            }
LAB_100ec0250:
            puStack_1c0 = puStack_198;
            goto LAB_100ec0258;
          }
          puStack_c0 = puStack_1b8;
          ppuStack_b8 = ppuStack_1a8;
          puStack_108 = puStack_1b0;
          ppuStack_b0 = (undefined **)&UNK_108cb1ccb;
          puStack_a8 = (undefined *)0xa;
          uStack_190 = &ppuStack_b0;
          puStack_188 = (ulong *)&DAT_100c7b3a0;
          pppuStack_110 = pppuVar15;
          pppuStack_c8 = pppuVar20;
          puVar7 = (ulong *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_190);
        }
LAB_100ec05c4:
        *param_1 = 0x8000000000000000;
        param_1[1] = (ulong)puVar7;
        if (pppuVar21 != (undefined ***)0x8000000000000000) {
LAB_100ec05d4:
          puVar14 = (undefined *)((long)ppuStack_1a8 + 1);
          puVar7 = puStack_1b8;
          while (puVar14 = puVar14 + -1, puVar14 != (undefined *)0x0) {
            FUN_100de5590(puVar7);
            puVar7 = puVar7 + 0x1c;
          }
          if (pppuVar21 != (undefined ***)0x0) {
            _free(puStack_1b8);
          }
        }
LAB_100ec0920:
        bVar11 = true;
        bVar5 = true;
        goto LAB_100ec0928;
      }
      if (uStack_190._1_1_ != 2) goto LAB_100ec0258;
      if (pppuVar21 != (undefined ***)0x8000000000000000) {
        puStack_c0 = puStack_1b8;
        ppuStack_b8 = ppuStack_1a8;
        puStack_108 = puStack_1b0;
        ppuStack_b0 = (undefined **)&UNK_108ca26d4;
        puStack_a8 = (undefined *)0x5;
        uStack_190 = &ppuStack_b0;
        puStack_188 = (ulong *)&DAT_100c7b3a0;
        pppuStack_110 = pppuVar15;
        pppuStack_c8 = pppuVar20;
        uVar6 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_190);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar6;
        goto LAB_100ec05d4;
      }
      FUN_10135bc4c(&uStack_190,pbVar18);
      if (uStack_190 == (undefined ***)0x8000000000000000) {
        puStack_108 = puStack_1b0;
        *param_1 = 0x8000000000000000;
        param_1[1] = (ulong)puStack_188;
        pppuStack_110 = pppuVar15;
        goto LAB_100ec0920;
      }
      puStack_1b8 = puStack_188;
      ppuStack_1a8 = ppuStack_180;
      pppuVar20 = uStack_190;
      pppuVar21 = uStack_190;
LAB_100ec0258:
      lVar17 = lVar17 + 0x40;
    } while (lVar12 - lVar17 != 0);
    puStack_c0 = puStack_1b8;
    ppuStack_b8 = ppuStack_1a8;
    puStack_108 = puStack_1b0;
    lVar22 = lVar16;
    pppuStack_110 = pppuVar15;
    pppuStack_c8 = pppuVar20;
    if (pppuVar15 == (undefined ***)0x8000000000000001) goto LAB_100ec0638;
    bVar11 = false;
    uStack_168 = uStack_e8;
    uStack_170 = uStack_f0;
    uStack_158 = uStack_d8;
    uStack_160 = uStack_e0;
    uStack_150 = uStack_d0;
    puStack_188 = puStack_1b0;
    puStack_178 = puStack_f8;
    ppuStack_180 = ppuStack_100;
    uStack_190 = pppuVar15;
  }
  bVar5 = pppuVar19 == (undefined ***)0x8000000000000001;
  pppuVar15 = (undefined ***)0x8000000000000000;
  if (!bVar5) {
    pppuVar15 = pppuVar19;
  }
  if (pppuVar21 != (undefined ***)0x8000000000000000) {
    param_1[6] = (ulong)puStack_178;
    param_1[5] = (ulong)ppuStack_180;
    param_1[8] = uStack_168;
    param_1[7] = uStack_170;
    param_1[10] = uStack_158;
    param_1[9] = uStack_160;
    param_1[4] = (ulong)puStack_188;
    param_1[3] = (ulong)uStack_190;
    *param_1 = (ulong)pppuVar21;
    param_1[1] = (ulong)puStack_1b8;
    param_1[2] = (ulong)ppuStack_1a8;
    param_1[0xb] = uStack_150;
    param_1[0xc] = (ulong)pppuVar15;
    param_1[0xd] = (ulong)puStack_1c0;
    param_1[0xe] = (ulong)ppuStack_1c8;
    puStack_188 = (ulong *)param_1[1];
    uStack_190 = (undefined ***)*param_1;
    puStack_178 = (undefined *)param_1[3];
    ppuStack_180 = (undefined **)param_1[2];
    uStack_168 = param_1[5];
    uStack_170 = param_1[4];
    uStack_158 = param_1[7];
    uStack_160 = param_1[6];
    uStack_148 = param_1[9];
    uStack_150 = param_1[8];
    uStack_138 = param_1[0xb];
    uStack_140 = param_1[10];
    uStack_128 = param_1[0xd];
    uStack_130 = param_1[0xc];
    if (lVar16 - lVar22 == 0) {
      return;
    }
    pppuStack_110 = pppuVar10;
    uVar6 = FUN_1087e422c((long)pppuVar10 + ((ulong)(lVar16 - lVar22) >> 6),&pppuStack_110,
                          &UNK_10b23a190);
LAB_100ec0728:
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar6;
    FUN_100defa64(&uStack_190);
    return;
  }
  puStack_78 = &UNK_108ca26d4;
  uStack_70 = 5;
  ppuStack_b0 = &puStack_78;
  puStack_a8 = &DAT_100c7b3a0;
  uVar6 = FUN_108856088(s_missing_field_____108ac28f7,&ppuStack_b0);
  *param_1 = 0x8000000000000000;
  param_1[1] = uVar6;
  if (((ulong)pppuVar15 & 0x7fffffffffffffff) != 0) {
    _free(puStack_1c0);
  }
  if (uStack_190 != (undefined ***)0x8000000000000000) {
    if ((uStack_170 != 0) && (uStack_170 * 9 != -0x11)) {
      _free(puStack_178 + uStack_170 * -8 + -8);
    }
    func_0x000100cd7284(&uStack_190);
  }
LAB_100ec0928:
  bVar4 = false;
  if (pppuVar19 != (undefined ***)0x8000000000000001) {
    bVar4 = bVar5;
  }
  if (bVar4 && ((ulong)pppuVar19 & 0x7fffffffffffffff) != 0) {
    _free(puStack_1c0);
    bVar5 = false;
    if (pppuStack_110 != (undefined ***)0x8000000000000001) {
      bVar5 = bVar11;
    }
  }
  else {
    bVar5 = false;
    if (pppuStack_110 != (undefined ***)0x8000000000000001) {
      bVar5 = bVar11;
    }
  }
  pppuVar10 = pppuStack_110;
  if (!bVar5) {
    return;
  }
joined_r0x000100ec08a8:
  if (pppuVar10 != (undefined ***)0x8000000000000000) {
    if ((uStack_f0 != 0) && (uStack_f0 * 9 != -0x11)) {
      _free(puStack_f8 + uStack_f0 * -8 + -8);
    }
    func_0x000100cd7284(&pppuStack_110);
  }
  return;
}

