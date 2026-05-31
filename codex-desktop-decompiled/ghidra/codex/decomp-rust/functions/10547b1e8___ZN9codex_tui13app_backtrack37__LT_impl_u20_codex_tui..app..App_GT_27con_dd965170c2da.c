
void __ZN9codex_tui13app_backtrack37__LT_impl_u20_codex_tui__app__App_GT_27confirm_backtrack_from_main17h2eb05ed0ece11b48E
               (long *param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  ulong in_xzr;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  long *plStack_120;
  long lStack_118;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  FUN_10547848c(&lStack_a8,param_2,*(undefined8 *)(param_2 + 0x8b50));
  *(undefined2 *)(param_2 + 0x8b58) = 0;
  *(undefined8 *)(param_2 + 0x8b50) = 0xffffffffffffffff;
  if (*(char *)(param_2 + 0x1ad5) == '\x01') {
    *(undefined1 *)(param_2 + 0x1ad5) = 0;
    *(undefined1 *)(param_2 + 0x924) = 0;
    *(undefined1 *)(param_2 + 0x92a) = 4;
    lVar12 = *(long *)(param_2 + 0x1ab8);
    auVar15 = func_0x000106032954(8);
    uVar6 = *(ulong *)(lVar12 + 0x1c0);
    do {
      if ((uVar6 & 1) != 0) goto LAB_10547b17c;
      if (uVar6 == 0xfffffffffffffffe) {
        uVar8 = __ZN3std7process5abort17hdc01e45e25b715e8E();
        if (lStack_a8 != -0x8000000000000000) {
          FUN_10519ab44(&lStack_a8);
        }
        auVar14 = __Unwind_Resume(uVar8);
        plVar9 = auVar14._8_8_;
        lVar7 = auVar14._0_8_;
        plVar11 = *(long **)(lVar7 + 0x8080);
        lVar12 = *(long *)(lVar7 + 0x8088);
        plVar2 = plVar11 + lVar12 * 2;
        uVar6 = lVar12 * 0x10 ^ 0xfffffffffffffff0;
        lVar12 = -lVar12;
        plVar13 = plVar2;
        goto LAB_10547b24c;
      }
      uVar10 = uVar6 + 2;
      uVar3 = *(ulong *)(lVar12 + 0x1c0);
      bVar4 = uVar3 != uVar6;
      uVar6 = uVar3;
    } while (bVar4);
    *(ulong *)(lVar12 + 0x1c0) = uVar10;
    LOAcquire();
    uVar6 = *(ulong *)(lVar12 + 0x88);
    *(ulong *)(lVar12 + 0x88) = uVar6 + 1;
    lVar7 = func_0x000105217788(lVar12 + 0x80,uVar6);
    *(undefined1 (*) [12])(lVar7 + (uVar6 & 0x1f) * 0x10) = auVar15;
    *(ulong *)(lVar7 + 0x210) = *(ulong *)(lVar7 + 0x210) | 1L << (uVar6 & 0x1f);
    LORelease();
    puVar1 = (ulong *)(lVar12 + 0x110);
    LOAcquire();
    uVar6 = *puVar1;
    *puVar1 = uVar6 | 2;
    LORelease();
    if (uVar6 == 0) {
      lVar7 = *(long *)(lVar12 + 0x100);
      *(undefined8 *)(lVar12 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 8))(*(undefined8 *)(lVar12 + 0x108));
      }
    }
  }
LAB_10547b17c:
  param_1[9] = lStack_60;
  param_1[8] = lStack_68;
  param_1[0xb] = lStack_50;
  param_1[10] = lStack_58;
  param_1[0xc] = lStack_48;
  param_1[1] = lStack_a0;
  *param_1 = lStack_a8;
  param_1[3] = lStack_90;
  param_1[2] = lStack_98;
  param_1[5] = lStack_80;
  param_1[4] = lStack_88;
  param_1[7] = lStack_70;
  param_1[6] = lStack_78;
  return;
  while( true ) {
    (**(code **)(*(long *)(plVar13[-1] + 0x28) + 0x18))
              (&plStack_120,
               plVar13[-2] + (*(long *)(plVar13[-1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
    uVar6 = uVar6 + 0x10;
    lVar12 = lVar12 + 1;
    plVar13 = plVar13 + -2;
    if (lStack_118 == -0x1dfafe6ba1cb4c7e && plStack_120 == (long *)0x41474c40e5ec6ee9) break;
LAB_10547b24c:
    if (uVar6 == 0xfffffffffffffff0) goto LAB_10547b2a0;
  }
  if (lVar12 != 1) {
    plVar11 = (long *)((long)plVar11 - uVar6);
  }
LAB_10547b2a0:
  if (plVar11 != plVar2) {
    lVar12 = 0;
    uVar6 = (ulong)((long)plVar2 - (long)plVar11) >> 4;
    plVar11 = plVar11 + 1;
    do {
      (**(code **)(*(long *)(*plVar11 + 0x28) + 0x18))
                (&plStack_120,
                 plVar11[-1] + (*(long *)(*plVar11 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
      if (plStack_120 == (long *)0xa6bc4e89c9000fa6 && lStack_118 == 0x50a5772646a43e81) {
        lVar12 = lVar12 + 1;
      }
      plVar11 = plVar11 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    if (lVar12 != 0) {
      uVar10 = lVar12 - 1;
      lVar12 = *(long *)(lVar7 + 0x8b50);
      uVar6 = uVar10;
      if (lVar12 - 1U <= uVar10) {
        uVar6 = lVar12 - 1U;
      }
      uVar3 = 0;
      if (lVar12 != 0) {
        uVar3 = uVar6;
      }
      if (lVar12 != -1) {
        uVar10 = uVar3;
      }
      func_0x00010547c234(lVar7,uVar10);
      plVar9[0x39] = plVar9[0x39] + 1;
      lVar12 = *plVar9;
      *plVar9 = lVar12 + 1;
      if (lVar12 < 0) {
LAB_10547b49c:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10547b4a0);
        (*pcVar5)();
      }
      plStack_120 = plVar9;
      auVar15 = func_0x000106032954(8);
      uVar6 = plVar9[0x38];
      do {
        if ((uVar6 & 1) != 0) goto LAB_10547b404;
        if (uVar6 == 0xfffffffffffffffe) {
          __ZN3std7process5abort17hdc01e45e25b715e8E();
          goto LAB_10547b49c;
        }
        uVar10 = uVar6 + 2;
        uVar3 = plVar9[0x38];
        bVar4 = uVar3 != uVar6;
        uVar6 = uVar3;
      } while (bVar4);
      plVar9[0x38] = uVar10;
      LOAcquire();
      uVar6 = plVar9[0x11];
      plVar9[0x11] = uVar6 + 1;
      lVar12 = func_0x000105217788(plVar9 + 0x10,uVar6);
      *(undefined1 (*) [12])(lVar12 + (uVar6 & 0x1f) * 0x10) = auVar15;
      *(ulong *)(lVar12 + 0x210) = *(ulong *)(lVar12 + 0x210) | 1L << (uVar6 & 0x1f);
      LORelease();
      puVar1 = (ulong *)(plVar9 + 0x22);
      LOAcquire();
      uVar6 = *puVar1;
      *puVar1 = uVar6 | 2;
      LORelease();
      if (uVar6 == 0) {
        lVar12 = plVar9[0x20];
        plVar9[0x20] = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar12 != 0) {
          (**(code **)(lVar12 + 8))(plVar9[0x21]);
        }
      }
LAB_10547b404:
      LOAcquire();
      lVar12 = plVar9[0x39];
      plVar9[0x39] = lVar12 + -1;
      LORelease();
      if (lVar12 == 1) {
        LOAcquire();
        lVar12 = plVar9[0x11];
        plVar9[0x11] = lVar12 + 1;
        lVar12 = func_0x000105217788(plVar9 + 0x10,lVar12);
        *(ulong *)(lVar12 + 0x210) = *(ulong *)(lVar12 + 0x210) | 0x200000000;
        LORelease();
        puVar1 = (ulong *)(plVar9 + 0x22);
        LOAcquire();
        uVar6 = *puVar1;
        *puVar1 = uVar6 | 2;
        LORelease();
        if (uVar6 == 0) {
          lVar12 = plVar9[0x20];
          plVar9[0x20] = 0;
          *puVar1 = in_xzr;
          LORelease();
          if (lVar12 != 0) {
            (**(code **)(lVar12 + 8))(plVar9[0x21]);
          }
        }
      }
      lVar12 = *plVar9;
      *plVar9 = lVar12 + -1;
      LORelease();
      if (lVar12 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7e00aa8d0633d1edE(&plStack_120);
      }
    }
  }
  return;
}

