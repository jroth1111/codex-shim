
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
__ZN15codex_code_mode7service15CodeModeService17start_turn_worker17h77cea8384f26e544E
          (undefined8 *param_1,ulong *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 auVar10 [16];
  long lStack_a78;
  long *plStack_a70;
  undefined1 *puStack_a68;
  undefined1 auStack_a60 [176];
  long *plStack_9b0;
  undefined8 uStack_9a8;
  ulong *puStack_9a0;
  undefined8 uStack_998;
  long *plStack_990;
  long *plStack_988;
  undefined1 uStack_97e;
  undefined1 auStack_8a0 [16];
  undefined1 auStack_890 [448];
  undefined1 uStack_6d0;
  undefined7 uStack_6cf;
  undefined1 auStack_6c0 [448];
  undefined1 *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined8 uStack_4e8;
  long *plStack_4e0;
  undefined1 *puStack_4d8;
  undefined4 uStack_4d0;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_2e8;
  long lStack_2e0;
  undefined1 auStack_224 [4];
  undefined1 auStack_220 [448];
  long *plStack_60;
  undefined1 uStack_51;
  
  plVar5 = (long *)_malloc(0x40);
  if (plVar5 == (long *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x40);
    goto LAB_1028c8d84;
  }
  plVar5[1] = 1;
  *plVar5 = 1;
  plVar5[6] = 0;
  *(undefined1 *)(plVar5 + 7) = 0;
  lVar2 = *plVar5;
  *plVar5 = lVar2 + 1;
  if (lVar2 < 0) goto LAB_1028c8d84;
  plVar6 = (long *)*param_1;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 1;
  if (lVar2 < 0) goto LAB_1028c8d84;
  plVar7 = (long *)plVar6[3];
  lVar2 = plVar7[0x55];
  plVar7[0x55] = lVar2 + 1;
  if (lVar2 < 0) {
    __ZN3std7process5abort17hdc01e45e25b715e8E();
LAB_1028c8990:
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
              (param_2,&DAT_1028cc0d0);
    *(undefined1 *)(param_2 + 9) = 1;
LAB_1028c89a8:
    _memcpy(auStack_8a0,&plStack_a70,0x1d0);
    if (0x7ffffffffffffffe < *param_2) {
      func_0x000108a07858(&UNK_10b291e38);
      goto LAB_1028c8d84;
    }
    *param_2 = *param_2 + 1;
    uVar8 = param_2[1];
    _memcpy(&uStack_6d0,&plStack_a70,0x1d0);
    if (uVar8 != 2) {
      puVar9 = *(undefined1 **)CONCAT71(uStack_6cf,uStack_6d0);
      if ((uVar8 & 1) == 0) {
        plVar6 = (long *)param_2[2];
        lVar2 = *plVar6;
        *plVar6 = lVar2 + 1;
        if (-1 < lVar2) {
          plVar7 = (long *)plVar6[0x5e];
          if (plVar7 == (long *)0x0) {
            lVar2 = 0;
            lVar3 = 0;
          }
          else {
            lVar2 = *plVar7;
            *plVar7 = lVar2 + 1;
            if (lVar2 < 0) goto LAB_1028c8d84;
            lVar3 = plVar6[0x5f];
            lVar2 = plVar6[0x5e];
          }
          _memcpy(auStack_220,auStack_890,0x1c0);
          puStack_500 = (undefined1 *)0xcc;
          puStack_4f8 = (undefined *)0x0;
          puStack_4f0 = &UNK_10b291cc8;
          uStack_4e8 = 0;
          uStack_4d0 = 0;
          plStack_4e0 = plVar6;
          puStack_4d8 = puVar9;
          _memcpy((ulong)&puStack_500 | 0x34,auStack_224,0x1c4);
          uStack_2f8 = 0;
          uStack_308 = 0;
          uStack_300 = 0;
          plStack_60 = (long *)0x0;
          lStack_2e8 = lVar2;
          lStack_2e0 = lVar3;
          iVar4 = _posix_memalign(&plStack_60,0x80,0x280);
          plVar7 = plStack_60;
          if ((iVar4 == 0) && (plStack_60 != (long *)0x0)) {
            _memcpy(plStack_60,&puStack_500,0x280);
            lVar2 = func_0x0001028dd134(plVar6 + 0x2d,plVar7,plVar7);
            puStack_500 = puVar9;
            if (plVar6[0x5c] != 0) {
              (**(code **)(plVar6[0x5d] + 0x28))
                        (plVar6[0x5c] + (*(long *)(plVar6[0x5d] + 0x10) - 1U & 0xfffffffffffffff0) +
                         0x10,&puStack_500);
            }
            if (lVar2 != 0) {
              __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                        (param_2 + 2,lVar2);
            }
            goto LAB_1028c8c54;
          }
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x280);
        }
      }
      else {
        plVar6 = (long *)param_2[2];
        lVar2 = *plVar6;
        *plVar6 = lVar2 + 1;
        if (-1 < lVar2) {
          plVar7 = (long *)plVar6[0x4a];
          if (plVar7 == (long *)0x0) {
            lVar2 = 0;
            lVar3 = 0;
          }
          else {
            lVar2 = *plVar7;
            *plVar7 = lVar2 + 1;
            if (lVar2 < 0) goto LAB_1028c8d84;
            lVar3 = plVar6[0x4b];
            lVar2 = plVar6[0x4a];
          }
          _memcpy(auStack_220,auStack_890,0x1c0);
          puStack_500 = (undefined1 *)0xcc;
          puStack_4f8 = (undefined *)0x0;
          puStack_4f0 = &UNK_10b291d18;
          uStack_4e8 = 0;
          uStack_4d0 = 0;
          plStack_4e0 = plVar6;
          puStack_4d8 = puVar9;
          _memcpy((ulong)&puStack_500 | 0x34,auStack_224,0x1c4);
          uStack_2f8 = 0;
          uStack_308 = 0;
          uStack_300 = 0;
          plStack_60 = (long *)0x0;
          lStack_2e8 = lVar2;
          lStack_2e0 = lVar3;
          iVar4 = _posix_memalign(&plStack_60,0x80,0x280);
          plVar7 = plStack_60;
          if ((iVar4 == 0) && (plStack_60 != (long *)0x0)) {
            _memcpy(plStack_60,&puStack_500,0x280);
            lVar2 = func_0x0001028dd134(plVar6 + 0x11,plVar7,plVar7);
            puStack_500 = puVar9;
            if (plVar6[0x48] != 0) {
              (**(code **)(plVar6[0x49] + 0x28))
                        (plVar6[0x48] + (*(long *)(plVar6[0x49] + 0x10) - 1U & 0xfffffffffffffff0) +
                         0x10,&puStack_500);
            }
            if (lVar2 != 0) {
              FUN_10610fa38(plVar6 + 2,lVar2,0);
            }
LAB_1028c8c54:
            *param_2 = *param_2 - 1;
            if (*plVar7 == 0xcc) {
              *plVar7 = 0x84;
            }
            else {
              (**(code **)(plVar7[2] + 0x20))(plVar7);
            }
            auVar10._8_8_ = plVar5;
            auVar10._0_8_ = 1;
            return auVar10;
          }
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x280);
        }
      }
      goto LAB_1028c8d84;
    }
    func_0x0001028d26e0(auStack_6c0);
    uStack_6d0 = 0;
    *param_2 = *param_2 - 1;
  }
  else {
    lVar3 = *plVar7;
    *plVar7 = lVar3 + 1;
    lVar2 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
    if (lVar3 < 0) goto LAB_1028c8d84;
    do {
      ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar2;
      lVar2 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    } while (___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0);
    plStack_a70 = &lStack_a78;
    puStack_a68 = &uStack_51;
    lStack_a78 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
    uStack_9a8 = 0;
    uStack_97e = 0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE =
         ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    plStack_9b0 = plVar7;
    puStack_9a0 = param_2;
    uStack_998 = param_3;
    plStack_990 = plVar5;
    plStack_988 = plVar6;
    param_2 = (ulong *)(*
                       ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                       )();
    if ((char)param_2[9] == '\x01') goto LAB_1028c89a8;
    if ((char)param_2[9] != '\x02') goto LAB_1028c8990;
    func_0x0001028d26e0(auStack_a60);
    uStack_6d0 = 1;
  }
  puStack_500 = &uStack_6d0;
  puStack_4f8 = &
                __ZN78__LT_tokio__runtime__handle__TryCurrentError_u20_as_u20_core__fmt__Display_GT_3fmt17he04e046082d0b96dE
  ;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&puStack_500,&UNK_10b291448);
LAB_1028c8d84:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028c8d88);
  (*pcVar1)();
}

