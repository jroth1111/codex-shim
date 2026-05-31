
void FUN_100b421c4(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 < 6) {
    if (param_3 == 3) {
      if (((*param_2 == 'l') && (param_2[1] == 'o')) && (param_2[2] == 'w')) {
        uVar2 = 0x100;
LAB_100b4230c:
        *param_1 = uVar2;
        return;
      }
    }
    else if ((((param_3 == 4) && (*param_2 == 'h')) && (param_2[1] == 'i')) &&
            ((param_2[2] == 'g' && (param_2[3] == 'h')))) {
      uVar2 = 0x300;
      goto LAB_100b4230c;
    }
  }
  else if (param_3 == 6) {
    if (((((*param_2 == 'm') && (param_2[1] == 'e')) && (param_2[2] == 'd')) &&
        ((param_2[3] == 'i' && (param_2[4] == 'u')))) && (param_2[5] == 'm')) {
      uVar2 = 0x200;
      goto LAB_100b4230c;
    }
  }
  else if ((((param_3 == 7) && (*param_2 == 'u')) &&
           ((param_2[1] == 'n' &&
            (((param_2[2] == 'k' && (param_2[3] == 'n')) && (param_2[4] == 'o')))))) &&
          ((param_2[5] == 'w' && (param_2[6] == 'n')))) {
    *param_1 = 0;
    return;
  }
  __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
  uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b223148,4);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if ((uStack_48 & 0x7fffffffffffffff) != 0) {
    _free(uStack_40);
  }
  return;
}

