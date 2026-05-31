
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d07e80(int *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  ulong *puVar15;
  int *piVar16;
  int *piVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  code *pcVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  int iStack_858;
  long lStack_854;
  undefined8 uStack_84c;
  undefined *puStack_844;
  undefined4 uStack_83c;
  undefined4 uStack_838;
  undefined4 uStack_834;
  undefined8 uStack_830;
  long *plStack_828;
  undefined1 uStack_820;
  long *plStack_818;
  undefined1 uStack_810;
  long lStack_610;
  long *plStack_608;
  long lStack_600;
  undefined8 uStack_5f8;
  undefined *puStack_5f0;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_360;
  long lStack_358;
  undefined1 auStack_2d4 [4];
  undefined1 auStack_2d0 [584];
  long *aplStack_88 [7];
  
  if ((char)param_1[0x28] == '\0') {
    if ((char)param_1[0x10] == '\x01') {
      if (*param_1 == 4) {
        piVar16 = *(int **)(param_1 + 2);
      }
      else {
        piVar16 = param_1;
        if (*param_1 == 3) {
          func_0x000108a079f0(&UNK_108ca1579,0x24,&UNK_10b209070);
          goto LAB_100d07fa0;
        }
      }
      __ZN113__LT_sqlx_sqlite__transaction__SqliteTransactionManager_u20_as_u20_sqlx_core__transaction__TransactionManager_GT_14start_rollback17h281f626b15aff32dE
                (piVar16);
    }
    iVar14 = *param_1;
    piVar16 = param_1;
    iVar10 = iStack_858;
    plVar20 = plStack_828;
  }
  else {
    if ((char)param_1[0x28] != '\x03') {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x24);
    puVar3 = *(undefined8 **)(param_1 + 0x26);
    pcVar21 = (code *)*puVar3;
    if (pcVar21 != (code *)0x0) {
      (*pcVar21)(uVar2);
    }
    if (puVar3[1] != 0) {
      _free(uVar2);
    }
    piVar16 = param_1 + 0x12;
    if ((char)param_1[0x22] == '\x01') {
      if (*piVar16 == 4) {
        piVar17 = *(int **)(param_1 + 0x14);
      }
      else {
        piVar17 = piVar16;
        if (*piVar16 == 3) {
          func_0x000108a079f0(&UNK_108ca1579,0x24,&UNK_10b209070);
LAB_100d07fa0:
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100d07fa4);
          (*pcVar21)();
        }
      }
      __ZN113__LT_sqlx_sqlite__transaction__SqliteTransactionManager_u20_as_u20_sqlx_core__transaction__TransactionManager_GT_14start_rollback17h281f626b15aff32dE
                (piVar17);
    }
    iVar14 = *piVar16;
    iVar10 = iStack_858;
    plVar20 = plStack_828;
  }
  if (iVar14 == 4) {
    return;
  }
  uVar11 = uStack_5d4;
  if ((*(byte *)(piVar16 + 0xe) & 1) == 0) {
    iStack_858 = *piVar16;
    if (iStack_858 == 3) {
      plStack_828 = *(long **)(piVar16 + 0xc);
      if (*(int *)((long)plStack_828 + 0x2dc) == 0) goto LAB_100c9fa4c;
      *piVar16 = 3;
    }
    else {
      *piVar16 = 3;
      plStack_828 = *(long **)(piVar16 + 0xc);
      lVar12 = *plStack_828;
      *plStack_828 = lVar12 + 1;
      if (lVar12 < 0) goto LAB_100c9fc70;
      uStack_5f8 = *(undefined8 *)(piVar16 + 3);
      lStack_600 = *(long *)(piVar16 + 1);
      puStack_5f0 = *(undefined **)(piVar16 + 5);
      uStack_5e8 = (undefined4)*(undefined8 *)(piVar16 + 7);
      uStack_5dc = (undefined4)*(undefined8 *)(piVar16 + 10);
      uStack_5d8 = (undefined4)((ulong)*(undefined8 *)(piVar16 + 10) >> 0x20);
      uStack_5e4 = (undefined4)*(undefined8 *)(piVar16 + 8);
      uStack_5e0 = (undefined4)((ulong)*(undefined8 *)(piVar16 + 8) >> 0x20);
    }
    lVar12 = *plStack_828;
    *plStack_828 = lVar12 + 1;
    if (lVar12 < 0) goto LAB_100c9fc70;
    uStack_84c = uStack_5f8;
    lStack_854 = lStack_600;
    uStack_83c = uStack_5e8;
    puStack_844 = puStack_5f0;
    uStack_830 = CONCAT44(uStack_5d8,uStack_5dc);
    uStack_838 = uStack_5e4;
    uStack_834 = uStack_5e0;
    uStack_820 = 0;
    uStack_810 = 0;
    plStack_818 = plStack_828;
    puVar15 = (ulong *)(*
                       ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                       )();
    if ((char)puVar15[9] != '\x01') {
      if ((char)puVar15[9] != '\x02') {
        __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                  (puVar15,&DAT_1060edbcc);
        *(undefined1 *)(puVar15 + 9) = 1;
        goto LAB_100c9f72c;
      }
LAB_100c9f3c8:
      _memcpy(&lStack_600,&iStack_858,0x248);
      FUN_1088737dc(&lStack_600);
      iVar10 = iStack_858;
      plVar20 = plStack_828;
      uVar11 = uStack_5d4;
      goto LAB_100c9fc70;
    }
LAB_100c9f72c:
    uVar11 = uStack_5d4;
    uVar8 = uStack_5d8;
    uVar6 = uStack_5dc;
    uVar4 = uStack_5e0;
    uVar18 = *puVar15;
    if (0x7ffffffffffffffe < uVar18) {
      func_0x000108a07858(&UNK_10b4ce0a8);
      iVar10 = iStack_858;
      plVar20 = plStack_828;
      uVar11 = uStack_5d4;
      goto LAB_100c9fc70;
    }
    *puVar15 = uVar18 + 1;
    uVar22 = puVar15[1];
    if (uVar22 == 2) {
      *puVar15 = uVar18;
      goto LAB_100c9f3c8;
    }
    plVar23 = (long *)puVar15[2];
    lVar12 = *plVar23;
    *plVar23 = lVar12 + 1;
    iVar10 = iStack_858;
    plVar20 = plStack_828;
    uStack_5e0 = uVar4;
    uStack_5dc = uVar6;
    uStack_5d8 = uVar8;
    if ((uVar22 & 1) == 0) {
      if (lVar12 < 0) goto LAB_100c9fc70;
      lStack_610 = 0;
    }
    else {
      if (lVar12 < 0) goto LAB_100c9fc70;
      lStack_610 = 1;
    }
    *puVar15 = *puVar15 - 1;
    do {
      lVar12 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
      lVar13 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
      bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
      ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar13;
    } while (bVar1);
    lVar13 = *plVar23;
    *plVar23 = lVar13 + 1;
    uStack_5e0 = SUB84(plVar23,0);
    uVar5 = uStack_5e0;
    uStack_5dc = (undefined4)((ulong)plVar23 >> 0x20);
    uVar7 = uStack_5dc;
    uStack_5d8 = (undefined4)lVar12;
    uVar9 = uStack_5d8;
    uStack_5d4 = (undefined4)((ulong)lVar12 >> 0x20);
    plStack_608 = plVar23;
    if (lStack_610 == 0) {
      uStack_5e0 = uVar4;
      uStack_5dc = uVar6;
      uStack_5d8 = uVar8;
      if (lVar13 < 0) goto LAB_100c9fc70;
      plVar19 = (long *)plVar23[0x5e];
      if (plVar19 == (long *)0x0) {
        lVar13 = 0;
        lVar24 = 0;
      }
      else {
        lVar13 = *plVar19;
        *plVar19 = lVar13 + 1;
        if (lVar13 < 0) goto LAB_100c9fc70;
        lVar24 = plVar23[0x5f];
        lVar13 = plVar23[0x5e];
      }
      _memcpy(auStack_2d0,&iStack_858,0x248);
      lStack_600 = 0xcc;
      uStack_5f8 = 0;
      puStack_5f0 = &UNK_10b23ee80;
      uStack_5e8 = 0;
      uStack_5e4 = 0;
      uStack_5d0 = 0;
      uStack_5e0 = uVar5;
      uStack_5dc = uVar7;
      uStack_5d8 = uVar9;
      _memcpy((ulong)&lStack_600 | 0x34,auStack_2d4,0x24c);
      uStack_380 = 0;
      uStack_370 = 0;
      uStack_378 = 0;
      aplStack_88[0] = (long *)0x0;
      lStack_360 = lVar13;
      lStack_358 = lVar24;
      iVar14 = _posix_memalign(aplStack_88,0x80,0x300);
      plVar20 = aplStack_88[0];
      if ((iVar14 != 0) || (aplStack_88[0] == (long *)0x0)) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x300);
        iVar10 = iStack_858;
        plVar20 = plStack_828;
        uVar11 = uStack_5d4;
        goto LAB_100c9fc70;
      }
      _memcpy(aplStack_88[0],&lStack_600,0x300);
      lVar13 = FUN_1010e2658(plVar23 + 0x2d,plVar20,plVar20);
      lStack_600 = lVar12;
      if (plVar23[0x5c] != 0) {
        (**(code **)(plVar23[0x5d] + 0x28))
                  (plVar23[0x5c] + (*(long *)(plVar23[0x5d] + 0x10) - 1U & 0xfffffffffffffff0) +
                   0x10,&lStack_600);
      }
      if (lVar13 != 0) {
        __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                  (&plStack_608,lVar13);
      }
    }
    else {
      uStack_5e0 = uVar4;
      uStack_5dc = uVar6;
      uStack_5d8 = uVar8;
      if (lVar13 < 0) goto LAB_100c9fc70;
      plVar19 = (long *)plVar23[0x4a];
      if (plVar19 == (long *)0x0) {
        lVar13 = 0;
        lVar24 = 0;
      }
      else {
        lVar13 = *plVar19;
        *plVar19 = lVar13 + 1;
        if (lVar13 < 0) goto LAB_100c9fc70;
        lVar24 = plVar23[0x4b];
        lVar13 = plVar23[0x4a];
      }
      _memcpy(auStack_2d0,&iStack_858,0x248);
      lStack_600 = 0xcc;
      uStack_5f8 = 0;
      puStack_5f0 = &UNK_10b23d030;
      uStack_5e8 = 0;
      uStack_5e4 = 0;
      uStack_5d0 = 0;
      uStack_5e0 = uVar5;
      uStack_5dc = uVar7;
      uStack_5d8 = uVar9;
      _memcpy((ulong)&lStack_600 | 0x34,auStack_2d4,0x24c);
      uStack_380 = 0;
      uStack_370 = 0;
      uStack_378 = 0;
      aplStack_88[0] = (long *)0x0;
      lStack_360 = lVar13;
      lStack_358 = lVar24;
      iVar14 = _posix_memalign(aplStack_88,0x80,0x300);
      plVar20 = aplStack_88[0];
      if ((iVar14 != 0) || (aplStack_88[0] == (long *)0x0)) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x300);
        iVar10 = iStack_858;
        plVar20 = plStack_828;
        uVar11 = uStack_5d4;
        goto LAB_100c9fc70;
      }
      _memcpy(aplStack_88[0],&lStack_600,0x300);
      lVar13 = FUN_1010e2658(plVar23 + 0x11,plVar20,plVar20);
      lStack_600 = lVar12;
      if (plVar23[0x48] != 0) {
        (**(code **)(plVar23[0x49] + 0x28))
                  (plVar23[0x48] + (*(long *)(plVar23[0x49] + 0x10) - 1U & 0xfffffffffffffff0) +
                   0x10,&lStack_600);
      }
      if (lVar13 != 0) {
        FUN_10610fa38(plVar23 + 2,lVar13,0);
      }
    }
    if (lStack_610 == 0) {
      lVar12 = *plStack_608;
      *plStack_608 = lVar12 + -1;
      LORelease();
      if (lVar12 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE(&plStack_608);
      }
    }
    else {
      lVar12 = *plStack_608;
      *plStack_608 = lVar12 + -1;
      LORelease();
      if (lVar12 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E(&plStack_608);
      }
    }
LAB_100c9fa28:
    if (*plVar20 == 0xcc) {
      *plVar20 = 0x84;
      iVar10 = iStack_858;
      plVar20 = plStack_828;
    }
    else {
      (**(code **)(plVar20[2] + 0x20))(plVar20);
      iVar10 = iStack_858;
      plVar20 = plStack_828;
    }
LAB_100c9fa4c:
    plStack_828 = plVar20;
    iStack_858 = iVar10;
    if (*piVar16 != 3) {
      FUN_100ccc6a8(piVar16 + 2);
      lVar12 = **(long **)(piVar16 + 4);
      **(long **)(piVar16 + 4) = lVar12 + -1;
      LORelease();
      if (lVar12 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hfb7b729c15707e4fE();
      }
    }
    plVar20 = *(long **)(piVar16 + 0xc);
    lVar12 = *plVar20;
    *plVar20 = lVar12 + -1;
    LORelease();
    if (lVar12 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000105e13170(piVar16 + 0xc);
    }
    return;
  }
  iStack_858 = *piVar16;
  *piVar16 = 3;
  plStack_828 = *(long **)(piVar16 + 0xc);
  if (iStack_858 != 3) {
    lVar12 = *plStack_828;
    *plStack_828 = lVar12 + 1;
    if (lVar12 < 0) goto LAB_100c9fc70;
    uStack_5f8 = *(undefined8 *)(piVar16 + 3);
    lStack_600 = *(long *)(piVar16 + 1);
    puStack_5f0 = *(undefined **)(piVar16 + 5);
    uStack_5e8 = (undefined4)*(undefined8 *)(piVar16 + 7);
    uStack_5dc = (undefined4)*(undefined8 *)(piVar16 + 10);
    uStack_5d8 = (undefined4)((ulong)*(undefined8 *)(piVar16 + 10) >> 0x20);
    uStack_5e4 = (undefined4)*(undefined8 *)(piVar16 + 8);
    uStack_5e0 = (undefined4)((ulong)*(undefined8 *)(piVar16 + 8) >> 0x20);
  }
  lVar12 = *plStack_828;
  *plStack_828 = lVar12 + 1;
  if (lVar12 < 0) goto LAB_100c9fc70;
  uStack_84c = uStack_5f8;
  lStack_854 = lStack_600;
  uStack_83c = uStack_5e8;
  puStack_844 = puStack_5f0;
  uStack_830 = CONCAT44(uStack_5d8,uStack_5dc);
  uStack_838 = uStack_5e4;
  uStack_834 = uStack_5e0;
  uStack_820 = 0;
  uStack_810 = 0;
  plStack_818 = plStack_828;
  puVar15 = (ulong *)(*
                     ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                     )();
  if ((char)puVar15[9] == '\x01') {
LAB_100c9f400:
    uVar11 = uStack_5d4;
    uVar8 = uStack_5d8;
    uVar6 = uStack_5dc;
    uVar4 = uStack_5e0;
    uVar18 = *puVar15;
    if (0x7ffffffffffffffe < uVar18) {
      func_0x000108a07858(&UNK_10b4ce0a8);
      iVar10 = iStack_858;
      plVar20 = plStack_828;
      uVar11 = uStack_5d4;
      goto LAB_100c9fc70;
    }
    *puVar15 = uVar18 + 1;
    uVar22 = puVar15[1];
    if (uVar22 != 2) {
      plVar23 = (long *)puVar15[2];
      lVar12 = *plVar23;
      *plVar23 = lVar12 + 1;
      iVar10 = iStack_858;
      plVar20 = plStack_828;
      uStack_5e0 = uVar4;
      uStack_5dc = uVar6;
      uStack_5d8 = uVar8;
      if ((uVar22 & 1) == 0) {
        if (lVar12 < 0) goto LAB_100c9fc70;
        lStack_610 = 0;
      }
      else {
        if (lVar12 < 0) goto LAB_100c9fc70;
        lStack_610 = 1;
      }
      *puVar15 = *puVar15 - 1;
      do {
        lVar12 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
        lVar13 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
        bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
        ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar13;
      } while (bVar1);
      lVar13 = *plVar23;
      *plVar23 = lVar13 + 1;
      uStack_5e0 = SUB84(plVar23,0);
      uVar5 = uStack_5e0;
      uStack_5dc = (undefined4)((ulong)plVar23 >> 0x20);
      uVar7 = uStack_5dc;
      uStack_5d8 = (undefined4)lVar12;
      uVar9 = uStack_5d8;
      uStack_5d4 = (undefined4)((ulong)lVar12 >> 0x20);
      plStack_608 = plVar23;
      if (lStack_610 == 0) {
        uStack_5e0 = uVar4;
        uStack_5dc = uVar6;
        uStack_5d8 = uVar8;
        if (lVar13 < 0) goto LAB_100c9fc70;
        plVar19 = (long *)plVar23[0x5e];
        if (plVar19 == (long *)0x0) {
          lVar13 = 0;
          lVar24 = 0;
        }
        else {
          lVar13 = *plVar19;
          *plVar19 = lVar13 + 1;
          if (lVar13 < 0) goto LAB_100c9fc70;
          lVar24 = plVar23[0x5f];
          lVar13 = plVar23[0x5e];
        }
        _memcpy(auStack_2d0,&iStack_858,0x248);
        lStack_600 = 0xcc;
        uStack_5f8 = 0;
        puStack_5f0 = &UNK_10b23cc20;
        uStack_5e8 = 0;
        uStack_5e4 = 0;
        uStack_5d0 = 0;
        uStack_5e0 = uVar5;
        uStack_5dc = uVar7;
        uStack_5d8 = uVar9;
        _memcpy((ulong)&lStack_600 | 0x34,auStack_2d4,0x24c);
        uStack_380 = 0;
        uStack_370 = 0;
        uStack_378 = 0;
        aplStack_88[0] = (long *)0x0;
        lStack_360 = lVar13;
        lStack_358 = lVar24;
        iVar14 = _posix_memalign(aplStack_88,0x80,0x300);
        plVar20 = aplStack_88[0];
        if ((iVar14 != 0) || (aplStack_88[0] == (long *)0x0)) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x300);
          iVar10 = iStack_858;
          plVar20 = plStack_828;
          uVar11 = uStack_5d4;
          goto LAB_100c9fc70;
        }
        _memcpy(aplStack_88[0],&lStack_600,0x300);
        lVar13 = FUN_1010e2658(plVar23 + 0x2d,plVar20,plVar20);
        lStack_600 = lVar12;
        if (plVar23[0x5c] != 0) {
          (**(code **)(plVar23[0x5d] + 0x28))
                    (plVar23[0x5c] + (*(long *)(plVar23[0x5d] + 0x10) - 1U & 0xfffffffffffffff0) +
                     0x10,&lStack_600);
        }
        if (lVar13 != 0) {
          __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                    (&plStack_608,lVar13);
        }
      }
      else {
        uStack_5e0 = uVar4;
        uStack_5dc = uVar6;
        uStack_5d8 = uVar8;
        if (lVar13 < 0) goto LAB_100c9fc70;
        plVar19 = (long *)plVar23[0x4a];
        if (plVar19 == (long *)0x0) {
          lVar13 = 0;
          lVar24 = 0;
        }
        else {
          lVar13 = *plVar19;
          *plVar19 = lVar13 + 1;
          if (lVar13 < 0) goto LAB_100c9fc70;
          lVar24 = plVar23[0x4b];
          lVar13 = plVar23[0x4a];
        }
        _memcpy(auStack_2d0,&iStack_858,0x248);
        lStack_600 = 0xcc;
        uStack_5f8 = 0;
        puStack_5f0 = &UNK_10b2414f0;
        uStack_5e8 = 0;
        uStack_5e4 = 0;
        uStack_5d0 = 0;
        uStack_5e0 = uVar5;
        uStack_5dc = uVar7;
        uStack_5d8 = uVar9;
        _memcpy((ulong)&lStack_600 | 0x34,auStack_2d4,0x24c);
        uStack_380 = 0;
        uStack_370 = 0;
        uStack_378 = 0;
        aplStack_88[0] = (long *)0x0;
        lStack_360 = lVar13;
        lStack_358 = lVar24;
        iVar14 = _posix_memalign(aplStack_88,0x80,0x300);
        plVar20 = aplStack_88[0];
        if ((iVar14 != 0) || (aplStack_88[0] == (long *)0x0)) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x300);
          iVar10 = iStack_858;
          plVar20 = plStack_828;
          uVar11 = uStack_5d4;
          goto LAB_100c9fc70;
        }
        _memcpy(aplStack_88[0],&lStack_600,0x300);
        lVar13 = FUN_1010e2658(plVar23 + 0x11,plVar20,plVar20);
        lStack_600 = lVar12;
        if (plVar23[0x48] != 0) {
          (**(code **)(plVar23[0x49] + 0x28))
                    (plVar23[0x48] + (*(long *)(plVar23[0x49] + 0x10) - 1U & 0xfffffffffffffff0) +
                     0x10,&lStack_600);
        }
        if (lVar13 != 0) {
          FUN_10610fa38(plVar23 + 2,lVar13,0);
        }
      }
      if (lStack_610 == 0) {
        lVar12 = *plStack_608;
        *plStack_608 = lVar12 + -1;
        LORelease();
        if (lVar12 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE(&plStack_608);
        }
      }
      else {
        lVar12 = *plStack_608;
        *plStack_608 = lVar12 + -1;
        LORelease();
        if (lVar12 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E(&plStack_608);
        }
      }
      goto LAB_100c9fa28;
    }
    *puVar15 = uVar18;
  }
  else if ((char)puVar15[9] != '\x02') {
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
              (puVar15,&DAT_1060edbcc);
    *(undefined1 *)(puVar15 + 9) = 1;
    goto LAB_100c9f400;
  }
  _memcpy(&lStack_600,&iStack_858,0x248);
  FUN_108873754(&lStack_600);
  iVar10 = iStack_858;
  plVar20 = plStack_828;
  uVar11 = uStack_5d4;
LAB_100c9fc70:
  uStack_5d4 = uVar11;
  plStack_828 = plVar20;
  iStack_858 = iVar10;
                    /* WARNING: Does not return */
  pcVar21 = (code *)SoftwareBreakpoint(1,0x100c9fc74);
  (*pcVar21)();
}

