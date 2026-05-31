
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1016e91f0(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long *plVar7;
  long **pplVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_1900 [32];
  undefined8 *puStack_18e0;
  undefined8 *puStack_18d8;
  long lStack_18c8;
  undefined8 uStack_18c0;
  undefined8 uStack_18b8;
  undefined8 uStack_18b0;
  undefined8 uStack_18a8;
  undefined8 uStack_18a0;
  undefined8 uStack_1898;
  undefined8 uStack_1890;
  undefined8 uStack_1888;
  undefined8 uStack_1880;
  undefined8 uStack_1878;
  long *aplStack_1870 [53];
  long lStack_16c8;
  undefined8 uStack_16c0;
  undefined8 uStack_16b8;
  undefined8 uStack_16b0;
  undefined8 uStack_16a8;
  undefined8 uStack_16a0;
  undefined8 uStack_1698;
  undefined8 uStack_1690;
  undefined8 uStack_1688;
  undefined8 uStack_1680;
  undefined8 uStack_1678;
  long lStack_14c8;
  long *plStack_14c0;
  undefined1 *puStack_14b8;
  undefined1 auStack_14b0 [408];
  long *plStack_1318;
  undefined1 *puStack_1310;
  undefined1 auStack_1308 [512];
  undefined1 uStack_1108;
  undefined1 auStack_1100 [16];
  undefined1 auStack_10f0 [128];
  undefined8 auStack_1070 [102];
  undefined8 auStack_d40 [2];
  undefined1 auStack_d30 [408];
  undefined8 *puStack_b98;
  undefined1 auStack_b88 [88];
  undefined1 auStack_b30 [424];
  char cStack_988;
  undefined8 *puStack_980;
  undefined *puStack_978;
  undefined *puStack_970;
  undefined8 uStack_968;
  long *plStack_960;
  undefined8 *puStack_958;
  undefined4 uStack_950;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 *puStack_578;
  undefined8 *puStack_570;
  undefined1 auStack_4c4 [4];
  undefined1 auStack_4c0 [944];
  long *plStack_110;
  undefined1 auStack_101 [145];
  
  puVar4 = (undefined8 *)_malloc(0x40);
  if (puVar4 != (undefined8 *)0x0) {
    uVar5 = *param_2;
    uVar14 = param_2[3];
    uVar13 = param_2[2];
    puVar4[1] = param_2[1];
    *puVar4 = uVar5;
    puVar4[3] = uVar14;
    puVar4[2] = uVar13;
    uVar5 = param_2[4];
    uVar14 = param_2[7];
    uVar13 = param_2[6];
    puVar4[5] = param_2[5];
    puVar4[4] = uVar5;
    puVar4[7] = uVar14;
    puVar4[6] = uVar13;
    lVar9 = param_1[2];
    if (lVar9 == *param_1) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd9055ff48b871d5aE(param_1);
    }
    plVar11 = (long *)(param_1[1] + lVar9 * 0x20);
    *plVar11 = (long)puVar4;
    plVar11[1] = (long)&UNK_10b237e70;
    plVar11[3] = 0x62ff0564f7a9ef2e;
    plVar11[2] = -0x38a02eedc53115a4;
    param_1[2] = lVar9 + 1;
    return param_1;
  }
  uVar5 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(4,0x40);
  FUN_100d1eb68();
  __Unwind_Resume(uVar5);
  auVar15 = func_0x000108a07bc4();
  puVar6 = auVar15._8_8_;
  puVar2 = auStack_1070;
  puVar4 = auStack_1070;
  while ((long)auStack_1900 < (long)puVar2) {
    *puVar4 = 0;
    puVar2 = puVar4 + -0x200;
    puVar4 = puVar4 + -0x200;
  }
  if (*auVar15._0_8_ != 4) goto LAB_1016e93a4;
  pplVar8 = &puStack_980;
  lVar9 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
  do {
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar9;
    lVar9 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
  } while (___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0);
  lStack_18c8 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
  ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE =
       ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
  _memcpy(&plStack_14c0,puVar6,0x1a8);
  plStack_1318 = &lStack_18c8;
  puStack_1310 = auStack_101;
  puVar6 = (ulong *)(*
                    ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                    )();
  if ((char)puVar6[9] == '\x01') goto LAB_1016e94b8;
  if ((char)puVar6[9] != '\x02') goto LAB_1016e94a0;
  FUN_100daea3c(&plStack_14c0);
  auStack_d40[0]._0_1_ = 1;
  do {
    puStack_980 = auStack_d40;
    puStack_978 = &
                  __ZN78__LT_tokio__runtime__handle__TryCurrentError_u20_as_u20_core__fmt__Display_GT_3fmt17he04e046082d0b96dE
    ;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&puStack_980,&UNK_10b2525f0);
LAB_1016e93a4:
    __ZN75__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__clone__Clone_GT_5clone17h8894a6a19c694adeE
              (&lStack_18c8);
    _memcpy(aplStack_1870,puVar6,0x1a8);
    uStack_16a0 = uStack_18a0;
    uStack_16a8 = uStack_18a8;
    uStack_1690 = uStack_1890;
    uStack_1698 = uStack_1898;
    uStack_1680 = uStack_1880;
    uStack_1688 = uStack_1888;
    uStack_16c0 = uStack_18c0;
    lStack_16c8 = lStack_18c8;
    uStack_16b0 = uStack_18b0;
    uStack_16b8 = uStack_18b8;
    uStack_1678 = uStack_1878;
    lVar9 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
    do {
      ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar9;
      lVar9 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    } while (___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0);
    lStack_14c8 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
    plStack_14c0 = &lStack_14c8;
    puStack_14b8 = auStack_101;
    pplVar8 = &plStack_14c0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE =
         ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    _memcpy(auStack_14b0,aplStack_1870,0x3a8);
    uStack_1108 = 0;
    puVar6 = (ulong *)(*
                      ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                      )();
    if ((char)puVar6[9] == '\x01') {
LAB_1016e977c:
      _memcpy(auStack_1100,&plStack_14c0,0x3c0);
      pplVar8 = (long **)*puVar6;
      if ((long **)0x7ffffffffffffffe < pplVar8) {
        func_0x000108a07858(&UNK_10b2435a0);
        goto LAB_1016e9cd0;
      }
      *puVar6 = (long)pplVar8 + 1;
      uVar10 = puVar6[1];
      _memcpy(auStack_d40,&plStack_14c0,0x3c0);
      if (uVar10 != 2) {
        plVar11 = *(long **)CONCAT71(auStack_d40[0]._1_7_,(undefined1)auStack_d40[0]);
        if ((uVar10 & 1) == 0) {
          plVar12 = (long *)puVar6[2];
          lVar9 = *plVar12;
          *plVar12 = lVar9 + 1;
          if (lVar9 < 0) goto LAB_1016e9cd0;
          plVar7 = (long *)plVar12[0x5e];
          if (plVar7 == (long *)0x0) {
            puStack_18e0 = (long *)0x0;
            puStack_18d8 = (long *)0x0;
          }
          else {
            lVar9 = *plVar7;
            *plVar7 = lVar9 + 1;
            if (lVar9 < 0) goto LAB_1016e9cd0;
            puStack_18d8 = (undefined8 *)plVar12[0x5f];
            puStack_18e0 = (undefined8 *)plVar12[0x5e];
          }
          _memcpy(auStack_4c0,auStack_10f0,0x3b0);
          puStack_980 = (long *)0xcc;
          puStack_978 = (undefined *)0x0;
          puStack_970 = &UNK_10b242940;
          uStack_968 = 0;
          uStack_950 = 0;
          plStack_960 = plVar12;
          puStack_958 = plVar11;
          _memcpy((ulong)&puStack_980 | 0x34,auStack_4c4,0x3b4);
          uStack_598 = 0;
          uStack_588 = 0;
          uStack_590 = 0;
          puStack_570 = puStack_18d8;
          puStack_578 = puStack_18e0;
          plStack_110 = (long *)0x0;
          iVar3 = _posix_memalign(&plStack_110,0x80,0x480);
          plVar7 = plStack_110;
          if ((iVar3 != 0) || (plStack_110 == (long *)0x0)) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x480);
            goto LAB_1016e9cd0;
          }
          _memcpy(plStack_110,&puStack_980,0x480);
          lVar9 = FUN_1010e2658(plVar12 + 0x2d,plVar7,plVar7);
          puStack_980 = plVar11;
          if (plVar12[0x5c] != 0) {
            (**(code **)(plVar12[0x5d] + 0x28))
                      (plVar12[0x5c] + (*(long *)(plVar12[0x5d] + 0x10) - 1U & 0xfffffffffffffff0) +
                       0x10,&puStack_980);
          }
          if (lVar9 != 0) {
            __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                      (puVar6 + 2,lVar9);
          }
        }
        else {
          plVar12 = (long *)puVar6[2];
          lVar9 = *plVar12;
          *plVar12 = lVar9 + 1;
          if (lVar9 < 0) goto LAB_1016e9cd0;
          plVar7 = (long *)plVar12[0x4a];
          if (plVar7 == (long *)0x0) {
            puStack_18e0 = (long *)0x0;
            puStack_18d8 = (long *)0x0;
          }
          else {
            lVar9 = *plVar7;
            *plVar7 = lVar9 + 1;
            if (lVar9 < 0) goto LAB_1016e9cd0;
            puStack_18d8 = (undefined8 *)plVar12[0x4b];
            puStack_18e0 = (undefined8 *)plVar12[0x4a];
          }
          _memcpy(auStack_4c0,auStack_10f0,0x3b0);
          puStack_980 = (long *)0xcc;
          puStack_978 = (undefined *)0x0;
          puStack_970 = &UNK_10b241fe0;
          uStack_968 = 0;
          uStack_950 = 0;
          plStack_960 = plVar12;
          puStack_958 = plVar11;
          _memcpy((ulong)&puStack_980 | 0x34,auStack_4c4,0x3b4);
          uStack_598 = 0;
          uStack_588 = 0;
          uStack_590 = 0;
          puStack_570 = puStack_18d8;
          puStack_578 = puStack_18e0;
          plStack_110 = (long *)0x0;
          iVar3 = _posix_memalign(&plStack_110,0x80,0x480);
          plVar7 = plStack_110;
          if ((iVar3 != 0) || (plStack_110 == (long *)0x0)) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x480);
            goto LAB_1016e9cd0;
          }
          _memcpy(plStack_110,&puStack_980,0x480);
          lVar9 = FUN_1010e2658(plVar12 + 0x11,plVar7,plVar7);
          puStack_980 = plVar11;
          if (plVar12[0x48] != 0) {
            (**(code **)(plVar12[0x49] + 0x28))
                      (plVar12[0x48] + (*(long *)(plVar12[0x49] + 0x10) - 1U & 0xfffffffffffffff0) +
                       0x10,&puStack_980);
          }
          if (lVar9 != 0) {
            FUN_10610fa38(plVar12 + 2,lVar9,0);
          }
        }
        goto LAB_1016e9a3c;
      }
      if (cStack_988 == '\0') {
        FUN_100daea3c(auStack_d30);
LAB_1016e9b0c:
        __ZN78__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h6900df02db0519f4E
                  (auStack_b88);
        pplVar8 = (long **)(*puVar6 - 1);
      }
      else if (cStack_988 == '\x03') {
        FUN_100daea3c(auStack_b30);
        goto LAB_1016e9b0c;
      }
      auStack_d40[0]._0_1_ = 0;
      *puVar6 = (ulong)pplVar8;
    }
    else {
      if ((char)puVar6[9] != '\x02') {
        __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                  (puVar6,&DAT_100c35d48);
        *(undefined1 *)(puVar6 + 9) = 1;
        goto LAB_1016e977c;
      }
      FUN_100daea3c(auStack_14b0);
      __ZN78__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h6900df02db0519f4E
                (auStack_1308);
      auStack_d40[0]._0_1_ = 1;
    }
    puStack_980 = auStack_d40;
    puStack_978 = &
                  __ZN78__LT_tokio__runtime__handle__TryCurrentError_u20_as_u20_core__fmt__Display_GT_3fmt17he04e046082d0b96dE
    ;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&puStack_980,&UNK_10b2236e8);
LAB_1016e94a0:
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(puVar6,&DAT_100c35d48)
    ;
    *(undefined1 *)(puVar6 + 9) = 1;
LAB_1016e94b8:
    _memcpy(auStack_1100,&plStack_14c0,0x1b8);
    if (0x7ffffffffffffffe < *puVar6) {
      func_0x000108a07858(&UNK_10b2435a0);
      goto LAB_1016e9cd0;
    }
    *puVar6 = *puVar6 + 1;
    uVar10 = puVar6[1];
    _memcpy(auStack_d40,&plStack_14c0,0x1b8);
    if (uVar10 != 2) break;
    FUN_100daea3c(auStack_d40);
    auStack_d40[0]._0_1_ = 0;
    *puVar6 = *puVar6 - 1;
  } while( true );
  plVar11 = (long *)*puStack_b98;
  if ((uVar10 & 1) == 0) {
    plVar12 = (long *)puVar6[2];
    lVar9 = *plVar12;
    *plVar12 = lVar9 + 1;
    if (-1 < lVar9) {
      plVar7 = (long *)plVar12[0x5e];
      if (plVar7 == (long *)0x0) {
        puStack_18e0 = (long *)0x0;
        puStack_18d8 = (long *)0x0;
      }
      else {
        lVar9 = *plVar7;
        *plVar7 = lVar9 + 1;
        if (lVar9 < 0) goto LAB_1016e9cd0;
        puStack_18d8 = (undefined8 *)plVar12[0x5f];
        puStack_18e0 = (undefined8 *)plVar12[0x5e];
      }
      _memcpy(auStack_4c0,auStack_1100,0x1a8);
      puStack_980 = (long *)0xcc;
      puStack_978 = (undefined *)0x0;
      puStack_970 = &UNK_10b23de40;
      uStack_968 = 0;
      uStack_950 = 0;
      plStack_960 = plVar12;
      puStack_958 = plVar11;
      _memcpy((ulong)&puStack_980 | 0x34,auStack_4c4,0x1ac);
      uStack_790 = 0;
      uStack_7a0 = 0;
      uStack_798 = 0;
      pplVar8[0x41] = puStack_18d8;
      pplVar8[0x40] = puStack_18e0;
      aplStack_1870[0] = (long *)0x0;
      iVar3 = _posix_memalign(aplStack_1870,0x80,0x280);
      plVar7 = aplStack_1870[0];
      if ((iVar3 == 0) && (aplStack_1870[0] != (long *)0x0)) {
        _memcpy(aplStack_1870[0],&puStack_980,0x280);
        lVar9 = FUN_1010e2658(plVar12 + 0x2d,plVar7,plVar7);
        puStack_980 = plVar11;
        if (plVar12[0x5c] != 0) {
          (**(code **)(plVar12[0x5d] + 0x28))
                    (plVar12[0x5c] + (*(long *)(plVar12[0x5d] + 0x10) - 1U & 0xfffffffffffffff0) +
                     0x10,&puStack_980);
        }
        if (lVar9 != 0) {
          __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                    (puVar6 + 2,lVar9);
        }
        goto LAB_1016e9a3c;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x280);
    }
  }
  else {
    plVar12 = (long *)puVar6[2];
    lVar9 = *plVar12;
    *plVar12 = lVar9 + 1;
    if (-1 < lVar9) {
      plVar7 = (long *)plVar12[0x4a];
      if (plVar7 == (long *)0x0) {
        puStack_18e0 = (long *)0x0;
        puStack_18d8 = (long *)0x0;
      }
      else {
        lVar9 = *plVar7;
        *plVar7 = lVar9 + 1;
        if (lVar9 < 0) goto LAB_1016e9cd0;
        puStack_18d8 = (undefined8 *)plVar12[0x4b];
        puStack_18e0 = (undefined8 *)plVar12[0x4a];
      }
      _memcpy(auStack_4c0,auStack_1100,0x1a8);
      puStack_980 = (long *)0xcc;
      puStack_978 = (undefined *)0x0;
      puStack_970 = &UNK_10b242580;
      uStack_968 = 0;
      uStack_950 = 0;
      plStack_960 = plVar12;
      puStack_958 = plVar11;
      _memcpy((ulong)&puStack_980 | 0x34,auStack_4c4,0x1ac);
      uStack_790 = 0;
      uStack_7a0 = 0;
      uStack_798 = 0;
      pplVar8[0x41] = puStack_18d8;
      pplVar8[0x40] = puStack_18e0;
      aplStack_1870[0] = (long *)0x0;
      iVar3 = _posix_memalign(aplStack_1870,0x80,0x280);
      plVar7 = aplStack_1870[0];
      if ((iVar3 == 0) && (aplStack_1870[0] != (long *)0x0)) {
        _memcpy(aplStack_1870[0],&puStack_980,0x280);
        lVar9 = FUN_1010e2658(plVar12 + 0x11,plVar7,plVar7);
        puStack_980 = plVar11;
        if (plVar12[0x48] != 0) {
          (**(code **)(plVar12[0x49] + 0x28))
                    (plVar12[0x48] + (*(long *)(plVar12[0x49] + 0x10) - 1U & 0xfffffffffffffff0) +
                     0x10,&puStack_980);
        }
        if (lVar9 != 0) {
          FUN_10610fa38(plVar12 + 2,lVar9,0);
        }
LAB_1016e9a3c:
        *puVar6 = *puVar6 - 1;
        return plVar7;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x280);
    }
  }
LAB_1016e9cd0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016e9cd4);
  (*pcVar1)();
}

