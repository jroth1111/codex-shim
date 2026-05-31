
void __ZN10serde_json5value2de42__LT_impl_u20_serde_json__value__Value_GT_10unexpected17he5d1f58814edc489E
               (undefined1 *param_1,ulong *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  
  uVar2 = *param_2 ^ 0x8000000000000000;
  if (-1 < (long)*param_2) {
    uVar2 = 5;
  }
  if (2 < (long)uVar2) {
    if (uVar2 != 3) {
      uVar1 = 10;
      if (uVar2 != 4) {
        uVar1 = 0xb;
      }
      *param_1 = uVar1;
      return;
    }
    uVar2 = param_2[3];
    *(ulong *)(param_1 + 8) = param_2[2];
    *(ulong *)(param_1 + 0x10) = uVar2;
    *param_1 = 5;
    return;
  }
  if (uVar2 == 0) {
    *param_1 = 7;
    return;
  }
  if (uVar2 == 1) {
    param_1[1] = (char)param_2[1];
    *param_1 = 0;
    return;
  }
  if (param_2[1] == 0) {
    *(ulong *)(param_1 + 8) = param_2[2];
    *param_1 = 1;
    return;
  }
  if (param_2[1] == 1) {
    *(ulong *)(param_1 + 8) = param_2[2];
    *param_1 = 2;
    return;
  }
  *(ulong *)(param_1 + 8) = param_2[2];
  *param_1 = 3;
  return;
}

