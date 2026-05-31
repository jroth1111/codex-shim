
void FUN_101408d00(void)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined7 uVar4;
  undefined7 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *pcVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined *puVar12;
  byte *pbVar13;
  char cVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  char cVar18;
  char *pcVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  long unaff_x21;
  undefined *unaff_x22;
  int unaff_w25;
  char *pcVar22;
  long lVar23;
  long lVar24;
  long unaff_x29;
  undefined8 uVar25;
  undefined8 *in_stack_00000020;
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
  undefined8 *in_stack_00000098;
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
  
  in_stack_000000c8 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  in_stack_000000c0 = (undefined8 *)0x8000000000000003;
  if (-0x7fffffffffffffff < unaff_x21) {
    FUN_100e79780(&stack0x00000160);
  }
  FUN_100d34830(unaff_x29 + -0xe0);
  if (*(char *)(unaff_x29 + -0x100) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0x100);
  }
  bVar1 = in_stack_000000e0;
  puVar21 = in_stack_000000c0;
  if (in_stack_000000c0 == (undefined8 *)0x8000000000000003) {
    _cStack0000000000000090 = (undefined8 *)0x2;
    in_stack_00000098 = (undefined8 *)in_stack_000000c8;
    puVar8 = (undefined *)FUN_100ce2240(&stack0x00000090);
    lVar23 = in_stack_00000088;
    pcVar22 = in_stack_00000080;
    if (unaff_w25 == 0x14) {
      if (in_stack_00000088 == 0) {
        uVar11 = 0;
LAB_1014071c8:
        puVar12 = (undefined *)FUN_1087e422c(uVar11,&UNK_10b22d8e0,&UNK_10b20a590);
      }
      else {
        pcVar19 = in_stack_00000080 + 0x20;
        cVar14 = *in_stack_00000080;
        if (cVar14 == '\x10') {
LAB_1014070b8:
          _cStack0000000000000090 = (undefined8 *)CONCAT62(uStack0000000000000092,0x300);
        }
        else {
          if (cVar14 == '\x11') {
            pcVar9 = *(char **)(in_stack_00000080 + 8);
          }
          else {
            pcVar9 = in_stack_00000080;
            if (cVar14 == '\x12') goto LAB_1014070b8;
          }
          puVar8 = (undefined *)FUN_10140f308(&stack0x00000090,pcVar9);
        }
        puVar12 = (undefined *)in_stack_00000098;
        if (cStack0000000000000090 == '\x01') goto LAB_1014071dc;
        if (lVar23 == 1) {
          uVar11 = 1;
          goto LAB_1014071c8;
        }
        uVar2 = cStack0000000000000091;
        cVar14 = *pcVar19;
        if ((cVar14 == '\x10') || (cVar14 == '\x12')) {
          in_stack_00000098 = (undefined8 *)puVar8;
          puVar21 = (undefined8 *)0x8000000000000000;
LAB_101407364:
          *(undefined **)(unaff_x29 + -0x98) = in_stack_000000c8;
          *(undefined8 **)(unaff_x29 + -0xa0) = in_stack_000000c0;
          *(undefined8 **)(unaff_x29 + -0xb0) = puVar21;
          *(undefined8 **)(unaff_x29 + -0xa8) = in_stack_00000098;
          *(undefined1 *)(unaff_x29 + -0x90) = uVar2;
          in_stack_00000098 = *(undefined8 **)(unaff_x29 + -0xa8);
          _cStack0000000000000090 = *(undefined8 **)(unaff_x29 + -0xb0);
          uStack00000000000000a8 = SUB81(in_stack_000000c8,0);
          uStack00000000000000a9 = (undefined7)((ulong)in_stack_000000c8 >> 8);
          bStack00000000000000a0 = (byte)in_stack_000000c0;
          uStack00000000000000a1 = (undefined7)((ulong)in_stack_000000c0 >> 8);
          uStack00000000000000b0 = (undefined1)*(undefined8 *)(unaff_x29 + -0x90);
          uStack00000000000000b1 = (undefined7)((ulong)*(undefined8 *)(unaff_x29 + -0x90) >> 8);
          if (lVar23 != 2) {
            in_stack_000000c0 = (undefined8 *)0x2;
            uVar11 = FUN_1087e422c((lVar23 + 0x7fffffffffffffeU & 0x7ffffffffffffff) + 2,
                                   &stack0x000000c0,&UNK_10b23a1b0);
            goto LAB_101407178;
          }
          goto LAB_1014071e8;
        }
        if (cVar14 == '\x11') {
          pcVar19 = *(char **)(pcVar22 + 0x28);
        }
        FUN_10141f688(&stack0x00000090,pcVar19);
        puVar12 = (undefined *)in_stack_00000098;
        if (_cStack0000000000000090 != (undefined8 *)0x8000000000000001) {
          in_stack_000000c8 = (undefined *)CONCAT71(uStack00000000000000a9,uStack00000000000000a8);
          in_stack_000000c0 = (undefined8 *)CONCAT71(uStack00000000000000a1,bStack00000000000000a0);
          puVar21 = _cStack0000000000000090;
          if (_cStack0000000000000090 != (undefined8 *)0x8000000000000002) goto LAB_101407364;
        }
      }
LAB_1014071dc:
      puVar21 = (undefined8 *)0x8000000000000001;
      *(undefined8 *)(unaff_x29 + -0xb0) = 0x8000000000000001;
      *(undefined **)(unaff_x29 + -0xa8) = puVar12;
LAB_1014071e8:
      if (puVar21 != (undefined8 *)0x8000000000000001) {
        *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0x98);
        *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -0xa0);
        uVar11 = *(undefined8 *)(unaff_x29 + -0x90);
        *(undefined8 *)(unaff_x29 + -0xd8) = uVar11;
        *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(unaff_x29 + -0xa8);
        *(undefined8 *)(unaff_x29 + -0xf8) = *(undefined8 *)(unaff_x29 + -0xb0);
        uVar20 = *(undefined8 *)(unaff_x29 + -0xf8);
        uVar2 = *(undefined1 *)(unaff_x29 + -0xf0);
        uVar25 = *(undefined8 *)(unaff_x29 + -0xef);
        uStack0000000000000038 = (undefined7)*(undefined8 *)(unaff_x29 + -0xe7);
        uStack000000000000003f = (undefined1)*(undefined8 *)(unaff_x29 + -0xe0);
        uStack0000000000000040 = (undefined7)((ulong)*(undefined8 *)(unaff_x29 + -0xe0) >> 8);
        uStack0000000000000028 = (undefined3)*(undefined4 *)(unaff_x29 + -0xd7);
        uStack000000000000002b = (undefined1)((ulong)uVar11 >> 0x20);
        uStack000000000000002c = (undefined3)((ulong)uVar11 >> 0x28);
        FUN_100e077ec(&stack0x00000070);
        uStack0000000000000059 = uStack0000000000000038;
        in_stack_00000060 = uStack000000000000003f;
        uStack0000000000000061 = uStack0000000000000040;
        in_stack_00000068 = (undefined1)uVar11;
        uStack0000000000000069 = CONCAT13(uStack000000000000002b,uStack0000000000000028);
        uStack000000000000006d = uStack000000000000002c;
        in_stack_00000048 = uVar20;
        in_stack_00000050 = uVar2;
        uStack0000000000000051 = uVar25;
        __ZN136__LT_codex_protocol__models__PermissionProfile_u20_as_u20_core__convert__From_LT_codex_protocol__models__LegacyPermissionProfile_GT__GT_4from17h9e236cecf0dcb073E
                  (unaff_x29 + -0x100,&stack0x00000048);
        goto LAB_1014072ac;
      }
      uVar11 = *(undefined8 *)(unaff_x29 + -0xa8);
    }
    else {
      if (unaff_w25 == 0x15) {
        lVar23 = in_stack_00000088 * 0x40;
        pcVar19 = in_stack_00000080 + lVar23;
        in_stack_000000c0 = (undefined8 *)0x8000000000000001;
        if (in_stack_00000088 == 0) {
          puVar17 = (undefined8 *)0x0;
          puVar21 = (undefined8 *)0x8000000000000000;
          cVar14 = '\x03';
        }
        else {
          lVar24 = 0;
          puVar17 = (undefined8 *)((lVar23 - 0x40U >> 6) + 1);
          cVar18 = '\x04';
          puVar21 = (undefined8 *)0x8000000000000001;
          do {
            pbVar13 = (byte *)(pcVar22 + lVar24 + 0x20);
            bVar1 = pcVar22[lVar24];
            puVar6 = puVar21;
            if (0xc < bVar1) {
              if (bVar1 == 0xd) {
                plVar10 = *(long **)(pcVar22 + lVar24 + 8);
                lVar16 = *(long *)(pcVar22 + lVar24 + 0x10);
                if (lVar16 == 7) {
LAB_101406e10:
                  if ((int)*plVar10 == 0x7774656e && *(int *)((long)plVar10 + 3) == 0x6b726f77)
                  goto LAB_101406fa8;
                }
                else {
LAB_101406fe4:
                  if ((lVar16 == 0xb) &&
                     (*plVar10 == 0x7379735f656c6966 &&
                      *(long *)((long)plVar10 + 3) == 0x6d65747379735f65)) goto LAB_101407020;
                }
                puVar12 = (undefined *)FUN_1087e41dc(plVar10,lVar16,&UNK_10b222548,2);
                puVar7 = unaff_x22;
                goto LAB_1014073dc;
              }
              if (bVar1 == 0xe) {
                pcVar9 = *(char **)(pcVar22 + lVar24 + 0x10);
                lVar16 = *(long *)(pcVar22 + lVar24 + 0x18);
                if (lVar16 != 7) goto LAB_101406e70;
LAB_101406f38:
                if (((((*pcVar9 == 'n') && (pcVar9[1] == 'e')) && (pcVar9[2] == 't')) &&
                    ((pcVar9[3] == 'w' && (pcVar9[4] == 'o')))) &&
                   ((pcVar9[5] == 'r' && (pcVar9[6] == 'k')))) goto LAB_101406fa8;
              }
              else {
                if (bVar1 != 0xf) goto LAB_1014086dc;
                pcVar9 = *(char **)(pcVar22 + lVar24 + 8);
                lVar16 = *(long *)(pcVar22 + lVar24 + 0x10);
                if (lVar16 == 7) goto LAB_101406f38;
LAB_101406e70:
                if ((((lVar16 == 0xb) && (*pcVar9 == 'f')) && (pcVar9[1] == 'i')) &&
                   (((((pcVar9[2] == 'l' && (pcVar9[3] == 'e')) && (pcVar9[4] == '_')) &&
                     ((pcVar9[5] == 's' && (pcVar9[6] == 'y')))) &&
                    (((pcVar9[7] == 's' && ((pcVar9[8] == 't' && (pcVar9[9] == 'e')))) &&
                     (pcVar9[10] == 'm')))))) goto LAB_101407020;
              }
              __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
                        (&stack0x00000090,pcVar9,lVar16);
              puVar8 = (undefined *)in_stack_00000098;
              puVar17 = _cStack0000000000000090;
              puVar12 = (undefined *)
                        FUN_1087e41dc(in_stack_00000098,
                                      CONCAT71(uStack00000000000000a1,bStack00000000000000a0),
                                      &UNK_10b222548,2);
              puVar7 = unaff_x22;
              if (((ulong)puVar17 & 0x7fffffffffffffff) != 0) {
                _free(puVar8);
                puVar7 = unaff_x22;
              }
LAB_1014073dc:
              in_stack_000000c8 = puVar7;
              in_stack_000000c0 = puVar6;
              *(undefined8 *)(unaff_x29 + -0xb0) = 0x8000000000000001;
              *(undefined **)(unaff_x29 + -0xa8) = puVar12;
              if ((long)puVar21 < -0x7ffffffffffffffe) {
LAB_1014073f8:
                puVar21 = (undefined8 *)0x8000000000000001;
              }
              else {
LAB_101407730:
                FUN_100e79780(&stack0x000000c0);
                puVar21 = (undefined8 *)0x8000000000000001;
              }
              goto LAB_1014071e8;
            }
            if (bVar1 != 1) {
              if (bVar1 == 4) {
                puVar8 = *(undefined **)(pcVar22 + lVar24 + 8);
                if (puVar8 == (undefined *)0x0) goto LAB_101406fa8;
                if (puVar8 == (undefined *)0x1) goto LAB_101407020;
                _cStack0000000000000090 = (undefined8 *)CONCAT71(_cStack0000000000000091,1);
                in_stack_00000098 = (undefined8 *)puVar8;
                puVar12 = (undefined *)
                          __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                    (&stack0x00000090,&UNK_10b22d740,&UNK_10b20a590);
                puVar7 = unaff_x22;
              }
              else {
                if (bVar1 == 0xc) {
                  plVar10 = *(long **)(pcVar22 + lVar24 + 0x10);
                  lVar16 = *(long *)(pcVar22 + lVar24 + 0x18);
                  if (lVar16 != 7) goto LAB_101406fe4;
                  goto LAB_101406e10;
                }
LAB_1014086dc:
                puVar12 = (undefined *)
                          FUN_108855c40(pcVar22 + lVar24,&stack0x00000180,&UNK_10b2147a8);
                puVar7 = unaff_x22;
              }
              goto LAB_1014073dc;
            }
            bVar1 = pcVar22[lVar24 + 1];
            if (bVar1 != 0) {
              if (bVar1 != 1) {
                _cStack0000000000000090 = (undefined8 *)CONCAT71(_cStack0000000000000091,1);
                in_stack_00000098 = (undefined8 *)(ulong)bVar1;
                puVar12 = (undefined *)
                          __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                    (&stack0x00000090,&UNK_10b22d740,&UNK_10b20a590);
                puVar7 = unaff_x22;
                goto LAB_1014073dc;
              }
LAB_101407020:
              if (puVar21 != (undefined8 *)0x8000000000000001) {
                in_stack_00000180 = &UNK_108cadf2b;
                in_stack_00000188 = 0xb;
                _cStack0000000000000090 = &stack0x00000180;
                in_stack_00000098 = (undefined8 *)&DAT_100c7b3a0;
                in_stack_000000c0 = puVar21;
                in_stack_000000c8 = unaff_x22;
                uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000090);
                *(undefined8 *)(unaff_x29 + -0xb0) = 0x8000000000000001;
                *(undefined8 *)(unaff_x29 + -0xa8) = uVar11;
                if (puVar21 != (undefined8 *)0x8000000000000000) goto LAB_101407730;
                goto LAB_1014073f8;
              }
              bVar1 = *pbVar13;
              if (bVar1 == 0x10) {
LAB_101406dbc:
                puVar21 = (undefined8 *)0x8000000000000000;
              }
              else {
                if (bVar1 == 0x11) {
                  pbVar13 = *(byte **)(pcVar22 + lVar24 + 0x28);
                }
                else if (bVar1 == 0x12) goto LAB_101406dbc;
                FUN_10141f688(&stack0x00000090,pbVar13);
                puVar21 = _cStack0000000000000090;
                if (_cStack0000000000000090 == (undefined8 *)0x8000000000000001) {
                  *(undefined8 *)(unaff_x29 + -0xb0) = 0x8000000000000001;
                  *(undefined8 **)(unaff_x29 + -0xa8) = in_stack_00000098;
                  puVar21 = (undefined8 *)0x8000000000000001;
                  goto LAB_1014071e8;
                }
              }
              in_stack_000000d8 = CONCAT71(uStack00000000000000a9,uStack00000000000000a8);
              in_stack_000000d0 = CONCAT71(uStack00000000000000a1,bStack00000000000000a0);
              unaff_x22 = (undefined *)in_stack_00000098;
              goto LAB_101406dcc;
            }
LAB_101406fa8:
            if (cVar18 != '\x04') {
              in_stack_00000180 = &UNK_108ca28d0;
              in_stack_00000188 = 7;
              _cStack0000000000000090 = &stack0x00000180;
              in_stack_00000098 = (undefined8 *)&DAT_100c7b3a0;
              in_stack_000000c0 = puVar21;
              in_stack_000000c8 = unaff_x22;
              puVar12 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000090)
              ;
              puVar6 = in_stack_000000c0;
              puVar7 = in_stack_000000c8;
              goto LAB_1014073dc;
            }
            bVar1 = *pbVar13;
            cVar18 = '\x03';
            if (bVar1 != 0x10) {
              if (bVar1 == 0x11) {
                pbVar13 = *(byte **)(pcVar22 + lVar24 + 0x28);
              }
              else if (bVar1 == 0x12) goto LAB_101406dcc;
              FUN_10140f308(&stack0x00000090,pbVar13);
              puVar12 = (undefined *)in_stack_00000098;
              puVar7 = unaff_x22;
              if (((ulong)_cStack0000000000000090 & 1) != 0) goto LAB_1014073dc;
              cVar18 = cStack0000000000000091;
            }
LAB_101406dcc:
            lVar24 = lVar24 + 0x40;
          } while (lVar23 - lVar24 != 0);
          cVar14 = '\x03';
          if (cVar18 != '\x04') {
            cVar14 = cVar18;
          }
          pcVar22 = pcVar19;
          in_stack_000000c8 = unaff_x22;
          if (puVar21 == (undefined8 *)0x8000000000000001) {
            puVar21 = (undefined8 *)0x8000000000000000;
          }
          else {
            *(undefined8 *)(unaff_x29 + -0x78) = in_stack_000000d0;
            *(undefined **)(unaff_x29 + -0x80) = unaff_x22;
            *(undefined8 *)(unaff_x29 + -0x70) = in_stack_000000d8;
          }
        }
        *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x78);
        *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x80);
        *(undefined8 **)(unaff_x29 + -0xb0) = puVar21;
        *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x70);
        *(char *)(unaff_x29 + -0x90) = cVar14;
        in_stack_00000098 = *(undefined8 **)(unaff_x29 + -0xa8);
        _cStack0000000000000090 = *(undefined8 **)(unaff_x29 + -0xb0);
        uStack00000000000000a8 = (undefined1)*(undefined8 *)(unaff_x29 + -0x98);
        uStack00000000000000a9 = (undefined7)((ulong)*(undefined8 *)(unaff_x29 + -0x98) >> 8);
        bStack00000000000000a0 = (byte)*(undefined8 *)(unaff_x29 + -0xa0);
        uStack00000000000000a1 = (undefined7)((ulong)*(undefined8 *)(unaff_x29 + -0xa0) >> 8);
        uStack00000000000000b0 = (undefined1)*(undefined8 *)(unaff_x29 + -0x90);
        uStack00000000000000b1 = (undefined7)((ulong)*(undefined8 *)(unaff_x29 + -0x90) >> 8);
        if ((long)pcVar19 - (long)pcVar22 != 0) {
          in_stack_000000c0 = puVar17;
          uVar11 = FUN_1087e422c((long)puVar17 + ((ulong)((long)pcVar19 - (long)pcVar22) >> 6),
                                 &stack0x000000c0,&UNK_10b23a190);
LAB_101407178:
          puVar21 = (undefined8 *)0x8000000000000001;
          *(undefined8 *)(unaff_x29 + -0xb0) = 0x8000000000000001;
          *(undefined8 *)(unaff_x29 + -0xa8) = uVar11;
          if (_cStack0000000000000090 != (undefined8 *)0x8000000000000000) {
            FUN_100e79780(&stack0x00000090);
          }
        }
        goto LAB_1014071e8;
      }
      uVar11 = FUN_108855c40(&stack0x00000070,&stack0x00000180,&UNK_10b2142c8);
    }
    *(undefined8 *)(unaff_x29 + -0x100) = 2;
    *(undefined8 *)(unaff_x29 + -0xf8) = uVar11;
    FUN_100ce2240(unaff_x29 + -0x100);
    uVar11 = FUN_1088561c0(&UNK_108cae1d5,0x43);
    FUN_100e077ec(&stack0x00000070);
    *in_stack_00000020 = 0x8000000000000003;
    in_stack_00000020[1] = uVar11;
  }
  else {
    uStack00000000000000b0 = (undefined1)in_stack_000000d8;
    uStack00000000000000b1 = (undefined7)((ulong)in_stack_000000d8 >> 8);
    uVar5 = uStack00000000000000b1;
    uStack00000000000000a8 = (undefined1)in_stack_000000d0;
    uStack00000000000000a9 = (undefined7)((ulong)in_stack_000000d0 >> 8);
    uVar4 = uStack00000000000000a9;
    bStack00000000000000a0 = (byte)in_stack_000000c8;
    bVar3 = bStack00000000000000a0;
    uStack00000000000000a1 = (undefined7)((ulong)in_stack_000000c8 >> 8);
    in_stack_00000098 = in_stack_000000c0;
    uVar11 = CONCAT17(uStack00000000000000a8,uStack00000000000000a1);
    uStack000000000000003f = uStack00000000000000b0;
    FUN_100e077ec(&stack0x00000070);
    uVar15 = (ulong)puVar21 ^ 0x8000000000000000;
    if (puVar21 < (undefined8 *)0x8000000000000001) {
      uVar15 = 0;
    }
    if (uVar15 == 0) {
      *(ulong *)(unaff_x29 + -0xef) = CONCAT17(uStack000000000000003f,uVar4);
      *(undefined8 *)(unaff_x29 + -0xf7) = uVar11;
      *(ulong *)(unaff_x29 + -0xe8) = CONCAT71(uVar5,uStack000000000000003f);
      *(undefined8 **)(unaff_x29 + -0x100) = puVar21;
      *(byte *)(unaff_x29 + -0xf8) = bVar3;
      *(byte *)(unaff_x29 + -0xe0) = bVar1 & 1;
    }
    else {
      if (uVar15 == 1) {
        uVar11 = 0x8000000000000001;
      }
      else {
        *(byte *)(unaff_x29 + -0xf8) = bVar3 & 1;
        uVar11 = 0x8000000000000002;
      }
      *(undefined8 *)(unaff_x29 + -0x100) = uVar11;
    }
LAB_1014072ac:
    uVar11 = *(undefined8 *)(unaff_x29 + -0x100);
    uVar25 = *(undefined8 *)(unaff_x29 + -0xe8);
    uVar20 = *(undefined8 *)(unaff_x29 + -0xf0);
    in_stack_00000020[1] = *(undefined8 *)(unaff_x29 + -0xf8);
    *in_stack_00000020 = uVar11;
    in_stack_00000020[3] = uVar25;
    in_stack_00000020[2] = uVar20;
    in_stack_00000020[4] = *(undefined8 *)(unaff_x29 + -0xe0);
  }
  return;
}

