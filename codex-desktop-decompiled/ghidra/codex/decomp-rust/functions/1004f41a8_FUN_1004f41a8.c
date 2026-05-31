
void FUN_1004f41a8(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  long *plVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 uVar10;
  uint uVar11;
  uint extraout_w8;
  long *plVar12;
  long lVar13;
  code *pcVar14;
  undefined8 unaff_x20;
  long lVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  undefined8 *puVar24;
  ulong uVar25;
  long *plVar26;
  long lVar27;
  undefined1 auVar28 [16];
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  ulong uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long **pplStack_170;
  code *pcStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
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
  long lStack_80;
  long lStack_78;
  
  bVar4 = *(byte *)((long)param_2 + 0xe5);
  if (bVar4 < 4) {
    if (bVar4 < 2) {
      if (bVar4 == 0) {
        *(undefined4 *)((long)param_2 + 0xe1) = 0;
        *param_2 = (long *)param_2[0x1a];
        param_2[1] = (long *)param_2[0x1b];
        *(undefined1 *)(param_2 + 0x1c) = *(undefined1 *)((long)param_2 + 0xe6);
        lVar27 = *(long *)param_2[0x1a];
        uVar19 = *(undefined8 *)(lVar27 + 0x3d8);
        param_2[0x24] = *(undefined8 *)(lVar27 + 0x3e0);
        param_2[0x23] = uVar19;
        lVar27 = *(long *)param_2[0x1b];
        uVar19 = *(undefined8 *)(lVar27 + 0x248);
        lVar27 = *(long *)(lVar27 + 0x250);
        if (lVar27 == 0) {
          lVar15 = 1;
        }
        else {
          lVar15 = _malloc(lVar27);
          if (lVar15 == 0) {
            FUN_107c03c64(1,lVar27);
            goto LAB_1004f5040;
          }
        }
        _memcpy(lVar15,uVar19,lVar27);
        param_2[0x1d] = lVar27;
        param_2[0x1e] = lVar15;
        param_2[0x1f] = lVar27;
        uVar19 = *(undefined8 *)(*(long *)param_2[1] + 0x3a8);
        lVar27 = *(long *)(*(long *)param_2[1] + 0x3b0);
        if (lVar27 == 0) {
          lVar15 = 1;
        }
        else {
          lVar15 = _malloc(lVar27);
          if (lVar15 == 0) {
            FUN_107c03c64(1,lVar27);
            goto LAB_1004f5040;
          }
        }
        _memcpy(lVar15,uVar19,lVar27);
        param_2[0x20] = lVar27;
        param_2[0x21] = lVar15;
        param_2[0x22] = lVar27;
        param_2[0x25] = *(long *)*param_2 + 0x10;
        *(undefined1 *)(param_2 + 0x27) = 0;
        goto LAB_1004f4348;
      }
      FUN_107c05cc0(&UNK_10b215a58);
LAB_1004f4fa4:
      FUN_107c03c64(1,unaff_x20);
      goto LAB_1004f5040;
    }
    if (bVar4 == 3) {
LAB_1004f4348:
      func_0x0001005a7878(&plStack_120,param_2 + 0x25,param_3);
      plVar2 = plStack_110;
      plVar9 = plStack_118;
      plVar12 = plStack_120;
      if (plStack_120 == (long *)0x8000000000000001) {
        *param_1 = -0x7ffffffffffffffe;
        uVar10 = 3;
        goto LAB_1004f4f18;
      }
      FUN_100d3e874(param_2 + 0x25);
      uVar19 = *(undefined8 *)(*(long *)param_2[1] + 0x48);
      lVar27 = *(long *)(*(long *)param_2[1] + 0x50);
      if (lVar27 == 0) {
        lVar15 = 1;
      }
      else {
        lVar15 = _malloc(lVar27);
        if (lVar15 == 0) {
          FUN_107c03c64(1,lVar27);
          goto LAB_1004f5040;
        }
      }
      _memcpy(lVar15,uVar19,lVar27);
      cVar5 = *(char *)(param_2 + 0x1c);
      unaff_x20 = 4;
      if (cVar5 == '\0') {
        unaff_x20 = 6;
      }
      lVar16 = _malloc(unaff_x20);
      if (lVar16 != 0) {
        puVar3 = &UNK_108cde354;
        if (cVar5 == '\0') {
          puVar3 = &UNK_108ca2bb1;
        }
        _memcpy(lVar16,puVar3,unaff_x20);
        *(undefined1 *)((long)param_2 + 0xe2) = 1;
        param_2[0x12] = param_2[0x24];
        param_2[0x11] = param_2[0x23];
        param_2[3] = param_2[0x1e];
        param_2[2] = param_2[0x1d];
        param_2[4] = param_2[0x1f];
        param_2[6] = param_2[0x21];
        param_2[5] = param_2[0x20];
        param_2[0xf] = plVar9;
        param_2[0x10] = plVar2;
        param_2[7] = param_2[0x22];
        param_2[8] = lVar27;
        param_2[9] = lVar15;
        param_2[10] = lVar27;
        param_2[0xb] = unaff_x20;
        param_2[0xc] = lVar16;
        param_2[0xd] = unaff_x20;
        param_2[0xe] = plVar12;
        plStack_120 = (long *)(*(long *)*param_2 + 0x4f0);
        auVar28 = FUN_1037cc704(&plStack_120);
        plVar12 = auVar28._8_8_;
        plStack_120 = auVar28._0_8_;
        plStack_118 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          lVar27 = *plStack_120;
          *plStack_120 = lVar27 + 1;
          if (lVar27 < 0) goto LAB_1004f5040;
          if ((long *)*plVar12 == plStack_120 + 2) {
            *plVar12 = 3;
          }
          else {
            lVar27 = *plStack_120;
            *plStack_120 = lVar27 + -1;
            LORelease();
            plStack_250 = plStack_120;
            if (lVar27 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E(&plStack_250);
            }
          }
        }
        plStack_140 = plStack_120;
        func_0x000103c97ba4(&uStack_278,plStack_120 + 2,param_2 + 2);
        *(undefined1 *)((long)param_2 + 0xe4) = 1;
        lVar27 = *plStack_140;
        *plStack_140 = lVar27 + -1;
        LORelease();
        if (lVar27 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E(&plStack_140);
        }
        *(undefined1 *)((long)param_2 + 0xe4) = 0;
        param_2[0x1e] = uStack_270;
        param_2[0x1d] = uStack_278;
        param_2[0x1f] = uStack_268;
        param_2[0x21] = param_2[1];
        param_2[0x20] = *param_2;
        *(undefined1 *)(param_2 + 0x359) = 0;
        goto LAB_1004f4528;
      }
      goto LAB_1004f4fa4;
    }
    FUN_107c05cc4(&UNK_10b215a58);
    uVar11 = extraout_w8;
LAB_1004f4290:
    if (uVar11 != 3) {
      FUN_107c05cc4(&UNK_10b21e030);
      goto LAB_1004f5040;
    }
    bVar4 = *(byte *)(param_2 + 0x87);
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        FUN_107c05cc0(&UNK_10b21df10);
        goto LAB_1004f5040;
      }
      plVar12 = (long *)param_2[0x41];
      goto LAB_1004f4650;
    }
    if (bVar4 != 3) {
      FUN_107c05cc4(&UNK_10b21df10);
      goto LAB_1004f5040;
    }
    bVar4 = *(byte *)(param_2 + 0x86);
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        FUN_107c05cc0(&UNK_10b21e000);
        goto LAB_1004f5040;
      }
      lVar27 = param_2[0x53];
      lVar15 = param_2[0x54];
      plVar12 = (long *)param_2[0x55];
      goto LAB_1004f46d8;
    }
    if (bVar4 != 3) {
      FUN_107c05cc4(&UNK_10b21e000);
      goto LAB_1004f5040;
    }
LAB_1004f48d0:
    FUN_1006c9aa4(&plStack_120,param_2 + 0x6a);
    if (plStack_120 != (long *)0x8000000000000000) {
      plStack_158 = plStack_118;
      plStack_160 = plStack_120;
      plStack_150 = plStack_110;
      FUN_100d594b0(param_2 + 0x6a);
      plVar23 = plStack_158;
      lVar27 = (long)plStack_150 * 0xd8;
      plVar2 = plStack_158 + (long)plStack_150 * 0x1b;
      plVar12 = plStack_158;
      lVar15 = lVar27;
      do {
        lVar16 = lVar15;
        if (lVar16 == 0) break;
        pbVar1 = (byte *)(plVar12 + 0x19);
        plVar12 = plVar12 + 0x1b;
        lVar15 = lVar16 + -0xd8;
      } while ((*pbVar1 & 1) == 0);
      plVar9 = param_1;
      if (plStack_150 == (long *)0x0) {
        lVar15 = -0x8000000000000000;
        plVar22 = plStack_160;
        plVar21 = plStack_158;
        plVar12 = plStack_158;
      }
      else {
        plVar21 = plStack_158 + 0x18;
        do {
          plVar26 = plVar23;
          plVar12 = plVar23;
          if (plVar21[-2] != -0x8000000000000000) {
            lVar15 = *plVar21;
            if (lVar15 == 0) {
              plVar9 = (long *)0x1;
              plVar22 = plStack_160;
              goto LAB_1004f4c20;
            }
            lVar13 = plVar21[-1];
            plVar9 = (long *)_malloc(lVar15);
            if (plVar9 == (long *)0x0) {
              FUN_107c03c64(1,lVar15);
              goto LAB_1004f5040;
            }
            _memcpy(plVar9,lVar13,lVar15);
            plVar22 = plStack_160;
            if (lVar15 != -0x8000000000000000) goto LAB_1004f4c20;
          }
          plVar21 = plVar21 + 0x1b;
          lVar27 = lVar27 + -0xd8;
        } while (lVar27 != 0);
        lVar15 = -0x8000000000000000;
        plVar22 = plStack_160;
LAB_1004f4c20:
        do {
          lStack_98 = plVar26[0x11];
          lStack_a0 = plVar26[0x10];
          lStack_88 = plVar26[0x13];
          lStack_90 = plVar26[0x12];
          lStack_78 = plVar26[0x15];
          lStack_80 = plVar26[0x14];
          lStack_d8 = plVar26[9];
          lStack_e0 = plVar26[8];
          lStack_c8 = plVar26[0xb];
          lStack_d0 = plVar26[10];
          lStack_b8 = plVar26[0xd];
          lStack_c0 = plVar26[0xc];
          lStack_a8 = plVar26[0xf];
          lStack_b0 = plVar26[0xe];
          plStack_118 = (long *)plVar26[1];
          plStack_120 = (long *)*plVar26;
          lStack_108 = plVar26[3];
          plStack_110 = (long *)plVar26[2];
          lStack_f8 = plVar26[5];
          lStack_100 = plVar26[4];
          lStack_e8 = plVar26[7];
          lStack_f0 = plVar26[6];
          if ((plVar26[0x16] & 0x7fffffffffffffffU) != 0) {
            _free(plVar26[0x17]);
          }
          plVar12[0x11] = lStack_98;
          plVar12[0x10] = lStack_a0;
          plVar12[0x13] = lStack_88;
          plVar12[0x12] = lStack_90;
          plVar12[0x15] = lStack_78;
          plVar12[0x14] = lStack_80;
          plVar12[9] = lStack_d8;
          plVar12[8] = lStack_e0;
          plVar12[0xb] = lStack_c8;
          plVar12[10] = lStack_d0;
          plVar12[0xd] = lStack_b8;
          plVar12[0xc] = lStack_c0;
          plVar12[0xf] = lStack_a8;
          plVar12[0xe] = lStack_b0;
          plVar12[1] = (long)plStack_118;
          *plVar12 = (long)plStack_120;
          plVar12[3] = lStack_108;
          plVar12[2] = (long)plStack_110;
          plVar12[5] = lStack_f8;
          plVar12[4] = lStack_100;
          plVar12[7] = lStack_e8;
          plVar12[6] = lStack_f0;
          plVar12 = plVar12 + 0x16;
          plVar26 = plVar26 + 0x1b;
          plVar21 = plVar2;
        } while (plVar26 != plVar2);
      }
      plStack_120 = plVar23;
      uVar18 = (long)plVar22 * 0xd8;
      plVar12 = (long *)(((ulong)((long)plVar12 - (long)plVar23) >> 4) * 0x2e8ba2e8ba2e8ba3);
      plStack_140 = (long *)0x8;
      plStack_138 = (long *)0x8;
      plStack_130 = (long *)0x0;
      uStack_128 = 8;
      plStack_118 = plVar12;
      plStack_110 = plVar22;
      if ((long)plVar2 - (long)plVar21 != 0) {
        uVar25 = (ulong)((long)plVar2 - (long)plVar21) / 0xd8;
        do {
          while (plVar21[0x13] == -0x8000000000000000 || plVar21[0x13] == 0) {
            FUN_100e0f8ec(plVar21);
            if ((plVar21[0x16] & 0x7fffffffffffffffU) == 0) goto LAB_1004f4cf4;
LAB_1004f4d24:
            _free(plVar21[0x17]);
            plVar21 = plVar21 + 0x1b;
            uVar25 = uVar25 - 1;
            if (uVar25 == 0) goto LAB_1004f4d38;
          }
          _free(plVar21[0x14]);
          FUN_100e0f8ec(plVar21);
          if ((plVar21[0x16] & 0x7fffffffffffffffU) != 0) goto LAB_1004f4d24;
LAB_1004f4cf4:
          plVar21 = plVar21 + 0x1b;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
LAB_1004f4d38:
      uVar25 = uVar18 / 0xb0;
      if ((plVar22 != (long *)0x0) && (uVar18 % 0xb0 != 0)) {
        if (uVar18 < 0xb0) {
          if (uVar18 != 0) {
            _free(plVar23);
          }
          plVar23 = (long *)0x8;
        }
        else {
          plVar23 = (long *)__RNvCshXwFllX56pT_7___rustc14___rust_realloc
                                      (plVar23,uVar18,8,uVar25 * 0xb0);
          if (plVar23 == (long *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,uVar25 * 0xb0);
LAB_1004f5040:
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x1004f5044);
            (*pcVar14)();
          }
        }
      }
      bVar6 = lVar16 != 0;
      *(undefined1 *)((long)param_2 + 0x433) = 0;
      *(undefined1 *)((long)param_2 + 0x431) = 0;
      if (param_2[0x59] != 0) {
        _free(param_2[0x5a]);
      }
      if ((param_2[0x62] != -0x8000000000000000) && (param_2[0x62] != 0)) {
        _free(param_2[99]);
      }
      if (param_2[0x5c] != 0) {
        _free(param_2[0x5d]);
      }
      if (param_2[0x5f] != 0) {
        _free(param_2[0x60]);
      }
      *(undefined1 *)((long)param_2 + 0x432) = 0;
      *(undefined1 *)(param_2 + 0x86) = 1;
LAB_1004f4e08:
      FUN_100e5e2cc(param_2 + 0x42);
      puVar17 = param_2 + 0x1d;
      *(undefined1 *)((long)param_2 + 0x439) = 0;
      *(undefined1 *)(param_2 + 0x87) = 1;
      *(undefined1 *)(param_2 + 0x88) = 1;
      *(undefined1 *)((long)param_2 + 0xe1) = 1;
      *(undefined1 *)((long)param_2 + 0xe3) = 1;
      param_2[0x13] = uVar25;
      param_2[0x14] = plVar23;
      param_2[0x15] = plVar12;
      param_2[0x16] = lVar15;
      param_2[0x17] = plVar9;
      param_2[0x18] = lVar15;
      *(bool *)(param_2 + 0x19) = bVar6;
      lVar27 = *(long *)*puVar17;
      *(long *)*puVar17 = lVar27 + -1;
      LORelease();
      if (lVar27 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E(puVar17);
      }
      *(undefined1 *)((long)param_2 + 0xe3) = 0;
      param_2[0x1e] = param_2[0x14];
      *puVar17 = param_2[0x13];
      param_2[0x1f] = param_2[0x15];
      param_2[0x21] = param_2[1];
      param_2[0x20] = *param_2;
      *(undefined1 *)(param_2 + 0x372) = 0;
LAB_1004f4e90:
      iVar7 = FUN_1004f68e8(param_2 + 0x1d,param_3);
      if (iVar7 == 0) {
        FUN_100ca19bc(param_2 + 0x1d);
        if (*(char *)(param_2 + 0x19) == '\x01') {
          *(undefined1 *)((long)param_2 + 0xe1) = 0;
          lVar27 = param_2[0x16];
          lStack_258 = param_2[0x18];
          lStack_260 = param_2[0x17];
        }
        else {
          if ((((*(byte *)((long)param_2 + 0xe1) & 1) != 0) &&
              (param_2[0x16] != -0x8000000000000000)) && (param_2[0x16] != 0)) {
            _free(param_2[0x17]);
          }
          lVar27 = -0x7fffffffffffffff;
        }
        *(undefined4 *)((long)param_2 + 0xe1) = 0;
        *param_1 = lVar27;
        param_1[2] = lStack_258;
        param_1[1] = lStack_260;
        uVar10 = 1;
      }
      else {
        *param_1 = -0x7ffffffffffffffe;
        uVar10 = 6;
      }
      goto LAB_1004f4f18;
    }
    *(undefined1 *)(param_2 + 0x86) = 3;
  }
  else {
    if (bVar4 != 4) {
      if (bVar4 == 5) {
        puStack_2a0 = param_2 + 0x88;
        bVar4 = *(byte *)(param_2 + 0x88);
        uVar11 = (uint)bVar4;
        if (1 < bVar4) goto LAB_1004f4290;
        if (bVar4 != 0) {
          FUN_107c05cc0(&UNK_10b21e030);
          goto LAB_1004f5040;
        }
        plVar12 = (long *)param_2[0x2f];
        goto LAB_1004f4608;
      }
      goto LAB_1004f4e90;
    }
LAB_1004f4528:
    iVar7 = FUN_1004f65a0(param_2 + 0x1d,param_3);
    if (iVar7 != 0) {
      *param_1 = -0x7ffffffffffffffe;
      uVar10 = 4;
      goto LAB_1004f4f18;
    }
    FUN_100c9749c(param_2 + 0x1d);
    plStack_120 = (long *)(*(long *)*param_2 + 0x4f0);
    auVar28 = FUN_1037cc704(&plStack_120);
    plVar12 = auVar28._8_8_;
    plStack_120 = auVar28._0_8_;
    plStack_118 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      lVar27 = *plStack_120;
      *plStack_120 = lVar27 + 1;
      if (lVar27 < 0) goto LAB_1004f5040;
      if ((long *)*plVar12 == plStack_120 + 2) {
        *plVar12 = 3;
      }
      else {
        lVar27 = *plStack_120;
        *plStack_120 = lVar27 + -1;
        LORelease();
        if (lVar27 == 1) {
          DataMemoryBarrier(2,1);
          plStack_250 = plStack_120;
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E(&plStack_250);
        }
      }
    }
    param_2[0x1d] = plStack_120;
    plVar12 = plStack_120 + 2;
    *(undefined1 *)((long)param_2 + 0xe2) = 0;
    param_2[0x2b] = param_2[0xf];
    param_2[0x2a] = param_2[0xe];
    param_2[0x2d] = param_2[0x11];
    param_2[0x2c] = param_2[0x10];
    param_2[0x23] = param_2[7];
    param_2[0x22] = param_2[6];
    param_2[0x25] = param_2[9];
    param_2[0x24] = param_2[8];
    param_2[0x27] = param_2[0xb];
    param_2[0x26] = param_2[10];
    param_2[0x29] = param_2[0xd];
    param_2[0x28] = param_2[0xc];
    param_2[0x1f] = param_2[3];
    param_2[0x1e] = param_2[2];
    param_2[0x21] = param_2[5];
    param_2[0x20] = param_2[4];
    param_2[0x2e] = param_2[0x12];
    param_2[0x2f] = plVar12;
    *(undefined1 *)(param_2 + 0x88) = 0;
LAB_1004f4608:
    puStack_2a0 = param_2 + 0x88;
    plVar12 = plVar12 + 3;
    param_2[0x3d] = param_2[0x2b];
    param_2[0x3c] = param_2[0x2a];
    param_2[0x3f] = param_2[0x2d];
    param_2[0x3e] = param_2[0x2c];
    param_2[0x40] = param_2[0x2e];
    param_2[0x35] = param_2[0x23];
    param_2[0x34] = param_2[0x22];
    param_2[0x37] = param_2[0x25];
    param_2[0x36] = param_2[0x24];
    param_2[0x39] = param_2[0x27];
    param_2[0x38] = param_2[0x26];
    param_2[0x3b] = param_2[0x29];
    param_2[0x3a] = param_2[0x28];
    param_2[0x31] = param_2[0x1f];
    param_2[0x30] = param_2[0x1e];
    param_2[0x33] = param_2[0x21];
    param_2[0x32] = param_2[0x20];
    param_2[0x41] = plVar12;
    *(undefined1 *)(param_2 + 0x87) = 0;
LAB_1004f4650:
    *(undefined1 *)((long)param_2 + 0x439) = 1;
    uStack_228 = param_2[0x35];
    uStack_230 = param_2[0x34];
    uStack_218 = param_2[0x37];
    uStack_220 = param_2[0x36];
    uStack_1d0 = param_2[0x40];
    uStack_1e8 = param_2[0x3d];
    uStack_1f0 = param_2[0x3c];
    uStack_1d8 = param_2[0x3f];
    uStack_1e0 = param_2[0x3e];
    uStack_208 = param_2[0x39];
    uStack_210 = param_2[0x38];
    uStack_1f8 = param_2[0x3b];
    uStack_200 = param_2[0x3a];
    uStack_248 = param_2[0x31];
    plStack_250 = (long *)param_2[0x30];
    uStack_238 = param_2[0x33];
    uStack_240 = param_2[0x32];
    lVar27 = plVar12[1];
    lVar15 = plVar12[2];
    param_2[0x4f] = param_2[0x3d];
    param_2[0x4e] = param_2[0x3c];
    param_2[0x51] = param_2[0x3f];
    param_2[0x50] = param_2[0x3e];
    param_2[0x47] = param_2[0x35];
    param_2[0x46] = param_2[0x34];
    param_2[0x49] = param_2[0x37];
    param_2[0x48] = param_2[0x36];
    param_2[0x4b] = param_2[0x39];
    param_2[0x4a] = param_2[0x38];
    param_2[0x4d] = param_2[0x3b];
    param_2[0x4c] = param_2[0x3a];
    plVar12 = plVar12 + 6;
    *(undefined1 *)((long)param_2 + 0x439) = 0;
    param_2[0x52] = param_2[0x40];
    param_2[0x43] = param_2[0x31];
    param_2[0x42] = param_2[0x30];
    param_2[0x45] = param_2[0x33];
    param_2[0x44] = param_2[0x32];
    param_2[0x53] = lVar27;
    param_2[0x54] = lVar15;
    param_2[0x55] = plVar12;
    *(undefined1 *)(param_2 + 0x86) = 0;
LAB_1004f46d8:
    *(undefined2 *)((long)param_2 + 0x431) = 0x100;
    *(undefined1 *)((long)param_2 + 0x433) = 0;
    param_2[99] = param_2[0x4f];
    param_2[0x62] = param_2[0x4e];
    param_2[0x65] = param_2[0x51];
    param_2[100] = param_2[0x50];
    param_2[0x66] = param_2[0x52];
    param_2[0x5b] = param_2[0x47];
    param_2[0x5a] = param_2[0x46];
    param_2[0x5d] = param_2[0x49];
    param_2[0x5c] = param_2[0x48];
    param_2[0x5f] = param_2[0x4b];
    param_2[0x5e] = param_2[0x4a];
    param_2[0x61] = param_2[0x4d];
    param_2[0x60] = param_2[0x4c];
    param_2[0x57] = param_2[0x43];
    param_2[0x56] = param_2[0x42];
    param_2[0x59] = param_2[0x45];
    param_2[0x58] = param_2[0x44];
    uVar19 = param_2[0x60];
    uVar20 = param_2[0x61];
    puVar8 = (undefined8 *)_malloc(0x10);
    if (puVar8 == (undefined8 *)0x0) {
      FUN_107c03c64(8,0x10);
      goto LAB_1004f5040;
    }
    plVar9 = param_2 + 0x67;
    *puVar8 = uVar19;
    puVar8[1] = uVar20;
    __ZN11codex_hooks6engine10dispatcher34select_handlers_for_matcher_inputs17h1c684c5df70e7282E
              (plVar9,lVar27,lVar15,3,puVar8,1);
    plVar2 = param_2 + 0x56;
    _free(puVar8);
    *(undefined1 *)((long)param_2 + 0x431) = 1;
    if (param_2[0x69] == 0) {
      lVar27 = param_2[0x68];
      lVar15 = *plVar9;
      uVar25 = 0;
      plVar12 = (long *)0x0;
      plVar23 = (long *)0x8;
joined_r0x0001004f4854:
      if (lVar15 != 0) {
        _free(lVar27);
      }
    }
    else {
      func_0x000103c962c8(&lStack_1c8,plVar2);
      if (lStack_1c8 != -0x8000000000000000) {
        *(undefined2 *)((long)param_2 + 0x431) = 0;
        *(undefined1 *)((long)param_2 + 0x433) = 0;
        param_2[0x6b] = param_2[0x68];
        param_2[0x6a] = *plVar9;
        param_2[0x6c] = param_2[0x69];
        param_2[0x6d] = lStack_1c8;
        param_2[0x6e] = plStack_1c0;
        param_2[0x6f] = uStack_1b8;
        param_2[0x71] = param_2[0x57];
        param_2[0x70] = *plVar2;
        param_2[0x72] = param_2[0x58];
        param_2[0x73] = plVar12;
        param_2[0x74] = param_2[0x5a];
        param_2[0x75] = param_2[0x5b];
        param_2[0x76] = &__ZN11codex_hooks6events7compact19parse_pre_completed17h562061c7c11db069E;
        *(undefined1 *)(param_2 + 0x85) = 0;
        goto LAB_1004f48d0;
      }
      plStack_1b0 = plStack_1c0;
      *(undefined1 *)((long)param_2 + 0x431) = 0;
      uStack_188 = param_2[0x68];
      lStack_190 = *plVar9;
      uStack_180 = param_2[0x69];
      *(undefined1 *)((long)param_2 + 0x432) = 0;
      plStack_158 = (long *)param_2[0x57];
      plStack_160 = (long *)*plVar2;
      plStack_150 = (long *)param_2[0x58];
      pplStack_170 = &plStack_1b0;
      pcStack_168 = 
      __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&plStack_120,s__failed_to_serialize_pre_compact_108ac331b,&pplStack_170);
      plStack_138 = plStack_118;
      plStack_140 = plStack_120;
      plStack_130 = plStack_110;
      __ZN11codex_hooks6events6common33serialization_failure_hook_events17hfa8430faf905ecd9E
                (&uStack_1a8,&lStack_190,&plStack_160,&plStack_140);
      plVar12 = plStack_1b0;
      if (*plStack_1b0 == 1) {
        uVar25 = plStack_1b0[1];
        if ((uVar25 & 3) == 1) {
          puVar24 = (undefined8 *)(uVar25 - 1);
          uVar19 = *puVar24;
          puVar8 = *(undefined8 **)(uVar25 + 7);
          pcVar14 = (code *)*puVar8;
          if (pcVar14 != (code *)0x0) {
            (*pcVar14)(uVar19);
          }
          if (puVar8[1] != 0) {
            _free(uVar19);
          }
          goto LAB_1004f4830;
        }
      }
      else if ((*plStack_1b0 == 0) && (plStack_1b0[2] != 0)) {
        puVar24 = (undefined8 *)plStack_1b0[1];
LAB_1004f4830:
        _free(puVar24);
      }
      _free(plVar12);
      *(undefined1 *)((long)param_2 + 0x433) = 0;
      uVar25 = uStack_1a8;
      plVar23 = plStack_1a0;
      plVar12 = plStack_198;
      if ((*(byte *)((long)param_2 + 0x431) & 1) != 0) {
        lVar15 = param_2[0x69];
        lVar27 = param_2[0x68];
        if (lVar15 != 0) {
          lVar16 = 0;
          do {
            plVar21 = (long *)(lVar27 + lVar16);
            if (plVar21[6] == -0x8000000000000000 || plVar21[6] == 0) {
              lVar13 = *plVar21;
            }
            else {
              _free(plVar21[7]);
              lVar13 = *plVar21;
            }
            if (lVar13 != 0) {
              _free(*(undefined8 *)(lVar27 + lVar16 + 8));
            }
            lVar13 = lVar27 + lVar16;
            if (*(long *)(lVar13 + 0x48) == -0x8000000000000000 || *(long *)(lVar13 + 0x48) == 0) {
              lVar13 = *(long *)(lVar13 + 0x18);
            }
            else {
              _free(*(undefined8 *)(lVar13 + 0x50));
              lVar13 = *(long *)(lVar13 + 0x18);
            }
            if (lVar13 != 0) {
              _free(*(undefined8 *)(lVar27 + lVar16 + 0x20));
            }
            FUN_100cb56bc(lVar27 + lVar16 + 0x60);
            lVar16 = lVar16 + 0xa8;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        lVar15 = *plVar9;
        goto joined_r0x0001004f4854;
      }
    }
    *(undefined1 *)((long)param_2 + 0x431) = 0;
    if (((*(byte *)((long)param_2 + 0x432) & 1) != 0) && (*plVar2 != 0)) {
      _free(param_2[0x57]);
    }
    if (param_2[0x59] != 0) {
      _free(param_2[0x5a]);
    }
    if ((param_2[0x62] != -0x8000000000000000) && (param_2[0x62] != 0)) {
      _free(param_2[99]);
    }
    if (param_2[0x5c] != 0) {
      _free(param_2[0x5d]);
    }
    if (param_2[0x5f] != 0) {
      _free(param_2[0x60]);
    }
    *(undefined1 *)((long)param_2 + 0x432) = 0;
    *(undefined1 *)(param_2 + 0x86) = 1;
    lVar15 = -0x8000000000000000;
    if (uVar25 != 0x8000000000000000) {
      bVar6 = false;
      goto LAB_1004f4e08;
    }
  }
  puStack_2a8 = param_2 + 0x87;
  *(undefined1 *)puStack_2a8 = 3;
  *(undefined1 *)puStack_2a0 = 3;
  *param_1 = -0x7ffffffffffffffe;
  uVar10 = 5;
LAB_1004f4f18:
  *(undefined1 *)((long)param_2 + 0xe5) = uVar10;
  return;
}

