
void FUN_100ae3bac(undefined1 *param_1,char *param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = param_3 - 2U >> 2 | param_3 - 2U << 0x3e;
  if ((long)uVar1 < 2) {
    if (uVar1 == 0) {
      if ((*param_2 == 'i') && (param_2[1] == 'd')) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
    }
    else if (uVar1 == 1) {
      if (*param_2 == 'r') {
        if ((((param_2[1] == 'e') && (param_2[2] == 's')) && (param_2[3] == 'u')) &&
           ((param_2[4] == 'l' && (param_2[5] == 't')))) {
          param_1[1] = 3;
          *param_1 = 0;
          return;
        }
      }
      else if (((*param_2 == 's') && (param_2[1] == 't')) &&
              ((param_2[2] == 'a' &&
               (((param_2[3] == 't' && (param_2[4] == 'u')) && (param_2[5] == 's')))))) {
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
    }
  }
  else if (uVar1 == 2) {
    if (((((*param_2 == 's') && (param_2[1] == 'a')) && (param_2[2] == 'v')) &&
        (((param_2[3] == 'e' && (param_2[4] == 'd')) &&
         ((param_2[5] == '_' && ((param_2[6] == 'p' && (param_2[7] == 'a')))))))) &&
       ((param_2[8] == 't' && (param_2[9] == 'h')))) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  else if ((((((uVar1 == 3) && (*param_2 == 'r')) && (param_2[1] == 'e')) &&
            ((param_2[2] == 'v' && (param_2[3] == 'i')))) &&
           (((param_2[4] == 's' && ((param_2[5] == 'e' && (param_2[6] == 'd')))) &&
            (param_2[7] == '_')))) &&
          (((((param_2[8] == 'p' && (param_2[9] == 'r')) && (param_2[10] == 'o')) &&
            ((param_2[0xb] == 'm' && (param_2[0xc] == 'p')))) && (param_2[0xd] == 't')))) {
    param_1[1] = 2;
    *param_1 = 0;
    return;
  }
  param_1[1] = 5;
  *param_1 = 0;
  return;
}

