
void FUN_100b1f494(undefined1 *param_1,char *param_2,long param_3)

{
  if (param_3 < 0xb) {
    if (param_3 == 6) {
      if (((*param_2 == 'r') && (param_2[1] == 'e')) &&
         (((param_2[2] == 'a' && ((param_2[3] == 's' && (param_2[4] == 'o')))) &&
          (param_2[5] == 'n')))) {
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
    }
    else if (((((param_3 == 7) && (*param_2 == 't')) && (param_2[1] == 'u')) &&
             ((param_2[2] == 'r' && (param_2[3] == 'n')))) &&
            ((param_2[4] == '_' && ((param_2[5] == 'i' && (param_2[6] == 'd')))))) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xb) {
    if (((((((*param_2 == 'd') && (param_2[1] == 'u')) && (param_2[2] == 'r')) &&
          ((param_2[3] == 'a' && (param_2[4] == 't')))) &&
         ((param_2[5] == 'i' && ((param_2[6] == 'o' && (param_2[7] == 'n')))))) &&
        (param_2[8] == '_')) && ((param_2[9] == 'm' && (param_2[10] == 's')))) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if ((((((param_3 == 0xc) && (*param_2 == 'c')) && (param_2[1] == 'o')) &&
            (((param_2[2] == 'm' && (param_2[3] == 'p')) &&
             ((param_2[4] == 'l' && ((param_2[5] == 'e' && (param_2[6] == 't')))))))) &&
           ((param_2[7] == 'e' &&
            (((param_2[8] == 'd' && (param_2[9] == '_')) && (param_2[10] == 'a')))))) &&
          (param_2[0xb] == 't')) {
    param_1[1] = 2;
    *param_1 = 0;
    return;
  }
  param_1[1] = 4;
  *param_1 = 0;
  return;
}

