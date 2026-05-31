
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fbfb50(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined1 uVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  char in_wzr;
  undefined1 auVar18 [16];
  long lStack_1b8;
  long **pplStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined1 auStack_190 [8];
  long *plStack_188;
  long **pplStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  long lStack_168;
  long lStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long lStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long *plStack_f0;
  long *plStack_e8;
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
  long *plStack_68;
  
  bVar4 = *(byte *)(param_2 + 9);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      uVar3 = *param_2;
      lVar16 = param_2[1];
      param_2[2] = uVar3;
      param_2[3] = lVar16;
      if (lVar16 == 0) {
        lVar11 = 1;
      }
      else {
        lVar11 = _malloc(lVar16);
        if (lVar11 == 0) {
          func_0x0001087c9084(1,lVar16);
          lVar9 = lStack_160;
          plVar12 = plStack_150;
          plVar6 = plStack_148;
          goto LAB_100fbffb4;
        }
      }
      _memcpy(lVar11,uVar3,lVar16);
      param_2[4] = lVar16;
      param_2[5] = lVar11;
      param_2[6] = lVar16;
      *(undefined1 *)(param_2 + 8) = 0;
      lStack_1b8 = lVar16;
LAB_100fbfc28:
      _auStack_190 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b23a3d0)
      ;
      plVar13 = auStack_190._8_8_;
      do {
        lVar5 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
        lVar9 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
        bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
        ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar9;
      } while (bVar1);
      lVar2 = 0x220;
      if ((auStack_190 & 1) == 0) {
        lVar2 = 0x300;
      }
      if ((auStack_190 & 1) == 0) {
        plVar12 = plVar13 + 0x4c;
        if ((char)*plVar12 == '\0') {
          *(char *)plVar12 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (plVar12,plVar13,1000000000);
        }
        plVar13[0x51] = plVar13[0x51] + 1;
        if ((char)*plVar12 == '\x01') {
          *(char *)plVar12 = in_wzr;
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar12,0);
        }
        lVar8 = *plVar13;
        *plVar13 = lVar8 + 1;
        lVar9 = lStack_160;
        plVar12 = plStack_150;
        plVar6 = plStack_148;
        if (lVar8 < 0) goto LAB_100fbffb4;
        plVar15 = (long *)plVar13[0x5e];
        lStack_160 = 0;
        plStack_148 = plVar13 + 0x5c;
      }
      else {
        lVar8 = *plVar13;
        *plVar13 = lVar8 + 1;
        lVar9 = lStack_160;
        plVar12 = plStack_150;
        plVar6 = plStack_148;
        if (lVar8 < 0) goto LAB_100fbffb4;
        plVar15 = (long *)plVar13[0x4a];
        lStack_160 = 1;
        plStack_148 = plVar13 + 0x48;
      }
      plStack_150 = (long *)0x0;
      if (plVar15 != (long *)0x0) {
        lVar8 = *plVar15;
        *plVar15 = lVar8 + 1;
        if (lVar8 < 0) goto LAB_100fbffb4;
        plStack_150 = (long *)plStack_148[2];
        plStack_148 = (long *)plStack_148[3];
        lVar8 = *plStack_150;
        *plStack_150 = lVar8 + 1;
        if (lVar8 < 0) goto LAB_100fbffb4;
      }
      pplStack_180 = (long **)0xcc;
      pcStack_178 = (code *)0x0;
      puStack_170 = &UNK_10b241130;
      lStack_168 = 0;
      lStack_140 = lVar5;
      uStack_138 = 0;
      lStack_130 = lStack_1b8;
      lStack_110 = 0;
      lStack_108 = 0;
      lStack_100 = 0;
      plStack_68 = (long *)0x0;
      plStack_158 = plVar13;
      lStack_128 = lVar11;
      lStack_120 = lVar16;
      plStack_f0 = plStack_150;
      plStack_e8 = plStack_148;
      iVar10 = _posix_memalign(&plStack_68,0x80,0x100);
      plVar12 = plStack_68;
      if ((iVar10 != 0) || (plStack_68 == (long *)0x0)) {
        func_0x0001087c906c(0x80,0x100);
        lVar9 = lStack_160;
        plVar12 = plStack_150;
        plVar6 = plStack_148;
        goto LAB_100fbffb4;
      }
      plStack_68[0x13] = (long)plStack_e8;
      plStack_68[0x12] = (long)plStack_f0;
      plStack_68[0x15] = lStack_d8;
      plStack_68[0x14] = lStack_e0;
      plStack_68[0x17] = lStack_c8;
      plStack_68[0x16] = lStack_d0;
      plStack_68[3] = lStack_168;
      plStack_68[2] = (long)puStack_170;
      plStack_68[5] = (long)plStack_158;
      plStack_68[4] = lStack_160;
      plStack_68[7] = (long)plStack_148;
      plStack_68[6] = (long)plStack_150;
      plStack_68[1] = (long)pcStack_178;
      *plStack_68 = (long)pplStack_180;
      plStack_68[0xd] = lStack_118;
      plStack_68[0xc] = lStack_120;
      plStack_68[0xf] = lStack_108;
      plStack_68[0xe] = lStack_110;
      plStack_68[9] = CONCAT44(uStack_134,uStack_138);
      plStack_68[8] = lStack_140;
      plStack_68[0xb] = lStack_128;
      plStack_68[10] = lStack_130;
      plStack_68[0x11] = lStack_f8;
      plStack_68[0x10] = lStack_100;
      plStack_68[0x1d] = lStack_98;
      plStack_68[0x1c] = lStack_a0;
      plStack_68[0x1f] = lStack_88;
      plStack_68[0x1e] = lStack_90;
      plStack_68[0x19] = lStack_b8;
      plStack_68[0x18] = lStack_c0;
      plStack_68[0x1b] = lStack_a8;
      plStack_68[0x1a] = lStack_b0;
      auVar18 = __ZN5tokio7runtime8blocking4pool7Spawner10spawn_task17h940099594ef92638E
                          ((long)plVar13 + lVar2,plStack_68,1,auStack_190);
      if (((auVar18._0_8_ & 1) != 0) && (auVar18._8_8_ != (long *)0x0)) {
        pplStack_180 = &plStack_68;
        pcStack_178 = 
        __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
        plStack_68 = auVar18._8_8_;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s_OS_can_t_spawn_worker_thread__108ad752a,&pplStack_180,&UNK_10b23a3d0);
        lVar9 = lStack_160;
        plVar12 = plStack_150;
        plVar6 = plStack_148;
        goto LAB_100fbffb4;
      }
      if (auStack_190 == (undefined1  [8])0x0) {
        lVar9 = *plStack_188;
        *plStack_188 = lVar9 + -1;
        LORelease();
        if (lVar9 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE(&plStack_188);
        }
      }
      else {
        lVar9 = *plStack_188;
        *plStack_188 = lVar9 + -1;
        LORelease();
        if (lVar9 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E(&plStack_188);
        }
      }
      param_2[7] = plVar12;
LAB_100fbfe38:
      puVar17 = param_2 + 8;
      FUN_10151bd08(&pplStack_180,plVar12,*param_3);
      if (pplStack_180 == (long **)0x2) {
        *(undefined1 *)puVar17 = 3;
      }
      else {
        pcStack_1a8 = pcStack_178;
        pplStack_1b0 = pplStack_180;
        lStack_198 = lStack_168;
        puStack_1a0 = puStack_170;
        plVar12 = (long *)param_2[7];
        if (*plVar12 == 0xcc) {
          *plVar12 = 0x84;
        }
        else {
          (**(code **)(plVar12[2] + 0x20))();
        }
        if (((ulong)pplStack_1b0 & 1) != 0) {
          lVar9 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x28,&UNK_108cc98e6,0x16);
          FUN_100d6bd08(&pplStack_1b0);
          *param_1 = -0x8000000000000000;
          param_1[1] = lVar9;
          uVar14 = 1;
          *(undefined1 *)puVar17 = 1;
          goto LAB_100fbfef8;
        }
        *param_1 = (long)pcStack_1a8;
        param_1[1] = (long)puStack_1a0;
        param_1[2] = lStack_198;
        uVar14 = 1;
        *(undefined1 *)puVar17 = 1;
        if (pcStack_1a8 != (code *)0x8000000000000001) goto LAB_100fbfef8;
      }
      *param_1 = -0x7fffffffffffffff;
      uVar14 = 3;
LAB_100fbfef8:
      *(undefined1 *)(param_2 + 9) = uVar14;
      return;
    }
    func_0x000108a07af4(&UNK_10b23a298);
LAB_100fbff8c:
    func_0x000108a07b10(&UNK_10b23a298);
  }
  else {
    if (bVar4 != 3) goto LAB_100fbff8c;
    bVar4 = *(byte *)(param_2 + 8);
    if (1 < bVar4) {
      if (bVar4 != 3) {
        func_0x000108a07b10(&UNK_10b23a3e8);
        lVar9 = lStack_160;
        plVar12 = plStack_150;
        plVar6 = plStack_148;
        goto LAB_100fbffb4;
      }
      plVar12 = (long *)param_2[7];
      goto LAB_100fbfe38;
    }
    if (bVar4 == 0) {
      lStack_1b8 = param_2[4];
      lVar11 = param_2[5];
      lVar16 = param_2[6];
      goto LAB_100fbfc28;
    }
  }
  func_0x000108a07af4(&UNK_10b23a3e8);
  lVar9 = lStack_160;
  plVar12 = plStack_150;
  plVar6 = plStack_148;
LAB_100fbffb4:
  plStack_148 = plVar6;
  plStack_150 = plVar12;
  lStack_160 = lVar9;
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100fbffb8);
  (*pcVar7)();
}

