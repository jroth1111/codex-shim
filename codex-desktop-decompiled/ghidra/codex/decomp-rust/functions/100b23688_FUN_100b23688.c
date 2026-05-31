
void FUN_100b23688(undefined1 *param_1,char *param_2,long param_3)

{
  char cVar1;
  
  if (param_3 == 6) {
    if ((*param_2 == 's') && (param_2[1] == 't')) {
      if (param_2[2] == 'a') {
        if (((param_2[3] == 't') && (param_2[4] == 'u')) && (param_2[5] == 's')) {
          param_1[1] = 6;
          *param_1 = 0;
          return;
        }
      }
      else if (param_2[2] == 'd') {
        if (param_2[3] == 'e') {
          if ((param_2[4] == 'r') && (param_2[5] == 'r')) {
            param_1[1] = 3;
            *param_1 = 0;
            return;
          }
        }
        else if (((param_2[3] == 'o') && (param_2[4] == 'u')) && (param_2[5] == 't')) {
          param_1[1] = 2;
          *param_1 = 0;
          return;
        }
      }
    }
  }
  else if (param_3 == 7) {
    cVar1 = *param_2;
    if (cVar1 == 'c') {
      if (param_2[1] == 'a') {
        if ((((param_2[2] == 'l') && (param_2[3] == 'l')) && (param_2[4] == '_')) &&
           ((param_2[5] == 'i' && (param_2[6] == 'd')))) {
          param_1[1] = 0;
          *param_1 = 0;
          return;
        }
      }
      else if (((param_2[1] == 'h') && (param_2[2] == 'a')) &&
              ((param_2[3] == 'n' &&
               (((param_2[4] == 'g' && (param_2[5] == 'e')) && (param_2[6] == 's')))))) {
        param_1[1] = 5;
        *param_1 = 0;
        return;
      }
    }
    else if (cVar1 == 's') {
      if (((param_2[1] == 'u') && (param_2[2] == 'c')) &&
         (((param_2[3] == 'c' && ((param_2[4] == 'e' && (param_2[5] == 's')))) &&
          (param_2[6] == 's')))) {
        param_1[1] = 4;
        *param_1 = 0;
        return;
      }
    }
    else if ((((cVar1 == 't') && (param_2[1] == 'u')) && (param_2[2] == 'r')) &&
            (((param_2[3] == 'n' && (param_2[4] == '_')) &&
             ((param_2[5] == 'i' && (param_2[6] == 'd')))))) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 7;
  *param_1 = 0;
  return;
}

