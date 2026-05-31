
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100817a24(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 **ppuStack_110;
  char ***pppcStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  char **ppcStack_f0;
  undefined *puStack_e8;
  char *pcStack_e0;
  undefined1 **ppuStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  char ***pppcStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char *pcStack_70;
  undefined8 ***pppuStack_68;
  undefined8 ***pppuStack_60;
  undefined *puStack_58;
  char ***pppcStack_50;
  undefined1 **ppuStack_48;
  
  auVar7 = func_0x000100814e84();
  uStack_130 = auVar7._8_8_;
  if (auVar7._0_8_ == 2) {
    uVar6 = 2;
  }
  else if ((auVar7._0_8_ & 1) == 0) {
    uVar6 = 0;
  }
  else {
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       (((bRam000000010b637410 - 1 < 2 ||
         ((bRam000000010b637410 != 0 &&
          (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_13force_io_read28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5936d8dab3f8dbaaE
                             ), cVar4 != '\0')))) &&
        (iVar5 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_13force_io_read28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5936d8dab3f8dbaaE
                           ), iVar5 != 0)))) {
      lStack_a8 = ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_13force_io_read28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5936d8dab3f8dbaaE
                  + 0x30;
      puStack_120 = &
                    __ZN58__LT_std__io__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17heced06dcf81bbc5fE
      ;
      ppuStack_48 = &puStack_128;
      pppcStack_50 = (char ***)s_force_io_read__io_error__108ac8b38;
      pppuStack_60 = &pppcStack_50;
      puStack_58 = &UNK_10b208fd0;
      pppcStack_b8 = (char ***)&pppuStack_60;
      uStack_c0 = 1;
      uStack_b0 = 1;
      puStack_128 = (undefined1 *)&uStack_130;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_13force_io_read28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5936d8dab3f8dbaaE
                 ,&uStack_c0);
      lVar3 = 
      ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_13force_io_read28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5936d8dab3f8dbaaE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppcStack_108 =
             *(char ****)
              (
              ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_13force_io_read28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5936d8dab3f8dbaaE
              + 0x20);
        uStack_100 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_13force_io_read28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5936d8dab3f8dbaaE
                      + 0x28);
        ppuStack_110 = (char ***)0x5;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&ppuStack_110);
        if (iVar5 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar3,puVar2,puVar1,&ppuStack_110,&uStack_c0);
        }
      }
    }
    else {
      lVar3 = 
      ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_13force_io_read28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5936d8dab3f8dbaaE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack_120 = *(undefined **)
                       (
                       ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_13force_io_read28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5936d8dab3f8dbaaE
                       + 0x20);
        uStack_118 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_13force_io_read28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5936d8dab3f8dbaaE
                      + 0x28);
        puStack_128 = (undefined1 *)0x5;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&puStack_128);
        if (iVar5 != 0) {
          lStack_f8 = ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_13force_io_read28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5936d8dab3f8dbaaE
                      + 0x30;
          puStack_c8 = &
                       __ZN58__LT_std__io__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17heced06dcf81bbc5fE
          ;
          ppuStack_d8 = &puStack_d0;
          pcStack_e0 = s_force_io_read__io_error__108ac8b38;
          ppcStack_f0 = &pcStack_e0;
          puStack_e8 = &UNK_10b208fd0;
          pppcStack_108 = &ppcStack_f0;
          ppuStack_110 = (char ***)0x1;
          uStack_100 = 1;
          lStack_a0 = *(long *)(lVar3 + 0x60);
          uStack_98 = *(undefined8 *)(lVar3 + 0x68);
          pppcStack_b8 = *(char ****)(lVar3 + 0x50);
          uStack_b0 = *(undefined8 *)(lVar3 + 0x58);
          uStack_c0 = 1;
          if ((undefined8 ****)pppcStack_b8 == (undefined8 ****)0x0) {
            uStack_c0 = 2;
          }
          uStack_78 = *(undefined4 *)(lVar3 + 8);
          uStack_74 = *(undefined4 *)(lVar3 + 0xc);
          pppuStack_60 = &ppuStack_110;
          puStack_58 = (undefined *)CONCAT71(puStack_58._1_7_,1);
          pppcStack_50 = (char ***)&pppuStack_60;
          ppuStack_48 = (undefined1 **)&DAT_1061c2098;
          lStack_a8 = 1;
          if (lStack_a0 == 0) {
            lStack_a8 = 2;
          }
          puStack_88 = puStack_120;
          puStack_90 = puStack_128;
          uStack_80 = uStack_118;
          pppuStack_68 = &pppcStack_50;
          pcStack_70 = s__108b39f4f;
          puStack_d0 = (undefined1 *)&uStack_130;
          (**(code **)(puVar1 + 0x20))(puVar2,&uStack_c0);
        }
      }
    }
    __ZN14rama_http_core5proto2h14conn5State5close17h37e265bec3f1ce41E(param_1 + 0xd8);
    uVar6 = 1;
  }
  return uVar6;
}

