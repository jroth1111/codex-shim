
/* WARNING: Type propagation algorithm not settling */

void FUN_100873a08(void)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  short *psVar9;
  char *pcVar10;
  long lVar11;
  ulong extraout_x10;
  undefined8 *unaff_x19;
  undefined *puVar12;
  char cVar13;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong uVar14;
  undefined8 *unaff_x24;
  ulong unaff_x25;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *in_stack_00000090;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined *in_stack_000000c8;
  int iStack00000000000000d0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_000001e0;
  char cStack00000000000001f0;
  char cStack00000000000001f1;
  undefined *in_stack_000001f8;
  ulong in_stack_00000200;
  
  uVar5 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *(undefined8 *)(unaff_x29 + -0xe0) = 0x8000000000000000;
  *(undefined8 *)(unaff_x29 + -0xd8) = uVar5;
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000b8);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000c8);
  }
  if (*(long *)(unaff_x29 + -0xe0) == -0x8000000000000000) {
    in_stack_000001f8 = *(undefined **)(unaff_x29 + -0xd8);
    _cStack00000000000001f0 = (undefined *)0x8000000000000003;
LAB_100873a60:
    puVar12 = (undefined *)(_iStack00000000000000d0 & 0xffffffff);
    FUN_100cd2a88(&stack0x000001f0);
    puVar17 = in_stack_000001f8;
    if (iStack00000000000000d0 == 0x14) {
      lVar18 = *(long *)(unaff_x29 + -0x88);
      if (lVar18 == 0) {
        uVar5 = 0;
LAB_100873cc4:
        puVar6 = (undefined *)FUN_1087e422c(uVar5,&UNK_10b22b548,&UNK_10b20a590);
        goto LAB_10087427c;
      }
      lVar16 = *(long *)(unaff_x29 + -0x90);
      puVar6 = (undefined *)FUN_101225964(lVar16);
      if (puVar6 != (undefined *)0x0) goto LAB_10087427c;
      if (lVar18 == 1) {
        uVar5 = 1;
        goto LAB_100873cc4;
      }
      FUN_1004e07f8(unaff_x29 + -0x80,lVar16 + 0x20);
      uVar15 = *(ulong *)(unaff_x29 + -0x80);
      puVar12 = *(undefined **)(unaff_x29 + -0x78);
      puVar6 = puVar12;
      if (uVar15 == 0x8000000000000000) goto LAB_10087427c;
      if (lVar18 == 2) {
        puVar6 = (undefined *)FUN_1087e422c(2,&UNK_10b22b548,&UNK_10b20a590);
LAB_1008749fc:
        _cStack00000000000001f0 = (undefined *)0x8000000000000000;
        in_stack_000000c8 = puVar12;
        puVar17 = puVar6;
        uVar14 = in_stack_00000200;
        if (uVar15 == 0) goto LAB_10087427c;
        goto LAB_100874264;
      }
      uVar14 = *(ulong *)(unaff_x29 + -0x70);
      FUN_1004e07f8(unaff_x29 + -0x80,lVar16 + 0x40);
      lVar16 = *(long *)(unaff_x29 + -0x80);
      in_stack_000000c8 = *(undefined **)(unaff_x29 + -0x78);
      puVar6 = in_stack_000000c8;
      if (lVar16 == -0x8000000000000000) goto LAB_1008749fc;
      _cStack00000000000001f0 = (undefined *)uVar15;
      puVar6 = puVar12;
      in_stack_00000200 = uVar14;
      if (lVar18 != 3) {
        *(undefined8 *)(unaff_x29 + -0x80) = 3;
        puVar6 = (undefined *)
                 FUN_1087e422c((lVar18 + 0x7fffffffffffffdU & 0x7ffffffffffffff) + 3,
                               unaff_x29 + -0x80,&UNK_10b23a1b0);
        _cStack00000000000001f0 = (undefined *)0x8000000000000000;
        if (uVar15 != 0) {
          _free(puVar12);
        }
        unaff_x24 = (undefined8 *)(unaff_x29 + -0xe0);
        if (lVar16 == 0) goto LAB_100874268;
        goto LAB_100874264;
      }
      goto LAB_100874268;
    }
    if (iStack00000000000000d0 == 0x15) {
      if (*(long *)(unaff_x29 + -0x88) == 0) {
        uVar14 = 0;
        uVar15 = 0;
      }
      else {
        puVar17 = (undefined *)0x0;
        puVar12 = (undefined *)(*(long *)(unaff_x29 + -0x88) * 0x40);
        lVar18 = *(long *)(unaff_x29 + -0x90);
        uVar14 = 0x8000000000000000;
        uVar15 = 0x8000000000000000;
        do {
          pbVar1 = puVar17 + lVar18;
          bVar2 = *pbVar1;
          if (bVar2 < 0xd) {
            if (bVar2 == 1) {
              cVar13 = puVar17[lVar18 + 1];
              if (cVar13 != '\x01') {
                if (cVar13 == '\x02') goto LAB_100873c50;
                if (cVar13 != '\0') goto LAB_100873ac8;
                goto LAB_100873fcc;
              }
            }
            else {
              if (bVar2 != 4) {
                if (bVar2 != 0xc) {
LAB_100875974:
                  puVar17 = puVar17 + lVar18;
                  goto LAB_100875978;
                }
                psVar9 = *(short **)(puVar17 + lVar18 + 0x10);
                lVar16 = *(long *)(puVar17 + lVar18 + 0x18);
                if (lVar16 == 1) goto LAB_100873c10;
LAB_100873b0c:
                if ((lVar16 != 3) || (*psVar9 != 0x746b || (char)psVar9[1] != 'y'))
                goto LAB_100873ac8;
LAB_100873fcc:
                puVar6 = (undefined *)FUN_101225964(puVar17 + lVar18 + 0x20);
                if (puVar6 != (undefined *)0x0) goto LAB_100874230;
                puVar12 = puVar12 + -0x40;
                goto joined_r0x000100873fe4;
              }
              lVar16 = *(long *)(puVar17 + lVar18 + 8);
              if (lVar16 != 1) {
                if (lVar16 != 2) {
                  if (lVar16 == 0) goto LAB_100873fcc;
                  goto LAB_100873ac8;
                }
LAB_100873c50:
                if (uVar15 == 0x8000000000000000) {
                  FUN_1004e07f8(unaff_x29 + -0x80,pbVar1 + 0x20);
                  uVar15 = *(ulong *)(unaff_x29 + -0x80);
                  if (uVar15 != 0x8000000000000000) {
                    in_stack_000000c0 = *(undefined8 *)(unaff_x29 + -0x78);
                    goto LAB_100873ac8;
                  }
                  goto LAB_100874248;
                }
                goto LAB_10087592c;
              }
            }
LAB_100873c24:
            if (uVar14 != 0x8000000000000000) goto LAB_100875898;
            FUN_1004e07f8(unaff_x29 + -0x80,pbVar1 + 0x20);
            uVar14 = *(ulong *)(unaff_x29 + -0x80);
            if (uVar14 == 0x8000000000000000) goto LAB_100874228;
            in_stack_000000c8 = *(undefined **)(unaff_x29 + -0x78);
            unaff_x22 = *(ulong *)(unaff_x29 + -0x70);
          }
          else {
            if (bVar2 == 0xd) {
              psVar9 = *(short **)(puVar17 + lVar18 + 8);
              lVar16 = *(long *)(puVar17 + lVar18 + 0x10);
              if (lVar16 != 1) goto LAB_100873b0c;
LAB_100873c10:
              if ((char)*psVar9 == 'e') goto LAB_100873c50;
              if ((char)*psVar9 != 'n') goto LAB_100873ac8;
              goto LAB_100873c24;
            }
            if (bVar2 == 0xe) {
              pcVar10 = *(char **)(puVar17 + lVar18 + 0x10);
              lVar16 = *(long *)(puVar17 + lVar18 + 0x18);
            }
            else {
              if (bVar2 != 0xf) goto LAB_100875974;
              pcVar10 = *(char **)(puVar17 + lVar18 + 8);
              lVar16 = *(long *)(puVar17 + lVar18 + 0x10);
            }
            if (lVar16 == 1) {
              iVar7 = 2;
              if (*pcVar10 != 'e') {
                iVar7 = 3;
              }
              if (*pcVar10 == 'n') goto LAB_100873c24;
              if (iVar7 != 3) goto LAB_100873c50;
            }
            else if ((((lVar16 == 3) && (*pcVar10 == 'k')) && (pcVar10[1] == 't')) &&
                    (pcVar10[2] == 'y')) goto LAB_100873fcc;
          }
LAB_100873ac8:
          puVar17 = puVar17 + 0x40;
        } while ((long)puVar12 - (long)puVar17 != 0);
      }
      *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000238;
      *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
      puVar6 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
      goto LAB_100873d1c;
    }
    puVar6 = (undefined *)FUN_108855c40(unaff_x29 + -0xa0,unaff_x29 + -0x61,&UNK_10b2138a8);
    goto LAB_10087427c;
  }
  uVar5 = *unaff_x24;
  uVar21 = unaff_x24[3];
  uVar20 = unaff_x24[2];
  *(undefined8 *)(unaff_x28 + 0xf8) = unaff_x24[1];
  *(undefined8 *)(unaff_x28 + 0xf0) = uVar5;
  *(undefined8 *)(unaff_x28 + 0x108) = uVar21;
  *(undefined8 *)(unaff_x28 + 0x100) = uVar20;
  uVar5 = unaff_x24[4];
  *(undefined8 *)(unaff_x28 + 0x118) = unaff_x24[5];
  *(undefined8 *)(unaff_x28 + 0x110) = uVar5;
  uVar5 = *(undefined8 *)(unaff_x29 + -0xb0);
  if (_cStack00000000000001f0 == (undefined *)0x8000000000000003) goto LAB_100873a60;
  *(undefined8 *)(unaff_x28 + 200) = *(undefined8 *)(unaff_x28 + 0x108);
  *(undefined8 *)(unaff_x28 + 0xc0) = *(undefined8 *)(unaff_x28 + 0x100);
  *(undefined8 *)(unaff_x28 + 0xd8) = *(undefined8 *)(unaff_x28 + 0x118);
  *(undefined8 *)(unaff_x28 + 0xd0) = *(undefined8 *)(unaff_x28 + 0x110);
  in_stack_00000090 = _cStack00000000000001f0;
  in_stack_000001e0 = uVar5;
  goto LAB_100874464;
joined_r0x000100873fe4:
  if (puVar12 == puVar17) goto LAB_100874a10;
  bVar2 = puVar17[lVar18 + 0x40];
  if (0xc < bVar2) {
    if (bVar2 == 0xd) {
      psVar9 = *(short **)(puVar17 + lVar18 + 0x48);
      lVar16 = *(long *)(puVar17 + lVar18 + 0x50);
LAB_100874144:
      if (lVar16 == 3) {
        if (*psVar9 != 0x746b || (char)psVar9[1] != 'y') goto LAB_100874058;
LAB_1008741ec:
        *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000238;
        *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
        puVar6 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
        goto LAB_100873d1c;
      }
      if (lVar16 == 1) {
        if ((char)*psVar9 == 'e') goto LAB_100874198;
        if ((char)*psVar9 == 'n') goto LAB_100874168;
      }
    }
    else {
      if (bVar2 == 0xe) {
        pcVar10 = *(char **)(puVar17 + lVar18 + 0x50);
        lVar16 = *(long *)(puVar17 + lVar18 + 0x58);
      }
      else {
        if (bVar2 != 0xf) goto LAB_100875e40;
        pcVar10 = *(char **)(puVar17 + lVar18 + 0x48);
        lVar16 = *(long *)(puVar17 + lVar18 + 0x50);
      }
      if (lVar16 == 3) {
        if (((*pcVar10 == 'k') && (pcVar10[1] == 't')) && (pcVar10[2] == 'y')) goto LAB_1008741ec;
      }
      else if (lVar16 == 1) {
        iVar7 = 2;
        if (*pcVar10 != 'e') {
          iVar7 = 3;
        }
        if (*pcVar10 == 'n') goto LAB_100874168;
        if (iVar7 != 3) goto LAB_100874198;
      }
    }
LAB_100874058:
    puVar17 = puVar17 + 0x40;
    goto joined_r0x000100873fe4;
  }
  if (bVar2 != 1) {
    if (bVar2 == 4) {
      lVar16 = *(long *)(puVar17 + lVar18 + 0x48);
      if (lVar16 == 1) goto LAB_100874168;
      if (lVar16 != 2) {
        if (lVar16 == 0) goto LAB_1008741ec;
        goto LAB_100874058;
      }
      goto LAB_100874198;
    }
    if (bVar2 == 0xc) {
      psVar9 = *(short **)(puVar17 + lVar18 + 0x50);
      lVar16 = *(long *)(puVar17 + lVar18 + 0x58);
      goto LAB_100874144;
    }
LAB_100875e40:
    puVar17 = puVar17 + lVar18 + 0x40;
LAB_100875978:
    puVar6 = (undefined *)FUN_108855c40(puVar17,unaff_x29 + -0x61,&UNK_10b214aa8);
    goto LAB_100873d1c;
  }
  cVar13 = puVar17[lVar18 + 0x41];
  if (cVar13 == '\x01') {
LAB_100874168:
    if (uVar14 != 0x8000000000000000) goto LAB_100875898;
    FUN_1004e07f8(unaff_x29 + -0x80,puVar17 + lVar18 + 0x60);
    uVar14 = *(ulong *)(unaff_x29 + -0x80);
    if (uVar14 == 0x8000000000000000) goto LAB_100874228;
    in_stack_000000c8 = *(undefined **)(unaff_x29 + -0x78);
    unaff_x22 = *(ulong *)(unaff_x29 + -0x70);
    goto LAB_100874058;
  }
  if (cVar13 != '\x02') {
    if (cVar13 == '\0') goto LAB_1008741ec;
    goto LAB_100874058;
  }
LAB_100874198:
  if (uVar15 != 0x8000000000000000) goto LAB_10087592c;
  FUN_1004e07f8(unaff_x29 + -0x80,puVar17 + lVar18 + 0x60);
  uVar15 = *(ulong *)(unaff_x29 + -0x80);
  if (uVar15 != 0x8000000000000000) {
    in_stack_000000c0 = *(undefined8 *)(unaff_x29 + -0x78);
    goto LAB_100874058;
  }
LAB_100874248:
  puVar6 = *(undefined **)(unaff_x29 + -0x78);
  goto LAB_100874258;
LAB_100874a10:
  if (uVar14 == 0x8000000000000000) {
    *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000238;
    *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
    uVar14 = 0;
    puVar6 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
    goto LAB_100873d1c;
  }
  if (uVar15 != 0x8000000000000000) {
    unaff_x24 = (undefined8 *)(unaff_x29 + -0xe0);
    _cStack00000000000001f0 = (undefined *)uVar14;
    puVar6 = in_stack_000000c8;
    in_stack_00000200 = unaff_x22;
    goto LAB_100874268;
  }
  *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000238;
  *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
  puVar6 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  _cStack00000000000001f0 = (undefined *)0x8000000000000000;
  unaff_x24 = (undefined8 *)(unaff_x29 + -0xe0);
  puVar17 = puVar6;
  if (uVar14 == 0) goto LAB_10087427c;
  goto LAB_100874260;
LAB_10087592c:
  *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000238;
  *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
  puVar6 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  goto joined_r0x00010087596c;
LAB_100874228:
  puVar6 = *(undefined **)(unaff_x29 + -0x78);
  uVar14 = 0;
LAB_100874230:
  if ((uVar15 & 0x7fffffffffffffff) == 0) goto LAB_100874258;
  goto LAB_100873d2c;
joined_r0x000100874548:
  if (lVar19 + -0x40 == lVar18) goto LAB_100874a90;
  bVar2 = *(byte *)(lVar16 + lVar18 + 0x40);
  if (0xc < bVar2) {
    if (bVar2 == 0xd) {
      psVar9 = *(short **)(lVar16 + lVar18 + 0x48);
      lVar8 = *(long *)(lVar16 + lVar18 + 0x50);
LAB_100874688:
      if (lVar8 != 3) {
LAB_100874690:
        if ((lVar8 != 1) || ((char)*psVar9 != 'k')) goto LAB_1008745a0;
        goto LAB_1008746a4;
      }
      if (*psVar9 == 0x746b && (char)psVar9[1] == 'y') goto LAB_100875534;
    }
    else {
      if (bVar2 == 0xe) {
        psVar9 = *(short **)(lVar16 + lVar18 + 0x50);
        lVar8 = *(long *)(lVar16 + lVar18 + 0x58);
      }
      else {
        if (bVar2 != 0xf) goto LAB_100875e34;
        psVar9 = *(short **)(lVar16 + lVar18 + 0x48);
        lVar8 = *(long *)(lVar16 + lVar18 + 0x50);
      }
      if (lVar8 != 3) goto LAB_100874690;
      if ((((char)*psVar9 == 'k') && (*(char *)((long)psVar9 + 1) == 't')) &&
         ((char)psVar9[1] == 'y')) goto LAB_100875534;
    }
    goto LAB_1008745a0;
  }
  if (bVar2 != 1) {
    if (bVar2 == 4) {
      lVar8 = *(long *)(lVar16 + lVar18 + 0x48);
      iVar7 = 1;
      if (lVar8 != 1) {
        iVar7 = 2;
      }
      if (lVar8 == 0) goto LAB_100875534;
      goto LAB_100874670;
    }
    if (bVar2 == 0xc) {
      psVar9 = *(short **)(lVar16 + lVar18 + 0x50);
      lVar8 = *(long *)(lVar16 + lVar18 + 0x58);
      goto LAB_100874688;
    }
LAB_100875e34:
    lVar16 = lVar16 + lVar18 + 0x40;
LAB_100875a9c:
    puVar6 = (undefined *)FUN_108855c40(lVar16,unaff_x29 + -0x61,&UNK_10b214f28);
    unaff_x24 = (undefined8 *)(unaff_x29 + -0xe0);
    goto LAB_10087450c;
  }
  cVar13 = *(char *)(lVar16 + lVar18 + 0x41);
  iVar7 = 1;
  if (cVar13 != '\x01') {
    iVar7 = 2;
  }
  if (cVar13 == '\0') {
LAB_100875534:
    *(undefined **)(unaff_x29 + -0x80) = &UNK_108cacb2d;
    *(undefined8 *)(unaff_x29 + -0x78) = 3;
    _cStack00000000000001f0 = (undefined *)(unaff_x29 + -0x80);
    puVar17 = &DAT_100c7b3a0;
    puVar6 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000001f0);
    goto LAB_10087450c;
  }
LAB_100874670:
  if (iVar7 == 2) {
LAB_1008745a0:
    lVar18 = lVar18 + 0x40;
    goto joined_r0x000100874548;
  }
LAB_1008746a4:
  if (in_stack_000001f8 == (undefined *)0x8000000000000000) {
    FUN_1004e07f8(&stack0x000001f0,lVar16 + lVar18 + 0x60);
    puVar6 = puVar17;
    uVar15 = in_stack_00000200;
    puVar12 = puVar17;
    in_stack_000001f8 = _cStack00000000000001f0;
    if (_cStack00000000000001f0 != (undefined *)0x8000000000000000) goto LAB_1008745a0;
    goto LAB_1008746d4;
  }
LAB_1008758d4:
  *(undefined **)(unaff_x29 + -0x80) = &UNK_108cacb37;
  *(undefined8 *)(unaff_x29 + -0x78) = 1;
  _cStack00000000000001f0 = (undefined *)(unaff_x29 + -0x80);
  puVar17 = &DAT_100c7b3a0;
  puVar6 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000001f0);
  if (in_stack_000001f8 == (undefined *)0x0) goto LAB_1008746d4;
  goto LAB_100874514;
LAB_100874a90:
  if (in_stack_000001f8 != (undefined *)0x8000000000000000) goto LAB_100874d64;
  *(undefined **)(unaff_x29 + -0x80) = &UNK_108cacb37;
  *(undefined8 *)(unaff_x29 + -0x78) = 1;
  _cStack00000000000001f0 = (undefined *)(unaff_x29 + -0x80);
  puVar17 = &DAT_100c7b3a0;
  puVar6 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&stack0x000001f0);
  goto LAB_1008746d4;
joined_r0x000100874998:
  if (lVar19 + -0x40 == lVar18) goto LAB_100874d24;
  lVar8 = lVar16 + lVar18;
  bVar2 = *(byte *)(lVar8 + 0x40);
  if (0xc < bVar2) {
    if (bVar2 == 0xd) {
      psVar9 = *(short **)(lVar16 + lVar18 + 0x48);
      lVar11 = *(long *)(lVar16 + lVar18 + 0x50);
LAB_100874bc0:
      if (lVar11 == 3) {
        if (*psVar9 == 0x746b && (char)psVar9[1] == 'y') goto LAB_100874c80;
        if (*psVar9 == 0x7263 && (char)psVar9[1] == 'v') goto LAB_100874c44;
      }
      else {
LAB_100874bc8:
        if ((lVar11 == 1) && ((char)*psVar9 == 'x')) goto LAB_100874bdc;
      }
    }
    else {
      if (bVar2 == 0xe) {
        psVar9 = *(short **)(lVar16 + lVar18 + 0x50);
        lVar11 = *(long *)(lVar16 + lVar18 + 0x58);
      }
      else {
        if (bVar2 != 0xf) goto LAB_100875e58;
        psVar9 = *(short **)(lVar16 + lVar18 + 0x48);
        lVar11 = *(long *)(lVar16 + lVar18 + 0x50);
      }
      if (lVar11 != 3) goto LAB_100874bc8;
      if ((char)*psVar9 == 'k') {
        if ((*(char *)((long)psVar9 + 1) == 't') && ((char)psVar9[1] == 'y')) goto LAB_100874c80;
      }
      else if (((char)*psVar9 == 'c') &&
              ((*(char *)((long)psVar9 + 1) == 'r' && ((char)psVar9[1] == 'v'))))
      goto LAB_100874c44;
    }
LAB_100874ad8:
    lVar18 = lVar18 + 0x40;
    goto joined_r0x000100874998;
  }
  if (bVar2 != 1) {
    if (bVar2 == 4) {
      lVar11 = *(long *)(lVar16 + lVar18 + 0x48);
      if (lVar11 == 1) goto LAB_100874c44;
      if (lVar11 != 2) {
        if (lVar11 == 0) goto LAB_100874c80;
        goto LAB_100874ad8;
      }
      goto LAB_100874bdc;
    }
    if (bVar2 == 0xc) {
      psVar9 = *(short **)(lVar16 + lVar18 + 0x50);
      lVar11 = *(long *)(lVar16 + lVar18 + 0x58);
      goto LAB_100874bc0;
    }
LAB_100875e58:
    lVar16 = lVar16 + lVar18 + 0x40;
LAB_100875a50:
    puVar6 = (undefined *)FUN_108855c40(lVar16,unaff_x29 + -0x61,&UNK_10b215308);
    goto LAB_100874944;
  }
  cVar3 = *(char *)(lVar16 + lVar18 + 0x41);
  if (cVar3 == '\x01') {
LAB_100874c44:
    if (cVar13 == '\x04') {
      FUN_1013812f0(&stack0x000001f0,lVar8 + 0x60);
      puVar6 = puVar17;
      cVar13 = cStack00000000000001f1;
      if (((ulong)puVar4 & 1) == 0) goto LAB_100874ad8;
    }
    else {
LAB_100875a64:
      *(undefined **)(unaff_x29 + -0x80) = &UNK_108cacb30;
      *(undefined8 *)(unaff_x29 + -0x78) = 3;
      puVar6 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000001f0);
    }
    goto LAB_100874944;
  }
  if (cVar3 != '\x02') {
    if (cVar3 != '\0') goto LAB_100874ad8;
LAB_100874c80:
    *(undefined **)(unaff_x29 + -0x80) = &UNK_108cacb2d;
    *(undefined8 *)(unaff_x29 + -0x78) = 3;
    puVar6 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000001f0);
    goto LAB_100874944;
  }
LAB_100874bdc:
  if (in_stack_000001f8 == (undefined *)0x8000000000000000) {
    FUN_1004e07f8(&stack0x000001f0,lVar8 + 0x60);
    puVar6 = puVar17;
    puVar12 = puVar17;
    in_stack_000001f8 = puVar4;
    _iStack00000000000000d0 = in_stack_00000200;
    if (puVar4 != (undefined *)0x8000000000000000) goto LAB_100874ad8;
    goto LAB_100874cb8;
  }
LAB_100875990:
  *(undefined **)(unaff_x29 + -0x80) = &UNK_108cacb33;
  *(undefined8 *)(unaff_x29 + -0x78) = 1;
  puVar6 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000001f0);
  puVar4 = in_stack_000001f8;
  goto joined_r0x0001008759c0;
LAB_100874d24:
  if (cVar13 == '\x04') {
    *(undefined **)(unaff_x29 + -0x80) = &UNK_108cacb30;
    *(undefined8 *)(unaff_x29 + -0x78) = 3;
    puVar6 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&stack0x000001f0);
    goto LAB_100874944;
  }
  if (in_stack_000001f8 != (undefined *)0x8000000000000000) goto LAB_1008757bc;
  *(undefined **)(unaff_x29 + -0x80) = &UNK_108cacb33;
  *(undefined8 *)(unaff_x29 + -0x78) = 1;
  puVar6 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&stack0x000001f0);
  goto LAB_100874cb8;
LAB_100875898:
  *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000238;
  *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
  puVar6 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
LAB_100873d1c:
  uVar15 = uVar15 & 0x7fffffffffffffff;
joined_r0x00010087596c:
  if (uVar15 != 0) {
LAB_100873d2c:
    _free(in_stack_000000c0);
  }
LAB_100874258:
  _cStack00000000000001f0 = (undefined *)0x8000000000000000;
  unaff_x24 = (undefined8 *)(unaff_x29 + -0xe0);
  if ((uVar14 & 0x7fffffffffffffff) != 0) {
LAB_100874260:
    unaff_x24 = (undefined8 *)(unaff_x29 + -0xe0);
    uVar14 = in_stack_00000200;
LAB_100874264:
    _cStack00000000000001f0 = (undefined *)0x8000000000000000;
    _free(in_stack_000000c8);
    in_stack_00000200 = uVar14;
  }
LAB_100874268:
  if (_cStack00000000000001f0 != (undefined *)0x8000000000000000) {
    uVar21 = *(undefined8 *)(unaff_x28 + 0x108);
    uVar20 = *(undefined8 *)(unaff_x28 + 0x100);
    uVar5 = *(undefined8 *)(unaff_x28 + 0x110);
    unaff_x24[6] = *(undefined8 *)(unaff_x28 + 0x118);
    unaff_x24[5] = uVar5;
    uVar5 = *(undefined8 *)(unaff_x28 + 0xf0);
    unaff_x24[2] = *(undefined8 *)(unaff_x28 + 0xf8);
    unaff_x24[1] = uVar5;
    unaff_x24[4] = uVar21;
    unaff_x24[3] = uVar20;
    uVar5 = unaff_x24[2];
    uVar21 = unaff_x24[5];
    uVar20 = unaff_x24[4];
    *(undefined8 *)(unaff_x28 + 200) = unaff_x24[3];
    *(undefined8 *)(unaff_x28 + 0xc0) = uVar5;
    *(undefined8 *)(unaff_x28 + 0xd8) = uVar21;
    *(undefined8 *)(unaff_x28 + 0xd0) = uVar20;
    in_stack_000001f8 = *(undefined **)(unaff_x29 + -0xd8);
    in_stack_00000090 = (undefined *)0x8000000000000000;
    in_stack_000001e0 = *(undefined8 *)(unaff_x29 + -0xb0);
LAB_100874464:
    FUN_100e077ec(unaff_x29 + -0xa0);
    uVar5 = *(undefined8 *)(unaff_x28 + 0xc0);
    uVar21 = *(undefined8 *)(unaff_x28 + 0xd8);
    uVar20 = *(undefined8 *)(unaff_x28 + 0xd0);
    unaff_x19[0x19] = *(undefined8 *)(unaff_x28 + 200);
    unaff_x19[0x18] = uVar5;
    unaff_x19[0x1b] = uVar21;
    unaff_x19[0x1a] = uVar20;
    unaff_x19[0x1c] = in_stack_000001e0;
    uVar5 = *(undefined8 *)(unaff_x28 + 0x80);
    uVar21 = *(undefined8 *)(unaff_x28 + 0x98);
    uVar20 = *(undefined8 *)(unaff_x28 + 0x90);
    unaff_x19[0x11] = *(undefined8 *)(unaff_x28 + 0x88);
    unaff_x19[0x10] = uVar5;
    unaff_x19[0x13] = uVar21;
    unaff_x19[0x12] = uVar20;
    uVar5 = *(undefined8 *)(unaff_x28 + 0xa0);
    unaff_x19[0x15] = *(undefined8 *)(unaff_x28 + 0xa8);
    unaff_x19[0x14] = uVar5;
    unaff_x19[9] = in_stack_00000148;
    unaff_x19[8] = in_stack_00000140;
    unaff_x19[0xb] = in_stack_00000158;
    unaff_x19[10] = in_stack_00000150;
    uVar21 = *(undefined8 *)(unaff_x28 + 0x60);
    uVar20 = *(undefined8 *)(unaff_x28 + 0x78);
    uVar5 = *(undefined8 *)(unaff_x28 + 0x70);
    unaff_x19[0xd] = *(undefined8 *)(unaff_x28 + 0x68);
    unaff_x19[0xc] = uVar21;
    unaff_x19[0xf] = uVar20;
    unaff_x19[0xe] = uVar5;
    unaff_x19[1] = in_stack_00000108;
    *unaff_x19 = in_stack_00000100;
    unaff_x19[3] = in_stack_00000118;
    unaff_x19[2] = in_stack_00000110;
    unaff_x19[5] = in_stack_00000128;
    unaff_x19[4] = in_stack_00000120;
    unaff_x19[7] = in_stack_00000138;
    unaff_x19[6] = in_stack_00000130;
    unaff_x19[0x16] = in_stack_00000090;
    unaff_x19[0x17] = in_stack_000001f8;
    goto LAB_100874cf4;
  }
  _cStack00000000000001f0 = (undefined *)0x8000000000000000;
  puVar17 = puVar6;
LAB_10087427c:
  puVar4 = _cStack00000000000001f0;
  *(undefined8 *)(unaff_x29 + -0xe0) = 0x8000000000000003;
  *(undefined **)(unaff_x29 + -0xd8) = puVar6;
  FUN_100cd2a88(unaff_x29 + -0xe0);
  if (iStack00000000000000d0 == 0x14) {
    lVar18 = *(long *)(unaff_x29 + -0x88);
    if (lVar18 == 0) {
      uVar5 = 0;
LAB_1008744bc:
      puVar6 = (undefined *)FUN_1087e422c(uVar5,&UNK_10b22b5f8,&UNK_10b20a590);
    }
    else {
      puVar12 = *(undefined **)(unaff_x29 + -0x90);
      puVar6 = (undefined *)FUN_1012be99c(puVar12);
      if (puVar6 == (undefined *)0x0) {
        if (lVar18 == 1) {
          uVar5 = 1;
          goto LAB_1008744bc;
        }
        FUN_1004e07f8(&stack0x000001f0,puVar12 + 0x20);
        puVar6 = puVar17;
        if (_cStack00000000000001f0 != (undefined *)0x8000000000000000) {
          puVar12 = puVar17;
          uVar15 = in_stack_00000200;
          in_stack_000001f8 = _cStack00000000000001f0;
          if (lVar18 == 2) {
LAB_100874d64:
            *(undefined **)(unaff_x29 + -0xd0) = puVar12;
            *(ulong *)(unaff_x29 + -200) = uVar15;
            in_stack_000001e0 = *(undefined8 *)(unaff_x29 + -0xb0);
            uVar21 = unaff_x24[2];
            uVar20 = unaff_x24[5];
            uVar5 = unaff_x24[4];
            *(undefined8 *)(unaff_x28 + 200) = unaff_x24[3];
            *(undefined8 *)(unaff_x28 + 0xc0) = uVar21;
            *(undefined8 *)(unaff_x28 + 0xd8) = uVar20;
            *(undefined8 *)(unaff_x28 + 0xd0) = uVar5;
            in_stack_00000090 = (undefined *)0x8000000000000001;
            goto LAB_100874464;
          }
          _cStack00000000000001f0 = (undefined *)0x2;
          puVar6 = (undefined *)
                   FUN_1087e422c((lVar18 + 0x7fffffffffffffeU & 0x7ffffffffffffff) + 2,
                                 &stack0x000001f0,&UNK_10b23a1b0);
          if (puVar4 != (undefined *)0x0) {
            _free(puVar17);
          }
          unaff_x24 = (undefined8 *)(unaff_x29 + -0xe0);
        }
      }
    }
  }
  else if (iStack00000000000000d0 == 0x15) {
    if (*(long *)(unaff_x29 + -0x88) == 0) {
      in_stack_000001f8 = (undefined *)0x0;
    }
    else {
      lVar18 = 0;
      lVar19 = *(long *)(unaff_x29 + -0x88) * 0x40;
      lVar16 = *(long *)(unaff_x29 + -0x90);
      in_stack_000001f8 = (undefined *)0x8000000000000000;
      uVar15 = extraout_x10;
      do {
        bVar2 = *(byte *)(lVar16 + lVar18);
        if (bVar2 < 0xd) {
          if (bVar2 == 1) {
            cVar13 = *(char *)(lVar16 + lVar18 + 1);
            iVar7 = 1;
            if (cVar13 != '\x01') {
              iVar7 = 2;
            }
            if (cVar13 != '\0') {
LAB_100874394:
              if (iVar7 == 2) goto LAB_1008742c4;
LAB_1008743e8:
              if (in_stack_000001f8 == (undefined *)0x8000000000000000) {
                FUN_1004e07f8(&stack0x000001f0,(byte *)(lVar16 + lVar18) + 0x20);
                puVar6 = puVar17;
                uVar15 = in_stack_00000200;
                puVar12 = puVar17;
                in_stack_000001f8 = _cStack00000000000001f0;
                if (_cStack00000000000001f0 != (undefined *)0x8000000000000000) goto LAB_1008742c4;
                goto LAB_1008746d4;
              }
              goto LAB_1008758d4;
            }
          }
          else {
            if (bVar2 != 4) {
              if (bVar2 != 0xc) goto LAB_100875a98;
              psVar9 = *(short **)(lVar16 + lVar18 + 0x10);
              lVar8 = *(long *)(lVar16 + lVar18 + 0x18);
              goto LAB_1008743ac;
            }
            lVar8 = *(long *)(lVar16 + lVar18 + 8);
            iVar7 = 1;
            if (lVar8 != 1) {
              iVar7 = 2;
            }
            if (lVar8 != 0) goto LAB_100874394;
          }
LAB_100874528:
          puVar6 = (undefined *)FUN_1012be99c(lVar16 + lVar18 + 0x20);
          if (puVar6 != (undefined *)0x0) goto LAB_10087450c;
          goto joined_r0x000100874548;
        }
        if (bVar2 == 0xd) {
          psVar9 = *(short **)(lVar16 + lVar18 + 8);
          lVar8 = *(long *)(lVar16 + lVar18 + 0x10);
LAB_1008743ac:
          if (lVar8 == 1) goto LAB_1008743dc;
          if ((lVar8 == 3) && (*psVar9 == 0x746b && (char)psVar9[1] == 'y')) goto LAB_100874528;
        }
        else {
          if (bVar2 == 0xe) {
            psVar9 = *(short **)(lVar16 + lVar18 + 0x10);
            lVar8 = *(long *)(lVar16 + lVar18 + 0x18);
          }
          else {
            if (bVar2 != 0xf) {
LAB_100875a98:
              lVar16 = lVar16 + lVar18;
              goto LAB_100875a9c;
            }
            psVar9 = *(short **)(lVar16 + lVar18 + 8);
            lVar8 = *(long *)(lVar16 + lVar18 + 0x10);
          }
          if (lVar8 == 1) {
LAB_1008743dc:
            if ((char)*psVar9 == 'k') goto LAB_1008743e8;
          }
          else if ((((lVar8 == 3) && ((char)*psVar9 == 'k')) && (*(char *)((long)psVar9 + 1) == 't')
                   ) && ((char)psVar9[1] == 'y')) goto LAB_100874528;
        }
LAB_1008742c4:
        lVar18 = lVar18 + 0x40;
      } while (lVar19 - lVar18 != 0);
    }
    *(undefined **)(unaff_x29 + -0x80) = &UNK_108cacb2d;
    *(undefined8 *)(unaff_x29 + -0x78) = 3;
    _cStack00000000000001f0 = (undefined *)(unaff_x29 + -0x80);
    puVar17 = &DAT_100c7b3a0;
    puVar6 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&stack0x000001f0);
LAB_10087450c:
    if (((ulong)in_stack_000001f8 & 0x7fffffffffffffff) != 0) {
LAB_100874514:
      _free(puVar12);
    }
  }
  else {
    puVar6 = (undefined *)FUN_108855c40(unaff_x29 + -0xa0,unaff_x29 + -0x61,&UNK_10b213c88);
  }
LAB_1008746d4:
  puVar4 = _cStack00000000000001f0;
  *(undefined8 *)(unaff_x29 + -0xe0) = 0x8000000000000003;
  *(undefined **)(unaff_x29 + -0xd8) = puVar6;
  FUN_100cd2a88(unaff_x29 + -0xe0);
  cStack00000000000001f1 = (char)((ulong)_cStack00000000000001f0 >> 8);
  puVar6 = puVar17;
  if (iStack00000000000000d0 == 0x14) {
    lVar18 = *(long *)(unaff_x29 + -0x88);
    if (lVar18 == 0) {
      uVar5 = 0;
LAB_1008748f8:
      puVar6 = (undefined *)FUN_1087e422c(uVar5,&UNK_10b22b990,&UNK_10b20a590);
    }
    else {
      lVar16 = *(long *)(unaff_x29 + -0x90);
      puVar6 = (undefined *)FUN_10137f16c(lVar16);
      if (puVar6 == (undefined *)0x0) {
        if (lVar18 == 1) {
          uVar5 = 1;
          goto LAB_1008748f8;
        }
        FUN_1013812f0(&stack0x000001f0,lVar16 + 0x20);
        puVar6 = puVar17;
        if (cStack00000000000001f0 != '\x01') {
          if (lVar18 == 2) {
            uVar5 = 2;
            goto LAB_1008748f8;
          }
          FUN_1004e07f8(&stack0x000001f0,lVar16 + 0x40);
          if (puVar4 != (undefined *)0x8000000000000000) {
            puVar12 = puVar17;
            _iStack00000000000000d0 = in_stack_00000200;
            in_stack_000001f8 = puVar4;
            cVar13 = cStack00000000000001f1;
            if (lVar18 != 3) {
              puVar6 = (undefined *)
                       FUN_1087e422c((lVar18 + 0x7fffffffffffffdU & 0x7ffffffffffffff) + 3,
                                     &stack0x000001f0,&UNK_10b23a1b0);
              goto joined_r0x0001008759c0;
            }
LAB_1008757bc:
            *(undefined **)(unaff_x29 + -0xd0) = puVar12;
            *(ulong *)(unaff_x29 + -200) = _iStack00000000000000d0;
            *(char *)(unaff_x29 + -0xc0) = cVar13;
            in_stack_000001e0 = *(undefined8 *)(unaff_x29 + -0xb0);
            uVar5 = unaff_x24[2];
            uVar21 = unaff_x24[5];
            uVar20 = unaff_x24[4];
            *(undefined8 *)(unaff_x28 + 200) = unaff_x24[3];
            *(undefined8 *)(unaff_x28 + 0xc0) = uVar5;
            *(undefined8 *)(unaff_x28 + 0xd8) = uVar21;
            *(undefined8 *)(unaff_x28 + 0xd0) = uVar20;
            goto LAB_100874464;
          }
        }
      }
    }
  }
  else if (iStack00000000000000d0 == 0x15) {
    if (*(long *)(unaff_x29 + -0x88) == 0) {
      in_stack_000001f8 = (undefined *)0x0;
    }
    else {
      lVar18 = 0;
      lVar16 = *(long *)(unaff_x29 + -0x90);
      lVar19 = *(long *)(unaff_x29 + -0x88) * 0x40;
      cVar13 = '\x04';
      in_stack_000001f8 = (undefined *)0x8000000000000000;
      do {
        bVar2 = *(byte *)(lVar16 + lVar18);
        if (bVar2 < 0xd) {
          if (bVar2 == 1) {
            cVar3 = *(char *)(lVar16 + lVar18 + 1);
            if (cVar3 == '\x01') {
LAB_10087487c:
              if (cVar13 == '\x04') {
                FUN_1013812f0(&stack0x000001f0);
                cVar13 = cStack00000000000001f1;
                if (cStack00000000000001f0 != '\x01') goto LAB_100874744;
                goto LAB_100874944;
              }
              goto LAB_100875a64;
            }
            if (cVar3 == '\x02') goto LAB_1008748ac;
            if (cVar3 != '\0') goto LAB_100874744;
LAB_100874980:
            puVar6 = (undefined *)FUN_10137f16c(lVar16 + lVar18 + 0x20);
            if (puVar6 != (undefined *)0x0) goto LAB_100874944;
            goto joined_r0x000100874998;
          }
          if (bVar2 != 4) {
            if (bVar2 == 0xc) {
              psVar9 = *(short **)(lVar16 + lVar18 + 0x10);
              lVar8 = *(long *)(lVar16 + lVar18 + 0x18);
              goto LAB_100874834;
            }
LAB_100875a4c:
            lVar16 = lVar16 + lVar18;
            goto LAB_100875a50;
          }
          lVar8 = *(long *)(lVar16 + lVar18 + 8);
          if (lVar8 == 1) goto LAB_10087487c;
          if (lVar8 != 2) {
            if (lVar8 == 0) goto LAB_100874980;
            goto LAB_100874744;
          }
LAB_1008748ac:
          if (in_stack_000001f8 != (undefined *)0x8000000000000000) goto LAB_100875990;
          FUN_1004e07f8(&stack0x000001f0,(byte *)(lVar16 + lVar18) + 0x20);
          puVar12 = puVar17;
          in_stack_000001f8 = puVar4;
          _iStack00000000000000d0 = in_stack_00000200;
          if (puVar4 == (undefined *)0x8000000000000000) goto LAB_100874cb8;
        }
        else if (bVar2 == 0xd) {
          psVar9 = *(short **)(lVar16 + lVar18 + 8);
          lVar8 = *(long *)(lVar16 + lVar18 + 0x10);
LAB_100874834:
          if (lVar8 == 1) {
LAB_1008748a0:
            if ((char)*psVar9 == 'x') goto LAB_1008748ac;
          }
          else if (lVar8 == 3) {
            if (*psVar9 == 0x746b && (char)psVar9[1] == 'y') goto LAB_100874980;
            if (*psVar9 == 0x7263 && (char)psVar9[1] == 'v') goto LAB_10087487c;
          }
        }
        else {
          if (bVar2 == 0xe) {
            psVar9 = *(short **)(lVar16 + lVar18 + 0x10);
            lVar8 = *(long *)(lVar16 + lVar18 + 0x18);
          }
          else {
            if (bVar2 != 0xf) goto LAB_100875a4c;
            psVar9 = *(short **)(lVar16 + lVar18 + 8);
            lVar8 = *(long *)(lVar16 + lVar18 + 0x10);
          }
          if (lVar8 == 1) goto LAB_1008748a0;
          if (lVar8 == 3) {
            if ((char)*psVar9 == 'c') {
              if ((*(char *)((long)psVar9 + 1) == 'r') && ((char)psVar9[1] == 'v'))
              goto LAB_10087487c;
            }
            else if (((char)*psVar9 == 'k') &&
                    ((*(char *)((long)psVar9 + 1) == 't' && ((char)psVar9[1] == 'y'))))
            goto LAB_100874980;
          }
        }
LAB_100874744:
        lVar18 = lVar18 + 0x40;
      } while (lVar19 - lVar18 != 0);
    }
    *(undefined **)(unaff_x29 + -0x80) = &UNK_108cacb2d;
    *(undefined8 *)(unaff_x29 + -0x78) = 3;
    puVar6 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&stack0x000001f0);
LAB_100874944:
    puVar4 = (undefined *)((ulong)in_stack_000001f8 & 0x7fffffffffffffff);
joined_r0x0001008759c0:
    if (puVar4 != (undefined *)0x0) {
      _free(puVar12);
    }
  }
  else {
    puVar6 = (undefined *)FUN_108855c40(unaff_x29 + -0xa0,unaff_x29 + -0x61,&UNK_10b214228);
  }
LAB_100874cb8:
  *(undefined8 *)(unaff_x29 + -0xe0) = 0x8000000000000003;
  *(undefined **)(unaff_x29 + -0xd8) = puVar6;
  FUN_100cd2a88(unaff_x29 + -0xe0);
  uVar5 = FUN_1088561c0(&UNK_108cacb38,0x43);
  FUN_100e077ec(unaff_x29 + -0xa0);
  *unaff_x19 = 0x8000000000000001;
  unaff_x19[1] = uVar5;
  FUN_100e00ae8(&stack0x00000100);
LAB_100874cf4:
  FUN_100d5c778(&stack0x000000e8);
  return;
}

