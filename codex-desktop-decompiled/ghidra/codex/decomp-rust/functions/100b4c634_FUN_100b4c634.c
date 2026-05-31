
undefined8 FUN_100b4c634(char *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((((param_2 == 5) && (*param_1 == 'a')) && (param_1[1] == 'g')) &&
     (((param_1[2] == 'e' && (param_1[3] == 'n')) && (param_1[4] == 't')))) {
    uVar1 = 0;
  }
  else {
    __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_38);
    uVar1 = FUN_1087e4494(uStack_30,uStack_28,&UNK_10b223188,1);
    if ((uStack_38 & 0x7fffffffffffffff) != 0) {
      _free(uStack_30);
    }
  }
  return uVar1;
}

