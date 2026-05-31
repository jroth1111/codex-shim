
void FUN_100bdd900(undefined1 *param_1,char *param_2,long param_3)

{
  if ((param_3 == 0xd) && (*param_2 == 'e')) {
    if (param_2[1] == 'x') {
      if (((((param_2[2] == 'e') && (param_2[3] == 'c')) && (param_2[4] == 'S')) &&
          ((((param_2[5] == 'e' && (param_2[6] == 'r')) &&
            ((param_2[7] == 'v' && ((param_2[8] == 'e' && (param_2[9] == 'r')))))) &&
           (param_2[10] == 'U')))) && ((param_2[0xb] == 'r' && (param_2[0xc] == 'l')))) {
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
    }
    else if (((((param_2[1] == 'n') && (param_2[2] == 'v')) && (param_2[3] == 'i')) &&
             (((param_2[4] == 'r' && (param_2[5] == 'o')) &&
              ((param_2[6] == 'n' && ((param_2[7] == 'm' && (param_2[8] == 'e')))))))) &&
            ((param_2[9] == 'n' &&
             (((param_2[10] == 't' && (param_2[0xb] == 'I')) && (param_2[0xc] == 'd')))))) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 2;
  *param_1 = 0;
  return;
}

