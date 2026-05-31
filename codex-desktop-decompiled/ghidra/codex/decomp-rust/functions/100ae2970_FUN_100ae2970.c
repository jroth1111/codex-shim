
void FUN_100ae2970(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 9) {
    if ((((((*param_2 == 'c') && (param_2[1] == 'o')) && (param_2[2] == 'm')) &&
         ((param_2[3] == 'p' && (param_2[4] == 'l')))) && (param_2[5] == 'e')) &&
       (((param_2[6] == 't' && (param_2[7] == 'e')) && (param_2[8] == 'd')))) {
      *param_1 = 0;
      return;
    }
LAB_100ae2b30:
    __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
    uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b222618,3);
    *(undefined8 *)(param_1 + 4) = uVar1;
    *(undefined1 *)param_1 = 1;
    if ((uStack_48 & 0x7fffffffffffffff) != 0) {
      _free(uStack_40);
    }
  }
  else {
    if (param_3 == 0xb) {
      if (((((*param_2 != 'i') || (param_2[1] != 'n')) || (param_2[2] != '_')) ||
          (((param_2[3] != 'p' || (param_2[4] != 'r')) ||
           ((param_2[5] != 'o' || ((param_2[6] != 'g' || (param_2[7] != 'r')))))))) ||
         ((param_2[8] != 'e' || ((param_2[9] != 's' || (param_2[10] != 's')))))) goto LAB_100ae2b30;
      uVar2 = 0x100;
    }
    else {
      if ((((((param_3 != 10) || (*param_2 != 'i')) || (param_2[1] != 'n')) ||
           ((param_2[2] != 'c' || (param_2[3] != 'o')))) ||
          (((param_2[4] != 'm' || ((param_2[5] != 'p' || (param_2[6] != 'l')))) ||
           (param_2[7] != 'e')))) || ((param_2[8] != 't' || (param_2[9] != 'e'))))
      goto LAB_100ae2b30;
      uVar2 = 0x200;
    }
    *param_1 = uVar2;
  }
  return;
}

