
void FUN_100b40450(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 < 9) {
    if (param_3 == 6) {
      if (((((*param_2 == 'd') && (param_2[1] == 'e')) && (param_2[2] == 'n')) &&
          ((param_2[3] == 'i' && (param_2[4] == 'e')))) && (param_2[5] == 'd')) {
        uVar2 = 0x200;
        goto LAB_100b406a4;
      }
    }
    else if (param_3 == 8) {
      if ((((*param_2 == 'a') && (param_2[1] == 'p')) && (param_2[2] == 'p')) &&
         (((param_2[3] == 'r' && (param_2[4] == 'o')) &&
          ((param_2[5] == 'v' && ((param_2[6] == 'e' && (param_2[7] == 'd')))))))) {
        uVar2 = 0x100;
LAB_100b406a4:
        *param_1 = uVar2;
        return;
      }
    }
    else if ((((param_3 == 7) && (*param_2 == 'a')) &&
             ((param_2[1] == 'b' && ((param_2[2] == 'o' && (param_2[3] == 'r')))))) &&
            ((param_2[4] == 't' && ((param_2[5] == 'e' && (param_2[6] == 'd')))))) {
      uVar2 = 0x400;
      goto LAB_100b406a4;
    }
  }
  else if (param_3 == 9) {
    if ((((*param_2 == 't') && (param_2[1] == 'i')) && (param_2[2] == 'm')) &&
       ((((param_2[3] == 'e' && (param_2[4] == 'd')) &&
         ((param_2[5] == '_' && ((param_2[6] == 'o' && (param_2[7] == 'u')))))) &&
        (param_2[8] == 't')))) {
      uVar2 = 0x300;
      goto LAB_100b406a4;
    }
  }
  else if ((((((param_3 == 0xb) && (*param_2 == 'i')) && (param_2[1] == 'n')) &&
            ((param_2[2] == '_' && (param_2[3] == 'p')))) &&
           ((param_2[4] == 'r' && ((param_2[5] == 'o' && (param_2[6] == 'g')))))) &&
          ((param_2[7] == 'r' &&
           (((param_2[8] == 'e' && (param_2[9] == 's')) && (param_2[10] == 's')))))) {
    *param_1 = 0;
    return;
  }
  __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
  uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b2230f8,5);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if ((uStack_48 & 0x7fffffffffffffff) != 0) {
    _free(uStack_40);
  }
  return;
}

