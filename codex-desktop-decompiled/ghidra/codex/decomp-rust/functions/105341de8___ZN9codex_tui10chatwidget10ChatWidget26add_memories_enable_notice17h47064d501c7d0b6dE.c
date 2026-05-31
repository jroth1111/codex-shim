
void __ZN9codex_tui10chatwidget10ChatWidget26add_memories_enable_notice17h47064d501c7d0b6dE
               (long param_1)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong in_xzr;
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  ulong uStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  undefined8 auStack_260 [37];
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puStack_50 = (undefined8 *)_malloc(0x2d);
  if (puStack_50 != (undefined8 *)0x0) {
    puStack_50[1] = 0x6562206c6c697720;
    *puStack_50 = 0x736569726f6d654d;
    puStack_50[3] = 0x20656874206e6920;
    puStack_50[2] = 0x64656c62616e6520;
    *(undefined8 *)((long)puStack_50 + 0x25) = 0x2e6e6f6973736573;
    *(undefined8 *)((long)puStack_50 + 0x1d) = 0x207478656e206568;
    uStack_58 = 0x2d;
    uStack_48 = 0x2d;
    __ZN9codex_tui12history_cell7notices17new_warning_event17hd7470615f1416139E
              (&uStack_e8,&uStack_58);
    puVar6 = (undefined8 *)_malloc(0x90);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[0xd] = uStack_80;
      puVar6[0xc] = uStack_88;
      puVar6[0xf] = uStack_70;
      puVar6[0xe] = uStack_78;
      puVar6[0x11] = uStack_60;
      puVar6[0x10] = uStack_68;
      puVar6[5] = uStack_c0;
      puVar6[4] = uStack_c8;
      puVar6[7] = uStack_b0;
      puVar6[6] = uStack_b8;
      puVar6[9] = uStack_a0;
      puVar6[8] = uStack_a8;
      puVar6[0xb] = uStack_90;
      puVar6[10] = uStack_98;
      puVar6[1] = uStack_e0;
      *puVar6 = uStack_e8;
      puVar6[3] = uStack_d0;
      puVar6[2] = uStack_d8;
      func_0x00010533d4b0(param_1,puVar6,&UNK_10b37ccb0);
      lVar15 = *(long *)(param_1 + 0x5278);
      auVar25 = func_0x000106032954(8);
      uVar4 = *(ulong *)(lVar15 + 0x1c0);
      while( true ) {
        if ((uVar4 & 1) != 0) {
          return;
        }
        if (uVar4 == 0xfffffffffffffffe) break;
        uVar20 = uVar4 + 2;
        uVar21 = *(ulong *)(lVar15 + 0x1c0);
        bVar3 = uVar21 == uVar4;
        uVar4 = uVar21;
        if (bVar3) {
          *(ulong *)(lVar15 + 0x1c0) = uVar20;
          LOAcquire();
          uVar4 = *(ulong *)(lVar15 + 0x88);
          *(ulong *)(lVar15 + 0x88) = uVar4 + 1;
          lVar7 = func_0x000105217788(lVar15 + 0x80,uVar4);
          *(undefined1 (*) [12])(lVar7 + (uVar4 & 0x1f) * 0x10) = auVar25;
          *(ulong *)(lVar7 + 0x210) = *(ulong *)(lVar7 + 0x210) | 1L << (uVar4 & 0x1f);
          LORelease();
          puVar1 = (ulong *)(lVar15 + 0x110);
          LOAcquire();
          uVar4 = *puVar1;
          *puVar1 = uVar4 | 2;
          LORelease();
          if (uVar4 == 0) {
            lVar7 = *(long *)(lVar15 + 0x100);
            *(undefined8 *)(lVar15 + 0x100) = 0;
            uVar4 = *puVar1;
            *puVar1 = in_xzr;
            LORelease();
            if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105341cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar7 + 8))(uVar4,*(undefined8 *)(lVar15 + 0x108));
              return;
            }
          }
          return;
        }
      }
      __ZN3std7process5abort17hdc01e45e25b715e8E();
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x90);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x105341d0c);
    (*pcVar2)();
  }
  uVar8 = func_0x0001087c9084(1,0x2d);
  FUN_1051a6a08(&uStack_e8);
  lVar9 = __Unwind_Resume(uVar8);
  auStack_260[0] = 0x8000000000000001;
  FUN_105344ac8(lVar9,auStack_260);
  lVar15 = *(long *)(lVar9 + 0x4788);
  lVar7 = *(long *)(lVar9 + 0x4790);
  *(undefined8 *)(lVar9 + 0x4790) = 0;
  for (; lVar7 != 0; lVar7 = lVar7 + -1) {
    FUN_1051aa0fc(lVar15);
    lVar15 = lVar15 + 0x60;
  }
  FUN_10539d1e0(lVar9);
  puStack_130 = (undefined8 *)_malloc(0x22);
  if (puStack_130 != (undefined8 *)0x0) {
    *(undefined2 *)(puStack_130 + 4) = 0x2e73;
    puStack_130[1] = 0x636162206c6c6120;
    *puStack_130 = 0x676e6970706f7453;
    puStack_130[3] = 0x6c616e696d726574;
    puStack_130[2] = 0x20646e756f72676b;
    uStack_138 = 0x22;
    uStack_128 = 0x22;
    auStack_260[0] = 0x8000000000000000;
    __ZN9codex_tui10chatwidget10ChatWidget16add_info_message17h49887c2279bddcacE
              (lVar9,&uStack_138,auStack_260);
    return;
  }
  auVar24 = func_0x0001087c9084(1,0x22);
  uVar8 = auVar24._8_8_;
  lVar15 = auVar24._0_8_;
  uVar20 = *(ulong *)(lVar15 + 0x47c8);
  uVar4 = 0;
  uStack_420 = uVar20;
  if (uVar20 == 0) {
    uVar21 = 0;
LAB_105341e70:
    if (uVar21 < uVar20) {
      lVar7 = *(long *)(lVar15 + 0x47c0);
      uVar22 = *(ulong *)(lVar15 + 0x47b0);
      uVar13 = uVar4;
      if (uVar4 <= uVar20) {
        uVar13 = uVar20;
      }
      lVar9 = *(long *)(lVar15 + 0x47b8);
      do {
        lVar16 = lVar9 + (lVar7 + uVar21) * 0x150;
        while( true ) {
          uVar14 = uVar21;
          uVar21 = 0;
          if (uVar22 <= lVar7 + uVar14) {
            uVar21 = uVar22;
          }
          uVar10 = lVar16 + uVar21 * -0x150;
          uVar21 = FUN_105200568(uVar8,uVar10);
          if ((uVar21 & 1) != 0) break;
          lVar16 = lVar16 + 0x150;
          uVar21 = uVar14 + 1;
          if (uVar20 <= uVar14 + 1) goto LAB_105341f40;
        }
        if (uVar4 == uVar13) goto LAB_1053424f4;
        uVar21 = 0;
        if (uVar22 <= uVar4 + lVar7) {
          uVar21 = uVar22;
        }
        lVar16 = lVar9 + ((uVar4 + lVar7) - uVar21) * 0x150;
        _memcpy(&lStack_418,lVar16,0x150);
        _memmove(lVar16,uVar10,0x150);
        _memcpy(uVar10,&lStack_418,0x150);
        uVar21 = uVar14 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar21 < uVar20);
LAB_105341f40:
      uVar21 = uVar14 + 1;
    }
    if ((uVar21 != uVar4) && (uVar4 < uVar20)) {
      uVar13 = *(ulong *)(lVar15 + 0x47b0);
      uVar21 = 0;
      if (uVar13 <= *(ulong *)(lVar15 + 0x47c0)) {
        uVar21 = uVar13;
      }
      lVar7 = *(ulong *)(lVar15 + 0x47c0) - uVar21;
      if (uVar20 <= uVar13 - lVar7) {
        uVar13 = lVar7 + uVar20;
      }
      lVar9 = *(long *)(lVar15 + 0x47b8);
      *(ulong *)(lVar15 + 0x47c8) = uVar4;
      uVar13 = uVar13 - lVar7;
      uStack_420 = uVar4;
      if (uVar4 < uVar13 || uVar4 - uVar13 == 0) {
        lVar16 = (uVar13 - uVar4) + 1;
        lVar7 = lVar9 + lVar7 * 0x150 + uVar4 * 0x150;
        while (lVar16 = lVar16 + -1, lVar16 != 0) {
          FUN_10519f598(lVar7);
          lVar7 = lVar7 + 0x150;
        }
        lVar7 = (uVar20 - uVar13) + 1;
        while (lVar7 = lVar7 + -1, lVar7 != 0) {
          FUN_10519f598(lVar9);
          lVar9 = lVar9 + 0x150;
        }
      }
      else {
        lVar7 = (uVar20 - uVar4) + 1;
        lVar9 = lVar9 + (uVar4 - uVar13) * 0x150;
        while (lVar7 = lVar7 + -1, lVar7 != 0) {
          FUN_10519f598(lVar9);
          lVar9 = lVar9 + 0x150;
        }
      }
    }
  }
  else {
    lVar9 = *(long *)(lVar15 + 0x47c0);
    uVar13 = *(ulong *)(lVar15 + 0x47b0);
    lVar7 = *(long *)(lVar15 + 0x47b8) + lVar9 * 0x150;
    do {
      uVar21 = 0;
      if (uVar13 <= lVar9 + uVar4) {
        uVar21 = uVar13;
      }
      iVar5 = FUN_105200568(uVar8,lVar7 + uVar21 * -0x150);
      uVar21 = uVar4 + 1;
      if (iVar5 == 0) goto LAB_105341e70;
      lVar7 = lVar7 + 0x150;
      uVar4 = uVar21;
    } while (uVar20 != uVar21);
  }
  uVar21 = *(ulong *)(lVar15 + 0x10b8);
  uVar4 = uVar21;
  if (uVar21 == 0) {
    uVar22 = 0;
    uVar13 = 0;
LAB_105342074:
    if (uVar13 < uVar21) {
      lVar7 = *(long *)(lVar15 + 0x10b0);
      uVar17 = *(ulong *)(lVar15 + 0x10a0);
      uVar14 = uVar22;
      if (uVar22 <= uVar21) {
        uVar14 = uVar21;
      }
      lVar9 = *(long *)(lVar15 + 0x10a8);
      do {
        lVar16 = lVar9 + (lVar7 + uVar13) * 0x130;
        while( true ) {
          uVar23 = uVar13;
          uVar13 = 0;
          if (uVar17 <= lVar7 + uVar23) {
            uVar13 = uVar17;
          }
          uVar10 = lVar16 + uVar13 * -0x130;
          iVar5 = FUN_105414750(uVar10,uVar8);
          if (iVar5 == 0) break;
          lVar16 = lVar16 + 0x130;
          uVar13 = uVar23 + 1;
          if (uVar21 <= uVar23 + 1) goto LAB_105342150;
        }
        if (uVar22 == uVar14) goto LAB_1053424f4;
        uVar13 = 0;
        if (uVar17 <= uVar22 + lVar7) {
          uVar13 = uVar17;
        }
        lVar16 = lVar9 + ((uVar22 + lVar7) - uVar13) * 0x130;
        _memcpy(&lStack_418,lVar16,0x130);
        _memmove(lVar16,uVar10,0x130);
        _memcpy(uVar10,&lStack_418,0x130);
        uVar13 = uVar23 + 1;
        uVar22 = uVar22 + 1;
      } while (uVar13 < uVar21);
LAB_105342150:
      uVar13 = uVar23 + 1;
    }
    if ((uVar13 != uVar22) && (uVar22 < uVar21)) {
      uVar13 = *(ulong *)(lVar15 + 0x10a0);
      uVar4 = 0;
      if (uVar13 <= *(ulong *)(lVar15 + 0x10b0)) {
        uVar4 = uVar13;
      }
      lVar9 = *(ulong *)(lVar15 + 0x10b0) - uVar4;
      uVar4 = uVar13 - lVar9;
      lVar7 = 0;
      if (uVar4 <= uVar21) {
        lVar7 = uVar21 - uVar4;
      }
      if (uVar21 <= uVar4) {
        uVar13 = lVar9 + uVar21;
      }
      lVar12 = *(long *)(lVar15 + 0x10a8);
      *(ulong *)(lVar15 + 0x10b8) = uVar22;
      uVar13 = uVar13 - lVar9;
      lVar16 = uVar22 - uVar13;
      if (uVar22 < uVar13 || lVar16 == 0) {
        FUN_1051a49e8(lVar12 + lVar9 * 0x130 + uVar22 * 0x130,uVar13 - uVar22);
      }
      else {
        lVar7 = lVar7 - lVar16;
        lVar12 = lVar12 + lVar16 * 0x130;
      }
      FUN_1051a49e8(lVar12,lVar7);
      uVar4 = uVar22;
    }
  }
  else {
    lVar9 = *(long *)(lVar15 + 0x10b0);
    uVar14 = *(ulong *)(lVar15 + 0x10a0);
    lVar7 = *(long *)(lVar15 + 0x10a8) + lVar9 * 0x130;
    uVar22 = 0;
    do {
      uVar13 = 0;
      if (uVar14 <= lVar9 + uVar22) {
        uVar13 = uVar14;
      }
      uVar10 = FUN_105414750(lVar7 + uVar13 * -0x130,uVar8);
      uVar13 = uVar22 + 1;
      if ((uVar10 & 1) != 0) goto LAB_105342074;
      lVar7 = lVar7 + 0x130;
      uVar22 = uVar13;
    } while (uVar21 != uVar13);
  }
  bVar3 = uVar4 != uVar21;
  uVar10 = *(ulong *)(lVar15 + 0x1098);
  if (uVar10 == 0) {
    if (uVar4 != uVar21) {
      lVar7 = *(long *)(lVar15 + 0x1ab8);
      auVar24 = func_0x000106032954(8);
      uVar10 = auVar24._8_8_;
      uVar4 = *(ulong *)(lVar7 + 0x1c0);
      do {
        if ((uVar4 & 1) != 0) goto LAB_105342424;
        if (uVar4 == 0xfffffffffffffffe) goto LAB_1053424f0;
        uVar20 = uVar4 + 2;
        uVar21 = *(ulong *)(lVar7 + 0x1c0);
        bVar3 = uVar21 != uVar4;
        uVar4 = uVar21;
      } while (bVar3);
      *(ulong *)(lVar7 + 0x1c0) = uVar20;
      goto LAB_1053423c8;
    }
LAB_105342354:
    if (uStack_420 == uVar20) {
      return;
    }
  }
  else {
    lStack_418 = 0;
    lStack_410 = 8;
    lStack_408 = 0;
    lVar7 = *(long *)(lVar15 + 0x1090);
    uVar4 = uVar10;
    do {
      puVar6 = (undefined8 *)(lVar7 + uVar4 * 0x10);
      do {
        puVar18 = puVar6;
        uVar21 = uVar4;
        if (uVar21 == 0) {
          if (bVar3) goto LAB_10534227c;
          if (lStack_418 != 0) {
            _free(lStack_410);
          }
          goto LAB_105342354;
        }
        puVar6 = puVar18 + -2;
        uVar13 = (**(code **)(puVar18[-1] + 0xb8))(*puVar6,uVar8);
        uVar4 = uVar21 - 1;
      } while ((uVar13 & 1) == 0);
      iVar5 = (**(code **)(puVar18[-1] + 0x40))(*puVar6);
      lVar9 = lStack_408;
      if (iVar5 != 0) {
        if (lStack_408 == lStack_418) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hc77b273336fd4d94E(&lStack_418);
        }
        *(ulong *)(lStack_410 + lVar9 * 8) = uVar4;
        lStack_408 = lVar9 + 1;
      }
      bVar3 = true;
    } while (uVar21 - 2 < uVar10);
    if (uVar4 != 0) {
      func_0x000108a07bdc(uVar21 - 2,uVar10,&UNK_10b3806c8);
      goto LAB_105342530;
    }
LAB_10534227c:
    lVar16 = lStack_410;
    lVar9 = lStack_418;
    if (lStack_408 == 0) {
      bVar3 = false;
    }
    else {
      lVar12 = 0;
      lVar19 = lStack_408 * 8;
      lVar11 = uVar10 * 0x10;
      do {
        lVar11 = lVar11 + -0x10;
        uVar4 = *(ulong *)(lVar16 + lVar12);
        if (uVar10 <= uVar4) goto LAB_10534250c;
        puVar6 = (undefined8 *)(lVar7 + uVar4 * 0x10);
        uVar8 = *puVar6;
        puVar18 = (undefined8 *)puVar6[1];
        _memmove(puVar6,puVar6 + 2,lVar11 + uVar4 * -0x10);
        uVar10 = uVar10 - 1;
        *(ulong *)(lVar15 + 0x1098) = uVar10;
        pcVar2 = (code *)*puVar18;
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(uVar8);
        }
        if (puVar18[1] != 0) {
          _free(uVar8);
        }
        lVar12 = lVar12 + 8;
      } while (lVar19 - lVar12 != 0);
      bVar3 = uVar10 == 0;
    }
    if (lVar9 != 0) {
      _free(lVar16);
    }
    if (bVar3) {
      FUN_1053e5ee0(lVar15);
    }
    lVar7 = *(long *)(lVar15 + 0x1ab8);
    auVar24 = func_0x000106032954(8);
    uVar10 = auVar24._8_8_;
    uVar4 = *(ulong *)(lVar7 + 0x1c0);
    do {
      if ((uVar4 & 1) != 0) goto LAB_105342424;
      if (uVar4 == 0xfffffffffffffffe) goto LAB_1053424f0;
      uVar20 = uVar4 + 2;
      uVar21 = *(ulong *)(lVar7 + 0x1c0);
      bVar3 = uVar21 != uVar4;
      uVar4 = uVar21;
    } while (bVar3);
    *(ulong *)(lVar7 + 0x1c0) = uVar20;
LAB_1053423c8:
    uVar10 = auVar24._8_8_;
    LOAcquire();
    uVar4 = *(ulong *)(lVar7 + 0x88);
    *(ulong *)(lVar7 + 0x88) = uVar4 + 1;
    lVar9 = func_0x000105217788(lVar7 + 0x80,uVar4);
    puVar6 = (undefined8 *)(lVar9 + (uVar4 & 0x1f) * 0x10);
    *puVar6 = auVar24._0_8_;
    *(int *)(puVar6 + 1) = auVar24._8_4_;
    *(ulong *)(lVar9 + 0x210) = *(ulong *)(lVar9 + 0x210) | 1L << (uVar4 & 0x1f);
    LORelease();
    puVar1 = (ulong *)(lVar7 + 0x110);
    LOAcquire();
    uVar4 = *puVar1;
    *puVar1 = uVar4 | 2;
    LORelease();
    if (uVar4 == 0) {
      lVar9 = *(long *)(lVar7 + 0x100);
      *(undefined8 *)(lVar7 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar9 != 0) {
        (**(code **)(lVar9 + 8))(*(undefined8 *)(lVar7 + 0x108));
      }
    }
  }
LAB_105342424:
  lVar15 = *(long *)(lVar15 + 0x5278);
  auVar25 = func_0x000106032954(8);
  uVar4 = *(ulong *)(lVar15 + 0x1c0);
  while( true ) {
    if ((uVar4 & 1) != 0) {
      return;
    }
    if (uVar4 == 0xfffffffffffffffe) break;
    uVar20 = uVar4 + 2;
    uVar21 = *(ulong *)(lVar15 + 0x1c0);
    bVar3 = uVar21 == uVar4;
    uVar4 = uVar21;
    if (bVar3) {
      *(ulong *)(lVar15 + 0x1c0) = uVar20;
      LOAcquire();
      uVar4 = *(ulong *)(lVar15 + 0x88);
      *(ulong *)(lVar15 + 0x88) = uVar4 + 1;
      lVar7 = func_0x000105217788(lVar15 + 0x80,uVar4);
      *(undefined1 (*) [12])(lVar7 + (uVar4 & 0x1f) * 0x10) = auVar25;
      *(ulong *)(lVar7 + 0x210) = *(ulong *)(lVar7 + 0x210) | 1L << (uVar4 & 0x1f);
      LORelease();
      puVar1 = (ulong *)(lVar15 + 0x110);
      LOAcquire();
      uVar4 = *puVar1;
      *puVar1 = uVar4 | 2;
      LORelease();
      if (uVar4 == 0) {
        lVar7 = *(long *)(lVar15 + 0x100);
        *(undefined8 *)(lVar15 + 0x100) = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar7 != 0) {
          (**(code **)(lVar7 + 8))(*(undefined8 *)(lVar15 + 0x108));
        }
      }
      return;
    }
  }
LAB_1053424f0:
  __ZN3std7process5abort17hdc01e45e25b715e8E();
LAB_1053424f4:
  uVar4 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108eeae56,0x20,&UNK_10b375800);
LAB_10534250c:
  func_0x0001087c9024(uVar4,uVar10,&UNK_10b3806b0);
LAB_105342530:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x105342534);
  (*pcVar2)();
}

