
void FUN_100bb5658(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 7) {
    if (((((*param_2 == 's') && (param_2[1] == 'u')) && (param_2[2] == 'm')) &&
        ((param_2[3] == 'm' && (param_2[4] == 'a')))) &&
       ((param_2[5] == 'r' && (param_2[6] == 'y')))) {
      uVar2 = 0x100;
LAB_100bb5788:
      *param_1 = uVar2;
      return;
    }
  }
  else if (param_3 == 9) {
    if (((((*param_2 == 'n') && (param_2[1] == 'o')) && (param_2[2] == 't')) &&
        ((param_2[3] == 'L' && (param_2[4] == 'o')))) &&
       (((param_2[5] == 'a' && ((param_2[6] == 'd' && (param_2[7] == 'e')))) && (param_2[8] == 'd'))
       )) {
      *param_1 = 0;
      return;
    }
  }
  else if (((param_3 == 4) && (*param_2 == 'f')) &&
          ((param_2[1] == 'u' && ((param_2[2] == 'l' && (param_2[3] == 'l')))))) {
    uVar2 = 0x200;
    goto LAB_100bb5788;
  }
  __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
  uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b232440,3);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if ((uStack_48 & 0x7fffffffffffffff) != 0) {
    _free(uStack_40);
  }
  return;
}

