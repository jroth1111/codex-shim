
void FUN_100b62dcc(undefined2 *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 6) {
    if ((int)*param_2 == 0x6c696166 && *(short *)((long)param_2 + 4) == 0x6465) {
      *(undefined1 *)((long)param_1 + 1) = 2;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 9) {
    if (*param_2 == 0x6574656c706d6f63 && (char)param_2[1] == 'd') {
      *(undefined1 *)((long)param_1 + 1) = 1;
      *(undefined1 *)param_1 = 0;
      return;
    }
    if (*param_2 == 0x656c6c65636e6163 && (char)param_2[1] == 'd') {
      *(undefined1 *)((long)param_1 + 1) = 3;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 7) {
    if ((int)*param_2 == 0x6e6e7572 && *(int *)((long)param_2 + 3) == 0x676e696e) {
      *param_1 = 0;
      return;
    }
    if ((int)*param_2 == 0x726f6261 && *(int *)((long)param_2 + 3) == 0x64657472) {
      *(undefined1 *)((long)param_1 + 1) = 4;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  uVar1 = FUN_1087e4494(param_2,param_3,&UNK_10b22ded8,5);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  return;
}

