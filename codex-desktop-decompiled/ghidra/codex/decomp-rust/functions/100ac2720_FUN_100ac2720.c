
void FUN_100ac2720(undefined1 *param_1,char *param_2,long param_3)

{
  if (param_3 == 0xc) {
    if ((((((*param_2 == 's') && (param_2[1] == 'u')) && (param_2[2] == 'm')) &&
         ((param_2[3] == 'm' && (param_2[4] == 'a')))) && (param_2[5] == 'r')) &&
       (((param_2[6] == 'y' && (param_2[7] == '_')) &&
        ((param_2[8] == 't' &&
         (((param_2[9] == 'e' && (param_2[10] == 'x')) && (param_2[0xb] == 't')))))))) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xb) {
    if ((((*param_2 == 'r') && (param_2[1] == 'a')) &&
        ((((param_2[2] == 'w' && ((param_2[3] == '_' && (param_2[4] == 'c')))) &&
          (param_2[5] == 'o')) &&
         (((param_2[6] == 'n' && (param_2[7] == 't')) && (param_2[8] == 'e')))))) &&
       ((param_2[9] == 'n' && (param_2[10] == 't')))) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  else if (((param_3 == 2) && (*param_2 == 'i')) && (param_2[1] == 'd')) {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  param_1[1] = 3;
  *param_1 = 0;
  return;
}

