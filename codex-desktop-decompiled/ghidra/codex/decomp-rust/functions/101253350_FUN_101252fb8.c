
/* WARNING: Type propagation algorithm not settling */

void FUN_101252fb8(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  byte *pbVar5;
  int *piVar6;
  char *pcVar7;
  byte bVar8;
  char cVar9;
  code *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  uint uVar14;
  ulong *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *unaff_x19;
  byte *unaff_x21;
  byte *pbVar19;
  ulong unaff_x22;
  undefined8 *puVar20;
  bool bVar21;
  ulong unaff_x24;
  long lVar22;
  ulong unaff_x25;
  byte *pbVar23;
  char *pcVar24;
  byte *pbVar25;
  long unaff_x26;
  ulong unaff_x27;
  ulong uVar26;
  long unaff_x29;
  undefined8 uVar27;
  long in_stack_00000008;
  long *in_stack_00000010;
  long in_stack_00000018;
  char *in_stack_00000028;
  char *in_stack_00000030;
  ulong in_stack_00000038;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  undefined8 *in_stack_00000050;
  char *in_stack_00000058;
  byte *in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 *in_stack_00000078;
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
  
code_r0x000101252fb8:
  pcVar12 = (char *)FUN_108856088(s_missing_field_____108ac28f7,param_2);
  in_stack_00000108 = unaff_x22;
LAB_101252fcc:
  bVar21 = true;
  in_stack_00000110 = pcVar12;
LAB_101252fd0:
  if (unaff_x27 == 0x8000000000000001) goto LAB_1012530c4;
joined_r0x000101252fe0:
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
LAB_1012530c4:
  if ((unaff_x24 & 0x7fffffffffffffff) == 0) {
    bVar2 = false;
    if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
      bVar2 = bVar21;
    }
  }
  else {
    _free(in_stack_00000030);
    bVar2 = false;
    if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
      bVar2 = bVar21;
    }
  }
  if (bVar2) {
    _free(in_stack_00000058);
  }
  FUN_100d34830(unaff_x29 + -0xc0);
  if (*(char *)(unaff_x29 + -0xe0) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0xe0);
  }
  do {
    unaff_x22 = 0x8000000000000000;
    pbVar19 = unaff_x21;
LAB_101253108:
    if ((in_stack_00000070._4_1_ & 0x1e) != 0x14) {
      FUN_100e077ec(unaff_x29 + -0x100);
    }
    lVar16 = in_stack_000000b8;
    unaff_x21 = pbVar19;
    if (unaff_x22 == unaff_x25) {
LAB_101253638:
      lVar16 = in_stack_000000b0;
      *in_stack_00000010 = -0x8000000000000000;
      in_stack_00000010[1] = (long)pcVar12;
      if (in_stack_000000b8 != 0) {
        puVar20 = (undefined8 *)(in_stack_000000b0 + 0x20);
        lVar22 = in_stack_000000b8;
        do {
          if (puVar20[-4] != 0) {
            _free(puVar20[-3]);
          }
          if (puVar20[-1] != 0) {
            _free(*puVar20);
          }
          if (puVar20[2] != -0x8000000000000000 && puVar20[2] != 0) {
            _free(puVar20[3]);
          }
          puVar20 = puVar20 + 9;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      if (in_stack_000000a8 != 0) {
        _free(lVar16);
      }
LAB_1012536ac:
      lVar16 = ((ulong)((long)in_stack_00000060 - (long)unaff_x21) >> 5) + 1;
      while (lVar16 = lVar16 + -1, lVar16 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 0x20;
      }
joined_r0x00010125356c:
      if (in_stack_00000008 != 0) {
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
    in_stack_000000c0 = unaff_x22;
    in_stack_000000c8 = pcVar12;
    if (in_stack_000000b8 == in_stack_000000a8) {
      func_0x0001088baf4c(&stack0x000000a8);
    }
    puVar15 = (ulong *)(in_stack_000000b0 + lVar16 * 0x48);
    puVar15[1] = (ulong)in_stack_000000c8;
    *puVar15 = in_stack_000000c0;
    puVar15[3] = in_stack_000000d8;
    puVar15[2] = in_stack_000000d0;
    puVar15[5] = in_stack_000000e8;
    puVar15[4] = (ulong)in_stack_000000e0;
    puVar15[7] = (ulong)in_stack_000000f8;
    puVar15[6] = in_stack_000000f0;
    puVar15[8] = in_stack_00000100;
    in_stack_000000b8 = lVar16 + 1;
    unaff_x21 = in_stack_00000060;
    if (pbVar19 == in_stack_00000060) {
LAB_1012534cc:
      in_stack_00000010[1] = in_stack_000000b0;
      *in_stack_00000010 = in_stack_000000a8;
      in_stack_00000010[2] = in_stack_000000b8;
      lVar16 = *in_stack_00000010;
      if (lVar16 == -0x8000000000000000) goto LAB_1012536ac;
      in_stack_00000018 = in_stack_00000010[1];
      lVar22 = in_stack_00000010[2];
      lVar17 = FUN_100fbc738(&stack0x00000080);
      if (lVar17 == 0) {
        return;
      }
      *in_stack_00000010 = -0x8000000000000000;
      in_stack_00000010[1] = lVar17;
      in_stack_00000008 = lVar16;
      if (lVar22 != 0) {
        puVar20 = (undefined8 *)(in_stack_00000018 + 0x20);
        do {
          if (puVar20[-4] != 0) {
            _free(puVar20[-3]);
          }
          if (puVar20[-1] != 0) {
            _free(*puVar20);
          }
          if (puVar20[2] != -0x8000000000000000 && puVar20[2] != 0) {
            _free(puVar20[3]);
          }
          puVar20 = puVar20 + 9;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      goto joined_r0x00010125356c;
    }
    unaff_x21 = pbVar19 + 0x20;
    in_stack_00000070._4_1_ = *pbVar19;
    in_stack_00000088 = unaff_x21;
    if (in_stack_00000070._4_1_ == 0x16) goto LAB_1012534cc;
    uVar27 = *(undefined8 *)(pbVar19 + 1);
    in_stack_00000050[1] = *(undefined8 *)(pbVar19 + 9);
    *in_stack_00000050 = uVar27;
    uVar27 = *(undefined8 *)(pbVar19 + 0x10);
    *(undefined8 *)((long)in_stack_00000050 + 0x17) = *(undefined8 *)(pbVar19 + 0x18);
    *(undefined8 *)((long)in_stack_00000050 + 0xf) = uVar27;
    unaff_x26 = unaff_x26 + 1;
    *(byte *)(unaff_x29 + -0x100) = in_stack_00000070._4_1_;
    pbVar19 = unaff_x21;
    in_stack_000000a0 = unaff_x26;
    if (in_stack_00000070._4_1_ == 0x14) {
      lVar16 = *(long *)(unaff_x29 + -0xf8);
      pcVar7 = *(char **)(unaff_x29 + -0xf0);
      lVar22 = *(long *)(unaff_x29 + -0xe8);
      *(char **)(unaff_x29 + -0xe0) = pcVar7;
      *(char **)(unaff_x29 + -0xd8) = pcVar7;
      *(long *)(unaff_x29 + -0xd0) = lVar16;
      *(char **)(unaff_x29 + -200) = pcVar7 + lVar22 * 0x20;
      *(undefined8 *)(unaff_x29 + -0xc0) = 0;
      pcVar24 = pcVar7;
      if (lVar22 == 0) {
LAB_101252e50:
        pcVar12 = (char *)FUN_1087e422c(0,&UNK_10b2317b8,&UNK_10b20a590);
LAB_101252e6c:
        in_stack_00000108 = 0x8000000000000000;
        pcVar13 = pcVar12;
        in_stack_00000110 = pcVar12;
LAB_101252e78:
        lVar22 = ((ulong)((long)(pcVar7 + lVar22 * 0x20) - (long)pcVar24) >> 5) + 1;
        while (lVar22 = lVar22 + -1, lVar22 != 0) {
          FUN_100e077ec(pcVar24);
          pcVar24 = pcVar24 + 0x20;
        }
        pcVar11 = pcVar7;
        if (lVar16 == 0) {
          unaff_x22 = 0x8000000000000000;
          goto LAB_101253094;
        }
        goto LAB_101252eac;
      }
      pcVar24 = pcVar7 + 0x20;
      cVar9 = *pcVar7;
      *(char **)(unaff_x29 + -0xd8) = pcVar24;
      if (cVar9 == '\x16') goto LAB_101252e50;
      uVar27 = *(undefined8 *)(pcVar7 + 1);
      unaff_x19[1] = *(undefined8 *)(pcVar7 + 9);
      *unaff_x19 = uVar27;
      uVar27 = *(undefined8 *)(pcVar7 + 0x10);
      *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)(pcVar7 + 0x18);
      *(undefined8 *)((long)unaff_x19 + 0xf) = uVar27;
      *(undefined8 *)(unaff_x29 + -0xc0) = 1;
      *(char *)(unaff_x29 + -0x78) = cVar9;
      FUN_1004b64d4(unaff_x29 + -0x90,unaff_x29 + -0x78);
      unaff_x22 = *(ulong *)(unaff_x29 + -0x90);
      pcVar12 = *(char **)(unaff_x29 + -0x88);
      if (unaff_x22 == 0x8000000000000000) goto LAB_101252e6c;
      if (lVar22 == 1) {
LAB_101252f2c:
        pcVar11 = (char *)FUN_1087e422c(1,&UNK_10b2317b8,&UNK_10b20a590);
LAB_101252f48:
        in_stack_00000108 = 0x8000000000000000;
        in_stack_00000110 = pcVar11;
LAB_101252f50:
        pcVar13 = pcVar11;
        if (unaff_x22 != 0) {
          _free(pcVar12);
        }
        goto LAB_101252e78;
      }
      uVar26 = *(ulong *)(unaff_x29 + -0x80);
      pcVar24 = pcVar7 + 0x40;
      *(char **)(unaff_x29 + -0xd8) = pcVar24;
      cVar9 = pcVar7[0x20];
      if (cVar9 == '\x16') goto LAB_101252f2c;
      uVar27 = *(undefined8 *)(pcVar7 + 0x21);
      unaff_x19[1] = *(undefined8 *)(pcVar7 + 0x29);
      *unaff_x19 = uVar27;
      uVar27 = *(undefined8 *)(pcVar7 + 0x30);
      *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)(pcVar7 + 0x38);
      *(undefined8 *)((long)unaff_x19 + 0xf) = uVar27;
      *(undefined8 *)(unaff_x29 + -0xc0) = 2;
      *(char *)(unaff_x29 + -0x78) = cVar9;
      FUN_1004b64d4(unaff_x29 + -0x90,unaff_x29 + -0x78);
      in_stack_00000048 = *(ulong *)(unaff_x29 + -0x90);
      in_stack_00000058 = *(char **)(unaff_x29 + -0x88);
      pcVar11 = in_stack_00000058;
      if (in_stack_00000048 == 0x8000000000000000) goto LAB_101252f48;
      if (lVar22 == 2) {
LAB_101253228:
        pcVar11 = (char *)FUN_1087e422c(2,&UNK_10b2317b8,&UNK_10b20a590);
LAB_101253244:
        in_stack_00000108 = 0x8000000000000000;
        in_stack_00000110 = pcVar11;
        if (in_stack_00000048 != 0) {
          _free(in_stack_00000058);
        }
        goto LAB_101252f50;
      }
      uVar18 = *(ulong *)(unaff_x29 + -0x80);
      pcVar24 = pcVar7 + 0x60;
      *(char **)(unaff_x29 + -0xd8) = pcVar24;
      cVar9 = pcVar7[0x40];
      if (cVar9 == '\x16') goto LAB_101253228;
      uVar27 = *(undefined8 *)(pcVar7 + 0x41);
      unaff_x19[1] = *(undefined8 *)(pcVar7 + 0x49);
      *unaff_x19 = uVar27;
      uVar27 = *(undefined8 *)(pcVar7 + 0x50);
      *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)(pcVar7 + 0x58);
      *(undefined8 *)((long)unaff_x19 + 0xf) = uVar27;
      *(undefined8 *)(unaff_x29 + -0xc0) = 3;
      *(char *)(unaff_x29 + -0x78) = cVar9;
      FUN_1004b60cc(unaff_x29 + -0x90,unaff_x29 + -0x78);
      uVar4 = *(ulong *)(unaff_x29 + -0x90);
      pcVar11 = *(char **)(unaff_x29 + -0x88);
      in_stack_00000040 = uVar18;
      if (uVar4 == 0x8000000000000001) goto LAB_101253244;
      in_stack_00000148 = *(ulong *)(unaff_x29 + -0x80);
      in_stack_00000108 = unaff_x22;
      in_stack_00000110 = pcVar12;
      in_stack_00000118 = uVar26;
      in_stack_00000120 = in_stack_00000048;
      in_stack_00000128 = in_stack_00000058;
      in_stack_00000130 = uVar18;
      in_stack_00000138 = uVar4;
      in_stack_00000140 = pcVar11;
      pcVar13 = (char *)FUN_100fbc738(unaff_x29 + -0xe0);
      unaff_x25 = 0x8000000000000000;
      if (pcVar13 != (char *)0x0) {
        in_stack_00000108 = 0x8000000000000000;
        in_stack_00000110 = pcVar13;
        if (unaff_x22 != 0) {
          _free(pcVar12);
        }
        if (in_stack_00000048 != 0) {
          _free(in_stack_00000058);
        }
        if ((uVar4 & 0x7fffffffffffffff) == 0) {
          unaff_x22 = 0x8000000000000000;
          pcVar12 = pcVar13;
        }
        else {
LAB_101252eac:
          _free(pcVar11);
          unaff_x22 = 0x8000000000000000;
          unaff_x25 = 0x8000000000000000;
          pcVar12 = pcVar13;
        }
      }
      goto LAB_101253108;
    }
    if (in_stack_00000070._4_1_ != 0x15) {
      pcVar12 = (char *)FUN_108855b04(unaff_x29 + -0x100,unaff_x29 + -0x90,&UNK_10b20bd00);
      goto LAB_101253638;
    }
    pbVar5 = *(byte **)(unaff_x29 + -0xf0);
    lVar16 = *(long *)(unaff_x29 + -0xe8) * 0x40;
    pbVar1 = pbVar5 + lVar16;
    *(byte **)(unaff_x29 + -0xc0) = pbVar5;
    *(byte **)(unaff_x29 + -0xb8) = pbVar5;
    *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0xf8);
    *(byte **)(unaff_x29 + -0xa8) = pbVar1;
    *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
    *(undefined8 *)(unaff_x29 + -0xa0) = 0;
    if (*(long *)(unaff_x29 + -0xe8) == 0) {
      unaff_x27 = 0x8000000000000001;
      unaff_x24 = 0;
LAB_101252f8c:
      *(undefined **)(unaff_x29 + -0x90) = &UNK_108c61038;
      *(undefined8 *)(unaff_x29 + -0x88) = 4;
      unaff_x22 = 0x8000000000000000;
      *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
      *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
      param_2 = unaff_x29 + -0x78;
      goto code_r0x000101252fb8;
    }
    lVar22 = 0;
    unaff_x27 = 0x8000000000000001;
    unaff_x22 = 0x8000000000000000;
    unaff_x24 = 0x8000000000000000;
    do {
      pbVar23 = pbVar5 + 0x40;
      bVar8 = *pbVar5;
      lVar17 = lVar22;
      pbVar25 = pbVar23;
      if (bVar8 == 0x16) break;
      *(byte *)(unaff_x29 + -0x78) = bVar8;
      uVar27 = *(undefined8 *)(pbVar5 + 0x10);
      *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)(pbVar5 + 0x18);
      *(undefined8 *)((long)unaff_x19 + 0xf) = uVar27;
      uVar27 = *(undefined8 *)(pbVar5 + 1);
      unaff_x19[1] = *(undefined8 *)(pbVar5 + 9);
      *unaff_x19 = uVar27;
      uVar27 = *(undefined8 *)(pbVar5 + 0x20);
      *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(pbVar5 + 0x28);
      *(undefined8 *)(unaff_x29 + -0xe0) = uVar27;
      uVar27 = *(undefined8 *)(pbVar5 + 0x30);
      *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(pbVar5 + 0x38);
      *(undefined8 *)(unaff_x29 + -0xd0) = uVar27;
      piVar3 = *(int **)(unaff_x29 + -0x70);
      piVar6 = *(int **)(unaff_x29 + -0x68);
      lVar17 = *(long *)(unaff_x29 + -0x60);
      if (bVar8 < 0xd) {
        if (bVar8 == 1) {
          uVar14 = (uint)*(byte *)(unaff_x29 + -0x77);
          if (2 < uVar14) {
            uVar14 = 3;
          }
LAB_101252c74:
          FUN_100e077ec(unaff_x29 + -0x78);
          goto LAB_101252c7c;
        }
        if (bVar8 == 4) {
          if ((int *)0x2 < piVar3) {
            piVar3 = (int *)0x3;
          }
          uVar14 = (uint)piVar3;
          goto LAB_101252c74;
        }
        if (bVar8 == 0xc) {
          if (lVar17 == 3) {
            if ((short)*piVar6 != 0x7763 || *(char *)((long)piVar6 + 2) != 'd') goto LAB_101252bf4;
            uVar14 = 1;
          }
          else if (lVar17 == 5) {
            if (*piVar6 != 0x6c746974 || (char)piVar6[1] != 'e') goto LAB_101252bf4;
            uVar14 = 2;
          }
          else if ((lVar17 == 4) && (*piVar6 == 0x68746170)) {
            uVar14 = 0;
          }
          else {
LAB_101252bf4:
            uVar14 = 3;
          }
          goto joined_r0x000101252e10;
        }
LAB_101253414:
        *(byte **)(unaff_x29 + -0xb8) = pbVar23;
        *(long *)(unaff_x29 + -0xa0) = lVar22 + 1;
        pcVar12 = (char *)FUN_108855b04(unaff_x29 + -0x78,unaff_x29 + -0x90,&UNK_10b210c40);
        goto LAB_10125343c;
      }
      if (bVar8 == 0xd) {
        if (piVar6 == (int *)0x3) {
          if ((short)*piVar3 != 0x7763 || *(char *)((long)piVar3 + 2) != 'd') goto LAB_101252c70;
LAB_101252e04:
          uVar14 = 1;
        }
        else if (piVar6 == (int *)0x5) {
          if (*piVar3 != 0x6c746974 || (char)piVar3[1] != 'e') goto LAB_101252c70;
LAB_101252c4c:
          uVar14 = 2;
        }
        else if ((piVar6 == (int *)0x4) && (*piVar3 == 0x68746170)) {
LAB_101252ae8:
          uVar14 = 0;
        }
        else {
LAB_101252c70:
          uVar14 = 3;
        }
        goto LAB_101252c74;
      }
      if (bVar8 != 0xe) {
        if (bVar8 != 0xf) goto LAB_101253414;
        if (piVar6 == (int *)0x3) {
          if ((((char)*piVar3 == 'c') && (*(char *)((long)piVar3 + 1) == 'w')) &&
             (*(char *)((long)piVar3 + 2) == 'd')) goto LAB_101252e04;
        }
        else if (piVar6 == (int *)0x5) {
          if (((((char)*piVar3 == 't') && (*(char *)((long)piVar3 + 1) == 'i')) &&
              (*(char *)((long)piVar3 + 2) == 't')) &&
             ((*(char *)((long)piVar3 + 3) == 'l' && ((char)piVar3[1] == 'e')))) goto LAB_101252c4c;
        }
        else if (((piVar6 == (int *)0x4) && ((char)*piVar3 == 'p')) &&
                ((*(char *)((long)piVar3 + 1) == 'a' &&
                 ((*(char *)((long)piVar3 + 2) == 't' && (*(char *)((long)piVar3 + 3) == 'h'))))))
        goto LAB_101252ae8;
        goto LAB_101252c70;
      }
      if (lVar17 == 3) {
        if ((((char)*piVar6 != 'c') || (*(char *)((long)piVar6 + 1) != 'w')) ||
           (*(char *)((long)piVar6 + 2) != 'd')) goto LAB_101252bcc;
        uVar14 = 1;
      }
      else if (lVar17 == 5) {
        if ((((char)*piVar6 != 't') || (*(char *)((long)piVar6 + 1) != 'i')) ||
           ((*(char *)((long)piVar6 + 2) != 't' ||
            ((*(char *)((long)piVar6 + 3) != 'l' || ((char)piVar6[1] != 'e'))))))
        goto LAB_101252bcc;
        uVar14 = 2;
      }
      else if ((((lVar17 == 4) && ((char)*piVar6 == 'p')) && (*(char *)((long)piVar6 + 1) == 'a'))
              && ((*(char *)((long)piVar6 + 2) == 't' && (*(char *)((long)piVar6 + 3) == 'h')))) {
        uVar14 = 0;
      }
      else {
LAB_101252bcc:
        uVar14 = 3;
      }
joined_r0x000101252e10:
      if (piVar3 != (int *)0x0) {
        _free();
      }
LAB_101252c7c:
      uVar14 = uVar14 & 0xff;
      if (uVar14 < 2) {
        if (uVar14 == 0) {
          if (unaff_x22 != 0x8000000000000000) {
            *(byte **)(unaff_x29 + -0xb8) = pbVar23;
            *(long *)(unaff_x29 + -0xa0) = lVar22 + 1;
            *(undefined **)(unaff_x29 + -0x90) = &UNK_108c61038;
            *(undefined8 *)(unaff_x29 + -0x88) = 4;
            *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
            *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
            pcVar12 = (char *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x78);
LAB_10125343c:
            unaff_x25 = 0x8000000000000000;
            in_stack_00000108 = 0x8000000000000000;
            goto LAB_101252fcc;
          }
          cVar9 = *(char *)(unaff_x29 + -0xe0);
          *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
          if (cVar9 == '\x16') {
            *(byte **)(unaff_x29 + -0xb8) = pbVar23;
            *(long *)(unaff_x29 + -0xa0) = lVar22 + 1;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_101253738;
          }
          uVar27 = *in_stack_00000078;
          unaff_x19[1] = in_stack_00000078[1];
          *unaff_x19 = uVar27;
          uVar27 = *(undefined8 *)((long)in_stack_00000078 + 0xf);
          *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)((long)in_stack_00000078 + 0x17);
          *(undefined8 *)((long)unaff_x19 + 0xf) = uVar27;
          *(char *)(unaff_x29 + -0x78) = cVar9;
          FUN_1004b64d4(unaff_x29 + -0x90,unaff_x29 + -0x78);
          unaff_x22 = *(ulong *)(unaff_x29 + -0x90);
          if (unaff_x22 == 0x8000000000000000) {
            *(byte **)(unaff_x29 + -0xb8) = pbVar23;
            *(long *)(unaff_x29 + -0xa0) = lVar22 + 1;
            pcVar12 = *(char **)(unaff_x29 + -0x88);
            unaff_x22 = 0;
LAB_1012531b0:
            in_stack_00000108 = 0x8000000000000000;
            bVar21 = true;
            unaff_x25 = 0x8000000000000000;
            in_stack_00000110 = pcVar12;
            goto LAB_101252fd0;
          }
          in_stack_00000058 = *(char **)(unaff_x29 + -0x88);
          in_stack_00000048 = *(ulong *)(unaff_x29 + -0x80);
        }
        else {
          if (unaff_x24 != 0x8000000000000000) {
            *(byte **)(unaff_x29 + -0xb8) = pbVar23;
            *(long *)(unaff_x29 + -0xa0) = lVar22 + 1;
            *(undefined **)(unaff_x29 + -0x90) = &UNK_108ca1f1d;
            *(undefined8 *)(unaff_x29 + -0x88) = 3;
            *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
            *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
            pcVar12 = (char *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x78);
            goto LAB_10125343c;
          }
          cVar9 = *(char *)(unaff_x29 + -0xe0);
          *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
          if (cVar9 == '\x16') {
            *(byte **)(unaff_x29 + -0xb8) = pbVar23;
            *(long *)(unaff_x29 + -0xa0) = lVar22 + 1;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_101253738;
          }
          uVar27 = *in_stack_00000078;
          unaff_x19[1] = in_stack_00000078[1];
          *unaff_x19 = uVar27;
          uVar27 = *(undefined8 *)((long)in_stack_00000078 + 0xf);
          *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)((long)in_stack_00000078 + 0x17);
          *(undefined8 *)((long)unaff_x19 + 0xf) = uVar27;
          *(char *)(unaff_x29 + -0x78) = cVar9;
          FUN_1004b64d4(unaff_x29 + -0x90,unaff_x29 + -0x78);
          unaff_x24 = *(ulong *)(unaff_x29 + -0x90);
          if (unaff_x24 == 0x8000000000000000) {
            *(byte **)(unaff_x29 + -0xb8) = pbVar23;
            *(long *)(unaff_x29 + -0xa0) = lVar22 + 1;
            pcVar12 = *(char **)(unaff_x29 + -0x88);
            unaff_x24 = 0;
            goto LAB_1012531b0;
          }
          in_stack_00000030 = *(char **)(unaff_x29 + -0x88);
          in_stack_00000040 = *(ulong *)(unaff_x29 + -0x80);
        }
      }
      else if (uVar14 == 2) {
        if (unaff_x27 != 0x8000000000000001) {
          *(byte **)(unaff_x29 + -0xb8) = pbVar23;
          *(long *)(unaff_x29 + -0xa0) = lVar22 + 1;
          *(undefined **)(unaff_x29 + -0x90) = &UNK_108ca1558;
          *(undefined8 *)(unaff_x29 + -0x88) = 5;
          *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
          *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
          pcVar12 = (char *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x78);
          unaff_x25 = 0x8000000000000000;
          in_stack_00000108 = 0x8000000000000000;
          bVar21 = true;
          in_stack_00000110 = pcVar12;
          goto joined_r0x000101252fe0;
        }
        cVar9 = *(char *)(unaff_x29 + -0xe0);
        *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
        if (cVar9 == '\x16') {
          *(byte **)(unaff_x29 + -0xb8) = pbVar23;
          *(long *)(unaff_x29 + -0xa0) = lVar22 + 1;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_101253738;
        }
        uVar27 = *in_stack_00000078;
        unaff_x19[1] = in_stack_00000078[1];
        *unaff_x19 = uVar27;
        uVar27 = *(undefined8 *)((long)in_stack_00000078 + 0xf);
        *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)((long)in_stack_00000078 + 0x17);
        *(undefined8 *)((long)unaff_x19 + 0xf) = uVar27;
        *(char *)(unaff_x29 + -0x78) = cVar9;
        FUN_1004b60cc(unaff_x29 + -0x90,unaff_x29 + -0x78);
        unaff_x27 = *(ulong *)(unaff_x29 + -0x90);
        if (unaff_x27 == 0x8000000000000001) {
          *(byte **)(unaff_x29 + -0xb8) = pbVar23;
          *(long *)(unaff_x29 + -0xa0) = lVar22 + 1;
          pcVar12 = *(char **)(unaff_x29 + -0x88);
          unaff_x25 = 0x8000000000000000;
          in_stack_00000108 = 0x8000000000000000;
          bVar21 = true;
          in_stack_00000110 = pcVar12;
          goto LAB_1012530c4;
        }
        in_stack_00000028 = *(char **)(unaff_x29 + -0x88);
        in_stack_00000038 = *(ulong *)(unaff_x29 + -0x80);
      }
      else {
        cVar9 = *(char *)(unaff_x29 + -0xe0);
        *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
        if (cVar9 == '\x16') {
          *(byte **)(unaff_x29 + -0xb8) = pbVar23;
          *(long *)(unaff_x29 + -0xa0) = lVar22 + 1;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101253738:
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10125373c);
          (*pcVar10)();
        }
        uVar27 = *in_stack_00000078;
        unaff_x19[1] = in_stack_00000078[1];
        *unaff_x19 = uVar27;
        uVar27 = *(undefined8 *)((long)in_stack_00000078 + 0xf);
        *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)((long)in_stack_00000078 + 0x17);
        *(undefined8 *)((long)unaff_x19 + 0xf) = uVar27;
        *(char *)(unaff_x29 + -0x78) = cVar9;
        FUN_100e077ec(unaff_x29 + -0x78);
      }
      lVar22 = lVar22 + 1;
      lVar17 = (lVar16 - 0x40U >> 6) + 1;
      pbVar25 = pbVar1;
      pbVar5 = pbVar23;
    } while (pbVar23 != pbVar1);
    *(byte **)(unaff_x29 + -0xb8) = pbVar25;
    *(long *)(unaff_x29 + -0xa0) = lVar17;
    if (unaff_x22 == 0x8000000000000000) {
      unaff_x25 = 0x8000000000000000;
      goto LAB_101252f8c;
    }
    if (unaff_x24 == 0x8000000000000000) {
      *(undefined **)(unaff_x29 + -0x90) = &UNK_108ca1f1d;
      *(undefined8 *)(unaff_x29 + -0x88) = 3;
      *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
      *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
      pcVar12 = (char *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x78);
      unaff_x24 = 0;
      in_stack_00000108 = 0x8000000000000000;
      unaff_x25 = 0x8000000000000000;
      in_stack_00000110 = pcVar12;
      if (unaff_x22 != 0) {
        _free(in_stack_00000058);
      }
      bVar21 = false;
      goto LAB_101252fd0;
    }
    uVar26 = 0x8000000000000000;
    if (unaff_x27 != 0x8000000000000001) {
      uVar26 = unaff_x27;
    }
    in_stack_00000110 = in_stack_00000058;
    in_stack_00000118 = in_stack_00000048;
    in_stack_00000128 = in_stack_00000030;
    in_stack_00000130 = in_stack_00000040;
    in_stack_00000140 = in_stack_00000028;
    in_stack_00000148 = in_stack_00000038;
    in_stack_00000108 = unaff_x22;
    in_stack_00000120 = unaff_x24;
    in_stack_00000138 = uVar26;
    FUN_100d34830(unaff_x29 + -0xc0);
    pcVar13 = in_stack_00000058;
    if (pbVar1 == pbVar25) {
LAB_101253094:
      unaff_x25 = 0x8000000000000000;
      pcVar12 = pcVar13;
      goto LAB_101253108;
    }
    *(long *)(unaff_x29 + -0x78) = lVar17;
    pcVar12 = (char *)FUN_1087e422c(((ulong)((long)pbVar1 - (long)pbVar25) >> 6) + lVar17,
                                    unaff_x29 + -0x78,&UNK_10b23a190);
    unaff_x25 = 0x8000000000000000;
    in_stack_00000108 = 0x8000000000000000;
    in_stack_00000110 = pcVar12;
    if (unaff_x22 != 0) {
      _free(in_stack_00000058);
    }
    if (unaff_x24 != 0) {
      _free(in_stack_00000030);
    }
    if ((uVar26 & 0x7fffffffffffffff) != 0) {
      _free(in_stack_00000028);
    }
  } while( true );
}

