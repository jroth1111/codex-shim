
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c39e04(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long **pplVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long **pplStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined *puStack_88;
  long ***ppplStack_80;
  undefined *puStack_78;
  
  plVar3 = (long *)(*
                   ___ZN124__LT_tracing_subscriber__fmt__fmt_layer__Layer_LT_S_C_N_C_E_C_W_GT__u20_as_u20_tracing_subscriber__layer__Layer_LT_S_GT__GT_8on_event3BUF29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h4745684eeee36549E
                   )();
  if ((char)plVar3[4] != '\x01') {
    if ((char)plVar3[4] == '\x02') {
      func_0x000108a82a50(&UNK_10b234430);
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(plVar3,&DAT_100c35cb8)
    ;
    *(undefined1 *)(plVar3 + 4) = 1;
  }
  plVar6 = (long *)*param_1;
  plVar7 = (long *)param_1[1];
  uStack_f8 = param_1[2];
  uStack_f0 = param_1[3];
  lVar13 = *plVar3;
  if (lVar13 == 0) {
    plStack_110 = plVar3 + 1;
    *plVar3 = -1;
  }
  else {
    lStack_128 = 0;
    uStack_120 = 1;
    uStack_118 = 0;
    plStack_110 = &lStack_128;
  }
  lVar4 = *plVar6;
  lStack_100 = *plVar7;
  lStack_108 = lVar4 + 0xc;
  pplStack_c0 = &plStack_110;
  pcStack_b8 = (code *)&UNK_10b21f480;
  uStack_b0 = CONCAT71(uStack_b0._1_7_,*(undefined1 *)(lVar4 + 10));
  iVar2 = FUN_10086d4c8(lVar4,&lStack_108,&pplStack_c0);
  if (iVar2 == 0) {
    puStack_e8 = &__ZN3std2io5stdio6stderr8INSTANCE17h9bc2bcb3c698da4fE;
    lVar4 = plStack_110[1];
    lVar8 = plStack_110[2];
    pplVar5 = (long **)__ZN3std2io5stdio6Stderr4lock17hf24fbe7c90c6b1eeE(&puStack_e8);
    pplStack_c0 = pplVar5;
    plVar7 = (long *)__ZN61__LT_std__io__stdio__StderrLock_u20_as_u20_std__io__Write_GT_9write_all17hcd53a22350fbe292E
                               (&pplStack_c0,lVar4,lVar8);
    iVar2 = *(int *)(pplVar5 + 2);
    *(int *)(pplVar5 + 2) = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      pplVar5[1] = (long *)0x0;
      _pthread_mutex_unlock(*pplVar5);
    }
    if ((plVar7 == (long *)0x0) || ((*(byte *)(*plVar6 + 0xb) & 1) == 0)) {
      if (((ulong)plVar7 & 3) != 1) goto LAB_100c3a10c;
      puVar9 = (undefined8 *)((long)plVar7 + -1);
      uVar12 = *puVar9;
      puVar11 = *(undefined8 **)((long)plVar7 + 7);
      if ((code *)*puVar11 != (code *)0x0) {
        (*(code *)*puVar11)(uVar12);
      }
    }
    else {
      pplStack_c0 = &plStack_90;
      pcStack_b8 = 
      __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
      plStack_90 = plVar7;
      __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
                (s_X_tracing_subscriber__Unable_to_w_108ac53ba,&pplStack_c0);
      if (((ulong)plStack_90 & 3) != 1) goto LAB_100c3a10c;
      puVar9 = (undefined8 *)((long)plStack_90 + -1);
      uVar12 = *puVar9;
      puVar11 = *(undefined8 **)((long)plStack_90 + 7);
      if ((code *)*puVar11 != (code *)0x0) {
        (*(code *)*puVar11)(uVar12);
      }
    }
    if (puVar11[1] != 0) {
      _free(uVar12);
    }
  }
  else {
    if (*(char *)(*plVar6 + 0xb) != '\x01') goto LAB_100c3a10c;
    lVar8 = *plVar7;
    lVar4 = *(long *)(lVar8 + 0x18);
    lStack_d0 = *(long *)(lVar4 + 0x10);
    uStack_c8 = *(undefined8 *)(lVar4 + 0x18);
    puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x10) + 0x18);
    uStack_98 = puVar9[1];
    pcStack_b8 = (code *)puVar9[1];
    pplStack_c0 = (long **)*puVar9;
    uStack_a8 = puVar9[3];
    uStack_b0 = puVar9[2];
    uStack_a0 = 0;
    plStack_90 = &lStack_d0;
    puStack_88 = &DAT_100c7b3a0;
    ppplStack_80 = &pplStack_c0;
    puStack_78 = &DAT_10112aa58;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&puStack_e8,s__Unable_to_format_the_following_e_108ac530c,&plStack_90);
    puVar1 = puStack_e8;
    puStack_e8 = &__ZN3std2io5stdio6stderr8INSTANCE17h9bc2bcb3c698da4fE;
    pplVar5 = (long **)__ZN3std2io5stdio6Stderr4lock17hf24fbe7c90c6b1eeE(&puStack_e8);
    pplStack_c0 = pplVar5;
    plVar6 = (long *)__ZN61__LT_std__io__stdio__StderrLock_u20_as_u20_std__io__Write_GT_9write_all17hcd53a22350fbe292E
                               (&pplStack_c0,puStack_e0,uStack_d8);
    iVar2 = *(int *)(pplVar5 + 2);
    *(int *)(pplVar5 + 2) = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      pplVar5[1] = (long *)0x0;
      _pthread_mutex_unlock(*pplVar5);
    }
    if (plVar6 != (long *)0x0) {
      pplStack_c0 = &plStack_90;
      pcStack_b8 = 
      __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
      plStack_90 = plVar6;
      __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
                (s_k_tracing_subscriber__Unable_to_w_108ac5349,&pplStack_c0);
      if (((ulong)plStack_90 & 3) == 1) {
        puVar11 = (undefined8 *)((long)plStack_90 + -1);
        uVar12 = *puVar11;
        puVar9 = *(undefined8 **)((long)plStack_90 + 7);
        pcVar10 = (code *)*puVar9;
        if (pcVar10 != (code *)0x0) {
          (*pcVar10)(uVar12);
        }
        if (puVar9[1] != 0) {
          _free(uVar12);
        }
        _free(puVar11);
      }
    }
    puVar9 = puStack_e0;
    if (puVar1 == (undefined *)0x0) goto LAB_100c3a10c;
  }
  _free(puVar9);
LAB_100c3a10c:
  plStack_110[2] = 0;
  if (lVar13 == 0) {
    *plVar3 = *plVar3 + 1;
  }
  else if (lStack_128 != 0) {
    _free(uStack_120);
  }
  return;
}

