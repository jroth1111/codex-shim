
void FUN_100b3ddfc(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 4) {
    if ((((*param_2 == 'u') && (param_2[1] == 's')) && (param_2[2] == 'e')) && (param_2[3] == 'r'))
    {
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xb) {
    if ((((*param_2 == 'a') && (param_2[1] == 'u')) && (param_2[2] == 't')) &&
       (((param_2[3] == 'o' && (param_2[4] == '_')) &&
        (((param_2[5] == 'r' &&
          (((param_2[6] == 'e' && (param_2[7] == 'v')) && (param_2[8] == 'i')))) &&
         ((param_2[9] == 'e' && (param_2[10] == 'w')))))))) {
LAB_100b3dfb4:
      *param_1 = 0x100;
      return;
    }
  }
  else if (((((param_3 == 0x11) && (*param_2 == 'g')) &&
            ((param_2[1] == 'u' && ((param_2[2] == 'a' && (param_2[3] == 'r')))))) &&
           ((param_2[4] == 'd' &&
            (((((param_2[5] == 'i' && (param_2[6] == 'a')) && (param_2[7] == 'n')) &&
              ((param_2[8] == '_' && (param_2[9] == 's')))) && (param_2[10] == 'u')))))) &&
          (((param_2[0xb] == 'b' && (param_2[0xc] == 'a')) &&
           ((param_2[0xd] == 'g' &&
            (((param_2[0xe] == 'e' && (param_2[0xf] == 'n')) && (param_2[0x10] == 't'))))))))
  goto LAB_100b3dfb4;
  __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
  uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b2222c8,3);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if ((uStack_48 & 0x7fffffffffffffff) != 0) {
    _free(uStack_40);
  }
  return;
}

