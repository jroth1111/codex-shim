
void FUN_1012a1f8c(long *param_1,char *param_2)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined **ppuVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  char *pcVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  int *piVar13;
  char *extraout_x8;
  char *extraout_x8_00;
  char *pcVar14;
  char *extraout_x8_01;
  char *extraout_x8_02;
  char *extraout_x8_03;
  ulong uVar15;
  char *extraout_x9;
  char *extraout_x9_00;
  char *extraout_x9_01;
  char *extraout_x9_02;
  undefined **ppuVar16;
  char *extraout_x10;
  char *extraout_x10_00;
  char *extraout_x10_01;
  char *extraout_x10_02;
  char *extraout_x11;
  char *extraout_x11_00;
  char *extraout_x11_01;
  char *extraout_x11_02;
  char *extraout_x12;
  char *extraout_x12_00;
  char *extraout_x12_01;
  char *extraout_x12_02;
  undefined1 uVar17;
  uint uVar18;
  char *pcVar19;
  char *pcVar20;
  char *extraout_x15;
  char *extraout_x15_00;
  char *extraout_x15_01;
  char *extraout_x15_02;
  char *pcVar21;
  int iVar23;
  undefined8 uVar24;
  byte *pbVar25;
  long lVar26;
  long lVar27;
  char cVar28;
  char *unaff_x25;
  char *pcVar29;
  long lVar30;
  char *unaff_x27;
  undefined **ppuVar31;
  char *pcVar32;
  ulong uVar33;
  ulong uVar34;
  long *plVar35;
  undefined1 auVar36 [16];
  char *pcStack_828;
  char *pcStack_820;
  char *pcStack_818;
  char *pcStack_810;
  char *pcStack_808;
  char *pcStack_7f8;
  ulong uStack_7f0;
  long *plStack_7e8;
  ulong uStack_7e0;
  ulong uStack_7d8;
  ulong uStack_7d0;
  ulong uStack_7c8;
  ulong uStack_7c0;
  ulong uStack_7b8;
  ulong uStack_7b0;
  ulong uStack_7a8;
  char *pcStack_7a0;
  char *pcStack_798;
  char *pcStack_788;
  byte bStack_780;
  uint7 uStack_77f;
  char *pcStack_778;
  char *pcStack_770;
  char *pcStack_768;
  char *pcStack_760;
  char *pcStack_758;
  char *pcStack_750;
  char *pcStack_748;
  char *pcStack_740;
  char *pcStack_738;
  long *plStack_700;
  long *plStack_6f8;
  ulong uStack_6f0;
  long *plStack_6e8;
  char *pcStack_6e0;
  char *pcStack_6d8;
  char *pcStack_6d0;
  char *pcStack_6c8;
  char *pcStack_6c0;
  char *pcStack_6b8;
  char *pcStack_6b0;
  char *pcStack_6a8;
  char *pcStack_6a0;
  char *pcStack_698;
  char *pcStack_690;
  char *pcStack_688;
  char *pcStack_680;
  char *pcStack_678;
  ulong uStack_668;
  char cStack_660;
  undefined7 uStack_65f;
  char *pcStack_658;
  char *pcStack_650;
  char *pcStack_648;
  char *pcStack_640;
  char *pcStack_638;
  char *pcStack_630;
  char *pcStack_628;
  char *pcStack_620;
  char *pcStack_618;
  undefined8 uStack_610;
  char *pcStack_608;
  char *pcStack_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  char *pcStack_5e0;
  char *pcStack_5d8;
  char *pcStack_5d0;
  char *pcStack_5c8;
  char *pcStack_5c0;
  char *pcStack_5b8;
  char *pcStack_5b0;
  char *pcStack_5a8;
  char *pcStack_5a0;
  char *pcStack_598;
  char *pcStack_590;
  char *pcStack_588;
  char *pcStack_500;
  long lStack_4f8;
  char *pcStack_4f0;
  undefined **ppuStack_4e8;
  char *pcStack_4e0;
  undefined1 auStack_4d8 [272];
  undefined **ppuStack_3c8;
  char *pcStack_3c0;
  undefined1 auStack_3b8 [264];
  char cStack_2b0;
  undefined **ppuStack_2a8;
  char *pcStack_2a0;
  undefined1 auStack_298 [264];
  undefined8 uStack_190;
  char *pcStack_188;
  undefined1 auStack_180 [264];
  undefined *puStack_78;
  undefined8 uStack_70;
  char *pcVar22;
  
  if (*param_2 != '\x14') {
    lVar30 = FUN_108855c40(param_2,&uStack_190,&UNK_10b213768);
    *param_1 = -0x8000000000000000;
    param_1[1] = lVar30;
    return;
  }
  pcVar10 = *(char **)(param_2 + 0x10);
  pcVar22 = *(char **)(param_2 + 0x18);
  pcVar19 = pcVar10 + (long)pcVar22 * 0x20;
  pcVar21 = pcVar22;
  if ((char *)0xe37 < pcVar22) {
    pcVar21 = (char *)0xe38;
  }
  if (pcVar22 == (char *)0x0) {
    ppuVar16 = (undefined **)0x0;
    pcStack_500 = (char *)0x0;
    lStack_4f8 = 8;
    pcStack_4f0 = (char *)0x0;
LAB_1012a2344:
    param_1[1] = lStack_4f8;
    *param_1 = (long)pcStack_500;
    param_1[2] = (long)pcStack_4f0;
    lVar26 = *param_1;
    if ((lVar26 != -0x8000000000000000) && ((long)pcVar19 - (long)pcVar10 != 0)) {
      lVar30 = param_1[1];
      lVar27 = param_1[2];
      ppuStack_3c8 = ppuVar16;
      lVar9 = FUN_1087e422c((long)ppuVar16 + ((ulong)((long)pcVar19 - (long)pcVar10) >> 5),
                            &ppuStack_3c8,&UNK_10b23a1b0);
      *param_1 = -0x8000000000000000;
      param_1[1] = lVar9;
      lVar27 = lVar27 + 1;
      lVar9 = lVar30;
      while (lVar27 = lVar27 + -1, lVar27 != 0) {
        FUN_100e14aac(lVar9);
        lVar9 = lVar9 + 0x120;
      }
      if (lVar26 != 0) {
LAB_1012a24c8:
        _free(lVar30);
      }
    }
    return;
  }
  lStack_4f8 = _malloc((long)pcVar21 * 0x120);
  if (lStack_4f8 != 0) {
    pcStack_4f0 = (char *)0x0;
    ppuVar16 = (undefined **)(((long)pcVar22 * 0x20 - 0x20U >> 5) + 1);
    uVar24 = 1;
    pcVar22 = pcVar10;
    pcStack_500 = pcVar21;
    do {
      pcVar21 = pcVar22 + 0x20;
      if (*pcVar22 == '\x14') {
        lVar30 = *(long *)(pcVar22 + 0x18);
        if (lVar30 == 0) {
          uVar24 = 0;
LAB_1012a23e0:
          pcVar10 = (char *)FUN_1087e422c(uVar24,&UNK_10b22b5b8,&UNK_10b20a590);
        }
        else {
          lVar26 = *(long *)(pcVar22 + 0x10);
          func_0x00010133fb8c(&uStack_190,lVar26);
          pcVar10 = pcStack_188;
          if ((char)uStack_190 != '\x01') {
            if (lVar30 == 1) goto LAB_1012a23e0;
            cVar28 = uStack_190._1_1_;
            func_0x00010135de54(&uStack_190,lVar26 + 0x20);
            pcVar22 = pcStack_188;
            ppuVar31 = uStack_190;
            pcVar10 = pcStack_188;
            if (uStack_190 != (undefined **)0x4) {
              _memcpy(auStack_3b8,auStack_180,0x108);
              ppuStack_3c8 = ppuVar31;
              pcStack_3c0 = pcVar22;
              cStack_2b0 = cVar28;
              if (lVar30 == 2) goto LAB_1012a2300;
              uStack_190 = (undefined **)0x2;
              pcVar10 = (char *)FUN_1087e422c((lVar30 + 0x7fffffffffffffeU & 0x7ffffffffffffff) + 2,
                                              &uStack_190,&UNK_10b23a1b0);
              FUN_100e14aac(&ppuStack_3c8);
            }
          }
        }
LAB_1012a2490:
        lVar30 = lStack_4f8;
        *param_1 = -0x8000000000000000;
        param_1[1] = (long)pcVar10;
        pcVar19 = pcStack_4f0 + 1;
        lVar26 = lStack_4f8;
        while (pcVar19 = pcVar19 + -1, pcVar19 != (char *)0x0) {
          FUN_100e14aac(lVar26);
          lVar26 = lVar26 + 0x120;
        }
        if (pcStack_500 == (char *)0x0) {
          return;
        }
        goto LAB_1012a24c8;
      }
      if (*pcVar22 != '\x15') {
        pcVar10 = (char *)FUN_108855c40(pcVar22,&uStack_190,&UNK_10b2139e8);
        goto LAB_1012a2490;
      }
      pbVar25 = *(byte **)(pcVar22 + 0x10);
      ppuStack_2a8 = (undefined **)0x4;
      if (*(long *)(pcVar22 + 0x18) == 0) {
        ppuStack_2a8 = (undefined **)0x4;
LAB_1012a2404:
        ppuVar31 = ppuStack_2a8;
        puStack_78 = &UNK_108cde374;
        uStack_70 = 4;
        uStack_190 = &puStack_78;
        pcStack_188 = &DAT_100c7b3a0;
        pcVar10 = (char *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_190);
        pcVar22 = pcStack_2a0;
        ppuVar6 = ppuStack_2a8;
joined_r0x0001012a23c8:
        ppuStack_2a8 = ppuVar6;
        pcStack_2a0 = pcVar22;
        if (ppuVar31 != (undefined **)0x4) {
LAB_1012a2444:
          FUN_100e14aac(&ppuStack_2a8);
        }
        goto LAB_1012a2490;
      }
      lVar30 = *(long *)(pcVar22 + 0x18) << 6;
      cVar28 = '\x02';
      ppuVar31 = (undefined **)0x4;
      do {
        bVar1 = *pbVar25;
        if (bVar1 < 0xd) {
          if (bVar1 == 1) {
            iVar23 = 1;
            if (pbVar25[1] != 1) {
              iVar23 = 2;
            }
            if (pbVar25[1] == 0) goto LAB_1012a2234;
LAB_1012a21c8:
            if (iVar23 != 2) goto LAB_1012a21d4;
          }
          else if (bVar1 == 4) {
            iVar23 = 1;
            if (*(long *)(pbVar25 + 8) != 1) {
              iVar23 = 2;
            }
            if (*(long *)(pbVar25 + 8) != 0) goto LAB_1012a21c8;
LAB_1012a2234:
            if (cVar28 != '\x02') {
              puStack_78 = &UNK_108cde374;
              uStack_70 = 4;
              uStack_190 = &puStack_78;
              pcStack_188 = &DAT_100c7b3a0;
              ppuStack_2a8 = ppuVar31;
              pcStack_2a0 = pcVar22;
              pcVar10 = (char *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_190);
              pcVar22 = pcStack_2a0;
              ppuVar6 = ppuStack_2a8;
              goto joined_r0x0001012a23c8;
            }
            func_0x00010133fb8c(&uStack_190,pbVar25 + 0x20);
            ppuVar6 = ppuVar31;
            pcVar10 = pcStack_188;
            if ((char)uStack_190 == '\x01') goto joined_r0x0001012a23c8;
            cVar28 = uStack_190._1_1_;
          }
          else {
            if (bVar1 != 0xc) {
LAB_1012a2530:
              ppuStack_2a8 = ppuVar31;
              pcStack_2a0 = pcVar22;
              pcVar10 = (char *)FUN_108855c40(pbVar25,&uStack_190,&UNK_10b214a48);
              pcVar22 = pcStack_2a0;
              ppuVar6 = ppuStack_2a8;
              goto joined_r0x0001012a23c8;
            }
            piVar13 = *(int **)(pbVar25 + 0x10);
            lVar26 = *(long *)(pbVar25 + 0x18);
            if (lVar26 != 7) goto LAB_1012a2218;
LAB_1012a2084:
            if (*piVar13 == 0x746e6f63 && *(int *)((long)piVar13 + 3) == 0x746e6574) {
LAB_1012a21d4:
              if (ppuVar31 != (undefined **)0x4) {
                puStack_78 = &UNK_108ca1095;
                uStack_70 = 7;
                uStack_190 = &puStack_78;
                pcStack_188 = &DAT_100c7b3a0;
                ppuStack_2a8 = ppuVar31;
                pcStack_2a0 = pcVar22;
                pcVar10 = (char *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_190);
                goto LAB_1012a2444;
              }
              func_0x00010135de54(&uStack_190);
              pcVar22 = pcStack_188;
              ppuVar31 = uStack_190;
              pcVar10 = pcStack_188;
              if (uStack_190 == (undefined **)0x4) goto LAB_1012a2490;
              _memcpy(auStack_298,auStack_180,0x108);
            }
          }
        }
        else if (bVar1 == 0xd) {
          piVar13 = *(int **)(pbVar25 + 8);
          lVar26 = *(long *)(pbVar25 + 0x10);
          if (lVar26 == 7) goto LAB_1012a2084;
LAB_1012a2218:
          if ((lVar26 == 4) && (*piVar13 == 0x656c6f72)) goto LAB_1012a2234;
        }
        else {
          if (bVar1 == 0xe) {
            pcVar10 = *(char **)(pbVar25 + 0x10);
            lVar26 = *(long *)(pbVar25 + 0x18);
          }
          else {
            if (bVar1 != 0xf) goto LAB_1012a2530;
            pcVar10 = *(char **)(pbVar25 + 8);
            lVar26 = *(long *)(pbVar25 + 0x10);
          }
          if (lVar26 == 7) {
            if ((((*pcVar10 == 'c') && ((pcVar10[1] == 'o' && (pcVar10[2] == 'n')))) &&
                (pcVar10[3] == 't')) &&
               (((pcVar10[4] == 'e' && (pcVar10[5] == 'n')) && (pcVar10[6] == 't'))))
            goto LAB_1012a21d4;
          }
          else if ((((lVar26 == 4) && (*pcVar10 == 'r')) && (pcVar10[1] == 'o')) &&
                  ((pcVar10[2] == 'l' && (pcVar10[3] == 'e')))) goto LAB_1012a2234;
        }
        pbVar25 = pbVar25 + 0x40;
        lVar30 = lVar30 + -0x40;
      } while (lVar30 != 0);
      ppuStack_2a8 = ppuVar31;
      pcStack_2a0 = pcVar22;
      if (cVar28 == '\x02') goto LAB_1012a2404;
      if (ppuVar31 == (undefined **)0x4) {
        puStack_78 = &UNK_108ca1095;
        uStack_70 = 7;
        uStack_190 = &puStack_78;
        pcStack_188 = &DAT_100c7b3a0;
        pcVar10 = (char *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_190);
        goto LAB_1012a2490;
      }
      _memcpy(auStack_3b8,auStack_298,0x108);
      cStack_2b0 = cVar28;
LAB_1012a2300:
      ppuStack_3c8 = ppuVar31;
      pcStack_3c0 = pcVar22;
      _memcpy(auStack_4d8,auStack_3b8,0x110);
      pcVar10 = pcStack_4f0;
      ppuStack_4e8 = ppuVar31;
      pcStack_4e0 = pcVar22;
      if (pcStack_4f0 == pcStack_500) {
        func_0x000108a422b4(&pcStack_500);
      }
      _memcpy(lStack_4f8 + (long)pcVar10 * 0x120,&ppuStack_4e8,0x120);
      pcStack_4f0 = pcVar10 + 1;
      pcVar22 = pcVar21;
      pcVar10 = pcVar19;
    } while (pcVar21 != pcVar19);
    goto LAB_1012a2344;
  }
  uVar24 = func_0x0001087c9084(8,(long)pcVar21 * 0x120);
  func_0x000100e425a8(pcVar19);
  __Unwind_Resume(uVar24);
  auVar36 = func_0x000108a07bc4();
  puVar12 = auVar36._8_8_;
  puVar11 = auVar36._0_8_;
  pcVar19 = (char *)puVar12[10];
  pcVar22 = (char *)puVar12[0xb];
  uVar15 = *puVar12 ^ 0x8000000000000000;
  if (-1 < (long)*puVar12) {
    uVar15 = 6;
  }
  pcStack_828 = pcVar22;
  if (uVar15 == 0) {
    func_0x00010161556c(&pcStack_788,puVar12 + 1);
    pcVar20 = (char *)(ulong)bStack_780;
    pcVar14 = extraout_x8;
    pcStack_808 = extraout_x9;
    pcStack_818 = extraout_x10;
    pcStack_810 = extraout_x11;
    pcStack_820 = extraout_x12;
    pcStack_828 = extraout_x15;
    pcVar32 = pcStack_788;
    if (pcStack_788 != (char *)0x2) {
      unaff_x27 = (char *)(ulong)uStack_77f;
      pcVar14 = pcStack_738;
      pcStack_808 = pcStack_748;
      pcStack_818 = pcStack_740;
      pcStack_810 = pcStack_758;
      pcStack_820 = pcStack_770;
      pcStack_828 = pcStack_778;
      pcVar10 = pcStack_768;
      pcVar21 = pcStack_760;
      unaff_x25 = pcStack_750;
      pcVar32 = pcStack_788;
    }
    goto LAB_1012a29d4;
  }
  if (uVar15 == 6) {
    uStack_7c8 = puVar12[5];
    uStack_7d0 = puVar12[4];
    uStack_7b8 = puVar12[7];
    uStack_7c0 = puVar12[6];
    uStack_7a8 = puVar12[9];
    uStack_7b0 = puVar12[8];
    plVar35 = (long *)puVar12[1];
    uVar34 = *puVar12;
    uStack_7d8 = puVar12[3];
    uVar33 = puVar12[2];
    uStack_7f0 = uVar34;
    plStack_7e8 = plVar35;
    uStack_7e0 = uVar33;
    pcStack_7a0 = pcVar19;
    pcStack_798 = pcVar22;
    if (uStack_7c0 == 1) {
      if ((uStack_7d0 != 0) && (uStack_7d0 * 9 != -0x11)) {
        _free(uStack_7d8 + uStack_7d0 * -8 + -8);
      }
      plStack_6e8 = plVar35 + uVar33 * 0x12;
      pcStack_788 = (char *)0x8000000000000001;
      plStack_6f8 = plVar35;
      plStack_700 = plVar35;
      uStack_6f0 = uVar34;
      pcStack_6e0 = pcVar19;
      pcStack_6d8 = pcVar22;
      if (uVar33 == 0) {
LAB_1012a28d8:
        pcVar10 = (char *)_malloc(0x36);
        if (pcVar10 == (char *)0x0) {
          func_0x0001087c9084(1,0x36);
LAB_1012a2d10:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1012a2d14);
          (*pcVar7)();
        }
        pcStack_810 = (char *)0x0;
        pcStack_808 = (char *)0x0;
        builtin_strncpy(pcVar10,"expected table with exactly 1 entry, found empty table",0x36);
        pcStack_820 = (char *)0x36;
        pcStack_818 = (char *)0x0;
        unaff_x27 = pcVar19;
        pcVar21 = (char *)0x36;
        pcVar29 = (char *)0x8;
LAB_1012a2924:
        FUN_100e1fd94(&pcStack_788);
        pcVar32 = (char *)0x1;
      }
      else {
        plStack_6f8 = plVar35 + 0x12;
        if (*plVar35 == -0x7fffffffffffffff) goto LAB_1012a28d8;
        pcVar20 = (char *)plVar35[3];
        pcVar14 = (char *)plVar35[4];
        lStack_5f0 = plVar35[1];
        lStack_5e8 = plVar35[2];
        pcStack_5b8 = (char *)plVar35[10];
        pcStack_5c0 = (char *)plVar35[9];
        pcStack_5a8 = (char *)plVar35[0xc];
        pcStack_5b0 = (char *)plVar35[0xb];
        pcStack_598 = (char *)plVar35[0xe];
        pcStack_5a0 = (char *)plVar35[0xd];
        pcStack_588 = (char *)plVar35[0x10];
        pcStack_590 = (char *)plVar35[0xf];
        pcStack_5d8 = (char *)plVar35[6];
        pcStack_5e0 = (char *)plVar35[5];
        pcStack_5c8 = (char *)plVar35[8];
        pcStack_5d0 = (char *)plVar35[7];
        pcStack_6a8 = (char *)plVar35[10];
        pcStack_6b0 = (char *)plVar35[9];
        pcStack_698 = (char *)plVar35[0xc];
        pcStack_6a0 = (char *)plVar35[0xb];
        pcStack_688 = (char *)plVar35[0xe];
        pcStack_690 = (char *)plVar35[0xd];
        pcStack_678 = (char *)plVar35[0x10];
        pcStack_680 = (char *)plVar35[0xf];
        pcStack_6c8 = (char *)plVar35[6];
        pcStack_6d0 = (char *)plVar35[5];
        pcStack_6b8 = (char *)plVar35[8];
        pcStack_6c0 = (char *)plVar35[7];
        uStack_610 = 1;
        pcStack_608 = pcVar20;
        pcStack_600 = pcVar14;
        lStack_5f8 = *plVar35;
        func_0x00010161556c(&uStack_668,&lStack_5f8);
        pcVar5 = pcStack_678;
        pcVar4 = pcStack_680;
        pcStack_808 = pcStack_688;
        pcVar29 = pcStack_690;
        pcStack_810 = pcStack_698;
        pcVar21 = pcStack_6a0;
        pcVar10 = pcStack_6a8;
        pcVar3 = pcStack_6b0;
        pcVar2 = pcStack_6b8;
        unaff_x27 = pcStack_6c0;
        pcVar32 = pcStack_6c8;
        unaff_x25 = pcStack_6d0;
        if (uStack_668 != 2) {
          pcStack_810 = pcStack_638;
          pcStack_808 = pcStack_628;
          pcStack_820 = pcStack_650;
          pcStack_818 = pcStack_620;
          pcStack_7f8 = pcStack_618;
          FUN_100dfe50c(&pcStack_6d0);
          unaff_x27 = (char *)CONCAT71(uStack_65f,cStack_660);
          pcVar10 = pcStack_648;
          pcVar21 = pcStack_640;
          pcVar29 = pcStack_630;
          pcStack_828 = pcStack_658;
          if ((uStack_668 & 1) == 0) {
            unaff_x27 = pcVar20;
            pcStack_828 = pcVar14;
          }
          goto LAB_1012a2924;
        }
        pcStack_828 = pcStack_6b8;
        pcStack_820 = pcStack_6b0;
        pcStack_818 = pcStack_680;
        pcStack_7f8 = pcStack_678;
        FUN_100e1fd94(&pcStack_788);
        if (unaff_x25 != (char *)0x8000000000000006) {
          pcStack_5e0 = unaff_x25;
          pcStack_5d8 = pcVar32;
          pcStack_5d0 = unaff_x27;
          pcStack_5c8 = pcVar2;
          pcStack_5c0 = pcVar3;
          pcStack_5b8 = pcVar10;
          pcStack_5b0 = pcVar21;
          pcStack_5a8 = pcStack_810;
          pcStack_5a0 = pcVar29;
          pcStack_598 = pcStack_808;
          pcStack_590 = pcVar4;
          pcStack_588 = pcVar5;
          if (cStack_660 == '\0') {
            func_0x00010611e0d4(&pcStack_6d0,&pcStack_5e0);
            if (pcStack_6d0 != (char *)0x2) goto LAB_1012a2cbc;
            pcVar20 = (char *)0x0;
            pcVar14 = extraout_x8_02;
            pcStack_808 = extraout_x9_01;
            pcStack_818 = extraout_x10_01;
            pcStack_810 = extraout_x11_01;
            pcStack_820 = extraout_x12_01;
            pcStack_828 = extraout_x15_01;
            pcVar32 = pcStack_6d0;
          }
          else if (cStack_660 == '\x01') {
            func_0x00010611e0d4(&pcStack_6d0,&pcStack_5e0);
            if (pcStack_6d0 == (char *)0x2) {
              pcVar20 = (char *)0x1;
              pcVar14 = extraout_x8_01;
              pcStack_808 = extraout_x9_00;
              pcStack_818 = extraout_x10_00;
              pcStack_810 = extraout_x11_00;
              pcStack_820 = extraout_x12_00;
              pcStack_828 = extraout_x15_00;
              pcVar32 = pcStack_6d0;
            }
            else {
LAB_1012a2cbc:
              unaff_x27 = (char *)((ulong)pcStack_6c8 >> 8);
              pcVar14 = pcStack_680;
              pcStack_808 = pcStack_690;
              pcStack_818 = pcStack_688;
              pcStack_810 = pcStack_6a0;
              pcStack_820 = pcStack_6b8;
              pcVar20 = pcStack_6c8;
              pcStack_828 = pcStack_6c0;
              pcVar10 = pcStack_6b0;
              pcVar21 = pcStack_6a8;
              unaff_x25 = pcStack_698;
              pcVar32 = pcStack_6d0;
            }
          }
          else {
            func_0x00010611e0d4(&pcStack_6d0,&pcStack_5e0);
            if (pcStack_6d0 != (char *)0x2) goto LAB_1012a2cbc;
            pcVar20 = (char *)0x2;
            pcVar14 = extraout_x8_03;
            pcStack_808 = extraout_x9_02;
            pcStack_818 = extraout_x10_02;
            pcStack_810 = extraout_x11_02;
            pcStack_820 = extraout_x12_02;
            pcStack_828 = extraout_x15_02;
            pcVar32 = pcStack_6d0;
          }
          goto LAB_1012a29d4;
        }
      }
      pcVar14 = pcStack_7f8;
      pcVar20 = unaff_x27;
      unaff_x25 = pcVar29;
      unaff_x27 = (char *)((ulong)unaff_x27 >> 8);
    }
    else {
      if (uStack_7c0 == 0) {
        uVar24 = 0x2a;
        pcVar10 = (char *)_malloc(0x2a);
        if (pcVar10 == (char *)0x0) {
LAB_1012a2cf4:
          func_0x0001087c9084(1,uVar24);
          goto LAB_1012a2d10;
        }
        builtin_strncpy(pcVar10,"wanted exactly 1 element, found 0 elements",0x2a);
        pcStack_820 = (char *)0x2a;
      }
      else {
        uVar24 = 0x2d;
        pcVar10 = (char *)_malloc(0x2d);
        if (pcVar10 == (char *)0x0) goto LAB_1012a2cf4;
        builtin_strncpy(pcVar10,"wanted exactly 1 element, more than 1 element",0x2d);
        pcStack_820 = (char *)0x2d;
      }
      if ((uStack_7d0 != 0) && (uStack_7d0 * 9 != -0x11)) {
        _free(uStack_7d8 + uStack_7d0 * -8 + -8);
      }
      func_0x000100d96fa0(&uStack_7f0);
      pcStack_818 = (char *)0x0;
      pcVar14 = extraout_x8_00;
      pcStack_808 = (char *)0x0;
      pcStack_810 = (char *)0x0;
      pcVar20 = pcVar19;
      pcVar21 = pcStack_820;
      unaff_x25 = (char *)0x8;
      unaff_x27 = (char *)((ulong)pcVar19 >> 8);
      pcVar32 = (char *)0x1;
    }
LAB_1012a29d4:
    if (pcVar32 == (char *)0x2) {
      bVar8 = true;
      uVar24 = 2;
      pcVar19 = pcVar20;
      if (uVar15 != 0 && uVar15 != 6) {
LAB_1012a2a30:
        FUN_100dfe50c(puVar12);
        uVar17 = SUB81(pcVar19,0);
        goto joined_r0x0001012a2a90;
      }
    }
    else {
      bVar8 = ((ulong)pcVar32 & 1) == 0;
      uVar18 = (uint)pcVar20;
      if (bVar8) {
        uVar18 = (uint)pcVar19;
      }
      pcVar20 = (char *)((long)unaff_x27 << 8);
      if (bVar8) {
        pcStack_828 = pcVar22;
        pcVar20 = pcVar19;
      }
      bVar8 = false;
      unaff_x27 = (char *)((ulong)pcVar20 >> 8);
      uVar24 = 1;
      pcVar19 = (char *)(ulong)uVar18;
      pcVar22 = pcStack_828;
      pcStack_7f8 = pcVar14;
      if (uVar15 != 0 && uVar15 != 6) goto LAB_1012a2a30;
    }
  }
  else {
    pcVar10 = (char *)_malloc(0x16);
    if (pcVar10 == (char *)0x0) {
      func_0x0001087c9084(1,0x16);
      goto LAB_1012a2d10;
    }
    pcStack_808 = (char *)0x0;
    pcStack_818 = (char *)0x0;
    pcStack_810 = (char *)0x0;
    builtin_strncpy(pcVar10,"wanted string or table",0x16);
    pcVar21 = (char *)0x16;
    unaff_x25 = (char *)0x8;
    pcStack_820 = (char *)0x16;
    bVar8 = false;
    unaff_x27 = (char *)((ulong)pcVar19 >> 8);
    uVar24 = 1;
    if (uVar15 != 0 && uVar15 != 6) goto LAB_1012a2a30;
  }
  uVar17 = SUB81(pcVar19,0);
joined_r0x0001012a2a90:
  if (bVar8) {
    *(undefined1 *)(puVar11 + 1) = uVar17;
    uVar24 = 2;
  }
  else {
    *(int *)((long)puVar11 + 9) = (int)unaff_x27;
    *(char *)((long)puVar11 + 0xf) = (char)((ulong)unaff_x27 >> 0x30);
    *(short *)((long)puVar11 + 0xd) = (short)((ulong)unaff_x27 >> 0x20);
    puVar11[4] = pcVar10;
    puVar11[5] = pcVar21;
    puVar11[6] = pcStack_810;
    puVar11[7] = unaff_x25;
    puVar11[8] = pcStack_808;
    puVar11[9] = pcStack_818;
    puVar11[10] = pcStack_7f8;
    *(undefined1 *)(puVar11 + 1) = uVar17;
    puVar11[2] = pcVar22;
    puVar11[3] = pcStack_820;
  }
  *puVar11 = uVar24;
  return;
}

