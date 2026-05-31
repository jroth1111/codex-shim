
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101496480(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  long *plVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined1 auVar20 [16];
  long *plStack_a8;
  ulong uStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  ulong *puStack_68;
  
  puVar17 = (ulong *)*param_1;
  plStack_a8 = (long *)(*puVar17 - 0x10);
  lVar4 = *plStack_a8;
  *plStack_a8 = lVar4 + 1;
  puVar16 = ___ZN8arc_swap4debt4list9LIST_HEAD17h3841e34975abc522E;
  if (lVar4 < 0) {
LAB_101496820:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101496824);
    (*pcVar3)();
  }
  puVar2 = (ulong *)param_1[1];
  lVar4 = param_1[2];
  if (___ZN8arc_swap4debt4list9LIST_HEAD17h3841e34975abc522E != (ulong *)0x0) {
    plVar5 = (long *)(*
                     ___ZN8arc_swap4debt4list11THREAD_HEAD29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17hf43570a65d6d2082E
                     )();
    do {
      LOAcquire();
      puVar16[0xf] = puVar16[0xf] + 1;
      lVar19 = *param_2;
      if (lVar19 == 0) {
        func_0x000108a079f0(&UNK_108cd5ee8,0x21,&UNK_10b24d9e8);
        goto LAB_101496820;
      }
      uVar14 = *puVar2;
      puVar1 = puVar16 + 8;
      puVar18 = *(undefined8 **)(lVar4 + 8);
      uVar10 = *puVar1;
LAB_101496534:
      do {
        uStack_a0 = uVar10;
        uVar10 = uStack_a0 & 3;
        if (uVar10 < 2) {
          if ((uVar10 == 0) && (uStack_a0 != 0)) {
LAB_1014967a0:
            puStack_80 = &uStack_a0;
            puStack_78 = &
                         __ZN4core3fmt3num55__LT_impl_u20_core__fmt__UpperHex_u20_for_u20_usize_GT_3fmt17hfd7302eeb515121eE
            ;
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__internal_error__entered_unreach_108ad8338,&puStack_80,&UNK_10b24da30);
            goto LAB_101496820;
          }
          break;
        }
        if (uVar10 != 2) goto LAB_1014967a0;
        if (puVar16[10] == uVar14) {
          uStack_88 = *puVar18;
          plVar11 = plVar5;
          if (((char)plVar5[3] == '\x01') ||
             (plVar11 = (long *)FUN_108853f90(plVar5), plVar11 != (long *)0x0)) {
            if (*plVar11 == 0) {
              lVar6 = __ZN8arc_swap4debt4list4Node3get17h72433f120e816358E();
              *plVar11 = lVar6;
            }
            auVar20 = func_0x000100710f90(&uStack_88,plVar11);
            if (auVar20._0_8_ == 0) {
              puVar15 = (undefined8 *)0x0;
              goto LAB_101496594;
            }
          }
          else {
            puVar15 = &uStack_88;
LAB_101496594:
            puStack_80 = (ulong *)__ZN8arc_swap4debt4list4Node3get17h72433f120e816358E();
            puStack_78 = (undefined *)0x0;
            uStack_70 = 0;
            if (puVar15 == (undefined8 *)0x0) {
              func_0x000108a07a20(&UNK_10b24da00);
              goto LAB_101496820;
            }
            auVar20 = func_0x000100710f90(puVar15,&puStack_80);
            if (puStack_80 != (ulong *)0x0) {
              puVar13 = puStack_80 + 0xf;
              LOAcquire();
              *puVar13 = *puVar13 + 1;
              puStack_68 = (ulong *)puStack_80[0xd];
              puStack_80[0xd] = 2;
              LORelease();
              if (puStack_68 != (ulong *)0x1) {
                func_0x000108a07b2c(0,&UNK_108c56c90,&puStack_68,0,param_5,&UNK_10b1d5108);
                goto LAB_101496820;
              }
              *puVar13 = *puVar13 - 1;
              LORelease();
            }
          }
          plVar11 = auVar20._8_8_;
          puStack_80 = auVar20._0_8_;
          puStack_78 = (undefined *)0x0;
          if (plVar11 != (long *)0x0) {
            uVar10 = *puStack_80;
            *puStack_80 = uVar10 + 1;
            if ((long)uVar10 < 0) goto LAB_101496820;
            if ((ulong *)*plVar11 == puStack_80 + 2) {
              *plVar11 = 3;
            }
            else {
              uVar10 = *puStack_80;
              *puStack_80 = uVar10 - 1;
              LORelease();
              puStack_68 = puStack_80;
              if (uVar10 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E(&puStack_68);
              }
            }
          }
          puStack_98 = puStack_80;
          uVar7 = puVar16[0xc];
          plVar11 = *(long **)(lVar19 + 0x60);
          *plVar11 = (long)(puStack_80 + 2);
          uStack_90 = (ulong)plVar11 & 3;
          if (uStack_90 != 0) {
            func_0x000108a07b2c(0,&uStack_90,&UNK_108c511b0,0,param_5,&UNK_10b24da18);
            goto LAB_101496820;
          }
          uVar10 = *puVar1;
          if (uVar10 == uStack_a0) {
            *puVar1 = (ulong)plVar11 | 1;
            *(ulong *)(lVar19 + 0x60) = uVar7;
            break;
          }
          uVar7 = *puStack_80;
          *puStack_80 = uVar7 - 1;
          LORelease();
          if (uVar7 == 1) {
            DataMemoryBarrier(2,1);
            uStack_a0 = uVar10;
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E(&puStack_98);
            uVar10 = uStack_a0;
          }
          goto LAB_101496534;
        }
        uVar10 = *puVar1;
      } while (*puVar1 != uStack_a0);
      puVar9 = puVar16 + 9;
      puVar13 = puVar16;
LAB_1014966e8:
      while( true ) {
        puVar12 = puVar13;
        puVar8 = puVar9;
        if ((puVar12 != (ulong *)0x0) && (puVar12 != puVar1)) goto code_r0x0001014966f4;
        if (puVar8 == (ulong *)0x0) break;
        puVar13 = (ulong *)0x0;
        puVar9 = (ulong *)0x0;
        if (*puVar8 == *puVar17) {
          *puVar8 = 3;
          goto LAB_1014966dc;
        }
      }
      puVar16[0xf] = puVar16[0xf] - 1;
      LORelease();
      puVar16 = (ulong *)puVar16[0xe];
    } while (puVar16 != (ulong *)0x0);
  }
  lVar4 = *plStack_a8;
  *plStack_a8 = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E(&plStack_a8);
  }
  return;
code_r0x0001014966f4:
  puVar13 = puVar12 + 1;
  puVar9 = puVar8;
  if (*puVar12 == *puVar17) {
    *puVar12 = 3;
LAB_1014966dc:
    lVar19 = *plStack_a8;
    *plStack_a8 = lVar19 + 1;
    if (lVar19 < 0) goto LAB_101496820;
  }
  goto LAB_1014966e8;
}

