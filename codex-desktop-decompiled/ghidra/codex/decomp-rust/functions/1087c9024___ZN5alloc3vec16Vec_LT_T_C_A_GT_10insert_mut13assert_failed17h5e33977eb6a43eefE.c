
/* WARNING: Possible PIC construction at 0x0001087c9090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087c90e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001087c90ec) */
/* WARNING: Removing unreachable block (ram,0x0001087c9110) */
/* WARNING: Removing unreachable block (ram,0x0001087c90f8) */

void __ZN5alloc3vec16Vec_LT_T_C_A_GT_10insert_mut13assert_failed17h5e33977eb6a43eefE(void)

{
  long lVar1;
  long *plVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined1 auVar4 [16];
  ulong auStack_168 [3];
  
  FUN_107c03c7c();
  auVar4 = thunk_FUN_1000262a8(s_insertion_index__is___should_be_<_108ab20eb);
  FUN_107c03c7c(auVar4._0_8_,auVar4._8_8_,0x1087c8ff8);
  thunk_FUN_1000262a8(s_swap_remove_index__is___should_b_108ab211d,extraout_x1,&UNK_10b1d2518);
  FUN_107c03c7c();
  thunk_FUN_1000262a8(s_removal_index__is___should_be_<_l_108ab2150);
  FUN_107c03c7c();
  auVar4 = thunk_FUN_1000262a8(s__at__split_index__is___should_be_108ab217f);
  lVar1 = __RNvCshXwFllX56pT_7___rustc26___rust_alloc_error_handler(auVar4._8_8_,auVar4._0_8_);
  if (lVar1 != 0) {
    func_0x0001087c906c();
  }
  plVar2 = (long *)__ZN4core9panicking9panic_fmt17h6f8816b337451651E
                             (&UNK_108c51956,0x23,&UNK_10b1d25d8);
  uVar3 = *plVar2 * 2;
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  if ((long)uVar3 < 0) {
    uVar3 = 0;
    lVar1 = 8;
  }
  else {
    if (*plVar2 == 0) {
      if (uVar3 != 0) {
        _malloc(uVar3);
      }
    }
    else {
      _realloc(plVar2[1],uVar3);
    }
    lVar1 = 0x10;
  }
  *(ulong *)((long)auStack_168 + lVar1) = uVar3;
  return;
}

