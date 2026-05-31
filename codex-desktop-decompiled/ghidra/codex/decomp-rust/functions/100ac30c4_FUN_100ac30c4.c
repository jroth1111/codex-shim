
void FUN_100ac30c4(undefined1 *param_1,char *param_2,long param_3)

{
  if (param_3 == 8) {
    if (((((*param_2 == 'm') && (param_2[1] == 'i')) && (param_2[2] == 'm')) &&
        ((param_2[3] == 'e' && (param_2[4] == 'T')))) &&
       ((param_2[5] == 'y' && ((param_2[6] == 'p' && (param_2[7] == 'e')))))) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 5) {
    if ((((*param_2 == '_') && (param_2[1] == 'm')) && (param_2[2] == 'e')) &&
       ((param_2[3] == 't' && (param_2[4] == 'a')))) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  else if (((param_3 == 4) && (*param_2 == 'd')) &&
          ((param_2[1] == 'a' && ((param_2[2] == 't' && (param_2[3] == 'a')))))) {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  param_1[1] = 3;
  *param_1 = 0;
  return;
}

