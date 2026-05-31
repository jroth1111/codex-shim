
void FUN_100adaab4(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 9) {
    if (((((*param_2 == 'c') && (param_2[1] == 'o')) && (param_2[2] == 'm')) &&
        (((param_2[3] == 'p' && (param_2[4] == 'l')) &&
         ((param_2[5] == 'e' && ((param_2[6] == 't' && (param_2[7] == 'e')))))))) &&
       (param_2[8] == 'd')) {
      uVar2 = 0x100;
LAB_100adac20:
      *param_1 = uVar2;
      return;
    }
  }
  else if (param_3 == 10) {
    if (((*param_2 == 'i') && (param_2[1] == 'n')) &&
       ((((param_2[2] == 'P' &&
          (((param_2[3] == 'r' && (param_2[4] == 'o')) && (param_2[5] == 'g')))) &&
         (((param_2[6] == 'r' && (param_2[7] == 'e')) && (param_2[8] == 's')))) &&
        (param_2[9] == 's')))) {
      *param_1 = 0;
      return;
    }
  }
  else if (((((param_3 == 6) && (*param_2 == 'f')) && (param_2[1] == 'a')) &&
           ((param_2[2] == 'i' && (param_2[3] == 'l')))) &&
          ((param_2[4] == 'e' && (param_2[5] == 'd')))) {
    uVar2 = 0x200;
    goto LAB_100adac20;
  }
  __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
  uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b222568,3);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if ((uStack_48 & 0x7fffffffffffffff) != 0) {
    _free(uStack_40);
  }
  return;
}

