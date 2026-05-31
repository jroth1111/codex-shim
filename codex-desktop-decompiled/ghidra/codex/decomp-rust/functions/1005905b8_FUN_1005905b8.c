
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1005905b8(void)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  code *pcVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  byte *pbVar16;
  long *plVar17;
  undefined1 uVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  long unaff_x19;
  undefined8 uVar22;
  undefined8 *puVar23;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long unaff_x29;
  byte bVar33;
  byte bVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 in_stack_00000020;
  undefined1 *in_stack_00000028;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined1 *in_stack_00000058;
  undefined8 uStack0000000000000060;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  
code_r0x0001005905b8:
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000098,s__108ac1772,unaff_x29 + -0x90);
  *(long *)(unaff_x19 + 0x1c8) = in_stack_000000a0;
  *(undefined8 *)(unaff_x19 + 0x1c0) = in_stack_00000098;
  *(long *)(unaff_x19 + 0x1d0) = in_stack_000000a8;
  *(undefined1 *)(unaff_x19 + 0x1ba) = 1;
  if (in_stack_00000080 != 0) {
    _free(in_stack_00000088);
  }
LAB_100590234:
  uVar14 = *(undefined8 *)(unaff_x19 + 0x120);
  uVar22 = *(undefined8 *)(unaff_x19 + 0x100);
  uVar35 = *(undefined8 *)(unaff_x19 + 0x118);
  uVar36 = *(undefined8 *)(unaff_x19 + 0x110);
  in_stack_00000048[3] = *(undefined8 *)(unaff_x19 + 0x108);
  in_stack_00000048[2] = uVar22;
  in_stack_00000048[5] = uVar35;
  in_stack_00000048[4] = uVar36;
  *(undefined8 *)(unaff_x19 + 0x1f8) = uVar14;
  in_stack_00000058[0x390] = 0;
  uVar11 = FUN_100590830(unaff_x19 + 0x1d8,in_stack_00000050);
  if ((uVar11 & 1) != 0) {
    uVar18 = 3;
LAB_100590618:
    *in_stack_00000028 = uVar18;
    uVar14 = 1;
    uVar18 = 3;
LAB_100590628:
    *(undefined1 *)(unaff_x19 + 0xb8) = uVar18;
    return uVar14;
  }
  if (in_stack_00000058[0x390] == '\x03') {
    if (in_stack_00000058[0x388] == '\x03') {
      FUN_100d1ddbc(unaff_x19 + 0x570);
    }
    FUN_100df5b9c(unaff_x19 + 0x3b8);
  }
  in_stack_00000098 = 0;
  in_stack_000000a0 = 1;
  in_stack_000000a8 = 0;
  FUN_10624142c(unaff_x29 + -0x90,*(long *)(unaff_x19 + 0x100) + 0x780,0);
  thunk_FUN_108855060(&stack0x00000098,0,0x24,1,1);
  lVar25 = in_stack_000000a0;
  uVar14 = in_stack_00000098;
  puVar23 = (undefined8 *)(in_stack_000000a0 + in_stack_000000a8);
  uVar22 = *(undefined8 *)(unaff_x29 + -0x90);
  puVar23[1] = *(undefined8 *)(unaff_x29 + -0x88);
  *puVar23 = uVar22;
  uVar22 = *(undefined8 *)(unaff_x29 + -0x80);
  puVar23[3] = *(undefined8 *)(unaff_x29 + -0x78);
  puVar23[2] = uVar22;
  *(undefined4 *)(puVar23 + 4) = *(undefined4 *)(unaff_x29 + -0x70);
  lVar20 = in_stack_000000a8 + 0x24;
  uVar22 = *(undefined8 *)(*(long *)(unaff_x19 + 0x108) + 0x238);
  lVar27 = *(long *)(*(long *)(unaff_x19 + 0x108) + 0x240);
  lVar28 = 1;
  if ((lVar27 == 0) || (lVar28 = _malloc(lVar27), lVar28 != 0)) {
    _memcpy(lVar28,uVar22,lVar27);
    uVar22 = *(undefined8 *)(unaff_x19 + 0x118);
    lVar3 = *(long *)(unaff_x19 + 0x120);
    lVar31 = 1;
    if ((lVar3 == 0) || (lVar31 = _malloc(lVar3), lVar31 != 0)) {
      _memcpy(lVar31,uVar22,lVar3);
      *(undefined1 *)(unaff_x19 + 0x1ba) = 0;
      uVar35 = *(undefined8 *)(unaff_x19 + 0x1c8);
      uVar36 = *(undefined8 *)(unaff_x19 + 0x1c0);
      *(undefined8 *)(unaff_x29 + -0x88) = uVar35;
      *(undefined8 *)(unaff_x29 + -0x90) = uVar36;
      uVar22 = *(undefined8 *)(unaff_x19 + 0x1d0);
      *(undefined8 *)(unaff_x29 + -0x80) = uVar22;
      *(undefined4 *)(unaff_x19 + 0x1c0) = 0x3c;
      *(undefined8 *)(unaff_x19 + 0x1c8) = uVar14;
      *(long *)(unaff_x19 + 0x1d0) = lVar25;
      *(long *)(unaff_x19 + 0x1d8) = lVar20;
      *(long *)(unaff_x19 + 0x1e0) = lVar27;
      *(long *)(unaff_x19 + 0x1e8) = lVar28;
      *(long *)(unaff_x19 + 0x1f0) = lVar27;
      *(long *)(unaff_x19 + 0x1f8) = lVar3;
      *(long *)(unaff_x19 + 0x200) = lVar31;
      *(long *)(unaff_x19 + 0x208) = lVar3;
      *(undefined8 *)(unaff_x19 + 0x218) = uVar35;
      *(undefined8 *)(unaff_x19 + 0x210) = uVar36;
      *(undefined8 *)(unaff_x19 + 0x220) = uVar22;
      uVar14 = *(undefined8 *)(unaff_x19 + 0x100);
      in_stack_00000048[0x3b] = *(undefined8 *)(unaff_x19 + 0x108);
      in_stack_00000048[0x3a] = uVar14;
      *(undefined1 *)(unaff_x19 + 0x768) = 0;
      iVar8 = FUN_10059e898(unaff_x19 + 0x1c0,in_stack_00000050);
      if (iVar8 == 0) {
        FUN_100d1ddbc(unaff_x19 + 0x1c0);
        *(undefined1 *)(unaff_x19 + 0x1ba) = 0;
        if (((*(byte *)(unaff_x19 + 0x1b9) & 1) != 0) && (*(long *)(unaff_x19 + 0x188) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 400));
        }
        *(undefined1 *)(unaff_x19 + 0x1b9) = 0;
LAB_10058f9e4:
        do {
          plVar24 = (long *)(unaff_x19 + 0x188);
          do {
            plVar13 = *(long **)(unaff_x19 + 0x140);
            plVar19 = *(long **)(unaff_x19 + 0x130);
            plVar17 = plVar13;
            if (plVar19 == plVar13) {
LAB_1005903cc:
              *(long *)(unaff_x19 + 0x148) = 4;
              plVar15 = plVar19;
              plVar17 = plVar13;
LAB_1005903dc:
              if ((long)plVar17 - (long)plVar15 != 0) {
                uVar11 = (ulong)((long)plVar17 - (long)plVar15) >> 5;
                plVar15 = plVar15 + 1;
                do {
                  if (((plVar15[-1] == 0) || (plVar15[-1] == 2)) && (*plVar15 != 0)) {
                    _free(plVar15[1]);
                  }
                  plVar15 = plVar15 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              if (*(long *)(unaff_x19 + 0x138) != 0) {
                _free(*(undefined8 *)(unaff_x19 + 0x128));
              }
              *in_stack_00000028 = 1;
              FUN_100e82cc0(in_stack_00000020);
              if (*(long *)(unaff_x19 + 0x70) != 0) {
                _free(*(undefined8 *)(unaff_x19 + 0x78));
              }
              if ((*(byte *)(unaff_x19 + 0xb9) & 1) != 0) {
                lVar20 = *(long *)(unaff_x19 + 0x90);
                lVar25 = *(long *)(unaff_x19 + 0x98);
                if (lVar25 != 0) {
                  puVar23 = (undefined8 *)(lVar20 + 8);
                  do {
                    if (puVar23[-1] != 0) {
                      _free(*puVar23);
                    }
                    puVar23 = puVar23 + 3;
                    lVar25 = lVar25 + -1;
                  } while (lVar25 != 0);
                }
                if (*(long *)(unaff_x19 + 0x88) != 0) {
                  _free(lVar20);
                }
              }
              if ((*(byte *)(unaff_x19 + 0xba) & 1) != 0) {
                lVar20 = *(long *)(unaff_x19 + 0xa8);
                lVar25 = *(long *)(unaff_x19 + 0xb0);
                if (lVar25 != 0) {
                  plVar24 = (long *)(lVar20 + 8);
                  do {
                    if (((plVar24[-1] == 0) || (plVar24[-1] == 2)) && (*plVar24 != 0)) {
                      _free(plVar24[1]);
                    }
                    plVar24 = plVar24 + 4;
                    lVar25 = lVar25 + -1;
                  } while (lVar25 != 0);
                }
                if (*(long *)(unaff_x19 + 0xa0) != 0) {
                  _free(lVar20);
                }
              }
              uVar14 = 0;
              *(undefined1 *)(unaff_x19 + 0xbb) = 0;
              *(undefined2 *)(unaff_x19 + 0xb9) = 0;
              uVar18 = 1;
              goto LAB_100590628;
            }
            while( true ) {
              while( true ) {
                plVar13 = plVar19 + 4;
                *(long **)(unaff_x19 + 0x130) = plVar13;
                lVar28 = *plVar19;
                lVar25 = plVar19[3];
                lVar20 = plVar19[2];
                *(long *)(unaff_x19 + 0x150) = plVar19[1];
                *(long *)(unaff_x19 + 0x148) = lVar28;
                *(long *)(unaff_x19 + 0x160) = lVar25;
                *(long *)(unaff_x19 + 0x158) = lVar20;
                plVar15 = plVar13;
                if (*(long *)(unaff_x19 + 0x148) == 4) goto LAB_1005903dc;
                lVar28 = *plVar19;
                lVar25 = plVar19[3];
                lVar20 = plVar19[2];
                *(long *)(unaff_x19 + 0x170) = plVar19[1];
                *(long *)(unaff_x19 + 0x168) = lVar28;
                *(long *)(unaff_x19 + 0x180) = lVar25;
                *(long *)(unaff_x19 + 0x178) = lVar20;
                lVar20 = *(long *)(unaff_x19 + 0x168);
                if (lVar20 < 2) break;
                if (lVar20 != 3) {
                  *(undefined8 *)(unaff_x19 + 0x1a8) = *(undefined8 *)(unaff_x19 + 0x178);
                  *(undefined8 *)(unaff_x19 + 0x1a0) = *(undefined8 *)(unaff_x19 + 0x170);
                  *(undefined8 *)(unaff_x19 + 0x1b0) = *(undefined8 *)(unaff_x19 + 0x180);
                  lVar20 = *(long *)(unaff_x19 + 0x110);
                  if ((*(byte *)(lVar20 + 0x19) & 1) == 0) {
                    if ((*(byte *)(lVar20 + 0x18) & 1) == 0) {
                      *(long *)(unaff_x19 + 0x1c0) = lVar20;
                      uVar14 = *(undefined8 *)(unaff_x19 + 0x100);
                      in_stack_00000048[1] = *(undefined8 *)(unaff_x19 + 0x108);
                      *in_stack_00000048 = uVar14;
                      in_stack_00000058[0x1b0] = 0;
                      uVar11 = FUN_100580628(unaff_x19 + 0x1c0,in_stack_00000050);
                      if ((uVar11 & 1) != 0) {
                        uVar18 = 6;
                        goto LAB_100590618;
                      }
                      if (in_stack_00000058[0x1b0] == '\x03') {
                        if (in_stack_00000058[0x1a8] == '\x03') {
                          FUN_100d1ddbc(unaff_x19 + 0x390);
                        }
                        FUN_100df5b9c(unaff_x19 + 0x1d8);
                      }
                    }
                    lVar20 = *(long *)(unaff_x19 + 0x108);
                    lVar25 = *(long *)(unaff_x19 + 0x110);
                    lVar27 = *(long *)(unaff_x19 + 0x100);
                    uVar14 = *(undefined8 *)(unaff_x19 + 0x1a8);
                    lVar28 = *(long *)(unaff_x19 + 0x1b0);
                    *(long *)(unaff_x19 + 0x1c0) = lVar25;
                    *(long *)(unaff_x19 + 0x1c8) = lVar27;
                    *(long *)(unaff_x19 + 0x1d0) = lVar20;
                    *(undefined8 *)(unaff_x19 + 0x1d8) = uVar14;
                    *(long *)(unaff_x19 + 0x1e0) = lVar28;
                    *in_stack_00000058 = 0;
                    if ((lVar28 != 0) && ((*(byte *)(lVar25 + 0x19) & 1) == 0)) {
                      in_stack_00000098 = 0;
                      in_stack_000000a0 = 1;
                      in_stack_000000a8 = 0;
                      FUN_10624142c(unaff_x29 + -0x90,lVar27 + 0x780,0);
                      thunk_FUN_108855060(&stack0x00000098,0,0x24,1,1);
                      lVar31 = in_stack_000000a0;
                      uVar22 = in_stack_00000098;
                      puVar23 = (undefined8 *)(in_stack_000000a0 + in_stack_000000a8);
                      uVar36 = *(undefined8 *)(unaff_x29 + -0x90);
                      puVar23[1] = *(undefined8 *)(unaff_x29 + -0x88);
                      *puVar23 = uVar36;
                      uVar36 = *(undefined8 *)(unaff_x29 + -0x80);
                      puVar23[3] = *(undefined8 *)(unaff_x29 + -0x78);
                      puVar23[2] = uVar36;
                      *(undefined4 *)(puVar23 + 4) = *(undefined4 *)(unaff_x29 + -0x70);
                      lVar3 = in_stack_000000a8 + 0x24;
                      uVar36 = *(undefined8 *)(lVar20 + 0x238);
                      lVar29 = *(long *)(lVar20 + 0x240);
                      lVar30 = 1;
                      if ((lVar29 != 0) && (lVar30 = _malloc(lVar29), lVar30 == 0)) {
                        FUN_107c03c64(1,lVar29);
                        goto LAB_10059067c;
                      }
                      _memcpy(lVar30,uVar36,lVar29);
                      uVar36 = *(undefined8 *)(lVar25 + 8);
                      lVar25 = *(long *)(lVar25 + 0x10);
                      lVar32 = 1;
                      if ((lVar25 != 0) && (lVar32 = _malloc(lVar25), lVar32 == 0)) {
                        FUN_107c03c64(1,lVar25);
                        goto LAB_10059067c;
                      }
                      _memcpy(lVar32,uVar36,lVar25);
                      lVar9 = _malloc(lVar28);
                      if (lVar9 == 0) {
                        FUN_107c03c64(1,lVar28);
                        goto LAB_10059067c;
                      }
                      _memcpy(lVar9,uVar14,lVar28);
                      *(undefined4 *)(unaff_x19 + 0x1e8) = 0x3d;
                      *(undefined8 *)(unaff_x19 + 0x1f0) = uVar22;
                      *(long *)(unaff_x19 + 0x1f8) = lVar31;
                      *(long *)(unaff_x19 + 0x200) = lVar3;
                      *(long *)(unaff_x19 + 0x208) = lVar29;
                      *(long *)(unaff_x19 + 0x210) = lVar30;
                      *(long *)(unaff_x19 + 0x218) = lVar29;
                      *(long *)(unaff_x19 + 0x220) = lVar25;
                      *(long *)(unaff_x19 + 0x228) = lVar32;
                      *(long *)(unaff_x19 + 0x230) = lVar25;
                      *(long *)(unaff_x19 + 0x238) = lVar28;
                      *(long *)(unaff_x19 + 0x240) = lVar9;
                      *(long *)(unaff_x19 + 0x248) = lVar28;
                      *(long *)(unaff_x19 + 0x3c0) = lVar27;
                      *(long *)(unaff_x19 + 0x3c8) = lVar20;
                      *(undefined1 *)(unaff_x19 + 0x790) = 0;
                      uVar11 = FUN_10059e898(unaff_x19 + 0x1e8,in_stack_00000050);
                      if ((uVar11 & 1) != 0) {
                        *in_stack_00000058 = 3;
                        uVar18 = 7;
                        goto LAB_100590618;
                      }
                      FUN_100d1ddbc(unaff_x19 + 0x1e8);
                    }
                    *in_stack_00000058 = 1;
                  }
                  if (*(long *)(unaff_x19 + 0x1a0) != 0) {
                    _free(*(undefined8 *)(unaff_x19 + 0x1a8));
                  }
                  goto LAB_10058f9e4;
                }
                plVar19 = plVar13;
                if (plVar13 == plVar17) goto LAB_1005903cc;
              }
              if (lVar20 != 0) break;
              *(undefined1 *)(unaff_x19 + 0x1b9) = 1;
              *(undefined8 *)(unaff_x19 + 0x198) = *(undefined8 *)(unaff_x19 + 0x180);
              *(undefined8 *)(unaff_x19 + 400) = *(undefined8 *)(unaff_x19 + 0x178);
              *plVar24 = *(long *)(unaff_x19 + 0x170);
              if (*(long *)(unaff_x19 + 0x198) != 0) {
                pbVar16 = *(byte **)(unaff_x19 + 400);
                pbVar1 = pbVar16 + *(long *)(unaff_x19 + 0x198);
                do {
                  uVar2 = (uint)*pbVar16;
                  pbVar6 = pbVar16 + 1;
                  if ((char)*pbVar16 < '\0') {
                    if (uVar2 < 0xe0) {
                      uVar2 = pbVar16[1] & 0x3f | (uVar2 & 0x1f) << 6;
                      pbVar6 = pbVar16 + 2;
                    }
                    else {
                      uVar4 = pbVar16[2] & 0x3f | (pbVar16[1] & 0x3f) << 6;
                      if (uVar2 < 0xf0) {
                        uVar2 = uVar4 | (uVar2 & 0x1f) << 0xc;
                        pbVar6 = pbVar16 + 3;
                      }
                      else {
                        uVar2 = pbVar16[3] & 0x3f | uVar4 << 6 | (uVar2 & 7) << 0x12;
                        if (uVar2 == 0x110000) break;
                        pbVar6 = pbVar16 + 4;
                      }
                    }
                  }
                  pbVar16 = pbVar6;
                  if ((4 < uVar2 - 9) && (uVar2 != 0x20)) {
                    if (0x7f < uVar2) {
                      uVar4 = uVar2 >> 8;
                      if (uVar4 < 0x20) {
                        if (uVar4 == 0) {
                          bVar12 = (&
                                   __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                                   )[(ulong)uVar2 & 0xff];
joined_r0x00010058fba0:
                          if ((bVar12 & 1) != 0) goto LAB_10058faa4;
                        }
                        else if ((uVar4 == 0x16) && (uVar2 == 0x1680)) goto LAB_10058faa4;
                      }
                      else {
                        if (uVar4 == 0x20) {
                          bVar12 = (byte)(&
                                         __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                                         )[(ulong)uVar2 & 0xff] >> 1;
                          goto joined_r0x00010058fba0;
                        }
                        if ((uVar4 == 0x30) && (uVar2 == 0x3000)) goto LAB_10058faa4;
                      }
                    }
                    lVar20 = *(long *)(unaff_x19 + 0x110);
                    uStack0000000000000060 = *(undefined8 *)(unaff_x19 + 0x118);
                    lVar25 = *(long *)(unaff_x19 + 0x120);
                    if (*(long *)(lVar20 + 0x68) == 0) goto LAB_100590094;
                    uVar14 = *(undefined8 *)(lVar20 + 0x70);
                    uVar22 = *(undefined8 *)(lVar20 + 0x78);
                    goto LAB_10058ffbc;
                  }
LAB_10058faa4:
                } while (pbVar16 != pbVar1);
                lVar20 = *(long *)(unaff_x19 + 0x110);
                uStack0000000000000060 = *(undefined8 *)(unaff_x19 + 0x118);
                lVar25 = *(long *)(unaff_x19 + 0x120);
                if (*(long *)(lVar20 + 0x68) != 0) {
                  uVar14 = *(undefined8 *)(lVar20 + 0x70);
                  uVar22 = *(undefined8 *)(lVar20 + 0x78);
                  uVar10 = FUN_100e8e738(uVar14,uVar22,uStack0000000000000060,lVar25);
                  lVar28 = 0;
                  lVar27 = *(long *)(lVar20 + 0x50);
                  uVar21 = *(ulong *)(lVar20 + 0x58);
                  bVar12 = (byte)(uVar10 >> 0x39);
                  uVar10 = uVar10 & uVar21;
                  uVar36 = *(undefined8 *)(lVar27 + uVar10);
                  uVar11 = CONCAT17(-((byte)((ulong)uVar36 >> 0x38) == bVar12),
                                    CONCAT16(-((byte)((ulong)uVar36 >> 0x30) == bVar12),
                                             CONCAT15(-((byte)((ulong)uVar36 >> 0x28) == bVar12),
                                                      CONCAT14(-((byte)((ulong)uVar36 >> 0x20) ==
                                                                bVar12),CONCAT13(-((byte)((ulong)
                                                  uVar36 >> 0x18) == bVar12),
                                                  CONCAT12(-((byte)((ulong)uVar36 >> 0x10) == bVar12
                                                            ),CONCAT11(-((byte)((ulong)uVar36 >> 8)
                                                                        == bVar12),
                                                                       -((byte)uVar36 == bVar12)))))
                                                  ))) & 0x8080808080808080;
                  while( true ) {
                    for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
                      uVar26 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                               (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
                      uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar26 & 0xffff0000ffff) << 0x10;
                      lVar3 = lVar27 + (uVar10 + ((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >>
                                                 3) & uVar21) * -0x18;
                      if ((lVar25 == *(long *)(lVar3 + -8)) &&
                         (iVar8 = _memcmp(uStack0000000000000060,*(undefined8 *)(lVar3 + -0x10),
                                          lVar25), iVar8 == 0)) goto LAB_10058ffbc;
                    }
                    bVar34 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar36 >> 0x38) == -1),
                                                 CONCAT16(-((char)((ulong)uVar36 >> 0x30) == -1),
                                                          CONCAT15(-((char)((ulong)uVar36 >> 0x28)
                                                                    == -1),CONCAT14(-((char)((ulong)
                                                  uVar36 >> 0x20) == -1),
                                                  CONCAT13(-((char)((ulong)uVar36 >> 0x18) == -1),
                                                           CONCAT12(-((char)((ulong)uVar36 >> 0x10)
                                                                     == -1),CONCAT11(-((char)((ulong
                                                  )uVar36 >> 8) == -1),-((char)uVar36 == -1)))))))),
                                        1);
                    if ((bVar34 & 1) != 0) break;
                    lVar28 = lVar28 + 8;
                    uVar10 = uVar10 + lVar28 & uVar21;
                    uVar36 = *(undefined8 *)(lVar27 + uVar10);
                    uVar11 = CONCAT17(-((byte)((ulong)uVar36 >> 0x38) == bVar12),
                                      CONCAT16(-((byte)((ulong)uVar36 >> 0x30) == bVar12),
                                               CONCAT15(-((byte)((ulong)uVar36 >> 0x28) == bVar12),
                                                        CONCAT14(-((byte)((ulong)uVar36 >> 0x20) ==
                                                                  bVar12),CONCAT13(-((byte)((ulong)
                                                  uVar36 >> 0x18) == bVar12),
                                                  CONCAT12(-((byte)((ulong)uVar36 >> 0x10) == bVar12
                                                            ),CONCAT11(-((byte)((ulong)uVar36 >> 8)
                                                                        == bVar12),
                                                                       -((byte)uVar36 == bVar12)))))
                                                  ))) & 0x8080808080808080;
                  }
                }
                if (lVar25 == 0) {
                  plVar13 = (long *)0x1;
                }
                else {
                  plVar13 = (long *)_malloc(lVar25);
                  if (plVar13 == (long *)0x0) {
                    FUN_107c03c64(1,lVar25);
                    goto LAB_10059067c;
                  }
                }
                _memcpy(plVar13,uStack0000000000000060,lVar25);
                uVar26 = FUN_100e8dd9c(*(undefined8 *)(lVar20 + 0xa0),*(undefined8 *)(lVar20 + 0xa8)
                                       ,plVar13,lVar25);
                lVar28 = 0;
                lVar27 = *(long *)(lVar20 + 0x80);
                uVar21 = *(ulong *)(lVar20 + 0x88);
                bVar12 = (byte)(uVar26 >> 0x38);
                bVar34 = bVar12 >> 1;
                uVar10 = uVar26 & uVar21;
                uVar14 = *(undefined8 *)(lVar27 + uVar10);
                uVar11 = CONCAT17(-((byte)((ulong)uVar14 >> 0x38) == bVar34),
                                  CONCAT16(-((byte)((ulong)uVar14 >> 0x30) == bVar34),
                                           CONCAT15(-((byte)((ulong)uVar14 >> 0x28) == bVar34),
                                                    CONCAT14(-((byte)((ulong)uVar14 >> 0x20) ==
                                                              bVar34),CONCAT13(-((byte)((ulong)
                                                  uVar14 >> 0x18) == bVar34),
                                                  CONCAT12(-((byte)((ulong)uVar14 >> 0x10) == bVar34
                                                            ),CONCAT11(-((byte)((ulong)uVar14 >> 8)
                                                                        == bVar34),
                                                                       -((byte)uVar14 == bVar34)))))
                                                  )));
                while( true ) {
                  for (uVar11 = uVar11 & 0x8080808080808080; uVar11 != 0;
                      uVar11 = uVar11 - 1 & uVar11) {
                    uVar5 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                            (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
                    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                    plVar17 = (long *)(lVar27 + (uVar10 + ((ulong)LZCOUNT(uVar5 >> 0x20 |
                                                                          uVar5 << 0x20) >> 3) &
                                                uVar21) * -0x30);
                    if ((plVar17[-4] == lVar25) &&
                       (iVar8 = _memcmp(plVar17[-5],plVar13,lVar25), iVar8 == 0)) {
                      if (lVar25 != 0) {
                        _free(plVar13);
                      }
                      goto LAB_10058fe4c;
                    }
                  }
                  bVar33 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar14 >> 0x38) == -1),
                                               CONCAT16(-((char)((ulong)uVar14 >> 0x30) == -1),
                                                        CONCAT15(-((char)((ulong)uVar14 >> 0x28) ==
                                                                  -1),CONCAT14(-((char)((ulong)
                                                  uVar14 >> 0x20) == -1),
                                                  CONCAT13(-((char)((ulong)uVar14 >> 0x18) == -1),
                                                           CONCAT12(-((char)((ulong)uVar14 >> 0x10)
                                                                     == -1),CONCAT11(-((char)((ulong
                                                  )uVar14 >> 8) == -1),-((char)uVar14 == -1)))))))),
                                      1);
                  if ((bVar33 & 1) != 0) break;
                  lVar28 = lVar28 + 8;
                  uVar10 = uVar10 + lVar28 & uVar21;
                  uVar14 = *(undefined8 *)(lVar27 + uVar10);
                  uVar11 = CONCAT17(-((byte)((ulong)uVar14 >> 0x38) == bVar34),
                                    CONCAT16(-((byte)((ulong)uVar14 >> 0x30) == bVar34),
                                             CONCAT15(-((byte)((ulong)uVar14 >> 0x28) == bVar34),
                                                      CONCAT14(-((byte)((ulong)uVar14 >> 0x20) ==
                                                                bVar34),CONCAT13(-((byte)((ulong)
                                                  uVar14 >> 0x18) == bVar34),
                                                  CONCAT12(-((byte)((ulong)uVar14 >> 0x10) == bVar34
                                                            ),CONCAT11(-((byte)((ulong)uVar14 >> 8)
                                                                        == bVar34),
                                                                       -((byte)uVar14 == bVar34)))))
                                                  )));
                }
                if (*(long *)(lVar20 + 0x90) == 0) {
                  __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17hcc8ccd6d5aea7487E
                            ((long *)(lVar20 + 0x80),1,(undefined8 *)(lVar20 + 0xa0),1);
                }
                plVar17 = plVar13;
                if (lVar25 != -0x8000000000000000) {
                  plVar17 = *(long **)(lVar20 + 0x80);
                  uVar11 = *(ulong *)(lVar20 + 0x88);
                  uVar26 = uVar11 & uVar26;
                  lVar28 = *(long *)((long)plVar17 + uVar26);
                  uVar21 = CONCAT17(-(lVar28 < 0),
                                    CONCAT16(-((char)((ulong)lVar28 >> 0x30) < '\0'),
                                             CONCAT15(-((char)((ulong)lVar28 >> 0x28) < '\0'),
                                                      CONCAT14(-((char)((ulong)lVar28 >> 0x20) <
                                                                '\0'),CONCAT13(-((char)((ulong)
                                                  lVar28 >> 0x18) < '\0'),
                                                  CONCAT12(-((char)((ulong)lVar28 >> 0x10) < '\0'),
                                                           CONCAT11(-((char)((ulong)lVar28 >> 8) <
                                                                     '\0'),-((char)lVar28 < '\0'))))
                                                  ))));
                  if (uVar21 == 0) {
                    lVar28 = 8;
                    do {
                      uVar26 = uVar26 + lVar28 & uVar11;
                      lVar27 = *(long *)((long)plVar17 + uVar26);
                      uVar21 = CONCAT17(-(lVar27 < 0),
                                        CONCAT16(-((char)((ulong)lVar27 >> 0x30) < '\0'),
                                                 CONCAT15(-((char)((ulong)lVar27 >> 0x28) < '\0'),
                                                          CONCAT14(-((char)((ulong)lVar27 >> 0x20) <
                                                                    '\0'),CONCAT13(-((char)((ulong)
                                                  lVar27 >> 0x18) < '\0'),
                                                  CONCAT12(-((char)((ulong)lVar27 >> 0x10) < '\0'),
                                                           CONCAT11(-((char)((ulong)lVar27 >> 8) <
                                                                     '\0'),-((char)lVar27 < '\0'))))
                                                  ))));
                      lVar28 = lVar28 + 8;
                    } while (uVar21 == 0);
                  }
                  uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                  uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                  uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                  uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10
                  ;
                  uVar10 = uVar26 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) & uVar11;
                  uVar21 = (ulong)*(char *)((long)plVar17 + uVar10);
                  if (-1 < *(char *)((long)plVar17 + uVar10)) {
                    lVar28 = *plVar17;
                    uVar21 = CONCAT17(-(lVar28 < 0),
                                      CONCAT16(-((char)((ulong)lVar28 >> 0x30) < '\0'),
                                               CONCAT15(-((char)((ulong)lVar28 >> 0x28) < '\0'),
                                                        CONCAT14(-((char)((ulong)lVar28 >> 0x20) <
                                                                  '\0'),CONCAT13(-((char)((ulong)
                                                  lVar28 >> 0x18) < '\0'),
                                                  CONCAT12(-((char)((ulong)lVar28 >> 0x10) < '\0'),
                                                           CONCAT11(-((char)((ulong)lVar28 >> 8) <
                                                                     '\0'),-((char)lVar28 < '\0'))))
                                                  ))));
                    uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1
                    ;
                    uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2
                    ;
                    uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                    uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar21 & 0xffff0000ffff) << 0x10;
                    uVar10 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
                    uVar21 = (ulong)*(byte *)((long)plVar17 + uVar10);
                  }
                  bVar12 = bVar12 >> 1;
                  *(byte *)((long)plVar17 + uVar10) = bVar12;
                  *(byte *)((long)plVar17 + (uVar10 - 8 & uVar11) + 8) = bVar12;
                  plVar17 = plVar17 + uVar10 * -6;
                  plVar17[-6] = lVar25;
                  plVar17[-5] = (long)plVar13;
                  plVar17[-4] = lVar25;
                  plVar17[-3] = 0;
                  plVar17[-2] = 1;
                  plVar17[-1] = 0;
                  *(long *)(lVar20 + 0x98) = *(long *)(lVar20 + 0x98) + 1;
                  *(ulong *)(lVar20 + 0x90) = *(long *)(lVar20 + 0x90) - (uVar21 & 1);
                }
LAB_10058fe4c:
                uVar14 = *(undefined8 *)(unaff_x19 + 400);
                uVar11 = *(ulong *)(unaff_x19 + 0x198);
                lVar20 = plVar17[-1];
                if ((ulong)(plVar17[-3] - lVar20) < uVar11) {
                  thunk_FUN_108855060(plVar17 + -3,lVar20,uVar11,1,1);
                  lVar20 = plVar17[-1];
                }
                _memcpy(plVar17[-2] + lVar20,uVar14,uVar11);
                plVar17[-1] = lVar20 + uVar11;
              }
              if (*plVar24 != 0) {
                _free(*(undefined8 *)(unaff_x19 + 400));
              }
              *(undefined1 *)(unaff_x19 + 0x1b9) = 0;
              plVar17 = *(long **)(unaff_x19 + 0x140);
              plVar13 = *(long **)(unaff_x19 + 0x130);
              plVar19 = plVar13;
              if (plVar13 == plVar17) goto LAB_1005903cc;
            }
          } while ((*(byte *)(*(long *)(unaff_x19 + 0x110) + 0x19) & 1) != 0);
          *(long *)(unaff_x19 + 0x1c0) = *(long *)(unaff_x19 + 0x110);
          uVar14 = *(undefined8 *)(unaff_x19 + 0x100);
          in_stack_00000048[1] = *(undefined8 *)(unaff_x19 + 0x108);
          *in_stack_00000048 = uVar14;
          in_stack_00000058[0x1b0] = 0;
          uVar11 = FUN_100580628(unaff_x19 + 0x1c0,in_stack_00000050);
          if ((uVar11 & 1) != 0) {
            uVar18 = 5;
            goto LAB_100590618;
          }
          if (in_stack_00000058[0x1b0] == '\x03') {
            if (in_stack_00000058[0x1a8] == '\x03') {
              FUN_100d1ddbc(unaff_x19 + 0x390);
            }
            FUN_100df5b9c(unaff_x19 + 0x1d8);
          }
        } while( true );
      }
      uVar18 = 4;
      goto LAB_100590618;
    }
    FUN_107c03c64(1,lVar3);
  }
  else {
    FUN_107c03c64(1,lVar27);
  }
LAB_10059067c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100590680);
  (*pcVar7)();
LAB_10058ffbc:
  uVar10 = FUN_100e8e738(uVar14,uVar22,uStack0000000000000060,lVar25);
  lVar28 = 0;
  lVar27 = *(long *)(lVar20 + 0x50);
  uVar21 = *(ulong *)(lVar20 + 0x58);
  bVar12 = (byte)(uVar10 >> 0x39);
  uVar10 = uVar10 & uVar21;
  uVar14 = *(undefined8 *)(lVar27 + uVar10);
  uVar11 = CONCAT17(-((byte)((ulong)uVar14 >> 0x38) == bVar12),
                    CONCAT16(-((byte)((ulong)uVar14 >> 0x30) == bVar12),
                             CONCAT15(-((byte)((ulong)uVar14 >> 0x28) == bVar12),
                                      CONCAT14(-((byte)((ulong)uVar14 >> 0x20) == bVar12),
                                               CONCAT13(-((byte)((ulong)uVar14 >> 0x18) == bVar12),
                                                        CONCAT12(-((byte)((ulong)uVar14 >> 0x10) ==
                                                                  bVar12),CONCAT11(-((byte)((ulong)
                                                  uVar14 >> 8) == bVar12),-((byte)uVar14 == bVar12))
                                                  )))))) & 0x8080808080808080;
joined_r0x00010058fff8:
  if (uVar11 != 0) {
    uVar26 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
    lVar3 = lVar27 + (uVar10 + ((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 3) & uVar21) *
                     -0x18;
    if ((lVar25 == *(long *)(lVar3 + -8)) &&
       (iVar8 = _memcmp(uStack0000000000000060,*(undefined8 *)(lVar3 + -0x10),lVar25), iVar8 == 0))
    {
      *(undefined2 *)(unaff_x19 + 0x1b9) = 0x100;
      *(undefined8 *)(unaff_x19 + 0x1c8) = *(undefined8 *)(unaff_x19 + 0x178);
      *(undefined8 *)(unaff_x19 + 0x1c0) = *(undefined8 *)(unaff_x19 + 0x170);
      uVar14 = *(undefined8 *)(unaff_x19 + 0x180);
      goto LAB_10059022c;
    }
    uVar11 = uVar11 - 1 & uVar11;
    goto joined_r0x00010058fff8;
  }
  bVar34 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar14 >> 0x38) == -1),
                               CONCAT16(-((char)((ulong)uVar14 >> 0x30) == -1),
                                        CONCAT15(-((char)((ulong)uVar14 >> 0x28) == -1),
                                                 CONCAT14(-((char)((ulong)uVar14 >> 0x20) == -1),
                                                          CONCAT13(-((char)((ulong)uVar14 >> 0x18)
                                                                    == -1),CONCAT12(-((char)((ulong)
                                                  uVar14 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar14 >> 8) == -1),
                                                           -((char)uVar14 == -1)))))))),1);
  if ((bVar34 & 1) != 0) goto LAB_100590094;
  lVar28 = lVar28 + 8;
  uVar10 = uVar10 + lVar28 & uVar21;
  uVar14 = *(undefined8 *)(lVar27 + uVar10);
  uVar11 = CONCAT17(-((byte)((ulong)uVar14 >> 0x38) == bVar12),
                    CONCAT16(-((byte)((ulong)uVar14 >> 0x30) == bVar12),
                             CONCAT15(-((byte)((ulong)uVar14 >> 0x28) == bVar12),
                                      CONCAT14(-((byte)((ulong)uVar14 >> 0x20) == bVar12),
                                               CONCAT13(-((byte)((ulong)uVar14 >> 0x18) == bVar12),
                                                        CONCAT12(-((byte)((ulong)uVar14 >> 0x10) ==
                                                                  bVar12),CONCAT11(-((byte)((ulong)
                                                  uVar14 >> 8) == bVar12),-((byte)uVar14 == bVar12))
                                                  )))))) & 0x8080808080808080;
  goto joined_r0x00010058fff8;
LAB_100590094:
  uVar10 = FUN_100e8e738(*(undefined8 *)(lVar20 + 0xa0),*(undefined8 *)(lVar20 + 0xa8),
                         uStack0000000000000060,lVar25);
  lVar28 = 0;
  lVar27 = *(long *)(lVar20 + 0x80);
  uVar21 = *(ulong *)(lVar20 + 0x88);
  bVar12 = (byte)(uVar10 >> 0x39);
  uVar10 = uVar10 & uVar21;
  uVar14 = *(undefined8 *)(lVar27 + uVar10);
  uVar11 = CONCAT17(-((byte)((ulong)uVar14 >> 0x38) == bVar12),
                    CONCAT16(-((byte)((ulong)uVar14 >> 0x30) == bVar12),
                             CONCAT15(-((byte)((ulong)uVar14 >> 0x28) == bVar12),
                                      CONCAT14(-((byte)((ulong)uVar14 >> 0x20) == bVar12),
                                               CONCAT13(-((byte)((ulong)uVar14 >> 0x18) == bVar12),
                                                        CONCAT12(-((byte)((ulong)uVar14 >> 0x10) ==
                                                                  bVar12),CONCAT11(-((byte)((ulong)
                                                  uVar14 >> 8) == bVar12),-((byte)uVar14 == bVar12))
                                                  )))))) & 0x8080808080808080;
  while( true ) {
    while (uVar11 == 0) {
      bVar34 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar14 >> 0x38) == -1),
                                   CONCAT16(-((char)((ulong)uVar14 >> 0x30) == -1),
                                            CONCAT15(-((char)((ulong)uVar14 >> 0x28) == -1),
                                                     CONCAT14(-((char)((ulong)uVar14 >> 0x20) == -1)
                                                              ,CONCAT13(-((char)((ulong)uVar14 >>
                                                                                0x18) == -1),
                                                                        CONCAT12(-((char)((ulong)
                                                  uVar14 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar14 >> 8) == -1),
                                                           -((char)uVar14 == -1)))))))),1);
      if ((bVar34 & 1) != 0) goto LAB_100590210;
      lVar28 = lVar28 + 8;
      uVar10 = uVar10 + lVar28 & uVar21;
      uVar14 = *(undefined8 *)(lVar27 + uVar10);
      uVar11 = CONCAT17(-((byte)((ulong)uVar14 >> 0x38) == bVar12),
                        CONCAT16(-((byte)((ulong)uVar14 >> 0x30) == bVar12),
                                 CONCAT15(-((byte)((ulong)uVar14 >> 0x28) == bVar12),
                                          CONCAT14(-((byte)((ulong)uVar14 >> 0x20) == bVar12),
                                                   CONCAT13(-((byte)((ulong)uVar14 >> 0x18) ==
                                                             bVar12),CONCAT12(-((byte)((ulong)uVar14
                                                                                      >> 0x10) ==
                                                                               bVar12),CONCAT11(-((
                                                  byte)((ulong)uVar14 >> 8) == bVar12),
                                                  -((byte)uVar14 == bVar12)))))))) &
               0x8080808080808080;
    }
    uVar26 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
    uVar26 = uVar10 + ((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 3) & uVar21;
    lVar3 = lVar27 + uVar26 * -0x30;
    if ((lVar25 == *(long *)(lVar3 + -0x20)) &&
       (iVar8 = _memcmp(uStack0000000000000060,*(undefined8 *)(lVar3 + -0x28),lVar25), iVar8 == 0))
    break;
    uVar11 = uVar11 - 1 & uVar11;
  }
  lVar25 = ((long)(uVar26 * 0x30) >> 4) * -0x5555555555555555;
  puVar23 = (undefined8 *)(lVar27 + (lVar25 - 8U & uVar21));
  uVar14 = *puVar23;
  uVar22 = *(undefined8 *)(lVar27 + lVar25);
  uVar11 = CONCAT17(-((char)((ulong)uVar22 >> 0x38) == -1),
                    CONCAT16(-((char)((ulong)uVar22 >> 0x30) == -1),
                             CONCAT15(-((char)((ulong)uVar22 >> 0x28) == -1),
                                      CONCAT14(-((char)((ulong)uVar22 >> 0x20) == -1),
                                               CONCAT13(-((char)((ulong)uVar22 >> 0x18) == -1),
                                                        CONCAT12(-((char)((ulong)uVar22 >> 0x10) ==
                                                                  -1),CONCAT11(-((char)((ulong)
                                                  uVar22 >> 8) == -1),-((char)uVar22 == -1))))))));
  uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
  uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
  uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
  uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
  uVar18 = 0x80;
  if (((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) +
      ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar14 >> 0x38) == -1),
                               CONCAT16(-((char)((ulong)uVar14 >> 0x30) == -1),
                                        CONCAT15(-((char)((ulong)uVar14 >> 0x28) == -1),
                                                 CONCAT14(-((char)((ulong)uVar14 >> 0x20) == -1),
                                                          CONCAT13(-((char)((ulong)uVar14 >> 0x18)
                                                                    == -1),CONCAT12(-((char)((ulong)
                                                  uVar14 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar14 >> 8) == -1),
                                                           -((char)uVar14 == -1))))))))) >> 3) < 8)
  {
    *(long *)(lVar20 + 0x90) = *(long *)(lVar20 + 0x90) + 1;
    uVar18 = 0xff;
  }
  *(undefined1 *)(lVar27 + lVar25) = uVar18;
  *(undefined1 *)(puVar23 + 1) = uVar18;
  *(long *)(lVar20 + 0x98) = *(long *)(lVar20 + 0x98) + -1;
  if (*(long *)(lVar3 + -0x30) != -0x8000000000000000) {
    lVar20 = *(long *)(lVar3 + -0x18);
    uVar22 = *(undefined8 *)(lVar3 + -8);
    uVar14 = *(undefined8 *)(lVar3 + -0x10);
    if (*(long *)(lVar3 + -0x30) != 0) {
      _free(*(undefined8 *)(lVar3 + -0x28));
    }
    if (lVar20 != -0x8000000000000000) {
      *(long **)(unaff_x29 + -0x90) = &stack0x00000080;
      *(undefined **)(unaff_x29 + -0x88) = &DAT_10112965c;
      *(long **)(unaff_x29 + -0x80) = plVar24;
      *(undefined **)(unaff_x29 + -0x78) = &DAT_10112965c;
      in_stack_00000080 = lVar20;
      in_stack_00000088 = uVar14;
      in_stack_00000090 = uVar22;
      goto code_r0x0001005905b8;
    }
  }
LAB_100590210:
  *(undefined2 *)(unaff_x19 + 0x1b9) = 0x100;
  *(undefined8 *)(unaff_x19 + 0x1c8) = *(undefined8 *)(unaff_x19 + 400);
  *(long *)(unaff_x19 + 0x1c0) = *plVar24;
  uVar14 = *(undefined8 *)(unaff_x19 + 0x198);
LAB_10059022c:
  *(undefined8 *)(unaff_x19 + 0x1d0) = uVar14;
  goto LAB_100590234;
}

