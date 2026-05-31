
void __ZN18codex_core_plugins5store11PluginStore16plugin_base_root17h95242e0097c3d31aE
               (long *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
            (&lStack_70,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28));
  uVar1 = uStack_68;
  __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
            (&lStack_58,uStack_68,uStack_60,*(undefined8 *)(param_2 + 8),
             *(undefined8 *)(param_2 + 0x10));
  lVar4 = lStack_48;
  lVar3 = lStack_50;
  lVar2 = lStack_58;
  if (lStack_70 != 0) {
    _free(uVar1);
  }
  __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
            (&lStack_70,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
            (&lStack_58,uStack_68,uStack_60,lVar3,lVar4);
  param_1[1] = lStack_50;
  *param_1 = lStack_58;
  param_1[2] = lStack_48;
  if (lStack_70 != 0) {
    _free(uStack_68);
  }
  if (lVar2 != 0) {
    _free(lVar3);
  }
  return;
}

