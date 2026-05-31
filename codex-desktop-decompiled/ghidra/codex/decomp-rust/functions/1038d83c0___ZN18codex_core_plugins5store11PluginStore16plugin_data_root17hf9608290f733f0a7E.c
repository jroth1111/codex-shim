
void __ZN18codex_core_plugins5store11PluginStore16plugin_data_root17hf9608290f733f0a7E
               (long *param_1,long param_2,long param_3)

{
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_60 = &DAT_103972de0;
  lStack_58 = param_3 + 0x18;
  puStack_50 = &DAT_103972de0;
  lStack_68 = param_3;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&lStack_80,s___108af9e58,&lStack_68);
  __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
            (&lStack_48,uStack_78,uStack_70);
  __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
            (&lStack_68,uStack_40,uStack_38,*(undefined8 *)(param_2 + 0x20),
             *(undefined8 *)(param_2 + 0x28));
  param_1[1] = (long)puStack_60;
  *param_1 = lStack_68;
  param_1[2] = lStack_58;
  if (lStack_48 != 0) {
    _free(uStack_40);
  }
  if (lStack_80 != 0) {
    _free(uStack_78);
  }
  return;
}

