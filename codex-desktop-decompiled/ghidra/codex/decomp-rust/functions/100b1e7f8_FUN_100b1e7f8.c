
void FUN_100b1e7f8(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 < 8) {
    if (param_3 == 5) {
      if ((((*param_2 != 'r') || (param_2[1] != 'e')) || (param_2[2] != 'a')) ||
         ((param_2[3] != 'd' || (param_2[4] != 'y')))) goto LAB_100b1e9b8;
      uVar2 = 0x100;
    }
    else {
      if ((((param_3 != 6) || (*param_2 != 'f')) ||
          ((param_2[1] != 'a' ||
           (((param_2[2] != 'i' || (param_2[3] != 'l')) || (param_2[4] != 'e')))))) ||
         (param_2[5] != 'd')) goto LAB_100b1e9b8;
      uVar2 = 0x200;
    }
LAB_100b1e9a0:
    *param_1 = uVar2;
  }
  else {
    if (param_3 == 8) {
      if (((((*param_2 == 's') && (param_2[1] == 't')) && (param_2[2] == 'a')) &&
          ((param_2[3] == 'r' && (param_2[4] == 't')))) &&
         ((param_2[5] == 'i' && ((param_2[6] == 'n' && (param_2[7] == 'g')))))) {
        *param_1 = 0;
        return;
      }
    }
    else if ((((param_3 == 9) && (*param_2 == 'c')) && (param_2[1] == 'a')) &&
            (((((param_2[2] == 'n' && (param_2[3] == 'c')) &&
               ((param_2[4] == 'e' && ((param_2[5] == 'l' && (param_2[6] == 'l')))))) &&
              (param_2[7] == 'e')) && (param_2[8] == 'd')))) {
      uVar2 = 0x300;
      goto LAB_100b1e9a0;
    }
LAB_100b1e9b8:
    __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
    uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b22e0d8,4);
    *(undefined8 *)(param_1 + 4) = uVar1;
    *(undefined1 *)param_1 = 1;
    if ((uStack_48 & 0x7fffffffffffffff) != 0) {
      _free(uStack_40);
    }
  }
  return;
}

