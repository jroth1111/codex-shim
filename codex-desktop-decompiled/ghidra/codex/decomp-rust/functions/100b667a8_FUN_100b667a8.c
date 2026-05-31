
void FUN_100b667a8(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 7) {
    if ((((*param_2 == 'n') && (param_2[1] == 'e')) &&
        ((param_2[2] == 't' && ((param_2[3] == 'w' && (param_2[4] == 'o')))))) &&
       ((param_2[5] == 'r' && (param_2[6] == 'k')))) {
      *param_1 = 0;
      return;
    }
  }
  else if (((((((param_3 == 0xb) && (*param_2 == 'f')) && (param_2[1] == 'i')) &&
             ((param_2[2] == 'l' && (param_2[3] == 'e')))) &&
            ((param_2[4] == '_' && ((param_2[5] == 's' && (param_2[6] == 'y')))))) &&
           (param_2[7] == 's')) &&
          (((param_2[8] == 't' && (param_2[9] == 'e')) && (param_2[10] == 'm')))) {
    *param_1 = 0x100;
    return;
  }
  __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
  uVar1 = FUN_1087e41dc(uStack_40,uStack_38,&UNK_10b222548,2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if ((uStack_48 & 0x7fffffffffffffff) != 0) {
    _free(uStack_40);
  }
  return;
}

