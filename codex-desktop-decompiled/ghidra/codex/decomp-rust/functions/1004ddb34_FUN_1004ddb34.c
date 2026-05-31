
/* WARNING: Removing unreachable block (ram,0x0001004dd2e0) */
/* WARNING: Removing unreachable block (ram,0x0001004dd2e8) */
/* WARNING: Removing unreachable block (ram,0x0001004dd308) */
/* WARNING: Removing unreachable block (ram,0x0001004dd2ec) */
/* WARNING: Removing unreachable block (ram,0x0001004dd7b0) */
/* WARNING: Removing unreachable block (ram,0x0001004dda4c) */
/* WARNING: Removing unreachable block (ram,0x0001004dda5c) */
/* WARNING: Removing unreachable block (ram,0x0001004dd2f8) */
/* WARNING: Removing unreachable block (ram,0x0001004dda18) */
/* WARNING: Removing unreachable block (ram,0x0001004dd2fc) */
/* WARNING: Removing unreachable block (ram,0x0001004dce88) */

void FUN_1004ddb34(void)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *unaff_x19;
  undefined8 *puVar11;
  long unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  int unaff_w27;
  long unaff_x29;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000020;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 *in_stack_000000d0;
  long in_stack_000000d8;
  undefined *in_stack_000000e0;
  undefined *in_stack_000000e8;
  char cStack0000000000000150;
  char cStack0000000000000151;
  undefined *in_stack_00000158;
  undefined8 in_stack_00000160;
  long in_stack_00000168;
  long in_stack_00000170;
  undefined8 in_stack_00000178;
  long in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  char cVar19;
  undefined8 *puVar18;
  undefined8 *in_stack_000002b0;
  undefined *in_stack_000002b8;
  undefined8 in_stack_000002c0;
  long in_stack_000002c8;
  long in_stack_000002d0;
  undefined8 in_stack_000002d8;
  long in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  long in_stack_00000428;
  long in_stack_00000430;
  long in_stack_00000458;
  
  puVar9 = (undefined *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000360);
  if (unaff_x22 != -0x7fffffffffffffff) {
    FUN_100cb5924(&stack0x000002b0);
  }
  in_stack_000000e0 = (undefined *)0x800000000000000a;
  in_stack_000000e8 = puVar9;
  FUN_100cbb07c(&stack0x000000e0);
  lVar10 = in_stack_000000d8;
  puVar11 = in_stack_000000d0;
  if (unaff_w27 == 0x14) {
    if (in_stack_000000d8 == 0) {
      uVar8 = 0;
LAB_1004dd188:
      thunk_FUN_1087e422c(uVar8,&UNK_10b22e8f8,&UNK_10b20a590);
    }
    else {
      lVar7 = FUN_1012840c4(in_stack_000000d0);
      if (lVar7 == 0) {
        if (lVar10 == 1) {
          uVar8 = 1;
          goto LAB_1004dd188;
        }
        FUN_10131d9dc(&stack0x000002b0,puVar11 + 4);
        if (in_stack_000002b0 != (undefined8 *)0x8000000000000000) {
          uVar8 = *(undefined8 *)(unaff_x25 + 0xe0);
          uVar13 = *(undefined8 *)(unaff_x25 + 0xf8);
          uVar12 = *(undefined8 *)(unaff_x25 + 0xf0);
          unaff_x23[0x1d] = *(undefined8 *)(unaff_x25 + 0xe8);
          unaff_x23[0x1c] = uVar8;
          unaff_x23[0x1f] = uVar13;
          unaff_x23[0x1e] = uVar12;
          uVar8 = *(undefined8 *)(unaff_x25 + 0x100);
          unaff_x23[0x21] = *(undefined8 *)(unaff_x25 + 0x108);
          unaff_x23[0x20] = uVar8;
          uVar13 = *(undefined8 *)(unaff_x25 + 0xc0);
          uVar12 = *(undefined8 *)(unaff_x25 + 0xd8);
          uVar8 = *(undefined8 *)(unaff_x25 + 0xd0);
          unaff_x23[0x19] = *(undefined8 *)(unaff_x25 + 200);
          unaff_x23[0x18] = uVar13;
          unaff_x23[0x1b] = uVar12;
          unaff_x23[0x1a] = uVar8;
          puVar11 = in_stack_000002b0;
          if (lVar10 == 2) {
LAB_1004dd500:
            if (in_stack_00000428 == -0x8000000000000000) {
              *(undefined8 *)(unaff_x25 + 0xd0) = 0;
              *(undefined **)(unaff_x25 + 200) = &UNK_108c56c70;
              *(undefined8 *)(unaff_x25 + 0xe0) = 0;
              *(undefined8 *)(unaff_x25 + 0xd8) = 0;
              in_stack_000002b0 = (undefined8 *)0x0;
              FUN_1011a27dc(&stack0x000002b0,in_stack_00000430);
              in_stack_00000428 = 0;
              lVar10 = 8;
              *(long *)(unaff_x24 + 0xf8) = in_stack_000002c8;
              *(undefined8 *)(unaff_x24 + 0xf0) = 0;
              *(undefined8 *)(unaff_x24 + 0x108) = in_stack_000002d8;
              *(long *)(unaff_x24 + 0x100) = in_stack_000002d0;
              uVar12 = *(undefined8 *)(in_stack_00000430 + 0x40);
              uVar8 = *(undefined8 *)(in_stack_00000430 + 0x38);
              in_stack_00000170 = in_stack_000002e0;
LAB_1004dd70c:
              in_stack_000000e0 = (undefined *)0x0;
              *(long *)(unaff_x29 + -0xd0) = in_stack_00000428;
              *(long *)(unaff_x29 + -200) = lVar10;
              uVar13 = *(undefined8 *)(unaff_x24 + 0xf0);
              uVar15 = *(undefined8 *)(unaff_x24 + 0x108);
              uVar14 = *(undefined8 *)(unaff_x24 + 0x100);
              unaff_x23[0x25] = *(undefined8 *)(unaff_x24 + 0xf8);
              unaff_x23[0x24] = uVar13;
              unaff_x23[0x27] = uVar15;
              unaff_x23[0x26] = uVar14;
              *(long *)(unaff_x29 + -0xa0) = in_stack_00000170;
              *(undefined8 *)(unaff_x29 + -0x90) = uVar12;
              *(undefined8 *)(unaff_x29 + -0x98) = uVar8;
              FUN_100ecd2fc(&stack0x000002b0,&stack0x000000e0,unaff_x29 + -0xd0);
              if (in_stack_000002b0 != (undefined8 *)0x8000000000000000) {
                if ((in_stack_000002d0 != 0) && (in_stack_000002d0 * 9 != -0x11)) {
                  _free(in_stack_000002c8 + in_stack_000002d0 * -8 + -8);
                }
                func_0x000100cd7284(&stack0x000002b0);
              }
            }
            else if (in_stack_00000428 != -0x7fffffffffffffff) {
              uVar12 = unaff_x23[0x21];
              uVar8 = unaff_x23[0x20];
              uVar13 = unaff_x23[0x1b];
              uVar15 = unaff_x23[0x1e];
              uVar14 = unaff_x23[0x1d];
              *(undefined8 *)(unaff_x24 + 0xf8) = unaff_x23[0x1c];
              *(undefined8 *)(unaff_x24 + 0xf0) = uVar13;
              *(undefined8 *)(unaff_x24 + 0x108) = uVar15;
              *(undefined8 *)(unaff_x24 + 0x100) = uVar14;
              lVar10 = in_stack_00000430;
              in_stack_00000170 = in_stack_00000458;
              goto LAB_1004dd70c;
            }
            uVar8 = 0x8000000000000004;
            in_stack_00000088 = unaff_x23[7];
            in_stack_00000080 = unaff_x23[6];
            uVar14 = unaff_x23[8];
            uVar13 = unaff_x23[0xb];
            uVar12 = unaff_x23[10];
            uVar16 = unaff_x23[0xd];
            uVar15 = unaff_x23[0xc];
            *(undefined8 *)(unaff_x24 + 0x38) = unaff_x23[9];
            *(undefined8 *)(unaff_x24 + 0x30) = uVar14;
            *(undefined8 *)(unaff_x24 + 0x48) = uVar13;
            *(undefined8 *)(unaff_x24 + 0x40) = uVar12;
            *(undefined8 *)(unaff_x24 + 0x58) = uVar16;
            *(undefined8 *)(unaff_x24 + 0x50) = uVar15;
            in_stack_00000068 = unaff_x23[3];
            in_stack_00000060 = unaff_x23[2];
            in_stack_00000078 = unaff_x23[5];
            in_stack_00000070 = unaff_x23[4];
            goto LAB_1004dd930;
          }
          in_stack_000002b0 = (undefined8 *)0x2;
          thunk_FUN_1087e422c((lVar10 + 0x7fffffffffffffeU & 0x7ffffffffffffff) + 2,&stack0x000002b0
                              ,&UNK_10b23a1b0);
          FUN_100cbb248(&stack0x00000410);
        }
      }
    }
  }
  else {
    if (unaff_w27 == 0x15) {
      bVar2 = false;
      *(undefined8 **)(unaff_x29 + -0x88) = in_stack_000000d0;
      *(undefined8 **)(unaff_x29 + -0x80) = in_stack_000000d0 + in_stack_000000d8 * 8;
      *(undefined8 *)(unaff_x29 + -0x78) = 0;
      *(undefined8 *)(unaff_x29 + -0x70) = 0;
      puVar11 = (undefined8 *)0x8000000000000000;
      uVar8 = in_stack_00000160;
      lVar10 = in_stack_00000168;
      lVar7 = in_stack_00000170;
      uVar12 = in_stack_00000178;
      lVar3 = in_stack_00000180;
      uVar13 = in_stack_00000188;
      uVar14 = in_stack_00000190;
      uVar15 = in_stack_00000198;
      uVar16 = in_stack_000001a0;
      uVar4 = in_stack_000001a8;
LAB_1004dd014:
      do {
        in_stack_000001a8 = uVar4;
        in_stack_000001a0 = uVar16;
        in_stack_00000198 = uVar15;
        in_stack_00000190 = uVar14;
        in_stack_00000188 = uVar13;
        in_stack_00000180 = lVar3;
        in_stack_00000178 = uVar12;
        in_stack_00000170 = lVar7;
        in_stack_00000168 = lVar10;
        in_stack_00000160 = uVar8;
        FUN_100f23138(&stack0x000002b0,unaff_x29 + -0x88);
        puVar18 = puVar11;
        if ((char)in_stack_000002b0 == '\x01') {
joined_r0x0001004dd118:
          in_stack_00000158 = puVar9;
          _cStack0000000000000150 = puVar18;
          if (puVar11 != (undefined8 *)0x8000000000000000) {
LAB_1004dd1f4:
            FUN_100cbb248(&stack0x00000150);
          }
          goto LAB_1004dd200;
        }
        cVar19 = (char)((ulong)in_stack_000002b0 >> 8);
        if (cVar19 == '\x02') {
          lVar6 = *(long *)(unaff_x29 + -0x78);
          *(undefined8 *)(unaff_x29 + -0x78) = 0;
          uVar8 = in_stack_00000160;
          lVar10 = in_stack_00000168;
          lVar7 = in_stack_00000170;
          uVar12 = in_stack_00000178;
          lVar3 = in_stack_00000180;
          uVar13 = in_stack_00000188;
          uVar14 = in_stack_00000190;
          uVar15 = in_stack_00000198;
          uVar16 = in_stack_000001a0;
          uVar4 = in_stack_000001a8;
          if (lVar6 == 0) {
LAB_1004ddaa0:
            _cStack0000000000000150 = puVar11;
            in_stack_00000158 = puVar9;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b209338);
            goto LAB_1004ddabc;
          }
          goto LAB_1004dd014;
        }
        if (cVar19 == '\0') {
          if (bVar2) {
            _cStack0000000000000150 = puVar11;
            in_stack_00000158 = puVar9;
            thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002b0);
LAB_1004dd1dc:
            in_stack_000002b0 = (undefined8 *)&stack0x00000410;
            puVar18 = _cStack0000000000000150;
            puVar9 = in_stack_00000158;
            goto joined_r0x0001004dd118;
          }
          lVar10 = *(long *)(unaff_x29 + -0x78);
          *(undefined8 *)(unaff_x29 + -0x78) = 0;
          if (lVar10 == 0) goto LAB_1004ddaa0;
          lVar6 = FUN_1012840c4();
          bVar2 = true;
          uVar8 = in_stack_00000160;
          lVar10 = in_stack_00000168;
          lVar7 = in_stack_00000170;
          uVar12 = in_stack_00000178;
          lVar3 = in_stack_00000180;
          uVar13 = in_stack_00000188;
          uVar14 = in_stack_00000190;
          uVar15 = in_stack_00000198;
          uVar16 = in_stack_000001a0;
          uVar4 = in_stack_000001a8;
          if (lVar6 != 0) goto joined_r0x0001004dd118;
        }
        else {
          if (cVar19 != '\x01') {
            if (!bVar2) {
              _cStack0000000000000150 = puVar11;
              in_stack_00000158 = puVar9;
              thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000002b0);
              goto LAB_1004dd1dc;
            }
            if (puVar11 == (undefined8 *)0x8000000000000000) {
              in_stack_000002b0 = (undefined8 *)&stack0x00000410;
              _cStack0000000000000150 = puVar11;
              in_stack_00000158 = puVar9;
              thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000002b0);
            }
            else {
              unaff_x23[0x1d] = in_stack_00000188;
              unaff_x23[0x1c] = in_stack_00000180;
              unaff_x23[0x1f] = in_stack_00000198;
              unaff_x23[0x1e] = in_stack_00000190;
              unaff_x23[0x21] = in_stack_000001a8;
              unaff_x23[0x20] = in_stack_000001a0;
              unaff_x23[0x19] = in_stack_00000168;
              unaff_x23[0x18] = in_stack_00000160;
              unaff_x23[0x1b] = in_stack_00000178;
              unaff_x23[0x1a] = in_stack_00000170;
              *(undefined8 *)(unaff_x24 + 200) = in_stack_00000198;
              *(undefined8 *)(unaff_x24 + 0xc0) = in_stack_00000190;
              *(undefined8 *)(unaff_x24 + 0xd8) = in_stack_000001a8;
              *(undefined8 *)(unaff_x24 + 0xd0) = in_stack_000001a0;
              *(undefined8 *)(unaff_x24 + 0xa8) = in_stack_00000178;
              *(long *)(unaff_x24 + 0xa0) = in_stack_00000170;
              *(undefined8 *)(unaff_x24 + 0xb8) = in_stack_00000188;
              *(long *)(unaff_x24 + 0xb0) = in_stack_00000180;
              uVar8 = unaff_x23[0x16];
              *(undefined8 *)(unaff_x24 + 0x88) = unaff_x23[0x17];
              *(undefined8 *)(unaff_x24 + 0x80) = uVar8;
              *(long *)(unaff_x24 + 0x98) = in_stack_00000168;
              *(undefined8 *)(unaff_x24 + 0x90) = in_stack_00000160;
              uVar1 = *(long *)(unaff_x29 + -0x80) - *(long *)(unaff_x29 + -0x88);
              _cStack0000000000000150 = puVar11;
              in_stack_00000158 = puVar9;
              if (uVar1 == 0) goto LAB_1004dd500;
              in_stack_000002b0 = *(undefined8 **)(unaff_x29 + -0x70);
              thunk_FUN_1087e422c((undefined1 *)((long)in_stack_000002b0 + (uVar1 >> 6)),
                                  &stack0x000002b0,&UNK_10b23a190);
              FUN_100cbb248(&stack0x000000e0);
            }
            goto LAB_1004dd200;
          }
          if (puVar11 != (undefined8 *)0x8000000000000000) {
            in_stack_000002b0 = (undefined8 *)&stack0x00000410;
            _cStack0000000000000150 = puVar11;
            in_stack_00000158 = puVar9;
            thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002b0);
            goto LAB_1004dd1f4;
          }
          lVar10 = *(long *)(unaff_x29 + -0x78);
          *(undefined8 *)(unaff_x29 + -0x78) = 0;
          if (lVar10 == 0) goto LAB_1004dd274;
          FUN_10131d9dc(&stack0x000002b0);
          puVar11 = in_stack_000002b0;
          puVar9 = in_stack_000002b8;
          uVar8 = in_stack_000002c0;
          lVar10 = in_stack_000002c8;
          lVar7 = in_stack_000002d0;
          uVar12 = in_stack_000002d8;
          lVar3 = in_stack_000002e0;
          uVar13 = in_stack_000002e8;
          uVar14 = in_stack_000002f0;
          uVar15 = in_stack_000002f8;
          uVar16 = in_stack_00000300;
          uVar4 = in_stack_00000308;
          if (in_stack_000002b0 == (undefined8 *)0x8000000000000000) goto LAB_1004dd200;
        }
      } while( true );
    }
    thunk_FUN_108855c40(&stack0x000000c0,unaff_x29 + -0x61,&UNK_10b214248);
  }
LAB_1004dd200:
  FUN_100cbb07c(&stack0x00000360);
  lVar10 = in_stack_000000d8;
  puVar18 = in_stack_000000d0;
  if (unaff_w27 == 0x14) {
    if (in_stack_000000d8 == 0) {
      thunk_FUN_1087e422c(0,&UNK_10b22e858,&UNK_10b20a590);
      puVar18 = in_stack_000002b0;
    }
    else {
      lVar7 = FUN_1013638e4(in_stack_000000d0);
      puVar18 = in_stack_000002b0;
      if (lVar7 == 0) {
        if (lVar10 - 1U == 0) {
          puVar11 = (undefined8 *)0x0;
          uVar8 = 0x8000000000000005;
          goto LAB_1004dd930;
        }
        thunk_FUN_1087e422c((lVar10 - 1U & 0x7ffffffffffffff) + 1,&stack0x000002b0,&UNK_10b23a1b0);
        puVar18 = (undefined8 *)0x1;
      }
    }
  }
  else if (unaff_w27 == 0x15) {
    FUN_100f23ae4(&stack0x00000150,&stack0x000002b0);
    if (cStack0000000000000150 != '\x01') {
      if (cStack0000000000000151 != '\x02') {
LAB_1004dd274:
        FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b209338);
LAB_1004ddabc:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1004ddac0);
        (*pcVar5)();
      }
      in_stack_000000e0 = &UNK_108cb495d;
      in_stack_000000e8 = (undefined *)0x6;
      _cStack0000000000000150 = &stack0x000000e0;
      in_stack_00000158 = &DAT_100c7b3a0;
      thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000150);
    }
  }
  else {
    thunk_FUN_108855c40(&stack0x000000c0,unaff_x29 + -0x61,&UNK_10b213c48);
    puVar18 = in_stack_000002b0;
  }
  FUN_100cbb07c(&stack0x00000360);
  auVar17 = FUN_100eac3a4(&stack0x000000c0);
  puVar11 = auVar17._8_8_;
  if ((auVar17._0_8_ & 1) == 0) {
    uVar8 = 0x8000000000000006;
  }
  else {
    FUN_100cbb07c(&stack0x00000360);
    auVar17 = FUN_100eac1b4(&stack0x000000c0);
    puVar11 = auVar17._8_8_;
    if ((auVar17._0_8_ & 1) == 0) {
      uVar8 = 0x8000000000000007;
    }
    else {
      FUN_100cbb07c(&stack0x00000360);
      FUN_100eabb30(&stack0x000002b0,&stack0x000000c0);
      if (puVar18 == (undefined8 *)0x8000000000000000) {
        FUN_100cbb07c(&stack0x00000360);
        FUN_100ea70fc(&stack0x000002b0,&stack0x000000c0);
        FUN_100cbb07c(&stack0x00000360);
        uVar8 = thunk_FUN_1088561c0(&UNK_108cc4c21,0x42);
        FUN_100e077ec(&stack0x000000c0);
        unaff_x19[1] = uVar8;
        *unaff_x19 = 0x800000000000000a;
        FUN_100d5c778(&stack0x00000028);
        return;
      }
      uVar13 = *(undefined8 *)(unaff_x25 + 0xb8);
      uVar12 = *(undefined8 *)(unaff_x25 + 0xb0);
      uVar8 = *(undefined8 *)(unaff_x25 + 0xc0);
      unaff_x23[4] = *(undefined8 *)(unaff_x25 + 200);
      unaff_x23[3] = uVar8;
      unaff_x23[2] = uVar13;
      unaff_x23[1] = uVar12;
      in_stack_00000088 = unaff_x23[7];
      in_stack_00000080 = unaff_x23[6];
      uVar13 = unaff_x23[8];
      uVar12 = unaff_x23[0xb];
      uVar8 = unaff_x23[10];
      uVar15 = unaff_x23[0xd];
      uVar14 = unaff_x23[0xc];
      *(undefined8 *)(unaff_x24 + 0x38) = unaff_x23[9];
      *(undefined8 *)(unaff_x24 + 0x30) = uVar13;
      *(undefined8 *)(unaff_x24 + 0x48) = uVar12;
      *(undefined8 *)(unaff_x24 + 0x40) = uVar8;
      *(undefined8 *)(unaff_x24 + 0x58) = uVar15;
      *(undefined8 *)(unaff_x24 + 0x50) = uVar14;
      in_stack_00000068 = unaff_x23[3];
      in_stack_00000060 = unaff_x23[2];
      in_stack_00000078 = unaff_x23[5];
      in_stack_00000070 = unaff_x23[4];
      uVar8 = 0x8000000000000008;
    }
  }
LAB_1004dd930:
  FUN_100e077ec(&stack0x000000c0);
  uVar13 = *(undefined8 *)(unaff_x24 + 0x38);
  uVar12 = *(undefined8 *)(unaff_x24 + 0x30);
  uVar15 = *(undefined8 *)(unaff_x24 + 0x48);
  uVar14 = *(undefined8 *)(unaff_x24 + 0x40);
  unaff_x19[7] = in_stack_00000088;
  unaff_x19[6] = in_stack_00000080;
  unaff_x19[9] = uVar13;
  unaff_x19[8] = uVar12;
  uVar13 = *(undefined8 *)(unaff_x24 + 0x58);
  uVar12 = *(undefined8 *)(unaff_x24 + 0x50);
  unaff_x19[0xb] = uVar15;
  unaff_x19[10] = uVar14;
  unaff_x19[0xd] = uVar13;
  unaff_x19[0xc] = uVar12;
  unaff_x19[3] = in_stack_00000068;
  unaff_x19[2] = in_stack_00000060;
  unaff_x19[5] = in_stack_00000078;
  unaff_x19[4] = in_stack_00000070;
  *unaff_x19 = uVar8;
  unaff_x19[1] = puVar11;
  FUN_100d5c778(&stack0x00000028);
  uVar8 = unaff_x19[8];
  uVar13 = unaff_x19[0xb];
  uVar12 = unaff_x19[10];
  unaff_x23[9] = unaff_x19[9];
  unaff_x23[8] = uVar8;
  unaff_x23[0xb] = uVar13;
  unaff_x23[10] = uVar12;
  uVar8 = unaff_x19[0xc];
  unaff_x23[0xd] = unaff_x19[0xd];
  unaff_x23[0xc] = uVar8;
  uVar8 = *unaff_x19;
  uVar13 = unaff_x19[3];
  uVar12 = unaff_x19[2];
  unaff_x23[1] = unaff_x19[1];
  *unaff_x23 = uVar8;
  unaff_x23[3] = uVar13;
  unaff_x23[2] = uVar12;
  uVar13 = unaff_x19[4];
  uVar12 = unaff_x19[7];
  uVar8 = unaff_x19[6];
  unaff_x23[5] = unaff_x19[5];
  unaff_x23[4] = uVar13;
  unaff_x23[7] = uVar12;
  unaff_x23[6] = uVar8;
  if (in_stack_00000010 - in_stack_00000008 != 0) {
    uVar8 = thunk_FUN_1087e422c(in_stack_00000020 +
                                ((ulong)(in_stack_00000010 - in_stack_00000008) >> 6),
                                &stack0x000002b0,&UNK_10b23a190);
    *unaff_x19 = 0x800000000000000a;
    unaff_x19[1] = uVar8;
    func_0x000100df69f8(&stack0x00000360);
  }
  return;
}

