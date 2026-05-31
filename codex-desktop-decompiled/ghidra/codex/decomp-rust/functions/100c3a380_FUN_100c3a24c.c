
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3a24c(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  long **pplVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *extraout_x8;
  code *pcVar9;
  long *plVar10;
  long *plVar11;
  long *extraout_x9;
  long lVar12;
  long *extraout_x10;
  long **extraout_x11;
  long **pplVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  ulong unaff_x25;
  undefined8 *puVar18;
  undefined1 auVar19 [16];
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 *puStack_f0;
  ulong uStack_e0;
  undefined8 uStack_d8;
  long **pplStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  ulong *puStack_a0;
  code *pcStack_98;
  long ***ppplStack_90;
  undefined *puStack_88;
  
  plVar6 = (long *)(*
                   ___ZN124__LT_tracing_subscriber__fmt__fmt_layer__Layer_LT_S_C_N_C_E_C_W_GT__u20_as_u20_tracing_subscriber__layer__Layer_LT_S_GT__GT_8on_event3BUF29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h4745684eeee36549E
                   )();
  if ((char)plVar6[4] != '\x01') {
    if ((char)plVar6[4] == '\x02') {
      func_0x000108a82a50(&UNK_10b234430);
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(plVar6,&DAT_100c35cb8)
    ;
    *(undefined1 *)(plVar6 + 4) = 1;
  }
  plVar10 = (long *)*param_1;
  plVar8 = (long *)param_1[1];
  uStack_108 = param_1[2];
  uStack_100 = param_1[3];
  lVar17 = *plVar6;
  if (lVar17 == 0) {
    plStack_120 = plVar6 + 1;
    *plVar6 = -1;
  }
  else {
    lStack_138 = 0;
    uStack_130 = 1;
    uStack_128 = 0;
    plStack_120 = &lStack_138;
  }
  lVar12 = *plVar10;
  lStack_110 = *plVar8;
  lStack_118 = lVar12 + 0x2c;
  pplStack_d0 = &plStack_120;
  plStack_c8 = (long *)&UNK_10b21f480;
  plStack_c0 = (long *)CONCAT71(plStack_c0._1_7_,*(undefined1 *)(lVar12 + 0x2a));
  iVar5 = FUN_10086d4c8(lVar12 + 0x20,&lStack_118,&pplStack_d0);
  if (iVar5 != 0) {
    if ((*(byte *)(*plVar10 + 0x2b) & 1) != 0) {
      lVar7 = *plVar8;
      lVar12 = *(long *)(lVar7 + 0x18);
      uStack_e0 = *(ulong *)(lVar12 + 0x10);
      uStack_d8 = *(undefined8 *)(lVar12 + 0x18);
      plVar8 = *(long **)(*(long *)(lVar7 + 0x10) + 0x18);
      lStack_a8 = plVar8[1];
      plStack_c8 = (long *)plVar8[1];
      pplStack_d0 = (long **)*plVar8;
      lStack_b8 = plVar8[3];
      plStack_c0 = (long *)plVar8[2];
      uStack_b0 = 0;
      puStack_a0 = &uStack_e0;
      pcStack_98 = (code *)&DAT_100c7b3a0;
      ppplStack_90 = &pplStack_d0;
      puStack_88 = &DAT_10112aa58;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_f8,s__Unable_to_format_the_following_e_108ac530c,&puStack_a0);
      plVar10 = (long *)*plVar10;
      plVar8 = (long *)plVar10[2];
      lVar12 = *plVar8;
      *plVar8 = lVar12 + 1;
      if (-1 < lVar12) {
        pplVar13 = (long **)*plVar10;
        plVar11 = (long *)plVar10[1];
        unaff_x25 = uStack_f8;
        if (pplVar13 != (long **)0x2) {
          if (pplVar13 != (long **)0x1) goto LAB_100c3a4f0;
          plVar14 = plVar11 + 0x30;
          goto LAB_100c3a4f4;
        }
        lVar12 = *plVar11;
        *plVar11 = lVar12 + 1;
        param_1 = puStack_f0;
        pplVar3 = pplStack_d0;
        plVar14 = plStack_c8;
        plVar4 = plStack_c0;
        goto joined_r0x000100c3a4e8;
      }
      goto LAB_100c3a66c;
    }
    goto LAB_100c3a590;
  }
  plVar11 = (long *)*plVar10;
  plVar8 = (long *)plVar11[2];
  lVar12 = *plVar8;
  *plVar8 = lVar12 + 1;
  if (lVar12 < 0) {
LAB_100c3a66c:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100c3a670);
    (*pcVar9)();
  }
  pplVar13 = (long **)*plVar11;
  plVar2 = (long *)plVar11[1];
  if (pplVar13 == (long **)0x2) {
    lVar12 = *plVar2;
    *plVar2 = lVar12 + 1;
  }
  else {
    if (pplVar13 == (long **)0x1) {
      plVar14 = plVar2 + 0x30;
    }
    else {
      plVar14 = plVar2 + 0x40;
    }
    lVar12 = *plVar14;
    *plVar14 = lVar12 + 1;
  }
  pplVar3 = pplStack_d0;
  plVar14 = plStack_c8;
  plVar4 = plStack_c0;
  if (lVar12 < 0) {
    do {
      plStack_c0 = plVar4;
      plStack_c8 = plVar14;
      pplStack_d0 = pplVar3;
      __ZN3std7process5abort17hdc01e45e25b715e8E();
      plVar8 = extraout_x8;
      plVar10 = extraout_x9;
      plVar11 = extraout_x10;
      pplVar13 = extraout_x11;
      puStack_f0 = param_1;
LAB_100c3a4f0:
      plVar14 = plVar11 + 0x40;
LAB_100c3a4f4:
      lVar12 = *plVar14;
      *plVar14 = lVar12 + 1;
      param_1 = puStack_f0;
      pplVar3 = pplStack_d0;
      plVar14 = plStack_c8;
      plVar4 = plStack_c0;
joined_r0x000100c3a4e8:
      plStack_c8 = plVar11;
      pplStack_d0 = pplVar13;
      plStack_c0 = plVar8;
    } while (lVar12 < 0);
    lStack_b8._1_7_ = (undefined7)((ulong)lStack_b8 >> 8);
    lStack_b8 = CONCAT71(lStack_b8._1_7_,(char)plVar10[3]);
    auVar19 = __ZN78__LT_tracing_appender__non_blocking__NonBlocking_u20_as_u20_std__io__Write_GT_5write17hf51b52a6ed6a2c05E
                        (&pplStack_d0,param_1);
    if (((auVar19._0_8_ & 1) == 0) || (auVar19._8_8_ == 0)) {
LAB_100c3a55c:
      lVar12 = *plStack_c0;
      *plStack_c0 = lVar12 + -1;
      LORelease();
    }
    else {
      puStack_a0 = &uStack_f8;
      pcStack_98 = 
      __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
      uStack_f8 = auVar19._8_8_;
      __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
                (s_k_tracing_subscriber__Unable_to_w_108ac5349,&puStack_a0);
      if ((uStack_f8 & 3) != 1) goto LAB_100c3a55c;
      puVar15 = (undefined8 *)(uStack_f8 - 1);
      uVar16 = *puVar15;
      puVar18 = *(undefined8 **)(uStack_f8 + 7);
      pcVar9 = (code *)*puVar18;
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(uVar16);
      }
      if (puVar18[1] != 0) {
        _free(uVar16);
      }
      _free(puVar15);
      lVar12 = *plStack_c0;
      *plStack_c0 = lVar12 + -1;
      LORelease();
    }
    if (lVar12 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbdd7f7838fe94bb7E(&plStack_c0);
    }
    FUN_100e53ab4(pplStack_d0,plStack_c8);
    if (unaff_x25 != 0) {
      _free(param_1);
    }
    goto LAB_100c3a590;
  }
  lStack_b8 = CONCAT71(lStack_b8._1_7_,(char)plVar11[3]);
  pplStack_d0 = pplVar13;
  plStack_c8 = plVar2;
  plStack_c0 = plVar8;
  auVar19 = __ZN78__LT_tracing_appender__non_blocking__NonBlocking_u20_as_u20_std__io__Write_GT_5write17hf51b52a6ed6a2c05E
                      (&pplStack_d0,plStack_120[1],plStack_120[2]);
  uVar1 = auVar19._8_8_;
  if ((auVar19._0_8_ & 1) == 0) {
    uVar1 = 0;
  }
  if ((uVar1 == 0) || ((*(byte *)(*plVar10 + 0x2b) & 1) == 0)) {
    if ((uVar1 & 3) == 1) {
      puVar15 = (undefined8 *)(uVar1 - 1);
      uVar16 = *puVar15;
      puVar18 = *(undefined8 **)(auVar19._8_8_ + 7);
      if ((code *)*puVar18 != (code *)0x0) {
        (*(code *)*puVar18)(uVar16);
      }
      goto LAB_100c3a5f4;
    }
LAB_100c3a4b4:
    lVar12 = *plStack_c0;
    *plStack_c0 = lVar12 + -1;
    LORelease();
  }
  else {
    puStack_a0 = &uStack_f8;
    pcStack_98 = 
    __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
    uStack_f8 = uVar1;
    __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
              (s_X_tracing_subscriber__Unable_to_w_108ac53ba,&puStack_a0);
    if ((uStack_f8 & 3) != 1) goto LAB_100c3a4b4;
    puVar15 = (undefined8 *)(uStack_f8 - 1);
    uVar16 = *puVar15;
    puVar18 = *(undefined8 **)(uStack_f8 + 7);
    if ((code *)*puVar18 != (code *)0x0) {
      (*(code *)*puVar18)(uVar16);
    }
LAB_100c3a5f4:
    if (puVar18[1] != 0) {
      _free(uVar16);
    }
    _free(puVar15);
    lVar12 = *plStack_c0;
    *plStack_c0 = lVar12 + -1;
    LORelease();
  }
  if (lVar12 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbdd7f7838fe94bb7E(&plStack_c0);
  }
  FUN_100e53ab4(pplStack_d0,plStack_c8);
LAB_100c3a590:
  plStack_120[2] = 0;
  if (lVar17 == 0) {
    *plVar6 = *plVar6 + 1;
  }
  else if (lStack_138 != 0) {
    _free(uStack_130);
  }
  return;
}

