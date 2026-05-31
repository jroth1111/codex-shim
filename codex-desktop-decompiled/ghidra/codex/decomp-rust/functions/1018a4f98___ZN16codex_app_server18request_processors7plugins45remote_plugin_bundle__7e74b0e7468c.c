
void __ZN16codex_app_server18request_processors7plugins45remote_plugin_bundle_install_error_to_jsonrpc17h4b7df7b4165be3f0E
               (undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = &
               __ZN104__LT_codex_core_plugins__remote_bundle__RemotePluginBundleInstallError_u20_as_u20_core__fmt__Display_GT_3fmt17h0f4c03c4b5c4d45aE
  ;
  uStack_30 = param_2;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&uStack_48,s_install_remote_plugin_bundle__108ade02b,&uStack_30);
  param_1[0xc] = 0xffffffffffff80a5;
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[2] = uStack_38;
  param_1[3] = 0x8000000000000005;
  FUN_101966904(param_2);
  return;
}

