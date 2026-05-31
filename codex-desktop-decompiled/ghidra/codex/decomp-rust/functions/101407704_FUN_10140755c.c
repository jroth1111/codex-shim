
void FUN_10140755c(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte *pbVar10;
  char cVar11;
  long lVar12;
  undefined8 *puVar13;
  char cVar14;
  char *pcVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined *unaff_x22;
  long unaff_x24;
  int unaff_w25;
  char *pcVar18;
  undefined8 *unaff_x26;
  long lVar19;
  long lVar20;
  long unaff_x29;
  undefined8 uVar21;
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
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 *in_stack_000000c0;
  undefined *in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined *in_stack_00000180;
  undefined8 in_stack_00000188;
  
  puVar9 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x100);
  *(undefined **)(unaff_x29 + -0xa8) = puVar9;
  FUN_100d03040(&stack0x00000108);
  _cStack0000000000000090 = (undefined8 *)0x2;
  in_stack_00000098 = puVar9;
  in_stack_000000c8 = puVar9;
  puVar9 = (undefined *)FUN_100ce2240(&stack0x00000090);
  lVar19 = in_stack_00000088;
  pcVar18 = in_stack_00000080;
  if (unaff_w25 == 0x14) {
    if (in_stack_00000088 == 0) {
      uVar7 = 0;
LAB_1014071c8:
      puVar8 = (undefined *)FUN_1087e422c(uVar7,&UNK_10b22d8e0,&UNK_10b20a590);
    }
    else {
      pcVar15 = in_stack_00000080 + 0x20;
      cVar11 = *in_stack_00000080;
      if (cVar11 == '\x10') {
LAB_1014070b8:
        _cStack0000000000000090 = (undefined8 *)CONCAT62(uStack0000000000000092,0x300);
      }
      else {
        if (cVar11 == '\x11') {
          pcVar5 = *(char **)(in_stack_00000080 + 8);
        }
        else {
          pcVar5 = in_stack_00000080;
          if (cVar11 == '\x12') goto LAB_1014070b8;
        }
        puVar9 = (undefined *)FUN_10140f308(&stack0x00000090,pcVar5);
      }
      puVar8 = in_stack_00000098;
      if (cStack0000000000000090 == '\x01') goto LAB_1014071dc;
      if (lVar19 == 1) {
        uVar7 = 1;
        goto LAB_1014071c8;
      }
      uVar2 = cStack0000000000000091;
      cVar11 = *pcVar15;
      if ((cVar11 == '\x10') || (cVar11 == '\x12')) {
        in_stack_00000098 = puVar9;
        puVar17 = (undefined8 *)0x8000000000000000;
LAB_101407364:
        in_stack_000000a8 = *(undefined8 *)(unaff_x24 + 0x38);
        in_stack_000000a0 = *(undefined8 *)(unaff_x24 + 0x30);
        *(undefined8 *)(unaff_x29 + -0x98) = in_stack_000000a8;
        *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_000000a0;
        *(undefined8 **)(unaff_x29 + -0xb0) = puVar17;
        *(undefined **)(unaff_x29 + -0xa8) = in_stack_00000098;
        *(undefined1 *)(unaff_x29 + -0x90) = uVar2;
        in_stack_00000098 = *(undefined **)(unaff_x29 + -0xa8);
        _cStack0000000000000090 = *(undefined8 **)(unaff_x29 + -0xb0);
        in_stack_000000b0 = *(undefined8 *)(unaff_x29 + -0x90);
        if (lVar19 != 2) {
          in_stack_000000c0 = (undefined8 *)0x2;
          uVar7 = FUN_1087e422c((lVar19 + 0x7fffffffffffffeU & 0x7ffffffffffffff) + 2,
                                &stack0x000000c0,&UNK_10b23a1b0);
          goto LAB_101407178;
        }
        goto LAB_1014071e8;
      }
      if (cVar11 == '\x11') {
        pcVar15 = *(char **)(pcVar18 + 0x28);
      }
      FUN_10141f688(&stack0x00000090,pcVar15);
      puVar8 = in_stack_00000098;
      if (_cStack0000000000000090 != (undefined8 *)0x8000000000000001) {
        *(undefined8 *)(unaff_x24 + 0x38) = in_stack_000000a8;
        *(undefined8 *)(unaff_x24 + 0x30) = in_stack_000000a0;
        puVar17 = _cStack0000000000000090;
        if (_cStack0000000000000090 != (undefined8 *)0x8000000000000002) goto LAB_101407364;
      }
    }
LAB_1014071dc:
    puVar17 = (undefined8 *)0x8000000000000001;
    *(undefined8 *)(unaff_x29 + -0xb0) = 0x8000000000000001;
    *(undefined **)(unaff_x29 + -0xa8) = puVar8;
  }
  else {
    if (unaff_w25 != 0x15) {
      uVar7 = FUN_108855c40(&stack0x00000070,&stack0x00000180,&UNK_10b2142c8);
      goto LAB_1014071f8;
    }
    lVar19 = in_stack_00000088 * 0x40;
    pcVar15 = in_stack_00000080 + lVar19;
    in_stack_000000c0 = (undefined8 *)0x8000000000000001;
    if (in_stack_00000088 == 0) {
      puVar13 = (undefined8 *)0x0;
      puVar17 = (undefined8 *)0x8000000000000000;
      cVar11 = '\x03';
    }
    else {
      lVar20 = 0;
      puVar13 = (undefined8 *)((lVar19 - 0x40U >> 6) + 1);
      cVar14 = '\x04';
      puVar17 = (undefined8 *)0x8000000000000001;
      do {
        pbVar10 = (byte *)(pcVar18 + lVar20 + 0x20);
        bVar1 = pcVar18[lVar20];
        puVar3 = puVar17;
        if (0xc < bVar1) {
          if (bVar1 == 0xd) {
            plVar6 = *(long **)(pcVar18 + lVar20 + 8);
            lVar12 = *(long *)(pcVar18 + lVar20 + 0x10);
            if (lVar12 == 7) {
LAB_101406e10:
              if ((int)*plVar6 == 0x7774656e && *(int *)((long)plVar6 + 3) == 0x6b726f77)
              goto LAB_101406fa8;
            }
            else {
LAB_101406fe4:
              if ((lVar12 == 0xb) &&
                 (*plVar6 == 0x7379735f656c6966 && *(long *)((long)plVar6 + 3) == 0x6d65747379735f65
                 )) goto LAB_101407020;
            }
            puVar8 = (undefined *)FUN_1087e41dc(plVar6,lVar12,&UNK_10b222548,2);
            puVar4 = unaff_x22;
            goto LAB_1014073dc;
          }
          if (bVar1 == 0xe) {
            pcVar5 = *(char **)(pcVar18 + lVar20 + 0x10);
            lVar12 = *(long *)(pcVar18 + lVar20 + 0x18);
            if (lVar12 != 7) goto LAB_101406e70;
LAB_101406f38:
            if (((((*pcVar5 == 'n') && (pcVar5[1] == 'e')) && (pcVar5[2] == 't')) &&
                ((pcVar5[3] == 'w' && (pcVar5[4] == 'o')))) &&
               ((pcVar5[5] == 'r' && (pcVar5[6] == 'k')))) goto LAB_101406fa8;
          }
          else {
            if (bVar1 != 0xf) goto LAB_1014086dc;
            pcVar5 = *(char **)(pcVar18 + lVar20 + 8);
            lVar12 = *(long *)(pcVar18 + lVar20 + 0x10);
            if (lVar12 == 7) goto LAB_101406f38;
LAB_101406e70:
            if ((((lVar12 == 0xb) && (*pcVar5 == 'f')) && (pcVar5[1] == 'i')) &&
               (((((pcVar5[2] == 'l' && (pcVar5[3] == 'e')) && (pcVar5[4] == '_')) &&
                 ((pcVar5[5] == 's' && (pcVar5[6] == 'y')))) &&
                (((pcVar5[7] == 's' && ((pcVar5[8] == 't' && (pcVar5[9] == 'e')))) &&
                 (pcVar5[10] == 'm')))))) goto LAB_101407020;
          }
          __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
                    (&stack0x00000090,pcVar5,lVar12);
          puVar9 = in_stack_00000098;
          puVar13 = _cStack0000000000000090;
          puVar8 = (undefined *)FUN_1087e41dc(in_stack_00000098,in_stack_000000a0,&UNK_10b222548,2);
          puVar4 = unaff_x22;
          if (((ulong)puVar13 & 0x7fffffffffffffff) != 0) {
            _free(puVar9);
            puVar4 = unaff_x22;
          }
LAB_1014073dc:
          in_stack_000000c8 = puVar4;
          in_stack_000000c0 = puVar3;
          *(undefined8 *)(unaff_x29 + -0xb0) = 0x8000000000000001;
          *(undefined **)(unaff_x29 + -0xa8) = puVar8;
          if ((long)puVar17 < -0x7ffffffffffffffe) {
LAB_1014073f8:
            puVar17 = (undefined8 *)0x8000000000000001;
          }
          else {
LAB_101407730:
            FUN_100e79780(&stack0x000000c0);
            puVar17 = (undefined8 *)0x8000000000000001;
          }
          goto LAB_1014071e8;
        }
        if (bVar1 != 1) {
          if (bVar1 == 4) {
            puVar9 = *(undefined **)(pcVar18 + lVar20 + 8);
            if (puVar9 == (undefined *)0x0) goto LAB_101406fa8;
            if (puVar9 == (undefined *)0x1) goto LAB_101407020;
            _cStack0000000000000090 = (undefined8 *)CONCAT71(_cStack0000000000000091,1);
            in_stack_00000098 = puVar9;
            puVar8 = (undefined *)
                     __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                               (&stack0x00000090,&UNK_10b22d740,&UNK_10b20a590);
            puVar4 = unaff_x22;
          }
          else {
            if (bVar1 == 0xc) {
              plVar6 = *(long **)(pcVar18 + lVar20 + 0x10);
              lVar12 = *(long *)(pcVar18 + lVar20 + 0x18);
              if (lVar12 != 7) goto LAB_101406fe4;
              goto LAB_101406e10;
            }
LAB_1014086dc:
            puVar8 = (undefined *)FUN_108855c40(pcVar18 + lVar20,&stack0x00000180,&UNK_10b2147a8);
            puVar4 = unaff_x22;
          }
          goto LAB_1014073dc;
        }
        bVar1 = pcVar18[lVar20 + 1];
        if (bVar1 != 0) {
          if (bVar1 != 1) {
            _cStack0000000000000090 = (undefined8 *)CONCAT71(_cStack0000000000000091,1);
            in_stack_00000098 = (undefined *)(ulong)bVar1;
            puVar8 = (undefined *)
                     __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                               (&stack0x00000090,&UNK_10b22d740,&UNK_10b20a590);
            puVar4 = unaff_x22;
            goto LAB_1014073dc;
          }
LAB_101407020:
          if (puVar17 != (undefined8 *)0x8000000000000001) {
            in_stack_00000180 = &UNK_108cadf2b;
            in_stack_00000188 = 0xb;
            _cStack0000000000000090 = &stack0x00000180;
            in_stack_00000098 = &DAT_100c7b3a0;
            in_stack_000000c0 = puVar17;
            in_stack_000000c8 = unaff_x22;
            uVar7 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000090);
            *(undefined8 *)(unaff_x29 + -0xb0) = 0x8000000000000001;
            *(undefined8 *)(unaff_x29 + -0xa8) = uVar7;
            if (puVar17 != (undefined8 *)0x8000000000000000) goto LAB_101407730;
            goto LAB_1014073f8;
          }
          bVar1 = *pbVar10;
          if (bVar1 == 0x10) {
LAB_101406dbc:
            puVar17 = (undefined8 *)0x8000000000000000;
          }
          else {
            if (bVar1 == 0x11) {
              pbVar10 = *(byte **)(pcVar18 + lVar20 + 0x28);
            }
            else if (bVar1 == 0x12) goto LAB_101406dbc;
            FUN_10141f688(&stack0x00000090,pbVar10);
            puVar17 = _cStack0000000000000090;
            if (_cStack0000000000000090 == (undefined8 *)0x8000000000000001) {
              *(undefined8 *)(unaff_x29 + -0xb0) = 0x8000000000000001;
              *(undefined **)(unaff_x29 + -0xa8) = in_stack_00000098;
              puVar17 = (undefined8 *)0x8000000000000001;
              goto LAB_1014071e8;
            }
          }
          in_stack_000000d8 = in_stack_000000a8;
          in_stack_000000d0 = in_stack_000000a0;
          unaff_x22 = in_stack_00000098;
          goto LAB_101406dcc;
        }
LAB_101406fa8:
        if (cVar14 != '\x04') {
          in_stack_00000180 = &UNK_108ca28d0;
          in_stack_00000188 = 7;
          _cStack0000000000000090 = &stack0x00000180;
          in_stack_00000098 = &DAT_100c7b3a0;
          in_stack_000000c0 = puVar17;
          in_stack_000000c8 = unaff_x22;
          puVar8 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000090);
          puVar3 = in_stack_000000c0;
          puVar4 = in_stack_000000c8;
          goto LAB_1014073dc;
        }
        bVar1 = *pbVar10;
        cVar14 = '\x03';
        if (bVar1 != 0x10) {
          if (bVar1 == 0x11) {
            pbVar10 = *(byte **)(pcVar18 + lVar20 + 0x28);
          }
          else if (bVar1 == 0x12) goto LAB_101406dcc;
          FUN_10140f308(&stack0x00000090,pbVar10);
          puVar8 = in_stack_00000098;
          puVar4 = unaff_x22;
          if (((ulong)_cStack0000000000000090 & 1) != 0) goto LAB_1014073dc;
          cVar14 = cStack0000000000000091;
        }
LAB_101406dcc:
        lVar20 = lVar20 + 0x40;
      } while (lVar19 - lVar20 != 0);
      cVar11 = '\x03';
      if (cVar14 != '\x04') {
        cVar11 = cVar14;
      }
      pcVar18 = pcVar15;
      in_stack_000000c8 = unaff_x22;
      if (puVar17 == (undefined8 *)0x8000000000000001) {
        puVar17 = (undefined8 *)0x8000000000000000;
      }
      else {
        *(undefined8 *)(unaff_x29 + -0x78) = in_stack_000000d0;
        *(undefined **)(unaff_x29 + -0x80) = unaff_x22;
        *(undefined8 *)(unaff_x29 + -0x70) = in_stack_000000d8;
      }
    }
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x78);
    *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x80);
    *(undefined8 **)(unaff_x29 + -0xb0) = puVar17;
    *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x70);
    *(char *)(unaff_x29 + -0x90) = cVar11;
    in_stack_00000098 = *(undefined **)(unaff_x29 + -0xa8);
    _cStack0000000000000090 = *(undefined8 **)(unaff_x29 + -0xb0);
    in_stack_000000a8 = *(undefined8 *)(unaff_x29 + -0x98);
    in_stack_000000a0 = *(undefined8 *)(unaff_x29 + -0xa0);
    in_stack_000000b0 = *(undefined8 *)(unaff_x29 + -0x90);
    if ((long)pcVar15 - (long)pcVar18 != 0) {
      in_stack_000000c0 = puVar13;
      uVar7 = FUN_1087e422c((long)puVar13 + ((ulong)((long)pcVar15 - (long)pcVar18) >> 6),
                            &stack0x000000c0,&UNK_10b23a190);
LAB_101407178:
      puVar17 = (undefined8 *)0x8000000000000001;
      *(undefined8 *)(unaff_x29 + -0xb0) = 0x8000000000000001;
      *(undefined8 *)(unaff_x29 + -0xa8) = uVar7;
      if (_cStack0000000000000090 != (undefined8 *)0x8000000000000000) {
        FUN_100e79780(&stack0x00000090);
      }
    }
  }
LAB_1014071e8:
  if (puVar17 != (undefined8 *)0x8000000000000001) {
    *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0x98);
    *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -0xa0);
    uVar7 = *(undefined8 *)(unaff_x29 + -0x90);
    *(undefined8 *)(unaff_x29 + -0xd8) = uVar7;
    *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(unaff_x29 + -0xa8);
    *(undefined8 *)(unaff_x29 + -0xf8) = *(undefined8 *)(unaff_x29 + -0xb0);
    uVar16 = *(undefined8 *)(unaff_x29 + -0xf8);
    uVar2 = *(undefined1 *)(unaff_x29 + -0xf0);
    uVar21 = *(undefined8 *)(unaff_x29 + -0xef);
    uStack0000000000000038 = (undefined7)*(undefined8 *)(unaff_x29 + -0xe7);
    uStack000000000000003f = (undefined1)*(undefined8 *)(unaff_x29 + -0xe0);
    uStack0000000000000040 = (undefined7)((ulong)*(undefined8 *)(unaff_x29 + -0xe0) >> 8);
    uStack0000000000000028 = (undefined3)*(undefined4 *)(unaff_x29 + -0xd7);
    uStack000000000000002b = (undefined1)((ulong)uVar7 >> 0x20);
    uStack000000000000002c = (undefined3)((ulong)uVar7 >> 0x28);
    FUN_100e077ec(&stack0x00000070);
    uStack0000000000000059 = uStack0000000000000038;
    in_stack_00000060 = uStack000000000000003f;
    uStack0000000000000061 = uStack0000000000000040;
    in_stack_00000068 = (undefined1)uVar7;
    uStack0000000000000069 = CONCAT13(uStack000000000000002b,uStack0000000000000028);
    uStack000000000000006d = uStack000000000000002c;
    in_stack_00000048 = uVar16;
    in_stack_00000050 = uVar2;
    uStack0000000000000051 = uVar21;
    __ZN136__LT_codex_protocol__models__PermissionProfile_u20_as_u20_core__convert__From_LT_codex_protocol__models__LegacyPermissionProfile_GT__GT_4from17h9e236cecf0dcb073E
              (unaff_x29 + -0x100,&stack0x00000048);
    uVar7 = *(undefined8 *)(unaff_x29 + -0x100);
    uVar21 = *(undefined8 *)(unaff_x29 + -0xe8);
    uVar16 = *(undefined8 *)(unaff_x29 + -0xf0);
    unaff_x26[1] = *(undefined8 *)(unaff_x29 + -0xf8);
    *unaff_x26 = uVar7;
    unaff_x26[3] = uVar21;
    unaff_x26[2] = uVar16;
    unaff_x26[4] = *(undefined8 *)(unaff_x29 + -0xe0);
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x29 + -0xa8);
LAB_1014071f8:
  *(undefined8 *)(unaff_x29 + -0x100) = 2;
  *(undefined8 *)(unaff_x29 + -0xf8) = uVar7;
  FUN_100ce2240(unaff_x29 + -0x100);
  uVar7 = FUN_1088561c0(&UNK_108cae1d5,0x43);
  FUN_100e077ec(&stack0x00000070);
  *unaff_x26 = 0x8000000000000003;
  unaff_x26[1] = uVar7;
  return;
}

