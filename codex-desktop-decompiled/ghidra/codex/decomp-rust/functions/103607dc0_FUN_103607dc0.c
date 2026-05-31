
undefined8 * FUN_103607dc0(long *param_1,long *param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined1 auVar29 [16];
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long *plStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long *plStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  lVar4 = *param_2;
  lVar13 = param_2[1];
  lVar19 = param_2[2];
  *param_2 = -0x8000000000000000;
  if (lVar4 == -0x8000000000000000) {
    puVar10 = (undefined8 *)_malloc(0x10);
    if (puVar10 == (undefined8 *)0x0) {
      uVar11 = func_0x0001087c9084(1,0x10);
      _free(lVar13);
      FUN_103380598(&lStack_a0);
      auVar29 = __Unwind_Resume(uVar11);
      plVar14 = auVar29._8_8_;
      plVar12 = auVar29._0_8_;
      lVar4 = *plVar14;
      lVar13 = plVar14[1];
      lVar19 = plVar14[2];
      *plVar14 = -0x8000000000000000;
      if (lVar4 == -0x8000000000000000) {
        puVar10 = (undefined8 *)_malloc(0x10);
        if (puVar10 == (undefined8 *)0x0) {
          uVar11 = func_0x0001087c9084(1,0x10);
          _free(lVar13);
          FUN_103380598(&lStack_140);
          auVar29 = __Unwind_Resume(uVar11);
          plVar14 = auVar29._8_8_;
          plVar12 = auVar29._0_8_;
          lVar4 = *plVar14;
          lVar13 = plVar14[1];
          lVar19 = plVar14[2];
          *plVar14 = -0x8000000000000000;
          if (lVar4 == -0x8000000000000000) {
            puVar10 = (undefined8 *)_malloc(0x10);
            if (puVar10 == (undefined8 *)0x0) {
              uVar11 = func_0x0001087c9084(1,0x10);
              _free(lVar13);
              FUN_103380598(&lStack_1e0);
              auVar29 = __Unwind_Resume(uVar11);
              plVar14 = auVar29._8_8_;
              plVar12 = auVar29._0_8_;
              lVar4 = *plVar14;
              lVar13 = plVar14[1];
              lVar19 = plVar14[2];
              *plVar14 = -0x8000000000000000;
              if (lVar4 == -0x8000000000000000) {
                puVar10 = (undefined8 *)_malloc(0x10);
                if (puVar10 == (undefined8 *)0x0) {
                  uVar11 = func_0x0001087c9084(1,0x10);
                  _free(lVar13);
                  FUN_103380598(&lStack_280);
                  auVar29 = __Unwind_Resume(uVar11);
                  puVar10 = auVar29._8_8_;
                  pbVar5 = *(byte **)(auVar29._0_8_ + 8);
                  pbVar18 = *(byte **)(auVar29._0_8_ + 0x10);
                  uVar6 = *(uint *)(puVar10 + 2);
                  if ((uVar6 & 0x18000000) != 0) {
                    if ((uVar6 >> 0x1c & 1) == 0) {
                      if (pbVar18 < (byte *)0x20) {
                        if (pbVar18 == (byte *)0x0) {
                          uVar15 = 0;
                        }
                        else {
                          if ((byte *)0x7 < pbVar18) {
                            pbVar16 = (byte *)((ulong)pbVar18 & 0x18);
                            uVar11 = *(undefined8 *)pbVar5;
                            uVar15 = (ulong)(-(-0x41 < (char)((ulong)uVar11 >> 0x30)) & 1);
                            uVar21 = (ulong)(-(-0x41 < (char)((ulong)uVar11 >> 0x38)) & 1);
                            uVar23 = (ulong)(-(-0x41 < (char)((ulong)uVar11 >> 0x20)) & 1);
                            uVar24 = (ulong)(-(-0x41 < (char)((ulong)uVar11 >> 0x28)) & 1);
                            uVar25 = (ulong)(-(-0x41 < (char)((ulong)uVar11 >> 0x10)) & 1);
                            uVar26 = (ulong)(-(-0x41 < (char)((ulong)uVar11 >> 0x18)) & 1);
                            uVar27 = (ulong)(-(-0x41 < (char)uVar11) & 1);
                            uVar28 = (ulong)(-(-0x41 < (char)((ulong)uVar11 >> 8)) & 1);
                            if (pbVar16 != (byte *)0x8) {
                              uVar11 = *(undefined8 *)(pbVar5 + 8);
                              uVar15 = uVar15 + (-(-0x41 < (char)((ulong)uVar11 >> 0x30)) & 1);
                              uVar21 = uVar21 + (-(-0x41 < (char)((ulong)uVar11 >> 0x38)) & 1);
                              uVar23 = uVar23 + (-(-0x41 < (char)((ulong)uVar11 >> 0x20)) & 1);
                              uVar24 = uVar24 + (-(-0x41 < (char)((ulong)uVar11 >> 0x28)) & 1);
                              uVar25 = uVar25 + (-(-0x41 < (char)((ulong)uVar11 >> 0x10)) & 1);
                              uVar26 = uVar26 + (-(-0x41 < (char)((ulong)uVar11 >> 0x18)) & 1);
                              uVar27 = uVar27 + (-(-0x41 < (char)uVar11) & 1);
                              uVar28 = uVar28 + (-(-0x41 < (char)((ulong)uVar11 >> 8)) & 1);
                              if (pbVar16 != (byte *)0x10) {
                                uVar11 = *(undefined8 *)(pbVar5 + 0x10);
                                uVar15 = uVar15 + (-(-0x41 < (char)((ulong)uVar11 >> 0x30)) & 1);
                                uVar21 = uVar21 + (-(-0x41 < (char)((ulong)uVar11 >> 0x38)) & 1);
                                uVar23 = uVar23 + (-(-0x41 < (char)((ulong)uVar11 >> 0x20)) & 1);
                                uVar24 = uVar24 + (-(-0x41 < (char)((ulong)uVar11 >> 0x28)) & 1);
                                uVar25 = uVar25 + (-(-0x41 < (char)((ulong)uVar11 >> 0x10)) & 1);
                                uVar26 = uVar26 + (-(-0x41 < (char)((ulong)uVar11 >> 0x18)) & 1);
                                uVar27 = uVar27 + (-(-0x41 < (char)uVar11) & 1);
                                uVar28 = uVar28 + (-(-0x41 < (char)((ulong)uVar11 >> 8)) & 1);
                              }
                            }
                            uVar15 = uVar27 + uVar23 + uVar25 + uVar15 +
                                     uVar28 + uVar24 + uVar26 + uVar21;
                            goto LAB_1055b9000;
                          }
                          pbVar16 = (byte *)0x0;
                          uVar15 = 0;
                          do {
                            if (-0x41 < (char)pbVar5[(long)pbVar16]) {
                              uVar15 = uVar15 + 1;
                            }
                            pbVar16 = pbVar16 + 1;
LAB_1055b9000:
                          } while (pbVar18 != pbVar16);
                        }
                      }
                      else {
                        uVar15 = __ZN4core3str5count14do_count_chars17haf03aa108601295cE
                                           (pbVar5,pbVar18);
                      }
                    }
                    else {
                      uVar15 = (ulong)*(ushort *)((long)puVar10 + 0x16);
                      if (uVar15 == 0) {
                        pbVar18 = (byte *)0x0;
                        uVar15 = 0;
                      }
                      else {
                        pbVar16 = pbVar5 + (long)pbVar18;
                        pbVar18 = (byte *)0x0;
                        uVar21 = uVar15;
                        pbVar17 = pbVar5;
                        do {
                          if (pbVar17 == pbVar16) break;
                          bVar7 = *pbVar17;
                          pbVar3 = pbVar17 + 3;
                          if (0xef < bVar7) {
                            pbVar3 = pbVar17 + 4;
                          }
                          pbVar2 = pbVar17 + 2;
                          if (0xdf < bVar7) {
                            pbVar2 = pbVar3;
                          }
                          pbVar3 = pbVar17 + 1;
                          if (((int)(char)bVar7 & 0x80000000U) != 0) {
                            pbVar3 = pbVar2;
                          }
                          pbVar18 = pbVar3 + ((long)pbVar18 - (long)pbVar17);
                          uVar21 = uVar21 - 1;
                          pbVar17 = pbVar3;
                        } while (uVar21 != 0);
                        uVar15 = uVar15 - uVar21;
                      }
                    }
                    if (uVar15 < *(ushort *)((long)puVar10 + 0x14)) {
                      uVar8 = (uint)*(ushort *)((long)puVar10 + 0x14) - (int)uVar15;
                      uVar20 = uVar6 >> 0x1d & 3;
                      uVar9 = uVar8 >> 1 & 0x7fff;
                      if (uVar20 != 2) {
                        uVar9 = 0;
                      }
                      uVar1 = 0;
                      if (uVar20 != 0) {
                        uVar1 = uVar8;
                      }
                      if (uVar20 < 2) {
                        uVar9 = uVar1;
                      }
                      uVar20 = 0;
                      uVar11 = *puVar10;
                      lVar4 = puVar10[1];
                      do {
                        if ((uVar9 & 0xffff) <= (uVar20 & 0xffff)) {
                          uVar15 = (**(code **)(lVar4 + 0x18))(uVar11,pbVar5,pbVar18);
                          if ((uVar15 & 1) != 0) {
                            return (undefined8 *)0x1;
                          }
                          uVar20 = 0;
                          do {
                            if ((uVar8 - uVar9 & 0xffff) <= (uVar20 & 0xffff)) {
                              return (undefined8 *)0x0;
                            }
                            uVar20 = uVar20 + 1;
                            uVar15 = (**(code **)(lVar4 + 0x20))(uVar11,uVar6 & 0x1fffff);
                          } while ((uVar15 & 1) == 0);
                          return (undefined8 *)0x1;
                        }
                        uVar20 = uVar20 + 1;
                        uVar15 = (**(code **)(lVar4 + 0x20))(uVar11,uVar6 & 0x1fffff);
                      } while ((uVar15 & 1) == 0);
                      return (undefined8 *)0x1;
                    }
                  }
                    /* WARNING: Could not recover jumptable at 0x0001055b9090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  puVar10 = (undefined8 *)(**(code **)(puVar10[1] + 0x18))(*puVar10,pbVar5,pbVar18);
                  return puVar10;
                }
                puVar10[1] = 0x676e697373696d20;
                *puVar10 = 0x73692065756c6176;
                *plVar12 = 0;
                plVar12[3] = 0x10;
                plVar12[4] = (long)puVar10;
                plVar12[6] = 0;
                plVar12[5] = 0x10;
                plVar12[8] = 0;
                plVar12[9] = 0;
                plVar12[7] = 8;
              }
              else {
                puVar10 = (undefined8 *)func_0x0001035cfdb4(plVar12,plVar14 + 3);
                if (*plVar12 == 2) {
                  if (lVar4 != 0) goto code_r0x000108aa97c4;
                }
                else {
                  plStack_248 = (long *)plVar12[7];
                  lStack_250 = plVar12[6];
                  lStack_238 = plVar12[9];
                  lVar22 = plVar12[8];
                  lStack_268 = plVar12[3];
                  lStack_270 = plVar12[2];
                  lStack_258 = plVar12[5];
                  lStack_260 = plVar12[4];
                  lStack_230 = plVar12[10];
                  lStack_278 = plVar12[1];
                  lStack_280 = *plVar12;
                  lStack_240 = lVar22;
                  if (lVar22 == lStack_250) {
                    puVar10 = (undefined8 *)
                              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE
                                        (&lStack_250);
                  }
                  plVar14 = plStack_248;
                  if (lVar22 != 0) {
                    puVar10 = (undefined8 *)_memmove(plStack_248 + 3,plStack_248,lVar22 * 0x18);
                  }
                  *plVar14 = lVar4;
                  plVar14[1] = lVar13;
                  plVar14[2] = lVar19;
                  plVar12[5] = lStack_258;
                  plVar12[4] = lStack_260;
                  plVar12[7] = (long)plStack_248;
                  plVar12[6] = lStack_250;
                  plVar12[10] = lStack_230;
                  plVar12[1] = lStack_278;
                  *plVar12 = lStack_280;
                  plVar12[3] = lStack_268;
                  plVar12[2] = lStack_270;
                  plVar12[9] = lStack_238;
                  plVar12[8] = lVar22 + 1;
                }
              }
              return puVar10;
            }
            puVar10[1] = 0x676e697373696d20;
            *puVar10 = 0x73692065756c6176;
            *plVar12 = 0;
            plVar12[3] = 0x10;
            plVar12[4] = (long)puVar10;
            plVar12[6] = 0;
            plVar12[5] = 0x10;
            plVar12[8] = 0;
            plVar12[9] = 0;
            plVar12[7] = 8;
          }
          else {
            puVar10 = (undefined8 *)func_0x0001035bae04(plVar12,plVar14 + 3);
            if (*plVar12 == 2) {
              if (lVar4 != 0) goto code_r0x000108aa97c4;
            }
            else {
              plStack_1a8 = (long *)plVar12[7];
              lStack_1b0 = plVar12[6];
              lStack_198 = plVar12[9];
              lVar22 = plVar12[8];
              lStack_1c8 = plVar12[3];
              lStack_1d0 = plVar12[2];
              lStack_1b8 = plVar12[5];
              lStack_1c0 = plVar12[4];
              lStack_190 = plVar12[10];
              lStack_1d8 = plVar12[1];
              lStack_1e0 = *plVar12;
              lStack_1a0 = lVar22;
              if (lVar22 == lStack_1b0) {
                puVar10 = (undefined8 *)
                          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE
                                    (&lStack_1b0);
              }
              plVar14 = plStack_1a8;
              if (lVar22 != 0) {
                puVar10 = (undefined8 *)_memmove(plStack_1a8 + 3,plStack_1a8,lVar22 * 0x18);
              }
              *plVar14 = lVar4;
              plVar14[1] = lVar13;
              plVar14[2] = lVar19;
              plVar12[5] = lStack_1b8;
              plVar12[4] = lStack_1c0;
              plVar12[7] = (long)plStack_1a8;
              plVar12[6] = lStack_1b0;
              plVar12[10] = lStack_190;
              plVar12[1] = lStack_1d8;
              *plVar12 = lStack_1e0;
              plVar12[3] = lStack_1c8;
              plVar12[2] = lStack_1d0;
              plVar12[9] = lStack_198;
              plVar12[8] = lVar22 + 1;
            }
          }
          return puVar10;
        }
        puVar10[1] = 0x676e697373696d20;
        *puVar10 = 0x73692065756c6176;
        *plVar12 = 0;
        plVar12[3] = 0x10;
        plVar12[4] = (long)puVar10;
        plVar12[6] = 0;
        plVar12[5] = 0x10;
        plVar12[8] = 0;
        plVar12[9] = 0;
        plVar12[7] = 8;
      }
      else {
        puVar10 = (undefined8 *)func_0x000102f530b0(plVar12,plVar14 + 3);
        if (*plVar12 == 2) {
          if (lVar4 != 0) goto code_r0x000108aa97c4;
        }
        else {
          plStack_108 = (long *)plVar12[7];
          lStack_110 = plVar12[6];
          lStack_f8 = plVar12[9];
          lVar22 = plVar12[8];
          lStack_128 = plVar12[3];
          lStack_130 = plVar12[2];
          lStack_118 = plVar12[5];
          lStack_120 = plVar12[4];
          lStack_f0 = plVar12[10];
          lStack_138 = plVar12[1];
          lStack_140 = *plVar12;
          lStack_100 = lVar22;
          if (lVar22 == lStack_110) {
            puVar10 = (undefined8 *)
                      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE
                                (&lStack_110);
          }
          plVar14 = plStack_108;
          if (lVar22 != 0) {
            puVar10 = (undefined8 *)_memmove(plStack_108 + 3,plStack_108,lVar22 * 0x18);
          }
          *plVar14 = lVar4;
          plVar14[1] = lVar13;
          plVar14[2] = lVar19;
          plVar12[5] = lStack_118;
          plVar12[4] = lStack_120;
          plVar12[7] = (long)plStack_108;
          plVar12[6] = lStack_110;
          plVar12[10] = lStack_f0;
          plVar12[1] = lStack_138;
          *plVar12 = lStack_140;
          plVar12[3] = lStack_128;
          plVar12[2] = lStack_130;
          plVar12[9] = lStack_f8;
          plVar12[8] = lVar22 + 1;
        }
      }
      return puVar10;
    }
    puVar10[1] = 0x676e697373696d20;
    *puVar10 = 0x73692065756c6176;
    *param_1 = 0;
    param_1[3] = 0x10;
    param_1[4] = (long)puVar10;
    param_1[6] = 0;
    param_1[5] = 0x10;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[7] = 8;
  }
  else {
    puVar10 = (undefined8 *)func_0x0001035d4ab0(param_1,param_2 + 3);
    if (*param_1 == 2) {
      if (lVar4 != 0) {
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar10 = (undefined8 *)(*(code *)PTR__free_10b61b0a8)(lVar13);
        return puVar10;
      }
    }
    else {
      plStack_68 = (long *)param_1[7];
      lStack_70 = param_1[6];
      lStack_58 = param_1[9];
      lVar22 = param_1[8];
      lStack_88 = param_1[3];
      lStack_90 = param_1[2];
      lStack_78 = param_1[5];
      lStack_80 = param_1[4];
      lStack_50 = param_1[10];
      lStack_98 = param_1[1];
      lStack_a0 = *param_1;
      lStack_60 = lVar22;
      if (lVar22 == lStack_70) {
        puVar10 = (undefined8 *)
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_70);
      }
      plVar12 = plStack_68;
      if (lVar22 != 0) {
        puVar10 = (undefined8 *)_memmove(plStack_68 + 3,plStack_68,lVar22 * 0x18);
      }
      *plVar12 = lVar4;
      plVar12[1] = lVar13;
      plVar12[2] = lVar19;
      param_1[5] = lStack_78;
      param_1[4] = lStack_80;
      param_1[7] = (long)plStack_68;
      param_1[6] = lStack_70;
      param_1[10] = lStack_50;
      param_1[1] = lStack_98;
      *param_1 = lStack_a0;
      param_1[3] = lStack_88;
      param_1[2] = lStack_90;
      param_1[9] = lStack_58;
      param_1[8] = lVar22 + 1;
    }
  }
  return puVar10;
}

