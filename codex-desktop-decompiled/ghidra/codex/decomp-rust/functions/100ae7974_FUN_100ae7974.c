
void FUN_100ae7974(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 < 0x10) {
    if (param_3 == 9) {
      if ((((*param_2 == 'r') && (param_2[1] == 'e')) &&
          ((param_2[2] == 'a' &&
           ((((param_2[3] == 'd' && (param_2[4] == '-')) && (param_2[5] == 'o')) &&
            ((param_2[6] == 'n' && (param_2[7] == 'l')))))))) && (param_2[8] == 'y')) {
        uVar2 = 0x100;
LAB_100ae7c84:
        *param_1 = uVar2;
        return;
      }
    }
    else if ((((param_3 == 0xf) && (*param_2 == 'w')) && (param_2[1] == 'o')) &&
            ((((param_2[2] == 'r' && (param_2[3] == 'k')) &&
              ((param_2[4] == 's' && ((param_2[5] == 'p' && (param_2[6] == 'a')))))) &&
             (((param_2[7] == 'c' &&
               ((((param_2[8] == 'e' && (param_2[9] == '-')) && (param_2[10] == 'w')) &&
                ((param_2[0xb] == 'r' && (param_2[0xc] == 'i')))))) &&
              ((param_2[0xd] == 't' && (param_2[0xe] == 'e')))))))) {
      uVar2 = 0x300;
      goto LAB_100ae7c84;
    }
  }
  else if (param_3 == 0x10) {
    if ((((*param_2 == 'e') && (param_2[1] == 'x')) &&
        (((param_2[2] == 't' &&
          (((param_2[3] == 'e' && (param_2[4] == 'r')) && (param_2[5] == 'n')))) &&
         (((param_2[6] == 'a' && (param_2[7] == 'l')) && (param_2[8] == '-')))))) &&
       (((param_2[9] == 's' && (param_2[10] == 'a')) &&
        (((param_2[0xb] == 'n' &&
          (((param_2[0xc] == 'd' && (param_2[0xd] == 'b')) && (param_2[0xe] == 'o')))) &&
         (param_2[0xf] == 'x')))))) {
      uVar2 = 0x200;
      goto LAB_100ae7c84;
    }
  }
  else if ((((param_3 == 0x12) && (*param_2 == 'd')) &&
           ((((param_2[1] == 'a' && ((param_2[2] == 'n' && (param_2[3] == 'g')))) &&
             (param_2[4] == 'e')) &&
            (((((param_2[5] == 'r' && (param_2[6] == '-')) && (param_2[7] == 'f')) &&
              ((param_2[8] == 'u' && (param_2[9] == 'l')))) && (param_2[10] == 'l')))))) &&
          ((((param_2[0xb] == '-' && (param_2[0xc] == 'a')) &&
            ((param_2[0xd] == 'c' &&
             (((param_2[0xe] == 'c' && (param_2[0xf] == 'e')) && (param_2[0x10] == 's')))))) &&
           (param_2[0x11] == 's')))) {
    *param_1 = 0;
    return;
  }
  __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
  uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b22d7e0,4);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if ((uStack_48 & 0x7fffffffffffffff) != 0) {
    _free(uStack_40);
  }
  return;
}

