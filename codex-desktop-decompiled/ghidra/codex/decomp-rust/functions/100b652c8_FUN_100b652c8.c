
void FUN_100b652c8(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 < 8) {
    if (param_3 == 6) {
      if (((((*param_2 == 'f') && (param_2[1] == 'a')) && (param_2[2] == 'i')) &&
          ((param_2[3] == 'l' && (param_2[4] == 'e')))) && (param_2[5] == 'd')) {
        uVar2 = 0x400;
        goto LAB_100b65568;
      }
    }
    else if (param_3 == 7) {
      if (*param_2 == 'r') {
        if (((param_2[1] == 'u') && (param_2[2] == 'n')) &&
           ((param_2[3] == 'n' &&
            (((param_2[4] == 'i' && (param_2[5] == 'n')) && (param_2[6] == 'g')))))) {
          uVar2 = 0x100;
          goto LAB_100b65568;
        }
      }
      else if (((*param_2 == 'y') && (param_2[1] == 'i')) &&
              ((((param_2[2] == 'e' && ((param_2[3] == 'l' && (param_2[4] == 'd')))) &&
                (param_2[5] == 'e')) && (param_2[6] == 'd')))) {
        uVar2 = 0x200;
        goto LAB_100b65568;
      }
    }
  }
  else if (param_3 == 8) {
    if (((((*param_2 == 's') && (param_2[1] == 't')) && (param_2[2] == 'a')) &&
        ((param_2[3] == 'r' && (param_2[4] == 't')))) &&
       ((param_2[5] == 'i' && ((param_2[6] == 'n' && (param_2[7] == 'g')))))) {
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 9) {
    if ((((((*param_2 == 'c') && (param_2[1] == 'o')) && (param_2[2] == 'm')) &&
         ((param_2[3] == 'p' && (param_2[4] == 'l')))) && (param_2[5] == 'e')) &&
       (((param_2[6] == 't' && (param_2[7] == 'e')) && (param_2[8] == 'd')))) {
      uVar2 = 0x300;
LAB_100b65568:
      *param_1 = uVar2;
      return;
    }
  }
  else if (((((param_3 == 10) && (*param_2 == 't')) && (param_2[1] == 'e')) &&
           ((((param_2[2] == 'r' && (param_2[3] == 'm')) &&
             ((param_2[4] == 'i' && ((param_2[5] == 'n' && (param_2[6] == 'a')))))) &&
            (param_2[7] == 't')))) && ((param_2[8] == 'e' && (param_2[9] == 'd')))) {
    uVar2 = 0x500;
    goto LAB_100b65568;
  }
  __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
  uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b22de38,6);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if ((uStack_48 & 0x7fffffffffffffff) != 0) {
    _free(uStack_40);
  }
  return;
}

