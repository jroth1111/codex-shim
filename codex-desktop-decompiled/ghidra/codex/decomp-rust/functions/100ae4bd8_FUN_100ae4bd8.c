
void FUN_100ae4bd8(undefined2 *param_1,char *param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 7) {
    cVar1 = *param_2;
    if (cVar1 == 'b') {
      if ((((param_2[1] == 'l') && (param_2[2] == 'o')) && (param_2[3] == 'c')) &&
         (((param_2[4] == 'k' && (param_2[5] == 'e')) && (param_2[6] == 'd')))) {
        uVar3 = 0x300;
        goto LAB_100ae4dd0;
      }
    }
    else if (cVar1 == 'r') {
      if (((param_2[1] == 'u') && (param_2[2] == 'n')) &&
         ((param_2[3] == 'n' &&
          (((param_2[4] == 'i' && (param_2[5] == 'n')) && (param_2[6] == 'g')))))) {
        *param_1 = 0;
        return;
      }
    }
    else if (((cVar1 == 's') && (param_2[1] == 't')) &&
            ((((param_2[2] == 'o' && ((param_2[3] == 'p' && (param_2[4] == 'p')))) &&
              (param_2[5] == 'e')) && (param_2[6] == 'd')))) {
      uVar3 = 0x400;
      goto LAB_100ae4dd0;
    }
LAB_100ae4de8:
    __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
    uVar2 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b222b58,5);
    *(undefined8 *)(param_1 + 4) = uVar2;
    *(undefined1 *)param_1 = 1;
    if ((uStack_48 & 0x7fffffffffffffff) != 0) {
      _free(uStack_40);
    }
  }
  else {
    if (param_3 == 9) {
      if ((((*param_2 != 'c') || (param_2[1] != 'o')) ||
          ((param_2[2] != 'm' ||
           (((param_2[3] != 'p' || (param_2[4] != 'l')) || (param_2[5] != 'e')))))) ||
         (((param_2[6] != 't' || (param_2[7] != 'e')) || (param_2[8] != 'd')))) goto LAB_100ae4de8;
      uVar3 = 0x100;
    }
    else {
      if (((((param_3 != 6) || (*param_2 != 'f')) || (param_2[1] != 'a')) ||
          ((param_2[2] != 'i' || (param_2[3] != 'l')))) ||
         ((param_2[4] != 'e' || (param_2[5] != 'd')))) goto LAB_100ae4de8;
      uVar3 = 0x200;
    }
LAB_100ae4dd0:
    *param_1 = uVar3;
  }
  return;
}

