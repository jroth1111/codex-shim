
void FUN_107c04638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_300 [31];
  undefined1 uStack_2e1;
  undefined8 uStack_2c0;
  undefined1 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined2 uStack_288;
  undefined6 uStack_286;
  undefined2 uStack_280;
  undefined8 uStack_27e;
  undefined8 *puStack_268;
  ulong uStack_260;
  ulong uStack_258;
  undefined1 *puStack_250;
  undefined8 *puStack_248;
  ulong uStack_240;
  undefined1 uStack_231;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined2 uStack_1d8;
  undefined6 uStack_1d6;
  undefined2 uStack_1d0;
  undefined8 uStack_1ce;
  undefined8 *puStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined1 *puStack_1a0;
  undefined8 *puStack_198;
  ulong uStack_190;
  undefined1 uStack_181;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined2 uStack_128;
  undefined6 uStack_126;
  undefined2 uStack_120;
  undefined8 uStack_11e;
  undefined8 *puStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined1 *puStack_f0;
  undefined8 *puStack_e8;
  ulong uStack_e0;
  undefined1 uStack_d1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined8 uStack_6e;
  undefined8 *puStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined1 *puStack_40;
  undefined8 *puStack_38;
  ulong uStack_30;
  undefined1 uStack_21;
  
  puStack_40 = (undefined1 *)&uStack_b0;
  uStack_6e = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_76 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  puStack_58 = &uStack_a0;
  uStack_48 = 0;
  uStack_50 = 0x3a;
  puStack_38 = (undefined8 *)
               &
               __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Display_u20_for_u20_i128_GT_3fmt17hef82e196c4e0610fE
  ;
  uStack_b0 = param_2;
  uStack_a8 = param_3;
  iVar1 = __ZN4core3fmt5write17h64810b21425781ecE
                    (&puStack_58,&UNK_10b21ca30,s_integer_____as_i128_108ac29ab,&puStack_40);
  if (iVar1 == 0) {
    if (uStack_48 <= uStack_50) {
      puStack_38 = puStack_58;
      uStack_30 = uStack_48;
      puStack_40 = (undefined1 *)CONCAT71(puStack_40._1_7_,0x11);
      FUN_1087e3db0(param_1,&puStack_40,&uStack_21,&UNK_10b20a460);
      return;
    }
    __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
              (0,uStack_48,uStack_50,&UNK_10b46a138);
  }
  puVar3 = &uStack_21;
  auVar4 = func_0x000108a07a3c(&UNK_108cc408f,0x2b,puVar3,&UNK_10b235000,&UNK_10b21ca60);
  uStack_160 = auVar4._8_8_;
  puStack_f0 = (undefined1 *)&uStack_160;
  uStack_11e = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_126 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  puStack_108 = &uStack_150;
  uStack_f8 = 0;
  uStack_100 = 0x3a;
  puStack_e8 = (undefined8 *)
               &
               __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Display_u20_for_u20_i128_GT_3fmt17hef82e196c4e0610fE
  ;
  puStack_158 = puVar3;
  iVar1 = __ZN4core3fmt5write17h64810b21425781ecE
                    (&puStack_108,&UNK_10b21ca30,s_integer_____as_i128_108ac29ab,&puStack_f0);
  if (iVar1 == 0) {
    if (uStack_f8 <= uStack_100) {
      puStack_e8 = puStack_108;
      uStack_e0 = uStack_f8;
      puStack_f0 = (undefined1 *)CONCAT71(puStack_f0._1_7_,0x11);
      FUN_1087e3db0(auVar4._0_8_,&puStack_f0,&uStack_d1,&UNK_10b21b810);
      return;
    }
    __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
              (0,uStack_f8,uStack_100,&UNK_10b46a138);
  }
  puVar3 = &uStack_d1;
  auVar4 = func_0x000108a07a3c(&UNK_108cc408f,0x2b,puVar3,&UNK_10b235000,&UNK_10b21ca60);
  uStack_210 = auVar4._8_8_;
  puStack_1a0 = (undefined1 *)&uStack_210;
  uStack_1ce = 0;
  uStack_1d0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1d6 = 0;
  uStack_1e0 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  puStack_1b8 = &uStack_200;
  uStack_1a8 = 0;
  uStack_1b0 = 0x3a;
  puStack_198 = (undefined8 *)
                &
                __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Display_u20_for_u20_i128_GT_3fmt17hef82e196c4e0610fE
  ;
  puStack_208 = puVar3;
  iVar1 = __ZN4core3fmt5write17h64810b21425781ecE
                    (&puStack_1b8,&UNK_10b21ca30,s_integer_____as_i128_108ac29ab,&puStack_1a0);
  if (iVar1 == 0) {
    if (uStack_1a8 <= uStack_1b0) {
      puStack_198 = puStack_1b8;
      uStack_190 = uStack_1a8;
      puStack_1a0 = (undefined1 *)CONCAT71(puStack_1a0._1_7_,0x11);
      FUN_1087e3db0(auVar4._0_8_,&puStack_1a0,&uStack_181,&UNK_10b21be10);
      return;
    }
    __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
              (0,uStack_1a8,uStack_1b0,&UNK_10b46a138);
  }
  puVar3 = &uStack_181;
  auVar4 = func_0x000108a07a3c(&UNK_108cc408f,0x2b,puVar3,&UNK_10b235000,&UNK_10b21ca60);
  uStack_2c0 = auVar4._8_8_;
  puStack_250 = (undefined1 *)&uStack_2c0;
  uStack_27e = 0;
  uStack_280 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_286 = 0;
  uStack_290 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  puStack_268 = &uStack_2b0;
  uStack_258 = 0;
  uStack_260 = 0x3a;
  puStack_248 = (undefined8 *)
                &
                __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Display_u20_for_u20_i128_GT_3fmt17hef82e196c4e0610fE
  ;
  puStack_2b8 = puVar3;
  iVar1 = __ZN4core3fmt5write17h64810b21425781ecE
                    (&puStack_268,&UNK_10b21ca30,s_integer_____as_i128_108ac29ab,&puStack_250);
  if (iVar1 == 0) {
    if (uStack_258 <= uStack_260) {
      puStack_248 = puStack_268;
      uStack_240 = uStack_258;
      puStack_250 = (undefined1 *)CONCAT71(puStack_250._1_7_,0x11);
      FUN_1087e3db0(auVar4._0_8_,&puStack_250,&uStack_231,&UNK_10b21bf70);
      return;
    }
    __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
              (0,uStack_258,uStack_260,&UNK_10b46a138);
  }
  auVar4 = func_0x000108a07a3c(&UNK_108cc408f,0x2b,&uStack_231,&UNK_10b235000,&UNK_10b21ca60);
  auStack_300[0] = 8;
  uVar2 = func_0x000108a4a50c(auStack_300,&uStack_2e1,&UNK_10b219af0);
  *(undefined8 *)(auVar4._0_8_ + 8) = uVar2;
  *auVar4._0_8_ = 5;
  FUN_100e077ec(auVar4._8_8_);
  return;
}

