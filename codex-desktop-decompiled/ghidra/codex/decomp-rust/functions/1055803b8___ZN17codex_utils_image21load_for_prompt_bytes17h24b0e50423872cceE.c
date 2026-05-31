
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN17codex_utils_image21load_for_prompt_bytes17h24b0e50423872cceE
               (undefined8 *param_1,undefined8 param_2,long param_3,long *param_4,char param_5)

{
  bool bVar1;
  uint uVar2;
  undefined2 uVar3;
  code *pcVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong *puVar10;
  char *pcVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  char cVar19;
  ulong uVar20;
  uint *puVar21;
  ulong uVar22;
  code *extraout_x9;
  byte bVar23;
  ulong uVar24;
  char *pcVar25;
  long *plVar26;
  uint *puVar27;
  long lVar28;
  byte bVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  char cStack_285;
  undefined7 uStack_284;
  undefined1 uStack_27d;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  int iStack_274;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  char cStack_240;
  undefined1 auStack_230 [8];
  long *plStack_228;
  code *pcStack_220;
  code *pcStack_218;
  long *plStack_210;
  code *pcStack_208;
  code *pcStack_200;
  long *plStack_1f0;
  undefined5 uStack_1e8;
  undefined3 uStack_1e3;
  undefined5 uStack_1e0;
  code *pcStack_1d0;
  long *plStack_1c8;
  code *pcStack_1c0;
  code *pcStack_1b8;
  long *plStack_1b0;
  code *pcStack_1a8;
  code *pcStack_1a0;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  long *plStack_170;
  code *pcStack_168;
  code *pcStack_160;
  long *plStack_158;
  code *pcStack_150;
  code *pcStack_148;
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
  code *pcStack_f8;
  code *pcStack_f0;
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
  
  if (param_3 == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = _malloc(param_3);
    if (lVar9 == 0) {
      func_0x0001087c9084(1,param_3);
      goto LAB_105580ad4;
    }
  }
  _memcpy(lVar9,param_2,param_3);
  func_0x000105563f34(&uStack_180,param_4[1],param_4[2]);
  uStack_27c = SUB84(pcStack_178,0);
  uStack_278 = (undefined4)((ulong)pcStack_178 >> 0x20);
  uStack_284 = SUB87(uStack_180,0);
  uStack_27d = (undefined1)((ulong)uStack_180 >> 0x38);
  iStack_274 = (int)plStack_170;
  cStack_285 = param_5;
  if (lRam000000010b631c60 != 0) {
    pcStack_1d0 = (code *)0x10b631c60;
    uStack_180 = &pcStack_1d0;
    __ZN3std3sys4sync4once5queue4Once4call17h3e41a5ec638e0eddE
              (0x10b631c60,1,&uStack_180,&UNK_10b38fd10,&UNK_10b38fd38);
  }
  lStack_268 = param_4[1];
  lStack_270 = *param_4;
  lStack_260 = param_4[2];
  lStack_258 = param_3;
  lStack_250 = lVar9;
  lStack_248 = param_3;
  cStack_240 = param_5;
  puVar10 = (ulong *)(*
                     ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                     )();
  if ((char)puVar10[9] != '\x01') {
    if ((char)puVar10[9] == '\x02') goto LAB_1055804dc;
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
              (puVar10,&DAT_1060edbcc);
    *(undefined1 *)(puVar10 + 9) = 1;
  }
  auVar31._8_8_ = plStack_228;
  auVar31._0_8_ = auStack_230;
  uVar22 = *puVar10;
  if (0x7ffffffffffffffe < uVar22) {
    func_0x000108a07858(&UNK_10b4ce0a8);
    goto LAB_105580ad4;
  }
  *puVar10 = uVar22 + 1;
  uVar20 = puVar10[1];
  if (uVar20 == 2) {
    *puVar10 = uVar22;
LAB_1055804dc:
    func_0x000105580fd8(param_1,&lStack_270);
    return;
  }
  pcVar5 = (code *)puVar10[2];
  lVar6 = *(long *)pcVar5;
  *(long *)pcVar5 = lVar6 + 1;
  if ((uVar20 & 1) == 0) {
    if (lVar6 < 0) goto LAB_105580ad4;
    uStack_180 = (code **)0x0;
  }
  else {
    _auStack_230 = auVar31;
    if (lVar6 < 0) goto LAB_105580ad4;
    uStack_180 = (code **)0x1;
  }
  *puVar10 = *puVar10 - 1;
  lVar6 = *(long *)pcVar5;
  *(long *)pcVar5 = lVar6 + -1;
  LORelease();
  pcStack_178 = pcVar5;
  if ((uVar20 & 1) == 0) {
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE(&pcStack_178);
    }
  }
  else if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E(&pcStack_178);
  }
  if ((char)puVar10[9] != '\x01') {
    if ((char)puVar10[9] == '\x02') {
      func_0x000108a82a50(&UNK_10b4cce20);
      goto LAB_105580ad4;
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
              (puVar10,&LAB_105581e70);
    *(undefined1 *)(puVar10 + 9) = 1;
  }
  if (*(byte *)((long)puVar10 + 0x46) != 2) {
    puVar27 = (uint *)puVar10[5];
    if ((puVar27 == (uint *)0x0) || ((*puVar27 & 1) == 0)) {
      if ((*(byte *)((long)puVar10 + 0x46) & 1) == 0) {
        pcStack_1d0 = (code *)&UNK_108f55d56;
        plStack_1c8 = (long *)0x41;
        uStack_180 = &pcStack_1d0;
        pcStack_178 = (code *)&DAT_10558235c;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&uStack_180,&UNK_10b38fc08);
        goto LAB_105580ad4;
      }
LAB_1055807e8:
      bVar29 = 0;
      cVar19 = (char)puVar10[9];
      bVar23 = bVar29;
      if (cVar19 != '\x02') goto LAB_105580c18;
LAB_1055807f4:
      uStack_180._0_2_ = (ushort)bVar29;
      puVar17 = &UNK_10b38fd68;
LAB_105580c6c:
      func_0x000108a82a50(puVar17);
      goto LAB_105580ad4;
    }
    puVar21 = puVar27 + 4;
    if (*(long *)puVar21 != 0) {
      __ZN4core4cell22panic_already_borrowed17he8deaa52232869b2E(&UNK_10b38ff78);
      goto LAB_105580ad4;
    }
    plVar26 = *(long **)(puVar27 + 6);
    puVar21[0] = 0;
    puVar21[1] = 0;
    puVar27[6] = 0;
    puVar27[7] = 0;
    if (plVar26 == (long *)0x0) goto LAB_1055807e8;
    lVar6 = *plVar26;
    *plVar26 = 0;
    if (lVar6 != 0) {
      lVar28 = *(long *)(*(long *)(puVar27 + 2) + 0x10);
      do {
        lVar14 = plVar26[3];
        uVar2 = *(uint *)(lVar14 + 0x20);
        iVar8 = (int)((ulong)*(undefined8 *)(plVar26[3] + 0x18) >> 0x20);
        if (uVar2 - iVar8 < 0x100) {
          *(long *)(*(long *)(lVar14 + 0x10) + ((ulong)uVar2 & 0xff) * 8) = lVar6;
          *(uint *)(lVar14 + 0x20) = uVar2 + 1;
          break;
        }
        if (iVar8 != (int)*(undefined8 *)(plVar26[3] + 0x18)) {
          func_0x00010610feb0(lVar28 + 0x10);
          break;
        }
        lVar6 = __ZN5tokio7runtime9scheduler12multi_thread5queue14Local_LT_T_GT_13push_overflow17hcdcaed8bad11fb4eE
                          (plVar26 + 3);
      } while (lVar6 != 0);
    }
    if (plVar26[1] == 0) {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108f55d97,0x25,&UNK_10b38ff90);
      goto LAB_105580ad4;
    }
    LOAcquire();
    lVar6 = *(long *)(*(long *)(puVar27 + 2) + 0x20);
    *(long *)(*(long *)(puVar27 + 2) + 0x20) = (long)plVar26;
    LORelease();
    if (lVar6 != 0) {
      func_0x000105583990();
    }
    lVar6 = **(long **)(puVar27 + 2);
    **(long **)(puVar27 + 2) = lVar6 + 1;
    if (lVar6 < 0) goto LAB_105580ad4;
    lVar28 = *(long *)(puVar27 + 2);
    lStack_190 = lVar28;
    _auStack_230 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b38ffa8);
    lVar6 = auStack_230._8_8_;
    do {
      lVar14 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
      lVar7 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
      bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
      ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar7;
    } while (bVar1);
    lVar7 = 0x220;
    if ((auStack_230 & 1) == 0) {
      lVar7 = 0x300;
    }
    lStack_188 = lVar28;
    __ZN5tokio7runtime8blocking8schedule16BlockingSchedule3new17ha926bb45c064fba9E
              (&pcStack_1d0,auStack_230);
    pcStack_f0 = extraout_x9;
    if ((pcStack_1c0 != (code *)0x0) &&
       (lVar15 = *(long *)pcStack_1c0, *(long *)pcStack_1c0 = lVar15 + 1, pcStack_f0 = pcStack_1b8,
       lVar15 < 0)) goto LAB_105580ad4;
    plStack_158 = plStack_1c8;
    pcStack_160 = pcStack_1d0;
    pcStack_148 = pcStack_1b8;
    pcStack_150 = pcStack_1c0;
    uStack_180 = (code **)0xcc;
    pcStack_178 = (code *)0x0;
    plStack_170 = (long *)&UNK_10b38fec8;
    pcStack_168 = (code *)0x0;
    lStack_140 = lVar14;
    uStack_138 = 0;
    lStack_110 = 0;
    lStack_108 = 0;
    lStack_118 = 0;
    pcStack_f8 = pcStack_1c0;
    plStack_1f0 = (long *)0x0;
    lStack_130 = lVar28;
    iVar8 = _posix_memalign(&plStack_1f0,0x80,0x100);
    plVar26 = plStack_1f0;
    if ((iVar8 != 0) || (plStack_1f0 == (long *)0x0)) {
      func_0x0001087c906c(0x80,0x100);
      goto LAB_105580ad4;
    }
    plStack_1f0[0x13] = lStack_e8;
    plStack_1f0[0x12] = (long)pcStack_f0;
    plStack_1f0[0x15] = lStack_d8;
    plStack_1f0[0x14] = lStack_e0;
    plStack_1f0[0x17] = lStack_c8;
    plStack_1f0[0x16] = lStack_d0;
    plStack_1f0[3] = (long)pcStack_168;
    plStack_1f0[2] = (long)plStack_170;
    plStack_1f0[5] = (long)plStack_158;
    plStack_1f0[4] = (long)pcStack_160;
    plStack_1f0[7] = (long)pcStack_148;
    plStack_1f0[6] = (long)pcStack_150;
    plStack_1f0[1] = (long)pcStack_178;
    *plStack_1f0 = (long)uStack_180;
    plStack_1f0[0xd] = lStack_118;
    plStack_1f0[0xc] = lStack_120;
    plStack_1f0[0xf] = lStack_108;
    plStack_1f0[0xe] = lStack_110;
    plStack_1f0[9] = CONCAT44(uStack_134,uStack_138);
    plStack_1f0[8] = lStack_140;
    plStack_1f0[0xb] = lStack_128;
    plStack_1f0[10] = lStack_130;
    plStack_1f0[0x11] = (long)pcStack_f8;
    plStack_1f0[0x10] = lStack_100;
    plStack_1f0[0x1d] = lStack_98;
    plStack_1f0[0x1c] = lStack_a0;
    plStack_1f0[0x1f] = lStack_88;
    plStack_1f0[0x1e] = lStack_90;
    plStack_1f0[0x19] = lStack_b8;
    plStack_1f0[0x18] = lStack_c0;
    plStack_1f0[0x1b] = lStack_a8;
    plStack_1f0[0x1a] = lStack_b0;
    auVar31 = __ZN5tokio7runtime8blocking4pool7Spawner10spawn_task17h940099594ef92638E
                        (lVar6 + lVar7,plStack_1f0,1,auStack_230);
    if (((auVar31._0_8_ & 1) != 0) && (auVar31._8_8_ != (code *)0x0)) {
      uStack_180 = &pcStack_1d0;
      pcStack_178 = 
      __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
      pcStack_1d0 = auVar31._8_8_;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s_OS_can_t_spawn_worker_thread__108ad752a,&uStack_180,&UNK_10b38ffa8);
      goto LAB_105580ad4;
    }
    if (auStack_230 == (undefined1  [8])0x0) {
      lVar6 = *plStack_228;
      *plStack_228 = lVar6 + -1;
      LORelease();
      if (lVar6 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE(&plStack_228);
      }
    }
    else {
      lVar6 = *plStack_228;
      *plStack_228 = lVar6 + -1;
      LORelease();
      if (lVar6 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E(&plStack_228);
      }
    }
    if (*plVar26 == 0xcc) {
      *plVar26 = 0x84;
    }
    else {
      (**(code **)(plVar26[2] + 0x20))(plVar26);
    }
    bVar29 = 1;
    cVar19 = (char)puVar10[9];
    bVar23 = 1;
    if (cVar19 == '\x02') goto LAB_1055807f4;
LAB_105580c18:
    if (cVar19 != '\x01') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar10,&DAT_1060edbcc);
      *(undefined1 *)(puVar10 + 9) = 1;
    }
    uVar3 = *(undefined2 *)((long)puVar10 + 0x44);
    *(undefined1 *)((long)puVar10 + 0x44) = 0;
    uStack_180._0_3_ = CONCAT21(uVar3,bVar23);
    cVar19 = *(char *)((long)puVar10 + 0x46);
    if (cVar19 == '\x02') {
      puVar17 = &UNK_10b38ff48;
      uVar30 = 0x3d;
      puVar18 = &UNK_108f55d38;
    }
    else {
      *(undefined1 *)((long)puVar10 + 0x46) = 2;
      pcStack_1d0 = (code *)CONCAT71(pcStack_1d0._1_7_,cVar19);
      pcVar11 = (char *)func_0x000105579bac();
      if ((char)puVar10[9] != '\x01') {
        if ((char)puVar10[9] == '\x02') {
          puVar17 = &UNK_10b4cce20;
          goto LAB_105580c6c;
        }
        __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                  (puVar10,&DAT_1060edbcc);
        *(undefined1 *)(puVar10 + 9) = 1;
      }
      if (*(char *)((long)puVar10 + 0x46) == '\x02') {
        *(char *)((long)puVar10 + 0x46) = cVar19;
        func_0x0001060ed474(&uStack_180);
        goto LAB_105580600;
      }
      puVar17 = &UNK_10b4cea80;
      uVar30 = 0x45;
      puVar18 = &UNK_109bec323;
    }
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(puVar18,uVar30,puVar17);
LAB_105580ad4:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x105580ad8);
    (*pcVar5)();
  }
  pcVar11 = (char *)func_0x000105579bac();
LAB_105580600:
  if (*(long *)(pcVar11 + 0x40) == 0) {
LAB_10558075c:
    func_0x000105580fd8(&uStack_180,&lStack_270);
    pcVar5 = pcStack_168;
    plVar26 = plStack_170;
    plStack_1c8 = plStack_170;
    pcStack_1d0 = pcStack_178;
    pcStack_1b8 = pcStack_160;
    pcStack_1c0 = pcStack_168;
    pcStack_1a8 = pcStack_150;
    plStack_1b0 = plStack_158;
    pcStack_1a0 = pcStack_148;
    if (uStack_180 == (code **)0x8000000000000004) {
      plStack_228 = plStack_170;
      auStack_230 = (undefined1  [8])pcStack_178;
      pcStack_218 = pcStack_160;
      pcStack_220 = pcStack_168;
      pcStack_208 = pcStack_150;
      plStack_210 = plStack_158;
      pcStack_200 = pcStack_148;
      uStack_1e8 = CONCAT41(uStack_27c,uStack_27d);
      plStack_1f0 = (long *)CONCAT71(uStack_284,cStack_285);
      uStack_1e3 = (undefined3)uStack_278;
      uStack_1e0 = (undefined5)(CONCAT44(iStack_274,uStack_278) >> 0x18);
      if (pcStack_168 == (code *)0x0) {
        plVar13 = (long *)0x1;
      }
      else {
        plVar13 = (long *)_malloc(pcStack_168);
        if (plVar13 == (long *)0x0) {
          func_0x0001087c9084(1,pcVar5);
          goto LAB_105580ad4;
        }
      }
      _memcpy(plVar13,plVar26,pcVar5);
      pcVar4 = pcStack_208;
      plVar26 = plStack_210;
      if (pcStack_208 == (code *)0x0) {
        plVar16 = (long *)0x1;
      }
      else {
        plVar16 = (long *)_malloc(pcStack_208);
        if (plVar16 == (long *)0x0) {
          func_0x0001087c9084(1,pcVar4);
          goto LAB_105580ad4;
        }
      }
      _memcpy(plVar16,plVar26,pcVar4);
      pcStack_1d0 = pcVar5;
      pcStack_1c0 = pcVar5;
      pcStack_1b8 = pcVar4;
      pcStack_1a8 = pcVar4;
      pcStack_1a0 = pcStack_200;
      plStack_1c8 = plVar13;
      plStack_1b0 = plVar16;
      func_0x000108a03cd8(&uStack_180,pcVar11 + 0x28,&plStack_1f0,&pcStack_1d0);
      pcVar4 = pcStack_148;
      pcVar5 = pcStack_150;
      uVar30 = extraout_x1_01;
      if (pcStack_168 != (code *)0x8000000000000000) {
        if (pcStack_168 != (code *)0x0) {
          _free(pcStack_160);
          uVar30 = extraout_x1_02;
        }
        if (pcVar5 != (code *)0x0) {
          _free(pcVar4);
          uVar30 = extraout_x1_03;
        }
      }
      param_1[2] = plStack_228;
      param_1[1] = auStack_230;
      param_1[4] = pcStack_218;
      param_1[3] = pcStack_220;
      param_1[6] = pcStack_208;
      param_1[5] = plStack_210;
      param_1[7] = pcStack_200;
      *param_1 = 0x8000000000000004;
    }
    else {
      param_1[9] = CONCAT44(uStack_134,uStack_138);
      param_1[8] = lStack_140;
      param_1[10] = lStack_130;
      param_1[2] = plStack_170;
      param_1[1] = pcStack_178;
      param_1[4] = pcStack_160;
      param_1[3] = pcStack_168;
      param_1[6] = pcStack_150;
      param_1[5] = plStack_158;
      param_1[7] = pcStack_148;
      *param_1 = uStack_180;
      uVar30 = extraout_x1;
    }
    if (*pcVar11 == '\0') {
      *pcVar11 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar11,uVar30,1000000000);
    }
    FUN_1060fa678(pcVar11,1,pcVar11);
    return;
  }
  uVar12 = func_0x000108a04618(*(undefined8 *)(pcVar11 + 0x48),&cStack_285);
  lVar6 = 0;
  lVar28 = *(long *)(pcVar11 + 0x28);
  uVar20 = *(ulong *)(pcVar11 + 0x30);
  bVar23 = (byte)(uVar12 >> 0x39);
  uVar12 = uVar12 & uVar20;
  uVar30 = *(undefined8 *)(lVar28 + uVar12);
  uVar22 = CONCAT17(-((byte)((ulong)uVar30 >> 0x38) == bVar23),
                    CONCAT16(-((byte)((ulong)uVar30 >> 0x30) == bVar23),
                             CONCAT15(-((byte)((ulong)uVar30 >> 0x28) == bVar23),
                                      CONCAT14(-((byte)((ulong)uVar30 >> 0x20) == bVar23),
                                               CONCAT13(-((byte)((ulong)uVar30 >> 0x18) == bVar23),
                                                        CONCAT12(-((byte)((ulong)uVar30 >> 0x10) ==
                                                                  bVar23),CONCAT11(-((byte)((ulong)
                                                  uVar30 >> 8) == bVar23),-((byte)uVar30 == bVar23))
                                                  )))))) & 0x8080808080808080;
  while( true ) {
    while (uVar22 == 0) {
      bVar29 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar30 >> 0x38) == -1),
                                   CONCAT16(-((char)((ulong)uVar30 >> 0x30) == -1),
                                            CONCAT15(-((char)((ulong)uVar30 >> 0x28) == -1),
                                                     CONCAT14(-((char)((ulong)uVar30 >> 0x20) == -1)
                                                              ,CONCAT13(-((char)((ulong)uVar30 >>
                                                                                0x18) == -1),
                                                                        CONCAT12(-((char)((ulong)
                                                  uVar30 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar30 >> 8) == -1),
                                                           -((char)uVar30 == -1)))))))),1);
      if ((bVar29 & 1) != 0) goto LAB_10558075c;
      lVar6 = lVar6 + 8;
      uVar12 = uVar12 + lVar6 & uVar20;
      uVar30 = *(undefined8 *)(lVar28 + uVar12);
      uVar22 = CONCAT17(-((byte)((ulong)uVar30 >> 0x38) == bVar23),
                        CONCAT16(-((byte)((ulong)uVar30 >> 0x30) == bVar23),
                                 CONCAT15(-((byte)((ulong)uVar30 >> 0x28) == bVar23),
                                          CONCAT14(-((byte)((ulong)uVar30 >> 0x20) == bVar23),
                                                   CONCAT13(-((byte)((ulong)uVar30 >> 0x18) ==
                                                             bVar23),CONCAT12(-((byte)((ulong)uVar30
                                                                                      >> 0x10) ==
                                                                               bVar23),CONCAT11(-((
                                                  byte)((ulong)uVar30 >> 8) == bVar23),
                                                  -((byte)uVar30 == bVar23)))))))) &
               0x8080808080808080;
    }
    uVar24 = (uVar22 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar22 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    uVar24 = uVar12 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3) & uVar20;
    pcVar25 = *(char **)(lVar28 + -0x10 + uVar24 * -0x10);
    if (((CONCAT17(uStack_27d,uStack_284) == *(long *)(pcVar25 + 1) &&
         CONCAT44(uStack_278,uStack_27c) == *(long *)(pcVar25 + 9)) &&
        iStack_274 == *(int *)(pcVar25 + 0x11)) && cStack_285 == *pcVar25) break;
    uVar22 = uVar22 - 1 & uVar22;
  }
  lVar28 = *(long *)(lVar28 + uVar24 * -0x10 + -8);
  lVar6 = *(long *)(lVar28 + 0x40);
  *(long *)(*(long *)(lVar28 + 0x38) + 0x40) = lVar6;
  *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(lVar28 + 0x38);
  lVar6 = *(long *)(pcVar11 + 0x58);
  uVar30 = *(undefined8 *)(lVar6 + 0x40);
  *(long *)(lVar28 + 0x38) = lVar6;
  *(undefined8 *)(lVar28 + 0x40) = uVar30;
  *(long *)(lVar6 + 0x40) = lVar28;
  *(long *)(*(long *)(lVar28 + 0x40) + 0x38) = lVar28;
  uVar30 = *(undefined8 *)(lVar28 + 8);
  lVar6 = *(long *)(lVar28 + 0x10);
  if (lVar6 == 0) {
    lVar14 = 1;
  }
  else {
    lVar14 = _malloc(lVar6);
    if (lVar14 == 0) {
      func_0x0001087c9084(1,lVar6);
      goto LAB_105580ad4;
    }
  }
  _memcpy(lVar14,uVar30,lVar6);
  uVar30 = *(undefined8 *)(lVar28 + 0x20);
  lVar7 = *(long *)(lVar28 + 0x28);
  if (lVar7 == 0) {
    lVar15 = 1;
  }
  else {
    lVar15 = _malloc(lVar7);
    if (lVar15 == 0) {
      func_0x0001087c9084(1,lVar7);
      goto LAB_105580ad4;
    }
  }
  _memcpy(lVar15,uVar30,lVar7);
  param_1[4] = lVar7;
  param_1[5] = lVar15;
  param_1[6] = lVar7;
  param_1[2] = lVar14;
  param_1[3] = lVar6;
  param_1[7] = *(undefined8 *)(lVar28 + 0x30);
  *param_1 = 0x8000000000000004;
  param_1[1] = lVar6;
  if (*pcVar11 == '\0') {
    *pcVar11 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
              (pcVar11,extraout_x1_00,1000000000);
  }
  FUN_1060fa678(pcVar11,1,pcVar11);
  if (lStack_270 != 0) {
    _free(lStack_268);
  }
  if (param_3 == 0) {
    return;
  }
  _free(lVar9);
  return;
}

