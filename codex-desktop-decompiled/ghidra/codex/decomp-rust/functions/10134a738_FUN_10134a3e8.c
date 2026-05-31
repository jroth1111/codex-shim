
/* WARNING: Removing unreachable block (ram,0x00010134a7dc) */

void FUN_10134a3e8(undefined8 param_1,long param_2)

{
  int *piVar1;
  char *pcVar2;
  byte bVar3;
  bool bVar4;
  byte *extraout_x1;
  byte *pbVar5;
  byte *extraout_x1_00;
  byte *extraout_x1_01;
  byte *extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  int iVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  char cVar10;
  ulong unaff_x19;
  long lVar11;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong uVar12;
  long unaff_x23;
  char *pcVar13;
  char *unaff_x24;
  ulong *unaff_x25;
  char *unaff_x26;
  byte *pbVar14;
  long lVar15;
  ulong unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  ulong *in_stack_00000008;
  ulong *in_stack_00000018;
  long *in_stack_00000020;
  ulong *in_stack_00000028;
  char *in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  char *in_stack_00000080;
  ulong in_stack_00000088;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  char *pcStack00000000000000b8;
  ulong in_stack_000000c0;
  ulong in_stack_000000c8;
  ulong in_stack_000000d0;
  ulong in_stack_000000d8;
  char cStack00000000000000e0;
  undefined7 uStack00000000000000e1;
  
  do {
    auVar20 = FUN_108856088(s_missing_field_____108ac28f7,param_2);
    uVar16 = auVar20._8_8_;
    pcStack00000000000000b8 = auVar20._0_8_;
    lVar11 = unaff_x21 + 0x7ffffffffffffffb;
    if (unaff_x21 < 0x8000000000000005) {
      lVar11 = 2;
    }
    if (lVar11 == 0) goto joined_r0x00010134a420;
    if (lVar11 == 1) goto joined_r0x00010134a420;
    uVar12 = unaff_x21 ^ 0x8000000000000000;
    if (-1 < (long)unaff_x21) {
      uVar12 = 5;
    }
    if (4 < uVar12) {
      if (unaff_x21 != 0) {
        _free(unaff_x26);
        uVar16 = extraout_x1_06;
      }
      auVar20._8_8_ = uVar16;
      auVar20._0_8_ = pcStack00000000000000b8;
      unaff_x26 = (char *)(unaff_x20 & 0x7fffffffffffffff);
      unaff_x27 = unaff_x19;
      goto joined_r0x00010134a420;
    }
    uVar8 = unaff_x28;
    if (uVar12 == 2) {
      unaff_x26 = (char *)((ulong)unaff_x26 & 0x7fffffffffffffff);
      goto joined_r0x00010134a420;
    }
LAB_10134a5c8:
    lVar11 = in_stack_00000048;
    pcStack00000000000000b8 = auVar20._0_8_;
    if (uVar8 == unaff_x28) goto LAB_10134a86c;
    in_stack_00000058 = in_stack_000000c8;
    in_stack_00000050 = in_stack_000000c0;
    in_stack_00000068 = in_stack_000000d8;
    in_stack_00000060 = in_stack_000000d0;
    in_stack_00000070 = CONCAT71(uStack00000000000000e1,cStack00000000000000e0);
    if (uVar8 == 0x8000000000000008) goto LAB_10134a86c;
    in_stack_00000080 = pcStack00000000000000b8;
    in_stack_00000090 = in_stack_000000c8;
    in_stack_00000088 = in_stack_000000c0;
    in_stack_000000a0 = in_stack_000000d8;
    in_stack_00000098 = in_stack_000000d0;
    in_stack_00000078 = uVar8;
    in_stack_000000a8 = in_stack_00000070;
    if (in_stack_00000048 == in_stack_00000038) {
      func_0x0001089a4d98(&stack0x00000038,auVar20._8_8_);
    }
    puVar7 = (ulong *)(in_stack_00000040 + lVar11 * 0x38);
    puVar7[1] = (ulong)in_stack_00000080;
    *puVar7 = in_stack_00000078;
    puVar7[3] = in_stack_00000090;
    puVar7[2] = in_stack_00000088;
    puVar7[5] = in_stack_000000a0;
    puVar7[4] = in_stack_00000098;
    puVar7[6] = in_stack_000000a8;
    in_stack_00000048 = lVar11 + 1;
    if (unaff_x24 == in_stack_00000030) {
      in_stack_00000020[1] = in_stack_00000040;
      *in_stack_00000020 = in_stack_00000038;
      in_stack_00000020[2] = in_stack_00000048;
      return;
    }
    pcVar13 = unaff_x24 + 0x20;
    if (*unaff_x24 == '\x14') {
      lVar11 = *(long *)(unaff_x24 + 0x18);
      if (lVar11 == 0) {
        pcStack00000000000000b8 = (char *)FUN_1087e422c(0,&UNK_10b22e828,&UNK_10b20a590);
        goto LAB_10134a86c;
      }
      lVar15 = *(long *)(unaff_x24 + 0x10);
      FUN_101233c20(unaff_x29 + -0x90,lVar15);
      uVar12 = *(ulong *)(unaff_x29 + -0x90);
      pcStack00000000000000b8 = *(char **)(unaff_x29 + -0x88);
      if (uVar12 == unaff_x28) goto LAB_10134a86c;
      uVar8 = *(ulong *)(unaff_x29 + -0x80);
      uVar19 = *(ulong *)(unaff_x29 + -0x68);
      uVar9 = *(ulong *)(unaff_x29 + -0x70);
      in_stack_00000028[1] = *(ulong *)(unaff_x29 + -0x78);
      *in_stack_00000028 = uVar8;
      in_stack_00000028[3] = uVar19;
      in_stack_00000028[2] = uVar9;
      *(ulong *)(unaff_x29 + -0xe0) = uVar12;
      *(char **)(unaff_x29 + -0xd8) = pcStack00000000000000b8;
      if (lVar11 == 1) {
        auVar20 = FUN_1087e422c(1,&UNK_10b22e828,&UNK_10b20a590);
LAB_10134a440:
        uVar16 = auVar20._8_8_;
        uVar17 = auVar20._0_8_;
        lVar11 = uVar12 + 0x7ffffffffffffffb;
        if (uVar12 < 0x8000000000000005) {
          lVar11 = 2;
        }
        if ((lVar11 == 0) || (lVar11 == 1)) goto joined_r0x00010134a46c;
        uVar9 = uVar12 ^ 0x8000000000000000;
        if (-1 < (long)uVar12) {
          uVar9 = 5;
        }
        if (uVar9 < 5) break;
        if (uVar12 != 0) {
          _free(pcStack00000000000000b8);
          uVar16 = extraout_x1_05;
        }
        auVar20._8_8_ = uVar16;
        auVar20._0_8_ = uVar17;
        puVar7 = in_stack_00000008;
        unaff_x24 = pcVar13;
        uVar8 = unaff_x28;
        if ((*(ulong *)(unaff_x29 + -200) & 0x7fffffffffffffff) != 0) goto LAB_10134a470;
        goto LAB_10134a5c8;
      }
      FUN_10124fc10(unaff_x29 + -0x90,lVar15 + 0x20);
      if ((*(byte *)(unaff_x29 + -0x90) & 1) != 0) {
        auVar20._8_8_ = extraout_x1_03;
        auVar20._0_8_ = *(undefined8 *)(unaff_x29 + -0x88);
        goto LAB_10134a440;
      }
      cStack00000000000000e0 = *(char *)(unaff_x29 + -0x8f);
      pcStack00000000000000b8 = *(char **)(unaff_x23 + 0x48);
      auVar20._8_8_ = extraout_x1_03;
      auVar20._0_8_ = pcStack00000000000000b8;
      uVar8 = *(ulong *)(unaff_x23 + 0x40);
      *(undefined8 *)(unaff_x23 + 0x18) = *(undefined8 *)(unaff_x23 + 0x58);
      *(undefined8 *)(unaff_x23 + 0x10) = *(undefined8 *)(unaff_x23 + 0x50);
      *(undefined8 *)(unaff_x23 + 0x28) = *(undefined8 *)(unaff_x23 + 0x68);
      *(undefined8 *)(unaff_x23 + 0x20) = *(undefined8 *)(unaff_x23 + 0x60);
      if (uVar8 == unaff_x28) goto LAB_10134a86c;
      unaff_x24 = pcVar13;
      if (lVar11 == 2) goto LAB_10134a5c8;
      *(undefined8 *)(unaff_x29 + -0x90) = 2;
      auVar20 = FUN_1087e422c((lVar11 + 0x7fffffffffffffeU & 0x7ffffffffffffff) + 2,
                              unaff_x29 + -0x90,&UNK_10b23a1b0);
      uVar16 = auVar20._8_8_;
      uVar17 = auVar20._0_8_;
      lVar11 = uVar8 + 0x7ffffffffffffffb;
      if (uVar8 < 0x8000000000000005) {
        lVar11 = 2;
      }
      unaff_x27 = in_stack_000000c0;
      if ((lVar11 != 0) && (lVar11 != 1)) {
        uVar12 = uVar8 ^ 0x8000000000000000;
        if (-1 < (long)uVar8) {
          uVar12 = 5;
        }
        if (4 < uVar12) {
          if (uVar8 != 0) {
            _free(pcStack00000000000000b8);
            uVar16 = extraout_x1_08;
          }
          auVar20._8_8_ = uVar16;
          auVar20._0_8_ = uVar17;
          pcStack00000000000000b8 = (char *)(in_stack_000000c8 & 0x7fffffffffffffff);
          unaff_x27 = in_stack_000000d0;
          goto joined_r0x00010134a514;
        }
        uVar8 = unaff_x28;
        if (uVar12 == 2) {
          unaff_x26 = (char *)((ulong)pcStack00000000000000b8 & 0x7fffffffffffffff);
          pcStack00000000000000b8 = (char *)uVar17;
joined_r0x00010134a420:
          pcVar13 = unaff_x24;
          uVar8 = unaff_x28;
          if (unaff_x26 != (char *)0x0) goto LAB_10134a5c4;
        }
        goto LAB_10134a5c8;
      }
joined_r0x00010134a514:
      bVar4 = pcStack00000000000000b8 == (char *)0x0;
      uVar8 = unaff_x28;
      pcStack00000000000000b8 = (char *)uVar17;
      if (bVar4) goto LAB_10134a5c8;
      goto LAB_10134a5c4;
    }
    if (*unaff_x24 != '\x15') {
      pcStack00000000000000b8 = (char *)FUN_108855c40(unaff_x24,unaff_x29 + -0x90,&UNK_10b20bcc0);
LAB_10134a86c:
      *in_stack_00000020 = -0x8000000000000000;
      in_stack_00000020[1] = (long)pcStack00000000000000b8;
      FUN_100e79780(&stack0x00000038);
      return;
    }
    pbVar14 = *(byte **)(unaff_x24 + 0x10);
    lVar11 = *(long *)(unaff_x24 + 0x18);
    *(ulong *)(unaff_x29 + -0xe0) = unaff_x28;
    if (lVar11 == 0) {
LAB_10134a808:
      *(undefined **)(unaff_x29 + -0xb0) = &UNK_108c61038;
      *(undefined8 *)(unaff_x29 + -0xa8) = 4;
      *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xb0;
      *(undefined **)(unaff_x29 + -0x88) = &DAT_100c7b3a0;
      pcStack00000000000000b8 =
           (char *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x90);
      goto LAB_10134a86c;
    }
    lVar11 = lVar11 << 6;
    cVar10 = '\x03';
    uVar12 = 0x8000000000000007;
    unaff_x21 = 0x8000000000000007;
    unaff_x26 = unaff_x24;
    do {
      pbVar5 = pbVar14 + 0x20;
      bVar3 = *pbVar14;
      if (bVar3 < 0xd) {
        if (bVar3 == 1) {
          iVar6 = 1;
          if (pbVar14[1] != 1) {
            iVar6 = 2;
          }
          if (pbVar14[1] != 0) {
LAB_10134a23c:
            if (iVar6 != 2) goto LAB_10134a308;
            goto LAB_10134a0f8;
          }
        }
        else {
          if (bVar3 != 4) {
            if (bVar3 != 0xc) goto LAB_10134a6f8;
            piVar1 = *(int **)(pbVar14 + 0x10);
            lVar15 = *(long *)(pbVar14 + 0x18);
            goto joined_r0x00010134a134;
          }
          iVar6 = 1;
          if (*(long *)(pbVar14 + 8) != 1) {
            iVar6 = 2;
          }
          if (*(long *)(pbVar14 + 8) != 0) goto LAB_10134a23c;
        }
LAB_10134a24c:
        if (unaff_x21 != unaff_x28) {
          *(undefined **)(unaff_x29 + -0xb0) = &UNK_108c61038;
          *(undefined8 *)(unaff_x29 + -0xa8) = 4;
          *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xb0;
          *(undefined **)(unaff_x29 + -0x88) = &DAT_100c7b3a0;
          auVar20 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x90);
LAB_10134a58c:
          uVar16 = auVar20._8_8_;
          pcStack00000000000000b8 = auVar20._0_8_;
          lVar11 = unaff_x21 + 0x7ffffffffffffffb;
          if (unaff_x21 < 0x8000000000000005) {
            lVar11 = 2;
          }
          puVar7 = unaff_x25;
          if ((lVar11 != 0) && (lVar11 != 1)) {
            uVar12 = unaff_x21 ^ 0x8000000000000000;
            if (-1 < (long)unaff_x21) {
              uVar12 = 5;
            }
            if (uVar12 < 5) {
              unaff_x24 = pcVar13;
              uVar8 = unaff_x28;
              if (uVar12 != 2) goto LAB_10134a5c8;
              unaff_x26 = (char *)((ulong)unaff_x26 & 0x7fffffffffffffff);
            }
            else {
              if (unaff_x21 != 0) {
                _free(unaff_x26);
                uVar16 = extraout_x1_07;
              }
              auVar20._8_8_ = uVar16;
              auVar20._0_8_ = pcStack00000000000000b8;
              unaff_x26 = (char *)(*(ulong *)(unaff_x29 + -200) & 0x7fffffffffffffff);
              puVar7 = in_stack_00000018;
            }
          }
          unaff_x24 = pcVar13;
          uVar8 = unaff_x28;
          if (unaff_x26 == (char *)0x0) goto LAB_10134a5c8;
          unaff_x27 = *puVar7;
          goto LAB_10134a5c4;
        }
        FUN_101233c20(unaff_x29 + -0x90);
        unaff_x21 = *(ulong *)(unaff_x29 + -0x90);
        pcStack00000000000000b8 = *(char **)(unaff_x29 + -0x88);
        if (unaff_x21 == unaff_x28) goto LAB_10134a86c;
        uVar16 = *(undefined8 *)(unaff_x29 + -0x80);
        uVar18 = *(undefined8 *)(unaff_x29 + -0x68);
        uVar17 = *(undefined8 *)(unaff_x29 + -0x70);
        *(undefined8 *)(unaff_x23 + 0x78) = *(undefined8 *)(unaff_x29 + -0x78);
        *(undefined8 *)(unaff_x23 + 0x70) = uVar16;
        *(undefined8 *)(unaff_x23 + 0x88) = uVar18;
        *(undefined8 *)(unaff_x23 + 0x80) = uVar17;
        pbVar5 = extraout_x1_00;
        if (uVar12 != unaff_x28) {
          lVar15 = uVar12 + 0x7ffffffffffffffb;
          if (uVar12 < 0x8000000000000005) {
            lVar15 = 2;
          }
          puVar7 = unaff_x25;
          if ((lVar15 == 0) || (lVar15 == 1)) {
            uVar12 = *(ulong *)(unaff_x29 + -0xd8);
          }
          else {
            uVar8 = uVar12 ^ 0x8000000000000000;
            if (-1 < (long)uVar12) {
              uVar8 = 5;
            }
            if (uVar8 < 5) {
              if (uVar8 != 2) goto LAB_10134a0e8;
              uVar12 = *(ulong *)(unaff_x29 + -0xd8) & 0x7fffffffffffffff;
            }
            else {
              if (uVar12 != 0) {
                _free(*(undefined8 *)(unaff_x29 + -0xd8));
                pbVar5 = extraout_x1_02;
              }
              uVar12 = *(ulong *)(unaff_x29 + -200) & 0x7fffffffffffffff;
              puVar7 = in_stack_00000018;
            }
          }
          if (uVar12 != 0) {
            _free(*puVar7);
            pbVar5 = extraout_x1;
          }
        }
LAB_10134a0e8:
        *(ulong *)(unaff_x29 + -0xe0) = unaff_x21;
        *(char **)(unaff_x29 + -0xd8) = pcStack00000000000000b8;
        uVar12 = *(ulong *)(unaff_x23 + 0x70);
        uVar9 = *(ulong *)(unaff_x23 + 0x88);
        uVar8 = *(ulong *)(unaff_x23 + 0x80);
        unaff_x25[1] = *(ulong *)(unaff_x23 + 0x78);
        *unaff_x25 = uVar12;
        unaff_x25[3] = uVar9;
        unaff_x25[2] = uVar8;
        uVar12 = unaff_x21;
        unaff_x26 = pcStack00000000000000b8;
      }
      else if (bVar3 == 0xd) {
        piVar1 = *(int **)(pbVar14 + 8);
        lVar15 = *(long *)(pbVar14 + 0x10);
joined_r0x00010134a134:
        if (lVar15 == 6) {
          if (*piVar1 == 0x65636361 && (short)piVar1[1] == 0x7373) {
LAB_10134a308:
            if (cVar10 == '\x03') {
              FUN_10124fc10(unaff_x29 + -0x90);
              if (*(char *)(unaff_x29 + -0x90) != '\x01') {
                cVar10 = *(char *)(unaff_x29 + -0x8f);
                pbVar5 = extraout_x1_01;
                goto LAB_10134a0f8;
              }
              auVar20._8_8_ = extraout_x1_01;
              auVar20._0_8_ = *(undefined8 *)(unaff_x29 + -0x88);
            }
            else {
              *(undefined **)(unaff_x29 + -0xb0) = &UNK_108cad9d8;
              *(undefined8 *)(unaff_x29 + -0xa8) = 6;
              *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xb0;
              *(undefined **)(unaff_x29 + -0x88) = &DAT_100c7b3a0;
              auVar20 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x90);
            }
LAB_10134a580:
            pcStack00000000000000b8 = auVar20._0_8_;
            if (unaff_x21 != unaff_x28) goto LAB_10134a58c;
            goto LAB_10134a86c;
          }
        }
        else if ((lVar15 == 4) && (*piVar1 == 0x68746170)) goto LAB_10134a24c;
      }
      else {
        if (bVar3 != 0xe) {
          if (bVar3 == 0xf) {
            pcVar2 = *(char **)(pbVar14 + 8);
            lVar15 = *(long *)(pbVar14 + 0x10);
            goto joined_r0x00010134a1e8;
          }
LAB_10134a6f8:
          auVar20 = FUN_108855c40(pbVar14,unaff_x29 + -0x90,&UNK_10b210b40);
          goto LAB_10134a580;
        }
        pcVar2 = *(char **)(pbVar14 + 0x10);
        lVar15 = *(long *)(pbVar14 + 0x18);
joined_r0x00010134a1e8:
        if (lVar15 == 6) {
          if ((((*pcVar2 == 'a') && (pcVar2[1] == 'c')) && (pcVar2[2] == 'c')) &&
             (((pcVar2[3] == 'e' && (pcVar2[4] == 's')) && (pcVar2[5] == 's')))) goto LAB_10134a308;
        }
        else if ((((lVar15 == 4) && (*pcVar2 == 'p')) && (pcVar2[1] == 'a')) &&
                ((pcVar2[2] == 't' && (pcVar2[3] == 'h')))) goto LAB_10134a24c;
      }
LAB_10134a0f8:
      pbVar14 = pbVar14 + 0x40;
      lVar11 = lVar11 + -0x40;
    } while (lVar11 != 0);
    if (unaff_x21 == unaff_x28) goto LAB_10134a808;
    if (cVar10 != '\x03') {
      auVar20._8_8_ = pbVar5;
      auVar20._0_8_ = *(undefined8 *)(unaff_x23 + 0x48);
      *(undefined8 *)(unaff_x23 + 0x18) = *(undefined8 *)(unaff_x23 + 0x58);
      *(undefined8 *)(unaff_x23 + 0x10) = *(undefined8 *)(unaff_x23 + 0x50);
      *(undefined8 *)(unaff_x23 + 0x28) = *(undefined8 *)(unaff_x23 + 0x68);
      *(undefined8 *)(unaff_x23 + 0x20) = *(undefined8 *)(unaff_x23 + 0x60);
      unaff_x24 = pcVar13;
      uVar8 = *(ulong *)(unaff_x23 + 0x40);
      cStack00000000000000e0 = cVar10;
      goto LAB_10134a5c8;
    }
    unaff_x27 = *(ulong *)(unaff_x29 + -0xd0);
    unaff_x20 = *(ulong *)(unaff_x29 + -200);
    unaff_x19 = *(ulong *)(unaff_x29 + -0xc0);
    *(undefined **)(unaff_x29 + -0xb0) = &UNK_108cad9d8;
    *(undefined8 *)(unaff_x29 + -0xa8) = 6;
    *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xb0;
    *(undefined **)(unaff_x29 + -0x88) = &DAT_100c7b3a0;
    param_2 = unaff_x29 + -0x90;
    unaff_x24 = pcVar13;
  } while( true );
  unaff_x24 = pcVar13;
  uVar8 = unaff_x28;
  if (uVar9 != 2) goto LAB_10134a5c8;
  pcStack00000000000000b8 = (char *)((ulong)pcStack00000000000000b8 & 0x7fffffffffffffff);
joined_r0x00010134a46c:
  puVar7 = in_stack_00000028;
  unaff_x24 = pcVar13;
  uVar8 = unaff_x28;
  if (pcStack00000000000000b8 == (char *)0x0) goto LAB_10134a5c8;
LAB_10134a470:
  unaff_x27 = *puVar7;
  pcStack00000000000000b8 = (char *)uVar17;
LAB_10134a5c4:
  _free(unaff_x27);
  auVar20._8_8_ = extraout_x1_04;
  auVar20._0_8_ = pcStack00000000000000b8;
  unaff_x24 = pcVar13;
  uVar8 = unaff_x28;
  goto LAB_10134a5c8;
}

