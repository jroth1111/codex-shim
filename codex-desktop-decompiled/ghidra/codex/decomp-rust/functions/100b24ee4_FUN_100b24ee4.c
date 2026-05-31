
void FUN_100b24ee4(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 < 6) {
    if (param_3 == 3) {
      if (((*param_2 == 'l') && (param_2[1] == 'o')) && (param_2[2] == 'w')) {
        *param_1 = 0;
        return;
      }
    }
    else if ((((param_3 == 4) && (*param_2 == 'h')) && (param_2[1] == 'i')) &&
            ((param_2[2] == 'g' && (param_2[3] == 'h')))) {
      uVar2 = 0x200;
      goto LAB_100b25038;
    }
  }
  else if (param_3 == 6) {
    if (((((*param_2 == 'm') && (param_2[1] == 'e')) && (param_2[2] == 'd')) &&
        ((param_2[3] == 'i' && (param_2[4] == 'u')))) && (param_2[5] == 'm')) {
      uVar2 = 0x100;
LAB_100b25038:
      *param_1 = uVar2;
      return;
    }
  }
  else if (((((param_3 == 8) && (*param_2 == 'c')) && (param_2[1] == 'r')) &&
           (((param_2[2] == 'i' && (param_2[3] == 't')) &&
            ((param_2[4] == 'i' && ((param_2[5] == 'c' && (param_2[6] == 'a')))))))) &&
          (param_2[7] == 'l')) {
    uVar2 = 0x300;
    goto LAB_100b25038;
  }
  __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
  uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b223038,4);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if ((uStack_48 & 0x7fffffffffffffff) != 0) {
    _free(uStack_40);
  }
  return;
}

