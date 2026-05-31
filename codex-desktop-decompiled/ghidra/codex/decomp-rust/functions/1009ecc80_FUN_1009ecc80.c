
void FUN_1009ecc80(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 10) {
    if (*param_2 == 'a') {
      if ((((param_2[1] == 'l') && (param_2[2] == 'l')) &&
          ((param_2[3] == 'S' &&
           ((((param_2[4] == 'e' && (param_2[5] == 'r')) && (param_2[6] == 'v')) &&
            ((param_2[7] == 'e' && (param_2[8] == 'r')))))))) && (param_2[9] == 's')) {
        *param_1 = 0;
        return;
      }
    }
    else if ((((*param_2 == 't') && (param_2[1] == 'h')) &&
             ((param_2[2] == 'i' &&
              (((param_2[3] == 's' && (param_2[4] == 'S')) && (param_2[5] == 'e')))))) &&
            ((((param_2[6] == 'r' && (param_2[7] == 'v')) && (param_2[8] == 'e')) &&
             (param_2[9] == 'r')))) {
      *param_1 = 0x200;
      return;
    }
  }
  else if ((((param_3 == 4) && (*param_2 == 'n')) && (param_2[1] == 'o')) &&
          ((param_2[2] == 'n' && (param_2[3] == 'e')))) {
    *param_1 = 0x100;
    return;
  }
  __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
  uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b229e90,3);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if ((uStack_48 & 0x7fffffffffffffff) != 0) {
    _free(uStack_40);
  }
  return;
}

