
void FUN_100ae48d0(undefined2 *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 0xd) {
    if (param_3 == 0xb) {
      if (*param_2 == 0x706d6f635f657270 && *(long *)((long)param_2 + 3) == 0x746361706d6f635f) {
        *(undefined1 *)((long)param_1 + 1) = 3;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
    else if (param_3 == 0xc) {
      if (*param_2 == 0x6c6f6f745f657270 && (int)param_2[1] == 0x6573755f) {
        *param_1 = 0;
        return;
      }
      if (*param_2 == 0x6d6f635f74736f70 && (int)param_2[1] == 0x74636170) {
        *(undefined1 *)((long)param_1 + 1) = 4;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 4) && ((int)*param_2 == 0x706f7473)) {
      *(undefined1 *)((long)param_1 + 1) = 9;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xd) {
    if (*param_2 == 0x6f6f745f74736f70 && *(long *)((long)param_2 + 5) == 0x6573755f6c6f6f74) {
      *(undefined1 *)((long)param_1 + 1) = 2;
      *(undefined1 *)param_1 = 0;
      return;
    }
    if (*param_2 == 0x5f6e6f6973736573 && *(long *)((long)param_2 + 5) == 0x74726174735f6e6f) {
      *(undefined1 *)((long)param_1 + 1) = 5;
      *(undefined1 *)param_1 = 0;
      return;
    }
    if (*param_2 == 0x746e656761627573 && *(long *)((long)param_2 + 5) == 0x706f74735f746e65) {
      *(undefined1 *)((long)param_1 + 1) = 8;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xe) {
    if (*param_2 == 0x746e656761627573 && *(long *)((long)param_2 + 6) == 0x74726174735f746e) {
      *(undefined1 *)((long)param_1 + 1) = 7;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0x12) {
    if ((*param_2 == 0x697373696d726570 && param_2[1] == 0x65757165725f6e6f) &&
        (short)param_2[2] == 0x7473) {
      *(undefined1 *)((long)param_1 + 1) = 1;
      *(undefined1 *)param_1 = 0;
      return;
    }
    if ((*param_2 == 0x6f72705f72657375 && param_2[1] == 0x6d6275735f74706d) &&
        (short)param_2[2] == 0x7469) {
      *(undefined1 *)((long)param_1 + 1) = 6;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  uVar1 = FUN_1087e4494(param_2,param_3,&UNK_10b222ab8,10);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  return;
}

