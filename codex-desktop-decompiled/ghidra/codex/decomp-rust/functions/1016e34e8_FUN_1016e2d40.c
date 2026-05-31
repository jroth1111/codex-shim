
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1016e2d40(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  byte bVar2;
  long ***ppplVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  long **pplVar7;
  long **pplVar8;
  long **pplVar9;
  long **pplVar10;
  long **pplVar11;
  long **pplVar12;
  long **pplVar13;
  long **pplVar14;
  long **pplVar15;
  long ***ppplVar16;
  long ***ppplVar17;
  code *pcVar18;
  long **pplVar19;
  long *plVar20;
  long lVar21;
  long ***ppplVar22;
  char cVar23;
  int iVar24;
  long ***ppplVar25;
  long ****pppplVar26;
  long ***ppplVar27;
  undefined2 uVar28;
  uint extraout_w8;
  uint uVar29;
  int *piVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  long ****unaff_x24;
  long ***ppplVar33;
  undefined1 *puVar34;
  char in_wzr;
  undefined1 auVar35 [16];
  undefined8 *puStack_258;
  long **pplStack_1c0;
  long **pplStack_1b8;
  long ***ppplStack_1b0;
  long ***ppplStack_1a8;
  long ***ppplStack_1a0;
  undefined1 auStack_190 [8];
  long *plStack_188;
  long ***ppplStack_180;
  long ***ppplStack_178;
  long ***ppplStack_170;
  long ***ppplStack_168;
  long **pplStack_160;
  long **pplStack_158;
  long **pplStack_150;
  long **pplStack_148;
  long **pplStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  long **pplStack_130;
  long **pplStack_128;
  long **pplStack_120;
  long **pplStack_118;
  long **pplStack_110;
  long **pplStack_108;
  long **pplStack_100;
  long **pplStack_f8;
  long **pplStack_f0;
  long **pplStack_e8;
  long **pplStack_e0;
  long **pplStack_d8;
  long **pplStack_d0;
  long **pplStack_c8;
  long **pplStack_c0;
  long **pplStack_b8;
  long **pplStack_b0;
  long **pplStack_a8;
  long **pplStack_a0;
  long **pplStack_98;
  long **pplStack_90;
  long **pplStack_88;
  long ***ppplStack_68;
  
  bVar2 = *(byte *)(param_1 + 0x28);
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      func_0x000108a07af4(&UNK_10b252508);
LAB_1016e3510:
      func_0x000108a07b10(&UNK_10b252508);
      uVar29 = extraout_w8;
LAB_1016e351c:
      if (uVar29 == 1) {
        func_0x000108a07af4(&UNK_10b252580);
        ppplVar22 = (long ***)pplStack_160;
        ppplVar16 = (long ***)pplStack_150;
        ppplVar17 = (long ***)pplStack_148;
      }
      else {
        func_0x000108a07b10(&UNK_10b252580);
        ppplVar22 = (long ***)pplStack_160;
        ppplVar16 = (long ***)pplStack_150;
        ppplVar17 = (long ***)pplStack_148;
      }
LAB_1016e3580:
      pplStack_148 = (long **)ppplVar17;
      pplStack_150 = (long **)ppplVar16;
      pplStack_160 = (long **)ppplVar22;
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x1016e3584);
      (*pcVar18)();
    }
    uVar32 = *param_1;
    param_1[4] = uVar32;
    ppplVar33 = (long ***)param_1[1];
    param_1[2] = uVar32;
    param_1[3] = ppplVar33;
    param_1[5] = ppplVar33;
    *(undefined1 *)((long)param_1 + 0x4c) = 0;
LAB_1016e2dc4:
    piVar30 = (int *)(param_1 + 8);
    piVar30[0] = 1;
    piVar30[1] = 0x1c0;
    param_1[6] = uVar32;
    param_1[7] = ppplVar33;
    *(undefined1 *)(param_1 + 9) = 0;
    param_1[10] = piVar30;
    param_1[0xb] = uVar32;
    param_1[0xc] = ppplVar33;
    *(undefined1 *)((long)param_1 + 0xac) = 0;
    param_1[0xd] = uVar32;
    param_1[0xe] = ppplVar33;
joined_r0x0001016e2e70:
    if (ppplVar33 == (long ***)0x0) {
      ppplVar25 = (long ***)0x1;
    }
    else {
      ppplVar25 = (long ***)_malloc(ppplVar33);
      if (ppplVar25 == (long ***)0x0) {
        func_0x0001087c9084(1,ppplVar33);
        ppplVar22 = (long ***)pplStack_160;
        ppplVar16 = (long ***)pplStack_150;
        ppplVar17 = (long ***)pplStack_148;
        goto LAB_1016e3580;
      }
    }
    _memcpy(ppplVar25,uVar32,ppplVar33);
    uVar28 = 0x1ff;
    *(undefined2 *)(param_1 + 0x15) = 0x1ff;
    *(undefined1 *)((long)param_1 + 0xaa) = 0;
    iVar24 = piVar30[2];
    *(char *)((long)param_1 + 0xaa) = (char)iVar24;
    if (*piVar30 == 1) {
      uVar28 = (undefined2)piVar30[1];
      *(undefined2 *)(param_1 + 0x15) = uVar28;
    }
    param_1[0xf] = ppplVar33;
    param_1[0x10] = ppplVar25;
    param_1[0x11] = ppplVar33;
    *(undefined2 *)(param_1 + 0x12) = uVar28;
    *(char *)((long)param_1 + 0x92) = (char)iVar24;
    *(undefined1 *)(param_1 + 0x14) = 0;
LAB_1016e2ed0:
    pplStack_1b8 = (long **)param_1[0x12];
    pplStack_1c0 = (long **)param_1[0x11];
    _auStack_190 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b23a3d0);
    ppplVar27 = auStack_190._8_8_;
    do {
      ppplVar3 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
      ppplVar22 = (long ***)
                  ((long)___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1);
      bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == (long ***)0x0;
      ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = ppplVar22;
    } while (bVar1);
    lVar21 = 0x220;
    if ((auStack_190 & 1) == 0) {
      lVar21 = 0x300;
    }
    if ((auStack_190 & 1) == 0) {
      ppplVar22 = ppplVar27 + 0x4c;
      if (*(char *)ppplVar22 == '\0') {
        *(char *)ppplVar22 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (ppplVar22,ppplVar27,1000000000);
      }
      ppplVar27[0x51] = (long **)((long)ppplVar27[0x51] + 1);
      if (*(char *)ppplVar22 == '\x01') {
        *(char *)ppplVar22 = in_wzr;
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(ppplVar22,0);
      }
      pplVar19 = *ppplVar27;
      *ppplVar27 = (long **)((long)pplVar19 + 1);
      ppplVar22 = (long ***)pplStack_160;
      ppplVar16 = (long ***)pplStack_150;
      ppplVar17 = (long ***)pplStack_148;
      if ((long)pplVar19 < 0) goto LAB_1016e3580;
      pplVar19 = ppplVar27[0x5e];
      pplStack_160 = (long **)(long ***)0x0;
      pplStack_148 = (long **)(ppplVar27 + 0x5c);
    }
    else {
      pplVar19 = *ppplVar27;
      *ppplVar27 = (long **)((long)pplVar19 + 1);
      ppplVar22 = (long ***)pplStack_160;
      ppplVar16 = (long ***)pplStack_150;
      ppplVar17 = (long ***)pplStack_148;
      if ((long)pplVar19 < 0) goto LAB_1016e3580;
      pplVar19 = ppplVar27[0x4a];
      pplStack_160 = (long **)(long ***)0x1;
      pplStack_148 = (long **)(ppplVar27 + 0x48);
    }
    pplStack_150 = (long **)0x0;
    if (pplVar19 != (long **)0x0) {
      plVar20 = *pplVar19;
      *pplVar19 = (long *)((long)plVar20 + 1);
      if ((long)plVar20 < 0) goto LAB_1016e3580;
      pplStack_150 = (long **)pplStack_148[2];
      pplStack_148 = (long **)pplStack_148[3];
      pplVar19 = (long **)*pplStack_150;
      *pplStack_150 = (long *)((long)pplVar19 + 1);
      if ((long)pplVar19 < 0) goto LAB_1016e3580;
    }
    ppplStack_180 = (long ***)0xcc;
    ppplStack_178 = (long ***)0x0;
    ppplStack_170 = (long ***)&UNK_10b241860;
    ppplStack_168 = (long ***)0x0;
    pplStack_140 = (long **)ppplVar3;
    uStack_138 = 0;
    pplStack_110 = (long **)0x0;
    pplStack_108 = (long **)0x0;
    pplStack_100 = (long **)0x0;
    ppplStack_68 = (long ***)0x0;
    pplStack_158 = (long **)ppplVar27;
    pplStack_130 = (long **)ppplVar33;
    pplStack_128 = (long **)ppplVar25;
    pplStack_120 = pplStack_1c0;
    pplStack_118 = pplStack_1b8;
    pplStack_f0 = pplStack_150;
    pplStack_e8 = pplStack_148;
    iVar24 = _posix_memalign(&ppplStack_68,0x80,0x100);
    unaff_x24 = (long ****)ppplStack_68;
    if ((iVar24 != 0) || ((long ****)ppplStack_68 == (long ****)0x0)) {
      func_0x0001087c906c(0x80,0x100);
      ppplVar22 = (long ***)pplStack_160;
      ppplVar16 = (long ***)pplStack_150;
      ppplVar17 = (long ***)pplStack_148;
      goto LAB_1016e3580;
    }
    ppplStack_68[0x13] = pplStack_e8;
    ppplStack_68[0x12] = pplStack_f0;
    ppplStack_68[0x15] = pplStack_d8;
    ppplStack_68[0x14] = pplStack_e0;
    ppplStack_68[0x17] = pplStack_c8;
    ppplStack_68[0x16] = pplStack_d0;
    ppplStack_68[3] = (long **)ppplStack_168;
    ppplStack_68[2] = (long **)ppplStack_170;
    ppplStack_68[5] = pplStack_158;
    ppplStack_68[4] = pplStack_160;
    ppplStack_68[7] = pplStack_148;
    ppplStack_68[6] = pplStack_150;
    ppplStack_68[1] = (long **)ppplStack_178;
    *ppplStack_68 = (long **)ppplStack_180;
    ppplStack_68[0xd] = pplStack_118;
    ppplStack_68[0xc] = pplStack_120;
    ppplStack_68[0xf] = pplStack_108;
    ppplStack_68[0xe] = pplStack_110;
    ppplStack_68[9] = (long **)CONCAT44(uStack_134,uStack_138);
    ppplStack_68[8] = pplStack_140;
    ppplStack_68[0xb] = pplStack_128;
    ppplStack_68[10] = pplStack_130;
    ppplStack_68[0x11] = pplStack_f8;
    ppplStack_68[0x10] = pplStack_100;
    ppplStack_68[0x1d] = pplStack_98;
    ppplStack_68[0x1c] = pplStack_a0;
    ppplStack_68[0x1f] = pplStack_88;
    ppplStack_68[0x1e] = pplStack_90;
    ppplStack_68[0x19] = pplStack_b8;
    ppplStack_68[0x18] = pplStack_c0;
    ppplStack_68[0x1b] = pplStack_a8;
    ppplStack_68[0x1a] = pplStack_b0;
    auVar35 = __ZN5tokio7runtime8blocking4pool7Spawner10spawn_task17h940099594ef92638E
                        ((long)ppplVar27 + lVar21,ppplStack_68,1,auStack_190);
    if (((auVar35._0_8_ & 1) != 0) && (auVar35._8_8_ != (long ****)0x0)) {
      ppplStack_180 = (long ***)&ppplStack_68;
      ppplStack_178 =
           (long ***)
           __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
      ;
      ppplStack_68 = (long ***)auVar35._8_8_;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s_OS_can_t_spawn_worker_thread__108ad752a,&ppplStack_180,&UNK_10b23a3d0);
      ppplVar22 = (long ***)pplStack_160;
      ppplVar16 = (long ***)pplStack_150;
      ppplVar17 = (long ***)pplStack_148;
      goto LAB_1016e3580;
    }
    if (auStack_190 == (undefined1  [8])0x0) {
      lVar21 = *plStack_188;
      *plStack_188 = lVar21 + -1;
      LORelease();
      if (lVar21 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE(&plStack_188);
      }
    }
    else {
      lVar21 = *plStack_188;
      *plStack_188 = lVar21 + -1;
      LORelease();
      if (lVar21 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E(&plStack_188);
      }
    }
    param_1[0x13] = unaff_x24;
LAB_1016e30ec:
    puStack_258 = param_1 + 0x14;
    puVar34 = (undefined1 *)((long)param_1 + 0xac);
    FUN_10151ba30(&ppplStack_180,unaff_x24,*param_2);
    if (((ulong)ppplStack_180 & 1) == 0) {
      ppplStack_1a8 = ppplStack_170;
      ppplStack_1b0 = ppplStack_178;
      ppplStack_1a0 = ppplStack_168;
      plVar20 = (long *)param_1[0x13];
      if (*plVar20 == 0xcc) {
        *plVar20 = 0x84;
      }
      else {
        (**(code **)(plVar20[2] + 0x20))();
      }
      if ((long ****)ppplStack_1b0 == (long ****)0x0) {
        *(undefined1 *)puStack_258 = 1;
        *puVar34 = 1;
        unaff_x24 = (long ****)ppplStack_1a8;
        pppplVar26 = (long ****)ppplStack_1a8;
        if ((long ****)ppplStack_1a8 != (long ****)0x0) goto LAB_1016e31d4;
      }
      else {
        pppplVar26 = (long ****)
                     __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x28,&UNK_108cc98e6,0x16);
        ppplVar22 = ppplStack_1a0;
        ppplVar33 = ppplStack_1a8;
        if ((long ****)ppplStack_1a8 != (long ****)0x0) {
          if ((long ***)*ppplStack_1a0 != (long ***)0x0) {
            (*(code *)*ppplStack_1a0)(ppplStack_1a8);
          }
          if ((long ***)ppplVar22[1] != (long ***)0x0) {
            _free(ppplVar33);
          }
        }
        *(undefined1 *)puStack_258 = 1;
        *puVar34 = 1;
LAB_1016e31d4:
        cVar23 = FUN_100c355d4(pppplVar26);
        unaff_x24 = pppplVar26;
        if (cVar23 == '\f') {
          if (((ulong)pppplVar26 & 3) == 1) {
            unaff_x24 = (long ****)((long)pppplVar26 + -1);
            ppplVar33 = *unaff_x24;
            puVar31 = *(undefined8 **)((long)pppplVar26 + 7);
            pcVar18 = (code *)*puVar31;
            if (pcVar18 != (code *)0x0) {
              (*pcVar18)(ppplVar33);
            }
            if (puVar31[1] != 0) {
              _free(ppplVar33);
            }
            _free(unaff_x24);
          }
          param_1[10] = param_1[6];
          param_1[0xb] = param_1[7];
          *(undefined1 *)(param_1 + 0x13) = 0;
LAB_1016e3230:
          FUN_100fc0c58(&ppplStack_180,param_1 + 10,param_2);
          pplVar15 = pplStack_f0;
          pplVar14 = pplStack_100;
          pplVar13 = pplStack_108;
          pplVar12 = pplStack_110;
          pplVar11 = pplStack_118;
          pplVar10 = pplStack_120;
          pplVar9 = pplStack_128;
          pplVar8 = pplStack_130;
          pplVar7 = pplStack_140;
          pplVar6 = pplStack_148;
          pplVar5 = pplStack_150;
          pplVar4 = pplStack_158;
          pplVar19 = pplStack_160;
          ppplVar17 = ppplStack_168;
          ppplVar16 = ppplStack_170;
          ppplVar22 = ppplStack_178;
          ppplVar33 = ppplStack_180;
          if ((long ****)ppplStack_180 == (long ****)0x2) {
            *(undefined1 *)((long)param_1 + 0x4c) = 4;
            goto LAB_1016e341c;
          }
          uVar32 = CONCAT44(uStack_134,uStack_138);
          if (*(char *)(param_1 + 0x13) == '\x03') {
            if (*(char *)(param_1 + 0x12) == '\x03') {
              plVar20 = (long *)param_1[0x11];
              if (*plVar20 == 0xcc) {
                *plVar20 = 0x84;
              }
              else {
                (**(code **)(plVar20[2] + 0x20))();
              }
            }
            else if ((*(char *)(param_1 + 0x12) == '\0') && (param_1[0xe] != 0)) {
              _free(param_1[0xf]);
            }
          }
          unaff_x24 = (long ****)ppplVar22;
          if (((ulong)ppplVar33 & 1) == 0) {
            param_1[0x1a] = pplVar4;
            param_1[0x19] = pplVar19;
            param_1[0x1c] = pplVar6;
            param_1[0x1b] = pplVar5;
            param_1[0x1e] = uVar32;
            param_1[0x1d] = pplVar7;
            param_1[0x20] = pplVar9;
            param_1[0x1f] = pplVar8;
            param_1[0x18] = ppplVar17;
            param_1[0x17] = ppplVar16;
            param_1[0x22] = pplVar11;
            param_1[0x21] = pplVar10;
            param_1[0x24] = pplVar13;
            param_1[0x23] = pplVar12;
            param_1[0x16] = ppplVar22;
            param_1[0x27] = pplVar15;
            uVar29 = (uint)((ulong)ppplVar22 >> 0x20);
            param_1[0x26] = pplStack_f8;
            param_1[0x25] = pplVar14;
            if ((uVar29 & 0xf000) == 0x4000) {
              *(short *)(param_1 + 10) = (short)((ulong)ppplVar22 >> 0x20);
              if ((uVar29 & 0x1ff) != 0x1c0) {
                param_1[0xb] = param_1[6];
                param_1[0xc] = param_1[7];
                *(undefined2 *)(param_1 + 0x15) = 0x1c0;
                *(undefined1 *)((long)param_1 + 0xaa) = 0;
                goto LAB_1016e2e28;
              }
              unaff_x24 = (long ****)0x0;
            }
            else {
              pplStack_1c0 = (long **)param_1[6];
              pplStack_1b8 = (long **)param_1[7];
              auStack_190 = (undefined1  [8])&pplStack_1c0;
              plStack_188 = (long *)&
                                    __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
              ;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (&ppplStack_180,s_5socket_directory_path_exists_an_108adbd71,auStack_190);
              ppplStack_1a8 = ppplStack_178;
              ppplStack_1b0 = ppplStack_180;
              ppplStack_1a0 = ppplStack_170;
              unaff_x24 = (long ****)
                          __ZN3std2io5error5Error3new17h002dced88496ea8bE(0xc,&ppplStack_1b0);
            }
          }
        }
      }
LAB_1016e340c:
      *(undefined1 *)((long)param_1 + 0x4c) = 1;
      uVar32 = 0;
      func_0x000100ca802c(param_1 + 4);
      *(undefined1 *)(param_1 + 0x28) = 1;
      goto LAB_1016e3428;
    }
    *(undefined1 *)puStack_258 = 3;
    *puVar34 = 3;
    *(undefined1 *)((long)param_1 + 0x4c) = 3;
  }
  else {
    if (bVar2 != 3) goto LAB_1016e3510;
    bVar2 = *(byte *)((long)param_1 + 0x4c);
    uVar29 = (uint)bVar2;
    if (bVar2 < 3) {
      if (bVar2 == 0) {
        uVar32 = param_1[4];
        ppplVar33 = (long ***)param_1[5];
        goto LAB_1016e2dc4;
      }
      goto LAB_1016e351c;
    }
    if (bVar2 == 3) {
      bVar2 = *(byte *)((long)param_1 + 0xac);
      if (bVar2 < 2) {
        if (bVar2 != 0) {
          func_0x000108a07af4(&UNK_10b23a208);
          ppplVar22 = (long ***)pplStack_160;
          ppplVar16 = (long ***)pplStack_150;
          ppplVar17 = (long ***)pplStack_148;
          goto LAB_1016e3580;
        }
        piVar30 = (int *)param_1[10];
        uVar32 = param_1[0xb];
        ppplVar33 = (long ***)param_1[0xc];
        param_1[0xd] = uVar32;
        param_1[0xe] = ppplVar33;
        goto joined_r0x0001016e2e70;
      }
      if (bVar2 != 3) {
        func_0x000108a07b10(&UNK_10b23a208);
        ppplVar22 = (long ***)pplStack_160;
        ppplVar16 = (long ***)pplStack_150;
        ppplVar17 = (long ***)pplStack_148;
        goto LAB_1016e3580;
      }
      bVar2 = *(byte *)(param_1 + 0x14);
      if (bVar2 < 2) {
        if (bVar2 != 0) {
          func_0x000108a07af4(&UNK_10b23a3e8);
          ppplVar22 = (long ***)pplStack_160;
          ppplVar16 = (long ***)pplStack_150;
          ppplVar17 = (long ***)pplStack_148;
          goto LAB_1016e3580;
        }
        ppplVar33 = (long ***)param_1[0xf];
        ppplVar25 = (long ***)param_1[0x10];
        goto LAB_1016e2ed0;
      }
      if (bVar2 != 3) {
        func_0x000108a07b10(&UNK_10b23a3e8);
        ppplVar22 = (long ***)pplStack_160;
        ppplVar16 = (long ***)pplStack_150;
        ppplVar17 = (long ***)pplStack_148;
        goto LAB_1016e3580;
      }
      unaff_x24 = (long ****)param_1[0x13];
      goto LAB_1016e30ec;
    }
    if (bVar2 == 4) goto LAB_1016e3230;
LAB_1016e2e28:
    auVar35 = FUN_100fc06ac(param_1 + 0xb,param_2);
    pppplVar26 = auVar35._8_8_;
    if ((auVar35._0_8_ & 1) == 0) {
      unaff_x24 = pppplVar26;
      if (*(char *)((long)param_1 + 0xaa) == '\x03') {
        if (*(char *)(param_1 + 0x14) == '\x03') {
          plVar20 = (long *)param_1[0x13];
          if (*plVar20 == 0xcc) {
            *plVar20 = 0x84;
          }
          else {
            (**(code **)(plVar20[2] + 0x20))();
          }
        }
        else if ((*(char *)(param_1 + 0x14) == '\0') && (param_1[0xf] != 0)) {
          _free(param_1[0x10]);
        }
      }
      goto LAB_1016e340c;
    }
    *(undefined1 *)((long)param_1 + 0x4c) = 5;
  }
LAB_1016e341c:
  *(undefined1 *)(param_1 + 0x28) = 3;
  uVar32 = 1;
LAB_1016e3428:
  auVar35._8_8_ = unaff_x24;
  auVar35._0_8_ = uVar32;
  return auVar35;
}

