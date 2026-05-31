
void FUN_100ac4eac(undefined1 *param_1,char *param_2,long param_3)

{
  if (param_3 < 5) {
    if (param_3 == 2) {
      if ((*param_2 == 'i') && (param_2[1] == 'd')) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
    }
    else if ((((param_3 == 4) && (*param_2 == 'r')) && (param_2[1] == 'o')) &&
            ((param_2[2] == 'l' && (param_2[3] == 'e')))) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 5) {
    if ((((*param_2 == 'p') && (param_2[1] == 'h')) && (param_2[2] == 'a')) &&
       ((param_2[3] == 's' && (param_2[4] == 'e')))) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if (((param_3 == 7) && (*param_2 == 'c')) &&
          ((param_2[1] == 'o' &&
           ((((param_2[2] == 'n' && (param_2[3] == 't')) && (param_2[4] == 'e')) &&
            ((param_2[5] == 'n' && (param_2[6] == 't')))))))) {
    param_1[1] = 2;
    *param_1 = 0;
    return;
  }
  param_1[1] = 4;
  *param_1 = 0;
  return;
}

