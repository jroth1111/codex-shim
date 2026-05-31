
void FUN_100b49038(undefined1 *param_1,char *param_2,long param_3)

{
  if (param_3 == 0xe) {
    if ((((*param_2 == 'r') && (param_2[1] == 'o')) && (param_2[2] == 'o')) &&
       ((((param_2[3] == 't' && (param_2[4] == '_')) &&
         ((param_2[5] == 't' && ((param_2[6] == 'h' && (param_2[7] == 'r')))))) &&
        ((param_2[8] == 'e' &&
         ((((param_2[9] == 'a' && (param_2[10] == 'd')) && (param_2[0xb] == '_')) &&
          ((param_2[0xc] == 'i' && (param_2[0xd] == 'd')))))))))) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if (((param_3 == 8) && (*param_2 == 't')) &&
          (((param_2[1] == 'r' &&
            (((param_2[2] == 'a' && (param_2[3] == 'c')) && (param_2[4] == 'e')))) &&
           (((param_2[5] == '_' && (param_2[6] == 'i')) && (param_2[7] == 'd')))))) {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  param_1[1] = 2;
  *param_1 = 0;
  return;
}

