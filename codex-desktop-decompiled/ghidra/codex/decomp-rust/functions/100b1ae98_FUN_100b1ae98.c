
void FUN_100b1ae98(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 < 0xc) {
    if (param_3 == 8) {
      if ((((*param_2 == 'r') && (param_2[1] == 'e')) && (param_2[2] == 'p')) &&
         (((param_2[3] == 'l' && (param_2[4] == 'a')) &&
          ((param_2[5] == 'c' && ((param_2[6] == 'e' && (param_2[7] == 'd')))))))) {
        uVar2 = 0x100;
        goto LAB_100b1b10c;
      }
    }
    else if (((((param_3 == 0xb) && (*param_2 == 'i')) && (param_2[1] == 'n')) &&
             ((param_2[2] == 't' && (param_2[3] == 'e')))) &&
            ((((param_2[4] == 'r' && ((param_2[5] == 'r' && (param_2[6] == 'u')))) &&
              (param_2[7] == 'p')) &&
             (((param_2[8] == 't' && (param_2[9] == 'e')) && (param_2[10] == 'd')))))) {
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xc) {
    if ((((*param_2 == 'r') && (param_2[1] == 'e')) &&
        ((param_2[2] == 'v' &&
         (((((param_2[3] == 'i' && (param_2[4] == 'e')) && (param_2[5] == 'w')) &&
           ((param_2[6] == '_' && (param_2[7] == 'e')))) && (param_2[8] == 'n')))))) &&
       (((param_2[9] == 'd' && (param_2[10] == 'e')) && (param_2[0xb] == 'd')))) {
      uVar2 = 0x200;
LAB_100b1b10c:
      *param_1 = uVar2;
      return;
    }
  }
  else if (((((param_3 == 0xe) && (*param_2 == 'b')) && (param_2[1] == 'u')) &&
           (((param_2[2] == 'd' && (param_2[3] == 'g')) &&
            ((param_2[4] == 'e' && ((param_2[5] == 't' && (param_2[6] == '_')))))))) &&
          (((param_2[7] == 'l' &&
            (((param_2[8] == 'i' && (param_2[9] == 'm')) && (param_2[10] == 'i')))) &&
           (((param_2[0xb] == 't' && (param_2[0xc] == 'e')) && (param_2[0xd] == 'd')))))) {
    uVar2 = 0x300;
    goto LAB_100b1b10c;
  }
  __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
  uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b222ff8,4);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if ((uStack_48 & 0x7fffffffffffffff) != 0) {
    _free(uStack_40);
  }
  return;
}

