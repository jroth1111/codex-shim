
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc0c58(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined1 uVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  char in_wzr;
  undefined1 auVar20 [16];
  long lStack_348;
  undefined *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  long *plStack_288;
  long *plStack_280;
  long *plStack_278;
  long lStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_210 [8];
  long *plStack_208;
  long *plStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long lStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_f8;
  long *plStack_f0;
  long lStack_68;
  
  bVar3 = *(byte *)(param_2 + 9);
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      uVar2 = *param_2;
      lVar19 = param_2[1];
      param_2[2] = uVar2;
      param_2[3] = lVar19;
      if (lVar19 == 0) {
        lVar13 = 1;
      }
      else {
        lVar13 = _malloc(lVar19);
        if (lVar13 == 0) {
          func_0x0001087c9084(1,lVar19);
          uVar2 = uStack_1e0;
          plVar17 = plStack_1d0;
          plVar8 = plStack_1c8;
          goto LAB_100fc10ec;
        }
      }
      _memcpy(lVar13,uVar2,lVar19);
      param_2[4] = lVar19;
      param_2[5] = lVar13;
      param_2[6] = lVar19;
      *(undefined1 *)(param_2 + 8) = 0;
      lStack_348 = lVar19;
LAB_100fc0d30:
      _auStack_210 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b23a3d0)
      ;
      plVar15 = auStack_210._8_8_;
      do {
        lVar5 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
        lVar11 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
        bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
        ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar11;
      } while (bVar1);
      lVar11 = 0x220;
      if ((auStack_210 & 1) == 0) {
        lVar11 = 0x300;
      }
      if ((auStack_210 & 1) == 0) {
        plVar17 = plVar15 + 0x4c;
        if ((char)*plVar17 == '\0') {
          *(char *)plVar17 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (plVar17,plVar15,1000000000);
        }
        plVar15[0x51] = plVar15[0x51] + 1;
        if ((char)*plVar17 == '\x01') {
          *(char *)plVar17 = in_wzr;
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar17,0);
        }
        lVar10 = *plVar15;
        *plVar15 = lVar10 + 1;
        uVar2 = uStack_1e0;
        plVar17 = plStack_1d0;
        plVar8 = plStack_1c8;
        if (lVar10 < 0) goto LAB_100fc10ec;
        plVar18 = (long *)plVar15[0x5e];
        uStack_1e0 = 0;
        plStack_1c8 = plVar15 + 0x5c;
      }
      else {
        lVar10 = *plVar15;
        *plVar15 = lVar10 + 1;
        uVar2 = uStack_1e0;
        plVar17 = plStack_1d0;
        plVar8 = plStack_1c8;
        if (lVar10 < 0) goto LAB_100fc10ec;
        plVar18 = (long *)plVar15[0x4a];
        uStack_1e0 = 1;
        plStack_1c8 = plVar15 + 0x48;
      }
      plStack_1d0 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        lVar10 = *plVar18;
        *plVar18 = lVar10 + 1;
        if (lVar10 < 0) goto LAB_100fc10ec;
        plStack_1d0 = (long *)plStack_1c8[2];
        plStack_1c8 = (long *)plStack_1c8[3];
        lVar10 = *plStack_1d0;
        *plStack_1d0 = lVar10 + 1;
        if (lVar10 < 0) goto LAB_100fc10ec;
      }
      plStack_200 = (long *)0xcc;
      pcStack_1f8 = (code *)0x0;
      puStack_1f0 = &UNK_10b240870;
      puStack_1e8 = (undefined8 *)0x0;
      lStack_1c0 = lVar5;
      uStack_1b8 = 0;
      lStack_1b0 = lStack_348;
      uStack_118 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_68 = 0;
      plStack_1d8 = plVar15;
      lStack_1a8 = lVar13;
      lStack_1a0 = lVar19;
      plStack_f8 = plStack_1d0;
      plStack_f0 = plStack_1c8;
      iVar12 = _posix_memalign(&lStack_68,0x80,0x180);
      lVar19 = lStack_68;
      if ((iVar12 == 0) && (lStack_68 != 0)) {
        _memcpy(lStack_68,&plStack_200,0x180);
        auVar20 = __ZN5tokio7runtime8blocking4pool7Spawner10spawn_task17h940099594ef92638E
                            ((long)plVar15 + lVar11,lVar19,1,auStack_210);
        if (((auVar20._0_8_ & 1) == 0) || (auVar20._8_8_ == 0)) {
          if (auStack_210 == (undefined1  [8])0x0) {
            lVar13 = *plStack_208;
            *plStack_208 = lVar13 + -1;
            LORelease();
            if (lVar13 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE(&plStack_208);
            }
          }
          else {
            lVar13 = *plStack_208;
            *plStack_208 = lVar13 + -1;
            LORelease();
            if (lVar13 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E(&plStack_208);
            }
          }
          param_2[7] = lVar19;
LAB_100fc0ef8:
          FUN_10151c128(&plStack_200,lVar19,*param_3);
          lVar11 = lStack_1a0;
          lVar5 = lStack_1a8;
          lVar13 = lStack_1b0;
          lVar19 = lStack_1c0;
          plVar18 = plStack_1c8;
          plVar15 = plStack_1d0;
          plVar8 = plStack_1d8;
          uVar2 = uStack_1e0;
          puVar7 = puStack_1e8;
          puVar6 = puStack_1f0;
          pcVar9 = pcStack_1f8;
          plVar17 = plStack_200;
          if (plStack_200 == (long *)0x3) {
            *(undefined1 *)(param_2 + 8) = 3;
            *param_1 = 2;
            uVar16 = 3;
          }
          else {
            uVar4 = CONCAT44(uStack_1b4,uStack_1b8);
            plVar14 = (long *)param_2[7];
            if (*plVar14 == 0xcc) {
              *plVar14 = 0x84;
            }
            else {
              (**(code **)(plVar14[2] + 0x20))();
            }
            if (plVar17 == (long *)0x2) {
              pcVar9 = (code *)__ZN3std2io5error5Error3new17h949302c01fe11b24E
                                         (0x28,&UNK_108cc98e6,0x16);
              if (puVar6 != (undefined *)0x0) {
                if ((code *)*puVar7 != (code *)0x0) {
                  (*(code *)*puVar7)(puVar6);
                }
                if (puVar7[1] != 0) {
                  _free(puVar6);
                }
              }
              plVar17 = (long *)0x1;
            }
            else {
              uStack_238 = uStack_188;
              uStack_240 = uStack_190;
              uStack_228 = uStack_178;
              uStack_230 = uStack_180;
              uStack_220 = uStack_170;
              plStack_278 = plVar18;
              plStack_280 = plVar15;
              lStack_270 = lVar19;
              lStack_258 = lVar5;
              lStack_260 = lVar13;
              uStack_248 = uStack_198;
              lStack_250 = lVar11;
              puStack_298 = puVar7;
              puStack_2a0 = puVar6;
              plStack_288 = plVar8;
              uStack_290 = uVar2;
              uStack_268 = uVar4;
            }
            *param_1 = plVar17;
            param_1[1] = pcVar9;
            param_1[0xf] = uStack_238;
            param_1[0xe] = uStack_240;
            param_1[0x11] = uStack_228;
            param_1[0x10] = uStack_230;
            param_1[0x12] = uStack_220;
            param_1[7] = plStack_278;
            param_1[6] = plStack_280;
            param_1[9] = uStack_268;
            param_1[8] = lStack_270;
            param_1[0xb] = lStack_258;
            param_1[10] = lStack_260;
            param_1[0xd] = uStack_248;
            param_1[0xc] = lStack_250;
            param_1[3] = puStack_298;
            param_1[2] = puStack_2a0;
            param_1[5] = plStack_288;
            param_1[4] = uStack_290;
            uVar16 = 1;
            *(undefined1 *)(param_2 + 8) = 1;
          }
          *(undefined1 *)(param_2 + 9) = uVar16;
          return;
        }
        plStack_200 = &lStack_68;
        pcStack_1f8 = 
        __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
        lStack_68 = auVar20._8_8_;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s_OS_can_t_spawn_worker_thread__108ad752a,&plStack_200,&UNK_10b23a3d0);
        uVar2 = uStack_1e0;
        plVar17 = plStack_1d0;
        plVar8 = plStack_1c8;
      }
      else {
        func_0x0001087c906c(0x80,0x180);
        uVar2 = uStack_1e0;
        plVar17 = plStack_1d0;
        plVar8 = plStack_1c8;
      }
      goto LAB_100fc10ec;
    }
    func_0x000108a07af4(&UNK_10b23a2e0);
LAB_100fc10c4:
    func_0x000108a07b10(&UNK_10b23a2e0);
  }
  else {
    if (bVar3 != 3) goto LAB_100fc10c4;
    bVar3 = *(byte *)(param_2 + 8);
    if (1 < bVar3) {
      if (bVar3 != 3) {
        func_0x000108a07b10(&UNK_10b23a3e8);
        uVar2 = uStack_1e0;
        plVar17 = plStack_1d0;
        plVar8 = plStack_1c8;
        goto LAB_100fc10ec;
      }
      lVar19 = param_2[7];
      goto LAB_100fc0ef8;
    }
    if (bVar3 == 0) {
      lStack_348 = param_2[4];
      lVar13 = param_2[5];
      lVar19 = param_2[6];
      goto LAB_100fc0d30;
    }
  }
  func_0x000108a07af4(&UNK_10b23a3e8);
  uVar2 = uStack_1e0;
  plVar17 = plStack_1d0;
  plVar8 = plStack_1c8;
LAB_100fc10ec:
  plStack_1c8 = plVar8;
  plStack_1d0 = plVar17;
  uStack_1e0 = uVar2;
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x100fc10f0);
  (*pcVar9)();
}

