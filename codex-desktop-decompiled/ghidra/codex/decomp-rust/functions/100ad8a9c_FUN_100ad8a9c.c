
void FUN_100ad8a9c(undefined2 *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 0xd) {
    if (param_3 < 6) {
      if (param_3 == 3) {
        if ((short)*param_2 == 0x646d && *(char *)((long)param_2 + 2) == 'm') {
          *(undefined1 *)((long)param_1 + 1) = 3;
          *(undefined1 *)param_1 = 0;
          return;
        }
      }
      else if ((param_3 == 4) && ((int)*param_2 == 0x72657375)) {
        *(undefined1 *)((long)param_1 + 1) = 1;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
    else if (param_3 == 6) {
      if ((int)*param_2 == 0x74737973 && *(short *)((long)param_2 + 4) == 0x6d65) {
        *param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x67756c70 && *(short *)((long)param_2 + 4) == 0x6e69) {
        *(undefined1 *)((long)param_1 + 1) = 5;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
    else if (param_3 == 7) {
      if ((int)*param_2 == 0x6a6f7270 && *(int *)((long)param_2 + 3) == 0x7463656a) {
        *(undefined1 *)((long)param_1 + 1) = 2;
        *(undefined1 *)param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x6e6b6e75 && *(int *)((long)param_2 + 3) == 0x6e776f6e) {
        *(undefined1 *)((long)param_1 + 1) = 9;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
  }
  else if (param_3 < 0x19) {
    if (param_3 == 0xd) {
      if (*param_2 == 0x5f6e6f6973736573 && *(long *)((long)param_2 + 5) == 0x7367616c665f6e6f) {
        *(undefined1 *)((long)param_1 + 1) = 4;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 0x12) &&
            ((*param_2 == 0x65725f64756f6c63 && param_2[1] == 0x6e656d6572697571) &&
             (short)param_2[2] == 0x7374)) {
      *(undefined1 *)((long)param_1 + 1) = 6;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0x19) {
    if (((*param_2 == 0x6d5f79636167656c && param_2[1] == 0x635f646567616e61) &&
        param_2[2] == 0x646d5f6769666e6f) && (char)param_2[3] == 'm') {
      *(undefined1 *)((long)param_1 + 1) = 8;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0x1a) &&
          (((*param_2 == 0x6d5f79636167656c && param_2[1] == 0x635f646567616e61) &&
           param_2[2] == 0x69665f6769666e6f) && (short)param_2[3] == 0x656c)) {
    *(undefined1 *)((long)param_1 + 1) = 7;
    *(undefined1 *)param_1 = 0;
    return;
  }
  uVar1 = FUN_1087e4494(param_2,param_3,&UNK_10b222958,10);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  return;
}

