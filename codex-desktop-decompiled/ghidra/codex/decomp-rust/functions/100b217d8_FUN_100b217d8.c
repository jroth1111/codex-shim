
undefined8 FUN_100b217d8(char *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((((((((param_2 == 0x18) && (*param_1 == 't')) && (param_1[1] == 'r')) &&
         (((param_1[2] == 'u' && (param_1[3] == 's')) &&
          ((param_1[4] == 't' && ((param_1[5] == 'e' && (param_1[6] == 'd')))))))) &&
        (param_1[7] == '_')) &&
       (((((param_1[8] == 'a' && (param_1[9] == 'c')) && (param_1[10] == 'c')) &&
         ((param_1[0xb] == 'e' && (param_1[0xc] == 's')))) &&
        ((param_1[0xd] == 's' && ((param_1[0xe] == '_' && (param_1[0xf] == 'f')))))))) &&
      ((param_1[0x10] == 'o' &&
       (((param_1[0x11] == 'r' && (param_1[0x12] == '_')) && (param_1[0x13] == 'c')))))) &&
     (((param_1[0x14] == 'y' && (param_1[0x15] == 'b')) &&
      ((param_1[0x16] == 'e' && (param_1[0x17] == 'r')))))) {
    uVar1 = 0;
  }
  else {
    __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_38);
    uVar1 = FUN_1087e4494(uStack_30,uStack_28,&UNK_10b222758,1);
    if ((uStack_38 & 0x7fffffffffffffff) != 0) {
      _free(uStack_30);
    }
  }
  return uVar1;
}

