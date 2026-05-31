
undefined1  [16] __RNvCshXwFllX56pT_7___rustc20___rust_panic_cleanup(long *param_1)

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  
  if (*param_1 == 0x54535552005a4f4d) {
    if ((undefined *)param_1[4] == &UNK_109af9aa0) {
      auVar4 = *(undefined1 (*) [16])(param_1 + 5);
      _free();
      return auVar4;
    }
  }
  else {
    __Unwind_DeleteException();
  }
  func_0x0001060213a0();
  FUN_1059dd6f8(extraout_x1);
  __RNvCshXwFllX56pT_7___rustc17___rust_drop_panic();
  auVar4 = func_0x000108a07d00();
  puVar2 = auVar4._8_8_;
  uVar1 = auVar4._0_8_;
  pcVar3 = (code *)*puVar2;
  if (pcVar3 != (code *)0x0) {
    auVar4 = (*pcVar3)(uVar1);
  }
  if (puVar2[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (*(code *)PTR__free_10b61b0a8)(uVar1);
    return auVar4;
  }
  return auVar4;
}

