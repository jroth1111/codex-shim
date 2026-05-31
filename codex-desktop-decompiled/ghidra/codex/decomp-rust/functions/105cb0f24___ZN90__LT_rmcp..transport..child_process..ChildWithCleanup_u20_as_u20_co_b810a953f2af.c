
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN90__LT_rmcp__transport__child_process__ChildWithCleanup_u20_as_u20_core__ops__drop__Drop_GT_4drop17hb49a4b5d124d9ec6E
               (long *param_1)

{
  char ***pppcVar1;
  ulong ****ppppuVar2;
  code *pcVar3;
  char **ppcVar4;
  char *pcVar5;
  int iVar6;
  ulong *puVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 in_x4;
  undefined1 uVar8;
  char ****ppppcVar9;
  char *****pppppcVar10;
  char ****ppppcVar11;
  char ***pppcVar12;
  char ***pppcVar13;
  char in_wzr;
  ulong ****ppppuStack_1c0;
  undefined8 *****pppppuStack_1b8;
  undefined1 *puStack_1b0;
  char ***pppcStack_1a8;
  char ***pppcStack_1a0;
  undefined1 uStack_188;
  char *****pppppcStack_180;
  char ***pppcStack_178;
  char ***pppcStack_170;
  char ***pppcStack_168;
  char ***pppcStack_160;
  ulong ****ppppuStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  char ***pppcStack_148;
  char ***pppcStack_140;
  char ***pppcStack_138;
  char ***pppcStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  char ***pppcStack_120;
  char ***pppcStack_118;
  char ***pppcStack_110;
  char ***pppcStack_108;
  char ***pppcStack_100;
  char ***pppcStack_f8;
  char ***pppcStack_f0;
  char ***pppcStack_e8;
  char ***pppcStack_e0;
  char ***pppcStack_d8;
  char ***pppcStack_d0;
  char ***pppcStack_c8;
  char ***pppcStack_c0;
  char ***pppcStack_b8;
  char ***pppcStack_b0;
  char ***pppcStack_a8;
  char ***pppcStack_a0;
  char ***pppcStack_98;
  char ***pppcStack_90;
  char ***pppcStack_88;
  char ***pppcStack_68;
  char ****ppppcStack_60;
  undefined1 uStack_51;
  
  pppcVar13 = (char ***)*param_1;
  pppcVar1 = (char ***)param_1[1];
  *param_1 = 0;
  ppppuVar2 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
  if (pppcVar13 != (char ***)0x0) {
    do {
      ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = ppppuVar2;
      ppppuVar2 = (ulong ****)
                  ((long)___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1);
    } while (___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == (ulong ****)0x0);
    pppppuStack_1b8 = &ppppuStack_1c0;
    puStack_1b0 = &uStack_51;
    ppppuStack_1c0 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
    uStack_188 = 0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE =
         (ulong ****)((long)___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1);
    pppcStack_1a8 = pppcVar13;
    pppcStack_1a0 = pppcVar1;
    puVar7 = (ulong *)(*
                      ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                      )();
    if ((char)puVar7[9] == '\x01') goto LAB_105cb0ff8;
    if ((char)puVar7[9] != '\x02') goto LAB_105cb0fe0;
    FUN_105c9c8ac(&pppcStack_1a8);
    uVar8 = 1;
    while( true ) {
      pppppuStack_1b8 = (undefined8 *****)CONCAT71(pppppuStack_1b8._1_7_,uVar8);
      pppppcStack_180 = (char *****)&pppppuStack_1b8;
      pppcStack_178 =
           (char ***)
           &
           __ZN78__LT_tokio__runtime__handle__TryCurrentError_u20_as_u20_core__fmt__Display_GT_3fmt17he04e046082d0b96dE
      ;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s__108b1bd74,&pppppcStack_180,&UNK_10b444638);
LAB_105cb0fe0:
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar7,&DAT_105c8ecf8);
      *(undefined1 *)(puVar7 + 9) = 1;
LAB_105cb0ff8:
      ppppuVar2 = ppppuStack_1c0;
      if (0x7ffffffffffffffe < *puVar7) {
        func_0x000108a07858(&UNK_10b443768);
        goto LAB_105cb1a04;
      }
      *puVar7 = *puVar7 + 1;
      if (puVar7[1] != 2) break;
      FUN_105c9c8ac(&pppcStack_1a8);
      uVar8 = 0;
      *puVar7 = *puVar7 - 1;
    }
    if ((puVar7[1] & 1) == 0) {
      pppcVar12 = (char ***)puVar7[2];
      ppcVar4 = *pppcVar12;
      *pppcVar12 = (char **)((long)ppcVar4 + 1);
      if ((long)ppcVar4 < 0) goto LAB_105cb1a04;
      ppcVar4 = pppcVar12[0x5e];
      if (ppcVar4 == (char **)0x0) {
        pppcStack_100 = (char ***)0x0;
        pppcStack_f8 = (char ***)0x0;
      }
      else {
        pcVar5 = *ppcVar4;
        *ppcVar4 = pcVar5 + 1;
        if ((long)pcVar5 < 0) goto LAB_105cb1a04;
        pppcStack_f8 = (char ***)pppcVar12[0x5f];
        pppcStack_100 = (char ***)pppcVar12[0x5e];
      }
      pppppcStack_180 = (char *****)0xcc;
      pppcStack_178 = (char ***)0x0;
      pppcStack_170 = (char ***)&UNK_10b443698;
      pppcStack_168 = (char ***)0x0;
      ppppuStack_158 = ppppuStack_1c0;
      uStack_150 = 0;
      uStack_128 = 0;
      pppcStack_118 = (char ***)0x0;
      pppcStack_110 = (char ***)0x0;
      pppcStack_120 = (char ***)0x0;
      ppppcStack_60 = (char ****)0x0;
      pppcStack_160 = pppcVar12;
      pppcStack_148 = pppcVar13;
      pppcStack_140 = pppcVar1;
      iVar6 = _posix_memalign(&ppppcStack_60,0x80,0x100);
      ppppcVar9 = ppppcStack_60;
      if ((iVar6 != 0) || (ppppcStack_60 == (char ****)0x0)) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x100);
        goto LAB_105cb1a04;
      }
      ppppcStack_60[0x13] = pppcStack_e8;
      ppppcStack_60[0x12] = pppcStack_f0;
      ppppcStack_60[0x15] = pppcStack_d8;
      ppppcStack_60[0x14] = pppcStack_e0;
      ppppcStack_60[0x17] = pppcStack_c8;
      ppppcStack_60[0x16] = pppcStack_d0;
      ppppcStack_60[3] = pppcStack_168;
      ppppcStack_60[2] = pppcStack_170;
      ppppcStack_60[5] = (char ***)ppppuStack_158;
      ppppcStack_60[4] = pppcStack_160;
      ppppcStack_60[7] = pppcStack_148;
      ppppcStack_60[6] = (char ***)CONCAT44(uStack_14c,uStack_150);
      ppppcStack_60[1] = pppcStack_178;
      *ppppcStack_60 = (char ***)pppppcStack_180;
      ppppcStack_60[0xd] = pppcStack_118;
      ppppcStack_60[0xc] = pppcStack_120;
      ppppcStack_60[0xf] = pppcStack_108;
      ppppcStack_60[0xe] = pppcStack_110;
      ppppcStack_60[9] = pppcStack_138;
      ppppcStack_60[8] = pppcStack_140;
      ppppcStack_60[0xb] = (char ***)CONCAT71(uStack_127,uStack_128);
      ppppcStack_60[10] = pppcStack_130;
      ppppcStack_60[0x11] = pppcStack_f8;
      ppppcStack_60[0x10] = pppcStack_100;
      ppppcStack_60[0x1d] = pppcStack_98;
      ppppcStack_60[0x1c] = pppcStack_a0;
      ppppcStack_60[0x1f] = pppcStack_88;
      ppppcStack_60[0x1e] = pppcStack_90;
      ppppcStack_60[0x19] = pppcStack_b8;
      ppppcStack_60[0x18] = pppcStack_c0;
      ppppcStack_60[0x1b] = pppcStack_a8;
      ppppcStack_60[0x1a] = pppcStack_b0;
      ppppcStack_60[3] = (char ***)pppcVar12[0x32];
      pppcVar13 = *(char ****)((long)ppppcStack_60 + (long)ppppcStack_60[2][9]);
      pppppcVar10 = (char *****)(pppcVar12[0x2d] + ((ulong)pppcVar12[0x31] & (ulong)pppcVar13) * 3);
      if (*(char *)pppppcVar10 == '\0') {
        *(char *)pppppcVar10 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pppppcVar10,extraout_x1_00,1000000000);
      }
      if (*(char *)(pppcVar12 + 0x33) == '\0') {
        pppcStack_178 = pppcVar12 + 0x2f;
        pppcStack_170 = pppcVar12 + 0x30;
        pppcStack_68 = *(char ****)((long)ppppcVar9 + (long)ppppcVar9[2][9]);
        pppppcStack_180 = pppppcVar10;
        pppcStack_168 = pppcVar13;
        if (pppcStack_68 != pppcVar13) {
          func_0x000108a07b2c(0,&pppcStack_68,&pppcStack_168,0,in_x4,&UNK_10b443680);
          goto LAB_105cb1a04;
        }
        ppppcVar11 = pppppcVar10[1];
        ppppcStack_60 = ppppcVar9;
        if (ppppcVar11 == ppppcVar9) {
          __ZN4core9panicking13assert_failed17h4965dcc32c4f2a5eE
                    (1,pppppcVar10 + 1,&ppppcStack_60,0,in_x4,&UNK_10b443668);
          goto LAB_105cb1a04;
        }
        *(char *****)((long)ppppcVar9 + (long)(ppppcVar9[2][7] + 1)) = ppppcVar11;
        *(undefined8 *)((long)ppppcVar9 + (long)ppppcVar9[2][7]) = 0;
        if (ppppcVar11 != (char ****)0x0) {
          *(char *****)((long)ppppcVar11 + (long)ppppcVar11[2][7]) = ppppcVar9;
        }
        pppppcVar10[1] = ppppcVar9;
        if (pppppcVar10[2] == (char ****)0x0) {
          pppppcVar10[2] = ppppcVar9;
        }
        *pppcStack_178 = (char **)((long)*pppcStack_178 + 1);
        ppcVar4 = *pppcStack_170;
        *pppcStack_170 = (char **)((long)ppcVar4 + 1);
        if (*(char *)pppppcVar10 == '\x01') {
          *(char *)pppppcVar10 = in_wzr;
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E
                    (ppcVar4,pppppcVar10,0);
        }
        ppcVar4 = pppcVar12[0x5c];
        ppppcVar11 = ppppcVar9;
      }
      else {
        if (*(char *)pppppcVar10 == '\x01') {
          *(char *)pppppcVar10 = in_wzr;
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pppppcVar10,0);
        }
        (*(code *)ppppcVar9[2][6])(ppppcVar9);
        LOAcquire();
        pppcVar13 = *ppppcVar9;
        *ppppcVar9 = pppcVar13 + -8;
        LORelease();
        if (pppcVar13 < (char ***)0x40) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109beb9af,0x27,&UNK_10b4cddd8);
          goto LAB_105cb1a04;
        }
        if (((ulong)pppcVar13 & 0xffffffffffffffc0) == 0x40) {
          (*(code *)ppppcVar9[2][2])(ppppcVar9);
        }
        ppppcVar11 = (char ****)0x0;
        ppcVar4 = pppcVar12[0x5c];
      }
      pppppcStack_180 = (char *****)ppppuVar2;
      if (ppcVar4 != (char **)0x0) {
        (*(code *)pppcVar12[0x5d][5])
                  ((long)ppcVar4 + ((ulong)(pppcVar12[0x5d][2] + -1) & 0xfffffffffffffff0) + 0x10,
                   &pppppcStack_180);
      }
      if (ppppcVar11 != (char ****)0x0) {
        __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                  (puVar7 + 2,ppppcVar11);
      }
    }
    else {
      pppcVar12 = (char ***)puVar7[2];
      ppcVar4 = *pppcVar12;
      *pppcVar12 = (char **)((long)ppcVar4 + 1);
      if ((long)ppcVar4 < 0) {
LAB_105cb1a04:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x105cb1a08);
        (*pcVar3)();
      }
      ppcVar4 = pppcVar12[0x4a];
      if (ppcVar4 == (char **)0x0) {
        pppcStack_100 = (char ***)0x0;
        pppcStack_f8 = (char ***)0x0;
      }
      else {
        pcVar5 = *ppcVar4;
        *ppcVar4 = pcVar5 + 1;
        if ((long)pcVar5 < 0) goto LAB_105cb1a04;
        pppcStack_f8 = (char ***)pppcVar12[0x4b];
        pppcStack_100 = (char ***)pppcVar12[0x4a];
      }
      pppppcStack_180 = (char *****)0xcc;
      pppcStack_178 = (char ***)0x0;
      pppcStack_170 = (char ***)&UNK_10b4436e8;
      pppcStack_168 = (char ***)0x0;
      ppppuStack_158 = ppppuStack_1c0;
      uStack_150 = 0;
      uStack_128 = 0;
      pppcStack_118 = (char ***)0x0;
      pppcStack_110 = (char ***)0x0;
      pppcStack_120 = (char ***)0x0;
      ppppcStack_60 = (char ****)0x0;
      pppcStack_160 = pppcVar12;
      pppcStack_148 = pppcVar13;
      pppcStack_140 = pppcVar1;
      iVar6 = _posix_memalign(&ppppcStack_60,0x80,0x100);
      ppppcVar9 = ppppcStack_60;
      if ((iVar6 != 0) || (ppppcStack_60 == (char ****)0x0)) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x100);
        goto LAB_105cb1a04;
      }
      ppppcStack_60[0x13] = pppcStack_e8;
      ppppcStack_60[0x12] = pppcStack_f0;
      ppppcStack_60[0x15] = pppcStack_d8;
      ppppcStack_60[0x14] = pppcStack_e0;
      ppppcStack_60[0x17] = pppcStack_c8;
      ppppcStack_60[0x16] = pppcStack_d0;
      ppppcStack_60[3] = pppcStack_168;
      ppppcStack_60[2] = pppcStack_170;
      ppppcStack_60[5] = (char ***)ppppuStack_158;
      ppppcStack_60[4] = pppcStack_160;
      ppppcStack_60[7] = pppcStack_148;
      ppppcStack_60[6] = (char ***)CONCAT44(uStack_14c,uStack_150);
      ppppcStack_60[1] = pppcStack_178;
      *ppppcStack_60 = (char ***)pppppcStack_180;
      ppppcStack_60[0xd] = pppcStack_118;
      ppppcStack_60[0xc] = pppcStack_120;
      ppppcStack_60[0xf] = pppcStack_108;
      ppppcStack_60[0xe] = pppcStack_110;
      ppppcStack_60[9] = pppcStack_138;
      ppppcStack_60[8] = pppcStack_140;
      ppppcStack_60[0xb] = (char ***)CONCAT71(uStack_127,uStack_128);
      ppppcStack_60[10] = pppcStack_130;
      ppppcStack_60[0x11] = pppcStack_f8;
      ppppcStack_60[0x10] = pppcStack_100;
      ppppcStack_60[0x1d] = pppcStack_98;
      ppppcStack_60[0x1c] = pppcStack_a0;
      ppppcStack_60[0x1f] = pppcStack_88;
      ppppcStack_60[0x1e] = pppcStack_90;
      ppppcStack_60[0x19] = pppcStack_b8;
      ppppcStack_60[0x18] = pppcStack_c0;
      ppppcStack_60[0x1b] = pppcStack_a8;
      ppppcStack_60[0x1a] = pppcStack_b0;
      ppppcStack_60[3] = (char ***)pppcVar12[0x16];
      pppcVar13 = *(char ****)((long)ppppcStack_60 + (long)ppppcStack_60[2][9]);
      pppppcVar10 = (char *****)(pppcVar12[0x11] + ((ulong)pppcVar12[0x15] & (ulong)pppcVar13) * 3);
      if (*(char *)pppppcVar10 == '\0') {
        *(char *)pppppcVar10 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pppppcVar10,extraout_x1,1000000000);
      }
      if (*(char *)(pppcVar12 + 0x17) == '\0') {
        pppcStack_178 = pppcVar12 + 0x13;
        pppcStack_170 = pppcVar12 + 0x14;
        pppcStack_68 = *(char ****)((long)ppppcVar9 + (long)ppppcVar9[2][9]);
        pppppcStack_180 = pppppcVar10;
        pppcStack_168 = pppcVar13;
        if (pppcStack_68 != pppcVar13) {
          func_0x000108a07b2c(0,&pppcStack_68,&pppcStack_168,0,in_x4,&UNK_10b443680);
          goto LAB_105cb1a04;
        }
        ppppcVar11 = pppppcVar10[1];
        ppppcStack_60 = ppppcVar9;
        if (ppppcVar11 == ppppcVar9) {
          __ZN4core9panicking13assert_failed17h4965dcc32c4f2a5eE
                    (1,pppppcVar10 + 1,&ppppcStack_60,0,in_x4,&UNK_10b443668);
          goto LAB_105cb1a04;
        }
        *(char *****)((long)ppppcVar9 + (long)(ppppcVar9[2][7] + 1)) = ppppcVar11;
        *(undefined8 *)((long)ppppcVar9 + (long)ppppcVar9[2][7]) = 0;
        if (ppppcVar11 != (char ****)0x0) {
          *(char *****)((long)ppppcVar11 + (long)ppppcVar11[2][7]) = ppppcVar9;
        }
        pppppcVar10[1] = ppppcVar9;
        if (pppppcVar10[2] == (char ****)0x0) {
          pppppcVar10[2] = ppppcVar9;
        }
        *pppcStack_178 = (char **)((long)*pppcStack_178 + 1);
        ppcVar4 = *pppcStack_170;
        *pppcStack_170 = (char **)((long)ppcVar4 + 1);
        if (*(char *)pppppcVar10 == '\x01') {
          *(char *)pppppcVar10 = in_wzr;
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E
                    (ppcVar4,pppppcVar10,0);
        }
        ppcVar4 = pppcVar12[0x48];
        ppppcVar11 = ppppcVar9;
      }
      else {
        if (*(char *)pppppcVar10 == '\x01') {
          *(char *)pppppcVar10 = in_wzr;
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pppppcVar10,0);
        }
        (*(code *)ppppcVar9[2][6])(ppppcVar9);
        LOAcquire();
        pppcVar13 = *ppppcVar9;
        *ppppcVar9 = pppcVar13 + -8;
        LORelease();
        if (pppcVar13 < (char ***)0x40) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109beb9af,0x27,&UNK_10b4cddd8);
          goto LAB_105cb1a04;
        }
        if (((ulong)pppcVar13 & 0xffffffffffffffc0) == 0x40) {
          (*(code *)ppppcVar9[2][2])(ppppcVar9);
        }
        ppppcVar11 = (char ****)0x0;
        ppcVar4 = pppcVar12[0x48];
      }
      pppppcStack_180 = (char *****)ppppuVar2;
      if (ppcVar4 != (char **)0x0) {
        (*(code *)pppcVar12[0x49][5])
                  ((long)ppcVar4 + ((ulong)(pppcVar12[0x49][2] + -1) & 0xfffffffffffffff0) + 0x10,
                   &pppppcStack_180);
      }
      if (ppppcVar11 != (char ****)0x0) {
        FUN_10610fa38(pppcVar12 + 2,ppppcVar11,0);
      }
    }
    *puVar7 = *puVar7 - 1;
    if (*ppppcVar9 == (char ***)0xcc) {
      *ppppcVar9 = (char ***)0x84;
    }
    else {
      (*(code *)ppppcVar9[2][4])(ppppcVar9);
    }
  }
  return;
}

