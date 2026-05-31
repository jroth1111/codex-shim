
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN89__LT_codex_exec_server__local_process__LocalProcess_u20_as_u20_core__default__Default_GT_7default17h6657f1e25bce4684E
               (void)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  code *pcVar3;
  long lVar4;
  int iVar5;
  ulong *puVar6;
  long lVar7;
  undefined1 uVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined8 *puStack_240;
  long *plStack_238;
  undefined1 *puStack_230;
  long alStack_228 [4];
  undefined1 uStack_208;
  undefined8 **ppuStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 *puStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long *plStack_90;
  undefined1 auStack_81 [49];
  
  auVar11 = func_0x000103b28874(0x100);
  lVar7 = auVar11._8_8_;
  ppuVar2 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
  do {
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = ppuVar2;
    ppuVar2 = (undefined8 **)
              ((long)___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1);
  } while (___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == (undefined8 **)0x0);
  plStack_238 = (long *)&puStack_240;
  puStack_230 = auStack_81;
  puStack_240 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
  uStack_208 = 0;
  ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE =
       (undefined8 **)((long)___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1);
  alStack_228[0] = lVar7;
  puVar6 = (ulong *)(*
                    ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                    )();
  if ((char)puVar6[9] == '\x01') {
LAB_103b80210:
    puVar1 = puStack_240;
    if (0x7ffffffffffffffe < *puVar6) {
      func_0x000108a07858(&UNK_10b2e7168);
      goto LAB_103b805c4;
    }
    *puVar6 = *puVar6 + 1;
    if (puVar6[1] != 2) {
      if ((puVar6[1] & 1) == 0) {
        plVar10 = (long *)puVar6[2];
        lVar4 = *plVar10;
        *plVar10 = lVar4 + 1;
        if (-1 < lVar4) {
          plVar9 = (long *)plVar10[0x5e];
          if (plVar9 == (long *)0x0) {
            lStack_180 = 0;
            lStack_178 = 0;
          }
          else {
            lVar4 = *plVar9;
            *plVar9 = lVar4 + 1;
            if (lVar4 < 0) goto LAB_103b805c4;
            lStack_178 = plVar10[0x5f];
            lStack_180 = plVar10[0x5e];
          }
          ppuStack_200 = (long **)0xcc;
          puStack_1f8 = (undefined *)0x0;
          puStack_1f0 = &UNK_10b2e61e8;
          lStack_1e8 = 0;
          puStack_1d8 = puStack_240;
          uStack_1d0 = 0;
          uStack_1a8 = 0;
          lStack_198 = 0;
          lStack_190 = 0;
          lStack_1a0 = 0;
          plStack_90 = (long *)0x0;
          plStack_1e0 = plVar10;
          lStack_1c8 = lVar7;
          iVar5 = _posix_memalign(&plStack_90,0x80,0x100);
          plVar9 = plStack_90;
          if ((iVar5 == 0) && (plStack_90 != (long *)0x0)) {
            plStack_90[0x13] = lStack_168;
            plStack_90[0x12] = lStack_170;
            plStack_90[0x15] = lStack_158;
            plStack_90[0x14] = lStack_160;
            plStack_90[0x17] = lStack_148;
            plStack_90[0x16] = lStack_150;
            plStack_90[3] = lStack_1e8;
            plStack_90[2] = (long)puStack_1f0;
            plStack_90[5] = (long)puStack_1d8;
            plStack_90[4] = (long)plStack_1e0;
            plStack_90[7] = lStack_1c8;
            plStack_90[6] = CONCAT44(uStack_1cc,uStack_1d0);
            plStack_90[1] = (long)puStack_1f8;
            *plStack_90 = (long)ppuStack_200;
            plStack_90[0xd] = lStack_198;
            plStack_90[0xc] = lStack_1a0;
            plStack_90[0xf] = lStack_188;
            plStack_90[0xe] = lStack_190;
            plStack_90[9] = lStack_1b8;
            plStack_90[8] = lStack_1c0;
            plStack_90[0xb] = CONCAT71(uStack_1a7,uStack_1a8);
            plStack_90[10] = lStack_1b0;
            plStack_90[0x11] = lStack_178;
            plStack_90[0x10] = lStack_180;
            plStack_90[0x1d] = lStack_118;
            plStack_90[0x1c] = lStack_120;
            plStack_90[0x1f] = lStack_108;
            plStack_90[0x1e] = lStack_110;
            plStack_90[0x19] = lStack_138;
            plStack_90[0x18] = lStack_140;
            plStack_90[0x1b] = lStack_128;
            plStack_90[0x1a] = lStack_130;
            lVar7 = FUN_103b56ff0(plVar10 + 0x2d,plStack_90,plStack_90);
            ppuStack_200 = (undefined8 **)puVar1;
            if (plVar10[0x5c] != 0) {
              (**(code **)(plVar10[0x5d] + 0x28))
                        (plVar10[0x5c] + (*(long *)(plVar10[0x5d] + 0x10) - 1U & 0xfffffffffffffff0)
                         + 0x10,&ppuStack_200);
            }
            if (lVar7 != 0) {
              __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                        (puVar6 + 2,lVar7);
            }
            goto LAB_103b8048c;
          }
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x100);
        }
      }
      else {
        plVar10 = (long *)puVar6[2];
        lVar4 = *plVar10;
        *plVar10 = lVar4 + 1;
        if (-1 < lVar4) {
          plVar9 = (long *)plVar10[0x4a];
          if (plVar9 == (long *)0x0) {
            lStack_180 = 0;
            lStack_178 = 0;
          }
          else {
            lVar4 = *plVar9;
            *plVar9 = lVar4 + 1;
            if (lVar4 < 0) goto LAB_103b805c4;
            lStack_178 = plVar10[0x4b];
            lStack_180 = plVar10[0x4a];
          }
          ppuStack_200 = (long **)0xcc;
          puStack_1f8 = (undefined *)0x0;
          puStack_1f0 = &UNK_10b2e6a08;
          lStack_1e8 = 0;
          puStack_1d8 = puStack_240;
          uStack_1d0 = 0;
          uStack_1a8 = 0;
          lStack_198 = 0;
          lStack_190 = 0;
          lStack_1a0 = 0;
          plStack_90 = (long *)0x0;
          plStack_1e0 = plVar10;
          lStack_1c8 = lVar7;
          iVar5 = _posix_memalign(&plStack_90,0x80,0x100);
          plVar9 = plStack_90;
          if ((iVar5 == 0) && (plStack_90 != (long *)0x0)) {
            plStack_90[0x13] = lStack_168;
            plStack_90[0x12] = lStack_170;
            plStack_90[0x15] = lStack_158;
            plStack_90[0x14] = lStack_160;
            plStack_90[0x17] = lStack_148;
            plStack_90[0x16] = lStack_150;
            plStack_90[3] = lStack_1e8;
            plStack_90[2] = (long)puStack_1f0;
            plStack_90[5] = (long)puStack_1d8;
            plStack_90[4] = (long)plStack_1e0;
            plStack_90[7] = lStack_1c8;
            plStack_90[6] = CONCAT44(uStack_1cc,uStack_1d0);
            plStack_90[1] = (long)puStack_1f8;
            *plStack_90 = (long)ppuStack_200;
            plStack_90[0xd] = lStack_198;
            plStack_90[0xc] = lStack_1a0;
            plStack_90[0xf] = lStack_188;
            plStack_90[0xe] = lStack_190;
            plStack_90[9] = lStack_1b8;
            plStack_90[8] = lStack_1c0;
            plStack_90[0xb] = CONCAT71(uStack_1a7,uStack_1a8);
            plStack_90[10] = lStack_1b0;
            plStack_90[0x11] = lStack_178;
            plStack_90[0x10] = lStack_180;
            plStack_90[0x1d] = lStack_118;
            plStack_90[0x1c] = lStack_120;
            plStack_90[0x1f] = lStack_108;
            plStack_90[0x1e] = lStack_110;
            plStack_90[0x19] = lStack_138;
            plStack_90[0x18] = lStack_140;
            plStack_90[0x1b] = lStack_128;
            plStack_90[0x1a] = lStack_130;
            lVar7 = FUN_103b56ff0(plVar10 + 0x11,plStack_90,plStack_90);
            ppuStack_200 = (undefined8 **)puVar1;
            if (plVar10[0x48] != 0) {
              (**(code **)(plVar10[0x49] + 0x28))
                        (plVar10[0x48] + (*(long *)(plVar10[0x49] + 0x10) - 1U & 0xfffffffffffffff0)
                         + 0x10,&ppuStack_200);
            }
            if (lVar7 != 0) {
              FUN_10610fa38(plVar10 + 2,lVar7,0);
            }
LAB_103b8048c:
            *puVar6 = *puVar6 - 1;
            if (*plVar9 == 0xcc) {
              *plVar9 = 0x84;
            }
            else {
              (**(code **)(plVar9[2] + 0x20))(plVar9);
            }
            func_0x000103a6dd7c(auVar11._0_8_);
            return;
          }
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x100);
        }
      }
      goto LAB_103b805c4;
    }
    func_0x000103af194c(alStack_228);
    uVar8 = 0;
    *puVar6 = *puVar6 - 1;
  }
  else {
    if ((char)puVar6[9] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar6,&DAT_103ae3a84);
      *(undefined1 *)(puVar6 + 9) = 1;
      goto LAB_103b80210;
    }
    func_0x000103af194c(alStack_228);
    uVar8 = 1;
  }
  plStack_238 = (long *)CONCAT71(plStack_238._1_7_,uVar8);
  ppuStack_200 = &plStack_238;
  puStack_1f8 = &
                __ZN78__LT_tokio__runtime__handle__TryCurrentError_u20_as_u20_core__fmt__Display_GT_3fmt17he04e046082d0b96dE
  ;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&ppuStack_200,&UNK_10b2e7c20);
LAB_103b805c4:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103b805c8);
  (*pcVar3)();
}

