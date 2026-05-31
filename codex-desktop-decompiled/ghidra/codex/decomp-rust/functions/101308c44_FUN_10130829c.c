
void FUN_10130829c(long *param_1,byte *param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  undefined8 *puVar4;
  byte bVar5;
  long *plVar6;
  long *plVar7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  byte bVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  char *pcVar15;
  long lVar16;
  char *pcVar17;
  long lVar18;
  char *pcVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  char *pcStack_160;
  char *pcStack_150;
  char *pcStack_148;
  long lStack_140;
  char *pcStack_138;
  long lStack_130;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  byte bStack_100;
  byte bStack_ff;
  undefined6 uStack_fe;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  char cStack_c0;
  undefined7 uStack_bf;
  char cStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  undefined1 auStack_71 [17];
  
  bVar2 = *param_2;
  if (bVar2 != 0x14) {
    if (bVar2 != 0x15) {
      lVar10 = FUN_108855b04(param_2,auStack_71,&UNK_10b20b7e0);
      *param_1 = -0x7fffffffffffffff;
      param_1[1] = lVar10;
      return;
    }
    uStack_170 = *(undefined8 *)(param_2 + 8);
    lVar18 = *(long *)(param_2 + 0x10);
    lVar12 = *(long *)(param_2 + 0x18) * 0x40;
    lVar10 = lVar18 + lVar12;
    lStack_1a0 = CONCAT71(lStack_1a0._1_7_,0x16);
    pcStack_160 = (char *)0x0;
    lStack_180 = lVar18;
    lStack_168 = lVar10;
    if (*(long *)(param_2 + 0x18) == 0) {
      lVar12 = -0x8000000000000000;
      bVar11 = 3;
    }
    else {
      pcVar17 = (char *)0x0;
      puVar13 = (undefined8 *)((ulong)&uStack_a0 | 1);
      puVar14 = (undefined8 *)((ulong)&lStack_1a0 | 1);
      puVar20 = (undefined8 *)((ulong)&cStack_c0 | 1);
      pcVar15 = (char *)((lVar12 - 0x40U >> 6) + 1);
      lVar12 = -0x7fffffffffffffff;
      lStack_1b0 = -0x7fffffffffffffff;
      lVar16 = lVar18 + 0x40;
      lStack_178 = lVar18;
      bVar5 = 4;
LAB_10130842c:
      do {
        plVar7 = plStack_90;
        plVar6 = plStack_98;
        pcVar1 = uStack_a0;
        bVar11 = *(byte *)(lVar16 + -0x40);
        lVar18 = lVar16;
        pcVar19 = pcVar17;
        if (bVar11 == 0x16) break;
        uStack_a0 = (char *)CONCAT71(uStack_a0._1_7_,bVar11);
        pcVar19 = uStack_a0;
        uVar21 = *(undefined8 *)(lVar16 + -0x30);
        *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)(lVar16 + -0x28);
        *(undefined8 *)((long)puVar13 + 0xf) = uVar21;
        uVar21 = *(undefined8 *)(lVar16 + -0x3f);
        puVar13[1] = *(undefined8 *)(lVar16 + -0x37);
        *puVar13 = uVar21;
        lStack_198 = *(long *)(lVar16 + -0x18);
        lStack_1a0 = *(long *)(lVar16 + -0x20);
        lStack_188 = *(long *)(lVar16 + -8);
        lStack_190 = *(long *)(lVar16 + -0x10);
        if (bVar11 < 0xd) {
          if (bVar11 == 1) {
            uStack_a0._1_1_ = SUB81(pcVar1,1);
            if (uStack_a0._1_1_ != '\0') {
              if (uStack_a0._1_1_ == '\x01') {
LAB_10130867c:
                bStack_ff = 1;
                bStack_100 = 0;
                uStack_a0 = pcVar19;
                goto LAB_101308688;
              }
              cStack_b8 = uStack_a0._1_1_;
              uStack_b7 = 0;
              cStack_c0 = '\x01';
              uStack_a0 = pcVar19;
              lStack_f8 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                    (&cStack_c0,&UNK_10b22d740,&UNK_10b20a590);
              goto LAB_1013085cc;
            }
LAB_1013085e0:
            bStack_100 = 0;
            bStack_ff = 0;
            uStack_a0 = pcVar19;
LAB_101308688:
            FUN_100e077ec(&uStack_a0);
            goto LAB_1013086ac;
          }
          if (bVar11 == 4) {
            if (plStack_98 == (long *)0x0) goto LAB_1013085e0;
            if (plStack_98 == (long *)0x1) goto LAB_10130867c;
            cStack_b8 = (char)plStack_98;
            uStack_b7 = (undefined7)((ulong)plStack_98 >> 8);
            cStack_c0 = '\x01';
            lStack_f8 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                  (&cStack_c0,&UNK_10b22d740,&UNK_10b20a590);
LAB_1013085cc:
            bStack_100 = 1;
            goto LAB_101308688;
          }
          if (bVar11 == 0xc) {
            if (lStack_88 == 7) {
              if ((int)*plStack_90 != 0x7774656e || *(int *)((long)plStack_90 + 3) != 0x6b726f77) {
LAB_1013084b0:
                lStack_f8 = FUN_1087e41dc(plStack_90,lStack_88,&UNK_10b222548,2);
                bStack_100 = 1;
                goto joined_r0x000101308548;
              }
              bStack_ff = 0;
            }
            else {
              if ((lStack_88 != 0xb) ||
                 (*plStack_90 != 0x7379735f656c6966 ||
                  *(long *)((long)plStack_90 + 3) != 0x6d65747379735f65)) goto LAB_1013084b0;
              bStack_ff = 1;
            }
            bStack_100 = 0;
            goto joined_r0x000101308548;
          }
LAB_101308834:
          lStack_f8 = FUN_108855b04(&uStack_a0,auStack_71,&UNK_10b20d120);
          bStack_100 = 1;
LAB_10130885c:
          pcStack_160 = pcVar17 + 1;
          lStack_120 = lStack_1b0;
          lStack_118 = lStack_1b8;
          lVar10 = lStack_f8;
          lStack_178 = lVar16;
LAB_101308874:
          *param_1 = -0x7fffffffffffffff;
          param_1[1] = lVar10;
          if (-0x7fffffffffffffff < lVar12) {
LAB_10130889c:
            FUN_100e79780(&lStack_120);
          }
LAB_101308a90:
          FUN_100d34830(&lStack_180);
          if ((char)lStack_1a0 != '\x16') {
            FUN_100e077ec(&lStack_1a0);
          }
          goto LAB_1013089b4;
        }
        if (bVar11 == 0xd) {
          if (plStack_90 == (long *)0x7) {
            if ((int)*plStack_98 == 0x7774656e && *(int *)((long)plStack_98 + 3) == 0x6b726f77)
            goto LAB_1013085e0;
          }
          else if ((plStack_90 == (long *)0xb) &&
                  (*plStack_98 == 0x7379735f656c6966 &&
                   *(long *)((long)plStack_98 + 3) == 0x6d65747379735f65)) goto LAB_10130867c;
          lStack_f8 = FUN_1087e41dc(plStack_98,plStack_90,&UNK_10b222548,2);
          goto LAB_1013085cc;
        }
        if (bVar11 != 0xe) {
          if (bVar11 != 0xf) goto LAB_101308834;
          FUN_100b667a8(&bStack_100,plStack_98,plStack_90);
          goto LAB_101308688;
        }
        FUN_100b667a8(&bStack_100,plStack_90);
joined_r0x000101308548:
        if (plVar6 != (long *)0x0) {
          _free(plVar7);
        }
LAB_1013086ac:
        if ((bStack_100 & 1) != 0) goto LAB_10130885c;
        cVar3 = (char)lStack_1a0;
        lVar18 = lVar10;
        pcVar19 = pcVar15;
        if ((bStack_ff & 1) != 0) {
          if (lVar12 != -0x7fffffffffffffff) {
            pcStack_160 = pcVar17 + 1;
            lStack_120 = lStack_1b0;
            lStack_118 = lStack_1b8;
            cStack_c0 = '+';
            uStack_bf = 0x108cadf;
            cStack_b8 = '\v';
            uStack_b7 = 0;
            uStack_a0 = &cStack_c0;
            plStack_98 = (long *)&DAT_100c7b3a0;
            lStack_178 = lVar16;
            lVar10 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_a0);
            *param_1 = -0x7fffffffffffffff;
            param_1[1] = lVar10;
            if (lVar12 != -0x8000000000000000) goto LAB_10130889c;
            goto LAB_101308a90;
          }
          lStack_1a0 = CONCAT71(lStack_1a0._1_7_,0x16);
          if (cVar3 == '\x16') {
            pcStack_160 = pcVar17 + 1;
            lStack_120 = lStack_1b0;
            lStack_118 = lStack_1b8;
            lStack_178 = lVar16;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101308cb8:
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x101308cbc);
            (*pcVar8)();
          }
          uVar21 = *puVar14;
          puVar20[1] = puVar14[1];
          *puVar20 = uVar21;
          uVar21 = *(undefined8 *)((long)puVar14 + 0xf);
          *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
          *(undefined8 *)((long)puVar20 + 0xf) = uVar21;
          cStack_c0 = cVar3;
          if (cVar3 == '\x10') {
LAB_101308708:
            FUN_100e077ec(&cStack_c0);
            lVar12 = -0x8000000000000000;
          }
          else {
            if (cVar3 == '\x11') {
              puVar4 = (undefined8 *)CONCAT71(uStack_b7,cStack_b8);
              plStack_98 = (long *)puVar4[1];
              uStack_a0 = (char *)*puVar4;
              lStack_88 = puVar4[3];
              plStack_90 = (long *)puVar4[2];
              FUN_10145ac5c(&bStack_100,&uStack_a0);
              _free(puVar4);
              lVar12 = CONCAT62(uStack_fe,CONCAT11(bStack_ff,bStack_100));
            }
            else {
              if (cVar3 == '\x12') goto LAB_101308708;
              cStack_c0 = cVar3;
              FUN_10145ac5c(&bStack_100,&cStack_c0);
              lVar12 = CONCAT62(uStack_fe,CONCAT11(bStack_ff,bStack_100));
            }
            if (lVar12 == -0x7fffffffffffffff) {
              pcStack_160 = pcVar17 + 1;
              *param_1 = -0x7fffffffffffffff;
              param_1[1] = lStack_f8;
              lStack_178 = lVar16;
              goto LAB_101308a90;
            }
          }
          lStack_108 = lStack_e8;
          lStack_110 = lStack_f0;
          pcVar17 = pcVar17 + 1;
          bVar9 = lVar16 == lVar10;
          lVar16 = lVar16 + 0x40;
          lStack_1b8 = lStack_f8;
          lStack_1b0 = lVar12;
          if (bVar9) break;
          goto LAB_10130842c;
        }
        if (bVar5 != 4) {
          pcStack_160 = pcVar17 + 1;
          lStack_120 = lStack_1b0;
          lStack_118 = lStack_1b8;
          cStack_c0 = -0x30;
          uStack_bf = 0x108ca28;
          cStack_b8 = '\a';
          uStack_b7 = 0;
          uStack_a0 = &cStack_c0;
          plStack_98 = (long *)&DAT_100c7b3a0;
          lStack_178 = lVar16;
          lVar10 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_a0);
          goto LAB_101308874;
        }
        lStack_1a0 = CONCAT71(lStack_1a0._1_7_,0x16);
        if (cVar3 == '\x16') {
          pcStack_160 = pcVar17 + 1;
          lStack_120 = lStack_1b0;
          lStack_118 = lStack_1b8;
          lStack_178 = lVar16;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_101308cb8;
        }
        uVar21 = *puVar14;
        puVar20[1] = puVar14[1];
        *puVar20 = uVar21;
        uVar21 = *(undefined8 *)((long)puVar14 + 0xf);
        *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
        *(undefined8 *)((long)puVar20 + 0xf) = uVar21;
        cStack_c0 = cVar3;
        if (cVar3 == '\x10') {
LAB_101308770:
          bStack_100 = 0;
          bStack_ff = 3;
          FUN_100e077ec(&cStack_c0);
        }
        else if (cVar3 == '\x11') {
          puVar4 = (undefined8 *)CONCAT71(uStack_b7,cStack_b8);
          plStack_98 = (long *)puVar4[1];
          uStack_a0 = (char *)*puVar4;
          lStack_88 = puVar4[3];
          plStack_90 = (long *)puVar4[2];
          FUN_10140ec48(&bStack_100,&uStack_a0);
          _free(puVar4);
        }
        else {
          if (cVar3 == '\x12') goto LAB_101308770;
          FUN_10140ec48(&bStack_100,&cStack_c0);
        }
        if (bStack_100 == 1) goto LAB_10130885c;
        pcVar17 = pcVar17 + 1;
        bVar9 = lVar16 != lVar10;
        lVar16 = lVar16 + 0x40;
        bVar5 = bStack_ff;
      } while (bVar9);
      lStack_118 = lStack_1b8;
      bVar11 = 3;
      if (bVar5 != 4) {
        bVar11 = bVar5;
      }
      pcStack_160 = pcVar19;
      if (lVar12 == -0x7fffffffffffffff) {
        lVar12 = -0x8000000000000000;
      }
      else {
        lStack_d8 = lStack_110;
        lStack_e0 = lStack_1b8;
        lStack_d0 = lStack_108;
      }
    }
    pcVar15 = pcStack_160;
    *param_1 = lVar12;
    param_1[2] = lStack_d8;
    param_1[1] = lStack_e0;
    param_1[3] = lStack_d0;
    *(byte *)(param_1 + 4) = bVar11;
    pcStack_148 = (char *)param_1[1];
    pcStack_150 = (char *)*param_1;
    pcStack_138 = (char *)param_1[3];
    lStack_140 = param_1[2];
    lStack_130 = param_1[4];
    lStack_178 = lVar18;
    FUN_100d34830(&lStack_180);
    if (lVar10 != lVar18) {
      uStack_a0 = pcVar15;
      lVar10 = FUN_1087e422c(pcVar15 + ((ulong)(lVar10 - lVar18) >> 6),&uStack_a0,&UNK_10b23a190);
      *param_1 = -0x7fffffffffffffff;
      param_1[1] = lVar10;
      if (pcStack_150 != (char *)0x8000000000000000) {
        FUN_100e79780(&pcStack_150);
      }
    }
    goto LAB_1013089b4;
  }
  lVar10 = *(long *)(param_2 + 8);
  pcVar1 = *(char **)(param_2 + 0x10);
  lVar18 = *(long *)(param_2 + 0x18);
  pcVar17 = pcVar1 + lVar18 * 0x20;
  lStack_130 = 0;
  pcVar15 = pcVar1;
  pcStack_150 = pcVar1;
  lStack_140 = lVar10;
  pcStack_138 = pcVar17;
  if (lVar18 == 0) {
LAB_101308388:
    pcStack_148 = pcVar15;
    lVar12 = FUN_1087e422c(0,&UNK_10b22f468,&UNK_10b20a590);
  }
  else {
    pcVar15 = pcVar1 + 0x20;
    cVar3 = *pcVar1;
    if (cVar3 == '\x16') goto LAB_101308388;
    uStack_b7 = (undefined7)*(undefined8 *)(pcVar1 + 9);
    uStack_bf = (undefined7)*(undefined8 *)(pcVar1 + 1);
    cStack_b8 = (char)((ulong)*(undefined8 *)(pcVar1 + 1) >> 0x38);
    uStack_a8 = *(undefined8 *)(pcVar1 + 0x18);
    uStack_b0 = (undefined1)*(undefined8 *)(pcVar1 + 0x10);
    uStack_af = (undefined7)((ulong)*(undefined8 *)(pcVar1 + 0x10) >> 8);
    lStack_130 = 1;
    pcStack_148 = pcVar15;
    cStack_c0 = cVar3;
    if (cVar3 == '\x10') {
LAB_1013088f0:
      bStack_100 = 0;
      bStack_ff = 3;
      FUN_100e077ec(&cStack_c0);
      bVar11 = bStack_ff;
      lVar12 = lStack_f8;
      cVar3 = cStack_c0;
    }
    else if (cVar3 == '\x11') {
      puVar13 = (undefined8 *)CONCAT71(uStack_b7,cStack_b8);
      plStack_98 = (long *)puVar13[1];
      uStack_a0 = (char *)*puVar13;
      lStack_88 = puVar13[3];
      plStack_90 = (long *)puVar13[2];
      FUN_10140ec48(&bStack_100,&uStack_a0);
      _free(puVar13);
      bVar11 = bStack_ff;
      lVar12 = lStack_f8;
      cVar3 = cStack_c0;
    }
    else {
      if (cVar3 == '\x12') goto LAB_1013088f0;
      FUN_10140ec48(&bStack_100,&cStack_c0);
      bVar11 = bStack_ff;
      lVar12 = lStack_f8;
      cVar3 = cStack_c0;
    }
    bStack_ff = bVar11;
    lStack_f8 = lVar12;
    cStack_c0 = cVar3;
    if (bStack_100 == 1) goto LAB_1013083a0;
    if (lVar18 == 1) {
LAB_101308a3c:
      cStack_c0 = cVar3;
      lVar12 = FUN_1087e422c(1,&UNK_10b22f468,&UNK_10b20a590);
    }
    else {
      pcVar15 = pcVar1 + 0x40;
      cStack_c0 = pcVar1[0x20];
      pcStack_148 = pcVar15;
      if (cStack_c0 == '\x16') goto LAB_101308a3c;
      uStack_b7 = (undefined7)*(undefined8 *)(pcVar1 + 0x29);
      uStack_bf = (undefined7)*(undefined8 *)(pcVar1 + 0x21);
      cStack_b8 = (char)((ulong)*(undefined8 *)(pcVar1 + 0x21) >> 0x38);
      uStack_a8 = *(undefined8 *)(pcVar1 + 0x38);
      uStack_b0 = (undefined1)*(undefined8 *)(pcVar1 + 0x30);
      uStack_af = (undefined7)((ulong)*(undefined8 *)(pcVar1 + 0x30) >> 8);
      lStack_130 = 2;
      if (cStack_c0 == '\x10') {
LAB_101308ae4:
        lVar12 = FUN_100e077ec(&cStack_c0);
        lVar18 = -0x8000000000000000;
LAB_101308af0:
        param_1[3] = lStack_118;
        param_1[2] = lStack_120;
        *param_1 = lVar18;
        param_1[1] = lVar12;
        *(byte *)(param_1 + 4) = bVar11;
        lStack_198 = param_1[1];
        lStack_1a0 = *param_1;
        lStack_188 = param_1[3];
        lStack_190 = param_1[2];
        lStack_180 = param_1[4];
        lVar10 = FUN_100fbc738(&pcStack_150);
        if (lVar10 != 0) {
          *param_1 = -0x7fffffffffffffff;
          param_1[1] = lVar10;
          if (lStack_1a0 != -0x8000000000000000) {
            FUN_100e79780(&lStack_1a0);
          }
        }
        goto LAB_1013089b4;
      }
      if (cStack_c0 == '\x11') {
        puVar13 = (undefined8 *)CONCAT71(uStack_b7,cStack_b8);
        plStack_98 = (long *)puVar13[1];
        uStack_a0 = (char *)*puVar13;
        lStack_88 = puVar13[3];
        plStack_90 = (long *)puVar13[2];
        FUN_10145ac5c(&bStack_100,&uStack_a0);
        _free(puVar13);
      }
      else {
        if (cStack_c0 == '\x12') goto LAB_101308ae4;
        FUN_10145ac5c(&bStack_100,&cStack_c0);
      }
      lVar18 = CONCAT62(uStack_fe,CONCAT11(bStack_ff,bStack_100));
      lVar12 = lStack_f8;
      if (lVar18 != -0x7fffffffffffffff) {
        lStack_118 = lStack_e8;
        lStack_120 = lStack_f0;
        if (lVar18 != -0x7ffffffffffffffe) goto LAB_101308af0;
      }
    }
  }
LAB_1013083a0:
  *param_1 = -0x7fffffffffffffff;
  param_1[1] = lVar12;
  lVar18 = ((ulong)((long)pcVar17 - (long)pcVar15) >> 5) + 1;
  while (lVar18 = lVar18 + -1, lVar18 != 0) {
    FUN_100e077ec(pcVar15);
    pcVar15 = pcVar15 + 0x20;
  }
  if (lVar10 != 0) {
    _free(pcVar1);
  }
LAB_1013089b4:
  if ((bVar2 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

