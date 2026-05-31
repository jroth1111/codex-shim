
/* WARNING: Removing unreachable block (ram,0x00010143c85c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10143c598(undefined8 param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  byte *pbVar3;
  char *pcVar4;
  long *plVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  bool bVar10;
  code *pcVar11;
  undefined8 uVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  undefined1 uVar16;
  byte bVar17;
  ulong *puVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *unaff_x19;
  long lVar21;
  undefined8 *puVar22;
  byte *unaff_x21;
  byte *pbVar23;
  long unaff_x22;
  ulong unaff_x23;
  char *pcVar24;
  ulong unaff_x25;
  byte unaff_w27;
  byte *pbVar25;
  byte *pbVar26;
  long unaff_x29;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  ulong in_stack_00000028;
  ulong in_stack_00000030;
  char *in_stack_00000040;
  undefined8 *in_stack_00000048;
  byte *in_stack_00000050;
  undefined8 *in_stack_00000070;
  char *in_stack_00000078;
  byte *in_stack_00000088;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  ulong in_stack_000000c0;
  char *in_stack_000000c8;
  ulong in_stack_000000d0;
  ulong in_stack_000000d8;
  char *in_stack_000000e0;
  ulong in_stack_000000e8;
  ulong in_stack_000000f0;
  ulong in_stack_000000f8;
  char *in_stack_00000100;
  ulong in_stack_00000108;
  ulong in_stack_00000110;
  char *in_stack_00000118;
  ulong in_stack_00000120;
  char cStack0000000000000128;
  char cStack0000000000000129;
  undefined6 uStack000000000000012a;
  
code_r0x00010143c598:
  pcVar13 = (char *)FUN_108856088(s_missing_field_____108ac28f7,param_2);
LAB_10143c5b0:
  in_stack_000000f8 = 0x8000000000000000;
  bVar10 = true;
  in_stack_00000100 = pcVar13;
LAB_10143c5b4:
  if (unaff_x25 == 0x8000000000000000) goto LAB_10143c5d0;
joined_r0x00010143c5c4:
  if (unaff_x25 != 0) {
    _free(in_stack_00000078);
  }
LAB_10143c5d0:
  in_stack_00000078 = pcVar13;
  if (!bVar10) goto LAB_10143c5e4;
LAB_10143c5d4:
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
LAB_10143c5e4:
  FUN_100d34830(unaff_x29 + -0xc0);
  if (*(char *)(unaff_x29 + -0xe0) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0xe0);
  }
  unaff_x23 = 0x8000000000000000;
  pcVar13 = in_stack_00000078;
  bVar6 = unaff_w27;
joined_r0x00010143c610:
  in_stack_00000078 = pcVar13;
  pbVar23 = unaff_x21;
  if ((bVar6 & 0x1e) != 0x14) {
    FUN_100e077ec(unaff_x29 + -0x100);
  }
LAB_10143c61c:
  do {
    lVar19 = in_stack_000000b8;
    unaff_x21 = pbVar23;
    if (unaff_x23 == 0x8000000000000000) {
LAB_10143cba0:
      lVar19 = in_stack_000000b0;
      *(char **)(unaff_x29 + -0xd8) = in_stack_00000078;
      if (in_stack_000000b8 != 0) {
        puVar22 = (undefined8 *)(in_stack_000000b0 + 0x20);
        lVar21 = in_stack_000000b8;
        do {
          if (puVar22[-4] != 0) {
            _free(puVar22[-3]);
          }
          if (puVar22[-1] != 0) {
            _free(*puVar22);
          }
          puVar22 = puVar22 + 7;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      if (in_stack_000000a8 != 0) {
        _free(lVar19);
      }
LAB_10143cc1c:
      lVar19 = ((ulong)((long)in_stack_00000050 - (long)unaff_x21) >> 5) + 1;
      while (lVar19 = lVar19 + -1, lVar19 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 0x20;
      }
joined_r0x00010143cce0:
      if (in_stack_00000008 != 0) {
        _free(in_stack_00000018);
      }
      uVar12 = *(undefined8 *)(unaff_x29 + -0xd8);
      *in_stack_00000010 = 0x8000000000000001;
      in_stack_00000010[1] = uVar12;
      return;
    }
    in_stack_000000d8 = in_stack_00000110;
    in_stack_000000d0 = in_stack_00000108;
    in_stack_000000e8 = in_stack_00000120;
    in_stack_000000e0 = in_stack_00000118;
    in_stack_000000f0 =
         CONCAT62(uStack000000000000012a,CONCAT11(cStack0000000000000129,cStack0000000000000128));
    in_stack_000000c8 = in_stack_00000078;
    in_stack_000000c0 = unaff_x23;
    if (in_stack_000000b8 == in_stack_000000a8) {
      func_0x0001089507a4(&stack0x000000a8);
    }
    puVar18 = (ulong *)(in_stack_000000b0 + lVar19 * 0x38);
    puVar18[1] = (ulong)in_stack_000000c8;
    *puVar18 = in_stack_000000c0;
    puVar18[3] = in_stack_000000d8;
    puVar18[2] = in_stack_000000d0;
    puVar18[5] = in_stack_000000e8;
    puVar18[4] = (ulong)in_stack_000000e0;
    puVar18[6] = in_stack_000000f0;
    in_stack_000000b8 = lVar19 + 1;
    unaff_x21 = in_stack_00000050;
    if (pbVar23 == in_stack_00000050) {
LAB_10143cbfc:
      *(long *)(unaff_x29 + -0xd8) = in_stack_000000b0;
      *(long *)(unaff_x29 + -0xe0) = in_stack_000000a8;
      *(long *)(unaff_x29 + -0xd0) = in_stack_000000b8;
      lVar19 = *(long *)(unaff_x29 + -0xe0);
      if (lVar19 == -0x8000000000000000) goto LAB_10143cc1c;
      in_stack_00000018 = *(long *)(unaff_x29 + -0xd8);
      lVar21 = *(long *)(unaff_x29 + -0xd0);
      lVar15 = FUN_100fbc738(&stack0x00000080);
      if (lVar15 == 0) {
        uVar12 = *(undefined8 *)(unaff_x29 + -0xe0);
        in_stack_00000010[1] = *(undefined8 *)(unaff_x29 + -0xd8);
        *in_stack_00000010 = uVar12;
        in_stack_00000010[2] = *(undefined8 *)(unaff_x29 + -0xd0);
        return;
      }
      *(long *)(unaff_x29 + -0xd8) = lVar15;
      in_stack_00000008 = lVar19;
      if (lVar21 != 0) {
        puVar22 = (undefined8 *)(in_stack_00000018 + 0x20);
        do {
          if (puVar22[-4] != 0) {
            _free(puVar22[-3]);
          }
          if (puVar22[-1] != 0) {
            _free(*puVar22);
          }
          puVar22 = puVar22 + 7;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      goto joined_r0x00010143cce0;
    }
    unaff_x21 = pbVar23 + 0x20;
    bVar6 = *pbVar23;
    in_stack_00000088 = unaff_x21;
    if (bVar6 == 0x16) goto LAB_10143cbfc;
    uVar12 = *(undefined8 *)(pbVar23 + 1);
    in_stack_00000048[1] = *(undefined8 *)(pbVar23 + 9);
    *in_stack_00000048 = uVar12;
    uVar12 = *(undefined8 *)(pbVar23 + 0x10);
    *(undefined8 *)((long)in_stack_00000048 + 0x17) = *(undefined8 *)(pbVar23 + 0x18);
    *(undefined8 *)((long)in_stack_00000048 + 0xf) = uVar12;
    unaff_x22 = unaff_x22 + 1;
    *(byte *)(unaff_x29 + -0x100) = bVar6;
    in_stack_000000a0 = unaff_x22;
    if (bVar6 != 0x14) {
      if (bVar6 != 0x15) {
        in_stack_00000078 =
             (char *)FUN_108855b04(unaff_x29 + -0x100,unaff_x29 + -0x59,&UNK_10b20aec0);
        goto LAB_10143cba0;
      }
      pbVar3 = *(byte **)(unaff_x29 + -0xf0);
      lVar19 = *(long *)(unaff_x29 + -0xe8) * 0x40;
      pbVar23 = pbVar3 + lVar19;
      *(byte **)(unaff_x29 + -0xc0) = pbVar3;
      *(byte **)(unaff_x29 + -0xb8) = pbVar3;
      *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0xf8);
      *(byte **)(unaff_x29 + -0xa8) = pbVar23;
      *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
      *(undefined8 *)(unaff_x29 + -0xa0) = 0;
      if (*(long *)(unaff_x29 + -0xe8) == 0) {
        unaff_x23 = 0;
        unaff_x25 = 0x8000000000000000;
        goto LAB_10143c570;
      }
      lVar21 = 0;
      unaff_x23 = 0x8000000000000000;
      cVar9 = '\x03';
      cVar8 = '\x03';
      unaff_x25 = 0x8000000000000000;
      break;
    }
    lVar19 = *(long *)(unaff_x29 + -0xf8);
    pcVar4 = *(char **)(unaff_x29 + -0xf0);
    lVar21 = *(long *)(unaff_x29 + -0xe8);
    *(char **)(unaff_x29 + -0xe0) = pcVar4;
    *(char **)(unaff_x29 + -0xd8) = pcVar4;
    *(long *)(unaff_x29 + -0xd0) = lVar19;
    *(char **)(unaff_x29 + -200) = pcVar4 + lVar21 * 0x20;
    *(undefined8 *)(unaff_x29 + -0xc0) = 0;
    pcVar24 = pcVar4;
    pbVar23 = unaff_x21;
    if (lVar21 == 0) {
LAB_10143bf60:
      in_stack_00000078 = (char *)FUN_1087e422c(0,&UNK_10b22f088,&UNK_10b20a590);
LAB_10143bf78:
      in_stack_000000f8 = 0x8000000000000000;
      in_stack_00000100 = in_stack_00000078;
LAB_10143bf84:
      lVar21 = ((ulong)((long)(pcVar4 + lVar21 * 0x20) - (long)pcVar24) >> 5) + 1;
      while (lVar21 = lVar21 + -1, lVar21 != 0) {
        FUN_100e077ec(pcVar24);
        pcVar24 = pcVar24 + 0x20;
      }
      pcVar14 = pcVar4;
      if (lVar19 == 0) {
        unaff_x23 = 0x8000000000000000;
      }
      else {
LAB_10143bfb8:
        _free(pcVar14);
        unaff_x23 = 0x8000000000000000;
      }
      goto LAB_10143c61c;
    }
    pcVar24 = pcVar4 + 0x20;
    cVar9 = *pcVar4;
    *(char **)(unaff_x29 + -0xd8) = pcVar24;
    if (cVar9 == '\x16') goto LAB_10143bf60;
    uVar12 = *(undefined8 *)(pcVar4 + 1);
    unaff_x19[1] = *(undefined8 *)(pcVar4 + 9);
    *unaff_x19 = uVar12;
    uVar12 = *(undefined8 *)(pcVar4 + 0x10);
    *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)(pcVar4 + 0x18);
    *(undefined8 *)((long)unaff_x19 + 0xf) = uVar12;
    *(undefined8 *)(unaff_x29 + -0xc0) = 1;
    *(char *)(unaff_x29 + -0x80) = cVar9;
    FUN_10132ff24(unaff_x29 + -0x98,unaff_x29 + -0x80);
    if (*(char *)(unaff_x29 + -0x98) == '\x01') {
      in_stack_00000078 = *(char **)(unaff_x29 + -0x90);
      goto LAB_10143bf78;
    }
    if (lVar21 == 1) {
LAB_10143c520:
      pcVar13 = (char *)FUN_1087e422c(1,&UNK_10b22f088,&UNK_10b20a590);
LAB_10143c53c:
      in_stack_000000f8 = 0x8000000000000000;
      in_stack_00000078 = pcVar13;
      in_stack_00000100 = pcVar13;
      goto LAB_10143bf84;
    }
    cVar8 = *(char *)(unaff_x29 + -0x97);
    pcVar24 = pcVar4 + 0x40;
    *(char **)(unaff_x29 + -0xd8) = pcVar24;
    cVar9 = pcVar4[0x20];
    if (cVar9 == '\x16') goto LAB_10143c520;
    uVar12 = *(undefined8 *)(pcVar4 + 0x21);
    unaff_x19[1] = *(undefined8 *)(pcVar4 + 0x29);
    *unaff_x19 = uVar12;
    uVar12 = *(undefined8 *)(pcVar4 + 0x30);
    *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)(pcVar4 + 0x38);
    *(undefined8 *)((long)unaff_x19 + 0xf) = uVar12;
    *(undefined8 *)(unaff_x29 + -0xc0) = 2;
    *(char *)(unaff_x29 + -0x80) = cVar9;
    FUN_1004b62d4(unaff_x29 + -0x98,unaff_x29 + -0x80);
    unaff_x23 = *(ulong *)(unaff_x29 + -0x98);
    pcVar13 = *(char **)(unaff_x29 + -0x90);
    if (unaff_x23 == 0x8000000000000000) goto LAB_10143c53c;
    if (lVar21 == 2) {
LAB_10143c7c8:
      uVar12 = 2;
LAB_10143c7cc:
      pcVar14 = (char *)FUN_1087e422c(uVar12,&UNK_10b22f088,&UNK_10b20a590);
LAB_10143c7e0:
      in_stack_000000f8 = 0x8000000000000000;
      in_stack_00000078 = pcVar14;
      in_stack_00000100 = pcVar14;
      if (unaff_x23 != 0) {
        _free(pcVar13);
      }
      goto LAB_10143bf84;
    }
    uVar20 = *(ulong *)(unaff_x29 + -0x88);
    pcVar24 = pcVar4 + 0x60;
    *(char **)(unaff_x29 + -0xd8) = pcVar24;
    cVar9 = pcVar4[0x40];
    if (cVar9 == '\x16') goto LAB_10143c7c8;
    uVar12 = *(undefined8 *)(pcVar4 + 0x41);
    unaff_x19[1] = *(undefined8 *)(pcVar4 + 0x49);
    *unaff_x19 = uVar12;
    uVar12 = *(undefined8 *)(pcVar4 + 0x50);
    *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)(pcVar4 + 0x58);
    *(undefined8 *)((long)unaff_x19 + 0xf) = uVar12;
    *(undefined8 *)(unaff_x29 + -0xc0) = 3;
    *(char *)(unaff_x29 + -0x80) = cVar9;
    FUN_1012f8f8c(unaff_x29 + -0x98,unaff_x29 + -0x80);
    if ((*(byte *)(unaff_x29 + -0x98) & 1) != 0) {
      pcVar14 = *(char **)(unaff_x29 + -0x90);
      goto LAB_10143c7e0;
    }
    if (lVar21 == 3) {
LAB_10143c91c:
      uVar12 = 3;
      goto LAB_10143c7cc;
    }
    cVar7 = *(char *)(unaff_x29 + -0x97);
    pcVar24 = pcVar4 + 0x80;
    *(char **)(unaff_x29 + -0xd8) = pcVar24;
    cVar9 = pcVar4[0x60];
    if (cVar9 == '\x16') goto LAB_10143c91c;
    uVar12 = *(undefined8 *)(pcVar4 + 0x61);
    unaff_x19[1] = *(undefined8 *)(pcVar4 + 0x69);
    *unaff_x19 = uVar12;
    uVar12 = *(undefined8 *)(pcVar4 + 0x70);
    *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)(pcVar4 + 0x78);
    *(undefined8 *)((long)unaff_x19 + 0xf) = uVar12;
    *(undefined8 *)(unaff_x29 + -0xc0) = 4;
    *(char *)(unaff_x29 + -0x80) = cVar9;
    FUN_1004b62d4(unaff_x29 + -0x98,unaff_x29 + -0x80);
    uVar2 = *(ulong *)(unaff_x29 + -0x98);
    pcVar14 = *(char **)(unaff_x29 + -0x90);
    if (uVar2 == 0x8000000000000000) goto LAB_10143c7e0;
    in_stack_00000120 = *(ulong *)(unaff_x29 + -0x88);
    in_stack_000000f8 = unaff_x23;
    in_stack_00000100 = pcVar13;
    in_stack_00000108 = uVar20;
    in_stack_00000110 = uVar2;
    in_stack_00000118 = pcVar14;
    cStack0000000000000128 = cVar8;
    cStack0000000000000129 = cVar7;
    in_stack_00000078 = (char *)FUN_100fbc738(unaff_x29 + -0xe0);
    if (in_stack_00000078 == (char *)0x0) goto joined_r0x00010143c610;
    in_stack_000000f8 = 0x8000000000000000;
    in_stack_00000100 = in_stack_00000078;
    if (unaff_x23 != 0) {
      _free(pcVar13);
    }
    if (uVar2 != 0) goto LAB_10143bfb8;
    unaff_x23 = 0x8000000000000000;
  } while( true );
  do {
    pbVar25 = pbVar3 + 0x40;
    bVar17 = *pbVar3;
    unaff_w27 = 0x15;
    lVar15 = lVar21;
    pbVar26 = pbVar25;
    if (bVar17 == 0x16) break;
    *(byte *)(unaff_x29 + -0x80) = bVar17;
    uVar12 = *(undefined8 *)(pbVar3 + 0x10);
    *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)(pbVar3 + 0x18);
    *(undefined8 *)((long)unaff_x19 + 0xf) = uVar12;
    uVar12 = *(undefined8 *)(pbVar3 + 1);
    unaff_x19[1] = *(undefined8 *)(pbVar3 + 9);
    *unaff_x19 = uVar12;
    uVar12 = *(undefined8 *)(pbVar3 + 0x20);
    *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(pbVar3 + 0x28);
    *(undefined8 *)(unaff_x29 + -0xe0) = uVar12;
    uVar12 = *(undefined8 *)(pbVar3 + 0x30);
    *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(pbVar3 + 0x38);
    *(undefined8 *)(unaff_x29 + -0xd0) = uVar12;
    plVar1 = *(long **)(unaff_x29 + -0x78);
    plVar5 = *(long **)(unaff_x29 + -0x70);
    lVar15 = *(long *)(unaff_x29 + -0x68);
    if (bVar17 < 0xd) {
      if (bVar17 == 1) {
        bVar17 = *(byte *)(unaff_x29 + -0x7f);
        if (3 < bVar17) {
          bVar17 = 4;
        }
        goto LAB_10143c23c;
      }
      if (bVar17 == 4) {
        if ((long *)0x3 < plVar1) {
          plVar1 = (long *)0x4;
        }
        *(char *)(unaff_x29 + -0x97) = (char)plVar1;
        goto LAB_10143c240;
      }
      if (bVar17 == 0xc) {
        if (lVar15 == 4) {
          if ((int)*plVar5 == 0x656c6f72) {
            uVar16 = 2;
          }
          else {
            if ((int)*plVar5 != 0x656d616e) goto LAB_10143c1b8;
            uVar16 = 3;
          }
        }
        else if (lVar15 == 0xc) {
          if (*plVar5 != 0x617069636e697270 || (int)plVar5[1] != 0x64695f6c) goto LAB_10143c1b8;
          uVar16 = 1;
        }
        else if ((lVar15 == 0xe) &&
                (*plVar5 == 0x617069636e697270 && *(long *)((long)plVar5 + 6) == 0x657079745f6c6170)
                ) {
          uVar16 = 0;
        }
        else {
LAB_10143c1b8:
          uVar16 = 4;
        }
        *(undefined1 *)(unaff_x29 + -0x97) = uVar16;
        *(undefined1 *)(unaff_x29 + -0x98) = 0;
        if (plVar1 != (long *)0x0) goto LAB_10143c1c8;
        goto LAB_10143c24c;
      }
LAB_10143c44c:
      uVar12 = FUN_108855b04(unaff_x29 + -0x80,unaff_x29 + -0x59,&UNK_10b20e7a0);
      *(undefined8 *)(unaff_x29 + -0x90) = uVar12;
      *(undefined1 *)(unaff_x29 + -0x98) = 1;
LAB_10143c474:
      *(byte **)(unaff_x29 + -0xb8) = pbVar25;
      *(long *)(unaff_x29 + -0xa0) = lVar21 + 1;
      pcVar13 = *(char **)(unaff_x29 + -0x90);
LAB_10143c494:
      in_stack_000000f8 = 0x8000000000000000;
      bVar10 = true;
      in_stack_00000100 = pcVar13;
      goto LAB_10143c5b4;
    }
    if (bVar17 == 0xd) {
      if (plVar5 == (long *)0x4) {
        if ((int)*plVar1 == 0x656c6f72) {
          bVar17 = 2;
        }
        else {
          if ((int)*plVar1 != 0x656d616e) goto LAB_10143c238;
          bVar17 = 3;
        }
      }
      else if (plVar5 == (long *)0xc) {
        if (*plVar1 != 0x617069636e697270 || (int)plVar1[1] != 0x64695f6c) goto LAB_10143c238;
        bVar17 = 1;
      }
      else if ((plVar5 == (long *)0xe) &&
              (*plVar1 == 0x617069636e697270 && *(long *)((long)plVar1 + 6) == 0x657079745f6c6170))
      {
        bVar17 = 0;
      }
      else {
LAB_10143c238:
        bVar17 = 4;
      }
LAB_10143c23c:
      *(byte *)(unaff_x29 + -0x97) = bVar17;
LAB_10143c240:
      *(undefined1 *)(unaff_x29 + -0x98) = 0;
LAB_10143c244:
      FUN_100e077ec(unaff_x29 + -0x80);
LAB_10143c24c:
      bVar17 = *(byte *)(unaff_x29 + -0x98);
    }
    else {
      if (bVar17 != 0xe) {
        if (bVar17 != 0xf) goto LAB_10143c44c;
        FUN_100b63528(unaff_x29 + -0x98,plVar1,plVar5);
        goto LAB_10143c244;
      }
      FUN_100b63528(unaff_x29 + -0x98,plVar5);
      if (plVar1 == (long *)0x0) goto LAB_10143c24c;
LAB_10143c1c8:
      _free(plVar5);
      bVar17 = *(byte *)(unaff_x29 + -0x98);
    }
    if ((bVar17 & 1) != 0) goto LAB_10143c474;
    bVar17 = *(byte *)(unaff_x29 + -0x97);
    if (bVar17 < 2) {
      if (bVar17 == 0) {
        if (cVar8 != '\x03') {
          *(byte **)(unaff_x29 + -0xb8) = pbVar25;
          *(long *)(unaff_x29 + -0xa0) = lVar21 + 1;
          *(undefined **)(unaff_x29 + -0x98) = &UNK_108cb69fc;
          *(undefined8 *)(unaff_x29 + -0x90) = 0xe;
          *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x98;
          *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
          pcVar13 = (char *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
          goto LAB_10143c5b0;
        }
        cVar8 = *(char *)(unaff_x29 + -0xe0);
        *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
        if (cVar8 == '\x16') goto LAB_10143cd00;
        uVar12 = *in_stack_00000070;
        unaff_x19[1] = in_stack_00000070[1];
        *unaff_x19 = uVar12;
        uVar12 = *(undefined8 *)((long)in_stack_00000070 + 0xf);
        *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)((long)in_stack_00000070 + 0x17);
        *(undefined8 *)((long)unaff_x19 + 0xf) = uVar12;
        *(char *)(unaff_x29 + -0x80) = cVar8;
        FUN_10132ff24(unaff_x29 + -0x98,unaff_x29 + -0x80);
        if (*(char *)(unaff_x29 + -0x98) == '\x01') goto LAB_10143c474;
        cVar8 = *(char *)(unaff_x29 + -0x97);
      }
      else {
        if (unaff_x23 != 0x8000000000000000) {
          *(byte **)(unaff_x29 + -0xb8) = pbVar25;
          *(long *)(unaff_x29 + -0xa0) = lVar21 + 1;
          *(undefined **)(unaff_x29 + -0x98) = &UNK_108cb6a0a;
          *(undefined8 *)(unaff_x29 + -0x90) = 0xc;
          *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x98;
          *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
          pcVar13 = (char *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
          goto LAB_10143c5b0;
        }
        cVar7 = *(char *)(unaff_x29 + -0xe0);
        *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
        if (cVar7 == '\x16') {
          *(byte **)(unaff_x29 + -0xb8) = pbVar25;
          *(long *)(unaff_x29 + -0xa0) = lVar21 + 1;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_10143cdbc;
        }
        uVar12 = *in_stack_00000070;
        unaff_x19[1] = in_stack_00000070[1];
        *unaff_x19 = uVar12;
        uVar12 = *(undefined8 *)((long)in_stack_00000070 + 0xf);
        *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)((long)in_stack_00000070 + 0x17);
        *(undefined8 *)((long)unaff_x19 + 0xf) = uVar12;
        *(char *)(unaff_x29 + -0x80) = cVar7;
        FUN_1004b62d4(unaff_x29 + -0x98,unaff_x29 + -0x80);
        unaff_x23 = *(ulong *)(unaff_x29 + -0x98);
        pcVar13 = *(char **)(unaff_x29 + -0x90);
        if (unaff_x23 == 0x8000000000000000) {
          *(byte **)(unaff_x29 + -0xb8) = pbVar25;
          *(long *)(unaff_x29 + -0xa0) = lVar21 + 1;
          unaff_x23 = 0;
          goto LAB_10143c494;
        }
        in_stack_00000030 = *(ulong *)(unaff_x29 + -0x88);
        in_stack_00000040 = pcVar13;
      }
    }
    else {
      if (bVar17 == 2) {
        if (cVar9 == '\x03') {
          cVar9 = *(char *)(unaff_x29 + -0xe0);
          *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
          if (cVar9 == '\x16') {
LAB_10143cd00:
            *(byte **)(unaff_x29 + -0xb8) = pbVar25;
            *(long *)(unaff_x29 + -0xa0) = lVar21 + 1;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10143cdbc:
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x10143cdc0);
            (*pcVar11)();
          }
          uVar12 = *in_stack_00000070;
          unaff_x19[1] = in_stack_00000070[1];
          *unaff_x19 = uVar12;
          uVar12 = *(undefined8 *)((long)in_stack_00000070 + 0xf);
          *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)((long)in_stack_00000070 + 0x17);
          *(undefined8 *)((long)unaff_x19 + 0xf) = uVar12;
          *(char *)(unaff_x29 + -0x80) = cVar9;
          FUN_1012f8f8c(unaff_x29 + -0x98,unaff_x29 + -0x80);
          if (*(char *)(unaff_x29 + -0x98) != '\x01') {
            cVar9 = *(char *)(unaff_x29 + -0x97);
            goto LAB_10143bfdc;
          }
          pcVar13 = *(char **)(unaff_x29 + -0x90);
          *(byte **)(unaff_x29 + -0xb8) = pbVar25;
          *(long *)(unaff_x29 + -0xa0) = lVar21 + 1;
          goto LAB_10143c494;
        }
        *(byte **)(unaff_x29 + -0xb8) = pbVar25;
        *(long *)(unaff_x29 + -0xa0) = lVar21 + 1;
        *(undefined **)(unaff_x29 + -0x98) = &UNK_108cde374;
        *(undefined8 *)(unaff_x29 + -0x90) = 4;
        *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x98;
        *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
        pcVar13 = (char *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
        goto LAB_10143c5b0;
      }
      if (bVar17 == 3) {
        if (unaff_x25 == 0x8000000000000000) {
          cVar7 = *(char *)(unaff_x29 + -0xe0);
          *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
          if (cVar7 == '\x16') {
            *(byte **)(unaff_x29 + -0xb8) = pbVar25;
            *(long *)(unaff_x29 + -0xa0) = lVar21 + 1;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10143cdbc;
          }
          uVar12 = *in_stack_00000070;
          unaff_x19[1] = in_stack_00000070[1];
          *unaff_x19 = uVar12;
          uVar12 = *(undefined8 *)((long)in_stack_00000070 + 0xf);
          *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)((long)in_stack_00000070 + 0x17);
          *(undefined8 *)((long)unaff_x19 + 0xf) = uVar12;
          *(char *)(unaff_x29 + -0x80) = cVar7;
          FUN_1004b62d4(unaff_x29 + -0x98,unaff_x29 + -0x80);
          unaff_x25 = *(ulong *)(unaff_x29 + -0x98);
          in_stack_00000078 = *(char **)(unaff_x29 + -0x90);
          if (unaff_x25 != 0x8000000000000000) {
            in_stack_00000028 = *(ulong *)(unaff_x29 + -0x88);
            goto LAB_10143bfdc;
          }
          *(byte **)(unaff_x29 + -0xb8) = pbVar25;
          *(long *)(unaff_x29 + -0xa0) = lVar21 + 1;
          in_stack_000000f8 = 0x8000000000000000;
          in_stack_00000100 = in_stack_00000078;
          goto LAB_10143c5d4;
        }
        *(byte **)(unaff_x29 + -0xb8) = pbVar25;
        *(long *)(unaff_x29 + -0xa0) = lVar21 + 1;
        *(undefined **)(unaff_x29 + -0x98) = &UNK_108c61018;
        *(undefined8 *)(unaff_x29 + -0x90) = 4;
        *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x98;
        *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
        pcVar13 = (char *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
        in_stack_000000f8 = 0x8000000000000000;
        bVar10 = true;
        in_stack_00000100 = pcVar13;
        goto joined_r0x00010143c5c4;
      }
      cVar7 = *(char *)(unaff_x29 + -0xe0);
      *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
      if (cVar7 == '\x16') goto LAB_10143cd00;
      uVar12 = *in_stack_00000070;
      unaff_x19[1] = in_stack_00000070[1];
      *unaff_x19 = uVar12;
      uVar12 = *(undefined8 *)((long)in_stack_00000070 + 0xf);
      *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)((long)in_stack_00000070 + 0x17);
      *(undefined8 *)((long)unaff_x19 + 0xf) = uVar12;
      *(char *)(unaff_x29 + -0x80) = cVar7;
      FUN_100e077ec(unaff_x29 + -0x80);
    }
LAB_10143bfdc:
    lVar21 = lVar21 + 1;
    lVar15 = (lVar19 - 0x40U >> 6) + 1;
    pbVar26 = pbVar23;
    pbVar3 = pbVar25;
  } while (pbVar25 != pbVar23);
  *(byte **)(unaff_x29 + -0xb8) = pbVar26;
  *(long *)(unaff_x29 + -0xa0) = lVar15;
  if (cVar8 == '\x03') {
LAB_10143c570:
    *(undefined **)(unaff_x29 + -0x98) = &UNK_108cb69fc;
    *(undefined8 *)(unaff_x29 + -0x90) = 0xe;
    *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x98;
    *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
    param_2 = unaff_x29 + -0x80;
    unaff_w27 = 0x15;
    goto code_r0x00010143c598;
  }
  if (unaff_x23 == 0x8000000000000000) {
    *(undefined **)(unaff_x29 + -0x98) = &UNK_108cb6a0a;
    *(undefined8 *)(unaff_x29 + -0x90) = 0xc;
    unaff_x23 = 0;
    *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x98;
    *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
    pcVar13 = (char *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
    goto LAB_10143c5b0;
  }
  if (cVar9 == '\x03') {
    *(undefined **)(unaff_x29 + -0x98) = &UNK_108cde374;
    *(undefined8 *)(unaff_x29 + -0x90) = 4;
    *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x98;
    *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
    pcVar13 = (char *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  }
  else {
    if (unaff_x25 != 0x8000000000000000) {
      in_stack_00000100 = in_stack_00000040;
      in_stack_00000108 = in_stack_00000030;
      in_stack_00000118 = in_stack_00000078;
      in_stack_00000120 = in_stack_00000028;
      in_stack_000000f8 = unaff_x23;
      in_stack_00000110 = unaff_x25;
      cStack0000000000000128 = cVar8;
      cStack0000000000000129 = cVar9;
      FUN_100d34830(unaff_x29 + -0xc0);
      pcVar13 = in_stack_00000040;
      if (pbVar23 != pbVar26) {
        *(long *)(unaff_x29 + -0x80) = lVar15;
        pcVar13 = (char *)FUN_1087e422c(((ulong)((long)pbVar23 - (long)pbVar26) >> 6) + lVar15,
                                        unaff_x29 + -0x80,&UNK_10b23a190);
        in_stack_000000f8 = 0x8000000000000000;
        in_stack_00000100 = pcVar13;
        if (unaff_x23 != 0) {
          _free(in_stack_00000040);
        }
        if (unaff_x25 != 0) {
          _free(in_stack_00000078);
        }
        unaff_x23 = 0x8000000000000000;
      }
      goto joined_r0x00010143c610;
    }
    *(undefined **)(unaff_x29 + -0x98) = &UNK_108c61018;
    *(undefined8 *)(unaff_x29 + -0x90) = 4;
    *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x98;
    *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
    pcVar13 = (char *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  }
  in_stack_000000f8 = 0x8000000000000000;
  in_stack_00000100 = pcVar13;
  if (unaff_x23 == 0) {
    bVar10 = false;
  }
  else {
    _free(in_stack_00000040);
    bVar10 = false;
  }
  goto LAB_10143c5b4;
}

