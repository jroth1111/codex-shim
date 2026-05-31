
/* WARNING: Possible PIC construction at 0x000108a0791c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a07944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a07bc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108a07bc4) */

void __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  code *pcVar1;
  undefined1 *puVar2;
  ulong extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined *puVar3;
  ulong uVar4;
  undefined1 ***pppuVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_248 [440];
  undefined1 auStack_90 [16];
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 **ppuStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  ulong *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  auVar7._8_8_ = param_3;
  auVar7._0_8_ = param_1;
  puVar2 = &stack0xfffffffffffffff0;
  pppuVar5 = (undefined1 ***)&stack0xfffffffffffffff0;
  if (param_3 < param_1) {
    uVar6 = 0x108a07920;
  }
  else {
    uStack_48 = param_3;
    if ((param_2 <= param_3) && (param_2 < param_1)) {
      uVar4 = param_4;
      func_0x000108a07980();
      param_2 = extraout_x1;
      uStack_48 = param_4;
      param_4 = uVar4;
    }
    puStack_40 = (undefined1 *)&uStack_50;
    uStack_18 = 0x108a07948;
    puStack_38 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    puStack_30 = &uStack_48;
    puStack_28 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    uStack_50 = param_2;
    puStack_20 = &stack0xfffffffffffffff0;
    auStack_90 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                           (s_range_end_index___out_of_range_f_108b0ed5a,&puStack_40,param_4);
    puVar2 = auStack_90;
    puStack_80 = auStack_90;
    uStack_58 = 0x108a07980;
    pppuVar5 = &ppuStack_60;
    puStack_78 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    puStack_70 = auStack_90 + 8;
    puStack_68 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    uVar6 = 0x108a079b8;
    ppuStack_60 = &puStack_20;
    auVar7 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                       (s_slice_index_starts_at_but_ends_a_108b0ed91,&puStack_80);
  }
  *(undefined1 ****)(puVar2 + -0x10) = pppuVar5;
  *(undefined8 *)(puVar2 + -8) = uVar6;
  *(undefined1 (*) [16])(puVar2 + -0x40) = auVar7;
  *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x40;
  *(undefined **)(puVar2 + -0x28) =
       &
       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
  ;
  *(undefined1 **)(puVar2 + -0x20) = puVar2 + -0x38;
  *(undefined **)(puVar2 + -0x18) =
       &
       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
  ;
  auVar7 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                     (s_range_start_index___out_of_range_108b0edb9,puVar2 + -0x30);
  *(undefined1 **)(puVar2 + -0x50) = puVar2 + -0x10;
  *(undefined8 *)(puVar2 + -0x48) = 0x108a079f0;
  *(undefined1 (*) [16])(puVar2 + -0x70) = auVar7;
  *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x70;
  *(undefined **)(puVar2 + -0x58) = &DAT_1055b3828;
  uVar6 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,puVar2 + -0x60);
  *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x50;
  *(undefined8 *)(puVar2 + -0x78) = 0x108a07a20;
  auVar7 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108f5c45f,0x2b);
  *(undefined1 **)(puVar2 + -0x90) = puVar2 + -0x80;
  *(undefined8 *)(puVar2 + -0x88) = 0x108a07a3c;
  *(undefined1 (*) [16])(puVar2 + -0xd0) = auVar7;
  *(undefined8 *)(puVar2 + -0xc0) = uVar6;
  *(ulong *)(puVar2 + -0xb8) = param_4;
  *(undefined1 **)(puVar2 + -0xb0) = puVar2 + -0xd0;
  *(undefined **)(puVar2 + -0xa8) = &DAT_1055b3828;
  *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0xc0;
  *(undefined **)(puVar2 + -0x98) = &DAT_1055b3498;
  uVar6 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s___108ac1f1a,puVar2 + -0xb0,param_5);
  *(undefined1 **)(puVar2 + -0xe0) = puVar2 + -0x90;
  *(undefined8 *)(puVar2 + -0xd8) = 0x108a07a84;
  uVar6 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f63634,0x33,uVar6);
  *(undefined1 **)(puVar2 + -0xf0) = puVar2 + -0xe0;
  *(undefined8 *)(puVar2 + -0xe8) = 0x108a07aa0;
  uVar6 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f6364d,0x73,uVar6);
  *(undefined1 **)(puVar2 + -0x100) = puVar2 + -0xf0;
  *(undefined8 *)(puVar2 + -0xf8) = 0x108a07abc;
  uVar6 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f58a33,0x3f,uVar6);
  *(undefined1 **)(puVar2 + -0x110) = puVar2 + -0x100;
  *(undefined8 *)(puVar2 + -0x108) = 0x108a07ad8;
  uVar6 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f58a52,0x61,uVar6);
  *(undefined1 **)(puVar2 + -0x120) = puVar2 + -0x110;
  *(undefined8 *)(puVar2 + -0x118) = 0x108a07af4;
  uVar6 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f63686,0x47,uVar6);
  *(undefined1 **)(puVar2 + -0x130) = puVar2 + -0x120;
  *(undefined8 *)(puVar2 + -0x128) = 0x108a07b10;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f636a9,0x45);
  *(undefined1 **)(puVar2 + -0x140) = puVar2 + -0x130;
  *(undefined8 *)(puVar2 + -0x138) = 0x108a07b2c;
  *(undefined8 *)(puVar2 + -0x150) = extraout_x1_00;
  *(undefined8 *)(puVar2 + -0x148) = uVar6;
  puVar3 = &UNK_10b392c88;
  FUN_1055c3698();
  *(undefined1 **)(puVar2 + -0x160) = puVar2 + -0x140;
  *(undefined8 *)(puVar2 + -0x158) = 0x108a07b54;
  *(undefined8 *)(puVar2 + -0x170) = extraout_x1_01;
  *(undefined **)(puVar2 + -0x168) = puVar3;
  puVar3 = &UNK_10b392ca8;
  auVar7 = FUN_1055c3698();
  *(undefined1 **)(puVar2 + -0x180) = puVar2 + -0x160;
  *(undefined8 *)(puVar2 + -0x178) = 0x108a07b7c;
  *(long *)(puVar2 + -400) = auVar7._8_8_;
  *(undefined **)(puVar2 + -0x188) = puVar3;
  auVar7 = FUN_1055c3698(auVar7._0_8_,auVar7._8_8_,&UNK_10b392cc8);
  *(undefined1 **)(puVar2 + -0x1a0) = puVar2 + -0x180;
  *(undefined8 *)(puVar2 + -0x198) = 0x108a07ba4;
  *(undefined1 **)(puVar2 + -0x1b0) = puVar2 + -0x1a0;
  *(undefined8 *)(puVar2 + -0x1a8) = 0x108a07bc4;
  *(long *)(puVar2 + -0x1d8) = auVar7._0_8_;
  *(ulong *)(puVar2 + -0x1d0) = auVar7._8_8_ << 1 | 1;
  *(undefined1 **)(puVar2 + -0x1c8) = puVar2 + -0x1d8;
  *(undefined **)(puVar2 + -0x1c0) = &UNK_10b392ce8;
  puVar2[-0x1b8] = 0;
  puVar2[-0x1b7] = 0;
  __RNvCshXwFllX56pT_7___rustc17rust_begin_unwind(puVar2 + -0x1c8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108a07c40);
  (*pcVar1)();
}

