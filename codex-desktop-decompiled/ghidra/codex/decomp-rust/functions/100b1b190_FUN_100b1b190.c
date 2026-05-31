
void FUN_100b1b190(undefined2 *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 0xc) {
    if (param_3 == 8) {
      if (*param_2 == 0x646563616c706572) {
        *(undefined1 *)((long)param_1 + 1) = 1;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 0xb) &&
            (*param_2 == 0x7075727265746e69 && *(long *)((long)param_2 + 3) == 0x6465747075727265))
    {
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xc) {
    if (*param_2 == 0x655f776569766572 && (int)param_2[1] == 0x6465646e) {
      *(undefined1 *)((long)param_1 + 1) = 2;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0xe) &&
          (*param_2 == 0x6c5f746567647562 && *(long *)((long)param_2 + 6) == 0x646574696d696c5f)) {
    *(undefined1 *)((long)param_1 + 1) = 3;
    *(undefined1 *)param_1 = 0;
    return;
  }
  uVar1 = FUN_1087e4494(param_2,param_3,&UNK_10b222ff8,4);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  return;
}

