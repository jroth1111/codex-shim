
/* WARNING: Possible PIC construction at 0x000108a07bc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108a07bc4) */

void __ZN4core9panicking11panic_const23panic_const_rem_by_zero17h11ee5fec2018f001E
               (undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  uVar2 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f6364d,0x73,param_1);
  uStack_18 = 0x108a07abc;
  puStack_20 = &stack0xfffffffffffffff0;
  uVar2 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f58a33,0x3f,uVar2);
  uStack_28 = 0x108a07ad8;
  puStack_30 = (undefined1 *)&puStack_20;
  uVar2 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f58a52,0x61,uVar2);
  uStack_38 = 0x108a07af4;
  puStack_40 = (undefined1 *)&puStack_30;
  uVar2 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f63686,0x47,uVar2);
  uStack_48 = 0x108a07b10;
  puStack_50 = (undefined1 *)&puStack_40;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108f636a9,0x45);
  uStack_58 = 0x108a07b2c;
  puVar3 = &UNK_10b392c88;
  uStack_70 = extraout_x1;
  uStack_68 = uVar2;
  puStack_60 = (undefined1 *)&puStack_50;
  FUN_1055c3698();
  uStack_78 = 0x108a07b54;
  puVar4 = &UNK_10b392ca8;
  uStack_90 = extraout_x1_00;
  puStack_88 = puVar3;
  ppuStack_80 = &puStack_60;
  auVar5 = FUN_1055c3698();
  uStack_b0 = auVar5._8_8_;
  uStack_98 = 0x108a07b7c;
  puStack_a8 = puVar4;
  ppuStack_a0 = &ppuStack_80;
  auVar5 = FUN_1055c3698(auVar5._0_8_,uStack_b0,&UNK_10b392cc8);
  uStack_f8 = auVar5._0_8_;
  puStack_d0 = (undefined1 *)&ppuStack_c0;
  uStack_b8 = 0x108a07ba4;
  uStack_f0 = auVar5._8_8_ << 1 | 1;
  uStack_c8 = 0x108a07bc4;
  puStack_e8 = &uStack_f8;
  puStack_e0 = &UNK_10b392ce8;
  uStack_d8 = 0;
  uStack_d7 = 0;
  ppuStack_c0 = &ppuStack_a0;
  __RNvCshXwFllX56pT_7___rustc17rust_begin_unwind(&puStack_e8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108a07c40);
  (*pcVar1)();
}

