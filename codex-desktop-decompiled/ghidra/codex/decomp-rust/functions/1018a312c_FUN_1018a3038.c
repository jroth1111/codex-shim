
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018a3038(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long **pplVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  long **pplVar7;
  int iVar8;
  long lVar9;
  ulong *puVar10;
  undefined1 uVar11;
  long *plVar12;
  long *plVar13;
  long **pplStack_5880;
  undefined *puStack_5878;
  undefined *puStack_5870;
  long lStack_5868;
  long *plStack_5860;
  undefined8 *puStack_5858;
  undefined4 uStack_5850;
  undefined4 uStack_584c;
  long lStack_5848;
  long lStack_5840;
  long lStack_5838;
  long lStack_5830;
  long lStack_5828;
  long lStack_5820;
  long lStack_5818;
  long lStack_5810;
  long lStack_5808;
  undefined8 uStack_5748;
  undefined1 uStack_5740;
  undefined8 auStack_1040 [511];
  long *plStack_48;
  
  puVar5 = auStack_1040;
  puVar2 = auStack_1040;
  while ((long)&pplStack_5880 < (long)puVar5) {
    *puVar2 = 0;
    puVar5 = puVar2 + -0x200;
    puVar2 = puVar2 + -0x200;
  }
  _memcpy(&pplStack_5880,param_2,0x138);
  uStack_5740 = 0;
  uStack_5748 = param_1;
  lVar9 = _malloc(0x5810);
  if (lVar9 != 0) {
    _memcpy(lVar9,param_2,0x138);
    *(undefined8 *)(lVar9 + 0x138) = param_1;
    *(undefined1 *)(lVar9 + 0x140) = 0;
    do {
      pplVar3 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
      pplVar7 = (long **)((long)___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1)
      ;
      bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == (long **)0x0;
      ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = pplVar7;
    } while (bVar1);
    puVar10 = (ulong *)(*
                       ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                       )();
    if ((char)puVar10[9] == '\x01') {
LAB_1018a316c:
      if (0x7ffffffffffffffe < *puVar10) {
        func_0x000108a07858(&UNK_10b269bc8);
        goto LAB_1018a34cc;
      }
      *puVar10 = *puVar10 + 1;
      if (puVar10[1] != 2) {
        if ((puVar10[1] & 1) == 0) {
          plVar13 = (long *)puVar10[2];
          lVar6 = *plVar13;
          *plVar13 = lVar6 + 1;
          if (-1 < lVar6) {
            plVar12 = (long *)plVar13[0x5e];
            if (plVar12 == (long *)0x0) {
              lStack_5810 = 0;
              lStack_5808 = 0;
            }
            else {
              lVar6 = *plVar12;
              *plVar12 = lVar6 + 1;
              if (lVar6 < 0) goto LAB_1018a34cc;
              lStack_5808 = plVar13[0x5f];
              lStack_5810 = plVar13[0x5e];
            }
            pplStack_5880 = (long **)0xcc;
            puStack_5878 = (undefined *)0x0;
            puStack_5870 = &UNK_10b269828;
            lStack_5868 = 0;
            puStack_5858 = pplVar3;
            uStack_5850 = 0;
            lStack_5830 = 0;
            lStack_5828 = 0;
            lStack_5820 = 0;
            plStack_48 = (long *)0x0;
            plStack_5860 = plVar13;
            lStack_5848 = lVar9;
            iVar8 = _posix_memalign(&plStack_48,0x80,0x80);
            plVar12 = plStack_48;
            if ((iVar8 == 0) && (plStack_48 != (long *)0x0)) {
              plStack_48[3] = lStack_5868;
              plStack_48[2] = (long)puStack_5870;
              plStack_48[5] = (long)puStack_5858;
              plStack_48[4] = (long)plStack_5860;
              plStack_48[7] = lStack_5848;
              plStack_48[6] = CONCAT44(uStack_584c,uStack_5850);
              plStack_48[1] = (long)puStack_5878;
              *plStack_48 = (long)pplStack_5880;
              plStack_48[0xd] = lStack_5818;
              plStack_48[0xc] = lStack_5820;
              plStack_48[0xf] = lStack_5808;
              plStack_48[0xe] = lStack_5810;
              plStack_48[9] = lStack_5838;
              plStack_48[8] = lStack_5840;
              plStack_48[0xb] = lStack_5828;
              plStack_48[10] = lStack_5830;
              lVar9 = FUN_1019a3804(plVar13 + 0x2d,plStack_48,plStack_48);
              pplStack_5880 = pplVar3;
              if (plVar13[0x5c] != 0) {
                (**(code **)(plVar13[0x5d] + 0x28))
                          (plVar13[0x5c] +
                           (*(long *)(plVar13[0x5d] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                           &pplStack_5880);
              }
              if (lVar9 != 0) {
                __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                          (puVar10 + 2,lVar9);
              }
              goto LAB_1018a3394;
            }
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x80);
          }
        }
        else {
          plVar13 = (long *)puVar10[2];
          lVar6 = *plVar13;
          *plVar13 = lVar6 + 1;
          if (-1 < lVar6) {
            plVar12 = (long *)plVar13[0x4a];
            if (plVar12 == (long *)0x0) {
              lStack_5810 = 0;
              lStack_5808 = 0;
            }
            else {
              lVar6 = *plVar12;
              *plVar12 = lVar6 + 1;
              if (lVar6 < 0) goto LAB_1018a34cc;
              lStack_5808 = plVar13[0x4b];
              lStack_5810 = plVar13[0x4a];
            }
            pplStack_5880 = (long **)0xcc;
            puStack_5878 = (undefined *)0x0;
            puStack_5870 = &UNK_10b269918;
            lStack_5868 = 0;
            puStack_5858 = pplVar3;
            uStack_5850 = 0;
            lStack_5830 = 0;
            lStack_5828 = 0;
            lStack_5820 = 0;
            plStack_48 = (long *)0x0;
            plStack_5860 = plVar13;
            lStack_5848 = lVar9;
            iVar8 = _posix_memalign(&plStack_48,0x80,0x80);
            plVar12 = plStack_48;
            if ((iVar8 == 0) && (plStack_48 != (long *)0x0)) {
              plStack_48[3] = lStack_5868;
              plStack_48[2] = (long)puStack_5870;
              plStack_48[5] = (long)puStack_5858;
              plStack_48[4] = (long)plStack_5860;
              plStack_48[7] = lStack_5848;
              plStack_48[6] = CONCAT44(uStack_584c,uStack_5850);
              plStack_48[1] = (long)puStack_5878;
              *plStack_48 = (long)pplStack_5880;
              plStack_48[0xd] = lStack_5818;
              plStack_48[0xc] = lStack_5820;
              plStack_48[0xf] = lStack_5808;
              plStack_48[0xe] = lStack_5810;
              plStack_48[9] = lStack_5838;
              plStack_48[8] = lStack_5840;
              plStack_48[0xb] = lStack_5828;
              plStack_48[10] = lStack_5830;
              lVar9 = FUN_1019a3804(plVar13 + 0x11,plStack_48,plStack_48);
              pplStack_5880 = pplVar3;
              if (plVar13[0x48] != 0) {
                (**(code **)(plVar13[0x49] + 0x28))
                          (plVar13[0x48] +
                           (*(long *)(plVar13[0x49] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                           &pplStack_5880);
              }
              if (lVar9 != 0) {
                FUN_10610fa38(plVar13 + 2,lVar9,0);
              }
LAB_1018a3394:
              *puVar10 = *puVar10 - 1;
              if (*plVar12 == 0xcc) {
                *plVar12 = 0x84;
              }
              else {
                (**(code **)(plVar12[2] + 0x20))(plVar12);
              }
              return;
            }
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x80);
          }
        }
        goto LAB_1018a34cc;
      }
      FUN_101944428(lVar9);
      _free(lVar9);
      uVar11 = 0;
      *puVar10 = *puVar10 - 1;
    }
    else {
      if ((char)puVar10[9] != '\x02') {
        __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                  (puVar10,&DAT_10192b788);
        *(undefined1 *)(puVar10 + 9) = 1;
        goto LAB_1018a316c;
      }
      FUN_101944428(lVar9);
      _free(lVar9);
      uVar11 = 1;
    }
    plStack_48 = (long *)CONCAT71(plStack_48._1_7_,uVar11);
    pplStack_5880 = &plStack_48;
    puStack_5878 = &
                   __ZN78__LT_tokio__runtime__handle__TryCurrentError_u20_as_u20_core__fmt__Display_GT_3fmt17he04e046082d0b96dE
    ;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108add0bf,&pplStack_5880,&UNK_10b266690);
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x5810);
LAB_1018a34cc:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1018a34d0);
  (*pcVar4)();
}

