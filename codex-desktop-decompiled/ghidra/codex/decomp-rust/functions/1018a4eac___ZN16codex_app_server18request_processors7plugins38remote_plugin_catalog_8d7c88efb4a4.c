
void __ZN16codex_app_server18request_processors7plugins38remote_plugin_catalog_error_to_jsonrpc17hcc961cbb2aaae717E
               (undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined *puStack_38;
  ulong *puStack_30;
  undefined *puStack_28;
  
  puStack_40 = &uStack_68;
  puStack_38 = &DAT_10192d9a4;
  puStack_28 = &
               __ZN91__LT_codex_core_plugins__remote__RemotePluginCatalogError_u20_as_u20_core__fmt__Display_GT_3fmt17h50761cde6ef447b3E
  ;
  uStack_68 = param_3;
  uStack_60 = param_4;
  puStack_30 = param_2;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&uStack_58,s___108add0c1,&puStack_40);
  uVar1 = *param_2;
  if (-1 < (long)uVar1) {
    uVar1 = 4;
  }
  uVar2 = 0xffffffffffff80a8;
  if ((1L << (uVar1 & 0x3f) & 0xeceecU) == 0) {
    if ((1L << (uVar1 & 0x3f) & 0x13103U) != 0) goto LAB_1018a4f18;
    if ((short)param_2[6] == 0x194) {
      uVar2 = 0xffffffffffff80a8;
      goto LAB_1018a4f18;
    }
  }
  uVar2 = 0xffffffffffff80a5;
LAB_1018a4f18:
  param_1[0xc] = uVar2;
  param_1[1] = uStack_50;
  *param_1 = uStack_58;
  param_1[2] = uStack_48;
  param_1[3] = 0x8000000000000005;
  FUN_101960064(param_2);
  return;
}

