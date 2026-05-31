
void FUN_100bb4744(undefined8 param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  long *unaff_x19;
  bool bVar11;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  undefined *puVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  char cVar15;
  undefined8 *unaff_x25;
  undefined *unaff_x26;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  ulong *puVar20;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000020;
  ulong *in_stack_00000030;
  char in_stack_00000038;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  ulong *in_stack_000000b0;
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 *in_stack_000000f0;
  long in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000120;
  long in_stack_00000128;
  ulong in_stack_00000138;
  undefined8 *in_stack_00000140;
  long in_stack_00000148;
  long in_stack_00000150;
  long in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  ulong in_stack_00000180;
  undefined *in_stack_00000188;
  ulong *in_stack_00000190;
  ulong in_stack_00000198;
  ulong in_stack_000001a0;
  ulong in_stack_000001a8;
  ulong in_stack_000001b0;
  ulong in_stack_000001b8;
  ulong in_stack_000001c0;
  undefined8 *in_stack_000001c8;
  undefined8 *in_stack_000001d0;
  ulong in_stack_000001d8;
  undefined8 *in_stack_000001e0;
  
code_r0x000100bb4744:
  puVar5 = (ulong *)FUN_108856088(s_missing_field_____108ac28f7,param_2);
  cVar15 = in_stack_00000038;
LAB_100bb4758:
  FUN_100de8910(unaff_x21 + 9);
  puVar12 = (undefined *)0x8000000000000000;
  in_stack_00000038 = cVar15;
  if (in_stack_00000180 == unaff_x27) goto LAB_100bb4778;
LAB_100bb4770:
  FUN_100de6690(&stack0x00000180);
  in_stack_00000038 = cVar15;
LAB_100bb4778:
  if (((long)unaff_x22 < 0) && ((unaff_x22 & 0xfffffffffffffffe) != unaff_x27 - 1)) {
    FUN_100de6690(&stack0x00000138);
  }
  if (puVar12 != unaff_x26) {
    do {
      puVar16 = in_stack_00000048;
      puVar13 = in_stack_00000050;
      if (in_stack_00000050 == in_stack_00000048) {
LAB_100bb4e54:
        in_stack_000000f0 = puVar13;
        if (puVar12 == (undefined *)0x8000000000000000) {
          *(undefined **)(unaff_x29 + -0xc0) = &UNK_108cb01d6;
          *(undefined8 *)(unaff_x29 + -0xb8) = 0x18;
          in_stack_00000180 = unaff_x29 - 0xc0;
          in_stack_00000188 = &DAT_100c7b3a0;
          puVar5 = (ulong *)FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000180);
          goto LAB_100bb4ea4;
        }
        *unaff_x19 = (long)puVar12;
        unaff_x19[1] = (long)puVar5;
        unaff_x19[2] = in_stack_00000008;
        *(char *)(unaff_x19 + 3) = in_stack_00000038;
        if (puVar12 == (undefined *)(unaff_x27 + 1)) goto LAB_100bb4eac;
        in_stack_00000118 = unaff_x19[1];
        in_stack_00000110 = *unaff_x19;
        in_stack_00000128 = unaff_x19[3];
        in_stack_00000120 = unaff_x19[2];
        if (in_stack_00000048 != puVar16) {
          lVar6 = FUN_1087e422c(in_stack_00000010,&UNK_10b21cb90,&UNK_10b20a590);
          unaff_x27 = 0x8000000000000005;
          *unaff_x19 = -0x7ffffffffffffffa;
          unaff_x19[1] = lVar6;
          FUN_100c96864(&stack0x00000110);
          unaff_x25 = &stack0x000000a0;
        }
        FUN_100de8910(unaff_x25 + 9);
        goto LAB_100bb4eb4;
      }
      puVar16 = in_stack_00000050 + 0xd;
      puVar13 = puVar16;
      if ((undefined *)*in_stack_00000050 == unaff_x26) goto LAB_100bb4e54;
      plVar1 = (long *)in_stack_00000050[1];
      in_stack_000000b8 = in_stack_00000050[6];
      in_stack_000000b0 = (ulong *)in_stack_00000050[5];
      in_stack_000000c8 = in_stack_00000050[8];
      in_stack_000000c0 = in_stack_00000050[7];
      in_stack_000000d8 = in_stack_00000050[10];
      in_stack_000000d0 = in_stack_00000050[9];
      in_stack_000000e0 = in_stack_00000050[0xb];
      in_stack_000000a0 = in_stack_00000050[3];
      in_stack_000000a8 = in_stack_00000050[4];
      if (in_stack_00000050[2] == 0x18) {
        bVar11 = (*plVar1 != 0x5f6b726f7774656e || plVar1[1] != 0x615f7963696c6f70) ||
                 plVar1[2] != 0x746e656d646e656d;
      }
      else {
        bVar11 = true;
      }
      if ((undefined *)*in_stack_00000050 != (undefined *)0x0) {
        _free();
      }
      lVar6 = in_stack_000000b8;
      puVar4 = in_stack_000000b0;
      uVar3 = in_stack_000000a8;
      unaff_x22 = in_stack_000000a0;
      in_stack_00000050 = puVar16;
      if (!bVar11) goto LAB_100bb432c;
      if (in_stack_000000a0 == unaff_x27) {
        in_stack_000000a0 = unaff_x27;
        in_stack_000000f0 = puVar16;
        lVar6 = FUN_1088561c0(&UNK_108cde170,0x10);
        *unaff_x19 = unaff_x27 + 1;
        unaff_x19[1] = lVar6;
        puVar12 = (undefined *)((ulong)puVar12 & 0x7fffffffffffffff);
        goto joined_r0x000100bb50c8;
      }
      in_stack_00000180 = in_stack_000000a0;
      in_stack_00000190 = (ulong *)unaff_x25[2];
      in_stack_00000188 = (undefined *)unaff_x25[1];
      in_stack_000001a0 = unaff_x25[4];
      in_stack_00000198 = unaff_x25[3];
      in_stack_000001b0 = unaff_x25[6];
      in_stack_000001a8 = unaff_x25[5];
      in_stack_000001c0 = unaff_x25[8];
      in_stack_000001b8 = unaff_x25[7];
      unaff_x21 = &stack0x00000180;
      in_stack_000000a0 = unaff_x27;
      FUN_100de6690(&stack0x00000180);
    } while( true );
  }
  in_stack_000000f0 = in_stack_00000050;
  goto LAB_100bb4ea4;
LAB_100bb432c:
  if (puVar12 != unaff_x26) {
    *(undefined **)(unaff_x29 + -0xc0) = &UNK_108cb01d6;
    *(undefined8 *)(unaff_x29 + -0xb8) = 0x18;
    in_stack_00000180 = unaff_x29 - 0xc0;
    in_stack_00000188 = &DAT_100c7b3a0;
    in_stack_000000f0 = puVar16;
    lVar6 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000180);
    *unaff_x19 = unaff_x27 + 1;
    unaff_x19[1] = lVar6;
joined_r0x000100bb50c8:
    if (puVar12 != (undefined *)0x0) {
      _free(puVar5);
    }
    goto LAB_100bb4eac;
  }
  if (in_stack_000000a0 == unaff_x27) {
    in_stack_000000a0 = unaff_x27;
    in_stack_000000f0 = puVar16;
    puVar5 = (ulong *)FUN_1088561c0(&UNK_108cde170,0x10);
LAB_100bb4ea4:
    *unaff_x19 = unaff_x27 + 1;
    unaff_x19[1] = (long)puVar5;
LAB_100bb4eac:
    FUN_100de8910(unaff_x25 + 9);
LAB_100bb4eb4:
    if (in_stack_000000a0 != unaff_x27) {
      FUN_100de6690(&stack0x000000a0);
    }
    return;
  }
  in_stack_00000138 = in_stack_000000a0;
  lVar18 = unaff_x25[2];
  puVar16 = (undefined8 *)unaff_x25[1];
  in_stack_00000148 = lVar18;
  in_stack_00000140 = puVar16;
  in_stack_00000158 = unaff_x25[4];
  in_stack_00000150 = unaff_x25[3];
  uVar19 = unaff_x25[6];
  in_stack_00000168 = uVar19;
  in_stack_00000160 = unaff_x25[5];
  in_stack_00000178 = unaff_x25[8];
  in_stack_00000170 = unaff_x25[7];
  uVar7 = in_stack_000000a0 ^ 0x8000000000000000;
  if (-1 < (long)in_stack_000000a0) {
    uVar7 = 5;
  }
  if (uVar7 != 4) {
    if (uVar7 != 5) {
      in_stack_000000a0 = unaff_x27;
      puVar5 = (ulong *)FUN_108832ea0(&stack0x00000138,unaff_x29 + -0x70,&UNK_10b21d820);
      puVar12 = (undefined *)0x8000000000000000;
      goto LAB_100bb4778;
    }
    in_stack_000000a0 = unaff_x27;
    if ((in_stack_00000158 != 0) && (in_stack_00000158 * 9 != -0x11)) {
      _free(unaff_x25[3] + in_stack_00000158 * -8 + -8);
    }
    in_stack_000001d8 = unaff_x22;
    puVar13 = puVar16 + lVar18 * 0xd;
    in_stack_00000180 = unaff_x27;
    in_stack_000001c8 = puVar16;
    in_stack_000001d0 = puVar16;
    in_stack_000001e0 = puVar13;
    if (lVar18 != 0) {
      puVar12 = (undefined *)0x8000000000000000;
      cVar15 = '\x02';
      do {
        puVar8 = puVar16 + 0xd;
        puVar9 = puVar8;
        if ((undefined *)*puVar16 == unaff_x26) break;
        piVar2 = (int *)puVar16[1];
        in_stack_00000198 = puVar16[6];
        in_stack_00000190 = (ulong *)puVar16[5];
        in_stack_000001a8 = puVar16[8];
        in_stack_000001a0 = puVar16[7];
        in_stack_000001b8 = puVar16[10];
        in_stack_000001b0 = puVar16[9];
        in_stack_000001c0 = puVar16[0xb];
        in_stack_00000188 = (undefined *)puVar16[4];
        in_stack_00000180 = puVar16[3];
        if (puVar16[2] == 6) {
          iVar10 = 1;
          if (*piVar2 != 0x69746361 || (short)piVar2[1] != 0x6e6f) {
            iVar10 = 2;
          }
        }
        else if (puVar16[2] == 4) {
          iVar10 = 2;
          if (*piVar2 == 0x74736f68) {
            iVar10 = 0;
          }
        }
        else {
          iVar10 = 2;
        }
        if ((undefined *)*puVar16 != (undefined *)0x0) {
          _free();
        }
        if (iVar10 != 0) {
          if (iVar10 == 1) {
            if (cVar15 == '\x02') {
              if (in_stack_00000180 == unaff_x27) {
                in_stack_00000180 = unaff_x27;
                in_stack_000001d0 = puVar8;
                puVar5 = (ulong *)FUN_1088561c0(&UNK_108cde170,0x10);
              }
              else {
                *(ulong *)(unaff_x29 + -0xc0) = in_stack_00000180;
                *(ulong **)(unaff_x29 + -0xb0) = in_stack_00000190;
                *(undefined **)(unaff_x29 + -0xb8) = in_stack_00000188;
                *(ulong *)(unaff_x29 + -0xa0) = in_stack_000001a0;
                *(ulong *)(unaff_x29 + -0xa8) = in_stack_00000198;
                *(ulong *)(unaff_x29 + -0x90) = in_stack_000001b0;
                *(ulong *)(unaff_x29 + -0x98) = in_stack_000001a8;
                unaff_x21 = &stack0x00000180;
                *(ulong *)(unaff_x29 + -0x80) = in_stack_000001c0;
                *(ulong *)(unaff_x29 + -0x88) = in_stack_000001b8;
                in_stack_00000180 = unaff_x27;
                FUN_1012acd0c(unaff_x29 + -0x70,unaff_x29 + -0xc0);
                if (*(char *)(unaff_x29 + -0x70) != '\x01') {
                  cVar15 = *(char *)(unaff_x29 + -0x6f);
                  goto LAB_100bb43ec;
                }
                puVar5 = *(ulong **)(unaff_x29 + -0x68);
                in_stack_000001d0 = puVar8;
              }
            }
            else {
              *(undefined **)(unaff_x29 + -0x70) = &UNK_108ca6c32;
              *(undefined8 *)(unaff_x29 + -0x68) = 6;
              *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0x70;
              *(undefined **)(unaff_x29 + -0xb8) = &DAT_100c7b3a0;
              in_stack_000001d0 = puVar8;
              puVar5 = (ulong *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xc0);
            }
          }
          else {
            if (in_stack_00000180 != unaff_x27) {
              *(ulong *)(unaff_x29 + -0xc0) = in_stack_00000180;
              *(ulong **)(unaff_x29 + -0xb0) = in_stack_00000190;
              *(undefined **)(unaff_x29 + -0xb8) = in_stack_00000188;
              *(ulong *)(unaff_x29 + -0xa0) = in_stack_000001a0;
              *(ulong *)(unaff_x29 + -0xa8) = in_stack_00000198;
              *(ulong *)(unaff_x29 + -0x90) = in_stack_000001b0;
              *(ulong *)(unaff_x29 + -0x98) = in_stack_000001a8;
              *(ulong *)(unaff_x29 + -0x80) = in_stack_000001c0;
              *(ulong *)(unaff_x29 + -0x88) = in_stack_000001b8;
              in_stack_00000180 = unaff_x27;
              FUN_100de6690(unaff_x29 + -0xc0);
              goto LAB_100bb43ec;
            }
            in_stack_00000180 = unaff_x27;
            in_stack_000001d0 = puVar8;
            puVar5 = (ulong *)FUN_1088561c0(&UNK_108cde170,0x10);
          }
LAB_100bb490c:
          unaff_x26 = (undefined *)0x8000000000000000;
          puVar12 = (undefined *)((ulong)puVar12 & 0x7fffffffffffffff);
          goto joined_r0x000100bb4910;
        }
        unaff_x26 = (undefined *)0x8000000000000000;
        if (puVar12 != (undefined *)0x8000000000000000) {
          *(undefined **)(unaff_x29 + -0x70) = &UNK_108c73770;
          *(undefined8 *)(unaff_x29 + -0x68) = 4;
          *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0x70;
          *(undefined **)(unaff_x29 + -0xb8) = &DAT_100c7b3a0;
          in_stack_000001d0 = puVar8;
          puVar5 = (ulong *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xc0);
          goto LAB_100bb490c;
        }
        if (in_stack_00000180 == unaff_x27) {
          in_stack_00000180 = unaff_x27;
          in_stack_000001d0 = puVar8;
          puVar5 = (ulong *)FUN_1088561c0(&UNK_108cde170,0x10);
          unaff_x25 = &stack0x000000a0;
          cVar15 = in_stack_00000038;
          goto LAB_100bb4758;
        }
        *(ulong *)(unaff_x29 + -0xc0) = in_stack_00000180;
        *(ulong **)(unaff_x29 + -0xb0) = in_stack_00000190;
        *(undefined **)(unaff_x29 + -0xb8) = in_stack_00000188;
        *(ulong *)(unaff_x29 + -0xa0) = in_stack_000001a0;
        *(ulong *)(unaff_x29 + -0xa8) = in_stack_00000198;
        *(ulong *)(unaff_x29 + -0x90) = in_stack_000001b0;
        *(ulong *)(unaff_x29 + -0x98) = in_stack_000001a8;
        unaff_x21 = &stack0x00000180;
        *(ulong *)(unaff_x29 + -0x80) = in_stack_000001c0;
        *(ulong *)(unaff_x29 + -0x88) = in_stack_000001b8;
        if (in_stack_00000180 != 0x8000000000000003) {
          in_stack_00000180 = unaff_x27;
          in_stack_000001d0 = puVar8;
          puVar5 = (ulong *)FUN_108832ea0(unaff_x29 + -0xc0,unaff_x29 + -0x70,&UNK_10b20a5e0);
          unaff_x27 = 0x8000000000000005;
          FUN_100de6690(unaff_x29 + -0xc0);
          unaff_x25 = &stack0x000000a0;
          cVar15 = in_stack_00000038;
          goto LAB_100bb4758;
        }
        in_stack_00000030 = in_stack_00000190;
        if (in_stack_00000188 == (undefined *)0x8000000000000000) {
          unaff_x25 = &stack0x000000a0;
          puVar5 = in_stack_00000190;
          in_stack_00000180 = unaff_x27;
          in_stack_000001d0 = puVar8;
          cVar15 = in_stack_00000038;
          goto LAB_100bb4758;
        }
        in_stack_00000020 = in_stack_00000198;
        puVar12 = in_stack_00000188;
        in_stack_00000180 = unaff_x27;
LAB_100bb43ec:
        unaff_x21 = &stack0x00000180;
        unaff_x26 = (undefined *)0x8000000000000000;
        puVar9 = puVar13;
        puVar16 = puVar8;
      } while (puVar8 != puVar13);
      if (puVar12 != unaff_x26) {
        if (cVar15 == '\x02') {
          *(undefined **)(unaff_x29 + -0x70) = &UNK_108ca6c32;
          *(undefined8 *)(unaff_x29 + -0x68) = 6;
          *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0x70;
          *(undefined **)(unaff_x29 + -0xb8) = &DAT_100c7b3a0;
          in_stack_000001d0 = puVar8;
          puVar5 = (ulong *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xc0);
joined_r0x000100bb4910:
          unaff_x25 = &stack0x000000a0;
          cVar15 = in_stack_00000038;
          if (puVar12 != (undefined *)0x0) {
            unaff_x25 = &stack0x000000a0;
            _free(in_stack_00000030);
          }
          goto LAB_100bb4758;
        }
        puVar5 = in_stack_00000030;
        in_stack_000001d0 = puVar8;
        if (puVar13 != puVar9) {
          puVar5 = (ulong *)FUN_1087e422c(uVar19,&UNK_10b21cb90,&UNK_10b20a590);
          if (puVar12 != (undefined *)0x0) {
            _free(in_stack_00000030);
          }
          puVar12 = (undefined *)0x8000000000000000;
          unaff_x27 = 0x8000000000000005;
          unaff_x26 = (undefined *)0x8000000000000000;
        }
        FUN_100de8910(unaff_x21 + 9);
        in_stack_00000008 = in_stack_00000020;
        unaff_x25 = &stack0x000000a0;
        in_stack_00000038 = cVar15;
        if (in_stack_00000180 != unaff_x27) goto LAB_100bb4770;
        goto LAB_100bb4778;
      }
      unaff_x25 = &stack0x000000a0;
      in_stack_000001d0 = puVar8;
    }
    *(undefined **)(unaff_x29 + -0x70) = &UNK_108c73770;
    *(undefined8 *)(unaff_x29 + -0x68) = 4;
    *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0x70;
    *(undefined **)(unaff_x29 + -0xb8) = &DAT_100c7b3a0;
    param_2 = unaff_x29 + -0xc0;
    goto code_r0x000100bb4744;
  }
  in_stack_00000030 = in_stack_000000b0 + in_stack_000000b8 * 9;
  *(ulong **)(unaff_x29 + -0xc0) = in_stack_000000b0;
  *(ulong **)(unaff_x29 + -0xb8) = in_stack_000000b0;
  in_stack_00000020 = in_stack_000000a8;
  *(ulong *)(unaff_x29 + -0xb0) = in_stack_000000a8;
  *(ulong **)(unaff_x29 + -0xa8) = in_stack_00000030;
  puVar14 = in_stack_000000b0;
  if (in_stack_000000b8 == 0) {
LAB_100bb4628:
    in_stack_000000a0 = unaff_x27;
    puVar5 = (ulong *)FUN_1087e422c(0,&UNK_10b22e438,&UNK_10b20a590);
  }
  else {
    puVar14 = in_stack_000000b0 + 9;
    uVar7 = *in_stack_000000b0;
    *(ulong **)(unaff_x29 + -0xb8) = puVar14;
    if (uVar7 == unaff_x27) goto LAB_100bb4628;
    in_stack_00000180 = uVar7;
    puVar20 = (ulong *)in_stack_000000b0[2];
    puVar12 = (undefined *)in_stack_000000b0[1];
    in_stack_00000190 = puVar20;
    puVar5 = in_stack_00000190;
    in_stack_00000188 = puVar12;
    puVar12 = in_stack_00000188;
    uVar17 = in_stack_000000b0[3];
    in_stack_000001a0 = in_stack_000000b0[4];
    in_stack_00000198 = uVar17;
    in_stack_000001b0 = in_stack_000000b0[6];
    in_stack_000001a8 = in_stack_000000b0[5];
    unaff_x21 = &stack0x00000180;
    in_stack_000001c0 = in_stack_000000b0[8];
    in_stack_000001b8 = in_stack_000000b0[7];
    if (uVar7 != 0x8000000000000003) {
      in_stack_000000a0 = unaff_x27;
      puVar5 = (ulong *)FUN_108832ea0(&stack0x00000180,unaff_x29 + -0x70,&UNK_10b20a5e0);
      unaff_x27 = 0x8000000000000005;
      FUN_100de6690(&stack0x00000180);
LAB_100bb46ec:
      puVar12 = (undefined *)0x8000000000000000;
      goto LAB_100bb464c;
    }
    in_stack_000000a0 = unaff_x27;
    if (puVar12 == unaff_x26) goto LAB_100bb46ec;
    if (puVar12 != (undefined *)0x8000000000000001) {
      if (in_stack_000000b8 == 1) {
LAB_100bb481c:
        puVar5 = (ulong *)FUN_1087e422c(1,&UNK_10b22e438,&UNK_10b20a590);
      }
      else {
        puVar14 = in_stack_000000b0 + 0x12;
        *(ulong **)(unaff_x29 + -0xb8) = puVar14;
        if (in_stack_000000b0[9] == unaff_x27) goto LAB_100bb481c;
        in_stack_00000190 = (ulong *)in_stack_000000b0[0xb];
        in_stack_00000188 = (undefined *)in_stack_000000b0[10];
        in_stack_000001a0 = in_stack_000000b0[0xd];
        in_stack_00000198 = in_stack_000000b0[0xc];
        in_stack_000001b0 = in_stack_000000b0[0xf];
        in_stack_000001a8 = in_stack_000000b0[0xe];
        in_stack_000001c0 = in_stack_000000b0[0x11];
        in_stack_000001b8 = in_stack_000000b0[0x10];
        unaff_x21 = &stack0x00000180;
        in_stack_00000180 = in_stack_000000b0[9];
        FUN_1012acd0c(unaff_x29 + -0x70,&stack0x00000180);
        if ((*(byte *)(unaff_x29 + -0x70) & 1) == 0) {
          in_stack_00000038 = *(char *)(unaff_x29 + -0x6f);
          in_stack_00000008 = uVar17;
          if (lVar6 != 2) {
            puVar5 = (ulong *)FUN_1087e422c(lVar6,&UNK_10b21cb80,&UNK_10b20a590);
            if (puVar12 != (undefined *)0x0) {
              _free(puVar20);
            }
            puVar12 = (undefined *)0x8000000000000000;
            unaff_x27 = 0x8000000000000005;
          }
          goto LAB_100bb464c;
        }
        puVar5 = *(ulong **)(unaff_x29 + -0x68);
      }
      if (puVar12 != (undefined *)0x0) {
        _free(puVar20);
      }
      unaff_x21 = &stack0x00000180;
      puVar12 = (undefined *)0x8000000000000000;
      goto LAB_100bb464c;
    }
  }
  puVar12 = (undefined *)0x8000000000000000;
LAB_100bb464c:
  lVar6 = ((ulong)((long)in_stack_00000030 - (long)puVar14) >> 3) * -0x71c71c71c71c71c7 + 1;
  while (lVar6 = lVar6 + -1, lVar6 != 0) {
    FUN_100de6690(puVar14);
    puVar14 = puVar14 + 9;
  }
  if (uVar3 != 0) {
    _free(puVar4);
  }
  unaff_x25 = &stack0x000000a0;
  unaff_x26 = (undefined *)0x8000000000000000;
  goto LAB_100bb4778;
}

