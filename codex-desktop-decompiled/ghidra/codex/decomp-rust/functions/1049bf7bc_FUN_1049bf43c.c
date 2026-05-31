
/* WARNING: Possible PIC construction at 0x0001049c0634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001049c0638) */
/* WARNING: Removing unreachable block (ram,0x0001049c066c) */

void FUN_1049bf43c(ulong *param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  byte bVar2;
  code *pcVar3;
  ulong **ppuVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined1 uVar15;
  long extraout_x10;
  undefined4 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long *unaff_x22;
  ulong uVar22;
  undefined4 uVar23;
  long *unaff_x23;
  long unaff_x24;
  long lVar24;
  undefined8 uVar25;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  ulong uVar26;
  ulong unaff_x27;
  long *plVar27;
  undefined8 *puVar28;
  ulong uVar29;
  ulong unaff_x28;
  long *plVar30;
  undefined1 *puVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  ulong *puStack_140;
  long lStack_138;
  ulong uStack_130;
  ulong uStack_128;
  long lStack_120;
  ulong uStack_118;
  ulong uStack_110;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  puVar31 = &stack0xfffffffffffffff0;
  uStack_128 = param_3;
  puStack_140 = param_1;
  if (param_3 == 0) {
    uStack_118 = 0;
    uStack_110 = 8;
  }
  else {
    lVar20 = param_3 * 0x98;
    uVar22 = param_3;
    lStack_138 = param_2;
    uStack_130 = _malloc(lVar20);
    if (uStack_130 == 0) {
      puVar8 = (undefined1 *)func_0x0001087c9084(8,lVar20);
      FUN_1049a8afc(&uStack_118);
      __Unwind_Resume(puVar8);
      uVar32 = 0x1049bf6b4;
      auVar34 = func_0x000108a07bc4();
      ppuVar4 = &puStack_140;
SUB_1049bf6b4:
      lVar24 = auVar34._8_8_;
      puVar12 = auVar34._0_8_;
      *(ulong *)((long)ppuVar4 + -0x60) = unaff_x28;
      *(ulong *)((long)ppuVar4 + -0x58) = unaff_x27;
      *(undefined8 **)((long)ppuVar4 + -0x50) = unaff_x26;
      *(undefined8 **)((long)ppuVar4 + -0x48) = unaff_x25;
      *(long *)((long)ppuVar4 + -0x40) = unaff_x24;
      *(long **)((long)ppuVar4 + -0x38) = unaff_x23;
      *(long **)((long)ppuVar4 + -0x30) = unaff_x22;
      *(ulong *)((long)ppuVar4 + -0x28) = param_3;
      *(long *)((long)ppuVar4 + -0x20) = lVar20;
      *(undefined1 **)((long)ppuVar4 + -0x18) = puVar8;
      *(undefined1 **)((long)ppuVar4 + -0x10) = puVar31;
      *(undefined8 *)((long)ppuVar4 + -8) = uVar32;
      if (uVar22 != 0) {
        lVar21 = uVar22 * 0x18;
        uVar26 = uVar22;
        lVar20 = _malloc(lVar21);
        if (lVar20 == 0) {
          uVar32 = func_0x0001087c9084(8,lVar21);
          *(undefined8 **)((long)ppuVar4 + -0x68) = unaff_x26;
          FUN_1049a8794((undefined1 *)((long)ppuVar4 + -0x78));
          auVar34 = __Unwind_Resume(uVar32);
          plVar19 = auVar34._8_8_;
          *(ulong *)((long)ppuVar4 + -0xe0) = unaff_x28;
          *(ulong *)((long)ppuVar4 + -0xd8) = unaff_x27;
          *(undefined8 **)((long)ppuVar4 + -0xd0) = unaff_x26;
          *(undefined8 **)((long)ppuVar4 + -200) = unaff_x25;
          *(long *)((long)ppuVar4 + -0xc0) = unaff_x24;
          *(long **)((long)ppuVar4 + -0xb8) = unaff_x23;
          *(long *)((long)ppuVar4 + -0xb0) = lVar21;
          *(long *)((long)ppuVar4 + -0xa8) = lVar24;
          *(undefined8 **)((long)ppuVar4 + -0xa0) = puVar12;
          *(undefined8 *)((long)ppuVar4 + -0x98) = uVar32;
          *(undefined1 **)((long)ppuVar4 + -0x90) = (undefined1 *)((long)ppuVar4 + -0x10);
          *(undefined8 *)((long)ppuVar4 + -0x88) = 0x1049bf7bc;
          *(long *)((long)ppuVar4 + -0x108) = auVar34._0_8_;
          if (uVar26 != 0) {
            lVar24 = uVar26 * 0x28;
            uVar22 = uVar26;
            lVar20 = _malloc(lVar24);
            if (lVar20 == 0) {
              uVar32 = func_0x0001087c9084(8,lVar24);
              *(undefined8 **)((long)ppuVar4 + -0xe8) = unaff_x26;
              FUN_1049a8234((undefined1 *)((long)ppuVar4 + -0xf8));
              auVar34 = __Unwind_Resume(uVar32);
              puVar17 = auVar34._8_8_;
              *(ulong *)((long)ppuVar4 + -0x170) = unaff_x28;
              *(ulong *)((long)ppuVar4 + -0x168) = unaff_x27;
              *(undefined8 **)((long)ppuVar4 + -0x160) = unaff_x26;
              *(ulong *)((long)ppuVar4 + -0x158) = uVar26;
              *(long *)((long)ppuVar4 + -0x150) = unaff_x24;
              *(long **)((long)ppuVar4 + -0x148) = unaff_x23;
              *(long *)((long)ppuVar4 + -0x140) = lVar24;
              *(long **)((long)ppuVar4 + -0x138) = plVar19;
              *(undefined8 **)((long)ppuVar4 + -0x130) = puVar12;
              *(undefined8 *)((long)ppuVar4 + -0x128) = uVar32;
              *(undefined1 **)((long)ppuVar4 + -0x120) = (undefined1 *)((long)ppuVar4 + -0x90);
              *(undefined8 *)((long)ppuVar4 + -0x118) = 0x1049bf8fc;
              *(long *)((long)ppuVar4 + -0x1b0) = auVar34._0_8_;
              if (uVar22 != 0) {
                lVar20 = uVar22 << 5;
                uVar13 = uVar22;
                puVar10 = (undefined8 *)_malloc(lVar20);
                if (puVar10 == (undefined8 *)0x0) {
                  uVar32 = func_0x0001087c9084(8,lVar20);
                  *(undefined8 **)((long)ppuVar4 + -0x198) = unaff_x26;
                  FUN_1049a8448((undefined1 *)((long)ppuVar4 + -0x1a8));
                  uVar32 = __Unwind_Resume(uVar32);
                  *(undefined8 **)((long)ppuVar4 + -0x198) = unaff_x26;
                  FUN_1049a8448((undefined1 *)((long)ppuVar4 + -0x1a8));
                  auVar34 = __Unwind_Resume(uVar32);
                  *(ulong *)((long)ppuVar4 + -0x210) = unaff_x28;
                  *(ulong *)((long)ppuVar4 + -0x208) = unaff_x27;
                  *(undefined8 **)((long)ppuVar4 + -0x200) = unaff_x26;
                  *(ulong *)((long)ppuVar4 + -0x1f8) = uVar26;
                  *(long *)((long)ppuVar4 + -0x1f0) = unaff_x24;
                  *(undefined8 **)((long)ppuVar4 + -0x1e8) = puVar17;
                  *(long *)((long)ppuVar4 + -0x1e0) = lVar24;
                  *(long *)((long)ppuVar4 + -0x1d8) = lVar20;
                  *(undefined8 **)((long)ppuVar4 + -0x1d0) = puVar12;
                  *(undefined8 *)((long)ppuVar4 + -0x1c8) = uVar32;
                  *(undefined1 **)((long)ppuVar4 + -0x1c0) = (undefined1 *)((long)ppuVar4 + -0x120);
                  *(undefined8 *)((long)ppuVar4 + -0x1b8) = 0x1049bfac0;
                  *(long *)((long)ppuVar4 + -0x270) = auVar34._0_8_;
                  if (uVar13 != 0) {
                    lVar21 = uVar13 * 0x50;
                    uVar22 = uVar13;
                    lVar20 = _malloc(lVar21);
                    if (lVar20 == 0) {
                      uVar32 = func_0x0001087c9084(8,lVar21);
                      uVar25 = *(undefined8 *)((long)ppuVar4 + -0x238);
                      if (puVar17 != (undefined8 *)0x0) {
                        _free(uVar25);
                        *(long *)((long)ppuVar4 + -0x218) = lVar24;
                        FUN_1049a88d0((undefined1 *)((long)ppuVar4 + -0x228));
                        uVar32 = __Unwind_Resume(uVar32);
                      }
                      *(long *)((long)ppuVar4 + -0x218) = lVar24;
                      FUN_1049a88d0((undefined1 *)((long)ppuVar4 + -0x228));
                      auVar35 = __Unwind_Resume(uVar32);
                      uVar13 = auVar35._8_8_;
                      puVar12 = auVar35._0_8_;
                      *(ulong *)((long)ppuVar4 + -0x2d0) = unaff_x28;
                      *(ulong *)((long)ppuVar4 + -0x2c8) = unaff_x27;
                      *(undefined8 **)((long)ppuVar4 + -0x2c0) = unaff_x26;
                      *(ulong *)((long)ppuVar4 + -0x2b8) = uVar26;
                      *(undefined8 *)((long)ppuVar4 + -0x2b0) = uVar25;
                      *(undefined8 **)((long)ppuVar4 + -0x2a8) = puVar17;
                      *(long *)((long)ppuVar4 + -0x2a0) = lVar24;
                      *(long *)((long)ppuVar4 + -0x298) = lVar21;
                      *(long *)((long)ppuVar4 + -0x290) = auVar34._8_8_;
                      *(undefined8 *)((long)ppuVar4 + -0x288) = uVar32;
                      *(undefined1 **)((long)ppuVar4 + -0x280) =
                           (undefined1 *)((long)ppuVar4 + -0x1c0);
                      *(code **)((long)ppuVar4 + -0x278) = FUN_1049bff00;
                      if (uVar22 != 0) {
                        lVar24 = uVar22 * 0x18;
                        uVar29 = uVar22;
                        lVar20 = _malloc(lVar24);
                        if (lVar20 == 0) {
                          uVar32 = func_0x0001087c9084(8,lVar24);
                          *(undefined8 **)((long)ppuVar4 + -0x2d8) = unaff_x26;
                          FUN_1049a4dc8((undefined1 *)((long)ppuVar4 + -0x2e8));
                          auVar34 = __Unwind_Resume(uVar32);
                          unaff_x22 = auVar34._8_8_;
                          *(ulong *)((long)ppuVar4 + -0x350) = unaff_x28;
                          *(ulong *)((long)ppuVar4 + -0x348) = unaff_x27;
                          *(undefined8 **)((long)ppuVar4 + -0x340) = unaff_x26;
                          *(ulong *)((long)ppuVar4 + -0x338) = uVar26;
                          *(undefined8 *)((long)ppuVar4 + -0x330) = uVar25;
                          *(undefined8 **)((long)ppuVar4 + -0x328) = puVar17;
                          *(long *)((long)ppuVar4 + -800) = lVar24;
                          *(ulong *)((long)ppuVar4 + -0x318) = uVar13;
                          *(undefined8 **)((long)ppuVar4 + -0x310) = puVar12;
                          *(undefined8 *)((long)ppuVar4 + -0x308) = uVar32;
                          *(undefined1 **)((long)ppuVar4 + -0x300) =
                               (undefined1 *)((long)ppuVar4 + -0x280);
                          *(undefined8 *)((long)ppuVar4 + -0x2f8) = 0x1049c000c;
                          puVar31 = (undefined1 *)((long)ppuVar4 + -0x300);
                          *(undefined8 *)((long)ppuVar4 + -0x960) = 0;
                          *(long *)((long)ppuVar4 + -0x910) = auVar34._0_8_;
                          *(ulong *)((long)ppuVar4 + -0x908) = uVar29;
                          if (uVar29 == 0) {
                            *(undefined8 *)((long)ppuVar4 + -0x818) = 0;
                            *(undefined8 *)((long)ppuVar4 + -0x810) = 8;
LAB_1049c00a4:
                            uVar25 = *(undefined8 *)((long)ppuVar4 + -0x818);
                            puVar12 = *(undefined8 **)((long)ppuVar4 + -0x910);
                            uVar32 = *(undefined8 *)((long)ppuVar4 + -0x908);
                            puVar12[1] = *(undefined8 *)((long)ppuVar4 + -0x810);
                            *puVar12 = uVar25;
                            puVar12[2] = uVar32;
                            return;
                          }
                          lVar20 = _malloc(uVar29 * 0x1e0);
                          if (lVar20 == 0) {
                            func_0x0001087c9084(8,uVar29 * 0x1e0);
LAB_1049c1104:
                            func_0x0001087c9084(1,uVar13);
LAB_1049c125c:
                    /* WARNING: Does not return */
                            pcVar3 = (code *)SoftwareBreakpoint(1,0x1049c1260);
                            (*pcVar3)();
                          }
                          *(undefined8 *)((long)ppuVar4 + -0x820) = 0;
                          *(ulong *)((long)ppuVar4 + -0x818) = uVar29;
                          unaff_x25 = (undefined8 *)((long)ppuVar4 + -0x620);
                          *(long *)((long)ppuVar4 + -0x810) = lVar20;
                          *(undefined8 *)((long)ppuVar4 + -0x808) = 0;
                          *(long *)((long)ppuVar4 + -0x830) = lVar20;
                          *(long **)((long)ppuVar4 + -0x828) = unaff_x22 + uVar29 * 0x3c;
                          *(undefined1 **)((long)ppuVar4 + -0x8f0) =
                               (undefined1 *)((long)ppuVar4 + -0x6e7);
                          *(undefined1 **)((long)ppuVar4 + -0x8e8) =
                               (undefined1 *)((long)ppuVar4 + -0x695);
                          *(undefined1 **)((long)ppuVar4 + -0x8d8) =
                               (undefined1 *)((long)ppuVar4 + -0x477);
                          *(undefined1 **)((long)ppuVar4 + -0x8d0) =
                               (undefined1 *)((long)ppuVar4 + -0x488);
                          *(undefined1 **)((long)ppuVar4 + -0x8e0) =
                               (undefined1 *)((long)ppuVar4 + -0x4e8);
                          do {
                            param_3 = auVar35._8_8_;
                            lVar20 = auVar35._0_8_;
                            if (unaff_x22 == *(long **)((long)ppuVar4 + -0x828)) goto LAB_1049c00a4;
                            unaff_x23 = unaff_x22 + 1;
                            lVar24 = *unaff_x22;
                            if (lVar24 < 2) {
                              if (lVar24 != 0) {
                                FUN_1049ca98c((undefined1 *)((long)ppuVar4 + -0x7f8),unaff_x23);
                                uVar32 = 1;
                                goto LAB_1049c0114;
                              }
                              lVar20 = unaff_x22[0x2e];
                              *(long *)((long)ppuVar4 + -0x3f8) = unaff_x22[0x2f];
                              *(long *)((long)ppuVar4 + -0x400) = lVar20;
                              if ((char)unaff_x22[0x30] == '\x01') {
                                uVar32 = *(undefined8 *)((long)unaff_x22 + 0x181);
                                *(undefined8 *)((long)ppuVar4 + -0x618) =
                                     *(undefined8 *)((long)unaff_x22 + 0x189);
                                *unaff_x25 = uVar32;
                                uVar23 = 1;
                                lVar20 = unaff_x22[2];
                                uVar22 = unaff_x22[3];
                                if (uVar22 != 0) goto LAB_1049c01d8;
LAB_1049c0274:
                                unaff_x28 = 1;
                                *(undefined8 *)((long)ppuVar4 + -0x838) = 0;
                                _memcpy(1,lVar20);
                                lVar20 = unaff_x22[5];
                                lVar24 = unaff_x22[6];
                                if (lVar24 == 0) goto LAB_1049c0290;
LAB_1049c0204:
                                lVar21 = _malloc(lVar24);
                                if (lVar21 == 0) {
                                  *(ulong *)((long)ppuVar4 + -0x8a8) = unaff_x28;
                                  func_0x0001087c9084(1,lVar24);
                                  goto LAB_1049c125c;
                                }
                              }
                              else {
                                uVar23 = 0;
                                lVar20 = unaff_x22[2];
                                uVar22 = unaff_x22[3];
                                if (uVar22 == 0) goto LAB_1049c0274;
LAB_1049c01d8:
                                unaff_x28 = _malloc(uVar22);
                                if (unaff_x28 == 0) goto LAB_1049c108c;
                                *(ulong *)((long)ppuVar4 + -0x838) = uVar22;
                                _memcpy(unaff_x28,lVar20,uVar22);
                                lVar20 = unaff_x22[5];
                                lVar24 = unaff_x22[6];
                                if (lVar24 != 0) goto LAB_1049c0204;
LAB_1049c0290:
                                lVar21 = 1;
                              }
                              *(long *)((long)ppuVar4 + -0x850) = lVar21;
                              _memcpy(lVar21,lVar20,lVar24);
                              lVar20 = unaff_x22[8];
                              lVar21 = unaff_x22[9];
                              *(long *)((long)ppuVar4 + -0x840) = lVar24;
                              *(undefined4 *)((long)ppuVar4 + -0x874) = uVar23;
                              if (lVar21 == 0) {
                                lVar9 = 1;
                              }
                              else {
                                lVar9 = _malloc(lVar21);
                                if (lVar9 == 0) {
                                  *(ulong *)((long)ppuVar4 + -0x8a8) = unaff_x28;
                                  func_0x0001087c9084(1,lVar21);
                                  goto LAB_1049c125c;
                                }
                              }
                              *(long *)((long)ppuVar4 + -0x860) = lVar9;
                              _memcpy(lVar9,lVar20,lVar21);
                              lVar20 = unaff_x22[0xb];
                              lVar9 = unaff_x22[0xc];
                              *(long *)((long)ppuVar4 + -0x848) = lVar21;
                              if (lVar9 == 0) {
                                lVar21 = 1;
                              }
                              else {
                                lVar21 = _malloc(lVar9);
                                if (lVar21 == 0) {
                                  *(ulong *)((long)ppuVar4 + -0x8a8) = unaff_x28;
                                  func_0x0001087c9084(1,lVar9);
                                  goto LAB_1049c125c;
                                }
                              }
                              *(long *)((long)ppuVar4 + -0x870) = lVar21;
                              *(long *)((long)ppuVar4 + -0x858) = lVar9;
                              _memcpy(lVar21,lVar20,lVar9);
                              uVar22 = unaff_x22[0x22];
                              lVar20 = uVar22 + 0x7ffffffffffffffa;
                              lVar21 = -0x7ffffffffffffffb;
                              if (uVar22 < 0x8000000000000006) {
                                lVar20 = 6;
                              }
                              if (lVar20 < 4) {
                                if (lVar20 < 2) {
                                  if (lVar20 == 0) {
                                    uVar32 = 0x8000000000000006;
                                  }
                                  else {
                                    uVar32 = 0x8000000000000007;
                                  }
                                }
                                else if (lVar20 == 2) {
                                  uVar32 = 0x8000000000000008;
                                }
                                else {
                                  uVar32 = 0x8000000000000009;
                                }
LAB_1049c074c:
                                *(undefined8 *)((long)ppuVar4 + -0x460) = uVar32;
                              }
                              else if (lVar20 < 6) {
                                if (lVar20 != 4) {
                                  uVar32 = 0x800000000000000b;
                                  goto LAB_1049c074c;
                                }
                                lVar20 = unaff_x22[0x24];
                                lVar9 = unaff_x22[0x25];
                                if (lVar9 == 0) {
                                  lVar24 = 1;
                                }
                                else {
                                  lVar24 = _malloc(lVar9);
                                  if (lVar24 == 0) {
LAB_1049c1208:
                                    *(ulong *)((long)ppuVar4 + -0x8a8) = unaff_x28;
LAB_1049c1210:
                                    func_0x0001087c9084(1,lVar9);
                                    goto LAB_1049c125c;
                                  }
                                }
                                _memcpy(lVar24,lVar20,lVar9);
                                *(long *)((long)ppuVar4 + -0x450) = lVar24;
                                *(long *)((long)ppuVar4 + -0x448) = lVar9;
                                *(long *)((long)ppuVar4 + -0x458) = lVar9;
                                *(undefined8 *)((long)ppuVar4 + -0x460) = 0x800000000000000a;
                                lVar24 = lVar9;
                              }
                              else {
                                if (lVar20 != 6) {
                                  uVar32 = 0x800000000000000d;
                                  goto LAB_1049c074c;
                                }
                                lVar20 = uVar22 + 0x7fffffffffffffff;
                                if (uVar22 < 0x8000000000000001) {
                                  lVar20 = 2;
                                }
                                if (lVar20 < 2) {
                                  if (lVar20 == 0) {
                                    lVar24 = -0x7fffffffffffffff;
                                  }
                                  else {
                                    lVar24 = -0x7ffffffffffffffe;
                                  }
LAB_1049c0f3c:
                                  lVar21 = *(long *)((long)ppuVar4 + -0x920);
                                  uVar32 = *(undefined8 *)((long)ppuVar4 + -0x918);
                                  lVar14 = *(long *)((long)ppuVar4 + -0x930);
                                  lVar20 = *(long *)((long)ppuVar4 + -0x928);
                                }
                                else {
                                  if (lVar20 == 2) {
                                    *(int *)((long)ppuVar4 + -0x93c) = (int)unaff_x22[0x2d];
                                    lVar20 = -0x8000000000000000;
                                    lVar24 = -0x8000000000000000;
                                    if (uVar22 != 0x8000000000000000) {
                                      lVar24 = unaff_x22[0x23];
                                      lVar9 = unaff_x22[0x24];
                                      if (lVar9 == 0) {
                                        lVar21 = 1;
                                      }
                                      else {
                                        lVar21 = _malloc(lVar9);
                                        if (lVar21 == 0) goto LAB_1049c1208;
                                      }
                                      _memcpy(lVar21,lVar24,lVar9);
                                      lVar24 = lVar9;
                                    }
                                    if (unaff_x22[0x25] != -0x8000000000000000) {
                                      lVar9 = unaff_x22[0x26];
                                      lVar20 = unaff_x22[0x27];
                                      if (lVar20 == 0) {
                                        lVar14 = 1;
                                      }
                                      else {
                                        lVar14 = _malloc(lVar20);
                                        if (lVar14 == 0) {
                                          *(ulong *)((long)ppuVar4 + -0x8a8) = unaff_x28;
                                          func_0x0001087c9084(1,lVar20);
                                          goto LAB_1049c125c;
                                        }
                                      }
                                      *(long *)((long)ppuVar4 + -0x958) = lVar14;
                                      _memcpy(lVar14,lVar9);
                                    }
                                    lVar9 = unaff_x22[0x28];
                                    *(undefined8 *)((long)ppuVar4 + -0x938) = 0x8000000000000000;
                                    if (lVar9 != -0x8000000000000000) {
                                      lVar9 = unaff_x22[0x29];
                                      lVar14 = unaff_x22[0x2a];
                                      if (lVar14 == 0) {
                                        lVar6 = 1;
                                      }
                                      else {
                                        lVar6 = _malloc(lVar14);
                                        if (lVar6 == 0) {
                                          *(ulong *)((long)ppuVar4 + -0x8a8) = unaff_x28;
                                          func_0x0001087c9084(1,lVar14);
                                          goto LAB_1049c125c;
                                        }
                                      }
                                      *(long *)((long)ppuVar4 + -0x950) = lVar6;
                                      _memcpy(lVar6,lVar9);
                                      *(long *)((long)ppuVar4 + -0x918) = lVar14;
                                      *(long *)((long)ppuVar4 + -0x938) = lVar14;
                                    }
                                    lVar9 = unaff_x22[0x2b];
                                    *(long *)((long)ppuVar4 + -0x3a8) = unaff_x22[0x2c];
                                    *(long *)((long)ppuVar4 + -0x3b0) = lVar9;
                                    *(long *)((long)ppuVar4 + -0x948) = lVar20;
                                    lVar14 = lVar24;
                                  }
                                  else {
                                    if (lVar20 == 3) {
                                      lVar24 = -0x7ffffffffffffffc;
                                      goto LAB_1049c0f3c;
                                    }
                                    lVar20 = unaff_x22[0x24];
                                    lVar9 = unaff_x22[0x25];
                                    if (lVar9 == 0) {
                                      lVar14 = 1;
                                    }
                                    else {
                                      lVar14 = _malloc(lVar9);
                                      if (lVar14 == 0) {
                                        *(ulong *)((long)ppuVar4 + -0x8a8) = unaff_x28;
                                        goto LAB_1049c1210;
                                      }
                                    }
                                    _memcpy(lVar14,lVar20,lVar9);
                                    lVar24 = -0x7ffffffffffffffb;
                                    lVar21 = lVar9;
                                    lVar20 = lVar9;
                                  }
                                  uVar32 = *(undefined8 *)((long)ppuVar4 + -0x918);
                                }
                                *(long *)((long)ppuVar4 + -0x460) = lVar24;
                                *(long *)((long)ppuVar4 + -0x928) = lVar20;
                                *(long *)((long)ppuVar4 + -0x920) = lVar21;
                                *(long *)((long)ppuVar4 + -0x458) = lVar21;
                                *(long *)((long)ppuVar4 + -0x930) = lVar14;
                                *(long *)((long)ppuVar4 + -0x450) = lVar14;
                                *(long *)((long)ppuVar4 + -0x448) = lVar20;
                                *(undefined8 *)((long)ppuVar4 + -0x440) =
                                     *(undefined8 *)((long)ppuVar4 + -0x958);
                                *(undefined8 *)((long)ppuVar4 + -0x438) =
                                     *(undefined8 *)((long)ppuVar4 + -0x948);
                                *(undefined8 *)((long)ppuVar4 + -0x430) =
                                     *(undefined8 *)((long)ppuVar4 + -0x938);
                                *(undefined8 *)((long)ppuVar4 + -0x428) =
                                     *(undefined8 *)((long)ppuVar4 + -0x950);
                                *(undefined8 *)((long)ppuVar4 + -0x918) = uVar32;
                                *(undefined8 *)((long)ppuVar4 + -0x420) = uVar32;
                                *(undefined8 *)((long)ppuVar4 + -0x410) =
                                     *(undefined8 *)((long)ppuVar4 + -0x3a8);
                                *(undefined8 *)((long)ppuVar4 + -0x418) =
                                     *(undefined8 *)((long)ppuVar4 + -0x3b0);
                                *(undefined4 *)((long)ppuVar4 + -0x408) =
                                     *(undefined4 *)((long)ppuVar4 + -0x93c);
                              }
                              bVar2 = *(byte *)((long)unaff_x22 + 0x191);
                              lVar21 = -0x8000000000000000;
                              lVar20 = -0x8000000000000000;
                              if (unaff_x22[0xd] != -0x8000000000000000) {
                                lVar24 = unaff_x22[0xe];
                                lVar20 = unaff_x22[0xf];
                                if (lVar20 == 0) {
                                  lVar9 = 1;
                                }
                                else {
                                  lVar9 = _malloc(lVar20);
                                  if (lVar9 == 0) {
                                    *(ulong *)((long)ppuVar4 + -0x8a8) = unaff_x28;
                                    func_0x0001087c9084(1,lVar20);
                                    goto LAB_1049c125c;
                                  }
                                }
                                *(long *)((long)ppuVar4 + -0x888) = lVar9;
                                _memcpy(lVar9,lVar24,lVar20);
                              }
                              lVar9 = unaff_x22[0x10];
                              *(long *)((long)ppuVar4 + -0x868) = lVar20;
                              if (lVar9 != -0x8000000000000000) {
                                lVar24 = unaff_x22[0x11];
                                lVar21 = unaff_x22[0x12];
                                if (lVar21 == 0) {
                                  lVar20 = 1;
                                }
                                else {
                                  lVar20 = _malloc(lVar21);
                                  if (lVar20 == 0) {
                                    *(ulong *)((long)ppuVar4 + -0x8a8) = unaff_x28;
                                    func_0x0001087c9084(1,lVar21);
                                    goto LAB_1049c125c;
                                  }
                                }
                                *(long *)((long)ppuVar4 + -0x890) = lVar20;
                                _memcpy(lVar20,lVar24,lVar21);
                              }
                              *(uint *)((long)ppuVar4 + -0x878) = (uint)bVar2;
                              lVar20 = -0x8000000000000000;
                              unaff_x26 = (undefined8 *)0x8000000000000000;
                              if (unaff_x22[0x13] != -0x8000000000000000) {
                                lVar24 = unaff_x22[0x14];
                                unaff_x26 = (undefined8 *)unaff_x22[0x15];
                                if (unaff_x26 == (undefined8 *)0x0) {
                                  lVar9 = 1;
                                }
                                else {
                                  lVar9 = _malloc(unaff_x26);
                                  if (lVar9 == 0) {
                                    *(ulong *)((long)ppuVar4 + -0x8a8) = unaff_x28;
                                    func_0x0001087c9084(1,unaff_x26);
                                    goto LAB_1049c125c;
                                  }
                                }
                                *(long *)((long)ppuVar4 + -0x898) = lVar9;
                                _memcpy(lVar9,lVar24,unaff_x26);
                              }
                              if (unaff_x22[0x16] != -0x8000000000000000) {
                                lVar24 = unaff_x22[0x17];
                                lVar20 = unaff_x22[0x18];
                                if (lVar20 == 0) {
                                  lVar9 = 1;
                                }
                                else {
                                  lVar9 = _malloc(lVar20);
                                  if (lVar9 == 0) {
                                    *(ulong *)((long)ppuVar4 + -0x8a8) = unaff_x28;
                                    func_0x0001087c9084(1,lVar20);
                                    goto LAB_1049c125c;
                                  }
                                }
                                *(long *)((long)ppuVar4 + -0x8a0) = lVar9;
                                _memcpy(lVar9,lVar24,lVar20);
                              }
                              lVar9 = -0x8000000000000000;
                              if (unaff_x22[0x19] != -0x8000000000000000) {
                                lVar14 = unaff_x22[0x1a];
                                lVar9 = unaff_x22[0x1b];
                                if (lVar9 == 0) {
                                  lVar24 = 1;
                                }
                                else {
                                  lVar24 = _malloc(lVar9);
                                  if (lVar24 == 0) {
                                    *(ulong *)((long)ppuVar4 + -0x8a8) = unaff_x28;
                                    func_0x0001087c9084(1,lVar9);
                                    goto LAB_1049c125c;
                                  }
                                }
                                _memcpy(lVar24,lVar14,lVar9);
                              }
                              if (unaff_x22[0x1c] == -0x8000000000000000) {
                                *(undefined8 *)((long)ppuVar4 + -0x3e0) = 0x8000000000000000;
                                lVar14 = unaff_x22[0x1f];
                              }
                              else {
                                FUN_1049bf43c((undefined1 *)((long)ppuVar4 + -0x3b0),unaff_x22[0x1d]
                                              ,unaff_x22[0x1e]);
                                *(undefined8 *)((long)ppuVar4 + -0x3d8) =
                                     *(undefined8 *)((long)ppuVar4 + -0x3a8);
                                *(undefined8 *)((long)ppuVar4 + -0x3e0) =
                                     *(undefined8 *)((long)ppuVar4 + -0x3b0);
                                *(undefined8 *)((long)ppuVar4 + -0x3d0) =
                                     *(undefined8 *)((long)ppuVar4 + -0x3a0);
                                lVar14 = unaff_x22[0x1f];
                              }
                              lVar6 = -0x8000000000000000;
                              if (lVar14 != -0x8000000000000000) {
                                lVar14 = unaff_x22[0x20];
                                lVar6 = unaff_x22[0x21];
                                if (lVar6 == 0) {
                                  lVar7 = 1;
                                }
                                else {
                                  *(ulong *)((long)ppuVar4 + -0x8a8) = unaff_x28;
                                  lVar7 = _malloc(lVar6);
                                  if (lVar7 == 0) {
                                    func_0x0001087c9084(1,lVar6);
                                    goto LAB_1049c125c;
                                  }
                                  unaff_x28 = *(ulong *)((long)ppuVar4 + -0x8a8);
                                }
                                *(long *)((long)ppuVar4 + -0x8b0) = lVar7;
                                _memcpy(lVar7,lVar14);
                                *(long *)((long)ppuVar4 + -0x8a8) = lVar6;
                              }
                              uVar32 = *(undefined8 *)((long)ppuVar4 + -0x400);
                              puVar12 = *(undefined8 **)((long)ppuVar4 + -0x8d0);
                              puVar12[1] = *(undefined8 *)((long)ppuVar4 + -0x3f8);
                              *puVar12 = uVar32;
                              *(char *)((long)ppuVar4 + -0x478) =
                                   (char)*(undefined4 *)((long)ppuVar4 + -0x874);
                              uVar32 = *unaff_x25;
                              puVar12 = *(undefined8 **)((long)ppuVar4 + -0x8d8);
                              puVar12[1] = *(undefined8 *)((long)ppuVar4 + -0x618);
                              *puVar12 = uVar32;
                              *(undefined8 *)((long)ppuVar4 + -0x5f0) =
                                   *(undefined8 *)((long)ppuVar4 + -0x838);
                              *(ulong *)((long)ppuVar4 + -0x5e8) = unaff_x28;
                              *(undefined8 *)((long)ppuVar4 + -0x5e0) =
                                   *(undefined8 *)((long)ppuVar4 + -0x838);
                              *(undefined8 *)((long)ppuVar4 + -0x5d8) =
                                   *(undefined8 *)((long)ppuVar4 + -0x840);
                              *(undefined8 *)((long)ppuVar4 + -0x5d0) =
                                   *(undefined8 *)((long)ppuVar4 + -0x850);
                              *(undefined8 *)((long)ppuVar4 + -0x5c8) =
                                   *(undefined8 *)((long)ppuVar4 + -0x840);
                              *(undefined8 *)((long)ppuVar4 + -0x5c0) =
                                   *(undefined8 *)((long)ppuVar4 + -0x848);
                              *(undefined8 *)((long)ppuVar4 + -0x5b8) =
                                   *(undefined8 *)((long)ppuVar4 + -0x860);
                              *(undefined8 *)((long)ppuVar4 + -0x5b0) =
                                   *(undefined8 *)((long)ppuVar4 + -0x848);
                              *(undefined8 *)((long)ppuVar4 + -0x5a8) =
                                   *(undefined8 *)((long)ppuVar4 + -0x858);
                              *(undefined8 *)((long)ppuVar4 + -0x5a0) =
                                   *(undefined8 *)((long)ppuVar4 + -0x870);
                              *(undefined8 *)((long)ppuVar4 + -0x598) =
                                   *(undefined8 *)((long)ppuVar4 + -0x858);
                              uVar33 = *(undefined8 *)((long)ppuVar4 + -0x420);
                              uVar25 = *(undefined8 *)((long)ppuVar4 + -0x408);
                              uVar32 = *(undefined8 *)((long)ppuVar4 + -0x410);
                              puVar12 = *(undefined8 **)((long)ppuVar4 + -0x8e0);
                              puVar12[9] = *(undefined8 *)((long)ppuVar4 + -0x418);
                              puVar12[8] = uVar33;
                              puVar12[0xb] = uVar25;
                              puVar12[10] = uVar32;
                              uVar33 = *(undefined8 *)((long)ppuVar4 + -0x440);
                              uVar25 = *(undefined8 *)((long)ppuVar4 + -0x428);
                              uVar32 = *(undefined8 *)((long)ppuVar4 + -0x430);
                              puVar12[5] = *(undefined8 *)((long)ppuVar4 + -0x438);
                              puVar12[4] = uVar33;
                              puVar12[7] = uVar25;
                              puVar12[6] = uVar32;
                              uVar33 = *(undefined8 *)((long)ppuVar4 + -0x460);
                              uVar25 = *(undefined8 *)((long)ppuVar4 + -0x448);
                              uVar32 = *(undefined8 *)((long)ppuVar4 + -0x450);
                              puVar12[1] = *(undefined8 *)((long)ppuVar4 + -0x458);
                              *puVar12 = uVar33;
                              puVar12[3] = uVar25;
                              puVar12[2] = uVar32;
                              *(char *)((long)ppuVar4 + -0x467) =
                                   (char)*(undefined4 *)((long)ppuVar4 + -0x878);
                              *(undefined8 *)((long)ppuVar4 + -0x590) =
                                   *(undefined8 *)((long)ppuVar4 + -0x868);
                              *(undefined8 *)((long)ppuVar4 + -0x588) =
                                   *(undefined8 *)((long)ppuVar4 + -0x888);
                              *(undefined8 *)((long)ppuVar4 + -0x580) =
                                   *(undefined8 *)((long)ppuVar4 + -0x868);
                              *(long *)((long)ppuVar4 + -0x578) = lVar21;
                              *(undefined8 *)((long)ppuVar4 + -0x570) =
                                   *(undefined8 *)((long)ppuVar4 + -0x890);
                              *(long *)((long)ppuVar4 + -0x568) = lVar21;
                              *(undefined8 **)((long)ppuVar4 + -0x560) = unaff_x26;
                              *(undefined8 *)((long)ppuVar4 + -0x558) =
                                   *(undefined8 *)((long)ppuVar4 + -0x898);
                              *(undefined8 **)((long)ppuVar4 + -0x550) = unaff_x26;
                              *(long *)((long)ppuVar4 + -0x548) = lVar20;
                              *(undefined8 *)((long)ppuVar4 + -0x540) =
                                   *(undefined8 *)((long)ppuVar4 + -0x8a0);
                              *(long *)((long)ppuVar4 + -0x538) = lVar20;
                              *(long *)((long)ppuVar4 + -0x530) = lVar9;
                              *(long *)((long)ppuVar4 + -0x528) = lVar24;
                              *(undefined8 *)((long)ppuVar4 + -0x508) =
                                   *(undefined8 *)((long)ppuVar4 + -0x3d0);
                              *(undefined8 *)((long)ppuVar4 + -0x510) =
                                   *(undefined8 *)((long)ppuVar4 + -0x3d8);
                              *(undefined8 *)((long)ppuVar4 + -0x518) =
                                   *(undefined8 *)((long)ppuVar4 + -0x3e0);
                              *(long *)((long)ppuVar4 + -0x520) = lVar9;
                              *(long *)((long)ppuVar4 + -0x500) = lVar6;
                              *(undefined8 *)((long)ppuVar4 + -0x4f8) =
                                   *(undefined8 *)((long)ppuVar4 + -0x8b0);
                              *(undefined8 *)((long)ppuVar4 + -0x4f0) =
                                   *(undefined8 *)((long)ppuVar4 + -0x8a8);
                              lVar20 = unaff_x22[0x33];
                              if (lVar20 == -0x8000000000000000) {
                                if (unaff_x22[0x36] != -0x8000000000000000) goto LAB_1049c0ab4;
LAB_1049c0a60:
                                unaff_x26 = (undefined8 *)0x8000000000000000;
                                lVar9 = -0x8000000000000000;
                                if (unaff_x22[0x39] == -0x8000000000000000) goto LAB_1049c0b28;
LAB_1049c0af0:
                                lVar14 = unaff_x22[0x3a];
                                unaff_x26 = (undefined8 *)unaff_x22[0x3b];
                                if (unaff_x26 == (undefined8 *)0x0) {
                                  lVar6 = 1;
                                }
                                else {
                                  lVar6 = _malloc(unaff_x26);
                                  if (lVar6 == 0) {
                                    func_0x0001087c9084(1,unaff_x26);
                                    goto LAB_1049c125c;
                                  }
                                }
                                *(long *)((long)ppuVar4 + -0x8c8) = lVar6;
                                _memcpy(lVar6,lVar14);
                                *(undefined8 **)((long)ppuVar4 + -0x8c0) = unaff_x26;
                              }
                              else if (lVar20 != -0x7fffffffffffffff) {
                                lVar9 = unaff_x22[0x34];
                                lVar20 = unaff_x22[0x35];
                                if (lVar20 == 0) {
                                  lVar24 = 1;
                                }
                                else {
                                  lVar24 = _malloc(lVar20);
                                  if (lVar24 == 0) {
                                    func_0x0001087c9084(1,lVar20);
                                    goto LAB_1049c125c;
                                  }
                                }
                                _memcpy(lVar24,lVar9,lVar20);
                                if (unaff_x22[0x36] == -0x8000000000000000) goto LAB_1049c0a60;
LAB_1049c0ab4:
                                unaff_x26 = (undefined8 *)0x8000000000000000;
                                lVar14 = unaff_x22[0x37];
                                lVar9 = unaff_x22[0x38];
                                if (lVar9 == 0) {
                                  lVar21 = 1;
                                }
                                else {
                                  lVar21 = _malloc(lVar9);
                                  if (lVar21 == 0) {
                                    func_0x0001087c9084(1,lVar9);
                                    goto LAB_1049c125c;
                                  }
                                }
                                _memcpy(lVar21,lVar14,lVar9);
                                if (unaff_x22[0x39] != -0x8000000000000000) goto LAB_1049c0af0;
                              }
LAB_1049c0b28:
                              auVar35._8_8_ = lVar9;
                              auVar35._0_8_ = lVar24;
                              _memcpy((undefined1 *)((long)ppuVar4 + -0x7f8),
                                      (undefined1 *)((long)ppuVar4 + -0x5f0),400);
                              *(long *)((long)ppuVar4 + -0x660) = lVar24;
                              *(long *)((long)ppuVar4 + -0x658) = lVar20;
                              *(long *)((long)ppuVar4 + -0x650) = lVar9;
                              *(long *)((long)ppuVar4 + -0x648) = lVar21;
                              *(long *)((long)ppuVar4 + -0x640) = lVar9;
                              *(undefined8 **)((long)ppuVar4 + -0x638) = unaff_x26;
                              *(undefined8 *)((long)ppuVar4 + -0x630) =
                                   *(undefined8 *)((long)ppuVar4 + -0x8c8);
                              *(undefined8 *)((long)ppuVar4 + -0x628) =
                                   *(undefined8 *)((long)ppuVar4 + -0x8c0);
                              *(long *)((long)ppuVar4 + -0x668) = lVar20;
                              *(undefined8 *)((long)ppuVar4 + -0x800) = 0;
                            }
                            else {
                              if (lVar24 == 2) {
                                lVar20 = unaff_x22[2];
                                uVar22 = unaff_x22[3];
                                if (uVar22 == 0) {
                                  lVar24 = 1;
                                }
                                else {
                                  lVar24 = _malloc(uVar22);
                                  param_3 = uVar22;
                                  if (lVar24 == 0) {
LAB_1049c108c:
                                    func_0x0001087c9084(1,uVar22);
                                    goto LAB_1049c125c;
                                  }
                                }
                                _memcpy(lVar24,lVar20);
                                puVar12 = (undefined8 *)0x8000000000000000;
                                if (unaff_x22[4] != -0x8000000000000000) {
                                  puVar12 = (undefined8 *)unaff_x22[6];
                                  if (puVar12 == (undefined8 *)0x0) {
                                    *(undefined8 *)((long)ppuVar4 + -0x458) = 8;
                                  }
                                  else {
                                    lVar20 = unaff_x22[5];
                                    param_3 = (long)puVar12 * 0xc0;
                                    puVar17 = (undefined8 *)_malloc(param_3);
                                    if (puVar17 == (undefined8 *)0x0) {
                                      func_0x0001087c9084(8,param_3);
                                      goto LAB_1049c125c;
                                    }
                                    unaff_x26 = (undefined8 *)0x0;
                                    *(undefined8 **)((long)ppuVar4 + -0x460) = puVar12;
                                    *(undefined8 **)((long)ppuVar4 + -0x458) = puVar17;
                                    do {
                                      if (param_3 == 0) break;
                                      FUN_1049ca98c((undefined1 *)((long)ppuVar4 + -0x5f0),lVar20);
                                      unaff_x26 = (undefined8 *)((long)unaff_x26 + 1);
                                      lVar20 = lVar20 + 0xc0;
                                      uVar32 = *(undefined8 *)((long)ppuVar4 + -0x570);
                                      uVar33 = *(undefined8 *)((long)ppuVar4 + -0x558);
                                      uVar25 = *(undefined8 *)((long)ppuVar4 + -0x560);
                                      puVar17[0x11] = *(undefined8 *)((long)ppuVar4 + -0x568);
                                      puVar17[0x10] = uVar32;
                                      puVar17[0x13] = uVar33;
                                      puVar17[0x12] = uVar25;
                                      uVar32 = *(undefined8 *)((long)ppuVar4 + -0x550);
                                      uVar33 = *(undefined8 *)((long)ppuVar4 + -0x538);
                                      uVar25 = *(undefined8 *)((long)ppuVar4 + -0x540);
                                      puVar17[0x15] = *(undefined8 *)((long)ppuVar4 + -0x548);
                                      puVar17[0x14] = uVar32;
                                      puVar17[0x17] = uVar33;
                                      puVar17[0x16] = uVar25;
                                      uVar32 = *(undefined8 *)((long)ppuVar4 + -0x5b0);
                                      uVar33 = *(undefined8 *)((long)ppuVar4 + -0x598);
                                      uVar25 = *(undefined8 *)((long)ppuVar4 + -0x5a0);
                                      puVar17[9] = *(undefined8 *)((long)ppuVar4 + -0x5a8);
                                      puVar17[8] = uVar32;
                                      puVar17[0xb] = uVar33;
                                      puVar17[10] = uVar25;
                                      uVar32 = *(undefined8 *)((long)ppuVar4 + -0x590);
                                      uVar33 = *(undefined8 *)((long)ppuVar4 + -0x578);
                                      uVar25 = *(undefined8 *)((long)ppuVar4 + -0x580);
                                      puVar17[0xd] = *(undefined8 *)((long)ppuVar4 + -0x588);
                                      puVar17[0xc] = uVar32;
                                      puVar17[0xf] = uVar33;
                                      puVar17[0xe] = uVar25;
                                      uVar32 = *(undefined8 *)((long)ppuVar4 + -0x5f0);
                                      uVar33 = *(undefined8 *)((long)ppuVar4 + -0x5d8);
                                      uVar25 = *(undefined8 *)((long)ppuVar4 + -0x5e0);
                                      puVar17[1] = *(undefined8 *)((long)ppuVar4 + -0x5e8);
                                      *puVar17 = uVar32;
                                      puVar17[3] = uVar33;
                                      puVar17[2] = uVar25;
                                      uVar32 = *(undefined8 *)((long)ppuVar4 + -0x5d0);
                                      uVar33 = *(undefined8 *)((long)ppuVar4 + -0x5b8);
                                      uVar25 = *(undefined8 *)((long)ppuVar4 + -0x5c0);
                                      param_3 = param_3 - 0xc0;
                                      puVar17[5] = *(undefined8 *)((long)ppuVar4 + -0x5c8);
                                      puVar17[4] = uVar32;
                                      puVar17[7] = uVar33;
                                      puVar17[6] = uVar25;
                                      puVar17 = puVar17 + 0x18;
                                    } while (puVar12 != unaff_x26);
                                  }
                                  *(undefined8 **)((long)ppuVar4 + -0x450) = puVar12;
                                  *(undefined8 *)((long)ppuVar4 + -0x3a8) =
                                       *(undefined8 *)((long)ppuVar4 + -0x450);
                                  *(undefined8 *)((long)ppuVar4 + -0x3b0) =
                                       *(undefined8 *)((long)ppuVar4 + -0x458);
                                }
                                auVar35._8_8_ = param_3;
                                auVar35._0_8_ = lVar24;
                                *(long *)((long)ppuVar4 + -0x7f0) = lVar24;
                                *(ulong *)((long)ppuVar4 + -0x7e8) = uVar22;
                                *(undefined8 **)((long)ppuVar4 + -0x7e0) = puVar12;
                                *(undefined8 *)((long)ppuVar4 + -2000) =
                                     *(undefined8 *)((long)ppuVar4 + -0x3a8);
                                *(undefined8 *)((long)ppuVar4 + -0x7d8) =
                                     *(undefined8 *)((long)ppuVar4 + -0x3b0);
                                *(ulong *)((long)ppuVar4 + -0x7f8) = uVar22;
                                uVar32 = 2;
                                unaff_x28 = uVar22;
                              }
                              else {
                                if (lVar24 != 3) {
                                  FUN_1049c6f70((undefined1 *)((long)ppuVar4 + -0x7f8),unaff_x23);
                                  uVar32 = 4;
                                  goto LAB_1049c0114;
                                }
                                uVar22 = 0x8000000000000000;
                                if (unaff_x22[0xd] != -0x8000000000000000) {
                                  lVar24 = unaff_x22[0xe];
                                  uVar22 = unaff_x22[0xf];
                                  if (uVar22 == 0) {
                                    lVar21 = 1;
                                  }
                                  else {
                                    lVar21 = _malloc(uVar22);
                                    param_3 = uVar22;
                                    if (lVar21 == 0) goto LAB_1049c108c;
                                  }
                                  *(long *)((long)ppuVar4 + -0x860) = lVar21;
                                  _memcpy(lVar21,lVar24);
                                }
                                *(ulong *)((long)ppuVar4 + -0x838) = uVar22;
                                lVar24 = unaff_x22[8];
                                lVar21 = unaff_x22[9];
                                if (lVar21 == 0) {
                                  lVar9 = 1;
                                }
                                else {
                                  lVar9 = _malloc(lVar21);
                                  lVar20 = lVar21;
                                  if (lVar9 == 0) {
                                    func_0x0001087c9084(1,lVar21);
                                    goto LAB_1049c125c;
                                  }
                                }
                                *(long *)((long)ppuVar4 + -0x858) = lVar9;
                                *(long *)((long)ppuVar4 + -0x848) = lVar21;
                                _memcpy(lVar9,lVar24);
                                lVar24 = unaff_x22[0x10];
                                unaff_x24 = -0x8000000000000000;
                                *(undefined8 *)((long)ppuVar4 + -0x840) = 0x8000000000000000;
                                puVar8 = (undefined1 *)((long)ppuVar4 + -0x460);
                                if (lVar24 != -0x8000000000000000) {
                                  lVar20 = unaff_x22[0x11];
                                  uVar13 = unaff_x22[0x12];
                                  if (uVar13 == 0) {
                                    lVar24 = 1;
                                  }
                                  else {
                                    lVar24 = _malloc(uVar13);
                                    param_3 = uVar13;
                                    if (lVar24 == 0) goto LAB_1049c1104;
                                  }
                                  *(long *)((long)ppuVar4 + -0x868) = lVar24;
                                  *(ulong *)((long)ppuVar4 + -0x840) = uVar13;
                                  _memcpy(lVar24,lVar20);
                                }
                                if (unaff_x22[0x13] != -0x8000000000000000) {
                                  lVar20 = unaff_x22[0x14];
                                  unaff_x24 = unaff_x22[0x15];
                                  if (unaff_x24 == 0) {
                                    lVar24 = 1;
                                  }
                                  else {
                                    lVar24 = _malloc(unaff_x24);
                                    if (lVar24 == 0) {
                                      func_0x0001087c9084(1,unaff_x24);
                                      goto LAB_1049c125c;
                                    }
                                  }
                                  *(long *)((long)ppuVar4 + -0x870) = lVar24;
                                  _memcpy(lVar24,lVar20,unaff_x24);
                                }
                                *(long *)((long)ppuVar4 + -0x850) = unaff_x24;
                                uVar22 = unaff_x22[0x24] ^ 0x8000000000000000;
                                if (-1 < unaff_x22[0x24]) {
                                  uVar22 = 3;
                                }
                                if ((long)uVar22 < 2) {
                                  if (uVar22 != 0) goto LAB_1049c05c4;
                                  *(undefined8 *)((long)ppuVar4 + -0x400) = 0x8000000000000000;
                                  uVar22 = unaff_x22[0x28];
                                  if (uVar22 == 0x8000000000000003) goto LAB_1049c05e0;
LAB_1049c0598:
                                  uVar15 = 3;
                                  uVar26 = uVar22;
                                  if (uVar22 < 0x8000000000000001) {
                                    uVar26 = 0;
                                  }
                                  uVar26 = uVar26 & 0x7fffffffffffffff;
                                  if (uVar26 == 0) {
                                    bVar5 = uVar22 != 0x8000000000000000;
                                    uVar22 = 0x8000000000000000;
                                    if (bVar5) {
                                      uVar22 = unaff_x22[0x2a];
                                      if (uVar22 == 0) {
                                        *(undefined8 *)((long)ppuVar4 + -0x460) = 0;
                                        *(undefined8 *)((long)ppuVar4 + -0x458) = 8;
                                      }
                                      else {
                                        unaff_x28 = unaff_x22[0x29];
                                        lVar20 = uVar22 * 0x38;
                                        unaff_x26 = (undefined8 *)_malloc(lVar20);
                                        if (unaff_x26 == (undefined8 *)0x0) {
                                          func_0x0001087c9084(8,lVar20);
                                          goto LAB_1049c125c;
                                        }
                                        param_3 = 0;
                                        *(ulong *)((long)ppuVar4 + -0x460) = uVar22;
                                        *(undefined8 **)((long)ppuVar4 + -0x458) = unaff_x26;
                                        do {
                                          if (lVar20 == 0) break;
                                          FUN_1049d0944((undefined1 *)((long)ppuVar4 + -0x5f0),
                                                        unaff_x28);
                                          param_3 = param_3 + 1;
                                          puVar8 = (undefined1 *)(unaff_x28 + 0x30);
                                          unaff_x28 = unaff_x28 + 0x38;
                                          *(undefined1 *)((long)ppuVar4 + -0x5c0) = *puVar8;
                                          uVar32 = *(undefined8 *)((long)ppuVar4 + -0x5f0);
                                          uVar33 = *(undefined8 *)((long)ppuVar4 + -0x5d8);
                                          uVar25 = *(undefined8 *)((long)ppuVar4 + -0x5e0);
                                          unaff_x26[1] = *(undefined8 *)((long)ppuVar4 + -0x5e8);
                                          *unaff_x26 = uVar32;
                                          unaff_x26[3] = uVar33;
                                          unaff_x26[2] = uVar25;
                                          uVar32 = *(undefined8 *)((long)ppuVar4 + -0x5d0);
                                          unaff_x26[5] = *(undefined8 *)((long)ppuVar4 + -0x5c8);
                                          unaff_x26[4] = uVar32;
                                          unaff_x26[6] = *(undefined8 *)((long)ppuVar4 + -0x5c0);
                                          lVar20 = lVar20 + -0x38;
                                          unaff_x26 = unaff_x26 + 7;
                                        } while (uVar22 != param_3);
                                      }
                                      *(ulong *)((long)ppuVar4 + -0x450) = uVar22;
                                      *(undefined8 *)((long)ppuVar4 + -0x3a8) =
                                           *(undefined8 *)((long)ppuVar4 + -0x450);
                                      *(undefined8 *)((long)ppuVar4 + -0x3b0) =
                                           *(undefined8 *)((long)ppuVar4 + -0x458);
                                      uVar26 = unaff_x22[0x2b];
                                    }
                                    uVar15 = (undefined1)unaff_x22[0x2c];
                                    *(undefined8 *)((long)ppuVar4 + -0x5e8) =
                                         *(undefined8 *)((long)ppuVar4 + -0x3a8);
                                    *(undefined8 *)((long)ppuVar4 + -0x5f0) =
                                         *(undefined8 *)((long)ppuVar4 + -0x3b0);
                                  }
                                  else if (uVar26 == 1) {
                                    uVar22 = 0x8000000000000001;
                                  }
                                  else {
                                    lVar20 = unaff_x22[0x29];
                                    *(long *)((long)ppuVar4 + -0x5e8) = unaff_x22[0x2a];
                                    *(long *)((long)ppuVar4 + -0x5f0) = lVar20;
                                    uVar26 = unaff_x22[0x2b];
                                    uVar15 = (undefined1)unaff_x22[0x2c];
                                    *(undefined4 *)((long)ppuVar4 + -0x45d) =
                                         *(undefined4 *)((long)unaff_x22 + 0x164);
                                    *(undefined4 *)((long)ppuVar4 + -0x460) =
                                         *(undefined4 *)((long)unaff_x22 + 0x161);
                                  }
                                  *(undefined8 *)((long)ppuVar4 + -0x3d0) =
                                       *(undefined8 *)((long)ppuVar4 + -0x5e8);
                                  *(undefined8 *)((long)ppuVar4 + -0x3d8) =
                                       *(undefined8 *)((long)ppuVar4 + -0x5f0);
                                  *(ulong *)((long)ppuVar4 + -0x3e0) = uVar22;
                                  *(ulong *)((long)ppuVar4 + -0x3c8) = uVar26;
                                  *(undefined1 *)((long)ppuVar4 + -0x3c0) = uVar15;
                                  *(undefined4 *)((long)ppuVar4 + -0x3bf) =
                                       *(undefined4 *)((long)ppuVar4 + -0x460);
                                  *(undefined4 *)((long)ppuVar4 + -0x3bc) =
                                       *(undefined4 *)((long)ppuVar4 + -0x45d);
                                  if (unaff_x22[0x16] != -0x8000000000000000) goto LAB_1049c0c18;
LAB_1049c05f8:
                                  *(undefined8 *)((long)ppuVar4 + -0x3b0) = 0x8000000000000000;
                                  lVar20 = *unaff_x23;
                                  if (lVar20 == 2) goto LAB_1049c0608;
LAB_1049c0c68:
                                  *(uint *)((long)ppuVar4 + -0x874) = (uint)*(byte *)(unaff_x22 + 6)
                                  ;
                                  unaff_x28 = unaff_x22[2];
                                  uVar22 = unaff_x22[5];
                                  if (uVar22 == 0) {
                                    *(undefined8 *)((long)ppuVar4 + -0x378) = 0;
                                    *(undefined8 *)((long)ppuVar4 + -0x370) = 8;
                                  }
                                  else {
                                    unaff_x26 = (undefined8 *)unaff_x22[4];
                                    lVar24 = uVar22 * 0x38;
                                    puVar12 = (undefined8 *)_malloc(lVar24);
                                    if (puVar12 == (undefined8 *)0x0) {
                                      func_0x0001087c9084(8,lVar24);
                                      goto LAB_1049c125c;
                                    }
                                    param_3 = 0;
                                    *(ulong *)((long)ppuVar4 + -0x378) = uVar22;
                                    *(undefined8 **)((long)ppuVar4 + -0x370) = puVar12;
                                    do {
                                      if (lVar24 == 0) break;
                                      FUN_1049d0944((undefined1 *)((long)ppuVar4 + -0x5f0),unaff_x26
                                                   );
                                      param_3 = param_3 + 1;
                                      puVar17 = unaff_x26 + 6;
                                      unaff_x26 = unaff_x26 + 7;
                                      *(undefined1 *)((long)ppuVar4 + -0x5c0) =
                                           *(undefined1 *)puVar17;
                                      uVar32 = *(undefined8 *)((long)ppuVar4 + -0x5f0);
                                      uVar33 = *(undefined8 *)((long)ppuVar4 + -0x5d8);
                                      uVar25 = *(undefined8 *)((long)ppuVar4 + -0x5e0);
                                      puVar12[1] = *(undefined8 *)((long)ppuVar4 + -0x5e8);
                                      *puVar12 = uVar32;
                                      puVar12[3] = uVar33;
                                      puVar12[2] = uVar25;
                                      uVar32 = *(undefined8 *)((long)ppuVar4 + -0x5d0);
                                      puVar12[5] = *(undefined8 *)((long)ppuVar4 + -0x5c8);
                                      puVar12[4] = uVar32;
                                      puVar12[6] = *(undefined8 *)((long)ppuVar4 + -0x5c0);
                                      lVar24 = lVar24 + -0x38;
                                      puVar12 = puVar12 + 7;
                                    } while (uVar22 != param_3);
                                  }
                                  *(undefined8 *)((long)ppuVar4 + -0x448) =
                                       *(undefined8 *)((long)ppuVar4 + -0x370);
                                  *(undefined8 *)((long)ppuVar4 + -0x450) =
                                       *(undefined8 *)((long)ppuVar4 + -0x378);
                                  *(ulong *)((long)ppuVar4 + -0x440) = uVar22;
                                  *(long *)((long)ppuVar4 + -0x460) = lVar20;
                                  *(ulong *)((long)ppuVar4 + -0x458) = unaff_x28;
                                  *(char *)((long)ppuVar4 + -0x438) =
                                       (char)*(undefined4 *)((long)ppuVar4 + -0x874);
                                  lVar20 = unaff_x22[0xb];
                                  lVar24 = unaff_x22[0xc];
                                  if (lVar24 == 0) goto LAB_1049c0d1c;
LAB_1049c0618:
                                  lVar21 = _malloc(lVar24);
                                  if (lVar21 == 0) {
                                    func_0x0001087c9084(1,lVar24);
                                    goto LAB_1049c125c;
                                  }
                                }
                                else {
                                  if (uVar22 != 2) goto LAB_1049c062c;
LAB_1049c05c4:
                                  lVar20 = unaff_x22[0x24];
                                  lVar21 = unaff_x22[0x27];
                                  lVar24 = unaff_x22[0x26];
                                  *(long *)((long)ppuVar4 + -0x3f8) = unaff_x22[0x25];
                                  *(long *)((long)ppuVar4 + -0x400) = lVar20;
                                  *(long *)((long)ppuVar4 + -1000) = lVar21;
                                  *(long *)((long)ppuVar4 + -0x3f0) = lVar24;
                                  uVar22 = unaff_x22[0x28];
                                  if (uVar22 != 0x8000000000000003) goto LAB_1049c0598;
LAB_1049c05e0:
                                  *(undefined8 *)((long)ppuVar4 + -0x3e0) = 0x8000000000000003;
                                  if (unaff_x22[0x16] == -0x8000000000000000) goto LAB_1049c05f8;
LAB_1049c0c18:
                                  FUN_1049bff00((undefined1 *)((long)ppuVar4 + -0x3b0),
                                                unaff_x22[0x17],unaff_x22[0x18]);
                                  FUN_1049bff00((undefined1 *)((long)ppuVar4 + -0x460),
                                                unaff_x22[0x1a],unaff_x22[0x1b]);
                                  *(undefined8 *)((long)ppuVar4 + -0x5e0) =
                                       *(undefined8 *)((long)ppuVar4 + -0x3a0);
                                  *(undefined8 *)((long)ppuVar4 + -0x5d0) =
                                       *(undefined8 *)((long)ppuVar4 + -0x458);
                                  *(undefined8 *)((long)ppuVar4 + -0x5d8) =
                                       *(undefined8 *)((long)ppuVar4 + -0x460);
                                  *(undefined8 *)((long)ppuVar4 + -0x5c8) =
                                       *(undefined8 *)((long)ppuVar4 + -0x450);
                                  *(undefined8 *)((long)ppuVar4 + -0x3a8) =
                                       *(undefined8 *)((long)ppuVar4 + -0x3a8);
                                  *(undefined8 *)((long)ppuVar4 + -0x3b0) =
                                       *(undefined8 *)((long)ppuVar4 + -0x3b0);
                                  *(undefined8 *)((long)ppuVar4 + -0x398) =
                                       *(undefined8 *)((long)ppuVar4 + -0x5d8);
                                  *(undefined8 *)((long)ppuVar4 + -0x3a0) =
                                       *(undefined8 *)((long)ppuVar4 + -0x5e0);
                                  *(undefined8 *)((long)ppuVar4 + -0x388) =
                                       *(undefined8 *)((long)ppuVar4 + -0x5c8);
                                  *(undefined8 *)((long)ppuVar4 + -0x390) =
                                       *(undefined8 *)((long)ppuVar4 + -0x5d0);
                                  lVar20 = *unaff_x23;
                                  if (lVar20 != 2) goto LAB_1049c0c68;
LAB_1049c0608:
                                  *(undefined8 *)((long)ppuVar4 + -0x460) = 2;
                                  lVar20 = unaff_x22[0xb];
                                  lVar24 = unaff_x22[0xc];
                                  if (lVar24 != 0) goto LAB_1049c0618;
LAB_1049c0d1c:
                                  lVar21 = 1;
                                }
                                _memcpy(lVar21,lVar20,lVar24);
                                uVar15 = *(undefined1 *)((long)unaff_x22 + 0x169);
                                lVar20 = -0x8000000000000000;
                                if (unaff_x22[0x1c] == -0x8000000000000000) {
                                  puVar12 = (undefined8 *)0x8000000000000000;
                                  lVar9 = *(long *)((long)ppuVar4 + -0x880);
                                }
                                else {
                                  unaff_x28 = (ulong)*(byte *)(unaff_x22 + 0x23);
                                  unaff_x26 = (undefined8 *)unaff_x22[0x1d];
                                  lVar20 = unaff_x22[0x1e];
                                  if (lVar20 == 0) {
                                    lVar9 = 1;
                                  }
                                  else {
                                    lVar9 = _malloc(lVar20);
                                    if (lVar9 == 0) {
                                      func_0x0001087c9084(1,lVar20);
                                      goto LAB_1049c125c;
                                    }
                                  }
                                  *(long *)((long)ppuVar4 + -0x8b8) = lVar9;
                                  _memcpy(lVar9,unaff_x26);
                                  param_3 = (ulong)*(byte *)(unaff_x22 + 0x22);
                                  puVar12 = (undefined8 *)0x8000000000000000;
                                  lVar9 = lVar20;
                                  if (unaff_x22[0x1f] != -0x8000000000000000) {
                                    *(long *)((long)ppuVar4 + -0x880) = lVar20;
                                    lVar20 = unaff_x22[0x20];
                                    puVar12 = (undefined8 *)unaff_x22[0x21];
                                    if (puVar12 == (undefined8 *)0x0) {
                                      lVar9 = 1;
                                    }
                                    else {
                                      lVar9 = _malloc(puVar12);
                                      if (lVar9 == 0) {
                                        func_0x0001087c9084(1,puVar12);
                                        goto LAB_1049c125c;
                                      }
                                    }
                                    *(long *)((long)ppuVar4 + -0x900) = lVar9;
                                    _memcpy(lVar9,lVar20);
                                    *(undefined8 **)((long)ppuVar4 + -0x8f8) = puVar12;
                                    lVar20 = *(long *)((long)ppuVar4 + -0x880);
                                    lVar9 = lVar20;
                                    unaff_x26 = puVar12;
                                  }
                                }
                                auVar35._8_8_ = param_3;
                                auVar35._0_8_ = lVar21;
                                uVar32 = *(undefined8 *)((long)ppuVar4 + -0x860);
                                uVar33 = *(undefined8 *)((long)ppuVar4 + -0x858);
                                uVar18 = *(undefined8 *)((long)ppuVar4 + -0x848);
                                uVar25 = *(undefined8 *)((long)ppuVar4 + -0x870);
                                uVar1 = *(undefined8 *)((long)ppuVar4 + -0x868);
                                puVar16 = *(undefined4 **)((long)ppuVar4 + -0x8e8);
                                *puVar16 = *(undefined4 *)((long)unaff_x22 + 0x16b);
                                *(undefined1 *)(puVar16 + 1) =
                                     *(undefined1 *)((long)unaff_x22 + 0x16f);
                                *(undefined8 *)((long)ppuVar4 + -0x6a0) =
                                     *(undefined8 *)((long)ppuVar4 + -0x3c0);
                                *(undefined8 *)((long)ppuVar4 + -0x7c8) = uVar18;
                                *(undefined8 *)((long)ppuVar4 + -0x7c0) = uVar33;
                                *(undefined8 *)((long)ppuVar4 + -0x7b8) = uVar18;
                                *(long *)((long)ppuVar4 + -0x7b0) = lVar24;
                                *(long *)((long)ppuVar4 + -0x7a8) = lVar21;
                                *(long *)((long)ppuVar4 + -0x7a0) = lVar24;
                                *(undefined8 *)((long)ppuVar4 + -0x798) =
                                     *(undefined8 *)((long)ppuVar4 + -0x838);
                                *(undefined8 *)((long)ppuVar4 + -0x790) = uVar32;
                                *(undefined8 *)((long)ppuVar4 + -0x788) =
                                     *(undefined8 *)((long)ppuVar4 + -0x838);
                                *(undefined8 *)((long)ppuVar4 + -0x780) =
                                     *(undefined8 *)((long)ppuVar4 + -0x840);
                                *(undefined8 *)((long)ppuVar4 + -0x778) = uVar1;
                                *(undefined8 *)((long)ppuVar4 + -0x770) =
                                     *(undefined8 *)((long)ppuVar4 + -0x840);
                                *(undefined8 *)((long)ppuVar4 + -0x768) =
                                     *(undefined8 *)((long)ppuVar4 + -0x850);
                                *(undefined8 *)((long)ppuVar4 + -0x760) = uVar25;
                                *(undefined8 *)((long)ppuVar4 + -0x758) =
                                     *(undefined8 *)((long)ppuVar4 + -0x850);
                                *(long *)((long)ppuVar4 + -0x720) = lVar20;
                                *(char *)((long)ppuVar4 + -0x6f0) = (char)param_3;
                                *(undefined8 *)((long)ppuVar4 + -0x611) =
                                     *(undefined8 *)((long)ppuVar4 + -0x3f8);
                                *(undefined8 *)((long)ppuVar4 + -0x619) =
                                     *(undefined8 *)((long)ppuVar4 + -0x400);
                                *(undefined8 *)((long)ppuVar4 + -0x601) =
                                     *(undefined8 *)((long)ppuVar4 + -1000);
                                *(undefined8 *)((long)ppuVar4 + -0x609) =
                                     *(undefined8 *)((long)ppuVar4 + -0x3f0);
                                *(char *)((long)ppuVar4 + -0x6e8) = (char)unaff_x28;
                                uVar32 = *unaff_x25;
                                uVar33 = *(undefined8 *)((long)ppuVar4 + -0x608);
                                uVar25 = *(undefined8 *)((long)ppuVar4 + -0x610);
                                puVar17 = *(undefined8 **)((long)ppuVar4 + -0x8f0);
                                puVar17[1] = *(undefined8 *)((long)ppuVar4 + -0x618);
                                *puVar17 = uVar32;
                                puVar17[3] = uVar33;
                                puVar17[2] = uVar25;
                                *(undefined8 *)((long)puVar17 + 0x1f) =
                                     *(undefined8 *)((long)ppuVar4 + -0x601);
                                *(char *)((long)ppuVar4 + -0x698) = (char)unaff_x22[0x2d];
                                *(undefined1 *)((long)ppuVar4 + -0x697) = uVar15;
                                *(undefined1 *)((long)ppuVar4 + -0x696) =
                                     *(undefined1 *)((long)unaff_x22 + 0x16a);
                                *(char *)((long)ppuVar4 + -0x690) = (char)unaff_x22[0x2e];
                                *(undefined8 **)((long)ppuVar4 + -0x708) = puVar12;
                                *(long *)((long)ppuVar4 + -0x880) = lVar9;
                                *(long *)((long)ppuVar4 + -0x710) = lVar9;
                                *(undefined8 *)((long)ppuVar4 + -0x6b8) =
                                     *(undefined8 *)((long)ppuVar4 + -0x3d8);
                                *(undefined8 *)((long)ppuVar4 + -0x6c0) =
                                     *(undefined8 *)((long)ppuVar4 + -0x3e0);
                                *(undefined8 *)((long)ppuVar4 + -0x6a8) =
                                     *(undefined8 *)((long)ppuVar4 + -0x3c8);
                                *(undefined8 *)((long)ppuVar4 + -0x6b0) =
                                     *(undefined8 *)((long)ppuVar4 + -0x3d0);
                                *(undefined8 *)((long)ppuVar4 + -0x748) =
                                     *(undefined8 *)((long)ppuVar4 + -0x3a8);
                                *(undefined8 *)((long)ppuVar4 + -0x750) =
                                     *(undefined8 *)((long)ppuVar4 + -0x3b0);
                                *(undefined8 *)((long)ppuVar4 + -0x738) =
                                     *(undefined8 *)((long)ppuVar4 + -0x398);
                                *(undefined8 *)((long)ppuVar4 + -0x740) =
                                     *(undefined8 *)((long)ppuVar4 + -0x3a0);
                                *(undefined8 *)((long)ppuVar4 + -0x728) =
                                     *(undefined8 *)((long)ppuVar4 + -0x388);
                                *(undefined8 *)((long)ppuVar4 + -0x730) =
                                     *(undefined8 *)((long)ppuVar4 + -0x390);
                                *(undefined8 *)((long)ppuVar4 + -0x7f0) =
                                     *(undefined8 *)((long)ppuVar4 + -0x458);
                                *(undefined8 *)((long)ppuVar4 + -0x7f8) =
                                     *(undefined8 *)((long)ppuVar4 + -0x460);
                                *(undefined8 *)((long)ppuVar4 + -0x7e0) =
                                     *(undefined8 *)((long)ppuVar4 + -0x448);
                                *(undefined8 *)((long)ppuVar4 + -0x7e8) =
                                     *(undefined8 *)((long)ppuVar4 + -0x450);
                                *(undefined8 *)((long)ppuVar4 + -2000) =
                                     *(undefined8 *)((long)ppuVar4 + -0x438);
                                *(undefined8 *)((long)ppuVar4 + -0x7d8) =
                                     *(undefined8 *)((long)ppuVar4 + -0x440);
                                *(undefined8 *)((long)ppuVar4 + -0x718) =
                                     *(undefined8 *)((long)ppuVar4 + -0x8b8);
                                *(undefined8 *)((long)ppuVar4 + -0x700) =
                                     *(undefined8 *)((long)ppuVar4 + -0x900);
                                *(undefined8 *)((long)ppuVar4 + -0x6f8) =
                                     *(undefined8 *)((long)ppuVar4 + -0x8f8);
                                uVar32 = 3;
                              }
LAB_1049c0114:
                              *(undefined8 *)((long)ppuVar4 + -0x800) = uVar32;
                            }
                            uVar29 = uVar29 - 1;
                            unaff_x22 = unaff_x22 + 0x3c;
                            lVar20 = *(long *)((long)ppuVar4 + -0x820);
                            _memcpy(*(long *)((long)ppuVar4 + -0x830) + lVar20 * 0x1e0,
                                    (undefined1 *)((long)ppuVar4 + -0x800),0x1e0);
                            *(long *)((long)ppuVar4 + -0x820) = lVar20 + 1;
                            if (uVar29 == 0) goto LAB_1049c00a4;
                          } while( true );
                        }
                        uVar26 = 0;
                        *(ulong *)((long)ppuVar4 + -0x2e8) = uVar22;
                        *(long *)((long)ppuVar4 + -0x2e0) = lVar20;
                        plVar19 = (long *)(lVar20 + 0x10);
                        goto LAB_1049bff84;
                      }
                      *(undefined8 *)((long)ppuVar4 + -0x2e8) = 0;
                      *(undefined8 *)((long)ppuVar4 + -0x2e0) = 8;
                      goto LAB_1049bffac;
                    }
                    uVar22 = 0;
                    *(ulong *)((long)ppuVar4 + -0x228) = uVar13;
                    *(long *)((long)ppuVar4 + -0x220) = lVar20;
                    plVar19 = (long *)(lVar20 + 0x28);
                    puVar12 = (undefined8 *)(auVar34._8_8_ + 0x28);
                    *(ulong *)((long)ppuVar4 + -0x248) = uVar13;
                    lVar20 = extraout_x10;
                    goto LAB_1049bfb5c;
                  }
                  *(undefined8 *)((long)ppuVar4 + -0x228) = 0;
                  *(undefined8 *)((long)ppuVar4 + -0x220) = 8;
                  goto LAB_1049bfdd0;
                }
                uVar26 = 0;
                *(ulong *)((long)ppuVar4 + -0x1a8) = uVar22;
                *(undefined8 **)((long)ppuVar4 + -0x1a0) = puVar10;
                puVar17 = puVar17 + 3;
                goto LAB_1049bf980;
              }
              *(undefined8 *)((long)ppuVar4 + -0x1a8) = 0;
              *(undefined8 *)((long)ppuVar4 + -0x1a0) = 8;
              goto LAB_1049bfa44;
            }
            uVar22 = 0;
            *(ulong *)((long)ppuVar4 + -0xf8) = uVar26;
            *(long *)((long)ppuVar4 + -0xf0) = lVar20;
            plVar27 = plVar19 + 2;
            plVar30 = (long *)(lVar20 + 0x10);
            *(ulong *)((long)ppuVar4 + -0x100) = uVar26;
            goto LAB_1049bf85c;
          }
          *(undefined8 *)((long)ppuVar4 + -0xf8) = 0;
          *(undefined8 *)((long)ppuVar4 + -0xf0) = 8;
          goto LAB_1049bf898;
        }
        uVar26 = 0;
        *(ulong *)((long)ppuVar4 + -0x78) = uVar22;
        *(long *)((long)ppuVar4 + -0x70) = lVar20;
        plVar19 = (long *)(lVar20 + 0x10);
        goto LAB_1049bf738;
      }
      *(undefined8 *)((long)ppuVar4 + -0x78) = 0;
      *(undefined8 *)((long)ppuVar4 + -0x70) = 8;
      goto LAB_1049bf76c;
    }
    lVar24 = 0;
    uVar22 = 0;
    lStack_120 = param_3 * 0x98;
    lVar20 = lStack_138;
    uStack_118 = param_3;
    uStack_110 = uStack_130;
    do {
      if (lStack_120 == lVar24) break;
      lVar21 = -0x8000000000000000;
      if (*(long *)(lVar20 + 0x30) != -0x8000000000000000) {
        uVar32 = *(undefined8 *)(lStack_138 + lVar24 + 0x38);
        lVar21 = *(long *)(lStack_138 + lVar24 + 0x40);
        if (lVar21 == 0) {
          unaff_x23 = (long *)0x1;
        }
        else {
          unaff_x23 = (long *)_malloc(lVar21);
          if (unaff_x23 == (long *)0x0) {
            func_0x0001087c9084(1,lVar21);
            goto LAB_1049bf648;
          }
        }
        _memcpy(unaff_x23,uVar32,lVar21);
      }
      uVar32 = *(undefined8 *)(lVar20 + 8);
      lVar9 = *(long *)(lVar20 + 0x10);
      if (lVar9 == 0) {
        lVar6 = 1;
        _memcpy(1,uVar32,0);
        uVar32 = *(undefined8 *)(lVar20 + 0x20);
        lVar14 = *(long *)(lVar20 + 0x28);
        if (lVar14 != 0) goto LAB_1049bf51c;
LAB_1049bf54c:
        lVar7 = 1;
      }
      else {
        lVar6 = _malloc(lVar9);
        if (lVar6 == 0) {
          func_0x0001087c9084(1,lVar9);
          goto LAB_1049bf648;
        }
        _memcpy(lVar6,uVar32,lVar9);
        uVar32 = *(undefined8 *)(lVar20 + 0x20);
        lVar14 = *(long *)(lVar20 + 0x28);
        if (lVar14 == 0) goto LAB_1049bf54c;
LAB_1049bf51c:
        lVar7 = _malloc(lVar14);
        if (lVar7 == 0) {
          func_0x0001087c9084(1,lVar14);
LAB_1049bf648:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1049bf64c);
          (*pcVar3)();
        }
      }
      _memcpy(lVar7,uVar32,lVar14);
      FUN_1049b90e0(&lStack_b0,lVar20 + 0x48);
      plVar19 = (long *)(uStack_130 + lVar24);
      plVar19[0xc] = lStack_98;
      plVar19[0xb] = lStack_a0;
      plVar19[0xe] = lStack_88;
      plVar19[0xd] = lStack_90;
      plVar19[0x10] = lStack_78;
      plVar19[0xf] = lStack_80;
      uVar15 = *(undefined1 *)(lVar20 + 0x90);
      lVar20 = lVar20 + 0x98;
      uVar22 = uVar22 + 1;
      *plVar19 = lVar9;
      plVar19[1] = lVar6;
      plVar19[2] = lVar9;
      plVar19[3] = lVar14;
      plVar19[4] = lVar7;
      plVar19[5] = lVar14;
      plVar19[6] = lVar21;
      plVar19[7] = (long)unaff_x23;
      plVar19[8] = lVar21;
      plVar19[0x11] = lStack_70;
      plVar19[10] = lStack_a8;
      plVar19[9] = lStack_b0;
      lVar24 = lVar24 + 0x98;
      *(undefined1 *)(plVar19 + 0x12) = uVar15;
    } while (uStack_128 != uVar22);
  }
  puStack_140[1] = uStack_110;
  *puStack_140 = uStack_118;
  puStack_140[2] = uStack_128;
  return;
LAB_1049c062c:
  uVar22 = unaff_x22[0x26];
  auVar34._8_8_ = unaff_x22[0x25];
  auVar34._0_8_ = (undefined1 *)((long)ppuVar4 + -0x5f0);
  uVar32 = 0x1049c0638;
  ppuVar4 = (ulong **)((long)ppuVar4 + -0x960);
  unaff_x27 = uVar29;
  goto SUB_1049bf6b4;
  while( true ) {
    uVar32 = *(undefined8 *)(uVar13 + 8);
    lVar20 = *(long *)(uVar13 + 0x10);
    if (lVar20 == 0) {
      lVar21 = 1;
    }
    else {
      lVar21 = _malloc(lVar20);
      if (lVar21 == 0) {
        func_0x0001087c9084(1,lVar20);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1049bffe8);
        (*pcVar3)();
      }
    }
    _memcpy(lVar21,uVar32,lVar20);
    uVar26 = uVar26 + 1;
    uVar13 = uVar13 + 0x18;
    plVar19[-2] = lVar20;
    plVar19[-1] = lVar21;
    *plVar19 = lVar20;
    lVar24 = lVar24 + -0x18;
    plVar19 = plVar19 + 3;
    if (uVar22 == uVar26) break;
LAB_1049bff84:
    if (lVar24 == 0) break;
  }
LAB_1049bffac:
  uVar32 = *(undefined8 *)((long)ppuVar4 + -0x2e8);
  puVar12[1] = *(undefined8 *)((long)ppuVar4 + -0x2e0);
  *puVar12 = uVar32;
  puVar12[2] = uVar22;
  return;
LAB_1049bfb5c:
  do {
    if (lVar21 == 0) break;
    lVar24 = puVar12[-5];
    *(long *)((long)ppuVar4 + -0x230) = lVar24;
    if (lVar24 < 2) {
      if (lVar24 == 0) {
        uVar32 = puVar12[-3];
        puVar10 = (undefined8 *)puVar12[-2];
        if (puVar10 == (undefined8 *)0x0) {
          lVar24 = 1;
          _memcpy(1,uVar32,0);
          uVar32 = *puVar12;
          puVar17 = (undefined8 *)puVar12[1];
          if (puVar17 != (undefined8 *)0x0) goto LAB_1049bfba0;
LAB_1049bfc4c:
          *(undefined8 *)((long)ppuVar4 + -0x238) = 1;
          _memcpy(1,uVar32,puVar17);
          uVar32 = puVar12[3];
          lVar20 = puVar12[4];
          if (lVar20 == 0) goto LAB_1049bfc68;
LAB_1049bfbc4:
          unaff_x28 = _malloc(lVar20);
          if (unaff_x28 == 0) {
            func_0x0001087c9084(1,lVar20);
LAB_1049bfe60:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1049bfe64);
            (*pcVar3)();
          }
        }
        else {
          lVar24 = _malloc(puVar10);
          if (lVar24 == 0) {
LAB_1049bfe04:
            func_0x0001087c9084(1,puVar10);
            goto LAB_1049bfe60;
          }
          _memcpy(lVar24,uVar32,puVar10);
          uVar32 = *puVar12;
          puVar17 = (undefined8 *)puVar12[1];
          if (puVar17 == (undefined8 *)0x0) goto LAB_1049bfc4c;
LAB_1049bfba0:
          lVar20 = _malloc(puVar17);
          if (lVar20 == 0) {
            func_0x0001087c9084(1,puVar17);
            goto LAB_1049bfe60;
          }
          *(long *)((long)ppuVar4 + -0x238) = lVar20;
          _memcpy(lVar20,uVar32,puVar17);
          uVar32 = puVar12[3];
          lVar20 = puVar12[4];
          if (lVar20 != 0) goto LAB_1049bfbc4;
LAB_1049bfc68:
          unaff_x28 = 1;
        }
        *(long *)((long)ppuVar4 + -0x240) = lVar20;
        _memcpy(unaff_x28,uVar32,lVar20);
        unaff_x26 = puVar17;
        puVar28 = puVar10;
      }
      else {
        uVar32 = *puVar12;
        puVar17 = (undefined8 *)puVar12[1];
        if (puVar17 == (undefined8 *)0x0) {
          lVar20 = 1;
        }
        else {
          lVar20 = _malloc(puVar17);
          puVar10 = puVar17;
          if (lVar20 == 0) goto LAB_1049bfe04;
        }
        *(long *)((long)ppuVar4 + -0x238) = lVar20;
        _memcpy(lVar20,uVar32,puVar17);
        puVar10 = (undefined8 *)0x8000000000000000;
        unaff_x26 = puVar17;
        if (puVar12[-4] == -0x8000000000000000) {
          lVar24 = *(long *)((long)ppuVar4 + -600);
          puVar28 = *(undefined8 **)((long)ppuVar4 + -0x250);
        }
        else {
          uVar32 = puVar12[-3];
          puVar10 = (undefined8 *)puVar12[-2];
          if (puVar10 == (undefined8 *)0x0) {
            lVar24 = 1;
          }
          else {
            lVar24 = _malloc(puVar10);
            if (lVar24 == 0) {
              func_0x0001087c9084(1,puVar10);
              goto LAB_1049bfe60;
            }
          }
          _memcpy(lVar24,uVar32,puVar10);
          *(long *)((long)ppuVar4 + -600) = lVar24;
          *(undefined8 **)((long)ppuVar4 + -0x250) = puVar10;
          puVar28 = puVar10;
        }
      }
LAB_1049bfb24:
      lVar20 = *(long *)((long)ppuVar4 + -0x238);
    }
    else {
      if (lVar24 != 2) {
        *(long *)((long)ppuVar4 + -0x238) = lVar20;
        uVar32 = puVar12[-3];
        puVar10 = (undefined8 *)puVar12[-2];
        if (puVar10 == (undefined8 *)0x0) {
          lVar24 = 1;
        }
        else {
          lVar24 = _malloc(puVar10);
          if (lVar24 == 0) goto LAB_1049bfe04;
        }
        _memcpy(lVar24,uVar32,puVar10);
        puVar28 = puVar10;
        goto LAB_1049bfb24;
      }
      uVar32 = puVar12[3];
      puVar10 = (undefined8 *)puVar12[4];
      if (puVar10 == (undefined8 *)0x0) {
        unaff_x28 = 1;
      }
      else {
        unaff_x28 = _malloc(puVar10);
        if (unaff_x28 == 0) goto LAB_1049bfe04;
      }
      *(undefined8 **)((long)ppuVar4 + -0x240) = puVar10;
      _memcpy(unaff_x28,uVar32,puVar10);
      puVar10 = (undefined8 *)0x8000000000000000;
      lVar24 = 2;
      if (puVar12[-4] != -0x8000000000000000) {
        uVar32 = puVar12[-3];
        puVar10 = (undefined8 *)puVar12[-2];
        if (puVar10 == (undefined8 *)0x0) {
          lVar24 = 1;
        }
        else {
          lVar24 = _malloc(puVar10);
          if (lVar24 == 0) {
            func_0x0001087c9084(1,puVar10);
            goto LAB_1049bfe60;
          }
        }
        _memcpy(lVar24,uVar32,puVar10);
      }
      puVar28 = puVar10;
      if (puVar12[-1] == -0x8000000000000000) {
        puVar17 = *(undefined8 **)((long)ppuVar4 + -0x268);
        lVar20 = *(long *)((long)ppuVar4 + -0x260);
        unaff_x26 = (undefined8 *)0x8000000000000000;
      }
      else {
        uVar32 = *puVar12;
        puVar17 = (undefined8 *)puVar12[1];
        if (puVar17 == (undefined8 *)0x0) {
          lVar20 = 1;
        }
        else {
          lVar20 = _malloc(puVar17);
          if (lVar20 == 0) {
            func_0x0001087c9084(1,puVar17);
            goto LAB_1049bfe60;
          }
        }
        _memcpy(lVar20,uVar32,puVar17);
        *(undefined8 **)((long)ppuVar4 + -0x268) = puVar17;
        *(long *)((long)ppuVar4 + -0x260) = lVar20;
        unaff_x26 = puVar17;
      }
    }
    uVar22 = uVar22 + 1;
    plVar19[-5] = *(long *)((long)ppuVar4 + -0x230);
    plVar19[-4] = (long)puVar10;
    plVar19[-3] = lVar24;
    plVar19[-2] = (long)puVar28;
    plVar19[-1] = (long)unaff_x26;
    *plVar19 = lVar20;
    uVar13 = *(ulong *)((long)ppuVar4 + -0x248);
    lVar24 = *(long *)((long)ppuVar4 + -0x240);
    plVar19[1] = (long)puVar17;
    plVar19[2] = lVar24;
    plVar19[3] = unaff_x28;
    plVar19[4] = lVar24;
    plVar19 = plVar19 + 10;
    puVar12 = puVar12 + 10;
    lVar21 = lVar21 + -0x50;
  } while (uVar13 != uVar22);
LAB_1049bfdd0:
  uVar32 = *(undefined8 *)((long)ppuVar4 + -0x228);
  puVar12 = *(undefined8 **)((long)ppuVar4 + -0x270);
  puVar12[1] = *(undefined8 *)((long)ppuVar4 + -0x220);
  *puVar12 = uVar32;
  puVar12[2] = uVar13;
  return;
LAB_1049bf980:
  do {
    if (lVar20 == 0) break;
    uVar13 = puVar17[-3] ^ 0x8000000000000000;
    if (-1 < (long)puVar17[-3]) {
      uVar13 = 3;
    }
    if ((long)uVar13 < 3) {
      if (uVar13 == 0) {
        uVar32 = 0x8000000000000000;
      }
      else {
        if (uVar13 != 1) {
          *(undefined8 *)((long)ppuVar4 + -400) = 0x8000000000000002;
          goto LAB_1049bf964;
        }
        FUN_1049bff00((undefined1 *)((long)ppuVar4 + -0x188),puVar17[-1],*puVar17);
        uVar32 = 0x8000000000000001;
      }
LAB_1049bf960:
      *(undefined8 *)((long)ppuVar4 + -400) = uVar32;
    }
    else {
      if (4 < (long)uVar13) {
        if (uVar13 == 5) {
          uVar32 = 0x8000000000000005;
        }
        else {
          uVar32 = 0x8000000000000006;
        }
        goto LAB_1049bf960;
      }
      if (uVar13 != 3) {
        uVar32 = 0x8000000000000004;
        goto LAB_1049bf960;
      }
      uVar32 = puVar17[-2];
      lVar24 = puVar17[-1];
      if (lVar24 == 0) {
        lVar21 = 1;
      }
      else {
        lVar21 = _malloc(lVar24);
        if (lVar21 == 0) {
          func_0x0001087c9084(1,lVar24);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1049bfa84);
          (*pcVar3)();
        }
      }
      _memcpy(lVar21,uVar32,lVar24);
      *(long *)((long)ppuVar4 + -400) = lVar24;
      *(long *)((long)ppuVar4 + -0x188) = lVar21;
      *(long *)((long)ppuVar4 + -0x180) = lVar24;
      *(undefined1 *)((long)ppuVar4 + -0x178) = *(undefined1 *)puVar17;
    }
LAB_1049bf964:
    uVar26 = uVar26 + 1;
    uVar32 = *(undefined8 *)((long)ppuVar4 + -400);
    uVar33 = *(undefined8 *)((long)ppuVar4 + -0x178);
    uVar25 = *(undefined8 *)((long)ppuVar4 + -0x180);
    puVar10[1] = *(undefined8 *)((long)ppuVar4 + -0x188);
    *puVar10 = uVar32;
    puVar10[3] = uVar33;
    puVar10[2] = uVar25;
    puVar17 = puVar17 + 4;
    lVar20 = lVar20 + -0x20;
    puVar10 = puVar10 + 4;
  } while (uVar22 != uVar26);
LAB_1049bfa44:
  uVar32 = *(undefined8 *)((long)ppuVar4 + -0x1a8);
  puVar12 = *(undefined8 **)((long)ppuVar4 + -0x1b0);
  puVar12[1] = *(undefined8 *)((long)ppuVar4 + -0x1a0);
  *puVar12 = uVar32;
  puVar12[2] = uVar22;
  return;
  while( true ) {
    lVar20 = plVar19[3];
    lVar21 = plVar19[4];
    plVar11 = (long *)0x8000000000000000;
    if (*plVar19 != -0x8000000000000000) {
      lVar9 = plVar27[-1];
      plVar11 = (long *)*plVar27;
      if (plVar11 == (long *)0x0) {
        unaff_x24 = 1;
      }
      else {
        unaff_x24 = _malloc(plVar11);
        if (unaff_x24 == 0) {
          func_0x0001087c9084(1,plVar11);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1049bf8d8);
          (*pcVar3)();
        }
      }
      _memcpy(unaff_x24,lVar9,plVar11);
      uVar26 = *(ulong *)((long)ppuVar4 + -0x100);
      unaff_x23 = plVar11;
    }
    plVar19 = plVar19 + 5;
    uVar22 = uVar22 + 1;
    plVar30[-2] = (long)plVar11;
    plVar30[-1] = unaff_x24;
    *plVar30 = (long)unaff_x23;
    plVar30[1] = lVar20;
    plVar27 = plVar27 + 5;
    lVar24 = lVar24 + -0x28;
    plVar30[2] = lVar21;
    plVar30 = plVar30 + 5;
    if (uVar26 == uVar22) break;
LAB_1049bf85c:
    if (lVar24 == 0) break;
  }
LAB_1049bf898:
  uVar32 = *(undefined8 *)((long)ppuVar4 + -0xf8);
  puVar12 = *(undefined8 **)((long)ppuVar4 + -0x108);
  puVar12[1] = *(undefined8 *)((long)ppuVar4 + -0xf0);
  *puVar12 = uVar32;
  puVar12[2] = uVar26;
  return;
  while( true ) {
    uVar32 = *(undefined8 *)(lVar24 + 8);
    lVar20 = *(long *)(lVar24 + 0x10);
    if (lVar20 == 0) {
      lVar9 = 1;
    }
    else {
      lVar9 = _malloc(lVar20);
      if (lVar9 == 0) {
        func_0x0001087c9084(1,lVar20);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1049bf764);
        (*pcVar3)();
      }
    }
    lVar24 = lVar24 + 0x18;
    uVar26 = uVar26 + 1;
    _memcpy(lVar9,uVar32,lVar20);
    plVar19[-2] = lVar20;
    plVar19[-1] = lVar9;
    lVar21 = lVar21 + -0x18;
    *plVar19 = lVar20;
    plVar19 = plVar19 + 3;
    if (uVar22 == uVar26) break;
LAB_1049bf738:
    if (lVar21 == 0) break;
  }
LAB_1049bf76c:
  uVar32 = *(undefined8 *)((long)ppuVar4 + -0x78);
  puVar12[1] = *(undefined8 *)((long)ppuVar4 + -0x70);
  *puVar12 = uVar32;
  puVar12[2] = uVar22;
  return;
}

