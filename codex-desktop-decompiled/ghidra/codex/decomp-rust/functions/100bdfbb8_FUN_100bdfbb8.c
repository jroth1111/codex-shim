
void FUN_100bdfbb8(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (7 < param_3) {
    if (param_3 == 9) {
      if (*param_2 == 'A') {
        if (((((param_2[1] == 'G') && (param_2[2] == 'E')) && (param_2[3] == 'N')) &&
            ((param_2[4] == 'T' && (param_2[5] == 'S')))) &&
           ((param_2[6] == '_' && ((param_2[7] == 'M' && (param_2[8] == 'D')))))) {
          *param_1 = 0;
          return;
        }
      }
      else if (((((*param_2 == 'S') && (param_2[1] == 'U')) && (param_2[2] == 'B')) &&
               (((param_2[3] == 'A' && (param_2[4] == 'G')) &&
                ((param_2[5] == 'E' && ((param_2[6] == 'N' && (param_2[7] == 'T')))))))) &&
              (param_2[8] == 'S')) {
        uVar2 = 0x500;
        goto LAB_100bdffc0;
      }
    }
    else if (param_3 == 0x11) {
      if (((*param_2 == 'M') && (param_2[1] == 'C')) &&
         (((((param_2[2] == 'P' &&
             (((param_2[3] == '_' && (param_2[4] == 'S')) && (param_2[5] == 'E')))) &&
            (((param_2[6] == 'R' && (param_2[7] == 'V')) && (param_2[8] == 'E')))) &&
           ((param_2[9] == 'R' && (param_2[10] == '_')))) &&
          (((param_2[0xb] == 'C' &&
            (((param_2[0xc] == 'O' && (param_2[0xd] == 'N')) && (param_2[0xe] == 'F')))) &&
           ((param_2[0xf] == 'I' && (param_2[0x10] == 'G')))))))) {
        uVar2 = 0x400;
        goto LAB_100bdffc0;
      }
    }
    else if (param_3 == 8) {
      if (*param_2 == 'S') {
        if ((((param_2[1] != 'E') || (param_2[2] != 'S')) || (param_2[3] != 'S')) ||
           (((param_2[4] != 'I' || (param_2[5] != 'O')) ||
            ((param_2[6] != 'N' || (param_2[7] != 'S')))))) goto LAB_100bdffd8;
        uVar2 = 0x800;
      }
      else {
        if (((*param_2 != 'C') || (param_2[1] != 'O')) ||
           ((param_2[2] != 'M' ||
            ((((param_2[3] != 'M' || (param_2[4] != 'A')) || (param_2[5] != 'N')) ||
             ((param_2[6] != 'D' || (param_2[7] != 'S')))))))) goto LAB_100bdffd8;
        uVar2 = 0x700;
      }
      goto LAB_100bdffc0;
    }
    goto LAB_100bdffd8;
  }
  if (param_3 == 5) {
    if (((*param_2 != 'H') || (param_2[1] != 'O')) ||
       ((param_2[2] != 'O' || ((param_2[3] != 'K' || (param_2[4] != 'S')))))) goto LAB_100bdffd8;
    uVar2 = 0x600;
  }
  else if (param_3 == 6) {
    if (*param_2 == 'C') {
      if ((((param_2[1] != 'O') || (param_2[2] != 'N')) || (param_2[3] != 'F')) ||
         ((param_2[4] != 'I' || (param_2[5] != 'G')))) goto LAB_100bdffd8;
      uVar2 = 0x100;
    }
    else {
      if (((*param_2 != 'S') || (param_2[1] != 'K')) ||
         ((param_2[2] != 'I' ||
          (((param_2[3] != 'L' || (param_2[4] != 'L')) || (param_2[5] != 'S')))))) {
LAB_100bdffd8:
        __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
        uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b232660,9);
        *(undefined8 *)(param_1 + 4) = uVar1;
        *(undefined1 *)param_1 = 1;
        if ((uStack_48 & 0x7fffffffffffffff) == 0) {
          return;
        }
        _free(uStack_40);
        return;
      }
      uVar2 = 0x200;
    }
  }
  else {
    if (((((param_3 != 7) || (*param_2 != 'P')) ||
         ((param_2[1] != 'L' || ((param_2[2] != 'U' || (param_2[3] != 'G')))))) ||
        (param_2[4] != 'I')) || ((param_2[5] != 'N' || (param_2[6] != 'S')))) goto LAB_100bdffd8;
    uVar2 = 0x300;
  }
LAB_100bdffc0:
  *param_1 = uVar2;
  return;
}

