
void FUN_100aec760(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 < 0xc) {
    if (param_3 == 6) {
      if (((*param_2 == 'r') && (param_2[1] == 'e')) &&
         ((param_2[2] == 'v' &&
          (((param_2[3] == 'i' && (param_2[4] == 'e')) && (param_2[5] == 'w')))))) {
        *param_1 = 0;
        return;
      }
      goto LAB_100aeca38;
    }
    if (param_3 == 7) {
      if (((((*param_2 != 'c') || (param_2[1] != 'o')) || (param_2[2] != 'm')) ||
          ((param_2[3] != 'p' || (param_2[4] != 'a')))) ||
         ((param_2[5] != 'c' || (param_2[6] != 't')))) goto LAB_100aeca38;
      uVar2 = 0x100;
    }
    else {
      if ((((param_3 != 5) || (*param_2 != 'o')) ||
          ((param_2[1] != 't' || ((param_2[2] != 'h' || (param_2[3] != 'e')))))) ||
         (param_2[4] != 'r')) goto LAB_100aeca38;
      uVar2 = 0x400;
    }
  }
  else if (param_3 == 0xc) {
    if ((((((*param_2 != 't') || (param_2[1] != 'h')) || (param_2[2] != 'r')) ||
         (((param_2[3] != 'e' || (param_2[4] != 'a')) ||
          ((param_2[5] != 'd' || ((param_2[6] != '_' || (param_2[7] != 's')))))))) ||
        (param_2[8] != 'p')) ||
       (((param_2[9] != 'a' || (param_2[10] != 'w')) || (param_2[0xb] != 'n')))) goto LAB_100aeca38;
    uVar2 = 0x200;
  }
  else {
    if (((((param_3 != 0x14) || (*param_2 != 'm')) ||
         ((param_2[1] != 'e' || ((param_2[2] != 'm' || (param_2[3] != 'o')))))) ||
        ((param_2[4] != 'r' ||
         ((((param_2[5] != 'y' || (param_2[6] != '_')) || (param_2[7] != 'c')) ||
          ((param_2[8] != 'o' || (param_2[9] != 'n')))))))) ||
       ((((param_2[10] != 's' || ((param_2[0xb] != 'o' || (param_2[0xc] != 'l')))) ||
         (param_2[0xd] != 'i')) ||
        ((((param_2[0xe] != 'd' || (param_2[0xf] != 'a')) || (param_2[0x10] != 't')) ||
         (((param_2[0x11] != 'i' || (param_2[0x12] != 'o')) || (param_2[0x13] != 'n')))))))) {
LAB_100aeca38:
      __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
      uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b222f78,5);
      *(undefined8 *)(param_1 + 4) = uVar1;
      *(undefined1 *)param_1 = 1;
      if ((uStack_48 & 0x7fffffffffffffff) == 0) {
        return;
      }
      _free(uStack_40);
      return;
    }
    uVar2 = 0x300;
  }
  *param_1 = uVar2;
  return;
}

