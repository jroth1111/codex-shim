
void FUN_100e9df24(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*param_2 == -0x8000000000000000) {
    lStack_48 = param_2[2];
    lStack_50 = param_2[1];
    lStack_40 = param_2[3];
    plStack_70 = &lStack_50;
    puStack_68 = &
                 __ZN77__LT_codex_plugin__plugin_id__PluginIdError_u20_as_u20_core__fmt__Display_GT_3fmt17h6e97acd09425c891E
    ;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&puStack_38,s__failed_to_build_checked_out_plu_108acf602,&plStack_70);
    puStack_68 = (undefined *)uStack_30;
    plStack_70 = puStack_38;
    uStack_60 = uStack_28;
    if (lStack_50 != 0) {
      _free(lStack_48);
    }
    *param_1 = 0x8000000000000012;
    param_1[2] = puStack_68;
    param_1[1] = plStack_70;
    param_1[3] = uStack_60;
  }
  else {
    lVar1 = *param_2;
    lVar3 = param_2[3];
    lVar2 = param_2[2];
    param_1[2] = param_2[1];
    param_1[1] = lVar1;
    param_1[4] = lVar3;
    param_1[3] = lVar2;
    lVar1 = param_2[4];
    param_1[6] = param_2[5];
    param_1[5] = lVar1;
    *param_1 = 0x8000000000000014;
  }
  return;
}

