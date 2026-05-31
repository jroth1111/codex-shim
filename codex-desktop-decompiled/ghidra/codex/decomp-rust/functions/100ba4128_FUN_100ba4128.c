
void FUN_100ba4128(undefined2 *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 7) {
    if (param_3 == 4) {
      if ((int)*param_2 == 0x64616572) {
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 6) &&
            ((int)*param_2 == 0x72616573 && *(short *)((long)param_2 + 4) == 0x6863)) {
      *(undefined1 *)((long)param_1 + 1) = 2;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 9) {
    if (*param_2 == 0x656c69467473696c && (char)param_2[1] == 's') {
      *(undefined1 *)((long)param_1 + 1) = 1;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 7) &&
          ((int)*param_2 == 0x6e6b6e75 && *(int *)((long)param_2 + 3) == 0x6e776f6e)) {
    *(undefined1 *)((long)param_1 + 1) = 3;
    *(undefined1 *)param_1 = 0;
    return;
  }
  uVar1 = FUN_1087e4494(param_2,param_3,&UNK_10b231658,4);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  return;
}

