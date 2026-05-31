
void FUN_100ac58fc(undefined1 *param_1,long *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 7:
    if ((int)*param_2 == 0x7373656d && *(int *)((long)param_2 + 3) == 0x65676173) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    if (*param_2 == 0x6e696e6f73616572 && (char)param_2[1] == 'g') {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if (*param_2 == 0x69746361706d6f63 && (short)param_2[1] == 0x6e6f) {
code_r0x000100ac5cb4:
      param_1[1] = 0xb;
      *param_1 = 0;
      return;
    }
    break;
  case 0xd:
    if (*param_2 == 0x6e6f6974636e7566 && *(long *)((long)param_2 + 5) == 0x6c6c61635f6e6f69) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*param_2 == 0x726165735f626577 && *(long *)((long)param_2 + 7) == 0x6c6c61635f686372) {
      param_1[1] = 9;
      *param_1 = 0;
      return;
    }
    break;
  case 0x10:
    if (*param_2 == 0x68735f6c61636f6c && param_2[1] == 0x6c6c61635f6c6c65) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x6165735f6c6f6f74 && param_2[1] == 0x6c6c61635f686372) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x745f6d6f74737563 && param_2[1] == 0x6c6c61635f6c6f6f) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    break;
  case 0x12:
    if ((*param_2 == 0x6165735f6c6f6f74 && param_2[1] == 0x7074756f5f686372) &&
        (short)param_2[2] == 0x7475) {
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
    if ((*param_2 == 0x69746361706d6f63 && param_2[1] == 0x616d6d75735f6e6f) &&
        (short)param_2[2] == 0x7972) goto code_r0x000100ac5cb4;
    if ((*param_2 == 0x69746361706d6f63 && param_2[1] == 0x67676972745f6e6f) &&
        (short)param_2[2] == 0x7265) {
      param_1[1] = 0xc;
      *param_1 = 0;
      return;
    }
    if ((*param_2 == 0x5f747865746e6f63 && param_2[1] == 0x69746361706d6f63) &&
        (short)param_2[2] == 0x6e6f) {
      param_1[1] = 0xd;
      *param_1 = 0;
      return;
    }
    break;
  case 0x14:
    if ((*param_2 == 0x6e6f6974636e7566 && param_2[1] == 0x756f5f6c6c61635f) &&
        (int)param_2[2] == 0x74757074) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 0x15:
    if ((*param_2 == 0x65675f6567616d69 && param_2[1] == 0x6e6f69746172656e) &&
        *(long *)((long)param_2 + 0xd) == 0x6c6c61635f6e6f69) {
      param_1[1] = 10;
      *param_1 = 0;
      return;
    }
    break;
  case 0x17:
    if ((*param_2 == 0x745f6d6f74737563 && param_2[1] == 0x6c6c61635f6c6f6f) &&
        *(long *)((long)param_2 + 0xf) == 0x74757074756f5f6c) {
      param_1[1] = 7;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 0xe;
  *param_1 = 0;
  return;
}

