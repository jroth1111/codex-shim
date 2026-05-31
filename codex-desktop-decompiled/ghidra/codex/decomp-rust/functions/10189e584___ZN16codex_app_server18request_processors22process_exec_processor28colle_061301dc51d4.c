
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long __ZN16codex_app_server18request_processors22process_exec_processor28collect_spawn_process_output17h8d8b5ffefbd78c20E
               (undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long *plVar11;
  undefined1 auStack_3080 [64];
  long lStack_3040;
  long lStack_3038;
  long lStack_3028;
  long *plStack_3020;
  undefined1 *puStack_3018;
  undefined8 uStack_3010;
  undefined8 uStack_3008;
  undefined8 uStack_3000;
  undefined8 uStack_2ff8;
  undefined8 uStack_2ff0;
  undefined8 uStack_2fe8;
  undefined8 uStack_2fe0;
  undefined8 uStack_2fd8;
  undefined8 uStack_2fd0;
  undefined8 uStack_2fc8;
  undefined1 uStack_2fa0;
  undefined1 uStack_2f9f;
  undefined1 uStack_2f9e;
  undefined1 auStack_26c0 [16];
  undefined1 auStack_26b0 [2384];
  undefined1 uStack_1d60;
  undefined7 uStack_1d5f;
  undefined1 auStack_1d50 [2384];
  undefined1 *puStack_1400;
  undefined *puStack_13f8;
  undefined *puStack_13f0;
  undefined8 uStack_13e8;
  long *plStack_13e0;
  undefined1 *puStack_13d8;
  undefined4 uStack_13d0;
  undefined8 auStack_1040 [185];
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  long lStack_a58;
  long lStack_a50;
  undefined1 auStack_9a4 [4];
  undefined1 auStack_9a0 [2384];
  long lStack_50;
  undefined1 uStack_41;
  
  puVar3 = auStack_1040;
  puVar1 = auStack_1040;
  while ((long)auStack_3080 < (long)puVar3) {
    *puVar1 = 0;
    puVar3 = puVar1 + -0x200;
    puVar1 = puVar1 + -0x200;
  }
  uStack_2fd0 = param_1[8];
  uStack_2fc8 = param_1[9];
  uStack_2fe0 = param_1[6];
  uStack_2fe8 = param_1[5];
  uStack_2fd8 = param_1[7];
  uStack_2f9f = *(undefined1 *)(param_1 + 10);
  uStack_2fa0 = *(undefined1 *)((long)param_1 + 0x51);
  uStack_3008 = param_1[1];
  uStack_3010 = *param_1;
  lVar4 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
  do {
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar4;
    lVar4 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
  } while (___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0);
  plStack_3020 = &lStack_3028;
  puStack_3018 = &uStack_41;
  lStack_3028 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
  uStack_2ff8 = param_1[3];
  uStack_3000 = param_1[2];
  uStack_2ff0 = param_1[4];
  uStack_2f9e = 0;
  ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE =
       ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
  puVar6 = (ulong *)(*
                    ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                    )();
  if ((char)puVar6[9] == '\x01') goto LAB_10189e5b8;
  if ((char)puVar6[9] != '\x02') goto LAB_10189e5a0;
  FUN_101940fa8(&uStack_3010);
  uStack_1d60 = 1;
  while( true ) {
    puStack_1400 = &uStack_1d60;
    puStack_13f8 = &
                   __ZN78__LT_tokio__runtime__handle__TryCurrentError_u20_as_u20_core__fmt__Display_GT_3fmt17he04e046082d0b96dE
    ;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108add0bf,&puStack_1400,&UNK_10b265d80);
LAB_10189e5a0:
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(puVar6,&DAT_10192b788)
    ;
    *(undefined1 *)(puVar6 + 9) = 1;
LAB_10189e5b8:
    _memcpy(auStack_26c0,&plStack_3020,0x960);
    if (0x7ffffffffffffffe < *puVar6) {
      func_0x000108a07858(&UNK_10b269bc8);
      goto LAB_10189e9ac;
    }
    *puVar6 = *puVar6 + 1;
    uVar9 = puVar6[1];
    _memcpy(&uStack_1d60,&plStack_3020,0x960);
    if (uVar9 != 2) break;
    FUN_101940fa8(auStack_1d50);
    uStack_1d60 = 0;
    *puVar6 = *puVar6 - 1;
  }
  puVar10 = *(undefined1 **)CONCAT71(uStack_1d5f,uStack_1d60);
  if ((uVar9 & 1) == 0) {
    plVar11 = (long *)puVar6[2];
    lVar4 = *plVar11;
    *plVar11 = lVar4 + 1;
    if (-1 < lVar4) {
      plVar8 = (long *)plVar11[0x5e];
      if (plVar8 == (long *)0x0) {
        lStack_3040 = 0;
        lStack_3038 = 0;
      }
      else {
        lVar4 = *plVar8;
        *plVar8 = lVar4 + 1;
        if (lVar4 < 0) goto LAB_10189e9ac;
        lStack_3038 = plVar11[0x5f];
        lStack_3040 = plVar11[0x5e];
      }
      _memcpy(auStack_9a0,auStack_26b0,0x950);
      puStack_1400 = (undefined1 *)0xcc;
      puStack_13f8 = (undefined *)0x0;
      puStack_13f0 = &UNK_10b269af8;
      uStack_13e8 = 0;
      uStack_13d0 = 0;
      plStack_13e0 = plVar11;
      puStack_13d8 = puVar10;
      _memcpy((ulong)&puStack_1400 | 0x34,auStack_9a4,0x954);
      uStack_a78 = 0;
      uStack_a68 = 0;
      uStack_a70 = 0;
      lStack_a50 = lStack_3038;
      lStack_a58 = lStack_3040;
      lStack_50 = 0;
      iVar5 = _posix_memalign(&lStack_50,0x80,0xa00);
      lVar4 = lStack_50;
      if ((iVar5 == 0) && (lStack_50 != 0)) {
        _memcpy(lStack_50,&puStack_1400,0xa00);
        lVar7 = FUN_1019a3804(plVar11 + 0x2d,lVar4,lVar4);
        puStack_1400 = puVar10;
        if (plVar11[0x5c] != 0) {
          (**(code **)(plVar11[0x5d] + 0x28))
                    (plVar11[0x5c] + (*(long *)(plVar11[0x5d] + 0x10) - 1U & 0xfffffffffffffff0) +
                     0x10,&puStack_1400);
        }
        if (lVar7 != 0) {
          __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                    (puVar6 + 2,lVar7);
        }
        goto LAB_10189e89c;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0xa00);
    }
  }
  else {
    plVar11 = (long *)puVar6[2];
    lVar4 = *plVar11;
    *plVar11 = lVar4 + 1;
    if (-1 < lVar4) {
      plVar8 = (long *)plVar11[0x4a];
      if (plVar8 == (long *)0x0) {
        lStack_3040 = 0;
        lStack_3038 = 0;
      }
      else {
        lVar4 = *plVar8;
        *plVar8 = lVar4 + 1;
        if (lVar4 < 0) goto LAB_10189e9ac;
        lStack_3038 = plVar11[0x4b];
        lStack_3040 = plVar11[0x4a];
      }
      _memcpy(auStack_9a0,auStack_26b0,0x950);
      puStack_1400 = (undefined1 *)0xcc;
      puStack_13f8 = (undefined *)0x0;
      puStack_13f0 = &UNK_10b269aa8;
      uStack_13e8 = 0;
      uStack_13d0 = 0;
      plStack_13e0 = plVar11;
      puStack_13d8 = puVar10;
      _memcpy((ulong)&puStack_1400 | 0x34,auStack_9a4,0x954);
      uStack_a78 = 0;
      uStack_a68 = 0;
      uStack_a70 = 0;
      lStack_a50 = lStack_3038;
      lStack_a58 = lStack_3040;
      lStack_50 = 0;
      iVar5 = _posix_memalign(&lStack_50,0x80,0xa00);
      lVar4 = lStack_50;
      if ((iVar5 == 0) && (lStack_50 != 0)) {
        _memcpy(lStack_50,&puStack_1400,0xa00);
        lVar7 = FUN_1019a3804(plVar11 + 0x11,lVar4,lVar4);
        puStack_1400 = puVar10;
        if (plVar11[0x48] != 0) {
          (**(code **)(plVar11[0x49] + 0x28))
                    (plVar11[0x48] + (*(long *)(plVar11[0x49] + 0x10) - 1U & 0xfffffffffffffff0) +
                     0x10,&puStack_1400);
        }
        if (lVar7 != 0) {
          FUN_10610fa38(plVar11 + 2,lVar7,0);
        }
LAB_10189e89c:
        *puVar6 = *puVar6 - 1;
        return lVar4;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0xa00);
    }
  }
LAB_10189e9ac:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10189e9b0);
  (*pcVar2)();
}

