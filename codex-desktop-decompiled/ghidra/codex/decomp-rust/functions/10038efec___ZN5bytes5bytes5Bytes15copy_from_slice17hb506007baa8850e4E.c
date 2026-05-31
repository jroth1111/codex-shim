
void __ZN5bytes5bytes5Bytes15copy_from_slice17hb506007baa8850e4E
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined *extraout_x1;
  undefined *puVar5;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 uVar6;
  undefined *extraout_x9;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  ulong uStack_190;
  ulong uStack_188;
  undefined1 *puStack_180;
  undefined *puStack_178;
  ulong *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined1 ***pppuStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 **ppuStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  ulong *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[1] = 1;
    puVar5 = &UNK_10b205a90;
LAB_10038eee0:
    *param_1 = puVar5;
    return;
  }
  uVar3 = _malloc(param_3);
  if (uVar3 != 0) {
    _memcpy(uVar3,param_2,param_3);
    if ((uVar3 & 1) == 0) {
      param_1[1] = uVar3;
      param_1[2] = param_3;
      param_1[3] = uVar3 | 1;
      puVar5 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
    }
    else {
      param_1[1] = uVar3;
      param_1[2] = param_3;
      puVar5 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
      param_1[3] = uVar3;
    }
    goto LAB_10038eee0;
  }
  auVar11 = FUN_107c03c64(1,param_3);
  uVar3 = auVar11._8_8_;
  puVar4 = auVar11._0_8_;
  puStack_80 = (undefined1 *)&uStack_90;
  uStack_38 = 0x10038ef00;
  uStack_88 = puVar4[2];
  if (uVar3 == uStack_88) {
    lVar7 = puVar4[1];
    uVar6 = *puVar4;
    uVar10 = puVar4[3];
    uVar9 = puVar4[2];
    extraout_x8[1] = puVar4[1];
    *extraout_x8 = uVar6;
    extraout_x8[3] = uVar10;
    extraout_x8[2] = uVar9;
    *puVar4 = &UNK_10b205a90;
    puVar4[1] = lVar7 + uVar3;
    puVar4[2] = 0;
    puVar4[3] = 0;
    return;
  }
  if (uVar3 == 0) {
    uVar6 = puVar4[1];
    extraout_x8[2] = 0;
    extraout_x8[3] = 0;
    *extraout_x8 = &UNK_10b205a90;
    extraout_x8[1] = uVar6;
    return;
  }
  uStack_90 = uVar3;
  uStack_60 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if (uVar3 <= uStack_88) {
    (**(code **)*puVar4)(puVar4 + 3,puVar4[1]);
    puVar4[1] = puVar4[1] + uVar3;
    puVar4[2] = puVar4[2] - uVar3;
    extraout_x8[2] = uVar3;
    return;
  }
  puStack_70 = &uStack_88;
  puStack_78 = &DAT_10038de58;
  puStack_68 = &DAT_10038de58;
  puVar5 = &UNK_10b205bc8;
  auVar11 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s_split_to_out_of_bounds__<__108abd421,&puStack_80);
  puStack_d0 = auVar11._8_8_;
  puVar4 = auVar11._0_8_;
  uStack_98 = 0x10038efec;
  if (puVar5 == (undefined *)0x0) {
    extraout_x8_00[2] = 0;
    extraout_x8_00[3] = 0;
    *extraout_x8_00 = &UNK_10b205a90;
    extraout_x8_00[1] = 1;
    return;
  }
  puStack_c8 = (undefined *)puVar4[1];
  puStack_128 = (undefined *)puVar4[2];
  puVar1 = puStack_d0 + -(long)puStack_c8;
  puStack_120 = puVar5;
  uStack_c0 = param_2;
  ppuStack_a0 = &puStack_40;
  if (puStack_d0 < puStack_c8) {
    ppuStack_118 = &puStack_d0;
    puStack_110 = &DAT_10038e00c;
    ppuStack_108 = &puStack_c8;
    puStack_100 = &DAT_10038e00c;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s_subset_pointer_____is_smaller_th_108abd442,&ppuStack_118,&UNK_10b205be0);
    puStack_c8 = extraout_x1;
    puStack_d0 = extraout_x9;
LAB_10038f0c0:
    ppuStack_118 = &puStack_d0;
    puStack_110 = &DAT_10038e00c;
    ppuStack_108 = &puStack_128;
    puStack_100 = &
                  __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    ppuStack_f8 = &puStack_c8;
    puStack_f0 = &DAT_10038e00c;
    ppuStack_e8 = &puStack_120;
    puStack_e0 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    puVar2 = puStack_d0;
    puStack_d0 = puStack_c8;
    puStack_c8 = puVar2;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__subset_is_out_of_bounds__self___108abd479,&ppuStack_118,&UNK_10b205bf8);
  }
  else {
    if (puStack_128 + (long)puStack_c8 < puVar5 + (long)puStack_d0) goto LAB_10038f0c0;
    puStack_c8 = puVar1 + (long)puVar5;
    puStack_d8 = puStack_128;
    puStack_d0 = puVar1;
    if (!CARRY8((ulong)puVar1,(ulong)puVar5)) {
      if (puStack_c8 <= puStack_128) {
        (**(code **)*puVar4)(puVar4 + 3);
        extraout_x8_00[1] = puVar1 + extraout_x8_00[1];
        extraout_x8_00[2] = puVar5;
        return;
      }
      goto LAB_10038f13c;
    }
  }
  ppuStack_118 = &puStack_d0;
  puStack_110 = &DAT_10038de58;
  ppuStack_108 = &puStack_c8;
  puStack_100 = &DAT_10038de58;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s__range_start_must_not_be_greater_108abd3cc,&ppuStack_118,&UNK_10b205b98);
LAB_10038f13c:
  ppuStack_118 = &puStack_c8;
  puStack_110 = &DAT_10038de58;
  ppuStack_108 = &puStack_d8;
  puStack_100 = &DAT_10038de58;
  auVar11 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s_range_end_out_of_bounds__<__108abd3ff,&ppuStack_118,&UNK_10b205bb0);
  uVar3 = auVar11._8_8_;
  puVar4 = auVar11._0_8_;
  puStack_180 = (undefined1 *)&uStack_190;
  uStack_138 = 0x10038f16c;
  uStack_188 = puVar4[2];
  if (uVar3 == uStack_188) {
    lVar7 = puVar4[1];
    extraout_x8_01[2] = 0;
    extraout_x8_01[3] = 0;
    *extraout_x8_01 = &UNK_10b205a90;
    extraout_x8_01[1] = lVar7 + uVar3;
  }
  else if (uVar3 == 0) {
    uVar6 = *puVar4;
    uVar10 = puVar4[3];
    uVar9 = puVar4[2];
    extraout_x8_01[1] = puVar4[1];
    *extraout_x8_01 = uVar6;
    extraout_x8_01[3] = uVar10;
    extraout_x8_01[2] = uVar9;
    *puVar4 = &UNK_10b205a90;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  else {
    uStack_190 = uVar3;
    uStack_160 = param_2;
    puStack_158 = puVar1;
    lStack_150 = param_3;
    puStack_148 = puVar5;
    pppuStack_140 = &ppuStack_a0;
    if (uStack_188 < uVar3) {
      puStack_170 = &uStack_188;
      puStack_178 = &DAT_10038de58;
      puStack_168 = &DAT_10038de58;
      puVar4 = (undefined8 *)
               __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                         (s_split_off_out_of_bounds__<__108abd4b6,&puStack_180,&UNK_10b205c10);
      plVar8 = (long *)*puVar4;
      lVar7 = plVar8[4];
      plVar8[4] = lVar7 + -1;
      LORelease();
      if (lVar7 != 1) {
        return;
      }
      if (*plVar8 != 0) {
        _free(plVar8[1]);
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(plVar8);
      return;
    }
    (**(code **)*puVar4)(puVar4 + 3,puVar4[1]);
    puVar4[2] = uVar3;
    extraout_x8_01[1] = extraout_x8_01[1] + uVar3;
    extraout_x8_01[2] = extraout_x8_01[2] - uVar3;
  }
  return;
}

