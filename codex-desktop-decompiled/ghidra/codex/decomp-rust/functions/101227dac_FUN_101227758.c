
/* WARNING: Type propagation algorithm not settling */

void FUN_101227758(undefined8 param_1,long param_2)

{
  bool bVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  char cVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  long *plVar14;
  byte bVar15;
  byte *pbVar16;
  byte *unaff_x19;
  byte *pbVar17;
  long unaff_x20;
  byte *unaff_x21;
  byte *pbVar18;
  long lVar19;
  long lVar20;
  undefined8 *unaff_x23;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  long unaff_x29;
  byte *pbVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  byte *in_stack_00000030;
  byte *in_stack_00000038;
  undefined4 *in_stack_00000040;
  byte *in_stack_00000048;
  byte *in_stack_00000050;
  byte *in_stack_00000058;
  undefined8 *in_stack_00000060;
  long lStack0000000000000068;
  byte *in_stack_00000070;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  byte *in_stack_00000090;
  byte *in_stack_00000098;
  undefined8 *in_stack_000000a0;
  byte *in_stack_000000b0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  byte *in_stack_00000108;
  byte *in_stack_00000110;
  long in_stack_00000118;
  byte *in_stack_00000120;
  byte *in_stack_00000128;
  byte *in_stack_00000130;
  ulong in_stack_00000138;
  byte *in_stack_00000140;
  byte *in_stack_00000148;
  long in_stack_00000150;
  long in_stack_00000158;
  long in_stack_00000160;
  byte *in_stack_00000168;
  byte *in_stack_00000170;
  long in_stack_00000178;
  byte *in_stack_00000180;
  byte *in_stack_00000188;
  byte *in_stack_00000190;
  ulong in_stack_00000198;
  byte *in_stack_000001a0;
  byte *in_stack_000001a8;
  undefined3 uStack00000000000001b0;
  undefined1 uStack00000000000001b3;
  undefined2 uStack00000000000001b4;
  undefined1 uStack00000000000001b6;
  undefined1 uStack00000000000001b7;
  undefined6 uStack00000000000001b8;
  undefined1 uStack00000000000001be;
  undefined1 uStack00000000000001bf;
  byte in_stack_000001c0;
  byte *in_stack_000001c8;
  byte *in_stack_000001d0;
  long in_stack_000001d8;
  char cStack00000000000001e0;
  undefined7 uStack00000000000001e1;
  byte *in_stack_000001e8;
  
code_r0x000101227758:
  in_stack_00000168 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,param_2);
LAB_10122777c:
  in_stack_00000160 = 7;
  pbVar12 = in_stack_00000168;
  if (unaff_x20 == 7) goto LAB_1012277a0;
joined_r0x000101227788:
  in_stack_00000168 = pbVar12;
  if (unaff_x20 == 3) {
    unaff_x19 = (byte *)((ulong)unaff_x19 & 0x7fffffffffffffff);
  }
  else {
    in_stack_00000160 = 7;
    if (unaff_x20 != 4) goto LAB_1012277a0;
  }
  in_stack_00000160 = 7;
  if (unaff_x19 != (byte *)0x0) {
    in_stack_00000160 = 7;
    _free(*(undefined8 *)(unaff_x29 + -0xc0));
  }
LAB_1012277a0:
  bVar8 = true;
  bVar9 = true;
LAB_1012277a8:
  bVar1 = false;
  if (in_stack_00000098 != (byte *)0x8000000000000001) {
    bVar1 = bVar9;
  }
  if ((bVar1) && (((ulong)in_stack_00000098 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000058);
    bVar9 = false;
    if (in_stack_00000090 != (byte *)0x8000000000000001) {
      bVar9 = bVar8;
    }
  }
  else {
    bVar9 = false;
    if (in_stack_00000090 != (byte *)0x8000000000000001) {
      bVar9 = bVar8;
    }
  }
  if ((bVar9) && (((ulong)in_stack_00000090 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000048);
  }
  FUN_100d34830(&stack0x00000200);
  pbVar11 = in_stack_00000090;
  if (cStack00000000000001e0 != '\x16') {
    FUN_100e077ec(&stack0x000001e0);
  }
LAB_10122794c:
  do {
    unaff_x20 = 7;
    pbVar18 = unaff_x21;
    pbVar13 = pbVar12;
LAB_101227950:
    if ((in_stack_00000088._4_1_ & 0x1e) != 0x14) {
      FUN_100e077ec(&stack0x000001c0);
    }
    lVar19 = in_stack_000000f8;
    unaff_x21 = pbVar18;
    if (unaff_x20 == 7) {
LAB_1012280cc:
      *in_stack_00000008 = -0x8000000000000000;
      in_stack_00000008[1] = (long)pbVar13;
      FUN_100e6ca64(&stack0x000000e8);
      goto LAB_1012280e4;
    }
    in_stack_00000138 = in_stack_00000198;
    in_stack_00000130 = in_stack_00000190;
    in_stack_00000148 = in_stack_000001a8;
    in_stack_00000140 = in_stack_000001a0;
    in_stack_00000158 =
         CONCAT17(uStack00000000000001bf,CONCAT16(uStack00000000000001be,uStack00000000000001b8));
    in_stack_00000150 =
         CONCAT17(uStack00000000000001b7,
                  CONCAT16(uStack00000000000001b6,
                           CONCAT24(uStack00000000000001b4,_uStack00000000000001b0)));
    in_stack_00000118 = in_stack_00000178;
    in_stack_00000110 = in_stack_00000170;
    in_stack_00000128 = in_stack_00000188;
    in_stack_00000120 = in_stack_00000180;
    in_stack_00000100 = unaff_x20;
    in_stack_00000108 = pbVar13;
    if (in_stack_000000f8 == in_stack_000000e8) {
      func_0x0001089beca0(&stack0x000000e8);
    }
    lVar20 = in_stack_000001d8;
    pbVar25 = in_stack_000001d0;
    pbVar2 = in_stack_000001c8;
    plVar14 = (long *)(in_stack_000000f0 + lVar19 * 0x60);
    plVar14[5] = (long)in_stack_00000128;
    plVar14[4] = (long)in_stack_00000120;
    plVar14[7] = in_stack_00000138;
    plVar14[6] = (long)in_stack_00000130;
    plVar14[9] = (long)in_stack_00000148;
    plVar14[8] = (long)in_stack_00000140;
    plVar14[0xb] = in_stack_00000158;
    plVar14[10] = in_stack_00000150;
    plVar14[1] = (long)in_stack_00000108;
    *plVar14 = in_stack_00000100;
    plVar14[3] = in_stack_00000118;
    plVar14[2] = (long)in_stack_00000110;
    in_stack_000000f8 = lVar19 + 1;
    unaff_x21 = in_stack_00000070;
    if (pbVar18 == in_stack_00000070) {
LAB_101227f9c:
      in_stack_00000008[1] = in_stack_000000f0;
      *in_stack_00000008 = in_stack_000000e8;
      in_stack_00000008[2] = in_stack_000000f8;
      if (*in_stack_00000008 != -0x8000000000000000) {
        in_stack_000000d8 = in_stack_00000008[1];
        in_stack_000000d0 = *in_stack_00000008;
        in_stack_000000e0 = in_stack_00000008[2];
        lVar19 = FUN_100fbc738(&stack0x000000a8);
        if (lVar19 == 0) {
          return;
        }
        *in_stack_00000008 = -0x8000000000000000;
        in_stack_00000008[1] = lVar19;
        FUN_100e6ca64(&stack0x000000d0);
        return;
      }
LAB_1012280e4:
      lVar19 = ((ulong)((long)in_stack_00000070 - (long)unaff_x21) >> 5) + 1;
      while (lVar19 = lVar19 + -1, lVar19 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 0x20;
      }
      if (in_stack_00000010 != 0) {
        _free(in_stack_00000018);
      }
      return;
    }
    unaff_x21 = pbVar18 + 0x20;
    in_stack_00000088._4_1_ = *pbVar18;
    in_stack_000000b0 = unaff_x21;
    if (in_stack_00000088._4_1_ == 0x16) goto LAB_101227f9c;
    uVar10 = *(undefined8 *)(pbVar18 + 1);
    in_stack_00000060[1] = *(undefined8 *)(pbVar18 + 9);
    *in_stack_00000060 = uVar10;
    uVar10 = *(undefined8 *)(pbVar18 + 0x10);
    *(undefined8 *)((long)in_stack_00000060 + 0x17) = *(undefined8 *)(pbVar18 + 0x18);
    *(undefined8 *)((long)in_stack_00000060 + 0xf) = uVar10;
    in_stack_00000080 = in_stack_00000080 + 1;
    pbVar18 = unaff_x21;
    in_stack_000000c8 = in_stack_00000080;
    in_stack_000001c0 = in_stack_00000088._4_1_;
    if (in_stack_00000088._4_1_ != 0x14) {
      if (in_stack_00000088._4_1_ != 0x15) {
        pbVar13 = (byte *)FUN_108855b04(&stack0x000001c0,unaff_x29 + -0x61,&UNK_10b20b880);
        goto LAB_1012280cc;
      }
      pbVar25 = in_stack_000001d0 + in_stack_000001d8 * 0x40;
      _cStack00000000000001e0 = (byte *)CONCAT71(uStack00000000000001e1,0x16);
      *(undefined8 *)(unaff_x29 + -0xd0) = 7;
      if (in_stack_000001d8 == 0) {
        *(undefined8 *)(unaff_x29 + -0xd0) = 7;
        unaff_x20 = 7;
        in_stack_00000090 = (byte *)0x8000000000000001;
        in_stack_00000098 = (byte *)0x8000000000000001;
        unaff_x19 = in_stack_000001d0;
LAB_101227730:
        *(undefined **)(unaff_x29 + -0xa8) = &UNK_108ca2143;
        *(undefined8 *)(unaff_x29 + -0xa0) = 9;
        *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xa8;
        *(undefined **)(unaff_x29 + -0x80) = &DAT_100c7b3a0;
        param_2 = unaff_x29 + -0x88;
        goto code_r0x000101227758;
      }
      lVar19 = 0;
      bVar8 = false;
      unaff_x20 = 7;
      in_stack_00000090 = (byte *)0x8000000000000001;
      in_stack_00000098 = (byte *)0x8000000000000001;
      lStack0000000000000068 = 7;
      pbVar13 = in_stack_000001d0;
      do {
        pbVar12 = pbVar13 + 0x40;
        bVar15 = *pbVar13;
        if (bVar15 == 0x16) {
          *(long *)(unaff_x29 + -0xd0) = lStack0000000000000068;
          *(byte **)(unaff_x29 + -200) = in_stack_00000050;
          pbVar11 = pbVar12;
          lVar20 = lVar19;
          goto joined_r0x0001012279c0;
        }
        lVar20 = lVar19 + 1;
        uVar26 = *(undefined8 *)(pbVar13 + 9);
        uVar10 = *(undefined8 *)(pbVar13 + 1);
        uVar27 = *(undefined8 *)(pbVar13 + 0x10);
        in_stack_000001e8 = *(byte **)(pbVar13 + 0x28);
        _cStack00000000000001e0 = *(byte **)(pbVar13 + 0x20);
        *(undefined8 *)((long)unaff_x23 + 0x17) = *(undefined8 *)(pbVar13 + 0x18);
        *(undefined8 *)((long)unaff_x23 + 0xf) = uVar27;
        *(byte *)(unaff_x29 + -0x88) = bVar15;
        unaff_x23[1] = uVar26;
        *unaff_x23 = uVar10;
        uVar3 = *(ulong *)(unaff_x29 + -0x80);
        uVar10 = *(undefined8 *)(unaff_x29 + -0x78);
        unaff_x19 = in_stack_00000050;
        if (bVar15 < 0xd) {
          if (bVar15 == 1) {
            bVar15 = *(byte *)(unaff_x29 + -0x87);
            if (3 < bVar15) {
              bVar15 = 4;
            }
            *(byte *)(unaff_x29 + -0xa7) = bVar15;
LAB_101227278:
            *(undefined1 *)(unaff_x29 + -0xa8) = 0;
            goto LAB_101227290;
          }
          if (bVar15 == 4) {
            if (3 < uVar3) {
              uVar3 = 4;
            }
            *(char *)(unaff_x29 + -0xa7) = (char)uVar3;
            goto LAB_101227278;
          }
          if (bVar15 == 0xc) {
            FUN_100b2ebcc(unaff_x29 + -0xa8,uVar10);
            if (uVar3 == 0) goto LAB_101227298;
LAB_101227250:
            _free(uVar10);
            bVar15 = *(byte *)(unaff_x29 + -0xa8);
            goto joined_r0x00010122729c;
          }
LAB_10122760c:
          uVar10 = FUN_108855b04(unaff_x29 + -0x88,unaff_x29 + -0x61,&UNK_10b20e5a0);
          *(undefined8 *)(unaff_x29 + -0xa0) = uVar10;
          *(undefined1 *)(unaff_x29 + -0xa8) = 1;
LAB_101227660:
          *(long *)(unaff_x29 + -0xd0) = lStack0000000000000068;
          *(byte **)(unaff_x29 + -200) = in_stack_00000050;
          in_stack_00000168 = *(byte **)(unaff_x29 + -0xa0);
          goto LAB_10122777c;
        }
        if (bVar15 == 0xd) {
          FUN_100b2ebcc(unaff_x29 + -0xa8,uVar3,uVar10);
LAB_101227290:
          FUN_100e077ec(unaff_x29 + -0x88);
        }
        else {
          if (bVar15 != 0xe) {
            if (bVar15 != 0xf) goto LAB_10122760c;
            FUN_100b2e944(unaff_x29 + -0xa8,uVar3,uVar10);
            goto LAB_101227290;
          }
          FUN_100b2e944(unaff_x29 + -0xa8,uVar10,*(undefined8 *)(unaff_x29 + -0x70));
          if (uVar3 != 0) goto LAB_101227250;
        }
LAB_101227298:
        bVar15 = *(byte *)(unaff_x29 + -0xa8);
joined_r0x00010122729c:
        if ((bVar15 & 1) != 0) goto LAB_101227660;
        bVar15 = *(byte *)(unaff_x29 + -0xa7);
        if (bVar15 < 2) {
          if (bVar15 == 0) {
            if (bVar8) {
LAB_101227d78:
              *(long *)(unaff_x29 + -0xd0) = lStack0000000000000068;
              *(byte **)(unaff_x29 + -200) = in_stack_00000050;
              *(undefined **)(unaff_x29 + -0xa8) = &UNK_108ca2143;
              *(undefined8 *)(unaff_x29 + -0xa0) = 9;
              *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xa8;
              *(undefined **)(unaff_x29 + -0x80) = &DAT_100c7b3a0;
              in_stack_00000168 =
                   (byte *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x88);
            }
            else {
              cVar6 = cStack00000000000001e0;
              uStack00000000000001e1 = (undefined7)((ulong)_cStack00000000000001e0 >> 8);
              _cStack00000000000001e0 = (byte *)CONCAT71(uStack00000000000001e1,0x16);
              if (cVar6 == '\x16') goto LAB_101227ff8;
              uVar10 = *in_stack_000000a0;
              unaff_x23[1] = in_stack_000000a0[1];
              *unaff_x23 = uVar10;
              uVar10 = *(undefined8 *)((long)in_stack_000000a0 + 0xf);
              *(undefined8 *)((long)unaff_x23 + 0x17) =
                   *(undefined8 *)((long)in_stack_000000a0 + 0x17);
              *(undefined8 *)((long)unaff_x23 + 0xf) = uVar10;
              *(char *)(unaff_x29 + -0x88) = cVar6;
              FUN_1011ec168(unaff_x29 + -0xa8,unaff_x29 + -0x88);
              if ((*(byte *)(unaff_x29 + -0xa8) & 1) == 0) {
                *(undefined4 *)(unaff_x29 + -0xb0) = *in_stack_00000040;
                *(undefined4 *)(unaff_x29 + -0xad) = *(undefined4 *)((long)in_stack_00000040 + 3);
                in_stack_00000028 = *(undefined8 *)(unaff_x29 + -0xa0);
                in_stack_00000020._4_1_ = *(undefined1 *)(unaff_x29 + -0x98);
                pbVar11 = pbVar25;
                if (pbVar12 != pbVar25) {
                  bVar15 = pbVar13[0x40];
                  pbVar12 = pbVar13 + 0x80;
                  pbVar11 = pbVar12;
                  if (bVar15 != 0x16) {
                    lVar19 = lVar19 + 2;
                    *(byte *)(unaff_x29 + -0x88) = bVar15;
                    uVar10 = *(undefined8 *)(pbVar13 + 0x50);
                    in_stack_000001e8 = *(byte **)(pbVar13 + 0x68);
                    _cStack00000000000001e0 = *(byte **)(pbVar13 + 0x60);
                    *(undefined8 *)((long)unaff_x23 + 0x17) = *(undefined8 *)(pbVar13 + 0x58);
                    *(undefined8 *)((long)unaff_x23 + 0xf) = uVar10;
                    uVar10 = *(undefined8 *)(pbVar13 + 0x41);
                    unaff_x23[1] = *(undefined8 *)(pbVar13 + 0x49);
                    *unaff_x23 = uVar10;
                    uVar3 = *(ulong *)(unaff_x29 + -0x80);
                    uVar10 = *(undefined8 *)(unaff_x29 + -0x78);
                    if (bVar15 < 0xd) {
                      if (bVar15 == 1) {
                        bVar15 = *(byte *)(unaff_x29 + -0x87);
                        if (3 < bVar15) {
                          bVar15 = 4;
                        }
                        *(byte *)(unaff_x29 + -0xa7) = bVar15;
                        *(undefined1 *)(unaff_x29 + -0xa8) = 0;
LAB_1012274ec:
                        FUN_100e077ec(unaff_x29 + -0x88);
                      }
                      else {
                        if (bVar15 == 4) {
                          if (3 < uVar3) {
                            uVar3 = 4;
                          }
                          *(char *)(unaff_x29 + -0xa7) = (char)uVar3;
                          *(undefined1 *)(unaff_x29 + -0xa8) = 0;
                          goto LAB_1012274ec;
                        }
                        if (bVar15 != 0xc) {
LAB_101227638:
                          uVar10 = FUN_108855b04(unaff_x29 + -0x88,unaff_x29 + -0x61,&UNK_10b20e5a0)
                          ;
                          *(undefined8 *)(unaff_x29 + -0xa0) = uVar10;
                          *(undefined1 *)(unaff_x29 + -0xa8) = 1;
                          goto LAB_101227660;
                        }
                        FUN_100b2ebcc(unaff_x29 + -0xa8,uVar10);
                        if (uVar3 != 0) goto LAB_1012274ac;
                      }
LAB_1012274f4:
                      bVar15 = *(byte *)(unaff_x29 + -0xa8);
                    }
                    else {
                      if (bVar15 == 0xd) {
                        FUN_100b2ebcc(unaff_x29 + -0xa8,uVar3,uVar10);
                        goto LAB_1012274ec;
                      }
                      if (bVar15 != 0xe) {
                        if (bVar15 != 0xf) goto LAB_101227638;
                        FUN_100b2e944(unaff_x29 + -0xa8,uVar3,uVar10);
                        goto LAB_1012274ec;
                      }
                      FUN_100b2e944(unaff_x29 + -0xa8,uVar10,*(undefined8 *)(unaff_x29 + -0x70));
                      if (uVar3 == 0) goto LAB_1012274f4;
LAB_1012274ac:
                      _free(uVar10);
                      bVar15 = *(byte *)(unaff_x29 + -0xa8);
                    }
                    if ((bVar15 & 1) != 0) goto LAB_101227660;
                    bVar15 = *(byte *)(unaff_x29 + -0xa7);
                    bVar8 = true;
                    if (2 < bVar15) goto LAB_1012272b4;
                    lVar20 = lVar19;
                    if (bVar15 == 1) goto LAB_101227594;
                    if (bVar15 == 2) goto LAB_101227520;
                    goto LAB_101227d78;
                  }
                }
                *(long *)(unaff_x29 + -0xd0) = lStack0000000000000068;
                *(byte **)(unaff_x29 + -200) = in_stack_00000050;
                goto LAB_101227b54;
              }
              in_stack_00000168 = *(byte **)(unaff_x29 + -0xa0);
              *(byte **)(unaff_x29 + -200) = in_stack_00000050;
              *(long *)(unaff_x29 + -0xd0) = lStack0000000000000068;
            }
            goto LAB_10122777c;
          }
LAB_101227594:
          lVar19 = lVar20;
          if (in_stack_00000090 != (byte *)0x8000000000000001) {
            *(long *)(unaff_x29 + -0xd0) = lStack0000000000000068;
            *(byte **)(unaff_x29 + -200) = in_stack_00000050;
            *(undefined **)(unaff_x29 + -0xa8) = &UNK_108caec8c;
            *(undefined8 *)(unaff_x29 + -0xa0) = 0xe;
            *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xa8;
            *(undefined **)(unaff_x29 + -0x80) = &DAT_100c7b3a0;
            in_stack_00000168 =
                 (byte *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x88);
            goto LAB_10122777c;
          }
          cVar6 = cStack00000000000001e0;
          _cStack00000000000001e0 = (byte *)CONCAT71(uStack00000000000001e1,0x16);
          if (cVar6 == '\x16') {
            *(long *)(unaff_x29 + -0xd0) = lStack0000000000000068;
            *(byte **)(unaff_x29 + -200) = in_stack_00000050;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_101228170;
          }
          uVar10 = *in_stack_000000a0;
          unaff_x23[1] = in_stack_000000a0[1];
          *unaff_x23 = uVar10;
          uVar10 = *(undefined8 *)((long)in_stack_000000a0 + 0xf);
          *(undefined8 *)((long)unaff_x23 + 0x17) = *(undefined8 *)((long)in_stack_000000a0 + 0x17);
          *(undefined8 *)((long)unaff_x23 + 0xf) = uVar10;
          *(char *)(unaff_x29 + -0x88) = cVar6;
          FUN_1004b60cc(unaff_x29 + -0xa8,unaff_x29 + -0x88);
          in_stack_00000090 = *(byte **)(unaff_x29 + -0xa8);
          if (in_stack_00000090 == (byte *)0x8000000000000001) {
            *(long *)(unaff_x29 + -0xd0) = lStack0000000000000068;
            *(byte **)(unaff_x29 + -200) = in_stack_00000050;
            in_stack_00000168 = *(byte **)(unaff_x29 + -0xa0);
            in_stack_00000090 = (byte *)0x8000000000000001;
            goto LAB_10122777c;
          }
          in_stack_00000048 = *(byte **)(unaff_x29 + -0xa0);
          in_stack_00000038 = *(byte **)(unaff_x29 + -0x98);
          pbVar13 = pbVar12;
        }
        else {
          lVar19 = lVar20;
          if (bVar15 == 2) {
LAB_101227520:
            if (in_stack_00000098 != (byte *)0x8000000000000001) {
              *(long *)(unaff_x29 + -0xd0) = lStack0000000000000068;
              *(byte **)(unaff_x29 + -200) = in_stack_00000050;
              *(undefined **)(unaff_x29 + -0xa8) = &UNK_108caec9a;
              *(undefined8 *)(unaff_x29 + -0xa0) = 10;
              *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xa8;
              *(undefined **)(unaff_x29 + -0x80) = &DAT_100c7b3a0;
              in_stack_00000168 =
                   (byte *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x88);
              goto LAB_10122777c;
            }
            cVar6 = cStack00000000000001e0;
            _cStack00000000000001e0 = (byte *)CONCAT71(uStack00000000000001e1,0x16);
            if (cVar6 == '\x16') {
              *(long *)(unaff_x29 + -0xd0) = lStack0000000000000068;
              *(byte **)(unaff_x29 + -200) = in_stack_00000050;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_101228170;
            }
            uVar10 = *in_stack_000000a0;
            unaff_x23[1] = in_stack_000000a0[1];
            *unaff_x23 = uVar10;
            uVar10 = *(undefined8 *)((long)in_stack_000000a0 + 0xf);
            *(undefined8 *)((long)unaff_x23 + 0x17) =
                 *(undefined8 *)((long)in_stack_000000a0 + 0x17);
            *(undefined8 *)((long)unaff_x23 + 0xf) = uVar10;
            *(char *)(unaff_x29 + -0x88) = cVar6;
            FUN_1004b60cc(unaff_x29 + -0xa8,unaff_x29 + -0x88);
            in_stack_00000098 = *(byte **)(unaff_x29 + -0xa8);
            if (in_stack_00000098 == (byte *)0x8000000000000001) {
              *(long *)(unaff_x29 + -0xd0) = lStack0000000000000068;
              *(byte **)(unaff_x29 + -200) = in_stack_00000050;
              in_stack_00000168 = *(byte **)(unaff_x29 + -0xa0);
              in_stack_00000098 = (byte *)0x8000000000000001;
              goto LAB_10122777c;
            }
            in_stack_00000058 = *(byte **)(unaff_x29 + -0xa0);
            in_stack_00000030 = *(byte **)(unaff_x29 + -0x98);
            pbVar13 = pbVar12;
          }
          else {
LAB_1012272b4:
            cVar6 = cStack00000000000001e0;
            pbVar13 = pbVar12;
            if (bVar15 == 3) {
              if (unaff_x20 != 7) {
                *(long *)(unaff_x29 + -0xd0) = lStack0000000000000068;
                *(byte **)(unaff_x29 + -200) = in_stack_00000050;
                *(undefined **)(unaff_x29 + -0xa8) = &UNK_108ca105e;
                *(undefined8 *)(unaff_x29 + -0xa0) = 6;
                *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xa8;
                *(undefined **)(unaff_x29 + -0x80) = &DAT_100c7b3a0;
                pbVar12 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x88);
                goto joined_r0x000101227788;
              }
              _cStack00000000000001e0 = (byte *)CONCAT71(uStack00000000000001e1,0x16);
              if (cVar6 == '\x16') {
                *(long *)(unaff_x29 + -0xd0) = lStack0000000000000068;
                *(byte **)(unaff_x29 + -200) = in_stack_00000050;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                goto LAB_101228170;
              }
              uVar10 = *in_stack_000000a0;
              unaff_x23[1] = in_stack_000000a0[1];
              *unaff_x23 = uVar10;
              uVar10 = *(undefined8 *)((long)in_stack_000000a0 + 0xf);
              *(undefined8 *)((long)unaff_x23 + 0x17) =
                   *(undefined8 *)((long)in_stack_000000a0 + 0x17);
              *(undefined8 *)((long)unaff_x23 + 0xf) = uVar10;
              *(char *)(unaff_x29 + -0x88) = cVar6;
              FUN_1012af378(unaff_x29 + -0xa8,unaff_x29 + -0x88);
              unaff_x20 = *(long *)(unaff_x29 + -0xa8);
              pbVar12 = *(byte **)(unaff_x29 + -0xa0);
              in_stack_00000050 = pbVar12;
              if (unaff_x20 == 7) {
                in_stack_00000160 = 7;
                bVar8 = true;
                bVar9 = true;
                in_stack_00000168 = pbVar12;
                goto LAB_1012277a8;
              }
              *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x29 + -0x90);
              *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0x98);
              lStack0000000000000068 = unaff_x20;
            }
            else {
              _cStack00000000000001e0 = (byte *)CONCAT71(uStack00000000000001e1,0x16);
              if (cVar6 == '\x16') {
LAB_101227ff8:
                *(long *)(unaff_x29 + -0xd0) = lStack0000000000000068;
                *(byte **)(unaff_x29 + -200) = in_stack_00000050;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101228170:
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x101228174);
                (*pcVar7)();
              }
              uVar10 = *in_stack_000000a0;
              unaff_x23[1] = in_stack_000000a0[1];
              *unaff_x23 = uVar10;
              uVar10 = *(undefined8 *)((long)in_stack_000000a0 + 0xf);
              *(undefined8 *)((long)unaff_x23 + 0x17) =
                   *(undefined8 *)((long)in_stack_000000a0 + 0x17);
              *(undefined8 *)((long)unaff_x23 + 0xf) = uVar10;
              *(char *)(unaff_x29 + -0x88) = cVar6;
              FUN_100e077ec(unaff_x29 + -0x88);
            }
          }
        }
      } while (pbVar13 != pbVar25);
      *(long *)(unaff_x29 + -0xd0) = lStack0000000000000068;
      *(byte **)(unaff_x29 + -200) = in_stack_00000050;
      pbVar11 = pbVar25;
      lVar20 = lVar19;
joined_r0x0001012279c0:
      unaff_x19 = in_stack_00000050;
      if (!bVar8) goto LAB_101227730;
LAB_101227b54:
      bVar8 = in_stack_00000090 == (byte *)0x8000000000000001;
      pbVar2 = (byte *)0x8000000000000000;
      if (!bVar8) {
        pbVar2 = in_stack_00000090;
      }
      bVar9 = in_stack_00000098 == (byte *)0x8000000000000001;
      uVar3 = 0x8000000000000000;
      if (!bVar9) {
        uVar3 = (ulong)in_stack_00000098;
      }
      if (unaff_x20 == 7) {
        *(undefined **)(unaff_x29 + -0xa8) = &UNK_108ca105e;
        *(undefined8 *)(unaff_x29 + -0xa0) = 6;
        *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xa8;
        *(undefined **)(unaff_x29 + -0x80) = &DAT_100c7b3a0;
        pbVar12 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
        in_stack_00000160 = 7;
        in_stack_00000168 = pbVar12;
        if ((uVar3 & 0x7fffffffffffffff) != 0) {
          _free(in_stack_00000058);
        }
        if (((ulong)pbVar2 & 0x7fffffffffffffff) != 0) {
          _free(in_stack_00000048);
        }
        goto LAB_1012277a8;
      }
      in_stack_00000178 = *(long *)(unaff_x29 + -0xb8);
      pbVar17 = *(byte **)(unaff_x29 + -0xc0);
      uVar4 = *(undefined4 *)(unaff_x29 + -0xad);
      uStack00000000000001b0 = (undefined3)*(undefined4 *)(unaff_x29 + -0xb0);
      uStack00000000000001b3 = (undefined1)uVar4;
      uStack00000000000001b4 = (undefined2)((uint)uVar4 >> 8);
      uStack00000000000001b6 = (undefined1)((uint)uVar4 >> 0x18);
      in_stack_00000168 = in_stack_00000050;
      in_stack_00000188 = in_stack_00000048;
      in_stack_00000190 = in_stack_00000038;
      in_stack_000001a0 = in_stack_00000058;
      in_stack_000001a8 = in_stack_00000030;
      uStack00000000000001b7 = (undefined1)in_stack_00000028;
      uStack00000000000001b8 = (undefined6)((ulong)in_stack_00000028 >> 8);
      uStack00000000000001be = (undefined1)((ulong)in_stack_00000028 >> 0x38);
      in_stack_00000160 = unaff_x20;
      in_stack_00000170 = pbVar17;
      in_stack_00000180 = pbVar2;
      in_stack_00000198 = uVar3;
      uStack00000000000001bf = in_stack_00000020._4_1_;
      FUN_100d34830(&stack0x00000200);
      pbVar13 = in_stack_00000050;
      if (pbVar25 != pbVar11) break;
      goto LAB_101227950;
    }
    pbVar12 = in_stack_000001d0 + in_stack_000001d8 * 0x20;
    _cStack00000000000001e0 = in_stack_000001d0;
    pbVar17 = in_stack_000001d0;
    if (in_stack_000001d8 == 0) {
LAB_1012276b0:
      in_stack_000001e8 = pbVar17;
      pbVar11 = (byte *)FUN_1087e422c(0,&UNK_10b22e1d8,&UNK_10b20a590);
LAB_1012276cc:
      in_stack_00000160 = 7;
      pbVar13 = pbVar11;
      in_stack_00000168 = pbVar11;
    }
    else {
      pbVar17 = in_stack_000001d0 + 0x20;
      bVar15 = *in_stack_000001d0;
      if (bVar15 == 0x16) goto LAB_1012276b0;
      uVar10 = *(undefined8 *)(in_stack_000001d0 + 1);
      unaff_x23[1] = *(undefined8 *)(in_stack_000001d0 + 9);
      *unaff_x23 = uVar10;
      uVar10 = *(undefined8 *)(in_stack_000001d0 + 0x10);
      *(undefined8 *)((long)unaff_x23 + 0x17) = *(undefined8 *)(in_stack_000001d0 + 0x18);
      *(undefined8 *)((long)unaff_x23 + 0xf) = uVar10;
      *(byte *)(unaff_x29 + -0x88) = bVar15;
      in_stack_000001e8 = pbVar17;
      FUN_1011ec168(unaff_x29 + -0xa8,unaff_x29 + -0x88);
      if (*(char *)(unaff_x29 + -0xa8) == '\x01') {
        pbVar11 = *(byte **)(unaff_x29 + -0xa0);
        goto LAB_1012276cc;
      }
      *(undefined4 *)(unaff_x29 + -0xd0) = *in_stack_00000040;
      *(undefined2 *)(unaff_x29 + -0xcc) = *(undefined2 *)(in_stack_00000040 + 1);
      pbVar21 = *(byte **)(unaff_x29 + -0xa1);
      uVar5 = *(undefined2 *)(unaff_x29 + -0x99);
      pbVar22 = pbVar21;
      pbVar24 = pbVar12;
      if (lVar20 == 1) {
        in_stack_00000098 = (byte *)0x8000000000000000;
        if (pbVar17 != pbVar12) goto LAB_101227860;
LAB_101227a0c:
        in_stack_00000090 = (byte *)0x0;
        goto LAB_101227c90;
      }
      pbVar17 = pbVar25 + 0x40;
      bVar15 = pbVar25[0x20];
      in_stack_000001e8 = pbVar17;
      if (bVar15 == 0x16) {
        in_stack_00000098 = (byte *)0x8000000000000000;
      }
      else {
        uVar10 = *(undefined8 *)(pbVar25 + 0x21);
        unaff_x23[1] = *(undefined8 *)(pbVar25 + 0x29);
        *unaff_x23 = uVar10;
        uVar10 = *(undefined8 *)(pbVar25 + 0x30);
        *(undefined8 *)((long)unaff_x23 + 0x17) = *(undefined8 *)(pbVar25 + 0x38);
        *(undefined8 *)((long)unaff_x23 + 0xf) = uVar10;
        *(byte *)(unaff_x29 + -0x88) = bVar15;
        FUN_1004b60cc(unaff_x29 + -0xa8,unaff_x29 + -0x88);
        in_stack_00000098 = *(byte **)(unaff_x29 + -0xa8);
        pbVar11 = *(byte **)(unaff_x29 + -0xa0);
        if (in_stack_00000098 == (byte *)0x8000000000000001) goto LAB_1012276cc;
        in_stack_00000050 = *(byte **)(unaff_x29 + -0x98);
      }
      if (pbVar17 == pbVar12) goto LAB_101227a0c;
LAB_101227860:
      pbVar23 = pbVar17 + 0x20;
      bVar15 = *pbVar17;
      in_stack_000001e8 = pbVar23;
      if (bVar15 == 0x16) {
        in_stack_00000090 = (byte *)0x8000000000000000;
        pbVar16 = in_stack_00000098;
joined_r0x000101227888:
        if (pbVar23 == pbVar12) {
LAB_101227c90:
          pbVar13 = (byte *)FUN_1087e422c(3,&UNK_10b22e1d8,&UNK_10b20a590);
          pbVar16 = in_stack_00000058;
        }
        else {
          pbVar24 = pbVar17 + 0x40;
          bVar15 = pbVar17[0x20];
          in_stack_000001e8 = pbVar24;
          if (bVar15 == 0x16) goto LAB_101227c90;
          uVar10 = *(undefined8 *)(pbVar17 + 0x21);
          unaff_x23[1] = *(undefined8 *)(pbVar17 + 0x29);
          *unaff_x23 = uVar10;
          uVar10 = *(undefined8 *)(pbVar17 + 0x30);
          *(undefined8 *)((long)unaff_x23 + 0x17) = *(undefined8 *)(pbVar17 + 0x38);
          *(undefined8 *)((long)unaff_x23 + 0xf) = uVar10;
          *(byte *)(unaff_x29 + -0x88) = bVar15;
          FUN_1012af378(unaff_x29 + -0xa8,unaff_x29 + -0x88);
          unaff_x20 = *(long *)(unaff_x29 + -0xa8);
          pbVar13 = *(byte **)(unaff_x29 + -0xa0);
          if (unaff_x20 != 7) {
            in_stack_00000178 = *(long *)(unaff_x29 + -0x90);
            pbVar25 = *(byte **)(unaff_x29 + -0x98);
            _uStack00000000000001b0 = *(undefined4 *)(unaff_x29 + -0xd0);
            uStack00000000000001b4 = *(undefined2 *)(unaff_x29 + -0xcc);
            in_stack_00000180 = in_stack_00000098;
            in_stack_00000190 = in_stack_00000050;
            uStack00000000000001b6 = SUB81(pbVar21,0);
            uStack00000000000001b7 = (undefined1)((ulong)pbVar21 >> 8);
            uStack00000000000001b8 = (undefined6)((ulong)pbVar21 >> 0x10);
            uStack00000000000001be = (undefined1)uVar5;
            uStack00000000000001bf = (undefined1)((ushort)uVar5 >> 8);
            in_stack_00000160 = unaff_x20;
            in_stack_00000168 = pbVar13;
            in_stack_00000170 = pbVar25;
            in_stack_00000188 = pbVar11;
            in_stack_00000198 = (ulong)in_stack_00000090;
            in_stack_000001a0 = pbVar22;
            in_stack_000001a8 = pbVar16;
            pbVar12 = (byte *)FUN_100fbc738(&stack0x000001e0);
            in_stack_00000058 = pbVar16;
            if (pbVar12 != (byte *)0x0) {
              in_stack_00000160 = 7;
              in_stack_00000168 = pbVar12;
              if (((ulong)in_stack_00000098 & 0x7fffffffffffffff) != 0) {
                _free(pbVar11);
              }
              if (((ulong)in_stack_00000090 & 0x7fffffffffffffff) != 0) {
                _free(pbVar22);
              }
              pbVar2 = pbVar13;
              if (unaff_x20 == 4) goto joined_r0x000101227df4;
              if ((unaff_x20 != 3) || (((ulong)pbVar13 & 0x7fffffffffffffff) == 0))
              goto LAB_10122794c;
              goto LAB_101227710;
            }
            goto LAB_101227950;
          }
        }
        pbVar17 = pbVar24;
        in_stack_00000058 = pbVar16;
        in_stack_00000168 = pbVar13;
        if (((ulong)in_stack_00000090 & 0x7fffffffffffffff) == 0) {
          in_stack_00000160 = 7;
        }
        else {
          in_stack_00000160 = 7;
          _free(pbVar22);
        }
      }
      else {
        uVar10 = *(undefined8 *)(pbVar17 + 1);
        unaff_x23[1] = *(undefined8 *)(pbVar17 + 9);
        *unaff_x23 = uVar10;
        uVar10 = *(undefined8 *)(pbVar17 + 0x10);
        *(undefined8 *)((long)unaff_x23 + 0x17) = *(undefined8 *)(pbVar17 + 0x18);
        *(undefined8 *)((long)unaff_x23 + 0xf) = uVar10;
        *(byte *)(unaff_x29 + -0x88) = bVar15;
        FUN_1004b60cc(unaff_x29 + -0xa8,unaff_x29 + -0x88);
        in_stack_00000090 = *(byte **)(unaff_x29 + -0xa8);
        pbVar22 = *(byte **)(unaff_x29 + -0xa0);
        if (in_stack_00000090 != (byte *)0x8000000000000001) {
          pbVar16 = *(byte **)(unaff_x29 + -0x98);
          goto joined_r0x000101227888;
        }
        in_stack_00000160 = 7;
        pbVar13 = pbVar22;
        pbVar17 = pbVar23;
        in_stack_00000168 = pbVar22;
      }
      if (((ulong)in_stack_00000098 & 0x7fffffffffffffff) != 0) {
        _free(pbVar11);
      }
    }
    lVar19 = ((ulong)((long)pbVar12 - (long)pbVar17) >> 5) + 1;
    while (lVar19 = lVar19 + -1, pbVar12 = pbVar13, lVar19 != 0) {
      FUN_100e077ec(pbVar17);
      pbVar17 = pbVar17 + 0x20;
    }
joined_r0x000101227df4:
    if (pbVar2 != (byte *)0x0) {
LAB_101227710:
      _free(pbVar25);
    }
  } while( true );
  *(long *)(unaff_x29 + -0x88) = lVar20;
  pbVar12 = (byte *)FUN_1087e422c(((ulong)((long)pbVar25 - (long)pbVar11) >> 6) + lVar20,
                                  unaff_x29 + -0x88,&UNK_10b23a190);
  in_stack_00000160 = 7;
  in_stack_00000168 = pbVar12;
  if (((ulong)pbVar2 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((uVar3 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000058);
  }
  if (unaff_x20 == 3) {
    pbVar13 = (byte *)((ulong)in_stack_00000050 & 0x7fffffffffffffff);
  }
  else if (unaff_x20 != 4) goto LAB_10122794c;
  if (pbVar13 != (byte *)0x0) {
    _free(pbVar17);
  }
  goto LAB_10122794c;
}

