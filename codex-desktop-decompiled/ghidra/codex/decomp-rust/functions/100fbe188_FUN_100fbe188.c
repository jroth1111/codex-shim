
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fbe188(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined1 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  char in_wzr;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 *puStack_2a0;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined7 uStack_257;
  code *pcStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined1 auStack_210 [8];
  long *plStack_208;
  long **pplStack_200;
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
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long *plStack_168;
  long *plStack_160;
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
  long *aplStack_88 [5];
  
  bVar4 = *(byte *)(param_2 + 0x10);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      plVar10 = (long *)*param_2;
      lVar14 = param_2[1];
      lVar17 = param_2[2];
      param_2[5] = lVar14;
      param_2[6] = lVar17;
      param_2[0xe] = (long)plVar10;
      *(undefined1 *)((long)param_2 + 0x79) = 0;
      *(undefined1 *)(param_2 + 0xf) = 0;
      param_2[3] = lVar14;
      param_2[4] = lVar17;
joined_r0x000100fbe254:
      if (lVar17 == 0) {
        lVar9 = 1;
      }
      else {
        lVar9 = _malloc(lVar17);
        if (lVar9 == 0) {
          func_0x0001087c9084(1,lVar17);
          lVar14 = lStack_1e0;
          plVar10 = plStack_1d0;
          plVar18 = plStack_1c8;
          goto LAB_100fbe72c;
        }
      }
      _memcpy(lVar9,lVar14,lVar17);
      *(undefined1 *)(param_2 + 0xf) = 1;
      lVar14 = *plVar10;
      uVar3 = *(undefined4 *)(plVar10 + 1);
      *(undefined1 *)(param_2 + 0xf) = 0;
      param_2[7] = lVar17;
      param_2[8] = lVar9;
      param_2[9] = lVar17;
      param_2[10] = lVar14;
      *(undefined4 *)(param_2 + 0xb) = uVar3;
      *(undefined1 *)(param_2 + 0xd) = 0;
LAB_100fbe2a0:
      lVar20 = param_2[10];
      lVar19 = param_2[9];
      lVar15 = param_2[0xb];
      _auStack_210 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b23a3d0)
      ;
      plVar12 = auStack_210._8_8_;
      do {
        lVar5 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
        lVar14 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
        bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
        ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar14;
      } while (bVar1);
      lVar2 = 0x220;
      if ((auStack_210 & 1) == 0) {
        lVar2 = 0x300;
      }
      if ((auStack_210 & 1) == 0) {
        plVar10 = plVar12 + 0x4c;
        if ((char)*plVar10 == '\0') {
          *(char *)plVar10 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (plVar10,plVar12,1000000000);
        }
        plVar12[0x51] = plVar12[0x51] + 1;
        if ((char)*plVar10 == '\x01') {
          *(char *)plVar10 = in_wzr;
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar10,0);
        }
        lVar7 = *plVar12;
        *plVar12 = lVar7 + 1;
        lVar14 = lStack_1e0;
        plVar10 = plStack_1d0;
        plVar18 = plStack_1c8;
        if (lVar7 < 0) goto LAB_100fbe72c;
        plVar16 = (long *)plVar12[0x5e];
        lStack_1e0 = 0;
        plStack_1c8 = plVar12 + 0x5c;
      }
      else {
        lVar7 = *plVar12;
        *plVar12 = lVar7 + 1;
        lVar14 = lStack_1e0;
        plVar10 = plStack_1d0;
        plVar18 = plStack_1c8;
        if (lVar7 < 0) goto LAB_100fbe72c;
        plVar16 = (long *)plVar12[0x4a];
        lStack_1e0 = 1;
        plStack_1c8 = plVar12 + 0x48;
      }
      plStack_1d0 = (long *)0x0;
      if (plVar16 != (long *)0x0) {
        lVar7 = *plVar16;
        *plVar16 = lVar7 + 1;
        if (lVar7 < 0) goto LAB_100fbe72c;
        plStack_1d0 = (long *)plStack_1c8[2];
        plStack_1c8 = (long *)plStack_1c8[3];
        lVar7 = *plStack_1d0;
        *plStack_1d0 = lVar7 + 1;
        if (lVar7 < 0) goto LAB_100fbe72c;
      }
      pplStack_200 = (long **)0xcc;
      pcStack_1f8 = (code *)0x0;
      puStack_1f0 = &UNK_10b240f50;
      lStack_1e8 = 0;
      lStack_1c0 = lVar5;
      uStack_1b8 = 0;
      lStack_188 = 0;
      lStack_180 = 0;
      lStack_178 = 0;
      aplStack_88[0] = (long *)0x0;
      plStack_1d8 = plVar12;
      lStack_1b0 = lVar17;
      lStack_1a8 = lVar9;
      lStack_1a0 = lVar19;
      lStack_198 = lVar20;
      lStack_190 = lVar15;
      plStack_168 = plStack_1d0;
      plStack_160 = plStack_1c8;
      iVar8 = _posix_memalign(aplStack_88,0x80,0x100);
      plVar10 = aplStack_88[0];
      if ((iVar8 != 0) || (aplStack_88[0] == (long *)0x0)) {
        func_0x0001087c906c(0x80,0x100);
        lVar14 = lStack_1e0;
        plVar10 = plStack_1d0;
        plVar18 = plStack_1c8;
        goto LAB_100fbe72c;
      }
      aplStack_88[0][0x13] = (long)plStack_168;
      aplStack_88[0][0x12] = lStack_170;
      aplStack_88[0][0x15] = lStack_158;
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
      *aplStack_88[0] = (long)pplStack_200;
      aplStack_88[0][0xd] = lStack_198;
      aplStack_88[0][0xc] = lStack_1a0;
      aplStack_88[0][0xf] = lStack_188;
      aplStack_88[0][0xe] = lStack_190;
      aplStack_88[0][9] = CONCAT44(uStack_1b4,uStack_1b8);
      aplStack_88[0][8] = lStack_1c0;
      aplStack_88[0][0xb] = lStack_1a8;
      aplStack_88[0][10] = lStack_1b0;
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
      auVar21 = __ZN5tokio7runtime8blocking4pool7Spawner10spawn_task17h940099594ef92638E
                          ((long)plVar12 + lVar2,aplStack_88[0],1,auStack_210);
      if (((auVar21._0_8_ & 1) != 0) && (auVar21._8_8_ != (long *)0x0)) {
        pplStack_200 = aplStack_88;
        pcStack_1f8 = 
        __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
        aplStack_88[0] = auVar21._8_8_;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s_OS_can_t_spawn_worker_thread__108ad752a,&pplStack_200,&UNK_10b23a3d0);
        lVar14 = lStack_1e0;
        plVar10 = plStack_1d0;
        plVar18 = plStack_1c8;
        goto LAB_100fbe72c;
      }
      if (auStack_210 == (undefined1  [8])0x0) {
        lVar14 = *plStack_208;
        *plStack_208 = lVar14 + -1;
        LORelease();
        if (lVar14 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE(&plStack_208);
        }
      }
      else {
        lVar14 = *plStack_208;
        *plStack_208 = lVar14 + -1;
        LORelease();
        if (lVar14 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E(&plStack_208);
        }
      }
      param_2[0xc] = (long)plVar10;
LAB_100fbe4c4:
      puStack_2a0 = (undefined1 *)((long)param_2 + 0x79);
      plVar18 = param_2 + 0xd;
      func_0x00010151b600(&pplStack_200,plVar10,*param_3);
      if ((int)pplStack_200 == 1) {
        *(undefined1 *)plVar18 = 3;
LAB_100fbe4e8:
        uVar13 = 3;
        *puStack_2a0 = 3;
        *param_1 = 1;
      }
      else {
        uStack_228 = puStack_1f0;
        pcStack_230 = pcStack_1f8;
        lStack_220 = lStack_1e8;
        plVar10 = (long *)param_2[0xc];
        if (*plVar10 == 0xcc) {
          *plVar10 = 0x84;
        }
        else {
          (**(code **)(plVar10[2] + 0x20))();
        }
        if (pcStack_230 == (code *)0x0) {
          uVar3 = uStack_228._4_4_;
          *(undefined1 *)plVar18 = 1;
          if ((int)uStack_228 == 2) goto LAB_100fbe4e8;
          if (((ulong)uStack_228 & 1) != 0) goto LAB_100fbe564;
          puVar11 = (undefined8 *)_malloc(0x18);
          if (puVar11 == (undefined8 *)0x0) {
            func_0x0001087c906c(8,0x18);
            lVar14 = lStack_1e0;
            plVar10 = plStack_1d0;
            plVar18 = plStack_1c8;
            goto LAB_100fbe72c;
          }
          lStack_220 = 0;
          puVar11[1] = 1;
          *puVar11 = 1;
          *(undefined4 *)(puVar11 + 2) = uVar3;
          uStack_278 = 0;
          uStack_270 = 0;
          uStack_268 = 0;
          uStack_260 = 0;
          uStack_258 = 0;
        }
        else {
          lVar14 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x28,&UNK_108cc98e6,0x16);
          func_0x000100d5a19c(&pcStack_230);
          *(undefined1 *)plVar18 = 1;
          lStack_220 = lVar14;
LAB_100fbe564:
          puVar11 = (undefined8 *)0x0;
        }
        *(undefined2 *)(param_2 + 0xf) = 0x100;
        param_1[1] = puVar11;
        param_1[2] = lStack_220;
        param_1[4] = uStack_260;
        param_1[3] = uStack_268;
        param_1[5] = CONCAT71(uStack_257,uStack_258);
        param_1[7] = 0;
        param_1[6] = 2;
        uVar13 = 1;
        param_1[8] = 1;
        param_1[10] = uStack_270;
        param_1[9] = uStack_278;
        param_1[0xb] = 0;
        *(undefined1 *)(param_1 + 0xc) = 0x2a;
        param_1[0xd] = 0x200000;
        *param_1 = 0;
      }
      *(undefined1 *)(param_2 + 0x10) = uVar13;
      return;
    }
    func_0x000108a07af4(&UNK_10b23a250);
LAB_100fbe6e4:
    func_0x000108a07b10(&UNK_10b23a250);
  }
  else {
    if (bVar4 != 3) goto LAB_100fbe6e4;
    bVar4 = *(byte *)((long)param_2 + 0x79);
    if (1 < bVar4) {
      if (bVar4 != 3) {
        func_0x000108a07b10(&UNK_10b23a268);
        lVar14 = lStack_1e0;
        plVar10 = plStack_1d0;
        plVar18 = plStack_1c8;
        goto LAB_100fbe72c;
      }
      bVar4 = *(byte *)(param_2 + 0xd);
      if (bVar4 < 2) {
        if (bVar4 != 0) {
          func_0x000108a07af4(&UNK_10b23a3e8);
          lVar14 = lStack_1e0;
          plVar10 = plStack_1d0;
          plVar18 = plStack_1c8;
          goto LAB_100fbe72c;
        }
        lVar17 = param_2[7];
        lVar9 = param_2[8];
        goto LAB_100fbe2a0;
      }
      if (bVar4 != 3) {
        func_0x000108a07b10(&UNK_10b23a3e8);
        lVar14 = lStack_1e0;
        plVar10 = plStack_1d0;
        plVar18 = plStack_1c8;
        goto LAB_100fbe72c;
      }
      plVar10 = (long *)param_2[0xc];
      goto LAB_100fbe4c4;
    }
    if (bVar4 == 0) {
      plVar10 = (long *)param_2[0xe];
      lVar14 = param_2[5];
      lVar17 = param_2[6];
      *(undefined1 *)(param_2 + 0xf) = 0;
      param_2[3] = lVar14;
      param_2[4] = lVar17;
      goto joined_r0x000100fbe254;
    }
  }
  func_0x000108a07af4(&UNK_10b23a268);
  lVar14 = lStack_1e0;
  plVar10 = plStack_1d0;
  plVar18 = plStack_1c8;
LAB_100fbe72c:
  plStack_1c8 = plVar18;
  plStack_1d0 = plVar10;
  lStack_1e0 = lVar14;
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100fbe730);
  (*pcVar6)();
}

