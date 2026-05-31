
void FUN_100adaca4(undefined1 *param_1,char *param_2,long param_3)

{
  if (param_3 < 9) {
    if (param_3 == 5) {
      if (((*param_2 == 'o') && (param_2[1] == 't')) && (param_2[2] == 'h')) {
        param_1[1] = 3;
        *param_1 = 0;
        return;
      }
    }
    else if (((param_3 == 6) && (*param_2 == 's')) &&
            (((param_2[1] == 'e' &&
              (((param_2[2] == 'a' && (param_2[3] == 'r')) && (param_2[4] == 'c')))) &&
             (param_2[5] == 'h')))) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 9) {
    if ((((*param_2 == 'o') && (param_2[1] == 'p')) && (param_2[2] == 'e')) &&
       ((((param_2[3] == 'n' && (param_2[4] == '_')) &&
         ((param_2[5] == 'p' && ((param_2[6] == 'a' && (param_2[7] == 'g')))))) &&
        (param_2[8] == 'e')))) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if ((((((param_3 == 0xc) && (*param_2 == 'f')) && (param_2[1] == 'i')) &&
            ((param_2[2] == 'n' && (param_2[3] == 'd')))) &&
           ((param_2[4] == '_' && ((param_2[5] == 'i' && (param_2[6] == 'n')))))) &&
          ((param_2[7] == '_' &&
           ((((param_2[8] == 'p' && (param_2[9] == 'a')) && (param_2[10] == 'g')) &&
            (param_2[0xb] == 'e')))))) {
    param_1[1] = 2;
    *param_1 = 0;
    return;
  }
  param_1[1] = 3;
  *param_1 = 0;
  return;
}

