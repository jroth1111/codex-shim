
void FUN_106052c10(undefined1 *param_1,long *param_2,char param_3)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_3 != '\b') {
    puVar1 = (uint *)*param_2;
    if (3 < (ulong)param_2[1]) {
      uVar2 = *puVar1;
      *param_2 = (long)(puVar1 + 1);
      param_2[1] = param_2[1] - 4;
      *(ulong *)(param_1 + 8) = (ulong)uVar2;
      *param_1 = 0x52;
      return;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[7] = 0;
    *(undefined2 *)(param_1 + 5) = 0;
    *(uint **)(param_1 + 8) = puVar1;
    *param_1 = 0x13;
    return;
  }
  puVar1 = (uint *)*param_2;
  if (7 < (ulong)param_2[1]) {
    *param_2 = (long)(puVar1 + 2);
    param_2[1] = param_2[1] - 8;
    *(ulong *)(param_1 + 8) =
         ((ulong)*puVar1 << 8 | (ulong)(uint3)puVar1[1] << 0x28) >> 8 |
         (ulong)*(byte *)((long)puVar1 + 7) << 0x38;
    *param_1 = 0x52;
    return;
  }
  *param_1 = 0x13;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(uint **)(param_1 + 8) = puVar1;
  return;
}

