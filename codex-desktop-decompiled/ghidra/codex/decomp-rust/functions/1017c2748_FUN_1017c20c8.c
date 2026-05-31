
void FUN_1017c20c8(undefined8 *param_1,undefined *param_2)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  long lVar15;
  undefined **ppuVar16;
  long *unaff_x22;
  undefined **unaff_x26;
  undefined8 auStack_180 [4];
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_140;
  undefined1 uStack_138;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *apuStack_d0 [4];
  undefined8 auStack_b0 [4];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_71 [17];
  
  puVar10 = auStack_180;
  uVar2 = *(ulong *)(param_2 + 0x20);
  uVar11 = *(ulong *)(param_2 + 0x28);
  if (uVar11 < uVar2) {
    lVar15 = *(long *)(param_2 + 0x18);
    do {
      bVar4 = *(byte *)(lVar15 + uVar11);
      if (0x20 < bVar4 || (1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) {
        if (bVar4 != 0x6e) goto LAB_1017c21b4;
        uVar1 = uVar11 + 1;
        *(ulong *)(param_2 + 0x28) = uVar1;
        bVar5 = uVar1 < uVar2;
        if (uVar2 < uVar1) {
          uVar2 = uVar11 + 1;
        }
        if (bVar5) {
          cVar3 = *(char *)(lVar15 + uVar11 + 1);
          *(ulong *)(param_2 + 0x28) = uVar11 + 2;
          if (cVar3 == 'u') {
            if (uVar11 + 2 == uVar2) goto LAB_1017c25b4;
            cVar3 = *(char *)(lVar15 + uVar11 + 2);
            *(ulong *)(param_2 + 0x28) = uVar11 + 3;
            if (cVar3 == 'l') {
              if (uVar11 + 3 == uVar2) goto LAB_1017c25b4;
              cVar3 = *(char *)(lVar15 + uVar11 + 3);
              *(ulong *)(param_2 + 0x28) = uVar11 + 4;
              if (cVar3 == 'l') {
                uVar12 = 3;
                goto LAB_1017c2628;
              }
            }
          }
          uStack_f8 = (undefined **)0x9;
        }
        else {
LAB_1017c25b4:
          uStack_f8 = (undefined **)0x5;
        }
        uVar6 = FUN_10887f4a4(param_2,&uStack_f8);
        goto LAB_1017c2620;
      }
      uVar11 = uVar11 + 1;
      *(ulong *)(param_2 + 0x28) = uVar11;
    } while (uVar2 != uVar11);
  }
  else {
LAB_1017c21b4:
    if (uVar11 < uVar2) {
      plVar8 = &uStack_f8;
      do {
        bVar4 = *(byte *)(*(long *)(param_2 + 0x18) + uVar11);
        if (0x20 < bVar4 || (1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) {
          if (bVar4 == 0x5b) {
            cVar3 = param_2[0x48];
            param_2[0x48] = cVar3 + -1;
            if ((char)(cVar3 + -1) != '\0') {
              *(ulong *)(param_2 + 0x28) = uVar11 + 1;
              uStack_108 = CONCAT71(uStack_108._1_7_,1);
              puStack_110 = param_2;
              FUN_1017b8fd0(&uStack_f8,&puStack_110);
              plVar7 = plStack_f0;
              if ((char)uStack_f8 == '\x01') {
LAB_1017c22d4:
                ppuVar16 = (undefined **)0x3;
                plVar8 = plVar7;
              }
              else {
                if (uStack_f8._1_1_ != '\x01') {
                  uVar6 = 0;
LAB_1017c2684:
                  plVar7 = (long *)FUN_108878f3c(uVar6,&UNK_10b259aa0,&UNK_10b258940);
                  goto LAB_1017c22d4;
                }
                FUN_1017c55f4(&uStack_f8,puStack_110);
                plVar8 = plStack_f0;
                ppuVar16 = uStack_f8;
                if (uStack_f8 != (undefined **)0x3) {
                  uStack_88 = uStack_e0;
                  puStack_90 = puStack_e8;
                  uStack_80 = uStack_d8;
                  FUN_1017b8fd0(&uStack_f8,&puStack_110);
                  plVar7 = plStack_f0;
                  if ((char)uStack_f8 == '\x01') goto LAB_1017c22d4;
                  if (uStack_f8._1_1_ != '\x01') {
                    uVar6 = 1;
                    goto LAB_1017c2684;
                  }
                  FUN_1017c55f4(&uStack_f8,puStack_110);
                  unaff_x22 = plStack_f0;
                  unaff_x26 = uStack_f8;
                  if (uStack_f8 == (undefined **)0x3) {
                    ppuVar16 = (undefined **)0x3;
                    plVar8 = plStack_f0;
                  }
                  else {
                    uStack_158 = uStack_88;
                    puStack_160 = puStack_90;
                    uStack_150 = uStack_80;
                  }
                }
              }
              param_2[0x48] = param_2[0x48] + '\x01';
              plVar7 = (long *)FUN_10177b5dc(param_2);
              if (ppuVar16 != (undefined **)0x3) {
                plVar9 = plVar7;
                if (plVar7 != (long *)0x0) goto LAB_1017c2618;
                ppuVar13 = &puStack_160;
                goto LAB_1017c2328;
              }
              plVar9 = plVar8;
              if (plVar7 == (long *)0x0) goto LAB_1017c2618;
              FUN_1017a4f34();
              goto LAB_1017c260c;
            }
          }
          else {
            if (bVar4 != 0x7b) {
              plVar9 = (long *)FUN_10887eaf8(param_2,auStack_71,&UNK_10b25ae18);
              goto LAB_1017c2618;
            }
            cVar3 = param_2[0x48];
            param_2[0x48] = cVar3 + -1;
            if ((char)(cVar3 + -1) != '\0') {
              *(ulong *)(param_2 + 0x28) = uVar11 + 1;
              uStack_138 = 1;
              puStack_140 = param_2;
              FUN_1017b89cc(&uStack_f8,&puStack_140);
              plVar7 = plStack_f0;
              if (((ulong)uStack_f8 & 1) != 0) goto LAB_1017c2260;
              ppuVar16 = (undefined **)0x3;
              unaff_x26 = (undefined **)0x3;
              goto LAB_1017c23b4;
            }
          }
          uStack_f8 = (undefined **)0x18;
          goto LAB_1017c21fc;
        }
        uVar11 = uVar11 + 1;
        *(ulong *)(param_2 + 0x28) = uVar11;
      } while (uVar2 != uVar11);
    }
  }
  uStack_f8 = (undefined **)0x5;
LAB_1017c21fc:
  uVar6 = FUN_10887ea38(param_2,&uStack_f8);
  goto LAB_1017c2620;
LAB_1017c23b4:
  do {
    puVar14 = puStack_140;
    if (uStack_f8._1_1_ != '\x01') {
      if (ppuVar16 == (undefined **)0x3) {
        ppuVar16 = (undefined **)0x2;
      }
      if (unaff_x26 == (undefined **)0x3) {
        unaff_x26 = (undefined **)0x2;
      }
      goto LAB_1017c2264;
    }
    *(long *)(puStack_140 + 0x28) = *(long *)(puStack_140 + 0x28) + 1;
    *(undefined8 *)(puStack_140 + 0x10) = 0;
    __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
              (&uStack_f8,puStack_140 + 0x18,puStack_140);
    plVar7 = plStack_f0;
    if (uStack_f8 == (undefined **)0x2) break;
    if (puStack_e8 == (undefined *)0x9) {
      if (*plStack_f0 != 0x7261646e6f636573 || (char)plStack_f0[1] != 'y') goto LAB_1017c2394;
      if (unaff_x26 != (undefined **)0x3) {
        puStack_90 = &UNK_108ce3cb4;
        uStack_88 = 9;
        goto LAB_1017c2734;
      }
      uVar11 = *(ulong *)(puVar14 + 0x28);
      if (uVar11 < *(ulong *)(puVar14 + 0x20)) {
        while( true ) {
          bVar4 = *(byte *)(*(long *)(puVar14 + 0x18) + uVar11);
          if (0x3a < bVar4) goto LAB_1017c2768;
          if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
          uVar11 = uVar11 + 1;
          *(ulong *)(puVar14 + 0x28) = uVar11;
          if (*(ulong *)(puVar14 + 0x20) == uVar11) goto LAB_1017c26a8;
        }
        if ((ulong)bVar4 != 0x3a) {
LAB_1017c2768:
          puStack_90 = (undefined *)0x6;
          goto LAB_1017c26ac;
        }
        *(ulong *)(puVar14 + 0x28) = uVar11 + 1;
        FUN_1017c55f4(&uStack_f8,puVar14);
        unaff_x22 = plStack_f0;
        unaff_x26 = uStack_f8;
        if (uStack_f8 != (undefined **)0x3) {
          uStack_108 = uStack_e0;
          puStack_110 = puStack_e8;
          goto LAB_1017c23a0;
        }
      }
      else {
LAB_1017c26a8:
        puStack_90 = (undefined *)0x3;
LAB_1017c26ac:
        unaff_x22 = (long *)FUN_10887ea38(puVar14,&puStack_90);
      }
      ppuVar16 = (undefined **)0x3;
      plVar8 = unaff_x22;
      goto LAB_1017c2264;
    }
    if ((puStack_e8 == (undefined *)0x7) &&
       ((int)*plStack_f0 == 0x6d697270 && *(int *)((long)plStack_f0 + 3) == 0x7972616d)) {
      if (ppuVar16 == (undefined **)0x3) {
        uVar11 = *(ulong *)(puVar14 + 0x28);
        if (uVar11 < *(ulong *)(puVar14 + 0x20)) {
          while( true ) {
            bVar4 = *(byte *)(*(long *)(puVar14 + 0x18) + uVar11);
            if (0x3a < bVar4) goto LAB_1017c2760;
            if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
            uVar11 = uVar11 + 1;
            *(ulong *)(puVar14 + 0x28) = uVar11;
            if (*(ulong *)(puVar14 + 0x20) == uVar11) goto LAB_1017c26cc;
          }
          if ((ulong)bVar4 != 0x3a) {
LAB_1017c2760:
            puStack_90 = (undefined *)0x6;
            goto LAB_1017c26d0;
          }
          *(ulong *)(puVar14 + 0x28) = uVar11 + 1;
          FUN_1017c55f4(&uStack_f8,puVar14);
          ppuVar16 = uStack_f8;
          plVar8 = plStack_f0;
          if (uStack_f8 != (undefined **)0x3) goto LAB_1017c23a0;
        }
        else {
LAB_1017c26cc:
          puStack_90 = (undefined *)0x3;
LAB_1017c26d0:
          plVar8 = (long *)FUN_10887ea38(puVar14,&puStack_90);
        }
        ppuVar16 = (undefined **)0x3;
        goto LAB_1017c2264;
      }
      puStack_90 = &UNK_108ce3cad;
      uStack_88 = 7;
LAB_1017c2734:
      uStack_f8 = &puStack_90;
      plStack_f0 = (long *)&DAT_10179e9f8;
      plVar7 = (long *)FUN_108880790(s_duplicate_field_____108ac2973,&uStack_f8);
      break;
    }
LAB_1017c2394:
    plVar7 = (long *)FUN_101779248(puVar14);
    if (plVar7 != (long *)0x0) break;
LAB_1017c23a0:
    FUN_1017b89cc(&uStack_f8,&puStack_140);
    plVar7 = plStack_f0;
  } while (((ulong)uStack_f8 & 1) == 0);
LAB_1017c2260:
  ppuVar16 = (undefined **)0x3;
  plVar8 = plVar7;
LAB_1017c2264:
  param_2[0x48] = param_2[0x48] + '\x01';
  plVar7 = (long *)FUN_10177b538(param_2);
  if (ppuVar16 == (undefined **)0x3) {
    plVar9 = plVar8;
    if (plVar7 != (long *)0x0) {
      FUN_1017a4f34();
LAB_1017c260c:
      _free(plVar7);
      plVar9 = plVar8;
    }
  }
  else {
    plVar9 = plVar7;
    if (plVar7 == (long *)0x0) {
      puVar10 = auStack_b0;
      ppuVar13 = apuStack_d0;
LAB_1017c2328:
      puVar14 = *ppuVar13;
      param_1[3] = ppuVar13[1];
      param_1[2] = puVar14;
      puVar14 = ppuVar13[2];
      uVar6 = *puVar10;
      param_1[8] = puVar10[1];
      param_1[7] = uVar6;
      param_1[9] = puVar10[2];
      *param_1 = ppuVar16;
      param_1[1] = plVar8;
      param_1[4] = puVar14;
      param_1[5] = unaff_x26;
      param_1[6] = unaff_x22;
      return;
    }
  }
LAB_1017c2618:
  uVar6 = FUN_10887f554(plVar9,param_2);
LAB_1017c2620:
  uVar12 = 4;
  param_1[1] = uVar6;
LAB_1017c2628:
  *param_1 = uVar12;
  return;
}

