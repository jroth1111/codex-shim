
void FUN_1013f91dc(long *param_1)

{
  long lVar1;
  long lVar2;
  int aiStack_b8 [2];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x0001004e0914(&lStack_98);
  lVar2 = lStack_88;
  lVar1 = lStack_90;
  if (lStack_98 == 2) {
    __ZN12codex_config10tui_keymap25normalize_keybinding_spec17hd582b5079fd96898E
              (aiStack_b8,lStack_88);
    if (aiStack_b8[0] == 1) {
      FUN_10112ce54(&lStack_98,&lStack_b0);
      param_1[5] = lStack_70;
      param_1[4] = lStack_78;
      param_1[7] = lStack_60;
      param_1[6] = lStack_68;
      param_1[9] = lStack_50;
      param_1[8] = lStack_58;
      param_1[10] = lStack_48;
      param_1[3] = lStack_80;
      param_1[2] = lStack_88;
      param_1[1] = lStack_90;
      *param_1 = lStack_98;
    }
    else {
      param_1[2] = lStack_a8;
      param_1[1] = lStack_b0;
      param_1[3] = lStack_a0;
      *param_1 = 2;
    }
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar2);
      return;
    }
  }
  else {
    param_1[5] = lStack_70;
    param_1[4] = lStack_78;
    param_1[7] = lStack_60;
    param_1[6] = lStack_68;
    param_1[9] = lStack_50;
    param_1[8] = lStack_58;
    param_1[10] = lStack_48;
    *param_1 = lStack_98;
    param_1[1] = lStack_90;
    param_1[2] = lStack_88;
    param_1[3] = lStack_80;
  }
  return;
}

