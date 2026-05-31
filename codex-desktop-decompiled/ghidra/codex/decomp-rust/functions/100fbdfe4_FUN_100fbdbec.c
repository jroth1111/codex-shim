
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100fbdbec(long *param_1,undefined8 *param_2)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  undefined8 *puVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  undefined1 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined *unaff_x21;
  long lVar18;
  char in_wzr;
  undefined1 auVar19 [16];
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
  undefined *puStack_140;
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
  
  bVar3 = *(byte *)(param_1 + 7);
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      lVar15 = *param_1;
      param_1[1] = lVar15;
      uVar11 = *(undefined8 *)(lVar15 + 8);
      lVar17 = *(long *)(lVar15 + 0x10);
      if (lVar17 == 0) {
        lVar10 = 1;
      }
      else {
        lVar10 = _malloc(lVar17);
        if (lVar10 == 0) {
          func_0x0001087c9084(1,lVar17);
          lVar15 = lStack_160;
          plVar12 = plStack_150;
          plVar5 = plStack_148;
          goto LAB_100fbe034;
        }
      }
      _memcpy(lVar10,uVar11,lVar17);
      param_1[2] = lVar17;
      param_1[3] = lVar10;
      param_1[4] = lVar17;
      *(undefined1 *)(param_1 + 6) = 0;
      lVar18 = lVar17;
LAB_100fbdcc0:
      _auStack_190 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b23a3d0)
      ;
      plVar13 = auStack_190._8_8_;
      do {
        unaff_x21 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
        puVar8 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
        bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == (undefined *)0x0;
        ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = puVar8;
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
        lVar7 = *plVar13;
        *plVar13 = lVar7 + 1;
        lVar15 = lStack_160;
        plVar12 = plStack_150;
        plVar5 = plStack_148;
        if (lVar7 < 0) goto LAB_100fbe034;
        plVar16 = (long *)plVar13[0x5e];
        lStack_160 = 0;
        plStack_148 = plVar13 + 0x5c;
      }
      else {
        lVar7 = *plVar13;
        *plVar13 = lVar7 + 1;
        lVar15 = lStack_160;
        plVar12 = plStack_150;
        plVar5 = plStack_148;
        if (lVar7 < 0) goto LAB_100fbe034;
        plVar16 = (long *)plVar13[0x4a];
        lStack_160 = 1;
        plStack_148 = plVar13 + 0x48;
      }
      plStack_150 = (long *)0x0;
      if (plVar16 != (long *)0x0) {
        lVar7 = *plVar16;
        *plVar16 = lVar7 + 1;
        if (lVar7 < 0) goto LAB_100fbe034;
        plStack_150 = (long *)plStack_148[2];
        plStack_148 = (long *)plStack_148[3];
        lVar7 = *plStack_150;
        *plStack_150 = lVar7 + 1;
        if (lVar7 < 0) goto LAB_100fbe034;
      }
      pplStack_180 = (long **)0xcc;
      pcStack_178 = (code *)0x0;
      puStack_170 = &UNK_10b241900;
      puStack_168 = (undefined8 *)0x0;
      puStack_140 = unaff_x21;
      uStack_138 = 0;
      lStack_118 = 0;
      lStack_110 = 0;
      lStack_108 = 0;
      plStack_68 = (long *)0x0;
      plStack_158 = plVar13;
      lStack_130 = lVar17;
      lStack_128 = lVar10;
      lStack_120 = lVar18;
      plStack_f8 = plStack_150;
      plStack_f0 = plStack_148;
      iVar9 = _posix_memalign(&plStack_68,0x80,0x100);
      plVar12 = plStack_68;
      if ((iVar9 == 0) && (plStack_68 != (long *)0x0)) {
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
        plStack_68[8] = (long)puStack_140;
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
        if (((auVar19._0_8_ & 1) == 0) || (auVar19._8_8_ == (long *)0x0)) {
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
          param_1[5] = (long)plVar12;
LAB_100fbdeb8:
          FUN_10151ba30(&pplStack_180,plVar12,*param_2);
          puVar4 = puStack_168;
          puVar8 = puStack_170;
          pcVar6 = pcStack_178;
          if (((ulong)pplStack_180 & 1) == 0) {
            plVar12 = (long *)param_1[5];
            if (*plVar12 == 0xcc) {
              *plVar12 = 0x84;
            }
            else {
              (**(code **)(plVar12[2] + 0x20))();
            }
            unaff_x21 = puVar8;
            if (pcVar6 != (code *)0x0) {
              unaff_x21 = (undefined *)
                          __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x28,&UNK_108cc98e6,0x16);
              if (puVar8 != (undefined *)0x0) {
                pcVar6 = (code *)*puVar4;
                if (pcVar6 != (code *)0x0) {
                  (*pcVar6)(puVar8);
                }
                if (puVar4[1] != 0) {
                  _free(puVar8);
                }
              }
            }
            uVar11 = 0;
            uVar14 = 1;
            *(undefined1 *)(param_1 + 6) = 1;
          }
          else {
            uVar14 = 3;
            *(undefined1 *)(param_1 + 6) = 3;
            uVar11 = 1;
          }
          *(undefined1 *)(param_1 + 7) = uVar14;
          auVar19._8_8_ = unaff_x21;
          auVar19._0_8_ = uVar11;
          return auVar19;
        }
        pplStack_180 = &plStack_68;
        pcStack_178 = 
        __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
        plStack_68 = auVar19._8_8_;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s_OS_can_t_spawn_worker_thread__108ad752a,&pplStack_180,&UNK_10b23a3d0);
        lVar15 = lStack_160;
        plVar12 = plStack_150;
        plVar5 = plStack_148;
      }
      else {
        func_0x0001087c906c(0x80,0x100);
        lVar15 = lStack_160;
        plVar12 = plStack_150;
        plVar5 = plStack_148;
      }
      goto LAB_100fbe034;
    }
    func_0x000108a07af4(&UNK_10b23a220);
LAB_100fbe00c:
    func_0x000108a07b10(&UNK_10b23a220);
  }
  else {
    if (bVar3 != 3) goto LAB_100fbe00c;
    bVar3 = *(byte *)(param_1 + 6);
    if (1 < bVar3) {
      if (bVar3 != 3) {
        func_0x000108a07b10(&UNK_10b23a3e8);
        lVar15 = lStack_160;
        plVar12 = plStack_150;
        plVar5 = plStack_148;
        goto LAB_100fbe034;
      }
      plVar12 = (long *)param_1[5];
      goto LAB_100fbdeb8;
    }
    if (bVar3 == 0) {
      lVar17 = param_1[2];
      lVar10 = param_1[3];
      lVar18 = param_1[4];
      goto LAB_100fbdcc0;
    }
  }
  func_0x000108a07af4(&UNK_10b23a3e8);
  lVar15 = lStack_160;
  plVar12 = plStack_150;
  plVar5 = plStack_148;
LAB_100fbe034:
  plStack_148 = plVar5;
  plStack_150 = plVar12;
  lStack_160 = lVar15;
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100fbe038);
  (*pcVar6)();
}

