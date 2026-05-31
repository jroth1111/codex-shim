
void FUN_101447130(undefined8 param_1,long param_2)

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
  undefined8 uVar10;
  ulong *puVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  byte *pbVar15;
  long lVar16;
  undefined8 *unaff_x19;
  undefined8 *puVar17;
  char *unaff_x21;
  char *pcVar18;
  ulong unaff_x22;
  byte unaff_w24;
  byte *pbVar19;
  ulong unaff_x25;
  long lVar20;
  byte *pbVar21;
  long unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
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
  
code_r0x000101447130:
  pbVar9 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,param_2);
joined_r0x000101447148:
  unaff_x28 = unaff_x28 & 0x7fffffffffffffff;
joined_r0x000101447148:
  in_stack_000000d0 = unaff_x25;
  in_stack_000000d8 = pbVar9;
  if (unaff_x28 != 0) {
    _free(in_stack_00000040);
  }
LAB_10144723c:
  unaff_x22 = unaff_x22 & 0x7fffffffffffffff;
joined_r0x000101447240:
  if (unaff_x22 != 0) {
    _free(in_stack_00000048);
  }
  FUN_100d34830(unaff_x29 + -0xc0);
  if (*(char *)(unaff_x29 + -0xe0) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0xe0);
  }
LAB_101447264:
  unaff_x22 = 0x8000000000000000;
  pcVar18 = unaff_x21;
  if ((unaff_w24 & 0x1e) != 0x14) {
    unaff_x22 = 0x8000000000000000;
    FUN_100e077ec(&stack0x00000100);
  }
LAB_10144727c:
  lVar14 = in_stack_00000098;
  unaff_x21 = pcVar18;
  if (unaff_x22 == unaff_x25) {
LAB_1014475e0:
    lVar14 = in_stack_00000090;
    *(byte **)(unaff_x29 + -0xd8) = pbVar9;
    if (in_stack_00000098 != 0) {
      puVar17 = (undefined8 *)(in_stack_00000090 + 0x20);
      lVar20 = in_stack_00000098;
      do {
        if (puVar17[-4] != 0) {
          _free(puVar17[-3]);
        }
        if (puVar17[-1] != 0) {
          _free(*puVar17);
        }
        puVar17 = puVar17 + 6;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    if (in_stack_00000088 != 0) {
      _free(lVar14);
    }
LAB_101447634:
    lVar14 = ((ulong)((long)in_stack_00000028 - (long)unaff_x21) >> 5) + 1;
    while (lVar14 = lVar14 + -1, lVar14 != 0) {
      FUN_100e077ec(unaff_x21);
      unaff_x21 = unaff_x21 + 0x20;
    }
joined_r0x000101447528:
    if (in_stack_00000000 != 0) {
      _free(in_stack_00000010);
    }
    uVar10 = *(undefined8 *)(unaff_x29 + -0xd8);
    *in_stack_00000008 = 0x8000000000000001;
    in_stack_00000008[1] = uVar10;
    return;
  }
  in_stack_000000b8 = in_stack_000000e8;
  in_stack_000000b0 = in_stack_000000e0;
  in_stack_000000c8 = in_stack_000000f8;
  in_stack_000000c0 = in_stack_000000f0;
  in_stack_000000a0 = unaff_x22;
  in_stack_000000a8 = pbVar9;
  if (in_stack_00000098 == in_stack_00000088) {
    func_0x0001089bea98(&stack0x00000088);
  }
  lVar16 = in_stack_00000118;
  pbVar6 = in_stack_00000110;
  lVar20 = in_stack_00000108;
  puVar11 = (ulong *)(in_stack_00000090 + lVar14 * 0x30);
  puVar11[1] = (ulong)in_stack_000000a8;
  *puVar11 = in_stack_000000a0;
  puVar11[3] = in_stack_000000b8;
  puVar11[2] = (ulong)in_stack_000000b0;
  puVar11[5] = in_stack_000000c8;
  puVar11[4] = (ulong)in_stack_000000c0;
  in_stack_00000098 = lVar14 + 1;
  unaff_x21 = in_stack_00000028;
  if (pcVar18 == in_stack_00000028) {
LAB_1014474b0:
    *(long *)(unaff_x29 + -0xd8) = in_stack_00000090;
    *(long *)(unaff_x29 + -0xe0) = in_stack_00000088;
    *(long *)(unaff_x29 + -0xd0) = in_stack_00000098;
    lVar14 = *(long *)(unaff_x29 + -0xe0);
    if (lVar14 == -0x8000000000000000) goto LAB_101447634;
    in_stack_00000010 = *(long *)(unaff_x29 + -0xd8);
    lVar20 = *(long *)(unaff_x29 + -0xd0);
    lVar16 = FUN_100fbc738(&stack0x00000060);
    if (lVar16 == 0) {
      uVar10 = *(undefined8 *)(unaff_x29 + -0xe0);
      in_stack_00000008[1] = *(undefined8 *)(unaff_x29 + -0xd8);
      *in_stack_00000008 = uVar10;
      in_stack_00000008[2] = *(undefined8 *)(unaff_x29 + -0xd0);
      return;
    }
    *(long *)(unaff_x29 + -0xd8) = lVar16;
    in_stack_00000000 = lVar14;
    if (lVar20 != 0) {
      puVar17 = (undefined8 *)(in_stack_00000010 + 0x20);
      do {
        if (puVar17[-4] != 0) {
          _free(puVar17[-3]);
        }
        if (puVar17[-1] != 0) {
          _free(*puVar17);
        }
        puVar17 = puVar17 + 6;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    goto joined_r0x000101447528;
  }
  unaff_x21 = pcVar18 + 0x20;
  cVar4 = *pcVar18;
  in_stack_00000068 = unaff_x21;
  if (cVar4 == '\x16') goto LAB_1014474b0;
  uVar10 = *(undefined8 *)(pcVar18 + 1);
  in_stack_00000020[1] = *(undefined8 *)(pcVar18 + 9);
  *in_stack_00000020 = uVar10;
  uVar10 = *(undefined8 *)(pcVar18 + 0x10);
  *(undefined8 *)((long)in_stack_00000020 + 0x17) = *(undefined8 *)(pcVar18 + 0x18);
  *(undefined8 *)((long)in_stack_00000020 + 0xf) = uVar10;
  unaff_x27 = unaff_x27 + 1;
  pcVar18 = unaff_x21;
  in_stack_00000080 = unaff_x27;
  in_stack_00000100 = cVar4;
  if (cVar4 == '\x14') {
    pbVar19 = in_stack_00000110 + in_stack_00000118 * 0x20;
    *(byte **)(unaff_x29 + -0xe0) = in_stack_00000110;
    *(byte **)(unaff_x29 + -0xd8) = in_stack_00000110;
    *(long *)(unaff_x29 + -0xd0) = in_stack_00000108;
    *(byte **)(unaff_x29 + -200) = pbVar19;
    *(undefined8 *)(unaff_x29 + -0xc0) = 0;
    pbVar21 = in_stack_00000110;
    if (in_stack_00000118 == 0) {
LAB_101446fb4:
      pbVar9 = (byte *)FUN_1087e422c(0,&UNK_10b22f528,&UNK_10b20a590);
LAB_101446fd0:
      in_stack_000000d0 = 0x8000000000000000;
      pbVar15 = pbVar9;
      in_stack_000000d8 = pbVar9;
LAB_101446fdc:
      lVar14 = ((ulong)((long)pbVar19 - (long)pbVar21) >> 5) + 1;
      while (lVar14 = lVar14 + -1, lVar14 != 0) {
        FUN_100e077ec(pbVar21);
        pbVar21 = pbVar21 + 0x20;
      }
      pbVar8 = pbVar6;
      if (lVar20 != 0) goto LAB_101447008;
      unaff_x22 = 0x8000000000000000;
      unaff_x25 = 0x8000000000000000;
      pbVar9 = pbVar15;
    }
    else {
      pbVar21 = in_stack_00000110 + 0x20;
      bVar5 = *in_stack_00000110;
      *(byte **)(unaff_x29 + -0xd8) = pbVar21;
      if (bVar5 == 0x16) goto LAB_101446fb4;
      uVar10 = *(undefined8 *)(in_stack_00000110 + 1);
      unaff_x19[1] = *(undefined8 *)(in_stack_00000110 + 9);
      *unaff_x19 = uVar10;
      uVar10 = *(undefined8 *)(in_stack_00000110 + 0x10);
      *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)(in_stack_00000110 + 0x18);
      *(undefined8 *)((long)unaff_x19 + 0xf) = uVar10;
      *(undefined8 *)(unaff_x29 + -0xc0) = 1;
      *(byte *)(unaff_x29 + -0x78) = bVar5;
      FUN_1004b62d4(unaff_x29 + -0x90,unaff_x29 + -0x78);
      unaff_x22 = *(ulong *)(unaff_x29 + -0x90);
      pbVar9 = *(byte **)(unaff_x29 + -0x88);
      if (unaff_x22 == 0x8000000000000000) goto LAB_101446fd0;
      if (lVar16 == 1) {
LAB_1014470a8:
        pbVar8 = (byte *)FUN_1087e422c(1,&UNK_10b22f528,&UNK_10b20a590);
LAB_1014470c4:
        in_stack_000000d0 = 0x8000000000000000;
        pbVar15 = pbVar8;
        in_stack_000000d8 = pbVar8;
        if (unaff_x22 != 0) {
          _free(pbVar9);
        }
        goto LAB_101446fdc;
      }
      pbVar15 = *(byte **)(unaff_x29 + -0x80);
      pbVar21 = pbVar6 + 0x40;
      *(byte **)(unaff_x29 + -0xd8) = pbVar21;
      bVar5 = pbVar6[0x20];
      if (bVar5 == 0x16) goto LAB_1014470a8;
      uVar10 = *(undefined8 *)(pbVar6 + 0x21);
      unaff_x19[1] = *(undefined8 *)(pbVar6 + 0x29);
      *unaff_x19 = uVar10;
      uVar10 = *(undefined8 *)(pbVar6 + 0x30);
      *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)(pbVar6 + 0x38);
      *(undefined8 *)((long)unaff_x19 + 0xf) = uVar10;
      *(undefined8 *)(unaff_x29 + -0xc0) = 2;
      *(byte *)(unaff_x29 + -0x78) = bVar5;
      FUN_1004b62d4(unaff_x29 + -0x90,unaff_x29 + -0x78);
      uVar2 = *(ulong *)(unaff_x29 + -0x90);
      pbVar8 = *(byte **)(unaff_x29 + -0x88);
      in_stack_00000048 = pbVar15;
      if (uVar2 == 0x8000000000000000) goto LAB_1014470c4;
      in_stack_000000f8 = *(ulong *)(unaff_x29 + -0x80);
      in_stack_000000d0 = unaff_x22;
      in_stack_000000d8 = pbVar9;
      in_stack_000000e0 = pbVar15;
      in_stack_000000e8 = uVar2;
      in_stack_000000f0 = pbVar8;
      pbVar15 = (byte *)FUN_100fbc738(unaff_x29 + -0xe0);
      unaff_x25 = 0x8000000000000000;
      if (pbVar15 != (byte *)0x0) {
        in_stack_000000d0 = 0x8000000000000000;
        in_stack_000000d8 = pbVar15;
        if (unaff_x22 != 0) {
          _free(pbVar9);
        }
        if (uVar2 == 0) {
          unaff_x22 = 0x8000000000000000;
          pbVar9 = pbVar15;
        }
        else {
LAB_101447008:
          _free(pbVar8);
          unaff_x22 = 0x8000000000000000;
          unaff_x25 = 0x8000000000000000;
          pbVar9 = pbVar15;
        }
      }
    }
    goto LAB_10144727c;
  }
  if (cVar4 != '\x15') {
    pbVar9 = (byte *)FUN_108855b04(&stack0x00000100,unaff_x29 + -0x90,&UNK_10b20ade0);
    goto LAB_1014475e0;
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
    lVar20 = 0;
    unaff_x22 = 0x8000000000000000;
    unaff_x28 = 0x8000000000000000;
    do {
      pbVar19 = pbVar6 + 0x40;
      bVar5 = *pbVar6;
      pbVar21 = pbVar19;
      lVar16 = lVar20;
      if (bVar5 == 0x16) break;
      *(byte *)(unaff_x29 + -0x78) = bVar5;
      uVar10 = *(undefined8 *)(pbVar6 + 0x10);
      *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)(pbVar6 + 0x18);
      *(undefined8 *)((long)unaff_x19 + 0xf) = uVar10;
      uVar10 = *(undefined8 *)(pbVar6 + 1);
      unaff_x19[1] = *(undefined8 *)(pbVar6 + 9);
      *unaff_x19 = uVar10;
      uVar10 = *(undefined8 *)(pbVar6 + 0x20);
      *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(pbVar6 + 0x28);
      *(undefined8 *)(unaff_x29 + -0xe0) = uVar10;
      uVar10 = *(undefined8 *)(pbVar6 + 0x30);
      *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(pbVar6 + 0x38);
      *(undefined8 *)(unaff_x29 + -0xd0) = uVar10;
      plVar1 = *(long **)(unaff_x29 + -0x70);
      plVar3 = *(long **)(unaff_x29 + -0x68);
      lVar16 = *(long *)(unaff_x29 + -0x60);
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
              if (lVar16 == 0xb) {
                iVar12 = 1;
                if (*plVar3 != 0x7470697263736564 ||
                    *(long *)((long)plVar3 + 3) != 0x6e6f697470697263) {
                  iVar12 = 2;
                }
              }
              else if (lVar16 == 5) {
                iVar12 = 2;
                if ((int)*plVar3 == 0x6562616c && *(char *)((long)plVar3 + 4) == 'l') {
                  iVar12 = 0;
                }
              }
              else {
                iVar12 = 2;
              }
              goto joined_r0x000101446d7c;
            }
LAB_101447414:
            *(byte **)(unaff_x29 + -0xb8) = pbVar19;
            *(long *)(unaff_x29 + -0xa0) = lVar20 + 1;
            pbVar9 = (byte *)FUN_108855b04(unaff_x29 + -0x78,unaff_x29 + -0x90,&UNK_10b20d420);
            unaff_x25 = 0x8000000000000000;
            goto joined_r0x000101447148;
          }
          iVar13 = 1;
          if (plVar1 != (long *)0x1) {
            iVar13 = 2;
          }
          iVar12 = 0;
          if (plVar1 != (long *)0x0) {
            iVar12 = iVar13;
          }
        }
LAB_101446e58:
        FUN_100e077ec(unaff_x29 + -0x78);
      }
      else {
        if (bVar5 == 0xd) {
          if (plVar3 == (long *)0xb) {
            iVar12 = 1;
            if (*plVar1 != 0x7470697263736564 || *(long *)((long)plVar1 + 3) != 0x6e6f697470697263)
            {
              iVar12 = 2;
            }
          }
          else {
            if (plVar3 != (long *)0x5) goto LAB_101446e10;
            iVar12 = 2;
            if ((int)*plVar1 == 0x6562616c && *(char *)((long)plVar1 + 4) == 'l') {
              iVar12 = 0;
            }
          }
          goto LAB_101446e58;
        }
        if (bVar5 != 0xe) {
          if (bVar5 != 0xf) goto LAB_101447414;
          if (plVar3 == (long *)0xb) {
            if (((((char)*plVar1 != 'd') || (*(char *)((long)plVar1 + 1) != 'e')) ||
                (*(char *)((long)plVar1 + 2) != 's')) ||
               (((((*(char *)((long)plVar1 + 3) != 'c' || (*(char *)((long)plVar1 + 4) != 'r')) ||
                  ((*(char *)((long)plVar1 + 5) != 'i' ||
                   ((*(char *)((long)plVar1 + 6) != 'p' || (*(char *)((long)plVar1 + 7) != 't'))))))
                 || ((char)plVar1[1] != 'i')) ||
                ((*(char *)((long)plVar1 + 9) != 'o' || (*(char *)((long)plVar1 + 10) != 'n'))))))
            goto LAB_101446e10;
            iVar12 = 1;
          }
          else if (((((plVar3 == (long *)0x5) && ((char)*plVar1 == 'l')) &&
                    (*(char *)((long)plVar1 + 1) == 'a')) &&
                   ((*(char *)((long)plVar1 + 2) == 'b' && (*(char *)((long)plVar1 + 3) == 'e'))))
                  && (*(char *)((long)plVar1 + 4) == 'l')) {
            iVar12 = 0;
          }
          else {
LAB_101446e10:
            iVar12 = 2;
          }
          goto LAB_101446e58;
        }
        if (lVar16 == 0xb) {
          if (((((char)*plVar3 != 'd') || (*(char *)((long)plVar3 + 1) != 'e')) ||
              ((*(char *)((long)plVar3 + 2) != 's' ||
               (((*(char *)((long)plVar3 + 3) != 'c' || (*(char *)((long)plVar3 + 4) != 'r')) ||
                (*(char *)((long)plVar3 + 5) != 'i')))))) ||
             (((*(char *)((long)plVar3 + 6) != 'p' || (*(char *)((long)plVar3 + 7) != 't')) ||
              (((char)plVar3[1] != 'i' ||
               ((*(char *)((long)plVar3 + 9) != 'o' || (*(char *)((long)plVar3 + 10) != 'n'))))))))
          goto LAB_101446d30;
          iVar12 = 1;
        }
        else if ((((lVar16 == 5) && ((char)*plVar3 == 'l')) && (*(char *)((long)plVar3 + 1) == 'a'))
                && (((*(char *)((long)plVar3 + 2) == 'b' && (*(char *)((long)plVar3 + 3) == 'e')) &&
                    (*(char *)((long)plVar3 + 4) == 'l')))) {
          iVar12 = 0;
        }
        else {
LAB_101446d30:
          iVar12 = 2;
        }
joined_r0x000101446d7c:
        if (plVar1 != (long *)0x0) {
          _free();
        }
      }
      if (iVar12 == 0) {
        if (unaff_x22 != 0x8000000000000000) {
          *(byte **)(unaff_x29 + -0xb8) = pbVar19;
          *(long *)(unaff_x29 + -0xa0) = lVar20 + 1;
          *(undefined **)(unaff_x29 + -0x90) = &UNK_108ca1b9f;
          *(undefined8 *)(unaff_x29 + -0x88) = 5;
          *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
          *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
          pbVar9 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x78);
          unaff_x25 = 0x8000000000000000;
          goto joined_r0x000101447148;
        }
        cVar4 = *(char *)(unaff_x29 + -0xe0);
        *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
        if (cVar4 == '\x16') {
          *(byte **)(unaff_x29 + -0xb8) = pbVar19;
          *(long *)(unaff_x29 + -0xa0) = lVar20 + 1;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_1014476c4;
        }
        uVar10 = *in_stack_00000058;
        unaff_x19[1] = in_stack_00000058[1];
        *unaff_x19 = uVar10;
        uVar10 = *(undefined8 *)((long)in_stack_00000058 + 0xf);
        *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)((long)in_stack_00000058 + 0x17);
        *(undefined8 *)((long)unaff_x19 + 0xf) = uVar10;
        *(char *)(unaff_x29 + -0x78) = cVar4;
        FUN_1004b62d4(unaff_x29 + -0x90,unaff_x29 + -0x78);
        unaff_x22 = *(ulong *)(unaff_x29 + -0x90);
        if (unaff_x22 == 0x8000000000000000) {
          *(byte **)(unaff_x29 + -0xb8) = pbVar19;
          *(long *)(unaff_x29 + -0xa0) = lVar20 + 1;
          pbVar9 = *(byte **)(unaff_x29 + -0x88);
          unaff_x22 = 0;
          unaff_x25 = 0x8000000000000000;
          goto joined_r0x000101447148;
        }
        in_stack_00000048 = *(byte **)(unaff_x29 + -0x88);
        in_stack_00000038 = *(byte **)(unaff_x29 + -0x80);
      }
      else if (iVar12 == 1) {
        if (unaff_x28 != 0x8000000000000000) {
          *(byte **)(unaff_x29 + -0xb8) = pbVar19;
          *(long *)(unaff_x29 + -0xa0) = lVar20 + 1;
          *(undefined **)(unaff_x29 + -0x90) = &UNK_108ca155d;
          *(undefined8 *)(unaff_x29 + -0x88) = 0xb;
          *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
          *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
          pbVar9 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x78);
          unaff_x25 = 0x8000000000000000;
          goto joined_r0x000101447148;
        }
        cVar4 = *(char *)(unaff_x29 + -0xe0);
        *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
        if (cVar4 == '\x16') {
          *(byte **)(unaff_x29 + -0xb8) = pbVar19;
          *(long *)(unaff_x29 + -0xa0) = lVar20 + 1;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_1014476c4;
        }
        uVar10 = *in_stack_00000058;
        unaff_x19[1] = in_stack_00000058[1];
        *unaff_x19 = uVar10;
        uVar10 = *(undefined8 *)((long)in_stack_00000058 + 0xf);
        *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)((long)in_stack_00000058 + 0x17);
        *(undefined8 *)((long)unaff_x19 + 0xf) = uVar10;
        *(char *)(unaff_x29 + -0x78) = cVar4;
        FUN_1004b62d4(unaff_x29 + -0x90,unaff_x29 + -0x78);
        unaff_x28 = *(ulong *)(unaff_x29 + -0x90);
        if (unaff_x28 == 0x8000000000000000) {
          *(byte **)(unaff_x29 + -0xb8) = pbVar19;
          *(long *)(unaff_x29 + -0xa0) = lVar20 + 1;
          pbVar9 = *(byte **)(unaff_x29 + -0x88);
          unaff_x25 = 0x8000000000000000;
          in_stack_000000d0 = 0x8000000000000000;
          in_stack_000000d8 = pbVar9;
          goto LAB_10144723c;
        }
        in_stack_00000040 = *(byte **)(unaff_x29 + -0x88);
        in_stack_00000030 = *(ulong *)(unaff_x29 + -0x80);
      }
      else {
        cVar4 = *(char *)(unaff_x29 + -0xe0);
        *(undefined1 *)(unaff_x29 + -0xe0) = 0x16;
        if (cVar4 == '\x16') {
          *(byte **)(unaff_x29 + -0xb8) = pbVar19;
          *(long *)(unaff_x29 + -0xa0) = lVar20 + 1;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1014476c4:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1014476c8);
          (*pcVar7)();
        }
        uVar10 = *in_stack_00000058;
        unaff_x19[1] = in_stack_00000058[1];
        *unaff_x19 = uVar10;
        uVar10 = *(undefined8 *)((long)in_stack_00000058 + 0xf);
        *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)((long)in_stack_00000058 + 0x17);
        *(undefined8 *)((long)unaff_x19 + 0xf) = uVar10;
        *(char *)(unaff_x29 + -0x78) = cVar4;
        FUN_100e077ec(unaff_x29 + -0x78);
      }
      lVar20 = lVar20 + 1;
      pbVar21 = pbVar9;
      lVar16 = (lVar14 - 0x40U >> 6) + 1;
      pbVar6 = pbVar19;
    } while (pbVar19 != pbVar9);
    *(byte **)(unaff_x29 + -0xb8) = pbVar21;
    *(long *)(unaff_x29 + -0xa0) = lVar16;
    if (unaff_x22 != 0x8000000000000000) {
      if (unaff_x28 == 0x8000000000000000) {
        *(undefined **)(unaff_x29 + -0x90) = &UNK_108ca155d;
        *(undefined8 *)(unaff_x29 + -0x88) = 0xb;
        *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
        *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
        pbVar9 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x78);
        unaff_x25 = 0x8000000000000000;
        in_stack_000000d0 = 0x8000000000000000;
        in_stack_000000d8 = pbVar9;
        goto joined_r0x000101447240;
      }
      in_stack_000000d8 = in_stack_00000048;
      in_stack_000000e0 = in_stack_00000038;
      in_stack_000000f0 = in_stack_00000040;
      in_stack_000000f8 = in_stack_00000030;
      in_stack_000000d0 = unaff_x22;
      in_stack_000000e8 = unaff_x28;
      FUN_100d34830(unaff_x29 + -0xc0);
      if (pbVar9 == pbVar21) {
        unaff_x25 = 0x8000000000000000;
        pbVar9 = in_stack_00000048;
        goto LAB_10144727c;
      }
      *(long *)(unaff_x29 + -0x78) = lVar16;
      pbVar9 = (byte *)FUN_1087e422c(((ulong)((long)pbVar9 - (long)pbVar21) >> 6) + lVar16,
                                     unaff_x29 + -0x78,&UNK_10b23a190);
      unaff_x25 = 0x8000000000000000;
      in_stack_000000d0 = 0x8000000000000000;
      in_stack_000000d8 = pbVar9;
      if (unaff_x22 != 0) {
        _free(in_stack_00000048);
      }
      if (unaff_x28 != 0) {
        _free(in_stack_00000040);
        unaff_x22 = 0x8000000000000000;
        goto LAB_10144727c;
      }
      goto LAB_101447264;
    }
    unaff_x25 = 0x8000000000000000;
  }
  *(undefined **)(unaff_x29 + -0x90) = &UNK_108ca1b9f;
  *(undefined8 *)(unaff_x29 + -0x88) = 5;
  unaff_x22 = 0;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
  *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
  param_2 = unaff_x29 + -0x78;
  goto code_r0x000101447130;
}

