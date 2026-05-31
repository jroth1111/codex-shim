
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100fc1398(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  long unaff_x22;
  long lVar17;
  undefined8 *puVar18;
  char in_wzr;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_250 [8];
  long *plStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined4 *puStack_200;
  code *pcStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
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
  long lStack_160;
  long *plStack_158;
  long *plStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
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
  long lStack_94;
  long *aplStack_88 [5];
  
  bVar3 = *(byte *)((long)param_1 + 0x79);
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      func_0x000108a07af4(&UNK_10b23a388);
      goto LAB_100fc18e0;
    }
    uVar10 = param_1[4];
    unaff_x22 = param_1[5];
    lVar17 = 1;
    *(undefined1 *)(param_1 + 0xf) = 1;
    uVar20 = param_1[1];
    uVar19 = *param_1;
    uVar22 = param_1[3];
    uVar21 = param_1[2];
    if ((unaff_x22 == 0) || (lVar17 = _malloc(unaff_x22), lVar17 != 0)) {
      _memcpy(lVar17,uVar10,unaff_x22);
      param_1[6] = unaff_x22;
      *(undefined1 *)(param_1 + 0xf) = 0;
      param_1[7] = lVar17;
      param_1[8] = unaff_x22;
      param_1[10] = uVar20;
      param_1[9] = uVar19;
      param_1[0xc] = uVar22;
      param_1[0xb] = uVar21;
      *(undefined1 *)(param_1 + 0xe) = 0;
      goto LAB_100fc1458;
    }
  }
  else {
    if (bVar3 == 3) {
      bVar3 = *(byte *)(param_1 + 0xe);
      if (1 < bVar3) {
        if (bVar3 != 3) {
          func_0x000108a07b10(&UNK_10b23a3e8);
          lVar17 = lStack_1e0;
          plVar14 = plStack_1d0;
          plVar6 = plStack_1c8;
          goto LAB_100fc1918;
        }
        plVar14 = (long *)param_1[0xd];
        goto LAB_100fc16bc;
      }
      if (bVar3 != 0) {
        func_0x000108a07af4(&UNK_10b23a3e8);
        lVar17 = lStack_1e0;
        plVar14 = plStack_1d0;
        plVar6 = plStack_1c8;
        goto LAB_100fc1918;
      }
LAB_100fc1458:
      uVar20 = param_1[7];
      uVar10 = param_1[6];
      uVar23 = param_1[9];
      uVar22 = param_1[8];
      uVar21 = param_1[0xb];
      uVar19 = param_1[10];
      lVar13 = param_1[0xc];
      _auStack_250 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b23a3d0)
      ;
      plVar12 = auStack_250._8_8_;
      do {
        lVar4 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
        lVar17 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
        bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
        ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar17;
      } while (bVar1);
      lVar2 = 0x220;
      if ((auStack_250 & 1) == 0) {
        lVar2 = 0x300;
      }
      uStack_240 = uVar10;
      uStack_238 = uVar20;
      uStack_230 = uVar22;
      uStack_228 = uVar23;
      uStack_220 = uVar19;
      uStack_218 = uVar21;
      lStack_210 = lVar13;
      if ((auStack_250 & 1) == 0) {
        plVar14 = plVar12 + 0x4c;
        if ((char)*plVar14 == '\0') {
          *(char *)plVar14 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (plVar14,plVar12,1000000000);
        }
        plVar12[0x51] = plVar12[0x51] + 1;
        if ((char)*plVar14 == '\x01') {
          *(char *)plVar14 = in_wzr;
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar14,0);
        }
        lVar8 = *plVar12;
        *plVar12 = lVar8 + 1;
        lVar17 = lStack_1e0;
        plVar14 = plStack_1d0;
        plVar6 = plStack_1c8;
        if (lVar8 < 0) goto LAB_100fc1918;
        plVar15 = (long *)plVar12[0x5e];
        lStack_1e0 = 0;
        plStack_1c8 = plVar12 + 0x5c;
        uStack_1b4 = uStack_c8;
      }
      else {
        lVar8 = *plVar12;
        *plVar12 = lVar8 + 1;
        lVar17 = lStack_1e0;
        plVar14 = plStack_1d0;
        plVar6 = plStack_1c8;
        if (lVar8 < 0) goto LAB_100fc1918;
        plVar15 = (long *)plVar12[0x4a];
        lStack_1e0 = 1;
        plStack_1c8 = plVar12 + 0x48;
        uStack_1b4 = uStack_c8;
      }
      plStack_1d0 = (long *)0x0;
      uStack_c8 = uStack_1b4;
      if (plVar15 != (long *)0x0) {
        lVar8 = *plVar15;
        *plVar15 = lVar8 + 1;
        if (lVar8 < 0) goto LAB_100fc1918;
        plStack_1d0 = (long *)plStack_1c8[2];
        plStack_1c8 = (long *)plStack_1c8[3];
        lVar8 = *plStack_1d0;
        *plStack_1d0 = lVar8 + 1;
        if (lVar8 < 0) goto LAB_100fc1918;
      }
      uStack_9c = (undefined4)uVar21;
      uStack_98 = (undefined4)((ulong)uVar21 >> 0x20);
      uStack_a4 = (undefined4)uVar19;
      uStack_a0 = (undefined4)((ulong)uVar19 >> 0x20);
      uStack_ac = (undefined4)uVar23;
      uStack_a8 = (undefined4)((ulong)uVar23 >> 0x20);
      uStack_b4 = (undefined4)uVar22;
      uStack_b0 = (undefined4)((ulong)uVar22 >> 0x20);
      uStack_bc = (undefined4)uVar20;
      uStack_b8 = (undefined4)((ulong)uVar20 >> 0x20);
      uStack_c4 = (undefined4)uVar10;
      uStack_c0 = (undefined4)((ulong)uVar10 >> 0x20);
      puStack_200 = (undefined4 *)0xcc;
      pcStack_1f8 = (code *)0x0;
      puStack_1f0 = (undefined8 *)&UNK_10b2419a0;
      puStack_1e8 = (undefined8 *)0x0;
      lStack_1c0 = lVar4;
      uStack_1b8 = 0;
      uStack_18c = uStack_a0;
      uStack_188 = uStack_9c;
      uStack_194 = uStack_a8;
      uStack_190 = uStack_a4;
      uStack_19c = uStack_b0;
      uStack_198 = uStack_ac;
      uStack_1a4 = uStack_b8;
      uStack_1a0 = uStack_b4;
      uStack_1ac = uStack_c0;
      uStack_1a8 = uStack_bc;
      uStack_1b0 = uStack_c4;
      lStack_178 = 0;
      lStack_170 = 0;
      lStack_168 = 0;
      aplStack_88[0] = (long *)0x0;
      plStack_1d8 = plVar12;
      uStack_184 = uStack_98;
      lStack_180 = lVar13;
      plStack_158 = plStack_1d0;
      plStack_150 = plStack_1c8;
      lStack_94 = lVar13;
      iVar9 = _posix_memalign(aplStack_88,0x80,0x100);
      plVar14 = aplStack_88[0];
      if ((iVar9 == 0) && (aplStack_88[0] != (long *)0x0)) {
        aplStack_88[0][0x13] = lStack_168;
        aplStack_88[0][0x12] = lStack_170;
        aplStack_88[0][0x15] = (long)plStack_158;
        aplStack_88[0][0x14] = lStack_160;
        aplStack_88[0][0x17] = lStack_148;
        aplStack_88[0][0x16] = (long)plStack_150;
        aplStack_88[0][3] = (long)puStack_1e8;
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
        auVar24 = __ZN5tokio7runtime8blocking4pool7Spawner10spawn_task17h940099594ef92638E
                            ((long)plVar12 + lVar2,aplStack_88[0],1,auStack_250);
        if (((auVar24._0_8_ & 1) == 0) || (auVar24._8_8_ == 0)) {
          if (auStack_250 == (undefined1  [8])0x0) {
            lVar17 = *plStack_248;
            *plStack_248 = lVar17 + -1;
            LORelease();
            if (lVar17 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE(&plStack_248);
            }
          }
          else {
            lVar17 = *plStack_248;
            *plStack_248 = lVar17 + -1;
            LORelease();
            if (lVar17 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E(&plStack_248);
            }
          }
          param_1[0xd] = plVar14;
LAB_100fc16bc:
          puVar18 = param_1 + 0xe;
          FUN_10151ba30(&puStack_200,plVar14,*param_2);
          puVar5 = puStack_1e8;
          puVar16 = puStack_1f0;
          pcVar7 = pcStack_1f8;
          if ((int)puStack_200 == 1) {
            *(undefined1 *)puVar18 = 3;
            *(undefined1 *)((long)param_1 + 0x79) = 3;
            uVar10 = 1;
            puVar16 = param_2;
          }
          else {
            plVar14 = (long *)param_1[0xd];
            if (*plVar14 == 0xcc) {
              *plVar14 = 0x84;
            }
            else {
              (**(code **)(plVar14[2] + 0x20))();
            }
            if (pcVar7 == (code *)0x0) {
              *(undefined1 *)puVar18 = 1;
            }
            else {
              puVar11 = (undefined8 *)
                        __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x28,&UNK_108cc98e6,0x16);
              if (puVar16 != (undefined8 *)0x0) {
                pcVar7 = (code *)*puVar5;
                if (pcVar7 != (code *)0x0) {
                  (*pcVar7)(puVar16);
                }
                if (puVar5[1] != 0) {
                  _free(puVar16);
                }
              }
              *(undefined1 *)puVar18 = 1;
              puVar16 = puVar11;
            }
            uVar10 = 0;
            if (*(char *)(param_1 + 0xe) == '\x03') {
              plVar14 = (long *)param_1[0xd];
              if (*plVar14 == 0xcc) {
                *plVar14 = 0x84;
              }
              else {
                (**(code **)(plVar14[2] + 0x20))(plVar14);
              }
            }
            else if (*(char *)(param_1 + 0xe) == '\0') {
              if (param_1[6] != 0) {
                _free(param_1[7]);
              }
              if (param_1[9] == 0) {
                if (param_1[10] != 0) {
                  _free(param_1[0xb]);
                }
              }
              else {
                (**(code **)(param_1[9] + 0x20))(param_1 + 0xc,param_1[10],param_1[0xb]);
              }
            }
            *(undefined1 *)(param_1 + 0xf) = 0;
            *(undefined1 *)((long)param_1 + 0x79) = 1;
          }
          auVar24._8_8_ = puVar16;
          auVar24._0_8_ = uVar10;
          return auVar24;
        }
        uStack_c8 = auVar24._8_4_;
        uStack_c4 = auVar24._12_4_;
        puStack_200 = &uStack_c8;
        pcStack_1f8 = 
        __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s_OS_can_t_spawn_worker_thread__108ad752a,&puStack_200,&UNK_10b23a3d0);
        lVar17 = lStack_1e0;
        plVar14 = plStack_1d0;
        plVar6 = plStack_1c8;
      }
      else {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x100);
        lVar17 = lStack_1e0;
        plVar14 = plStack_1d0;
        plVar6 = plStack_1c8;
      }
      goto LAB_100fc1918;
    }
LAB_100fc18e0:
    func_0x000108a07b10(&UNK_10b23a388);
  }
  func_0x0001087c9084(1,unaff_x22);
  lVar17 = lStack_1e0;
  plVar14 = plStack_1d0;
  plVar6 = plStack_1c8;
LAB_100fc1918:
  plStack_1c8 = plVar6;
  plStack_1d0 = plVar14;
  lStack_1e0 = lVar17;
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100fc191c);
  (*pcVar7)();
}

