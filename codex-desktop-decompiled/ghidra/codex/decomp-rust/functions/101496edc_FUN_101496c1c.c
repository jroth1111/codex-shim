
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101496c1c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long *plStack_98;
  ulong uStack_90;
  long *plStack_88;
  ulong uStack_80;
  ulong *puStack_78;
  long *plStack_70;
  long *plStack_68;
  
  puVar16 = (ulong *)*param_1;
  plStack_98 = (long *)(*puVar16 - 0x10);
  plVar7 = (long *)0x0;
  if ((*puVar16 == 0) ||
     (lVar4 = *plStack_98, *plStack_98 = lVar4 + 1, plVar7 = plStack_98, -1 < lVar4)) {
    puVar2 = (ulong *)param_1[1];
    lVar4 = param_1[2];
    puVar15 = ___ZN8arc_swap4debt4list9LIST_HEAD17h3841e34975abc522E;
    plStack_98 = plVar7;
    while( true ) {
      if (puVar15 == (ulong *)0x0) {
        if (plStack_98 != (long *)0x0) {
          lVar4 = *plStack_98;
          *plStack_98 = lVar4 + -1;
          LORelease();
          if (lVar4 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0fbc73cd6bda15b8E(&plStack_98);
          }
        }
        return;
      }
      LOAcquire();
      uVar5 = puVar15[0xf];
      puVar15[0xf] = uVar5 + 1;
      lVar18 = *param_2;
      if (lVar18 == 0) break;
      uVar17 = *puVar2;
      puVar1 = puVar15 + 8;
      puVar14 = *(undefined8 **)(lVar4 + 8);
      uVar5 = *puVar1;
LAB_101496cc4:
      do {
        uStack_90 = uVar5;
        uVar5 = uStack_90 & 3;
        if (uVar5 < 2) {
          if ((uVar5 == 0) && (uStack_90 != 0)) {
LAB_101496ecc:
            puStack_78 = &uStack_90;
            plStack_70 = (long *)&
                                 __ZN4core3fmt3num55__LT_impl_u20_core__fmt__UpperHex_u20_for_u20_usize_GT_3fmt17hfd7302eeb515121eE
            ;
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__internal_error__entered_unreach_108ad8338,&puStack_78,&UNK_10b24da30);
            goto LAB_101496f18;
          }
          break;
        }
        if (uVar5 != 2) goto LAB_101496ecc;
        if (puVar15[10] == uVar17) {
          puStack_78 = (ulong *)*puVar14;
          auVar19 = FUN_101496fa8(&puStack_78);
          plStack_70 = auVar19._8_8_;
          plVar7 = auVar19._0_8_;
          puStack_78 = (ulong *)0x0;
          if (plVar7 != (long *)0x0) {
            if (plStack_70 == (long *)0x0) {
              if (*plVar7 == 0) {
                *plVar7 = 3;
              }
            }
            else {
              lVar6 = *plStack_70;
              *plStack_70 = lVar6 + 1;
              if (lVar6 < 0) goto LAB_101496f18;
              if ((long *)*plVar7 == plStack_70 + 2) {
                *plVar7 = 3;
              }
              else {
                lVar6 = *plStack_70;
                *plStack_70 = lVar6 + -1;
                LORelease();
                plStack_68 = plStack_70;
                if (lVar6 == 1) {
                  DataMemoryBarrier(2,1);
                  __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0fbc73cd6bda15b8E(&plStack_68);
                }
              }
            }
          }
          plStack_88 = plStack_70;
          plVar7 = (long *)0x0;
          if (plStack_70 != (long *)0x0) {
            plVar7 = plStack_70 + 2;
          }
          uVar8 = puVar15[0xc];
          puVar11 = *(undefined8 **)(lVar18 + 0x60);
          *puVar11 = plVar7;
          uStack_80 = (ulong)puVar11 & 3;
          if (uStack_80 != 0) {
            func_0x000108a07b2c(0,&uStack_80,&UNK_108c511b0,0,param_5,&UNK_10b24da18);
            goto LAB_101496f18;
          }
          uVar5 = *puVar1;
          if (uVar5 == uStack_90) {
            *puVar1 = (ulong)puVar11 | 1;
            *(ulong *)(lVar18 + 0x60) = uVar8;
            break;
          }
          if (plStack_70 != (long *)0x0) {
            lVar6 = *plStack_70;
            *plStack_70 = lVar6 + -1;
            LORelease();
            if (lVar6 == 1) {
              DataMemoryBarrier(2,1);
              uStack_90 = uVar5;
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0fbc73cd6bda15b8E(&plStack_88);
              uVar5 = uStack_90;
            }
          }
          goto LAB_101496cc4;
        }
        uVar5 = *puVar1;
      } while (*puVar1 != uStack_90);
      puVar10 = puVar15 + 9;
      puVar13 = puVar15;
LAB_101496dfc:
      while( true ) {
        puVar12 = puVar13;
        puVar9 = puVar10;
        if ((puVar12 != (ulong *)0x0) && (puVar12 != puVar1)) goto code_r0x000101496e08;
        if (puVar9 == (ulong *)0x0) break;
        puVar13 = (ulong *)0x0;
        puVar10 = (ulong *)0x0;
        if (*puVar9 == *puVar16) {
          *puVar9 = 3;
          goto LAB_101496e4c;
        }
      }
      puVar15[0xf] = puVar15[0xf] - 1;
      LORelease();
      puVar15 = (ulong *)puVar15[0xe];
    }
    func_0x000108a079f0(uVar5,&UNK_108cd5ee8,0x21,&UNK_10b24d9e8);
  }
LAB_101496f18:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101496f1c);
  (*pcVar3)();
code_r0x000101496e08:
  puVar13 = puVar12 + 1;
  puVar10 = puVar9;
  if (*puVar12 == *puVar16) {
    *puVar12 = 3;
LAB_101496e4c:
    if ((plStack_98 != (long *)0x0) && (lVar18 = *plStack_98, *plStack_98 = lVar18 + 1, lVar18 < 0))
    goto LAB_101496f18;
  }
  goto LAB_101496dfc;
}

