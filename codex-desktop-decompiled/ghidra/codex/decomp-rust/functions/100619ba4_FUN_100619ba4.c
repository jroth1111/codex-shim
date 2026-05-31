
/* WARNING: Type propagation algorithm not settling */

void FUN_100619ba4(ulong *param_1,char *param_2)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  char cVar6;
  undefined8 *puVar7;
  long *plVar8;
  code *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  byte *pbVar21;
  byte *pbVar22;
  char cVar23;
  long lVar24;
  undefined *puVar25;
  char cVar26;
  undefined8 *unaff_x26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 *puStack_188;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  ulong uStack_140;
  byte *pbStack_138;
  long lStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  byte abStack_110 [8];
  long lStack_108;
  byte *pbStack_100;
  undefined8 *puStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  long lStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  long lStack_c0;
  byte *pbStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_78;
  undefined1 auStack_69 [9];
  
  if (*param_2 == '\x14') {
    uVar20 = *(ulong *)(param_2 + 8);
    pbVar2 = *(byte **)(param_2 + 0x10);
    uVar12 = *(ulong *)(param_2 + 0x18);
    pbVar22 = pbVar2 + uVar12 * 0x20;
    lStack_130 = 0;
    uVar18 = uVar12;
    if (0x7fff < uVar12) {
      uVar18 = 0x8000;
    }
    pbStack_150 = pbVar2;
    pbStack_148 = pbVar2;
    uStack_140 = uVar20;
    pbStack_138 = pbVar22;
    if (uVar12 == 0) {
      uStack_128 = 0;
      uStack_120 = 8;
      uStack_118 = 0;
      pbVar17 = pbVar2;
    }
    else {
      uVar12 = _malloc(uVar18 << 5);
      if (uVar12 == 0) {
        FUN_107c03c64(8,uVar18 << 5);
LAB_10061a830:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10061a834);
        (*pcVar9)();
      }
      lVar29 = 0;
      uStack_118 = 0;
      puVar13 = (undefined8 *)((ulong)abStack_110 | 1);
      puVar19 = (undefined8 *)((ulong)&uStack_90 | 1);
      puVar14 = (undefined8 *)((ulong)&pbStack_f0 | 1);
      pbVar10 = pbVar2;
      uStack_128 = uVar18;
      uStack_120 = uVar12;
      do {
        puVar28 = puStack_f8;
        pbVar5 = pbStack_100;
        lVar15 = lStack_108;
        pbVar21 = pbVar10 + 0x20;
        bVar3 = *pbVar10;
        pbVar17 = pbVar21;
        pbStack_148 = pbVar21;
        if (bVar3 == 0x16) break;
        uVar30 = *(undefined8 *)(pbVar10 + 1);
        puVar13[1] = *(undefined8 *)(pbVar10 + 9);
        *puVar13 = uVar30;
        uVar30 = *(undefined8 *)(pbVar10 + 0x10);
        *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)(pbVar10 + 0x18);
        *(undefined8 *)((long)puVar13 + 0xf) = uVar30;
        lVar29 = lVar29 + 1;
        lStack_130 = lVar29;
        abStack_110[0] = bVar3;
        if (bVar3 != 0x14) {
          if (bVar3 == 0x15) {
            lVar15 = (long)puStack_f8 * 0x40;
            pbVar10 = pbStack_100 + lVar15;
            pbStack_d0 = pbStack_100;
            pbStack_c8 = pbStack_100;
            lStack_c0 = lStack_108;
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            puStack_b0 = (undefined8 *)0x0;
            pbStack_b8 = pbVar10;
            if (puStack_f8 == (undefined8 *)0x0) {
              puVar25 = (undefined *)0x0;
LAB_10061a270:
              uStack_a8 = &UNK_108cc0453;
              pbStack_a0 = (byte *)0xd;
              uStack_90 = &uStack_a8;
              plStack_88 = (long *)&DAT_100c7b3a0;
              pbVar10 = (byte *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
              puVar27 = unaff_x26;
LAB_10061a2a4:
              if (((ulong)puVar25 & 0x7fffffffffffffff) != 0) {
LAB_10061a2b0:
                _free(pbStack_158);
              }
            }
            else {
              puVar27 = (undefined8 *)0x0;
              puVar25 = (undefined *)0x8000000000000000;
              cVar26 = '\x02';
              cVar23 = '\x03';
              do {
                plVar8 = plStack_80;
                plVar1 = plStack_88;
                puVar28 = uStack_90;
                pbVar16 = pbVar5 + 0x40;
                bVar4 = *pbVar5;
                pbVar17 = pbVar16;
                unaff_x26 = puVar27;
                if (bVar4 == 0x16) break;
                uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,bVar4);
                puVar7 = uStack_90;
                uVar30 = *(undefined8 *)(pbVar5 + 0x10);
                *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)(pbVar5 + 0x18);
                *(undefined8 *)((long)puVar19 + 0xf) = uVar30;
                uVar30 = *(undefined8 *)(pbVar5 + 1);
                puVar19[1] = *(undefined8 *)(pbVar5 + 9);
                *puVar19 = uVar30;
                pbStack_e8 = *(byte **)(pbVar5 + 0x28);
                pbStack_f0 = *(byte **)(pbVar5 + 0x20);
                pbStack_d8 = *(byte **)(pbVar5 + 0x38);
                lStack_e0 = *(long *)(pbVar5 + 0x30);
                if (bVar4 < 0xd) {
                  if (bVar4 == 1) {
                    uStack_90._1_1_ = SUB81(puVar28,1);
                    if (2 < uStack_90._1_1_) {
                      uStack_90._1_1_ = 3;
                    }
LAB_100619f78:
                    uStack_a8._1_7_ = CONCAT61(uStack_a8._2_6_,uStack_90._1_1_);
                    uStack_a8 = (undefined *)((ulong)uStack_a8._1_7_ << 8);
                    uStack_90 = puVar7;
                    goto LAB_100619f7c;
                  }
                  if (bVar4 == 4) {
                    if ((long *)0x2 < plStack_88) {
                      plVar1 = (long *)0x3;
                    }
                    uStack_90._1_1_ = (byte)plVar1;
                    goto LAB_100619f78;
                  }
                  if (bVar4 == 0xc) {
                    if (lStack_78 == 4) {
                      if ((int)*plStack_80 != 0x656c6f72) goto LAB_100619f04;
                      uStack_a8 = (undefined *)CONCAT62(uStack_a8._2_6_,0x200);
                    }
                    else if (lStack_78 == 0xb) {
                      if (*plStack_80 != 0x617069636e697270 ||
                          *(long *)((long)plStack_80 + 3) != 0x64496c617069636e) goto LAB_100619f04;
                      uStack_a8 = (undefined *)CONCAT62(uStack_a8._2_6_,0x100);
                    }
                    else if ((lStack_78 == 0xd) &&
                            (*plStack_80 == 0x617069636e697270 &&
                             *(long *)((long)plStack_80 + 5) == 0x657079546c617069)) {
                      uStack_a8 = (undefined *)((ulong)uStack_a8._2_6_ << 0x10);
                    }
                    else {
LAB_100619f04:
                      uStack_a8 = (undefined *)CONCAT62(uStack_a8._2_6_,0x300);
                    }
joined_r0x000100619ee8:
                    if (plVar1 != (long *)0x0) {
                      _free(plVar8);
                    }
                  }
                  else {
LAB_10061a118:
                    pbStack_a0 = (byte *)thunk_FUN_108855b04(&uStack_90,auStack_69,&UNK_10b20f040);
                    uStack_a8 = (undefined *)CONCAT71(uStack_a8._1_7_,1);
                  }
                }
                else {
                  if (bVar4 == 0xd) {
                    if (plStack_80 == (long *)0x4) {
                      if ((int)*plStack_88 != 0x656c6f72) goto LAB_100619f70;
                      uStack_90._1_1_ = 2;
                    }
                    else if (plStack_80 == (long *)0xb) {
                      if (*plStack_88 != 0x617069636e697270 ||
                          *(long *)((long)plStack_88 + 3) != 0x64496c617069636e) goto LAB_100619f70;
                      uStack_90._1_1_ = 1;
                    }
                    else if ((plStack_80 == (long *)0xd) &&
                            (*plStack_88 == 0x617069636e697270 &&
                             *(long *)((long)plStack_88 + 5) == 0x657079546c617069)) {
                      uStack_90._1_1_ = 0;
                    }
                    else {
LAB_100619f70:
                      uStack_90._1_1_ = 3;
                    }
                    goto LAB_100619f78;
                  }
                  if (bVar4 == 0xe) {
                    FUN_100bad9b8(&uStack_a8,plStack_80);
                    goto joined_r0x000100619ee8;
                  }
                  if (bVar4 != 0xf) goto LAB_10061a118;
                  FUN_100bad9b8(&uStack_a8,plStack_88,plStack_80);
LAB_100619f7c:
                  FUN_100e077ec(&uStack_90);
                }
                if (((ulong)uStack_a8 & 1) != 0) {
LAB_10061a230:
                  puStack_b0 = (undefined8 *)((long)puVar27 + 1);
                  puVar25 = (undefined *)((ulong)puVar25 & 0x7fffffffffffffff);
                  pbStack_c8 = pbVar16;
                  pbVar10 = pbStack_a0;
                  goto joined_r0x00010061a248;
                }
                cVar6 = (char)pbStack_f0;
                if (uStack_a8._1_1_ < 2) {
                  if (uStack_a8._1_1_ == 0) {
                    if (cVar23 != '\x03') {
                      puStack_b0 = (undefined8 *)((long)puVar27 + 1);
                      uStack_a8 = &UNK_108cc0453;
                      pbStack_a0 = (byte *)0xd;
                      uStack_90 = &uStack_a8;
                      plStack_88 = (long *)&DAT_100c7b3a0;
                      pbStack_c8 = pbVar16;
                      pbVar10 = (byte *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,
                                                            &uStack_90);
                      goto LAB_10061a2a4;
                    }
                    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                    if (cVar6 == '\x16') goto LAB_10061a718;
                    uVar30 = *puVar14;
                    puVar19[1] = puVar14[1];
                    *puVar19 = uVar30;
                    uVar30 = *(undefined8 *)((long)puVar14 + 0xf);
                    *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
                    *(undefined8 *)((long)puVar19 + 0xf) = uVar30;
                    uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,cVar6);
                    FUN_10127f8c8(&uStack_a8,&uStack_90);
                    if ((char)uStack_a8 == '\x01') goto LAB_10061a230;
                    cVar23 = uStack_a8._1_1_;
                  }
                  else {
                    if (puVar25 != (undefined *)0x8000000000000000) {
                      puStack_b0 = (undefined8 *)((long)puVar27 + 1);
                      uStack_a8 = &UNK_108cc0460;
                      pbStack_a0 = (byte *)0xb;
                      uStack_90 = &uStack_a8;
                      plStack_88 = (long *)&DAT_100c7b3a0;
                      pbStack_c8 = pbVar16;
                      pbVar10 = (byte *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,
                                                            &uStack_90);
                      goto LAB_10061a2a4;
                    }
                    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                    if (cVar6 == '\x16') {
                      puStack_b0 = (undefined8 *)((long)puVar27 + 1);
                      pbStack_c8 = pbVar16;
                      FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                      goto LAB_10061a830;
                    }
                    uVar30 = *puVar14;
                    puVar19[1] = puVar14[1];
                    *puVar19 = uVar30;
                    uVar30 = *(undefined8 *)((long)puVar14 + 0xf);
                    *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
                    *(undefined8 *)((long)puVar19 + 0xf) = uVar30;
                    uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,cVar6);
                    FUN_1004b62d4(&uStack_a8,&uStack_90);
                    pbStack_158 = pbStack_a0;
                    if (uStack_a8 == (undefined *)0x8000000000000000) {
                      puStack_b0 = (undefined8 *)((long)puVar27 + 1);
                      pbVar10 = pbStack_158;
                      pbStack_c8 = pbVar16;
                      goto LAB_10061a2bc;
                    }
                    puStack_188 = puStack_98;
                    puVar25 = uStack_a8;
                  }
                }
                else if (uStack_a8._1_1_ == 2) {
                  if (cVar26 != '\x02') {
                    puStack_b0 = (undefined8 *)((long)puVar27 + 1);
                    uStack_a8 = &UNK_108cde374;
                    pbStack_a0 = (byte *)0x4;
                    uStack_90 = &uStack_a8;
                    plStack_88 = (long *)&DAT_100c7b3a0;
                    pbStack_c8 = pbVar16;
                    pbVar10 = (byte *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90
                                                         );
                    goto LAB_10061a2a4;
                  }
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  if (cVar6 == '\x16') goto LAB_10061a718;
                  uVar30 = *puVar14;
                  puVar19[1] = puVar14[1];
                  *puVar19 = uVar30;
                  uVar30 = *(undefined8 *)((long)puVar14 + 0xf);
                  *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
                  *(undefined8 *)((long)puVar19 + 0xf) = uVar30;
                  uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,cVar6);
                  FUN_1012faaac(&uStack_a8,&uStack_90);
                  if ((char)uStack_a8 == '\x01') goto LAB_10061a230;
                  cVar26 = uStack_a8._1_1_;
                }
                else {
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  if (cVar6 == '\x16') {
LAB_10061a718:
                    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                    puStack_b0 = (undefined8 *)((long)puVar27 + 1);
                    pbStack_c8 = pbVar16;
                    FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_10061a830;
                  }
                  uVar30 = *puVar14;
                  puVar19[1] = puVar14[1];
                  *puVar19 = uVar30;
                  uVar30 = *(undefined8 *)((long)puVar14 + 0xf);
                  *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
                  *(undefined8 *)((long)puVar19 + 0xf) = uVar30;
                  uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,cVar6);
                  FUN_100e077ec(&uStack_90);
                }
                puVar27 = (undefined8 *)((long)puVar27 + 1);
                pbVar17 = pbVar10;
                unaff_x26 = (undefined8 *)((lVar15 - 0x40U >> 6) + 1);
                pbVar5 = pbVar16;
              } while (pbVar16 != pbVar10);
              pbStack_c8 = pbVar17;
              puStack_b0 = unaff_x26;
              if (cVar23 == '\x03') goto LAB_10061a270;
              puVar27 = unaff_x26;
              if (puVar25 != (undefined *)0x8000000000000000) {
                if (cVar26 != '\x02') {
                  FUN_100d34830(&pbStack_d0);
                  puVar27 = puStack_188;
                  if (pbVar10 != pbVar17) {
                    uStack_90 = unaff_x26;
                    pbVar10 = (byte *)thunk_FUN_1087e422c(((ulong)((long)pbVar10 - (long)pbVar17) >>
                                                          6) + (long)unaff_x26,&uStack_90,
                                                          &UNK_10b23a190);
                    if (puVar25 != (undefined *)0x0) {
                      _free(pbStack_158);
                    }
                    puVar25 = (undefined *)0x8000000000000000;
                    pbStack_158 = pbVar10;
                  }
                  goto LAB_10061a2e8;
                }
                uStack_a8 = &UNK_108cde374;
                pbStack_a0 = (byte *)0x4;
                uStack_90 = &uStack_a8;
                plStack_88 = (long *)&DAT_100c7b3a0;
                pbVar10 = (byte *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
joined_r0x00010061a248:
                if (puVar25 == (undefined *)0x0) goto LAB_10061a2bc;
                goto LAB_10061a2b0;
              }
              uStack_a8 = &UNK_108cc0460;
              pbStack_a0 = (byte *)0xb;
              uStack_90 = &uStack_a8;
              plStack_88 = (long *)&DAT_100c7b3a0;
              pbVar10 = (byte *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
            }
LAB_10061a2bc:
            pbStack_158 = pbVar10;
            FUN_100d34830(&pbStack_d0);
            if ((char)pbStack_f0 != '\x16') {
              FUN_100e077ec(&pbStack_f0);
            }
            cVar26 = '\0';
            cVar23 = '\0';
            puVar25 = (undefined *)0x8000000000000000;
            goto LAB_10061a2e8;
          }
          uVar18 = thunk_FUN_108855b04(abStack_110,auStack_69,&UNK_10b20b160);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar18;
          uVar12 = uStack_120;
          uVar18 = uStack_118;
joined_r0x00010061a790:
          uStack_120 = uVar12;
          uStack_118 = uVar18;
          if (uVar18 != 0) {
            puVar13 = (undefined8 *)(uVar12 + 8);
            do {
              if (puVar13[-1] != 0) {
                _free(*puVar13);
              }
              puVar13 = puVar13 + 4;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (uStack_128 != 0) {
            _free(uVar12);
          }
          goto LAB_10061a7a4;
        }
        pbVar17 = pbStack_100 + (long)puStack_f8 * 0x20;
        pbStack_f0 = pbStack_100;
        lStack_e0 = lStack_108;
        pbStack_d0 = (byte *)0x0;
        pbVar10 = pbStack_100;
        pbStack_d8 = pbVar17;
        if (puStack_f8 == (undefined8 *)0x0) {
LAB_10061a174:
          pbStack_e8 = pbVar10;
          pbStack_158 = (byte *)thunk_FUN_1087e422c(0,&UNK_10b2319a8,&UNK_10b20a590);
LAB_10061a190:
          puVar27 = puVar28;
          lVar24 = ((ulong)((long)pbVar17 - (long)pbVar10) >> 5) + 1;
          while (lVar24 = lVar24 + -1, lVar24 != 0) {
            FUN_100e077ec(pbVar10);
            pbVar10 = pbVar10 + 0x20;
          }
          cVar26 = '\0';
          if (lVar15 == 0) {
            puVar25 = (undefined *)0x8000000000000000;
            cVar23 = '\0';
            goto LAB_10061a2e8;
          }
          cVar23 = '\0';
          pbVar16 = pbVar5;
          cVar26 = '\0';
        }
        else {
          pbVar10 = pbStack_100 + 0x20;
          bVar4 = *pbStack_100;
          if (bVar4 == 0x16) goto LAB_10061a174;
          uVar30 = *(undefined8 *)(pbStack_100 + 1);
          puVar19[1] = *(undefined8 *)(pbStack_100 + 9);
          *puVar19 = uVar30;
          uVar30 = *(undefined8 *)(pbStack_100 + 0x10);
          *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)(pbStack_100 + 0x18);
          *(undefined8 *)((long)puVar19 + 0xf) = uVar30;
          pbStack_d0 = (byte *)0x1;
          uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,bVar4);
          pbStack_e8 = pbVar10;
          FUN_10127f8c8(&uStack_a8,&uStack_90);
          if ((char)uStack_a8 == '\x01') {
            pbStack_158 = pbStack_a0;
            goto LAB_10061a190;
          }
          if (puVar28 == (undefined8 *)0x1) {
LAB_10061a398:
            pbStack_158 = (byte *)thunk_FUN_1087e422c(1,&UNK_10b2319a8,&UNK_10b20a590);
            goto LAB_10061a190;
          }
          cVar23 = uStack_a8._1_1_;
          pbVar10 = pbVar5 + 0x40;
          bVar4 = pbVar5[0x20];
          pbStack_e8 = pbVar10;
          if (bVar4 == 0x16) goto LAB_10061a398;
          uVar30 = *(undefined8 *)(pbVar5 + 0x21);
          puVar19[1] = *(undefined8 *)(pbVar5 + 0x29);
          *puVar19 = uVar30;
          uVar30 = *(undefined8 *)(pbVar5 + 0x30);
          *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)(pbVar5 + 0x38);
          *(undefined8 *)((long)puVar19 + 0xf) = uVar30;
          pbStack_d0 = (byte *)0x2;
          uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,bVar4);
          FUN_1004b62d4(&uStack_a8,&uStack_90);
          puVar27 = puStack_98;
          pbVar16 = pbStack_a0;
          puVar25 = uStack_a8;
          pbStack_158 = pbStack_a0;
          if (uStack_a8 == (undefined *)0x8000000000000000) goto LAB_10061a190;
          if (puVar28 == (undefined8 *)0x2) {
LAB_10061a494:
            pbVar11 = (byte *)thunk_FUN_1087e422c(2,&UNK_10b2319a8,&UNK_10b20a590);
            puVar27 = puVar28;
joined_r0x00010061a4b0:
            pbStack_158 = pbVar11;
            puVar28 = puVar27;
            if (puVar25 != (undefined *)0x0) {
              _free(pbVar16);
            }
            goto LAB_10061a190;
          }
          pbVar10 = pbVar5 + 0x60;
          bVar4 = pbVar5[0x40];
          puVar28 = puStack_98;
          pbStack_e8 = pbVar10;
          if (bVar4 == 0x16) goto LAB_10061a494;
          uVar30 = *(undefined8 *)(pbVar5 + 0x41);
          puVar19[1] = *(undefined8 *)(pbVar5 + 0x49);
          *puVar19 = uVar30;
          uVar30 = *(undefined8 *)(pbVar5 + 0x50);
          *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)(pbVar5 + 0x58);
          *(undefined8 *)((long)puVar19 + 0xf) = uVar30;
          pbStack_d0 = (byte *)0x3;
          uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,bVar4);
          FUN_1012faaac(&uStack_a8,&uStack_90);
          pbVar11 = pbStack_a0;
          if (((ulong)uStack_a8 & 1) != 0) goto joined_r0x00010061a4b0;
          cVar26 = uStack_a8._1_1_;
          pbVar10 = (byte *)FUN_100fbc738(&pbStack_f0);
          if (pbVar10 == (byte *)0x0) goto LAB_10061a2e8;
          pbStack_158 = pbVar10;
          if (puVar25 == (undefined *)0x0) {
            puVar25 = (undefined *)0x8000000000000000;
            goto LAB_10061a2e8;
          }
        }
        _free(pbVar16);
        puVar25 = (undefined *)0x8000000000000000;
LAB_10061a2e8:
        if ((bVar3 & 0x1e) != 0x14) {
          FUN_100e077ec(abStack_110);
        }
        uVar18 = uStack_118;
        if ((long)puVar25 < -0x7ffffffffffffffe) {
          *param_1 = 0x8000000000000000;
          param_1[1] = (ulong)pbStack_158;
          uVar12 = uStack_120;
          goto joined_r0x00010061a790;
        }
        if (uStack_118 == uStack_128) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hce8b73d68f21d1b5E(&uStack_128);
        }
        puVar28 = (undefined8 *)(uStack_120 + uVar18 * 0x20);
        *puVar28 = puVar25;
        puVar28[1] = pbStack_158;
        puVar28[2] = puVar27;
        *(char *)(puVar28 + 3) = cVar26;
        *(char *)((long)puVar28 + 0x19) = cVar23;
        uStack_118 = uVar18 + 1;
        pbVar17 = pbVar22;
        pbVar10 = pbVar21;
        unaff_x26 = puVar27;
      } while (pbVar21 != pbVar22);
    }
    param_1[1] = uStack_120;
    *param_1 = uStack_128;
    param_1[2] = uStack_118;
    uVar18 = *param_1;
    pbVar21 = pbVar17;
    if (uVar18 == 0x8000000000000000) {
LAB_10061a7a4:
      lVar29 = ((ulong)((long)pbVar22 - (long)pbVar21) >> 5) + 1;
      while (lVar29 = lVar29 + -1, uVar18 = uVar20, lVar29 != 0) {
        FUN_100e077ec(pbVar21);
        pbVar21 = pbVar21 + 0x20;
      }
    }
    else {
      pbVar2 = (byte *)param_1[1];
      uVar20 = param_1[2];
      uVar12 = FUN_100fbc738(&pbStack_150);
      if (uVar12 == 0) {
        return;
      }
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar12;
      if (uVar20 != 0) {
        pbVar22 = pbVar2 + 8;
        do {
          if (*(long *)(pbVar22 + -8) != 0) {
            _free(*(undefined8 *)pbVar22);
          }
          pbVar22 = pbVar22 + 0x20;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
    }
    if (uVar18 != 0) {
      _free(pbVar2);
    }
  }
  else {
    uVar18 = thunk_FUN_108855b04(param_2,auStack_69,&UNK_10b20a000);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar18;
  }
  return;
}

