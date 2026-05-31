
void FUN_1013e0f08(undefined8 param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  char cVar4;
  byte bVar5;
  byte *pbVar6;
  code *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong *puVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  byte *pbVar14;
  long lVar15;
  undefined8 *unaff_x20;
  char *unaff_x21;
  char *pcVar16;
  undefined8 *puVar17;
  ulong unaff_x23;
  byte unaff_w24;
  byte *pbVar18;
  ulong unaff_x25;
  long lVar19;
  byte *pbVar20;
  long unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long *in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 *in_stack_00000020;
  char *in_stack_00000028;
  ulong in_stack_00000030;
  byte *in_stack_00000038;
  byte *in_stack_00000040;
  byte *in_stack_00000048;
  undefined8 *in_stack_00000058;
  char *in_stack_00000068;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  ulong in_stack_000000a0;
  byte *in_stack_000000a8;
  byte *in_stack_000000b0;
  ulong in_stack_000000b8;
  byte *in_stack_000000c0;
  ulong in_stack_000000c8;
  ulong in_stack_000000d0;
  byte *in_stack_000000d8;
  byte *in_stack_000000e0;
  ulong in_stack_000000e8;
  byte *in_stack_000000f0;
  ulong in_stack_000000f8;
  char in_stack_00000100;
  long in_stack_00000108;
  byte *in_stack_00000110;
  long in_stack_00000118;
  
code_r0x0001013e0f08:
  pbVar9 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,param_2);
joined_r0x0001013e0f20:
  unaff_x28 = unaff_x28 & 0x7fffffffffffffff;
joined_r0x0001013e0f20:
  in_stack_000000d0 = unaff_x25;
  in_stack_000000d8 = pbVar9;
  if (unaff_x28 != 0) {
    _free(in_stack_00000040);
  }
LAB_1013e1014:
  unaff_x23 = unaff_x23 & 0x7fffffffffffffff;
joined_r0x0001013e1018:
  if (unaff_x23 != 0) {
    _free(in_stack_00000048);
  }
  FUN_100d34830(unaff_x29 + -0xc0);
  if (*(char *)(unaff_x29 + -0xe0) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0xe0);
  }
LAB_1013e103c:
  unaff_x23 = 0x8000000000000000;
  pcVar16 = unaff_x21;
  if ((unaff_w24 & 0x1e) != 0x14) {
    unaff_x23 = 0x8000000000000000;
    FUN_100e077ec(&stack0x00000100);
  }
LAB_1013e1054:
  lVar13 = in_stack_00000098;
  unaff_x21 = pcVar16;
  if (unaff_x23 == unaff_x25) {
LAB_1013e13ac:
    lVar13 = in_stack_00000090;
    *in_stack_00000000 = -0x8000000000000000;
    in_stack_00000000[1] = (long)pbVar9;
    if (in_stack_00000098 != 0) {
      puVar17 = (undefined8 *)(in_stack_00000090 + 0x20);
      lVar19 = in_stack_00000098;
      do {
        if (puVar17[-4] != 0) {
          _free(puVar17[-3]);
        }
        if (puVar17[-1] != 0) {
          _free(*puVar17);
        }
        puVar17 = puVar17 + 6;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
    if (in_stack_00000088 != 0) {
      _free(lVar13);
    }
LAB_1013e1408:
    lVar13 = ((ulong)((long)in_stack_00000028 - (long)unaff_x21) >> 5) + 1;
    while (lVar13 = lVar13 + -1, lVar13 != 0) {
      FUN_100e077ec(unaff_x21);
      unaff_x21 = unaff_x21 + 0x20;
    }
joined_r0x0001013e130c:
    if (in_stack_00000008 != 0) {
      _free(in_stack_00000010);
    }
    return;
  }
  in_stack_000000b8 = in_stack_000000e8;
  in_stack_000000b0 = in_stack_000000e0;
  in_stack_000000c8 = in_stack_000000f8;
  in_stack_000000c0 = in_stack_000000f0;
  in_stack_000000a0 = unaff_x23;
  in_stack_000000a8 = pbVar9;
  if (in_stack_00000098 == in_stack_00000088) {
    func_0x0001088db3c8(&stack0x00000088);
  }
  lVar15 = in_stack_00000118;
  pbVar6 = in_stack_00000110;
  lVar19 = in_stack_00000108;
  puVar10 = (ulong *)(in_stack_00000090 + lVar13 * 0x30);
  puVar10[1] = (ulong)in_stack_000000a8;
  *puVar10 = in_stack_000000a0;
  puVar10[3] = in_stack_000000b8;
  puVar10[2] = (ulong)in_stack_000000b0;
  puVar10[5] = in_stack_000000c8;
  puVar10[4] = (ulong)in_stack_000000c0;
  in_stack_00000098 = lVar13 + 1;
  unaff_x21 = in_stack_00000028;
  if (pcVar16 == in_stack_00000028) {
LAB_1013e1288:
    in_stack_00000000[1] = in_stack_00000090;
    *in_stack_00000000 = in_stack_00000088;
    in_stack_00000000[2] = in_stack_00000098;
    lVar13 = *in_stack_00000000;
    if (lVar13 == -0x8000000000000000) goto LAB_1013e1408;
    in_stack_00000010 = in_stack_00000000[1];
    lVar19 = in_stack_00000000[2];
    lVar15 = FUN_100fbc738(&stack0x00000060);
    if (lVar15 == 0) {
      return;
    }
    *in_stack_00000000 = -0x8000000000000000;
    in_stack_00000000[1] = lVar15;
    in_stack_00000008 = lVar13;
    if (lVar19 != 0) {
      puVar17 = (undefined8 *)(in_stack_00000010 + 0x20);
      do {
        if (puVar17[-4] != 0) {
          _free(puVar17[-3]);
        }
        if (puVar17[-1] != 0) {
          _free(*puVar17);
        }
        puVar17 = puVar17 + 6;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
    goto joined_r0x0001013e130c;
  }
  unaff_x21 = pcVar16 + 0x20;
  cVar4 = *pcVar16;
  in_stack_00000068 = unaff_x21;
  if (cVar4 == '\x16') goto LAB_1013e1288;
  uVar21 = *(undefined8 *)(pcVar16 + 1);
  in_stack_00000020[1] = *(undefined8 *)(pcVar16 + 9);
  *in_stack_00000020 = uVar21;
  uVar21 = *(undefined8 *)(pcVar16 + 0x10);
  *(undefined8 *)((long)in_stack_00000020 + 0x17) = *(undefined8 *)(pcVar16 + 0x18);
  *(undefined8 *)((long)in_stack_00000020 + 0xf) = uVar21;
  unaff_x27 = unaff_x27 + 1;
  pcVar16 = unaff_x21;
  in_stack_00000080 = unaff_x27;
  in_stack_00000100 = cVar4;
  if (cVar4 == '\x14') {
    pbVar18 = in_stack_00000110 + in_stack_00000118 * 0x20;
    *(byte **)(unaff_x29 + -0xe0) = in_stack_00000110;
    *(byte **)(unaff_x29 + -0xd8) = in_stack_00000110;
    *(long *)(unaff_x29 + -0xd0) = in_stack_00000108;
    *(byte **)(unaff_x29 + -200) = pbVar18;
    *(undefined8 *)(unaff_x29 + -0xc0) = 0;
    pbVar20 = in_stack_00000110;
    if (in_stack_00000118 == 0) {
LAB_1013e0d8c:
      pbVar9 = (byte *)FUN_1087e422c(0,&UNK_10b22cb30,&UNK_10b20a590);
LAB_1013e0da8:
      in_stack_000000d0 = 0x8000000000000000;
      pbVar14 = pbVar9;
      in_stack_000000d8 = pbVar9;
LAB_1013e0db4:
      lVar13 = ((ulong)((long)pbVar18 - (long)pbVar20) >> 5) + 1;
      while (lVar13 = lVar13 + -1, lVar13 != 0) {
        FUN_100e077ec(pbVar20);
        pbVar20 = pbVar20 + 0x20;
      }
      pbVar8 = pbVar6;
      if (lVar19 != 0) goto LAB_1013e0de0;
      unaff_x23 = 0x8000000000000000;
      unaff_x25 = 0x8000000000000000;
      pbVar9 = pbVar14;
    }
    else {
      pbVar20 = in_stack_00000110 + 0x20;
      bVar5 = *in_stack_00000110;
      *(byte **)(unaff_x29 + -0xd8) = pbVar20;
      if (bVar5 == 0x16) goto LAB_1013e0d8c;
      uVar21 = *(undefined8 *)(in_stack_00000110 + 1);
      unaff_x20[1] = *(undefined8 *)(in_stack_00000110 + 9);
      *unaff_x20 = uVar21;
      uVar21 = *(undefined8 *)(in_stack_00000110 + 0x10);
      *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)(in_stack_00000110 + 0x18);
      *(undefined8 *)((long)unaff_x20 + 0xf) = uVar21;
      *(undefined8 *)(unaff_x29 + -0xc0) = 1;
      *(byte *)(unaff_x29 + -0x78) = bVar5;
      FUN_1004b62d4(unaff_x29 + -0x90,unaff_x29 + -0x78);
      unaff_x23 = *(ulong *)(unaff_x29 + -0x90);
      pbVar9 = *(byte **)(unaff_x29 + -0x88);
      if (unaff_x23 == 0x8000000000000000) goto LAB_1013e0da8;
      if (lVar15 == 1) {
LAB_1013e0e80:
        pbVar8 = (byte *)FUN_1087e422c(1,&UNK_10b22cb30,&UNK_10b20a590);
LAB_1013e0e9c:
        in_stack_000000d0 = 0x8000000000000000;
        pbVar14 = pbVar8;
        in_stack_000000d8 = pbVar8;
        if (unaff_x23 != 0) {
          _free(pbVar9);
        }
        goto LAB_1013e0db4;
      }
      pbVar14 = *(byte **)(unaff_x29 + -0x80);
      pbVar20 = pbVar6 + 0x40;
      *(byte **)(unaff_x29 + -0xd8) = pbVar20;
      bVar5 = pbVar6[0x20];
      if (bVar5 == 0x16) goto LAB_1013e0e80;
      uVar21 = *(undefined8 *)(pbVar6 + 0x21);
      unaff_x20[1] = *(undefined8 *)(pbVar6 + 0x29);
      *unaff_x20 = uVar21;
      uVar21 = *(undefined8 *)(pbVar6 + 0x30);
      *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)(pbVar6 + 0x38);
      *(undefined8 *)((long)unaff_x20 + 0xf) = uVar21;
      *(undefined8 *)(unaff_x29 + -0xc0) = 2;
      *(byte *)(unaff_x29 + -0x78) = bVar5;
      FUN_1004b62d4(unaff_x29 + -0x90,unaff_x29 + -0x78);
      uVar2 = *(ulong *)(unaff_x29 + -0x90);
      pbVar8 = *(byte **)(unaff_x29 + -0x88);
      in_stack_00000048 = pbVar14;
      if (uVar2 == 0x8000000000000000) goto LAB_1013e0e9c;
      in_stack_000000f8 = *(ulong *)(unaff_x29 + -0x80);
      in_stack_000000d0 = unaff_x23;
      in_stack_000000d8 = pbVar9;
      in_stack_000000e0 = pbVar14;
      in_stack_000000e8 = uVar2;
      in_stack_000000f0 = pbVar8;
      pbVar14 = (byte *)FUN_100fbc738(unaff_x29 + -0xe0);
      unaff_x25 = 0x8000000000000000;
      if (pbVar14 != (byte *)0x0) {
        in_stack_000000d0 = 0x8000000000000000;
        in_stack_000000d8 = pbVar14;
        if (unaff_x23 != 0) {
          _free(pbVar9);
        }
        if (uVar2 == 0) {
          unaff_x23 = 0x8000000000000000;
          pbVar9 = pbVar14;
        }
        else {
LAB_1013e0de0:
          _free(pbVar8);
          unaff_x23 = 0x8000000000000000;
          unaff_x25 = 0x8000000000000000;
          pbVar9 = pbVar14;
        }
      }
    }
    goto LAB_1013e1054;
  }
  if (cVar4 != '\x15') {
    pbVar9 = (byte *)FUN_108855b04(&stack0x00000100,unaff_x29 + -0x90,&UNK_10b20a9c0);
    goto LAB_1013e13ac;
  }
  lVar13 = in_stack_00000118 * 0x40;
  pbVar9 = in_stack_00000110 + lVar13;
  *(byte **)(unaff_x29 + -0xc0) = in_stack_00000110;
  *(byte **)(unaff_x29 + -0xb8) = in_stack_00000110;
  *(long *)(unaff_x29 + -0xb0) = in_stack_00000108;
  *(byte **)(unaff_x29 + -0xa8) = pbVar9;
  *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
  *(undefined8 *)(unaff_x29 + -0xa0) = 0;
  unaff_w24 = 0x15;
  if (in_stack_00000118 == 0) {
    unaff_x28 = 0;
  }
  else {
    lVar19 = 0;
    unaff_x23 = 0x8000000000000000;
    unaff_x28 = 0x8000000000000000;
    do {
      pbVar18 = pbVar6 + 0x40;
      bVar5 = *pbVar6;
      pbVar20 = pbVar18;
      lVar15 = lVar19;
      if (bVar5 == 0x16) break;
      *(byte *)(unaff_x29 + -0x78) = bVar5;
      uVar21 = *(undefined8 *)(pbVar6 + 0x10);
      *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)(pbVar6 + 0x18);
      *(undefined8 *)((long)unaff_x20 + 0xf) = uVar21;
      uVar21 = *(undefined8 *)(pbVar6 + 1);
      unaff_x20[1] = *(undefined8 *)(pbVar6 + 9);
      *unaff_x20 = uVar21;
      uVar21 = *(undefined8 *)(pbVar6 + 0x20);
      uVar23 = *(undefined8 *)(pbVar6 + 0x38);
      uVar22 = *(undefined8 *)(pbVar6 + 0x30);
      *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(pbVar6 + 0x28);
      *(undefined8 *)(unaff_x29 + -0xe0) = uVar21;
      *(undefined8 *)(unaff_x29 + -200) = uVar23;
      *(undefined8 *)(unaff_x29 + -0xd0) = uVar22;
      plVar1 = *(long **)(unaff_x29 + -0x70);
      plVar3 = *(long **)(unaff_x29 + -0x68);
      lVar15 = *(long *)(unaff_x29 + -0x60);
      if (bVar5 < 0xd) {
        if (bVar5 == 1) {
          iVar12 = 1;
          if (*(char *)(unaff_x29 + -0x77) != '\x01') {
            iVar12 = 2;
          }
          iVar11 = 0;
          if (*(char *)(unaff_x29 + -0x77) != '\0') {
            iVar11 = iVar12;
          }
        }
        else {
          if (bVar5 != 4) {
            if (bVar5 == 0xc) {
              if (lVar15 == 9) {
                iVar11 = 1;
                if (*plVar3 != 0x496e75526b6f6f68 || (char)plVar3[1] != 'd') {
                  iVar11 = 2;
                }
              }
              else if (lVar15 == 4) {
                iVar11 = 2;
                if ((int)*plVar3 == 0x74786574) {
                  iVar11 = 0;
                }
              }
              else {
                iVar11 = 2;
              }
              goto joined_r0x0001013e0b78;
            }
LAB_1013e11ec:
            *(byte **)(unaff_x29 + -0xb8) = pbVar18;
            *(long *)(unaff_x29 + -0xa0) = lVar19 + 1;
            pbVar9 = (byte *)FUN_108855b04(unaff_x29 + -0x78,unaff_x29 + -0x90,&UNK_10b211c80);
            unaff_x25 = 0x8000000000000000;
            goto joined_r0x0001013e0f20;
          }
          iVar12 = 1;
          if (plVar1 != (long *)0x1) {
            iVar12 = 2;
          }
          iVar11 = 0;
          if (plVar1 != (long *)0x0) {
            iVar11 = iVar12;
          }
        }
LAB_1013e0c30:
        FUN_100e077ec(unaff_x29 + -0x78);
      }
      else {
        if (bVar5 == 0xd) {
          if (plVar3 == (long *)0x9) {
            iVar11 = 1;
            if (*plVar1 != 0x496e75526b6f6f68 || (char)plVar1[1] != 'd') {
              iVar11 = 2;
            }
          }
          else {
            if (plVar3 != (long *)0x4) goto LAB_1013e0bf4;
            iVar11 = 2;
            if ((int)*plVar1 == 0x74786574) {
              iVar11 = 0;
            }
          }
          goto LAB_1013e0c30;
        }
        if (bVar5 != 0xe) {
          if (bVar5 != 0xf) goto LAB_1013e11ec;
          if (plVar3 == (long *)0x9) {
            if (((((((char)*plVar1 != 'h') || (*(char *)((long)plVar1 + 1) != 'o')) ||
                  (*(char *)((long)plVar1 + 2) != 'o')) ||
                 ((*(char *)((long)plVar1 + 3) != 'k' || (*(char *)((long)plVar1 + 4) != 'R')))) ||
                (*(char *)((long)plVar1 + 5) != 'u')) ||
               (((*(char *)((long)plVar1 + 6) != 'n' || (*(char *)((long)plVar1 + 7) != 'I')) ||
                ((char)plVar1[1] != 'd')))) goto LAB_1013e0bf4;
            iVar11 = 1;
          }
          else if ((((plVar3 == (long *)0x4) && ((char)*plVar1 == 't')) &&
                   (*(char *)((long)plVar1 + 1) == 'e')) &&
                  ((*(char *)((long)plVar1 + 2) == 'x' && (*(char *)((long)plVar1 + 3) == 't')))) {
            iVar11 = 0;
          }
          else {
LAB_1013e0bf4:
            iVar11 = 2;
          }
          goto LAB_1013e0c30;
        }
        if (lVar15 == 9) {
          if (((((char)*plVar3 != 'h') || (*(char *)((long)plVar3 + 1) != 'o')) ||
              ((*(char *)((long)plVar3 + 2) != 'o' ||
               (((*(char *)((long)plVar3 + 3) != 'k' || (*(char *)((long)plVar3 + 4) != 'R')) ||
                (*(char *)((long)plVar3 + 5) != 'u')))))) ||
             (((*(char *)((long)plVar3 + 6) != 'n' || (*(char *)((long)plVar3 + 7) != 'I')) ||
              ((char)plVar3[1] != 'd')))) goto LAB_1013e0b38;
          iVar11 = 1;
        }
        else if (((lVar15 == 4) && ((char)*plVar3 == 't')) &&
                ((*(char *)((long)plVar3 + 1) == 'e' &&
                 ((*(char *)((long)plVar3 + 2) == 'x' && (*(char *)((long)plVar3 + 3) == 't')))))) {
          iVar11 = 0;
        }
        else {
LAB_1013e0b38:
          iVar11 = 2;
        }
joined_r0x0001013e0b78:
        if (plVar1 != (long *)0x0) {
          _free();
        }
      }
      if (iVar11 == 0) {
        if (unaff_x23 != 0x8000000000000000) {
          *(byte **)(unaff_x29 + -0xb8) = pbVar18;
          *(long *)(unaff_x29 + -0xa0) = lVar19 + 1;
          *(undefined **)(unaff_x29 + -0x90) = &UNK_108c72520;
          *(undefined8 *)(unaff_x29 + -0x88) = 4;
          *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
          *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
          pbVar9 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x78);
          unaff_x25 = 0x8000000000000000;
          goto joined_r0x0001013e0f20;
        }
        cVar4 = *(char *)(unaff_x29 + -0xe0);
        *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
        if (cVar4 == '\x16') {
          *(byte **)(unaff_x29 + -0xb8) = pbVar18;
          *(long *)(unaff_x29 + -0xa0) = lVar19 + 1;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_1013e1494;
        }
        uVar21 = *in_stack_00000058;
        unaff_x20[1] = in_stack_00000058[1];
        *unaff_x20 = uVar21;
        uVar21 = *(undefined8 *)((long)in_stack_00000058 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)in_stack_00000058 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar21;
        *(char *)(unaff_x29 + -0x78) = cVar4;
        FUN_1004b62d4(unaff_x29 + -0x90,unaff_x29 + -0x78);
        unaff_x23 = *(ulong *)(unaff_x29 + -0x90);
        if (unaff_x23 == 0x8000000000000000) {
          *(byte **)(unaff_x29 + -0xb8) = pbVar18;
          *(long *)(unaff_x29 + -0xa0) = lVar19 + 1;
          pbVar9 = *(byte **)(unaff_x29 + -0x88);
          unaff_x23 = 0;
          unaff_x25 = 0x8000000000000000;
          goto joined_r0x0001013e0f20;
        }
        in_stack_00000048 = *(byte **)(unaff_x29 + -0x88);
        in_stack_00000038 = *(byte **)(unaff_x29 + -0x80);
      }
      else if (iVar11 == 1) {
        if (unaff_x28 != 0x8000000000000000) {
          *(byte **)(unaff_x29 + -0xb8) = pbVar18;
          *(long *)(unaff_x29 + -0xa0) = lVar19 + 1;
          *(undefined **)(unaff_x29 + -0x90) = &UNK_108cae1a7;
          *(undefined8 *)(unaff_x29 + -0x88) = 9;
          *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
          *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
          pbVar9 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x78);
          unaff_x25 = 0x8000000000000000;
          goto joined_r0x0001013e0f20;
        }
        cVar4 = *(char *)(unaff_x29 + -0xe0);
        *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
        if (cVar4 == '\x16') {
          *(byte **)(unaff_x29 + -0xb8) = pbVar18;
          *(long *)(unaff_x29 + -0xa0) = lVar19 + 1;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_1013e1494;
        }
        uVar21 = *in_stack_00000058;
        unaff_x20[1] = in_stack_00000058[1];
        *unaff_x20 = uVar21;
        uVar21 = *(undefined8 *)((long)in_stack_00000058 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)in_stack_00000058 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar21;
        *(char *)(unaff_x29 + -0x78) = cVar4;
        FUN_1004b62d4(unaff_x29 + -0x90,unaff_x29 + -0x78);
        unaff_x28 = *(ulong *)(unaff_x29 + -0x90);
        if (unaff_x28 == 0x8000000000000000) {
          *(byte **)(unaff_x29 + -0xb8) = pbVar18;
          *(long *)(unaff_x29 + -0xa0) = lVar19 + 1;
          pbVar9 = *(byte **)(unaff_x29 + -0x88);
          unaff_x25 = 0x8000000000000000;
          in_stack_000000d0 = 0x8000000000000000;
          in_stack_000000d8 = pbVar9;
          goto LAB_1013e1014;
        }
        in_stack_00000040 = *(byte **)(unaff_x29 + -0x88);
        in_stack_00000030 = *(ulong *)(unaff_x29 + -0x80);
      }
      else {
        cVar4 = *(char *)(unaff_x29 + -0xe0);
        *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
        if (cVar4 == '\x16') {
          *(byte **)(unaff_x29 + -0xb8) = pbVar18;
          *(long *)(unaff_x29 + -0xa0) = lVar19 + 1;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1013e1494:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1013e1498);
          (*pcVar7)();
        }
        uVar21 = *in_stack_00000058;
        unaff_x20[1] = in_stack_00000058[1];
        *unaff_x20 = uVar21;
        uVar21 = *(undefined8 *)((long)in_stack_00000058 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)in_stack_00000058 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar21;
        *(char *)(unaff_x29 + -0x78) = cVar4;
        FUN_100e077ec(unaff_x29 + -0x78);
      }
      lVar19 = lVar19 + 1;
      pbVar20 = pbVar9;
      lVar15 = (lVar13 - 0x40U >> 6) + 1;
      pbVar6 = pbVar18;
    } while (pbVar18 != pbVar9);
    *(byte **)(unaff_x29 + -0xb8) = pbVar20;
    *(long *)(unaff_x29 + -0xa0) = lVar15;
    if (unaff_x23 != 0x8000000000000000) {
      if (unaff_x28 == 0x8000000000000000) {
        *(undefined **)(unaff_x29 + -0x90) = &UNK_108cae1a7;
        *(undefined8 *)(unaff_x29 + -0x88) = 9;
        *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
        *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
        pbVar9 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x78);
        unaff_x25 = 0x8000000000000000;
        in_stack_000000d0 = 0x8000000000000000;
        in_stack_000000d8 = pbVar9;
        goto joined_r0x0001013e1018;
      }
      in_stack_000000d8 = in_stack_00000048;
      in_stack_000000e0 = in_stack_00000038;
      in_stack_000000f0 = in_stack_00000040;
      in_stack_000000f8 = in_stack_00000030;
      in_stack_000000d0 = unaff_x23;
      in_stack_000000e8 = unaff_x28;
      FUN_100d34830(unaff_x29 + -0xc0);
      if (pbVar9 == pbVar20) {
        unaff_x25 = 0x8000000000000000;
        pbVar9 = in_stack_00000048;
        goto LAB_1013e1054;
      }
      *(long *)(unaff_x29 + -0x78) = lVar15;
      pbVar9 = (byte *)FUN_1087e422c(((ulong)((long)pbVar9 - (long)pbVar20) >> 6) + lVar15,
                                     unaff_x29 + -0x78,&UNK_10b23a190);
      unaff_x25 = 0x8000000000000000;
      in_stack_000000d0 = 0x8000000000000000;
      in_stack_000000d8 = pbVar9;
      if (unaff_x23 != 0) {
        _free(in_stack_00000048);
      }
      if (unaff_x28 != 0) {
        _free(in_stack_00000040);
        unaff_x23 = 0x8000000000000000;
        goto LAB_1013e1054;
      }
      goto LAB_1013e103c;
    }
    unaff_x25 = 0x8000000000000000;
  }
  *(undefined **)(unaff_x29 + -0x90) = &UNK_108c72520;
  *(undefined8 *)(unaff_x29 + -0x88) = 4;
  unaff_x23 = 0;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
  *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
  param_2 = unaff_x29 + -0x78;
  goto code_r0x0001013e0f08;
}

