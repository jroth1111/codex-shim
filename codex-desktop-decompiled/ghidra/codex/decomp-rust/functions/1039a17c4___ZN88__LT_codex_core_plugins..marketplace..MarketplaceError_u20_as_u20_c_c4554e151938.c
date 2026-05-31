
void __ZN88__LT_codex_core_plugins__marketplace__MarketplaceError_u20_as_u20_core__fmt__Display_GT_3fmt17h08f3d90fa50e678aE
               (long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  long **pplStack_30;
  undefined *puStack_28;
  long **pplStack_20;
  undefined *puStack_18;
  
  lVar4 = *param_1;
  if (lVar4 < 3) {
    if (lVar4 == 0) {
      plStack_38 = param_1 + 3;
      plStack_48 = (long *)param_1[1];
      lStack_40 = param_1[2];
      pplStack_30 = &plStack_48;
      pplStack_20 = &plStack_38;
      puStack_28 = &DAT_103925cd0;
      puStack_18 = &DAT_103925d5c;
      uVar1 = *param_2;
      uVar2 = param_2[1];
      pcVar3 = s___108ac1f1a;
    }
    else if (lVar4 == 1) {
      plStack_48 = (long *)param_1[2];
      lStack_40 = param_1[3];
      pplStack_30 = &plStack_48;
      puStack_28 = &
                   __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
      ;
      uVar1 = *param_2;
      uVar2 = param_2[1];
      pcVar3 = s_marketplace_file_____does_not_ex_108afaf33;
    }
    else {
      plStack_38 = param_1 + 4;
      plStack_48 = (long *)param_1[2];
      lStack_40 = param_1[3];
      pplStack_30 = &plStack_48;
      puStack_28 = &
                   __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
      ;
      pplStack_20 = &plStack_38;
      puStack_18 = &DAT_103925ab8;
      uVar1 = *param_2;
      uVar2 = param_2[1];
      pcVar3 = s_invalid_marketplace_file______108afaf59;
    }
  }
  else if (lVar4 < 5) {
    if (lVar4 == 3) {
      plStack_38 = param_1 + 1;
      plStack_48 = param_1 + 4;
      pplStack_30 = &plStack_38;
      pplStack_20 = &plStack_48;
      puStack_28 = &DAT_103925ab8;
      puStack_18 = &DAT_103925ab8;
      uVar1 = *param_2;
      uVar2 = param_2[1];
      pcVar3 = s_plugin_____was_not_found_in_mark_108ad40c3;
    }
    else {
      plStack_38 = param_1 + 1;
      plStack_48 = param_1 + 4;
      pplStack_30 = &plStack_38;
      pplStack_20 = &plStack_48;
      puStack_28 = &DAT_103925ab8;
      puStack_18 = &DAT_103925ab8;
      uVar1 = *param_2;
      uVar2 = param_2[1];
      pcVar3 = s_plugin______is_not_available_for_108afaf7b;
    }
  }
  else {
    if (lVar4 == 5) {
                    /* WARNING: Could not recover jumptable at 0x0001039a187c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_108d9bbc8,0x1b);
      return;
    }
    plStack_48 = param_1 + 1;
    pplStack_30 = &plStack_48;
    puStack_28 = &DAT_103925ab8;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    pcVar3 = s__108af809e;
  }
  __ZN4core3fmt5write17h64810b21425781ecE(uVar1,uVar2,pcVar3,&pplStack_30);
  return;
}

