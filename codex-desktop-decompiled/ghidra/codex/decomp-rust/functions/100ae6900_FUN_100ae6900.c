
void FUN_100ae6900(undefined2 *param_1,int *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 5) {
    if (param_3 == 3) {
      if ((short)*param_2 == 0x7361 && *(char *)((long)param_2 + 2) == 'h') {
        *(undefined1 *)((long)param_1 + 1) = 2;
        *(undefined1 *)param_1 = 0;
        return;
      }
      if ((short)*param_2 == 0x6f73 && *(char *)((long)param_2 + 2) == 'l') {
        *(undefined1 *)((long)param_1 + 1) = 0xf;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
    else if (param_3 == 4) {
      if (*param_2 == 0x65766f63) {
        *(undefined1 *)((long)param_1 + 1) = 7;
        *(undefined1 *)param_1 = 0;
        return;
      }
      if (*param_2 == 0x6f686365) {
        *(undefined1 *)((long)param_1 + 1) = 8;
        *(undefined1 *)param_1 = 0;
        return;
      }
      if (*param_2 == 0x65676173) {
        *(undefined1 *)((long)param_1 + 1) = 0xd;
        *(undefined1 *)param_1 = 0;
        return;
      }
      if (*param_2 == 0x656c6176) {
        *(undefined1 *)((long)param_1 + 1) = 0x11;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
  }
  else if (param_3 == 7) {
    if (*param_2 == 0x696e756a && *(int *)((long)param_2 + 3) == 0x72657069) {
      *(undefined1 *)((long)param_1 + 1) = 10;
      *(undefined1 *)param_1 = 0;
      return;
    }
    if (*param_2 == 0x6d696873 && *(int *)((long)param_2 + 3) == 0x72656d6d) {
      *(undefined1 *)((long)param_1 + 1) = 0xe;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 6) {
    if (*param_2 == 0x6c6c6162 && (short)param_2[1] == 0x6461) {
      *(undefined1 *)((long)param_1 + 1) = 3;
      *(undefined1 *)param_1 = 0;
      return;
    }
    if (*param_2 == 0x65657262 && (short)param_2[1] == 0x657a) {
      *(undefined1 *)((long)param_1 + 1) = 4;
      *(undefined1 *)param_1 = 0;
      return;
    }
    if (*param_2 == 0x75727073 && (short)param_2[1] == 0x6563) {
      *(undefined1 *)((long)param_1 + 1) = 0x10;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 5) {
    if (*param_2 == 0x6f6c6c61 && (char)param_2[1] == 'y') {
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x6f627261 && (char)param_2[1] == 'r') {
      *(undefined1 *)((long)param_1 + 1) = 1;
      *(undefined1 *)param_1 = 0;
      return;
    }
    if (*param_2 == 0x61646563 && (char)param_2[1] == 'r') {
      *(undefined1 *)((long)param_1 + 1) = 5;
      *(undefined1 *)param_1 = 0;
      return;
    }
    if (*param_2 == 0x61726f63 && (char)param_2[1] == 'l') {
      *(undefined1 *)((long)param_1 + 1) = 6;
      *(undefined1 *)param_1 = 0;
      return;
    }
    if (*param_2 == 0x65626d65 && (char)param_2[1] == 'r') {
      *(undefined1 *)((long)param_1 + 1) = 9;
      *(undefined1 *)param_1 = 0;
      return;
    }
    if (*param_2 == 0x6c70616d && (char)param_2[1] == 'e') {
      *(undefined1 *)((long)param_1 + 1) = 0xb;
      *(undefined1 *)param_1 = 0;
      return;
    }
    if (*param_2 == 0x6972616d && (char)param_2[1] == 'n') {
      *(undefined1 *)((long)param_1 + 1) = 0xc;
      *(undefined1 *)param_1 = 0;
      return;
    }
    if (*param_2 == 0x73726576 && (char)param_2[1] == 'e') {
      *(undefined1 *)((long)param_1 + 1) = 0x12;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  uVar1 = FUN_1087e4494(param_2,param_3,&UNK_10b222c98,0x13);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  return;
}

