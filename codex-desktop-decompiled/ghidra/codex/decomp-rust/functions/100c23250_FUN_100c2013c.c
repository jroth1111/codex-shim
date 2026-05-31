
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100c2013c(long param_1,undefined8 param_2,long param_3,long *******param_4,long param_5,
             long param_6)

{
  uint *puVar1;
  long *******ppppppplVar2;
  long *******ppppppplVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint7 uVar7;
  long *******ppppppplVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  uint uVar11;
  byte bVar12;
  undefined8 *puVar13;
  code *pcVar14;
  byte bVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long *******ppppppplVar21;
  ulong uVar22;
  long ******pppppplVar23;
  long *plVar24;
  long ******pppppplVar25;
  undefined *puVar26;
  long *****ppppplVar27;
  undefined2 *puVar28;
  undefined2 *puVar29;
  undefined8 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  long ******pppppplVar33;
  long *****ppppplVar34;
  undefined8 uVar35;
  undefined *puVar36;
  undefined1 auVar37 [16];
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  long ******pppppplStack_750;
  undefined *puStack_748;
  undefined8 uStack_740;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  long *******ppppppplStack_610;
  long *******ppppppplStack_608;
  long lStack_600;
  undefined8 uStack_5f8;
  long lStack_5f0;
  long *******ppppppplStack_5e0;
  undefined8 uStack_5d8;
  long *******ppppppplStack_5d0;
  long *******ppppppplStack_5c8;
  long lStack_5c0;
  undefined8 uStack_5b8;
  long lStack_5b0;
  undefined1 uStack_599;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined1 auStack_580 [8];
  long *******ppppppplStack_578;
  undefined8 *puStack_570;
  undefined *puStack_568;
  undefined *puStack_560;
  undefined8 uStack_558;
  undefined *puStack_550;
  long *******ppppppplStack_548;
  byte bStack_540;
  undefined4 uStack_538;
  undefined2 uStack_534;
  byte bStack_532;
  undefined1 auStack_458 [8];
  long *******ppppppplStack_450;
  undefined8 *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined8 uStack_430;
  undefined *puStack_428;
  long *******ppppppplStack_420;
  long *******ppppppplStack_330;
  undefined8 uStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_2f4 [4];
  undefined *puStack_2f0;
  byte bStack_2e1;
  long ******pppppplStack_2e0;
  uint uStack_2d4;
  undefined8 uStack_2d0;
  long *******ppppppplStack_2c8;
  undefined8 uStack_2c0;
  uint *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  uint uStack_294;
  undefined1 auStack_290 [8];
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long *******ppppppplStack_258;
  undefined *puStack_250;
  long *******ppppppplStack_248;
  long *******ppppppplStack_240;
  undefined8 uStack_238;
  long *******ppppppplStack_230;
  long *******ppppppplStack_228;
  undefined1 uStack_220;
  undefined7 uStack_21f;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined8 uStack_1e8;
  long ******pppppplStack_1e0;
  long *******ppppppplStack_1d8;
  long ******pppppplStack_1d0;
  undefined *puStack_1c8;
  undefined4 uStack_11c;
  undefined1 auStack_f0 [7];
  undefined1 uStack_e9;
  undefined1 uStack_e8;
  undefined6 uStack_e7;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  long *******ppppppplStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  char *pcStack_a0;
  long *******ppppppplStack_98;
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  undefined *puStack_78;
  
  if ((*(long *)(param_6 + 0xf8) == 4) &&
     (*(ulong *)(param_6 + 0x170) <=
      (ulong)(*(long *)(param_6 + 0x150) - *(long *)(param_6 + 0x148)))) {
LAB_100c201fc:
    FUN_100c24010(param_1,param_3,param_4,param_6);
    uVar6 = *(uint *)(param_6 + 0x178);
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       (((bVar15 = bRam000000010b632228, bRam000000010b632228 - 1 < 2 ||
         ((bRam000000010b632228 != 0 &&
          (bVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h99ca762b1a706780E
                              ), bVar15 != 0)))) &&
        (iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (___ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h99ca762b1a706780E
                             ,bVar15), iVar17 != 0)))) {
      auStack_580 = (undefined1  [8])&UNK_108cb0788;
      ppppppplStack_578 = (long *******)0x1b;
      pppppplStack_750 = (long ******)auStack_580;
      puStack_748 = &UNK_10b208fd0;
      ppppppplStack_228 = &pppppplStack_750;
      ppppppplStack_230 = (long *******)0x1;
      uStack_220 = 1;
      uStack_21f = 0;
      uStack_218 = (undefined1)
                   (
                   ___ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h99ca762b1a706780E
                   + 0x30);
      uStack_217 = (undefined7)
                   ((ulong)(
                           ___ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h99ca762b1a706780E
                           + 0x30) >> 8);
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h99ca762b1a706780E
                 ,&ppppppplStack_230);
      lVar20 = 
      ___ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h99ca762b1a706780E;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        ppppppplStack_450 =
             *(long ********)
              (
              ___ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h99ca762b1a706780E
              + 0x20);
        puStack_448 = *(undefined8 **)
                       (
                       ___ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h99ca762b1a706780E
                       + 0x28);
        auStack_458 = (undefined1  [8])0x5;
        puVar36 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar36 = &UNK_10b3c24c8;
        }
        puVar26 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar26 = &UNK_109adfc03;
        }
        iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,auStack_458);
        if (iVar17 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar20,puVar26,puVar36,auStack_458,&ppppppplStack_230);
        }
      }
    }
    else {
      lVar20 = 
      ___ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h99ca762b1a706780E;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_760 = *(undefined8 *)
                      (
                      ___ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h99ca762b1a706780E
                      + 0x20);
        uStack_758 = *(undefined8 *)
                      (
                      ___ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h99ca762b1a706780E
                      + 0x28);
        uStack_768 = 5;
        puVar36 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar36 = &UNK_10b3c24c8;
        }
        puVar26 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar26 = &UNK_109adfc03;
        }
        iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,&uStack_768);
        if (iVar17 != 0) {
          puStack_440 = (undefined *)
                        (
                        ___ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h99ca762b1a706780E
                        + 0x30);
          auStack_f0._0_4_ = 0x8cb0788;
          stack0xffffffffffffff14 = 1;
          uStack_e8 = 0x1b;
          uStack_e7 = 0;
          uStack_e1 = 0;
          ppppppplStack_330 = (long *******)auStack_f0;
          uStack_328 = (undefined8 *)&UNK_10b208fd0;
          ppppppplStack_450 = (long *******)&ppppppplStack_330;
          auStack_458 = (undefined1  [8])0x1;
          puStack_448 = (undefined8 *)0x1;
          uStack_1f8 = (undefined1)uStack_760;
          uStack_1f7 = (undefined7)((ulong)uStack_760 >> 8);
          uStack_200 = (undefined1)uStack_768;
          uStack_1ff = (undefined7)((ulong)uStack_768 >> 8);
          uStack_1f0 = (undefined1)uStack_758;
          uStack_1ef = (undefined7)((ulong)uStack_758 >> 8);
          lVar19 = *(long *)(lVar20 + 0x60);
          ppppppplStack_228 = *(long ********)(lVar20 + 0x50);
          ppppppplStack_230 = (long *******)0x1;
          if (ppppppplStack_228 == (long *******)0x0) {
            ppppppplStack_230 = (long *******)0x2;
          }
          uStack_1e8 = *(undefined **)(lVar20 + 8);
          pppppplStack_750 = (long ******)auStack_458;
          puStack_748 = (undefined *)CONCAT71(puStack_748._1_7_,1);
          auStack_580 = (undefined1  [8])&pppppplStack_750;
          ppppppplStack_578 = (long *******)&DAT_1061c2098;
          uStack_218 = 1;
          if (lVar19 == 0) {
            uStack_218 = 2;
          }
          ppppppplStack_1d8 = (long *******)auStack_580;
          pppppplStack_1e0 = (long ******)s__108b39f4f;
          uStack_220 = (undefined1)*(undefined8 *)(lVar20 + 0x58);
          uStack_21f = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x58) >> 8);
          uStack_217 = 0;
          uStack_210 = (undefined1)lVar19;
          uStack_20f = (undefined7)((ulong)lVar19 >> 8);
          uStack_208 = (undefined1)*(undefined8 *)(lVar20 + 0x68);
          uStack_207 = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x68) >> 8);
          (**(code **)(puVar36 + 0x20))(puVar26,&ppppppplStack_230);
        }
      }
    }
    puVar28 = (undefined2 *)((ulong)auStack_458 | 1);
    puVar29 = (undefined2 *)((ulong)auStack_580 | 1);
    ppppppplVar2 = (long *******)(auStack_458 + 4);
    ppppppplVar3 = (long *******)(auStack_f0 + 4);
LAB_100c20500:
    do {
      func_0x0001056f78f0(&ppppppplStack_248,param_1,param_4,param_5);
      if (ppppppplStack_248 != (long *******)0x0) {
        uStack_288 = ppppppplStack_240;
        auStack_290 = (undefined1  [8])ppppppplStack_248;
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
          if (1 < bRam000000010b6326a8 - 1) {
            if (bRam000000010b6326a8 != 0) {
              cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h5e9af703e7f4f173E
                                 );
              if (cVar16 != '\0') {
                iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h5e9af703e7f4f173E
                                    ,cVar16);
                if (iVar17 != 0) goto LAB_100c206c4;
              }
            }
            goto LAB_100c20538;
          }
          iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h5e9af703e7f4f173E
                             );
          if (iVar17 == 0) goto LAB_100c20538;
LAB_100c206c4:
          puStack_440 = (undefined *)
                        (
                        ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h5e9af703e7f4f173E
                        + 0x30);
          ppppppplStack_330 = (long *******)&UNK_108cb081f;
          uStack_328 = (undefined8 *)0x23;
          ppppppplStack_5d0 = (long *******)&ppppppplStack_330;
          ppppppplStack_5c8 = (long *******)&UNK_10b208fd0;
          auStack_458 = (undefined1  [8])0x1;
          ppppppplStack_450 = (long *******)&ppppppplStack_5d0;
          puStack_448 = (undefined8 *)0x1;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h5e9af703e7f4f173E
                     ,auStack_458);
          lVar20 = 
          ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h5e9af703e7f4f173E;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            ppppppplStack_578 =
                 *(long ********)
                  (
                  ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h5e9af703e7f4f173E
                  + 0x20);
            puStack_570 = *(undefined8 **)
                           (
                           ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h5e9af703e7f4f173E
                           + 0x28);
            auStack_580 = (undefined1  [8])0x5;
            puVar36 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar36 = &UNK_10b3c24c8;
            }
            puVar26 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar26 = &UNK_109adfc03;
            }
            iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,auStack_580);
            if (iVar17 == 0) goto LAB_100c20804;
            lVar19 = *(long *)(lVar20 + 0x60);
            uVar35 = *(undefined8 *)(lVar20 + 0x68);
            ppppppplStack_228 = *(long ********)(lVar20 + 0x50);
            uVar30 = *(undefined8 *)(lVar20 + 0x58);
            ppppppplStack_230 = (long *******)0x1;
            if (ppppppplStack_228 == (long *******)0x0) {
              ppppppplStack_230 = (long *******)0x2;
            }
            uVar31 = *(undefined4 *)(lVar20 + 8);
            uVar32 = *(undefined4 *)(lVar20 + 0xc);
            pppppplStack_750 = (long ******)auStack_f0;
            puStack_748 = &DAT_1061c2098;
            uStack_218 = 1;
            if (lVar19 == 0) {
              uStack_218 = 2;
            }
            uStack_1f8 = SUB81(ppppppplStack_578,0);
            uStack_1f7 = (undefined7)((ulong)ppppppplStack_578 >> 8);
            uStack_200 = auStack_580[0];
            uStack_1ff = auStack_580._1_7_;
            uStack_1f0 = SUB81(puStack_570,0);
            uStack_1ef = (undefined7)((ulong)puStack_570 >> 8);
            ppppppplStack_1d8 = &pppppplStack_750;
            goto LAB_100c20668;
          }
        }
        else {
LAB_100c20538:
          lVar20 = 
          ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h5e9af703e7f4f173E;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puStack_748 = *(undefined **)
                           (
                           ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h5e9af703e7f4f173E
                           + 0x20);
            uStack_740 = *(undefined8 *)
                          (
                          ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h5e9af703e7f4f173E
                          + 0x28);
            pppppplStack_750 = (long ******)0x5;
            puVar36 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar36 = &UNK_10b3c24c8;
            }
            puVar26 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar26 = &UNK_109adfc03;
            }
            iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,&pppppplStack_750);
            if (iVar17 != 0) {
              puStack_440 = (undefined *)
                            (
                            ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h5e9af703e7f4f173E
                            + 0x30);
              ppppppplStack_330 = (long *******)&UNK_108cb081f;
              uStack_328 = (undefined8 *)0x23;
              ppppppplStack_5d0 = (long *******)&ppppppplStack_330;
              ppppppplStack_5c8 = (long *******)&UNK_10b208fd0;
              auStack_458 = (undefined1  [8])0x1;
              ppppppplStack_450 = (long *******)&ppppppplStack_5d0;
              puStack_448 = (undefined8 *)0x1;
              uStack_1f8 = SUB81(puStack_748,0);
              uStack_1f7 = (undefined7)((ulong)puStack_748 >> 8);
              uStack_200 = SUB81(pppppplStack_750,0);
              uStack_1ff = (undefined7)((ulong)pppppplStack_750 >> 8);
              uStack_1f0 = (undefined1)uStack_740;
              uStack_1ef = (undefined7)((ulong)uStack_740 >> 8);
              lVar19 = *(long *)(lVar20 + 0x60);
              uVar35 = *(undefined8 *)(lVar20 + 0x68);
              ppppppplStack_228 = *(long ********)(lVar20 + 0x50);
              uVar30 = *(undefined8 *)(lVar20 + 0x58);
              ppppppplStack_230 = (long *******)0x1;
              if (ppppppplStack_228 == (long *******)0x0) {
                ppppppplStack_230 = (long *******)0x2;
              }
              uVar31 = *(undefined4 *)(lVar20 + 8);
              uVar32 = *(undefined4 *)(lVar20 + 0xc);
              auStack_580 = (undefined1  [8])auStack_f0;
              ppppppplStack_578 = (long *******)&DAT_1061c2098;
              uStack_218 = 1;
              if (lVar19 == 0) {
                uStack_218 = 2;
              }
              ppppppplStack_1d8 = (long *******)auStack_580;
LAB_100c20668:
              _auStack_f0 = (long *******)auStack_458;
              uStack_e8 = 1;
              pppppplStack_1e0 = (long ******)s__108b39f4f;
              uStack_220 = (undefined1)uVar30;
              uStack_21f = (undefined7)((ulong)uVar30 >> 8);
              uStack_217 = 0;
              uStack_210 = (undefined1)lVar19;
              uStack_20f = (undefined7)((ulong)lVar19 >> 8);
              uStack_208 = (undefined1)uVar35;
              uStack_207 = (undefined7)((ulong)uVar35 >> 8);
              uStack_1e8 = (undefined *)CONCAT44(uVar32,uVar31);
              (**(code **)(puVar36 + 0x20))(puVar26,&ppppppplStack_230);
            }
          }
        }
LAB_100c20804:
        auStack_458 = (undefined1  [8])uStack_288;
        if (((*(long *******)((long)auStack_290 + 0x10) <=
              (long ******)((ulong)uStack_288 & 0xffffffff)) ||
            (pppppplVar33 = *(long *******)((long)auStack_290 + 8) +
                            ((ulong)uStack_288 & 0xffffffff) * 0x28,
            *pppppplVar33 == (long *****)0x2)) ||
           (*(int *)((long)pppppplVar33 + 0x124) != uStack_288._4_4_)) {
          ppppppplStack_228 = (long *******)&DAT_10571bc44;
          ppppppplStack_230 = ppppppplVar2;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__dangling_store_key_for_stream_i_108b15a2c,&ppppppplStack_230,&UNK_10b3a3ca8)
          ;
LAB_100c23d84:
          ppppppplStack_228 = (long *******)&DAT_10571bc44;
          ppppppplStack_230 = ppppppplVar2;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__dangling_store_key_for_stream_i_108b15a2c,&ppppppplStack_230,&UNK_10b3a3ca8)
          ;
          goto LAB_100c23e80;
        }
        if ((*(byte *)((long)pppppplVar33 + 0x131) & 1) == 0) {
          *(undefined1 *)((long)pppppplVar33 + 0x131) = 1;
          if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
            if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
              if (1 < bRam000000010b632690 - 1) {
                if (bRam000000010b632690 != 0) {
                  cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                     (&
                                      __ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h042a2a9937e87ea2E
                                     );
                  if (cVar16 != '\0') {
                    iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                       (___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h042a2a9937e87ea2E
                                        ,cVar16);
                    if (iVar17 != 0) goto LAB_100c20fa0;
                  }
                }
                goto LAB_100c20b54;
              }
              iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h042a2a9937e87ea2E
                                 );
              if (iVar17 == 0) goto LAB_100c20b54;
LAB_100c20fa0:
              auStack_580 = (undefined1  [8])&UNK_108cb0844;
              ppppppplStack_578 = (long *******)0x1f;
              _auStack_f0 = (long *******)auStack_580;
              uStack_e8 = 0xd0;
              uStack_e7 = 0x10b208f;
              uStack_e1 = 0;
              ppppppplStack_230 = (long *******)0x1;
              ppppppplStack_228 = (long *******)auStack_f0;
              uStack_220 = 1;
              uStack_21f = 0;
              uStack_218 = (undefined1)
                           (
                           ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h042a2a9937e87ea2E
                           + 0x30);
              uStack_217 = (undefined7)
                           ((ulong)(
                                   ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h042a2a9937e87ea2E
                                   + 0x30) >> 8);
              __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                        (___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h042a2a9937e87ea2E
                         ,&ppppppplStack_230);
              lVar20 = 
              ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h042a2a9937e87ea2E
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                ppppppplStack_450 =
                     *(long ********)
                      (
                      ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h042a2a9937e87ea2E
                      + 0x20);
                puStack_448 = *(undefined8 **)
                               (
                               ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h042a2a9937e87ea2E
                               + 0x28);
                auStack_458 = (undefined1  [8])0x5;
                puVar36 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar36 = &UNK_10b3c24c8;
                }
                puVar26 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar26 = &UNK_109adfc03;
                }
                iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,auStack_458);
                if (iVar17 != 0) {
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar20,puVar26,puVar36,auStack_458,&ppppppplStack_230);
                }
              }
            }
            else {
LAB_100c20b54:
              lVar20 = 
              ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h042a2a9937e87ea2E
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                ppppppplStack_578 =
                     *(long ********)
                      (
                      ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h042a2a9937e87ea2E
                      + 0x20);
                puStack_570 = *(undefined8 **)
                               (
                               ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h042a2a9937e87ea2E
                               + 0x28);
                auStack_580 = (undefined1  [8])0x5;
                puVar36 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar36 = &UNK_10b3c24c8;
                }
                puVar26 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar26 = &UNK_109adfc03;
                }
                iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,auStack_580);
                if (iVar17 != 0) {
                  puStack_440 = (undefined *)
                                (
                                ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h042a2a9937e87ea2E
                                + 0x30);
                  ppppppplStack_5d0 = (long *******)&UNK_108cb0844;
                  ppppppplStack_5c8 = (long *******)0x1f;
                  ppppppplStack_610 = (long *******)&ppppppplStack_5d0;
                  ppppppplStack_608 = (long *******)&UNK_10b208fd0;
                  auStack_458 = (undefined1  [8])0x1;
                  ppppppplStack_450 = (long *******)&ppppppplStack_610;
                  puStack_448 = (undefined8 *)0x1;
                  lVar19 = *(long *)(lVar20 + 0x60);
                  ppppppplStack_228 = *(long ********)(lVar20 + 0x50);
                  ppppppplStack_230 = (long *******)0x1;
                  if (ppppppplStack_228 == (long *******)0x0) {
                    ppppppplStack_230 = (long *******)0x2;
                  }
                  uStack_1e8 = *(undefined **)(lVar20 + 8);
                  ppppppplStack_330 = (long *******)auStack_458;
                  uStack_328 = (undefined8 *)CONCAT71(uStack_328._1_7_,1);
                  _auStack_f0 = (long *******)&ppppppplStack_330;
                  uStack_e8 = 0x98;
                  uStack_e7 = 0x1061c20;
                  uStack_e1 = 0;
                  uStack_218 = 1;
                  if (lVar19 == 0) {
                    uStack_218 = 2;
                  }
                  uStack_1f8 = SUB81(ppppppplStack_578,0);
                  uStack_1f7 = (undefined7)((ulong)ppppppplStack_578 >> 8);
                  uStack_200 = auStack_580[0];
                  uStack_1ff = auStack_580._1_7_;
                  uStack_1f0 = SUB81(puStack_570,0);
                  uStack_1ef = (undefined7)((ulong)puStack_570 >> 8);
                  pppppplStack_1e0 = (long ******)s__108b39f4f;
                  ppppppplStack_1d8 = (long *******)auStack_f0;
                  uStack_220 = (undefined1)*(undefined8 *)(lVar20 + 0x58);
                  uStack_21f = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x58) >> 8);
                  uStack_217 = 0;
                  uStack_210 = (undefined1)lVar19;
                  uStack_20f = (undefined7)((ulong)lVar19 >> 8);
                  uStack_208 = (undefined1)*(undefined8 *)(lVar20 + 0x68);
                  uStack_207 = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x68) >> 8);
                  (**(code **)(puVar36 + 0x20))(puVar26,&ppppppplStack_230);
                }
              }
            }
            *(undefined4 *)(param_1 + 0x10) = 1;
            *(long ********)(param_1 + 0x1c) = uStack_288;
            *(long ********)(param_1 + 0x14) = uStack_288;
          }
          else {
            if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
              if (1 < bRam000000010b6326c0 - 1) {
                if (bRam000000010b6326c0 != 0) {
                  cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                     (&
                                      __ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h7aeee8271ccd2aa5E
                                     );
                  if (cVar16 != '\0') {
                    iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                       (___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h7aeee8271ccd2aa5E
                                        ,cVar16);
                    if (iVar17 != 0) goto LAB_100c20e30;
                  }
                }
                goto LAB_100c209e4;
              }
              iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h7aeee8271ccd2aa5E
                                 );
              if (iVar17 == 0) goto LAB_100c209e4;
LAB_100c20e30:
              auStack_580 = (undefined1  [8])&UNK_108cb0830;
              ppppppplStack_578 = (long *******)0x29;
              _auStack_f0 = (long *******)auStack_580;
              uStack_e8 = 0xd0;
              uStack_e7 = 0x10b208f;
              uStack_e1 = 0;
              ppppppplStack_230 = (long *******)0x1;
              ppppppplStack_228 = (long *******)auStack_f0;
              uStack_220 = 1;
              uStack_21f = 0;
              uStack_218 = (undefined1)
                           (
                           ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h7aeee8271ccd2aa5E
                           + 0x30);
              uStack_217 = (undefined7)
                           ((ulong)(
                                   ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h7aeee8271ccd2aa5E
                                   + 0x30) >> 8);
              __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                        (___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h7aeee8271ccd2aa5E
                         ,&ppppppplStack_230);
              lVar20 = 
              ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h7aeee8271ccd2aa5E
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                ppppppplStack_450 =
                     *(long ********)
                      (
                      ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h7aeee8271ccd2aa5E
                      + 0x20);
                puStack_448 = *(undefined8 **)
                               (
                               ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h7aeee8271ccd2aa5E
                               + 0x28);
                auStack_458 = (undefined1  [8])0x5;
                puVar36 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar36 = &UNK_10b3c24c8;
                }
                puVar26 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar26 = &UNK_109adfc03;
                }
                iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,auStack_458);
                if (iVar17 != 0) {
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar20,puVar26,puVar36,auStack_458,&ppppppplStack_230);
                }
              }
            }
            else {
LAB_100c209e4:
              lVar20 = 
              ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h7aeee8271ccd2aa5E
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                ppppppplStack_578 =
                     *(long ********)
                      (
                      ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h7aeee8271ccd2aa5E
                      + 0x20);
                puStack_570 = *(undefined8 **)
                               (
                               ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h7aeee8271ccd2aa5E
                               + 0x28);
                auStack_580 = (undefined1  [8])0x5;
                puVar36 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar36 = &UNK_10b3c24c8;
                }
                puVar26 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar26 = &UNK_109adfc03;
                }
                iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,auStack_580);
                if (iVar17 != 0) {
                  puStack_440 = (undefined *)
                                (
                                ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17h7aeee8271ccd2aa5E
                                + 0x30);
                  ppppppplStack_5d0 = (long *******)&UNK_108cb0830;
                  ppppppplStack_5c8 = (long *******)0x29;
                  ppppppplStack_610 = (long *******)&ppppppplStack_5d0;
                  ppppppplStack_608 = (long *******)&UNK_10b208fd0;
                  auStack_458 = (undefined1  [8])0x1;
                  ppppppplStack_450 = (long *******)&ppppppplStack_610;
                  puStack_448 = (undefined8 *)0x1;
                  lVar19 = *(long *)(lVar20 + 0x60);
                  ppppppplStack_228 = *(long ********)(lVar20 + 0x50);
                  ppppppplStack_230 = (long *******)0x1;
                  if (ppppppplStack_228 == (long *******)0x0) {
                    ppppppplStack_230 = (long *******)0x2;
                  }
                  uStack_1e8 = *(undefined **)(lVar20 + 8);
                  ppppppplStack_330 = (long *******)auStack_458;
                  uStack_328 = (undefined8 *)CONCAT71(uStack_328._1_7_,1);
                  _auStack_f0 = (long *******)&ppppppplStack_330;
                  uStack_e8 = 0x98;
                  uStack_e7 = 0x1061c20;
                  uStack_e1 = 0;
                  uStack_218 = 1;
                  if (lVar19 == 0) {
                    uStack_218 = 2;
                  }
                  uStack_1f8 = SUB81(ppppppplStack_578,0);
                  uStack_1f7 = (undefined7)((ulong)ppppppplStack_578 >> 8);
                  uStack_200 = auStack_580[0];
                  uStack_1ff = auStack_580._1_7_;
                  uStack_1f0 = SUB81(puStack_570,0);
                  uStack_1ef = (undefined7)((ulong)puStack_570 >> 8);
                  pppppplStack_1e0 = (long ******)s__108b39f4f;
                  ppppppplStack_1d8 = (long *******)auStack_f0;
                  uStack_220 = (undefined1)*(undefined8 *)(lVar20 + 0x58);
                  uStack_21f = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x58) >> 8);
                  uStack_217 = 0;
                  uStack_210 = (undefined1)lVar19;
                  uStack_20f = (undefined7)((ulong)lVar19 >> 8);
                  uStack_208 = (undefined1)*(undefined8 *)(lVar20 + 0x68);
                  uStack_207 = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x68) >> 8);
                  (**(code **)(puVar36 + 0x20))(puVar26,&ppppppplStack_230);
                }
              }
            }
            uVar35 = *(undefined8 *)(param_1 + 0x14);
            auStack_458 = (undefined1  [8])uStack_288;
            if (((*(long *******)((long)auStack_290 + 0x10) <=
                  (long ******)((ulong)uStack_288 & 0xffffffff)) ||
                (pppppplVar33 = *(long *******)((long)auStack_290 + 8) +
                                ((ulong)uStack_288 & 0xffffffff) * 0x28,
                *pppppplVar33 == (long *****)0x2)) ||
               (*(int *)((long)pppppplVar33 + 0x124) != uStack_288._4_4_)) {
              ppppppplStack_228 = (long *******)&DAT_10571bc44;
              ppppppplStack_230 = ppppppplVar2;
              __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                        (s__dangling_store_key_for_stream_i_108b15a2c,&ppppppplStack_230,
                         &UNK_10b3a3cc0);
              puVar13 = uStack_328;
LAB_100c23de0:
              uStack_328 = puVar13;
              puVar36 = &UNK_10b3a3ca8;
LAB_100c23e04:
              uStack_e8 = 0x44;
              uStack_e7 = 0x10571bc;
              uStack_e1 = 0;
              _auStack_f0 = (long *******)(auStack_290 + 4);
              __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                        (s__dangling_store_key_for_stream_i_108b15a2c,auStack_f0,puVar36);
              goto LAB_100c23e80;
            }
            *(undefined4 *)(pppppplVar33 + 0x19) = 1;
            *(undefined8 *)((long)pppppplVar33 + 0xcc) = uVar35;
            *(long ********)(param_1 + 0x14) = uStack_288;
          }
        }
        else {
          if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
            if (bRam000000010b6326d8 - 1 < 2) {
              iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17hcf42c5a3b0a140f3E
                                 );
joined_r0x000100c22b28:
              if (iVar17 != 0) {
                auStack_580 = (undefined1  [8])&UNK_108cb0853;
                ppppppplStack_578 = (long *******)0x25;
                _auStack_f0 = (long *******)auStack_580;
                uStack_e8 = 0xd0;
                uStack_e7 = 0x10b208f;
                uStack_e1 = 0;
                ppppppplStack_230 = (long *******)0x1;
                ppppppplStack_228 = (long *******)auStack_f0;
                uStack_220 = 1;
                uStack_21f = 0;
                uStack_218 = (undefined1)
                             (
                             ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17hcf42c5a3b0a140f3E
                             + 0x30);
                uStack_217 = (undefined7)
                             ((ulong)(
                                     ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17hcf42c5a3b0a140f3E
                                     + 0x30) >> 8);
                __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                          (___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17hcf42c5a3b0a140f3E
                           ,&ppppppplStack_230);
                lVar20 = 
                ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17hcf42c5a3b0a140f3E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  ppppppplStack_450 =
                       *(long ********)
                        (
                        ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17hcf42c5a3b0a140f3E
                        + 0x20);
                  puStack_448 = *(undefined8 **)
                                 (
                                 ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17hcf42c5a3b0a140f3E
                                 + 0x28);
                  auStack_458 = (undefined1  [8])0x5;
                  puVar36 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar36 = &UNK_10b3c24c8;
                  }
                  puVar26 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar26 = &UNK_109adfc03;
                  }
                  iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,auStack_458);
                  if (iVar17 != 0) {
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar20,puVar26,puVar36,auStack_458,&ppppppplStack_230);
                  }
                }
                goto LAB_100c210a4;
              }
            }
            else if (bRam000000010b6326d8 != 0) {
              cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17hcf42c5a3b0a140f3E
                                 );
              if (cVar16 != '\0') {
                iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17hcf42c5a3b0a140f3E
                                    ,cVar16);
                goto joined_r0x000100c22b28;
              }
            }
          }
          lVar20 = 
          ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17hcf42c5a3b0a140f3E;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            ppppppplStack_578 =
                 *(long ********)
                  (
                  ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17hcf42c5a3b0a140f3E
                  + 0x20);
            puStack_570 = *(undefined8 **)
                           (
                           ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17hcf42c5a3b0a140f3E
                           + 0x28);
            auStack_580 = (undefined1  [8])0x5;
            puVar36 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar36 = &UNK_10b3c24c8;
            }
            puVar26 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar26 = &UNK_109adfc03;
            }
            iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,auStack_580);
            if (iVar17 != 0) {
              puStack_440 = (undefined *)
                            (
                            ___ZN2h25proto7streams5store14Queue_LT_N_GT_10push_front10__CALLSITE17hcf42c5a3b0a140f3E
                            + 0x30);
              ppppppplStack_5d0 = (long *******)&UNK_108cb0853;
              ppppppplStack_5c8 = (long *******)0x25;
              ppppppplStack_610 = (long *******)&ppppppplStack_5d0;
              ppppppplStack_608 = (long *******)&UNK_10b208fd0;
              auStack_458 = (undefined1  [8])0x1;
              ppppppplStack_450 = (long *******)&ppppppplStack_610;
              puStack_448 = (undefined8 *)0x1;
              lVar19 = *(long *)(lVar20 + 0x60);
              ppppppplStack_228 = *(long ********)(lVar20 + 0x50);
              ppppppplStack_230 = (long *******)0x1;
              if (ppppppplStack_228 == (long *******)0x0) {
                ppppppplStack_230 = (long *******)0x2;
              }
              uStack_1e8 = *(undefined **)(lVar20 + 8);
              ppppppplStack_330 = (long *******)auStack_458;
              uStack_328 = (undefined8 *)CONCAT71(uStack_328._1_7_,1);
              _auStack_f0 = (long *******)&ppppppplStack_330;
              uStack_e8 = 0x98;
              uStack_e7 = 0x1061c20;
              uStack_e1 = 0;
              uStack_218 = 1;
              if (lVar19 == 0) {
                uStack_218 = 2;
              }
              uStack_1f8 = SUB81(ppppppplStack_578,0);
              uStack_1f7 = (undefined7)((ulong)ppppppplStack_578 >> 8);
              uStack_200 = auStack_580[0];
              uStack_1ff = auStack_580._1_7_;
              uStack_1f0 = SUB81(puStack_570,0);
              uStack_1ef = (undefined7)((ulong)puStack_570 >> 8);
              pppppplStack_1e0 = (long ******)s__108b39f4f;
              ppppppplStack_1d8 = (long *******)auStack_f0;
              uStack_220 = (undefined1)*(undefined8 *)(lVar20 + 0x58);
              uStack_21f = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x58) >> 8);
              uStack_217 = 0;
              uStack_210 = (undefined1)lVar19;
              uStack_20f = (undefined7)((ulong)lVar19 >> 8);
              uStack_208 = (undefined1)*(undefined8 *)(lVar20 + 0x68);
              uStack_207 = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x68) >> 8);
              (**(code **)(puVar36 + 0x20))(puVar26,&ppppppplStack_230);
            }
          }
        }
LAB_100c210a4:
        func_0x0001056f860c(param_1,auStack_290);
      }
      if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
        bVar15 = bRam000000010b632330;
        if (1 < bRam000000010b632330 - 1) {
          if (bRam000000010b632330 != 0) {
            bVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h6123e6e6569c31d5E
                               );
            if (bVar15 != 0) goto LAB_100c2277c;
          }
          goto LAB_100c210c8;
        }
LAB_100c2277c:
        iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h6123e6e6569c31d5E
                            ,bVar15);
        if (iVar17 == 0) goto LAB_100c210c8;
        ppppppplStack_230 = (long *******)0x1;
        ppppppplStack_228 = (long *******)0x8;
        uStack_220 = 0;
        uStack_21f = 0;
        uStack_218 = (undefined1)
                     (
                     ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h6123e6e6569c31d5E
                     + 0x30);
        uStack_217 = (undefined7)
                     ((ulong)(
                             ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h6123e6e6569c31d5E
                             + 0x30) >> 8);
        __ZN7tracing4span4Span3new17hfb1cb23559a61740E
                  (&ppppppplStack_610,
                   ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h6123e6e6569c31d5E
                   ,&ppppppplStack_230);
      }
      else {
LAB_100c210c8:
        ppppppplStack_230 = (long *******)0x2;
        uStack_210 = (undefined1)
                     ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h6123e6e6569c31d5E
        ;
        uStack_20f = (undefined7)
                     ((ulong)
                      ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h6123e6e6569c31d5E
                     >> 8);
        if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
          puStack_440 = (undefined *)
                        (
                        ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h6123e6e6569c31d5E
                        + 0x30);
          auStack_458 = (undefined1  [8])0x1;
          ppppppplStack_450 = (long *******)0x8;
          puStack_448 = (undefined8 *)0x0;
          __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&ppppppplStack_230,auStack_458);
        }
        uStack_5f8 = CONCAT71(uStack_217,uStack_218);
        lStack_600 = CONCAT71(uStack_21f,uStack_220);
        lStack_5f0 = CONCAT71(uStack_20f,uStack_210);
        ppppppplStack_608 = ppppppplStack_228;
        ppppppplStack_610 = ppppppplStack_230;
      }
      if (ppppppplStack_610 != (long *******)0x2) {
        ppppppplVar21 = ppppppplStack_608;
        if (((ulong)ppppppplStack_610 & 1) != 0) {
          ppppppplVar21 =
               (long *******)
               ((long)ppppppplStack_608 +
               (*(long *)(lStack_600 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
        }
        (**(code **)(lStack_600 + 0x60))(ppppppplVar21,&uStack_5f8);
      }
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_5f0 != 0))
      {
        auStack_458 = *(undefined1 (*) [8])(lStack_5f0 + 0x10);
        ppppppplStack_450 = *(long ********)(lStack_5f0 + 0x18);
        ppppppplStack_230 = (long *******)auStack_458;
        ppppppplStack_228 = (long *******)&DAT_100c7b3a0;
        FUN_1011d7d74(&ppppppplStack_610,&UNK_108cd3ef5,0x15,s__>___108ab67cd,&ppppppplStack_230);
      }
      if (*(int *)(param_1 + 0x10) == 1) {
LAB_100c211a8:
        puVar1 = (uint *)(param_1 + 0x14);
        uVar4 = *puVar1;
        pppppplVar33 = (long ******)(ulong)uVar4;
        iVar17 = *(int *)(param_1 + 0x18);
        ppppppplVar10 = *(long ********)puVar1;
        ppppppplVar9 = *(long ********)puVar1;
        auStack_458 = *(undefined1 (*) [8])puVar1;
        ppppppplVar8 = *(long ********)puVar1;
        ppppppplVar21 = *(long ********)puVar1;
        if (uVar4 == *(uint *)(param_1 + 0x1c) && iVar17 == *(int *)(param_1 + 0x20)) {
          pppppplVar23 = param_4[2];
          if (((pppppplVar23 <= pppppplVar33) ||
              (pppppplVar25 = param_4[1] + (ulong)uVar4 * 0x28, *pppppplVar25 == (long *****)0x2))
             || (*(int *)((long)pppppplVar25 + 0x124) != iVar17)) goto LAB_100c23c98;
          if (*(int *)(pppppplVar25 + 0x19) == 0) {
            *(undefined4 *)(param_1 + 0x10) = 0;
            goto LAB_100c21250;
          }
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc39d2,0x2c,&UNK_10b2337d0);
          goto LAB_100c23e80;
        }
        if (((param_4[2] <= pppppplVar33) ||
            (pppppplVar23 = param_4[1] + (ulong)uVar4 * 0x28, *pppppplVar23 == (long *****)0x2)) ||
           (*(int *)((long)pppppplVar23 + 0x124) != iVar17)) {
LAB_100c23c10:
          auStack_458 = *(undefined1 (*) [8])puVar1;
          puVar36 = &UNK_10b3a3cc0;
LAB_100c23ca8:
          ppppppplStack_228 = (long *******)&DAT_10571bc44;
          ppppppplStack_230 = ppppppplVar2;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__dangling_store_key_for_stream_i_108b15a2c,&ppppppplStack_230,puVar36);
          goto LAB_100c23e80;
        }
        ppppplVar34 = pppppplVar23[0x19];
        uVar35 = *(undefined8 *)((long)pppppplVar23 + 0xcc);
        *(undefined4 *)(pppppplVar23 + 0x19) = 0;
        if (((ulong)ppppplVar34 & 1) == 0) {
          auStack_458 = (undefined1  [8])ppppppplVar8;
          func_0x000108a07a20(&UNK_10b2337b8);
          goto LAB_100c23e80;
        }
        *(undefined4 *)(param_1 + 0x10) = 1;
        *(undefined8 *)(param_1 + 0x14) = uVar35;
        pppppplVar23 = param_4[2];
LAB_100c21250:
        if (((pppppplVar23 <= pppppplVar33) ||
            (pppppplVar23 = param_4[1] + (long)pppppplVar33 * 0x28, *pppppplVar23 == (long *****)0x2
            )) || (*(int *)((long)pppppplVar23 + 0x124) != iVar17)) goto LAB_100c23c10;
        *(undefined1 *)((long)pppppplVar23 + 0x131) = 0;
        ppppppplStack_5e0 = param_4;
        uStack_5d8 = ppppppplVar21;
        auStack_458 = (undefined1  [8])ppppppplVar9;
        ppppppplVar21 = _auStack_f0;
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
          if (1 < bRam000000010b6323d8 - 1) {
            if (bRam000000010b6323d8 != 0) {
              cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hefe5df41d9e1546aE
                                 );
              ppppppplVar21 = _auStack_f0;
              if (cVar16 != '\0') goto LAB_100c215d8;
            }
            goto LAB_100c2129c;
          }
LAB_100c215d8:
          iVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hefe5df41d9e1546aE
                             );
          ppppppplVar21 = _auStack_f0;
          if (iVar18 == 0) goto LAB_100c2129c;
          if (((pppppplVar33 < param_4[2]) &&
              (pppppplVar23 = param_4[1] + (ulong)uVar4 * 0x28, *pppppplVar23 != (long *****)0x2))
             && (*(int *)((long)pppppplVar23 + 0x124) == iVar17)) {
            _auStack_f0 = (long *******)((long)pppppplVar23 + 0x124);
            if ((*pppppplVar23 == (long *****)0x2) || (*(int *)_auStack_f0 != iVar17))
            goto LAB_100c23c98;
            puStack_440 = (undefined *)
                          (
                          ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hefe5df41d9e1546aE
                          + 0x30);
            ppppppplStack_230 = (long *******)auStack_f0;
            ppppppplStack_228 = (long *******)&UNK_10b2335e0;
            uStack_220 = SUB81(auStack_580,0);
            uStack_21f = (undefined7)((ulong)auStack_580 >> 8);
            uStack_218 = 0xe8;
            uStack_217 = 0x10b2336;
            auStack_458 = (undefined1  [8])0x1;
            ppppppplStack_450 = (long *******)&ppppppplStack_230;
            puStack_448 = (undefined8 *)0x2;
            auStack_580 = (undefined1  [8])(pppppplVar23 + 10);
            __ZN7tracing4span4Span3new17hfb1cb23559a61740E
                      (&ppppppplStack_5d0,
                       ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hefe5df41d9e1546aE
                       ,auStack_458);
            goto LAB_100c2137c;
          }
LAB_100c23c98:
          auStack_458 = *(undefined1 (*) [8])puVar1;
          puVar36 = &UNK_10b3a3ca8;
          goto LAB_100c23ca8;
        }
LAB_100c2129c:
        ppppppplStack_230 = (long *******)0x2;
        uStack_210 = (undefined1)
                     ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hefe5df41d9e1546aE
        ;
        uStack_20f = (undefined7)
                     ((ulong)
                      ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hefe5df41d9e1546aE
                     >> 8);
        _auStack_f0 = ppppppplVar21;
        if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
          if (((pppppplVar33 < param_4[2]) &&
              (pppppplVar23 = param_4[1] + (ulong)uVar4 * 0x28, *pppppplVar23 != (long *****)0x2))
             && (*(int *)((long)pppppplVar23 + 0x124) == iVar17)) {
            ppppppplStack_330 = (long *******)((long)pppppplVar23 + 0x124);
            _auStack_f0 = (long *******)(pppppplVar23 + 10);
            if ((*pppppplVar23 != (long *****)0x2) && (*(int *)ppppppplStack_330 == iVar17)) {
              puStack_568 = (undefined *)
                            (
                            ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hefe5df41d9e1546aE
                            + 0x30);
              auStack_458 = (undefined1  [8])&ppppppplStack_330;
              ppppppplStack_450 = (long *******)&UNK_10b2335e0;
              puStack_448 = (undefined8 *)auStack_f0;
              puStack_440 = &UNK_10b2336e8;
              auStack_580 = (undefined1  [8])0x1;
              ppppppplStack_578 = (long *******)auStack_458;
              puStack_570 = (undefined8 *)0x2;
              __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&ppppppplStack_230,auStack_580)
              ;
              goto LAB_100c2136c;
            }
          }
          auStack_580 = *(undefined1 (*) [8])puVar1;
          ppppppplStack_450 = (long *******)&DAT_10571bc44;
          auStack_458 = (undefined1  [8])(auStack_580 + 4);
          _auStack_f0 = ppppppplVar21;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__dangling_store_key_for_stream_i_108b15a2c,auStack_458,&UNK_10b3a3ca8);
          goto LAB_100c23e80;
        }
LAB_100c2136c:
        uStack_5b8 = CONCAT71(uStack_217,uStack_218);
        lStack_5c0 = CONCAT71(uStack_21f,uStack_220);
        ppppppplStack_5c8 = ppppppplStack_228;
        ppppppplStack_5d0 = ppppppplStack_230;
        lStack_5b0 = CONCAT71(uStack_20f,uStack_210);
LAB_100c2137c:
        if (ppppppplStack_5d0 != (long *******)0x2) {
          ppppppplVar21 = ppppppplStack_5c8;
          if (((ulong)ppppppplStack_5d0 & 1) != 0) {
            ppppppplVar21 =
                 (long *******)
                 ((long)ppppppplStack_5c8 +
                 (*(long *)(lStack_5c0 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
          }
          (**(code **)(lStack_5c0 + 0x60))(ppppppplVar21,&uStack_5b8);
        }
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_5b0 != 0)
           ) {
          auStack_458 = *(undefined1 (*) [8])(lStack_5b0 + 0x10);
          ppppppplStack_450 = *(long ********)(lStack_5b0 + 0x18);
          ppppppplStack_230 = (long *******)auStack_458;
          ppppppplStack_228 = (long *******)&DAT_100c7b3a0;
          FUN_1011d7d74(&ppppppplStack_5d0,&UNK_108cd3ef5,0x15,s__>___108ab67cd,&ppppppplStack_230);
        }
        auStack_458 = (undefined1  [8])ppppppplVar10;
        if (((param_4[2] <= pppppplVar33) ||
            (pppppplVar33 = param_4[1] + (ulong)uVar4 * 0x28, *pppppplVar33 == (long *****)0x2)) ||
           (*(int *)((long)pppppplVar33 + 0x124) != iVar17)) {
          puVar36 = &UNK_10b3a3ca8;
          ppppppplStack_230 = ppppppplVar2;
LAB_100c23c48:
          ppppppplStack_228 = (long *******)&DAT_10571bc44;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__dangling_store_key_for_stream_i_108b15a2c,&ppppppplStack_230,puVar36);
          goto LAB_100c23e80;
        }
        uStack_599 = *(int *)(pppppplVar33 + 9) != 1000000000;
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
          if (1 < bRam000000010b632378 - 1) {
            if (bRam000000010b632378 != 0) {
              cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hb252c530615a011cE
                                 );
              if (cVar16 != '\0') goto LAB_100c216c4;
            }
            goto LAB_100c21464;
          }
LAB_100c216c4:
          iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hb252c530615a011cE
                             );
          if (iVar17 == 0) goto LAB_100c21464;
          puStack_440 = (undefined *)
                        (
                        ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hb252c530615a011cE
                        + 0x30);
          auStack_290 = (undefined1  [8])&uStack_599;
          uStack_288 = (long *******)&UNK_10b216268;
          auStack_458 = (undefined1  [8])0x1;
          ppppppplStack_450 = (long *******)auStack_290;
          puStack_448 = (undefined8 *)0x1;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hb252c530615a011cE
                     ,auStack_458);
          lVar20 = 
          ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hb252c530615a011cE;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            ppppppplStack_578 =
                 *(long ********)
                  (
                  ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hb252c530615a011cE
                  + 0x20);
            puStack_570 = *(undefined8 **)
                           (
                           ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hb252c530615a011cE
                           + 0x28);
            auStack_580 = (undefined1  [8])0x5;
            puVar36 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar36 = &UNK_10b3c24c8;
            }
            puVar26 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar26 = &UNK_109adfc03;
            }
            iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,auStack_580);
            if (iVar17 != 0) {
              lVar19 = *(long *)(lVar20 + 0x60);
              ppppppplStack_228 = *(long ********)(lVar20 + 0x50);
              ppppppplStack_230 = (long *******)0x1;
              if (ppppppplStack_228 == (long *******)0x0) {
                ppppppplStack_230 = (long *******)0x2;
              }
              uStack_1e8 = *(undefined **)(lVar20 + 8);
              ppppppplStack_330 = (long *******)auStack_458;
              uStack_328 = (undefined8 *)CONCAT71(uStack_328._1_7_,1);
              _auStack_f0 = (long *******)&ppppppplStack_330;
              uStack_e8 = 0x98;
              uStack_e7 = 0x1061c20;
              uStack_e1 = 0;
              uStack_218 = 1;
              if (lVar19 == 0) {
                uStack_218 = 2;
              }
              uStack_1f8 = SUB81(ppppppplStack_578,0);
              uStack_1f7 = (undefined7)((ulong)ppppppplStack_578 >> 8);
              uStack_200 = auStack_580[0];
              uStack_1ff = auStack_580._1_7_;
              uStack_1f0 = SUB81(puStack_570,0);
              uStack_1ef = (undefined7)((ulong)puStack_570 >> 8);
              pppppplStack_1e0 = (long ******)s__108b39f4f;
              ppppppplStack_1d8 = (long *******)auStack_f0;
              uStack_220 = (undefined1)*(undefined8 *)(lVar20 + 0x58);
              uStack_21f = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x58) >> 8);
              uStack_217 = 0;
              uStack_210 = (undefined1)lVar19;
              uStack_20f = (undefined7)((ulong)lVar19 >> 8);
              uStack_208 = (undefined1)*(undefined8 *)(lVar20 + 0x68);
              uStack_207 = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x68) >> 8);
              (**(code **)(puVar36 + 0x20))(puVar26,&ppppppplStack_230);
            }
          }
        }
        else {
LAB_100c21464:
          lVar20 = 
          ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hb252c530615a011cE;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uStack_590 = *(undefined8 *)
                          (
                          ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hb252c530615a011cE
                          + 0x20);
            uStack_588 = *(undefined8 *)
                          (
                          ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hb252c530615a011cE
                          + 0x28);
            uStack_598 = 5;
            puVar36 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar36 = &UNK_10b3c24c8;
            }
            puVar26 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar26 = &UNK_109adfc03;
            }
            iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,&uStack_598);
            if (iVar17 != 0) {
              puStack_440 = (undefined *)
                            (
                            ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hb252c530615a011cE
                            + 0x30);
              ppppppplStack_330 = (long *******)&uStack_599;
              uStack_328 = (undefined8 *)&UNK_10b216268;
              auStack_458 = (undefined1  [8])0x1;
              ppppppplStack_450 = (long *******)&ppppppplStack_330;
              puStack_448 = (undefined8 *)0x1;
              uStack_1f8 = (undefined1)uStack_590;
              uStack_1f7 = (undefined7)((ulong)uStack_590 >> 8);
              uStack_200 = (undefined1)uStack_598;
              uStack_1ff = (undefined7)((ulong)uStack_598 >> 8);
              uStack_1f0 = (undefined1)uStack_588;
              uStack_1ef = (undefined7)((ulong)uStack_588 >> 8);
              lVar19 = *(long *)(lVar20 + 0x60);
              ppppppplStack_228 = *(long ********)(lVar20 + 0x50);
              ppppppplStack_230 = (long *******)0x1;
              if (ppppppplStack_228 == (long *******)0x0) {
                ppppppplStack_230 = (long *******)0x2;
              }
              uStack_1e8 = *(undefined **)(lVar20 + 8);
              _auStack_f0 = (long *******)auStack_458;
              uStack_e8 = 1;
              auStack_580 = (undefined1  [8])auStack_f0;
              ppppppplStack_578 = (long *******)&DAT_1061c2098;
              uStack_218 = 1;
              if (lVar19 == 0) {
                uStack_218 = 2;
              }
              pppppplStack_1e0 = (long ******)s__108b39f4f;
              ppppppplStack_1d8 = (long *******)auStack_580;
              uStack_220 = (undefined1)*(undefined8 *)(lVar20 + 0x58);
              uStack_21f = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x58) >> 8);
              uStack_217 = 0;
              uStack_210 = (undefined1)lVar19;
              uStack_20f = (undefined7)((ulong)lVar19 >> 8);
              uStack_208 = (undefined1)*(undefined8 *)(lVar20 + 0x68);
              uStack_207 = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x68) >> 8);
              (**(code **)(puVar36 + 0x20))(puVar26,&ppppppplStack_230);
            }
          }
        }
        ppppppplVar21 = ppppppplStack_5e0;
        uVar4 = (uint)uStack_5d8;
        pppppplVar33 = (long ******)((ulong)uStack_5d8 & 0xffffffff);
        iVar17 = uStack_5d8._4_4_;
        auStack_f0._0_4_ = (uint)uStack_5d8;
        stack0xffffffffffffff14 = uStack_5d8._4_4_;
        if (((ppppppplStack_5e0[2] <= pppppplVar33) ||
            (pppppplVar23 = ppppppplStack_5e0[1] + ((ulong)uStack_5d8 & 0xffffffff) * 0x28,
            *pppppplVar23 == (long *****)0x2)) ||
           (*(int *)((long)pppppplVar23 + 0x124) != uStack_5d8._4_4_)) {
          puVar36 = &UNK_10b3a3cc0;
          ppppppplStack_230 = ppppppplVar3;
          _auStack_f0 = uStack_5d8;
          goto LAB_100c23c48;
        }
        FUN_100c2756c(auStack_458,pppppplVar23,param_3);
        ppppppplVar8 = ppppppplStack_450;
        if (auStack_458[0] != 0) {
          if (auStack_458[0] != 9) {
            if (auStack_458[0] == 3) {
              _memcpy(&ppppppplStack_230,&ppppppplStack_450,0x120);
              auStack_290._0_4_ = uStack_11c;
              __ZN2h25proto7streams5store5Store8find_mut17hf3b51c9082691dddE
                        (auStack_f0,ppppppplVar21,auStack_290);
              ppppppplVar21 = (long *******)0x0;
              if (CONCAT44(stack0xffffffffffffff14,auStack_f0._0_4_) == 0) goto LAB_100c23c00;
              uVar7 = CONCAT61(uStack_e7,uStack_e8);
              puVar13 = (undefined8 *)CONCAT17(uStack_e1,uVar7);
              ppppppplStack_330 = (long *******)CONCAT44(stack0xffffffffffffff14,auStack_f0._0_4_);
              uStack_328._0_4_ = (uint)uVar7;
              uStack_328._4_4_ = (int)((ulong)puVar13 >> 0x20);
              auStack_290._4_4_ = uStack_328._4_4_;
              auStack_290._0_4_ = (uint)uStack_328;
              uStack_328 = puVar13;
              if (((ppppppplStack_330[2] <= (long ******)((ulong)uVar7 & 0xffffffff)) ||
                  (pppppplVar33 = ppppppplStack_330[1] + (ulong)(uint)uStack_328 * 0x28,
                  *pppppplVar33 == (long *****)0x2)) ||
                 (*(int *)((long)pppppplVar33 + 0x124) != uStack_328._4_4_)) {
                puVar36 = &UNK_10b3a3cc0;
                goto LAB_100c23e04;
              }
              *(undefined1 *)((long)pppppplVar33 + 0x135) = 0;
              if (ppppppplStack_330[2] <= (long ******)(ulong)(uint)uStack_328) goto LAB_100c23de0;
              pppppplVar33 = ppppppplStack_330[1] + (ulong)(uint)uStack_328 * 0x28;
              if ((*pppppplVar33 == (long *****)0x2) ||
                 (*(int *)((long)pppppplVar33 + 0x124) != uStack_328._4_4_)) goto LAB_100c23de0;
              if (*pppppplVar33 != (long *****)0x0) {
                if (*(ulong *)(param_5 + 0x18) < *(ulong *)(param_5 + 0x10)) {
                  if (*(char *)(pppppplVar33 + 0x26) == '\x01') {
                    __ZN4core9panicking5panic17h30f5ec71e3af4326E
                              (&UNK_109a71aeb,0x24,&UNK_10b3aadb8);
                    goto LAB_100c23e80;
                  }
                  *(ulong *)(param_5 + 0x18) = *(ulong *)(param_5 + 0x18) + 1;
                  *(undefined1 *)(pppppplVar33 + 0x26) = 1;
                  FUN_100c26014(param_1 + 0x10,&ppppppplStack_330);
                }
                else {
                  func_0x0001056f6a18(param_1,&ppppppplStack_330);
                }
              }
              _memcpy(&ppppppplStack_578,&ppppppplStack_230,0x120);
              auStack_580[0] = 3;
              uVar11 = auStack_458._0_4_;
joined_r0x000100c2317c:
              if ((9 < auStack_458[0]) || ((1 << (ulong)(uVar11 & 0x1f) & 0x209U) == 0)) {
                FUN_100e8410c(auStack_458);
              }
joined_r0x000100c23414:
              if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E != 0)
              goto LAB_100c231a8;
LAB_100c23448:
              if (((1 < bRam000000010b6323a8 - 1) &&
                  ((bRam000000010b6323a8 == 0 ||
                   (cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                       (&
                                        __ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hd4a47a9825c8f131E
                                       ), cVar16 == '\0')))) ||
                 (iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                     (
                                     ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hd4a47a9825c8f131E
                                     ), iVar17 == 0)) goto LAB_100c231a8;
              _auStack_f0 = (long *******)auStack_580;
              uStack_e8 = 0x4c;
              uStack_e7 = 0x10112a1;
              uStack_e1 = 0;
              ppppppplStack_330 = (long *******)s_pop_frame__frame__108ab9837;
              uStack_328 = (undefined8 *)auStack_f0;
              auStack_290 = (undefined1  [8])&ppppppplStack_330;
              uStack_288 = (long *******)&UNK_10b208fd0;
              ppppppplStack_230 = (long *******)0x1;
              ppppppplStack_228 = (long *******)auStack_290;
              uStack_220 = 1;
              uStack_21f = 0;
              uStack_218 = (undefined1)
                           (
                           ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hd4a47a9825c8f131E
                           + 0x30);
              uStack_217 = (undefined7)
                           ((ulong)(
                                   ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hd4a47a9825c8f131E
                                   + 0x30) >> 8);
              __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                        (___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hd4a47a9825c8f131E
                         ,&ppppppplStack_230);
              lVar20 = 
              ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hd4a47a9825c8f131E
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                ppppppplStack_450 =
                     *(long ********)
                      (
                      ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hd4a47a9825c8f131E
                      + 0x20);
                puStack_448 = *(undefined8 **)
                               (
                               ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hd4a47a9825c8f131E
                               + 0x28);
                auStack_458 = (undefined1  [8])0x5;
                puVar36 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar36 = &UNK_10b3c24c8;
                }
                puVar26 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar26 = &UNK_109adfc03;
                }
                iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,auStack_458);
                if (iVar17 != 0) {
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar20,puVar26,puVar36,auStack_458,&ppppppplStack_230);
                }
              }
            }
            else {
              if (4 < auStack_458[0]) {
                if (auStack_458[0] < 7) {
                  if (auStack_458[0] == 5) {
                    *puVar29 = *puVar28;
                    *(undefined1 *)(puVar29 + 1) = *(undefined1 *)(puVar28 + 1);
                    auStack_580._4_4_ = auStack_458._4_4_;
                    ppppppplStack_578 =
                         (long *******)CONCAT62(ppppppplStack_578._2_6_,(short)ppppppplStack_450);
                    auStack_580[0] = 5;
                  }
                  else {
                    auStack_580[0] = auStack_458[0];
                    ppppppplStack_578 = ppppppplStack_450;
                    puStack_570 = puStack_448;
                    puStack_568 = puStack_440;
                    puStack_560 = puStack_438;
                    uStack_558 = uStack_430;
                  }
                  goto joined_r0x000100c22944;
                }
                auStack_580._4_4_ = auStack_458._4_4_;
                ppppppplStack_578 =
                     (long *******)CONCAT44(ppppppplStack_578._4_4_,ppppppplStack_450._0_4_);
joined_r0x000100c23414:
                auStack_580 = (undefined1  [8])CONCAT71(auStack_580._1_7_,auStack_458[0]);
                goto joined_r0x000100c23414;
              }
              if (auStack_458[0] == 1) {
                ppppppplStack_578 = ppppppplStack_450;
                _memcpy(&puStack_570,&puStack_448,0x118);
                auStack_580[0] = 1;
              }
              else {
                if (auStack_458[0] != 2) {
                  auStack_580._4_4_ = auStack_458._4_4_;
                  puStack_550 = puStack_428;
                  ppppppplStack_548 = ppppppplStack_420;
                  puStack_568 = puStack_440;
                  puStack_570 = puStack_448;
                  uStack_558 = uStack_430;
                  puStack_560 = puStack_438;
                  ppppppplStack_578 = ppppppplStack_450;
                  goto joined_r0x000100c23414;
                }
                auStack_580._4_4_ = auStack_458._4_4_;
                auStack_580[0] = 2;
                ppppppplStack_578 = ppppppplStack_450;
              }
joined_r0x000100c22944:
              if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0)
              goto LAB_100c23448;
LAB_100c231a8:
              lVar20 = 
              ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hd4a47a9825c8f131E
              ;
              _auStack_f0 = (long *******)CONCAT44(stack0xffffffffffffff14,auStack_f0._0_4_);
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (_auStack_f0 = (long *******)CONCAT44(stack0xffffffffffffff14,auStack_f0._0_4_),
                 4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                uVar35 = *(undefined8 *)
                          (
                          ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hd4a47a9825c8f131E
                          + 0x20);
                auStack_f0._0_4_ = 5;
                stack0xffffffffffffff14 = 0;
                uStack_e8 = (undefined1)uVar35;
                uStack_e7 = (undefined6)((ulong)uVar35 >> 8);
                uStack_e1 = (undefined1)((ulong)uVar35 >> 0x38);
                uStack_e0 = (undefined7)
                            *(undefined8 *)
                             (
                             ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hd4a47a9825c8f131E
                             + 0x28);
                uStack_d9 = (undefined1)
                            ((ulong)*(undefined8 *)
                                     (
                                     ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hd4a47a9825c8f131E
                                     + 0x28) >> 0x38);
                puVar36 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar36 = &UNK_10b3c24c8;
                }
                puVar26 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar26 = &UNK_109adfc03;
                }
                iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,auStack_f0);
                if (iVar17 != 0) {
                  puStack_440 = (undefined *)
                                (
                                ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hd4a47a9825c8f131E
                                + 0x30);
                  ppppppplStack_80 = (long *******)auStack_580;
                  puStack_78 = &DAT_10112a14c;
                  ppppppplStack_88 = (long *******)&ppppppplStack_80;
                  ppppppplStack_90 = (long *******)s_pop_frame__frame__108ab9837;
                  ppppppplStack_258 = (long *******)&ppppppplStack_90;
                  puStack_250 = &UNK_10b208fd0;
                  auStack_458 = (undefined1  [8])0x1;
                  ppppppplStack_450 = (long *******)&ppppppplStack_258;
                  puStack_448 = (undefined8 *)0x1;
                  uStack_1f8 = uStack_e8;
                  uStack_1f7 = (undefined7)(CONCAT17(uStack_e1,CONCAT61(uStack_e7,uStack_e8)) >> 8);
                  uStack_200 = (undefined1)auStack_f0._0_4_;
                  uStack_1ff = (undefined7)(CONCAT44(stack0xffffffffffffff14,auStack_f0._0_4_) >> 8)
                  ;
                  uStack_1f0 = (undefined1)uStack_e0;
                  uStack_1ef = (undefined7)(CONCAT17(uStack_d9,uStack_e0) >> 8);
                  lVar19 = *(long *)(lVar20 + 0x60);
                  ppppppplStack_228 = *(long ********)(lVar20 + 0x50);
                  ppppppplStack_230 = (long *******)0x1;
                  if (ppppppplStack_228 == (long *******)0x0) {
                    ppppppplStack_230 = (long *******)0x2;
                  }
                  uStack_1e8 = *(undefined **)(lVar20 + 8);
                  auStack_290 = (undefined1  [8])auStack_458;
                  uStack_288 = (long *******)CONCAT71(uStack_288._1_7_,1);
                  ppppppplStack_330 = (long *******)auStack_290;
                  uStack_328 = (undefined8 *)&DAT_1061c2098;
                  uStack_218 = 1;
                  if (lVar19 == 0) {
                    uStack_218 = 2;
                  }
                  pppppplStack_1e0 = (long ******)s__108b39f4f;
                  ppppppplStack_1d8 = (long *******)&ppppppplStack_330;
                  uStack_220 = (undefined1)*(undefined8 *)(lVar20 + 0x58);
                  uStack_21f = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x58) >> 8);
                  uStack_217 = 0;
                  uStack_210 = (undefined1)lVar19;
                  uStack_20f = (undefined7)((ulong)lVar19 >> 8);
                  uStack_208 = (undefined1)*(undefined8 *)(lVar20 + 0x68);
                  uStack_207 = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x68) >> 8);
                  (**(code **)(puVar36 + 0x20))(puVar26,&ppppppplStack_230);
                }
              }
            }
            auStack_458 = (undefined1  [8])uStack_5d8;
            if (ppppppplStack_5e0[2] <= (long ******)((ulong)uStack_5d8 & 0xffffffff))
            goto LAB_100c23d84;
            pppppplVar33 = ppppppplStack_5e0[1] + ((ulong)uStack_5d8 & 0xffffffff) * 0x28;
            if ((*pppppplVar33 == (long *****)0x2) ||
               (*(int *)((long)pppppplVar33 + 0x124) != uStack_5d8._4_4_)) goto LAB_100c23d84;
            if ((*pppppplVar33 != (long *****)0x0) ||
               ((*(byte *)(pppppplVar33 + 10) < 6 && (*(byte *)(pppppplVar33 + 10) == 5)))) {
              FUN_100c26014(param_1 + 0x10,&ppppppplStack_5e0);
            }
            ppppppplStack_228 = uStack_5d8;
            ppppppplStack_230 = ppppppplStack_5e0;
            __ZN2h25proto7streams6counts6Counts16transition_after17h9f59a27fc86d1418E
                      (param_5,&ppppppplStack_230,uStack_599);
            cVar16 = auStack_580[0];
            _memcpy(&pppppplStack_750,puVar29,0x127);
            if (ppppppplStack_5d0 != (long *******)0x2) {
              ppppppplVar21 = ppppppplStack_5c8;
              if (((ulong)ppppppplStack_5d0 & 1) != 0) {
                ppppppplVar21 =
                     (long *******)
                     ((long)ppppppplStack_5c8 +
                     (*(long *)(lStack_5c0 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
              }
              (**(code **)(lStack_5c0 + 0x68))(ppppppplVar21,&uStack_5b8);
            }
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (lStack_5b0 != 0)) {
              auStack_458 = *(undefined1 (*) [8])(lStack_5b0 + 0x10);
              ppppppplStack_450 = *(long ********)(lStack_5b0 + 0x18);
              ppppppplStack_230 = (long *******)auStack_458;
              ppppppplStack_228 = (long *******)&DAT_100c7b3a0;
              FUN_1011d7d74(&ppppppplStack_5d0,&UNK_108cd3ef5,0x15,s_<____108ab67c5,
                            &ppppppplStack_230);
            }
            FUN_100dddd8c(&ppppppplStack_5d0);
            goto LAB_100c236a0;
          }
          auStack_f0._0_4_ = uVar4;
          stack0xffffffffffffff14 = iVar17;
          if (((ppppppplVar21[2] <= pppppplVar33) ||
              (pppppplVar23 = ppppppplVar21[1] + (long)pppppplVar33 * 0x28,
              *pppppplVar23 == (long *****)0x2)) || (*(int *)((long)pppppplVar23 + 0x124) != iVar17)
             ) {
            ppppppplStack_228 = (long *******)&DAT_10571bc44;
            ppppppplStack_230 = ppppppplVar3;
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__dangling_store_key_for_stream_i_108b15a2c,&ppppppplStack_230,
                       &UNK_10b3a3ca8);
            goto LAB_100c23e80;
          }
          if ((*(byte *)(pppppplVar23 + 10) < 6) && (*(byte *)(pppppplVar23 + 10) == 5)) {
            uVar31 = *(undefined4 *)((long)pppppplVar23 + 0x54);
            __ZN2h25proto7streams6stream6Stream9set_reset17h4f47399f0e6ca518E(pppppplVar23,uVar31,1)
            ;
            auStack_f0._0_4_ = uVar4;
            stack0xffffffffffffff14 = iVar17;
            if ((pppppplVar33 < ppppppplVar21[2]) &&
               ((ppppppplVar21[1][(long)pppppplVar33 * 0x28] != (long *****)0x2 &&
                (*(int *)((long)(ppppppplVar21[1] + (long)pppppplVar33 * 0x28) + 0x124) == iVar17)))
               ) {
              auStack_580._4_4_ = iVar17;
              ppppppplStack_578 = (long *******)CONCAT44(ppppppplStack_578._4_4_,uVar31);
              auStack_580[0] = 8;
              uVar11 = auStack_458._0_4_;
              goto joined_r0x000100c2317c;
            }
            ppppppplStack_228 = (long *******)&DAT_10571bc44;
            ppppppplStack_230 = ppppppplVar3;
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__dangling_store_key_for_stream_i_108b15a2c,&ppppppplStack_230,
                       &UNK_10b3a3ca8);
            goto LAB_100c23e80;
          }
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
              ((bRam000000010b6323c0 - 1 < 2 ||
               ((bRam000000010b6323c0 != 0 &&
                (cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hdff69708911c815aE
                                    ), cVar16 != '\0')))))) &&
             (iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hdff69708911c815aE
                                 ), iVar17 != 0)) {
            ppppppplStack_80 = (long *******)&UNK_108cb07e1;
            puStack_78 = (undefined *)0x55;
            ppppppplStack_90 = (long *******)&ppppppplStack_80;
            ppppppplStack_88 = (long *******)&UNK_10b208fd0;
            auStack_f0._0_4_ = 1;
            stack0xffffffffffffff14 = 0;
            uStack_e8 = SUB81(&ppppppplStack_90,0);
            uStack_e7 = (undefined6)((ulong)&ppppppplStack_90 >> 8);
            uStack_e1 = (undefined1)((ulong)&ppppppplStack_90 >> 0x38);
            uStack_e0 = 1;
            uStack_d9 = 0;
            uStack_d8 = (undefined7)
                        (
                        ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hdff69708911c815aE
                        + 0x30);
            uStack_d1 = (undefined1)
                        ((ulong)(
                                ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hdff69708911c815aE
                                + 0x30) >> 0x38);
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                      (___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hdff69708911c815aE
                       ,auStack_f0);
            lVar20 = 
            ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hdff69708911c815aE
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              uStack_328 = *(undefined8 **)
                            (
                            ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hdff69708911c815aE
                            + 0x20);
              puStack_320 = *(undefined **)
                             (
                             ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hdff69708911c815aE
                             + 0x28);
              ppppppplStack_330 = (long *******)0x5;
              puVar36 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar36 = &UNK_10b3c24c8;
              }
              puVar26 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar26 = &UNK_109adfc03;
              }
              iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,&ppppppplStack_330);
              if (iVar17 != 0) {
                lVar19 = *(long *)(lVar20 + 0x60);
                ppppppplStack_228 = *(long ********)(lVar20 + 0x50);
                ppppppplStack_230 = (long *******)0x1;
                if (ppppppplStack_228 == (long *******)0x0) {
                  ppppppplStack_230 = (long *******)0x2;
                }
                uStack_1e8 = *(undefined **)(lVar20 + 8);
                ppppppplStack_248 = (long *******)auStack_f0;
                ppppppplStack_240 = (long *******)CONCAT71(ppppppplStack_240._1_7_,1);
                auStack_290 = (undefined1  [8])&ppppppplStack_248;
                uStack_288 = (long *******)&DAT_1061c2098;
                uStack_218 = 1;
                if (lVar19 == 0) {
                  uStack_218 = 2;
                }
                uStack_1f8 = SUB81(uStack_328,0);
                uStack_1f7 = (undefined7)((ulong)uStack_328 >> 8);
                uStack_200 = SUB81(ppppppplStack_330,0);
                uStack_1ff = (undefined7)((ulong)ppppppplStack_330 >> 8);
                uStack_1f0 = SUB81(puStack_320,0);
                uStack_1ef = (undefined7)((ulong)puStack_320 >> 8);
                pppppplStack_1e0 = (long ******)s__108b39f4f;
                ppppppplStack_1d8 = (long *******)auStack_290;
                uStack_220 = (undefined1)*(undefined8 *)(lVar20 + 0x58);
                uStack_21f = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x58) >> 8);
                uStack_217 = 0;
                uStack_210 = (undefined1)lVar19;
                uStack_20f = (undefined7)((ulong)lVar19 >> 8);
                uStack_208 = (undefined1)*(undefined8 *)(lVar20 + 0x68);
                uStack_207 = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x68) >> 8);
                (**(code **)(puVar36 + 0x20))(puVar26,&ppppppplStack_230);
              }
            }
          }
          else {
            lVar20 = 
            ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hdff69708911c815aE
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              uStack_268 = *(undefined8 *)
                            (
                            ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hdff69708911c815aE
                            + 0x20);
              uStack_260 = *(undefined8 *)
                            (
                            ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hdff69708911c815aE
                            + 0x28);
              uStack_270 = 5;
              puVar36 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar36 = &UNK_10b3c24c8;
              }
              puVar26 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar26 = &UNK_109adfc03;
              }
              iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,&uStack_270);
              if (iVar17 != 0) {
                ppppppplStack_248 = (long *******)&UNK_108cb07e1;
                ppppppplStack_240 = (long *******)0x55;
                ppppppplStack_80 = (long *******)&ppppppplStack_248;
                puStack_78 = &UNK_10b208fd0;
                auStack_f0._0_4_ = 1;
                stack0xffffffffffffff14 = 0;
                uStack_e8 = SUB81(&ppppppplStack_80,0);
                uStack_e7 = (undefined6)((ulong)&ppppppplStack_80 >> 8);
                uStack_e1 = (undefined1)((ulong)&ppppppplStack_80 >> 0x38);
                uStack_e0 = 1;
                uStack_d9 = 0;
                uStack_d8 = (undefined7)
                            (
                            ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hdff69708911c815aE
                            + 0x30);
                uStack_d1 = (undefined1)
                            ((ulong)(
                                    ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hdff69708911c815aE
                                    + 0x30) >> 0x38);
                uStack_1f8 = (undefined1)uStack_268;
                uStack_1f7 = (undefined7)((ulong)uStack_268 >> 8);
                uStack_200 = (undefined1)uStack_270;
                uStack_1ff = (undefined7)((ulong)uStack_270 >> 8);
                uStack_1f0 = (undefined1)uStack_260;
                uStack_1ef = (undefined7)((ulong)uStack_260 >> 8);
                lVar19 = *(long *)(lVar20 + 0x60);
                ppppppplStack_228 = *(long ********)(lVar20 + 0x50);
                ppppppplStack_230 = (long *******)0x1;
                if (ppppppplStack_228 == (long *******)0x0) {
                  ppppppplStack_230 = (long *******)0x2;
                }
                uStack_1e8 = *(undefined **)(lVar20 + 8);
                auStack_290 = (undefined1  [8])auStack_f0;
                uStack_288 = (long *******)CONCAT71(uStack_288._1_7_,1);
                ppppppplStack_330 = (long *******)auStack_290;
                uStack_328 = (undefined8 *)&DAT_1061c2098;
                uStack_218 = 1;
                if (lVar19 == 0) {
                  uStack_218 = 2;
                }
                pppppplStack_1e0 = (long ******)s__108b39f4f;
                ppppppplStack_1d8 = (long *******)&ppppppplStack_330;
                uStack_220 = (undefined1)*(undefined8 *)(lVar20 + 0x58);
                uStack_21f = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x58) >> 8);
                uStack_217 = 0;
                uStack_210 = (undefined1)lVar19;
                uStack_20f = (undefined7)((ulong)lVar19 >> 8);
                uStack_208 = (undefined1)*(undefined8 *)(lVar20 + 0x68);
                uStack_207 = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x68) >> 8);
                (**(code **)(puVar36 + 0x20))(puVar26,&ppppppplStack_230);
              }
            }
          }
          ppppppplStack_228 = uStack_5d8;
          ppppppplStack_230 = ppppppplStack_5e0;
          __ZN2h25proto7streams6counts6Counts16transition_after17h9f59a27fc86d1418E
                    (param_5,&ppppppplStack_230,uStack_599);
          uVar4 = auStack_458._0_4_;
joined_r0x000100c2270c:
          if ((9 < auStack_458[0]) || ((1 << (ulong)(uVar4 & 0x1f) & 0x209U) == 0)) {
            FUN_100e8410c(auStack_458);
          }
          if (ppppppplStack_5d0 != (long *******)0x2) {
            ppppppplVar21 = ppppppplStack_5c8;
            if (((ulong)ppppppplStack_5d0 & 1) != 0) {
              ppppppplVar21 =
                   (long *******)
                   ((long)ppppppplStack_5c8 +
                   (*(long *)(lStack_5c0 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
            }
            (**(code **)(lStack_5c0 + 0x68))(ppppppplVar21,&uStack_5b8);
          }
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (lStack_5b0 != 0)) {
            auStack_458 = *(undefined1 (*) [8])(lStack_5b0 + 0x10);
            ppppppplStack_450 = *(long ********)(lStack_5b0 + 0x18);
            ppppppplStack_230 = (long *******)auStack_458;
            ppppppplStack_228 = (long *******)&DAT_100c7b3a0;
            FUN_1011d7d74(&ppppppplStack_5d0,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&ppppppplStack_230
                         );
          }
          FUN_100dddd8c(&ppppppplStack_5d0);
          if ((*(uint *)(param_1 + 0x10) & 1) == 0) goto LAB_100c22764;
          goto LAB_100c211a8;
        }
        uStack_328 = puStack_448;
        ppppppplStack_330 = ppppppplStack_450;
        puStack_318 = puStack_438;
        puStack_320 = puStack_440;
        uStack_308 = puStack_428;
        uStack_310 = uStack_430;
        auStack_f0._0_4_ = uVar4;
        stack0xffffffffffffff14 = iVar17;
        if (((ppppppplVar21[2] <= pppppplVar33) ||
            (pppppplVar23 = ppppppplVar21[1] + (long)pppppplVar33 * 0x28,
            *pppppplVar23 == (long *****)0x2)) || (*(int *)((long)pppppplVar23 + 0x124) != iVar17))
        goto LAB_100c23c68;
        auStack_2f4 = *(undefined1 (*) [4])((long)pppppplVar23 + 0x84);
        puStack_2f0 = puStack_438;
        if (ppppppplStack_450 == (long *******)0x0) {
joined_r0x000100c21d48:
          if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E != 0) goto LAB_100c22010;
LAB_100c21d68:
          if (((1 < bRam000000010b632390 - 1) &&
              ((bRam000000010b632390 == 0 ||
               (cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hb6297e17ecf2f062E
                                   ), cVar16 == '\0')))) ||
             (iVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hb6297e17ecf2f062E
                                 ), iVar18 == 0)) goto LAB_100c22010;
          ppppppplStack_258 = (long *******)&UNK_108cc3966;
          puStack_250 = (undefined *)0x15;
          bStack_2e1 = uStack_308._6_1_ & 1;
          pppppplStack_2e0 = (long ******)auStack_2f4;
          auStack_f0._0_4_ = uVar4;
          stack0xffffffffffffff14 = iVar17;
          if (((ppppppplVar21[2] <= pppppplVar33) ||
              (pppppplVar33 = ppppppplVar21[1] + (long)pppppplVar33 * 0x28,
              *pppppplVar33 == (long *****)0x2)) || (*(int *)((long)pppppplVar33 + 0x124) != iVar17)
             ) goto LAB_100c23c68;
          uStack_2d4 = *(uint *)((long)pppppplVar33 + 0x84);
          puStack_2b8 = &uStack_2d4;
          if ((*pppppplVar33 == (long *****)0x2) || (*(int *)((long)pppppplVar33 + 0x124) != iVar17)
             ) goto LAB_100c23c68;
          lStack_278 = ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hb6297e17ecf2f062E
                       + 0x30;
          pppppplStack_1e0 = pppppplVar33 + 0x25;
          pppppplStack_1d0 = pppppplVar33 + 0x11;
          ppppppplStack_230 = (long *******)&ppppppplStack_258;
          ppppppplStack_228 = (long *******)&UNK_10b208fd0;
          uStack_220 = SUB81(&puStack_2f0,0);
          uStack_21f = (undefined7)((ulong)&puStack_2f0 >> 8);
          uStack_218 = 0;
          uStack_217 = 0x10b215f;
          uStack_210 = SUB81(&bStack_2e1,0);
          uStack_20f = (undefined7)((ulong)&bStack_2e1 >> 8);
          uStack_208 = 0x68;
          uStack_207 = 0x10b2162;
          uStack_200 = SUB81(&pppppplStack_2e0,0);
          uStack_1ff = (undefined7)((ulong)&pppppplStack_2e0 >> 8);
          uStack_1f8 = 8;
          uStack_1f7 = 0x10b2337;
          uStack_1f0 = SUB81(&puStack_2b8,0);
          uStack_1ef = (undefined7)((ulong)&puStack_2b8 >> 8);
          uStack_1e8 = &UNK_10b233708;
          ppppppplStack_1d8 = (long *******)&UNK_10b223390;
          puStack_1c8 = &UNK_10b215f00;
          auStack_290 = (undefined1  [8])0x1;
          uStack_288 = (long *******)&ppppppplStack_230;
          uStack_280 = 7;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hb6297e17ecf2f062E
                     ,auStack_290);
          lVar20 = 
          ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hb6297e17ecf2f062E;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            ppppppplStack_240 =
                 *(long ********)
                  (
                  ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hb6297e17ecf2f062E
                  + 0x20);
            uStack_238 = *(undefined8 *)
                          (
                          ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hb6297e17ecf2f062E
                          + 0x28);
            ppppppplStack_248 = (long *******)0x5;
            puVar36 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar36 = &UNK_10b3c24c8;
            }
            puVar26 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar26 = &UNK_109adfc03;
            }
            iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,&ppppppplStack_248);
            if (iVar17 != 0) {
              lVar19 = *(long *)(lVar20 + 0x60);
              lVar5 = *(long *)(lVar20 + 0x50);
              auStack_f0._0_4_ = 1;
              if (lVar5 == 0) {
                auStack_f0._0_4_ = 2;
              }
              uStack_a8 = *(undefined4 *)(lVar20 + 8);
              uStack_a4 = *(undefined4 *)(lVar20 + 0xc);
              ppppppplStack_90 = (long *******)auStack_290;
              ppppppplStack_88 = (long *******)CONCAT71(ppppppplStack_88._1_7_,1);
              ppppppplStack_80 = (long *******)&ppppppplStack_90;
              puStack_78 = &DAT_1061c2098;
              uVar35 = 1;
              if (lVar19 == 0) {
                uVar35 = 2;
              }
              ppppppplStack_b8 = ppppppplStack_240;
              uStack_c0 = SUB87(ppppppplStack_248,0);
              uStack_b9 = (undefined1)((ulong)ppppppplStack_248 >> 0x38);
              uStack_b0 = uStack_238;
              ppppppplStack_98 = (long *******)&ppppppplStack_80;
              pcStack_a0 = s__108b39f4f;
              unique0x100039d4 = 0;
              uStack_e8 = (undefined1)lVar5;
              uStack_e7 = (undefined6)((ulong)lVar5 >> 8);
              uStack_e1 = (undefined1)((ulong)lVar5 >> 0x38);
              uStack_e0 = (undefined7)*(undefined8 *)(lVar20 + 0x58);
              uStack_d9 = (undefined1)((ulong)*(undefined8 *)(lVar20 + 0x58) >> 0x38);
              uStack_d8 = (undefined7)uVar35;
              uStack_d1 = 0;
              uStack_d0 = (undefined7)lVar19;
              uStack_c9 = (undefined1)((ulong)lVar19 >> 0x38);
              uStack_c8 = (undefined7)*(undefined8 *)(lVar20 + 0x68);
              uStack_c1 = (undefined1)((ulong)*(undefined8 *)(lVar20 + 0x68) >> 0x38);
              (**(code **)(puVar36 + 0x20))(puVar26,auStack_f0);
            }
          }
LAB_100c22248:
          if ((puStack_2f0 == (undefined *)0x0) || (auStack_2f4 != (undefined1  [4])0x0)) {
            puVar36 = (undefined *)(ulong)uVar6;
            if (puStack_2f0 <= (undefined *)(ulong)uVar6) {
              puVar36 = puStack_2f0;
            }
            puVar26 = (undefined *)
                      (ulong)((uint)auStack_2f4 & ((int)auStack_2f4 >> 0x1f ^ 0xffffffffU));
            if (puVar36 <= puVar26) {
              puVar26 = puVar36;
            }
            uStack_294 = (uint)puVar26;
            if (puVar26 != (undefined *)0x0) {
              auStack_f0._0_4_ = (uint)uStack_5d8;
              stack0xffffffffffffff14 = uStack_5d8._4_4_;
              if (((ppppppplStack_5e0[2] <= (long ******)((ulong)uStack_5d8 & 0xffffffff)) ||
                  (pppppplVar33 = ppppppplStack_5e0[1] + ((ulong)uStack_5d8 & 0xffffffff) * 0x28,
                  *pppppplVar33 == (long *****)0x2)) ||
                 (*(int *)((long)pppppplVar33 + 0x124) != uStack_5d8._4_4_)) goto LAB_100c23c68;
              if (*(int *)(pppppplVar33 + 0x10) < (int)uStack_294) {
                uStack_e1 = SUB81(uStack_328,0);
                uStack_e0 = (undefined7)((ulong)uStack_328 >> 8);
                auStack_f0._4_3_ = (undefined3)((ulong)uStack_5d8 >> 0x20);
                uStack_e9 = SUB81(ppppppplStack_330,0);
                uStack_e8 = (undefined1)((ulong)ppppppplStack_330 >> 8);
                uStack_e7 = (undefined6)((ulong)ppppppplStack_330 >> 0x10);
                uStack_d1 = SUB81(puStack_318,0);
                uStack_d0 = (undefined7)((ulong)puStack_318 >> 8);
                uStack_d9 = SUB81(puStack_320,0);
                uStack_d8 = (undefined7)((ulong)puStack_320 >> 8);
                uStack_c1 = SUB81(uStack_308,0);
                uStack_c0 = (undefined7)((ulong)uStack_308 >> 8);
                uStack_c9 = (undefined1)uStack_310;
                uStack_c8 = (undefined7)((ulong)uStack_310 >> 8);
                uStack_220 = 0;
                uStack_217 = (undefined7)((ulong)ppppppplStack_330 >> 8);
                uStack_210 = uStack_e1;
                uStack_21f = (undefined7)CONCAT44(stack0xffffffffffffff14,(uint)uStack_5d8);
                uStack_218 = uStack_e9;
                uStack_207 = uStack_d8;
                uStack_200 = uStack_d1;
                uStack_20f = uStack_e0;
                uStack_208 = uStack_d9;
                uStack_1f7 = uStack_c8;
                uStack_1ff = uStack_d0;
                uStack_1f8 = uStack_c9;
                ppppppplStack_230 = (long *******)0x0;
                ppppplVar34 = *(long ******)(param_3 + 0x20);
                uStack_1f0 = uStack_c1;
                uStack_1ef = uStack_c0;
                FUN_100f13734(param_3,ppppplVar34,&ppppppplStack_230);
                goto LAB_100c226ac;
              }
            }
            if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
                ((bRam000000010b632360 - 1 < 2 ||
                 ((bRam000000010b632360 != 0 &&
                  (cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h8356632669d94214E
                                      ), cVar16 != '\0')))))) &&
               (iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h8356632669d94214E
                                   ), iVar17 != 0)) {
              ppppppplStack_248 = (long *******)&UNK_108cc3970;
              ppppppplStack_240 = (long *******)0x25;
              ppppppplStack_230 = (long *******)&ppppppplStack_248;
              ppppppplStack_228 = (long *******)&UNK_10b208fd0;
              uStack_220 = SUB81(&uStack_294,0);
              uStack_21f = (undefined7)((ulong)&uStack_294 >> 8);
              uStack_218 = 0x90;
              uStack_217 = 0x10b2233;
              auStack_f0._0_4_ = 1;
              stack0xffffffffffffff14 = 0;
              uStack_e8 = SUB81(&ppppppplStack_230,0);
              uStack_e7 = (undefined6)((ulong)&ppppppplStack_230 >> 8);
              uStack_e1 = (undefined1)((ulong)&ppppppplStack_230 >> 0x38);
              uStack_e0 = 2;
              uStack_d9 = 0;
              uStack_d8 = (undefined7)
                          (
                          ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h8356632669d94214E
                          + 0x30);
              uStack_d1 = (undefined1)
                          ((ulong)(
                                  ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h8356632669d94214E
                                  + 0x30) >> 0x38);
              __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                        (___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h8356632669d94214E
                         ,auStack_f0);
              lVar20 = 
              ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h8356632669d94214E
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                uStack_288 = *(long ********)
                              (
                              ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h8356632669d94214E
                              + 0x20);
                uStack_280 = *(undefined8 *)
                              (
                              ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h8356632669d94214E
                              + 0x28);
                auStack_290 = (undefined1  [8])0x5;
                puVar36 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar36 = &UNK_10b3c24c8;
                }
                puVar26 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar26 = &UNK_109adfc03;
                }
                iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,auStack_290);
                if (iVar17 != 0) {
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar20,puVar26,puVar36,auStack_290,auStack_f0);
                }
              }
            }
            else {
              lVar20 = 
              ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h8356632669d94214E
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                ppppppplStack_240 =
                     *(long ********)
                      (
                      ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h8356632669d94214E
                      + 0x20);
                uStack_238 = *(undefined8 *)
                              (
                              ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h8356632669d94214E
                              + 0x28);
                ppppppplStack_248 = (long *******)0x5;
                puVar36 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar36 = &UNK_10b3c24c8;
                }
                puVar26 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar26 = &UNK_109adfc03;
                }
                iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,&ppppppplStack_248);
                if (iVar17 != 0) {
                  ppppppplStack_80 = (long *******)&UNK_108cc3970;
                  puStack_78 = (undefined *)0x25;
                  ppppppplStack_230 = (long *******)&ppppppplStack_80;
                  ppppppplStack_228 = (long *******)&UNK_10b208fd0;
                  uStack_220 = SUB81(&uStack_294,0);
                  uStack_21f = (undefined7)((ulong)&uStack_294 >> 8);
                  uStack_218 = 0x90;
                  uStack_217 = 0x10b2233;
                  auStack_f0._0_4_ = 1;
                  stack0xffffffffffffff14 = 0;
                  uStack_e8 = SUB81(&ppppppplStack_230,0);
                  uStack_e7 = (undefined6)((ulong)&ppppppplStack_230 >> 8);
                  uStack_e1 = (undefined1)((ulong)&ppppppplStack_230 >> 0x38);
                  uStack_e0 = 2;
                  uStack_d9 = 0;
                  uStack_d8 = (undefined7)
                              (
                              ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h8356632669d94214E
                              + 0x30);
                  uStack_d1 = (undefined1)
                              ((ulong)(
                                      ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h8356632669d94214E
                                      + 0x30) >> 0x38);
                  uStack_288 = ppppppplStack_240;
                  auStack_290 = (undefined1  [8])ppppppplStack_248;
                  uStack_280 = uStack_238;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar20,puVar26,puVar36,auStack_290,auStack_f0);
                }
              }
            }
            if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
               (((bRam000000010b632348 - 1 < 2 ||
                 ((bRam000000010b632348 != 0 &&
                  (cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h8326a5094f13b98bE
                                      ), cVar16 != '\0')))) &&
                (iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                    (
                                    ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h8326a5094f13b98bE
                                    ), iVar17 != 0)))) {
              ppppppplStack_230 = (long *******)0x1;
              ppppppplStack_228 = (long *******)0x8;
              uStack_220 = 0;
              uStack_21f = 0;
              uStack_218 = (undefined1)
                           (
                           ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h8326a5094f13b98bE
                           + 0x30);
              uStack_217 = (undefined7)
                           ((ulong)(
                                   ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h8326a5094f13b98bE
                                   + 0x30) >> 8);
              __ZN7tracing4span4Span3new17hfb1cb23559a61740E
                        (auStack_f0,
                         ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h8326a5094f13b98bE
                         ,&ppppppplStack_230);
            }
            else {
              ppppppplStack_230 = (long *******)0x2;
              uStack_210 = (undefined1)
                           ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h8326a5094f13b98bE
              ;
              uStack_20f = (undefined7)
                           ((ulong)
                            ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h8326a5094f13b98bE
                           >> 8);
              if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
                lStack_278 = ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h8326a5094f13b98bE
                             + 0x30;
                auStack_290 = (undefined1  [8])0x1;
                uStack_288 = (long *******)0x8;
                uStack_280 = 0;
                __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE
                          (&ppppppplStack_230,auStack_290);
              }
              uStack_e8 = SUB81(ppppppplStack_228,0);
              uStack_e7 = (undefined6)((ulong)ppppppplStack_228 >> 8);
              uStack_e1 = (undefined1)((ulong)ppppppplStack_228 >> 0x38);
              auStack_f0._0_4_ = SUB84(ppppppplStack_230,0);
              stack0xffffffffffffff14 = (int)((ulong)ppppppplStack_230 >> 0x20);
              uStack_d8 = (undefined7)CONCAT71(uStack_217,uStack_218);
              uStack_d1 = (undefined1)((uint7)uStack_217 >> 0x30);
              uStack_e0 = (undefined7)CONCAT71(uStack_21f,uStack_220);
              uStack_d9 = (undefined1)((uint7)uStack_21f >> 0x30);
              uStack_d0 = (undefined7)CONCAT71(uStack_20f,uStack_210);
              uStack_c9 = (undefined1)((uint7)uStack_20f >> 0x30);
            }
            lVar20 = CONCAT44(stack0xffffffffffffff14,auStack_f0._0_4_);
            if (lVar20 != 2) {
              lVar19 = CONCAT17(uStack_e1,CONCAT61(uStack_e7,uStack_e8));
              if ((auStack_f0._0_4_ & 1) != 0) {
                lVar19 = lVar19 + (*(long *)(CONCAT17(uStack_d9,uStack_e0) + 0x10) - 1U &
                                  0xfffffffffffffff0) + 0x10;
              }
              (**(code **)(CONCAT17(uStack_d9,uStack_e0) + 0x60))(lVar19,&uStack_d8);
            }
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (lVar19 = CONCAT17(uStack_c9,uStack_d0), lVar19 != 0)) {
              auStack_290 = *(undefined1 (*) [8])(lVar19 + 0x10);
              uStack_288 = *(long ********)(lVar19 + 0x18);
              ppppppplStack_230 = (long *******)auStack_290;
              ppppppplStack_228 = (long *******)&DAT_100c7b3a0;
              FUN_1011d7d74(auStack_f0,&UNK_108cd3ef5,0x15,s__>___108ab67cd,&ppppppplStack_230);
            }
            ppppppplVar21 = uStack_5d8;
            auStack_290 = (undefined1  [8])uStack_5d8;
            if ((((long ******)((ulong)uStack_5d8 & 0xffffffff) < ppppppplStack_5e0[2]) &&
                (pppppplVar33 = ppppppplStack_5e0[1] + ((ulong)uStack_5d8 & 0xffffffff) * 0x28,
                *pppppplVar33 != (long *****)0x2)) &&
               (*(int *)((long)pppppplVar33 + 0x124) == uStack_5d8._4_4_)) {
              __ZN2h25proto7streams6stream6Stream9send_data17hae3f44cdd2ae21cfE
                        (pppppplVar33,uStack_294,*(undefined8 *)(param_1 + 8));
              if (!SCARRY4(*(int *)(param_1 + 4),uStack_294)) {
                *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + uStack_294;
              }
              if (lVar20 != 2) {
                lVar20 = CONCAT17(uStack_e1,CONCAT61(uStack_e7,uStack_e8));
                if ((auStack_f0._0_4_ & 1) != 0) {
                  lVar20 = lVar20 + (*(long *)(CONCAT17(uStack_d9,uStack_e0) + 0x10) - 1U &
                                    0xfffffffffffffff0) + 0x10;
                }
                (**(code **)(CONCAT17(uStack_d9,uStack_e0) + 0x68))(lVar20,&uStack_d8);
              }
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (lVar20 = CONCAT17(uStack_c9,uStack_d0), lVar20 != 0)) {
                auStack_290 = *(undefined1 (*) [8])(lVar20 + 0x10);
                uStack_288 = *(long ********)(lVar20 + 0x18);
                ppppppplStack_230 = (long *******)auStack_290;
                ppppppplStack_228 = (long *******)&DAT_100c7b3a0;
                FUN_1011d7d74(auStack_f0,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&ppppppplStack_230);
              }
              FUN_100dddd8c(auStack_f0);
              if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
                  ((bRam000000010b632318 - 1 < 2 ||
                   ((bRam000000010b632318 != 0 &&
                    (cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                        (&
                                         __ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h407c8283bcdf559aE
                                        ), cVar16 != '\0')))))) &&
                 (iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                     (
                                     ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h407c8283bcdf559aE
                                     ), iVar17 != 0)) {
                ppppppplStack_230 = (long *******)0x1;
                ppppppplStack_228 = (long *******)0x8;
                uStack_220 = 0;
                uStack_21f = 0;
                uStack_218 = (undefined1)
                             (
                             ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h407c8283bcdf559aE
                             + 0x30);
                uStack_217 = (undefined7)
                             ((ulong)(
                                     ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h407c8283bcdf559aE
                                     + 0x30) >> 8);
                __ZN7tracing4span4Span3new17hfb1cb23559a61740E
                          (auStack_f0,
                           ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h407c8283bcdf559aE
                           ,&ppppppplStack_230);
              }
              else {
                ppppppplStack_230 = (long *******)0x2;
                uStack_210 = (undefined1)
                             ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h407c8283bcdf559aE
                ;
                uStack_20f = (undefined7)
                             ((ulong)
                              ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h407c8283bcdf559aE
                             >> 8);
                if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
                  lStack_278 = ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h407c8283bcdf559aE
                               + 0x30;
                  auStack_290 = (undefined1  [8])0x1;
                  uStack_288 = (long *******)0x8;
                  uStack_280 = 0;
                  __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE
                            (&ppppppplStack_230,auStack_290);
                }
                uStack_e8 = SUB81(ppppppplStack_228,0);
                uStack_e7 = (undefined6)((ulong)ppppppplStack_228 >> 8);
                uStack_e1 = (undefined1)((ulong)ppppppplStack_228 >> 0x38);
                auStack_f0._0_4_ = SUB84(ppppppplStack_230,0);
                stack0xffffffffffffff14 = (int)((ulong)ppppppplStack_230 >> 0x20);
                uStack_d8 = (undefined7)CONCAT71(uStack_217,uStack_218);
                uStack_d1 = (undefined1)((uint7)uStack_217 >> 0x30);
                uStack_e0 = (undefined7)CONCAT71(uStack_21f,uStack_220);
                uStack_d9 = (undefined1)((uint7)uStack_21f >> 0x30);
                uStack_d0 = (undefined7)CONCAT71(uStack_20f,uStack_210);
                uStack_c9 = (undefined1)((uint7)uStack_20f >> 0x30);
              }
              lVar20 = CONCAT44(stack0xffffffffffffff14,auStack_f0._0_4_);
              if (lVar20 != 2) {
                lVar19 = CONCAT17(uStack_e1,CONCAT61(uStack_e7,uStack_e8));
                if ((auStack_f0._0_4_ & 1) != 0) {
                  lVar19 = lVar19 + (*(long *)(CONCAT17(uStack_d9,uStack_e0) + 0x10) - 1U &
                                    0xfffffffffffffff0) + 0x10;
                }
                (**(code **)(CONCAT17(uStack_d9,uStack_e0) + 0x60))(lVar19,&uStack_d8);
              }
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (lVar19 = CONCAT17(uStack_c9,uStack_d0), lVar19 != 0)) {
                auStack_290 = *(undefined1 (*) [8])(lVar19 + 0x10);
                uStack_288 = *(long ********)(lVar19 + 0x18);
                ppppppplStack_230 = (long *******)auStack_290;
                ppppppplStack_228 = (long *******)&DAT_100c7b3a0;
                FUN_1011d7d74(auStack_f0,&UNK_108cd3ef5,0x15,s__>___108ab67cd,&ppppppplStack_230);
              }
              __ZN2h25proto7streams12flow_control11FlowControl9send_data17h0a8b902c67107cdeE
                        (param_1,uStack_294);
              bVar12 = uStack_308._6_1_;
              puVar36 = (undefined *)(ulong)uStack_294;
              bVar15 = uStack_308._6_1_;
              if (ppppppplVar8 != (long *******)0x2) {
                puVar26 = puStack_318;
                if (ppppppplVar8 == (long *******)0x1) {
                  puVar26 = (undefined *)0x0;
                  if (puStack_318 <= puStack_320) {
                    puVar26 = puStack_320 + -(long)puStack_318;
                  }
                }
                if (puVar36 < puVar26) {
                  bVar15 = uStack_308._6_1_ & 0xfe;
                  uStack_308 = (undefined *)((ulong)uStack_308 & 0xfffeffffffffffff);
                }
              }
              if (lVar20 != 2) {
                lVar20 = CONCAT17(uStack_e1,CONCAT61(uStack_e7,uStack_e8));
                if ((auStack_f0._0_4_ & 1) != 0) {
                  lVar20 = lVar20 + (*(long *)(CONCAT17(uStack_d9,uStack_e0) + 0x10) - 1U &
                                    0xfffffffffffffff0) + 0x10;
                }
                (**(code **)(CONCAT17(uStack_d9,uStack_e0) + 0x68))(lVar20,&uStack_d8);
              }
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (lVar20 = CONCAT17(uStack_c9,uStack_d0), lVar20 != 0)) {
                auStack_290 = *(undefined1 (*) [8])(lVar20 + 0x10);
                uStack_288 = *(long ********)(lVar20 + 0x18);
                ppppppplStack_230 = (long *******)auStack_290;
                ppppppplStack_228 = (long *******)&DAT_100c7b3a0;
                FUN_1011d7d74(auStack_f0,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&ppppppplStack_230);
              }
              FUN_100dddd8c(auStack_f0);
              bStack_540 = bVar12 & 1;
              auStack_580 = (undefined1  [8])((ulong)auStack_580 & 0xffffffffffffff00);
              uVar11 = auStack_458._0_4_;
              ppppppplStack_578 = ppppppplStack_330;
              puStack_570 = uStack_328;
              puStack_568 = puStack_320;
              puStack_560 = puStack_318;
              uStack_558 = uStack_310;
              puStack_550 = puVar36;
              ppppppplStack_548 = ppppppplVar21;
              uStack_538 = (undefined4)uStack_308;
              uStack_534 = uStack_308._4_2_;
              bStack_532 = bVar15;
              goto joined_r0x000100c2317c;
            }
            ppppppplStack_228 = (long *******)&DAT_10571bc44;
            ppppppplStack_230 = (long *******)(auStack_290 + 4);
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__dangling_store_key_for_stream_i_108b15a2c,&ppppppplStack_230,
                       &UNK_10b3a3cc0);
            goto LAB_100c23e80;
          }
          if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
             (((bRam000000010b632300 - 1 < 2 ||
               ((bRam000000010b632300 != 0 &&
                (cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h3251e3b847363517E
                                    ), cVar16 != '\0')))) &&
              (iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                  (
                                  ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h3251e3b847363517E
                                  ), iVar17 != 0)))) {
            ppppppplStack_90 = (long *******)&UNK_108cb080b;
            ppppppplStack_88 = (long *******)0x29;
            ppppppplStack_258 = (long *******)&ppppppplStack_90;
            puStack_250 = &UNK_10b208fd0;
            auStack_f0._0_4_ = 1;
            stack0xffffffffffffff14 = 0;
            uStack_e8 = SUB81(&ppppppplStack_258,0);
            uStack_e7 = (undefined6)((ulong)&ppppppplStack_258 >> 8);
            uStack_e1 = (undefined1)((ulong)&ppppppplStack_258 >> 0x38);
            uStack_e0 = 1;
            uStack_d9 = 0;
            uStack_d8 = (undefined7)
                        (
                        ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h3251e3b847363517E
                        + 0x30);
            uStack_d1 = (undefined1)
                        ((ulong)(
                                ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h3251e3b847363517E
                                + 0x30) >> 0x38);
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                      (___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h3251e3b847363517E
                       ,auStack_f0);
            lVar20 = 
            ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h3251e3b847363517E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              uStack_288 = *(long ********)
                            (
                            ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h3251e3b847363517E
                            + 0x20);
              uStack_280 = *(undefined8 *)
                            (
                            ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h3251e3b847363517E
                            + 0x28);
              auStack_290 = (undefined1  [8])0x5;
              puVar36 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar36 = &UNK_10b3c24c8;
              }
              puVar26 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar26 = &UNK_109adfc03;
              }
              iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,auStack_290);
              if (iVar17 != 0) {
                lVar19 = *(long *)(lVar20 + 0x60);
                ppppppplStack_228 = *(long ********)(lVar20 + 0x50);
                ppppppplStack_230 = (long *******)0x1;
                if (ppppppplStack_228 == (long *******)0x0) {
                  ppppppplStack_230 = (long *******)0x2;
                }
                uStack_1e8 = *(undefined **)(lVar20 + 8);
                ppppppplStack_80 = (long *******)auStack_f0;
                puStack_78 = (undefined *)CONCAT71(puStack_78._1_7_,1);
                ppppppplStack_248 = (long *******)&ppppppplStack_80;
                ppppppplStack_240 = (long *******)&DAT_1061c2098;
                uStack_218 = 1;
                if (lVar19 == 0) {
                  uStack_218 = 2;
                }
                uStack_1f8 = SUB81(uStack_288,0);
                uStack_1f7 = (undefined7)((ulong)uStack_288 >> 8);
                uStack_200 = auStack_290[0];
                uStack_1ff = auStack_290._1_7_;
                uStack_1f0 = (undefined1)uStack_280;
                uStack_1ef = (undefined7)((ulong)uStack_280 >> 8);
                pppppplStack_1e0 = (long ******)s__108b39f4f;
                ppppppplStack_1d8 = (long *******)&ppppppplStack_248;
                uStack_220 = (undefined1)*(undefined8 *)(lVar20 + 0x58);
                uStack_21f = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x58) >> 8);
                uStack_217 = 0;
                uStack_210 = (undefined1)lVar19;
                uStack_20f = (undefined7)((ulong)lVar19 >> 8);
                uStack_208 = (undefined1)*(undefined8 *)(lVar20 + 0x68);
                uStack_207 = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x68) >> 8);
                (**(code **)(puVar36 + 0x20))(puVar26,&ppppppplStack_230);
              }
            }
          }
          else {
            lVar20 = 
            ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h3251e3b847363517E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              uStack_2a8 = *(undefined8 *)
                            (
                            ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h3251e3b847363517E
                            + 0x20);
              uStack_2a0 = *(undefined8 *)
                            (
                            ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h3251e3b847363517E
                            + 0x28);
              uStack_2b0 = 5;
              puVar36 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar36 = &UNK_10b3c24c8;
              }
              puVar26 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar26 = &UNK_109adfc03;
              }
              iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,&uStack_2b0);
              if (iVar17 != 0) {
                ppppppplStack_80 = (long *******)&UNK_108cb080b;
                puStack_78 = (undefined *)0x29;
                ppppppplStack_90 = (long *******)&ppppppplStack_80;
                ppppppplStack_88 = (long *******)&UNK_10b208fd0;
                auStack_f0._0_4_ = 1;
                stack0xffffffffffffff14 = 0;
                uStack_e8 = SUB81(&ppppppplStack_90,0);
                uStack_e7 = (undefined6)((ulong)&ppppppplStack_90 >> 8);
                uStack_e1 = (undefined1)((ulong)&ppppppplStack_90 >> 0x38);
                uStack_e0 = 1;
                uStack_d9 = 0;
                uStack_d8 = (undefined7)
                            (
                            ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h3251e3b847363517E
                            + 0x30);
                uStack_d1 = (undefined1)
                            ((ulong)(
                                    ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17h3251e3b847363517E
                                    + 0x30) >> 0x38);
                uStack_1f8 = (undefined1)uStack_2a8;
                uStack_1f7 = (undefined7)((ulong)uStack_2a8 >> 8);
                uStack_200 = (undefined1)uStack_2b0;
                uStack_1ff = (undefined7)((ulong)uStack_2b0 >> 8);
                uStack_1f0 = (undefined1)uStack_2a0;
                uStack_1ef = (undefined7)((ulong)uStack_2a0 >> 8);
                lVar19 = *(long *)(lVar20 + 0x60);
                ppppppplStack_228 = *(long ********)(lVar20 + 0x50);
                ppppppplStack_230 = (long *******)0x1;
                if (ppppppplStack_228 == (long *******)0x0) {
                  ppppppplStack_230 = (long *******)0x2;
                }
                uStack_1e8 = *(undefined **)(lVar20 + 8);
                ppppppplStack_248 = (long *******)auStack_f0;
                ppppppplStack_240 = (long *******)CONCAT71(ppppppplStack_240._1_7_,1);
                auStack_290 = (undefined1  [8])&ppppppplStack_248;
                uStack_288 = (long *******)&DAT_1061c2098;
                uStack_218 = 1;
                if (lVar19 == 0) {
                  uStack_218 = 2;
                }
                pppppplStack_1e0 = (long ******)s__108b39f4f;
                ppppppplStack_1d8 = (long *******)auStack_290;
                uStack_220 = (undefined1)*(undefined8 *)(lVar20 + 0x58);
                uStack_21f = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x58) >> 8);
                uStack_217 = 0;
                uStack_210 = (undefined1)lVar19;
                uStack_20f = (undefined7)((ulong)lVar19 >> 8);
                uStack_208 = (undefined1)*(undefined8 *)(lVar20 + 0x68);
                uStack_207 = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x68) >> 8);
                (**(code **)(puVar36 + 0x20))(puVar26,&ppppppplStack_230);
              }
            }
          }
          auStack_f0._0_4_ = (uint)uStack_5d8;
          stack0xffffffffffffff14 = uStack_5d8._4_4_;
          if ((((long ******)((ulong)uStack_5d8 & 0xffffffff) < ppppppplStack_5e0[2]) &&
              (pppppplVar33 = ppppppplStack_5e0[1] + ((ulong)uStack_5d8 & 0xffffffff) * 0x28,
              *pppppplVar33 != (long *****)0x2)) &&
             (*(int *)((long)pppppplVar33 + 0x124) == uStack_5d8._4_4_)) {
            uStack_e1 = SUB81(uStack_328,0);
            uStack_e0 = (undefined7)((ulong)uStack_328 >> 8);
            auStack_f0._4_3_ = (undefined3)((ulong)uStack_5d8 >> 0x20);
            uStack_e9 = SUB81(ppppppplStack_330,0);
            uStack_e8 = (undefined1)((ulong)ppppppplStack_330 >> 8);
            uStack_e7 = (undefined6)((ulong)ppppppplStack_330 >> 0x10);
            uStack_d1 = SUB81(puStack_318,0);
            uStack_d0 = (undefined7)((ulong)puStack_318 >> 8);
            uStack_d9 = SUB81(puStack_320,0);
            uStack_d8 = (undefined7)((ulong)puStack_320 >> 8);
            uStack_c1 = SUB81(uStack_308,0);
            uStack_c0 = (undefined7)((ulong)uStack_308 >> 8);
            uStack_c9 = (undefined1)uStack_310;
            uStack_c8 = (undefined7)((ulong)uStack_310 >> 8);
            uStack_217 = (undefined7)((ulong)ppppppplStack_330 >> 8);
            uStack_210 = uStack_e1;
            uStack_21f = (undefined7)CONCAT44(stack0xffffffffffffff14,(uint)uStack_5d8);
            uStack_218 = uStack_e9;
            uStack_220 = 0;
            uStack_207 = uStack_d8;
            uStack_200 = uStack_d1;
            uStack_20f = uStack_e0;
            uStack_208 = uStack_d9;
            uStack_1f7 = uStack_c8;
            uStack_1ff = uStack_d0;
            uStack_1f8 = uStack_c9;
            ppppppplStack_230 = (long *******)0x0;
            ppppplVar34 = *(long ******)(param_3 + 0x20);
            uStack_1f0 = uStack_c1;
            uStack_1ef = uStack_c0;
            FUN_100f13734(param_3,ppppplVar34,&ppppppplStack_230);
LAB_100c226ac:
            uVar4 = auStack_458._0_4_;
            if (*(int *)pppppplVar33 == 1) {
              if ((ppppplVar34 < *(long ******)(param_3 + 0x10)) &&
                 (plVar24 = (long *)(*(long *)(param_3 + 8) + (long)ppppplVar34 * 0x138),
                 *plVar24 != 2)) {
                ppppplVar27 = pppppplVar33[1];
                *plVar24 = 1;
                plVar24[1] = (long)ppppplVar27;
                pppppplVar33[1] = ppppplVar34;
                goto joined_r0x000100c2270c;
              }
              __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5715,0xb,&UNK_10b233800);
              goto LAB_100c23e80;
            }
            *pppppplVar33 = (long *****)0x1;
            pppppplVar33[1] = ppppplVar34;
            pppppplVar33[2] = ppppplVar34;
            goto joined_r0x000100c2270c;
          }
          puVar36 = &UNK_10b3a3cc0;
        }
        else {
          if (ppppppplStack_450 != (long *******)0x1) {
            puStack_2f0 = (undefined *)0x0;
            goto joined_r0x000100c21d48;
          }
          puStack_2f0 = (undefined *)0x0;
          if (puStack_438 <= puStack_440) {
            puStack_2f0 = puStack_440 + -(long)puStack_438;
          }
          if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) goto LAB_100c21d68;
LAB_100c22010:
          lVar20 = 
          ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hb6297e17ecf2f062E;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') ||
             (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5)) goto LAB_100c22248;
          ppppppplStack_2c8 =
               *(long ********)
                (
                ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hb6297e17ecf2f062E
                + 0x20);
          uStack_2c0 = *(undefined8 *)
                        (
                        ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hb6297e17ecf2f062E
                        + 0x28);
          uStack_2d0 = 5;
          puVar36 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar36 = &UNK_10b3c24c8;
          }
          puVar26 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar26 = &UNK_109adfc03;
          }
          iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,&uStack_2d0);
          if (iVar17 == 0) goto LAB_100c22248;
          ppppppplStack_90 = (long *******)&UNK_108cc3966;
          ppppppplStack_88 = (long *******)0x15;
          uStack_2d4 = CONCAT31(uStack_2d4._1_3_,uStack_308._6_1_) & 0xffffff01;
          puStack_2b8 = (uint *)auStack_2f4;
          auStack_f0._0_4_ = (uint)uStack_5d8;
          stack0xffffffffffffff14 = uStack_5d8._4_4_;
          if ((((long ******)((ulong)uStack_5d8 & 0xffffffff) < ppppppplStack_5e0[2]) &&
              (pppppplVar33 = ppppppplStack_5e0[1] + ((ulong)uStack_5d8 & 0xffffffff) * 0x28,
              *pppppplVar33 != (long *****)0x2)) &&
             (*(int *)((long)pppppplVar33 + 0x124) == uStack_5d8._4_4_)) {
            pppppplStack_2e0 =
                 (long ******)
                 CONCAT44(pppppplStack_2e0._4_4_,*(undefined4 *)((long)pppppplVar33 + 0x84));
            ppppppplStack_258 = &pppppplStack_2e0;
            if ((*pppppplVar33 != (long *****)0x2) &&
               (*(int *)((long)pppppplVar33 + 0x124) == uStack_5d8._4_4_)) {
              lStack_278 = ___ZN2h25proto7streams10prioritize10Prioritize9pop_frame10__CALLSITE17hb6297e17ecf2f062E
                           + 0x30;
              pppppplStack_1e0 = pppppplVar33 + 0x25;
              pppppplStack_1d0 = pppppplVar33 + 0x11;
              ppppppplStack_230 = (long *******)&ppppppplStack_90;
              ppppppplStack_228 = (long *******)&UNK_10b208fd0;
              uStack_220 = SUB81(&puStack_2f0,0);
              uStack_21f = (undefined7)((ulong)&puStack_2f0 >> 8);
              uStack_218 = 0;
              uStack_217 = 0x10b215f;
              uStack_210 = SUB81(&uStack_2d4,0);
              uStack_20f = (undefined7)((ulong)&uStack_2d4 >> 8);
              uStack_208 = 0x68;
              uStack_207 = 0x10b2162;
              uStack_200 = SUB81(&puStack_2b8,0);
              uStack_1ff = (undefined7)((ulong)&puStack_2b8 >> 8);
              uStack_1f8 = 8;
              uStack_1f7 = 0x10b2337;
              uStack_1f0 = SUB81(&ppppppplStack_258,0);
              uStack_1ef = (undefined7)((ulong)&ppppppplStack_258 >> 8);
              uStack_1e8 = &UNK_10b233708;
              ppppppplStack_1d8 = (long *******)&UNK_10b223390;
              puStack_1c8 = &UNK_10b215f00;
              auStack_290 = (undefined1  [8])0x1;
              uStack_288 = (long *******)&ppppppplStack_230;
              uStack_280 = 7;
              ppppppplStack_b8 = ppppppplStack_2c8;
              uStack_c0 = (undefined7)uStack_2d0;
              uStack_b9 = (undefined1)((ulong)uStack_2d0 >> 0x38);
              uStack_b0 = uStack_2c0;
              lVar19 = *(long *)(lVar20 + 0x60);
              lVar5 = *(long *)(lVar20 + 0x50);
              auStack_f0._0_4_ = 1;
              if (lVar5 == 0) {
                auStack_f0._0_4_ = 2;
              }
              uStack_a8 = *(undefined4 *)(lVar20 + 8);
              uStack_a4 = *(undefined4 *)(lVar20 + 0xc);
              ppppppplStack_80 = (long *******)auStack_290;
              puStack_78 = (undefined *)CONCAT71(puStack_78._1_7_,1);
              ppppppplStack_248 = (long *******)&ppppppplStack_80;
              ppppppplStack_240 = (long *******)&DAT_1061c2098;
              uVar35 = 1;
              if (lVar19 == 0) {
                uVar35 = 2;
              }
              ppppppplStack_98 = (long *******)&ppppppplStack_248;
              pcStack_a0 = s__108b39f4f;
              unique0x100039d8 = 0;
              uStack_e8 = (undefined1)lVar5;
              uStack_e7 = (undefined6)((ulong)lVar5 >> 8);
              uStack_e1 = (undefined1)((ulong)lVar5 >> 0x38);
              uStack_e0 = (undefined7)*(undefined8 *)(lVar20 + 0x58);
              uStack_d9 = (undefined1)((ulong)*(undefined8 *)(lVar20 + 0x58) >> 0x38);
              uStack_d8 = (undefined7)uVar35;
              uStack_d1 = 0;
              uStack_d0 = (undefined7)lVar19;
              uStack_c9 = (undefined1)((ulong)lVar19 >> 0x38);
              uStack_c8 = (undefined7)*(undefined8 *)(lVar20 + 0x68);
              uStack_c1 = (undefined1)((ulong)*(undefined8 *)(lVar20 + 0x68) >> 0x38);
              (**(code **)(puVar36 + 0x20))(puVar26,auStack_f0);
              goto LAB_100c22248;
            }
          }
LAB_100c23c68:
          puVar36 = &UNK_10b3a3ca8;
        }
        ppppppplStack_228 = (long *******)&DAT_10571bc44;
        ppppppplStack_230 = ppppppplVar3;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s__dangling_store_key_for_stream_i_108b15a2c,&ppppppplStack_230,puVar36);
        goto LAB_100c23e80;
      }
LAB_100c22764:
      cVar16 = '\t';
LAB_100c236a0:
      if (ppppppplStack_610 != (long *******)0x2) {
        ppppppplVar21 = ppppppplStack_608;
        if (((ulong)ppppppplStack_610 & 1) != 0) {
          ppppppplVar21 =
               (long *******)
               ((long)ppppppplStack_608 +
               (*(long *)(lStack_600 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
        }
        (**(code **)(lStack_600 + 0x68))(ppppppplVar21,&uStack_5f8);
      }
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_5f0 != 0))
      {
        auStack_458 = *(undefined1 (*) [8])(lStack_5f0 + 0x10);
        ppppppplStack_450 = *(long ********)(lStack_5f0 + 0x18);
        ppppppplStack_230 = (long *******)auStack_458;
        ppppppplStack_228 = (long *******)&DAT_100c7b3a0;
        FUN_1011d7d74(&ppppppplStack_610,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&ppppppplStack_230);
      }
      FUN_100dddd8c(&ppppppplStack_610);
      if (cVar16 != '\t') {
        auStack_458[0] = cVar16;
        _memcpy(puVar28,&pppppplStack_750,0x127);
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
          if (1 < bRam000000010b632210 - 1) {
            if (bRam000000010b632210 != 0) {
              cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h7fbba2040f3ae327E
                                 );
              if (cVar16 != '\0') goto LAB_100c23924;
            }
            goto LAB_100c2378c;
          }
LAB_100c23924:
          iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h7fbba2040f3ae327E
                             );
          if (iVar17 == 0) goto LAB_100c2378c;
          puStack_568 = (undefined *)
                        (
                        ___ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h7fbba2040f3ae327E
                        + 0x30);
          ppppppplStack_330 = (long *******)&UNK_108cc3949;
          uStack_328 = (undefined8 *)0xf;
          ppppppplStack_5d0 = (long *******)auStack_458;
          ppppppplStack_230 = (long *******)&ppppppplStack_330;
          ppppppplStack_228 = (long *******)&UNK_10b208fd0;
          uStack_220 = SUB81(&ppppppplStack_5d0,0);
          uStack_21f = (undefined7)((ulong)&ppppppplStack_5d0 >> 8);
          uStack_218 = 0xb8;
          uStack_217 = 0x10b2333;
          auStack_580 = (undefined1  [8])0x1;
          ppppppplStack_578 = (long *******)&ppppppplStack_230;
          puStack_570 = (undefined8 *)0x2;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h7fbba2040f3ae327E
                     ,auStack_580);
          lVar20 = 
          ___ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h7fbba2040f3ae327E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uVar35 = *(undefined8 *)
                      (
                      ___ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h7fbba2040f3ae327E
                      + 0x20);
            auStack_f0._0_4_ = 5;
            stack0xffffffffffffff14 = 0;
            uStack_e8 = (undefined1)uVar35;
            uStack_e7 = (undefined6)((ulong)uVar35 >> 8);
            uStack_e1 = (undefined1)((ulong)uVar35 >> 0x38);
            uStack_e0 = (undefined7)
                        *(undefined8 *)
                         (
                         ___ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h7fbba2040f3ae327E
                         + 0x28);
            uStack_d9 = (undefined1)
                        ((ulong)*(undefined8 *)
                                 (
                                 ___ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h7fbba2040f3ae327E
                                 + 0x28) >> 0x38);
            puVar36 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar36 = &UNK_10b3c24c8;
            }
            puVar26 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar26 = &UNK_109adfc03;
            }
            iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,auStack_f0);
            if (iVar17 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar20,puVar26,puVar36,auStack_f0,auStack_580);
            }
          }
        }
        else {
LAB_100c2378c:
          lVar20 = 
          ___ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h7fbba2040f3ae327E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uStack_620 = *(undefined8 *)
                          (
                          ___ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h7fbba2040f3ae327E
                          + 0x20);
            uStack_618 = *(undefined8 *)
                          (
                          ___ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h7fbba2040f3ae327E
                          + 0x28);
            uStack_628 = 5;
            puVar36 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar36 = &UNK_10b3c24c8;
            }
            puVar26 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar26 = &UNK_109adfc03;
            }
            iVar17 = (**(code **)(puVar36 + 0x18))(puVar26,&uStack_628);
            if (iVar17 != 0) {
              ppppppplStack_610 = (long *******)&UNK_108cc3949;
              ppppppplStack_608 = (long *******)0xf;
              auStack_290 = (undefined1  [8])auStack_458;
              auStack_580 = (undefined1  [8])&ppppppplStack_610;
              ppppppplStack_578 = (long *******)&UNK_10b208fd0;
              puStack_570 = (undefined8 *)auStack_290;
              puStack_568 = &UNK_10b2333b8;
              auStack_f0._0_4_ = 1;
              stack0xffffffffffffff14 = 0;
              uStack_e8 = SUB81(auStack_580,0);
              uStack_e7 = (undefined6)((ulong)auStack_580 >> 8);
              uStack_e1 = (undefined1)((ulong)auStack_580 >> 0x38);
              uStack_e0 = 2;
              uStack_d9 = 0;
              uStack_d8 = (undefined7)
                          (
                          ___ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h7fbba2040f3ae327E
                          + 0x30);
              uStack_d1 = (undefined1)
                          ((ulong)(
                                  ___ZN2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h7fbba2040f3ae327E
                                  + 0x30) >> 0x38);
              uStack_1f8 = (undefined1)uStack_620;
              uStack_1f7 = (undefined7)((ulong)uStack_620 >> 8);
              uStack_200 = (undefined1)uStack_628;
              uStack_1ff = (undefined7)((ulong)uStack_628 >> 8);
              uStack_1f0 = (undefined1)uStack_618;
              uStack_1ef = (undefined7)((ulong)uStack_618 >> 8);
              lVar19 = *(long *)(lVar20 + 0x60);
              ppppppplStack_228 = *(long ********)(lVar20 + 0x50);
              ppppppplStack_230 = (long *******)0x1;
              if (ppppppplStack_228 == (long *******)0x0) {
                ppppppplStack_230 = (long *******)0x2;
              }
              uStack_1e8 = *(undefined **)(lVar20 + 8);
              ppppppplStack_5d0 = (long *******)auStack_f0;
              ppppppplStack_5c8 = (long *******)CONCAT71(ppppppplStack_5c8._1_7_,1);
              ppppppplStack_330 = (long *******)&ppppppplStack_5d0;
              uStack_328 = (undefined8 *)&DAT_1061c2098;
              uStack_218 = 1;
              if (lVar19 == 0) {
                uStack_218 = 2;
              }
              pppppplStack_1e0 = (long ******)s__108b39f4f;
              ppppppplStack_1d8 = (long *******)&ppppppplStack_330;
              uStack_220 = (undefined1)*(undefined8 *)(lVar20 + 0x58);
              uStack_21f = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x58) >> 8);
              uStack_217 = 0;
              uStack_210 = (undefined1)lVar19;
              uStack_20f = (undefined7)((ulong)lVar19 >> 8);
              uStack_208 = (undefined1)*(undefined8 *)(lVar20 + 0x68);
              uStack_207 = (undefined7)((ulong)*(undefined8 *)(lVar20 + 0x68) >> 8);
              (**(code **)(puVar36 + 0x20))(puVar26,&ppppppplStack_230);
            }
          }
        }
        if (auStack_458[0] == '\0') {
          *(undefined4 *)(param_1 + 0x4c) = 1;
          *(long ********)(param_1 + 0x50) = ppppppplStack_420;
        }
        _memcpy(&ppppppplStack_230,auStack_458,0x128);
        cVar16 = FUN_100c0fe88(param_6 + 0x40,&ppppppplStack_230);
        if (cVar16 != '\r') {
          ppppppplStack_230 = (long *******)CONCAT71(ppppppplStack_230._1_7_,cVar16);
          func_0x000108a07a3c(&UNK_108cc3950,0xd,&ppppppplStack_230,&UNK_10b234fc0,&UNK_10b233698);
          ppppppplVar21 = _auStack_f0;
LAB_100c23c00:
          _auStack_f0 = ppppppplVar21;
          func_0x000108a07a20(&UNK_10b233728);
LAB_100c23e80:
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x100c23e84);
          (*pcVar14)();
        }
        if ((*(long *)(param_6 + 0xf8) != 4) ||
           ((ulong)(*(long *)(param_6 + 0x150) - *(long *)(param_6 + 0x148)) <
            *(ulong *)(param_6 + 0x170))) {
          auVar37 = FUN_100c13758(param_6,param_2);
          if ((auVar37._0_8_ & 1) != 0) goto LAB_100c201ac;
          if (auVar37._8_8_ != 0) break;
          if ((*(long *)(param_6 + 0xf8) != 4) ||
             ((ulong)(*(long *)(param_6 + 0x150) - *(long *)(param_6 + 0x148)) <
              *(ulong *)(param_6 + 0x170))) goto LAB_100c201ac;
        }
        FUN_100c24010(param_1,param_3,param_4,param_6);
        goto LAB_100c20500;
      }
      auVar37 = FUN_100c13758(param_6,param_2);
      if ((auVar37._0_8_ & 1) != 0) goto LAB_100c201ac;
      if (auVar37._8_8_ != 0) break;
      uVar22 = FUN_100c24010(param_1,param_3,param_4,param_6);
    } while ((uVar22 & 1) != 0);
LAB_100c201b4:
    uVar35 = 0;
  }
  else {
    auVar37 = FUN_100c13758(param_6,param_2);
    if ((auVar37._0_8_ & 1) == 0) {
      if (auVar37._8_8_ != 0) goto LAB_100c201b4;
      if ((*(long *)(param_6 + 0xf8) == 4) &&
         (*(ulong *)(param_6 + 0x170) <=
          (ulong)(*(long *)(param_6 + 0x150) - *(long *)(param_6 + 0x148)))) goto LAB_100c201fc;
    }
LAB_100c201ac:
    uVar35 = 1;
  }
  return uVar35;
}

