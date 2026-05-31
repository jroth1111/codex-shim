
void FUN_100b42390(undefined2 *param_1,int *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 6) {
    if (param_3 == 3) {
      if ((short)*param_2 == 0x6f6c && *(char *)((long)param_2 + 2) == 'w') {
        *(undefined1 *)((long)param_1 + 1) = 1;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 4) && (*param_2 == 0x68676968)) {
      *(undefined1 *)((long)param_1 + 1) = 3;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 6) {
    if (*param_2 == 0x6964656d && (short)param_2[1] == 0x6d75) {
      *(undefined1 *)((long)param_1 + 1) = 2;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 7) && (*param_2 == 0x6e6b6e75 && *(int *)((long)param_2 + 3) == 0x6e776f6e))
  {
    *param_1 = 0;
    return;
  }
  uVar1 = FUN_1087e4494(param_2,param_3,&UNK_10b223148,4);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  return;
}

