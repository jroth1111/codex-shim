
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006fe464(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ushort uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined2 uVar11;
  uint uVar12;
  undefined1 uVar13;
  ulong uVar14;
  ushort *puVar15;
  undefined2 uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  undefined *puStack_158;
  ushort *puStack_150;
  long lStack_148;
  long lStack_140;
  ushort *puStack_138;
  ushort *puStack_130;
  long lStack_128;
  ulong uStack_120;
  ulong uStack_118;
  long *plStack_110;
  undefined *puStack_108;
  long *plStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  byte bStack_d7;
  undefined2 uStack_d6;
  undefined2 uStack_d4;
  undefined1 uStack_d2;
  byte bStack_d1;
  byte *pbStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char *pcStack_70;
  byte **ppbStack_68;
  
  uStack_d6 = 0;
  plVar3 = (long *)*param_2;
  uVar20 = param_2[1];
  uVar19 = plVar3[1];
  uVar18 = uVar19;
  if (uVar20 <= uVar19) {
    uVar18 = uVar20;
  }
  uVar14 = uVar19 - uVar18;
  uVar17 = uVar14;
  if (1 < uVar14) {
    uVar17 = 2;
  }
  if (uVar14 == 1) {
    lVar10 = uVar17 + uVar20;
LAB_1006fe4bc:
    param_2[1] = lVar10;
  }
  else {
    _memcpy(&uStack_d6,*plVar3 + uVar18,uVar17);
    uVar17 = uVar17 + uVar20;
    param_2[1] = uVar17;
    if (uVar20 < uVar19) {
      if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
        pbStack_d0 = (byte *)&uStack_d6;
        puStack_c8 = &DAT_100e91934;
        puStack_88 = &UNK_108caa953;
        uStack_80 = 0x23;
        ppbStack_68 = &pbStack_d0;
        pcStack_70 = s_Parsed_headers_108ac4c94;
        uStack_c0 = 0;
        puStack_b8 = &UNK_108caa953;
        uStack_a8 = 0;
        uStack_b0 = 0x23;
        pcStack_a0 = 
        "/Users/runner/.cargo/git/checkouts/tungstenite-rs-006aed970da0a0a9/9200079/src/protocol/frame/frame.rs"
        ;
        uStack_90 = 5;
        uStack_98 = 0x66;
        uStack_78 = 0x9000000001;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        (**(code **)(puVar1 + 0x20))(puVar2,&uStack_c0);
      }
      bVar6 = (byte)uStack_d6;
      uVar18 = (ulong)(byte)uStack_d6;
      bVar7 = uStack_d6._1_1_;
      uVar20 = (ulong)uStack_d6._1_1_;
      bStack_d7 = (byte)uStack_d6;
      uStack_d6 = CONCAT11(uStack_d6._1_1_,uStack_d6._1_1_);
      if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5) {
        if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) goto LAB_1006fe684;
LAB_1006fe668:
        uVar12 = (bVar6 & 0xf) - 0xb;
        if (10 < (bVar6 & 0xf)) goto LAB_1006fe764;
LAB_1006fe724:
        uVar19 = uVar18 & 0xf;
        if ((0x707U >> uVar19 & 1) == 0) goto LAB_1006fe764;
        uStack_d4 = CONCAT11((&UNK_108cd9be3)[uVar19],(&UNK_108cd9bee)[uVar19]);
        uStack_d2 = (undefined1)uVar19;
      }
      else {
        pbStack_d0 = &bStack_d7;
        puStack_c8 = &
                     __ZN4core3fmt3num50__LT_impl_u20_core__fmt__Binary_u20_for_u20_u8_GT_3fmt17h1dbe2791fa36a138E
        ;
        puStack_88 = &UNK_108caa953;
        uStack_80 = 0x23;
        ppbStack_68 = &pbStack_d0;
        pcStack_70 = s_First__108abbf20;
        uStack_c0 = 0;
        puStack_b8 = &UNK_108caa953;
        uStack_a8 = 0;
        uStack_b0 = 0x23;
        pcStack_a0 = 
        "/Users/runner/.cargo/git/checkouts/tungstenite-rs-006aed970da0a0a9/9200079/src/protocol/frame/frame.rs"
        ;
        uStack_90 = 5;
        uStack_98 = 0x66;
        uStack_78 = 0x9400000001;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        (**(code **)(puVar1 + 0x20))(puVar2,&uStack_c0);
        if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5) goto LAB_1006fe668;
LAB_1006fe684:
        pbStack_d0 = (byte *)&uStack_d6;
        puStack_c8 = &
                     __ZN4core3fmt3num50__LT_impl_u20_core__fmt__Binary_u20_for_u20_u8_GT_3fmt17h1dbe2791fa36a138E
        ;
        puStack_88 = &UNK_108caa953;
        uStack_80 = 0x23;
        ppbStack_68 = &pbStack_d0;
        pcStack_70 = s_Second__108abbf2a;
        uStack_c0 = 0;
        puStack_b8 = &UNK_108caa953;
        uStack_a8 = 0;
        uStack_b0 = 0x23;
        pcStack_a0 = 
        "/Users/runner/.cargo/git/checkouts/tungstenite-rs-006aed970da0a0a9/9200079/src/protocol/frame/frame.rs"
        ;
        uStack_90 = 5;
        uStack_98 = 0x66;
        uStack_78 = 0x9500000001;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        (**(code **)(puVar1 + 0x20))(puVar2,&uStack_c0);
        uVar12 = (bVar6 & 0xf) - 0xb;
        if ((bVar6 & 0xf) < 0xb) goto LAB_1006fe724;
LAB_1006fe764:
        if ((bVar6 & 0xf) - 3 < 5) {
          uStack_d4 = 0;
        }
        else {
          if (4 < uVar12) {
            auVar21 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                                (&UNK_109bf96b4,0x31,&UNK_10b4daa30);
            plVar9 = auVar21._8_8_;
            puVar8 = auVar21._0_8_;
            puStack_108 = &UNK_108caa953;
            uStack_e8 = 0x1006fea7c;
            lVar10 = plVar9[2];
            uStack_120 = uVar18;
            uStack_118 = uVar17;
            plStack_110 = plVar3;
            plStack_100 = param_2;
            puStack_f8 = param_1;
            puStack_f0 = &stack0xfffffffffffffff0;
            if (lVar10 == 0) {
              uVar11 = 0x12;
            }
            else {
              if (lVar10 != 1) {
                puVar15 = (ushort *)plVar9[1];
                uVar4 = *puVar15;
                uVar12 = (uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8;
                uVar5 = ((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8) - 1000;
                if (((uVar5 & 0xffff) < 0x10) && ((0xbfefU >> (ulong)(uVar5 & 0x1f) & 1) != 0)) {
                  uVar11 = *(undefined2 *)(&UNK_108cd9bfa + ((ulong)uVar5 & 0xffff) * 2);
joined_r0x0001006feb6c:
                  if (lVar10 != 2) goto LAB_1006feb70;
LAB_1006febcc:
                  lStack_140 = 0;
                  puStack_158 = &UNK_10b209220;
                  puStack_150 = puVar15;
                }
                else {
                  if ((uVar12 - 1 & 0xffff) < 999) {
                    uVar11 = 0x11;
                    goto joined_r0x0001006feb6c;
                  }
                  if ((uVar12 - 0x3f8 & 0xffff) < 0x7c0) {
                    uVar11 = 0xe;
                    goto joined_r0x0001006feb6c;
                  }
                  uVar16 = 0x10;
                  if (999 < (uVar12 - 4000 & 0xffff)) {
                    uVar16 = 0x11;
                  }
                  uVar11 = 0xf;
                  if (999 < (uVar12 - 3000 & 0xffff)) {
                    uVar11 = uVar16;
                  }
                  if (lVar10 == 2) goto LAB_1006febcc;
LAB_1006feb70:
                  (**(code **)*plVar9)(&puStack_158,plVar9 + 3,puVar15);
                }
                puVar15 = puStack_150 + 1;
                lVar10 = lVar10 + -2;
                puStack_150 = puVar15;
                lStack_148 = lVar10;
                func_0x0001055bf348(&puStack_138,puVar15,lVar10);
                if ((int)puStack_138 == 1) {
                  (**(code **)(puStack_158 + 0x20))(&lStack_140,puVar15,lVar10);
                  lVar10 = lStack_128;
                  puVar15 = puStack_130;
LAB_1006fec54:
                  puStack_138 = puVar15;
                  puStack_130 = (ushort *)lVar10;
                  __ZN100__LT_tungstenite__error__Error_u20_as_u20_core__convert__From_LT_core__str__error__Utf8Error_GT__GT_4from17h85abf62eb6c6c08dE
                            (&puStack_158,&puStack_138);
                  puVar8[1] = puStack_150;
                  *puVar8 = puStack_158;
                  puVar8[3] = lStack_140;
                  puVar8[2] = lStack_148;
                  *(undefined2 *)(puVar8 + 4) = 0x13;
                  (**(code **)(*plVar9 + 0x20))(plVar9 + 3,plVar9[1],plVar9[2]);
                  return;
                }
                if (puStack_158 == (undefined *)0x0) goto LAB_1006fec54;
                *puVar8 = puStack_158;
                puVar8[1] = puVar15;
                puVar8[2] = lVar10;
                puVar8[3] = lStack_140;
                *(undefined2 *)(puVar8 + 4) = uVar11;
                *(short *)((long)puVar8 + 0x22) = (short)uVar12;
                lVar10 = plVar9[2];
                goto LAB_1006feac4;
              }
              puVar8[1] = 0x20;
              *puVar8 = 0xe;
              uVar11 = 0x13;
            }
            *(undefined2 *)(puVar8 + 4) = uVar11;
LAB_1006feac4:
            (**(code **)(*plVar9 + 0x20))(plVar9 + 3,plVar9[1],lVar10);
            return;
          }
          uStack_d4 = 1;
        }
        uStack_d4 = uStack_d4 | 0x300;
        uStack_d2 = (undefined1)(bVar6 & 0xf);
      }
      if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
        pbStack_d0 = (byte *)&uStack_d4;
        puStack_c8 = &DAT_1011e18c4;
        puStack_88 = &UNK_108caa953;
        uStack_80 = 0x23;
        ppbStack_68 = &pbStack_d0;
        pcStack_70 = s_Opcode__108ac4d0e;
        uStack_c0 = 0;
        puStack_b8 = &UNK_108caa953;
        uStack_a8 = 0;
        uStack_b0 = 0x23;
        pcStack_a0 = 
        "/Users/runner/.cargo/git/checkouts/tungstenite-rs-006aed970da0a0a9/9200079/src/protocol/frame/frame.rs"
        ;
        uStack_90 = 5;
        uStack_98 = 0x66;
        uStack_78 = 0x9e00000001;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        (**(code **)(puVar1 + 0x20))(puVar2,&uStack_c0);
      }
      bStack_d1 = bVar7 >> 7;
      if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
        pbStack_d0 = &bStack_d1;
        puStack_c8 = &DAT_100c3c388;
        puStack_88 = &UNK_108caa953;
        uStack_80 = 0x23;
        ppbStack_68 = &pbStack_d0;
        pcStack_70 = s_Masked__108abbf35;
        uStack_c0 = 0;
        puStack_b8 = &UNK_108caa953;
        uStack_a8 = 0;
        uStack_b0 = 0x23;
        pcStack_a0 = 
        "/Users/runner/.cargo/git/checkouts/tungstenite-rs-006aed970da0a0a9/9200079/src/protocol/frame/frame.rs"
        ;
        uStack_90 = 5;
        uStack_98 = 0x66;
        uStack_78 = 0xa100000001;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        (**(code **)(puVar1 + 0x20))(puVar2,&uStack_c0);
      }
      uVar20 = uVar20 & 0x7f;
      uVar18 = 2;
      lVar10 = 2;
      if ((int)uVar20 != 0x7f) {
        lVar10 = 0;
      }
      if ((int)uVar20 == 0x7e) {
        lVar10 = 1;
      }
      if (lVar10 != 0) {
        if (lVar10 != 1) {
          uVar18 = 8;
        }
        uStack_c0 = 0;
        uVar19 = plVar3[1];
        uVar20 = uVar19;
        if (uVar17 <= uVar19) {
          uVar20 = uVar17;
        }
        if (uVar19 - uVar20 < uVar18) {
          param_2[1] = uVar19;
          goto LAB_1006fe934;
        }
        _memcpy((long)&puStack_b8 - uVar18,*plVar3 + uVar20,uVar18);
        uVar17 = uVar18 + uVar17;
        param_2[1] = uVar17;
        uVar18 = (uStack_c0 & 0xff00ff00ff00ff00) >> 8 | (uStack_c0 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar20 = uVar18 >> 0x20 | uVar18 << 0x20;
      }
      if ((bStack_d1 & 1) == 0) {
        uVar13 = 0;
        uStack_c0._0_4_ = (uint)bStack_d1;
      }
      else {
        uStack_c0 = uStack_c0 & 0xffffffff00000000;
        uVar19 = plVar3[1];
        uVar18 = uVar19;
        if (uVar17 <= uVar19) {
          uVar18 = uVar17;
        }
        uVar19 = uVar19 - uVar18;
        uVar14 = uVar19;
        if (3 < uVar19) {
          uVar14 = 4;
        }
        if (uVar19 == 1) {
          lVar10 = uVar14 + uVar17;
          goto LAB_1006fe4bc;
        }
        _memcpy(&uStack_c0,*plVar3 + uVar18,uVar14);
        param_2[1] = uVar14 + uVar17;
        if (uVar19 < 4) goto LAB_1006fe934;
        uVar13 = 1;
      }
      if (uStack_d4._1_1_ == '\x03') {
        param_1[1] = 0x1f;
        *param_1 = 0xe;
        *(byte *)(param_1 + 2) = bVar6 & 0xf;
        return;
      }
      *(ushort *)((long)param_1 + 0xc) = uStack_d4;
      *(undefined1 *)((long)param_1 + 0xe) = uStack_d2;
      *(byte *)(param_1 + 1) = bVar6 >> 7;
      *(byte *)((long)param_1 + 9) = bVar6 >> 6 & 1;
      *(byte *)((long)param_1 + 10) = bVar6 >> 5 & 1;
      *(byte *)((long)param_1 + 0xb) = bVar6 >> 4 & 1;
      *(undefined1 *)((long)param_1 + 0xf) = uVar13;
      *(uint *)(param_1 + 2) = (uint)uStack_c0;
      param_1[3] = uVar20;
      goto LAB_1006fe93c;
    }
  }
LAB_1006fe934:
  *(undefined1 *)(param_1 + 1) = 2;
LAB_1006fe93c:
  *param_1 = 0x15;
  return;
}

