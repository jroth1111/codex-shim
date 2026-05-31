
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100fe1184(undefined8 *param_1)

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
  undefined1 auStack_210 [8];
  long *plStack_208;
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
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long *plStack_130;
  long *plStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
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
  
  _auStack_210 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b22bd20);
  plVar10 = auStack_210._8_8_;
  do {
    lVar7 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
    lVar8 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar8;
  } while (bVar1);
  lVar8 = 0x220;
  if ((auStack_210 & 1) == 0) {
    lVar8 = 0x300;
  }
  if ((auStack_210 & 1) == 0) {
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
    if (lVar6 < 0) goto LAB_100fe145c;
    plVar11 = (long *)plVar10[0x5e];
    lStack_1e0 = 0;
    plStack_1c8 = plVar10 + 0x5c;
    uStack_1b4 = uStack_f0;
  }
  else {
    lVar6 = *plVar10;
    *plVar10 = lVar6 + 1;
    lVar2 = lStack_1e0;
    plVar3 = plStack_1d0;
    plVar4 = plStack_1c8;
    if (lVar6 < 0) goto LAB_100fe145c;
    plVar11 = (long *)plVar10[0x4a];
    lStack_1e0 = 1;
    plStack_1c8 = plVar10 + 0x48;
    uStack_1b4 = uStack_f0;
  }
  plStack_1d0 = (long *)0x0;
  uStack_f0 = uStack_1b4;
  if (plVar11 != (long *)0x0) {
    lVar6 = *plVar11;
    *plVar11 = lVar6 + 1;
    if (lVar6 < 0) goto LAB_100fe145c;
    plStack_1d0 = (long *)plStack_1c8[2];
    plStack_1c8 = (long *)plStack_1c8[3];
    lVar6 = *plStack_1d0;
    *plStack_1d0 = lVar6 + 1;
    if (lVar6 < 0) goto LAB_100fe145c;
  }
  uStack_b4 = (undefined4)param_1[7];
  uStack_b0 = (undefined4)((ulong)param_1[7] >> 0x20);
  uStack_bc = (undefined4)param_1[6];
  uStack_b8 = (undefined4)((ulong)param_1[6] >> 0x20);
  uStack_c4 = (undefined4)param_1[5];
  uStack_c0 = (undefined4)((ulong)param_1[5] >> 0x20);
  uStack_cc = (undefined4)param_1[4];
  uStack_c8 = (undefined4)((ulong)param_1[4] >> 0x20);
  uStack_a4 = (undefined4)param_1[9];
  uStack_a0 = (undefined4)((ulong)param_1[9] >> 0x20);
  uStack_ac = (undefined4)param_1[8];
  uStack_a8 = (undefined4)((ulong)param_1[8] >> 0x20);
  uStack_94 = (undefined4)param_1[0xb];
  uStack_90 = (undefined4)((ulong)param_1[0xb] >> 0x20);
  uStack_9c = (undefined4)param_1[10];
  uStack_98 = (undefined4)((ulong)param_1[10] >> 0x20);
  uStack_e4 = (undefined4)param_1[1];
  uStack_e0 = (undefined4)((ulong)param_1[1] >> 0x20);
  uStack_ec = (undefined4)*param_1;
  uStack_e8 = (undefined4)((ulong)*param_1 >> 0x20);
  uStack_d4 = (undefined4)param_1[3];
  uStack_d0 = (undefined4)((ulong)param_1[3] >> 0x20);
  uStack_dc = (undefined4)param_1[2];
  uStack_d8 = (undefined4)((ulong)param_1[2] >> 0x20);
  puStack_200 = (undefined4 *)0xcc;
  pcStack_1f8 = (code *)0x0;
  puStack_1f0 = &UNK_10b23d530;
  lStack_1e8 = 0;
  lStack_1c0 = lVar7;
  uStack_1b8 = 0;
  uStack_18c = uStack_c8;
  uStack_188 = uStack_c4;
  uStack_194 = uStack_d0;
  uStack_190 = uStack_cc;
  uStack_19c = uStack_d8;
  uStack_198 = uStack_d4;
  uStack_1a4 = uStack_e0;
  uStack_1a0 = uStack_dc;
  uStack_1ac = uStack_e8;
  uStack_1a8 = uStack_e4;
  uStack_1b0 = uStack_ec;
  uStack_154 = uStack_90;
  uStack_15c = uStack_98;
  uStack_158 = uStack_94;
  uStack_164 = uStack_a0;
  uStack_160 = uStack_9c;
  uStack_16c = uStack_a8;
  uStack_168 = uStack_a4;
  uStack_174 = uStack_b0;
  uStack_170 = uStack_ac;
  uStack_17c = uStack_b8;
  uStack_178 = uStack_b4;
  uStack_184 = uStack_c0;
  uStack_180 = uStack_bc;
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  aplStack_88[0] = (long *)0x0;
  plStack_1d8 = plVar10;
  plStack_130 = plStack_1d0;
  plStack_128 = plStack_1c8;
  iVar9 = _posix_memalign(aplStack_88,0x80,0x100);
  plVar3 = aplStack_88[0];
  if ((iVar9 == 0) && (aplStack_88[0] != (long *)0x0)) {
    aplStack_88[0][0x13] = CONCAT44(uStack_164,uStack_168);
    aplStack_88[0][0x12] = CONCAT44(uStack_16c,uStack_170);
    aplStack_88[0][0x15] = CONCAT44(uStack_154,uStack_158);
    aplStack_88[0][0x14] = CONCAT44(uStack_15c,uStack_160);
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
    aplStack_88[0][0x11] = CONCAT44(uStack_174,uStack_178);
    aplStack_88[0][0x10] = CONCAT44(uStack_17c,uStack_180);
    aplStack_88[0][0x1d] = lStack_118;
    aplStack_88[0][0x1c] = lStack_120;
    aplStack_88[0][0x1f] = lStack_108;
    aplStack_88[0][0x1e] = lStack_110;
    aplStack_88[0][0x19] = lStack_138;
    aplStack_88[0][0x18] = lStack_140;
    aplStack_88[0][0x1b] = (long)plStack_128;
    aplStack_88[0][0x1a] = (long)plStack_130;
    auVar12 = __ZN5tokio7runtime8blocking4pool7Spawner10spawn_task17h940099594ef92638E
                        ((long)plVar10 + lVar8,aplStack_88[0],1,auStack_210);
    if (((auVar12._0_8_ & 1) == 0) || (auVar12._8_8_ == 0)) {
      if (auStack_210 == (undefined1  [8])0x0) {
        lVar7 = *plStack_208;
        *plStack_208 = lVar7 + -1;
        LORelease();
        if (lVar7 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE(&plStack_208);
        }
      }
      else {
        lVar7 = *plStack_208;
        *plStack_208 = lVar7 + -1;
        LORelease();
        if (lVar7 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E(&plStack_208);
        }
      }
      return plVar3;
    }
    uStack_f0 = auVar12._8_4_;
    uStack_ec = auVar12._12_4_;
    puStack_200 = &uStack_f0;
    pcStack_1f8 = 
    __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s_OS_can_t_spawn_worker_thread__108ad752a,&puStack_200,&UNK_10b22bd20);
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
LAB_100fe145c:
  plStack_1c8 = plVar4;
  plStack_1d0 = plVar3;
  lStack_1e0 = lVar2;
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100fe1460);
  (*pcVar5)();
}

