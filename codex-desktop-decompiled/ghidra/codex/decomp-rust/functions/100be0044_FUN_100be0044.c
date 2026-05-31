
void FUN_100be0044(undefined2 *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 8) {
    if (param_3 == 5) {
      if ((int)*param_2 == 0x4b4f4f48 && *(char *)((long)param_2 + 4) == 'S') {
        *(undefined1 *)((long)param_1 + 1) = 6;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
    else if (param_3 == 6) {
      if ((int)*param_2 == 0x464e4f43 && *(short *)((long)param_2 + 4) == 0x4749) {
        *(undefined1 *)((long)param_1 + 1) = 1;
        *(undefined1 *)param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x4c494b53 && *(short *)((long)param_2 + 4) == 0x534c) {
        *(undefined1 *)((long)param_1 + 1) = 2;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 7) &&
            ((int)*param_2 == 0x47554c50 && *(int *)((long)param_2 + 3) == 0x534e4947)) {
      *(undefined1 *)((long)param_1 + 1) = 3;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 8) {
    if (*param_2 == 0x53444e414d4d4f43) {
      *(undefined1 *)((long)param_1 + 1) = 7;
      *(undefined1 *)param_1 = 0;
      return;
    }
    if (*param_2 == 0x534e4f4953534553) {
      *(undefined1 *)((long)param_1 + 1) = 8;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0x11) {
    if ((*param_2 == 0x565245535f50434d && param_2[1] == 0x49464e4f435f5245) &&
        (char)param_2[2] == 'G') {
      *(undefined1 *)((long)param_1 + 1) = 4;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 9) {
    if (*param_2 == 0x4d5f53544e454741 && (char)param_2[1] == 'D') {
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x544e454741425553 && (char)param_2[1] == 'S') {
      *(undefined1 *)((long)param_1 + 1) = 5;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  uVar1 = FUN_1087e4494(param_2,param_3,&UNK_10b232660,9);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  return;
}

