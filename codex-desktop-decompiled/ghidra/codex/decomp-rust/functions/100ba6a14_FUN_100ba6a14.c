
void FUN_100ba6a14(undefined1 *param_1,char *param_2,long param_3)

{
  if (param_3 < 8) {
    if (param_3 == 5) {
      if (((*param_2 == 'l') && (param_2[1] == 'i')) &&
         ((param_2[2] == 'm' && ((param_2[3] == 'i' && (param_2[4] == 't')))))) {
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
    }
    else if ((((param_3 == 6) && (*param_2 == 'c')) && (param_2[1] == 'u')) &&
            (((param_2[2] == 'r' && (param_2[3] == 's')) &&
             ((param_2[4] == 'o' && (param_2[5] == 'r')))))) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 8) {
    if ((((*param_2 == 't') && (param_2[1] == 'h')) && (param_2[2] == 'r')) &&
       (((param_2[3] == 'e' && (param_2[4] == 'a')) &&
        ((param_2[5] == 'd' && ((param_2[6] == 'I' && (param_2[7] == 'd')))))))) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  else if ((((((((param_3 == 0xc) && (*param_2 == 'f')) && (param_2[1] == 'o')) &&
              ((param_2[2] == 'r' && (param_2[3] == 'c')))) && (param_2[4] == 'e')) &&
            ((param_2[5] == 'R' && (param_2[6] == 'e')))) &&
           ((param_2[7] == 'f' &&
            (((param_2[8] == 'e' && (param_2[9] == 't')) && (param_2[10] == 'c')))))) &&
          (param_2[0xb] == 'h')) {
    param_1[1] = 3;
    *param_1 = 0;
    return;
  }
  param_1[1] = 4;
  *param_1 = 0;
  return;
}

