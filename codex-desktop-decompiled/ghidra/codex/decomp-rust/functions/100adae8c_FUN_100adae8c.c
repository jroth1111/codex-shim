
void FUN_100adae8c(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (10 < param_3) {
    if (param_3 == 0xb) {
      if (((((*param_2 == 'i') && (param_2[1] == 'n')) && (param_2[2] == 't')) &&
          (((param_2[3] == 'e' && (param_2[4] == 'r')) &&
           ((param_2[5] == 'r' && ((param_2[6] == 'u' && (param_2[7] == 'p')))))))) &&
         ((param_2[8] == 't' && ((param_2[9] == 'e' && (param_2[10] == 'd')))))) {
        uVar2 = 0x200;
        goto LAB_100adb1f0;
      }
    }
    else if (((((((param_3 == 0xc) && (*param_2 == 'p')) && (param_2[1] == 'e')) &&
               ((param_2[2] == 'n' && (param_2[3] == 'd')))) && (param_2[4] == 'i')) &&
             (((param_2[5] == 'n' && (param_2[6] == 'g')) &&
              ((param_2[7] == '_' &&
               (((param_2[8] == 'i' && (param_2[9] == 'n')) && (param_2[10] == 'i')))))))) &&
            (param_2[0xb] == 't')) {
      *param_1 = 0;
      return;
    }
    goto LAB_100adb208;
  }
  if (param_3 == 7) {
    if (*param_2 == 'e') {
      if ((((param_2[1] != 'r') || (param_2[2] != 'r')) ||
          ((param_2[3] != 'o' || ((param_2[4] != 'r' || (param_2[5] != 'e')))))) ||
         (param_2[6] != 'd')) goto LAB_100adb208;
      uVar2 = 0x400;
    }
    else {
      if ((((*param_2 != 'r') || (param_2[1] != 'u')) || (param_2[2] != 'n')) ||
         (((param_2[3] != 'n' || (param_2[4] != 'i')) ||
          ((param_2[5] != 'n' || (param_2[6] != 'g')))))) {
LAB_100adb208:
        __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
        uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b2229f8,7);
        *(undefined8 *)(param_1 + 4) = uVar1;
        *(undefined1 *)param_1 = 1;
        if ((uStack_48 & 0x7fffffffffffffff) == 0) {
          return;
        }
        _free(uStack_40);
        return;
      }
      uVar2 = 0x100;
    }
  }
  else if (param_3 == 9) {
    if (*param_2 == 'c') {
      if ((((param_2[1] != 'o') || (param_2[2] != 'm')) ||
          ((param_2[3] != 'p' ||
           (((param_2[4] != 'l' || (param_2[5] != 'e')) || (param_2[6] != 't')))))) ||
         ((param_2[7] != 'e' || (param_2[8] != 'd')))) goto LAB_100adb208;
      uVar2 = 0x300;
    }
    else {
      if (((((*param_2 != 'n') || (param_2[1] != 'o')) ||
           ((param_2[2] != 't' ||
            (((param_2[3] != '_' || (param_2[4] != 'f')) || (param_2[5] != 'o')))))) ||
          ((param_2[6] != 'u' || (param_2[7] != 'n')))) || (param_2[8] != 'd')) goto LAB_100adb208;
      uVar2 = 0x600;
    }
  }
  else {
    if (((param_3 != 8) || (*param_2 != 's')) ||
       (((param_2[1] != 'h' ||
         ((((param_2[2] != 'u' || (param_2[3] != 't')) || (param_2[4] != 'd')) ||
          ((param_2[5] != 'o' || (param_2[6] != 'w')))))) || (param_2[7] != 'n'))))
    goto LAB_100adb208;
    uVar2 = 0x500;
  }
LAB_100adb1f0:
  *param_1 = uVar2;
  return;
}

