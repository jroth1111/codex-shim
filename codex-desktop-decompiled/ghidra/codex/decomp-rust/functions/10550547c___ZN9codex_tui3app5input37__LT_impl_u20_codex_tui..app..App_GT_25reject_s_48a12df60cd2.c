
void __ZN9codex_tui3app5input37__LT_impl_u20_codex_tui__app__App_GT_25reject_side_backtrack_esc17h956c4be1caa8b784E
               (long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  bool bVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long *plVar9;
  long lVar10;
  ulong in_xzr;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  long *aplStack_a8 [3];
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  auVar11._8_8_ = unaff_x21;
  auVar11._0_8_ = unaff_x20;
  *(undefined2 *)(param_1 + 0x8b58) = 0;
  *(undefined8 *)(param_1 + 0x8b50) = 0xffffffffffffffff;
  if (*(char *)(param_1 + 0x1ad5) == '\x01') {
    *(undefined1 *)(param_1 + 0x1ad5) = 0;
    *(undefined1 *)(param_1 + 0x924) = 0;
    *(undefined1 *)(param_1 + 0x92a) = 4;
    lVar10 = *(long *)(param_1 + 0x1ab8);
    auVar11 = func_0x000106032954(8);
    uVar7 = *(ulong *)(lVar10 + 0x1c0);
    do {
      if ((uVar7 & 1) != 0) goto LAB_105505410;
      if (uVar7 == 0xfffffffffffffffe) {
        __ZN3std7process5abort17hdc01e45e25b715e8E();
        goto LAB_105505470;
      }
      uVar1 = uVar7 + 2;
      uVar4 = *(ulong *)(lVar10 + 0x1c0);
      bVar5 = uVar4 != uVar7;
      uVar7 = uVar4;
    } while (bVar5);
    *(ulong *)(lVar10 + 0x1c0) = uVar1;
    LOAcquire();
    unaff_x22 = *(ulong *)(lVar10 + 0x88);
    *(ulong *)(lVar10 + 0x88) = unaff_x22 + 1;
    lVar8 = func_0x000105217788(lVar10 + 0x80,unaff_x22);
    puVar3 = (undefined8 *)(lVar8 + (unaff_x22 & 0x1f) * 0x10);
    *puVar3 = auVar11._0_8_;
    *(int *)(puVar3 + 1) = auVar11._8_4_;
    *(ulong *)(lVar8 + 0x210) = *(ulong *)(lVar8 + 0x210) | 1L << (unaff_x22 & 0x1f);
    LORelease();
    puVar2 = (ulong *)(lVar10 + 0x110);
    LOAcquire();
    uVar7 = *puVar2;
    *puVar2 = uVar7 | 2;
    LORelease();
    if (uVar7 == 0) {
      lVar8 = *(long *)(lVar10 + 0x100);
      *(undefined8 *)(lVar10 + 0x100) = 0;
      *puVar2 = in_xzr;
      LORelease();
      if (lVar8 != 0) {
        (**(code **)(lVar8 + 8))(*(undefined8 *)(lVar10 + 0x108));
      }
    }
  }
LAB_105505410:
  puStack_50 = (undefined8 *)_malloc(0x3e);
  if (puStack_50 != (undefined8 *)0x0) {
    puStack_50[1] = 0x73756f6976657270;
    *puStack_50 = 0x20676e6974696445;
    puStack_50[3] = 0x76616e7520736920;
    puStack_50[2] = 0x7374706d6f727020;
    puStack_50[5] = 0x2065646973206e69;
    puStack_50[4] = 0x20656c62616c6961;
    *(undefined8 *)((long)puStack_50 + 0x36) = 0x2e736e6f69746173;
    *(undefined8 *)((long)puStack_50 + 0x2e) = 0x7265766e6f632065;
    uStack_58 = 0x3e;
    uStack_48 = 0x3e;
    __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE
              (param_1,&uStack_58);
    return;
  }
LAB_105505470:
  auVar12 = func_0x0001087c9084(1,0x3e);
  uStack_68 = 0x10550547c;
  *(undefined1 *)(auVar12._0_8_ + 0x546f) = 0;
  aplStack_a8[0] = (long *)0x8000000000000000;
  uStack_90 = unaff_x22;
  uStack_88 = auVar11._8_8_;
  uStack_80 = auVar11._0_8_;
  lStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_10535883c(auVar12._0_8_,aplStack_a8);
  plVar9 = *(long **)(auVar12._8_8_ + 0x80);
  plVar9[0x39] = plVar9[0x39] + 1;
  lVar10 = *plVar9;
  *plVar9 = lVar10 + 1;
  if (lVar10 < 0) {
LAB_1055055f4:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1055055f8);
    (*pcVar6)();
  }
  aplStack_a8[0] = plVar9;
  auVar13 = func_0x000106032954(8);
  uVar7 = plVar9[0x38];
  do {
    if ((uVar7 & 1) != 0) goto LAB_105505568;
    if (uVar7 == 0xfffffffffffffffe) {
      __ZN3std7process5abort17hdc01e45e25b715e8E();
      goto LAB_1055055f4;
    }
    uVar1 = uVar7 + 2;
    uVar4 = plVar9[0x38];
    bVar5 = uVar4 != uVar7;
    uVar7 = uVar4;
  } while (bVar5);
  plVar9[0x38] = uVar1;
  LOAcquire();
  uVar7 = plVar9[0x11];
  plVar9[0x11] = uVar7 + 1;
  lVar10 = func_0x000105217788(plVar9 + 0x10,uVar7);
  *(undefined1 (*) [12])(lVar10 + (uVar7 & 0x1f) * 0x10) = auVar13;
  *(ulong *)(lVar10 + 0x210) = *(ulong *)(lVar10 + 0x210) | 1L << (uVar7 & 0x1f);
  LORelease();
  puVar2 = (ulong *)(plVar9 + 0x22);
  LOAcquire();
  uVar7 = *puVar2;
  *puVar2 = uVar7 | 2;
  LORelease();
  if (uVar7 == 0) {
    lVar10 = plVar9[0x20];
    plVar9[0x20] = 0;
    *puVar2 = in_xzr;
    LORelease();
    if (lVar10 != 0) {
      (**(code **)(lVar10 + 8))(plVar9[0x21]);
    }
  }
LAB_105505568:
  LOAcquire();
  lVar10 = plVar9[0x39];
  plVar9[0x39] = lVar10 + -1;
  LORelease();
  if (lVar10 == 1) {
    LOAcquire();
    lVar10 = plVar9[0x11];
    plVar9[0x11] = lVar10 + 1;
    lVar10 = func_0x000105217788(plVar9 + 0x10,lVar10);
    *(ulong *)(lVar10 + 0x210) = *(ulong *)(lVar10 + 0x210) | 0x200000000;
    LORelease();
    puVar2 = (ulong *)(plVar9 + 0x22);
    LOAcquire();
    uVar7 = *puVar2;
    *puVar2 = uVar7 | 2;
    LORelease();
    if (uVar7 == 0) {
      lVar10 = plVar9[0x20];
      plVar9[0x20] = 0;
      *puVar2 = in_xzr;
      LORelease();
      if (lVar10 != 0) {
        (**(code **)(lVar10 + 8))(plVar9[0x21]);
      }
    }
  }
  lVar10 = *plVar9;
  *plVar9 = lVar10 + -1;
  LORelease();
  if (lVar10 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7e00aa8d0633d1edE(aplStack_a8);
  }
  return;
}

