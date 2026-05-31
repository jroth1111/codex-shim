
undefined8 FUN_100b3e2c8(char *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (((((param_2 == 0xc) && (*param_1 == 's')) && (param_1[1] == 'u')) &&
      (((param_1[2] == 'm' && (param_1[3] == 'm')) &&
       ((param_1[4] == 'a' && ((param_1[5] == 'r' && (param_1[6] == 'y')))))))) &&
     ((param_1[7] == '_' &&
      ((((param_1[8] == 't' && (param_1[9] == 'e')) && (param_1[10] == 'x')) &&
       (param_1[0xb] == 't')))))) {
    uVar1 = 0;
  }
  else {
    __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_38);
    uVar1 = FUN_1087e4494(uStack_30,uStack_28,&UNK_10b22ea08,1);
    if ((uStack_38 & 0x7fffffffffffffff) != 0) {
      _free(uStack_30);
    }
  }
  return uVar1;
}

