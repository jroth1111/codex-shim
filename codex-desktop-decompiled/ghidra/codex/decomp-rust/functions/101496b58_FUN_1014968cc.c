
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014968cc(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  long *plVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  long *plStack_98;
  ulong uStack_90;
  ulong *puStack_88;
  ulong uStack_80;
  ulong *puStack_78;
  undefined *puStack_70;
  ulong *puStack_68;
  
  puVar14 = (ulong *)*param_1;
  plStack_98 = (long *)(*puVar14 - 0x10);
  lVar4 = *plStack_98;
  *plStack_98 = lVar4 + 1;
  if (-1 < lVar4) {
    puVar2 = (ulong *)param_1[1];
    lVar4 = param_1[2];
    puVar13 = ___ZN8arc_swap4debt4list9LIST_HEAD17h3841e34975abc522E;
    while( true ) {
      if (puVar13 == (ulong *)0x0) {
        lVar4 = *plStack_98;
        *plStack_98 = lVar4 + -1;
        LORelease();
        if (lVar4 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf792d77e429360f6E(&plStack_98);
        }
        return;
      }
      LOAcquire();
      uVar5 = puVar13[0xf];
      puVar13[0xf] = uVar5 + 1;
      lVar16 = *param_2;
      if (lVar16 == 0) break;
      uVar15 = *puVar2;
      puVar1 = puVar13 + 8;
      puVar12 = *(undefined8 **)(lVar4 + 8);
      uVar5 = *puVar1;
LAB_101496968:
      do {
        uStack_90 = uVar5;
        uVar5 = uStack_90 & 3;
        if (uVar5 < 2) {
          if ((uVar5 == 0) && (uStack_90 != 0)) {
LAB_101496b48:
            puStack_78 = &uStack_90;
            puStack_70 = &
                         __ZN4core3fmt3num55__LT_impl_u20_core__fmt__UpperHex_u20_for_u20_usize_GT_3fmt17hfd7302eeb515121eE
            ;
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__internal_error__entered_unreach_108ad8338,&puStack_78,&UNK_10b24da30);
            goto LAB_101496b94;
          }
          break;
        }
        if (uVar5 != 2) goto LAB_101496b48;
        if (puVar13[10] == uVar15) {
          puStack_78 = (ulong *)*puVar12;
          auVar17 = FUN_10149706c(&puStack_78);
          plVar9 = auVar17._8_8_;
          puStack_78 = auVar17._0_8_;
          puStack_70 = (undefined *)0x0;
          if (plVar9 != (long *)0x0) {
            uVar5 = *puStack_78;
            *puStack_78 = uVar5 + 1;
            if ((long)uVar5 < 0) goto LAB_101496b94;
            if ((ulong *)*plVar9 == puStack_78 + 2) {
              *plVar9 = 3;
            }
            else {
              uVar5 = *puStack_78;
              *puStack_78 = uVar5 - 1;
              LORelease();
              puStack_68 = puStack_78;
              if (uVar5 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf792d77e429360f6E(&puStack_68);
              }
            }
          }
          puStack_88 = puStack_78;
          uVar6 = puVar13[0xc];
          plVar9 = *(long **)(lVar16 + 0x60);
          *plVar9 = (long)(puStack_78 + 2);
          uStack_80 = (ulong)plVar9 & 3;
          if (uStack_80 != 0) {
            func_0x000108a07b2c(0,&uStack_80,&UNK_108c511b0,0,param_5,&UNK_10b24da18);
            goto LAB_101496b94;
          }
          uVar5 = *puVar1;
          if (uVar5 == uStack_90) {
            *puVar1 = (ulong)plVar9 | 1;
            *(ulong *)(lVar16 + 0x60) = uVar6;
            break;
          }
          uVar6 = *puStack_78;
          *puStack_78 = uVar6 - 1;
          LORelease();
          if (uVar6 == 1) {
            DataMemoryBarrier(2,1);
            uStack_90 = uVar5;
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf792d77e429360f6E(&puStack_88);
            uVar5 = uStack_90;
          }
          goto LAB_101496968;
        }
        uVar5 = *puVar1;
      } while (*puVar1 != uStack_90);
      puVar8 = puVar13 + 9;
      puVar11 = puVar13;
LAB_101496a80:
      while( true ) {
        puVar10 = puVar11;
        puVar7 = puVar8;
        if ((puVar10 != (ulong *)0x0) && (puVar10 != puVar1)) goto code_r0x000101496a8c;
        if (puVar7 == (ulong *)0x0) break;
        puVar11 = (ulong *)0x0;
        puVar8 = (ulong *)0x0;
        if (*puVar7 == *puVar14) {
          *puVar7 = 3;
          goto LAB_101496ad0;
        }
      }
      puVar13[0xf] = puVar13[0xf] - 1;
      LORelease();
      puVar13 = (ulong *)puVar13[0xe];
    }
    func_0x000108a079f0(uVar5,&UNK_108cd5ee8,0x21,&UNK_10b24d9e8);
  }
LAB_101496b94:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101496b98);
  (*pcVar3)();
code_r0x000101496a8c:
  puVar11 = puVar10 + 1;
  puVar8 = puVar7;
  if (*puVar10 == *puVar14) {
    *puVar10 = 3;
LAB_101496ad0:
    lVar16 = *plStack_98;
    *plStack_98 = lVar16 + 1;
    if (lVar16 < 0) goto LAB_101496b94;
  }
  goto LAB_101496a80;
}

