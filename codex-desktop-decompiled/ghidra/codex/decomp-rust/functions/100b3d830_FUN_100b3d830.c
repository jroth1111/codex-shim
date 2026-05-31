
void FUN_100b3d830(undefined2 *param_1,char *param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 < 10) {
    if (param_3 == 4) {
      if ((((*param_2 == 'h') && (param_2[1] == 't')) && (param_2[2] == 't')) && (param_2[3] == 'p')
         ) {
        *param_1 = 0;
        return;
      }
      goto LAB_100b3dad8;
    }
    if ((((param_3 != 5) || (*param_2 != 'h')) ||
        ((param_2[1] != 't' || ((param_2[2] != 't' || (param_2[3] != 'p')))))) ||
       (param_2[4] != 's')) goto LAB_100b3dad8;
  }
  else {
    if (param_3 == 0xc) {
      if (((((((*param_2 != 'h') || (param_2[1] != 't')) || (param_2[2] != 't')) ||
            ((param_2[3] != 'p' || (param_2[4] != '-')))) ||
           ((param_2[5] != 'c' || ((param_2[6] != 'o' || (param_2[7] != 'n')))))) ||
          (param_2[8] != 'n')) || ((param_2[9] != 'e' || (param_2[10] != 'c')))) goto LAB_100b3dad8;
      cVar1 = param_2[0xb];
    }
    else {
      if (param_3 != 0xd) {
        if ((((param_3 != 10) || (*param_2 != 's')) || (param_2[1] != 'o')) ||
           (((param_2[2] != 'c' || (param_2[3] != 'k')) ||
            ((param_2[4] != 's' || ((param_2[5] != '5' || (param_2[6] != '_'))))))))
        goto LAB_100b3dad8;
        if (param_2[7] == 'u') {
          if ((param_2[8] == 'd') && (param_2[9] == 'p')) {
            uVar3 = 0x300;
            goto LAB_100b3da10;
          }
          goto LAB_100b3dad8;
        }
        if (((param_2[7] != 't') || (param_2[8] != 'c')) || (param_2[9] != 'p')) goto LAB_100b3dad8;
        uVar3 = 0x200;
        goto LAB_100b3da10;
      }
      if (((((*param_2 != 'h') || (param_2[1] != 't')) ||
           ((param_2[2] != 't' || ((param_2[3] != 'p' || (param_2[4] != 's')))))) ||
          ((param_2[5] != '_' ||
           ((((param_2[6] != 'c' || (param_2[7] != 'o')) || (param_2[8] != 'n')) ||
            ((param_2[9] != 'n' || (param_2[10] != 'e')))))))) || (param_2[0xb] != 'c'))
      goto LAB_100b3dad8;
      cVar1 = param_2[0xc];
    }
    if (cVar1 != 't') {
LAB_100b3dad8:
      __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
      uVar2 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b223098,6);
      *(undefined8 *)(param_1 + 4) = uVar2;
      *(undefined1 *)param_1 = 1;
      if ((uStack_48 & 0x7fffffffffffffff) != 0) {
        _free(uStack_40);
      }
      return;
    }
  }
  uVar3 = 0x100;
LAB_100b3da10:
  *param_1 = uVar3;
  return;
}

