
void FUN_100adb274(undefined2 *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 9) {
    if (param_3 == 7) {
      if ((int)*param_2 == 0x6e6e7572 && *(int *)((long)param_2 + 3) == 0x676e696e) {
        *(undefined1 *)((long)param_1 + 1) = 1;
        *(undefined1 *)param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x6f727265 && *(int *)((long)param_2 + 3) == 0x6465726f) {
        *(undefined1 *)((long)param_1 + 1) = 4;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 8) && (*param_2 == 0x6e776f6474756873)) {
      *(undefined1 *)((long)param_1 + 1) = 5;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 9) {
    if (*param_2 == 0x6574656c706d6f63 && (char)param_2[1] == 'd') {
      *(undefined1 *)((long)param_1 + 1) = 3;
      *(undefined1 *)param_1 = 0;
      return;
    }
    if (*param_2 == 0x6e756f665f746f6e && (char)param_2[1] == 'd') {
      *(undefined1 *)((long)param_1 + 1) = 6;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xb) {
    if (*param_2 == 0x7075727265746e69 && *(long *)((long)param_2 + 3) == 0x6465747075727265) {
      *(undefined1 *)((long)param_1 + 1) = 2;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0xc) && (*param_2 == 0x5f676e69646e6570 && (int)param_2[1] == 0x74696e69)) {
    *param_1 = 0;
    return;
  }
  uVar1 = FUN_1087e4494(param_2,param_3,&UNK_10b2229f8,7);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  return;
}

