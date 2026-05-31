
void FUN_100b2c174(undefined2 *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 0x21) {
    if (param_3 == 0x12) {
      if ((*param_2 == 0x6d696c5f65746172 && param_2[1] == 0x68636165725f7469) &&
          (short)param_2[2] == 0x6465) {
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 0x20) &&
            (((*param_2 == 0x636170736b726f77 && param_2[1] == 0x5f72656e776f5f65) &&
             param_2[2] == 0x5f73746964657263) && param_2[3] == 0x646574656c706564)) {
      *(undefined1 *)((long)param_1 + 1) = 1;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0x21) {
    if ((((*param_2 == 0x636170736b726f77 && param_2[1] == 0x7265626d656d5f65) &&
         param_2[2] == 0x737469646572635f) && param_2[3] == 0x6574656c7065645f) &&
        (char)param_2[4] == 'd') {
      *(undefined1 *)((long)param_1 + 1) = 2;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0x23) {
    if ((((*param_2 == 0x636170736b726f77 && param_2[1] == 0x5f72656e776f5f65) &&
         param_2[2] == 0x696c5f6567617375) && param_2[3] == 0x636165725f74696d) &&
        *(long *)((long)param_2 + 0x1b) == 0x646568636165725f) {
      *(undefined1 *)((long)param_1 + 1) = 3;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0x24) &&
          ((((*param_2 == 0x636170736b726f77 && param_2[1] == 0x7265626d656d5f65) &&
            param_2[2] == 0x6c5f65676173755f) && param_2[3] == 0x6165725f74696d69) &&
           (int)param_2[4] == 0x64656863)) {
    *(undefined1 *)((long)param_1 + 1) = 4;
    *(undefined1 *)param_1 = 0;
    return;
  }
  uVar1 = FUN_1087e4494(param_2,param_3,&UNK_10b2227e8,5);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  return;
}

