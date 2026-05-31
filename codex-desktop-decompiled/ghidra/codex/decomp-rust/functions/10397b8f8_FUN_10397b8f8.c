
undefined8 * FUN_10397b8f8(long *param_1,long *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  byte *pbVar5;
  byte bVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  code *pcVar20;
  byte *pbVar21;
  byte *pbVar22;
  uint uVar23;
  byte *pbVar24;
  long lVar25;
  undefined1 auVar26 [16];
  undefined4 auStack_180 [3];
  byte bStack_174;
  byte bStack_173;
  byte *pbStack_170;
  byte *pbStack_168;
  ulong uStack_160;
  byte *pbStack_158;
  undefined1 **ppuStack_150;
  undefined8 uStack_148;
  long lStack_140;
  code *pcStack_138;
  ulong uStack_130;
  ulong uStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  undefined4 auStack_110 [3];
  byte bStack_104;
  byte bStack_103;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
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
  
  lVar15 = *param_2;
  lVar4 = param_2[1];
  lVar19 = param_2[2];
  *param_2 = -0x8000000000000000;
  if (lVar15 != -0x8000000000000000) {
    puVar8 = (undefined8 *)func_0x000103975c7c(param_1,param_2 + 3);
    if (*param_1 == 2) {
      if (lVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar8 = (undefined8 *)(*(code *)PTR__free_10b61b0a8)(lVar4);
        return puVar8;
      }
    }
    else {
      plStack_68 = (long *)param_1[7];
      lStack_70 = param_1[6];
      lStack_58 = param_1[9];
      lVar25 = param_1[8];
      lStack_88 = param_1[3];
      lStack_90 = param_1[2];
      lStack_78 = param_1[5];
      lStack_80 = param_1[4];
      lStack_50 = param_1[10];
      lStack_98 = param_1[1];
      lStack_a0 = *param_1;
      lStack_60 = lVar25;
      if (lVar25 == lStack_70) {
        puVar8 = (undefined8 *)
                 __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_70);
      }
      plVar7 = plStack_68;
      if (lVar25 != 0) {
        puVar8 = (undefined8 *)_memmove(plStack_68 + 3,plStack_68,lVar25 * 0x18);
      }
      *plVar7 = lVar15;
      plVar7[1] = lVar4;
      plVar7[2] = lVar19;
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
      param_1[8] = lVar25 + 1;
    }
    return puVar8;
  }
  puVar8 = (undefined8 *)_malloc(0x10);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = 0x676e697373696d20;
    *puVar8 = 0x73692065756c6176;
    *param_1 = 0;
    param_1[3] = 0x10;
    param_1[4] = (long)puVar8;
    param_1[6] = 0;
    param_1[5] = 0x10;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[7] = 8;
    return puVar8;
  }
  uVar9 = func_0x0001087c9084(1,0x10);
  _free(lVar4);
  FUN_103938e08(&lStack_a0);
  auVar26 = __Unwind_Resume(uVar9);
  pbVar14 = *(byte **)(auVar26._0_8_ + 8);
  pbVar5 = *(byte **)(auVar26._0_8_ + 0x10);
  uStack_a8 = 0x10397ba88;
  uVar13 = *auVar26._8_8_;
  uVar12 = auVar26._8_8_[1];
  pcVar20 = *(code **)(uVar12 + 0x20);
  puStack_b0 = &stack0xfffffffffffffff0;
  uVar10 = (*pcVar20)(uVar13,0x22);
  if ((uVar10 & 1) == 0) {
    if (pbVar5 == (byte *)0x0) {
      uVar10 = (**(code **)(uVar12 + 0x18))(uVar13,pbVar14,0);
    }
    else {
      pbVar18 = (byte *)0x0;
      pbVar21 = (byte *)0x0;
      lStack_140 = -(long)pbVar5;
      pbVar16 = pbVar5;
      pbVar24 = (byte *)0x0;
      pcStack_138 = pcVar20;
      uStack_130 = uVar12;
      uStack_128 = uVar13;
      pbStack_120 = pbVar14;
      do {
        while( true ) {
          pbVar17 = (byte *)0x0;
          pbVar1 = pbVar14 + (long)pbVar16;
          while( true ) {
            bVar6 = pbVar14[(long)pbVar17];
            if (((bVar6 - 0x7f < 0xffffffa1) || (bVar6 == 0x22)) || (bVar6 == 0x5c)) break;
            pbVar17 = pbVar17 + 1;
            if (pbVar16 == pbVar17) {
              pbVar22 = pbVar16 + (long)pbVar24;
              goto LAB_1055b32f0;
            }
          }
          pbVar22 = pbVar24 + (long)pbVar17;
          pbVar16 = pbVar14 + (long)pbVar17;
          uVar23 = (uint)*pbVar16;
          pbVar2 = pbVar16 + 1;
          pbStack_118 = pbVar1;
          if ((char)*pbVar16 < '\0') break;
LAB_1055b31c4:
          pbVar14 = pbVar2;
          FUN_1055bf5bc(auStack_110,uVar23,0x10001);
          bVar6 = bStack_103;
          uVar12 = uStack_128;
          uVar10 = (ulong)bStack_103;
          uVar13 = (ulong)bStack_104;
          if ((byte)(bStack_103 - bStack_104) != '\x01') {
            if (pbVar22 < pbVar21) goto LAB_1055b33b8;
            if (pbVar21 != (byte *)0x0) {
              if (pbVar21 < pbVar5) {
                if (-0x41 < (char)pbStack_120[(long)pbVar21]) goto LAB_1055b3218;
              }
              else if (pbVar21 == pbVar5) goto LAB_1055b3218;
              goto LAB_1055b33b8;
            }
LAB_1055b3218:
            if (pbVar22 != (byte *)0x0) {
              if (pbVar22 < pbVar5) {
                if ((char)(pbStack_120 + (long)pbVar24)[(long)pbVar17] < -0x40) {
LAB_1055b33b8:
                  __ZN4core3str16slice_error_fail17h7d5f7302866db666E
                            (pbStack_120,pbVar5,pbVar21,pbVar24 + (long)pbVar17,&UNK_10b3922a0);
                  goto LAB_1055b33d4;
                }
              }
              else if (pbVar22 + lStack_140 != (byte *)0x0) goto LAB_1055b33b8;
            }
            pcVar20 = *(code **)(uStack_130 + 0x18);
            uVar11 = (*pcVar20)(uStack_128,pbStack_120 + (long)pbVar21,
                                pbVar17 + ((long)pbVar24 - (long)pbVar21));
            if ((uVar11 & 1) != 0) {
              return (undefined8 *)0x1;
            }
            if (bVar6 < 0x81) {
              uVar12 = (*pcVar20)(uVar12,(long)auStack_110 + uVar13,uVar10 - uVar13);
            }
            else {
              uVar12 = (*pcStack_138)(uVar12,auStack_110[0]);
            }
            if ((uVar12 & 1) != 0) {
              return (undefined8 *)0x1;
            }
            if (uVar23 < 0x80) {
              lVar15 = 1;
            }
            else if (uVar23 < 0x800) {
              lVar15 = 2;
            }
            else {
              lVar15 = 3;
              if (0xffff < uVar23) {
                lVar15 = 4;
              }
            }
            pbVar18 = pbVar24 + (long)pbVar17 + lVar15;
            pbVar21 = pbVar18;
          }
          lVar15 = 3;
          if (0xffff < uVar23) {
            lVar15 = 4;
          }
          lVar4 = 2;
          if (0x7ff < uVar23) {
            lVar4 = lVar15;
          }
          lVar15 = 1;
          if (0x7f < uVar23) {
            lVar15 = lVar4;
          }
          pbVar22 = pbVar24 + (long)pbVar17 + lVar15;
          pbVar16 = pbStack_118 + -(long)pbVar14;
          pbVar24 = pbVar22;
          if (pbVar16 == (byte *)0x0) goto LAB_1055b32f0;
        }
        uVar3 = pbVar16[1] & 0x3f;
        if (uVar23 < 0xe0) {
          uVar23 = uVar3 | (uVar23 & 0x1f) << 6;
          pbVar2 = pbVar16 + 2;
          goto LAB_1055b31c4;
        }
        pbVar2 = pbVar14 + (long)pbVar17;
        uVar3 = pbVar16[2] & 0x3f | uVar3 << 6;
        if (uVar23 < 0xf0) {
          uVar23 = uVar3 | (uVar23 & 0x1f) << 0xc;
          pbVar2 = pbVar2 + 3;
          goto LAB_1055b31c4;
        }
        pbVar14 = pbVar2 + 4;
        uVar23 = pbVar2[3] & 0x3f | uVar3 << 6 | (uVar23 & 7) << 0x12;
        pbVar2 = pbVar14;
        if (uVar23 != 0x110000) goto LAB_1055b31c4;
        pbVar16 = pbVar1 + -(long)pbVar14;
        pbVar24 = pbVar22;
      } while (pbVar16 != (byte *)0x0);
LAB_1055b32f0:
      uVar12 = uStack_128;
      pcVar20 = pcStack_138;
      pbVar17 = pbStack_120;
      if (pbVar22 < pbVar18) goto LAB_1055b33d4;
      if (pbVar18 != (byte *)0x0) {
        if (pbVar18 < pbVar5) {
          if ((char)pbStack_120[(long)pbVar18] < -0x40) goto LAB_1055b33d4;
        }
        else if (pbVar18 != pbVar5) goto LAB_1055b33d4;
      }
      if (pbVar22 == (byte *)0x0) {
        pbVar14 = (byte *)0x0;
      }
      else if (pbVar22 < pbVar5) {
        pbVar14 = pbVar22;
        if ((char)pbStack_120[(long)pbVar22] < -0x40) {
LAB_1055b33d4:
          auVar26 = __ZN4core3str16slice_error_fail17h7d5f7302866db666E
                              (pbVar17,pbVar5,pbVar18,pbVar22,&UNK_10b3922b8);
          uStack_148 = 0x1055b33f0;
          uVar9 = *auVar26._8_8_;
          lVar15 = auVar26._8_8_[1];
          pcVar20 = *(code **)(lVar15 + 0x20);
          pbStack_170 = pbVar18;
          pbStack_168 = pbVar5;
          uStack_160 = uVar13;
          pbStack_158 = pbVar17;
          ppuStack_150 = &puStack_b0;
          uVar13 = (*pcVar20)(uVar9,0x27);
          if ((uVar13 & 1) == 0) {
            FUN_1055bf5bc(auStack_180,*auVar26._0_8_,0x101);
            if ((ulong)bStack_173 < 0x81) {
              uVar13 = (**(code **)(lVar15 + 0x18))
                                 (uVar9,(long)auStack_180 + (ulong)bStack_174,
                                  (ulong)bStack_173 - (ulong)bStack_174);
            }
            else {
              uVar13 = (*pcVar20)(uVar9,auStack_180[0]);
            }
            if ((uVar13 & 1) == 0) {
              puVar8 = (undefined8 *)(*pcVar20)(uVar9,0x27);
              return puVar8;
            }
          }
          return (undefined8 *)0x1;
        }
      }
      else {
        pbVar14 = pbVar5;
        if (pbVar22 != pbVar5) goto LAB_1055b33d4;
      }
      uVar10 = (**(code **)(uStack_130 + 0x18))
                         (uStack_128,pbStack_120 + (long)pbVar18,(long)pbVar14 - (long)pbVar18);
      uVar13 = uVar12;
    }
    if ((uVar10 & 1) == 0) {
      puVar8 = (undefined8 *)(*pcVar20)(uVar13,0x22);
      return puVar8;
    }
  }
  return (undefined8 *)0x1;
}

