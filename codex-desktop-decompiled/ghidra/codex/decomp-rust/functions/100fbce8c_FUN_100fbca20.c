
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fbca20(char *param_1,long *param_2,undefined8 *param_3)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined1 uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  char in_wzr;
  undefined1 auVar19 [16];
  long lStack_1b8;
  char cStack_1a8;
  undefined4 uStack_1a7;
  undefined4 uStack_198;
  undefined3 uStack_194;
  undefined1 auStack_190 [8];
  long *plStack_188;
  long **pplStack_180;
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
  long lStack_130;
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
  long *plStack_68;
  
  bVar3 = *(byte *)(param_2 + 7);
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      lVar15 = *param_2;
      param_2[1] = lVar15;
      uVar12 = *(undefined8 *)(lVar15 + 8);
      lVar18 = *(long *)(lVar15 + 0x10);
      if (lVar18 == 0) {
        lVar10 = 1;
      }
      else {
        lVar10 = _malloc(lVar18);
        if (lVar10 == 0) {
          func_0x0001087c9084(1,lVar18);
          lVar15 = lStack_160;
          plVar11 = plStack_150;
          plVar17 = plStack_148;
          goto LAB_100fbcedc;
        }
      }
      _memcpy(lVar10,uVar12,lVar18);
      param_2[2] = lVar18;
      param_2[3] = lVar10;
      param_2[4] = lVar18;
      *(undefined1 *)(param_2 + 6) = 0;
      lStack_1b8 = lVar18;
LAB_100fbcafc:
      _auStack_190 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b23a3d0)
      ;
      plVar13 = auStack_190._8_8_;
      do {
        lVar4 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
        lVar15 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
        bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
        ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar15;
      } while (bVar1);
      lVar2 = 0x220;
      if ((auStack_190 & 1) == 0) {
        lVar2 = 0x300;
      }
      if ((auStack_190 & 1) == 0) {
        plVar11 = plVar13 + 0x4c;
        if ((char)*plVar11 == '\0') {
          *(char *)plVar11 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (plVar11,plVar13,1000000000);
        }
        plVar13[0x51] = plVar13[0x51] + 1;
        if ((char)*plVar11 == '\x01') {
          *(char *)plVar11 = in_wzr;
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar11,0);
        }
        lVar8 = *plVar13;
        *plVar13 = lVar8 + 1;
        lVar15 = lStack_160;
        plVar11 = plStack_150;
        plVar17 = plStack_148;
        if (lVar8 < 0) goto LAB_100fbcedc;
        plVar16 = (long *)plVar13[0x5e];
        lStack_160 = 0;
        plStack_148 = plVar13 + 0x5c;
      }
      else {
        lVar8 = *plVar13;
        *plVar13 = lVar8 + 1;
        lVar15 = lStack_160;
        plVar11 = plStack_150;
        plVar17 = plStack_148;
        if (lVar8 < 0) goto LAB_100fbcedc;
        plVar16 = (long *)plVar13[0x4a];
        lStack_160 = 1;
        plStack_148 = plVar13 + 0x48;
      }
      plStack_150 = (long *)0x0;
      if (plVar16 != (long *)0x0) {
        lVar8 = *plVar16;
        *plVar16 = lVar8 + 1;
        if (lVar8 < 0) goto LAB_100fbcedc;
        plStack_150 = (long *)plStack_148[2];
        plStack_148 = (long *)plStack_148[3];
        lVar8 = *plStack_150;
        *plStack_150 = lVar8 + 1;
        if (lVar8 < 0) goto LAB_100fbcedc;
      }
      pplStack_180 = (long **)0xcc;
      pcStack_178 = (code *)0x0;
      puStack_170 = &UNK_10b242df0;
      puStack_168 = (undefined8 *)0x0;
      lStack_140 = lVar4;
      uStack_138 = 0;
      lStack_130 = lStack_1b8;
      lStack_118 = 0;
      lStack_110 = 0;
      lStack_108 = 0;
      plStack_68 = (long *)0x0;
      plStack_158 = plVar13;
      lStack_128 = lVar10;
      lStack_120 = lVar18;
      plStack_f8 = plStack_150;
      plStack_f0 = plStack_148;
      iVar9 = _posix_memalign(&plStack_68,0x80,0x100);
      plVar11 = plStack_68;
      if ((iVar9 != 0) || (plStack_68 == (long *)0x0)) {
        func_0x0001087c906c(0x80,0x100);
        lVar15 = lStack_160;
        plVar11 = plStack_150;
        plVar17 = plStack_148;
        goto LAB_100fbcedc;
      }
      plStack_68[0x13] = lStack_e8;
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
      auVar19 = __ZN5tokio7runtime8blocking4pool7Spawner10spawn_task17h940099594ef92638E
                          ((long)plVar13 + lVar2,plStack_68,1,auStack_190);
      if (((auVar19._0_8_ & 1) != 0) && (auVar19._8_8_ != (long *)0x0)) {
        pplStack_180 = &plStack_68;
        pcStack_178 = 
        __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
        plStack_68 = auVar19._8_8_;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s_OS_can_t_spawn_worker_thread__108ad752a,&pplStack_180,&UNK_10b23a3d0);
        lVar15 = lStack_160;
        plVar11 = plStack_150;
        plVar17 = plStack_148;
        goto LAB_100fbcedc;
      }
      if (auStack_190 == (undefined1  [8])0x0) {
        lVar15 = *plStack_188;
        *plStack_188 = lVar15 + -1;
        LORelease();
        if (lVar15 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE(&plStack_188);
        }
      }
      else {
        lVar15 = *plStack_188;
        *plStack_188 = lVar15 + -1;
        LORelease();
        if (lVar15 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E(&plStack_188);
        }
      }
      param_2[5] = (long)plVar11;
LAB_100fbcd08:
      plVar17 = param_2 + 6;
      FUN_10151c614(&pplStack_180,plVar11,*param_3);
      puVar6 = puStack_168;
      puVar5 = puStack_170;
      pcVar7 = pcStack_178;
      if ((int)pplStack_180 == 1) {
        *(undefined1 *)plVar17 = 3;
      }
      else {
        plVar11 = (long *)param_2[5];
        if (*plVar11 == 0xcc) {
          *plVar11 = 0x84;
        }
        else {
          (**(code **)(plVar11[2] + 0x20))();
        }
        if (pcVar7 != (code *)0x0) {
          uVar12 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x28,&UNK_108cc98e6,0x16);
          if (puVar5 != (undefined *)0x0) {
            if ((code *)*puVar6 != (code *)0x0) {
              (*(code *)*puVar6)(puVar5);
            }
            if (puVar6[1] != 0) {
              _free(puVar5);
            }
          }
          uVar14 = 1;
          *param_1 = '\x01';
          *(undefined4 *)(param_1 + 1) = uStack_198;
          *(uint *)(param_1 + 4) = CONCAT31(uStack_194,uStack_198._3_1_);
          *(undefined8 *)(param_1 + 8) = uVar12;
          *(undefined1 *)plVar17 = 1;
          goto LAB_100fbce20;
        }
        cStack_1a8 = (char)puVar5;
        uStack_1a7 = (undefined4)((ulong)puVar5 >> 8);
        *param_1 = cStack_1a8;
        *(undefined4 *)(param_1 + 1) = uStack_1a7;
        *(int *)(param_1 + 4) = (int)((ulong)puVar5 >> 0x20);
        *(undefined8 **)(param_1 + 8) = puVar6;
        uVar14 = 1;
        *(undefined1 *)plVar17 = 1;
        if (cStack_1a8 != '\x02') goto LAB_100fbce20;
      }
      *param_1 = '\x02';
      uVar14 = 3;
LAB_100fbce20:
      *(undefined1 *)(param_2 + 7) = uVar14;
      return;
    }
    func_0x000108a07af4(&UNK_10b23a1f0);
LAB_100fbceb4:
    func_0x000108a07b10(&UNK_10b23a1f0);
  }
  else {
    if (bVar3 != 3) goto LAB_100fbceb4;
    bVar3 = *(byte *)(param_2 + 6);
    if (1 < bVar3) {
      if (bVar3 != 3) {
        func_0x000108a07b10(&UNK_10b23a3e8);
        lVar15 = lStack_160;
        plVar11 = plStack_150;
        plVar17 = plStack_148;
        goto LAB_100fbcedc;
      }
      plVar11 = (long *)param_2[5];
      goto LAB_100fbcd08;
    }
    if (bVar3 == 0) {
      lStack_1b8 = param_2[2];
      lVar10 = param_2[3];
      lVar18 = param_2[4];
      goto LAB_100fbcafc;
    }
  }
  func_0x000108a07af4(&UNK_10b23a3e8);
  lVar15 = lStack_160;
  plVar11 = plStack_150;
  plVar17 = plStack_148;
LAB_100fbcedc:
  plStack_148 = plVar17;
  plStack_150 = plVar11;
  lStack_160 = lVar15;
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100fbcee0);
  (*pcVar7)();
}

