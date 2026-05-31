
void FUN_100b3ff80(undefined1 *param_1,char *param_2,long param_3)

{
  if (param_3 == 4) {
    if (*param_2 == 'h') {
      if (((param_2[1] == 'o') && (param_2[2] == 's')) && (param_2[3] == 't')) {
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
    }
    else if (((*param_2 == 'p') && (param_2[1] == 'o')) &&
            ((param_2[2] == 'r' && (param_2[3] == 't')))) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 8) {
    if (((*param_2 == 'p') && (param_2[1] == 'r')) &&
       (((param_2[2] == 'o' && (((param_2[3] == 't' && (param_2[4] == 'o')) && (param_2[5] == 'c')))
         ) && ((param_2[6] == 'o' && (param_2[7] == 'l')))))) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  else if (((param_3 == 6) && (*param_2 == 't')) &&
          ((param_2[1] == 'a' &&
           ((((param_2[2] == 'r' && (param_2[3] == 'g')) && (param_2[4] == 'e')) &&
            (param_2[5] == 't')))))) {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  param_1[1] = 4;
  *param_1 = 0;
  return;
}

