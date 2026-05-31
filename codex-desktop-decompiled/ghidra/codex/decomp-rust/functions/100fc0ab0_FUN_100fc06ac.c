
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100fc06ac(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  undefined2 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  undefined1 uVar17;
  long *plVar18;
  long lVar19;
  char in_wzr;
  long lVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_190 [8];
  long *plStack_188;
  long **pplStack_180;
  code *pcStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
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
  
  bVar3 = *(byte *)((long)param_1 + 0x52);
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      uVar14 = *param_1;
      lVar19 = param_1[1];
      param_1[2] = uVar14;
      param_1[3] = lVar19;
      uVar4 = *(undefined2 *)(param_1 + 10);
      if (lVar19 == 0) {
        lVar13 = 1;
      }
      else {
        lVar13 = _malloc(lVar19);
        if (lVar13 == 0) {
          func_0x0001087c9084(1,lVar19);
          lVar11 = lStack_160;
          plVar15 = plStack_150;
          plVar8 = plStack_148;
          goto LAB_100fc0b00;
        }
      }
      _memcpy(lVar13,uVar14,lVar19);
      param_1[4] = lVar19;
      param_1[5] = lVar13;
      param_1[6] = lVar19;
      *(undefined2 *)(param_1 + 7) = uVar4;
      *(undefined1 *)(param_1 + 9) = 0;
LAB_100fc077c:
      lVar21 = param_1[7];
      lVar20 = param_1[6];
      _auStack_190 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b23a3d0)
      ;
      plVar16 = auStack_190._8_8_;
      do {
        lVar5 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
        lVar11 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
        bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
        ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar11;
      } while (bVar1);
      lVar2 = 0x220;
      if ((auStack_190 & 1) == 0) {
        lVar2 = 0x300;
      }
      if ((auStack_190 & 1) == 0) {
        plVar15 = plVar16 + 0x4c;
        if ((char)*plVar15 == '\0') {
          *(char *)plVar15 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (plVar15,plVar16,1000000000);
        }
        plVar16[0x51] = plVar16[0x51] + 1;
        if ((char)*plVar15 == '\x01') {
          *(char *)plVar15 = in_wzr;
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar15,0);
        }
        lVar10 = *plVar16;
        *plVar16 = lVar10 + 1;
        lVar11 = lStack_160;
        plVar15 = plStack_150;
        plVar8 = plStack_148;
        if (lVar10 < 0) goto LAB_100fc0b00;
        plVar18 = (long *)plVar16[0x5e];
        lStack_160 = 0;
        plStack_148 = plVar16 + 0x5c;
      }
      else {
        lVar10 = *plVar16;
        *plVar16 = lVar10 + 1;
        lVar11 = lStack_160;
        plVar15 = plStack_150;
        plVar8 = plStack_148;
        if (lVar10 < 0) goto LAB_100fc0b00;
        plVar18 = (long *)plVar16[0x4a];
        lStack_160 = 1;
        plStack_148 = plVar16 + 0x48;
      }
      plStack_150 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        lVar10 = *plVar18;
        *plVar18 = lVar10 + 1;
        if (lVar10 < 0) goto LAB_100fc0b00;
        plStack_150 = (long *)plStack_148[2];
        plStack_148 = (long *)plStack_148[3];
        lVar10 = *plStack_150;
        *plStack_150 = lVar10 + 1;
        if (lVar10 < 0) goto LAB_100fc0b00;
      }
      pplStack_180 = (long **)0xcc;
      pcStack_178 = (code *)0x0;
      puStack_170 = (undefined8 *)&UNK_10b242530;
      puStack_168 = (undefined8 *)0x0;
      lStack_140 = lVar5;
      uStack_138 = 0;
      lStack_110 = 0;
      lStack_108 = 0;
      lStack_100 = 0;
      plStack_68 = (long *)0x0;
      plStack_158 = plVar16;
      lStack_130 = lVar19;
      lStack_128 = lVar13;
      lStack_120 = lVar20;
      lStack_118 = lVar21;
      plStack_f0 = plStack_150;
      plStack_e8 = plStack_148;
      iVar12 = _posix_memalign(&plStack_68,0x80,0x100);
      plVar15 = plStack_68;
      if ((iVar12 == 0) && (plStack_68 != (long *)0x0)) {
        plStack_68[0x13] = (long)plStack_e8;
        plStack_68[0x12] = (long)plStack_f0;
        plStack_68[0x15] = lStack_d8;
        plStack_68[0x14] = lStack_e0;
        plStack_68[0x17] = lStack_c8;
        plStack_68[0x16] = lStack_d0;
        plStack_68[3] = (long)puStack_168;
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
        auVar22 = __ZN5tokio7runtime8blocking4pool7Spawner10spawn_task17h940099594ef92638E
                            ((long)plVar16 + lVar2,plStack_68,1,auStack_190);
        if (((auVar22._0_8_ & 1) == 0) || (auVar22._8_8_ == (long *)0x0)) {
          if (auStack_190 == (undefined1  [8])0x0) {
            lVar11 = *plStack_188;
            *plStack_188 = lVar11 + -1;
            LORelease();
            if (lVar11 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE(&plStack_188);
            }
          }
          else {
            lVar11 = *plStack_188;
            *plStack_188 = lVar11 + -1;
            LORelease();
            if (lVar11 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E(&plStack_188);
            }
          }
          param_1[8] = plVar15;
LAB_100fc0984:
          FUN_10151ba30(&pplStack_180,plVar15,*param_2);
          puVar7 = puStack_168;
          puVar6 = puStack_170;
          pcVar9 = pcStack_178;
          if (((ulong)pplStack_180 & 1) == 0) {
            plVar15 = (long *)param_1[8];
            if (*plVar15 == 0xcc) {
              *plVar15 = 0x84;
            }
            else {
              (**(code **)(plVar15[2] + 0x20))();
            }
            param_2 = puVar6;
            if (pcVar9 != (code *)0x0) {
              param_2 = (undefined8 *)
                        __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x28,&UNK_108cc98e6,0x16);
              if (puVar6 != (undefined8 *)0x0) {
                pcVar9 = (code *)*puVar7;
                if (pcVar9 != (code *)0x0) {
                  (*pcVar9)(puVar6);
                }
                if (puVar7[1] != 0) {
                  _free(puVar6);
                }
              }
            }
            uVar14 = 0;
            uVar17 = 1;
            *(undefined1 *)(param_1 + 9) = 1;
          }
          else {
            uVar17 = 3;
            *(undefined1 *)(param_1 + 9) = 3;
            uVar14 = 1;
          }
          *(undefined1 *)((long)param_1 + 0x52) = uVar17;
          auVar22._8_8_ = param_2;
          auVar22._0_8_ = uVar14;
          return auVar22;
        }
        pplStack_180 = &plStack_68;
        pcStack_178 = 
        __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
        plStack_68 = auVar22._8_8_;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s_OS_can_t_spawn_worker_thread__108ad752a,&pplStack_180,&UNK_10b23a3d0);
        lVar11 = lStack_160;
        plVar15 = plStack_150;
        plVar8 = plStack_148;
      }
      else {
        func_0x0001087c906c(0x80,0x100);
        lVar11 = lStack_160;
        plVar15 = plStack_150;
        plVar8 = plStack_148;
      }
      goto LAB_100fc0b00;
    }
    func_0x000108a07af4(&UNK_10b23a2c8);
LAB_100fc0ad8:
    func_0x000108a07b10(&UNK_10b23a2c8);
  }
  else {
    if (bVar3 != 3) goto LAB_100fc0ad8;
    bVar3 = *(byte *)(param_1 + 9);
    if (1 < bVar3) {
      if (bVar3 != 3) {
        func_0x000108a07b10(&UNK_10b23a3e8);
        lVar11 = lStack_160;
        plVar15 = plStack_150;
        plVar8 = plStack_148;
        goto LAB_100fc0b00;
      }
      plVar15 = (long *)param_1[8];
      goto LAB_100fc0984;
    }
    if (bVar3 == 0) {
      lVar19 = param_1[4];
      lVar13 = param_1[5];
      goto LAB_100fc077c;
    }
  }
  func_0x000108a07af4(&UNK_10b23a3e8);
  lVar11 = lStack_160;
  plVar15 = plStack_150;
  plVar8 = plStack_148;
LAB_100fc0b00:
  plStack_148 = plVar8;
  plStack_150 = plVar15;
  lStack_160 = lVar11;
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x100fc0b04);
  (*pcVar9)();
}

