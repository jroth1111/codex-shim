
void FUN_100a8d484(undefined1 *param_1,char *param_2,long param_3)

{
  char cVar1;
  
  if (param_3 < 8) {
    if (param_3 < 4) {
      if (param_3 == 2) {
        if ((*param_2 == 'g') && (param_2[1] == 'o')) {
          param_1[1] = 1;
          *param_1 = 0;
          return;
        }
      }
      else if (param_3 == 3) {
        if (*param_2 == 'e') {
          if ((param_2[1] == 'd') && (param_2[2] == 'u')) {
            param_1[1] = 10;
            *param_1 = 0;
            return;
          }
        }
        else if (((*param_2 == 'p') && (param_2[1] == 'r')) && (param_2[2] == 'o')) {
          param_1[1] = 3;
          *param_1 = 0;
          return;
        }
      }
    }
    else if (param_3 == 4) {
      cVar1 = *param_2;
      if (cVar1 == 'f') {
        if (((param_2[1] == 'r') && (param_2[2] == 'e')) && (param_2[3] == 'e')) {
          param_1[1] = 0;
          *param_1 = 0;
          return;
        }
      }
      else if (cVar1 == 'p') {
        if (((param_2[1] == 'l') && (param_2[2] == 'u')) && (param_2[3] == 's')) {
          param_1[1] = 2;
          *param_1 = 0;
          return;
        }
      }
      else if (((cVar1 == 't') && (param_2[1] == 'e')) &&
              ((param_2[2] == 'a' && (param_2[3] == 'm')))) {
        param_1[1] = 5;
        *param_1 = 0;
        return;
      }
    }
    else if (((((param_3 == 7) && (*param_2 == 'p')) && (param_2[1] == 'r')) &&
             ((param_2[2] == 'o' && (param_2[3] == 'l')))) &&
            ((param_2[4] == 'i' && ((param_2[5] == 't' && (param_2[6] == 'e')))))) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 < 0x1a) {
    if (param_3 == 8) {
      if ((((*param_2 == 'b') && (param_2[1] == 'u')) &&
          ((param_2[2] == 's' &&
           (((param_2[3] == 'i' && (param_2[4] == 'n')) && (param_2[5] == 'e')))))) &&
         ((param_2[6] == 's' && (param_2[7] == 's')))) {
        param_1[1] = 7;
        *param_1 = 0;
        return;
      }
    }
    else if ((((param_3 == 10) && (*param_2 == 'e')) &&
             ((param_2[1] == 'n' &&
              ((((param_2[2] == 't' && (param_2[3] == 'e')) && (param_2[4] == 'r')) &&
               ((param_2[5] == 'p' && (param_2[6] == 'r')))))))) &&
            ((param_2[7] == 'i' && ((param_2[8] == 's' && (param_2[9] == 'e')))))) {
      param_1[1] = 9;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0x1a) {
    if (((((((*param_2 == 'e') && (param_2[1] == 'n')) && (param_2[2] == 't')) &&
          (((param_2[3] == 'e' && (param_2[4] == 'r')) &&
           ((param_2[5] == 'p' && ((param_2[6] == 'r' && (param_2[7] == 'i')))))))) &&
         (param_2[8] == 's')) &&
        (((param_2[9] == 'e' && (param_2[10] == '_')) && (param_2[0xb] == 'c')))) &&
       ((((param_2[0xc] == 'b' && (param_2[0xd] == 'p')) &&
         (((param_2[0xe] == '_' && ((param_2[0xf] == 'u' && (param_2[0x10] == 's')))) &&
          (param_2[0x11] == 'a')))) &&
        ((((((param_2[0x12] == 'g' && (param_2[0x13] == 'e')) && (param_2[0x14] == '_')) &&
           ((param_2[0x15] == 'b' && (param_2[0x16] == 'a')))) && (param_2[0x17] == 's')) &&
         ((param_2[0x18] == 'e' && (param_2[0x19] == 'd')))))))) {
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
  }
  else if ((((((param_3 == 0x1f) && (*param_2 == 's')) && (param_2[1] == 'e')) &&
            (((param_2[2] == 'l' && (param_2[3] == 'f')) &&
             ((param_2[4] == '_' && ((param_2[5] == 's' && (param_2[6] == 'e')))))))) &&
           ((param_2[7] == 'r' &&
            (((param_2[8] == 'v' && (param_2[9] == 'e')) && (param_2[10] == '_')))))) &&
          (((param_2[0xb] == 'b' && (param_2[0xc] == 'u')) &&
           ((((param_2[0xd] == 's' && ((param_2[0xe] == 'i' && (param_2[0xf] == 'n')))) &&
             (param_2[0x10] == 'e')) &&
            (((((((param_2[0x11] == 's' && (param_2[0x12] == 's')) && (param_2[0x13] == '_')) &&
                ((param_2[0x14] == 'u' && (param_2[0x15] == 's')))) &&
               ((param_2[0x16] == 'a' && ((param_2[0x17] == 'g' && (param_2[0x18] == 'e')))))) &&
              (param_2[0x19] == '_')) &&
             ((((param_2[0x1a] == 'b' && (param_2[0x1b] == 'a')) && (param_2[0x1c] == 's')) &&
              ((param_2[0x1d] == 'e' && (param_2[0x1e] == 'd')))))))))))) {
    param_1[1] = 6;
    *param_1 = 0;
    return;
  }
  param_1[1] = 0xb;
  *param_1 = 0;
  return;
}

