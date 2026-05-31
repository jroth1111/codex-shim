
void FUN_106052fb8(uint *param_1,undefined1 *param_2,long *param_3,byte param_4)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar2 = 0x1a;
  if (param_4 < 4) {
    if (param_4 == 1) {
      param_1 = (uint *)*param_3;
      if (param_3[1] != 0) {
        uVar1 = *param_1;
        *param_3 = (long)param_1 + 1;
        param_3[1] = param_3[1] + -1;
        *(ulong *)(param_2 + 8) = (ulong)(byte)uVar1;
        *param_2 = 0x52;
        return;
      }
    }
    else {
      if (param_4 != 2) goto LAB_1060530a8;
      param_1 = (uint *)*param_3;
      if (1 < (ulong)param_3[1]) {
        uVar1 = *param_1;
        *param_3 = (long)param_1 + 2;
        param_3[1] = param_3[1] - 2;
        *(ulong *)(param_2 + 8) = (ulong)(ushort)uVar1;
        *param_2 = 0x52;
        return;
      }
    }
  }
  else if (param_4 == 4) {
    param_1 = (uint *)*param_3;
    if (3 < (ulong)param_3[1]) {
      uVar1 = *param_1;
      *param_3 = (long)(param_1 + 1);
      param_3[1] = param_3[1] - 4;
      *(ulong *)(param_2 + 8) = (ulong)uVar1;
      *param_2 = 0x52;
      return;
    }
  }
  else {
    if (param_4 != 8) goto LAB_1060530a8;
    param_1 = (uint *)*param_3;
    if (7 < (ulong)param_3[1]) {
      *param_3 = (long)(param_1 + 2);
      param_3[1] = param_3[1] - 8;
      *(ulong *)(param_2 + 8) =
           ((ulong)*param_1 << 8 | (ulong)(uint3)param_1[1] << 0x28) >> 8 |
           (ulong)*(byte *)((long)param_1 + 7) << 0x38;
      *param_2 = 0x52;
      return;
    }
  }
  param_4 = 0;
  uVar2 = 0x13;
LAB_1060530a8:
  *param_2 = uVar2;
  param_2[7] = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(uint *)(param_2 + 1) = (uint)param_4;
  *(uint **)(param_2 + 8) = param_1;
  return;
}

