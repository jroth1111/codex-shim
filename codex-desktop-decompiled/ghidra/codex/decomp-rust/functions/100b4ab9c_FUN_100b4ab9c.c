
void FUN_100b4ab9c(undefined1 *param_1,char *param_2,long param_3)

{
  if (param_3 < 0x11) {
    if (param_3 == 0xb) {
      if (((((*param_2 == 'r') && (param_2[1] == 'e')) && (param_2[2] == 's')) &&
          (((param_2[3] == 'p' && (param_2[4] == 'o')) &&
           ((param_2[5] == 'n' && ((param_2[6] == 's' && (param_2[7] == 'e')))))))) &&
         ((param_2[8] == '_' && ((param_2[9] == 'i' && (param_2[10] == 'd')))))) {
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
    }
    else if (((((param_3 == 0x10) && (*param_2 == 'r')) && (param_2[1] == 'e')) &&
             ((((param_2[2] == 's' && (param_2[3] == 'p')) &&
               ((param_2[4] == 'o' && ((param_2[5] == 'n' && (param_2[6] == 's')))))) &&
              (param_2[7] == 'e')))) &&
            ((((((param_2[8] == '_' && (param_2[9] == 'p')) && (param_2[10] == 'a')) &&
               ((param_2[0xb] == 'y' && (param_2[0xc] == 'l')))) && (param_2[0xd] == 'o')) &&
             ((param_2[0xe] == 'a' && (param_2[0xf] == 'd')))))) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0x13) {
    if ((((((((*param_2 == 'u') && (param_2[1] == 'p')) && (param_2[2] == 's')) &&
           ((param_2[3] == 't' && (param_2[4] == 'r')))) &&
          ((param_2[5] == 'e' && ((param_2[6] == 'a' && (param_2[7] == 'm')))))) &&
         (param_2[8] == '_')) &&
        ((((param_2[9] == 'r' && (param_2[10] == 'e')) && (param_2[0xb] == 'q')) &&
         (((param_2[0xc] == 'u' && (param_2[0xd] == 'e')) &&
          ((param_2[0xe] == 's' && ((param_2[0xf] == 't' && (param_2[0x10] == '_')))))))))) &&
       ((param_2[0x11] == 'i' && (param_2[0x12] == 'd')))) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  else if (((((param_3 == 0x11) && (*param_2 == 'i')) && (param_2[1] == 'n')) &&
           (((((param_2[2] == 'f' && (param_2[3] == 'e')) &&
              ((param_2[4] == 'r' && ((param_2[5] == 'e' && (param_2[6] == 'n')))))) &&
             ((param_2[7] == 'c' &&
              ((((param_2[8] == 'e' && (param_2[9] == '_')) && (param_2[10] == 'c')) &&
               ((param_2[0xb] == 'a' && (param_2[0xc] == 'l')))))))) &&
            ((param_2[0xd] == 'l' && ((param_2[0xe] == '_' && (param_2[0xf] == 'i')))))))) &&
          (param_2[0x10] == 'd')) {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  param_1[1] = 4;
  *param_1 = 0;
  return;
}

