
void FUN_100b21024(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 < 0x14) {
    if (param_3 == 5) {
      if ((((*param_2 == 'a') && (param_2[1] == 'g')) && (param_2[2] == 'e')) &&
         ((param_2[3] == 'n' && (param_2[4] == 't')))) {
        *param_1 = 0;
        return;
      }
    }
    else if ((((param_3 == 10) && (*param_2 == 'u')) &&
             ((param_2[1] == 's' &&
              (((((param_2[2] == 'e' && (param_2[3] == 'r')) && (param_2[4] == '_')) &&
                ((param_2[5] == 's' && (param_2[6] == 'h')))) && (param_2[7] == 'e')))))) &&
            ((param_2[8] == 'l' && (param_2[9] == 'l')))) {
      uVar2 = 0x100;
      goto LAB_100b21340;
    }
  }
  else if (param_3 == 0x14) {
    if ((((*param_2 == 'u') && (param_2[1] == 'n')) &&
        ((param_2[2] == 'i' &&
         ((((param_2[3] == 'f' && (param_2[4] == 'i')) && (param_2[5] == 'e')) &&
          ((param_2[6] == 'd' && (param_2[7] == '_')))))))) &&
       (((param_2[8] == 'e' && ((param_2[9] == 'x' && (param_2[10] == 'e')))) &&
        ((((param_2[0xb] == 'c' &&
           (((param_2[0xc] == '_' && (param_2[0xd] == 's')) && (param_2[0xe] == 't')))) &&
          (((param_2[0xf] == 'a' && (param_2[0x10] == 'r')) && (param_2[0x11] == 't')))) &&
         ((param_2[0x12] == 'u' && (param_2[0x13] == 'p')))))))) {
      uVar2 = 0x200;
LAB_100b21340:
      *param_1 = uVar2;
      return;
    }
  }
  else if (((((((param_3 == 0x18) && (*param_2 == 'u')) && (param_2[1] == 'n')) &&
             ((param_2[2] == 'i' && (param_2[3] == 'f')))) &&
            ((param_2[4] == 'i' && ((param_2[5] == 'e' && (param_2[6] == 'd')))))) &&
           (((param_2[7] == '_' &&
             ((((param_2[8] == 'e' && (param_2[9] == 'x')) && (param_2[10] == 'e')) &&
              (((param_2[0xb] == 'c' && (param_2[0xc] == '_')) &&
               ((param_2[0xd] == 'i' && ((param_2[0xe] == 'n' && (param_2[0xf] == 't')))))))))) &&
            (param_2[0x10] == 'e')))) &&
          ((((param_2[0x11] == 'r' && (param_2[0x12] == 'a')) && (param_2[0x13] == 'c')) &&
           (((param_2[0x14] == 't' && (param_2[0x15] == 'i')) &&
            ((param_2[0x16] == 'o' && (param_2[0x17] == 'n')))))))) {
    uVar2 = 0x300;
    goto LAB_100b21340;
  }
  __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
  uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b2226f8,4);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if ((uStack_48 & 0x7fffffffffffffff) != 0) {
    _free(uStack_40);
  }
  return;
}

