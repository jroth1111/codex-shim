
void FUN_100ae3180(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 4) {
    if ((((*param_2 == 'u') && (param_2[1] == 's')) && (param_2[2] == 'e')) && (param_2[3] == 'r'))
    {
      *param_1 = 0;
      return;
    }
LAB_100ae3358:
    __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
    uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b222a88,3);
    *(undefined8 *)(param_1 + 4) = uVar1;
    *(undefined1 *)param_1 = 1;
    if ((uStack_48 & 0x7fffffffffffffff) != 0) {
      _free(uStack_40);
    }
  }
  else {
    if (param_3 == 8) {
      if (((*param_2 != 's') || (param_2[1] != 'u')) ||
         (((param_2[2] != 'b' ||
           (((param_2[3] != 'a' || (param_2[4] != 'g')) || (param_2[5] != 'e')))) ||
          ((param_2[6] != 'n' || (param_2[7] != 't')))))) goto LAB_100ae3358;
      uVar2 = 0x100;
    }
    else {
      if (((((param_3 != 0x14) || (*param_2 != 'm')) ||
           ((param_2[1] != 'e' || ((param_2[2] != 'm' || (param_2[3] != 'o')))))) ||
          ((param_2[4] != 'r' ||
           (((((param_2[5] != 'y' || (param_2[6] != '_')) || (param_2[7] != 'c')) ||
             ((param_2[8] != 'o' || (param_2[9] != 'n')))) || (param_2[10] != 's')))))) ||
         ((((param_2[0xb] != 'o' || (param_2[0xc] != 'l')) ||
           ((param_2[0xd] != 'i' ||
            (((param_2[0xe] != 'd' || (param_2[0xf] != 'a')) || (param_2[0x10] != 't')))))) ||
          (((param_2[0x11] != 'i' || (param_2[0x12] != 'o')) || (param_2[0x13] != 'n'))))))
      goto LAB_100ae3358;
      uVar2 = 0x200;
    }
    *param_1 = uVar2;
  }
  return;
}

