
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100b13cb0(undefined8 *param_1,undefined8 param_2)

{
  char ******ppppppcVar1;
  char *****pppppcVar2;
  char ******ppppppcVar3;
  char *****pppppcVar4;
  char *******pppppppcVar5;
  char **ppcVar6;
  long lVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined1 uVar14;
  undefined *puVar15;
  char ******ppppppcVar16;
  char ******ppppppcVar17;
  code *pcVar18;
  char ***pppcVar19;
  char ******ppppppcVar20;
  char ***extraout_x10;
  char ***extraout_x10_00;
  char ***pppcVar21;
  char ****ppppcVar22;
  char *****unaff_x22;
  char *****pppppcVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
  char *****pppppcStack_250;
  undefined8 ******ppppppuStack_248;
  char *****pppppcStack_240;
  char *****pppppcStack_238;
  char *****pppppcStack_230;
  undefined8 ******ppppppuStack_228;
  char *****pppppcStack_220;
  char ******ppppppcStack_218;
  undefined *puStack_210;
  char *****pppppcStack_208;
  char ******ppppppcStack_200;
  undefined8 ******ppppppuStack_1f8;
  char *******pppppppcStack_1f0;
  char ****ppppcStack_1e8;
  char *****pppppcStack_1e0;
  char *******pppppppcStack_1d8;
  char *****pppppcStack_1d0;
  char *****pppppcStack_1c8;
  char *****pppppcStack_1c0;
  char *****pppppcStack_1b8;
  char *****pppppcStack_1b0;
  undefined8 ******ppppppuStack_1a8;
  char *****pppppcStack_1a0;
  char *****pppppcStack_198;
  char *****pppppcStack_190;
  undefined8 *******pppppppuStack_188;
  char *****pppppcStack_180;
  char *****pppppcStack_178;
  char *****pppppcStack_170;
  char *****pppppcStack_168;
  char *****pppppcStack_160;
  char *****pppppcStack_158;
  char *****pppppcStack_150;
  char *****pppppcStack_148;
  char *****pppppcStack_140;
  char *****pppppcStack_138;
  char *****pppppcStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  char *******pppppppcStack_108;
  undefined8 *****pppppuStack_100;
  char ****ppppcStack_f8;
  undefined8 ******ppppppuStack_f0;
  char *******pppppppcStack_e8;
  char ****ppppcStack_e0;
  char *****pppppcStack_d8;
  char ****ppppcStack_d0;
  char ****ppppcStack_c8;
  char *******pppppppcStack_c0;
  undefined8 *****pppppuStack_b8;
  char ****ppppcStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  char *pcStack_a0;
  char *******pppppppcStack_98;
  undefined8 ******ppppppuStack_88;
  undefined *puStack_80;
  undefined8 *******pppppppuStack_78;
  undefined *puStack_70;
  
  bVar8 = *(byte *)((long)param_1 + 0x2dc);
  if (bVar8 < 4) {
    if (1 < bVar8) {
      if (bVar8 == 3) goto LAB_100b13d78;
LAB_100b14aec:
      func_0x000108a07b10(&UNK_10b22dd18);
LAB_100b14af8:
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b23a8b0);
      goto LAB_100b13ed0;
    }
    if (bVar8 != 0) {
      func_0x000108a07af4(&UNK_10b22dd18);
      goto LAB_100b14aec;
    }
    param_1[0x2a] = param_1[0x11];
    param_1[0x29] = param_1[0x10];
    param_1[0x2c] = param_1[0x13];
    param_1[0x2b] = param_1[0x12];
    param_1[0x2e] = param_1[0x15];
    param_1[0x2d] = param_1[0x14];
    param_1[0x22] = param_1[9];
    param_1[0x21] = param_1[8];
    param_1[0x24] = param_1[0xb];
    param_1[0x23] = param_1[10];
    param_1[0x26] = param_1[0xd];
    param_1[0x25] = param_1[0xc];
    param_1[0x28] = param_1[0xf];
    param_1[0x27] = param_1[0xe];
    param_1[0x1a] = param_1[1];
    param_1[0x19] = *param_1;
    param_1[0x1c] = param_1[3];
    param_1[0x1b] = param_1[2];
    param_1[0x1e] = param_1[5];
    param_1[0x1d] = param_1[4];
    *(undefined2 *)((long)param_1 + 0x2dd) = 0;
    param_1[0x18] = param_1[0x17];
    *(undefined1 *)((long)param_1 + 0x2df) = 1;
    param_1[0x2f] = param_1[0x16];
    param_1[0x20] = param_1[7];
    param_1[0x1f] = param_1[6];
    param_1[0xe4] = param_1[0x17];
    *(undefined1 *)((long)param_1 + 0x72b) = 0;
LAB_100b13d78:
    auVar25 = FUN_100b14e84(param_1 + 0x5c,param_2);
    pppppcVar23 = auVar25._8_8_;
    if ((auVar25._0_8_ & 1) != 0) {
      uVar14 = 3;
      goto LAB_100b14960;
    }
    FUN_100cd5a2c(param_1 + 0x5c);
    if (pppppcVar23 == (char *****)0x0) {
      FUN_1011eb518(param_1 + 0x30,param_1 + 0x19);
      *(undefined1 *)((long)param_1 + 0x2dd) = 1;
      lVar7 = *(long *)(param_1[0x18] + 0xf0) + 0x10;
      param_1[0x5c] = lVar7;
      *(undefined1 *)(param_1 + 0x67) = 0;
      goto LAB_100b13e24;
    }
    func_0x000100e1ce88(param_1 + 0x19);
  }
  else {
    if (bVar8 == 4) {
      bVar8 = *(byte *)(param_1 + 0x67);
      if (bVar8 < 2) {
        if (bVar8 != 0) {
          func_0x000108a07af4(&UNK_10b23a880);
          goto LAB_100b13ed0;
        }
        lVar7 = param_1[0x5c];
LAB_100b13e24:
        param_1[0x5d] = lVar7;
        *(undefined1 *)(param_1 + 0x66) = 0;
LAB_100b13e34:
        pppppppcStack_1d8 = (char *******)0x0;
        pppppcStack_1d0 = (char *****)0x0;
        param_1[0x5e] = lVar7;
        param_1[0x5f] = 0;
        param_1[0x62] = 0;
        param_1[0x61] = 0;
        param_1[0x60] = pppppcStack_1e0;
        param_1[99] = 1;
        param_1[100] = 1;
        *(undefined1 *)(param_1 + 0x65) = 0;
      }
      else {
        if (bVar8 != 3) {
          func_0x000108a07b10(&UNK_10b23a880);
          goto LAB_100b13ed0;
        }
        bVar8 = *(byte *)(param_1 + 0x66);
        if (bVar8 < 2) {
          if (bVar8 != 0) {
            func_0x000108a07af4(&UNK_10b23a898);
            goto LAB_100b13ed0;
          }
          lVar7 = param_1[0x5d];
          goto LAB_100b13e34;
        }
        if (bVar8 != 3) {
          func_0x000108a07b10(&UNK_10b23a898);
          goto LAB_100b13ed0;
        }
      }
      unaff_x22 = (char *****)(param_1 + 0x5d);
      bVar8 = __ZN86__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__future__future__Future_GT_4poll17hce2eecb908eeef19E
                        (param_1 + 0x5e,param_2);
      if (bVar8 != 2) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x5e);
        uVar13 = extraout_x1;
        pppcVar21 = extraout_x10;
        if (param_1[0x5f] != 0) {
          (**(code **)(param_1[0x5f] + 0x18))(param_1[0x60]);
          uVar13 = extraout_x1_00;
          pppcVar21 = extraout_x10_00;
        }
        if ((bVar8 & 1) != 0) goto LAB_100b14af8;
        ppppcVar22 = *unaff_x22;
        *(undefined1 *)(param_1 + 0x66) = 1;
        *(undefined1 *)(param_1 + 0x67) = 1;
        pppcVar19 = ppppcVar22[6];
        if (pppcVar19 != (char ***)0x0) {
          pppcVar21 = ppppcVar22[7];
          ppcVar6 = *pppcVar19;
          *pppcVar19 = (char **)((long)ppcVar6 + 1);
          if ((long)ppcVar6 < 0) goto LAB_100b13ed0;
        }
        param_1[0x47] = pppcVar19;
        param_1[0x48] = pppcVar21;
        *(undefined1 *)((long)param_1 + 0x2de) = 1;
        if (*(char *)ppppcVar22 == '\0') {
          *(char *)ppppcVar22 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (ppppcVar22,uVar13,1000000000);
        }
        FUN_1060fa678(ppppcVar22,1,ppppcVar22);
        __ZN19codex_network_proxy7runtime34blocked_request_violation_log_line17h79550d50f693ac48E
                  (param_1 + 0x49,param_1 + 0x19);
        uVar13 = param_1[0x1a];
        lVar7 = param_1[0x1b];
        if (lVar7 == 0) {
          lVar12 = 1;
        }
        else {
          lVar12 = _malloc(lVar7);
          if (lVar12 == 0) {
            func_0x0001087c9084(1,lVar7);
            goto LAB_100b13ed0;
          }
        }
        _memcpy(lVar12,uVar13,lVar7);
        param_1[0x4c] = lVar7;
        param_1[0x4d] = lVar12;
        param_1[0x4e] = lVar7;
        uVar13 = param_1[0x1d];
        lVar7 = param_1[0x1e];
        if (lVar7 == 0) {
          lVar12 = 1;
        }
        else {
          lVar12 = _malloc(lVar7);
          if (lVar12 == 0) {
            func_0x0001087c9084(1,lVar7);
            goto LAB_100b13ed0;
          }
        }
        _memcpy(lVar12,uVar13,lVar7);
        param_1[0x4f] = lVar7;
        param_1[0x50] = lVar12;
        param_1[0x51] = lVar7;
        if (param_1[0x28] == -0x8000000000000000) {
          param_1[0x52] = 0x8000000000000000;
          if (param_1[0x2b] != -0x8000000000000000) goto LAB_100b1402c;
LAB_100b13fa8:
          param_1[0x55] = 0x8000000000000000;
          uVar13 = param_1[0x20];
          lVar7 = param_1[0x21];
          if (lVar7 == 0) goto LAB_100b14070;
LAB_100b13fb4:
          lVar12 = _malloc(lVar7);
          if (lVar12 == 0) {
            func_0x0001087c9084(1,lVar7);
            goto LAB_100b13ed0;
          }
        }
        else {
          uVar13 = param_1[0x29];
          lVar7 = param_1[0x2a];
          if (lVar7 == 0) {
            lVar12 = 1;
          }
          else {
            lVar12 = _malloc(lVar7);
            if (lVar12 == 0) {
              func_0x0001087c9084(1,lVar7);
              goto LAB_100b13ed0;
            }
          }
          _memcpy(lVar12,uVar13,lVar7);
          param_1[0x52] = lVar7;
          param_1[0x53] = lVar12;
          param_1[0x54] = lVar7;
          if (param_1[0x2b] == -0x8000000000000000) goto LAB_100b13fa8;
LAB_100b1402c:
          uVar13 = param_1[0x2c];
          lVar7 = param_1[0x2d];
          if (lVar7 == 0) {
            lVar12 = 1;
          }
          else {
            lVar12 = _malloc(lVar7);
            if (lVar12 == 0) {
              func_0x0001087c9084(1,lVar7);
              goto LAB_100b13ed0;
            }
          }
          _memcpy(lVar12,uVar13,lVar7);
          param_1[0x55] = lVar7;
          param_1[0x56] = lVar12;
          param_1[0x57] = lVar7;
          uVar13 = param_1[0x20];
          lVar7 = param_1[0x21];
          if (lVar7 != 0) goto LAB_100b13fb4;
LAB_100b14070:
          lVar12 = 1;
        }
        _memcpy(lVar12,uVar13,lVar7);
        param_1[0x58] = lVar7;
        param_1[0x59] = lVar12;
        param_1[0x5a] = lVar7;
        *(undefined4 *)(param_1 + 0x5b) = *(undefined4 *)(param_1 + 0x2f);
        param_1[0x5c] = *(long *)(param_1[0x18] + 0xd8) + 0x10;
        *(undefined1 *)(param_1 + 0x67) = 0;
        goto LAB_100b140ac;
      }
      *(undefined1 *)(param_1 + 0x66) = 3;
      *(undefined1 *)(param_1 + 0x67) = 3;
      uVar14 = 4;
LAB_100b14960:
      *(undefined1 *)((long)param_1 + 0x2dc) = uVar14;
      uVar13 = 1;
      pppppcVar23 = unaff_x22;
      goto LAB_100b14a54;
    }
    if (bVar8 == 5) {
LAB_100b140ac:
      pppppcVar23 = (char *****)(param_1 + 0x5c);
      FUN_100fd5070(&pppppcStack_1e0,pppppcVar23,param_2);
      pppppppcVar5 = pppppppcStack_1d8;
      unaff_x22 = pppppcStack_1e0;
      if (pppppcStack_1e0 == (char *****)0x0) {
        uVar14 = 5;
        goto LAB_100b14960;
      }
      iVar10 = (int)pppppcStack_1d0;
      uVar24 = (ulong)pppppcStack_1d0 & 0xffffffff;
      uVar13 = extraout_x1_01;
      if ((*(char *)(param_1 + 0x67) == '\x03') && (*(char *)(param_1 + 0x66) == '\x03')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x5e);
        uVar13 = extraout_x1_02;
        if (param_1[0x5f] != 0) {
          (**(code **)(param_1[0x5f] + 0x18))(param_1[0x60]);
          uVar13 = extraout_x1_03;
        }
      }
      *(undefined1 *)((long)param_1 + 0x2df) = 0;
      pppppcStack_130 = (char *****)param_1[0x2f];
      pppppppcStack_1d8 = (char *******)param_1[0x1a];
      pppppcStack_1e0 = (char *****)param_1[0x19];
      pppppcStack_1c8 = (char *****)param_1[0x1c];
      pppppcStack_1d0 = (char *****)param_1[0x1b];
      pppppcStack_1b8 = (char *****)param_1[0x1e];
      pppppcStack_1c0 = (char *****)param_1[0x1d];
      ppppppuStack_1a8 = (undefined8 ******)param_1[0x20];
      pppppcStack_1b0 = (char *****)param_1[0x1f];
      pppppcStack_158 = (char *****)param_1[0x2a];
      pppppcStack_160 = (char *****)param_1[0x29];
      pppppcStack_148 = (char *****)param_1[0x2c];
      pppppcStack_150 = (char *****)param_1[0x2b];
      pppppcStack_138 = (char *****)param_1[0x2e];
      pppppcStack_140 = (char *****)param_1[0x2d];
      pppppcStack_198 = (char *****)param_1[0x22];
      pppppcStack_1a0 = (char *****)param_1[0x21];
      pppppppuStack_188 = (undefined8 *******)param_1[0x24];
      pppppcStack_190 = (char *****)param_1[0x23];
      pppppcStack_178 = (char *****)param_1[0x26];
      pppppcStack_180 = (char *****)param_1[0x25];
      pppppcStack_168 = (char *****)param_1[0x28];
      pppppcStack_170 = (char *****)param_1[0x27];
      ppppppcVar16 = pppppppcVar5[0x1a];
      ppppppcVar20 = pppppppcVar5[0x1d];
      if (ppppppcVar20 == ppppppcVar16) {
        __ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_4grow17h454ba0b39ad776adE();
        ppppppcVar20 = pppppppcVar5[0x1d];
        ppppppcVar16 = pppppppcVar5[0x1a];
        uVar13 = extraout_x1_04;
      }
      pppppppcVar5[0x1d] = (char ******)((long)ppppppcVar20 + 1);
      ppppppcVar17 = (char ******)0x0;
      if (ppppppcVar16 <= (char ******)((long)pppppppcVar5[0x1c] + (long)ppppppcVar20)) {
        ppppppcVar17 = ppppppcVar16;
      }
      ppppppcVar16 = pppppppcVar5[0x1b] +
                     (((long)pppppppcVar5[0x1c] + (long)ppppppcVar20) - (long)ppppppcVar17) * 0x17;
      ppppppcVar16[0x11] = pppppcStack_158;
      ppppppcVar16[0x10] = pppppcStack_160;
      ppppppcVar16[0x13] = pppppcStack_148;
      ppppppcVar16[0x12] = pppppcStack_150;
      ppppppcVar16[0x15] = pppppcStack_138;
      ppppppcVar16[0x14] = pppppcStack_140;
      ppppppcVar16[0x16] = pppppcStack_130;
      ppppppcVar16[9] = pppppcStack_198;
      ppppppcVar16[8] = pppppcStack_1a0;
      ppppppcVar16[0xb] = (char *****)pppppppuStack_188;
      ppppppcVar16[10] = pppppcStack_190;
      ppppppcVar16[0xd] = pppppcStack_178;
      ppppppcVar16[0xc] = pppppcStack_180;
      ppppppcVar16[0xf] = pppppcStack_168;
      ppppppcVar16[0xe] = pppppcStack_170;
      ppppppcVar16[1] = (char *****)pppppppcStack_1d8;
      *ppppppcVar16 = pppppcStack_1e0;
      ppppppcVar16[3] = pppppcStack_1c8;
      ppppppcVar16[2] = pppppcStack_1d0;
      ppppppcVar16[5] = pppppcStack_1b8;
      ppppppcVar16[4] = pppppcStack_1c0;
      ppppppcVar16[7] = (char *****)ppppppuStack_1a8;
      ppppppcVar16[6] = pppppcStack_1b0;
      ppppppcVar16 = (char ******)((long)pppppppcVar5[0x2c] + 1);
      if (pppppppcVar5[0x2c] == (char ******)0xffffffffffffffff) {
        ppppppcVar16 = (char ******)0xffffffffffffffff;
      }
      pppppppcVar5[0x2c] = ppppppcVar16;
      ppppppcVar20 = pppppppcVar5[0x1d];
      while ((char ******)0xc8 < ppppppcVar20) {
        ppppppcVar3 = pppppppcVar5[0x1c];
        ppppppcVar17 = (char ******)((long)ppppppcVar3 + 1);
        ppppppcVar1 = (char ******)0x0;
        if (pppppppcVar5[0x1a] <= ppppppcVar17) {
          ppppppcVar1 = pppppppcVar5[0x1a];
        }
        ppppppcVar20 = (char ******)((long)ppppppcVar20 - 1);
        pppppppcVar5[0x1c] = (char ******)((long)ppppppcVar17 - (long)ppppppcVar1);
        pppppppcVar5[0x1d] = ppppppcVar20;
        ppppppcVar17 = pppppppcVar5[0x1b] + (long)ppppppcVar3 * 0x17;
        pppppcStack_158 = ppppppcVar17[0x11];
        pppppcStack_160 = ppppppcVar17[0x10];
        pppppcStack_148 = ppppppcVar17[0x13];
        pppppcStack_150 = ppppppcVar17[0x12];
        pppppcStack_138 = ppppppcVar17[0x15];
        pppppcStack_140 = ppppppcVar17[0x14];
        pppppcStack_130 = ppppppcVar17[0x16];
        pppppcStack_198 = ppppppcVar17[9];
        pppppcStack_1a0 = ppppppcVar17[8];
        pppppppuStack_188 = (undefined8 *******)ppppppcVar17[0xb];
        pppppcStack_190 = ppppppcVar17[10];
        pppppcStack_178 = ppppppcVar17[0xd];
        pppppcStack_180 = ppppppcVar17[0xc];
        pppppcStack_168 = ppppppcVar17[0xf];
        pppppcStack_170 = ppppppcVar17[0xe];
        pppppppcStack_1d8 = (char *******)ppppppcVar17[1];
        pppppcStack_1e0 = *ppppppcVar17;
        pppppcStack_1c8 = ppppppcVar17[3];
        pppppcStack_1d0 = ppppppcVar17[2];
        pppppcStack_1b8 = ppppppcVar17[5];
        pppppcStack_1c0 = ppppppcVar17[4];
        ppppppuStack_1a8 = (undefined8 ******)ppppppcVar17[7];
        pppppcStack_1b0 = ppppppcVar17[6];
        if (pppppcStack_1e0 != (char *****)0x8000000000000000) {
          func_0x000100e1ce88(&pppppcStack_1e0);
          ppppppcVar20 = pppppppcVar5[0x1d];
          uVar13 = extraout_x1_05;
        }
      }
      if (iVar10 != 0) {
        if (*(char *)unaff_x22 == '\0') {
          *(char *)unaff_x22 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (unaff_x22,uVar13,1000000000);
        }
        FUN_1060fa678(unaff_x22,uVar24,unaff_x22);
      }
      param_1[0x5c] = ppppppcVar16;
      param_1[0x5d] = ppppppcVar20;
      if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
        if (((1 < bRam000000010b62ecd8 - 1) &&
            ((unaff_x22 = (char *****)
                          &
                          __ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5ac4d67e9f80b140E
             , bRam000000010b62ecd8 == 0 ||
             (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5ac4d67e9f80b140E
                                ),
             unaff_x22 = (char *****)
                         &
                         __ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5ac4d67e9f80b140E
             , cVar9 == '\0')))) ||
           (uVar24 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5ac4d67e9f80b140E
                               ),
           unaff_x22 = (char *****)
                       &
                       __ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5ac4d67e9f80b140E
           , (uVar24 & 1) == 0)) goto LAB_100b144dc;
        pppppcStack_238 =
             ___ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5ac4d67e9f80b140E
             + 6;
        pppppcStack_1c0 = (char *****)(param_1 + 0x4f);
        pppppcStack_1b0 = (char *****)(param_1 + 0x52);
        pppppcStack_1a0 = (char *****)(param_1 + 0x55);
        pppppcStack_190 = (char *****)(param_1 + 0x58);
        pppppcStack_180 = (char *****)(param_1 + 0x5b);
        pppppppcStack_1d8 =
             (char *******)
             &
             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        pppppcStack_1d0 = (char *****)(param_1 + 0x4c);
        pppppcStack_1c8 = (char *****)&DAT_10112965c;
        pppppcStack_1b8 = (char *****)&DAT_10112965c;
        ppppppuStack_1a8 = (undefined8 ******)&DAT_10113bbac;
        pppppcStack_198 = (char *****)&DAT_10113bbac;
        pppppppuStack_188 = (undefined8 *******)&DAT_10112965c;
        pppppcStack_178 = (char *****)&DAT_101143c80;
        pppppcStack_168 =
             (char *****)
             &
             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        ppppppcStack_200 = &pppppcStack_1e0;
        pppppcStack_208 = (char *****)s__recorded_blocked_request_teleme_108ad09b2;
        ppppppcStack_218 = &pppppcStack_208;
        puStack_210 = &UNK_10b208fd0;
        ppppppuStack_248 = &ppppppcStack_218;
        pppppcStack_250 = (char *****)0x1;
        pppppcStack_240 = (char *****)0x1;
        pppppcStack_1e0 = pppppcVar23;
        pppppcStack_170 = (char *****)(param_1 + 0x5d);
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5ac4d67e9f80b140E
                   ,&pppppcStack_250);
        pppppcVar23 = 
        ___ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5ac4d67e9f80b140E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppuStack_100 =
               (undefined8 *****)
               ___ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5ac4d67e9f80b140E
               [4];
          ppppcStack_f8 =
               ___ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5ac4d67e9f80b140E
               [5];
          pppppppcStack_108 = (char *******)0x4;
          unaff_x22 = pppppcRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            unaff_x22 = (char *****)&UNK_10b3c24c8;
          }
          puVar15 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar15 = &UNK_109adfc03;
          }
          iVar10 = (*(code *)unaff_x22[3])(puVar15,&pppppppcStack_108);
          if (iVar10 != 0) {
            ppppcStack_d0 = pppppcVar23[0xc];
            ppppcStack_c8 = pppppcVar23[0xd];
            pppppppcStack_e8 = (char *******)pppppcVar23[10];
            ppppcStack_e0 = pppppcVar23[0xb];
            ppppppuStack_f0 = (undefined8 ******)0x1;
            if (pppppppcStack_e8 == (char *******)0x0) {
              ppppppuStack_f0 = (undefined8 ******)0x2;
            }
            uStack_a8 = *(undefined4 *)(pppppcVar23 + 1);
            uStack_a4 = *(undefined4 *)((long)pppppcVar23 + 0xc);
            puStack_80 = (undefined *)CONCAT71(puStack_80._1_7_,1);
            pppppppuStack_78 = &ppppppuStack_88;
            puStack_70 = &DAT_1061c2098;
            pppppcStack_d8 = (char *****)0x1;
            if (ppppcStack_d0 == (char ****)0x0) {
              pppppcStack_d8 = (char *****)0x2;
            }
            pppppuStack_b8 = pppppuStack_100;
            pppppppcStack_c0 = pppppppcStack_108;
            ppppcStack_b0 = ppppcStack_f8;
            pppppppcStack_98 = (char *******)&pppppppuStack_78;
            pcStack_a0 = s__108b39f4f;
            ppppppuStack_88 = (undefined8 ******)&pppppcStack_250;
            (*(code *)unaff_x22[4])(puVar15,&ppppppuStack_f0);
          }
        }
      }
      else {
LAB_100b144dc:
        pppppcVar4 = 
        ___ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5ac4d67e9f80b140E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          ppppppuStack_228 =
               (undefined8 ******)
               ___ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5ac4d67e9f80b140E
               [4];
          pppppcStack_220 =
               (char *****)
               ___ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5ac4d67e9f80b140E
               [5];
          pppppcStack_230 = (char *****)0x4;
          pppppcVar2 = pppppcRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            pppppcVar2 = (char *****)&UNK_10b3c24c8;
          }
          puVar15 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar15 = &UNK_109adfc03;
          }
          iVar10 = (*(code *)pppppcVar2[3])(puVar15,&pppppcStack_230);
          unaff_x22 = pppppcVar4;
          if (iVar10 != 0) {
            pppppcStack_d8 =
                 ___ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5ac4d67e9f80b140E
                 + 6;
            pppppcStack_1c0 = (char *****)(param_1 + 0x4f);
            pppppcStack_1b0 = (char *****)(param_1 + 0x52);
            pppppcStack_1a0 = (char *****)(param_1 + 0x55);
            pppppcStack_190 = (char *****)(param_1 + 0x58);
            pppppcStack_180 = (char *****)(param_1 + 0x5b);
            pppppppcStack_1d8 =
                 (char *******)
                 &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
            ;
            pppppcStack_1d0 = (char *****)(param_1 + 0x4c);
            pppppcStack_1c8 = (char *****)&DAT_10112965c;
            pppppcStack_1b8 = (char *****)&DAT_10112965c;
            ppppppuStack_1a8 = (undefined8 ******)&DAT_10113bbac;
            pppppcStack_198 = (char *****)&DAT_10113bbac;
            pppppppuStack_188 = (undefined8 *******)&DAT_10112965c;
            pppppcStack_178 = (char *****)&DAT_101143c80;
            pppppcStack_168 =
                 (char *****)
                 &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
            ;
            pppppuStack_100 = &pppppcStack_1e0;
            pppppppcStack_108 = (char *******)s__recorded_blocked_request_teleme_108ad09b2;
            pppppppuStack_78 = &pppppppcStack_108;
            puStack_70 = &UNK_10b208fd0;
            pppppppcStack_e8 = (char *******)&pppppppuStack_78;
            ppppppuStack_f0 = (undefined8 ******)0x1;
            ppppcStack_e0 = (char ****)0x1;
            ppppppuStack_248 = ppppppuStack_228;
            pppppcStack_250 = pppppcStack_230;
            pppppcStack_240 = pppppcStack_220;
            pppppcStack_1e0 = pppppcVar23;
            pppppcStack_170 = (char *****)(param_1 + 0x5d);
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (pppppcVar4,puVar15,pppppcVar2,&pppppcStack_250,&ppppppuStack_f0);
          }
        }
      }
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
          ((bRam000000010b62ecc0 - 1 < 2 ||
           ((bRam000000010b62ecc0 != 0 &&
            (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h49791b066a0ea19dE
                               ), cVar9 != '\0')))))) &&
         (uVar24 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h49791b066a0ea19dE
                             ), (uVar24 & 1) != 0)) {
        pppppcStack_d8 =
             (char *****)
             (
             ___ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h49791b066a0ea19dE
             + 0x30);
        ppppppuStack_88 = (undefined8 ******)(param_1 + 0x49);
        puStack_80 = &DAT_10112965c;
        ppppppcStack_200 = (char ******)&ppppppuStack_88;
        pppppcStack_208 = (char *****)s__108b1bd74;
        ppppppcStack_218 = &pppppcStack_208;
        puStack_210 = &UNK_10b208fd0;
        pppppppcStack_e8 = &ppppppcStack_218;
        ppppppuStack_f0 = (undefined8 ******)0x1;
        ppppcStack_e0 = (char ****)0x1;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h49791b066a0ea19dE
                   ,&ppppppuStack_f0);
        lVar7 = 
        ___ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h49791b066a0ea19dE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          ppppppuStack_248 =
               *(undefined8 *******)
                (
                ___ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h49791b066a0ea19dE
                + 0x20);
          pppppcStack_240 =
               *(char ******)
                (
                ___ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h49791b066a0ea19dE
                + 0x28);
          pppppcStack_250 = (char *****)0x4;
          unaff_x22 = pppppcRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            unaff_x22 = (char *****)&UNK_10b3c24c8;
          }
          puVar15 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar15 = &UNK_109adfc03;
          }
          iVar10 = (*(code *)unaff_x22[3])(puVar15,&pppppcStack_250);
          if (iVar10 != 0) {
            pppppcStack_1c0 = *(char ******)(lVar7 + 0x60);
            pppppcStack_1b8 = *(char ******)(lVar7 + 0x68);
            pppppppcStack_1d8 = *(char ********)(lVar7 + 0x50);
            pppppcStack_1d0 = *(char ******)(lVar7 + 0x58);
            pppppcStack_1e0 = (char *****)0x1;
            if (pppppppcStack_1d8 == (char *******)0x0) {
              pppppcStack_1e0 = (char *****)0x2;
            }
            pppppcStack_198 = *(char ******)(lVar7 + 8);
            pppppppuStack_78 = &ppppppuStack_f0;
            puStack_70 = (undefined *)CONCAT71(puStack_70._1_7_,1);
            pppppppcStack_108 = (char *******)&pppppppuStack_78;
            pppppuStack_100 = (undefined8 *****)&DAT_1061c2098;
            pppppcStack_1c8 = (char *****)0x1;
            if (pppppcStack_1c0 == (char *****)0x0) {
              pppppcStack_1c8 = (char *****)0x2;
            }
            ppppppuStack_1a8 = ppppppuStack_248;
            pppppcStack_1b0 = pppppcStack_250;
            pppppcStack_1a0 = pppppcStack_240;
            pppppppuStack_188 = &pppppppcStack_108;
            pppppcStack_190 = (char *****)s__108b39f4f;
            (*(code *)unaff_x22[4])(puVar15,&pppppcStack_1e0);
          }
        }
      }
      else {
        lVar7 = 
        ___ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h49791b066a0ea19dE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppppcStack_1f0 =
               *(char ********)
                (
                ___ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h49791b066a0ea19dE
                + 0x20);
          ppppcStack_1e8 =
               *(char *****)
                (
                ___ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h49791b066a0ea19dE
                + 0x28);
          ppppppuStack_1f8 = (undefined8 ******)0x4;
          unaff_x22 = pppppcRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            unaff_x22 = (char *****)&UNK_10b3c24c8;
          }
          puVar15 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar15 = &UNK_109adfc03;
          }
          iVar10 = (*(code *)unaff_x22[3])(puVar15,&ppppppuStack_1f8);
          if (iVar10 != 0) {
            pppppcStack_1c8 =
                 (char *****)
                 (
                 ___ZN19codex_network_proxy7runtime17NetworkProxyState14record_blocked28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h49791b066a0ea19dE
                 + 0x30);
            pppppcStack_250 = (char *****)(param_1 + 0x49);
            ppppppuStack_248 = (undefined8 ******)&DAT_10112965c;
            pppppppcStack_108 = (char *******)s__108b1bd74;
            pppppppuStack_78 = &pppppppcStack_108;
            puStack_70 = &UNK_10b208fd0;
            pppppppcStack_1d8 = (char *******)&pppppppuStack_78;
            pppppcStack_1e0 = (char *****)0x1;
            pppppcStack_1d0 = (char *****)0x1;
            pppppppcStack_e8 = pppppppcStack_1f0;
            ppppppuStack_f0 = ppppppuStack_1f8;
            ppppcStack_e0 = ppppcStack_1e8;
            pppppuStack_100 = &pppppcStack_250;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar7,puVar15,unaff_x22,&ppppppuStack_f0,&pppppcStack_1e0);
          }
        }
      }
      if (param_1[0x47] != 0) {
        puStack_128 = param_1 + 0x5e;
        param_1[0x5e] = param_1[0x47];
        param_1[0x5f] = param_1[0x48];
        *(undefined2 *)((long)param_1 + 0x2dd) = 0;
        pppppcStack_158 = (char *****)param_1[0x41];
        pppppcStack_160 = (char *****)param_1[0x40];
        pppppcStack_148 = (char *****)param_1[0x43];
        pppppcStack_150 = (char *****)param_1[0x42];
        pppppcStack_138 = (char *****)param_1[0x45];
        pppppcStack_140 = (char *****)param_1[0x44];
        pppppcStack_130 = (char *****)param_1[0x46];
        pppppcStack_198 = (char *****)param_1[0x39];
        pppppcStack_1a0 = (char *****)param_1[0x38];
        pppppppuStack_188 = (undefined8 *******)param_1[0x3b];
        pppppcStack_190 = (char *****)param_1[0x3a];
        pppppcStack_178 = (char *****)param_1[0x3d];
        pppppcStack_180 = (char *****)param_1[0x3c];
        pppppcStack_168 = (char *****)param_1[0x3f];
        pppppcStack_170 = (char *****)param_1[0x3e];
        pppppppcStack_1d8 = (char *******)param_1[0x31];
        pppppcStack_1e0 = (char *****)param_1[0x30];
        pppppcStack_1c8 = (char *****)param_1[0x33];
        pppppcStack_1d0 = (char *****)param_1[0x32];
        pppppcStack_1b8 = (char *****)param_1[0x35];
        pppppcStack_1c0 = (char *****)param_1[0x34];
        ppppppuStack_1a8 = (undefined8 ******)param_1[0x37];
        pppppcStack_1b0 = (char *****)param_1[0x36];
        uStack_110 = 0;
        puVar11 = (undefined8 *)_malloc(0xd8);
        if (puVar11 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xd8);
LAB_100b13ed0:
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100b13ed4);
          (*pcVar18)();
        }
        puVar11[0x15] = pppppcStack_138;
        puVar11[0x14] = pppppcStack_140;
        puVar11[0x17] = puStack_128;
        puVar11[0x16] = pppppcStack_130;
        puVar11[0x19] = uStack_118;
        puVar11[0x18] = uStack_120;
        puVar11[0x1a] = CONCAT71(uStack_10f,uStack_110);
        puVar11[0xd] = pppppcStack_178;
        puVar11[0xc] = pppppcStack_180;
        puVar11[0xf] = pppppcStack_168;
        puVar11[0xe] = pppppcStack_170;
        puVar11[0x11] = pppppcStack_158;
        puVar11[0x10] = pppppcStack_160;
        puVar11[0x13] = pppppcStack_148;
        puVar11[0x12] = pppppcStack_150;
        puVar11[5] = pppppcStack_1b8;
        puVar11[4] = pppppcStack_1c0;
        puVar11[7] = ppppppuStack_1a8;
        puVar11[6] = pppppcStack_1b0;
        puVar11[9] = pppppcStack_198;
        puVar11[8] = pppppcStack_1a0;
        puVar11[0xb] = pppppppuStack_188;
        puVar11[10] = pppppcStack_190;
        puVar11[1] = pppppppcStack_1d8;
        *puVar11 = pppppcStack_1e0;
        puVar11[3] = pppppcStack_1c8;
        puVar11[2] = pppppcStack_1d0;
        param_1[0x60] = puVar11;
        puVar15 = &UNK_10b24f3b8;
        param_1[0x61] = &UNK_10b24f3b8;
        goto LAB_100b1494c;
      }
    }
    else {
      puVar11 = (undefined8 *)param_1[0x60];
      puVar15 = (undefined *)param_1[0x61];
LAB_100b1494c:
      iVar10 = (**(code **)(puVar15 + 0x18))(puVar11,param_2);
      if (iVar10 != 0) {
        uVar14 = 6;
        goto LAB_100b14960;
      }
      uVar13 = param_1[0x60];
      puVar11 = (undefined8 *)param_1[0x61];
      pcVar18 = (code *)*puVar11;
      if (pcVar18 != (code *)0x0) {
        (*pcVar18)(uVar13);
      }
      if (puVar11[1] != 0) {
        _free(uVar13);
      }
      lVar7 = *(long *)param_1[0x5e];
      *(long *)param_1[0x5e] = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E(param_1 + 0x5e);
      }
    }
    if (param_1[0x58] != 0) {
      _free(param_1[0x59]);
    }
    if ((param_1[0x55] != -0x8000000000000000) && (param_1[0x55] != 0)) {
      _free(param_1[0x56]);
    }
    if ((param_1[0x52] != -0x8000000000000000) && (param_1[0x52] != 0)) {
      _free(param_1[0x53]);
    }
    if (param_1[0x4f] != 0) {
      _free(param_1[0x50]);
    }
    if (param_1[0x4c] != 0) {
      _free(param_1[0x4d]);
    }
    if (param_1[0x49] != 0) {
      _free(param_1[0x4a]);
    }
    *(undefined1 *)((long)param_1 + 0x2de) = 0;
    if ((*(byte *)((long)param_1 + 0x2dd) & 1) != 0) {
      func_0x000100e1ce88(param_1 + 0x30);
    }
    pppppcVar23 = (char *****)0x0;
    *(undefined1 *)((long)param_1 + 0x2dd) = 0;
  }
  uVar13 = 0;
  *(undefined1 *)((long)param_1 + 0x2df) = 0;
  *(undefined1 *)((long)param_1 + 0x2dc) = 1;
LAB_100b14a54:
  auVar25._8_8_ = pppppcVar23;
  auVar25._0_8_ = uVar13;
  return auVar25;
}

