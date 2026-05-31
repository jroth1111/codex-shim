
/* WARNING: Type propagation algorithm not settling */

long __ZN9codex_tui10chatwidget11interaction51__LT_impl_u20_codex_tui__chatwidget__ChatWidget_GT_19show_selection_view17hb8bbdc6098a34dc8E
               (long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *plVar14;
  undefined8 unaff_x24;
  long lVar15;
  ulong in_xzr;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  long *plStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  __ZN9codex_tui11bottom_pane10BottomPane19show_selection_view17h0090d0eaa43fb00cE();
  uVar10 = FUN_1053d0000(param_1);
  if (uVar10 != *(byte *)(param_1 + 0x926)) {
    *(char *)(param_1 + 0x926) = (char)uVar10;
    unaff_x23 = *(long *)(param_1 + 0x1ab8);
    auVar16 = func_0x000106032954(8);
    unaff_x21 = auVar16._8_8_;
    uVar8 = *(ulong *)(unaff_x23 + 0x1c0);
    do {
      if ((uVar8 & 1) != 0) goto LAB_105357334;
      if (uVar8 == 0xfffffffffffffffe) goto LAB_1053573f8;
      uVar1 = uVar8 + 2;
      uVar5 = *(ulong *)(unaff_x23 + 0x1c0);
      bVar7 = uVar5 != uVar8;
      uVar8 = uVar5;
    } while (bVar7);
    *(ulong *)(unaff_x23 + 0x1c0) = uVar1;
    unaff_x24 = 1;
    LOAcquire();
    uVar8 = *(ulong *)(unaff_x23 + 0x88);
    *(ulong *)(unaff_x23 + 0x88) = uVar8 + 1;
    lVar11 = func_0x000105217788(unaff_x23 + 0x80,uVar8);
    puVar4 = (undefined8 *)(lVar11 + (uVar8 & 0x1f) * 0x10);
    *puVar4 = auVar16._0_8_;
    *(int *)(puVar4 + 1) = auVar16._8_4_;
    *(ulong *)(lVar11 + 0x210) = *(ulong *)(lVar11 + 0x210) | 1L << (uVar8 & 0x1f);
    LORelease();
    puVar2 = (ulong *)(unaff_x23 + 0x110);
    LOAcquire();
    uVar8 = *puVar2;
    *puVar2 = uVar8 | 2;
    LORelease();
    if (uVar8 == 0) {
      lVar11 = *(long *)(unaff_x23 + 0x100);
      *(undefined8 *)(unaff_x23 + 0x100) = 0;
      *puVar2 = in_xzr;
      LORelease();
      if (lVar11 != 0) {
        (**(code **)(lVar11 + 8))(*(undefined8 *)(unaff_x23 + 0x108));
      }
    }
  }
LAB_105357334:
  unaff_x22 = *(long *)(param_1 + 0x5278);
  auVar17 = func_0x000106032954(8);
  auVar16._8_8_ = unaff_x21;
  auVar16._0_8_ = auVar17._8_8_;
  param_1 = auVar17._0_8_;
  uVar8 = *(ulong *)(unaff_x22 + 0x1c0);
  while( true ) {
    if ((uVar8 & 1) != 0) {
      return param_1;
    }
    if (uVar8 == 0xfffffffffffffffe) break;
    uVar1 = uVar8 + 2;
    uVar5 = *(ulong *)(unaff_x22 + 0x1c0);
    bVar7 = uVar5 == uVar8;
    uVar8 = uVar5;
    if (bVar7) {
      *(ulong *)(unaff_x22 + 0x1c0) = uVar1;
      LOAcquire();
      uVar8 = *(ulong *)(unaff_x22 + 0x88);
      *(ulong *)(unaff_x22 + 0x88) = uVar8 + 1;
      lVar11 = func_0x000105217788(unaff_x22 + 0x80,uVar8);
      plVar13 = (long *)(lVar11 + (uVar8 & 0x1f) * 0x10);
      *plVar13 = param_1;
      *(int *)(plVar13 + 1) = auVar17._8_4_;
      *(ulong *)(lVar11 + 0x210) = *(ulong *)(lVar11 + 0x210) | 1L << (uVar8 & 0x1f);
      LORelease();
      puVar2 = (ulong *)(unaff_x22 + 0x110);
      LOAcquire();
      uVar8 = *puVar2;
      *puVar2 = uVar8 | 2;
      LORelease();
      if (uVar8 == 0) {
        lVar15 = *(long *)(unaff_x22 + 0x100);
        lVar11 = *(long *)(unaff_x22 + 0x108);
        *(undefined8 *)(unaff_x22 + 0x100) = 0;
        uVar8 = *puVar2;
        *puVar2 = in_xzr;
        LORelease();
        if (lVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001053573f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar11 = (**(code **)(lVar15 + 8))(uVar8,lVar11);
          return lVar11;
        }
      }
      return lVar11;
    }
  }
LAB_1053573f8:
  auVar17 = __ZN3std7process5abort17hdc01e45e25b715e8E();
  plVar13 = auVar17._8_8_;
  lVar11 = auVar17._0_8_;
  uStack_48 = 0x1053573fc;
  plStack_88 = plVar13;
  uStack_80 = unaff_x24;
  lStack_78 = unaff_x23;
  lStack_70 = unaff_x22;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar11 + 0x1098) == 0) {
LAB_105357440:
    uStack_68 = auVar16._8_8_;
    uStack_60 = auVar16._0_8_;
    auVar16 = func_0x000106032954(8);
    uVar8 = FUN_105400770(lVar11,auVar16._0_8_,auVar16._8_8_);
    if ((uVar8 & 1) != 0) goto LAB_105357464;
    if (*(long *)(lVar11 + 0x1098) == 0) {
      bVar9 = *(byte *)(lVar11 + 0x5ca);
    }
    else {
      lVar15 = *(long *)(lVar11 + 0x1090) + *(long *)(lVar11 + 0x1098) * 0x10;
      bVar9 = (**(code **)(*(long *)(lVar15 + -8) + 0x98))(*(undefined8 *)(lVar15 + -0x10));
      bVar9 = bVar9 | *(byte *)(lVar11 + 0x5ca);
    }
    if ((((bVar9 & 1) == 0) && (*(long *)(lVar11 + 0x588) == 0)) &&
       (*(int *)(lVar11 + 0x590) == 0x110000)) {
      lVar11 = 0;
      LOAcquire();
      lVar15 = plVar13[0x39];
      plVar13[0x39] = lVar15 + -1;
      LORelease();
      goto joined_r0x0001053576fc;
    }
    auVar18 = func_0x000106032954(8);
    uVar10 = auVar18._8_4_;
    lVar11 = auVar18._0_8_;
    if (uVar10 < 991000000) {
      iVar3 = uVar10 + 9000000;
    }
    else {
      bVar7 = SCARRY8(lVar11,1);
      lVar11 = lVar11 + 1;
      if (bVar7) {
LAB_105357780:
        func_0x000108a079f0(&UNK_109bd7235,0x28,&UNK_10b4aef18);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10535779c);
        (*pcVar6)();
      }
      iVar3 = uVar10 + 0xc4ee8a40;
    }
    auVar18._8_4_ = iVar3;
    auVar18._0_8_ = lVar11;
    uVar8 = plVar13[0x38];
    do {
      if ((uVar8 & 1) != 0) {
        lVar11 = 1;
        LOAcquire();
        lVar15 = plVar13[0x39];
        plVar13[0x39] = lVar15 + -1;
        LORelease();
        goto joined_r0x0001053576fc;
      }
      if (uVar8 == 0xfffffffffffffffe) goto LAB_10535777c;
      uVar1 = uVar8 + 2;
      uVar5 = plVar13[0x38];
      bVar7 = uVar5 != uVar8;
      uVar8 = uVar5;
    } while (bVar7);
    plVar13[0x38] = uVar1;
    LOAcquire();
    uVar8 = plVar13[0x11];
    plVar13[0x11] = uVar8 + 1;
    lVar15 = func_0x000105217788(plVar13 + 0x10,uVar8);
    plVar14 = plVar13;
  }
  else {
    lVar15 = *(long *)(lVar11 + 0x1090) + *(long *)(lVar11 + 0x1098) * 0x10;
    uStack_68 = auVar16._8_8_;
    uStack_60 = auVar16._0_8_;
    uVar8 = (**(code **)(*(long *)(lVar15 + -8) + 0x90))(*(undefined8 *)(lVar15 + -0x10));
    auVar16._8_8_ = uStack_68;
    auVar16._0_8_ = uStack_60;
    if ((uVar8 & 1) == 0) goto LAB_105357440;
LAB_105357464:
    uVar10 = FUN_1053d0000(lVar11);
    if (uVar10 != *(byte *)(lVar11 + 0x926)) {
      *(char *)(lVar11 + 0x926) = (char)uVar10;
      lVar15 = *(long *)(lVar11 + 0x1ab8);
      auVar18 = func_0x000106032954(8);
      uVar8 = *(ulong *)(lVar15 + 0x1c0);
      do {
        if ((uVar8 & 1) != 0) goto LAB_105357520;
        if (uVar8 == 0xfffffffffffffffe) goto LAB_10535777c;
        uVar1 = uVar8 + 2;
        uVar5 = *(ulong *)(lVar15 + 0x1c0);
        bVar7 = uVar5 != uVar8;
        uVar8 = uVar5;
      } while (bVar7);
      *(ulong *)(lVar15 + 0x1c0) = uVar1;
      LOAcquire();
      uVar8 = *(ulong *)(lVar15 + 0x88);
      *(ulong *)(lVar15 + 0x88) = uVar8 + 1;
      lVar12 = func_0x000105217788(lVar15 + 0x80,uVar8);
      *(undefined1 (*) [12])(lVar12 + (uVar8 & 0x1f) * 0x10) = auVar18;
      *(ulong *)(lVar12 + 0x210) = *(ulong *)(lVar12 + 0x210) | 1L << (uVar8 & 0x1f);
      LORelease();
      puVar2 = (ulong *)(lVar15 + 0x110);
      LOAcquire();
      uVar8 = *puVar2;
      *puVar2 = uVar8 | 2;
      LORelease();
      if (uVar8 == 0) {
        lVar12 = *(long *)(lVar15 + 0x100);
        *(undefined8 *)(lVar15 + 0x100) = 0;
        *puVar2 = in_xzr;
        LORelease();
        if (lVar12 != 0) {
          (**(code **)(lVar12 + 8))(*(undefined8 *)(lVar15 + 0x108));
        }
      }
    }
LAB_105357520:
    plVar14 = *(long **)(lVar11 + 0x5278);
    auVar18 = func_0x000106032954(8);
    uVar8 = plVar14[0x38];
    do {
      if ((uVar8 & 1) != 0) goto LAB_1053576cc;
      if (uVar8 == 0xfffffffffffffffe) goto LAB_10535777c;
      uVar1 = uVar8 + 2;
      uVar5 = plVar14[0x38];
      bVar7 = uVar5 != uVar8;
      uVar8 = uVar5;
    } while (bVar7);
    plVar14[0x38] = uVar1;
    LOAcquire();
    uVar8 = plVar14[0x11];
    plVar14[0x11] = uVar8 + 1;
    lVar15 = func_0x000105217788(plVar14 + 0x10,uVar8);
  }
  *(undefined1 (*) [12])(lVar15 + (uVar8 & 0x1f) * 0x10) = auVar18;
  lVar11 = 1;
  *(ulong *)(lVar15 + 0x210) = *(ulong *)(lVar15 + 0x210) | 1L << (uVar8 & 0x1f);
  LORelease();
  puVar2 = (ulong *)(plVar14 + 0x22);
  LOAcquire();
  uVar8 = *puVar2;
  *puVar2 = uVar8 | 2;
  LORelease();
  if (uVar8 == 0) {
    lVar11 = plVar14[0x20];
    plVar14[0x20] = 0;
    *puVar2 = in_xzr;
    LORelease();
    if (lVar11 != 0) {
      (**(code **)(lVar11 + 8))(plVar14[0x21]);
    }
LAB_1053576cc:
    lVar11 = 1;
    LOAcquire();
    lVar15 = plVar13[0x39];
    plVar13[0x39] = lVar15 + -1;
    LORelease();
  }
  else {
    LOAcquire();
    lVar15 = plVar13[0x39];
    plVar13[0x39] = lVar15 + -1;
    LORelease();
  }
joined_r0x0001053576fc:
  if (lVar15 == 1) {
    LOAcquire();
    lVar15 = plVar13[0x11];
    plVar13[0x11] = lVar15 + 1;
    lVar15 = func_0x000105217788(plVar13 + 0x10,lVar15);
    *(ulong *)(lVar15 + 0x210) = *(ulong *)(lVar15 + 0x210) | 0x200000000;
    LORelease();
    puVar2 = (ulong *)(plVar13 + 0x22);
    LOAcquire();
    uVar8 = *puVar2;
    *puVar2 = uVar8 | 2;
    LORelease();
    if (uVar8 == 0) {
      lVar15 = plVar13[0x20];
      plVar13[0x20] = 0;
      *puVar2 = in_xzr;
      LORelease();
      if (lVar15 != 0) {
        (**(code **)(lVar15 + 8))(plVar13[0x21]);
      }
    }
  }
  lVar15 = *plVar13;
  *plVar13 = lVar15 + -1;
  LORelease();
  if (lVar15 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7e00aa8d0633d1edE(&plStack_88);
  }
  return lVar11;
LAB_10535777c:
  __ZN3std7process5abort17hdc01e45e25b715e8E();
  goto LAB_105357780;
}

