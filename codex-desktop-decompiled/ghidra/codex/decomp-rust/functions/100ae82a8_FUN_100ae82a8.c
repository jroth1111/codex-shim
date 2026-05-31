
void FUN_100ae82a8(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 < 7) {
    if (param_3 == 4) {
      if ((((*param_2 == 't') && (param_2[1] == 'e')) && (param_2[2] == 'x')) && (param_2[3] == 't')
         ) {
        *param_1 = 0;
        return;
      }
    }
    else if (param_3 == 5) {
      if (*param_2 == 'i') {
        if (((param_2[1] == 'm') && (param_2[2] == 'a')) &&
           ((param_2[3] == 'g' && (param_2[4] == 'e')))) {
          uVar2 = 0x100;
          goto LAB_100ae8484;
        }
      }
      else if (((*param_2 == 's') && (param_2[1] == 'k')) &&
              ((param_2[2] == 'i' && ((param_2[3] == 'l' && (param_2[4] == 'l')))))) {
        uVar2 = 0x300;
        goto LAB_100ae8484;
      }
    }
  }
  else if (param_3 == 0xb) {
    if ((((((*param_2 == 'l') && (param_2[1] == 'o')) && (param_2[2] == 'c')) &&
         (((param_2[3] == 'a' && (param_2[4] == 'l')) &&
          ((param_2[5] == '_' && ((param_2[6] == 'i' && (param_2[7] == 'm')))))))) &&
        (param_2[8] == 'a')) && ((param_2[9] == 'g' && (param_2[10] == 'e')))) {
      uVar2 = 0x200;
LAB_100ae8484:
      *param_1 = uVar2;
      return;
    }
  }
  else if ((((((param_3 == 7) && (*param_2 == 'm')) && (param_2[1] == 'e')) &&
            ((param_2[2] == 'n' && (param_2[3] == 't')))) && (param_2[4] == 'i')) &&
          ((param_2[5] == 'o' && (param_2[6] == 'n')))) {
    uVar2 = 0x400;
    goto LAB_100ae8484;
  }
  __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
  uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b22d820,5);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if ((uStack_48 & 0x7fffffffffffffff) != 0) {
    _free(uStack_40);
  }
  return;
}

