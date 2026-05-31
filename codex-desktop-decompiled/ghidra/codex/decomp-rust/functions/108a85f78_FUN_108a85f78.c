
ulong FUN_108a85f78(ulong *param_1,long param_2)

{
  ulong uVar1;
  int aiStack_38 [2];
  ulong uStack_30;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < param_2 + 1U) {
    uVar1 = param_2 + 1;
  }
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_108a85ef0(aiStack_38,*param_1,param_1[1],uVar1);
  if (aiStack_38[0] != 1) {
    *param_1 = uVar1;
    param_1[1] = uStack_30;
    uStack_30 = 0x8000000000000001;
  }
  return uStack_30;
}

