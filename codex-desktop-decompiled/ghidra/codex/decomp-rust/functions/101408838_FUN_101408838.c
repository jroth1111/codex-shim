
void FUN_101408838(void)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined *puVar10;
  byte *pbVar11;
  char cVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  char cVar16;
  long unaff_x19;
  char *pcVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined *unaff_x22;
  long unaff_x24;
  int unaff_w25;
  char *pcVar20;
  undefined8 *unaff_x26;
  long lVar21;
  long lVar22;
  long unaff_x29;
  undefined8 uVar23;
  ulong uVar24;
  undefined3 uStack0000000000000028;
  undefined1 uStack000000000000002b;
  undefined3 uStack000000000000002c;
  undefined7 uStack0000000000000038;
  undefined1 uStack000000000000003f;
  undefined7 uStack0000000000000040;
  undefined8 in_stack_00000048;
  undefined1 in_stack_00000050;
  undefined8 uStack0000000000000051;
  undefined7 uStack0000000000000059;
  undefined1 in_stack_00000060;
  undefined7 uStack0000000000000061;
  undefined1 in_stack_00000068;
  undefined4 uStack0000000000000069;
  undefined3 uStack000000000000006d;
  char *in_stack_00000080;
  long in_stack_00000088;
  char cStack0000000000000090;
  char cStack0000000000000091;
  undefined6 uStack0000000000000092;
  undefined *in_stack_00000098;
  byte bStack00000000000000a0;
  undefined7 uStack00000000000000a1;
  undefined1 uStack00000000000000a8;
  undefined7 uStack00000000000000a9;
  undefined1 uStack00000000000000b0;
  undefined7 uStack00000000000000b1;
  undefined8 *in_stack_000000c0;
  undefined *in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  byte in_stack_000000e0;
  undefined *in_stack_00000180;
  undefined8 in_stack_00000188;
  
  in_stack_000000c8 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  in_stack_000000c0 = (undefined8 *)0x8000000000000003;
  FUN_100d34830(unaff_x19 + 0x20);
  if (*(char *)(unaff_x29 + -0x100) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0x100);
  }
  bVar1 = in_stack_000000e0;
  if (in_stack_000000c0 == (undefined8 *)0x8000000000000003) {
    _cStack0000000000000090 = (undefined8 *)0x2;
    in_stack_00000098 = in_stack_000000c8;
    puVar6 = (undefined *)FUN_100ce2240(&stack0x00000090);
    lVar21 = in_stack_00000088;
    pcVar20 = in_stack_00000080;
    if (unaff_w25 == 0x14) {
      if (in_stack_00000088 == 0) {
        uVar9 = 0;
LAB_1014071c8:
        puVar10 = (undefined *)FUN_1087e422c(uVar9,&UNK_10b22d8e0,&UNK_10b20a590);
      }
      else {
        pcVar17 = in_stack_00000080 + 0x20;
        cVar12 = *in_stack_00000080;
        if (cVar12 == '\x10') {
LAB_1014070b8:
          _cStack0000000000000090 = (undefined8 *)CONCAT62(uStack0000000000000092,0x300);
        }
        else {
          if (cVar12 == '\x11') {
            pcVar7 = *(char **)(in_stack_00000080 + 8);
          }
          else {
            pcVar7 = in_stack_00000080;
            if (cVar12 == '\x12') goto LAB_1014070b8;
          }
          puVar6 = (undefined *)FUN_10140f308(&stack0x00000090,pcVar7);
        }
        puVar10 = in_stack_00000098;
        if (cStack0000000000000090 == '\x01') goto LAB_1014071dc;
        if (lVar21 == 1) {
          uVar9 = 1;
          goto LAB_1014071c8;
        }
        uVar2 = cStack0000000000000091;
        cVar12 = *pcVar17;
        if ((cVar12 == '\x10') || (cVar12 == '\x12')) {
          in_stack_00000098 = puVar6;
          puVar19 = (undefined8 *)0x8000000000000000;
LAB_101407364:
          uVar18 = *(undefined8 *)(unaff_x24 + 0x38);
          uVar9 = *(undefined8 *)(unaff_x24 + 0x30);
          *(undefined8 *)(unaff_x29 + -0x98) = uVar18;
          *(undefined8 *)(unaff_x29 + -0xa0) = uVar9;
          *(undefined8 **)(unaff_x29 + -0xb0) = puVar19;
          *(undefined **)(unaff_x29 + -0xa8) = in_stack_00000098;
          *(undefined1 *)(unaff_x29 + -0x90) = uVar2;
          in_stack_00000098 = *(undefined **)(unaff_x29 + -0xa8);
          _cStack0000000000000090 = *(undefined8 **)(unaff_x29 + -0xb0);
          uStack00000000000000a8 = (undefined1)uVar18;
          uStack00000000000000a9 = (undefined7)((ulong)uVar18 >> 8);
          bStack00000000000000a0 = (byte)uVar9;
          uStack00000000000000a1 = (undefined7)((ulong)uVar9 >> 8);
          uStack00000000000000b0 = (undefined1)*(undefined8 *)(unaff_x29 + -0x90);
          uStack00000000000000b1 = (undefined7)((ulong)*(undefined8 *)(unaff_x29 + -0x90) >> 8);
          if (lVar21 != 2) {
            in_stack_000000c0 = (undefined8 *)0x2;
            uVar9 = FUN_1087e422c((lVar21 + 0x7fffffffffffffeU & 0x7ffffffffffffff) + 2,
                                  &stack0x000000c0,&UNK_10b23a1b0);
            goto LAB_101407178;
          }
          goto LAB_1014071e8;
        }
        if (cVar12 == '\x11') {
          pcVar17 = *(char **)(pcVar20 + 0x28);
        }
        FUN_10141f688(&stack0x00000090,pcVar17);
        puVar10 = in_stack_00000098;
        if (_cStack0000000000000090 != (undefined8 *)0x8000000000000001) {
          *(ulong *)(unaff_x24 + 0x38) = CONCAT71(uStack00000000000000a9,uStack00000000000000a8);
          *(ulong *)(unaff_x24 + 0x30) = CONCAT71(uStack00000000000000a1,bStack00000000000000a0);
          puVar19 = _cStack0000000000000090;
          if (_cStack0000000000000090 != (undefined8 *)0x8000000000000002) goto LAB_101407364;
        }
      }
LAB_1014071dc:
      puVar19 = (undefined8 *)0x8000000000000001;
      *(undefined8 *)(unaff_x29 + -0xb0) = 0x8000000000000001;
      *(undefined **)(unaff_x29 + -0xa8) = puVar10;
LAB_1014071e8:
      if (puVar19 != (undefined8 *)0x8000000000000001) {
        *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0x98);
        *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -0xa0);
        uVar9 = *(undefined8 *)(unaff_x29 + -0x90);
        *(undefined8 *)(unaff_x29 + -0xd8) = uVar9;
        *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(unaff_x29 + -0xa8);
        *(undefined8 *)(unaff_x29 + -0xf8) = *(undefined8 *)(unaff_x29 + -0xb0);
        uVar18 = *(undefined8 *)(unaff_x29 + -0xf8);
        uVar2 = *(undefined1 *)(unaff_x29 + -0xf0);
        uVar23 = *(undefined8 *)(unaff_x29 + -0xef);
        uStack0000000000000038 = (undefined7)*(undefined8 *)(unaff_x29 + -0xe7);
        uStack000000000000003f = (undefined1)*(undefined8 *)(unaff_x29 + -0xe0);
        uStack0000000000000040 = (undefined7)((ulong)*(undefined8 *)(unaff_x29 + -0xe0) >> 8);
        uStack0000000000000028 = (undefined3)*(undefined4 *)(unaff_x29 + -0xd7);
        uStack000000000000002b = (undefined1)((ulong)uVar9 >> 0x20);
        uStack000000000000002c = (undefined3)((ulong)uVar9 >> 0x28);
        FUN_100e077ec(&stack0x00000070);
        uStack0000000000000059 = uStack0000000000000038;
        in_stack_00000060 = uStack000000000000003f;
        uStack0000000000000061 = uStack0000000000000040;
        in_stack_00000068 = (undefined1)uVar9;
        uStack0000000000000069 = CONCAT13(uStack000000000000002b,uStack0000000000000028);
        uStack000000000000006d = uStack000000000000002c;
        in_stack_00000048 = uVar18;
        in_stack_00000050 = uVar2;
        uStack0000000000000051 = uVar23;
        __ZN136__LT_codex_protocol__models__PermissionProfile_u20_as_u20_core__convert__From_LT_codex_protocol__models__LegacyPermissionProfile_GT__GT_4from17h9e236cecf0dcb073E
                  (unaff_x29 + -0x100,&stack0x00000048);
        goto LAB_1014072ac;
      }
      uVar9 = *(undefined8 *)(unaff_x29 + -0xa8);
    }
    else {
      if (unaff_w25 == 0x15) {
        lVar21 = in_stack_00000088 * 0x40;
        pcVar17 = in_stack_00000080 + lVar21;
        in_stack_000000c0 = (undefined8 *)0x8000000000000001;
        if (in_stack_00000088 == 0) {
          puVar15 = (undefined8 *)0x0;
          puVar19 = (undefined8 *)0x8000000000000000;
          cVar12 = '\x03';
        }
        else {
          lVar22 = 0;
          puVar15 = (undefined8 *)((lVar21 - 0x40U >> 6) + 1);
          cVar16 = '\x04';
          puVar19 = (undefined8 *)0x8000000000000001;
          do {
            pbVar11 = (byte *)(pcVar20 + lVar22 + 0x20);
            bVar1 = pcVar20[lVar22];
            puVar4 = puVar19;
            if (0xc < bVar1) {
              if (bVar1 == 0xd) {
                plVar8 = *(long **)(pcVar20 + lVar22 + 8);
                lVar14 = *(long *)(pcVar20 + lVar22 + 0x10);
                if (lVar14 == 7) {
LAB_101406e10:
                  if ((int)*plVar8 == 0x7774656e && *(int *)((long)plVar8 + 3) == 0x6b726f77)
                  goto LAB_101406fa8;
                }
                else {
LAB_101406fe4:
                  if ((lVar14 == 0xb) &&
                     (*plVar8 == 0x7379735f656c6966 &&
                      *(long *)((long)plVar8 + 3) == 0x6d65747379735f65)) goto LAB_101407020;
                }
                puVar10 = (undefined *)FUN_1087e41dc(plVar8,lVar14,&UNK_10b222548,2);
                puVar5 = unaff_x22;
                goto LAB_1014073dc;
              }
              if (bVar1 == 0xe) {
                pcVar7 = *(char **)(pcVar20 + lVar22 + 0x10);
                lVar14 = *(long *)(pcVar20 + lVar22 + 0x18);
                if (lVar14 != 7) goto LAB_101406e70;
LAB_101406f38:
                if (((((*pcVar7 == 'n') && (pcVar7[1] == 'e')) && (pcVar7[2] == 't')) &&
                    ((pcVar7[3] == 'w' && (pcVar7[4] == 'o')))) &&
                   ((pcVar7[5] == 'r' && (pcVar7[6] == 'k')))) goto LAB_101406fa8;
              }
              else {
                if (bVar1 != 0xf) goto LAB_1014086dc;
                pcVar7 = *(char **)(pcVar20 + lVar22 + 8);
                lVar14 = *(long *)(pcVar20 + lVar22 + 0x10);
                if (lVar14 == 7) goto LAB_101406f38;
LAB_101406e70:
                if ((((lVar14 == 0xb) && (*pcVar7 == 'f')) && (pcVar7[1] == 'i')) &&
                   (((((pcVar7[2] == 'l' && (pcVar7[3] == 'e')) && (pcVar7[4] == '_')) &&
                     ((pcVar7[5] == 's' && (pcVar7[6] == 'y')))) &&
                    (((pcVar7[7] == 's' && ((pcVar7[8] == 't' && (pcVar7[9] == 'e')))) &&
                     (pcVar7[10] == 'm')))))) goto LAB_101407020;
              }
              __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
                        (&stack0x00000090,pcVar7,lVar14);
              puVar6 = in_stack_00000098;
              puVar15 = _cStack0000000000000090;
              puVar10 = (undefined *)
                        FUN_1087e41dc(in_stack_00000098,
                                      CONCAT71(uStack00000000000000a1,bStack00000000000000a0),
                                      &UNK_10b222548,2);
              puVar5 = unaff_x22;
              if (((ulong)puVar15 & 0x7fffffffffffffff) != 0) {
                _free(puVar6);
                puVar5 = unaff_x22;
              }
LAB_1014073dc:
              in_stack_000000c8 = puVar5;
              in_stack_000000c0 = puVar4;
              *(undefined8 *)(unaff_x29 + -0xb0) = 0x8000000000000001;
              *(undefined **)(unaff_x29 + -0xa8) = puVar10;
              if ((long)puVar19 < -0x7ffffffffffffffe) {
LAB_1014073f8:
                puVar19 = (undefined8 *)0x8000000000000001;
              }
              else {
LAB_101407730:
                FUN_100e79780(&stack0x000000c0);
                puVar19 = (undefined8 *)0x8000000000000001;
              }
              goto LAB_1014071e8;
            }
            if (bVar1 != 1) {
              if (bVar1 == 4) {
                puVar6 = *(undefined **)(pcVar20 + lVar22 + 8);
                if (puVar6 == (undefined *)0x0) goto LAB_101406fa8;
                if (puVar6 == (undefined *)0x1) goto LAB_101407020;
                _cStack0000000000000090 = (undefined8 *)CONCAT71(_cStack0000000000000091,1);
                in_stack_00000098 = puVar6;
                puVar10 = (undefined *)
                          __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                    (&stack0x00000090,&UNK_10b22d740,&UNK_10b20a590);
                puVar5 = unaff_x22;
              }
              else {
                if (bVar1 == 0xc) {
                  plVar8 = *(long **)(pcVar20 + lVar22 + 0x10);
                  lVar14 = *(long *)(pcVar20 + lVar22 + 0x18);
                  if (lVar14 != 7) goto LAB_101406fe4;
                  goto LAB_101406e10;
                }
LAB_1014086dc:
                puVar10 = (undefined *)
                          FUN_108855c40(pcVar20 + lVar22,&stack0x00000180,&UNK_10b2147a8);
                puVar5 = unaff_x22;
              }
              goto LAB_1014073dc;
            }
            bVar1 = pcVar20[lVar22 + 1];
            if (bVar1 != 0) {
              if (bVar1 != 1) {
                _cStack0000000000000090 = (undefined8 *)CONCAT71(_cStack0000000000000091,1);
                in_stack_00000098 = (undefined *)(ulong)bVar1;
                puVar10 = (undefined *)
                          __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                    (&stack0x00000090,&UNK_10b22d740,&UNK_10b20a590);
                puVar5 = unaff_x22;
                goto LAB_1014073dc;
              }
LAB_101407020:
              if (puVar19 != (undefined8 *)0x8000000000000001) {
                in_stack_00000180 = &UNK_108cadf2b;
                in_stack_00000188 = 0xb;
                _cStack0000000000000090 = &stack0x00000180;
                in_stack_00000098 = &DAT_100c7b3a0;
                in_stack_000000c0 = puVar19;
                in_stack_000000c8 = unaff_x22;
                uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000090);
                *(undefined8 *)(unaff_x29 + -0xb0) = 0x8000000000000001;
                *(undefined8 *)(unaff_x29 + -0xa8) = uVar9;
                if (puVar19 != (undefined8 *)0x8000000000000000) goto LAB_101407730;
                goto LAB_1014073f8;
              }
              bVar1 = *pbVar11;
              if (bVar1 == 0x10) {
LAB_101406dbc:
                puVar19 = (undefined8 *)0x8000000000000000;
              }
              else {
                if (bVar1 == 0x11) {
                  pbVar11 = *(byte **)(pcVar20 + lVar22 + 0x28);
                }
                else if (bVar1 == 0x12) goto LAB_101406dbc;
                FUN_10141f688(&stack0x00000090,pbVar11);
                puVar19 = _cStack0000000000000090;
                if (_cStack0000000000000090 == (undefined8 *)0x8000000000000001) {
                  *(undefined8 *)(unaff_x29 + -0xb0) = 0x8000000000000001;
                  *(undefined **)(unaff_x29 + -0xa8) = in_stack_00000098;
                  puVar19 = (undefined8 *)0x8000000000000001;
                  goto LAB_1014071e8;
                }
              }
              in_stack_000000d8 = CONCAT71(uStack00000000000000a9,uStack00000000000000a8);
              in_stack_000000d0 = CONCAT71(uStack00000000000000a1,bStack00000000000000a0);
              unaff_x22 = in_stack_00000098;
              goto LAB_101406dcc;
            }
LAB_101406fa8:
            if (cVar16 != '\x04') {
              in_stack_00000180 = &UNK_108ca28d0;
              in_stack_00000188 = 7;
              _cStack0000000000000090 = &stack0x00000180;
              in_stack_00000098 = &DAT_100c7b3a0;
              in_stack_000000c0 = puVar19;
              in_stack_000000c8 = unaff_x22;
              puVar10 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000090)
              ;
              puVar4 = in_stack_000000c0;
              puVar5 = in_stack_000000c8;
              goto LAB_1014073dc;
            }
            bVar1 = *pbVar11;
            cVar16 = '\x03';
            if (bVar1 != 0x10) {
              if (bVar1 == 0x11) {
                pbVar11 = *(byte **)(pcVar20 + lVar22 + 0x28);
              }
              else if (bVar1 == 0x12) goto LAB_101406dcc;
              FUN_10140f308(&stack0x00000090,pbVar11);
              puVar10 = in_stack_00000098;
              puVar5 = unaff_x22;
              if (((ulong)_cStack0000000000000090 & 1) != 0) goto LAB_1014073dc;
              cVar16 = cStack0000000000000091;
            }
LAB_101406dcc:
            lVar22 = lVar22 + 0x40;
          } while (lVar21 - lVar22 != 0);
          cVar12 = '\x03';
          if (cVar16 != '\x04') {
            cVar12 = cVar16;
          }
          pcVar20 = pcVar17;
          in_stack_000000c8 = unaff_x22;
          if (puVar19 == (undefined8 *)0x8000000000000001) {
            puVar19 = (undefined8 *)0x8000000000000000;
          }
          else {
            *(undefined8 *)(unaff_x29 + -0x78) = in_stack_000000d0;
            *(undefined **)(unaff_x29 + -0x80) = unaff_x22;
            *(undefined8 *)(unaff_x29 + -0x70) = in_stack_000000d8;
          }
        }
        *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x78);
        *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x80);
        *(undefined8 **)(unaff_x29 + -0xb0) = puVar19;
        *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x70);
        *(char *)(unaff_x29 + -0x90) = cVar12;
        in_stack_00000098 = *(undefined **)(unaff_x29 + -0xa8);
        _cStack0000000000000090 = *(undefined8 **)(unaff_x29 + -0xb0);
        uStack00000000000000a8 = (undefined1)*(undefined8 *)(unaff_x29 + -0x98);
        uStack00000000000000a9 = (undefined7)((ulong)*(undefined8 *)(unaff_x29 + -0x98) >> 8);
        bStack00000000000000a0 = (byte)*(undefined8 *)(unaff_x29 + -0xa0);
        uStack00000000000000a1 = (undefined7)((ulong)*(undefined8 *)(unaff_x29 + -0xa0) >> 8);
        uStack00000000000000b0 = (undefined1)*(undefined8 *)(unaff_x29 + -0x90);
        uStack00000000000000b1 = (undefined7)((ulong)*(undefined8 *)(unaff_x29 + -0x90) >> 8);
        if ((long)pcVar17 - (long)pcVar20 != 0) {
          in_stack_000000c0 = puVar15;
          uVar9 = FUN_1087e422c((long)puVar15 + ((ulong)((long)pcVar17 - (long)pcVar20) >> 6),
                                &stack0x000000c0,&UNK_10b23a190);
LAB_101407178:
          puVar19 = (undefined8 *)0x8000000000000001;
          *(undefined8 *)(unaff_x29 + -0xb0) = 0x8000000000000001;
          *(undefined8 *)(unaff_x29 + -0xa8) = uVar9;
          if (_cStack0000000000000090 != (undefined8 *)0x8000000000000000) {
            FUN_100e79780(&stack0x00000090);
          }
        }
        goto LAB_1014071e8;
      }
      uVar9 = FUN_108855c40(&stack0x00000070,&stack0x00000180,&UNK_10b2142c8);
    }
    *(undefined8 *)(unaff_x29 + -0x100) = 2;
    *(undefined8 *)(unaff_x29 + -0xf8) = uVar9;
    FUN_100ce2240(unaff_x29 + -0x100);
    uVar9 = FUN_1088561c0(&UNK_108cae1d5,0x43);
    FUN_100e077ec(&stack0x00000070);
    *unaff_x26 = 0x8000000000000003;
    unaff_x26[1] = uVar9;
  }
  else {
    uVar24 = *(ulong *)(unaff_x24 + 0x30);
    *(undefined8 *)(unaff_x24 + 0x20) = *(undefined8 *)(unaff_x24 + 0x48);
    *(undefined8 *)(unaff_x24 + 0x18) = *(undefined8 *)(unaff_x24 + 0x40);
    bStack00000000000000a0 = (byte)*(undefined8 *)(unaff_x24 + 0x38);
    bVar3 = bStack00000000000000a0;
    uStack00000000000000a1 = (undefined7)((ulong)*(undefined8 *)(unaff_x24 + 0x38) >> 8);
    uVar9 = CONCAT17(uStack00000000000000a8,uStack00000000000000a1);
    uStack000000000000003f = uStack00000000000000b0;
    in_stack_00000098 = (undefined *)uVar24;
    FUN_100e077ec(&stack0x00000070);
    uVar13 = uVar24 ^ 0x8000000000000000;
    if (uVar24 < 0x8000000000000001) {
      uVar13 = 0;
    }
    if (uVar13 == 0) {
      *(ulong *)(unaff_x29 + -0xef) = CONCAT17(uStack000000000000003f,uStack00000000000000a9);
      *(undefined8 *)(unaff_x29 + -0xf7) = uVar9;
      *(ulong *)(unaff_x29 + -0xe8) = CONCAT71(uStack00000000000000b1,uStack000000000000003f);
      *(ulong *)(unaff_x29 + -0x100) = uVar24;
      *(byte *)(unaff_x29 + -0xf8) = bVar3;
      *(byte *)(unaff_x29 + -0xe0) = bVar1 & 1;
    }
    else {
      if (uVar13 == 1) {
        uVar9 = 0x8000000000000001;
      }
      else {
        *(byte *)(unaff_x29 + -0xf8) = bVar3 & 1;
        uVar9 = 0x8000000000000002;
      }
      *(undefined8 *)(unaff_x29 + -0x100) = uVar9;
    }
LAB_1014072ac:
    uVar9 = *(undefined8 *)(unaff_x29 + -0x100);
    uVar23 = *(undefined8 *)(unaff_x29 + -0xe8);
    uVar18 = *(undefined8 *)(unaff_x29 + -0xf0);
    unaff_x26[1] = *(undefined8 *)(unaff_x29 + -0xf8);
    *unaff_x26 = uVar9;
    unaff_x26[3] = uVar23;
    unaff_x26[2] = uVar18;
    unaff_x26[4] = *(undefined8 *)(unaff_x29 + -0xe0);
  }
  return;
}

