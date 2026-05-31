
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1016eb6ac(long *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long *plVar10;
  ulong uVar11;
  undefined1 auStack_5200 [96];
  long lStack_51a0;
  long lStack_5198;
  long lStack_5188;
  undefined8 uStack_5180;
  undefined8 uStack_5178;
  undefined8 uStack_5170;
  undefined8 uStack_5168;
  undefined8 uStack_5160;
  undefined8 uStack_5158;
  undefined8 uStack_5150;
  undefined8 uStack_5148;
  undefined8 uStack_5140;
  undefined8 uStack_5138;
  long alStack_5130 [206];
  long lStack_4ac0;
  undefined8 uStack_4ab8;
  undefined8 uStack_4ab0;
  undefined8 uStack_4aa8;
  undefined8 uStack_4aa0;
  undefined8 uStack_4a98;
  undefined8 uStack_4a90;
  undefined8 uStack_4a88;
  undefined8 uStack_4a80;
  undefined8 uStack_4a78;
  undefined8 uStack_4a70;
  long lStack_43f8;
  long *plStack_43f0;
  undefined1 *puStack_43e8;
  undefined1 auStack_43e0 [1632];
  long *plStack_3d80;
  undefined1 *puStack_3d78;
  undefined1 auStack_3d70 [1736];
  undefined1 uStack_36a8;
  undefined1 auStack_36a0 [16];
  undefined1 auStack_3690 [3392];
  undefined1 uStack_2950;
  undefined7 uStack_294f;
  undefined1 auStack_2940 [1632];
  undefined8 *puStack_22e0;
  undefined1 auStack_22d0 [88];
  undefined1 auStack_2278 [1648];
  char cStack_1c08;
  undefined1 *puStack_1c00;
  undefined *puStack_1bf8;
  undefined *puStack_1bf0;
  undefined8 uStack_1be8;
  long *plStack_1be0;
  undefined1 *puStack_1bd8;
  undefined4 uStack_1bd0;
  undefined8 uStack_1558;
  undefined8 uStack_1550;
  undefined8 uStack_1548;
  long lStack_1538;
  long lStack_1530;
  undefined8 auStack_1040 [55];
  undefined8 uStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  long lStack_e68;
  long lStack_e60;
  undefined1 auStack_dd4 [4];
  undefined1 auStack_dd0 [3392];
  long lStack_90;
  undefined1 auStack_81 [65];
  
  puVar3 = auStack_1040;
  puVar1 = auStack_1040;
  while ((long)auStack_5200 < (long)puVar3) {
    *puVar1 = 0;
    puVar3 = puVar1 + -0x200;
    puVar1 = puVar1 + -0x200;
  }
  lVar4 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
  if (*param_1 != 4) goto LAB_1016eb7b0;
  do {
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar4;
    lVar4 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
  } while (___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0);
  lStack_5188 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
  ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE =
       ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
  _memcpy(&plStack_43f0,param_2,0x670);
  plStack_3d80 = &lStack_5188;
  puStack_3d78 = auStack_81;
  param_2 = (ulong *)(*
                     ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                     )();
  if ((char)param_2[9] == '\x01') goto LAB_1016eb8d4;
  if ((char)param_2[9] != '\x02') goto LAB_1016eb8bc;
  func_0x000100d7e1e8(&plStack_43f0);
  uStack_2950 = 1;
  do {
    puStack_1c00 = &uStack_2950;
    puStack_1bf8 = &
                   __ZN78__LT_tokio__runtime__handle__TryCurrentError_u20_as_u20_core__fmt__Display_GT_3fmt17he04e046082d0b96dE
    ;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&puStack_1c00,&UNK_10b2525f0);
LAB_1016eb7b0:
    __ZN75__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__clone__Clone_GT_5clone17h8894a6a19c694adeE
              (&lStack_5188);
    _memcpy(alStack_5130,param_2,0x670);
    uStack_4a98 = uStack_5160;
    uStack_4aa0 = uStack_5168;
    uStack_4a88 = uStack_5150;
    uStack_4a90 = uStack_5158;
    uStack_4a78 = uStack_5140;
    uStack_4a80 = uStack_5148;
    uStack_4a70 = uStack_5138;
    uStack_4ab8 = uStack_5180;
    lStack_4ac0 = lStack_5188;
    uStack_4aa8 = uStack_5170;
    uStack_4ab0 = uStack_5178;
    lVar4 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
    do {
      ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar4;
      lVar4 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    } while (___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0);
    lStack_43f8 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
    plStack_43f0 = &lStack_43f8;
    puStack_43e8 = auStack_81;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE =
         ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    _memcpy(auStack_43e0,alStack_5130,0xd38);
    uStack_36a8 = 0;
    param_2 = (ulong *)(*
                       ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                       )();
    if ((char)param_2[9] == '\x01') {
LAB_1016ebbc8:
      _memcpy(auStack_36a0,&plStack_43f0,0xd50);
      uVar8 = *param_2;
      if (0x7ffffffffffffffe < uVar8) {
        func_0x000108a07858(&UNK_10b2435a0);
        goto LAB_1016ec154;
      }
      *param_2 = uVar8 + 1;
      uVar11 = param_2[1];
      _memcpy(&uStack_2950,&plStack_43f0,0xd50);
      if (uVar11 != 2) {
        puVar9 = *(undefined1 **)CONCAT71(uStack_294f,uStack_2950);
        if ((uVar11 & 1) == 0) {
          plVar10 = (long *)param_2[2];
          lVar4 = *plVar10;
          *plVar10 = lVar4 + 1;
          if (lVar4 < 0) goto LAB_1016ec154;
          plVar7 = (long *)plVar10[0x5e];
          if (plVar7 == (long *)0x0) {
            lStack_51a0 = 0;
            lStack_5198 = 0;
          }
          else {
            lVar4 = *plVar7;
            *plVar7 = lVar4 + 1;
            if (lVar4 < 0) goto LAB_1016ec154;
            lStack_5198 = plVar10[0x5f];
            lStack_51a0 = plVar10[0x5e];
          }
          _memcpy(auStack_dd0,auStack_3690,0xd40);
          puStack_1c00 = (undefined1 *)0xcc;
          puStack_1bf8 = (undefined *)0x0;
          puStack_1bf0 = &UNK_10b23cdb0;
          uStack_1be8 = 0;
          uStack_1bd0 = 0;
          plStack_1be0 = plVar10;
          puStack_1bd8 = puVar9;
          _memcpy((ulong)&puStack_1c00 | 0x34,auStack_dd4,0xd44);
          uStack_e88 = 0;
          uStack_e78 = 0;
          uStack_e80 = 0;
          lStack_e60 = lStack_5198;
          lStack_e68 = lStack_51a0;
          lStack_90 = 0;
          iVar5 = _posix_memalign(&lStack_90,0x80,0xe00);
          lVar4 = lStack_90;
          if ((iVar5 != 0) || (lStack_90 == 0)) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0xe00);
            goto LAB_1016ec154;
          }
          _memcpy(lStack_90,&puStack_1c00,0xe00);
          lVar6 = FUN_1010e2658(plVar10 + 0x2d,lVar4,lVar4);
          puStack_1c00 = puVar9;
          if (plVar10[0x5c] != 0) {
            (**(code **)(plVar10[0x5d] + 0x28))
                      (plVar10[0x5c] + (*(long *)(plVar10[0x5d] + 0x10) - 1U & 0xfffffffffffffff0) +
                       0x10,&puStack_1c00);
          }
          if (lVar6 != 0) {
            __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                      (param_2 + 2,lVar6);
          }
        }
        else {
          plVar10 = (long *)param_2[2];
          lVar4 = *plVar10;
          *plVar10 = lVar4 + 1;
          if (lVar4 < 0) goto LAB_1016ec154;
          plVar7 = (long *)plVar10[0x4a];
          if (plVar7 == (long *)0x0) {
            lStack_51a0 = 0;
            lStack_5198 = 0;
          }
          else {
            lVar4 = *plVar7;
            *plVar7 = lVar4 + 1;
            if (lVar4 < 0) goto LAB_1016ec154;
            lStack_5198 = plVar10[0x4b];
            lStack_51a0 = plVar10[0x4a];
          }
          _memcpy(auStack_dd0,auStack_3690,0xd40);
          puStack_1c00 = (undefined1 *)0xcc;
          puStack_1bf8 = (undefined *)0x0;
          puStack_1bf0 = &UNK_10b23af10;
          uStack_1be8 = 0;
          uStack_1bd0 = 0;
          plStack_1be0 = plVar10;
          puStack_1bd8 = puVar9;
          _memcpy((ulong)&puStack_1c00 | 0x34,auStack_dd4,0xd44);
          uStack_e88 = 0;
          uStack_e78 = 0;
          uStack_e80 = 0;
          lStack_e60 = lStack_5198;
          lStack_e68 = lStack_51a0;
          lStack_90 = 0;
          iVar5 = _posix_memalign(&lStack_90,0x80,0xe00);
          lVar4 = lStack_90;
          if ((iVar5 != 0) || (lStack_90 == 0)) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0xe00);
            goto LAB_1016ec154;
          }
          _memcpy(lStack_90,&puStack_1c00,0xe00);
          lVar6 = FUN_1010e2658(plVar10 + 0x11,lVar4,lVar4);
          puStack_1c00 = puVar9;
          if (plVar10[0x48] != 0) {
            (**(code **)(plVar10[0x49] + 0x28))
                      (plVar10[0x48] + (*(long *)(plVar10[0x49] + 0x10) - 1U & 0xfffffffffffffff0) +
                       0x10,&puStack_1c00);
          }
          if (lVar6 != 0) {
            FUN_10610fa38(plVar10 + 2,lVar6,0);
          }
        }
        goto LAB_1016ebeb0;
      }
      if (cStack_1c08 == '\0') {
        func_0x000100d7e1e8(auStack_2940);
LAB_1016ebf8c:
        __ZN78__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h6900df02db0519f4E
                  (auStack_22d0);
        uVar8 = *param_2 - 1;
      }
      else if (cStack_1c08 == '\x03') {
        func_0x000100d7e1e8(auStack_2278);
        goto LAB_1016ebf8c;
      }
      uStack_2950 = 0;
      *param_2 = uVar8;
    }
    else {
      if ((char)param_2[9] != '\x02') {
        __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                  (param_2,&DAT_100c35d48);
        *(undefined1 *)(param_2 + 9) = 1;
        goto LAB_1016ebbc8;
      }
      func_0x000100d7e1e8(auStack_43e0);
      __ZN78__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h6900df02db0519f4E
                (auStack_3d70);
      uStack_2950 = 1;
    }
    puStack_1c00 = &uStack_2950;
    puStack_1bf8 = &
                   __ZN78__LT_tokio__runtime__handle__TryCurrentError_u20_as_u20_core__fmt__Display_GT_3fmt17he04e046082d0b96dE
    ;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&puStack_1c00,&UNK_10b2236e8);
LAB_1016eb8bc:
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
              (param_2,&DAT_100c35d48);
    *(undefined1 *)(param_2 + 9) = 1;
LAB_1016eb8d4:
    _memcpy(auStack_36a0,&plStack_43f0,0x680);
    if (0x7ffffffffffffffe < *param_2) {
      func_0x000108a07858(&UNK_10b2435a0);
      goto LAB_1016ec154;
    }
    *param_2 = *param_2 + 1;
    uVar8 = param_2[1];
    _memcpy(&uStack_2950,&plStack_43f0,0x680);
    if (uVar8 != 2) break;
    func_0x000100d7e1e8(&uStack_2950);
    uStack_2950 = 0;
    *param_2 = *param_2 - 1;
  } while( true );
  puVar9 = (undefined1 *)*puStack_22e0;
  if ((uVar8 & 1) == 0) {
    plVar10 = (long *)param_2[2];
    lVar4 = *plVar10;
    *plVar10 = lVar4 + 1;
    if (-1 < lVar4) {
      plVar7 = (long *)plVar10[0x5e];
      if (plVar7 == (long *)0x0) {
        lStack_51a0 = 0;
        lStack_5198 = 0;
      }
      else {
        lVar4 = *plVar7;
        *plVar7 = lVar4 + 1;
        if (lVar4 < 0) goto LAB_1016ec154;
        lStack_5198 = plVar10[0x5f];
        lStack_51a0 = plVar10[0x5e];
      }
      _memcpy(auStack_dd0,auStack_36a0,0x670);
      puStack_1c00 = (undefined1 *)0xcc;
      puStack_1bf8 = (undefined *)0x0;
      puStack_1bf0 = &UNK_10b2424e0;
      uStack_1be8 = 0;
      uStack_1bd0 = 0;
      plStack_1be0 = plVar10;
      puStack_1bd8 = puVar9;
      _memcpy((ulong)&puStack_1c00 | 0x34,auStack_dd4,0x674);
      uStack_1558 = 0;
      uStack_1548 = 0;
      uStack_1550 = 0;
      lStack_1530 = lStack_5198;
      lStack_1538 = lStack_51a0;
      alStack_5130[0] = 0;
      iVar5 = _posix_memalign(alStack_5130,0x80,0x700);
      lVar4 = alStack_5130[0];
      if ((iVar5 == 0) && (alStack_5130[0] != 0)) {
        _memcpy(alStack_5130[0],&puStack_1c00,0x700);
        lVar6 = FUN_1010e2658(plVar10 + 0x2d,lVar4,lVar4);
        puStack_1c00 = puVar9;
        if (plVar10[0x5c] != 0) {
          (**(code **)(plVar10[0x5d] + 0x28))
                    (plVar10[0x5c] + (*(long *)(plVar10[0x5d] + 0x10) - 1U & 0xfffffffffffffff0) +
                     0x10,&puStack_1c00);
        }
        if (lVar6 != 0) {
          __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                    (param_2 + 2,lVar6);
        }
        goto LAB_1016ebeb0;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x700);
    }
  }
  else {
    plVar10 = (long *)param_2[2];
    lVar4 = *plVar10;
    *plVar10 = lVar4 + 1;
    if (-1 < lVar4) {
      plVar7 = (long *)plVar10[0x4a];
      if (plVar7 == (long *)0x0) {
        lStack_51a0 = 0;
        lStack_5198 = 0;
      }
      else {
        lVar4 = *plVar7;
        *plVar7 = lVar4 + 1;
        if (lVar4 < 0) goto LAB_1016ec154;
        lStack_5198 = plVar10[0x4b];
        lStack_51a0 = plVar10[0x4a];
      }
      _memcpy(auStack_dd0,auStack_36a0,0x670);
      puStack_1c00 = (undefined1 *)0xcc;
      puStack_1bf8 = (undefined *)0x0;
      puStack_1bf0 = &UNK_10b23c220;
      uStack_1be8 = 0;
      uStack_1bd0 = 0;
      plStack_1be0 = plVar10;
      puStack_1bd8 = puVar9;
      _memcpy((ulong)&puStack_1c00 | 0x34,auStack_dd4,0x674);
      uStack_1558 = 0;
      uStack_1548 = 0;
      uStack_1550 = 0;
      lStack_1530 = lStack_5198;
      lStack_1538 = lStack_51a0;
      alStack_5130[0] = 0;
      iVar5 = _posix_memalign(alStack_5130,0x80,0x700);
      lVar4 = alStack_5130[0];
      if ((iVar5 == 0) && (alStack_5130[0] != 0)) {
        _memcpy(alStack_5130[0],&puStack_1c00,0x700);
        lVar6 = FUN_1010e2658(plVar10 + 0x11,lVar4,lVar4);
        puStack_1c00 = puVar9;
        if (plVar10[0x48] != 0) {
          (**(code **)(plVar10[0x49] + 0x28))
                    (plVar10[0x48] + (*(long *)(plVar10[0x49] + 0x10) - 1U & 0xfffffffffffffff0) +
                     0x10,&puStack_1c00);
        }
        if (lVar6 != 0) {
          FUN_10610fa38(plVar10 + 2,lVar6,0);
        }
LAB_1016ebeb0:
        *param_2 = *param_2 - 1;
        return lVar4;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x700);
    }
  }
LAB_1016ec154:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016ec158);
  (*pcVar2)();
}

