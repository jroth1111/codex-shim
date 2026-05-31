
void FUN_100a60098(undefined2 *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 0xb) {
    if (param_3 == 4) {
      if ((int)*param_2 == 0x6e616c50) {
        *(undefined1 *)((long)param_1 + 1) = 3;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
    else if (param_3 == 9) {
      if (*param_2 == 0x6e696e6f73616552 && (char)param_2[1] == 'g') {
        *(undefined1 *)((long)param_1 + 1) = 4;
        *(undefined1 *)param_1 = 0;
        return;
      }
      if (*param_2 == 0x6372616553626557 && (char)param_2[1] == 'h') {
        *(undefined1 *)((long)param_1 + 1) = 5;
        *(undefined1 *)param_1 = 0;
        return;
      }
      if (*param_2 == 0x6569566567616d49 && (char)param_2[1] == 'w') {
        *(undefined1 *)((long)param_1 + 1) = 6;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
    else if (param_3 == 10) {
      if (*param_2 == 0x6d6f72506b6f6f48 && (short)param_2[1] == 0x7470) {
        *(undefined1 *)((long)param_1 + 1) = 1;
        *(undefined1 *)param_1 = 0;
        return;
      }
      if (*param_2 == 0x6e616843656c6946 && (short)param_2[1] == 0x6567) {
        *(undefined1 *)((long)param_1 + 1) = 8;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
  }
  else if (param_3 < 0xf) {
    if (param_3 == 0xb) {
      if (*param_2 == 0x7373654d72657355 && *(long *)((long)param_2 + 3) == 0x6567617373654d72) {
        *param_1 = 0;
        return;
      }
      if (*param_2 == 0x436c6f6f5470634d && *(long *)((long)param_2 + 3) == 0x6c6c61436c6f6f54) {
        *(undefined1 *)((long)param_1 + 1) = 9;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 0xc) && (*param_2 == 0x73654d746e656741 && (int)param_2[1] == 0x65676173))
    {
      *(undefined1 *)((long)param_1 + 1) = 2;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xf) {
    if (*param_2 == 0x6e65476567616d49 && *(long *)((long)param_2 + 7) == 0x6e6f69746172656e) {
      *(undefined1 *)((long)param_1 + 1) = 7;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0x11) &&
          ((*param_2 == 0x43747865746e6f43 && param_2[1] == 0x6f69746361706d6f) &&
           (char)param_2[2] == 'n')) {
    *(undefined1 *)((long)param_1 + 1) = 10;
    *(undefined1 *)param_1 = 0;
    return;
  }
  uVar1 = FUN_1087e4494(param_2,param_3,&UNK_10b22b6e8,0xb);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  return;
}

