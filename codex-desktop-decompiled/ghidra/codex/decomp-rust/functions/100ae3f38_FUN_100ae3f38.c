
void FUN_100ae3f38(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 4) {
    if (((*param_2 == 's') && (param_2[1] == 't')) && ((param_2[2] == 'e' && (param_2[3] == 'p'))))
    {
      *param_1 = 0;
      return;
    }
  }
  else if (((((param_3 == 6) && (*param_2 == 's')) && (param_2[1] == 't')) &&
           ((param_2[2] == 'a' && (param_2[3] == 't')))) &&
          ((param_2[4] == 'u' && (param_2[5] == 's')))) {
    *param_1 = 0x100;
    return;
  }
  __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
  uVar1 = FUN_1087e41dc(uStack_40,uStack_38,&UNK_10b2231c8,2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if ((uStack_48 & 0x7fffffffffffffff) != 0) {
    _free(uStack_40);
  }
  return;
}

