
/* WARNING: Removing unreachable block (ram,0x00010145594c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1014553b8(ulong *param_1,char *param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined1 uVar3;
  ulong uVar4;
  char *pcVar5;
  char cVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  code *pcVar13;
  char *pcVar14;
  char *pcVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  byte bVar20;
  bool bVar21;
  long lVar22;
  char *pcVar23;
  char *pcVar24;
  char cVar25;
  undefined8 *puVar26;
  ulong uVar27;
  byte bVar28;
  undefined8 uVar29;
  char *pcStack_1d0;
  char *pcStack_1c8;
  ulong uStack_1c0;
  char *pcStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  char *pcStack_1a0;
  ulong uStack_198;
  char cStack_190;
  undefined7 uStack_18f;
  char *pcStack_188;
  char *pcStack_180;
  long lStack_178;
  char *pcStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined8 uStack_150;
  char *pcStack_148;
  char *pcStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined7 uStack_128;
  undefined1 uStack_121;
  undefined7 uStack_120;
  long lStack_119;
  undefined8 uStack_110;
  char *pcStack_108;
  char *pcStack_100;
  long lStack_f8;
  byte bStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  long lStack_d8;
  undefined8 uStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  long lStack_98;
  char cStack_88;
  byte bStack_87;
  char *pcStack_80;
  undefined1 auStack_71 [17];
  
  if (*param_2 != '\x14') {
    pcVar15 = (char *)FUN_108855b04(param_2,auStack_71,&UNK_10b20a360);
    goto LAB_101455af0;
  }
  uVar4 = *(ulong *)(param_2 + 8);
  pcVar5 = *(char **)(param_2 + 0x10);
  uVar16 = *(ulong *)(param_2 + 0x18);
  pcVar1 = pcVar5 + uVar16 * 0x20;
  lStack_1b0 = 0;
  uVar18 = uVar16;
  if (0xfffff < uVar16) {
    uVar18 = 0x100000;
  }
  pcStack_1d0 = pcVar5;
  uStack_1c0 = uVar4;
  pcStack_1b8 = pcVar1;
  if (uVar16 == 0) {
    uVar18 = 0;
    pcVar14 = (char *)0x1;
    pcVar15 = pcVar5;
LAB_10145544c:
    pcStack_1c8 = pcVar15;
    lStack_1b0 = 0;
    uVar16 = 0;
LAB_101455454:
    pcVar15 = (char *)FUN_100fbc738(&pcStack_1d0);
    pcVar5 = pcVar14;
    uVar4 = uVar18;
    if (pcVar15 == (char *)0x0) {
      *param_1 = uVar18;
      param_1[1] = (ulong)pcVar14;
      param_1[2] = uVar16;
      return;
    }
  }
  else {
    pcStack_1c8 = pcVar5;
    pcVar14 = (char *)_malloc(uVar18);
    if (pcVar14 == (char *)0x0) {
      func_0x0001087c9084(1,uVar18);
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x101455b8c);
      (*pcVar13)();
    }
    uStack_198 = 0;
    cVar25 = *pcVar5;
    pcVar15 = pcVar5 + 0x20;
    uStack_1a8 = uVar18;
    pcStack_1a0 = pcVar14;
    if (cVar25 == '\x16') goto LAB_10145544c;
    puVar26 = (undefined8 *)((ulong)&cStack_190 | 1);
    puVar17 = (undefined8 *)((ulong)&uStack_d0 | 1);
    uVar27 = uVar16 * 0x20 - 0x20;
    uVar18 = uVar27 >> 5;
    pcVar24 = pcVar5 + 0x20;
    lVar22 = 1;
    pcVar15 = pcVar1;
    do {
      uVar29 = *(undefined8 *)(pcVar24 + -0x1f);
      puVar26[1] = *(undefined8 *)(pcVar24 + -0x17);
      *puVar26 = uVar29;
      uVar29 = *(undefined8 *)(pcVar24 + -0x10);
      *(undefined8 *)((long)puVar26 + 0x17) = *(undefined8 *)(pcVar24 + -8);
      *(undefined8 *)((long)puVar26 + 0xf) = uVar29;
      cStack_190 = cVar25;
      if ((cVar25 != '\f') && (cVar25 != '\r')) {
        if (cVar25 == '\x15') {
          pcStack_158 = pcStack_180 + lStack_178 * 0x40;
          pcStack_170 = pcStack_180;
          pcStack_168 = pcStack_180;
          pcStack_160 = pcStack_188;
          if (lStack_178 == 0) {
LAB_101455a0c:
            uStack_110 = CONCAT71(uStack_110._1_7_,0xb);
            pcStack_1c8 = pcVar24;
            lStack_1b0 = lVar22;
            pcVar15 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                        (&uStack_110,&UNK_10b20a580,&UNK_10b20a590);
          }
          else {
            pcVar14 = pcStack_180 + 0x40;
            cVar6 = *pcStack_180;
            pcStack_168 = pcVar14;
            if (cVar6 == '\x16') goto LAB_101455a0c;
            uVar29 = *(undefined8 *)(pcStack_180 + 1);
            puVar17[1] = *(undefined8 *)(pcStack_180 + 9);
            *puVar17 = uVar29;
            uVar29 = *(undefined8 *)(pcStack_180 + 0x10);
            pcStack_a8 = *(char **)(pcStack_180 + 0x28);
            uStack_b0 = *(undefined8 *)(pcStack_180 + 0x20);
            *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)(pcStack_180 + 0x18);
            *(undefined8 *)((long)puVar17 + 0xf) = uVar29;
            lStack_98 = *(long *)(pcStack_180 + 0x38);
            pcStack_a0 = *(char **)(pcStack_180 + 0x30);
            uStack_d0 = CONCAT71(uStack_d0._1_7_,cVar6);
            if (lStack_178 == 1) {
LAB_101455548:
              pcStack_148 = pcStack_c8;
              uStack_150 = uStack_d0;
              lStack_138 = lStack_b8;
              pcStack_140 = pcStack_c0;
              bVar20 = (byte)uStack_b0;
              uStack_130 = *(undefined8 *)(pcStack_180 + 0x21);
              uStack_128 = (undefined7)*(undefined8 *)(pcStack_180 + 0x29);
              lStack_119 = *(long *)(pcStack_180 + 0x38);
              uStack_121 = (undefined1)*(undefined8 *)(pcStack_180 + 0x30);
              uStack_120 = (undefined7)((ulong)*(undefined8 *)(pcStack_180 + 0x30) >> 8);
              bVar28 = 1;
              FUN_100d34830(&pcStack_170);
              goto LAB_101455588;
            }
            pcStack_168 = pcStack_180 + 0x80;
            pcStack_108 = *(char **)(pcStack_180 + 0x48);
            uStack_110 = *(undefined8 *)pcVar14;
            lStack_f8 = *(long *)(pcStack_180 + 0x58);
            pcStack_100 = *(char **)(pcStack_180 + 0x50);
            lStack_d8 = *(long *)(pcStack_180 + 0x78);
            uStack_e8 = (undefined1)*(undefined8 *)(pcStack_180 + 0x68);
            uStack_e7 = (undefined7)((ulong)*(undefined8 *)(pcStack_180 + 0x68) >> 8);
            bStack_f0 = (byte)*(undefined8 *)(pcStack_180 + 0x60);
            uStack_ef = (undefined7)((ulong)*(undefined8 *)(pcStack_180 + 0x60) >> 8);
            uStack_e0 = (undefined1)*(undefined8 *)(pcStack_180 + 0x70);
            uStack_df = (undefined7)((ulong)*(undefined8 *)(pcStack_180 + 0x70) >> 8);
            if ((byte)uStack_110 == '\x16') goto LAB_101455548;
            pcStack_1c8 = pcVar24;
            lStack_1b0 = lVar22;
            FUN_100e077ec(&uStack_110);
            FUN_100e077ec(&bStack_f0);
            uStack_110 = CONCAT71(uStack_110._1_7_,0xb);
            pcVar15 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                        (&uStack_110,&UNK_10b20a580,&UNK_10b20a590);
            FUN_100e077ec(&uStack_b0);
            FUN_100e077ec(&uStack_d0);
          }
          FUN_100d34830(&pcStack_170);
          pcVar14 = pcStack_1c8;
          lVar22 = lStack_1b0;
        }
        else {
          pcStack_1c8 = pcVar24;
          lStack_1b0 = lVar22;
          FUN_1088556a8(&uStack_110,&cStack_190);
          pcVar15 = (char *)func_0x000108a4a50c(&uStack_110,&UNK_10b20a5b0,&UNK_10b20a590);
          FUN_100e077ec(&cStack_190);
          pcVar14 = pcStack_1c8;
          lVar22 = lStack_1b0;
        }
LAB_101455aa8:
        lStack_1b0 = lVar22;
        pcStack_1c8 = pcVar14;
        if (uStack_1a8 != 0) {
          _free(pcStack_1a0);
        }
        goto LAB_101455ab8;
      }
      bVar28 = 0;
      uStack_150 = CONCAT71(uStack_18f,cVar25);
      pcStack_148 = pcStack_188;
      lStack_138 = lStack_178;
      pcStack_140 = pcStack_180;
      bVar20 = 0x16;
LAB_101455588:
      pcVar23 = pcStack_140;
      pcVar14 = pcStack_148;
      pcStack_108 = pcStack_148;
      uStack_110 = uStack_150;
      uVar29 = uStack_110;
      lStack_f8 = lStack_138;
      pcStack_100 = pcStack_140;
      uStack_e7 = uStack_128;
      uStack_ef = (undefined7)uStack_130;
      uStack_e8 = (undefined1)((ulong)uStack_130 >> 0x38);
      lStack_d8 = lStack_119;
      uStack_e0 = uStack_121;
      uStack_df = uStack_120;
      pcStack_a8 = (char *)CONCAT71(uStack_128,uStack_e8);
      uStack_b0 = CONCAT71(uStack_ef,bVar20);
      pcStack_a0 = (char *)CONCAT71(uStack_120,uStack_121);
      lStack_98 = lStack_119;
      uStack_110._0_1_ = (byte)uStack_150;
      uStack_110 = uVar29;
      bStack_f0 = bVar20;
      if ((byte)uStack_110 < 0xd) {
        if ((byte)uStack_110 == 1) {
          uStack_110._1_1_ = (byte)((ulong)uStack_150 >> 8);
          if (uStack_110._1_1_ < 2) {
            if (uStack_110._1_1_ == 0) {
LAB_1014557b0:
              cStack_88 = '\0';
              bStack_87 = 0;
            }
            else {
              if (uStack_110._1_1_ != 1) {
LAB_101455980:
                pcStack_170 = (char *)CONCAT71(pcStack_170._1_7_,1);
                pcStack_168 = (char *)(ulong)uStack_110._1_1_;
                pcStack_80 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                               (&pcStack_170,&UNK_10b22b5e8,&UNK_10b20a590);
                goto LAB_1014559a4;
              }
LAB_1014556f8:
              cStack_88 = '\0';
              bStack_87 = 1;
            }
          }
          else {
            if (uStack_110._1_1_ == 2) {
LAB_1014557b8:
              bStack_87 = 2;
            }
            else {
              if (uStack_110._1_1_ != 3) goto LAB_101455980;
LAB_1014557a4:
              bStack_87 = 3;
            }
            cStack_88 = '\0';
          }
LAB_1014557c8:
          FUN_100e077ec(&uStack_110);
          uVar29 = uStack_d0;
          pcVar7 = pcStack_c8;
          pcVar8 = pcStack_c0;
          lVar19 = lStack_b8;
          uVar9 = uStack_b0;
          pcVar10 = pcStack_a8;
          pcVar11 = pcStack_a0;
          lVar12 = lStack_98;
          goto joined_r0x0001014557d8;
        }
        if ((byte)uStack_110 == 4) {
          if ((long)pcStack_148 < 2) {
            if (pcStack_148 == (char *)0x0) goto LAB_1014557b0;
            if (pcStack_148 == (char *)0x1) goto LAB_1014556f8;
          }
          else {
            if (pcStack_148 == (char *)0x2) goto LAB_1014557b8;
            if (pcStack_148 == (char *)0x3) goto LAB_1014557a4;
          }
          pcStack_168 = pcStack_148;
          pcStack_170 = (char *)CONCAT71(pcStack_170._1_7_,1);
          pcStack_80 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                         (&pcStack_170,&UNK_10b22b5e8,&UNK_10b20a590);
LAB_1014559a4:
          cStack_88 = '\x01';
          goto LAB_1014557c8;
        }
        if ((byte)uStack_110 == 0xc) {
          FUN_100bb5fec(&cStack_88,pcStack_140,lStack_138);
          goto LAB_101455644;
        }
LAB_101455920:
        pcStack_80 = (char *)FUN_108855b04(&uStack_110,auStack_71,&UNK_10b20e680);
        cStack_88 = '\x01';
        uVar29 = uStack_d0;
        pcVar7 = pcStack_c8;
        pcVar8 = pcStack_c0;
        lVar19 = lStack_b8;
LAB_1014557dc:
        lStack_b8 = lVar19;
        pcStack_c0 = pcVar8;
        pcStack_c8 = pcVar7;
        uStack_d0 = uVar29;
        pcVar15 = pcStack_80;
        if ((byte)uStack_b0 != '\x16') {
          FUN_100e077ec(&uStack_b0);
        }
        bVar21 = true;
        uVar3 = bVar28 ^ 1;
        if (cVar25 == '\x15') {
          uVar3 = true;
        }
      }
      else {
        if ((byte)uStack_110 == 0xd) {
          FUN_100bb5fec(&cStack_88,pcStack_148,pcStack_140);
          goto LAB_1014557c8;
        }
        if ((byte)uStack_110 != 0xe) {
          if ((byte)uStack_110 != 0xf) goto LAB_101455920;
          FUN_100bb5ce8(&cStack_88,pcStack_148,pcStack_140);
          goto LAB_1014557c8;
        }
        FUN_100bb5ce8(&cStack_88,pcStack_140,lStack_138);
LAB_101455644:
        pcVar15 = pcVar23;
        uVar29 = uStack_d0;
        pcVar7 = pcStack_c8;
        pcVar8 = pcStack_c0;
        lVar19 = lStack_b8;
        uVar9 = uStack_b0;
        pcVar10 = pcStack_a8;
        pcVar11 = pcStack_a0;
        lVar12 = lStack_98;
        if (pcVar14 != (char *)0x0) {
          _free(pcVar23);
          uVar29 = uStack_d0;
          pcVar7 = pcStack_c8;
          pcVar8 = pcStack_c0;
          lVar19 = lStack_b8;
          uVar9 = uStack_b0;
          pcVar10 = pcStack_a8;
          pcVar11 = pcStack_a0;
          lVar12 = lStack_98;
        }
joined_r0x0001014557d8:
        lStack_b8 = lVar12;
        pcStack_c0 = pcVar11;
        pcStack_c8 = pcVar10;
        uStack_d0 = uVar9;
        uStack_b0 = uStack_d0;
        pcStack_a8 = pcStack_c8;
        pcStack_a0 = pcStack_c0;
        lStack_98 = lStack_b8;
        if (cStack_88 == '\x01') goto LAB_1014557dc;
        uVar2 = (uint)uStack_d0 & 0xff;
        bVar20 = bStack_87;
        if (bStack_87 < 2) {
          if (bStack_87 == 0) {
            if (uVar2 != 0x16) {
              if ((uVar2 == 0x12) || ((uVar2 == 0x15 && (lStack_b8 == 0)))) goto LAB_1014558b4;
              pcVar15 = (char *)FUN_108855b04(&uStack_d0,auStack_71,&UNK_10b20a5c0);
              goto LAB_101455964;
            }
            bVar21 = false;
            uVar3 = bVar28 ^ 1;
            bVar20 = 0;
            if (cVar25 == '\x15') {
              uVar3 = true;
            }
          }
          else {
            if (uVar2 != 0x16) {
              if ((uVar2 == 0x12) || ((uVar2 == 0x15 && (lStack_b8 == 0)))) goto LAB_1014558b4;
              pcVar15 = (char *)FUN_108855b04(&uStack_d0,auStack_71,&UNK_10b20a5c0);
              goto LAB_101455964;
            }
            bVar21 = false;
            uVar3 = bVar28 ^ 1;
            bVar20 = 1;
            if (cVar25 == '\x15') {
              uVar3 = true;
            }
          }
        }
        else {
          if (bStack_87 == 2) {
            if (uVar2 == 0x16) {
              bVar21 = false;
              uVar3 = bVar28 ^ 1;
              bVar20 = 2;
              if (cVar25 == '\x15') {
                uVar3 = true;
              }
              goto joined_r0x0001014556d8;
            }
            if ((uVar2 == 0x12) || ((uVar2 == 0x15 && (lStack_b8 == 0)))) {
LAB_1014558b4:
              FUN_100e077ec(&uStack_d0);
              uVar3 = bVar28 ^ 1;
              if (cVar25 == '\x15') {
                uVar3 = true;
              }
              goto joined_r0x0001014558cc;
            }
            pcVar15 = (char *)FUN_108855b04(&uStack_d0,auStack_71,&UNK_10b20a5c0);
          }
          else {
            if (uVar2 == 0x16) {
              uVar3 = bVar28 ^ 1;
              bVar20 = 3;
              if (cVar25 == '\x15') {
                uVar3 = true;
              }
joined_r0x0001014558cc:
              bVar21 = false;
              goto joined_r0x0001014556d8;
            }
            if ((uVar2 == 0x12) || ((uVar2 == 0x15 && (lStack_b8 == 0)))) goto LAB_1014558b4;
            pcVar15 = (char *)FUN_108855b04(&uStack_d0,auStack_71,&UNK_10b20a5c0);
          }
LAB_101455964:
          bVar21 = true;
          uVar3 = bVar28 ^ 1;
          if (cVar25 == '\x15') {
            uVar3 = true;
          }
        }
      }
joined_r0x0001014556d8:
      if (!(bool)uVar3) {
        FUN_100e077ec(&cStack_190);
      }
      uVar16 = uStack_198;
      pcVar14 = pcVar24;
      if (bVar21) goto LAB_101455aa8;
      if (uStack_198 == uStack_1a8) {
        func_0x0001088bacdc(&uStack_1a8);
      }
      pcStack_1a0[uVar16] = bVar20;
      uVar16 = uVar16 + 1;
      lVar19 = uVar18 + 1;
      pcVar23 = pcVar1;
      uStack_198 = uVar16;
      if (uVar27 == 0) break;
      pcVar23 = pcVar24 + 0x20;
      cVar25 = *pcVar24;
      uVar27 = uVar27 - 0x20;
      lVar19 = lVar22;
      pcVar24 = pcVar23;
      lVar22 = lVar22 + 1;
    } while (cVar25 != '\x16');
    pcVar14 = pcStack_1a0;
    pcVar24 = pcVar23;
    uVar18 = uStack_1a8;
    pcVar15 = pcStack_1a0;
    pcStack_1c8 = pcVar23;
    lStack_1b0 = lVar19;
    if (uStack_1a8 != 0x8000000000000000) goto LAB_101455454;
LAB_101455ab8:
    lVar22 = ((ulong)((long)pcVar1 - (long)pcVar24) >> 5) + 1;
    while (lVar22 = lVar22 + -1, lVar22 != 0) {
      FUN_100e077ec(pcVar24);
      pcVar24 = pcVar24 + 0x20;
    }
  }
  if (uVar4 != 0) {
    _free(pcVar5);
  }
LAB_101455af0:
  *param_1 = 0x8000000000000001;
  param_1[1] = (ulong)pcVar15;
  return;
}

