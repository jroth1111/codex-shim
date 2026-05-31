
void FUN_100bad174(undefined2 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  switch(param_3) {
  case 3:
    if ((short)*param_2 == 0x6c63 && *(char *)((long)param_2 + 2) == 'i') {
      *param_1 = 0;
      return;
    }
    break;
  case 4:
    if ((int)*param_2 == 0x63657865) {
      *(undefined1 *)((long)param_1 + 1) = 2;
      *(undefined1 *)param_1 = 0;
      return;
    }
    break;
  case 6:
    if ((int)*param_2 == 0x6f637376 && *(short *)((long)param_2 + 4) == 0x6564) {
      *(undefined1 *)((long)param_1 + 1) = 1;
      *(undefined1 *)param_1 = 0;
      return;
    }
    break;
  case 7:
    if ((int)*param_2 == 0x6e6b6e75 && *(int *)((long)param_2 + 3) == 0x6e776f6e) {
      *(undefined1 *)((long)param_1 + 1) = 9;
      *(undefined1 *)param_1 = 0;
      return;
    }
    break;
  case 8:
    if (*param_2 == 0x746e656741627573) {
      *(undefined1 *)((long)param_1 + 1) = 4;
      *(undefined1 *)param_1 = 0;
      return;
    }
    break;
  case 9:
    if (*param_2 == 0x6576726553707061 && (char)param_2[1] == 'r') {
      *(undefined1 *)((long)param_1 + 1) = 3;
      *(undefined1 *)param_1 = 0;
      return;
    }
    break;
  case 0xd:
    if (*param_2 == 0x746e656741627573 && *(long *)((long)param_2 + 5) == 0x726568744f746e65) {
      *(undefined1 *)((long)param_1 + 1) = 8;
      *(undefined1 *)param_1 = 0;
      return;
    }
    break;
  case 0xe:
    if (*param_2 == 0x746e656741627573 && *(long *)((long)param_2 + 6) == 0x776569766552746e) {
      *(undefined1 *)((long)param_1 + 1) = 5;
      *(undefined1 *)param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*param_2 == 0x746e656741627573 && *(long *)((long)param_2 + 7) == 0x746361706d6f4374) {
      *(undefined1 *)((long)param_1 + 1) = 6;
      *(undefined1 *)param_1 = 0;
      return;
    }
    break;
  case 0x13:
    if ((*param_2 == 0x746e656741627573 && param_2[1] == 0x7053646165726854) &&
        *(long *)((long)param_2 + 0xb) == 0x6e77617053646165) {
      *(undefined1 *)((long)param_1 + 1) = 7;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  uVar1 = FUN_1087e4494(param_2,param_3,&UNK_10b231f18,10);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  return;
}

