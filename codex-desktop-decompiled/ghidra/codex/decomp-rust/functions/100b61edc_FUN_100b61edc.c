
void FUN_100b61edc(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 7) {
    if (*param_2 == 'a') {
      if (((((param_2[1] == 'b') && (param_2[2] == 'o')) && (param_2[3] == 'r')) &&
          ((param_2[4] == 't' && (param_2[5] == 'e')))) && (param_2[6] == 'd')) {
        uVar2 = 0x300;
        goto LAB_100b6207c;
      }
    }
    else if ((((*param_2 == 'r') && (param_2[1] == 'u')) &&
             ((param_2[2] == 'n' &&
              (((param_2[3] == 'n' && (param_2[4] == 'i')) && (param_2[5] == 'n')))))) &&
            (param_2[6] == 'g')) {
      *param_1 = 0;
      return;
    }
LAB_100b62094:
    __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
    uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b22de98,4);
    *(undefined8 *)(param_1 + 4) = uVar1;
    *(undefined1 *)param_1 = 1;
    if ((uStack_48 & 0x7fffffffffffffff) != 0) {
      _free(uStack_40);
    }
  }
  else {
    if (param_3 == 9) {
      if (((((*param_2 != 'c') || (param_2[1] != 'o')) || (param_2[2] != 'm')) ||
          (((param_2[3] != 'p' || (param_2[4] != 'l')) ||
           ((param_2[5] != 'e' || ((param_2[6] != 't' || (param_2[7] != 'e')))))))) ||
         (param_2[8] != 'd')) goto LAB_100b62094;
      uVar2 = 0x100;
    }
    else {
      if (((param_3 != 6) || (*param_2 != 'f')) ||
         ((((param_2[1] != 'a' || ((param_2[2] != 'i' || (param_2[3] != 'l')))) ||
           (param_2[4] != 'e')) || (param_2[5] != 'd')))) goto LAB_100b62094;
      uVar2 = 0x200;
    }
LAB_100b6207c:
    *param_1 = uVar2;
  }
  return;
}

