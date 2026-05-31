
void FUN_100ae7d08(undefined2 *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 0x10) {
    if (param_3 == 9) {
      if (*param_2 == 0x6c6e6f2d64616572 && (char)param_2[1] == 'y') {
        *(undefined1 *)((long)param_1 + 1) = 1;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 0xf) &&
            (*param_2 == 0x636170736b726f77 && *(long *)((long)param_2 + 7) == 0x65746972772d6563))
    {
      *(undefined1 *)((long)param_1 + 1) = 3;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0x10) {
    if (*param_2 == 0x6c616e7265747865 && param_2[1] == 0x786f62646e61732d) {
      *(undefined1 *)((long)param_1 + 1) = 2;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0x12) &&
          ((*param_2 == 0x662d7265676e6164 && param_2[1] == 0x656363612d6c6c75) &&
           (short)param_2[2] == 0x7373)) {
    *param_1 = 0;
    return;
  }
  uVar1 = FUN_1087e4494(param_2,param_3,&UNK_10b22d7e0,4);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  return;
}

