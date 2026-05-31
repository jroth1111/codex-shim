
/* WARNING: Type propagation algorithm not settling */

void __ZN9codex_api8endpoint18realtime_websocket7methods26websocket_url_from_api_url17h39d8671b7ccc8321E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,long param_5
               ,undefined8 param_6,ulong param_7)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ulong *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  int iVar10;
  int ***pppiVar11;
  undefined *puVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  byte *pbVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  int ****ppppiVar20;
  int ****ppppiVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  undefined1 auVar25 [16];
  int ****ppppiStack_1d0;
  int ****ppppiStack_1c8;
  int ****ppppiStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  int ****ppppiStack_170;
  int ***pppiStack_168;
  undefined8 uStack_160;
  ulong *puStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  int ****ppppiStack_110;
  int ***pppiStack_108;
  int ****ppppiStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  int ****ppppiStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined1 auStack_69 [9];
  
  uStack_78 = 0;
  ppppiStack_98 = (int ****)0x0;
  uStack_88 = 0;
  __ZN3url12ParseOptions5parse17h966f9c9374804e81E(&ppppiStack_110,&ppppiStack_98,param_2,param_3);
  if (ppppiStack_110 == (int ****)0x8000000000000000) {
    auStack_69[0] = pppiStack_108._0_1_;
    ppppiStack_98 = (int ****)auStack_69;
    puStack_90 = &
                 __ZN62__LT_url__parser__ParseError_u20_as_u20_core__fmt__Display_GT_3fmt17h42838bb27ca194ddE
    ;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&ppppiStack_170,s__failed_to_parse_realtime_api_ur_108adcf3c,&ppppiStack_98);
    param_1[6] = uStack_148;
    param_1[5] = uStack_150;
    param_1[8] = uStack_138;
    param_1[7] = uStack_140;
    param_1[10] = uStack_128;
    param_1[9] = uStack_130;
    param_1[0xb] = uStack_120;
    param_1[2] = pppiStack_168;
    param_1[1] = ppppiStack_170;
    param_1[4] = puStack_158;
    param_1[3] = uStack_160;
    uVar14 = 9;
    goto LAB_1017e7574;
  }
  uStack_120 = uStack_c0;
  uStack_128 = uStack_c8;
  uStack_130 = uStack_d0;
  pppiStack_168 = pppiStack_108;
  ppppiStack_170 = ppppiStack_110;
  ppppiStack_1c8 = (int ****)pppiStack_108;
  ppppiStack_1d0 = ppppiStack_110;
  uStack_1b8 = uStack_f8;
  ppppiStack_1c0 = ppppiStack_100;
  uStack_180 = uStack_c0;
  uStack_198 = uStack_d8;
  uStack_1a0 = uStack_e0;
  uStack_188 = uStack_c8;
  uStack_190 = uStack_d0;
  uStack_1a8 = uStack_e8;
  uStack_1b0 = uStack_f0;
  auVar25 = __ZN3url3Url4path17hacc0a976fd1b016fE(&ppppiStack_110);
  ppppiVar21 = auVar25._8_8_;
  if (ppppiVar21 == (int ****)0x0) {
    ppppiStack_1c8 = (int ****)0x1;
    ppppiStack_1c0 = (int ****)0x0;
LAB_1017e7620:
    ppppiStack_1d0 = ppppiStack_1c0;
    __ZN3url3Url8set_path17h6d2126130d2c2575E(&ppppiStack_110,&UNK_108ce783a,0xc);
  }
  else {
    pppiVar11 = (int ***)_malloc(ppppiVar21);
    if (pppiVar11 == (int ***)0x0) {
      func_0x0001087c9084(1,ppppiVar21);
      goto LAB_1017e7f5c;
    }
    _memcpy(pppiVar11,auVar25._0_8_,ppppiVar21);
    ppppiStack_1d0 = ppppiVar21;
    ppppiStack_1c8 = (int ****)pppiVar11;
    ppppiStack_1c0 = ppppiVar21;
    if (ppppiVar21 == (int ****)0x1) {
      if (*(char *)pppiVar11 == '/') goto LAB_1017e7620;
    }
    else if (ppppiVar21 < (int ****)0x9) {
      if ((int ****)0x2 < ppppiVar21) {
LAB_1017e7820:
        if (*(short *)((long)pppiVar11 + (long)((long)ppppiVar21 + -3)) == 0x762f &&
            *(byte *)((long)pppiVar11 + (long)((long)ppppiVar21 + -1)) == 0x31) {
LAB_1017e789c:
          ppppiStack_98 = (int ****)&ppppiStack_1d0;
          puStack_90 = &DAT_1017b4db0;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&ppppiStack_170,s__realtime_108adcf30,&ppppiStack_98);
          pppiVar11 = pppiStack_168;
          ppppiVar21 = ppppiStack_170;
          __ZN3url3Url8set_path17h6d2126130d2c2575E(&ppppiStack_110,pppiStack_168,uStack_160);
LAB_1017e78d4:
          if (ppppiVar21 != (int ****)0x0) {
            _free(pppiVar11);
          }
        }
        else if ((int ****)0x3 < ppppiVar21) {
LAB_1017e7848:
          if (*(int *)((long)pppiVar11 + (long)((long)ppppiVar21 + -4)) == 0x2f31762f) {
            ppppiStack_98 = (int ****)&ppppiStack_1d0;
            puStack_90 = &DAT_1017b4db0;
            FUN_1017ae4bc(&ppppiStack_170,s_realtime_108adcf25,&ppppiStack_98);
            pppiVar11 = pppiStack_168;
            ppppiVar21 = ppppiStack_170;
            __ZN3url3Url8set_path17h6d2126130d2c2575E(&ppppiStack_110,pppiStack_168,uStack_160);
            goto LAB_1017e78d4;
          }
        }
      }
    }
    else if (*(long *)((long)pppiVar11 + (long)((long)ppppiVar21 + -9)) != 0x6d69746c6165722f ||
             *(byte *)((long)pppiVar11 + (long)((long)ppppiVar21 + -1)) != 0x65) {
      if (ppppiVar21 == (int ****)0x9) {
        if (*(short *)((long)pppiVar11 + 6) != 0x762f || *(char *)(pppiVar11 + 1) != '1')
        goto LAB_1017e7848;
        goto LAB_1017e789c;
      }
      if (*(long *)((long)pppiVar11 + (long)((long)ppppiVar21 + -10)) != 0x6d69746c6165722f ||
          *(short *)((long)pppiVar11 + (long)((long)ppppiVar21 + -2)) != 0x2f65) goto LAB_1017e7820;
      do {
        if (ppppiVar21 == (int ****)0x0) break;
        pbVar16 = (byte *)((long)pppiVar11 + (long)((long)ppppiVar21 + -1));
        bVar4 = *pbVar16;
        uVar13 = (uint)(char)bVar4;
        if ((char)bVar4 < 0) {
          pbVar16 = (byte *)((long)pppiVar11 + (long)((long)ppppiVar21 + -2));
          bVar5 = *pbVar16;
          if ((char)bVar5 < -0x40) {
            pbVar16 = (byte *)((long)pppiVar11 + (long)((long)ppppiVar21 + -3));
            bVar6 = *pbVar16;
            if ((char)bVar6 < -0x40) {
              pbVar16 = (byte *)((long)pppiVar11 + (long)((long)ppppiVar21 + -4));
              uVar13 = bVar6 & 0x3f | (*pbVar16 & 7) << 6;
            }
            else {
              uVar13 = (int)(char)bVar6 & 0xf;
            }
            uVar13 = bVar5 & 0x3f | uVar13 << 6;
          }
          else {
            uVar13 = (int)(char)bVar5 & 0x1f;
          }
          uVar13 = (int)(char)bVar4 & 0x3fU | uVar13 << 6;
        }
        ppppiVar21 = (int ****)(pbVar16 + -(long)pppiVar11);
      } while (uVar13 == 0x2f);
      __ZN3url3Url8set_path17h6d2126130d2c2575E(&ppppiStack_110,pppiVar11);
    }
  }
  if (ppppiStack_1d0 != (int ****)0x0) {
    _free(ppppiStack_1c8);
  }
  ppppiVar21 = ppppiStack_100;
  pppiVar11 = pppiStack_108;
  uVar13 = uStack_e8._4_4_;
  ppppiVar20 = (int ****)(ulong)uStack_e8._4_4_;
  if (uStack_e8._4_4_ == 0) goto LAB_1017e7764;
  if (ppppiVar20 < ppppiStack_100) {
    if (-0x41 < (char)*(byte *)((long)pppiStack_108 + (long)ppppiVar20)) {
LAB_1017e7684:
      if ((int)uStack_e8._4_4_ < 4) {
        if (uStack_e8._4_4_ == 2) {
          if (*(short *)pppiStack_108 != 0x7377) goto LAB_1017e7764;
        }
        else if ((uStack_e8._4_4_ != 3) ||
                (iVar10 = _memcmp(pppiStack_108,&UNK_108ce7848,3), iVar10 != 0)) {
LAB_1017e7764:
          ppppiStack_1d0 = (int ****)pppiVar11;
          ppppiStack_170 = (int ****)&ppppiStack_1d0;
          pppiStack_168 = (int ***)&DAT_10179e9f8;
          ppppiStack_1c8 = ppppiVar20;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&uStack_b0,s__unsupported_realtime_api_url_sc_108adcf61,&ppppiStack_170);
          param_1[2] = uStack_a8;
          param_1[1] = uStack_b0;
          param_1[3] = uStack_a0;
          *param_1 = 9;
          if (ppppiStack_110 == (int ****)0x0) {
            return;
          }
          _free(pppiStack_108);
          return;
        }
LAB_1017e79a8:
        if ((param_4 != (long *)0x0) && (lVar15 = param_4[3], lVar15 != 0)) {
          plVar17 = (long *)*param_4;
          plVar18 = plVar17 + 1;
          lVar24 = *plVar17;
          uVar19 = CONCAT17(-(-1 < lVar24),
                            CONCAT16(-(-1 < (char)((ulong)lVar24 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar24 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar24 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar24 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar24 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar24 >> 8)),
                                                           -(-1 < (char)lVar24)))))))) &
                   0x8080808080808080;
          if (param_5 == 0) {
            do {
              while (uVar19 == 0) {
                lVar24 = *plVar18;
                plVar17 = plVar17 + -0x30;
                plVar18 = plVar18 + 1;
                uVar19 = CONCAT17(-(-1 < lVar24),
                                  CONCAT16(-(-1 < (char)((ulong)lVar24 >> 0x30)),
                                           CONCAT15(-(-1 < (char)((ulong)lVar24 >> 0x28)),
                                                    CONCAT14(-(-1 < (char)((ulong)lVar24 >> 0x20)),
                                                             CONCAT13(-(-1 < (char)((ulong)lVar24 >>
                                                                                   0x18)),
                                                                      CONCAT12(-(-1 < (char)((ulong)
                                                  lVar24 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar24 >> 8)),
                                                           -(-1 < (char)lVar24)))))))) &
                         0x8080808080808080;
              }
              uVar22 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                       (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
              iVar10 = (int)((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
              if ((plVar17[(long)-iVar10 * 6 + -4] != 6) ||
                 (*(int *)plVar17[(long)-iVar10 * 6 + -5] != 0x65746e69 ||
                  (short)((int *)plVar17[(long)-iVar10 * 6 + -5])[1] != 0x746e)) goto LAB_1017e7adc;
              uVar19 = uVar19 - 1 & uVar19;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
          else {
            do {
              while (uVar19 == 0) {
                lVar24 = *plVar18;
                plVar17 = plVar17 + -0x30;
                plVar18 = plVar18 + 1;
                uVar19 = CONCAT17(-(-1 < lVar24),
                                  CONCAT16(-(-1 < (char)((ulong)lVar24 >> 0x30)),
                                           CONCAT15(-(-1 < (char)((ulong)lVar24 >> 0x28)),
                                                    CONCAT14(-(-1 < (char)((ulong)lVar24 >> 0x20)),
                                                             CONCAT13(-(-1 < (char)((ulong)lVar24 >>
                                                                                   0x18)),
                                                                      CONCAT12(-(-1 < (char)((ulong)
                                                  lVar24 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar24 >> 8)),
                                                           -(-1 < (char)lVar24)))))))) &
                         0x8080808080808080;
              }
              uVar22 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                       (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
              iVar10 = (int)((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
              piVar1 = (int *)plVar17[(long)-iVar10 * 6 + -5];
              if (plVar17[(long)-iVar10 * 6 + -4] == 6) {
                if (*piVar1 != 0x65746e69 || (short)piVar1[1] != 0x746e) goto LAB_1017e7adc;
              }
              else if ((plVar17[(long)-iVar10 * 6 + -4] != 5) ||
                      (*piVar1 != 0x65646f6d || (char)piVar1[1] != 'l')) goto LAB_1017e7adc;
              uVar19 = uVar19 - 1 & uVar19;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
        }
        if ((param_5 != 0) || ((param_7 & 1) == 0)) {
LAB_1017e7adc:
          __ZN3url3Url15query_pairs_mut17hee7dc8361088f5a3E(&ppppiStack_170,&ppppiStack_110);
          uVar8 = uStack_140;
          uVar14 = uStack_148;
          puVar7 = puStack_158;
          if ((param_7 & 1) == 0) {
            if (ppppiStack_170 != (int ****)0x8000000000000001) {
              if (puStack_158 != (ulong *)0x0) {
                uVar19 = puStack_158[2];
                if (uStack_150 < uVar19) {
                  uVar22 = uVar19;
                  if (*puStack_158 == uVar19) {
                    FUN_108a0b6e8(puStack_158,uVar19,1);
                    uVar22 = puVar7[2];
                  }
                  *(undefined1 *)(puVar7[1] + uVar22) = 0x26;
                  puVar7[2] = uVar19 + 1;
                }
                FUN_1056106d0(&UNK_108ce785b,6,puVar7,uVar14,uVar8);
                uVar22 = puVar7[2];
                uVar19 = uVar22;
                if (*puVar7 == uVar22) {
                  FUN_108a0b6e8(puVar7,uVar22,1);
                  uVar19 = puVar7[2];
                }
                *(undefined1 *)(puVar7[1] + uVar19) = 0x3d;
                puVar7[2] = uVar22 + 1;
                FUN_1056106d0(&UNK_108ce7850,0xb,puVar7,uVar14,uVar8);
                goto LAB_1017e7ba4;
              }
LAB_1017e7ee0:
              func_0x000108a07a20(&UNK_10b4dbf58);
              goto LAB_1017e7f5c;
            }
LAB_1017e7eb4:
            func_0x000108a079f0(&UNK_108ce3418,0x29,&UNK_10b2597f8);
            goto LAB_1017e7f5c;
          }
LAB_1017e7ba4:
          uVar8 = uStack_140;
          uVar14 = uStack_148;
          puVar7 = puStack_158;
          if (param_5 != 0) {
            if (ppppiStack_170 == (int ****)0x8000000000000001) goto LAB_1017e7eb4;
            if (puStack_158 == (ulong *)0x0) goto LAB_1017e7ee0;
            uVar19 = puStack_158[2];
            if (uStack_150 < uVar19) {
              uVar22 = uVar19;
              if (*puStack_158 == uVar19) {
                FUN_108a0b6e8(puStack_158,uVar19,1);
                uVar22 = puVar7[2];
              }
              *(undefined1 *)(puVar7[1] + uVar22) = 0x26;
              puVar7[2] = uVar19 + 1;
            }
            FUN_1056106d0(&UNK_108ce7861,5,puVar7,uVar14,uVar8);
            uVar22 = puVar7[2];
            uVar19 = uVar22;
            if (*puVar7 == uVar22) {
              FUN_108a0b6e8(puVar7,uVar22,1);
              uVar19 = puVar7[2];
            }
            *(undefined1 *)(puVar7[1] + uVar19) = 0x3d;
            puVar7[2] = uVar22 + 1;
            FUN_1056106d0(param_5,param_6,puVar7,uVar14,uVar8);
          }
          puVar7 = puStack_158;
          ppppiVar21 = ppppiStack_170;
          if ((param_4 != (long *)0x0) && (lVar15 = param_4[3], lVar15 != 0)) {
            param_4 = (long *)*param_4;
            plVar17 = param_4 + 1;
            lVar24 = *param_4;
            uVar19 = CONCAT17(-(-1 < lVar24),
                              CONCAT16(-(-1 < (char)((ulong)lVar24 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar24 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar24 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar24 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar24 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar24 >> 8)),
                                                           -(-1 < (char)lVar24)))))))) &
                     0x8080808080808080;
            do {
              while (uVar19 == 0) {
                lVar24 = *plVar17;
                param_4 = param_4 + -0x30;
                plVar17 = plVar17 + 1;
                uVar19 = CONCAT17(-(-1 < lVar24),
                                  CONCAT16(-(-1 < (char)((ulong)lVar24 >> 0x30)),
                                           CONCAT15(-(-1 < (char)((ulong)lVar24 >> 0x28)),
                                                    CONCAT14(-(-1 < (char)((ulong)lVar24 >> 0x20)),
                                                             CONCAT13(-(-1 < (char)((ulong)lVar24 >>
                                                                                   0x18)),
                                                                      CONCAT12(-(-1 < (char)((ulong)
                                                  lVar24 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar24 >> 8)),
                                                           -(-1 < (char)lVar24)))))))) &
                         0x8080808080808080;
              }
              uVar22 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                       (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
              iVar10 = (int)((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
              piVar1 = (int *)param_4[(long)-iVar10 * 6 + -5];
              lVar24 = param_4[(long)-iVar10 * 6 + -4];
              if (lVar24 == 5) {
                if ((param_5 == 0) || (*piVar1 != 0x65646f6d || (char)piVar1[1] != 'l'))
                goto LAB_1017e7d68;
              }
              else if ((lVar24 != 6) || (*piVar1 != 0x65746e69 || (short)piVar1[1] != 0x746e)) {
LAB_1017e7d68:
                if (ppppiVar21 == (int ****)0x8000000000000001) goto LAB_1017e7eb4;
                if (puVar7 == (ulong *)0x0) {
                  func_0x000108a07a20(&UNK_10b4dbf58);
                  goto LAB_1017e7f5c;
                }
                lVar2 = param_4[(long)-iVar10 * 6 + -2];
                lVar3 = param_4[(long)-iVar10 * 6 + -1];
                uVar22 = puVar7[2];
                if (uStack_150 < uVar22) {
                  uVar23 = uVar22;
                  if (*puVar7 == uVar22) {
                    FUN_108a0b6e8(puVar7,uVar22,1);
                    uVar23 = puVar7[2];
                  }
                  *(undefined1 *)(puVar7[1] + uVar23) = 0x26;
                  puVar7[2] = uVar22 + 1;
                }
                FUN_1056106d0(piVar1,lVar24,puVar7,uStack_148,uStack_140);
                uVar23 = puVar7[2];
                uVar22 = uVar23;
                if (*puVar7 == uVar23) {
                  FUN_108a0b6e8(puVar7,uVar23,1);
                  uVar22 = puVar7[2];
                }
                *(undefined1 *)(puVar7[1] + uVar22) = 0x3d;
                puVar7[2] = uVar23 + 1;
                FUN_1056106d0(lVar2,lVar3,puVar7,uStack_148,uStack_140);
              }
              uVar19 = uVar19 - 1 & uVar19;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
          if (ppppiVar21 != (int ****)0x8000000000000001) {
            if (puStack_158 == (ulong *)0x0) {
              if ((ppppiVar21 != (int ****)0x8000000000000000) && (ppppiVar21 != (int ****)0x0)) {
                _free(pppiStack_168);
              }
            }
            else {
              ppppiStack_1d0 = ppppiStack_170;
              ppppiStack_1c8 = (int ****)pppiStack_168;
              FUN_1062355e0(puStack_158,&ppppiStack_1d0);
            }
          }
        }
        param_1[6] = uStack_e8;
        param_1[5] = uStack_f0;
        param_1[8] = uStack_d8;
        param_1[7] = uStack_e0;
        param_1[10] = uStack_c8;
        param_1[9] = uStack_d0;
        param_1[0xb] = uStack_c0;
        param_1[2] = pppiStack_108;
        param_1[1] = ppppiStack_110;
        param_1[4] = uStack_f8;
        param_1[3] = ppppiStack_100;
        uVar14 = 0x12;
LAB_1017e7574:
        *param_1 = uVar14;
        return;
      }
      if (uStack_e8._4_4_ == 4) {
        iVar10 = _memcmp(pppiStack_108,&UNK_108c73780,4);
      }
      else {
        if (uStack_e8._4_4_ != 5) goto LAB_1017e7764;
        iVar10 = _memcmp(pppiStack_108,&UNK_108ce784b,5);
      }
      if (iVar10 != 0) goto LAB_1017e7764;
      if (ppppiVar20 < ppppiVar21) {
        if (-0x41 < (char)*(byte *)((long)pppiVar11 + (long)ppppiVar20)) {
LAB_1017e7964:
          puVar12 = &UNK_108ce7848;
          if (uVar13 == 4) {
            uVar14 = 2;
            if (*(int *)pppiVar11 != 0x70747468) {
              uVar14 = 3;
            }
            if (*(int *)pppiVar11 == 0x70747468) {
              puVar12 = &UNK_108ce7846;
            }
          }
          else {
            uVar14 = 3;
          }
          __ZN3url3Url10set_scheme17h3163c732484da22bE(&ppppiStack_110,puVar12,uVar14);
          goto LAB_1017e79a8;
        }
      }
      else if (ppppiVar21 == ppppiVar20) goto LAB_1017e7964;
    }
  }
  else if (ppppiStack_100 == ppppiVar20) goto LAB_1017e7684;
  __ZN4core3str16slice_error_fail17h7d5f7302866db666E
            (pppiVar11,ppppiVar21,0,ppppiVar20,&UNK_10b25a860);
LAB_1017e7f5c:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1017e7f60);
  (*pcVar9)();
}

