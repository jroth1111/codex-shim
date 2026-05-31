
void FUN_100ba3f14(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 < 7) {
    if (param_3 == 4) {
      if ((((*param_2 == 'r') && (param_2[1] == 'e')) && (param_2[2] == 'a')) && (param_2[3] == 'd')
         ) {
        *param_1 = 0;
        return;
      }
    }
    else if ((((param_3 == 6) && (*param_2 == 's')) &&
             ((param_2[1] == 'e' && ((param_2[2] == 'a' && (param_2[3] == 'r')))))) &&
            ((param_2[4] == 'c' && (param_2[5] == 'h')))) {
      uVar2 = 0x200;
      goto LAB_100ba40a4;
    }
  }
  else if (param_3 == 9) {
    if (((((*param_2 == 'l') && (param_2[1] == 'i')) && (param_2[2] == 's')) &&
        (((param_2[3] == 't' && (param_2[4] == 'F')) &&
         ((param_2[5] == 'i' && ((param_2[6] == 'l' && (param_2[7] == 'e')))))))) &&
       (param_2[8] == 's')) {
      uVar2 = 0x100;
LAB_100ba40a4:
      *param_1 = uVar2;
      return;
    }
  }
  else if ((((((param_3 == 7) && (*param_2 == 'u')) && (param_2[1] == 'n')) &&
            ((param_2[2] == 'k' && (param_2[3] == 'n')))) && (param_2[4] == 'o')) &&
          ((param_2[5] == 'w' && (param_2[6] == 'n')))) {
    uVar2 = 0x300;
    goto LAB_100ba40a4;
  }
  __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
  uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b231658,4);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if ((uStack_48 & 0x7fffffffffffffff) != 0) {
    _free(uStack_40);
  }
  return;
}

