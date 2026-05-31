
/* WARNING: Removing unreachable block (ram,0x00010164dca8) */
/* WARNING: Removing unreachable block (ram,0x00010164dbfc) */
/* WARNING: Removing unreachable block (ram,0x00010164db64) */
/* WARNING: Removing unreachable block (ram,0x00010164db6c) */
/* WARNING: Removing unreachable block (ram,0x00010164dc98) */
/* WARNING: Removing unreachable block (ram,0x00010164d96c) */

undefined8 FUN_10164d024(void)

{
  ulong uVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar14;
  long lVar15;
  undefined1 uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long extraout_x9;
  long extraout_x9_00;
  long lVar20;
  byte *pbVar21;
  bool bVar22;
  long lVar23;
  ulong uVar24;
  long *unaff_x25;
  undefined1 *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  long *plStack0000000000000010;
  long in_stack_00000018;
  long *plStack0000000000000038;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  undefined8 *in_stack_00000090;
  undefined1 uStack0000000000000098;
  undefined6 uStack000000000000009a;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  ulong in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 *in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined *in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined *in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001d0;
  undefined4 in_stack_000001e0;
  undefined2 uStack00000000000001e4;
  undefined4 uStack00000000000001e6;
  int iStack00000000000001f0;
  long in_stack_000001f8;
  long in_stack_00000200;
  long in_stack_00000208;
  long in_stack_00000210;
  long in_stack_00000218;
  long in_stack_00000240;
  long in_stack_00000248;
  long in_stack_00000258;
  long in_stack_00000260;
  undefined8 in_stack_00000280;
  long in_stack_00000288;
  long in_stack_00000290;
  long in_stack_00000298;
  long in_stack_000002a0;
  undefined1 in_stack_000002a8;
  undefined7 in_stack_000002a9;
  undefined8 in_stack_000002b0;
  undefined7 in_stack_000002c1;
  undefined4 in_stack_000002c8;
  undefined8 in_stack_000003c8;
  undefined8 in_stack_000003d0;
  long in_stack_000003d8;
  undefined8 in_stack_000003e0;
  int in_stack_000003f0;
  undefined8 in_stack_00000460;
  undefined8 in_stack_00000468;
  undefined8 in_stack_00000470;
  undefined8 in_stack_00000478;
  undefined8 in_stack_00000480;
  undefined8 in_stack_00000488;
  char *pcVar13;
  
  lVar15 = _iStack00000000000001f0;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000001f0,s___pretty_format__108ac93b4,&stack0x00000058);
  lVar23 = *(long *)(in_stack_00000018 + 0xb8);
  if (lVar23 == *(long *)(in_stack_00000018 + 0xa8)) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE();
  }
  plVar17 = (long *)(*(long *)(in_stack_00000018 + 0xb0) + lVar23 * 0x18);
  *plVar17 = _iStack00000000000001f0;
  plVar17[1] = in_stack_000001f8;
  plVar17[2] = in_stack_00000200;
  uVar24 = lVar23 + 1;
  *(ulong *)(in_stack_00000018 + 0xb8) = uVar24;
  if (lVar23 == -1) {
    uVar6 = 8;
  }
  else {
    lVar8 = *(long *)(in_stack_00000018 + 0xb0);
    uVar6 = _malloc(uVar24 * 0x10);
    if (uVar6 == 0) {
      func_0x0001087c9084(8,uVar24 * 0x10);
      goto LAB_10164e0b0;
    }
    if ((uVar24 < 9) ||
       ((uVar6 < lVar8 + lVar23 * 0x18 + 0x18U && (lVar8 + 8U < uVar6 + lVar23 * 0x10 + 0x10)))) {
      lVar9 = 0;
    }
    else {
      uVar1 = 4;
      if ((uVar24 & 3) != 0) {
        uVar1 = uVar24 & 3;
      }
      lVar9 = uVar24 - uVar1;
      puVar11 = (undefined8 *)(lVar8 + 0x38);
      puVar12 = (undefined8 *)(uVar6 + 0x20);
      lVar19 = lVar9;
      do {
        uVar27 = puVar11[-5];
        uVar7 = puVar11[-3];
        uVar28 = puVar11[-2];
        uVar30 = *puVar11;
        uVar32 = puVar11[1];
        uVar31 = puVar11[3];
        uVar33 = puVar11[4];
        puVar12[-4] = puVar11[-6];
        puVar12[-3] = uVar27;
        puVar12[-2] = uVar7;
        puVar12[-1] = uVar28;
        *puVar12 = uVar30;
        puVar12[1] = uVar32;
        puVar12[2] = uVar31;
        puVar12[3] = uVar33;
        puVar11 = puVar11 + 0xc;
        puVar12 = puVar12 + 8;
        lVar19 = lVar19 + -4;
      } while (lVar19 != 0);
    }
    lVar23 = (lVar23 - lVar9) + 1;
    puVar11 = (undefined8 *)(uVar6 + lVar9 * 0x10 + 8);
    puVar12 = (undefined8 *)(lVar8 + lVar9 * 0x18 + 0x10);
    do {
      uVar7 = *puVar12;
      puVar11[-1] = puVar12[-1];
      *puVar11 = uVar7;
      puVar11 = puVar11 + 2;
      puVar12 = puVar12 + 3;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  *(ulong *)(in_stack_00000018 + 0xc0) = uVar24;
  *(ulong *)(in_stack_00000018 + 200) = uVar6;
  *(ulong *)(in_stack_00000018 + 0xd0) = uVar24;
  *(ulong *)(in_stack_00000018 + 0xe8) = uVar6;
  *(ulong *)(in_stack_00000018 + 0xf0) = uVar24;
  *(undefined8 *)(in_stack_00000018 + 0xf8) = *(undefined8 *)(in_stack_00000018 + 0x38);
  *(undefined8 *)(in_stack_00000018 + 0x100) = *(undefined8 *)(in_stack_00000018 + 0x40);
  *(undefined1 *)(in_stack_00000018 + 0x5b0) = 0;
  FUN_10085bb5c(&stack0x000001f0,in_stack_00000018 + 0xe8);
  if (_iStack00000000000001f0 == -0x7fffffffffffffff) {
    *unaff_x26 = 4;
    uVar16 = 3;
    uVar7 = 1;
    goto LAB_10164d97c;
  }
  lVar23 = *(long *)(unaff_x27 + 8);
  lVar9 = *(long *)(unaff_x27 + 0x20);
  lVar8 = *(long *)(unaff_x27 + 0x18);
  unaff_x25[9] = *(long *)(unaff_x27 + 0x10);
  unaff_x25[8] = lVar23;
  unaff_x25[0xb] = lVar9;
  unaff_x25[10] = lVar8;
  lVar23 = *(long *)(unaff_x27 + 0x28);
  unaff_x25[0xd] = *(long *)(unaff_x27 + 0x30);
  unaff_x25[0xc] = lVar23;
  FUN_100c9e158(in_stack_00000018 + 0xe8);
  if (_iStack00000000000001f0 == -0x8000000000000000) {
LAB_10164d204:
    if (*(long *)(in_stack_00000018 + 0xc0) != 0) {
      _free(*(undefined8 *)(in_stack_00000018 + 200));
    }
    lVar15 = *(long *)(in_stack_00000018 + 0xb0);
    lVar23 = *(long *)(in_stack_00000018 + 0xb8);
    if (lVar23 != 0) {
      puVar11 = (undefined8 *)(lVar15 + 8);
      do {
        if (puVar11[-1] != 0) {
          _free(*puVar11);
        }
        puVar11 = puVar11 + 3;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
    if (*(long *)(in_stack_00000018 + 0xa8) != 0) {
      _free(lVar15);
    }
    if (*(long *)(in_stack_00000018 + 0x90) != -0x8000000000000000 &&
        *(long *)(in_stack_00000018 + 0x90) != 0) {
      _free(*(undefined8 *)(in_stack_00000018 + 0x98));
    }
    if (*(long *)(in_stack_00000018 + 0x58) != 0) {
      _free(*(undefined8 *)(in_stack_00000018 + 0x60));
    }
    if (*(long *)(in_stack_00000018 + 0x70) != 0) {
      lVar23 = 0;
      uVar24 = 0;
      plStack0000000000000010 = (long *)0x8;
LAB_10164d298:
      _free(*(undefined8 *)(in_stack_00000018 + 0x78));
      goto LAB_10164d2a0;
    }
    uVar24 = 0;
    lVar23 = 0;
    *unaff_x26 = 1;
    plStack0000000000000010 = (long *)0x8;
  }
  else {
    unaff_x25[6] = unaff_x25[0xd];
    unaff_x25[5] = unaff_x25[0xc];
    unaff_x25[2] = unaff_x25[9];
    unaff_x25[1] = unaff_x25[8];
    unaff_x25[4] = unaff_x25[0xb];
    unaff_x25[3] = unaff_x25[10];
    if (in_stack_000003f0 != 0) {
      if (_iStack00000000000001f0 != 0) {
        _free(in_stack_000003c8);
      }
      if (in_stack_000003d8 != 0) {
        _free(in_stack_000003e0);
      }
      goto LAB_10164d204;
    }
    __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
              (unaff_x29 + -0xe0,in_stack_000003c8,in_stack_000003d0);
    *(undefined8 *)(unaff_x29 + -200) = 0;
    *(undefined8 *)(unaff_x29 + -0xc0) = 8;
    *(undefined8 *)(unaff_x29 + -0xb8) = 0;
    lVar8 = *(long *)(unaff_x29 + -0xd8);
    in_stack_00000060 = *(long *)(unaff_x29 + -0xd0);
    in_stack_00000058 = 0;
    in_stack_00000078 = 0;
    in_stack_00000088 = 0xa0000000a;
    in_stack_00000090 = (undefined8 *)CONCAT71(in_stack_00000090._1_7_,1);
    _uStack0000000000000098 = _uStack0000000000000098 & 0xffffffffffff0000;
    in_stack_00000068 = lVar8;
    in_stack_00000070 = in_stack_00000060;
    in_stack_00000080 = in_stack_00000060;
    do {
      lVar23 = in_stack_00000068;
      FUN_1011e0db8(&stack0x000001f0,&stack0x00000068);
      uVar24 = _uStack0000000000000098;
      if (iStack00000000000001f0 == 1) {
        lVar9 = in_stack_00000200 - in_stack_00000058;
        lVar19 = in_stack_00000200;
      }
      else {
        if ((_uStack0000000000000098 & 0x100) != 0) break;
        _uStack0000000000000098 = CONCAT11(1,uStack0000000000000098);
        if (((uVar24 & 1) == 0) && (in_stack_00000060 == in_stack_00000058)) break;
        lVar9 = in_stack_00000060 - in_stack_00000058;
        lVar19 = in_stack_00000058;
        lVar23 = in_stack_00000068;
      }
      lVar23 = lVar23 + in_stack_00000058;
      lVar29 = lVar9;
      if ((lVar9 != 0) && (lVar14 = lVar9 + -1, *(char *)(lVar23 + lVar14) == '\n')) {
        if (lVar14 == 0) {
          lVar20 = 0;
        }
        else {
          lVar20 = lVar23;
          if (*(char *)(lVar23 + lVar9 + -2) != '\r') {
            lVar20 = 0;
          }
        }
        lVar29 = lVar14;
        if (lVar20 != 0) {
          lVar29 = lVar9 + -2;
          lVar23 = lVar20;
        }
      }
      in_stack_00000058 = lVar19;
      if (lVar23 == 0) break;
      _iStack00000000000001f0 = 0;
      in_stack_00000210 = 0;
      FUN_1011e0db8(unaff_x29 + -0xb0,&stack0x00000200);
      bVar5 = *(int *)(unaff_x29 + -0xb0) != 1;
      lVar9 = lVar29;
      if (!bVar5) {
        _iStack00000000000001f0 = *(long *)(unaff_x29 + -0xa0);
        lVar9 = *(long *)(unaff_x29 + -0xa8);
      }
      lVar19 = lVar23;
      if (lVar23 == 0) {
        lVar19 = 1;
        lVar9 = 0;
      }
      auVar34 = FUN_100e8d6f8(lVar19,lVar9);
      lVar9 = auVar34._8_8_;
      if (bVar5) {
        lVar19 = 0;
        lVar14 = extraout_x9;
        bVar22 = true;
      }
      else {
        FUN_1011e0db8(unaff_x29 + -0xb0,&stack0x00000200);
        if (*(int *)(unaff_x29 + -0xb0) == 1) {
          lVar14 = *(long *)(unaff_x29 + -0xa8) - _iStack00000000000001f0;
          lVar19 = lVar23 + _iStack00000000000001f0;
          _iStack00000000000001f0 = *(long *)(unaff_x29 + -0xa0);
          bVar22 = bVar5;
        }
        else {
          bVar22 = true;
          if (bVar5) {
            lVar19 = 0;
            lVar14 = extraout_x9_00;
          }
          else {
            bVar5 = true;
            lVar14 = lVar29 - _iStack00000000000001f0;
            lVar19 = lVar23 + _iStack00000000000001f0;
          }
        }
      }
      if (lVar19 == 0) {
        lVar19 = 1;
        lVar14 = 0;
      }
      auVar35 = FUN_100e8d6f8(lVar19,lVar14);
      uVar24 = auVar35._8_8_;
      pcVar13 = auVar35._0_8_;
      if (bVar22) {
LAB_10164dca4:
        auVar36 = FUN_100e8d6f8(1,0);
      }
      else {
        FUN_1011e0db8(unaff_x29 + -0xb0,&stack0x00000200);
        if (*(int *)(unaff_x29 + -0xb0) == 1) {
          lVar14 = *(long *)(unaff_x29 + -0xa0);
          lVar20 = *(long *)(unaff_x29 + -0xa8) - _iStack00000000000001f0;
          lVar19 = lVar23 + _iStack00000000000001f0;
          if (lVar19 == 0) {
            lVar19 = 1;
            lVar20 = 0;
          }
          auVar36 = FUN_100e8d6f8(lVar19,lVar20);
          _iStack00000000000001f0 = lVar14;
        }
        else {
          if (bVar5) goto LAB_10164dca4;
          lVar14 = lVar29 - _iStack00000000000001f0;
          lVar19 = lVar23 + _iStack00000000000001f0;
          if (lVar19 == 0) {
            lVar19 = 1;
            lVar14 = 0;
          }
          auVar36 = FUN_100e8d6f8(lVar19,lVar14);
        }
      }
      if (lVar9 != 0) {
        lVar19 = auVar36._8_8_;
        if (uVar24 != 0) {
          cVar2 = *pcVar13;
          lVar14 = uVar24 - 1;
          if (lVar14 == 0) {
            lVar10 = 0;
            if ((cVar2 != '+') && (cVar2 != '-')) {
              auVar35._8_8_ = 1;
              auVar35._0_8_ = pcVar13;
LAB_10164dd0c:
              lVar10 = 0;
              do {
                pbVar21 = auVar35._0_8_;
                uVar3 = *pbVar21 - 0x30;
                if (9 < uVar3) goto LAB_10164ddb0;
                lVar10 = lVar10 * 10 + (ulong)uVar3;
                lVar14 = auVar35._8_8_ + -1;
                auVar35._8_8_ = lVar14;
                auVar35._0_8_ = pbVar21 + 1;
              } while (lVar14 != 0);
            }
          }
          else if (cVar2 == '-') {
            if (uVar24 < 0x11) {
              lVar10 = 0;
              pbVar21 = (byte *)(pcVar13 + 1);
              do {
                if (9 < *pbVar21 - 0x30) goto LAB_10164ddb0;
                lVar10 = lVar10 * 10 - (ulong)(*pbVar21 - 0x30);
                lVar14 = lVar14 + -1;
                pbVar21 = pbVar21 + 1;
              } while (lVar14 != 0);
            }
            else {
              lVar20 = 0;
              pbVar21 = (byte *)(pcVar13 + 1);
              do {
                lVar10 = lVar20;
                if (lVar14 == 0) break;
                lVar18 = lVar20 * 10;
                uVar3 = *pbVar21 - 0x30;
                if (9 < uVar3) goto LAB_10164ddb0;
                lVar10 = 0;
                if (SUB168(SEXT816(lVar20) * SEXT816(10),8) != lVar18 >> 0x3f) break;
                lVar20 = lVar18 - (ulong)uVar3;
                lVar14 = lVar14 + -1;
                pbVar21 = pbVar21 + 1;
              } while (!SBORROW8(lVar18,(ulong)uVar3));
            }
          }
          else {
            if (cVar2 == '+') {
              auVar35._8_8_ = lVar14;
              auVar35._0_8_ = pcVar13 + 1;
            }
            if (auVar35._8_8_ < 0x10) goto LAB_10164dd0c;
            lVar10 = 0;
            do {
              pbVar21 = auVar35._0_8_;
              if (auVar35._8_8_ == 0) goto LAB_10164ddb4;
              lVar14 = lVar10 * 10;
              uVar3 = *pbVar21 - 0x30;
              if ((9 < uVar3) || (SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar14 >> 0x3f)) break;
              lVar10 = lVar14 + (ulong)uVar3;
              auVar35._8_8_ = auVar35._8_8_ + -1;
              auVar35._0_8_ = pbVar21 + 1;
            } while (!SCARRY8(lVar14,(ulong)uVar3));
LAB_10164ddb0:
            lVar10 = 0;
          }
LAB_10164ddb4:
          lVar14 = _malloc(lVar9);
          if (lVar14 == 0) {
            func_0x0001087c9084(1,lVar9);
            goto LAB_10164e0b0;
          }
          _memcpy(lVar14,auVar34._0_8_,lVar9);
          if (lVar19 == 0) {
            lVar20 = 1;
          }
          else {
            lVar20 = _malloc(lVar19);
            if (lVar20 == 0) {
              func_0x0001087c9084(1,lVar19);
              goto LAB_10164e0b0;
            }
          }
          _memcpy(lVar20,auVar36._0_8_,lVar19);
          *(long *)(unaff_x29 + -0xb0) = lVar9;
          *(long *)(unaff_x29 + -0xa8) = lVar14;
          *(long *)(unaff_x29 + -0x88) = lVar19;
          *(long *)(unaff_x29 + -0x80) = lVar10;
          *(long *)(unaff_x29 + -0xa0) = lVar9;
          *(long *)(unaff_x29 + -0x98) = lVar19;
          *(long *)(unaff_x29 + -0x90) = lVar20;
          lVar9 = *(long *)(unaff_x29 + -0xb8);
          if (lVar9 == *(long *)(unaff_x29 + -200)) {
            func_0x000108972cfc(unaff_x29 + -200);
          }
          puVar11 = (undefined8 *)(*(long *)(unaff_x29 + -0xc0) + lVar9 * 0x38);
          puVar11[1] = in_stack_00000468;
          *puVar11 = in_stack_00000460;
          puVar11[3] = in_stack_00000478;
          puVar11[2] = in_stack_00000470;
          puVar11[5] = in_stack_00000488;
          puVar11[4] = in_stack_00000480;
          puVar11[6] = *(undefined8 *)(unaff_x29 + -0x80);
          *(long *)(unaff_x29 + -0xb8) = lVar9 + 1;
        }
      }
      in_stack_000001f8 = lVar29;
      in_stack_00000200 = lVar23;
      in_stack_00000208 = lVar29;
      in_stack_00000218 = lVar29;
    } while ((_uStack0000000000000098 & 0x100) == 0);
    lVar23 = *(long *)(unaff_x29 + -200);
    plStack0000000000000010 = *(long **)(unaff_x29 + -0xc0);
    uVar24 = *(ulong *)(unaff_x29 + -0xb8);
    if ((*(ulong *)(unaff_x29 + -0xe0) & 0x7fffffffffffffff) != 0) {
      _free(lVar8);
    }
    if (lVar15 != 0) {
      _free(in_stack_000003c8);
    }
    unaff_x25 = (long *)&stack0x000003c0;
    if (in_stack_000003d8 != 0) {
      _free(in_stack_000003e0);
    }
    if (*(long *)(in_stack_00000018 + 0xc0) != 0) {
      _free(*(undefined8 *)(in_stack_00000018 + 200));
    }
    lVar15 = *(long *)(in_stack_00000018 + 0xb0);
    lVar8 = *(long *)(in_stack_00000018 + 0xb8);
    if (lVar8 != 0) {
      puVar11 = (undefined8 *)(lVar15 + 8);
      do {
        if (puVar11[-1] != 0) {
          _free(*puVar11);
        }
        puVar11 = puVar11 + 3;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (*(long *)(in_stack_00000018 + 0xa8) != 0) {
      _free(lVar15);
    }
    if (*(long *)(in_stack_00000018 + 0x90) != -0x8000000000000000 &&
        *(long *)(in_stack_00000018 + 0x90) != 0) {
      _free(*(undefined8 *)(in_stack_00000018 + 0x98));
    }
    if (*(long *)(in_stack_00000018 + 0x58) != 0) {
      _free(*(undefined8 *)(in_stack_00000018 + 0x60));
    }
    if (*(long *)(in_stack_00000018 + 0x70) != 0) goto LAB_10164d298;
LAB_10164d2a0:
    uVar7 = 1;
    *unaff_x26 = 1;
    if (lVar23 == -0x8000000000000000) {
      uVar16 = 3;
      goto LAB_10164d97c;
    }
  }
  FUN_100e5e18c(in_stack_00000050);
  lVar15 = uVar24 * 0xe8;
  if (uVar24 < 0x8d3dcb08d3dcb1) {
    if (lVar15 == 0) {
      uVar6 = 0;
      lVar8 = 8;
    }
    else {
      lVar8 = _malloc(lVar15);
      uVar6 = uVar24;
      if (lVar8 == 0) {
        uVar7 = 8;
        goto LAB_10164d300;
      }
    }
    *(ulong *)(unaff_x29 + -0xe0) = uVar6;
    *(long *)(unaff_x29 + -0xd8) = lVar8;
    *(undefined8 *)(unaff_x29 + -0xd0) = 0;
    plStack0000000000000038 = plStack0000000000000010;
    plVar17 = plStack0000000000000010;
    if (uVar24 != 0) {
      do {
        plStack0000000000000038 = plVar17 + 7;
        lVar15 = *plVar17;
        lVar9 = plVar17[2];
        lVar8 = plVar17[1];
        lVar19 = plVar17[3];
        lVar14 = plVar17[6];
        lVar29 = plVar17[5];
        unaff_x25[3] = plVar17[4];
        unaff_x25[2] = lVar19;
        unaff_x25[5] = lVar14;
        unaff_x25[4] = lVar29;
        unaff_x25[1] = lVar9;
        *unaff_x25 = lVar8;
        if (lVar15 == -0x8000000000000000) break;
        *(long *)(unaff_x29 + -0xb0) = lVar15;
        lVar9 = unaff_x25[3];
        lVar8 = unaff_x25[2];
        lVar19 = unaff_x25[4];
        *(long *)(unaff_x29 + -0x80) = unaff_x25[5];
        *(long *)(unaff_x29 + -0x88) = lVar19;
        lVar29 = unaff_x25[1];
        lVar19 = *unaff_x25;
        *(long *)(unaff_x29 + -0x90) = lVar9;
        *(long *)(unaff_x29 + -0x98) = lVar8;
        *(long *)(unaff_x29 + -0xa0) = lVar29;
        *(long *)(unaff_x29 + -0xa8) = lVar19;
        uVar7 = *(undefined8 *)(unaff_x29 + -0x90);
        lVar8 = *(long *)(unaff_x29 + -0x88);
        if (lVar8 == 0) {
          lVar9 = 1;
        }
        else {
          lVar9 = _malloc(lVar8);
          if (lVar9 == 0) {
            func_0x0001087c9084(1,lVar8);
            goto LAB_10164e0b0;
          }
        }
        _memcpy(lVar9,uVar7,lVar8);
        *(long *)(unaff_x29 + -200) = lVar8;
        *(long *)(unaff_x29 + -0xc0) = lVar9;
        *(long *)(unaff_x29 + -0xb8) = lVar8;
        uVar27 = *(undefined8 *)(unaff_x29 + -0xa8);
        lVar8 = *(long *)(unaff_x29 + -0xa0);
        if (lVar8 == 0) {
          lVar9 = 1;
        }
        else {
          lVar9 = _malloc(lVar8);
          if (lVar9 == 0) {
            func_0x0001087c9084(1,lVar8);
            goto LAB_10164e0b0;
          }
        }
        _memcpy(lVar9,uVar27,lVar8);
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000058,s__108acc73f,&stack0x000001f0);
        lVar20 = in_stack_00000068;
        lVar14 = in_stack_00000060;
        lVar29 = in_stack_00000058;
        uVar28 = *(undefined8 *)(unaff_x29 + -0xc0);
        lVar19 = *(long *)(unaff_x29 + -0xb8);
        if (lVar19 == 0) {
          lVar10 = 1;
        }
        else {
          lVar10 = _malloc(lVar19);
          if (lVar10 == 0) {
            func_0x0001087c9084(1,lVar19);
            goto LAB_10164e0b0;
          }
        }
        _memcpy(lVar10,uVar28,lVar19);
        puVar11 = (undefined8 *)_malloc(0x10);
        if (puVar11 == (undefined8 *)0x0) {
          func_0x0001087c906c(8,0x10);
          goto LAB_10164e0b0;
        }
        lVar26 = *(long *)(unaff_x29 + -0xc0);
        lVar25 = *(long *)(unaff_x29 + -200);
        lVar18 = *(long *)(unaff_x29 + -0xb8);
        plVar17 = (long *)_malloc(0x30);
        if (plVar17 == (long *)0x0) {
          func_0x0001087c906c(8,0x30);
          goto LAB_10164e0b0;
        }
        plVar17[1] = lVar9;
        *plVar17 = lVar8;
        plVar17[3] = lVar25;
        plVar17[2] = lVar8;
        plVar17[5] = lVar18;
        plVar17[4] = lVar26;
        *puVar11 = plVar17;
        puVar11[1] = &UNK_10b250478;
        _iStack00000000000001f0 = 0;
        in_stack_000001f8 = 1;
        in_stack_00000200 = 0;
        in_stack_00000208 = 0;
        in_stack_000002a8 = 2;
        in_stack_000002b0 = 0;
        in_stack_00000210 = 8;
        in_stack_00000218 = 0;
        in_stack_00000280 = 0x8000000000000000;
        in_stack_00000078 = 8;
        in_stack_00000070 = 0;
        in_stack_00000080 = 0;
        in_stack_00000110 = CONCAT71(in_stack_000002a9,2);
        in_stack_00000128 = CONCAT71(in_stack_000002c1,0x1b);
        in_stack_000000a0 = -0x8000000000000000;
        in_stack_000000b8 = -0x8000000000000000;
        in_stack_00000088 = 1;
        _uStack0000000000000098 = 1;
        in_stack_00000130 = CONCAT44(0x1000000,in_stack_000002c8);
        in_stack_00000138 = in_stack_00000138 & 0xffffffffffffff00;
        in_stack_000000d0 = lVar29;
        in_stack_000000d8 = lVar14;
        in_stack_00000118 = 0;
        in_stack_000000e0 = lVar20;
        in_stack_000000e8 = -0x8000000000000000;
        lVar8 = *(long *)(unaff_x29 + -0xd0);
        in_stack_00000058 = lVar19;
        in_stack_00000060 = lVar10;
        in_stack_00000068 = lVar19;
        in_stack_00000090 = puVar11;
        in_stack_000000a8 = in_stack_00000240;
        in_stack_000000b0 = in_stack_00000248;
        in_stack_000000c0 = in_stack_00000258;
        in_stack_000000c8 = (undefined8 *)in_stack_00000260;
        in_stack_000000f0 = in_stack_00000288;
        in_stack_000000f8 = in_stack_00000290;
        in_stack_00000100 = in_stack_00000298;
        in_stack_00000108 = in_stack_000002a0;
        if (lVar8 == *(long *)(unaff_x29 + -0xe0)) {
          func_0x0001089ecef8(unaff_x29 + -0xe0);
        }
        plVar17 = (long *)(*(long *)(unaff_x29 + -0xd8) + lVar8 * 0xe8);
        plVar17[0x17] = in_stack_00000110;
        plVar17[0x16] = in_stack_00000108;
        plVar17[0x19] = in_stack_00000120;
        plVar17[0x18] = in_stack_00000118;
        plVar17[0x1b] = in_stack_00000130;
        plVar17[0x1a] = in_stack_00000128;
        plVar17[0x1c] = in_stack_00000138;
        plVar17[0xf] = in_stack_000000d0;
        plVar17[0xe] = (long)in_stack_000000c8;
        plVar17[0x11] = in_stack_000000e0;
        plVar17[0x10] = in_stack_000000d8;
        plVar17[0x13] = in_stack_000000f0;
        plVar17[0x12] = in_stack_000000e8;
        plVar17[0x15] = in_stack_00000100;
        plVar17[0x14] = in_stack_000000f8;
        plVar17[7] = (long)in_stack_00000090;
        plVar17[6] = in_stack_00000088;
        plVar17[9] = in_stack_000000a0;
        plVar17[8] = _uStack0000000000000098;
        plVar17[0xb] = in_stack_000000b0;
        plVar17[10] = in_stack_000000a8;
        plVar17[0xd] = in_stack_000000c0;
        plVar17[0xc] = in_stack_000000b8;
        plVar17[1] = in_stack_00000060;
        *plVar17 = in_stack_00000058;
        plVar17[3] = in_stack_00000070;
        plVar17[2] = in_stack_00000068;
        plVar17[5] = in_stack_00000080;
        plVar17[4] = in_stack_00000078;
        *(long *)(unaff_x29 + -0xd0) = lVar8 + 1;
        FUN_100cdd63c(&stack0x00000220);
        unaff_x25 = (long *)&stack0x000003c0;
        if (lVar15 != 0) {
          _free(uVar27);
        }
        if (*(long *)(unaff_x29 + -0x98) != 0) {
          _free(uVar7);
        }
        plVar17 = plStack0000000000000038;
      } while (plStack0000000000000038 != plStack0000000000000010 + uVar24 * 7);
    }
    uVar24 = (long)(plStack0000000000000010 + uVar24 * 7) - (long)plStack0000000000000038;
    if (uVar24 != 0) {
      uVar24 = uVar24 / 0x38;
      plStack0000000000000038 = plStack0000000000000038 + 4;
      do {
        if (plStack0000000000000038[-4] != 0) {
          _free(plStack0000000000000038[-3]);
        }
        if (plStack0000000000000038[-1] != 0) {
          _free(*plStack0000000000000038);
        }
        plStack0000000000000038 = plStack0000000000000038 + 7;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    if (lVar23 != 0) {
      _free(plStack0000000000000010);
    }
    uVar7 = *(undefined8 *)(in_stack_00000018 + 0x18);
    puVar11 = (undefined8 *)_malloc(0x19);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0x19);
    }
    else {
      puVar11[1] = 0x2074696d6d6f6320;
      *puVar11 = 0x61207463656c6553;
      *(undefined8 *)((long)puVar11 + 0x11) = 0x776569766572206f;
      *(undefined8 *)((long)puVar11 + 9) = 0x742074696d6d6f63;
      __ZN9codex_tui11bottom_pane12popup_consts24standard_popup_hint_line17he433a102d0f5721dE
                (&stack0x000001f0);
      unaff_x25[0x15] = in_stack_000001f8;
      unaff_x25[0x14] = _iStack00000000000001f0;
      unaff_x25[0x17] = in_stack_00000208;
      unaff_x25[0x16] = in_stack_00000200;
      unaff_x25[0x19] = in_stack_00000218;
      unaff_x25[0x18] = in_stack_00000210;
      unaff_x25[1] = unaff_x25[0xf];
      *unaff_x25 = unaff_x25[0xe];
      puVar12 = (undefined8 *)_malloc(0x16);
      if (puVar12 != (undefined8 *)0x0) {
        puVar12[1] = 0x6320686372616573;
        *puVar12 = 0x206f742065707954;
        in_stack_000000d8 = 0x8000000000000000;
        in_stack_000000f0 = 0x8000000000000000;
        in_stack_00000110 = CONCAT71(in_stack_000002a9,in_stack_000002a8);
        in_stack_00000138 = unaff_x25[0x17];
        in_stack_00000130 = unaff_x25[0x16];
        in_stack_00000148 = unaff_x25[0x19];
        in_stack_00000140 = unaff_x25[0x18];
        in_stack_00000128 = unaff_x25[0x15];
        in_stack_00000120 = unaff_x25[0x14];
        *(undefined8 *)((long)puVar12 + 0xe) = 0x7374696d6d6f6320;
        in_stack_00000088 = 0;
        in_stack_000000a0 = *(undefined8 *)(unaff_x29 + -0xd0);
        in_stack_000000d0 = 0x19;
        in_stack_00000080 = 8;
        in_stack_00000078 = 0;
        _uStack0000000000000098 = unaff_x25[0xf];
        in_stack_00000090 = (undefined8 *)unaff_x25[0xe];
        in_stack_000000b8 = 0;
        in_stack_000000c0 = 0x19;
        in_stack_000000b0 = 8;
        in_stack_000000a8 = 0;
        in_stack_00000150 = 0x8000000000000000;
        in_stack_00000168 = 0x16;
        in_stack_00000178 = 0x16;
        in_stack_00000180 = 1;
        in_stack_00000188 = &UNK_10b36b5e8;
        in_stack_00000058 = 0;
        in_stack_00000068 = 0;
        in_stack_00000190 = 1;
        in_stack_00000198 = &UNK_10b36b5e8;
        in_stack_000001a0 = 0;
        in_stack_000001e0 = 0;
        uStack00000000000001e4 = 0;
        uStack00000000000001e6 = 1;
        in_stack_000001b0 = 0;
        in_stack_000001c0 = 0;
        in_stack_000001d0 = 0;
        in_stack_000000c8 = puVar11;
        in_stack_000000e8 = in_stack_00000280;
        in_stack_00000118 = in_stack_000002b0;
        in_stack_00000170 = puVar12;
        __ZN9codex_tui11bottom_pane10BottomPane19show_selection_view17h0090d0eaa43fb00cE
                  (uVar7,&stack0x00000058);
        lVar15 = 1;
        lVar23 = 8;
        while (lVar15 = lVar15 + -1, lVar15 != 0) {
          FUN_100e46760(lVar23);
          lVar23 = lVar23 + 0xe8;
        }
        uVar7 = 0;
        uVar16 = 1;
LAB_10164d97c:
        *(undefined1 *)(in_stack_00000018 + 0x5b8) = uVar16;
        return uVar7;
      }
      func_0x0001087c9084(1,0x16);
    }
  }
  else {
    uVar7 = 0;
LAB_10164d300:
    func_0x0001087c9084(uVar7,lVar15);
  }
LAB_10164e0b0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10164e0b4);
  (*pcVar4)();
}

