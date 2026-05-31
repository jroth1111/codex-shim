
undefined8 *
__ZN19codex_memories_read9citations31thread_ids_from_memory_citation17h6e634c2503f1b062E
          (long *param_1,undefined8 *param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  long lVar17;
  long *plVar18;
  byte *pbVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined4 *puVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined1 auVar32 [16];
  long lStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  byte bStack_68;
  undefined4 uStack_67;
  undefined3 uStack_63;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  
  lVar17 = param_2[5];
  if (lVar17 == 0) {
LAB_103f00004:
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
  }
  else {
    lVar20 = param_2[4];
    __ZN4uuid6parser9try_parse17h0845fad6e03f8b34E
              (&bStack_68,*(undefined8 *)(lVar20 + 8),*(undefined8 *)(lVar20 + 0x10));
    if ((bStack_68 & 1) == 0) {
      uStack_88._3_1_ = (undefined1)uStack_60;
      uStack_84 = (undefined4)((ulong)uStack_60 >> 8);
      uStack_80._0_3_ = (undefined3)((ulong)uStack_60 >> 0x28);
      uStack_80 = CONCAT13(uStack_58,(undefined3)uStack_80);
      puStack_d8 = (undefined8 *)CONCAT44(uStack_80,uStack_84);
      lStack_e0 = CONCAT44(CONCAT13(uStack_88._3_1_,uStack_63),uStack_67);
    }
    else {
      param_2 = (undefined8 *)FUN_1062419dc(&iStack_90,uStack_60,CONCAT71(uStack_57,uStack_58));
      puStack_d8 = (undefined8 *)CONCAT44(uStack_80,uStack_84);
      lStack_e0 = CONCAT44(uStack_88,uStack_8c);
      if (iStack_90 != 9) {
        if (lVar17 != 1) {
          plVar18 = (long *)((ulong)&iStack_90 | 4);
          lVar21 = lVar20 + 0x30;
          lVar22 = lVar17 * 0x18 + -0x18;
          do {
            __ZN4uuid6parser9try_parse17h0845fad6e03f8b34E
                      (&bStack_68,*(undefined8 *)(lVar21 + -0x10),*(undefined8 *)(lVar21 + -8));
            if ((bStack_68 & 1) == 0) {
              *(undefined4 *)plVar18 = uStack_67;
              *(uint *)((long)plVar18 + 3) = CONCAT31(uStack_63,uStack_67._3_1_);
              uStack_80._0_3_ = (undefined3)((ulong)uStack_60 >> 0x28);
              uStack_80 = CONCAT13(uStack_58,(undefined3)uStack_80);
              puStack_d8 = (undefined8 *)plVar18[1];
              lStack_e0 = *plVar18;
              goto LAB_103f00040;
            }
            param_2 = (undefined8 *)
                      FUN_1062419dc(&iStack_90,uStack_60,CONCAT71(uStack_57,uStack_58));
            puStack_d8 = (undefined8 *)plVar18[1];
            lStack_e0 = *plVar18;
            if (iStack_90 == 9) goto LAB_103f00040;
            lVar21 = lVar21 + 0x18;
            lVar22 = lVar22 + -0x18;
          } while (lVar22 != 0);
        }
        goto LAB_103f00004;
      }
    }
    lVar21 = lVar20 + 0x18;
LAB_103f00040:
    lStack_98 = (long)puStack_d8;
    lStack_a0 = lStack_e0;
    uStack_88 = SUB84(puStack_d8,0);
    uStack_84 = (undefined4)((ulong)puStack_d8 >> 0x20);
    iStack_90 = (int)lStack_e0;
    uStack_8c = (undefined4)((ulong)lStack_e0 >> 0x20);
    param_2 = (undefined8 *)_malloc(0x40);
    if (param_2 == (undefined8 *)0x0) {
      uVar12 = func_0x0001087c9084(1,0x40);
      if (lStack_e0 != 0) {
        _free(puStack_d8);
      }
      auVar32 = __Unwind_Resume(uVar12);
      puVar13 = auVar32._8_8_;
      pbVar4 = (byte *)*auVar32._0_8_;
      pbVar19 = (byte *)auVar32._0_8_[1];
      uVar5 = *(uint *)(puVar13 + 2);
      if ((uVar5 & 0x18000000) != 0) {
        if ((uVar5 >> 0x1c & 1) == 0) {
          if (pbVar19 < (byte *)0x20) {
            if (pbVar19 == (byte *)0x0) {
              uVar14 = 0;
            }
            else {
              if ((byte *)0x7 < pbVar19) {
                pbVar15 = (byte *)((ulong)pbVar19 & 0x18);
                uVar12 = *(undefined8 *)pbVar4;
                uVar14 = (ulong)(-(-0x41 < (char)((ulong)uVar12 >> 0x30)) & 1);
                uVar25 = (ulong)(-(-0x41 < (char)((ulong)uVar12 >> 0x38)) & 1);
                uVar26 = (ulong)(-(-0x41 < (char)((ulong)uVar12 >> 0x20)) & 1);
                uVar27 = (ulong)(-(-0x41 < (char)((ulong)uVar12 >> 0x28)) & 1);
                uVar28 = (ulong)(-(-0x41 < (char)((ulong)uVar12 >> 0x10)) & 1);
                uVar29 = (ulong)(-(-0x41 < (char)((ulong)uVar12 >> 0x18)) & 1);
                uVar30 = (ulong)(-(-0x41 < (char)uVar12) & 1);
                uVar31 = (ulong)(-(-0x41 < (char)((ulong)uVar12 >> 8)) & 1);
                if (pbVar15 != (byte *)0x8) {
                  uVar12 = *(undefined8 *)(pbVar4 + 8);
                  uVar14 = uVar14 + (-(-0x41 < (char)((ulong)uVar12 >> 0x30)) & 1);
                  uVar25 = uVar25 + (-(-0x41 < (char)((ulong)uVar12 >> 0x38)) & 1);
                  uVar26 = uVar26 + (-(-0x41 < (char)((ulong)uVar12 >> 0x20)) & 1);
                  uVar27 = uVar27 + (-(-0x41 < (char)((ulong)uVar12 >> 0x28)) & 1);
                  uVar28 = uVar28 + (-(-0x41 < (char)((ulong)uVar12 >> 0x10)) & 1);
                  uVar29 = uVar29 + (-(-0x41 < (char)((ulong)uVar12 >> 0x18)) & 1);
                  uVar30 = uVar30 + (-(-0x41 < (char)uVar12) & 1);
                  uVar31 = uVar31 + (-(-0x41 < (char)((ulong)uVar12 >> 8)) & 1);
                  if (pbVar15 != (byte *)0x10) {
                    uVar12 = *(undefined8 *)(pbVar4 + 0x10);
                    uVar14 = uVar14 + (-(-0x41 < (char)((ulong)uVar12 >> 0x30)) & 1);
                    uVar25 = uVar25 + (-(-0x41 < (char)((ulong)uVar12 >> 0x38)) & 1);
                    uVar26 = uVar26 + (-(-0x41 < (char)((ulong)uVar12 >> 0x20)) & 1);
                    uVar27 = uVar27 + (-(-0x41 < (char)((ulong)uVar12 >> 0x28)) & 1);
                    uVar28 = uVar28 + (-(-0x41 < (char)((ulong)uVar12 >> 0x10)) & 1);
                    uVar29 = uVar29 + (-(-0x41 < (char)((ulong)uVar12 >> 0x18)) & 1);
                    uVar30 = uVar30 + (-(-0x41 < (char)uVar12) & 1);
                    uVar31 = uVar31 + (-(-0x41 < (char)((ulong)uVar12 >> 8)) & 1);
                  }
                }
                uVar14 = uVar30 + uVar26 + uVar28 + uVar14 + uVar31 + uVar27 + uVar29 + uVar25;
                goto LAB_1055b9000;
              }
              pbVar15 = (byte *)0x0;
              uVar14 = 0;
              do {
                if (-0x41 < (char)pbVar4[(long)pbVar15]) {
                  uVar14 = uVar14 + 1;
                }
                pbVar15 = pbVar15 + 1;
LAB_1055b9000:
              } while (pbVar19 != pbVar15);
            }
          }
          else {
            uVar14 = __ZN4core3str5count14do_count_chars17haf03aa108601295cE(pbVar4,pbVar19);
          }
        }
        else {
          uVar14 = (ulong)*(ushort *)((long)puVar13 + 0x16);
          if (uVar14 == 0) {
            pbVar19 = (byte *)0x0;
            uVar14 = 0;
          }
          else {
            pbVar15 = pbVar4 + (long)pbVar19;
            pbVar19 = (byte *)0x0;
            uVar25 = uVar14;
            pbVar16 = pbVar4;
            do {
              if (pbVar16 == pbVar15) break;
              bVar6 = *pbVar16;
              pbVar3 = pbVar16 + 3;
              if (0xef < bVar6) {
                pbVar3 = pbVar16 + 4;
              }
              pbVar2 = pbVar16 + 2;
              if (0xdf < bVar6) {
                pbVar2 = pbVar3;
              }
              pbVar3 = pbVar16 + 1;
              if (((int)(char)bVar6 & 0x80000000U) != 0) {
                pbVar3 = pbVar2;
              }
              pbVar19 = pbVar3 + ((long)pbVar19 - (long)pbVar16);
              uVar25 = uVar25 - 1;
              pbVar16 = pbVar3;
            } while (uVar25 != 0);
            uVar14 = uVar14 - uVar25;
          }
        }
        if (uVar14 < *(ushort *)((long)puVar13 + 0x14)) {
          uVar7 = (uint)*(ushort *)((long)puVar13 + 0x14) - (int)uVar14;
          uVar24 = uVar5 >> 0x1d & 3;
          uVar8 = uVar7 >> 1 & 0x7fff;
          if (uVar24 != 2) {
            uVar8 = 0;
          }
          uVar1 = 0;
          if (uVar24 != 0) {
            uVar1 = uVar7;
          }
          if (uVar24 < 2) {
            uVar8 = uVar1;
          }
          uVar24 = 0;
          uVar12 = *puVar13;
          lVar17 = puVar13[1];
          do {
            if ((uVar8 & 0xffff) <= (uVar24 & 0xffff)) {
              uVar14 = (**(code **)(lVar17 + 0x18))(uVar12,pbVar4,pbVar19);
              if ((uVar14 & 1) != 0) {
                return (undefined8 *)0x1;
              }
              uVar24 = 0;
              do {
                if ((uVar7 - uVar8 & 0xffff) <= (uVar24 & 0xffff)) {
                  return (undefined8 *)0x0;
                }
                uVar24 = uVar24 + 1;
                uVar14 = (**(code **)(lVar17 + 0x20))(uVar12,uVar5 & 0x1fffff);
              } while ((uVar14 & 1) == 0);
              return (undefined8 *)0x1;
            }
            uVar24 = uVar24 + 1;
            uVar14 = (**(code **)(lVar17 + 0x20))(uVar12,uVar5 & 0x1fffff);
          } while ((uVar14 & 1) == 0);
          return (undefined8 *)0x1;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001055b9090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar13 = (undefined8 *)(**(code **)(puVar13[1] + 0x18))(*puVar13,pbVar4,pbVar19);
      return puVar13;
    }
    param_2[1] = CONCAT44(uStack_84,uStack_88);
    *param_2 = CONCAT44(uStack_8c,iStack_90);
    lStack_e0 = 4;
    lStack_d0 = 1;
    lVar20 = lVar20 + lVar17 * 0x18;
    puStack_d8 = param_2;
    if (lVar21 != lVar20) {
      puVar23 = (undefined4 *)((ulong)&bStack_68 | 1);
      plVar18 = (long *)((ulong)&iStack_90 | 4);
      puVar13 = param_2;
      do {
        lVar22 = lStack_d0;
        lVar17 = lVar21 + 0x18;
        param_2 = (undefined8 *)
                  __ZN4uuid6parser9try_parse17h0845fad6e03f8b34E
                            (&bStack_68,*(undefined8 *)(lVar21 + 8),*(undefined8 *)(lVar21 + 0x10));
        if ((bStack_68 & 1) == 0) {
          *(undefined4 *)plVar18 = *puVar23;
          *(undefined4 *)((long)plVar18 + 3) = *(undefined4 *)((long)puVar23 + 3);
          uStack_88._3_1_ = (undefined1)uStack_60;
          uStack_84 = (undefined4)((ulong)uStack_60 >> 8);
          uStack_80._0_3_ = (undefined3)((ulong)uStack_60 >> 0x28);
          uStack_80 = CONCAT13(uStack_58,(undefined3)uStack_80);
          lVar9 = *plVar18;
          lVar10 = plVar18[1];
        }
        else {
          param_2 = (undefined8 *)FUN_1062419dc(&iStack_90,uStack_60,CONCAT71(uStack_57,uStack_58));
          lStack_98 = plVar18[1];
          lStack_a0 = *plVar18;
          lVar9 = lStack_a0;
          lVar10 = lStack_98;
          if (iStack_90 != 9) {
            if (lVar17 == lVar20) break;
            lVar17 = lVar21 + 0x30;
            while (param_2 = (undefined8 *)
                             __ZN4uuid6parser9try_parse17h0845fad6e03f8b34E
                                       (&bStack_68,*(undefined8 *)(lVar17 + -0x10),
                                        *(undefined8 *)(lVar17 + -8)), (bStack_68 & 1) != 0) {
              param_2 = (undefined8 *)
                        FUN_1062419dc(&iStack_90,uStack_60,CONCAT71(uStack_57,uStack_58));
              lStack_98 = plVar18[1];
              lStack_a0 = *plVar18;
              lVar9 = lStack_a0;
              lVar10 = lStack_98;
              if (iStack_90 == 9) goto joined_r0x000103f001a0;
              bVar11 = lVar17 == lVar20;
              lVar17 = lVar17 + 0x18;
              if (bVar11) goto LAB_103f001f0;
            }
            *(undefined4 *)plVar18 = *puVar23;
            *(undefined4 *)((long)plVar18 + 3) = *(undefined4 *)((long)puVar23 + 3);
            uStack_88._3_1_ = (undefined1)uStack_60;
            uStack_84 = (undefined4)((ulong)uStack_60 >> 8);
            uStack_80._0_3_ = (undefined3)((ulong)uStack_60 >> 0x28);
            uStack_80 = CONCAT13(uStack_58,(undefined3)uStack_80);
            lVar9 = *plVar18;
            lVar10 = plVar18[1];
          }
        }
joined_r0x000103f001a0:
        lStack_b8 = lVar10;
        lStack_c0 = lVar9;
        lVar21 = lVar17;
        lStack_b0 = lStack_c0;
        lStack_a8 = lStack_b8;
        lStack_a0 = lStack_c0;
        lStack_98 = lStack_b8;
        if (lVar22 == lStack_e0) {
          param_2 = (undefined8 *)func_0x000108982b44(&lStack_e0,lVar22,1,1,0x10);
          puVar13 = puStack_d8;
        }
        (puVar13 + lVar22 * 2)[1] = lStack_b8;
        puVar13[lVar22 * 2] = lStack_c0;
        lStack_d0 = lVar22 + 1;
      } while (lVar21 != lVar20);
    }
LAB_103f001f0:
    param_1[1] = (long)puStack_d8;
    *param_1 = lStack_e0;
    param_1[2] = lStack_d0;
  }
  return param_2;
}

