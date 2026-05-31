
void FUN_101276880(undefined8 param_1,long param_2)

{
  int *piVar1;
  ulong uVar2;
  int *piVar3;
  char cVar4;
  byte bVar5;
  byte *pbVar6;
  code *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  ulong *puVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  byte *pbVar15;
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
  
code_r0x000101276880:
  pbVar9 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,param_2);
joined_r0x000101276898:
  unaff_x28 = unaff_x28 & 0x7fffffffffffffff;
joined_r0x000101276898:
  in_stack_000000d0 = unaff_x25;
  in_stack_000000d8 = pbVar9;
  if (unaff_x28 != 0) {
    _free(in_stack_00000040);
  }
LAB_10127698c:
  unaff_x23 = unaff_x23 & 0x7fffffffffffffff;
joined_r0x000101276990:
  if (unaff_x23 != 0) {
    _free(in_stack_00000048);
  }
  FUN_100d34830(unaff_x29 + -0xc0);
  if (*(char *)(unaff_x29 + -0xe0) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0xe0);
  }
LAB_1012769b4:
  unaff_x23 = 0x8000000000000000;
  pcVar16 = unaff_x21;
  if ((unaff_w24 & 0x1e) != 0x14) {
    unaff_x23 = 0x8000000000000000;
    FUN_100e077ec(&stack0x00000100);
  }
LAB_1012769cc:
  lVar14 = in_stack_00000098;
  unaff_x21 = pcVar16;
  if (unaff_x23 == unaff_x25) {
LAB_101276d24:
    lVar14 = in_stack_00000090;
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
      _free(lVar14);
    }
LAB_101276d80:
    lVar14 = ((ulong)((long)in_stack_00000028 - (long)unaff_x21) >> 5) + 1;
    while (lVar14 = lVar14 + -1, lVar14 != 0) {
      FUN_100e077ec(unaff_x21);
      unaff_x21 = unaff_x21 + 0x20;
    }
joined_r0x000101276c84:
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
    func_0x000108880298(&stack0x00000088);
  }
  lVar10 = in_stack_00000118;
  pbVar6 = in_stack_00000110;
  lVar19 = in_stack_00000108;
  puVar11 = (ulong *)(in_stack_00000090 + lVar14 * 0x30);
  puVar11[1] = (ulong)in_stack_000000a8;
  *puVar11 = in_stack_000000a0;
  puVar11[3] = in_stack_000000b8;
  puVar11[2] = (ulong)in_stack_000000b0;
  puVar11[5] = in_stack_000000c8;
  puVar11[4] = (ulong)in_stack_000000c0;
  in_stack_00000098 = lVar14 + 1;
  unaff_x21 = in_stack_00000028;
  if (pcVar16 == in_stack_00000028) {
LAB_101276c00:
    in_stack_00000000[1] = in_stack_00000090;
    *in_stack_00000000 = in_stack_00000088;
    in_stack_00000000[2] = in_stack_00000098;
    lVar14 = *in_stack_00000000;
    if (lVar14 == -0x8000000000000000) goto LAB_101276d80;
    in_stack_00000010 = in_stack_00000000[1];
    lVar19 = in_stack_00000000[2];
    lVar10 = FUN_100fbc738(&stack0x00000060);
    if (lVar10 == 0) {
      return;
    }
    *in_stack_00000000 = -0x8000000000000000;
    in_stack_00000000[1] = lVar10;
    in_stack_00000008 = lVar14;
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
    goto joined_r0x000101276c84;
  }
  unaff_x21 = pcVar16 + 0x20;
  cVar4 = *pcVar16;
  in_stack_00000068 = unaff_x21;
  if (cVar4 == '\x16') goto LAB_101276c00;
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
LAB_101276704:
      pbVar9 = (byte *)FUN_1087e422c(0,&UNK_10b22e3f8,&UNK_10b20a590);
LAB_101276720:
      in_stack_000000d0 = 0x8000000000000000;
      pbVar15 = pbVar9;
      in_stack_000000d8 = pbVar9;
LAB_10127672c:
      lVar14 = ((ulong)((long)pbVar18 - (long)pbVar20) >> 5) + 1;
      while (lVar14 = lVar14 + -1, lVar14 != 0) {
        FUN_100e077ec(pbVar20);
        pbVar20 = pbVar20 + 0x20;
      }
      pbVar8 = pbVar6;
      if (lVar19 != 0) goto LAB_101276758;
      unaff_x23 = 0x8000000000000000;
      unaff_x25 = 0x8000000000000000;
      pbVar9 = pbVar15;
    }
    else {
      pbVar20 = in_stack_00000110 + 0x20;
      bVar5 = *in_stack_00000110;
      *(byte **)(unaff_x29 + -0xd8) = pbVar20;
      if (bVar5 == 0x16) goto LAB_101276704;
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
      if (unaff_x23 == 0x8000000000000000) goto LAB_101276720;
      if (lVar10 == 1) {
LAB_1012767f8:
        pbVar8 = (byte *)FUN_1087e422c(1,&UNK_10b22e3f8,&UNK_10b20a590);
LAB_101276814:
        in_stack_000000d0 = 0x8000000000000000;
        pbVar15 = pbVar8;
        in_stack_000000d8 = pbVar8;
        if (unaff_x23 != 0) {
          _free(pbVar9);
        }
        goto LAB_10127672c;
      }
      pbVar15 = *(byte **)(unaff_x29 + -0x80);
      pbVar20 = pbVar6 + 0x40;
      *(byte **)(unaff_x29 + -0xd8) = pbVar20;
      bVar5 = pbVar6[0x20];
      if (bVar5 == 0x16) goto LAB_1012767f8;
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
      in_stack_00000048 = pbVar15;
      if (uVar2 == 0x8000000000000000) goto LAB_101276814;
      in_stack_000000f8 = *(ulong *)(unaff_x29 + -0x80);
      in_stack_000000d0 = unaff_x23;
      in_stack_000000d8 = pbVar9;
      in_stack_000000e0 = pbVar15;
      in_stack_000000e8 = uVar2;
      in_stack_000000f0 = pbVar8;
      pbVar15 = (byte *)FUN_100fbc738(unaff_x29 + -0xe0);
      unaff_x25 = 0x8000000000000000;
      if (pbVar15 != (byte *)0x0) {
        in_stack_000000d0 = 0x8000000000000000;
        in_stack_000000d8 = pbVar15;
        if (unaff_x23 != 0) {
          _free(pbVar9);
        }
        if (uVar2 == 0) {
          unaff_x23 = 0x8000000000000000;
          pbVar9 = pbVar15;
        }
        else {
LAB_101276758:
          _free(pbVar8);
          unaff_x23 = 0x8000000000000000;
          unaff_x25 = 0x8000000000000000;
          pbVar9 = pbVar15;
        }
      }
    }
    goto LAB_1012769cc;
  }
  if (cVar4 != '\x15') {
    pbVar9 = (byte *)FUN_108855b04(&stack0x00000100,unaff_x29 + -0x90,&UNK_10b20bfc0);
    goto LAB_101276d24;
  }
  lVar14 = in_stack_00000118 * 0x40;
  pbVar9 = in_stack_00000110 + lVar14;
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
      lVar10 = lVar19;
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
      piVar1 = *(int **)(unaff_x29 + -0x70);
      piVar3 = *(int **)(unaff_x29 + -0x68);
      if (bVar5 < 0xd) {
        if (bVar5 == 1) {
          iVar13 = 1;
          if (*(char *)(unaff_x29 + -0x77) != '\x01') {
            iVar13 = 2;
          }
          iVar12 = 0;
          if (*(char *)(unaff_x29 + -0x77) != '\0') {
            iVar12 = iVar13;
          }
        }
        else {
          if (bVar5 != 4) {
            if (bVar5 == 0xc) {
              if (*(long *)(unaff_x29 + -0x60) == 4) {
                if (*piVar3 == 0x656c6f72) {
                  iVar12 = 0;
                }
                else {
                  iVar12 = 1;
                  if (*piVar3 != 0x74786574) {
                    iVar12 = 2;
                  }
                }
              }
              else {
                iVar12 = 2;
              }
              goto joined_r0x000101276530;
            }
LAB_101276b64:
            *(byte **)(unaff_x29 + -0xb8) = pbVar18;
            *(long *)(unaff_x29 + -0xa0) = lVar19 + 1;
            pbVar9 = (byte *)FUN_108855b04(unaff_x29 + -0x78,unaff_x29 + -0x90,&UNK_10b211520);
            unaff_x25 = 0x8000000000000000;
            goto joined_r0x000101276898;
          }
          iVar13 = 1;
          if (piVar1 != (int *)0x1) {
            iVar13 = 2;
          }
          iVar12 = 0;
          if (piVar1 != (int *)0x0) {
            iVar12 = iVar13;
          }
        }
LAB_1012765b8:
        FUN_100e077ec(unaff_x29 + -0x78);
      }
      else {
        if (bVar5 == 0xd) {
          if (piVar3 != (int *)0x4) goto LAB_1012765b4;
          if (*piVar1 == 0x656c6f72) {
LAB_101276538:
            iVar12 = 0;
          }
          else {
            iVar12 = 1;
            if (*piVar1 != 0x74786574) {
              iVar12 = 2;
            }
          }
          goto LAB_1012765b8;
        }
        if (bVar5 != 0xe) {
          if (bVar5 != 0xf) goto LAB_101276b64;
          if (piVar3 == (int *)0x4) {
            if ((char)*piVar1 == 't') {
              if (((*(char *)((long)piVar1 + 1) == 'e') && (*(char *)((long)piVar1 + 2) == 'x')) &&
                 (*(char *)((long)piVar1 + 3) == 't')) {
                iVar12 = 1;
                goto LAB_1012765b8;
              }
            }
            else if ((((char)*piVar1 == 'r') && (*(char *)((long)piVar1 + 1) == 'o')) &&
                    ((*(char *)((long)piVar1 + 2) == 'l' && (*(char *)((long)piVar1 + 3) == 'e'))))
            goto LAB_101276538;
          }
LAB_1012765b4:
          iVar12 = 2;
          goto LAB_1012765b8;
        }
        if (*(long *)(unaff_x29 + -0x60) == 4) {
          if ((char)*piVar3 == 't') {
            if (((*(char *)((long)piVar3 + 1) != 'e') || (*(char *)((long)piVar3 + 2) != 'x')) ||
               (*(char *)((long)piVar3 + 3) != 't')) goto LAB_101276578;
            iVar12 = 1;
          }
          else {
            if (((((char)*piVar3 != 'r') || (*(char *)((long)piVar3 + 1) != 'o')) ||
                (*(char *)((long)piVar3 + 2) != 'l')) || (*(char *)((long)piVar3 + 3) != 'e'))
            goto LAB_101276578;
            iVar12 = 0;
          }
        }
        else {
LAB_101276578:
          iVar12 = 2;
        }
joined_r0x000101276530:
        if (piVar1 != (int *)0x0) {
          _free();
        }
      }
      if (iVar12 == 0) {
        if (unaff_x23 != 0x8000000000000000) {
          *(byte **)(unaff_x29 + -0xb8) = pbVar18;
          *(long *)(unaff_x29 + -0xa0) = lVar19 + 1;
          *(undefined **)(unaff_x29 + -0x90) = &UNK_108cde374;
          *(undefined8 *)(unaff_x29 + -0x88) = 4;
          *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
          *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
          pbVar9 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x78);
          unaff_x25 = 0x8000000000000000;
          goto joined_r0x000101276898;
        }
        cVar4 = *(char *)(unaff_x29 + -0xe0);
        *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
        if (cVar4 == '\x16') {
          *(byte **)(unaff_x29 + -0xb8) = pbVar18;
          *(long *)(unaff_x29 + -0xa0) = lVar19 + 1;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_101276e0c;
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
          goto joined_r0x000101276898;
        }
        in_stack_00000048 = *(byte **)(unaff_x29 + -0x88);
        in_stack_00000038 = *(byte **)(unaff_x29 + -0x80);
      }
      else if (iVar12 == 1) {
        if (unaff_x28 != 0x8000000000000000) {
          *(byte **)(unaff_x29 + -0xb8) = pbVar18;
          *(long *)(unaff_x29 + -0xa0) = lVar19 + 1;
          *(undefined **)(unaff_x29 + -0x90) = &UNK_108c72520;
          *(undefined8 *)(unaff_x29 + -0x88) = 4;
          *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
          *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
          pbVar9 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x78);
          unaff_x25 = 0x8000000000000000;
          goto joined_r0x000101276898;
        }
        cVar4 = *(char *)(unaff_x29 + -0xe0);
        *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
        if (cVar4 == '\x16') {
          *(byte **)(unaff_x29 + -0xb8) = pbVar18;
          *(long *)(unaff_x29 + -0xa0) = lVar19 + 1;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_101276e0c;
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
          goto LAB_10127698c;
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
LAB_101276e0c:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101276e10);
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
      lVar10 = (lVar14 - 0x40U >> 6) + 1;
      pbVar6 = pbVar18;
    } while (pbVar18 != pbVar9);
    *(byte **)(unaff_x29 + -0xb8) = pbVar20;
    *(long *)(unaff_x29 + -0xa0) = lVar10;
    if (unaff_x23 != 0x8000000000000000) {
      if (unaff_x28 == 0x8000000000000000) {
        *(undefined **)(unaff_x29 + -0x90) = &UNK_108c72520;
        *(undefined8 *)(unaff_x29 + -0x88) = 4;
        *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
        *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
        pbVar9 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x78);
        unaff_x25 = 0x8000000000000000;
        in_stack_000000d0 = 0x8000000000000000;
        in_stack_000000d8 = pbVar9;
        goto joined_r0x000101276990;
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
        goto LAB_1012769cc;
      }
      *(long *)(unaff_x29 + -0x78) = lVar10;
      pbVar9 = (byte *)FUN_1087e422c(((ulong)((long)pbVar9 - (long)pbVar20) >> 6) + lVar10,
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
        goto LAB_1012769cc;
      }
      goto LAB_1012769b4;
    }
    unaff_x25 = 0x8000000000000000;
  }
  *(undefined **)(unaff_x29 + -0x90) = &UNK_108cde374;
  *(undefined8 *)(unaff_x29 + -0x88) = 4;
  unaff_x23 = 0;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
  *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
  param_2 = unaff_x29 + -0x78;
  goto code_r0x000101276880;
}

