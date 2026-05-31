
/* WARNING: Removing unreachable block (ram,0x0001013dfbfc) */
/* WARNING: Removing unreachable block (ram,0x0001013e026c) */
/* WARNING: Removing unreachable block (ram,0x0001013dfe50) */
/* WARNING: Removing unreachable block (ram,0x0001013dfbd4) */

void FUN_1013dfce4(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  int *piVar2;
  ulong uVar3;
  byte *pbVar4;
  int *piVar5;
  char *pcVar6;
  char cVar7;
  byte bVar8;
  code *pcVar9;
  bool bVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  uint uVar14;
  ulong *puVar15;
  long lVar16;
  long lVar17;
  byte unaff_w19;
  ulong uVar18;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  char *unaff_x22;
  char *pcVar19;
  undefined8 *puVar20;
  ulong unaff_x23;
  bool bVar21;
  ulong uVar22;
  ulong unaff_x26;
  byte *pbVar23;
  byte *pbVar24;
  long lVar25;
  char *pcVar26;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar27;
  long *in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  char *in_stack_00000028;
  char *in_stack_00000030;
  ulong in_stack_00000038;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  undefined8 *in_stack_00000050;
  char *in_stack_00000058;
  char *in_stack_00000060;
  undefined8 *in_stack_00000078;
  char *in_stack_00000088;
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
  char *in_stack_000000f8;
  ulong in_stack_00000100;
  ulong in_stack_00000108;
  char *in_stack_00000110;
  ulong in_stack_00000118;
  ulong in_stack_00000120;
  char *in_stack_00000128;
  ulong in_stack_00000130;
  ulong in_stack_00000138;
  char *in_stack_00000140;
  ulong in_stack_00000148;
  
code_r0x0001013dfce4:
  pcVar12 = (char *)FUN_108856088(s_missing_field_____108ac28f7,param_2);
  bVar10 = true;
  bVar21 = true;
  in_stack_00000110 = pcVar12;
  in_stack_00000108 = unaff_x21;
joined_r0x0001013dfd08:
  if (unaff_x26 != 0x8000000000000000) goto joined_r0x0001013e01b4;
LAB_1013dfee4:
  do {
    if ((((unaff_x23 != 0x8000000000000003) && (bVar10)) && (-0x7ffffffffffffffe < (long)unaff_x23))
       && (unaff_x23 != 0)) {
      _free(in_stack_00000028);
    }
    bVar10 = false;
    if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
      bVar10 = bVar21;
    }
    if (bVar10) {
      _free(in_stack_00000058);
    }
    FUN_100d34830(unaff_x29 + -0xc0);
    if (*(char *)(unaff_x29 + -0xe0) != '\x16') {
      FUN_100e077ec(unaff_x29 + -0xe0);
    }
    unaff_x21 = 0x8000000000000000;
    pcVar19 = unaff_x22;
    if ((unaff_w19 & 0x1e) != 0x14) {
      unaff_x21 = 0x8000000000000000;
      FUN_100e077ec(unaff_x29 + -0x100);
    }
LAB_1013dff54:
    lVar17 = in_stack_000000b8;
    unaff_x22 = pcVar19;
    if (unaff_x21 == 0x8000000000000000) {
LAB_1013e0468:
      lVar17 = in_stack_000000b0;
      *in_stack_00000008 = -0x8000000000000000;
      in_stack_00000008[1] = (long)pcVar12;
      if (in_stack_000000b8 != 0) {
        puVar20 = (undefined8 *)(in_stack_000000b0 + 0x20);
        lVar25 = in_stack_000000b8;
        do {
          if (puVar20[-4] != 0) {
            _free(puVar20[-3]);
          }
          lVar16 = puVar20[2];
          if ((lVar16 + 0x7fffffffffffffffU < 2 || lVar16 == -0x8000000000000000) || lVar16 == 0) {
            lVar16 = puVar20[-1];
          }
          else {
            _free(puVar20[3]);
            lVar16 = puVar20[-1];
          }
          if (lVar16 != 0) {
            _free(*puVar20);
          }
          puVar20 = puVar20 + 9;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
      }
      if (in_stack_000000a8 != 0) {
        _free(lVar17);
      }
LAB_1013e04f4:
      lVar17 = ((ulong)((long)in_stack_00000060 - (long)unaff_x22) >> 5) + 1;
      while (lVar17 = lVar17 + -1, lVar17 != 0) {
        FUN_100e077ec(unaff_x22);
        unaff_x22 = unaff_x22 + 0x20;
      }
joined_r0x0001013e039c:
      if (in_stack_00000010 != 0) {
        _free(in_stack_00000018);
      }
      return;
    }
    in_stack_000000d8 = in_stack_00000120;
    in_stack_000000d0 = in_stack_00000118;
    in_stack_000000e8 = in_stack_00000130;
    in_stack_000000e0 = in_stack_00000128;
    in_stack_000000f8 = in_stack_00000140;
    in_stack_000000f0 = in_stack_00000138;
    in_stack_00000100 = in_stack_00000148;
    in_stack_000000c0 = unaff_x21;
    in_stack_000000c8 = pcVar12;
    if (in_stack_000000b8 == in_stack_000000a8) {
      func_0x0001088db430(&stack0x000000a8);
    }
    puVar15 = (ulong *)(in_stack_000000b0 + lVar17 * 0x48);
    puVar15[1] = (ulong)in_stack_000000c8;
    *puVar15 = in_stack_000000c0;
    puVar15[3] = in_stack_000000d8;
    puVar15[2] = in_stack_000000d0;
    puVar15[5] = in_stack_000000e8;
    puVar15[4] = (ulong)in_stack_000000e0;
    puVar15[7] = (ulong)in_stack_000000f8;
    puVar15[6] = in_stack_000000f0;
    puVar15[8] = in_stack_00000100;
    in_stack_000000b8 = lVar17 + 1;
    unaff_x22 = in_stack_00000060;
    if (pcVar19 == in_stack_00000060) {
LAB_1013e02e8:
      in_stack_00000008[1] = in_stack_000000b0;
      *in_stack_00000008 = in_stack_000000a8;
      in_stack_00000008[2] = in_stack_000000b8;
      lVar17 = *in_stack_00000008;
      if (lVar17 == -0x8000000000000000) goto LAB_1013e04f4;
      in_stack_00000018 = in_stack_00000008[1];
      lVar25 = in_stack_00000008[2];
      lVar16 = FUN_100fbc738(&stack0x00000080);
      if (lVar16 == 0) {
        return;
      }
      *in_stack_00000008 = -0x8000000000000000;
      in_stack_00000008[1] = lVar16;
      in_stack_00000010 = lVar17;
      if (lVar25 != 0) {
        puVar20 = (undefined8 *)(in_stack_00000018 + 0x20);
        do {
          if (puVar20[-4] != 0) {
            _free(puVar20[-3]);
          }
          lVar17 = puVar20[2];
          if ((lVar17 + 0x7fffffffffffffffU < 2 || lVar17 == -0x8000000000000000) || lVar17 == 0) {
            lVar17 = puVar20[-1];
          }
          else {
            _free(puVar20[3]);
            lVar17 = puVar20[-1];
          }
          if (lVar17 != 0) {
            _free(*puVar20);
          }
          puVar20 = puVar20 + 9;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
      }
      goto joined_r0x0001013e039c;
    }
    unaff_x22 = pcVar19 + 0x20;
    cVar7 = *pcVar19;
    in_stack_00000088 = unaff_x22;
    if (cVar7 == '\x16') goto LAB_1013e02e8;
    uVar27 = *(undefined8 *)(pcVar19 + 1);
    in_stack_00000050[1] = *(undefined8 *)(pcVar19 + 9);
    *in_stack_00000050 = uVar27;
    uVar27 = *(undefined8 *)(pcVar19 + 0x10);
    *(undefined8 *)((long)in_stack_00000050 + 0x17) = *(undefined8 *)(pcVar19 + 0x18);
    *(undefined8 *)((long)in_stack_00000050 + 0xf) = uVar27;
    unaff_x28 = unaff_x28 + 1;
    *(char *)(unaff_x29 + -0x100) = cVar7;
    pcVar19 = unaff_x22;
    in_stack_000000a0 = unaff_x28;
    if (cVar7 == '\x14') {
      lVar17 = *(long *)(unaff_x29 + -0xf8);
      pcVar6 = *(char **)(unaff_x29 + -0xf0);
      lVar25 = *(long *)(unaff_x29 + -0xe8);
      *(char **)(unaff_x29 + -0xe0) = pcVar6;
      *(char **)(unaff_x29 + -0xd8) = pcVar6;
      *(long *)(unaff_x29 + -0xd0) = lVar17;
      *(char **)(unaff_x29 + -200) = pcVar6 + lVar25 * 0x20;
      *(undefined8 *)(unaff_x29 + -0xc0) = 0;
      pcVar26 = pcVar6;
      if (lVar25 == 0) {
LAB_1013dfb60:
        pcVar12 = (char *)FUN_1087e422c(0,&UNK_10b230838,&UNK_10b20a590);
LAB_1013dfb7c:
        in_stack_00000108 = 0x8000000000000000;
        pcVar13 = pcVar12;
        in_stack_00000110 = pcVar12;
LAB_1013dfb88:
        lVar25 = ((ulong)((long)(pcVar6 + lVar25 * 0x20) - (long)pcVar26) >> 5) + 1;
        while (lVar25 = lVar25 + -1, lVar25 != 0) {
          FUN_100e077ec(pcVar26);
          pcVar26 = pcVar26 + 0x20;
        }
        pcVar11 = pcVar6;
        if (lVar17 != 0) goto LAB_1013dfbb4;
        unaff_x21 = 0x8000000000000000;
        pcVar12 = pcVar13;
      }
      else {
        pcVar26 = pcVar6 + 0x20;
        cVar7 = *pcVar6;
        *(char **)(unaff_x29 + -0xd8) = pcVar26;
        if (cVar7 == '\x16') goto LAB_1013dfb60;
        uVar27 = *(undefined8 *)(pcVar6 + 1);
        unaff_x20[1] = *(undefined8 *)(pcVar6 + 9);
        *unaff_x20 = uVar27;
        uVar27 = *(undefined8 *)(pcVar6 + 0x10);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)(pcVar6 + 0x18);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar27;
        *(undefined8 *)(unaff_x29 + -0xc0) = 1;
        *(char *)(unaff_x29 + -0x78) = cVar7;
        FUN_1004b62d4(unaff_x29 + -0x90,unaff_x29 + -0x78);
        unaff_x21 = *(ulong *)(unaff_x29 + -0x90);
        pcVar12 = *(char **)(unaff_x29 + -0x88);
        if (unaff_x21 == 0x8000000000000000) goto LAB_1013dfb7c;
        if (lVar25 == 1) {
LAB_1013dfc58:
          pcVar11 = (char *)FUN_1087e422c(1,&UNK_10b230838,&UNK_10b20a590);
LAB_1013dfc74:
          in_stack_00000108 = 0x8000000000000000;
          in_stack_00000110 = pcVar11;
LAB_1013dfc7c:
          pcVar13 = pcVar11;
          if (unaff_x21 != 0) {
            _free(pcVar12);
          }
          goto LAB_1013dfb88;
        }
        uVar22 = *(ulong *)(unaff_x29 + -0x80);
        pcVar26 = pcVar6 + 0x40;
        *(char **)(unaff_x29 + -0xd8) = pcVar26;
        cVar7 = pcVar6[0x20];
        if (cVar7 == '\x16') goto LAB_1013dfc58;
        uVar27 = *(undefined8 *)(pcVar6 + 0x21);
        unaff_x20[1] = *(undefined8 *)(pcVar6 + 0x29);
        *unaff_x20 = uVar27;
        uVar27 = *(undefined8 *)(pcVar6 + 0x30);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)(pcVar6 + 0x38);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar27;
        *(undefined8 *)(unaff_x29 + -0xc0) = 2;
        *(char *)(unaff_x29 + -0x78) = cVar7;
        FUN_1013e2504(unaff_x29 + -0x90,unaff_x29 + -0x78);
        in_stack_00000048 = *(ulong *)(unaff_x29 + -0x90);
        in_stack_00000058 = *(char **)(unaff_x29 + -0x88);
        pcVar11 = in_stack_00000058;
        if (in_stack_00000048 == 0x8000000000000003) goto LAB_1013dfc74;
        if (lVar25 == 2) {
LAB_1013e0008:
          pcVar11 = (char *)FUN_1087e422c(2,&UNK_10b230838,&UNK_10b20a590);
LAB_1013e0024:
          in_stack_00000108 = 0x8000000000000000;
          in_stack_00000110 = pcVar11;
          if ((-0x7ffffffffffffffe < (long)in_stack_00000048) && (in_stack_00000048 != 0)) {
            _free(in_stack_00000058);
          }
          goto LAB_1013dfc7c;
        }
        uVar18 = *(ulong *)(unaff_x29 + -0x80);
        pcVar26 = pcVar6 + 0x60;
        *(char **)(unaff_x29 + -0xd8) = pcVar26;
        cVar7 = pcVar6[0x40];
        if (cVar7 == '\x16') goto LAB_1013e0008;
        uVar27 = *(undefined8 *)(pcVar6 + 0x41);
        unaff_x20[1] = *(undefined8 *)(pcVar6 + 0x49);
        *unaff_x20 = uVar27;
        uVar27 = *(undefined8 *)(pcVar6 + 0x50);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)(pcVar6 + 0x58);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar27;
        *(undefined8 *)(unaff_x29 + -0xc0) = 3;
        *(char *)(unaff_x29 + -0x78) = cVar7;
        FUN_1004b62d4(unaff_x29 + -0x90,unaff_x29 + -0x78);
        uVar3 = *(ulong *)(unaff_x29 + -0x90);
        pcVar11 = *(char **)(unaff_x29 + -0x88);
        in_stack_00000040 = uVar22;
        if (uVar3 == 0x8000000000000000) goto LAB_1013e0024;
        in_stack_00000130 = *(ulong *)(unaff_x29 + -0x80);
        in_stack_00000108 = unaff_x21;
        in_stack_00000110 = pcVar12;
        in_stack_00000118 = uVar22;
        in_stack_00000120 = uVar3;
        in_stack_00000128 = pcVar11;
        in_stack_00000138 = in_stack_00000048;
        in_stack_00000140 = in_stack_00000058;
        in_stack_00000148 = uVar18;
        pcVar13 = (char *)FUN_100fbc738(unaff_x29 + -0xe0);
        if (pcVar13 != (char *)0x0) {
          in_stack_00000108 = 0x8000000000000000;
          in_stack_00000110 = pcVar13;
          if (unaff_x21 != 0) {
            _free(pcVar12);
          }
          if ((-0x7ffffffffffffffe < (long)in_stack_00000048) && (in_stack_00000048 != 0)) {
            _free(in_stack_00000058);
          }
          if (uVar3 == 0) {
            unaff_x21 = 0x8000000000000000;
            pcVar12 = pcVar13;
          }
          else {
LAB_1013dfbb4:
            _free(pcVar11);
            unaff_x21 = 0x8000000000000000;
            pcVar12 = pcVar13;
          }
        }
      }
      goto LAB_1013dff54;
    }
    if (cVar7 != '\x15') {
      pcVar12 = (char *)FUN_108855b04(unaff_x29 + -0x100,unaff_x29 + -0x90,&UNK_10b20cbc0);
      goto LAB_1013e0468;
    }
    pbVar4 = *(byte **)(unaff_x29 + -0xf0);
    lVar17 = *(long *)(unaff_x29 + -0xe8) * 0x40;
    pbVar1 = pbVar4 + lVar17;
    *(byte **)(unaff_x29 + -0xc0) = pbVar4;
    *(byte **)(unaff_x29 + -0xb8) = pbVar4;
    *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0xf8);
    *(byte **)(unaff_x29 + -0xa8) = pbVar1;
    *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
    *(undefined8 *)(unaff_x29 + -0xa0) = 0;
    if (*(long *)(unaff_x29 + -0xe8) == 0) {
      unaff_x26 = 0x8000000000000000;
      unaff_x23 = 0x8000000000000003;
      goto LAB_1013dfcb8;
    }
    lVar25 = 0;
    unaff_x23 = 0x8000000000000003;
    unaff_x21 = 0x8000000000000000;
    unaff_x26 = 0x8000000000000000;
LAB_1013df6d8:
    pbVar23 = pbVar4 + 0x40;
    bVar8 = *pbVar4;
    unaff_w19 = 0x15;
    pbVar24 = pbVar23;
    lVar16 = lVar25;
    if (bVar8 == 0x16) break;
    *(byte *)(unaff_x29 + -0x78) = bVar8;
    uVar27 = *(undefined8 *)(pbVar4 + 0x10);
    *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)(pbVar4 + 0x18);
    *(undefined8 *)((long)unaff_x20 + 0xf) = uVar27;
    uVar27 = *(undefined8 *)(pbVar4 + 1);
    unaff_x20[1] = *(undefined8 *)(pbVar4 + 9);
    *unaff_x20 = uVar27;
    uVar27 = *(undefined8 *)(pbVar4 + 0x20);
    *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(pbVar4 + 0x28);
    *(undefined8 *)(unaff_x29 + -0xe0) = uVar27;
    uVar27 = *(undefined8 *)(pbVar4 + 0x30);
    *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(pbVar4 + 0x38);
    *(undefined8 *)(unaff_x29 + -0xd0) = uVar27;
    piVar2 = *(int **)(unaff_x29 + -0x70);
    piVar5 = *(int **)(unaff_x29 + -0x68);
    if (bVar8 < 0xd) {
      if (bVar8 == 1) {
        uVar14 = (uint)*(byte *)(unaff_x29 + -0x77);
        if (2 < uVar14) {
          uVar14 = 3;
        }
LAB_1013df98c:
        FUN_100e077ec(unaff_x29 + -0x78);
        goto LAB_1013df994;
      }
      if (bVar8 == 4) {
        if ((int *)0x2 < piVar2) {
          piVar2 = (int *)0x3;
        }
        uVar14 = (uint)piVar2;
        goto LAB_1013df98c;
      }
      if (bVar8 == 0xc) {
        if (*(long *)(unaff_x29 + -0x60) == 4) {
          if (*piVar5 == 0x68746170) {
            uVar14 = 0;
          }
          else if (*piVar5 == 0x646e696b) {
            uVar14 = 1;
          }
          else {
            uVar14 = 2;
            if (*piVar5 != 0x66666964) {
              uVar14 = 3;
            }
          }
        }
        else {
          uVar14 = 3;
        }
        goto joined_r0x0001013df8c0;
      }
LAB_1013e0208:
      *(byte **)(unaff_x29 + -0xb8) = pbVar23;
      *(long *)(unaff_x29 + -0xa0) = lVar25 + 1;
      pcVar12 = (char *)FUN_108855b04(unaff_x29 + -0x78,unaff_x29 + -0x90,&UNK_10b20ea60);
      goto LAB_1013e0230;
    }
    if (bVar8 == 0xd) {
      if (piVar5 == (int *)0x4) {
        if (*piVar2 == 0x68746170) {
LAB_1013df8b4:
          uVar14 = 0;
        }
        else if (*piVar2 == 0x646e696b) {
LAB_1013df918:
          uVar14 = 1;
        }
        else {
          uVar14 = 2;
          if (*piVar2 != 0x66666964) {
            uVar14 = 3;
          }
        }
        goto LAB_1013df98c;
      }
LAB_1013df988:
      uVar14 = 3;
      goto LAB_1013df98c;
    }
    if (bVar8 != 0xe) {
      if (bVar8 != 0xf) goto LAB_1013e0208;
      if (piVar5 == (int *)0x4) {
        cVar7 = (char)*piVar2;
        if (cVar7 == 'd') {
          if (((*(char *)((long)piVar2 + 1) == 'i') && (*(char *)((long)piVar2 + 2) == 'f')) &&
             (*(char *)((long)piVar2 + 3) == 'f')) {
            uVar14 = 2;
            goto LAB_1013df98c;
          }
        }
        else if (cVar7 == 'k') {
          if (((*(char *)((long)piVar2 + 1) == 'i') && (*(char *)((long)piVar2 + 2) == 'n')) &&
             (*(char *)((long)piVar2 + 3) == 'd')) goto LAB_1013df918;
        }
        else if (((cVar7 == 'p') && (*(char *)((long)piVar2 + 1) == 'a')) &&
                ((*(char *)((long)piVar2 + 2) == 't' && (*(char *)((long)piVar2 + 3) == 'h'))))
        goto LAB_1013df8b4;
      }
      goto LAB_1013df988;
    }
    if (*(long *)(unaff_x29 + -0x60) == 4) {
      cVar7 = (char)*piVar5;
      if (cVar7 == 'd') {
        if (((*(char *)((long)piVar5 + 1) == 'i') && (*(char *)((long)piVar5 + 2) == 'f')) &&
           (*(char *)((long)piVar5 + 3) == 'f')) {
          uVar14 = 2;
          goto joined_r0x0001013df8c0;
        }
        goto LAB_1013df94c;
      }
      if (cVar7 == 'k') {
        if (((*(char *)((long)piVar5 + 1) != 'i') || (*(char *)((long)piVar5 + 2) != 'n')) ||
           (*(char *)((long)piVar5 + 3) != 'd')) goto LAB_1013df94c;
        uVar14 = 1;
      }
      else {
        if (((cVar7 != 'p') || (*(char *)((long)piVar5 + 1) != 'a')) ||
           ((*(char *)((long)piVar5 + 2) != 't' || (*(char *)((long)piVar5 + 3) != 'h'))))
        goto LAB_1013df94c;
        uVar14 = 0;
      }
    }
    else {
LAB_1013df94c:
      uVar14 = 3;
    }
joined_r0x0001013df8c0:
    if (piVar2 != (int *)0x0) {
      _free();
    }
LAB_1013df994:
    uVar14 = uVar14 & 0xff;
    if (uVar14 < 2) {
      if (uVar14 == 0) {
        if (unaff_x21 != 0x8000000000000000) {
          *(byte **)(unaff_x29 + -0xb8) = pbVar23;
          *(long *)(unaff_x29 + -0xa0) = lVar25 + 1;
          *(undefined **)(unaff_x29 + -0x90) = &UNK_108c61038;
          *(undefined8 *)(unaff_x29 + -0x88) = 4;
          *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
          *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
          pcVar12 = (char *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x78);
LAB_1013e0230:
          in_stack_00000108 = 0x8000000000000000;
          bVar10 = true;
          bVar21 = true;
          in_stack_00000110 = pcVar12;
          goto joined_r0x0001013dfd08;
        }
        cVar7 = *(char *)(unaff_x29 + -0xe0);
        *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
        if (cVar7 == '\x16') {
          *(byte **)(unaff_x29 + -0xb8) = pbVar23;
          *(long *)(unaff_x29 + -0xa0) = lVar25 + 1;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_1013e0580;
        }
        uVar27 = *in_stack_00000078;
        unaff_x20[1] = in_stack_00000078[1];
        *unaff_x20 = uVar27;
        uVar27 = *(undefined8 *)((long)in_stack_00000078 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)in_stack_00000078 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar27;
        *(char *)(unaff_x29 + -0x78) = cVar7;
        FUN_1004b62d4(unaff_x29 + -0x90,unaff_x29 + -0x78);
        unaff_x21 = *(ulong *)(unaff_x29 + -0x90);
        if (unaff_x21 == 0x8000000000000000) {
          *(byte **)(unaff_x29 + -0xb8) = pbVar23;
          *(long *)(unaff_x29 + -0xa0) = lVar25 + 1;
          pcVar12 = *(char **)(unaff_x29 + -0x88);
          unaff_x21 = 0;
LAB_1013dfec0:
          in_stack_00000108 = 0x8000000000000000;
          bVar10 = true;
          bVar21 = true;
          in_stack_00000110 = pcVar12;
          goto joined_r0x0001013dfd08;
        }
        in_stack_00000058 = *(char **)(unaff_x29 + -0x88);
        in_stack_00000040 = *(ulong *)(unaff_x29 + -0x80);
      }
      else {
        if (unaff_x23 != 0x8000000000000003) {
          *(byte **)(unaff_x29 + -0xb8) = pbVar23;
          *(long *)(unaff_x29 + -0xa0) = lVar25 + 1;
          *(undefined **)(unaff_x29 + -0x90) = &UNK_108c51874;
          *(undefined8 *)(unaff_x29 + -0x88) = 4;
          *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
          *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
          pcVar12 = (char *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x78);
          goto LAB_1013e0230;
        }
        cVar7 = *(char *)(unaff_x29 + -0xe0);
        *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
        if (cVar7 == '\x16') {
          *(byte **)(unaff_x29 + -0xb8) = pbVar23;
          *(long *)(unaff_x29 + -0xa0) = lVar25 + 1;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_1013e0580;
        }
        uVar27 = *in_stack_00000078;
        unaff_x20[1] = in_stack_00000078[1];
        *unaff_x20 = uVar27;
        uVar27 = *(undefined8 *)((long)in_stack_00000078 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)in_stack_00000078 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar27;
        *(char *)(unaff_x29 + -0x78) = cVar7;
        FUN_1013e2504(unaff_x29 + -0x90,unaff_x29 + -0x78);
        unaff_x23 = *(ulong *)(unaff_x29 + -0x90);
        if (unaff_x23 == 0x8000000000000003) {
          *(byte **)(unaff_x29 + -0xb8) = pbVar23;
          *(long *)(unaff_x29 + -0xa0) = lVar25 + 1;
          pcVar12 = *(char **)(unaff_x29 + -0x88);
          unaff_x23 = 0x8000000000000003;
          goto LAB_1013dfec0;
        }
        in_stack_00000028 = *(char **)(unaff_x29 + -0x88);
        in_stack_00000048 = *(ulong *)(unaff_x29 + -0x80);
      }
      goto LAB_1013df6c4;
    }
    if (uVar14 != 2) {
      cVar7 = *(char *)(unaff_x29 + -0xe0);
      *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
      if (cVar7 == '\x16') {
        *(byte **)(unaff_x29 + -0xb8) = pbVar23;
        *(long *)(unaff_x29 + -0xa0) = lVar25 + 1;
        func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
        goto LAB_1013e0580;
      }
      uVar27 = *in_stack_00000078;
      unaff_x20[1] = in_stack_00000078[1];
      *unaff_x20 = uVar27;
      uVar27 = *(undefined8 *)((long)in_stack_00000078 + 0xf);
      *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)in_stack_00000078 + 0x17);
      *(undefined8 *)((long)unaff_x20 + 0xf) = uVar27;
      *(char *)(unaff_x29 + -0x78) = cVar7;
      FUN_100e077ec(unaff_x29 + -0x78);
      goto LAB_1013df6c4;
    }
    if (unaff_x26 == 0x8000000000000000) {
      cVar7 = *(char *)(unaff_x29 + -0xe0);
      *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
      if (cVar7 == '\x16') {
        *(byte **)(unaff_x29 + -0xb8) = pbVar23;
        *(long *)(unaff_x29 + -0xa0) = lVar25 + 1;
        func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1013e0580:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1013e0584);
        (*pcVar9)();
      }
      uVar27 = *in_stack_00000078;
      unaff_x20[1] = in_stack_00000078[1];
      *unaff_x20 = uVar27;
      uVar27 = *(undefined8 *)((long)in_stack_00000078 + 0xf);
      *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)in_stack_00000078 + 0x17);
      *(undefined8 *)((long)unaff_x20 + 0xf) = uVar27;
      *(char *)(unaff_x29 + -0x78) = cVar7;
      FUN_1004b62d4(unaff_x29 + -0x90,unaff_x29 + -0x78);
      unaff_x26 = *(ulong *)(unaff_x29 + -0x90);
      if (unaff_x26 == 0x8000000000000000) {
        *(byte **)(unaff_x29 + -0xb8) = pbVar23;
        *(long *)(unaff_x29 + -0xa0) = lVar25 + 1;
        pcVar12 = *(char **)(unaff_x29 + -0x88);
        in_stack_00000108 = 0x8000000000000000;
        bVar21 = true;
        bVar10 = true;
        in_stack_00000110 = pcVar12;
        goto LAB_1013dfee4;
      }
      in_stack_00000030 = *(char **)(unaff_x29 + -0x88);
      in_stack_00000038 = *(ulong *)(unaff_x29 + -0x80);
LAB_1013df6c4:
      lVar25 = lVar25 + 1;
      pbVar24 = pbVar1;
      lVar16 = (lVar17 - 0x40U >> 6) + 1;
      pbVar4 = pbVar23;
      if (pbVar23 == pbVar1) break;
      goto LAB_1013df6d8;
    }
    *(byte **)(unaff_x29 + -0xb8) = pbVar23;
    *(long *)(unaff_x29 + -0xa0) = lVar25 + 1;
    *(undefined **)(unaff_x29 + -0x90) = &UNK_108cde330;
    *(undefined8 *)(unaff_x29 + -0x88) = 4;
    *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
    *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
    pcVar12 = (char *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x78);
    in_stack_00000108 = 0x8000000000000000;
    bVar21 = true;
    bVar10 = true;
    in_stack_00000110 = pcVar12;
joined_r0x0001013e01b4:
    if (unaff_x26 != 0) {
      _free(in_stack_00000030);
    }
  } while( true );
  *(byte **)(unaff_x29 + -0xb8) = pbVar24;
  *(long *)(unaff_x29 + -0xa0) = lVar16;
  if (unaff_x21 == 0x8000000000000000) {
LAB_1013dfcb8:
    *(undefined **)(unaff_x29 + -0x90) = &UNK_108c61038;
    *(undefined8 *)(unaff_x29 + -0x88) = 4;
    unaff_x21 = 0x8000000000000000;
    *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
    *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
    param_2 = unaff_x29 + -0x78;
    unaff_w19 = 0x15;
    goto code_r0x0001013dfce4;
  }
  bVar10 = unaff_x23 == 0x8000000000000003;
  if (bVar10) {
    *(undefined **)(unaff_x29 + -0x90) = &UNK_108c51874;
    *(undefined8 *)(unaff_x29 + -0x88) = 4;
    *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
    *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
    pcVar12 = (char *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x78);
    in_stack_00000108 = 0x8000000000000000;
    in_stack_00000110 = pcVar12;
  }
  else {
    if (unaff_x26 != 0x8000000000000000) {
      in_stack_00000140 = in_stack_00000028;
      in_stack_00000148 = in_stack_00000048;
      in_stack_00000110 = in_stack_00000058;
      in_stack_00000118 = in_stack_00000040;
      in_stack_00000128 = in_stack_00000030;
      in_stack_00000130 = in_stack_00000038;
      in_stack_00000108 = unaff_x21;
      in_stack_00000120 = unaff_x26;
      in_stack_00000138 = unaff_x23;
      FUN_100d34830(unaff_x29 + -0xc0);
      pcVar12 = in_stack_00000058;
      if (pbVar1 != pbVar24) {
        *(long *)(unaff_x29 + -0x78) = lVar16;
        pcVar12 = (char *)FUN_1087e422c(((ulong)((long)pbVar1 - (long)pbVar24) >> 6) + lVar16,
                                        unaff_x29 + -0x78,&UNK_10b23a190);
        in_stack_00000108 = 0x8000000000000000;
        in_stack_00000110 = pcVar12;
        if (unaff_x21 != 0) {
          _free(in_stack_00000058);
        }
        if ((-0x7ffffffffffffffe < (long)unaff_x23) && (unaff_x23 != 0)) {
          _free(in_stack_00000028);
        }
        if (unaff_x26 != 0) {
          _free(in_stack_00000030);
        }
        unaff_x21 = 0x8000000000000000;
      }
      goto LAB_1013dff54;
    }
    *(undefined **)(unaff_x29 + -0x90) = &UNK_108cde330;
    *(undefined8 *)(unaff_x29 + -0x88) = 4;
    *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
    *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
    pcVar12 = (char *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x78);
    in_stack_00000108 = 0x8000000000000000;
    in_stack_00000110 = pcVar12;
    if ((-0x7ffffffffffffffe < (long)unaff_x23) && (unaff_x23 != 0)) {
      _free(in_stack_00000028);
    }
  }
  if (unaff_x21 != 0) {
    _free(in_stack_00000058);
  }
  bVar21 = false;
  goto joined_r0x0001013dfd08;
}

