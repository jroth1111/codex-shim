
void FUN_100a64ff8(undefined1 *param_1,char *param_2,long param_3)

{
  if (param_3 == 5) {
    if ((((*param_2 == '_') && (param_2[1] == 'm')) && (param_2[2] == 'e')) &&
       ((param_2[3] == 't' && (param_2[4] == 'a')))) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0x11) {
    if (((((*param_2 == 's') && (param_2[1] == 't')) &&
         ((param_2[2] == 'r' &&
          (((param_2[3] == 'u' && (param_2[4] == 'c')) && (param_2[5] == 't')))))) &&
        (((param_2[6] == 'u' && (param_2[7] == 'r')) &&
         ((param_2[8] == 'e' &&
          (((param_2[9] == 'd' && (param_2[10] == 'C')) &&
           ((param_2[0xb] == 'o' &&
            (((param_2[0xc] == 'n' && (param_2[0xd] == 't')) && (param_2[0xe] == 'e')))))))))))) &&
       ((param_2[0xf] == 'n' && (param_2[0x10] == 't')))) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 7) {
    if (*param_2 == 'c') {
      if (((param_2[1] == 'o') && (param_2[2] == 'n')) &&
         ((param_2[3] == 't' &&
          (((param_2[4] == 'e' && (param_2[5] == 'n')) && (param_2[6] == 't')))))) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
    }
    else if (((*param_2 == 'i') && (param_2[1] == 's')) &&
            ((((param_2[2] == 'E' && ((param_2[3] == 'r' && (param_2[4] == 'r')))) &&
              (param_2[5] == 'o')) && (param_2[6] == 'r')))) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 4;
  *param_1 = 0;
  return;
}

