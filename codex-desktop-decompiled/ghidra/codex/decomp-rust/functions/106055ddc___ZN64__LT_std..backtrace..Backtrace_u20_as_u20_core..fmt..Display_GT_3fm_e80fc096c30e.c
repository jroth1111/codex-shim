
/* WARNING: Possible PIC construction at 0x0001060562e8: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */

undefined8
__ZN64__LT_std__backtrace__Backtrace_u20_as_u20_core__fmt__Display_GT_3fmt17h1e05e62dee5a747fE
          (long *param_1,undefined8 *param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  byte *pbVar12;
  undefined8 uVar13;
  byte *pbVar14;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar15;
  uint *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  uint uVar21;
  undefined8 unaff_x26;
  long lVar22;
  uint *puVar23;
  undefined8 *******pppppppuVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined1 auVar32 [16];
  undefined8 uStack_220;
  long lStack_218;
  byte *pbStack_210;
  byte *pbStack_208;
  long lStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  code *pcStack_1d8;
  undefined1 auStack_1d0 [8];
  uint *puStack_1c8;
  uint *puStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined8 *puStack_178;
  long *plStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined8 **ppuStack_150;
  undefined8 uStack_148;
  long **pplStack_140;
  undefined8 **ppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar20 = (undefined8 *)auStack_1d0;
  pppppppuVar24 = (undefined8 *******)&stack0xfffffffffffffff0;
  if (*param_1 == 0) {
    uVar9 = *param_2;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0x18);
    puVar11 = &UNK_109bd6ec5;
    uVar13 = 0x15;
  }
  else {
    if (*param_1 != 1) {
      if (param_1[5] == 0) {
        uVar5 = *(uint *)(param_2 + 2);
        puVar19 = (undefined8 *)param_1[3];
      }
      else {
        plStack_b0 = param_1 + 1;
        pplStack_140 = &plStack_b0;
        __ZN3std3sys4sync4once5queue4Once4call17h3e41a5ec638e0eddE
                  (param_1 + 5,1,&pplStack_140,&UNK_10b4ae1b0,&UNK_10b4ae170);
        uVar5 = *(uint *)(param_2 + 2);
        puVar19 = (undefined8 *)param_1[3];
        unaff_x20 = param_2;
      }
      if ((uVar5 >> 0x17 & 1) == 0) {
        puVar15 = (undefined8 *)param_1[4];
        if (puVar19 < puVar15) {
          uVar9 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                            (puVar15,puVar19,puVar19,&UNK_10b4aeca8);
          if (*(long *)(unaff_x22 + 8) != 0) {
            _free(unaff_x20);
          }
          _free(puVar19);
          uVar9 = __Unwind_Resume(uVar9);
          ppuStack_f0[3] = (undefined8 *)((long)ppuStack_f0[3] + 1);
          func_0x00010603d214(&lStack_1a0);
          __Unwind_Resume(uVar9);
          auVar32 = func_0x000108a07bc4();
          puVar15 = auVar32._8_8_;
          pcStack_1d8 = 
          __ZN64__LT_std__ffi__os_str__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h9b276ae677c3f105E
          ;
          lVar22 = auVar32._0_8_[1];
          puStack_1f0 = unaff_x20;
          puStack_1e8 = puVar19;
          pppppppuStack_1e0 = pppppppuVar24;
          if (lVar22 == 0) {
            pbVar12 = (byte *)0x1;
            pbVar14 = (byte *)0x0;
            UNRECOVERED_JUMPTABLE = pcStack_1d8;
          }
          else {
            uStack_220 = *auVar32._0_8_;
            lStack_218 = lVar22;
            while( true ) {
              __ZN87__LT_core__str__lossy__Utf8Chunks_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3c53a7c0d3887375E
                        (&pbStack_210,&uStack_220);
              if (pbStack_210 == (byte *)0x0) {
                return 0;
              }
              if (lStack_1f8 == 0) break;
              uVar10 = (**(code **)(puVar15[1] + 0x18))(*puVar15);
              if (((uVar10 & 1) != 0) ||
                 (uVar10 = (**(code **)(puVar15[1] + 0x20))(*puVar15,0xfffd), (uVar10 & 1) != 0)) {
                return 1;
              }
            }
            puVar20 = &uStack_220;
            pbVar12 = pbStack_210;
            pbVar14 = pbStack_208;
            puVar19 = puVar15;
            pppppppuVar24 = &pppppppuStack_1e0;
            UNRECOVERED_JUMPTABLE = (code *)0x1060562ec;
          }
          *(undefined8 *)((long)puVar20 + -0x50) = unaff_x26;
          *(undefined8 *)((long)puVar20 + -0x48) = unaff_x25;
          *(undefined8 *)((long)puVar20 + -0x40) = unaff_x24;
          *(undefined8 *)((long)puVar20 + -0x38) = unaff_x23;
          *(long *)((long)puVar20 + -0x30) = unaff_x22;
          *(undefined8 *)((long)puVar20 + -0x28) = uVar9;
          *(undefined8 **)((long)puVar20 + -0x20) = unaff_x20;
          *(undefined8 **)((long)puVar20 + -0x18) = puVar19;
          *(undefined8 ********)((long)puVar20 + -0x10) = pppppppuVar24;
          *(code **)((long)puVar20 + -8) = UNRECOVERED_JUMPTABLE;
          uVar5 = *(uint *)(puVar15 + 2);
          if ((uVar5 & 0x18000000) != 0) {
            if ((uVar5 >> 0x1c & 1) == 0) {
              if (pbVar14 < (byte *)0x20) {
                if (pbVar14 == (byte *)0x0) {
                  uVar10 = 0;
                }
                else {
                  if ((byte *)0x7 < pbVar14) {
                    pbVar17 = (byte *)((ulong)pbVar14 & 0x18);
                    uVar9 = *(undefined8 *)pbVar12;
                    uVar10 = (ulong)(-(-0x41 < (char)((ulong)uVar9 >> 0x30)) & 1);
                    uVar25 = (ulong)(-(-0x41 < (char)((ulong)uVar9 >> 0x38)) & 1);
                    uVar26 = (ulong)(-(-0x41 < (char)((ulong)uVar9 >> 0x20)) & 1);
                    uVar27 = (ulong)(-(-0x41 < (char)((ulong)uVar9 >> 0x28)) & 1);
                    uVar28 = (ulong)(-(-0x41 < (char)((ulong)uVar9 >> 0x10)) & 1);
                    uVar29 = (ulong)(-(-0x41 < (char)((ulong)uVar9 >> 0x18)) & 1);
                    uVar30 = (ulong)(-(-0x41 < (char)uVar9) & 1);
                    uVar31 = (ulong)(-(-0x41 < (char)((ulong)uVar9 >> 8)) & 1);
                    if (pbVar17 != (byte *)0x8) {
                      uVar9 = *(undefined8 *)(pbVar12 + 8);
                      uVar10 = uVar10 + (-(-0x41 < (char)((ulong)uVar9 >> 0x30)) & 1);
                      uVar25 = uVar25 + (-(-0x41 < (char)((ulong)uVar9 >> 0x38)) & 1);
                      uVar26 = uVar26 + (-(-0x41 < (char)((ulong)uVar9 >> 0x20)) & 1);
                      uVar27 = uVar27 + (-(-0x41 < (char)((ulong)uVar9 >> 0x28)) & 1);
                      uVar28 = uVar28 + (-(-0x41 < (char)((ulong)uVar9 >> 0x10)) & 1);
                      uVar29 = uVar29 + (-(-0x41 < (char)((ulong)uVar9 >> 0x18)) & 1);
                      uVar30 = uVar30 + (-(-0x41 < (char)uVar9) & 1);
                      uVar31 = uVar31 + (-(-0x41 < (char)((ulong)uVar9 >> 8)) & 1);
                      if (pbVar17 != (byte *)0x10) {
                        uVar9 = *(undefined8 *)(pbVar12 + 0x10);
                        uVar10 = uVar10 + (-(-0x41 < (char)((ulong)uVar9 >> 0x30)) & 1);
                        uVar25 = uVar25 + (-(-0x41 < (char)((ulong)uVar9 >> 0x38)) & 1);
                        uVar26 = uVar26 + (-(-0x41 < (char)((ulong)uVar9 >> 0x20)) & 1);
                        uVar27 = uVar27 + (-(-0x41 < (char)((ulong)uVar9 >> 0x28)) & 1);
                        uVar28 = uVar28 + (-(-0x41 < (char)((ulong)uVar9 >> 0x10)) & 1);
                        uVar29 = uVar29 + (-(-0x41 < (char)((ulong)uVar9 >> 0x18)) & 1);
                        uVar30 = uVar30 + (-(-0x41 < (char)uVar9) & 1);
                        uVar31 = uVar31 + (-(-0x41 < (char)((ulong)uVar9 >> 8)) & 1);
                      }
                    }
                    uVar10 = uVar30 + uVar26 + uVar28 + uVar10 + uVar31 + uVar27 + uVar29 + uVar25;
                    goto LAB_1055b9000;
                  }
                  pbVar17 = (byte *)0x0;
                  uVar10 = 0;
                  do {
                    if (-0x41 < (char)pbVar12[(long)pbVar17]) {
                      uVar10 = uVar10 + 1;
                    }
                    pbVar17 = pbVar17 + 1;
LAB_1055b9000:
                  } while (pbVar14 != pbVar17);
                }
              }
              else {
                uVar10 = __ZN4core3str5count14do_count_chars17haf03aa108601295cE(pbVar12,pbVar14);
              }
            }
            else {
              uVar10 = (ulong)*(ushort *)((long)puVar15 + 0x16);
              if (uVar10 == 0) {
                pbVar14 = (byte *)0x0;
                uVar10 = 0;
              }
              else {
                pbVar17 = pbVar12 + (long)pbVar14;
                pbVar14 = (byte *)0x0;
                uVar25 = uVar10;
                pbVar18 = pbVar12;
                do {
                  if (pbVar18 == pbVar17) break;
                  bVar6 = *pbVar18;
                  pbVar3 = pbVar18 + 3;
                  if (0xef < bVar6) {
                    pbVar3 = pbVar18 + 4;
                  }
                  pbVar2 = pbVar18 + 2;
                  if (0xdf < bVar6) {
                    pbVar2 = pbVar3;
                  }
                  pbVar3 = pbVar18 + 1;
                  if (((int)(char)bVar6 & 0x80000000U) != 0) {
                    pbVar3 = pbVar2;
                  }
                  pbVar14 = pbVar3 + ((long)pbVar14 - (long)pbVar18);
                  uVar25 = uVar25 - 1;
                  pbVar18 = pbVar3;
                } while (uVar25 != 0);
                uVar10 = uVar10 - uVar25;
              }
            }
            if (uVar10 < *(ushort *)((long)puVar15 + 0x14)) {
              uVar7 = (uint)*(ushort *)((long)puVar15 + 0x14) - (int)uVar10;
              uVar21 = uVar5 >> 0x1d & 3;
              uVar8 = uVar7 >> 1 & 0x7fff;
              if (uVar21 != 2) {
                uVar8 = 0;
              }
              uVar1 = 0;
              if (uVar21 != 0) {
                uVar1 = uVar7;
              }
              if (uVar21 < 2) {
                uVar8 = uVar1;
              }
              uVar21 = 0;
              uVar9 = *puVar15;
              lVar22 = puVar15[1];
              do {
                if ((uVar8 & 0xffff) <= (uVar21 & 0xffff)) {
                  uVar10 = (**(code **)(lVar22 + 0x18))(uVar9,pbVar12,pbVar14);
                  if ((uVar10 & 1) != 0) {
                    return 1;
                  }
                  uVar21 = 0;
                  do {
                    if ((uVar7 - uVar8 & 0xffff) <= (uVar21 & 0xffff)) {
                      return 0;
                    }
                    uVar21 = uVar21 + 1;
                    uVar10 = (**(code **)(lVar22 + 0x20))(uVar9,uVar5 & 0x1fffff);
                  } while ((uVar10 & 1) == 0);
                  return 1;
                }
                uVar21 = uVar21 + 1;
                uVar10 = (**(code **)(lVar22 + 0x20))(uVar9,uVar5 & 0x1fffff);
              } while ((uVar10 & 1) == 0);
              return 1;
            }
          }
                    /* WARNING: Could not recover jumptable at 0x0001055b9090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar9 = (**(code **)(puVar15[1] + 0x18))(*puVar15,pbVar12,pbVar14);
          return uVar9;
        }
        puVar23 = (uint *)(param_1[2] + (long)puVar15 * 0x38);
        puVar19 = (undefined8 *)((long)puVar19 - (long)puVar15);
      }
      else {
        puVar23 = (uint *)param_1[2];
      }
      __ZN3std3env11current_dir17he7f55ba519818f7aE(&lStack_1b8);
      uStack_188 = (undefined1)((uVar5 & 0x800000) >> 0x17);
      puStack_198 = puStack_1b0;
      lStack_1a0 = lStack_1b8;
      uStack_190 = uStack_1a8;
      plStack_170 = &lStack_1a0;
      puStack_168 = &UNK_10b4aecc0;
      uStack_160 = 0;
      puStack_178 = param_2;
      uStack_158 = uStack_188;
      if (puVar19 != (undefined8 *)0x0) {
        puStack_1c8 = puVar23 + (long)puVar19 * 0xe;
        puVar16 = puVar23 + 0xe;
        do {
          puStack_1c0 = puVar16;
          if (*(long *)(puVar23 + 0xc) == 0) {
            uStack_e8 = 0;
            uVar9 = *(undefined8 *)(puVar23 + 2);
            ppuStack_f0 = &puStack_178;
            if ((*puVar23 & 1) == 0) {
              uVar9 = __Unwind_GetIP(uVar9);
            }
            pplStack_140 = (long **)0x3;
            plStack_b0 = (long *)0x2;
            uVar10 = func_0x000106021688(&ppuStack_f0,uVar9,&pplStack_140,&plStack_b0,0);
            ppuStack_f0[3] = (undefined8 *)((long)ppuStack_f0[3] + 1);
            if ((uVar10 & 1) != 0) {
LAB_106056110:
              if (lStack_1a0 == -0x8000000000000000) {
                if (((ulong)puStack_198 & 3) != 1) {
                  return 1;
                }
                puVar20 = (undefined8 *)((long)puStack_198 + -1);
                uVar9 = *puVar20;
                puVar19 = *(undefined8 **)((long)puStack_198 + 7);
                UNRECOVERED_JUMPTABLE = (code *)*puVar19;
                if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                  (*UNRECOVERED_JUMPTABLE)(uVar9);
                }
                if (puVar19[1] != 0) {
                  _free(uVar9);
                }
              }
              else {
                puVar20 = puStack_198;
                if (lStack_1a0 == 0) {
                  return 1;
                }
              }
              _free(puVar20);
              return 1;
            }
          }
          else {
            lVar22 = *(long *)(puVar23 + 0xc) * 0x48;
            puVar20 = (undefined8 *)(*(long *)(puVar23 + 10) + 0x28);
            do {
              uStack_148 = 0;
              uVar9 = *(undefined8 *)(puVar23 + 2);
              ppuStack_150 = &puStack_178;
              if ((*puVar23 & 1) == 0) {
                uVar9 = __Unwind_GetIP(uVar9);
              }
              if (puVar20[-1] == -0x8000000000000000) {
                pplStack_140 = (long **)0x3;
                plStack_b0 = (long *)puVar20[-5];
              }
              else {
                uVar13 = *puVar20;
                uVar4 = puVar20[1];
                func_0x0001055bf348(&plStack_b0,uVar13,uVar4);
                if (((int)plStack_b0 == 1) ||
                   (func_0x000105cdaba4(&plStack_b0,ppuStack_a8,uStack_a0),
                   plStack_b0 == (long *)0x0)) {
                  pplStack_140 = (long **)0x2;
                }
                else {
                  uStack_e8 = uStack_a0;
                  ppuStack_f0 = ppuStack_a8;
                  uStack_d8 = uStack_90;
                  uStack_e0 = uStack_98;
                  uStack_c8 = uStack_80;
                  uStack_d0 = uStack_88;
                  uStack_c0 = uStack_78;
                  pplStack_140 = (long **)0x1;
                }
                plStack_b0 = (long *)puVar20[-5];
                uStack_100 = uVar13;
                uStack_f8 = uVar4;
                uStack_108 = uStack_c0;
                ppuStack_138 = ppuStack_f0;
                uStack_130 = uStack_e8;
                uStack_118 = uStack_d0;
                uStack_110 = uStack_c8;
                uStack_128 = uStack_e0;
                uStack_120 = uStack_d8;
              }
              if (plStack_b0 != (long *)0x2) {
                ppuStack_a8 = (undefined8 **)puVar20[-3];
                uStack_a0 = puVar20[-2];
              }
              uVar10 = func_0x000106021688(&ppuStack_150,uVar9,&pplStack_140,&plStack_b0,
                                           *(undefined4 *)(puVar20 + 2),
                                           *(undefined4 *)((long)puVar20 + 0x14),
                                           *(undefined4 *)(puVar20 + 3),
                                           *(undefined4 *)((long)puVar20 + 0x1c));
              ppuStack_150[3] = (undefined8 *)((long)ppuStack_150[3] + 1);
              if ((uVar10 & 1) != 0) goto LAB_106056110;
              puVar20 = puVar20 + 9;
              lVar22 = lVar22 + -0x48;
            } while (lVar22 != 0);
          }
          lVar22 = 0;
          if (puStack_1c0 != puStack_1c8) {
            lVar22 = 0x38;
          }
          puVar16 = (uint *)((long)puStack_1c0 + lVar22);
          puVar23 = puStack_1c0;
        } while (puStack_1c0 != puStack_1c8);
      }
      if (lStack_1a0 == -0x8000000000000000) {
        if (((ulong)puStack_198 & 3) != 1) {
          return 0;
        }
        puVar20 = (undefined8 *)((long)puStack_198 + -1);
        uVar9 = *puVar20;
        puVar19 = *(undefined8 **)((long)puStack_198 + 7);
        UNRECOVERED_JUMPTABLE = (code *)*puVar19;
        if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
          (*UNRECOVERED_JUMPTABLE)(uVar9);
        }
        if (puVar19[1] != 0) {
          _free(uVar9);
        }
      }
      else {
        puVar20 = puStack_198;
        if (lStack_1a0 == 0) {
          return 0;
        }
      }
      _free(puVar20);
      return 0;
    }
    uVar9 = *param_2;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0x18);
    puVar11 = &UNK_109bd6eda;
    uVar13 = 0x12;
  }
                    /* WARNING: Could not recover jumptable at 0x000106055e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (*UNRECOVERED_JUMPTABLE)(uVar9,puVar11,uVar13);
  return uVar9;
}

