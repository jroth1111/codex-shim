
void __ZN18codex_core_plugins5store11PluginStore11plugin_root17hcb8cebea94cc52ddE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001038d82b4(&lStack_78);
  __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
            (&lStack_60,param_4,param_5);
  __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
            (&uStack_48,uStack_58,uStack_50,uStack_70,uStack_68);
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[2] = uStack_38;
  if (lStack_60 != 0) {
    _free(uStack_58);
  }
  if (lStack_78 != 0) {
    _free(uStack_70);
  }
  return;
}

