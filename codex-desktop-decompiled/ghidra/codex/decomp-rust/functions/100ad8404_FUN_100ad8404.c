
void FUN_100ad8404(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (0xc < param_3) {
    if (param_3 < 0x19) {
      if (param_3 == 0xd) {
        if (((((((*param_2 != 's') || (param_2[1] != 'e')) || (param_2[2] != 's')) ||
              ((param_2[3] != 's' || (param_2[4] != 'i')))) ||
             ((param_2[5] != 'o' || ((param_2[6] != 'n' || (param_2[7] != '_')))))) ||
            ((param_2[8] != 'f' ||
             (((param_2[9] != 'l' || (param_2[10] != 'a')) || (param_2[0xb] != 'g')))))) ||
           (param_2[0xc] != 's')) goto LAB_100ad8a30;
        uVar2 = 0x400;
      }
      else {
        if ((((((((param_3 != 0x12) || (*param_2 != 'c')) ||
                ((param_2[1] != 'l' || ((param_2[2] != 'o' || (param_2[3] != 'u')))))) ||
               (param_2[4] != 'd')) ||
              (((param_2[5] != '_' || (param_2[6] != 'r')) || (param_2[7] != 'e')))) ||
             ((param_2[8] != 'q' || (param_2[9] != 'u')))) ||
            ((param_2[10] != 'i' || ((param_2[0xb] != 'r' || (param_2[0xc] != 'e')))))) ||
           ((param_2[0xd] != 'm' ||
            ((((param_2[0xe] != 'e' || (param_2[0xf] != 'n')) || (param_2[0x10] != 't')) ||
             (param_2[0x11] != 's')))))) goto LAB_100ad8a30;
        uVar2 = 0x600;
      }
    }
    else if (param_3 == 0x1a) {
      if ((((((*param_2 != 'l') || (param_2[1] != 'e')) || (param_2[2] != 'g')) ||
           ((param_2[3] != 'a' || (param_2[4] != 'c')))) ||
          (((param_2[5] != 'y' || ((param_2[6] != '_' || (param_2[7] != 'm')))) ||
           (param_2[8] != 'a')))) ||
         ((((param_2[9] != 'n' || (param_2[10] != 'a')) || (param_2[0xb] != 'g')) ||
          ((((param_2[0xc] != 'e' || (param_2[0xd] != 'd')) ||
            ((param_2[0xe] != '_' || ((param_2[0xf] != 'c' || (param_2[0x10] != 'o')))))) ||
           ((param_2[0x11] != 'n' ||
            (((((param_2[0x12] != 'f' || (param_2[0x13] != 'i')) || (param_2[0x14] != 'g')) ||
              ((param_2[0x15] != '_' || (param_2[0x16] != 'f')))) ||
             ((param_2[0x17] != 'i' || ((param_2[0x18] != 'l' || (param_2[0x19] != 'e'))))))))))))))
      goto LAB_100ad8a30;
      uVar2 = 0x700;
    }
    else {
      if (((((((((param_3 != 0x19) || (*param_2 != 'l')) || (param_2[1] != 'e')) ||
              ((param_2[2] != 'g' || (param_2[3] != 'a')))) || (param_2[4] != 'c')) ||
            ((param_2[5] != 'y' || (param_2[6] != '_')))) ||
           ((param_2[7] != 'm' ||
            (((param_2[8] != 'a' || (param_2[9] != 'n')) || (param_2[10] != 'a')))))) ||
          (((param_2[0xb] != 'g' || (param_2[0xc] != 'e')) || (param_2[0xd] != 'd')))) ||
         (((((param_2[0xe] != '_' || (param_2[0xf] != 'c')) ||
            ((param_2[0x10] != 'o' ||
             (((param_2[0x11] != 'n' || (param_2[0x12] != 'f')) || (param_2[0x13] != 'i')))))) ||
           ((param_2[0x14] != 'g' || (param_2[0x15] != '_')))) ||
          ((param_2[0x16] != 'm' || ((param_2[0x17] != 'd' || (param_2[0x18] != 'm'))))))))
      goto LAB_100ad8a30;
      uVar2 = 0x800;
    }
    goto LAB_100ad8a18;
  }
  if (param_3 < 6) {
    if (param_3 == 3) {
      if (((*param_2 != 'm') || (param_2[1] != 'd')) || (param_2[2] != 'm')) goto LAB_100ad8a30;
      uVar2 = 0x300;
    }
    else {
      if (((param_3 != 4) || (*param_2 != 'u')) ||
         ((param_2[1] != 's' || ((param_2[2] != 'e' || (param_2[3] != 'r')))))) goto LAB_100ad8a30;
      uVar2 = 0x100;
    }
LAB_100ad8a18:
    *param_1 = uVar2;
  }
  else {
    if (param_3 == 6) {
      if (*param_2 == 'p') {
        if (((param_2[1] == 'l') && (param_2[2] == 'u')) &&
           ((param_2[3] == 'g' && ((param_2[4] == 'i' && (param_2[5] == 'n')))))) {
          uVar2 = 0x500;
          goto LAB_100ad8a18;
        }
      }
      else if (((((*param_2 == 's') && (param_2[1] == 'y')) && (param_2[2] == 's')) &&
               ((param_2[3] == 't' && (param_2[4] == 'e')))) && (param_2[5] == 'm')) {
        *param_1 = 0;
        return;
      }
    }
    else if (param_3 == 7) {
      if (*param_2 == 'p') {
        if (((param_2[1] != 'r') || (param_2[2] != 'o')) ||
           ((param_2[3] != 'j' ||
            (((param_2[4] != 'e' || (param_2[5] != 'c')) || (param_2[6] != 't'))))))
        goto LAB_100ad8a30;
        uVar2 = 0x200;
      }
      else {
        if ((((*param_2 != 'u') || (param_2[1] != 'n')) ||
            (((param_2[2] != 'k' || ((param_2[3] != 'n' || (param_2[4] != 'o')))) ||
             (param_2[5] != 'w')))) || (param_2[6] != 'n')) goto LAB_100ad8a30;
        uVar2 = 0x900;
      }
      goto LAB_100ad8a18;
    }
LAB_100ad8a30:
    __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
    uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b222958,10);
    *(undefined8 *)(param_1 + 4) = uVar1;
    *(undefined1 *)param_1 = 1;
    if ((uStack_48 & 0x7fffffffffffffff) != 0) {
      _free(uStack_40);
    }
  }
  return;
}

