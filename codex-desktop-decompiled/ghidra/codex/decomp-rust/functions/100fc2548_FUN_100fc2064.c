
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc2064(short *param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  char cVar15;
  undefined1 uVar16;
  short extraout_w9;
  short extraout_w9_00;
  short extraout_w9_01;
  long *plVar17;
  long *plVar18;
  undefined4 in_w10;
  undefined4 extraout_w10;
  undefined4 extraout_w10_00;
  undefined4 extraout_w10_01;
  undefined8 *puVar19;
  char cVar20;
  char cVar21;
  char in_wzr;
  undefined1 auVar22 [16];
  short sStack_1c8;
  short sStack_1c6;
  undefined4 uStack_1c4;
  undefined1 auStack_1b0 [8];
  long *aplStack_1a8 [3];
  long *plStack_190;
  long *plStack_188;
  undefined8 *puStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  long lStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long lStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  long *plStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_68;
  
  bVar3 = *(byte *)(param_2 + 4);
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      plVar17 = (long *)*param_2;
      if ((short)plVar17[1] == 1) {
        sStack_1c8 = 0;
        sStack_1c6 = *(short *)((long)plVar17 + 10);
        goto LAB_100fc24b4;
      }
      plVar17 = (long *)*plVar17;
      lVar8 = *plVar17;
      *plVar17 = lVar8 + 1;
      lVar10 = lStack_160;
      plVar12 = plStack_150;
      plVar5 = plStack_148;
      if (lVar8 < 0) goto LAB_100fc2598;
      param_2[1] = plVar17;
      *(undefined1 *)(param_2 + 3) = 0;
LAB_100fc2108:
      plStack_190 = plVar17;
      _auStack_1b0 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b23a3d0)
      ;
      plVar14 = auStack_1b0._8_8_;
      do {
        lVar8 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
        lVar10 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
        bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
        ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar10;
      } while (bVar1);
      lVar2 = 0x220;
      if ((auStack_1b0 & 1) == 0) {
        lVar2 = 0x300;
      }
      plStack_188 = plVar17;
      if ((auStack_1b0 & 1) == 0) {
        plVar12 = plVar14 + 0x4c;
        if ((char)*plVar12 == '\0') {
          *(char *)plVar12 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (plVar12,plVar14,1000000000);
        }
        plVar14[0x51] = plVar14[0x51] + 1;
        if ((char)*plVar12 == '\x01') {
          *(char *)plVar12 = in_wzr;
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar12,0);
        }
        lVar9 = *plVar14;
        *plVar14 = lVar9 + 1;
        lVar10 = lStack_160;
        plVar12 = plStack_150;
        plVar5 = plStack_148;
        if (lVar9 < 0) goto LAB_100fc2598;
        plVar18 = (long *)plVar14[0x5e];
        lVar9 = 0;
        plVar6 = plVar14 + 0x5c;
      }
      else {
        lVar9 = *plVar14;
        *plVar14 = lVar9 + 1;
        lVar10 = lStack_160;
        plVar12 = plStack_150;
        plVar5 = plStack_148;
        if (lVar9 < 0) goto LAB_100fc2598;
        plVar18 = (long *)plVar14[0x4a];
        lVar9 = 1;
        plVar6 = plVar14 + 0x48;
      }
      plStack_148 = plVar6;
      lStack_160 = lVar9;
      plStack_150 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        lVar9 = *plVar18;
        *plVar18 = lVar9 + 1;
        if (lVar9 < 0) goto LAB_100fc2598;
        plStack_150 = (long *)plStack_148[2];
        plStack_148 = (long *)plStack_148[3];
        lVar9 = *plStack_150;
        *plStack_150 = lVar9 + 1;
        if (lVar9 < 0) goto LAB_100fc2598;
      }
      puStack_180 = (undefined8 *)0xcc;
      pcStack_178 = (code *)0x0;
      puStack_170 = &UNK_10b242710;
      puStack_168 = (undefined8 *)0x0;
      lStack_140 = lVar8;
      uStack_138 = 0;
      lStack_118 = 0;
      lStack_110 = 0;
      lStack_108 = 0;
      uStack_68 = (long *)0x0;
      plStack_158 = plVar14;
      plStack_130 = plVar17;
      plStack_f8 = plStack_150;
      plStack_f0 = plStack_148;
      iVar11 = _posix_memalign(&uStack_68,0x80,0x100);
      plVar12 = uStack_68;
      if ((iVar11 != 0) || (uStack_68 == (long *)0x0)) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x100);
        lVar10 = lStack_160;
        plVar12 = plStack_150;
        plVar5 = plStack_148;
        goto LAB_100fc2598;
      }
      uStack_68[0x13] = lStack_e8;
      uStack_68[0x12] = (long)plStack_f0;
      uStack_68[0x15] = lStack_d8;
      uStack_68[0x14] = lStack_e0;
      uStack_68[0x17] = lStack_c8;
      uStack_68[0x16] = lStack_d0;
      uStack_68[3] = (long)puStack_168;
      uStack_68[2] = (long)puStack_170;
      uStack_68[5] = (long)plStack_158;
      uStack_68[4] = lStack_160;
      uStack_68[7] = (long)plStack_148;
      uStack_68[6] = (long)plStack_150;
      uStack_68[1] = (long)pcStack_178;
      *uStack_68 = (long)puStack_180;
      uStack_68[0xd] = lStack_118;
      uStack_68[0xc] = lStack_120;
      uStack_68[0xf] = lStack_108;
      uStack_68[0xe] = lStack_110;
      uStack_68[9] = CONCAT44(uStack_134,uStack_138);
      uStack_68[8] = lStack_140;
      uStack_68[0xb] = lStack_128;
      uStack_68[10] = (long)plStack_130;
      uStack_68[0x11] = (long)plStack_f8;
      uStack_68[0x10] = lStack_100;
      uStack_68[0x1d] = lStack_98;
      uStack_68[0x1c] = lStack_a0;
      uStack_68[0x1f] = lStack_88;
      uStack_68[0x1e] = lStack_90;
      uStack_68[0x19] = lStack_b8;
      uStack_68[0x18] = lStack_c0;
      uStack_68[0x1b] = lStack_a8;
      uStack_68[0x1a] = lStack_b0;
      auVar22 = __ZN5tokio7runtime8blocking4pool7Spawner10spawn_task17h940099594ef92638E
                          ((long)plVar14 + lVar2,uStack_68,1,auStack_1b0);
      if (((auVar22._0_8_ & 1) != 0) && (auVar22._8_8_ != (long *)0x0)) {
        puStack_180 = &uStack_68;
        pcStack_178 = 
        __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
        uStack_68 = auVar22._8_8_;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s_OS_can_t_spawn_worker_thread__108ad752a,&puStack_180,&UNK_10b23a3d0);
        lVar10 = lStack_160;
        plVar12 = plStack_150;
        plVar5 = plStack_148;
        goto LAB_100fc2598;
      }
      if (auStack_1b0 == (undefined1  [8])0x0) {
        lVar10 = *aplStack_1a8[0];
        *aplStack_1a8[0] = lVar10 + -1;
        LORelease();
        if (lVar10 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE(aplStack_1a8);
        }
      }
      else {
        lVar10 = *aplStack_1a8[0];
        *aplStack_1a8[0] = lVar10 + -1;
        LORelease();
        if (lVar10 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E(aplStack_1a8);
        }
      }
      param_2[2] = plVar12;
LAB_100fc2318:
      puVar19 = param_2 + 3;
      puStack_180 = (undefined8 *)0x1;
      lVar10 = (*
               ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
               )();
      if (*(char *)(lVar10 + 0x48) == '\x01') {
LAB_100fc237c:
        cVar21 = *(char *)(lVar10 + 0x44);
        cVar20 = *(char *)(lVar10 + 0x45);
        cVar15 = cVar20;
        if (cVar21 != '\x01') {
LAB_100fc2398:
          *(char *)(lVar10 + 0x45) = cVar15;
          goto LAB_100fc239c;
        }
        if (cVar20 != '\0') {
          cVar15 = cVar20 + -1;
          goto LAB_100fc2398;
        }
        FUN_10610bbb4(*(undefined8 *)*param_3,((undefined8 *)*param_3)[1]);
LAB_100fc24d8:
        *(undefined1 *)puVar19 = 3;
      }
      else {
        if (*(char *)(lVar10 + 0x48) != '\x02') {
          __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                    (lVar10,&DAT_100c35d48);
          *(undefined1 *)(lVar10 + 0x48) = 1;
          goto LAB_100fc237c;
        }
        cVar21 = '\0';
        cVar20 = '\0';
LAB_100fc239c:
        uStack_68._0_2_ = CONCAT11(cVar20,cVar21);
        (**(code **)(plVar12[2] + 0x18))(plVar12,&puStack_180,*param_3);
        param_3 = puStack_168;
        puVar4 = puStack_170;
        pcVar7 = pcStack_178;
        if (puStack_180 != (undefined8 *)0x0) {
          if (cVar21 != '\0') {
            if (*(char *)(lVar10 + 0x48) != '\x01') {
              if (*(char *)(lVar10 + 0x48) == '\x02') goto LAB_100fc24d8;
              __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                        (lVar10,&DAT_1060edbcc);
              *(undefined1 *)(lVar10 + 0x48) = 1;
            }
            *(undefined1 *)(lVar10 + 0x44) = 1;
            *(char *)(lVar10 + 0x45) = cVar20;
          }
          goto LAB_100fc24d8;
        }
        plVar12 = (long *)param_2[2];
        if (*plVar12 == 0xcc) {
          *plVar12 = 0x84;
        }
        else {
          (**(code **)(plVar12[2] + 0x20))();
        }
        if (pcVar7 != (code *)0x0) {
          puVar13 = (undefined8 *)
                    __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x28,&UNK_108cc98e6,0x16);
          in_w10 = extraout_w10;
          sStack_1c6 = extraout_w9;
          if (puVar4 != (undefined *)0x0) {
            if ((code *)*param_3 != (code *)0x0) {
              (*(code *)*param_3)(puVar4);
              in_w10 = extraout_w10_00;
              sStack_1c6 = extraout_w9_00;
            }
            if (param_3[1] != 0) {
              _free(puVar4);
              in_w10 = extraout_w10_01;
              sStack_1c6 = extraout_w9_01;
            }
          }
          sStack_1c8 = 1;
          *(undefined1 *)puVar19 = 1;
          param_3 = puVar13;
LAB_100fc24b4:
          *param_1 = sStack_1c8;
          param_1[1] = sStack_1c6;
          *(undefined4 *)(param_1 + 2) = in_w10;
          uVar16 = 1;
          *(undefined8 **)(param_1 + 4) = param_3;
          goto LAB_100fc24ec;
        }
        sStack_1c8 = (short)puVar4;
        sStack_1c6 = (short)((ulong)puVar4 >> 0x10);
        uStack_1c4 = (undefined4)((ulong)puVar4 >> 0x20);
        *(undefined1 *)puVar19 = 1;
        in_w10 = uStack_1c4;
        if (sStack_1c8 != 2) goto LAB_100fc24b4;
      }
      *param_1 = 2;
      uVar16 = 3;
LAB_100fc24ec:
      *(undefined1 *)(param_2 + 4) = uVar16;
      return;
    }
    func_0x000108a07af4(&UNK_10b23a430);
LAB_100fc2570:
    func_0x000108a07b10(&UNK_10b23a430);
  }
  else {
    if (bVar3 != 3) goto LAB_100fc2570;
    bVar3 = *(byte *)(param_2 + 3);
    if (1 < bVar3) {
      if (bVar3 != 3) {
        func_0x000108a07b10(&UNK_10b23a3e8);
        lVar10 = lStack_160;
        plVar12 = plStack_150;
        plVar5 = plStack_148;
        goto LAB_100fc2598;
      }
      plVar12 = (long *)param_2[2];
      goto LAB_100fc2318;
    }
    if (bVar3 == 0) {
      plVar17 = (long *)param_2[1];
      goto LAB_100fc2108;
    }
  }
  func_0x000108a07af4(&UNK_10b23a3e8);
  lVar10 = lStack_160;
  plVar12 = plStack_150;
  plVar5 = plStack_148;
LAB_100fc2598:
  plStack_148 = plVar5;
  plStack_150 = plVar12;
  lStack_160 = lVar10;
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100fc259c);
  (*pcVar7)();
}

