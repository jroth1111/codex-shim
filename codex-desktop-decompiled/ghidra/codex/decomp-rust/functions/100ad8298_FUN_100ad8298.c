
void FUN_100ad8298(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 3) {
    if (((*param_2 == 'a') && (param_2[1] == 'd')) && (param_2[2] == 'd')) {
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 6) {
    if (*param_2 == 'u') {
      if ((((param_2[1] == 'p') && (param_2[2] == 'd')) && (param_2[3] == 'a')) &&
         ((param_2[4] == 't' && (param_2[5] == 'e')))) {
        uVar2 = 0x200;
        goto LAB_100ad8380;
      }
    }
    else if (((*param_2 == 'd') && (param_2[1] == 'e')) &&
            ((param_2[2] == 'l' &&
             (((param_2[3] == 'e' && (param_2[4] == 't')) && (param_2[5] == 'e')))))) {
      uVar2 = 0x100;
LAB_100ad8380:
      *param_1 = uVar2;
      return;
    }
  }
  __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
  uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b22d2e0,3);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if ((uStack_48 & 0x7fffffffffffffff) != 0) {
    _free(uStack_40);
  }
  return;
}

