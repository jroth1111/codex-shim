
void FUN_101353e7c(long *param_1,byte *param_2)

{
  byte *pbVar1;
  long *plVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  char cVar10;
  undefined7 uVar11;
  undefined7 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined7 uVar15;
  undefined7 uVar16;
  undefined **ppuVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined **ppuVar26;
  undefined8 *puVar27;
  byte *pbVar28;
  byte *pbVar29;
  undefined *puVar30;
  undefined **ppuVar31;
  undefined **ppuVar32;
  undefined **ppuVar33;
  undefined8 uVar34;
  long lStack_170;
  long lStack_168;
  undefined **ppuStack_158;
  char cStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined *puStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  long lStack_120;
  byte *pbStack_118;
  undefined **ppuStack_110;
  char cStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined **ppuStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  long *plStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  
  bVar5 = *param_2;
  if (bVar5 == 0x14) {
    plVar2 = *(long **)(param_2 + 8);
    ppuVar31 = *(undefined ***)(param_2 + 0x10);
    lVar23 = *(long *)(param_2 + 0x18);
    ppuVar32 = ppuVar31 + lVar23 * 4;
    lStack_a8 = 0;
    ppuVar26 = ppuVar31;
    uStack_c8 = ppuVar31;
    plStack_b8 = plVar2;
    ppuStack_b0 = ppuVar32;
    if (lVar23 == 0) {
LAB_1013543a8:
      ppuStack_c0 = ppuVar26;
      lVar20 = FUN_1087e422c(0,&UNK_10b232940,&UNK_10b20a590);
LAB_1013543c4:
      *param_1 = -0x8000000000000000;
      param_1[1] = lVar20;
LAB_1013543cc:
      lVar23 = ((ulong)((long)ppuVar32 - (long)ppuVar26) >> 5) + 1;
      while (lVar23 = lVar23 + -1, lVar23 != 0) {
        FUN_100e077ec(ppuVar26);
        ppuVar26 = ppuVar26 + 4;
      }
    }
    else {
      ppuVar26 = ppuVar31 + 4;
      if (*(char *)ppuVar31 == '\x16') goto LAB_1013543a8;
      uStack_147 = (undefined7)*(undefined8 *)((long)ppuVar31 + 9);
      uStack_14f = (undefined7)*(undefined8 *)((long)ppuVar31 + 1);
      uStack_148 = (undefined1)((ulong)*(undefined8 *)((long)ppuVar31 + 1) >> 0x38);
      puStack_138 = ppuVar31[3];
      uStack_140 = SUB81(ppuVar31[2],0);
      uStack_13f = (undefined7)((ulong)ppuVar31[2] >> 8);
      lStack_a8 = 1;
      cStack_150 = *(char *)ppuVar31;
      ppuStack_c0 = ppuVar26;
      FUN_1004b62d4(&cStack_108,&cStack_150);
      lVar8 = CONCAT71(uStack_107,cStack_108);
      lVar20 = CONCAT71(uStack_ff,uStack_100);
      if (lVar8 == -0x8000000000000000) goto LAB_1013543c4;
      if (lVar23 == 1) {
LAB_101354474:
        lVar19 = FUN_1087e422c(1,&UNK_10b232940,&UNK_10b20a590);
LAB_10135448c:
        *param_1 = -0x8000000000000000;
        param_1[1] = lVar19;
        if (lVar8 != 0) {
          _free(lVar20);
        }
        goto LAB_1013543cc;
      }
      lVar23 = CONCAT71(uStack_f7,uStack_f8);
      ppuVar26 = ppuVar31 + 8;
      ppuStack_c0 = ppuVar26;
      if (*(char *)(ppuVar31 + 4) == '\x16') goto LAB_101354474;
      uStack_ff = (undefined7)*(undefined8 *)((long)ppuVar31 + 0x29);
      uStack_107 = (undefined7)*(undefined8 *)((long)ppuVar31 + 0x21);
      uStack_100 = (undefined1)((ulong)*(undefined8 *)((long)ppuVar31 + 0x21) >> 0x38);
      ppuStack_f0 = (undefined **)ppuVar31[7];
      uStack_f8 = SUB81(ppuVar31[6],0);
      uStack_f7 = (undefined7)((ulong)ppuVar31[6] >> 8);
      lStack_a8 = 2;
      cStack_108 = *(char *)(ppuVar31 + 4);
      FUN_10138581c(&cStack_150,&cStack_108);
      lVar7 = CONCAT71(uStack_14f,cStack_150);
      lVar19 = CONCAT71(uStack_147,uStack_148);
      if (lVar7 == -0x8000000000000000) goto LAB_10135448c;
      param_1[6] = (long)puStack_138;
      param_1[5] = CONCAT71(uStack_13f,uStack_140);
      param_1[8] = (long)pbStack_128;
      param_1[7] = (long)pbStack_130;
      param_1[10] = (long)pbStack_118;
      param_1[9] = lStack_120;
      *param_1 = lVar8;
      param_1[1] = lVar20;
      param_1[2] = lVar23;
      param_1[3] = lVar7;
      param_1[4] = lVar19;
      uVar3 = param_1[6];
      ppuVar31 = (undefined **)param_1[7];
      lVar23 = FUN_100fbc738(&uStack_c8);
      if (lVar23 == 0) goto LAB_1013546c8;
      *param_1 = -0x8000000000000000;
      param_1[1] = lVar23;
      if (lVar8 != 0) {
        _free(lVar20);
      }
      if (lVar7 != 0) {
        _free(lVar19);
      }
      plVar2 = (long *)(uVar3 & 0x7fffffffffffffff);
    }
    if (plVar2 != (long *)0x0) {
      _free(ppuVar31);
    }
    goto LAB_1013546c8;
  }
  if (bVar5 != 0x15) {
    lVar23 = FUN_108855b04(param_2,&puStack_88,&UNK_10b20a8c0);
    *param_1 = -0x8000000000000000;
    param_1[1] = lVar23;
    return;
  }
  lStack_120 = *(long *)(param_2 + 8);
  pbStack_130 = *(byte **)(param_2 + 0x10);
  lVar23 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar1 = pbStack_130 + lVar23;
  cStack_150 = '\x16';
  ppuStack_110 = (undefined **)0x0;
  pbStack_118 = pbVar1;
  if (*(long *)(param_2 + 0x18) == 0) {
    ppuVar26 = (undefined **)0x8000000000000000;
    cStack_108 = '\0';
    uStack_107 = 0x80000000000000;
    pbStack_128 = pbStack_130;
LAB_1013544dc:
    puStack_88 = &UNK_108c982f8;
    lStack_80 = 8;
    uStack_c8 = &puStack_88;
    ppuStack_c0 = (undefined **)&DAT_100c7b3a0;
    puVar30 = (undefined *)0x0;
    lVar23 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_c8);
LAB_101354510:
    *param_1 = -0x8000000000000000;
    param_1[1] = lVar23;
joined_r0x0001013546a0:
    if (ppuVar26 != (undefined **)0x8000000000000000) {
joined_r0x0001013547fc:
      if (ppuVar26 != (undefined **)0x0) {
        _free(ppuStack_158);
      }
      if ((ppuStack_f0 != (undefined **)0x8000000000000000) && (ppuStack_f0 != (undefined **)0x0)) {
        _free(lStack_e8);
      }
    }
LAB_1013546a4:
    puVar30 = (undefined *)((ulong)puVar30 & 0x7fffffffffffffff);
  }
  else {
    ppuVar32 = (undefined **)0x0;
    puVar27 = (undefined8 *)((ulong)&uStack_c8 | 1);
    puVar25 = (undefined8 *)((ulong)&cStack_150 | 1);
    puVar24 = (undefined8 *)((ulong)&puStack_88 | 1);
    ppuVar26 = (undefined **)0x8000000000000000;
    puVar30 = (undefined *)0x8000000000000000;
    ppuVar31 = (undefined **)0x8000000000000000;
    pbVar6 = pbStack_130;
    pbStack_128 = pbStack_130;
    do {
      ppuVar17 = uStack_c8;
      uVar15 = uStack_ff;
      uVar13 = uStack_100;
      uVar11 = uStack_107;
      cVar9 = cStack_108;
      pbVar28 = pbVar6 + 0x40;
      bVar4 = *pbVar6;
      pbVar29 = pbVar28;
      ppuVar33 = ppuVar32;
      if (bVar4 == 0x16) break;
      uStack_c8 = (undefined **)CONCAT71(uStack_c8._1_7_,bVar4);
      ppuVar33 = uStack_c8;
      uVar34 = *(undefined8 *)(pbVar6 + 0x10);
      *(undefined8 *)((long)puVar27 + 0x17) = *(undefined8 *)(pbVar6 + 0x18);
      *(undefined8 *)((long)puVar27 + 0xf) = uVar34;
      uVar34 = *(undefined8 *)(pbVar6 + 1);
      puVar27[1] = *(undefined8 *)(pbVar6 + 9);
      *puVar27 = uVar34;
      puStack_138 = *(undefined **)(pbVar6 + 0x38);
      uStack_148 = (undefined1)*(undefined8 *)(pbVar6 + 0x28);
      uStack_147 = (undefined7)((ulong)*(undefined8 *)(pbVar6 + 0x28) >> 8);
      cStack_150 = (char)*(undefined8 *)(pbVar6 + 0x20);
      uStack_14f = (undefined7)((ulong)*(undefined8 *)(pbVar6 + 0x20) >> 8);
      uStack_140 = (undefined1)*(undefined8 *)(pbVar6 + 0x30);
      uStack_13f = (undefined7)((ulong)*(undefined8 *)(pbVar6 + 0x30) >> 8);
      cStack_108 = (char)ppuVar31;
      cVar10 = cStack_108;
      uStack_107 = (undefined7)((ulong)ppuVar31 >> 8);
      uVar12 = uStack_107;
      uStack_100 = SUB81(ppuStack_158,0);
      uVar14 = uStack_100;
      uStack_ff = (undefined7)((ulong)ppuStack_158 >> 8);
      uVar16 = uStack_ff;
      if (bVar4 < 0xd) {
        if (bVar4 == 1) {
          uStack_c8._1_1_ = SUB81(ppuVar17,1);
          iVar22 = 1;
          if (uStack_c8._1_1_ != '\x01') {
            iVar22 = 2;
          }
          iVar21 = 0;
          if (uStack_c8._1_1_ != '\0') {
            iVar21 = iVar22;
          }
        }
        else {
          if (bVar4 != 4) {
            if (bVar4 == 0xc) {
              if (ppuStack_b0 == (undefined **)0x5) {
                iVar21 = 1;
                if ((int)*plStack_b8 != 0x69647561 || *(char *)((long)plStack_b8 + 4) != 'o') {
                  iVar21 = 2;
                }
              }
              else if (ppuStack_b0 == (undefined **)0x8) {
                iVar21 = 2;
                if (*plStack_b8 == 0x6449646165726874) {
                  iVar21 = 0;
                }
              }
              else {
                iVar21 = 2;
              }
              goto joined_r0x0001013541a4;
            }
LAB_10135490c:
            ppuStack_110 = (undefined **)((long)ppuVar32 + 1);
            pbStack_128 = pbVar28;
            lVar23 = FUN_108855b04(&uStack_c8,&puStack_88,&UNK_10b20d6c0);
            goto LAB_101354510;
          }
          iVar22 = 1;
          if (ppuStack_c0 != (undefined **)0x1) {
            iVar22 = 2;
          }
          iVar21 = 0;
          if (ppuStack_c0 != (undefined **)0x0) {
            iVar21 = iVar22;
          }
        }
LAB_101354258:
        cStack_108 = cVar9;
        uStack_107 = uVar11;
        uStack_100 = uVar13;
        uStack_ff = uVar15;
        uStack_c8 = ppuVar33;
        FUN_100e077ec(&uStack_c8);
      }
      else {
        if (bVar4 == 0xd) {
          if (plStack_b8 == (long *)0x5) {
            iVar21 = 1;
            if (*(int *)ppuStack_c0 != 0x69647561 || *(char *)((long)ppuStack_c0 + 4) != 'o') {
              iVar21 = 2;
            }
          }
          else {
            if (plStack_b8 != (long *)0x8) goto LAB_101354224;
            iVar21 = 2;
            if (*ppuStack_c0 == (undefined *)0x6449646165726874) {
              iVar21 = 0;
            }
          }
          goto LAB_101354258;
        }
        if (bVar4 != 0xe) {
          if (bVar4 != 0xf) goto LAB_10135490c;
          if (plStack_b8 == (long *)0x5) {
            if ((((*(char *)ppuStack_c0 != 'a') || (*(char *)((long)ppuStack_c0 + 1) != 'u')) ||
                (*(char *)((long)ppuStack_c0 + 2) != 'd')) ||
               ((*(char *)((long)ppuStack_c0 + 3) != 'i' ||
                (*(char *)((long)ppuStack_c0 + 4) != 'o')))) goto LAB_101354224;
            iVar21 = 1;
          }
          else if (((((plStack_b8 == (long *)0x8) && (*(char *)ppuStack_c0 == 't')) &&
                    ((*(char *)((long)ppuStack_c0 + 1) == 'h' &&
                     (((*(char *)((long)ppuStack_c0 + 2) == 'r' &&
                       (*(char *)((long)ppuStack_c0 + 3) == 'e')) &&
                      (*(char *)((long)ppuStack_c0 + 4) == 'a')))))) &&
                   ((*(char *)((long)ppuStack_c0 + 5) == 'd' &&
                    (*(char *)((long)ppuStack_c0 + 6) == 'I')))) &&
                  (*(char *)((long)ppuStack_c0 + 7) == 'd')) {
            iVar21 = 0;
          }
          else {
LAB_101354224:
            iVar21 = 2;
          }
          goto LAB_101354258;
        }
        if (ppuStack_b0 == (undefined **)0x5) {
          if ((((char)*plStack_b8 != 'a') || (*(char *)((long)plStack_b8 + 1) != 'u')) ||
             ((*(char *)((long)plStack_b8 + 2) != 'd' ||
              ((*(char *)((long)plStack_b8 + 3) != 'i' || (*(char *)((long)plStack_b8 + 4) != 'o')))
              ))) goto LAB_1013541a0;
          iVar21 = 1;
        }
        else if (((((ppuStack_b0 == (undefined **)0x8) && ((char)*plStack_b8 == 't')) &&
                  (*(char *)((long)plStack_b8 + 1) == 'h')) &&
                 ((*(char *)((long)plStack_b8 + 2) == 'r' &&
                  (*(char *)((long)plStack_b8 + 3) == 'e')))) &&
                (((*(char *)((long)plStack_b8 + 4) == 'a' &&
                  ((*(char *)((long)plStack_b8 + 5) == 'd' &&
                   (*(char *)((long)plStack_b8 + 6) == 'I')))) &&
                 (*(char *)((long)plStack_b8 + 7) == 'd')))) {
          iVar21 = 0;
        }
        else {
LAB_1013541a0:
          iVar21 = 2;
        }
joined_r0x0001013541a4:
        cStack_108 = cVar9;
        uStack_107 = uVar11;
        uStack_100 = uVar13;
        uStack_ff = uVar15;
        if (ppuStack_c0 != (undefined **)0x0) {
          _free();
        }
      }
      cVar9 = cStack_150;
      if (iVar21 == 0) {
        if (puVar30 != (undefined *)0x8000000000000000) {
          ppuStack_110 = (undefined **)((long)ppuVar32 + 1);
          puStack_88 = &UNK_108c982f8;
          lStack_80 = 8;
          uStack_c8 = &puStack_88;
          ppuStack_c0 = (undefined **)&DAT_100c7b3a0;
          pbStack_128 = pbVar28;
          cStack_108 = cVar10;
          uStack_107 = uVar12;
          uStack_100 = uVar14;
          uStack_ff = uVar16;
          lVar23 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_c8);
          goto LAB_101354510;
        }
        cStack_150 = '\x16';
        if (cVar9 == '\x16') {
          ppuStack_110 = (undefined **)((long)ppuVar32 + 1);
          pbStack_128 = pbVar28;
          cStack_108 = cVar10;
          uStack_107 = uVar12;
          uStack_100 = uVar14;
          uStack_ff = uVar16;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_101354908;
        }
        uVar34 = *puVar25;
        puVar27[1] = puVar25[1];
        *puVar27 = uVar34;
        uVar34 = *(undefined8 *)((long)puVar25 + 0xf);
        *(undefined8 *)((long)puVar27 + 0x17) = *(undefined8 *)((long)puVar25 + 0x17);
        *(undefined8 *)((long)puVar27 + 0xf) = uVar34;
        uStack_c8 = (undefined **)CONCAT71(uStack_c8._1_7_,cVar9);
        FUN_1004b62d4(&puStack_88,&uStack_c8);
        if (puStack_88 == (undefined *)0x8000000000000000) {
          ppuStack_110 = (undefined **)((long)ppuVar32 + 1);
          puVar30 = (undefined *)0x0;
          *param_1 = -0x8000000000000000;
          param_1[1] = lStack_80;
          pbStack_128 = pbVar28;
          cStack_108 = cVar10;
          uStack_107 = uVar12;
          uStack_100 = uVar14;
          uStack_ff = uVar16;
          goto joined_r0x0001013546a0;
        }
        lStack_168 = lStack_80;
        lStack_170 = lStack_78;
        puVar30 = puStack_88;
      }
      else if (iVar21 == 1) {
        if (ppuVar26 != (undefined **)0x8000000000000000) {
          ppuStack_110 = (undefined **)((long)ppuVar32 + 1);
          puStack_88 = &UNK_108ca26cf;
          lStack_80 = 5;
          uStack_c8 = &puStack_88;
          ppuStack_c0 = (undefined **)&DAT_100c7b3a0;
          pbStack_128 = pbVar28;
          cStack_108 = cVar10;
          uStack_107 = uVar12;
          uStack_100 = uVar14;
          uStack_ff = uVar16;
          lVar23 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_c8);
          *param_1 = -0x8000000000000000;
          param_1[1] = lVar23;
          goto joined_r0x0001013547fc;
        }
        cStack_150 = '\x16';
        if (cVar9 == '\x16') {
          ppuStack_110 = (undefined **)((long)ppuVar32 + 1);
          pbStack_128 = pbVar28;
          cStack_108 = cVar10;
          uStack_107 = uVar12;
          uStack_100 = uVar14;
          uStack_ff = uVar16;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_101354908;
        }
        uVar34 = *puVar25;
        puVar24[1] = puVar25[1];
        *puVar24 = uVar34;
        uVar34 = *(undefined8 *)((long)puVar25 + 0xf);
        *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)((long)puVar25 + 0x17);
        *(undefined8 *)((long)puVar24 + 0xf) = uVar34;
        puStack_88 = (undefined *)CONCAT71(puStack_88._1_7_,cVar9);
        FUN_10138581c(&uStack_c8,&puStack_88);
        if (uStack_c8 == (undefined **)0x8000000000000000) {
          ppuStack_110 = (undefined **)((long)ppuVar32 + 1);
          *param_1 = -0x8000000000000000;
          param_1[1] = (long)ppuStack_c0;
          pbStack_128 = pbVar28;
          goto LAB_1013546a4;
        }
        ppuStack_158 = ppuStack_c0;
        ppuStack_f0 = ppuStack_b0;
        uStack_f8 = SUB81(plStack_b8,0);
        uStack_f7 = (undefined7)((ulong)plStack_b8 >> 8);
        lStack_e0 = lStack_a0;
        lStack_e8 = lStack_a8;
        lStack_d0 = lStack_90;
        lStack_d8 = lStack_98;
        ppuVar26 = uStack_c8;
        ppuVar31 = uStack_c8;
      }
      else {
        cStack_150 = '\x16';
        if (cVar9 == '\x16') {
          ppuStack_110 = (undefined **)((long)ppuVar32 + 1);
          pbStack_128 = pbVar28;
          cStack_108 = cVar10;
          uStack_107 = uVar12;
          uStack_100 = uVar14;
          uStack_ff = uVar16;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101354908:
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x10135490c);
          (*pcVar18)();
        }
        uVar34 = *puVar25;
        puVar27[1] = puVar25[1];
        *puVar27 = uVar34;
        uVar34 = *(undefined8 *)((long)puVar25 + 0xf);
        *(undefined8 *)((long)puVar27 + 0x17) = *(undefined8 *)((long)puVar25 + 0x17);
        *(undefined8 *)((long)puVar27 + 0xf) = uVar34;
        uStack_c8 = (undefined **)CONCAT71(uStack_c8._1_7_,cVar9);
        FUN_100e077ec(&uStack_c8);
      }
      ppuVar32 = (undefined **)((long)ppuVar32 + 1);
      pbVar29 = pbVar1;
      ppuVar33 = (undefined **)((lVar23 - 0x40U >> 6) + 1);
      pbVar6 = pbVar28;
    } while (pbVar28 != pbVar1);
    cStack_108 = (char)ppuVar31;
    uStack_107 = (undefined7)((ulong)ppuVar31 >> 8);
    uStack_100 = SUB81(ppuStack_158,0);
    uStack_ff = (undefined7)((ulong)ppuStack_158 >> 8);
    pbStack_128 = pbVar29;
    ppuStack_110 = ppuVar33;
    if (puVar30 == (undefined *)0x8000000000000000) goto LAB_1013544dc;
    if (ppuVar26 != (undefined **)0x8000000000000000) {
      param_1[6] = (long)ppuStack_f0;
      param_1[5] = CONCAT71(uStack_f7,uStack_f8);
      param_1[8] = lStack_e0;
      param_1[7] = lStack_e8;
      param_1[10] = lStack_d0;
      param_1[9] = lStack_d8;
      *param_1 = (long)puVar30;
      param_1[1] = lStack_168;
      param_1[2] = lStack_170;
      param_1[3] = (long)ppuVar26;
      param_1[4] = (long)ppuStack_158;
      uVar3 = param_1[6];
      lVar23 = param_1[7];
      FUN_100d34830(&pbStack_130);
      if (pbVar1 != pbVar29) {
        uStack_c8 = ppuVar33;
        lVar20 = FUN_1087e422c((undefined *)
                               (((ulong)((long)pbVar1 - (long)pbVar29) >> 6) + (long)ppuVar33),
                               &uStack_c8,&UNK_10b23a190);
        *param_1 = -0x8000000000000000;
        param_1[1] = lVar20;
        if (puVar30 != (undefined *)0x0) {
          _free(lStack_168);
        }
        if (ppuVar26 != (undefined **)0x0) {
          _free(ppuStack_158);
        }
        if ((uVar3 & 0x7fffffffffffffff) != 0) {
          _free(lVar23);
        }
      }
      goto LAB_1013546c8;
    }
    puStack_88 = &UNK_108ca26cf;
    lStack_80 = 5;
    uStack_c8 = &puStack_88;
    ppuStack_c0 = (undefined **)&DAT_100c7b3a0;
    lVar23 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_c8);
    *param_1 = -0x8000000000000000;
    param_1[1] = lVar23;
  }
  if (puVar30 != (undefined *)0x0) {
    _free(lStack_168);
  }
  FUN_100d34830(&pbStack_130);
  if (cStack_150 != '\x16') {
    FUN_100e077ec(&cStack_150);
  }
LAB_1013546c8:
  if ((bVar5 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

