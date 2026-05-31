
/* WARNING: Possible PIC construction at 0x000108a0791c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a07944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a07bc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108a07bc4) */

void __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E(void)

{
  code *pcVar1;
  undefined1 ***pppuVar2;
  undefined *extraout_x1;
  undefined *puVar4;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined *puVar5;
  undefined *in_x3;
  undefined8 in_x4;
  undefined1 ***pppuVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_258 [440];
  undefined1 auStack_a0 [16];
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 **ppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined **ppuStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  undefined1 **ppuStack_20;
  undefined8 uStack_18;
  undefined *puVar3;
  
  puVar5 = &UNK_10b392b18;
  auVar8 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f5c313,0x99);
  puVar4 = auVar8._8_8_;
  puVar3 = auVar8._0_8_;
  auVar8._8_8_ = puVar5;
  auVar8._0_8_ = puVar3;
  pppuVar2 = &ppuStack_20;
  pppuVar6 = &ppuStack_20;
  uStack_18 = 0x108a07904;
  if (puVar5 < puVar3) {
    uVar7 = 0x108a07920;
    ppuStack_20 = (undefined1 **)&stack0xfffffffffffffff0;
  }
  else {
    puStack_58 = puVar5;
    ppuStack_20 = (undefined1 **)&stack0xfffffffffffffff0;
    if ((puVar4 <= puVar5) &&
       (ppuStack_20 = (undefined1 **)&stack0xfffffffffffffff0, puVar4 < puVar3)) {
      puVar5 = in_x3;
      ppuStack_20 = (undefined1 **)&stack0xfffffffffffffff0;
      func_0x000108a07980();
      puVar4 = extraout_x1;
      puStack_58 = in_x3;
      in_x3 = puVar5;
    }
    puStack_50 = (undefined1 *)&puStack_60;
    uStack_28 = 0x108a07948;
    puStack_48 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    ppuStack_40 = &puStack_58;
    puStack_38 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    puStack_60 = puVar4;
    puStack_30 = (undefined1 *)&ppuStack_20;
    auStack_a0 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                           (s_range_end_index___out_of_range_f_108b0ed5a,&puStack_50,in_x3);
    pppuVar2 = (undefined1 ***)auStack_a0;
    puStack_90 = auStack_a0;
    uStack_68 = 0x108a07980;
    pppuVar6 = &ppuStack_70;
    puStack_88 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    puStack_80 = auStack_a0 + 8;
    puStack_78 = &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    uVar7 = 0x108a079b8;
    ppuStack_70 = &puStack_30;
    auVar8 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                       (s_slice_index_starts_at_but_ends_a_108b0ed91,&puStack_90);
  }
  *(undefined1 ****)((long)pppuVar2 + -0x10) = pppuVar6;
  *(undefined8 *)((long)pppuVar2 + -8) = uVar7;
  *(undefined1 (*) [16])((long)pppuVar2 + -0x40) = auVar8;
  *(undefined1 **)((long)pppuVar2 + -0x30) = (undefined1 *)((long)pppuVar2 + -0x40);
  *(undefined **)((long)pppuVar2 + -0x28) =
       &
       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
  ;
  *(undefined1 **)((long)pppuVar2 + -0x20) = (undefined1 *)((long)pppuVar2 + -0x38);
  *(undefined **)((long)pppuVar2 + -0x18) =
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
  uVar7 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__108b1bd74,(undefined1 *)((long)pppuVar2 + -0x60));
  *(undefined1 **)((long)pppuVar2 + -0x80) = (undefined1 *)((long)pppuVar2 + -0x50);
  *(undefined8 *)((long)pppuVar2 + -0x78) = 0x108a07a20;
  auVar8 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108f5c45f,0x2b);
  *(undefined1 **)((long)pppuVar2 + -0x90) = (undefined1 *)((long)pppuVar2 + -0x80);
  *(undefined8 *)((long)pppuVar2 + -0x88) = 0x108a07a3c;
  *(undefined1 (*) [16])((long)pppuVar2 + -0xd0) = auVar8;
  *(undefined8 *)((long)pppuVar2 + -0xc0) = uVar7;
  *(undefined **)((long)pppuVar2 + -0xb8) = in_x3;
  *(undefined1 **)((long)pppuVar2 + -0xb0) = (undefined1 *)((long)pppuVar2 + -0xd0);
  *(undefined **)((long)pppuVar2 + -0xa8) = &DAT_1055b3828;
  *(undefined1 **)((long)pppuVar2 + -0xa0) = (undefined1 *)((long)pppuVar2 + -0xc0);
  *(undefined **)((long)pppuVar2 + -0x98) = &DAT_1055b3498;
  uVar7 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s___108ac1f1a,(undefined1 *)((long)pppuVar2 + -0xb0),in_x4);
  *(undefined1 **)((long)pppuVar2 + -0xe0) = (undefined1 *)((long)pppuVar2 + -0x90);
  *(undefined8 *)((long)pppuVar2 + -0xd8) = 0x108a07a84;
  uVar7 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f63634,0x33,uVar7);
  *(undefined1 **)((long)pppuVar2 + -0xf0) = (undefined1 *)((long)pppuVar2 + -0xe0);
  *(undefined8 *)((long)pppuVar2 + -0xe8) = 0x108a07aa0;
  uVar7 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f6364d,0x73,uVar7);
  *(undefined1 **)((long)pppuVar2 + -0x100) = (undefined1 *)((long)pppuVar2 + -0xf0);
  *(undefined8 *)((long)pppuVar2 + -0xf8) = 0x108a07abc;
  uVar7 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f58a33,0x3f,uVar7);
  *(undefined1 **)((long)pppuVar2 + -0x110) = (undefined1 *)((long)pppuVar2 + -0x100);
  *(undefined8 *)((long)pppuVar2 + -0x108) = 0x108a07ad8;
  uVar7 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f58a52,0x61,uVar7);
  *(undefined1 **)((long)pppuVar2 + -0x120) = (undefined1 *)((long)pppuVar2 + -0x110);
  *(undefined8 *)((long)pppuVar2 + -0x118) = 0x108a07af4;
  uVar7 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f63686,0x47,uVar7);
  *(undefined1 **)((long)pppuVar2 + -0x130) = (undefined1 *)((long)pppuVar2 + -0x120);
  *(undefined8 *)((long)pppuVar2 + -0x128) = 0x108a07b10;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f636a9,0x45);
  *(undefined1 **)((long)pppuVar2 + -0x140) = (undefined1 *)((long)pppuVar2 + -0x130);
  *(undefined8 *)((long)pppuVar2 + -0x138) = 0x108a07b2c;
  *(undefined8 *)((long)pppuVar2 + -0x150) = extraout_x1_00;
  *(undefined8 *)((long)pppuVar2 + -0x148) = uVar7;
  puVar5 = &UNK_10b392c88;
  FUN_1055c3698();
  *(undefined1 **)((long)pppuVar2 + -0x160) = (undefined1 *)((long)pppuVar2 + -0x140);
  *(undefined8 *)((long)pppuVar2 + -0x158) = 0x108a07b54;
  *(undefined8 *)((long)pppuVar2 + -0x170) = extraout_x1_01;
  *(undefined **)((long)pppuVar2 + -0x168) = puVar5;
  puVar5 = &UNK_10b392ca8;
  auVar8 = FUN_1055c3698();
  *(undefined1 **)((long)pppuVar2 + -0x180) = (undefined1 *)((long)pppuVar2 + -0x160);
  *(undefined8 *)((long)pppuVar2 + -0x178) = 0x108a07b7c;
  *(long *)((long)pppuVar2 + -400) = auVar8._8_8_;
  *(undefined **)((long)pppuVar2 + -0x188) = puVar5;
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

