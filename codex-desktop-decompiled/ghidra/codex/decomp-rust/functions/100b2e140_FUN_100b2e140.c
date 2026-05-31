
undefined8 FUN_100b2e140(char *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (((((((param_2 == 0x14) && (*param_1 == 'm')) && (param_1[1] == 'e')) &&
        (((param_1[2] == 'm' && (param_1[3] == 'o')) &&
         ((param_1[4] == 'r' && ((param_1[5] == 'y' && (param_1[6] == '_')))))))) &&
       ((param_1[7] == 'c' && (((param_1[8] == 'o' && (param_1[9] == 'n')) && (param_1[10] == 's')))
        ))) && (((param_1[0xb] == 'o' && (param_1[0xc] == 'l')) &&
                (((param_1[0xd] == 'i' && ((param_1[0xe] == 'd' && (param_1[0xf] == 'a')))) &&
                 (param_1[0x10] == 't')))))) &&
     (((param_1[0x11] == 'i' && (param_1[0x12] == 'o')) && (param_1[0x13] == 'n')))) {
    uVar1 = 0;
  }
  else {
    __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_38);
    uVar1 = FUN_1087e4494(uStack_30,uStack_28,&UNK_10b222838,1);
    if ((uStack_38 & 0x7fffffffffffffff) != 0) {
      _free(uStack_30);
    }
  }
  return uVar1;
}

