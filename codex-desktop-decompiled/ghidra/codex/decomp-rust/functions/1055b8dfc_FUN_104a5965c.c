
long * FUN_104a5965c(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  ushort *puVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  char cVar6;
  ushort uVar7;
  ushort uVar8;
  byte bVar9;
  int iVar10;
  long *plVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  char *pcVar21;
  ulong *extraout_x8;
  byte *pbVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  byte *pbVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  byte *pbVar33;
  long lVar34;
  uint uVar35;
  undefined8 uVar36;
  ulong uVar37;
  undefined1 auVar38 [16];
  undefined2 uStack_162;
  undefined2 *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long *plStack_138;
  undefined1 *puStack_130;
  undefined8 uStack_128;
  uint uStack_120;
  uint uStack_11c;
  ulong *puStack_118;
  ulong uStack_110;
  long *plStack_108;
  undefined1 auStack_100 [64];
  ulong *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong auStack_70 [2];
  
  lVar31 = *param_2;
  if (lVar31 == 3) {
LAB_104a599a4:
    *param_1 = -0x8000000000000000;
    return param_1;
  }
  plStack_108 = param_1;
  __ZN4http6header4name9parse_hdr17hdc5e835c0e91cf9fE
            (&puStack_c0,param_3,param_4,auStack_100,&UNK_108e66127);
  uVar18 = uStack_b0;
  uVar37 = uStack_b8;
  puVar12 = puStack_c0;
  cVar6 = (char)uStack_b0;
  uVar29 = uStack_b0 & 0xff;
  param_1 = plStack_108;
  if (((char)uStack_b0 == '\x03') || (uVar13 = param_2[5], uVar13 == 0)) goto LAB_104a599a4;
  uVar30 = (uint)puStack_c0;
  if (lVar31 != 2) {
    if ((char)uStack_b0 == '\x02') {
      uVar16 = (uVar30 & 0xff ^ 0xa2d39c5) * 0x4a21;
    }
    else {
      uVar16 = 0xa2cefa4;
      if ((uStack_b0 & 1) == 0) {
        if (uStack_b8 != 0) {
          uVar16 = 0xa2cefa4;
          uVar18 = uStack_b8;
          puVar14 = puStack_c0;
          do {
            uVar16 = (uVar16 ^ (byte)(&UNK_108e66127)[(byte)*puVar14]) * 0x1b3;
            uVar18 = uVar18 - 1;
            puVar14 = (ulong *)((long)puVar14 + 1);
          } while (uVar18 != 0);
        }
      }
      else if (uStack_b8 != 0) {
        uVar16 = 0xa2cefa4;
        uVar18 = uStack_b8;
        puVar14 = puStack_c0;
        do {
          uVar16 = (uVar16 ^ (byte)*puVar14) * 0x1b3;
          uVar18 = uVar18 - 1;
          puVar14 = (ulong *)((long)puVar14 + 1);
        } while (uVar18 != 0);
      }
    }
    goto LAB_104a5987c;
  }
  uStack_98 = param_2[2];
  uStack_a0 = param_2[1];
  puStack_c0 = (ulong *)(uStack_a0 ^ 0x736f6d6570736575);
  uStack_b8 = uStack_a0 ^ 0x6c7967656e657261;
  uStack_a8 = uStack_98 ^ 0x7465646279746573;
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_90 = 0;
  auStack_70[0] = (ulong)((char)uStack_b0 != '\x02');
  uStack_b0 = uStack_98 ^ 0x646f72616e646f6d;
  FUN_104a5a33c(&puStack_c0,auStack_70,8);
  if (cVar6 == '\x02') {
    auStack_70[0] = (ulong)puVar12 & 0xff;
    puVar14 = auStack_70;
    uVar23 = 8;
LAB_104a597ac:
    FUN_104a5a33c(&puStack_c0,puVar14,uVar23);
  }
  else {
    puVar14 = puVar12;
    uVar23 = uVar37;
    if ((uVar18 & 1) != 0) goto LAB_104a597ac;
    for (; uVar23 != 0; uVar23 = uVar23 - 1) {
      uVar18 = auStack_70[0] >> 8;
      auStack_70[0] = CONCAT71((int7)uVar18,(&UNK_108e66127)[(byte)*puVar14]);
      FUN_104a5a33c(&puStack_c0,auStack_70,1);
      puVar14 = (ulong *)((long)puVar14 + 1);
    }
  }
  uVar27 = uStack_88 | lStack_90 << 0x38;
  uVar25 = uVar27 ^ uStack_a8;
  pbVar33 = (byte *)((long)puStack_c0 + uStack_b0);
  uVar23 = (ulong)pbVar33 ^ (uStack_b0 >> 0x33 | uStack_b0 << 0xd);
  uVar18 = uVar25 + uStack_b8 + uVar23;
  uVar25 = uVar25 + uStack_b8 ^ (uVar25 >> 0x30 | uVar25 << 0x10);
  uVar24 = uVar18 ^ (uVar23 >> 0x2f | uVar23 << 0x11);
  uVar23 = uVar25 + ((ulong)pbVar33 >> 0x20 | (long)pbVar33 << 0x20);
  uVar17 = uVar23 ^ (uVar25 >> 0x2b | uVar25 << 0x15);
  uVar23 = (uVar23 ^ uVar27) + uVar24;
  uVar24 = uVar23 ^ (uVar24 >> 0x33 | uVar24 << 0xd);
  uVar18 = uVar17 + ((uVar18 >> 0x20 | uVar18 << 0x20) ^ 0xff);
  uVar25 = uVar24 + uVar18;
  uVar18 = uVar18 ^ (uVar17 >> 0x30 | uVar17 << 0x10);
  uVar24 = uVar25 ^ (uVar24 >> 0x2f | uVar24 << 0x11);
  uVar23 = uVar18 + (uVar23 >> 0x20 | uVar23 << 0x20);
  uVar17 = uVar24 + uVar23;
  uVar23 = uVar23 ^ (uVar18 >> 0x2b | uVar18 << 0x15);
  uVar24 = uVar17 ^ (uVar24 >> 0x33 | uVar24 << 0xd);
  uVar18 = uVar23 + (uVar25 >> 0x20 | uVar25 << 0x20);
  uVar25 = uVar24 + uVar18;
  uVar18 = uVar18 ^ (uVar23 >> 0x30 | uVar23 << 0x10);
  uVar24 = uVar25 ^ (uVar24 >> 0x2f | uVar24 << 0x11);
  uVar23 = uVar18 + (uVar17 >> 0x20 | uVar17 << 0x20);
  uVar18 = uVar23 ^ (uVar18 >> 0x2b | uVar18 << 0x15);
  uVar23 = uVar24 + uVar23 ^ (uVar24 >> 0x33 | uVar24 << 0xd);
  lVar31 = uVar18 + (uVar25 >> 0x20 | uVar25 << 0x20);
  lVar32 = uVar23 + lVar31;
  uVar16 = ((uint)((ulong)lVar31 >> 0x20) ^ (uint)(uVar18 >> 0x10)) >> 0xb ^ (uint)(uVar23 >> 0x2f)
           ^ (uint)((ulong)lVar32 >> 0x20) ^ (uint)lVar32;
LAB_104a5987c:
  uVar18 = 0;
  uVar7 = *(ushort *)(param_2 + 0xb);
  plVar19 = (long *)(ulong)(uVar16 & 0x7fff & (uint)uVar7);
  lVar31 = param_2[9];
  plVar11 = (long *)param_2[10];
  lVar34 = param_2[4];
  uVar30 = uVar30 & 0xff;
  lVar32 = 0xffff;
  puStack_118 = puVar12;
  do {
    if ((plVar11 <= plVar19) && (plVar19 = (long *)0x0, plVar11 == (long *)0x0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    puVar1 = (ushort *)(lVar31 + (long)plVar19 * 4);
    uVar23 = (ulong)*puVar1;
    param_1 = plStack_108;
    if ((uVar23 == 0xffff) ||
       (uVar8 = puVar1[1], ((ulong)((int)plVar19 - (uint)(uVar8 & uVar7)) & (ulong)uVar7) < uVar18))
    goto LAB_104a599a4;
    if ((uint)uVar8 == (uVar16 & 0x7fff)) {
      if (uVar13 <= uVar23) {
        func_0x000108a07bdc(uVar23,uVar13,&UNK_10b342e88);
        goto LAB_104a59b04;
      }
      lVar20 = lVar34 + uVar23 * 0x68;
      uVar28 = (uint)uVar29;
      if (*(long *)(lVar20 + 0x40) == 0) {
        if ((uVar28 == 2) && (*(byte *)(lVar20 + 0x48) == uVar30)) break;
      }
      else if (uVar28 != 2) {
        if ((uVar29 & 1) == 0) {
          if (*(ulong *)(lVar20 + 0x50) == uVar37) {
            pcVar21 = *(char **)(lVar20 + 0x48);
            uVar25 = uVar37;
            puVar12 = puStack_118;
            do {
              if (uVar25 == 0) goto LAB_104a599fc;
              cVar6 = *pcVar21;
              uVar17 = *puVar12;
              uVar25 = uVar25 - 1;
              pcVar21 = pcVar21 + 1;
              puVar12 = (ulong *)((long)puVar12 + 1);
            } while (cVar6 == (&UNK_108e66127)[(byte)uVar17]);
          }
        }
        else if (*(ulong *)(lVar20 + 0x50) == uVar37) {
          uStack_120 = uVar30;
          uStack_11c = uVar28;
          uStack_110 = uVar13;
          iVar10 = _memcmp(*(undefined8 *)(lVar20 + 0x48),puStack_118,uVar37);
          uVar29 = (ulong)uStack_11c;
          uVar13 = uStack_110;
          uVar30 = uStack_120;
          if (iVar10 == 0) break;
        }
      }
    }
    uVar18 = uVar18 + 1;
    plVar19 = (long *)((long)plVar19 + 1);
  } while( true );
LAB_104a599fc:
  plVar19 = plStack_108;
  lVar34 = lVar34 + uVar23 * 0x68;
  lVar31 = *(long *)(lVar34 + 0x20);
  lVar32 = *(long *)(lVar34 + 0x28);
  if (lVar32 == 0) {
    lVar20 = 1;
  }
  else {
    lVar34 = 0;
    do {
      if ((*(byte *)(lVar31 + lVar34) != 9) &&
         (param_1 = plStack_108, 0x5e < *(byte *)(lVar31 + lVar34) - 0x20)) goto LAB_104a599a4;
      lVar34 = lVar34 + 1;
    } while (lVar32 != lVar34);
    lVar20 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar32,1);
    lVar34 = 0;
    if (lVar20 == 0) {
LAB_104a59b04:
      puVar12 = (ulong *)func_0x0001087c9084(1,lVar32);
      uStack_128 = 0x104a59b10;
      lVar20 = 0;
      if (2 < *puVar12) {
        lVar20 = *puVar12 - 3;
      }
      lStack_150 = lVar34;
      lStack_148 = lVar31;
      lStack_140 = lVar32;
      plStack_138 = plVar19;
      puStack_130 = &stack0xfffffffffffffff0;
      if (lVar20 < 2) {
        if (lVar20 == 0) {
          uStack_162 = (undefined2)puVar12[0x12];
          puStack_160 = &uStack_162;
          puStack_158 = &
                        __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
          ;
          plVar19 = (long *)__ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                      (extraout_x8,s_http_108b050bb,&puStack_160);
          return plVar19;
        }
        plVar19 = (long *)_malloc(0x13);
        if (plVar19 != (long *)0x0) {
          *(undefined4 *)((long)plVar19 + 0xf) = 0x64656863;
          plVar19[1] = 0x636165722074696d;
          *plVar19 = 0x696c207972746572;
          uVar29 = 0x13;
LAB_104a59bf0:
          *extraout_x8 = uVar29;
          extraout_x8[1] = (ulong)plVar19;
          extraout_x8[2] = uVar29;
          return plVar19;
        }
      }
      else {
        if (lVar20 == 2) {
          plVar19 = (long *)_malloc(7);
          if (plVar19 != (long *)0x0) {
            *(undefined4 *)((long)plVar19 + 3) = 0x74756f65;
            *(undefined4 *)plVar19 = 0x656d6974;
            uVar29 = 7;
            goto LAB_104a59bf0;
          }
        }
        else {
          uVar29 = puVar12[2];
          uVar37 = puVar12[3];
          if (uVar37 == 0) {
            uVar18 = 1;
LAB_104a59c00:
            plVar19 = (long *)_memcpy(uVar18,uVar29,uVar37);
            *extraout_x8 = uVar37;
            extraout_x8[1] = uVar18;
            extraout_x8[2] = uVar37;
            return plVar19;
          }
          uVar18 = _malloc(uVar37);
          if (uVar18 != 0) goto LAB_104a59c00;
          func_0x0001087c9084(1,uVar37);
        }
        func_0x0001087c9084(1,7);
      }
      auVar38 = func_0x0001087c9084(1,0x13);
      puVar15 = auVar38._8_8_;
      pbVar5 = (byte *)*auVar38._0_8_;
      pbVar33 = (byte *)auVar38._0_8_[1];
      uVar30 = *(uint *)(puVar15 + 2);
      if ((uVar30 & 0x18000000) != 0) {
        if ((uVar30 >> 0x1c & 1) == 0) {
          if (pbVar33 < (byte *)0x20) {
            if (pbVar33 == (byte *)0x0) {
              uVar29 = 0;
            }
            else {
              if ((byte *)0x7 < pbVar33) {
                pbVar22 = (byte *)((ulong)pbVar33 & 0x18);
                uVar36 = *(undefined8 *)pbVar5;
                uVar29 = (ulong)(-(-0x41 < (char)((ulong)uVar36 >> 0x30)) & 1);
                uVar37 = (ulong)(-(-0x41 < (char)((ulong)uVar36 >> 0x38)) & 1);
                uVar18 = (ulong)(-(-0x41 < (char)((ulong)uVar36 >> 0x20)) & 1);
                uVar13 = (ulong)(-(-0x41 < (char)((ulong)uVar36 >> 0x28)) & 1);
                uVar23 = (ulong)(-(-0x41 < (char)((ulong)uVar36 >> 0x10)) & 1);
                uVar25 = (ulong)(-(-0x41 < (char)((ulong)uVar36 >> 0x18)) & 1);
                uVar17 = (ulong)(-(-0x41 < (char)uVar36) & 1);
                uVar24 = (ulong)(-(-0x41 < (char)((ulong)uVar36 >> 8)) & 1);
                if (pbVar22 != (byte *)0x8) {
                  uVar36 = *(undefined8 *)(pbVar5 + 8);
                  uVar29 = uVar29 + (-(-0x41 < (char)((ulong)uVar36 >> 0x30)) & 1);
                  uVar37 = uVar37 + (-(-0x41 < (char)((ulong)uVar36 >> 0x38)) & 1);
                  uVar18 = uVar18 + (-(-0x41 < (char)((ulong)uVar36 >> 0x20)) & 1);
                  uVar13 = uVar13 + (-(-0x41 < (char)((ulong)uVar36 >> 0x28)) & 1);
                  uVar23 = uVar23 + (-(-0x41 < (char)((ulong)uVar36 >> 0x10)) & 1);
                  uVar25 = uVar25 + (-(-0x41 < (char)((ulong)uVar36 >> 0x18)) & 1);
                  uVar17 = uVar17 + (-(-0x41 < (char)uVar36) & 1);
                  uVar24 = uVar24 + (-(-0x41 < (char)((ulong)uVar36 >> 8)) & 1);
                  if (pbVar22 != (byte *)0x10) {
                    uVar36 = *(undefined8 *)(pbVar5 + 0x10);
                    uVar29 = uVar29 + (-(-0x41 < (char)((ulong)uVar36 >> 0x30)) & 1);
                    uVar37 = uVar37 + (-(-0x41 < (char)((ulong)uVar36 >> 0x38)) & 1);
                    uVar18 = uVar18 + (-(-0x41 < (char)((ulong)uVar36 >> 0x20)) & 1);
                    uVar13 = uVar13 + (-(-0x41 < (char)((ulong)uVar36 >> 0x28)) & 1);
                    uVar23 = uVar23 + (-(-0x41 < (char)((ulong)uVar36 >> 0x10)) & 1);
                    uVar25 = uVar25 + (-(-0x41 < (char)((ulong)uVar36 >> 0x18)) & 1);
                    uVar17 = uVar17 + (-(-0x41 < (char)uVar36) & 1);
                    uVar24 = uVar24 + (-(-0x41 < (char)((ulong)uVar36 >> 8)) & 1);
                  }
                }
                uVar29 = uVar17 + uVar18 + uVar23 + uVar29 + uVar24 + uVar13 + uVar25 + uVar37;
                goto LAB_1055b9000;
              }
              pbVar22 = (byte *)0x0;
              uVar29 = 0;
              do {
                if (-0x41 < (char)pbVar5[(long)pbVar22]) {
                  uVar29 = uVar29 + 1;
                }
                pbVar22 = pbVar22 + 1;
LAB_1055b9000:
              } while (pbVar33 != pbVar22);
            }
          }
          else {
            uVar29 = __ZN4core3str5count14do_count_chars17haf03aa108601295cE(pbVar5,pbVar33);
          }
        }
        else {
          uVar29 = (ulong)*(ushort *)((long)puVar15 + 0x16);
          if (uVar29 == 0) {
            pbVar33 = (byte *)0x0;
            uVar29 = 0;
          }
          else {
            pbVar22 = pbVar5 + (long)pbVar33;
            pbVar33 = (byte *)0x0;
            uVar37 = uVar29;
            pbVar26 = pbVar5;
            do {
              if (pbVar26 == pbVar22) break;
              bVar9 = *pbVar26;
              pbVar4 = pbVar26 + 3;
              if (0xef < bVar9) {
                pbVar4 = pbVar26 + 4;
              }
              pbVar3 = pbVar26 + 2;
              if (0xdf < bVar9) {
                pbVar3 = pbVar4;
              }
              pbVar4 = pbVar26 + 1;
              if (((int)(char)bVar9 & 0x80000000U) != 0) {
                pbVar4 = pbVar3;
              }
              pbVar33 = pbVar4 + ((long)pbVar33 - (long)pbVar26);
              uVar37 = uVar37 - 1;
              pbVar26 = pbVar4;
            } while (uVar37 != 0);
            uVar29 = uVar29 - uVar37;
          }
        }
        if (uVar29 < *(ushort *)((long)puVar15 + 0x14)) {
          uVar28 = (uint)*(ushort *)((long)puVar15 + 0x14) - (int)uVar29;
          uVar35 = uVar30 >> 0x1d & 3;
          uVar16 = uVar28 >> 1 & 0x7fff;
          if (uVar35 != 2) {
            uVar16 = 0;
          }
          uVar2 = 0;
          if (uVar35 != 0) {
            uVar2 = uVar28;
          }
          if (uVar35 < 2) {
            uVar16 = uVar2;
          }
          uVar35 = 0;
          uVar36 = *puVar15;
          lVar31 = puVar15[1];
          do {
            if ((uVar16 & 0xffff) <= (uVar35 & 0xffff)) {
              uVar29 = (**(code **)(lVar31 + 0x18))(uVar36,pbVar5,pbVar33);
              if ((uVar29 & 1) != 0) {
                return (long *)0x1;
              }
              uVar35 = 0;
              do {
                if ((uVar28 - uVar16 & 0xffff) <= (uVar35 & 0xffff)) {
                  return (long *)0x0;
                }
                uVar35 = uVar35 + 1;
                uVar29 = (**(code **)(lVar31 + 0x20))(uVar36,uVar30 & 0x1fffff);
              } while ((uVar29 & 1) == 0);
              return (long *)0x1;
            }
            uVar35 = uVar35 + 1;
            uVar29 = (**(code **)(lVar31 + 0x20))(uVar36,uVar30 & 0x1fffff);
          } while ((uVar29 & 1) == 0);
          return (long *)0x1;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001055b9090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar19 = (long *)(**(code **)(puVar15[1] + 0x18))(*puVar15,pbVar5,pbVar33);
      return plVar19;
    }
  }
  plVar11 = (long *)_memcpy(lVar20,lVar31,lVar32);
  *plVar19 = lVar32;
  plVar19[1] = lVar20;
  plVar19[2] = lVar32;
  return plVar11;
}

