
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d8c3dc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined ***pppuStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char *pcStack_70;
  undefined8 ***pppuStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_58;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (uVar6 = __ZN10tokio_util4sync18cancellation_token17CancellationToken12is_cancelled17hfcad7db0dfd3f315E
                        (param_1 + 0x48), (uVar6 & 1) == 0)) {
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
       (((bRam000000010b63a310 - 1 < 2 ||
         ((bRam000000010b63a310 != 0 &&
          (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN84__LT_rmcp__service__RunningService_LT_R_C_S_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop10__CALLSITE17h8f935333a14de0e0E
                             ), cVar4 != '\0')))) &&
        (iVar5 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN84__LT_rmcp__service__RunningService_LT_R_C_S_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop10__CALLSITE17h8f935333a14de0e0E
                           ), iVar5 != 0)))) {
      lStack_a8 = ___ZN84__LT_rmcp__service__RunningService_LT_R_C_S_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop10__CALLSITE17h8f935333a14de0e0E
                  + 0x30;
      puStack_118 = (undefined8 *)&UNK_108cd4cf4;
      uStack_110 = 0x141;
      ppuStack_50 = &puStack_118;
      puStack_48 = &UNK_10b208fd0;
      pppuStack_b8 = &ppuStack_50;
      uStack_c0 = 1;
      uStack_b0 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN84__LT_rmcp__service__RunningService_LT_R_C_S_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop10__CALLSITE17h8f935333a14de0e0E
                 ,&uStack_c0);
      lVar3 = 
      ___ZN84__LT_rmcp__service__RunningService_LT_R_C_S_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop10__CALLSITE17h8f935333a14de0e0E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppuStack_f8 = *(undefined ****)
                        (
                        ___ZN84__LT_rmcp__service__RunningService_LT_R_C_S_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop10__CALLSITE17h8f935333a14de0e0E
                        + 0x20);
        uStack_f0 = *(undefined8 *)
                     (
                     ___ZN84__LT_rmcp__service__RunningService_LT_R_C_S_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop10__CALLSITE17h8f935333a14de0e0E
                     + 0x28);
        uStack_100 = 4;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_100);
        if (iVar5 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar3,puVar2,puVar1,&uStack_100,&uStack_c0);
        }
      }
    }
    else {
      lVar3 = 
      ___ZN84__LT_rmcp__service__RunningService_LT_R_C_S_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop10__CALLSITE17h8f935333a14de0e0E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_110 = *(undefined8 *)
                      (
                      ___ZN84__LT_rmcp__service__RunningService_LT_R_C_S_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop10__CALLSITE17h8f935333a14de0e0E
                      + 0x20);
        uStack_108 = *(undefined8 *)
                      (
                      ___ZN84__LT_rmcp__service__RunningService_LT_R_C_S_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop10__CALLSITE17h8f935333a14de0e0E
                      + 0x28);
        puStack_118 = (undefined8 *)0x4;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&puStack_118);
        if (iVar5 != 0) {
          lStack_e8 = ___ZN84__LT_rmcp__service__RunningService_LT_R_C_S_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop10__CALLSITE17h8f935333a14de0e0E
                      + 0x30;
          puStack_d0 = &UNK_108cd4cf4;
          uStack_c8 = 0x141;
          ppuStack_e0 = &puStack_d0;
          puStack_d8 = &UNK_10b208fd0;
          pppuStack_f8 = &ppuStack_e0;
          uStack_100 = 1;
          uStack_f0 = 1;
          lStack_a0 = *(long *)(lVar3 + 0x60);
          uStack_98 = *(undefined8 *)(lVar3 + 0x68);
          pppuStack_b8 = *(undefined8 ****)(lVar3 + 0x50);
          uStack_b0 = *(undefined8 *)(lVar3 + 0x58);
          uStack_c0 = 1;
          if (pppuStack_b8 == (undefined8 ***)0x0) {
            uStack_c0 = 2;
          }
          uStack_78 = *(undefined4 *)(lVar3 + 8);
          uStack_74 = *(undefined4 *)(lVar3 + 0xc);
          puStack_60 = &uStack_100;
          uStack_58 = 1;
          ppuStack_50 = &puStack_60;
          puStack_48 = &DAT_1061c2098;
          lStack_a8 = 1;
          if (lStack_a0 == 0) {
            lStack_a8 = 2;
          }
          uStack_88 = uStack_110;
          puStack_90 = puStack_118;
          uStack_80 = uStack_108;
          pppuStack_68 = &ppuStack_50;
          pcStack_70 = s__108b39f4f;
          (**(code **)(puVar1 + 0x20))(puVar2,&uStack_c0);
        }
      }
    }
  }
  lVar3 = **(long **)(param_1 + 0x10);
  **(long **)(param_1 + 0x10) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h258abc3dab4742c3E(param_1 + 0x10);
  }
  func_0x000100e4bffc(param_1 + 0x18);
  plVar7 = *(long **)(param_1 + 0x50);
  if (plVar7 != (long *)0x0) {
    if (*plVar7 == 0xcc) {
      *plVar7 = 0x84;
    }
    else {
      (**(code **)(plVar7[2] + 0x20))();
    }
  }
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (param_1 + 0x48);
  lVar3 = **(long **)(param_1 + 0x48);
  **(long **)(param_1 + 0x48) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(param_1 + 0x48);
  }
  FUN_100e3bcd4(param_1 + 0x58);
  return;
}

