
/* WARNING: Possible PIC construction at 0x000108a07824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a07860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a078a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a0791c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a07944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a07bc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108a07bc4) */

void __ZN4core4cell22panic_already_borrowed17he8deaa52232869b2E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
               undefined8 param_5)

{
  code *pcVar1;
  undefined1 ***pppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *extraout_x1;
  undefined *puVar5;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined *puVar6;
  undefined1 ***pppuVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_328 [440];
  undefined1 auStack_170 [16];
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 **ppuStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined **ppuStack_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined1 **ppuStack_f0;
  undefined8 uStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined8 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined1 **ppuStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_78;
  undefined *puStack_70;
  undefined1 uStack_61;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_38;
  undefined *puStack_30;
  undefined1 uStack_21;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  puStack_20 = &stack0xfffffffffffffff0;
  uStack_18 = 0x108a07828;
  puStack_38 = &uStack_21;
  puStack_30 = &
               __ZN65__LT_core__cell__BorrowMutError_u20_as_u20_core__fmt__Display_GT_3fmt17h4c1c74d48b5b5b86E
  ;
  uVar3 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&puStack_38,param_1);
  puStack_60 = (undefined1 *)&ppuStack_50;
  uStack_48 = 0x108a07858;
  uStack_58 = 0x108a07864;
  puStack_78 = &uStack_61;
  puStack_70 = &
               __ZN62__LT_core__cell__BorrowError_u20_as_u20_core__fmt__Display_GT_3fmt17h736426bc86f452e7E
  ;
  ppuStack_50 = &puStack_20;
  auVar8 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&puStack_78,uVar3);
  uStack_d0 = auVar8._8_8_;
  uStack_c8 = auVar8._0_8_;
  puStack_a0 = (undefined1 *)&ppuStack_90;
  uStack_88 = 0x108a07894;
  puStack_c0 = (undefined1 *)&uStack_d0;
  uStack_98 = 0x108a078ac;
  puStack_b8 = &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
  ;
  puStack_b0 = &uStack_c8;
  puStack_a8 = &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
  ;
  ppuStack_90 = &puStack_60;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s__copy_from_slice__source_slice_l_108b0ecb2,&puStack_c0);
  pcStack_d8 = __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E;
  puVar6 = &UNK_10b392b18;
  ppuStack_e0 = &puStack_a0;
  auVar8 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f5c313,0x99);
  puVar5 = auVar8._8_8_;
  puVar4 = auVar8._0_8_;
  auVar8._8_8_ = puVar6;
  auVar8._0_8_ = puVar4;
  pppuVar2 = &ppuStack_f0;
  pppuVar7 = &ppuStack_f0;
  uStack_e8 = 0x108a07904;
  if (puVar6 < puVar4) {
    uVar3 = 0x108a07920;
    ppuStack_f0 = (undefined1 **)&ppuStack_e0;
  }
  else {
    puStack_128 = puVar6;
    ppuStack_f0 = (undefined1 **)&ppuStack_e0;
    if ((puVar5 <= puVar6) && (ppuStack_f0 = (undefined1 **)&ppuStack_e0, puVar5 < puVar4)) {
      puVar6 = param_4;
      ppuStack_f0 = (undefined1 **)&ppuStack_e0;
      func_0x000108a07980();
      puVar5 = extraout_x1;
      puStack_128 = param_4;
      param_4 = puVar6;
    }
    puStack_120 = (undefined1 *)&puStack_130;
    uStack_f8 = 0x108a07948;
    puStack_118 = &
                  __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    ppuStack_110 = &puStack_128;
    puStack_108 = &
                  __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    puStack_130 = puVar5;
    puStack_100 = (undefined1 *)&ppuStack_f0;
    auStack_170 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                            (s_range_end_index___out_of_range_f_108b0ed5a,&puStack_120,param_4);
    pppuVar2 = (undefined1 ***)auStack_170;
    puStack_160 = auStack_170;
    uStack_138 = 0x108a07980;
    pppuVar7 = &ppuStack_140;
    puStack_158 = &
                  __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    puStack_150 = auStack_170 + 8;
    puStack_148 = &
                  __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    uVar3 = 0x108a079b8;
    ppuStack_140 = &puStack_100;
    auVar8 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                       (s_slice_index_starts_at_but_ends_a_108b0ed91,&puStack_160);
  }
  *(undefined1 ****)((long)pppuVar2 + -0x10) = pppuVar7;
  *(undefined8 *)((long)pppuVar2 + -8) = uVar3;
  *(undefined1 (*) [16])((long)pppuVar2 + -0x40) = auVar8;
  *(undefined1 **)((long)pppuVar2 + -0x30) = (undefined1 *)((long)pppuVar2 + -0x40);
  *(undefined1 **)((long)pppuVar2 + -0x28) =
       &
       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
  ;
  *(undefined1 **)((long)pppuVar2 + -0x20) = (undefined1 *)((long)pppuVar2 + -0x38);
  *(undefined1 **)((long)pppuVar2 + -0x18) =
       &
       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
  ;
  auVar8 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                     (s_range_start_index___out_of_range_108b0edb9,
                      (undefined1 *)((long)pppuVar2 + -0x30));
  *(undefined1 **)((long)pppuVar2 + -0x50) = (undefined1 *)((long)pppuVar2 + -0x10);
  *(undefined8 *)((long)pppuVar2 + -0x48) = 0x108a079f0;
  *(undefined1 (*) [16])((long)pppuVar2 + -0x70) = auVar8;
  *(undefined1 **)((long)pppuVar2 + -0x60) = (undefined1 *)((long)pppuVar2 + -0x70);
  *(undefined **)((long)pppuVar2 + -0x58) = &DAT_1055b3828;
  uVar3 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__108b1bd74,(undefined1 *)((long)pppuVar2 + -0x60));
  *(undefined1 **)((long)pppuVar2 + -0x80) = (undefined1 *)((long)pppuVar2 + -0x50);
  *(undefined8 *)((long)pppuVar2 + -0x78) = 0x108a07a20;
  auVar8 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108f5c45f,0x2b);
  *(undefined1 **)((long)pppuVar2 + -0x90) = (undefined1 *)((long)pppuVar2 + -0x80);
  *(undefined8 *)((long)pppuVar2 + -0x88) = 0x108a07a3c;
  *(undefined1 (*) [16])((long)pppuVar2 + -0xd0) = auVar8;
  *(undefined8 *)((long)pppuVar2 + -0xc0) = uVar3;
  *(undefined **)((long)pppuVar2 + -0xb8) = param_4;
  *(undefined1 **)((long)pppuVar2 + -0xb0) = (undefined1 *)((long)pppuVar2 + -0xd0);
  *(undefined **)((long)pppuVar2 + -0xa8) = &DAT_1055b3828;
  *(undefined1 **)((long)pppuVar2 + -0xa0) = (undefined1 *)((long)pppuVar2 + -0xc0);
  *(undefined **)((long)pppuVar2 + -0x98) = &DAT_1055b3498;
  uVar3 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s___108ac1f1a,(undefined1 *)((long)pppuVar2 + -0xb0),param_5);
  *(undefined1 **)((long)pppuVar2 + -0xe0) = (undefined1 *)((long)pppuVar2 + -0x90);
  *(undefined8 *)((long)pppuVar2 + -0xd8) = 0x108a07a84;
  uVar3 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f63634,0x33,uVar3);
  *(undefined1 **)((long)pppuVar2 + -0xf0) = (undefined1 *)((long)pppuVar2 + -0xe0);
  *(undefined8 *)((long)pppuVar2 + -0xe8) = 0x108a07aa0;
  uVar3 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f6364d,0x73,uVar3);
  *(undefined1 **)((long)pppuVar2 + -0x100) = (undefined1 *)((long)pppuVar2 + -0xf0);
  *(undefined8 *)((long)pppuVar2 + -0xf8) = 0x108a07abc;
  uVar3 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f58a33,0x3f,uVar3);
  *(undefined1 **)((long)pppuVar2 + -0x110) = (undefined1 *)((long)pppuVar2 + -0x100);
  *(undefined8 *)((long)pppuVar2 + -0x108) = 0x108a07ad8;
  uVar3 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f58a52,0x61,uVar3);
  *(undefined1 **)((long)pppuVar2 + -0x120) = (undefined1 *)((long)pppuVar2 + -0x110);
  *(undefined8 *)((long)pppuVar2 + -0x118) = 0x108a07af4;
  uVar3 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f63686,0x47,uVar3);
  *(undefined1 **)((long)pppuVar2 + -0x130) = (undefined1 *)((long)pppuVar2 + -0x120);
  *(undefined8 *)((long)pppuVar2 + -0x128) = 0x108a07b10;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f636a9,0x45);
  *(undefined1 **)((long)pppuVar2 + -0x140) = (undefined1 *)((long)pppuVar2 + -0x130);
  *(undefined8 *)((long)pppuVar2 + -0x138) = 0x108a07b2c;
  *(undefined8 *)((long)pppuVar2 + -0x150) = extraout_x1_00;
  *(undefined8 *)((long)pppuVar2 + -0x148) = uVar3;
  puVar6 = &UNK_10b392c88;
  FUN_1055c3698();
  *(undefined1 **)((long)pppuVar2 + -0x160) = (undefined1 *)((long)pppuVar2 + -0x140);
  *(undefined8 *)((long)pppuVar2 + -0x158) = 0x108a07b54;
  *(undefined8 *)((long)pppuVar2 + -0x170) = extraout_x1_01;
  *(undefined **)((long)pppuVar2 + -0x168) = puVar6;
  puVar6 = &UNK_10b392ca8;
  auVar8 = FUN_1055c3698();
  *(undefined1 **)((long)pppuVar2 + -0x180) = (undefined1 *)((long)pppuVar2 + -0x160);
  *(undefined8 *)((long)pppuVar2 + -0x178) = 0x108a07b7c;
  *(long *)((long)pppuVar2 + -400) = auVar8._8_8_;
  *(undefined **)((long)pppuVar2 + -0x188) = puVar6;
  auVar8 = FUN_1055c3698(auVar8._0_8_,auVar8._8_8_,&UNK_10b392cc8);
  *(undefined1 **)((long)pppuVar2 + -0x1a0) = (undefined1 *)((long)pppuVar2 + -0x180);
  *(undefined8 *)((long)pppuVar2 + -0x198) = 0x108a07ba4;
  *(undefined1 **)((long)pppuVar2 + -0x1b0) = (undefined1 *)((long)pppuVar2 + -0x1a0);
  *(undefined8 *)((long)pppuVar2 + -0x1a8) = 0x108a07bc4;
  *(long *)((long)pppuVar2 + -0x1d8) = auVar8._0_8_;
  *(ulong *)((long)pppuVar2 + -0x1d0) = auVar8._8_8_ << 1 | 1;
  *(undefined1 **)((long)pppuVar2 + -0x1c8) = (undefined1 *)((long)pppuVar2 + -0x1d8);
  *(undefined **)((long)pppuVar2 + -0x1c0) = &UNK_10b392ce8;
  *(undefined1 *)((long)pppuVar2 + -0x1b8) = 0;
  *(undefined1 *)((long)pppuVar2 + -0x1b7) = 0;
  __RNvCshXwFllX56pT_7___rustc17rust_begin_unwind((undefined1 *)((long)pppuVar2 + -0x1c8));
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108a07c40);
  (*pcVar1)();
}

