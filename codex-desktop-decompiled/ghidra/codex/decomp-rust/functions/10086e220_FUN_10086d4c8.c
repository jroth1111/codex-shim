
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10086d4c8(undefined1 *param_1,long param_2,undefined8 *param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined7 uVar5;
  undefined7 uVar6;
  code *pcVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  ulong *puVar11;
  long *plVar12;
  undefined *puVar13;
  long *extraout_x8;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  uint uVar21;
  undefined4 uVar22;
  ulong *unaff_x24;
  long *plVar23;
  byte bVar24;
  long *plVar25;
  undefined8 uVar26;
  undefined8 **ppuVar27;
  long alStack_700 [15];
  ulong *puStack_688;
  undefined *puStack_680;
  undefined8 *puStack_678;
  ulong *puStack_670;
  undefined8 *puStack_668;
  undefined8 **ppuStack_660;
  undefined *puStack_658;
  undefined8 *puStack_650;
  undefined *puStack_648;
  undefined1 uStack_640;
  byte bStack_63f;
  undefined4 uStack_63e;
  undefined3 uStack_63a;
  undefined8 uStack_637;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  long *plStack_3a8;
  ulong *puStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined1 uStack_380;
  undefined7 uStack_37f;
  undefined1 uStack_378;
  undefined7 uStack_377;
  undefined *puStack_370;
  undefined8 **ppuStack_368;
  undefined *puStack_360;
  undefined1 uStack_358;
  undefined8 uStack_357;
  undefined8 uStack_34f;
  undefined8 *puStack_340;
  undefined *puStack_338;
  long **pplStack_330;
  undefined *puStack_328;
  undefined8 *puStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined1 uStack_308;
  undefined7 uStack_307;
  undefined1 uStack_300;
  undefined7 uStack_2ff;
  undefined *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined1 uStack_2e0;
  ulong uStack_2df;
  undefined8 uStack_2d7;
  ulong uStack_88;
  
  __ZN74__LT_tracing_core__event__Event_u20_as_u20_tracing_log__NormalizeEvent_GT_19normalized_metadata17h25a909bcf9eb4956E
            (alStack_700,param_4);
  plVar23 = *(long **)(param_4 + 0x18);
  plVar12 = plVar23;
  if (alStack_700[0] != 5) {
    plVar12 = alStack_700;
  }
  if (param_1[7] != '\x02') {
    *(undefined1 *)(param_3 + 2) = param_1[7];
  }
  uVar10 = FUN_100a889b0(*param_1,param_3);
  if ((uVar10 & 1) != 0) {
    return 1;
  }
  if ((param_1[2] & 1) != 0) {
    uStack_308 = *(undefined1 *)(param_3 + 2);
    uStack_310._0_1_ = SUB81(plVar12,0);
    uStack_310._1_4_ = (uint)((ulong)plVar12 >> 8);
    uStack_310._5_1_ = (undefined1)((ulong)plVar12 >> 0x28);
    uStack_310._6_2_ = (undefined2)((ulong)plVar12 >> 0x30);
    puStack_670 = &uStack_310;
    puStack_668 = (undefined8 *)
                  &
                  __ZN80__LT_tracing_subscriber__fmt__format__FmtLevel_u20_as_u20_core__fmt__Display_GT_3fmt17h8634d4fb83bf144bE
    ;
    uVar10 = (**(code **)(param_3[1] + 0x28))(*param_3,s__108ac988c,&puStack_670);
    if ((uVar10 & 1) != 0) {
      return 1;
    }
  }
  if ((param_1[4] & 1) != 0) {
    puVar11 = (ulong *)(*___ZN3std6thread7current7CURRENT17h98c70d55395456b6E)();
    uVar10 = *puVar11;
    if (uVar10 < 3) {
      plVar12 = (long *)FUN_107c05e28();
      uStack_388._0_1_ = SUB81(plVar12,0);
      uStack_388._1_4_ = (uint)((ulong)plVar12 >> 8);
      uStack_388._5_1_ = (undefined1)((ulong)plVar12 >> 0x28);
      uStack_388._6_2_ = (undefined2)((ulong)plVar12 >> 0x30);
      puVar13 = (undefined *)plVar12[3];
      if (puVar13 != (undefined *)0x0) goto LAB_10086d5e8;
LAB_10086d658:
      if ((lRam000000010b66fea8 != 0) && (lRam000000010b66fea8 == plVar12[2])) {
        puVar13 = &UNK_109bd66e6;
        lVar8 = 4;
        goto LAB_10086d5f0;
      }
      if ((param_1[3] & 1) == 0) {
        lVar8 = plVar12[2];
        uStack_310._0_1_ = (undefined1)lVar8;
        uStack_310._1_4_ = (uint)((ulong)lVar8 >> 8);
        uStack_310._5_1_ = (undefined1)((ulong)lVar8 >> 0x28);
        uStack_310._6_2_ = (undefined2)((ulong)lVar8 >> 0x30);
        puStack_670 = &uStack_310;
        puStack_668 = (undefined8 *)&DAT_10112a92c;
        uVar10 = (**(code **)(param_3[1] + 0x28))(*param_3,&UNK_108cb1bd3,&puStack_670);
        goto joined_r0x00010086d6b8;
      }
    }
    else {
      plVar12 = (long *)(uVar10 - 0x10);
      lVar8 = *plVar12;
      *plVar12 = lVar8 + 1;
      if (lVar8 < 0) goto LAB_10086e638;
      uStack_388._0_1_ = SUB81(plVar12,0);
      uStack_388._1_4_ = (uint)((ulong)plVar12 >> 8);
      uStack_388._5_1_ = (undefined1)((ulong)plVar12 >> 0x28);
      uStack_388._6_2_ = (undefined2)((ulong)plVar12 >> 0x30);
      puVar13 = *(undefined **)(uVar10 + 8);
      if (puVar13 == (undefined *)0x0) goto LAB_10086d658;
LAB_10086d5e8:
      lVar8 = plVar12[4] + -1;
LAB_10086d5f0:
      uStack_310._0_1_ = SUB81(puVar13,0);
      uStack_310._1_4_ = (uint)((ulong)puVar13 >> 8);
      uStack_310._5_1_ = (undefined1)((ulong)puVar13 >> 0x28);
      uStack_310._6_2_ = (undefined2)((ulong)puVar13 >> 0x30);
      uStack_308 = (undefined1)lVar8;
      uStack_307 = (undefined7)((ulong)lVar8 >> 8);
      puStack_670 = &uStack_310;
      puStack_668 = (undefined8 *)
                    &
                    __ZN85__LT_tracing_subscriber__fmt__format__FmtThreadName_u20_as_u20_core__fmt__Display_GT_3fmt17hf95f3c6951c865d7E
      ;
      uVar10 = (**(code **)(param_3[1] + 0x28))(*param_3,s__108ac988c,&puStack_670);
joined_r0x00010086d6b8:
      if ((uVar10 & 1) != 0) {
        plVar12 = (long *)CONCAT26(uStack_388._6_2_,
                                   CONCAT15(uStack_388._5_1_,
                                            CONCAT41(uStack_388._1_4_,(undefined1)uStack_388)));
        lVar8 = *plVar12;
        *plVar12 = lVar8 + -1;
        LORelease();
        if (lVar8 != 1) {
          return 1;
        }
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&uStack_388);
        return 1;
      }
    }
    plVar12 = (long *)CONCAT26(uStack_388._6_2_,
                               CONCAT15(uStack_388._5_1_,
                                        CONCAT41(uStack_388._1_4_,(undefined1)uStack_388)));
    lVar8 = *plVar12;
    *plVar12 = lVar8 + -1;
    LORelease();
    if (lVar8 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&uStack_388);
    }
  }
  if ((param_1[3] & 1) != 0) {
    puVar11 = (ulong *)(*___ZN3std6thread7current7CURRENT17h98c70d55395456b6E)();
    if (*puVar11 < 3) {
      plVar12 = (long *)FUN_107c05e28();
    }
    else {
      plVar12 = (long *)(*puVar11 - 0x10);
      lVar8 = *plVar12;
      *plVar12 = lVar8 + 1;
      if (lVar8 < 0) goto LAB_10086e638;
    }
    uStack_310._0_1_ = SUB81(plVar12,0);
    uStack_310._1_4_ = (uint)((ulong)plVar12 >> 8);
    uStack_310._5_1_ = (undefined1)((ulong)plVar12 >> 0x28);
    uStack_310._6_2_ = (undefined2)((ulong)plVar12 >> 0x30);
    lVar8 = plVar12[2];
    uStack_388._0_1_ = (undefined1)lVar8;
    uStack_388._1_4_ = (uint)((ulong)lVar8 >> 8);
    uStack_388._5_1_ = (undefined1)((ulong)lVar8 >> 0x28);
    uStack_388._6_2_ = (undefined2)((ulong)lVar8 >> 0x30);
    puStack_670 = &uStack_388;
    puStack_668 = (undefined8 *)&DAT_10112a92c;
    iVar9 = (**(code **)(param_3[1] + 0x28))(*param_3,&UNK_108cb1bd3,&puStack_670);
    if (iVar9 != 0) {
      plVar12 = (long *)CONCAT26(uStack_310._6_2_,
                                 CONCAT15(uStack_310._5_1_,
                                          CONCAT41(uStack_310._1_4_,(undefined1)uStack_310)));
      lVar8 = *plVar12;
      *plVar12 = lVar8 + -1;
      LORelease();
      if (lVar8 != 1) {
        return 1;
      }
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&uStack_310);
      return 1;
    }
    plVar12 = (long *)CONCAT26(uStack_310._6_2_,
                               CONCAT15(uStack_310._5_1_,
                                        CONCAT41(uStack_310._1_4_,(undefined1)uStack_310)));
    lVar8 = *plVar12;
    *plVar12 = lVar8 + -1;
    LORelease();
    if (lVar8 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&uStack_310);
    }
  }
  bVar3 = *(byte *)(param_3 + 2);
  lVar8 = **(long **)(param_2 + 8);
  if (lVar8 == 0) goto LAB_10086df74;
  if (lVar8 == 2) {
    puVar11 = *(ulong **)(param_2 + 0x10);
    if (puVar11 == (ulong *)0x0) goto LAB_10086df74;
    puVar20 = *(undefined8 **)(param_2 + 0x18);
    FUN_1061db950(&uStack_388,puVar11,(*(long **)(param_2 + 8))[1]);
    puVar18 = (undefined8 *)
              CONCAT26(uStack_388._6_2_,
                       CONCAT15(uStack_388._5_1_,CONCAT41(uStack_388._1_4_,(undefined1)uStack_388)))
    ;
    if (puVar18 == (undefined8 *)0x0) goto LAB_10086df74;
    puStack_670 = puVar11;
    ppuVar27 = (undefined8 **)CONCAT71(uStack_37f,uStack_380);
    puVar13 = (undefined *)CONCAT71(uStack_377,uStack_378);
    if ((puVar18[1] & (ulong)puVar20) != 0) {
      puStack_670 = (ulong *)0x0;
      uVar10 = puVar18[10];
      do {
        while( true ) {
          if ((uVar10 & 3) == 2) goto LAB_10086e5a8;
          uVar14 = uVar10 >> 2;
          if (((uVar10 & 3) != 1) || ((uVar14 & 0x1ffffffffffff) != 1)) break;
          uVar15 = uVar10 & 0xfff8000000000000;
          uVar14 = puVar18[10];
          bVar1 = uVar14 == uVar10;
          uVar10 = uVar14;
          if (bVar1) {
            puVar18[10] = uVar15 | 3;
            FUN_10074fd94();
            goto LAB_10086d864;
          }
        }
        uVar17 = uVar10 & 0xfff8000000000003;
        uVar15 = puVar18[10];
        bVar1 = uVar15 != uVar10;
        uVar10 = uVar15;
      } while (bVar1);
      puVar18[10] = (uVar14 & 0xc001ffffffffffff) * 4 - 4 | uVar17;
      goto LAB_10086d864;
    }
  }
  else {
    func_0x000100a89748(&puStack_670,param_2 + 0x10);
LAB_10086d864:
    puVar18 = puStack_668;
    ppuVar27 = ppuStack_660;
    puVar13 = puStack_658;
    puVar20 = puStack_650;
    if (puStack_670 == (ulong *)0x0) {
LAB_10086df74:
      uVar22 = SUB84(unaff_x24,0);
      if ((param_1[1] & 1) != 0) {
        plVar12 = plVar23;
        if (alStack_700[0] != 5) {
          plVar12 = alStack_700;
        }
        uStack_2e0 = 0;
        uStack_2df = (ulong)bVar3;
        uStack_2d7 = 0x1500000015;
        uStack_310._0_1_ = 0;
        uStack_310._1_4_ = 0;
        uStack_310._5_1_ = 0;
        uStack_310._6_2_ = 0x8000;
        uStack_308 = (undefined1)plVar12[4];
        uStack_307 = (undefined7)((ulong)plVar12[4] >> 8);
        uStack_300 = (undefined1)plVar12[5];
        uStack_2ff = (undefined7)((ulong)plVar12[5] >> 8);
        puStack_2f8 = (undefined *)0x8000000000000002;
        uStack_640 = 0;
        uStack_63e = 0;
        uStack_63a = 0;
        uStack_637 = 0x1500000015;
        puStack_670 = (ulong *)0x8000000000000000;
        puStack_668 = (undefined8 *)&UNK_108ca7636;
        puStack_658 = (undefined *)0x8000000000000002;
        ppuStack_660 = (undefined8 **)0x1;
        uStack_388._0_1_ = SUB81(&uStack_310,0);
        uStack_388._1_4_ = (uint)((ulong)&uStack_310 >> 8);
        uStack_388._5_1_ = (undefined1)((ulong)&uStack_310 >> 0x28);
        uStack_388._6_2_ = (undefined2)((ulong)&uStack_310 >> 0x30);
        uStack_380 = 0xd0;
        uStack_37f = 0x1058ed0;
        uStack_378 = SUB81(&puStack_670,0);
        uStack_377 = (undefined7)((ulong)&puStack_670 >> 8);
        puStack_370 = &
                      __ZN90__LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h48a4d252bf9f017eE
        ;
        bStack_63f = bVar3;
        iVar9 = (**(code **)(param_3[1] + 0x28))(*param_3,s__108ac9890,&uStack_388);
        if (iVar9 != 0) {
          if ((puStack_670 != (ulong *)0x8000000000000000) && (puStack_670 != (ulong *)0x0)) {
            _free(puStack_668);
          }
          if ((-0x7ffffffffffffffe < (long)puStack_658) && (puStack_658 != (undefined *)0x0)) {
            _free(puStack_650);
          }
          lVar8 = CONCAT26(uStack_310._6_2_,
                           CONCAT15(uStack_310._5_1_,
                                    CONCAT41(uStack_310._1_4_,(undefined1)uStack_310)));
          if ((lVar8 != -0x8000000000000000) && (lVar8 != 0)) {
            _free(CONCAT71(uStack_307,uStack_308));
          }
          if ((long)puStack_2f8 < -0x7ffffffffffffffd) {
            return 1;
          }
          if (puStack_2f8 == (undefined *)0x0) {
            return 1;
          }
          _free(puStack_2f0);
          return 1;
        }
        if ((puStack_670 != (ulong *)0x8000000000000000) && (puStack_670 != (ulong *)0x0)) {
          _free(puStack_668);
        }
        if ((-0x7ffffffffffffffe < (long)puStack_658) && (puStack_658 != (undefined *)0x0)) {
          _free(puStack_650);
        }
        lVar8 = CONCAT26(uStack_310._6_2_,
                         CONCAT15(uStack_310._5_1_,CONCAT41(uStack_310._1_4_,(undefined1)uStack_310)
                                 ));
        if ((lVar8 != -0x8000000000000000) && (lVar8 != 0)) {
          _free(CONCAT71(uStack_307,uStack_308));
        }
        if ((-0x7ffffffffffffffe < (long)puStack_2f8) && (puStack_2f8 != (undefined *)0x0)) {
          _free(puStack_2f0);
        }
      }
      if ((param_1[6] & 1) == 0) {
        uVar21 = 0;
        bVar24 = param_1[5];
      }
      else {
        plVar12 = plVar23;
        if (alStack_700[0] != 5) {
          plVar12 = alStack_700;
        }
        uVar21 = *(uint *)(plVar12 + 1);
        uVar22 = *(undefined4 *)((long)plVar12 + 0xc);
        bVar24 = param_1[5];
      }
      if ((bVar24 & 1) != 0) {
        plVar12 = plVar23;
        if (alStack_700[0] != 5) {
          plVar12 = alStack_700;
        }
        lVar8 = plVar12[0xc];
        if (lVar8 != 0) {
          if (alStack_700[0] != 5) {
            plVar23 = alStack_700;
          }
          uStack_2e0 = 0;
          uStack_2df = (ulong)bVar3;
          uStack_2d7 = 0x1500000015;
          uStack_310._0_1_ = 0;
          uStack_310._1_4_ = 0;
          uStack_310._5_1_ = 0;
          uStack_310._6_2_ = 0x8000;
          uStack_308 = (undefined1)lVar8;
          uStack_307 = (undefined7)((ulong)lVar8 >> 8);
          uStack_300 = (undefined1)plVar23[0xd];
          uStack_2ff = (undefined7)((ulong)plVar23[0xd] >> 8);
          puStack_2f8 = (undefined *)0x8000000000000002;
          uStack_640 = 0;
          uStack_63e = 0;
          uStack_63a = 0;
          uStack_637 = 0x1500000015;
          puStack_670 = (ulong *)0x8000000000000000;
          puStack_668 = (undefined8 *)&UNK_108ca7636;
          puStack_658 = (undefined *)0x8000000000000002;
          ppuStack_660 = (undefined8 **)0x1;
          puStack_338 = (undefined *)(ulong)(uVar21 == 0);
          puStack_340 = (undefined8 *)&UNK_108ca1947;
          if (uVar21 != 0) {
            puStack_340 = (undefined8 *)0x1;
          }
          uStack_388._0_1_ = SUB81(&uStack_310,0);
          uStack_388._1_4_ = (uint)((ulong)&uStack_310 >> 8);
          uStack_388._5_1_ = (undefined1)((ulong)&uStack_310 >> 0x28);
          uStack_388._6_2_ = (undefined2)((ulong)&uStack_310 >> 0x30);
          uStack_380 = 0xd0;
          uStack_37f = 0x1058ed0;
          uStack_378 = SUB81(&puStack_670,0);
          uStack_377 = (undefined7)((ulong)&puStack_670 >> 8);
          puStack_370 = &
                        __ZN90__LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h48a4d252bf9f017eE
          ;
          ppuStack_368 = &puStack_340;
          puStack_360 = &DAT_100c7b3a0;
          bStack_63f = bVar3;
          uVar10 = (**(code **)(param_3[1] + 0x28))(*param_3,s__108ac137a,&uStack_388);
          if ((puStack_670 != (ulong *)0x8000000000000000) && (puStack_670 != (ulong *)0x0)) {
            _free(puStack_668);
          }
          if ((-0x7ffffffffffffffe < (long)puStack_658) && (puStack_658 != (undefined *)0x0)) {
            _free(puStack_650);
          }
          lVar8 = CONCAT26(uStack_310._6_2_,
                           CONCAT15(uStack_310._5_1_,
                                    CONCAT41(uStack_310._1_4_,(undefined1)uStack_310)));
          if ((lVar8 != -0x8000000000000000) && (lVar8 != 0)) {
            _free(CONCAT71(uStack_307,uStack_308));
          }
          if ((-0x7ffffffffffffffe < (long)puStack_2f8) && (puStack_2f8 != (undefined *)0x0)) {
            _free(puStack_2f0);
          }
          if ((uVar10 & 1) != 0) {
            return 1;
          }
        }
      }
      if ((uVar21 & 1) != 0) {
        puStack_340 = (undefined8 *)CONCAT44(puStack_340._4_4_,uVar22);
        uStack_388._0_1_ = 0;
        uStack_388._1_4_ = (uint)bVar3;
        uStack_388._5_1_ = 0;
        uStack_388._6_2_ = 0;
        uStack_380 = 0;
        uStack_37f = 0x1500000015;
        uStack_378 = 0;
        uStack_310._0_1_ = 0;
        uStack_310._1_4_ = (uint)bVar3;
        uStack_310._5_1_ = 0;
        uStack_310._6_2_ = 0;
        uStack_308 = 0;
        uStack_307 = 0x1500000015;
        uStack_300 = 0;
        puStack_670 = &uStack_388;
        puStack_668 = (undefined8 *)
                      &
                      __ZN65__LT_nu_ansi_term__ansi__Prefix_u20_as_u20_core__fmt__Display_GT_3fmt17h27c84f6899d2859dE
        ;
        ppuStack_660 = &puStack_340;
        puStack_658 = &
                      __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
        ;
        puStack_650 = &uStack_310;
        puStack_648 = &
                      __ZN65__LT_nu_ansi_term__ansi__Suffix_u20_as_u20_core__fmt__Display_GT_3fmt17h4a19d4bf37d32157E
        ;
        uVar10 = (**(code **)(param_3[1] + 0x28))(*param_3,s___108ac9895,&puStack_670);
        if ((uVar10 & 1) != 0) {
          return 1;
        }
      }
      uStack_300 = *(undefined1 *)(param_3 + 2);
      uStack_310._0_1_ = SUB81(param_3,0);
      uStack_310._1_4_ = (uint)((ulong)param_3 >> 8);
      uStack_310._5_1_ = (undefined1)((ulong)param_3 >> 0x28);
      uStack_310._6_2_ = (undefined2)((ulong)param_3 >> 0x30);
      uStack_308 = 0xa8;
      uStack_307 = 0x10b21da;
      puStack_2f8 = (undefined *)CONCAT62(puStack_2f8._2_6_,1);
      piVar16 = *(int **)(param_4 + 0x10);
      lVar8 = *(long *)(piVar16 + 4);
      plVar12 = *(long **)(piVar16 + 6);
      if (*piVar16 == 1) {
        puVar18 = (undefined8 *)plVar12[1];
        if (puVar18 != (undefined8 *)0x0) {
          puVar20 = (undefined8 *)0x0;
          puVar11 = (ulong *)*plVar12;
          puVar13 = (undefined *)plVar12[3];
          ppuVar27 = (undefined8 **)plVar12[2];
          plVar12 = (long *)(*(long *)(piVar16 + 2) + 8);
          lVar8 = lVar8 << 4;
          do {
            if (lVar8 == 0) break;
            puStack_670 = puVar11;
            puStack_668 = puVar18;
            ppuStack_660 = ppuVar27;
            puStack_658 = puVar13;
            puStack_650 = puVar20;
            if (plVar12[-1] != 0) {
              (**(code **)(*plVar12 + 0x18))(plVar12[-1],&puStack_670,&uStack_310,&UNK_10b244550);
            }
            puVar20 = (undefined8 *)((long)puVar20 + 1);
            plVar12 = plVar12 + 2;
            lVar8 = lVar8 + -0x10;
          } while (puVar18 != puVar20);
        }
      }
      else if (lVar8 != 0) {
        lVar19 = plVar12[2];
        lVar8 = lVar8 * 0x18;
        plVar12 = (long *)(*(long *)(piVar16 + 2) + 0x10);
        do {
          if ((*(long *)(plVar12[-2] + 0x10) == lVar19) && (plVar12[-1] != 0)) {
            (**(code **)(*plVar12 + 0x18))(plVar12[-1],plVar12[-2],&uStack_310,&UNK_10b244550);
          }
          plVar12 = plVar12 + 3;
          lVar8 = lVar8 + -0x18;
        } while (lVar8 != 0);
      }
      if (((ulong)puStack_2f8 & 0x100) != 0) {
        return 1;
      }
      uVar26 = (**(code **)(param_3[1] + 0x28))(*param_3,&UNK_108ca14f4,3);
      return uVar26;
    }
  }
  puStack_650 = puVar20;
  puStack_658 = puVar13;
  ppuStack_660 = ppuVar27;
  puStack_668 = puVar18;
  puVar18 = puStack_650;
  unaff_x24 = puStack_670;
  puStack_2f8 = puStack_658;
  uStack_300 = SUB81(ppuStack_660,0);
  uStack_2ff = (undefined7)((ulong)ppuStack_660 >> 8);
  uStack_308 = SUB81(puStack_668,0);
  uStack_307 = (undefined7)((ulong)puStack_668 >> 8);
  uStack_310._0_1_ = SUB81(puStack_670,0);
  uStack_310._1_4_ = (uint)((ulong)puStack_670 >> 8);
  uStack_310._5_1_ = (undefined1)((ulong)puStack_670 >> 0x28);
  uStack_310._6_2_ = (undefined2)((ulong)puStack_670 >> 0x30);
  puStack_2f0 = puStack_650;
  puVar13 = puStack_658 + 1;
  if (puStack_658 != (undefined *)0xffffffffffffffff) {
    puVar11 = puStack_670;
    uVar10 = puStack_668[10];
LAB_10086d8c8:
    do {
      if ((uVar10 & 3) == 2) {
        uStack_388._0_1_ = 2;
        uStack_388._1_4_ = 0;
        uStack_388._5_1_ = 0;
        uStack_388._6_2_ = 0;
        puStack_670 = &uStack_388;
        puStack_668 = (undefined8 *)
                      &
                      __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Binary_u20_for_u20_usize_GT_3fmt17hb54e0e9a7f0c0768E
        ;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (&UNK_108cd640b,&puStack_670,&UNK_10b24e120);
LAB_10086e5a8:
        puStack_340 = (undefined8 *)0x2;
        uStack_388._0_1_ = SUB81(&puStack_340,0);
        uStack_388._1_4_ = (uint)((ulong)&puStack_340 >> 8);
        uStack_388._5_1_ = (undefined1)((ulong)&puStack_340 >> 0x28);
        uStack_388._6_2_ = (undefined2)((ulong)&puStack_340 >> 0x30);
        uStack_380 = 4;
        uStack_37f = 0x1055b4e;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd640b,&uStack_388,&UNK_10b24e120)
        ;
        plVar12 = extraout_x8;
        goto LAB_10086e5dc;
      }
      uVar14 = uVar10 >> 2;
      if (((uVar10 & 3) != 1) || ((uVar14 & 0x1ffffffffffff) != 1)) goto LAB_10086d8a0;
      uVar15 = uVar10 & 0xfff8000000000000;
      uVar14 = puStack_668[10];
      bVar1 = uVar14 != uVar10;
      uVar10 = uVar14;
    } while (bVar1);
    puStack_668[10] = uVar15 | 3;
    FUN_10074fd94(ppuStack_660,puStack_658);
    goto LAB_10086d914;
  }
  FUN_107c05cac(&UNK_109bf510e,0x14,&UNK_10b4d73e0);
LAB_10086e638:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10086e63c);
  (*pcVar7)();
LAB_10086d8a0:
  uVar17 = uVar10 & 0xfff8000000000003;
  uVar15 = puStack_668[10];
  bVar1 = uVar15 == uVar10;
  uVar10 = uVar15;
  if (bVar1) goto code_r0x00010086d8b8;
  goto LAB_10086d8c8;
code_r0x00010086d8b8:
  puStack_668[10] = (uVar14 & 0xc001ffffffffffff) * 4 - 4 | uVar17;
LAB_10086d914:
  puStack_678 = puVar18;
  uVar4 = *(undefined1 *)(param_3 + 2);
  puStack_688 = puVar11;
  puStack_680 = puVar13;
  FUN_10075f820(&uStack_310,&puStack_688);
  uStack_3d8 = CONCAT71(uStack_307,uStack_308);
  if (uStack_88 < 0x11) {
    uStack_3d8 = uStack_88;
  }
  lVar8 = 8;
  if (uStack_88 < 0x11) {
    lVar8 = 0x288;
  }
  *(undefined8 *)((long)&uStack_310 + lVar8) = 0;
  _memcpy(&puStack_670,&uStack_310,0x290);
  uStack_3e0 = 0;
  if (uStack_3d8 == 0) {
    FUN_100ce3914(&puStack_670);
  }
  else {
    unaff_x24 = (ulong *)0x0;
    do {
      uStack_3d8 = uStack_3d8 - 1;
      ppuVar27 = &puStack_668;
      if (0x10 < uStack_3e8) {
        ppuVar27 = ppuStack_660;
      }
      ppuVar27 = ppuVar27 + uStack_3d8 * 5;
      if (*ppuVar27 == (undefined8 *)0x0) {
        FUN_100ce3914(&puStack_670);
        if ((int)unaff_x24 != 0) goto LAB_10086df60;
        goto LAB_10086df74;
      }
      puStack_3c0 = ppuVar27[2];
      plVar25 = ppuVar27[1];
      puStack_3b0 = ppuVar27[4];
      puStack_3b8 = ppuVar27[3];
      uVar26 = *(undefined8 *)(*plVar25 + 0x10);
      uVar2 = *(undefined8 *)(*plVar25 + 0x18);
      uStack_2df = 0;
      uStack_2d7 = 0x1500000015;
      uStack_310._0_1_ = 0;
      uStack_310._1_4_ = 0;
      uStack_310._5_1_ = 0;
      uStack_310._6_2_ = 0x8000;
      uStack_308 = (undefined1)uVar26;
      uStack_307 = (undefined7)((ulong)uVar26 >> 8);
      uStack_300 = (undefined1)uVar2;
      uStack_2ff = (undefined7)((ulong)uVar2 >> 8);
      puStack_2f8 = (undefined *)0x8000000000000002;
      uStack_388._0_1_ = SUB81(&uStack_310,0);
      uStack_388._1_4_ = (uint)((ulong)&uStack_310 >> 8);
      uStack_388._5_1_ = (undefined1)((ulong)&uStack_310 >> 0x28);
      uStack_388._6_2_ = (undefined2)((ulong)&uStack_310 >> 0x30);
      uStack_380 = 0xd0;
      uStack_37f = 0x1058ed0;
      puStack_3d0 = *ppuVar27;
      plStack_3c8 = plVar25;
      uStack_2e0 = uVar4;
      iVar9 = (**(code **)(param_3[1] + 0x28))(*param_3,s__108b1bd74,&uStack_388);
      if (iVar9 != 0) {
        lVar8 = CONCAT26(uStack_310._6_2_,
                         CONCAT15(uStack_310._5_1_,CONCAT41(uStack_310._1_4_,(undefined1)uStack_310)
                                 ));
        if ((lVar8 != -0x8000000000000000) && (lVar8 != 0)) {
          _free(CONCAT71(uStack_307,uStack_308));
        }
        if (((long)puStack_2f8 < -0x7ffffffffffffffd) || (puStack_2f8 == (undefined *)0x0))
        goto LAB_10086e4b8;
        _free(puStack_2f0);
        uVar10 = plVar25[10];
        goto LAB_10086e4e8;
      }
      lVar8 = CONCAT26(uStack_310._6_2_,
                       CONCAT15(uStack_310._5_1_,CONCAT41(uStack_310._1_4_,(undefined1)uStack_310)))
      ;
      if ((lVar8 != -0x8000000000000000) && (lVar8 != 0)) {
        _free(CONCAT71(uStack_307,uStack_308));
      }
      if ((-0x7ffffffffffffffe < (long)puStack_2f8) && (puStack_2f8 != (undefined *)0x0)) {
        _free(puStack_2f0);
      }
      unaff_x24 = (ulong *)(plVar25 + 4);
      uVar10 = plVar25[4];
      do {
        if (((0xffffffffffffffef < uVar10) || (uVar10 == 1)) || (((uint)uVar10 >> 1 & 1) != 0)) {
          FUN_107c05e00(unaff_x24,0);
          goto LAB_10086dae8;
        }
        uVar14 = uVar10 | 1;
        bVar1 = *unaff_x24 != uVar10;
        uVar10 = *unaff_x24;
      } while (bVar1);
      *unaff_x24 = uVar14 + 0x10;
LAB_10086dae8:
      uVar5 = uStack_377;
      plVar12 = plVar25 + 6;
      if ((char)plVar25[5] != '\0') goto LAB_10086e5dc;
      uStack_377 = 0;
      uVar6 = uStack_377;
      plStack_3a8 = plVar12;
      puStack_3a0 = unaff_x24;
      uStack_377 = uVar5;
      if (plVar25[9] != 0) {
        lVar8 = 0;
        lVar19 = plVar25[6];
        uVar14 = plVar25[7];
        uVar15 = uVar14 & 0x716edfddde06e5b1;
        uVar26 = *(undefined8 *)(lVar19 + uVar15);
        uVar10 = CONCAT17(-((char)((ulong)uVar26 >> 0x38) == '8'),
                          CONCAT16(-((char)((ulong)uVar26 >> 0x30) == '8'),
                                   CONCAT15(-((char)((ulong)uVar26 >> 0x28) == '8'),
                                            CONCAT14(-((char)((ulong)uVar26 >> 0x20) == '8'),
                                                     CONCAT13(-((char)((ulong)uVar26 >> 0x18) == '8'
                                                               ),CONCAT12(-((char)((ulong)uVar26 >>
                                                                                  0x10) == '8'),
                                                                          CONCAT11(-((char)((ulong)
                                                  uVar26 >> 8) == '8'),-((char)uVar26 == '8'))))))))
                 & 0x8080808080808080;
        while( true ) {
          while (uVar10 == 0) {
            bVar24 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar26 >> 0x38) == -1),
                                         CONCAT16(-((char)((ulong)uVar26 >> 0x30) == -1),
                                                  CONCAT15(-((char)((ulong)uVar26 >> 0x28) == -1),
                                                           CONCAT14(-((char)((ulong)uVar26 >> 0x20)
                                                                     == -1),CONCAT13(-((char)((ulong
                                                  )uVar26 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar26 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar26 >> 8) ==
                                                                     -1),-((char)uVar26 == -1)))))))
                                        ),1);
            if ((bVar24 & 1) != 0) goto LAB_10086dd30;
            lVar8 = lVar8 + 8;
            uVar15 = uVar15 + lVar8 & uVar14;
            uVar26 = *(undefined8 *)(lVar19 + uVar15);
            uVar10 = CONCAT17(-((char)((ulong)uVar26 >> 0x38) == '8'),
                              CONCAT16(-((char)((ulong)uVar26 >> 0x30) == '8'),
                                       CONCAT15(-((char)((ulong)uVar26 >> 0x28) == '8'),
                                                CONCAT14(-((char)((ulong)uVar26 >> 0x20) == '8'),
                                                         CONCAT13(-((char)((ulong)uVar26 >> 0x18) ==
                                                                   '8'),CONCAT12(-((char)((ulong)
                                                  uVar26 >> 0x10) == '8'),
                                                  CONCAT11(-((char)((ulong)uVar26 >> 8) == '8'),
                                                           -((char)uVar26 == '8')))))))) &
                     0x8080808080808080;
          }
          uVar17 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar17 = uVar15 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar14;
          plVar12 = (long *)(lVar19 + -0x20 + uVar17 * -0x20);
          if (plVar12[1] == 0x716edfddde06e5b1 && *plVar12 == -0x3760dee2c25b4f34) break;
          uVar10 = uVar10 - 1 & uVar10;
        }
        lVar19 = lVar19 + uVar17 * -0x20;
        lVar8 = *(long *)(lVar19 + -0x10);
        (**(code **)(*(long *)(lVar19 + -8) + 0x18))(&uStack_310,lVar8);
        if ((CONCAT71(uStack_307,uStack_308) == 0x716edfddde06e5b1 &&
             CONCAT26(uStack_310._6_2_,
                      CONCAT15(uStack_310._5_1_,CONCAT41(uStack_310._1_4_,(undefined1)uStack_310)))
             == -0x3760dee2c25b4f34) &&
           (plStack_390 = &lStack_398, lStack_398 = lVar8, *(long *)(lVar8 + 0x10) != 0)) {
          uStack_357 = 0;
          uStack_34f = 0x1500000015;
          uStack_388._0_1_ = 0;
          uStack_388._1_4_ = 0;
          uStack_388._5_1_ = 0;
          uStack_388._6_2_ = 0x8000;
          uStack_380 = 0x34;
          uStack_37f = 0x108ca76;
          puStack_370 = (undefined *)0x8000000000000002;
          uStack_378 = 1;
          uStack_2df = 0;
          uStack_2d7 = 0x1500000015;
          uStack_310._0_1_ = 0;
          uStack_310._1_4_ = 0;
          uStack_310._5_1_ = 0;
          uStack_310._6_2_ = 0x8000;
          uStack_308 = 4;
          uStack_307 = 0x108ca21;
          puStack_2f8 = (undefined *)0x8000000000000002;
          puStack_340 = &uStack_388;
          puStack_338 = &
                        __ZN90__LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h48a4d252bf9f017eE
          ;
          pplStack_330 = &plStack_390;
          puStack_328 = &DAT_100c7b50c;
          puStack_318 = &
                        __ZN90__LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h48a4d252bf9f017eE
          ;
          uStack_377 = uVar6;
          uStack_358 = uVar4;
          puStack_320 = &uStack_310;
          uStack_300 = uStack_378;
          uStack_2ff = uVar6;
          uStack_2e0 = uVar4;
          iVar9 = (**(code **)(param_3[1] + 0x28))(*param_3,s__108ac137a,&puStack_340);
          if (iVar9 != 0) {
            FUN_100e331c0(&uStack_310);
            FUN_100e331c0(&uStack_388);
            goto LAB_10086e468;
          }
          lVar8 = CONCAT26(uStack_310._6_2_,
                           CONCAT15(uStack_310._5_1_,
                                    CONCAT41(uStack_310._1_4_,(undefined1)uStack_310)));
          if ((lVar8 != -0x8000000000000000) && (lVar8 != 0)) {
            _free(CONCAT71(uStack_307,uStack_308));
          }
          if ((-0x7ffffffffffffffe < (long)puStack_2f8) && (puStack_2f8 != (undefined *)0x0)) {
            _free(puStack_2f0);
          }
          lVar8 = CONCAT26(uStack_388._6_2_,
                           CONCAT15(uStack_388._5_1_,
                                    CONCAT41(uStack_388._1_4_,(undefined1)uStack_388)));
          if ((lVar8 != -0x8000000000000000) && (lVar8 != 0)) {
            _free(CONCAT71(uStack_37f,uStack_380));
          }
          if ((-0x7ffffffffffffffe < (long)puStack_370) && (puStack_370 != (undefined *)0x0)) {
            _free(ppuStack_368);
          }
        }
      }
LAB_10086dd30:
      uStack_2e0 = 0;
      uStack_2df = (ulong)bVar3;
      uStack_2d7 = 0x1500000015;
      uStack_310._0_1_ = 0;
      uStack_310._1_4_ = 0;
      uStack_310._5_1_ = 0;
      uStack_310._6_2_ = 0x8000;
      uStack_308 = 0x36;
      uStack_307 = 0x108ca76;
      puStack_2f8 = (undefined *)0x8000000000000002;
      uStack_300 = 1;
      uStack_388._0_1_ = SUB81(&uStack_310,0);
      uStack_388._1_4_ = (uint)((ulong)&uStack_310 >> 8);
      uStack_388._5_1_ = (undefined1)((ulong)&uStack_310 >> 0x28);
      uStack_388._6_2_ = (undefined2)((ulong)&uStack_310 >> 0x30);
      uStack_380 = 0xd0;
      uStack_37f = 0x1058ed0;
      uStack_2ff = uVar6;
      iVar9 = (**(code **)(param_3[1] + 0x28))(*param_3,s__108b1bd74,&uStack_388);
      if (iVar9 != 0) {
        lVar8 = CONCAT26(uStack_310._6_2_,
                         CONCAT15(uStack_310._5_1_,CONCAT41(uStack_310._1_4_,(undefined1)uStack_310)
                                 ));
        if ((lVar8 != -0x8000000000000000) && (lVar8 != 0)) {
          _free(CONCAT71(uStack_307,uStack_308));
        }
        if ((-0x7ffffffffffffffe < (long)puStack_2f8) && (puStack_2f8 != (undefined *)0x0)) {
          _free(puStack_2f0);
        }
LAB_10086e468:
        uVar10 = *unaff_x24;
        goto LAB_10086e494;
      }
      lVar8 = CONCAT26(uStack_310._6_2_,
                       CONCAT15(uStack_310._5_1_,CONCAT41(uStack_310._1_4_,(undefined1)uStack_310)))
      ;
      if ((lVar8 != -0x8000000000000000) && (lVar8 != 0)) {
        _free(CONCAT71(uStack_307,uStack_308));
      }
      if ((-0x7ffffffffffffffe < (long)puStack_2f8) && (puStack_2f8 != (undefined *)0x0)) {
        _free(puStack_2f0);
      }
      uVar10 = *unaff_x24;
      do {
        while (((uint)uVar10 >> 1 & 1) != 0) {
          if (((uint)uVar10 >> 3 & 1) == 0) {
            func_0x000107c05e08(unaff_x24);
            goto LAB_10086de10;
          }
          uVar14 = uVar10 & 0xfffffffffffffff6;
          bVar1 = *unaff_x24 == uVar10;
          uVar10 = *unaff_x24;
          if (bVar1) {
            *unaff_x24 = uVar14;
            goto LAB_10086de10;
          }
        }
        uVar14 = 0;
        if (uVar10 - 0x11 != 0) {
          uVar14 = uVar10 - 0x11 | 1;
        }
        bVar1 = *unaff_x24 != uVar10;
        uVar10 = *unaff_x24;
      } while (bVar1);
      *unaff_x24 = uVar14;
LAB_10086de10:
      uVar10 = plStack_3c8[10];
      do {
        while( true ) {
          if ((uVar10 & 3) == 2) goto LAB_10086e540;
          uVar14 = uVar10 >> 2;
          if (((uVar10 & 3) != 1) || ((uVar14 & 0x1ffffffffffff) != 1)) break;
          uVar15 = uVar10 & 0xfff8000000000000;
          uVar14 = plStack_3c8[10];
          bVar1 = uVar14 == uVar10;
          uVar10 = uVar14;
          if (bVar1) {
            plStack_3c8[10] = uVar15 | 3;
            FUN_10074fd94(puStack_3c0,puStack_3b8);
            goto LAB_10086d9ac;
          }
        }
        uVar17 = uVar10 & 0xfff8000000000003;
        uVar15 = plStack_3c8[10];
        bVar1 = uVar15 != uVar10;
        uVar10 = uVar15;
      } while (bVar1);
      plStack_3c8[10] = (uVar14 & 0xc001ffffffffffff) * 4 - 4 | uVar17;
LAB_10086d9ac:
      unaff_x24 = (ulong *)0x1;
    } while (uStack_3e0 != uStack_3d8);
    FUN_100ce3914(&puStack_670);
LAB_10086df60:
    uVar10 = (**(code **)(param_3[1] + 0x20))(*param_3,0x20);
    if ((uVar10 & 1) != 0) {
      return 1;
    }
  }
  goto LAB_10086df74;
LAB_10086e5dc:
  uStack_310._0_1_ = SUB81(plVar12,0);
  uStack_310._1_4_ = (uint)((ulong)plVar12 >> 8);
  uStack_310._5_1_ = (undefined1)((ulong)plVar12 >> 0x28);
  uStack_310._6_2_ = (undefined2)((ulong)plVar12 >> 0x30);
  uStack_308 = SUB81(unaff_x24,0);
  uStack_307 = (undefined7)((ulong)unaff_x24 >> 8);
  FUN_107c05cb4(&UNK_109bf58a7,0xe,&uStack_310,&UNK_10b4d87e8,&UNK_10b4d8128);
  goto LAB_10086e638;
  while( true ) {
    uVar14 = 0;
    if (uVar10 - 0x11 != 0) {
      uVar14 = uVar10 - 0x11 | 1;
    }
    bVar1 = *unaff_x24 == uVar10;
    uVar10 = *unaff_x24;
    if (bVar1) break;
LAB_10086e494:
    plVar25 = plStack_3c8;
    if (((uint)uVar10 >> 1 & 1) != 0) {
      if (((uint)uVar10 >> 3 & 1) == 0) {
        func_0x000107c05e08(unaff_x24);
        plVar25 = plStack_3c8;
        goto LAB_10086e4b8;
      }
      uVar14 = uVar10 & 0xfffffffffffffff6;
      bVar1 = *unaff_x24 == uVar10;
      uVar10 = *unaff_x24;
      if (bVar1) {
        *unaff_x24 = uVar14;
        goto LAB_10086e4b8;
      }
      goto LAB_10086e494;
    }
  }
  *unaff_x24 = uVar14;
LAB_10086e4b8:
  uVar10 = plVar25[10];
LAB_10086e4e8:
  do {
    if ((uVar10 & 3) == 2) break;
    uVar14 = uVar10 >> 2;
    if (((uVar10 & 3) == 1) && ((uVar14 & 0x1ffffffffffff) == 1)) {
      uVar15 = uVar10 & 0xfff8000000000000;
      uVar14 = plVar25[10];
      bVar1 = uVar14 == uVar10;
      uVar10 = uVar14;
      if (bVar1) {
        plVar25[10] = uVar15 | 3;
        FUN_10074fd94(puStack_3c0,puStack_3b8);
        goto LAB_10086e534;
      }
    }
    else {
      uVar17 = uVar10 & 0xfff8000000000003;
      uVar15 = plVar25[10];
      bVar1 = uVar15 == uVar10;
      uVar10 = uVar15;
      if (bVar1) {
        plVar25[10] = (uVar14 & 0xc001ffffffffffff) * 4 - 4 | uVar17;
LAB_10086e534:
        FUN_100ce3914(&puStack_670);
        return 1;
      }
    }
  } while( true );
LAB_10086e540:
  uStack_388._0_1_ = 2;
  uStack_388._1_4_ = 0;
  uStack_388._5_1_ = 0;
  uStack_388._6_2_ = 0;
  uStack_310._0_1_ = SUB81(&uStack_388,0);
  uStack_310._1_4_ = (uint)((ulong)&uStack_388 >> 8);
  uStack_310._5_1_ = (undefined1)((ulong)&uStack_388 >> 0x28);
  uStack_310._6_2_ = (undefined2)((ulong)&uStack_388 >> 0x30);
  uStack_308 = 4;
  uStack_307 = 0x1055b4e;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd640b,&uStack_310,&UNK_10b24e120);
  goto LAB_10086e638;
}

