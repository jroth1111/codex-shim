
/* WARNING: Possible PIC construction at 0x000108a07e10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108a07e14) */
/* WARNING: Removing unreachable block (ram,0x000108a07e38) */
/* WARNING: Removing unreachable block (ram,0x000108a07e20) */

void __ZN4core9panicking9panic_fmt17h6f8816b337451651E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  long lStack_108;
  ulong auStack_b8 [3];
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 *puStack_28;
  undefined8 uStack_20;
  undefined2 uStack_18;
  
  puStack_28 = &uStack_38;
  uStack_18 = 1;
  uStack_38 = param_1;
  uStack_30 = param_2;
  uStack_20 = param_3;
  auVar11 = __RNvCshXwFllX56pT_7___rustc17rust_begin_unwind(&puStack_28);
  uStack_60 = auVar11._8_8_;
  uStack_48 = 0x108a07d74;
  puVar5 = &UNK_10b392fd8;
  puVar6 = &uStack_58;
  puVar7 = puVar5;
  uStack_58 = param_3;
  puStack_50 = &stack0xfffffffffffffff0;
  auVar11 = __ZN4core9panicking19assert_failed_inner17hee377df488a177d4E
                      (auVar11._0_8_,&uStack_60,&UNK_10b392fd8,puVar6,&UNK_10b392fd8,param_4,param_5
                       ,param_6);
  uStack_80 = auVar11._8_8_;
  uStack_68 = 0x108a07da8;
  puStack_78 = puVar5;
  ppuStack_70 = &puStack_50;
  plVar4 = (long *)__ZN4core9panicking19assert_failed_inner17hee377df488a177d4E
                             (auVar11._0_8_,&uStack_80,&UNK_10b393070,&puStack_78,&UNK_10b393070,
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
      lStack_108 = 0;
      iVar3 = _posix_memalign(&lStack_108,8,0);
      if ((iVar3 == 0) && (lStack_108 != 0)) {
        _memcpy(lStack_108,lVar2,lVar1 * 0x18);
        _free(lVar2);
      }
    }
    else {
      _realloc(lVar2,uVar8);
    }
    lVar9 = 0x10;
    uVar10 = uVar8;
  }
  *(ulong *)((long)auStack_b8 + lVar9) = uVar10;
  return;
}

