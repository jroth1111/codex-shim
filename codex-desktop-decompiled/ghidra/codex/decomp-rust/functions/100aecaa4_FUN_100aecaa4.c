
void FUN_100aecaa4(undefined2 *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 0xc) {
    if (param_3 == 6) {
      if ((int)*param_2 == 0x69766572 && *(short *)((long)param_2 + 4) == 0x7765) {
        *param_1 = 0;
        return;
      }
    }
    else if (param_3 == 7) {
      if ((int)*param_2 == 0x706d6f63 && *(int *)((long)param_2 + 3) == 0x74636170) {
        *(undefined1 *)((long)param_1 + 1) = 1;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 5) && ((int)*param_2 == 0x6568746f && *(char *)((long)param_2 + 4) == 'r'))
    {
      *(undefined1 *)((long)param_1 + 1) = 4;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xc) {
    if (*param_2 == 0x735f646165726874 && (int)param_2[1] == 0x6e776170) {
      *(undefined1 *)((long)param_1 + 1) = 2;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0x14) &&
          ((*param_2 == 0x635f79726f6d656d && param_2[1] == 0x6164696c6f736e6f) &&
           (int)param_2[2] == 0x6e6f6974)) {
    *(undefined1 *)((long)param_1 + 1) = 3;
    *(undefined1 *)param_1 = 0;
    return;
  }
  uVar1 = FUN_1087e4494(param_2,param_3,&UNK_10b222f78,5);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  return;
}

