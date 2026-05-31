
void FUN_104998aec(long *param_1,long *param_2)

{
  long lVar1;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2[1];
  __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
            (&lStack_60,lVar1,param_2[2]);
  __ZN25codex_utils_absolute_path10absolutize10absolutize17h28de722e70c9dcbeE
            (&lStack_48,uStack_58,uStack_50);
  if (lStack_48 == -0x8000000000000000) {
    *param_1 = -0x8000000000000000;
    param_1[1] = lStack_40;
  }
  else {
    *param_1 = lStack_48;
    param_1[1] = lStack_40;
    param_1[2] = lStack_38;
  }
  if (lStack_60 != 0) {
    _free(uStack_58);
  }
  if (*param_2 != 0) {
    _free(lVar1);
  }
  return;
}

