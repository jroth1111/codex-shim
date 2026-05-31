
/* WARNING: Type propagation algorithm not settling */

void FUN_100f77d00(ulong *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7,long param_8)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  char *pcVar5;
  ulong *puVar6;
  long **pplVar7;
  long **pplVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  byte *pbVar22;
  uint uVar23;
  ulong uVar24;
  char cVar25;
  ulong uVar26;
  undefined8 *puVar27;
  undefined *puVar28;
  long *plVar29;
  long *plVar30;
  undefined8 uVar31;
  char *unaff_x26;
  long lVar32;
  undefined1 auVar33 [16];
  ulong uStack_218;
  ulong uStack_208;
  long *plStack_200;
  long *plStack_1f8;
  long lStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  char *pcStack_1d0;
  ulong uStack_1c8;
  long *plStack_1c0;
  undefined8 *puStack_1b8;
  long *plStack_1b0;
  long *plStack_1a0;
  undefined8 *puStack_198;
  long *plStack_190;
  ulong *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  long **pplStack_168;
  long *plStack_160;
  long **pplStack_158;
  undefined *puStack_150;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  long **pplStack_98;
  undefined *puStack_90;
  long **pplStack_88;
  undefined *puStack_80;
  long **pplStack_78;
  undefined **ppuStack_70;
  long **pplStack_68;
  undefined **ppuStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined *puStack_48;
  
  uVar19 = param_2[0xc] + 0x8000000000000001U & param_2[0xc] >> 0x3f;
  if ((long)uVar19 < 2) {
    if (uVar19 == 0) {
      bVar10 = (char)param_2[0x12] == '\0';
      puStack_f0 = &UNK_108cabe0c;
      if (bVar10) {
        puStack_f0 = &UNK_108cde444;
      }
      uStack_e8 = 7;
      if (bVar10) {
        uStack_e8 = 4;
      }
      if (*param_2 == -0x8000000000000000) {
        lVar20 = 0;
        if (param_2[0xf] != -0x8000000000000000) {
          lVar20 = param_2[0x10];
        }
        FUN_100f763f0(&plStack_58,lVar20,param_2[0x11]);
        plStack_e0 = (long *)param_2[0xd];
        uStack_d8 = param_2[0xe];
        puStack_a0 = &DAT_100c7b3a0;
        pplStack_98 = &plStack_e0;
        puStack_90 = &
                     __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
        ;
        puStack_80 = &DAT_10112965c;
        puStack_a8 = (undefined1 *)&puStack_f0;
        pplStack_88 = &plStack_58;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (param_1,s_standalone_____release___resourc_108ad5233,&puStack_a8);
        plVar15 = plStack_50;
      }
      else {
        lVar20 = 0;
        if (param_2[6] != -0x8000000000000000) {
          lVar20 = param_2[7];
        }
        FUN_100f763f0(&plStack_e0,lVar20,param_2[8]);
        lVar20 = 0;
        if (param_2[9] != -0x8000000000000000) {
          lVar20 = param_2[10];
        }
        FUN_100f763f0(&plStack_58,lVar20,param_2[0xb]);
        plStack_c8 = (long *)param_2[1];
        lStack_c0 = param_2[2];
        plStack_b8 = (long *)param_2[4];
        lStack_b0 = param_2[5];
        puStack_a0 = &DAT_100c7b3a0;
        pplStack_98 = &plStack_c8;
        puStack_90 = &
                     __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
        ;
        pplStack_88 = &plStack_b8;
        puStack_80 = &
                     __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
        ;
        ppuStack_70 = (undefined **)&DAT_10112965c;
        ppuStack_60 = (undefined **)&DAT_10112965c;
        puStack_a8 = (undefined1 *)&puStack_f0;
        pplStack_78 = &plStack_e0;
        pplStack_68 = &plStack_58;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (param_1,s_standalone_____package___bin___r_108ad525e,&puStack_a8);
        bVar10 = plStack_58 != (long *)0x0;
        plVar15 = (long *)uStack_d8;
        plStack_58 = plStack_e0;
        if (bVar10) {
          _free(plStack_50);
          plVar15 = (long *)uStack_d8;
          plStack_58 = plStack_e0;
        }
      }
      if (plStack_58 != (long *)0x0) {
        _free(plVar15);
      }
      return;
    }
    plVar15 = (long *)0x0;
    if (*param_2 != -0x8000000000000000) {
      plVar15 = param_2;
    }
    plVar30 = (long *)&UNK_108cc67b7;
LAB_100f77e7c:
    uVar19 = 3;
  }
  else {
    if (uVar19 == 2) {
      plVar15 = (long *)0x0;
      if (*param_2 != -0x8000000000000000) {
        plVar15 = param_2;
      }
      plVar30 = (long *)&UNK_108cc67ba;
      goto LAB_100f77e7c;
    }
    if (uVar19 == 3) {
      plVar15 = (long *)0x0;
      if (*param_2 != -0x8000000000000000) {
        plVar15 = param_2;
      }
      plVar30 = (long *)&UNK_108cde4a8;
      uVar19 = 4;
    }
    else {
      plVar15 = (long *)0x0;
      if (*param_2 != -0x8000000000000000) {
        plVar15 = param_2;
      }
      plVar30 = (long *)&UNK_108cae545;
      uVar19 = 5;
    }
  }
  plStack_e0 = plVar30;
  uStack_d8 = uVar19;
  if (plVar15 != (long *)0x0) {
    if (plVar15[6] == -0x8000000000000000) {
      FUN_100f763f0(&lStack_d0,0);
      lVar20 = plVar15[9];
    }
    else {
      FUN_100f763f0(&lStack_d0,plVar15[7],plVar15[8]);
      lVar20 = plVar15[9];
    }
    if (lVar20 == -0x8000000000000000) {
      lVar20 = 0;
    }
    else {
      lVar20 = plVar15[10];
    }
    FUN_100f763f0(&plStack_b8,lVar20);
    puStack_a0 = (undefined *)plVar15[1];
    pplStack_98 = (long **)plVar15[2];
    puStack_90 = (undefined *)plVar15[4];
    pplStack_88 = (long **)plVar15[5];
    pplStack_78 = (long **)&DAT_100c7b3a0;
    ppuStack_70 = &puStack_a0;
    pplStack_68 = (long **)&
                           __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
    ;
    ppuStack_60 = &puStack_90;
    plStack_58 = (long *)&
                         __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
    ;
    plStack_50 = &lStack_d0;
    puStack_48 = &DAT_10112965c;
    puStack_80 = (undefined *)&plStack_e0;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (param_1,s__package___bin___resources___pat_108ad5741,&puStack_80);
    if (plStack_b8 != (long *)0x0) {
      _free(lStack_b0);
    }
    if (lStack_d0 != 0) {
      _free(plStack_c8);
    }
    return;
  }
  uVar26 = uVar19;
  uVar12 = _malloc(uVar19);
  if (uVar12 != 0) {
    _memcpy(uVar12,plVar30,uVar19);
    *param_1 = uVar19;
    param_1[1] = uVar12;
    param_1[2] = uVar19;
    return;
  }
  uVar13 = func_0x0001087c9084(1,uVar19);
  if (plStack_b8 != (long *)0x0) {
    _free(lStack_b0);
  }
  if (lStack_d0 != 0) {
    _free(plStack_c8);
  }
  auVar33 = __Unwind_Resume(uVar13);
  uVar19 = auVar33._8_8_;
  puVar14 = auVar33._0_8_;
  uStack_e8 = 0x100f80a80;
  uVar21 = auVar33._8_4_;
  plVar30 = (long *)&UNK_108cc8afa;
  if ((uVar21 & 0xff) != 1) {
    plVar30 = (long *)0x0;
  }
  lVar20 = 0x19;
  if (param_7 != (long *)0x0) {
    plVar30 = param_7;
    lVar20 = param_8;
  }
  uStack_208 = uVar26;
  plStack_200 = plVar15;
  puStack_f0 = &stack0xfffffffffffffff0;
  if (((plVar30 == (long *)0x0) || ((uStack_d8 & 1) != 0)) ||
     (iVar11 = __ZN9codex_api8provider27is_azure_responses_provider17hb8387dd0c218361dE
                         (param_5,param_6,plVar30,lVar20), plVar15 = plStack_e0, lVar16 = lVar20,
     iVar11 != 0)) {
    uVar26 = 0x8000000000000000;
    if ((uVar19 & 0xff) == 0) goto LAB_100f8115c;
LAB_100f80b08:
    if ((uVar21 & 0xff) == 1) {
      plVar15 = (long *)_malloc(0x50);
      if (plVar15 == (long *)0x0) {
LAB_100f812a8:
        func_0x0001087c906c(8,0x50);
        goto LAB_100f81324;
      }
      puStack_188 = &uStack_208;
      puStack_180 = &DAT_100c7b3a0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&pplStack_168,s_API_108ad5770,&puStack_188);
      pplVar8 = pplStack_158;
      plVar4 = plStack_160;
      pplVar7 = pplStack_168;
      plVar30 = (long *)&UNK_108cc8afa;
      if (param_7 != (long *)0x0) {
        plVar30 = param_7;
      }
      if (lVar20 == 0) {
        lVar16 = 1;
      }
      else {
        lVar16 = _malloc(lVar20);
        if (lVar16 == 0) {
          func_0x0001087c9084(1,lVar20);
          goto LAB_100f81324;
        }
      }
      _memcpy(lVar16,plVar30,lVar20);
      bVar10 = false;
      *plVar15 = (long)pplVar7;
      plVar15[1] = (long)plVar4;
      plVar15[2] = (long)pplVar8;
      plVar15[3] = lVar20;
      plVar15[4] = lVar16;
      plVar15[5] = lVar20;
      plVar15[6] = uVar26;
      plVar15[7] = (long)unaff_x26;
      plVar15[8] = uStack_218;
      puVar28 = &UNK_108cc8b13;
      uVar13 = 0xc;
    }
    else {
      plVar15 = (long *)_malloc(0x50);
      if (plVar15 == (long *)0x0) goto LAB_100f812a8;
      puVar17 = (undefined4 *)_malloc(7);
      if (puVar17 == (undefined4 *)0x0) {
        func_0x0001087c9084(1,7);
        goto LAB_100f81324;
      }
      *(undefined4 *)((long)puVar17 + 3) = 0x54504774;
      *puVar17 = 0x74616843;
      if (plStack_c8 == (long *)0x0) {
        lVar20 = 1;
      }
      else {
        lVar20 = _malloc(plStack_c8);
        if (lVar20 == 0) {
          func_0x0001087c9084(1,plStack_c8);
          goto LAB_100f81324;
        }
      }
      _memcpy(lVar20,lStack_d0,plStack_c8);
      *plVar15 = 7;
      plVar15[1] = (long)puVar17;
      plVar15[2] = 7;
      plVar15[3] = (long)plStack_c8;
      plVar15[4] = lVar20;
      plVar15[5] = (long)plStack_c8;
      plVar15[6] = -0x8000000000000000;
      puVar28 = &UNK_108cc8b26;
      uVar13 = 0xc;
      bVar10 = true;
    }
LAB_100f81234:
    pplStack_168 = (long **)0x1;
    *(undefined1 *)(plVar15 + 9) = 1;
  }
  else {
    do {
      lStack_1f0 = lVar16;
      if (lStack_1f0 == 0) break;
      pbVar22 = (byte *)((long)plVar30 + lStack_1f0 + -1);
      uVar21 = (uint)(char)*pbVar22;
      if ((int)uVar21 < 0) {
        pbVar22 = (byte *)((long)plVar30 + lStack_1f0 + -2);
        bVar2 = *pbVar22;
        if ((char)bVar2 < -0x40) {
          pbVar22 = (byte *)((long)plVar30 + lStack_1f0 + -3);
          bVar3 = *pbVar22;
          if ((char)bVar3 < -0x40) {
            pbVar22 = (byte *)((long)plVar30 + lStack_1f0 + -4);
            uVar23 = bVar3 & 0x3f | (*pbVar22 & 7) << 6;
          }
          else {
            uVar23 = (int)(char)bVar3 & 0xf;
          }
          uVar23 = bVar2 & 0x3f | uVar23 << 6;
        }
        else {
          uVar23 = (int)(char)bVar2 & 0x1f;
        }
        uVar21 = uVar21 & 0x3f | uVar23 << 6;
      }
      lVar16 = (long)pbVar22 - (long)plVar30;
    } while (uVar21 == 0x2f);
    plStack_1e8 = (long *)&UNK_108cac9a9;
    uStack_1e0 = 6;
    pplStack_168 = &plStack_1f8;
    plStack_160 = (long *)&DAT_100c7b3a0;
    pplStack_158 = &plStack_1e8;
    puStack_150 = &DAT_100c7b3a0;
    plStack_1f8 = plVar30;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&uStack_1d8,s___108ab8993,&pplStack_168)
    ;
    uVar26 = uStack_1c8;
    if ((plVar15 != (long *)0x0) && (plVar30 = (long *)plVar15[3], plVar30 != (long *)0x0)) {
      pcVar5 = pcStack_1d0;
      uVar12 = uStack_1c8;
      if (uStack_1c8 < 0x10) {
        for (; uVar12 != 0; uVar12 = uVar12 - 1) {
          if (*pcVar5 == '?') goto LAB_100f80e30;
          pcVar5 = pcVar5 + 1;
        }
LAB_100f80e38:
        cVar25 = '?';
      }
      else {
        uVar12 = ((ulong)(pcStack_1d0 + 7) & 0xfffffffffffffff8) - (long)pcStack_1d0;
        if (uVar12 == 0) {
LAB_100f80d8c:
          do {
            uVar24 = *(ulong *)(pcStack_1d0 + uVar12);
            uVar1 = *(ulong *)((long)(pcStack_1d0 + uVar12) + 8);
            if ((((0x101010101010100 - (uVar24 ^ 0x3f3f3f3f3f3f3f3f) | uVar24) &
                  (0x101010101010100 - (uVar1 ^ 0x3f3f3f3f3f3f3f3f) | uVar1) ^ 0xffffffffffffffff) &
                0x8080808080808080) != 0) break;
            uVar12 = uVar12 + 0x10;
          } while (uVar12 <= uStack_1c8 - 0x10);
        }
        else {
          uVar24 = 0;
          bVar10 = true;
          do {
            if (pcStack_1d0[uVar24] == '?') goto LAB_100f80e28;
            uVar24 = uVar24 + 1;
          } while (uVar12 != uVar24);
          if (uVar12 <= uStack_1c8 - 0x10) goto LAB_100f80d8c;
        }
        if (uStack_1c8 != uVar12) {
          bVar10 = true;
          do {
            if (pcStack_1d0[uVar12] == '?') goto LAB_100f80e28;
            uVar12 = uVar12 + 1;
          } while (uStack_1c8 != uVar12);
        }
        bVar10 = false;
LAB_100f80e28:
        if (!bVar10) goto LAB_100f80e38;
LAB_100f80e30:
        cVar25 = '&';
      }
      if (uStack_1d8 == uStack_1c8) {
        FUN_108855060(&uStack_1d8,uStack_1c8,1,1,1);
      }
      pcStack_1d0[uStack_1c8] = cVar25;
      uStack_1c8 = uVar26 + 1;
      plVar15 = (long *)*plVar15;
      lVar16 = *plVar15;
      uVar26 = CONCAT17(-(-1 < lVar16),
                        CONCAT16(-(-1 < (char)((ulong)lVar16 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar16 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar16 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar16 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar16 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar16 >> 8)),-(-1 < (char)lVar16))))))));
      plVar4 = plVar15;
      while( true ) {
        uVar26 = uVar26 & 0x8080808080808080;
        plVar4 = plVar4 + 1;
        if (uVar26 != 0) break;
        lVar16 = *plVar4;
        uVar26 = CONCAT17(-(-1 < lVar16),
                          CONCAT16(-(-1 < (char)((ulong)lVar16 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar16 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar16 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar16 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar16
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar16 >> 8)),-(-1 < (char)lVar16))))))));
        plVar15 = plVar15 + -0x30;
      }
      uVar12 = (uVar26 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar26 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      iVar11 = (int)((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3);
      plStack_1c0 = plVar15 + (long)-iVar11 * 6 + -6;
      plStack_1a0 = plVar15 + (long)-iVar11 * 6 + -3;
      pplStack_168 = &plStack_1c0;
      plStack_160 = (long *)&DAT_100c7b524;
      pplStack_158 = &plStack_1a0;
      puStack_150 = &DAT_100c7b524;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&puStack_188,s___108ad4e41,&pplStack_168);
      uVar13 = uStack_178;
      puVar28 = puStack_180;
      puVar6 = puStack_188;
      if (puStack_188 == (ulong *)0x8000000000000000) {
        plStack_1c0 = (long *)0x0;
        puStack_1b8 = (undefined8 *)0x8;
        plStack_1b0 = (long *)0x0;
      }
      else {
        plVar29 = plVar30;
        if (plVar30 < (long *)0x5) {
          plVar29 = (long *)0x4;
        }
        lVar16 = (long)plVar29 * 0x18;
        if ((long *)0x555555555555555 < plVar30) {
          uVar31 = 0;
LAB_100f80f3c:
          func_0x0001087c9084(uVar31,lVar16);
          goto LAB_100f81324;
        }
        if (lVar16 == 0) {
          plVar29 = (long *)0x0;
          puVar18 = (undefined8 *)0x8;
        }
        else {
          uVar31 = 8;
          puVar18 = (undefined8 *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar16,8);
          if (puVar18 == (undefined8 *)0x0) goto LAB_100f80f3c;
        }
        *puVar18 = puVar6;
        puVar18[1] = puVar28;
        puVar18[2] = uVar13;
        plStack_190 = (long *)0x1;
        lVar16 = (long)plVar30 - 1;
        plStack_1a0 = plVar29;
        puStack_198 = puVar18;
        if (lVar16 != 0) {
          uVar26 = uVar26 - 1 & uVar26;
          do {
            while (plVar30 = plStack_190, uVar26 == 0) {
              lVar32 = *plVar4;
              plVar15 = plVar15 + -0x30;
              plVar4 = plVar4 + 1;
              uVar26 = CONCAT17(-(-1 < lVar32),
                                CONCAT16(-(-1 < (char)((ulong)lVar32 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar32 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar32 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar32 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar32 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar32 >> 8)),
                                                           -(-1 < (char)lVar32)))))))) &
                       0x8080808080808080;
            }
            uVar12 = (uVar26 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar26 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
            iVar11 = (int)((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3);
            plStack_170 = plVar15 + (long)-iVar11 * 6 + -6;
            plStack_1c0 = plVar15 + (long)-iVar11 * 6 + -3;
            pplStack_168 = &plStack_170;
            pplStack_158 = &plStack_1c0;
            plStack_160 = (long *)&DAT_100c7b524;
            puStack_150 = &DAT_100c7b524;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&puStack_188,s___108ad4e41,&pplStack_168);
            uVar13 = uStack_178;
            puVar28 = puStack_180;
            puVar6 = puStack_188;
            if (puStack_188 == (ulong *)0x8000000000000000) break;
            if (plVar30 == plStack_1a0) {
              FUN_108855060(&plStack_1a0,plVar30,lVar16,8,0x18);
              puVar18 = puStack_198;
            }
            uVar26 = uVar26 - 1 & uVar26;
            puVar27 = puVar18 + (long)plVar30 * 3;
            *puVar27 = puVar6;
            puVar27[1] = puVar28;
            puVar27[2] = uVar13;
            plStack_190 = (long *)((long)plVar30 + 1);
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        puStack_1b8 = puStack_198;
        plStack_1c0 = plStack_1a0;
        plStack_1b0 = plStack_190;
      }
      plVar15 = plStack_1b0;
      puVar18 = puStack_1b8;
      FUN_100f3f514(&pplStack_168,puStack_1b8,plStack_1b0,&UNK_108cc811d,1);
      pplVar8 = pplStack_158;
      plVar30 = plStack_160;
      pplVar7 = pplStack_168;
      if ((long **)(uStack_1d8 - uStack_1c8) < pplStack_158) {
        FUN_108855060(&uStack_1d8,uStack_1c8,pplStack_158,1,1);
      }
      uVar26 = uStack_1c8;
      _memcpy(pcStack_1d0 + uStack_1c8,plVar30,pplVar8);
      uStack_1c8 = uVar26 + (long)pplVar8;
      if (pplVar7 != (long **)0x0) {
        _free(plVar30);
      }
      if (plVar15 != (long *)0x0) {
        puVar27 = puVar18 + 1;
        do {
          if (puVar27[-1] != 0) {
            _free(*puVar27);
          }
          puVar27 = puVar27 + 3;
          plVar15 = (long *)((long)plVar15 - 1);
        } while (plVar15 != (long *)0x0);
      }
      if (plStack_1c0 != (long *)0x0) {
        _free(puVar18);
      }
      uVar19 = uVar19 & 0xffffffff;
    }
    uStack_218 = uStack_1c8;
    uVar21 = (uint)uVar19;
    unaff_x26 = pcStack_1d0;
    uVar26 = uStack_1d8;
    if ((uVar19 & 0xff) != 0) goto LAB_100f80b08;
LAB_100f8115c:
    if (param_7 != (long *)0x0) {
      plVar15 = (long *)_malloc(0x50);
      if (plVar15 == (long *)0x0) {
        func_0x0001087c906c(8,0x50);
        goto LAB_100f81324;
      }
      puStack_188 = &uStack_208;
      puStack_180 = &DAT_100c7b3a0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&pplStack_168,s_API_108ad5770,&puStack_188);
      pplVar8 = pplStack_158;
      plVar30 = plStack_160;
      pplVar7 = pplStack_168;
      if (param_8 == 0) {
        lVar20 = 1;
      }
      else {
        lVar20 = _malloc(param_8);
        if (lVar20 == 0) {
          func_0x0001087c9084(1,param_8);
          goto LAB_100f81324;
        }
      }
      _memcpy(lVar20,param_7,param_8);
      bVar10 = false;
      *plVar15 = (long)pplVar7;
      plVar15[1] = (long)plVar30;
      plVar15[2] = (long)pplVar8;
      plVar15[3] = param_8;
      plVar15[4] = lVar20;
      plVar15[5] = param_8;
      plVar15[6] = uVar26;
      plVar15[7] = (long)unaff_x26;
      plVar15[8] = uStack_218;
      puVar28 = &UNK_108cc8aed;
      uVar13 = 0xd;
      goto LAB_100f81234;
    }
    if ((uVar26 & 0x7fffffffffffffff) != 0) {
      _free(unaff_x26);
    }
    pplStack_168 = (long **)0x0;
    bVar10 = false;
    uVar13 = 0xd;
    plVar15 = (long *)0x8;
    puVar28 = &UNK_108cc8aed;
  }
  plStack_160 = plVar15;
  pplStack_158 = pplStack_168;
  lVar20 = _malloc(uVar13);
  if (lVar20 != 0) {
    _memcpy(lVar20,puVar28,uVar13);
    puVar14[4] = plStack_160;
    puVar14[3] = pplStack_168;
    puVar14[5] = pplStack_158;
    *puVar14 = uVar13;
    puVar14[1] = lVar20;
    puVar14[2] = uVar13;
    if ((bVar10) && ((uVar26 & 0x7fffffffffffffff) != 0)) {
      _free(unaff_x26);
    }
    return;
  }
  func_0x0001087c9084(1,uVar13);
LAB_100f81324:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x100f81328);
  (*pcVar9)();
}

