
void FUN_101a0668c(undefined8 param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  undefined8 *unaff_x19;
  long *plVar15;
  undefined8 uVar16;
  ulong unaff_x21;
  ulong *unaff_x22;
  ulong *puVar17;
  undefined8 *unaff_x23;
  char cVar18;
  long unaff_x29;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  long in_stack_00000038;
  ulong *in_stack_00000040;
  undefined8 *in_stack_00000048;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  ulong *in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  ulong in_stack_000000d8;
  long *in_stack_000000e0;
  ulong in_stack_000000e8;
  ulong in_stack_000000f0;
  ulong in_stack_000000f8;
  ulong in_stack_00000100;
  ulong in_stack_00000108;
  ulong in_stack_00000110;
  ulong in_stack_00000118;
  long in_stack_00000120;
  ulong *in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  char cStack0000000000000150;
  undefined7 uStack0000000000000151;
  ulong in_stack_00000160;
  ulong in_stack_00000168;
  ulong in_stack_00000170;
  ulong in_stack_00000178;
  ulong in_stack_00000180;
  ulong in_stack_00000188;
  ulong in_stack_00000190;
  ulong in_stack_00000198;
  ulong in_stack_000001a0;
  long *in_stack_000001a8;
  long *in_stack_000001b0;
  ulong in_stack_000001b8;
  long *in_stack_000001c0;
  ulong in_stack_000001d0;
  ulong *in_stack_000001d8;
  ulong *in_stack_000001e8;
  undefined8 in_stack_00000220;
  ulong in_stack_00000228;
  undefined8 in_stack_00000230;
  
code_r0x000101a0668c:
  puVar6 = (ulong *)FUN_1088bbbb8(s_missing_field_____108ac28f7,param_2);
  plVar7 = in_stack_000001b0;
LAB_101a066a0:
  in_stack_000001b0 = plVar7;
  in_stack_00000120 = -0x7ffffffffffffff9;
  in_stack_00000128 = puVar6;
LAB_101a066a8:
  FUN_10194df64(unaff_x19 + 9);
  puVar17 = unaff_x22;
  if (in_stack_00000160 != unaff_x21) {
    func_0x00010194dc28(&stack0x00000160);
  }
LAB_101a066c8:
  do {
    if (((long)in_stack_00000060 < 0) &&
       ((in_stack_00000060 & 0xfffffffffffffffe) != in_stack_00000058)) {
      func_0x00010194dc28(&stack0x000000d8);
    }
    lVar8 = in_stack_00000098;
    if (in_stack_00000120 == -0x7ffffffffffffff9) {
      *(undefined8 *)(unaff_x29 + -0xb0) = 0x8000000000000000;
      *(ulong **)(unaff_x29 + -0xa8) = in_stack_00000128;
      func_0x000101938f78(&stack0x00000088);
LAB_101a06c7c:
      bVar3 = true;
LAB_101a06ca4:
      lVar8 = ((ulong)((long)in_stack_00000040 - (long)puVar17) >> 3) * -0x71c71c71c71c71c7 + 1;
      while (lVar8 = lVar8 + -1, lVar8 != 0) {
        func_0x00010194dc28(puVar17);
        puVar17 = puVar17 + 9;
      }
      if (in_stack_00000038 != 0) {
        _free(in_stack_00000028);
      }
      if (bVar3) {
        uVar16 = *(undefined8 *)(unaff_x29 + -0xa8);
        *in_stack_00000030 = 0x8000000000000001;
        in_stack_00000030[1] = uVar16;
      }
      else {
        uVar16 = unaff_x23[0x2a];
        in_stack_00000030[1] = unaff_x23[0x2b];
        *in_stack_00000030 = uVar16;
        in_stack_00000030[2] = *(undefined8 *)(unaff_x29 + -0xa0);
      }
      return;
    }
    in_stack_000000b8 = in_stack_00000138;
    in_stack_000000b0 = in_stack_00000130;
    in_stack_000000c8 = in_stack_00000148;
    in_stack_000000c0 = in_stack_00000140;
    in_stack_000000d0 = CONCAT71(uStack0000000000000151,cStack0000000000000150);
    in_stack_000000a0 = in_stack_00000120;
    in_stack_000000a8 = in_stack_00000128;
    if (in_stack_00000098 == in_stack_00000088) {
      func_0x0001088db290(&stack0x00000088);
    }
    plVar7 = (long *)(in_stack_00000090 + lVar8 * 0x38);
    plVar7[1] = (long)in_stack_000000a8;
    *plVar7 = in_stack_000000a0;
    plVar7[3] = in_stack_000000b8;
    plVar7[2] = in_stack_000000b0;
    plVar7[5] = in_stack_000000c8;
    plVar7[4] = in_stack_000000c0;
    plVar7[6] = in_stack_000000d0;
    in_stack_00000098 = lVar8 + 1;
    unaff_x22 = in_stack_00000040;
    if (puVar17 == in_stack_00000040) {
LAB_101a06c5c:
      unaff_x23[0x2b] = in_stack_00000090;
      unaff_x23[0x2a] = in_stack_00000088;
      *(long *)(unaff_x29 + -0xa0) = in_stack_00000098;
      puVar17 = unaff_x22;
      if (*(long *)(unaff_x29 + -0xb0) != -0x8000000000000000) {
        unaff_x23[9] = unaff_x23[0x2b];
        unaff_x23[8] = unaff_x23[0x2a];
        in_stack_00000170 = *(ulong *)(unaff_x29 + -0xa0);
        if (in_stack_00000040 == unaff_x22) {
          bVar3 = false;
          puVar17 = in_stack_00000040;
          goto LAB_101a06ca4;
        }
        uVar16 = FUN_108880da4(in_stack_00000018,&UNK_10b25f958,&UNK_10b25d520);
        *(undefined8 *)(unaff_x29 + -0xb0) = 0x8000000000000000;
        *(undefined8 *)(unaff_x29 + -0xa8) = uVar16;
        func_0x000101938f78(&stack0x00000160);
      }
      goto LAB_101a06c7c;
    }
    unaff_x22 = puVar17 + 9;
    in_stack_00000060 = *puVar17;
    if (in_stack_00000060 == unaff_x21) goto LAB_101a06c5c;
    uVar11 = puVar17[2];
    plVar19 = (long *)puVar17[1];
    in_stack_000000f8 = puVar17[4];
    in_stack_000000f0 = puVar17[3];
    uVar9 = puVar17[6];
    in_stack_00000100 = puVar17[5];
    in_stack_00000118 = puVar17[8];
    in_stack_00000110 = puVar17[7];
    uVar14 = in_stack_00000060 ^ 0x8000000000000000;
    if (-1 < (long)in_stack_00000060) {
      uVar14 = 5;
    }
    in_stack_000000d8 = in_stack_00000060;
    in_stack_000000e0 = plVar19;
    in_stack_000000e8 = uVar11;
    in_stack_00000108 = uVar9;
    if (uVar14 == 4) {
      uVar14 = puVar17[1];
      puVar6 = (ulong *)puVar17[2];
      uVar11 = puVar17[3];
      *(ulong **)(unaff_x29 + -0xe0) = puVar6;
      *(ulong **)(unaff_x29 + -0xd8) = puVar6;
      *(ulong *)(unaff_x29 + -0xd0) = uVar14;
      *(ulong **)(unaff_x29 + -200) = puVar6 + uVar11 * 9;
      puVar17 = puVar6;
      if (uVar11 == 0) {
LAB_101a06570:
        puVar5 = (ulong *)FUN_108880da4(0,&UNK_10b268878,&UNK_10b25d520);
LAB_101a0658c:
        in_stack_00000120 = -0x7ffffffffffffff9;
        in_stack_00000128 = puVar5;
      }
      else {
        puVar17 = puVar6 + 9;
        uVar9 = *puVar6;
        *(ulong **)(unaff_x29 + -0xd8) = puVar17;
        if (uVar9 == unaff_x21) goto LAB_101a06570;
        in_stack_00000170 = puVar6[2];
        in_stack_00000168 = puVar6[1];
        in_stack_00000180 = puVar6[4];
        in_stack_00000178 = puVar6[3];
        in_stack_00000190 = puVar6[6];
        in_stack_00000188 = puVar6[5];
        in_stack_000001a0 = puVar6[8];
        in_stack_00000198 = puVar6[7];
        unaff_x19 = &stack0x00000160;
        in_stack_00000160 = uVar9;
        FUN_101a09abc(unaff_x29 + -0xb0,&stack0x00000160);
        uVar9 = *(ulong *)(unaff_x29 + -0xb0);
        puVar5 = *(ulong **)(unaff_x29 + -0xa8);
        if (uVar9 == 0x8000000000000007) goto LAB_101a0658c;
        uVar16 = *(undefined8 *)(unaff_x29 + -0xa0);
        uVar24 = *(undefined8 *)(unaff_x29 + -0x88);
        uVar23 = *(undefined8 *)(unaff_x29 + -0x90);
        in_stack_00000020[1] = *(undefined8 *)(unaff_x29 + -0x98);
        *in_stack_00000020 = uVar16;
        in_stack_00000020[3] = uVar24;
        in_stack_00000020[2] = uVar23;
        in_stack_000001d0 = uVar9;
        in_stack_000001d8 = puVar5;
        if (uVar11 == 1) {
LAB_101a06800:
          in_stack_00000128 = (ulong *)FUN_108880da4(1,&UNK_10b268878,&UNK_10b25d520);
LAB_101a06818:
          unaff_x19 = &stack0x00000160;
          in_stack_00000120 = -0x7ffffffffffffff9;
          lVar8 = unaff_x21 + uVar9 + -10;
          if (uVar9 <= in_stack_00000058) {
            lVar8 = 2;
          }
          puVar12 = in_stack_00000020;
          if ((lVar8 != 0) && (lVar8 != 1)) {
            uVar10 = uVar9 ^ 0x8000000000000000;
            if (-1 < (long)uVar9) {
              uVar10 = 5;
            }
            if (uVar10 < 5) {
              puVar4 = puVar5;
              if (uVar10 != 2) goto LAB_101a06a84;
            }
            else {
              puVar12 = in_stack_00000010;
              puVar4 = in_stack_000001e8;
              if (uVar9 != 0) {
                _free(puVar5);
                puVar4 = in_stack_000001e8;
              }
            }
            puVar5 = (ulong *)((ulong)puVar4 & 0x7fffffffffffffff);
          }
          if (puVar5 != (ulong *)0x0) {
            _free(*puVar12);
          }
        }
        else {
          puVar17 = puVar6 + 0x12;
          *(ulong **)(unaff_x29 + -0xd8) = puVar17;
          if (puVar6[9] == unaff_x21) goto LAB_101a06800;
          in_stack_00000170 = puVar6[0xb];
          in_stack_00000168 = puVar6[10];
          in_stack_00000180 = puVar6[0xd];
          in_stack_00000178 = puVar6[0xc];
          in_stack_00000190 = puVar6[0xf];
          in_stack_00000188 = puVar6[0xe];
          in_stack_000001a0 = puVar6[0x11];
          in_stack_00000198 = puVar6[0x10];
          unaff_x19 = &stack0x00000160;
          in_stack_00000160 = puVar6[9];
          FUN_101a175e4(unaff_x29 + -0xb0,&stack0x00000160);
          if ((*(byte *)(unaff_x29 + -0xb0) & 1) != 0) {
            in_stack_00000128 = *(ulong **)(unaff_x29 + -0xa8);
            goto LAB_101a06818;
          }
          cVar18 = *(char *)(unaff_x29 + -0xaf);
          unaff_x23[1] = unaff_x23[0x17];
          *unaff_x23 = unaff_x23[0x16];
          unaff_x23[3] = unaff_x23[0x19];
          unaff_x23[2] = unaff_x23[0x18];
          unaff_x23[5] = unaff_x23[0x1b];
          unaff_x23[4] = unaff_x23[0x1a];
          cStack0000000000000150 = cVar18;
          if (in_stack_00000120 == -0x7ffffffffffffff9) {
LAB_101a06a84:
            unaff_x19 = &stack0x00000160;
          }
          else {
            unaff_x23[9] = unaff_x23[1];
            unaff_x23[8] = *unaff_x23;
            unaff_x23[0xb] = unaff_x23[3];
            unaff_x23[10] = unaff_x23[2];
            unaff_x23[0xd] = unaff_x23[5];
            unaff_x23[0xc] = unaff_x23[4];
            in_stack_00000190 = CONCAT71(uStack0000000000000151,cVar18);
            if (uVar11 != 2) {
              in_stack_00000128 = (ulong *)FUN_108880da4(uVar11,&UNK_10b25f958,&UNK_10b25d520);
              in_stack_00000120 = -0x7ffffffffffffff9;
              FUN_10196dce0(&stack0x00000160);
              unaff_x23 = &stack0x00000120;
              goto LAB_101a06a84;
            }
          }
        }
      }
      lVar8 = ((ulong)((long)(puVar6 + uVar11 * 9) - (long)puVar17) >> 3) * -0x71c71c71c71c71c7 + 1;
      while (lVar8 = lVar8 + -1, lVar8 != 0) {
        func_0x00010194dc28(puVar17);
        puVar17 = puVar17 + 9;
      }
      puVar17 = unaff_x22;
      if (uVar14 != 0) {
        _free(puVar6);
      }
      goto LAB_101a066c8;
    }
    if (uVar14 == 5) {
      if ((in_stack_000000f8 != 0) && (in_stack_000000f8 * 9 != -0x11)) {
        _free(in_stack_000000f0 + in_stack_000000f8 * -8 + -8);
      }
      in_stack_000001b8 = in_stack_00000060;
      plVar15 = plVar19 + uVar11 * 0xd;
      in_stack_000001c0 = plVar15;
      in_stack_000001a8 = plVar19;
      in_stack_00000160 = unaff_x21;
      in_stack_000001b0 = plVar19;
      if (uVar11 != 0) {
        uVar14 = 0x8000000000000007;
        cVar18 = '\x03';
        do {
          plVar7 = plVar19 + 0xd;
          lVar8 = *plVar19;
          if (lVar8 == -0x8000000000000000) {
            in_stack_000001b0 = plVar7;
            plVar19 = plVar7;
            goto joined_r0x000101a0665c;
          }
          piVar1 = (int *)plVar19[1];
          lVar2 = plVar19[2];
          lVar21 = plVar19[6];
          lVar20 = plVar19[5];
          lVar22 = plVar19[7];
          lVar26 = plVar19[10];
          lVar25 = plVar19[9];
          unaff_x23[0xd] = plVar19[8];
          unaff_x23[0xc] = lVar22;
          unaff_x23[0xf] = lVar26;
          unaff_x23[0xe] = lVar25;
          in_stack_000001a0 = plVar19[0xb];
          lVar22 = plVar19[3];
          unaff_x23[9] = plVar19[4];
          unaff_x23[8] = lVar22;
          unaff_x23[0xb] = lVar21;
          unaff_x23[10] = lVar20;
          if (lVar2 == 6) {
            iVar13 = 1;
            if (*piVar1 != 0x65636361 || (short)piVar1[1] != 0x7373) {
              iVar13 = 2;
            }
          }
          else if (lVar2 == 4) {
            iVar13 = 2;
            if (*piVar1 == 0x68746170) {
              iVar13 = 0;
            }
          }
          else {
            iVar13 = 2;
          }
          if (lVar8 != 0) {
            _free();
          }
          uVar11 = in_stack_00000160;
          if (iVar13 != 0) {
            unaff_x23 = &stack0x00000120;
            if (iVar13 == 1) {
              if (cVar18 == '\x03') {
                in_stack_00000160 = 0x8000000000000005;
                unaff_x21 = 0x8000000000000005;
                if (uVar11 == 0x8000000000000005) {
                  in_stack_000001b0 = plVar7;
                  in_stack_00000128 = (ulong *)FUN_1088bbd80(&UNK_108cde170,0x10);
                }
                else {
                  *(ulong *)(unaff_x29 + -0xb0) = uVar11;
                  *(ulong *)(unaff_x29 + -0xa0) = in_stack_00000170;
                  *(ulong *)(unaff_x29 + -0xa8) = in_stack_00000168;
                  *(ulong *)(unaff_x29 + -0x90) = in_stack_00000180;
                  *(ulong *)(unaff_x29 + -0x98) = in_stack_00000178;
                  *(ulong *)(unaff_x29 + -0x80) = in_stack_00000190;
                  *(ulong *)(unaff_x29 + -0x88) = in_stack_00000188;
                  unaff_x19 = &stack0x00000160;
                  *(ulong *)(unaff_x29 + -0x70) = in_stack_000001a0;
                  *(ulong *)(unaff_x29 + -0x78) = in_stack_00000198;
                  FUN_101a175e4(unaff_x29 + -0xe0,unaff_x29 + -0xb0);
                  if (*(char *)(unaff_x29 + -0xe0) != '\x01') {
                    cVar18 = *(char *)(unaff_x29 + -0xdf);
                    goto LAB_101a06304;
                  }
                  in_stack_00000128 = *(ulong **)(unaff_x29 + -0xd8);
                  in_stack_000001b0 = plVar7;
                }
                in_stack_00000120 = -0x7ffffffffffffff9;
                if (uVar14 != 0x8000000000000007) goto LAB_101a0694c;
                goto LAB_101a066a8;
              }
              *(undefined **)(unaff_x29 + -0xe0) = &UNK_108ceca70;
              *(undefined8 *)(unaff_x29 + -0xd8) = 6;
              *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xe0;
              *(undefined **)(unaff_x29 + -0xa8) = &DAT_10192d9a4;
              in_stack_000001b0 = plVar7;
              in_stack_00000128 =
                   (ulong *)FUN_1088bbbb8(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
            }
            else {
              in_stack_00000160 = 0x8000000000000005;
              unaff_x21 = 0x8000000000000005;
              if (uVar11 != 0x8000000000000005) {
                *(ulong *)(unaff_x29 + -0xb0) = uVar11;
                *(ulong *)(unaff_x29 + -0xa0) = in_stack_00000170;
                *(ulong *)(unaff_x29 + -0xa8) = in_stack_00000168;
                *(ulong *)(unaff_x29 + -0x90) = in_stack_00000180;
                *(ulong *)(unaff_x29 + -0x98) = in_stack_00000178;
                *(ulong *)(unaff_x29 + -0x80) = in_stack_00000190;
                *(ulong *)(unaff_x29 + -0x88) = in_stack_00000188;
                *(ulong *)(unaff_x29 + -0x70) = in_stack_000001a0;
                *(ulong *)(unaff_x29 + -0x78) = in_stack_00000198;
                func_0x00010194dc28(unaff_x29 + -0xb0);
                goto LAB_101a06304;
              }
              in_stack_000001b0 = plVar7;
              in_stack_00000128 = (ulong *)FUN_1088bbd80(&UNK_108cde170,0x10);
            }
            in_stack_00000120 = -0x7ffffffffffffff9;
            if (uVar14 == 0x8000000000000007) goto LAB_101a066a8;
LAB_101a0694c:
            in_stack_00000120 = -0x7ffffffffffffff9;
            unaff_x23 = &stack0x00000120;
            lVar8 = unaff_x21 + uVar14 + -10;
            if (uVar14 <= in_stack_00000058) {
              lVar8 = 2;
            }
            puVar12 = in_stack_00000048;
            puVar17 = puVar6;
            if ((lVar8 != 0) && (lVar8 != 1)) {
              uVar11 = uVar14 ^ 0x8000000000000000;
              if (-1 < (long)uVar14) {
                uVar11 = 5;
              }
              if (uVar11 < 5) {
                if (uVar11 != 2) goto LAB_101a066a8;
                puVar17 = (ulong *)((ulong)puVar6 & 0x7fffffffffffffff);
              }
              else {
                if (uVar14 != 0) {
                  _free(puVar6);
                }
                puVar12 = in_stack_00000008;
                puVar17 = (ulong *)(in_stack_00000228 & 0x7fffffffffffffff);
              }
            }
            if (puVar17 != (ulong *)0x0) {
              _free(*puVar12);
            }
            goto LAB_101a066a8;
          }
          unaff_x23 = &stack0x00000120;
          if (uVar14 != 0x8000000000000007) {
            *(undefined **)(unaff_x29 + -0xe0) = &UNK_108c61038;
            *(undefined8 *)(unaff_x29 + -0xd8) = 4;
            *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xe0;
            *(undefined **)(unaff_x29 + -0xa8) = &DAT_10192d9a4;
            in_stack_000001b0 = plVar7;
            in_stack_00000128 =
                 (ulong *)FUN_1088bbbb8(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
            goto LAB_101a0694c;
          }
          in_stack_00000160 = 0x8000000000000005;
          unaff_x21 = 0x8000000000000005;
          if (uVar11 == 0x8000000000000005) {
            in_stack_000001b0 = plVar7;
            puVar6 = (ulong *)FUN_1088bbd80(&UNK_108cde170,0x10);
            plVar7 = in_stack_000001b0;
            goto LAB_101a066a0;
          }
          *(ulong *)(unaff_x29 + -0xb0) = uVar11;
          *(ulong *)(unaff_x29 + -0xa0) = in_stack_00000170;
          *(ulong *)(unaff_x29 + -0xa8) = in_stack_00000168;
          *(ulong *)(unaff_x29 + -0x90) = in_stack_00000180;
          *(ulong *)(unaff_x29 + -0x98) = in_stack_00000178;
          *(ulong *)(unaff_x29 + -0x80) = in_stack_00000190;
          *(ulong *)(unaff_x29 + -0x88) = in_stack_00000188;
          unaff_x19 = &stack0x00000160;
          *(ulong *)(unaff_x29 + -0x70) = in_stack_000001a0;
          *(ulong *)(unaff_x29 + -0x78) = in_stack_00000198;
          FUN_101a09abc(unaff_x29 + -0xe0,unaff_x29 + -0xb0);
          uVar14 = *(ulong *)(unaff_x29 + -0xe0);
          puVar6 = *(ulong **)(unaff_x29 + -0xd8);
          if (uVar14 == 0x8000000000000007) goto LAB_101a066a0;
          uVar16 = *(undefined8 *)(unaff_x29 + -0xd0);
          uVar24 = *(undefined8 *)(unaff_x29 + -0xb8);
          uVar23 = *(undefined8 *)(unaff_x29 + -0xc0);
          in_stack_00000048[1] = *(undefined8 *)(unaff_x29 + -200);
          *in_stack_00000048 = uVar16;
          in_stack_00000048[3] = uVar24;
          in_stack_00000048[2] = uVar23;
LAB_101a06304:
          unaff_x23 = &stack0x00000120;
          unaff_x19 = &stack0x00000160;
          unaff_x21 = 0x8000000000000005;
          plVar19 = plVar7;
        } while (plVar7 != plVar15);
        in_stack_000001b0 = plVar7;
        plVar19 = plVar15;
joined_r0x000101a0665c:
        in_stack_000001b0 = plVar7;
        if (uVar14 != 0x8000000000000007) {
          if (cVar18 == '\x03') {
            *(undefined **)(unaff_x29 + -0xe0) = &UNK_108ceca70;
            *(undefined8 *)(unaff_x29 + -0xd8) = 6;
            *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xe0;
            *(undefined **)(unaff_x29 + -0xa8) = &DAT_10192d9a4;
            in_stack_00000128 =
                 (ulong *)FUN_1088bbbb8(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
            in_stack_00000120 = -0x7ffffffffffffff9;
            lVar8 = unaff_x21 + uVar14 + -10;
            if (uVar14 <= in_stack_00000058) {
              lVar8 = 2;
            }
            uVar16 = in_stack_00000220;
            puVar17 = puVar6;
            if ((lVar8 != 0) && (lVar8 != 1)) {
              uVar11 = uVar14 ^ 0x8000000000000000;
              if (-1 < (long)uVar14) {
                uVar11 = 5;
              }
              if (uVar11 < 5) {
                if (uVar11 != 2) goto LAB_101a066a8;
                puVar17 = (ulong *)((ulong)puVar6 & 0x7fffffffffffffff);
              }
              else {
                if (uVar14 != 0) {
                  _free(puVar6);
                }
                uVar16 = in_stack_00000230;
                puVar17 = (ulong *)(in_stack_00000228 & 0x7fffffffffffffff);
              }
            }
            if (puVar17 != (ulong *)0x0) {
              _free(uVar16);
            }
            goto LAB_101a066a8;
          }
          unaff_x23[1] = unaff_x23[0x1f];
          *unaff_x23 = unaff_x23[0x1e];
          unaff_x23[3] = unaff_x23[0x21];
          unaff_x23[2] = unaff_x23[0x20];
          unaff_x23[5] = unaff_x23[0x23];
          unaff_x23[4] = unaff_x23[0x22];
          cStack0000000000000150 = cVar18;
          if (in_stack_00000120 == -0x7ffffffffffffff9) goto LAB_101a066a8;
          unaff_x23[0x17] = unaff_x23[1];
          unaff_x23[0x16] = *unaff_x23;
          unaff_x23[0x19] = unaff_x23[3];
          unaff_x23[0x18] = unaff_x23[2];
          unaff_x23[0x1b] = unaff_x23[5];
          unaff_x23[0x1a] = unaff_x23[4];
          if (plVar15 != plVar19) {
            in_stack_00000128 = (ulong *)FUN_108880da4(uVar9,&UNK_10b25f968,&UNK_10b25d520);
            in_stack_00000120 = -0x7ffffffffffffff9;
            FUN_10196dce0(&stack0x000001d0);
            unaff_x23 = &stack0x00000120;
          }
          FUN_10194df64(unaff_x19 + 9);
          puVar17 = unaff_x22;
          goto LAB_101a066c8;
        }
      }
      *(undefined **)(unaff_x29 + -0xe0) = &UNK_108c61038;
      *(undefined8 *)(unaff_x29 + -0xd8) = 4;
      *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xe0;
      *(undefined **)(unaff_x29 + -0xa8) = &DAT_10192d9a4;
      param_2 = unaff_x29 + -0xb0;
      goto code_r0x000101a0668c;
    }
    in_stack_00000128 = (ulong *)FUN_10889a648(&stack0x000000d8,unaff_x29 + -0x61,&UNK_10b25faf8);
    in_stack_00000120 = -0x7ffffffffffffff9;
    puVar17 = unaff_x22;
  } while( true );
}

