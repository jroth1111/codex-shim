
void FUN_100ac3d58(undefined1 *param_1,char *param_2,long param_3)

{
  if (param_3 < 7) {
    if (param_3 == 2) {
      if ((*param_2 == 'i') && (param_2[1] == 'd')) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
    }
    else if ((((param_3 == 6) && (*param_2 == 's')) && (param_2[1] == 't')) &&
            (((param_2[2] == 'a' && (param_2[3] == 't')) &&
             ((param_2[4] == 'u' && (param_2[5] == 's')))))) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 7) {
    if ((((*param_2 == 'c') && (param_2[1] == 'a')) && (param_2[2] == 'l')) &&
       (((param_2[3] == 'l' && (param_2[4] == '_')) && ((param_2[5] == 'i' && (param_2[6] == 'd'))))
       )) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 9) {
    if (*param_2 == 'a') {
      if (((param_2[1] == 'r') && (param_2[2] == 'g')) &&
         ((param_2[3] == 'u' &&
          ((((param_2[4] == 'm' && (param_2[5] == 'e')) && (param_2[6] == 'n')) &&
           ((param_2[7] == 't' && (param_2[8] == 's')))))))) {
        param_1[1] = 4;
        *param_1 = 0;
        return;
      }
    }
    else if (((((*param_2 == 'e') && (param_2[1] == 'x')) &&
              ((param_2[2] == 'e' &&
               (((param_2[3] == 'c' && (param_2[4] == 'u')) && (param_2[5] == 't')))))) &&
             ((param_2[6] == 'i' && (param_2[7] == 'o')))) && (param_2[8] == 'n')) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 5;
  *param_1 = 0;
  return;
}

