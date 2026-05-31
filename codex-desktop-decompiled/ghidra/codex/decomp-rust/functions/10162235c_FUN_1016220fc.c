
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016220fc(undefined8 *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong *puVar7;
  undefined1 uVar8;
  long *plVar9;
  long *plVar10;
  long **pplVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulong unaff_x23;
  long unaff_x24;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong in_xzr;
  undefined1 auStack_2b00 [88];
  undefined8 uStack_2aa8;
  long lStack_2aa0;
  long lStack_2a98;
  undefined8 *puStack_2a90;
  long *plStack_2a88;
  long *plStack_2a80;
  long *plStack_2a78;
  long *plStack_2a70;
  long *plStack_2a68;
  long **pplStack_2a60;
  long *plStack_2a58;
  undefined *puStack_2a50;
  undefined8 uStack_2a48;
  long *plStack_2a40;
  long **pplStack_2a38;
  undefined8 uStack_2a30;
  undefined8 uStack_2a28;
  undefined8 uStack_2a20;
  long **pplStack_2a18;
  undefined8 uStack_2a10;
  undefined8 uStack_2a08;
  undefined8 uStack_2a00;
  undefined8 uStack_29f8;
  long **pplStack_29f0;
  undefined8 uStack_29e8;
  long lStack_29d8;
  long **pplStack_29d0;
  undefined8 uStack_29c8;
  undefined8 uStack_29c0;
  undefined8 uStack_29b8;
  undefined8 uStack_29b0;
  ulong uStack_29a8;
  long lStack_29a0;
  ulong uStack_2998;
  ulong uStack_2990;
  long lStack_2988;
  ulong uStack_2980;
  long **pplStack_2978;
  long *plStack_2970;
  undefined *puStack_2968;
  undefined8 uStack_2960;
  long *plStack_2958;
  long **pplStack_2950;
  undefined8 uStack_2948;
  undefined8 uStack_2940;
  undefined8 uStack_2938;
  long lStack_2930;
  undefined4 uStack_2928;
  long *plStack_2920;
  long *plStack_2918;
  long *plStack_2910;
  long *plStack_2908;
  undefined1 uStack_2860;
  undefined1 uStack_285f;
  undefined1 uStack_285e;
  long *plStack_21c8;
  undefined1 *puStack_21c0;
  long **pplStack_21b0;
  code *pcStack_21a8;
  long *plStack_1998;
  long **pplStack_1990;
  undefined8 uStack_1988;
  undefined8 *puStack_1190;
  long **pplStack_1180;
  long *plStack_1178;
  undefined *puStack_1170;
  undefined8 uStack_1168;
  long *plStack_1160;
  long **pplStack_1158;
  undefined4 uStack_1150;
  undefined4 uStack_114c;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  long lStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_1080;
  undefined8 uStack_1070;
  undefined8 auStack_1060 [12];
  undefined8 uStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  long lStack_fe0;
  long lStack_fd8;
  undefined8 uStack_fd0;
  undefined1 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined1 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  long lStack_920;
  long lStack_918;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  long *plStack_90;
  undefined1 auStack_81 [33];
  
  puVar3 = auStack_1060;
  puVar16 = auStack_1060;
  while ((long)auStack_2b00 < (long)puVar3) {
    *puVar16 = 0;
    puVar3 = puVar16 + -0x200;
    puVar16 = puVar16 + -0x200;
  }
  if (*(char *)((long)param_2 + 0x189) != '\0') {
    if (*(char *)((long)param_2 + 0x189) == '\x01') {
      func_0x000108a07af4(&UNK_10b24faf8);
    }
    func_0x000108a07b10();
LAB_101622a7c:
    func_0x0001087c9084(1,unaff_x23);
    plVar14 = plStack_2a70;
    plVar12 = plStack_2a68;
    goto LAB_10162227c;
  }
  lVar6 = _malloc(0x1920);
  if (lVar6 == 0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1920);
    plVar14 = plStack_2a70;
    plVar12 = plStack_2a68;
    goto LAB_10162227c;
  }
  *(undefined8 *)(lVar6 + 0x1918) = 0;
  *(undefined8 *)(lVar6 + 0x1910) = 0;
  *(undefined8 *)(lVar6 + 0x1908) = 0;
  *(undefined8 *)(lVar6 + 0x1900) = 0;
  uStack_fa8 = 0;
  uStack_fb8 = 0;
  uStack_fb0 = 0;
  plStack_1178 = (long *)0x1;
  pplStack_1180 = (long **)0x1;
  uStack_10f8 = 0;
  uStack_1080 = 0;
  uStack_1070 = 0;
  uStack_ff8 = 0;
  uStack_1000 = 0;
  uStack_fe8 = 0;
  uStack_ff0 = 0;
  uStack_fc0 = 0;
  uStack_fd0 = 0;
  uStack_fc8 = 0;
  uStack_f98 = 0x640;
  uStack_fa0 = 0xc80;
  uStack_f88 = 0;
  uStack_f90 = 1;
  plStack_1998 = (long *)0x0;
  lStack_1100 = lVar6;
  lStack_fe0 = lVar6;
  lStack_fd8 = lVar6;
  iVar5 = _posix_memalign(&plStack_1998,0x80,0x200);
  plVar9 = plStack_1998;
  if ((iVar5 != 0) || (plStack_1998 == (long *)0x0)) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x200);
    plVar14 = plStack_2a70;
    plVar12 = plStack_2a68;
    goto LAB_10162227c;
  }
  _memcpy(plStack_1998,&pplStack_1180,0x200);
  lVar6 = *plVar9;
  *plVar9 = lVar6 + 1;
  plVar14 = plStack_2a70;
  plVar12 = plStack_2a68;
  if (lVar6 < 0) goto LAB_10162227c;
  plStack_2a88 = plVar9;
  plStack_2a80 = plVar9;
  plVar9 = *(long **)(param_2[0x30] + 0x40);
  lVar6 = *plVar9;
  *plVar9 = lVar6 + 1;
  if (lVar6 < 0) goto LAB_10162227c;
  plVar10 = (long *)param_2[0x30];
  lVar17 = plVar10[6];
  lVar6 = plVar10[7];
  lVar1 = plVar10[0xb];
  unaff_x23 = 0x8000000000000000;
  plStack_2a78 = plVar9;
  if (*plVar10 == -0x8000000000000000) {
    uVar13 = 0x8000000000000000;
    if (plVar10[3] == -0x8000000000000000) goto LAB_101622264;
LAB_1016222c8:
    lVar4 = plVar10[4];
    unaff_x23 = plVar10[5];
    if (unaff_x23 == 0) {
      unaff_x24 = 1;
    }
    else {
      unaff_x24 = _malloc(unaff_x23);
      if (unaff_x24 == 0) goto LAB_101622a7c;
    }
    _memcpy(unaff_x24,lVar4,unaff_x23);
    plVar10 = (long *)param_2[0x30];
    plVar9 = (long *)((long *)param_2[0x30])[9];
    plVar14 = plStack_2a70;
    plVar12 = plStack_2a68;
  }
  else {
    unaff_x24 = plVar10[1];
    uVar13 = plVar10[2];
    if (uVar13 == 0) {
      lVar4 = 1;
    }
    else {
      lVar4 = _malloc(uVar13);
      if (lVar4 == 0) {
        func_0x0001087c9084(1,uVar13);
        plVar14 = plStack_2a70;
        plVar12 = plStack_2a68;
        goto LAB_10162227c;
      }
    }
    lStack_2aa0 = lVar4;
    _memcpy(lVar4,unaff_x24,uVar13);
    plVar10 = (long *)param_2[0x30];
    if (plVar10[3] != -0x8000000000000000) goto LAB_1016222c8;
LAB_101622264:
    plVar9 = (long *)plVar10[9];
    plVar14 = plStack_2a70;
    plVar12 = plStack_2a68;
  }
  plStack_2a70 = plVar9;
  plStack_2a68 = plVar10;
  if (plStack_2a70 != (long *)0x0) {
    plStack_2a68 = (long *)plStack_2a68[10];
    lVar4 = *plStack_2a70;
    *plStack_2a70 = lVar4 + 1;
    if (lVar4 < 0) goto LAB_10162227c;
  }
  puStack_2a90 = param_1;
  FUN_1006882f4(&pplStack_1180,param_2);
  if (pplStack_1180 == (long **)0x8000000000000005) {
    plStack_90 = plStack_1178;
    pplStack_21b0 = &plStack_90;
    pcStack_21a8 = 
    __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&plStack_1998,s__failed_to_encode_websocket_requ_108ad9817,&pplStack_21b0);
    plVar14 = plStack_90;
    plVar12 = plStack_1998;
    pcStack_21a8 = (code *)uStack_1988;
    pplStack_21b0 = pplStack_1990;
    if (*plStack_90 == 1) {
      uVar19 = plStack_90[1];
      if ((uVar19 & 3) == 1) {
        puVar18 = (undefined8 *)(uVar19 - 1);
        uStack_2aa8 = *puVar18;
        puVar16 = *(undefined8 **)(uVar19 + 7);
        pcVar2 = (code *)*puVar16;
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(uStack_2aa8);
        }
        if (puVar16[1] != 0) {
          _free(uStack_2aa8);
        }
        goto LAB_1016223a8;
      }
    }
    else if ((*plStack_90 == 0) && (plStack_90[2] != 0)) {
      puVar18 = (undefined8 *)plStack_90[1];
LAB_1016223a8:
      _free(puVar18);
    }
    _free(plVar14);
    uStack_29c8 = pcStack_21a8;
    pplStack_29d0 = pplStack_21b0;
    uStack_898 = pcStack_21a8;
    uStack_8a0 = pplStack_21b0;
    uStack_29e8 = pcStack_21a8;
    pplStack_29f0 = pplStack_21b0;
    if (plStack_2a70 != (long *)0x0) {
      lVar6 = *plStack_2a70;
      *plStack_2a70 = lVar6 + -1;
      LORelease();
      if (lVar6 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0b7fbeb871479c9cE(&plStack_2a70);
      }
    }
    if ((unaff_x23 & 0x7fffffffffffffff) == 0) {
      if ((uVar13 & 0x7fffffffffffffff) == 0) goto LAB_10162254c;
LAB_101622574:
      _free(lStack_2aa0);
      lVar6 = *plStack_2a78;
      *plStack_2a78 = lVar6 + -1;
      LORelease();
    }
    else {
      _free(unaff_x24);
      if ((uVar13 & 0x7fffffffffffffff) != 0) goto LAB_101622574;
LAB_10162254c:
      lVar6 = *plStack_2a78;
      *plStack_2a78 = lVar6 + -1;
      LORelease();
    }
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb60086413e7ea50cE(&plStack_2a78);
    }
    FUN_100d57368(&plStack_2a80);
    plVar9 = plStack_2a88;
    plVar14 = (long *)0xffffffffffffffff;
    LOAcquire();
    lVar6 = plStack_2a88[0x3e];
    plStack_2a88[0x3e] = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      LOAcquire();
      lVar6 = plStack_2a88[0x11];
      plStack_2a88[0x11] = lVar6 + 1;
      lVar6 = func_0x000100fcb7c0(plStack_2a88 + 0x10,lVar6);
      *(ulong *)(lVar6 + 0x1910) = *(ulong *)(lVar6 + 0x1910) | 0x200000000;
      LORelease();
      puVar7 = (ulong *)(plVar9 + 0x22);
      LOAcquire();
      uVar13 = *puVar7;
      *puVar7 = uVar13 | 2;
      LORelease();
      if (uVar13 == 0) {
        lVar6 = plVar9[0x20];
        plVar9[0x20] = 0;
        *puVar7 = in_xzr;
        LORelease();
        if (lVar6 != 0) {
          (**(code **)(lVar6 + 8))(plVar9[0x21]);
        }
      }
    }
    lVar6 = *plStack_2a88;
    *plStack_2a88 = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      func_0x0001017aea4c(&plStack_2a88);
    }
    if (*param_2 != -0x8000000000000000) {
      func_0x000100e15954(param_2);
      uVar15 = 9;
      goto LAB_1016229f8;
    }
    lVar6 = param_2[1];
    uVar15 = 9;
  }
  else {
    uStack_2a30 = CONCAT44(uStack_114c,uStack_1150);
    pplStack_2a38 = pplStack_1158;
    plStack_2a40 = plStack_1160;
    uStack_2a28 = uStack_1148;
    uStack_2a20 = uStack_1140;
    puStack_2a50 = puStack_1170;
    plStack_2a58 = plStack_1178;
    pplStack_2a60 = pplStack_1180;
    uStack_2a48 = uStack_1168;
    __ZN7tracing4span4Span7current17h348f9350075e824bE(&pplStack_2a18);
    uStack_285f = (undefined1)param_2[0x31];
    lVar4 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
    do {
      ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar4;
      lVar4 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    } while (___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0);
    uStack_29c8 = uStack_2a10;
    pplStack_29d0 = pplStack_2a18;
    uStack_29b8 = uStack_2a00;
    uStack_29c0 = uStack_2a08;
    uStack_2960 = uStack_2a48;
    puStack_2968 = puStack_2a50;
    pplStack_2950 = pplStack_2a38;
    plStack_2958 = plStack_2a40;
    uStack_2940 = uStack_2a28;
    uStack_2948 = uStack_2a30;
    lStack_29d8 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
    uStack_29b0 = uStack_29f8;
    lStack_2988 = lStack_2aa0;
    uStack_2938 = uStack_2a20;
    plStack_2970 = plStack_2a58;
    pplStack_2978 = pplStack_2a60;
    plStack_2920 = plStack_2a88;
    plStack_2918 = plStack_2a78;
    plStack_2908 = plStack_2a68;
    plStack_2910 = plStack_2a70;
    uStack_285e = 0;
    plStack_21c8 = &lStack_29d8;
    puStack_21c0 = auStack_81;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE =
         ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    uStack_29a8 = unaff_x23;
    lStack_29a0 = unaff_x24;
    uStack_2998 = unaff_x23;
    uStack_2990 = uVar13;
    uStack_2980 = uVar13;
    lStack_2930 = lVar17;
    uStack_2928 = (int)lVar6;
    uStack_2860 = (char)lVar1;
    puVar7 = (ulong *)(*
                      ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                      )();
    if ((char)puVar7[9] != '\x01') {
      if ((char)puVar7[9] != '\x02') {
        __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                  (puVar7,&DAT_100c35d48);
        *(undefined1 *)(puVar7 + 9) = 1;
        goto LAB_1016226bc;
      }
      FUN_100da3250(&pplStack_29d0);
      uVar8 = 1;
LAB_1016224ac:
      plStack_1998 = (long *)CONCAT71(plStack_1998._1_7_,uVar8);
      pplStack_1180 = &plStack_1998;
      plStack_1178 = (long *)&
                             __ZN78__LT_tokio__runtime__handle__TryCurrentError_u20_as_u20_core__fmt__Display_GT_3fmt17he04e046082d0b96dE
      ;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&pplStack_1180,&UNK_10b24fae0);
      plVar14 = plStack_2a70;
      plVar12 = plStack_2a68;
LAB_10162227c:
      plStack_2a68 = plVar12;
      plStack_2a70 = plVar14;
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101622280);
      (*pcVar2)();
    }
LAB_1016226bc:
    _memcpy(&pplStack_21b0,&pplStack_29d0,0x818);
    if (0x7ffffffffffffffe < *puVar7) {
      func_0x000108a07858(&UNK_10b2435a0);
      plVar14 = plStack_2a70;
      plVar12 = plStack_2a68;
      goto LAB_10162227c;
    }
    *puVar7 = *puVar7 + 1;
    uVar13 = puVar7[1];
    _memcpy(&plStack_1998,&pplStack_29d0,0x818);
    if (uVar13 == 2) {
      FUN_100da3250(&plStack_1998);
      uVar8 = 0;
      *puVar7 = *puVar7 - 1;
      goto LAB_1016224ac;
    }
    pplVar11 = (long **)*puStack_1190;
    plVar14 = plStack_2a70;
    plVar12 = plStack_2a68;
    if ((uVar13 & 1) == 0) {
      plVar9 = (long *)puVar7[2];
      lVar6 = *plVar9;
      *plVar9 = lVar6 + 1;
      if (lVar6 < 0) goto LAB_10162227c;
      plVar10 = (long *)plVar9[0x5e];
      if (plVar10 == (long *)0x0) {
        lStack_2aa0 = 0;
        lStack_2a98 = 0;
      }
      else {
        lVar6 = *plVar10;
        *plVar10 = lVar6 + 1;
        if (lVar6 < 0) goto LAB_10162227c;
        lStack_2a98 = plVar9[0x5f];
        lStack_2aa0 = plVar9[0x5e];
      }
      _memcpy((long)&uStack_8a0 + 4,&pplStack_21b0,0x808);
      pplStack_1180 = (long **)0xcc;
      plStack_1178 = (long *)0x0;
      puStack_1170 = &UNK_10b23c450;
      uStack_1168 = 0;
      uStack_1150 = 0;
      plStack_1160 = plVar9;
      pplStack_1158 = pplVar11;
      _memcpy((ulong)&pplStack_1180 | 0x34,&uStack_8a0,0x80c);
      uStack_940 = 0;
      uStack_930 = 0;
      uStack_938 = 0;
      lStack_918 = lStack_2a98;
      lStack_920 = lStack_2aa0;
      plStack_90 = (long *)0x0;
      iVar5 = _posix_memalign(&plStack_90,0x80,0x880);
      plVar14 = plStack_90;
      if ((iVar5 != 0) || (plStack_90 == (long *)0x0)) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x880);
        plVar14 = plStack_2a70;
        plVar12 = plStack_2a68;
        goto LAB_10162227c;
      }
      _memcpy(plStack_90,&pplStack_1180,0x880);
      lVar6 = FUN_1010e2658(plVar9 + 0x2d,plVar14,plVar14);
      pplStack_1180 = pplVar11;
      if (plVar9[0x5c] != 0) {
        (**(code **)(plVar9[0x5d] + 0x28))
                  (plVar9[0x5c] + (*(long *)(plVar9[0x5d] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                   &pplStack_1180);
      }
      if (lVar6 != 0) {
        __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                  (puVar7 + 2,lVar6);
      }
    }
    else {
      plVar9 = (long *)puVar7[2];
      lVar6 = *plVar9;
      *plVar9 = lVar6 + 1;
      if (lVar6 < 0) goto LAB_10162227c;
      plVar10 = (long *)plVar9[0x4a];
      if (plVar10 == (long *)0x0) {
        lStack_2aa0 = 0;
        lStack_2a98 = 0;
      }
      else {
        lVar6 = *plVar10;
        *plVar10 = lVar6 + 1;
        if (lVar6 < 0) goto LAB_10162227c;
        lStack_2a98 = plVar9[0x4b];
        lStack_2aa0 = plVar9[0x4a];
      }
      _memcpy((long)&uStack_8a0 + 4,&pplStack_21b0,0x808);
      pplStack_1180 = (long **)0xcc;
      plStack_1178 = (long *)0x0;
      puStack_1170 = &UNK_10b23bbe0;
      uStack_1168 = 0;
      uStack_1150 = 0;
      plStack_1160 = plVar9;
      pplStack_1158 = pplVar11;
      _memcpy((ulong)&pplStack_1180 | 0x34,&uStack_8a0,0x80c);
      uStack_940 = 0;
      uStack_930 = 0;
      uStack_938 = 0;
      lStack_918 = lStack_2a98;
      lStack_920 = lStack_2aa0;
      plStack_90 = (long *)0x0;
      iVar5 = _posix_memalign(&plStack_90,0x80,0x880);
      plVar14 = plStack_90;
      if ((iVar5 != 0) || (plStack_90 == (long *)0x0)) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x880);
        plVar14 = plStack_2a70;
        plVar12 = plStack_2a68;
        goto LAB_10162227c;
      }
      _memcpy(plStack_90,&pplStack_1180,0x880);
      lVar6 = FUN_1010e2658(plVar9 + 0x11,plVar14,plVar14);
      pplStack_1180 = pplVar11;
      if (plVar9[0x48] != 0) {
        (**(code **)(plVar9[0x49] + 0x28))
                  (plVar9[0x48] + (*(long *)(plVar9[0x49] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                   &pplStack_1180);
      }
      if (lVar6 != 0) {
        FUN_10610fa38(plVar9 + 2,lVar6,0);
      }
    }
    *puVar7 = *puVar7 - 1;
    if (*plVar14 == 0xcc) {
      *plVar14 = 0x84;
    }
    else {
      (**(code **)(plVar14[2] + 0x20))(plVar14);
    }
    plVar14 = plStack_2a80;
    if (*param_2 != -0x8000000000000000) {
      func_0x000100e15954(param_2);
      plVar12 = (long *)0x8000000000000000;
      uVar15 = 0x12;
      goto LAB_1016229f8;
    }
    lVar6 = param_2[1];
    plVar12 = (long *)0x8000000000000000;
    uVar15 = 0x12;
  }
  if (lVar6 != 0) {
    _free(param_2[2]);
  }
LAB_1016229f8:
  *puStack_2a90 = uVar15;
  puStack_2a90[1] = plVar12;
  puStack_2a90[3] = uStack_29e8;
  puStack_2a90[2] = pplStack_29f0;
  puStack_2a90[4] = plVar14;
  *(undefined1 *)((long)param_2 + 0x189) = 1;
  return;
}

