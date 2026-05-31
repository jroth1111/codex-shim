
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100fdc900(undefined8 param_1)

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
  undefined1 auStack_10500 [16];
  long lStack_104f0;
  long lStack_104e8;
  long lStack_104d8;
  long *plStack_104d0;
  undefined1 *puStack_104c8;
  undefined1 auStack_104c0 [13280];
  undefined1 auStack_d0e0 [16];
  undefined1 auStack_d0d0 [13280];
  undefined1 uStack_9cf0;
  undefined7 uStack_9cef;
  undefined1 auStack_9ce0 [13280];
  undefined1 *puStack_6900;
  undefined *puStack_68f8;
  undefined *puStack_68f0;
  undefined8 uStack_68e8;
  long *plStack_68e0;
  undefined1 *puStack_68d8;
  undefined4 uStack_68d0;
  undefined8 uStack_34e8;
  undefined8 uStack_34e0;
  undefined8 uStack_34d8;
  long lStack_34c8;
  long lStack_34c0;
  undefined1 auStack_3474 [4];
  undefined1 auStack_3470 [9248];
  undefined8 auStack_1050 [504];
  long lStack_90;
  undefined1 auStack_81 [49];
  
  puVar3 = auStack_1050;
  puVar1 = auStack_1050;
  while ((long)auStack_10500 < (long)puVar3) {
    *puVar1 = 0;
    puVar3 = puVar1 + -0x200;
    puVar1 = puVar1 + -0x200;
  }
  lVar4 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
  do {
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar4;
    lVar4 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
  } while (___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0);
  plStack_104d0 = &lStack_104d8;
  puStack_104c8 = auStack_81;
  lStack_104d8 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
  ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE =
       ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
  _memcpy(auStack_104c0,param_1,0x33e0);
  puVar6 = (ulong *)(*
                    ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                    )();
  if ((char)puVar6[9] == '\x01') goto LAB_100fdca10;
  if ((char)puVar6[9] != '\x02') goto LAB_100fdc9f8;
  func_0x000100cb203c(auStack_104c0);
  uStack_9cf0 = 1;
  while( true ) {
    puStack_68f8 = &
                   __ZN78__LT_tokio__runtime__handle__TryCurrentError_u20_as_u20_core__fmt__Display_GT_3fmt17he04e046082d0b96dE
    ;
    puStack_6900 = &uStack_9cf0;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&puStack_6900,&UNK_10b22a240);
LAB_100fdc9f8:
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(puVar6,&DAT_100c35d48)
    ;
    *(undefined1 *)(puVar6 + 9) = 1;
LAB_100fdca10:
    _memcpy(auStack_d0e0,&plStack_104d0,0x33f0);
    if (0x7ffffffffffffffe < *puVar6) {
      func_0x000108a07858(&UNK_10b2435a0);
      goto LAB_100fdce14;
    }
    *puVar6 = *puVar6 + 1;
    uVar9 = puVar6[1];
    _memcpy(&uStack_9cf0,&plStack_104d0,0x33f0);
    if (uVar9 != 2) break;
    func_0x000100cb203c(auStack_9ce0);
    uStack_9cf0 = 0;
    *puVar6 = *puVar6 - 1;
  }
  puVar10 = *(undefined1 **)CONCAT71(uStack_9cef,uStack_9cf0);
  if ((uVar9 & 1) == 0) {
    plVar11 = (long *)puVar6[2];
    lVar4 = *plVar11;
    *plVar11 = lVar4 + 1;
    if (-1 < lVar4) {
      plVar8 = (long *)plVar11[0x5e];
      if (plVar8 == (long *)0x0) {
        lStack_104f0 = 0;
        lStack_104e8 = 0;
      }
      else {
        lVar4 = *plVar8;
        *plVar8 = lVar4 + 1;
        if (lVar4 < 0) goto LAB_100fdce14;
        lStack_104e8 = plVar11[0x5f];
        lStack_104f0 = plVar11[0x5e];
      }
      _memcpy(auStack_3470,auStack_d0d0,0x33e0);
      puStack_6900 = (undefined1 *)0xcc;
      puStack_68f8 = (undefined *)0x0;
      puStack_68f0 = &UNK_10b240af0;
      uStack_68e8 = 0;
      uStack_68d0 = 0;
      plStack_68e0 = plVar11;
      puStack_68d8 = puVar10;
      _memcpy((ulong)&puStack_6900 | 0x34,auStack_3474,0x33e4);
      uStack_34e8 = 0;
      uStack_34d8 = 0;
      uStack_34e0 = 0;
      lStack_34c0 = lStack_104e8;
      lStack_34c8 = lStack_104f0;
      lStack_90 = 0;
      iVar5 = _posix_memalign(&lStack_90,0x80,0x3480);
      lVar4 = lStack_90;
      if ((iVar5 == 0) && (lStack_90 != 0)) {
        _memcpy(lStack_90,&puStack_6900,0x3480);
        lVar7 = FUN_1010e2658(plVar11 + 0x2d,lVar4,lVar4);
        puStack_6900 = puVar10;
        if (plVar11[0x5c] != 0) {
          (**(code **)(plVar11[0x5d] + 0x28))
                    (plVar11[0x5c] + (*(long *)(plVar11[0x5d] + 0x10) - 1U & 0xfffffffffffffff0) +
                     0x10,&puStack_6900);
        }
        if (lVar7 != 0) {
          __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                    (puVar6 + 2,lVar7);
        }
        goto LAB_100fdcd00;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x3480);
    }
  }
  else {
    plVar11 = (long *)puVar6[2];
    lVar4 = *plVar11;
    *plVar11 = lVar4 + 1;
    if (-1 < lVar4) {
      plVar8 = (long *)plVar11[0x4a];
      if (plVar8 == (long *)0x0) {
        lStack_104f0 = 0;
        lStack_104e8 = 0;
      }
      else {
        lVar4 = *plVar8;
        *plVar8 = lVar4 + 1;
        if (lVar4 < 0) goto LAB_100fdce14;
        lStack_104e8 = plVar11[0x4b];
        lStack_104f0 = plVar11[0x4a];
      }
      _memcpy(auStack_3470,auStack_d0d0,0x33e0);
      puStack_6900 = (undefined1 *)0xcc;
      puStack_68f8 = (undefined *)0x0;
      puStack_68f0 = &UNK_10b240b40;
      uStack_68e8 = 0;
      uStack_68d0 = 0;
      plStack_68e0 = plVar11;
      puStack_68d8 = puVar10;
      _memcpy((ulong)&puStack_6900 | 0x34,auStack_3474,0x33e4);
      uStack_34e8 = 0;
      uStack_34d8 = 0;
      uStack_34e0 = 0;
      lStack_34c0 = lStack_104e8;
      lStack_34c8 = lStack_104f0;
      lStack_90 = 0;
      iVar5 = _posix_memalign(&lStack_90,0x80,0x3480);
      lVar4 = lStack_90;
      if ((iVar5 == 0) && (lStack_90 != 0)) {
        _memcpy(lStack_90,&puStack_6900,0x3480);
        lVar7 = FUN_1010e2658(plVar11 + 0x11,lVar4,lVar4);
        puStack_6900 = puVar10;
        if (plVar11[0x48] != 0) {
          (**(code **)(plVar11[0x49] + 0x28))
                    (plVar11[0x48] + (*(long *)(plVar11[0x49] + 0x10) - 1U & 0xfffffffffffffff0) +
                     0x10,&puStack_6900);
        }
        if (lVar7 != 0) {
          FUN_10610fa38(plVar11 + 2,lVar7,0);
        }
LAB_100fdcd00:
        *puVar6 = *puVar6 - 1;
        return lVar4;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x3480);
    }
  }
LAB_100fdce14:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100fdce18);
  (*pcVar2)();
}

