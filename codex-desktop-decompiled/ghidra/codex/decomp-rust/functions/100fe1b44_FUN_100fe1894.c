
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100fe1894(undefined8 *param_1)

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
  undefined1 auStack_240 [8];
  long *plStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 *puStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long lStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long *plStack_160;
  long *plStack_158;
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
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  long *aplStack_88 [5];
  
  _auStack_240 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b223c40);
  plVar10 = auStack_240._8_8_;
  do {
    lVar7 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
    lVar8 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar8;
  } while (bVar1);
  lVar8 = 0x220;
  if ((auStack_240 & 1) == 0) {
    lVar8 = 0x300;
  }
  uStack_228 = param_1[1];
  uStack_230 = *param_1;
  uStack_218 = param_1[3];
  uStack_220 = param_1[2];
  uStack_208 = param_1[5];
  uStack_210 = param_1[4];
  if ((auStack_240 & 1) == 0) {
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
    lVar2 = lStack_1e0;
    plVar3 = plStack_1d0;
    plVar4 = plStack_1c8;
    if (lVar6 < 0) goto LAB_100fe1b5c;
    plVar11 = (long *)plVar10[0x5e];
    lStack_1e0 = 0;
    plStack_1c8 = plVar10 + 0x5c;
    uStack_1b4 = uStack_c0;
  }
  else {
    lVar6 = *plVar10;
    *plVar10 = lVar6 + 1;
    lVar2 = lStack_1e0;
    plVar3 = plStack_1d0;
    plVar4 = plStack_1c8;
    if (lVar6 < 0) goto LAB_100fe1b5c;
    plVar11 = (long *)plVar10[0x4a];
    lStack_1e0 = 1;
    plStack_1c8 = plVar10 + 0x48;
    uStack_1b4 = uStack_c0;
  }
  plStack_1d0 = (long *)0x0;
  uStack_c0 = uStack_1b4;
  if (plVar11 != (long *)0x0) {
    lVar6 = *plVar11;
    *plVar11 = lVar6 + 1;
    if (lVar6 < 0) goto LAB_100fe1b5c;
    plStack_1d0 = (long *)plStack_1c8[2];
    plStack_1c8 = (long *)plStack_1c8[3];
    lVar6 = *plStack_1d0;
    *plStack_1d0 = lVar6 + 1;
    if (lVar6 < 0) goto LAB_100fe1b5c;
  }
  uStack_b4 = (undefined4)param_1[1];
  uStack_b0 = (undefined4)((ulong)param_1[1] >> 0x20);
  uStack_bc = (undefined4)*param_1;
  uStack_b8 = (undefined4)((ulong)*param_1 >> 0x20);
  uStack_a4 = (undefined4)param_1[3];
  uStack_a0 = (undefined4)((ulong)param_1[3] >> 0x20);
  uStack_ac = (undefined4)param_1[2];
  uStack_a8 = (undefined4)((ulong)param_1[2] >> 0x20);
  uStack_94 = (undefined4)param_1[5];
  uStack_90 = (undefined4)((ulong)param_1[5] >> 0x20);
  uStack_9c = (undefined4)param_1[4];
  uStack_98 = (undefined4)((ulong)param_1[4] >> 0x20);
  puStack_200 = (undefined4 *)0xcc;
  pcStack_1f8 = (code *)0x0;
  puStack_1f0 = &UNK_10b23e5c0;
  lStack_1e8 = 0;
  lStack_1c0 = lVar7;
  uStack_1b8 = 0;
  uStack_184 = uStack_90;
  uStack_18c = uStack_98;
  uStack_188 = uStack_94;
  uStack_194 = uStack_a0;
  uStack_190 = uStack_9c;
  uStack_19c = uStack_a8;
  uStack_198 = uStack_a4;
  uStack_1a4 = uStack_b0;
  uStack_1a0 = uStack_ac;
  uStack_1ac = uStack_b8;
  uStack_1a8 = uStack_b4;
  uStack_1b0 = uStack_bc;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  aplStack_88[0] = (long *)0x0;
  plStack_1d8 = plVar10;
  plStack_160 = plStack_1d0;
  plStack_158 = plStack_1c8;
  iVar9 = _posix_memalign(aplStack_88,0x80,0x100);
  plVar3 = aplStack_88[0];
  if ((iVar9 == 0) && (aplStack_88[0] != (long *)0x0)) {
    aplStack_88[0][0x13] = lStack_168;
    aplStack_88[0][0x12] = lStack_170;
    aplStack_88[0][0x15] = (long)plStack_158;
    aplStack_88[0][0x14] = (long)plStack_160;
    aplStack_88[0][0x17] = lStack_148;
    aplStack_88[0][0x16] = lStack_150;
    aplStack_88[0][3] = lStack_1e8;
    aplStack_88[0][2] = (long)puStack_1f0;
    aplStack_88[0][5] = (long)plStack_1d8;
    aplStack_88[0][4] = lStack_1e0;
    aplStack_88[0][7] = (long)plStack_1c8;
    aplStack_88[0][6] = (long)plStack_1d0;
    aplStack_88[0][1] = (long)pcStack_1f8;
    *aplStack_88[0] = (long)puStack_200;
    aplStack_88[0][0xd] = CONCAT44(uStack_194,uStack_198);
    aplStack_88[0][0xc] = CONCAT44(uStack_19c,uStack_1a0);
    aplStack_88[0][0xf] = CONCAT44(uStack_184,uStack_188);
    aplStack_88[0][0xe] = CONCAT44(uStack_18c,uStack_190);
    aplStack_88[0][9] = CONCAT44(uStack_1b4,uStack_1b8);
    aplStack_88[0][8] = lStack_1c0;
    aplStack_88[0][0xb] = CONCAT44(uStack_1a4,uStack_1a8);
    aplStack_88[0][10] = CONCAT44(uStack_1ac,uStack_1b0);
    aplStack_88[0][0x11] = lStack_178;
    aplStack_88[0][0x10] = lStack_180;
    aplStack_88[0][0x1d] = lStack_118;
    aplStack_88[0][0x1c] = lStack_120;
    aplStack_88[0][0x1f] = lStack_108;
    aplStack_88[0][0x1e] = lStack_110;
    aplStack_88[0][0x19] = lStack_138;
    aplStack_88[0][0x18] = lStack_140;
    aplStack_88[0][0x1b] = lStack_128;
    aplStack_88[0][0x1a] = lStack_130;
    auVar12 = __ZN5tokio7runtime8blocking4pool7Spawner10spawn_task17h940099594ef92638E
                        ((long)plVar10 + lVar8,aplStack_88[0],1,auStack_240);
    if (((auVar12._0_8_ & 1) == 0) || (auVar12._8_8_ == 0)) {
      if (auStack_240 == (undefined1  [8])0x0) {
        lVar7 = *plStack_238;
        *plStack_238 = lVar7 + -1;
        LORelease();
        if (lVar7 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE(&plStack_238);
        }
      }
      else {
        lVar7 = *plStack_238;
        *plStack_238 = lVar7 + -1;
        LORelease();
        if (lVar7 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E(&plStack_238);
        }
      }
      return plVar3;
    }
    uStack_c0 = auVar12._8_4_;
    uStack_bc = auVar12._12_4_;
    puStack_200 = &uStack_c0;
    pcStack_1f8 = 
    __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s_OS_can_t_spawn_worker_thread__108ad752a,&puStack_200,&UNK_10b223c40);
    lVar2 = lStack_1e0;
    plVar3 = plStack_1d0;
    plVar4 = plStack_1c8;
  }
  else {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x100);
    lVar2 = lStack_1e0;
    plVar3 = plStack_1d0;
    plVar4 = plStack_1c8;
  }
LAB_100fe1b5c:
  plStack_1c8 = plVar4;
  plStack_1d0 = plVar3;
  lStack_1e0 = lVar2;
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100fe1b60);
  (*pcVar5)();
}

