
void FUN_100ae8508(undefined2 *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 7) {
    if (param_3 == 4) {
      if ((int)*param_2 == 0x74786574) {
        *param_1 = 0;
        return;
      }
    }
    else if (param_3 == 5) {
      if ((int)*param_2 == 0x67616d69 && *(char *)((long)param_2 + 4) == 'e') {
        *(undefined1 *)((long)param_1 + 1) = 1;
        *(undefined1 *)param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x6c696b73 && *(char *)((long)param_2 + 4) == 'l') {
        *(undefined1 *)((long)param_1 + 1) = 3;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
  }
  else if (param_3 == 0xb) {
    if (*param_2 == 0x6d695f6c61636f6c && *(long *)((long)param_2 + 3) == 0x6567616d695f6c61) {
      *(undefined1 *)((long)param_1 + 1) = 2;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 7) &&
          ((int)*param_2 == 0x746e656d && *(int *)((long)param_2 + 3) == 0x6e6f6974)) {
    *(undefined1 *)((long)param_1 + 1) = 4;
    *(undefined1 *)param_1 = 0;
    return;
  }
  uVar1 = FUN_1087e4494(param_2,param_3,&UNK_10b22d820,5);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  return;
}

