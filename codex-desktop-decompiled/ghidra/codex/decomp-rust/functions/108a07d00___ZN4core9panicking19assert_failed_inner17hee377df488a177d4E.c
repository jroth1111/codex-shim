
/* WARNING: Possible PIC construction at 0x000108a07e10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108a07e14) */
/* WARNING: Removing unreachable block (ram,0x000108a07e38) */
/* WARNING: Removing unreachable block (ram,0x000108a07e20) */

void __ZN4core9panicking19assert_failed_inner17hee377df488a177d4E
               (ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  long lStack_1c8;
  ulong auStack_178 [3];
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined1 ***pppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 **ppuStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [16];
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined *puStack_48;
  long *plStack_40;
  undefined *puStack_38;
  undefined8 *puStack_30;
  undefined *puStack_28;
  undefined8 *puStack_20;
  undefined *puStack_18;
  
  plStack_40 = &lStack_90;
  puStack_30 = &lStack_90;
  lVar2 = (param_1 & 0xff) * 8;
  uStack_70 = *(undefined8 *)(&UNK_10b392f20 + lVar2);
  uStack_68 = *(undefined8 *)(&UNK_108f63ba8 + lVar2);
  if (param_6 == 0) {
    puStack_38 = &DAT_1055b3498;
    puStack_30 = &uStack_80;
    pcVar4 = s_assertion__left_right__failed_le_108b0eeb7;
  }
  else {
    plStack_40 = &lStack_60;
    puStack_38 = &
                 __ZN59__LT_core__fmt__Arguments_u20_as_u20_core__fmt__Display_GT_3fmt17h37475dbdb5fb4019E
    ;
    puStack_20 = &uStack_80;
    puStack_18 = &DAT_1055b3498;
    pcVar4 = s_assertion__left_right__failed__l_108b0eeee;
    lStack_60 = param_6;
    uStack_58 = param_7;
  }
  puStack_50 = &uStack_70;
  puStack_28 = &DAT_1055b3498;
  puStack_48 = &DAT_1055b3828;
  lStack_90 = param_2;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_5;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(pcVar4,&puStack_50,param_8);
  uStack_98 = 0x108a07d00;
  puStack_a0 = &stack0xfffffffffffffff0;
  auVar14 = func_0x000108a07ba4(&UNK_108f636fa,0x26);
  uStack_a8 = 0x108a07d18;
  puVar8 = &UNK_10b392d00;
  uVar6 = 1;
  puStack_b0 = (undefined1 *)&puStack_a0;
  auVar14 = func_0x000108a07c14(auVar14._0_8_,auVar14._8_8_ << 1 | 1,1,&UNK_10b392d00);
  pcStack_b8 = __ZN4core9panicking5panic17h30f5ec71e3af4326E;
  puStack_c0 = (undefined1 *)&puStack_b0;
  auStack_f8 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                         (auVar14._0_8_,auVar14._8_8_ << 1 | 1);
  pcStack_c8 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E;
  puStack_e8 = (undefined8 *)auStack_f8;
  uStack_d8 = 1;
  uStack_e0 = uVar6;
  puStack_d0 = (undefined1 *)&puStack_c0;
  auVar14 = __RNvCshXwFllX56pT_7___rustc17rust_begin_unwind(&puStack_e8);
  uStack_120 = auVar14._8_8_;
  uStack_108 = 0x108a07d74;
  puVar7 = &UNK_10b392fd8;
  puVar9 = &uStack_118;
  puVar10 = puVar7;
  uStack_118 = uVar6;
  ppuStack_110 = &puStack_d0;
  auVar14 = __ZN4core9panicking19assert_failed_inner17hee377df488a177d4E
                      (auVar14._0_8_,&uStack_120,&UNK_10b392fd8,puVar9,&UNK_10b392fd8,puVar8,param_5
                       ,param_6);
  uStack_140 = auVar14._8_8_;
  uStack_128 = 0x108a07da8;
  puStack_138 = puVar7;
  pppuStack_130 = &ppuStack_110;
  plVar5 = (long *)__ZN4core9panicking19assert_failed_inner17hee377df488a177d4E
                             (auVar14._0_8_,&uStack_140,&UNK_10b393070,&puStack_138,&UNK_10b393070,
                              puVar9,puVar10,puVar8);
  lVar2 = *plVar5;
  lVar1 = plVar5[1];
  uVar11 = lVar2 * 2;
  if (uVar11 < 5) {
    uVar11 = 4;
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar11;
  lVar12 = 8;
  uVar13 = 0;
  if ((SUB168(ZEXT816(0x18) * auVar14,8) == 0) &&
     (uVar11 = uVar11 * 0x18, uVar11 < 0x7ffffffffffffff9)) {
    if (lVar2 == 0) {
      if (uVar11 != 0) {
        _malloc(uVar11);
      }
    }
    else if (uVar11 == 0) {
      lStack_1c8 = 0;
      iVar3 = _posix_memalign(&lStack_1c8,8,0);
      if ((iVar3 == 0) && (lStack_1c8 != 0)) {
        _memcpy(lStack_1c8,lVar1,lVar2 * 0x18);
        _free(lVar1);
      }
    }
    else {
      _realloc(lVar1,uVar11);
    }
    lVar12 = 0x10;
    uVar13 = uVar11;
  }
  *(ulong *)((long)auStack_178 + lVar12) = uVar13;
  return;
}

