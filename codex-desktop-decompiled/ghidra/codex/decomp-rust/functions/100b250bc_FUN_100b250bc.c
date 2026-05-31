
void FUN_100b250bc(undefined2 *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 6) {
    if (param_3 == 3) {
      if ((short)*param_2 == 0x6f6c && *(char *)((long)param_2 + 2) == 'w') {
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 4) && ((int)*param_2 == 0x68676968)) {
      *(undefined1 *)((long)param_1 + 1) = 2;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 6) {
    if ((int)*param_2 == 0x6964656d && *(short *)((long)param_2 + 4) == 0x6d75) {
      *(undefined1 *)((long)param_1 + 1) = 1;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 8) && (*param_2 == 0x6c61636974697263)) {
    *(undefined1 *)((long)param_1 + 1) = 3;
    *(undefined1 *)param_1 = 0;
    return;
  }
  uVar1 = FUN_1087e4494(param_2,param_3,&UNK_10b223038,4);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  return;
}

