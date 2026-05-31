
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100fe0e38(long param_1,undefined4 param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  char in_wzr;
  undefined1 auVar12 [16];
  undefined1 auStack_1a0 [8];
  long *plStack_198;
  long lStack_190;
  undefined4 uStack_188;
  long *plStack_180;
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
  undefined4 uStack_128;
  undefined4 uStack_124;
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
  long *plStack_68;
  
  _auStack_1a0 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b223c10);
  plVar10 = auStack_1a0._8_8_;
  do {
    lVar7 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
    lVar8 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar8;
  } while (bVar1);
  lVar8 = 0x220;
  if ((auStack_1a0 & 1) == 0) {
    lVar8 = 0x300;
  }
  lStack_190 = param_1;
  uStack_188 = param_2;
  if ((auStack_1a0 & 1) == 0) {
    plVar3 = plVar10 + 0x4c;
    if ((char)*plVar3 == '\0') {
      *(char *)plVar3 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(plVar3,plVar10,1000000000);
    }
    plVar10[0x51] = plVar10[0x51] + 1;
    if ((char)*plVar3 == '\x01') {
      *(char *)plVar3 = in_wzr;
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar3,0);
    }
    lVar6 = *plVar10;
    *plVar10 = lVar6 + 1;
    lVar2 = lStack_160;
    plVar3 = plStack_150;
    plVar4 = plStack_148;
    if (lVar6 < 0) goto LAB_100fe10d4;
    plVar11 = (long *)plVar10[0x5e];
    lStack_160 = 0;
    plStack_148 = plVar10 + 0x5c;
  }
  else {
    lVar6 = *plVar10;
    *plVar10 = lVar6 + 1;
    lVar2 = lStack_160;
    plVar3 = plStack_150;
    plVar4 = plStack_148;
    if (lVar6 < 0) goto LAB_100fe10d4;
    plVar11 = (long *)plVar10[0x4a];
    lStack_160 = 1;
    plStack_148 = plVar10 + 0x48;
  }
  plStack_150 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    lVar6 = *plVar11;
    *plVar11 = lVar6 + 1;
    if (lVar6 < 0) goto LAB_100fe10d4;
    plStack_150 = (long *)plStack_148[2];
    plStack_148 = (long *)plStack_148[3];
    lVar6 = *plStack_150;
    *plStack_150 = lVar6 + 1;
    if (lVar6 < 0) goto LAB_100fe10d4;
  }
  plStack_180 = (long *)0xcc;
  pcStack_178 = (code *)0x0;
  puStack_170 = &UNK_10b2405f0;
  lStack_168 = 0;
  lStack_140 = lVar7;
  uStack_138 = 0;
  lStack_118 = 0;
  lStack_110 = 0;
  lStack_108 = 0;
  plStack_68 = (long *)0x0;
  plStack_158 = plVar10;
  lStack_130 = param_1;
  uStack_128 = param_2;
  plStack_f8 = plStack_150;
  plStack_f0 = plStack_148;
  iVar9 = _posix_memalign(&plStack_68,0x80,0x100);
  plVar3 = plStack_68;
  if ((iVar9 == 0) && (plStack_68 != (long *)0x0)) {
    plStack_68[0x13] = lStack_e8;
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
    *plStack_68 = (long)plStack_180;
    plStack_68[0xd] = lStack_118;
    plStack_68[0xc] = lStack_120;
    plStack_68[0xf] = lStack_108;
    plStack_68[0xe] = lStack_110;
    plStack_68[9] = CONCAT44(uStack_134,uStack_138);
    plStack_68[8] = lStack_140;
    plStack_68[0xb] = CONCAT44(uStack_124,uStack_128);
    plStack_68[10] = lStack_130;
    plStack_68[0x11] = (long)plStack_f8;
    plStack_68[0x10] = lStack_100;
    plStack_68[0x1d] = lStack_98;
    plStack_68[0x1c] = lStack_a0;
    plStack_68[0x1f] = lStack_88;
    plStack_68[0x1e] = lStack_90;
    plStack_68[0x19] = lStack_b8;
    plStack_68[0x18] = lStack_c0;
    plStack_68[0x1b] = lStack_a8;
    plStack_68[0x1a] = lStack_b0;
    auVar12 = __ZN5tokio7runtime8blocking4pool7Spawner10spawn_task17h940099594ef92638E
                        ((long)plVar10 + lVar8,plStack_68,1,auStack_1a0);
    if (((auVar12._0_8_ & 1) == 0) || (auVar12._8_8_ == 0)) {
      if (auStack_1a0 == (undefined1  [8])0x0) {
        lVar7 = *plStack_198;
        *plStack_198 = lVar7 + -1;
        LORelease();
        if (lVar7 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE(&plStack_198);
        }
      }
      else {
        lVar7 = *plStack_198;
        *plStack_198 = lVar7 + -1;
        LORelease();
        if (lVar7 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E(&plStack_198);
        }
      }
      return plVar3;
    }
    plStack_180 = &lStack_190;
    pcStack_178 = 
    __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
    lStack_190 = auVar12._8_8_;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s_OS_can_t_spawn_worker_thread__108ad752a,&plStack_180,&UNK_10b223c10);
    lVar2 = lStack_160;
    plVar3 = plStack_150;
    plVar4 = plStack_148;
  }
  else {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x100);
    lVar2 = lStack_160;
    plVar3 = plStack_150;
    plVar4 = plStack_148;
  }
LAB_100fe10d4:
  plStack_148 = plVar4;
  plStack_150 = plVar3;
  lStack_160 = lVar2;
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100fe10d8);
  (*pcVar5)();
}

