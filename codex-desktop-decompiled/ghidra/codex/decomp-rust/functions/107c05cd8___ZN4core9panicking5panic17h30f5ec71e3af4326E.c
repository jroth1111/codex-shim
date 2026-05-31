
/* WARNING: Possible PIC construction at 0x000108a07e10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108a07e14) */
/* WARNING: Removing unreachable block (ram,0x000108a07e38) */
/* WARNING: Removing unreachable block (ram,0x000108a07e20) */

void __ZN4core9panicking5panic17h30f5ec71e3af4326E
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  long lStack_118;
  ulong auStack_c8 [3];
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 ***pppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 **ppuStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined2 uStack_28;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  auStack_48 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(param_1,param_2 << 1 | 1);
  pcStack_18 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E;
  puStack_38 = (undefined8 *)auStack_48;
  uStack_28 = 1;
  uStack_30 = param_3;
  puStack_20 = &stack0xfffffffffffffff0;
  auVar11 = __RNvCshXwFllX56pT_7___rustc17rust_begin_unwind(&puStack_38);
  uStack_70 = auVar11._8_8_;
  uStack_58 = 0x108a07d74;
  puVar5 = &UNK_10b392fd8;
  puVar6 = &uStack_68;
  puVar7 = puVar5;
  uStack_68 = param_3;
  ppuStack_60 = &puStack_20;
  auVar11 = __ZN4core9panicking19assert_failed_inner17hee377df488a177d4E
                      (auVar11._0_8_,&uStack_70,&UNK_10b392fd8,puVar6,&UNK_10b392fd8,param_4,param_5
                       ,param_6);
  uStack_90 = auVar11._8_8_;
  uStack_78 = 0x108a07da8;
  puStack_88 = puVar5;
  pppuStack_80 = &ppuStack_60;
  plVar4 = (long *)__ZN4core9panicking19assert_failed_inner17hee377df488a177d4E
                             (auVar11._0_8_,&uStack_90,&UNK_10b393070,&puStack_88,&UNK_10b393070,
                              puVar6,puVar7,param_4);
  lVar1 = *plVar4;
  lVar2 = plVar4[1];
  uVar8 = lVar1 * 2;
  if (uVar8 < 5) {
    uVar8 = 4;
  }
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar8;
  lVar9 = 8;
  uVar10 = 0;
  if ((SUB168(ZEXT816(0x18) * auVar11,8) == 0) && (uVar8 = uVar8 * 0x18, uVar8 < 0x7ffffffffffffff9)
     ) {
    if (lVar1 == 0) {
      if (uVar8 != 0) {
        _malloc(uVar8);
      }
    }
    else if (uVar8 == 0) {
      lStack_118 = 0;
      iVar3 = _posix_memalign(&lStack_118,8,0);
      if ((iVar3 == 0) && (lStack_118 != 0)) {
        _memcpy(lStack_118,lVar2,lVar1 * 0x18);
        _free(lVar2);
      }
    }
    else {
      _realloc(lVar2,uVar8);
    }
    lVar9 = 0x10;
    uVar10 = uVar8;
  }
  *(ulong *)((long)auStack_c8 + lVar9) = uVar10;
  return;
}

