
void FUN_100b213c4(undefined2 *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 0x14) {
    if (param_3 == 5) {
      if ((int)*param_2 == 0x6e656761 && *(char *)((long)param_2 + 4) == 't') {
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 10) && (*param_2 == 0x6568735f72657375 && (short)param_2[1] == 0x6c6c)) {
      *(undefined1 *)((long)param_1 + 1) = 1;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0x14) {
    if ((*param_2 == 0x5f64656966696e75 && param_2[1] == 0x6174735f63657865) &&
        (int)param_2[2] == 0x70757472) {
      *(undefined1 *)((long)param_1 + 1) = 2;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0x18) &&
          ((*param_2 == 0x5f64656966696e75 && param_2[1] == 0x746e695f63657865) &&
           param_2[2] == 0x6e6f697463617265)) {
    *(undefined1 *)((long)param_1 + 1) = 3;
    *(undefined1 *)param_1 = 0;
    return;
  }
  uVar1 = FUN_1087e4494(param_2,param_3,&UNK_10b2226f8,4);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  return;
}

