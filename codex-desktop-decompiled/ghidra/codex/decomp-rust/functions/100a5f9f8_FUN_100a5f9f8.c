
void FUN_100a5f9f8(undefined2 *param_1,char *param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 < 0xb) {
    if (param_3 == 4) {
      if ((((*param_2 == 'P') && (param_2[1] == 'l')) && (param_2[2] == 'a')) && (param_2[3] == 'n')
         ) {
        uVar3 = 0x300;
        goto LAB_100a60014;
      }
    }
    else if (param_3 == 9) {
      cVar1 = *param_2;
      if (cVar1 == 'I') {
        if (((((param_2[1] == 'm') && (param_2[2] == 'a')) &&
             ((param_2[3] == 'g' && ((param_2[4] == 'e' && (param_2[5] == 'V')))))) &&
            (param_2[6] == 'i')) && ((param_2[7] == 'e' && (param_2[8] == 'w')))) {
          uVar3 = 0x600;
          goto LAB_100a60014;
        }
      }
      else if (cVar1 == 'R') {
        if ((((param_2[1] == 'e') && (param_2[2] == 'a')) && (param_2[3] == 's')) &&
           (((param_2[4] == 'o' && (param_2[5] == 'n')) &&
            ((param_2[6] == 'i' && ((param_2[7] == 'n' && (param_2[8] == 'g')))))))) {
          uVar3 = 0x400;
          goto LAB_100a60014;
        }
      }
      else if (((((cVar1 == 'W') && (param_2[1] == 'e')) && (param_2[2] == 'b')) &&
               ((param_2[3] == 'S' && (param_2[4] == 'e')))) &&
              (((param_2[5] == 'a' && ((param_2[6] == 'r' && (param_2[7] == 'c')))) &&
               (param_2[8] == 'h')))) {
        uVar3 = 0x500;
        goto LAB_100a60014;
      }
    }
    else if (param_3 == 10) {
      if (*param_2 == 'F') {
        if ((((param_2[1] == 'i') && (param_2[2] == 'l')) && (param_2[3] == 'e')) &&
           ((((param_2[4] == 'C' && (param_2[5] == 'h')) &&
             ((param_2[6] == 'a' && ((param_2[7] == 'n' && (param_2[8] == 'g')))))) &&
            (param_2[9] == 'e')))) {
          uVar3 = 0x800;
          goto LAB_100a60014;
        }
      }
      else if (((((*param_2 == 'H') && (param_2[1] == 'o')) && (param_2[2] == 'o')) &&
               (((param_2[3] == 'k' && (param_2[4] == 'P')) &&
                ((param_2[5] == 'r' && ((param_2[6] == 'o' && (param_2[7] == 'm')))))))) &&
              ((param_2[8] == 'p' && (param_2[9] == 't')))) {
        uVar3 = 0x100;
        goto LAB_100a60014;
      }
    }
  }
  else if (param_3 < 0xf) {
    if (param_3 == 0xb) {
      if (*param_2 == 'M') {
        if (((param_2[1] == 'c') && (param_2[2] == 'p')) &&
           (((param_2[3] == 'T' &&
             (((param_2[4] == 'o' && (param_2[5] == 'o')) && (param_2[6] == 'l')))) &&
            ((((param_2[7] == 'C' && (param_2[8] == 'a')) && (param_2[9] == 'l')) &&
             (param_2[10] == 'l')))))) {
          uVar3 = 0x900;
          goto LAB_100a60014;
        }
      }
      else if ((((*param_2 == 'U') && (param_2[1] == 's')) &&
               ((param_2[2] == 'e' &&
                (((param_2[3] == 'r' && (param_2[4] == 'M')) && (param_2[5] == 'e')))))) &&
              (((param_2[6] == 's' && (param_2[7] == 's')) &&
               ((param_2[8] == 'a' && ((param_2[9] == 'g' && (param_2[10] == 'e')))))))) {
        *param_1 = 0;
        return;
      }
    }
    else if (((((((param_3 == 0xc) && (*param_2 == 'A')) && (param_2[1] == 'g')) &&
               ((param_2[2] == 'e' && (param_2[3] == 'n')))) &&
              ((param_2[4] == 't' && ((param_2[5] == 'M' && (param_2[6] == 'e')))))) &&
             (param_2[7] == 's')) &&
            ((((param_2[8] == 's' && (param_2[9] == 'a')) && (param_2[10] == 'g')) &&
             (param_2[0xb] == 'e')))) {
      uVar3 = 0x200;
      goto LAB_100a60014;
    }
  }
  else if (param_3 == 0xf) {
    if (((((*param_2 == 'I') && (param_2[1] == 'm')) && (param_2[2] == 'a')) &&
        (((param_2[3] == 'g' && (param_2[4] == 'e')) &&
         (((param_2[5] == 'G' && ((param_2[6] == 'e' && (param_2[7] == 'n')))) &&
          (param_2[8] == 'e')))))) &&
       (((((param_2[9] == 'r' && (param_2[10] == 'a')) && (param_2[0xb] == 't')) &&
         ((param_2[0xc] == 'i' && (param_2[0xd] == 'o')))) && (param_2[0xe] == 'n')))) {
      uVar3 = 0x700;
LAB_100a60014:
      *param_1 = uVar3;
      return;
    }
  }
  else if (((((((param_3 == 0x11) && (*param_2 == 'C')) && (param_2[1] == 'o')) &&
             ((param_2[2] == 'n' && (param_2[3] == 't')))) && (param_2[4] == 'e')) &&
           ((param_2[5] == 'x' && (param_2[6] == 't')))) &&
          (((param_2[7] == 'C' &&
            (((param_2[8] == 'o' && (param_2[9] == 'm')) && (param_2[10] == 'p')))) &&
           (((param_2[0xb] == 'a' && (param_2[0xc] == 'c')) &&
            ((param_2[0xd] == 't' &&
             (((param_2[0xe] == 'i' && (param_2[0xf] == 'o')) && (param_2[0x10] == 'n')))))))))) {
    uVar3 = 0xa00;
    goto LAB_100a60014;
  }
  __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
  uVar2 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b22b6e8,0xb);
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined1 *)param_1 = 1;
  if ((uStack_48 & 0x7fffffffffffffff) != 0) {
    _free(uStack_40);
  }
  return;
}

