
void FUN_100b1ea24(undefined2 *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 8) {
    if (param_3 == 5) {
      if ((int)*param_2 == 0x64616572 && *(char *)((long)param_2 + 4) == 'y') {
        *(undefined1 *)((long)param_1 + 1) = 1;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 6) &&
            ((int)*param_2 == 0x6c696166 && *(short *)((long)param_2 + 4) == 0x6465)) {
      *(undefined1 *)((long)param_1 + 1) = 2;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 8) {
    if (*param_2 == 0x676e697472617473) {
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 9) && (*param_2 == 0x656c6c65636e6163 && (char)param_2[1] == 'd')) {
    *(undefined1 *)((long)param_1 + 1) = 3;
    *(undefined1 *)param_1 = 0;
    return;
  }
  uVar1 = FUN_1087e4494(param_2,param_3,&UNK_10b22e0d8,4);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  return;
}

