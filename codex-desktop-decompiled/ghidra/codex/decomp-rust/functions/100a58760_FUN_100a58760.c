
void FUN_100a58760(undefined1 *param_1,char *param_2,long param_3)

{
  char cVar1;
  
  if (param_3 < 9) {
    if (param_3 == 4) {
      if (((*param_2 == 'n') && (param_2[1] == 'a')) && ((param_2[2] == 'm' && (param_2[3] == 'e')))
         ) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
    }
    else if (param_3 == 5) {
      cVar1 = *param_2;
      if (cVar1 == '_') {
        if (((param_2[1] == 'm') && (param_2[2] == 'e')) &&
           ((param_2[3] == 't' && (param_2[4] == 'a')))) {
          param_1[1] = 5;
          *param_1 = 0;
          return;
        }
      }
      else if (cVar1 == 'i') {
        if ((((param_2[1] == 'c') && (param_2[2] == 'o')) && (param_2[3] == 'n')) &&
           (param_2[4] == 's')) {
          param_1[1] = 4;
          *param_1 = 0;
          return;
        }
      }
      else if (((cVar1 == 't') && (param_2[1] == 'i')) &&
              ((param_2[2] == 't' && ((param_2[3] == 'l' && (param_2[4] == 'e')))))) {
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
    }
  }
  else if (param_3 == 9) {
    if ((((((*param_2 == 'a') && (param_2[1] == 'r')) && (param_2[2] == 'g')) &&
         ((param_2[3] == 'u' && (param_2[4] == 'm')))) &&
        ((param_2[5] == 'e' && ((param_2[6] == 'n' && (param_2[7] == 't')))))) &&
       (param_2[8] == 's')) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if ((((((param_3 == 0xb) && (*param_2 == 'd')) && (param_2[1] == 'e')) &&
            (((param_2[2] == 's' && (param_2[3] == 'c')) &&
             ((param_2[4] == 'r' && ((param_2[5] == 'i' && (param_2[6] == 'p')))))))) &&
           (param_2[7] == 't')) &&
          (((param_2[8] == 'i' && (param_2[9] == 'o')) && (param_2[10] == 'n')))) {
    param_1[1] = 2;
    *param_1 = 0;
    return;
  }
  param_1[1] = 6;
  *param_1 = 0;
  return;
}

