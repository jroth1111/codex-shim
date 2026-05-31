
void FUN_100bacbd4(undefined2 *param_1,char *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  switch(param_3) {
  case 3:
    if (((*param_2 == 'c') && (param_2[1] == 'l')) && (param_2[2] == 'i')) {
      *param_1 = 0;
      return;
    }
    break;
  case 4:
    if (((*param_2 == 'e') && (param_2[1] == 'x')) && ((param_2[2] == 'e' && (param_2[3] == 'c'))))
    {
      uVar2 = 0x200;
code_r0x000100bad0f0:
      *param_1 = uVar2;
      return;
    }
    break;
  case 6:
    if (((*param_2 == 'v') && (param_2[1] == 's')) &&
       ((param_2[2] == 'c' && (((param_2[3] == 'o' && (param_2[4] == 'd')) && (param_2[5] == 'e'))))
       )) {
      uVar2 = 0x100;
      goto code_r0x000100bad0f0;
    }
    break;
  case 7:
    if ((((*param_2 == 'u') && (param_2[1] == 'n')) && (param_2[2] == 'k')) &&
       (((param_2[3] == 'n' && (param_2[4] == 'o')) && ((param_2[5] == 'w' && (param_2[6] == 'n'))))
       )) {
      uVar2 = 0x900;
      goto code_r0x000100bad0f0;
    }
    break;
  case 8:
    if ((((*param_2 == 's') && (param_2[1] == 'u')) &&
        ((param_2[2] == 'b' && ((param_2[3] == 'A' && (param_2[4] == 'g')))))) &&
       ((param_2[5] == 'e' && ((param_2[6] == 'n' && (param_2[7] == 't')))))) {
      uVar2 = 0x400;
      goto code_r0x000100bad0f0;
    }
    break;
  case 9:
    if (((((*param_2 == 'a') && (param_2[1] == 'p')) &&
         ((param_2[2] == 'p' && ((param_2[3] == 'S' && (param_2[4] == 'e')))))) &&
        (param_2[5] == 'r')) &&
       (((param_2[6] == 'v' && (param_2[7] == 'e')) && (param_2[8] == 'r')))) {
      uVar2 = 0x300;
      goto code_r0x000100bad0f0;
    }
    break;
  case 0xd:
    if ((((*param_2 == 's') && (param_2[1] == 'u')) && (param_2[2] == 'b')) &&
       (((param_2[3] == 'A' && (param_2[4] == 'g')) &&
        (((param_2[5] == 'e' && ((param_2[6] == 'n' && (param_2[7] == 't')))) &&
         ((param_2[8] == 'O' &&
          ((((param_2[9] == 't' && (param_2[10] == 'h')) && (param_2[0xb] == 'e')) &&
           (param_2[0xc] == 'r')))))))))) {
      uVar2 = 0x800;
      goto code_r0x000100bad0f0;
    }
    break;
  case 0xe:
    if ((((*param_2 == 's') && (param_2[1] == 'u')) &&
        ((param_2[2] == 'b' && (((param_2[3] == 'A' && (param_2[4] == 'g')) && (param_2[5] == 'e')))
         ))) && (((param_2[6] == 'n' && (param_2[7] == 't')) &&
                 ((param_2[8] == 'R' &&
                  (((param_2[9] == 'e' && (param_2[10] == 'v')) &&
                   ((param_2[0xb] == 'i' && ((param_2[0xc] == 'e' && (param_2[0xd] == 'w')))))))))))
       ) {
      uVar2 = 0x500;
      goto code_r0x000100bad0f0;
    }
    break;
  case 0xf:
    if (((((((*param_2 == 's') && (param_2[1] == 'u')) && (param_2[2] == 'b')) &&
          ((param_2[3] == 'A' && (param_2[4] == 'g')))) &&
         (((param_2[5] == 'e' && ((param_2[6] == 'n' && (param_2[7] == 't')))) &&
          (param_2[8] == 'C')))) &&
        ((((param_2[9] == 'o' && (param_2[10] == 'm')) && (param_2[0xb] == 'p')) &&
         ((param_2[0xc] == 'a' && (param_2[0xd] == 'c')))))) && (param_2[0xe] == 't')) {
      uVar2 = 0x600;
      goto code_r0x000100bad0f0;
    }
    break;
  case 0x13:
    if (((((((((*param_2 == 's') && (param_2[1] == 'u')) && (param_2[2] == 'b')) &&
            ((param_2[3] == 'A' && (param_2[4] == 'g')))) && (param_2[5] == 'e')) &&
          ((param_2[6] == 'n' && (param_2[7] == 't')))) &&
         ((param_2[8] == 'T' &&
          (((param_2[9] == 'h' && (param_2[10] == 'r')) && (param_2[0xb] == 'e')))))) &&
        ((((param_2[0xc] == 'a' && (param_2[0xd] == 'd')) && (param_2[0xe] == 'S')) &&
         ((param_2[0xf] == 'p' && (param_2[0x10] == 'a')))))) &&
       ((param_2[0x11] == 'w' && (param_2[0x12] == 'n')))) {
      uVar2 = 0x700;
      goto code_r0x000100bad0f0;
    }
  }
  __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
  uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b231f18,10);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if ((uStack_48 & 0x7fffffffffffffff) != 0) {
    _free(uStack_40);
  }
  return;
}

