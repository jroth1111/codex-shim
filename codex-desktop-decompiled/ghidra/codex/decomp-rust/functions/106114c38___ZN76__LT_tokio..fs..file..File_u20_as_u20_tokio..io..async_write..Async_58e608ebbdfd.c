
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
__ZN76__LT_tokio__fs__file__File_u20_as_u20_tokio__io__async_write__AsyncWrite_GT_10poll_write17h54eceb74d6b1115eE
          (long *param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  bool bVar1;
  byte bVar2;
  long *plVar3;
  undefined4 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *plVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  char in_wzr;
  undefined1 auVar19 [16];
  long lStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  long lStack_240;
  long *plStack_238;
  long *plStack_230;
  long *plStack_228;
  long *plStack_220;
  undefined1 auStack_210 [8];
  long *plStack_208;
  long lStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
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
  long *plStack_180;
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
  long *plStack_9c;
  long *aplStack_88 [5];
  ulong uVar11;
  
  bVar2 = *(byte *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = 0x2a;
  if ((ulong)bVar2 == 0x2a) {
    lVar12 = param_1[6];
    if (lVar12 == -0x7fffffffffffffff) {
      unaff_x21 = &lStack_200;
      unaff_x22 = (long *)&uStack_d0;
      unaff_x23 = (long *)*param_2;
      uVar16 = 2;
      do {
        unaff_x20 = (long *)param_1[7];
        func_0x000106118a7c(&lStack_200,unaff_x20,unaff_x23);
        lVar12 = lStack_200;
        if (lStack_200 == 4) goto LAB_10611510c;
        if (lStack_200 == 3) {
          plStack_268 = (long *)__ZN5tokio7runtime4task5error117__LT_impl_u20_core__convert__From_LT_tokio__runtime__task__error__JoinError_GT__u20_for_u20_std__io__error__Error_GT_4from17h11c0a0f151d7d028E
                                          (&plStack_1f8);
          goto LAB_106114dac;
        }
        uStack_b0 = SUB84(plStack_1d8,0);
        uStack_ac = (undefined4)((ulong)plStack_1d8 >> 0x20);
        uStack_a8 = SUB84(plStack_1d0,0);
        uStack_a4 = (undefined4)((ulong)plStack_1d0 >> 0x20);
        plStack_238 = plStack_1e0;
        lStack_240 = lStack_1e8;
        plStack_228 = plStack_1d0;
        plStack_230 = plStack_1d8;
        plStack_248 = plStack_1f0;
        plStack_250 = plStack_1f8;
        plStack_260 = plStack_1f0;
        plStack_268 = plStack_1f8;
        uStack_c8 = SUB84(plStack_1e0,0);
        uStack_c4 = (undefined4)((ulong)plStack_1e0 >> 0x20);
        uStack_d0 = (undefined4)lStack_1e8;
        uStack_cc = (undefined4)((ulong)lStack_1e8 >> 0x20);
        lStack_270 = lStack_200;
        uStack_c0 = uStack_b0;
        uStack_bc = uStack_ac;
        uStack_b8 = uStack_a8;
        uStack_b4 = uStack_a4;
        if (*unaff_x20 == 0xcc) {
          *unaff_x20 = 0x84;
        }
        else {
          (**(code **)(unaff_x20[2] + 0x20))(unaff_x20);
        }
        param_1[7] = CONCAT44(uStack_c4,uStack_c8);
        param_1[6] = CONCAT44(uStack_cc,uStack_d0);
        param_1[9] = CONCAT44(uStack_b4,uStack_b8);
        param_1[8] = CONCAT44(uStack_bc,uStack_c0);
        if ((lVar12 == 0) || (lVar12 != 1)) {
          if ((plStack_268 != (long *)0x0) && (((ulong)plStack_260 & 3) == 1)) {
            puVar17 = (undefined8 *)((long)plStack_260 + -1);
            uVar18 = *puVar17;
            unaff_x20 = *(long **)((long)plStack_260 + 7);
            if ((code *)*unaff_x20 != (code *)0x0) {
              (*(code *)*unaff_x20)(uVar18);
            }
            if (unaff_x20[1] != 0) {
              _free(uVar18);
            }
            _free(puVar17);
          }
        }
        else {
          unaff_x20 = plStack_268;
          if (plStack_268 != (long *)0x0) goto LAB_106114dac;
        }
        lVar12 = param_1[6];
      } while (lVar12 == -0x7fffffffffffffff);
    }
    param_1[6] = -0x8000000000000000;
    if (lVar12 == -0x8000000000000000) {
      func_0x000108a07a20(&UNK_10b4ce880);
LAB_10611518c:
      FUN_108a8b4b8(&lStack_270,unaff_x23,unaff_x20);
    }
    else {
      plStack_260 = (long *)param_1[8];
      plStack_268 = (long *)param_1[7];
      plStack_258 = (long *)param_1[9];
      unaff_x21 = (long *)((long)plStack_258 - (long)plStack_260);
      lStack_270 = lVar12;
      if (unaff_x21 == (long *)0x0) {
        unaff_x22 = (long *)0x3;
      }
      else {
        if (plStack_260 <= plStack_258) {
          __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                    (plStack_258,plStack_260,plStack_260,&UNK_10b4cd228);
          plVar15 = plStack_1e0;
          plVar10 = plStack_1d0;
          plVar3 = plStack_1c8;
          uVar4 = uStack_1b4;
          goto LAB_1061151c8;
        }
        plStack_260 = (long *)0x0;
        plStack_258 = (long *)0x0;
        unaff_x22 = (long *)0x2;
      }
      unaff_x20 = (long *)param_1[0xc];
      if (param_4 <= (long *)param_1[0xc]) {
        unaff_x20 = param_4;
      }
      unaff_x23 = plStack_260;
      if ((long *)(lVar12 - (long)plStack_260) < unaff_x20) goto LAB_10611518c;
    }
    plVar15 = plStack_260;
    _memcpy((undefined *)((long)plStack_268 + (long)plStack_260),param_3,unaff_x20);
    plStack_260 = (long *)((long)plVar15 + (long)unaff_x20);
    plVar13 = (long *)*param_1;
    lVar12 = *plVar13;
    *plVar13 = lVar12 + 1;
    plVar15 = plStack_1e0;
    plVar10 = plStack_1d0;
    plVar3 = plStack_1c8;
    uVar4 = uStack_1b4;
    if (lVar12 < 0) goto LAB_1061151c8;
    plStack_238 = plStack_268;
    lStack_240 = lStack_270;
    plStack_228 = plStack_258;
    plStack_250 = unaff_x22;
    plStack_248 = unaff_x21;
    plStack_230 = plStack_260;
    plStack_220 = plVar13;
    _auStack_210 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b4ce128);
    plVar13 = auStack_210._8_8_;
    uVar9 = auStack_210;
    do {
      lVar12 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
      lVar7 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
      bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
      ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar7;
    } while (bVar1);
    lVar7 = 0x220;
    if ((uVar9 & 1) == 0) {
      lVar7 = 0x300;
    }
    if ((uVar9 & 1) == 0) {
      plVar15 = plVar13 + 0x4c;
      if ((char)*plVar15 == '\0') {
        *(char *)plVar15 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (plVar15,plVar13,1000000000);
      }
      plVar13[0x51] = plVar13[0x51] + 1;
      if ((char)*plVar15 == '\x01') {
        *(char *)plVar15 = in_wzr;
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar15,0);
      }
      lVar6 = *plVar13;
      *plVar13 = lVar6 + 1;
      plVar15 = plStack_1e0;
      plVar10 = plStack_1d0;
      plVar3 = plStack_1c8;
      uVar4 = uStack_1b4;
      if (lVar6 < 0) goto LAB_1061151c8;
      plVar14 = (long *)plVar13[0x5e];
      plStack_1e0 = (long *)0x0;
      plStack_1c8 = plVar13 + 0x5c;
      uStack_1b4 = uStack_d0;
    }
    else {
      lVar6 = *plVar13;
      *plVar13 = lVar6 + 1;
      plVar15 = plStack_1e0;
      plVar10 = plStack_1d0;
      plVar3 = plStack_1c8;
      uVar4 = uStack_1b4;
      if (lVar6 < 0) goto LAB_1061151c8;
      plVar14 = (long *)plVar13[0x4a];
      plStack_1e0 = (long *)0x1;
      plStack_1c8 = plVar13 + 0x48;
      uStack_1b4 = uStack_d0;
    }
    plStack_1d0 = (long *)0x0;
    uStack_d0 = uStack_1b4;
    if (plVar14 != (long *)0x0) {
      lVar6 = *plVar14;
      *plVar14 = lVar6 + 1;
      if (lVar6 < 0) goto LAB_1061151c8;
      plStack_1d0 = (long *)plStack_1c8[2];
      plStack_1c8 = (long *)plStack_1c8[3];
      lVar6 = *plStack_1d0;
      *plStack_1d0 = lVar6 + 1;
      if (lVar6 < 0) goto LAB_1061151c8;
    }
    uStack_a4 = SUB84(plStack_228,0);
    uStack_a0 = (undefined4)((ulong)plStack_228 >> 0x20);
    uStack_ac = SUB84(plStack_230,0);
    uStack_a8 = (undefined4)((ulong)plStack_230 >> 0x20);
    uStack_b4 = SUB84(plStack_238,0);
    uStack_b0 = (undefined4)((ulong)plStack_238 >> 0x20);
    uStack_bc = (undefined4)lStack_240;
    uStack_b8 = (undefined4)((ulong)lStack_240 >> 0x20);
    uStack_c4 = SUB84(plStack_248,0);
    uStack_c0 = (undefined4)((ulong)plStack_248 >> 0x20);
    uStack_cc = SUB84(plStack_250,0);
    uStack_c8 = (undefined4)((ulong)plStack_250 >> 0x20);
    lStack_200 = 0xcc;
    plStack_1f8 = (long *)0x0;
    plStack_1f0 = (long *)&UNK_10b4cda30;
    lStack_1e8 = 0;
    lStack_1c0 = lVar12;
    uStack_1b8 = 0;
    uStack_18c = uStack_a8;
    uStack_188 = uStack_a4;
    uStack_194 = uStack_b0;
    uStack_190 = uStack_ac;
    uStack_19c = uStack_b8;
    uStack_198 = uStack_b4;
    uStack_1a4 = uStack_c0;
    uStack_1a0 = uStack_bc;
    uStack_1ac = uStack_c8;
    uStack_1a8 = uStack_c4;
    uStack_1b0 = uStack_cc;
    lStack_178 = 0;
    lStack_170 = 0;
    lStack_168 = 0;
    aplStack_88[0] = (long *)0x0;
    plStack_1d8 = plVar13;
    uStack_184 = uStack_a0;
    plStack_180 = plStack_220;
    plStack_158 = plStack_1d0;
    plStack_150 = plStack_1c8;
    plStack_9c = plStack_220;
    iVar8 = _posix_memalign(aplStack_88,0x80,0x100);
    plVar15 = aplStack_88[0];
    if ((iVar8 != 0) || (aplStack_88[0] == (long *)0x0)) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x100);
      plVar15 = plStack_1e0;
      plVar10 = plStack_1d0;
      plVar3 = plStack_1c8;
      uVar4 = uStack_1b4;
LAB_1061151c8:
      uStack_1b4 = uVar4;
      plStack_1c8 = plVar3;
      plStack_1d0 = plVar10;
      plStack_1e0 = plVar15;
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1061151cc);
      (*pcVar5)();
    }
    aplStack_88[0][0x19] = lStack_138;
    aplStack_88[0][0x18] = lStack_140;
    aplStack_88[0][0x1b] = lStack_128;
    aplStack_88[0][0x1a] = lStack_130;
    aplStack_88[0][0x1d] = lStack_118;
    aplStack_88[0][0x1c] = lStack_120;
    aplStack_88[0][0x1f] = lStack_108;
    aplStack_88[0][0x1e] = lStack_110;
    aplStack_88[0][0x11] = lStack_178;
    aplStack_88[0][0x10] = (long)plStack_180;
    aplStack_88[0][0x13] = lStack_168;
    aplStack_88[0][0x12] = lStack_170;
    aplStack_88[0][0x15] = (long)plStack_158;
    aplStack_88[0][0x14] = lStack_160;
    aplStack_88[0][0x17] = lStack_148;
    aplStack_88[0][0x16] = (long)plStack_150;
    aplStack_88[0][9] = CONCAT44(uStack_1b4,uStack_1b8);
    aplStack_88[0][8] = lStack_1c0;
    aplStack_88[0][0xb] = CONCAT44(uStack_1a4,uStack_1a8);
    aplStack_88[0][10] = CONCAT44(uStack_1ac,uStack_1b0);
    aplStack_88[0][0xd] = CONCAT44(uStack_194,uStack_198);
    aplStack_88[0][0xc] = CONCAT44(uStack_19c,uStack_1a0);
    aplStack_88[0][0xf] = CONCAT44(uStack_184,uStack_188);
    aplStack_88[0][0xe] = CONCAT44(uStack_18c,uStack_190);
    aplStack_88[0][1] = (long)plStack_1f8;
    *aplStack_88[0] = lStack_200;
    aplStack_88[0][3] = lStack_1e8;
    aplStack_88[0][2] = (long)plStack_1f0;
    aplStack_88[0][5] = (long)plStack_1d8;
    aplStack_88[0][4] = (long)plStack_1e0;
    aplStack_88[0][7] = (long)plStack_1c8;
    aplStack_88[0][6] = (long)plStack_1d0;
    auVar19 = __ZN5tokio7runtime8blocking4pool7Spawner10spawn_task17h940099594ef92638E
                        ((undefined *)((long)plVar13 + lVar7),aplStack_88[0],0,auStack_210);
    uVar11 = auVar19._8_8_;
    if (auVar19._0_8_ != 0) {
      if ((uVar11 & 3) == 1) {
        uVar16 = *(undefined8 *)(uVar11 - 1);
        puVar17 = *(undefined8 **)(uVar11 + 7);
        pcVar5 = (code *)*puVar17;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar16);
        }
        if (puVar17[1] != 0) {
          _free(uVar16);
        }
        _free((undefined8 *)(uVar11 - 1));
        if (*plVar15 != 0xcc) goto LAB_10611504c;
        *plVar15 = 0x84;
      }
      else if (*plVar15 == 0xcc) {
        *plVar15 = 0x84;
      }
      else {
LAB_10611504c:
        (**(code **)(plVar15[2] + 0x20))(plVar15);
      }
      plVar15 = (long *)0x0;
    }
    lVar12 = *plVar13;
    *plVar13 = lVar12 + -1;
    LORelease();
    if (uVar9 == 0) {
      if (lVar12 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE(&plStack_208);
      }
    }
    else if (lVar12 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E(&plStack_208);
    }
    if (plVar15 != (long *)0x0) {
      lVar12 = param_1[6];
      if (lVar12 != -0x8000000000000000) {
        plVar10 = (long *)param_1[7];
        if (lVar12 == -0x7fffffffffffffff) {
          if (*plVar10 == 0xcc) {
            *plVar10 = 0x84;
          }
          else {
            (**(code **)(plVar10[2] + 0x20))();
          }
        }
        else if (lVar12 != 0) {
          _free();
        }
      }
      uVar16 = 0;
      param_1[6] = -0x7fffffffffffffff;
      param_1[7] = (long)plVar15;
      goto LAB_10611510c;
    }
    plStack_268 = (long *)__ZN3std2io5error5Error3new17h949302c01fe11b24E(0x28,&UNK_109bec15e,0x16);
  }
  else {
    plStack_268 = (long *)((ulong)bVar2 << 0x20 | 3);
  }
LAB_106114dac:
  uVar16 = 1;
  unaff_x20 = plStack_268;
LAB_10611510c:
  auVar19._8_8_ = unaff_x20;
  auVar19._0_8_ = uVar16;
  return auVar19;
}

