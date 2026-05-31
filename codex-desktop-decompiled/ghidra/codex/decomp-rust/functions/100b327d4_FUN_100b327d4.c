
void FUN_100b327d4(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x65646f6d) {
      *(undefined1 *)(param_1 + 1) = 8;
      *param_1 = 2;
      return;
    }
    if ((int)*param_2 == 0x6d74696d) {
      *(undefined1 *)(param_1 + 1) = 0xc;
      *param_1 = 2;
      return;
    }
    break;
  case 7:
    if ((int)*param_2 == 0x62616e65 && *(int *)((long)param_2 + 3) == 0x64656c62) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return;
    }
    if ((int)*param_2 == 0x616d6f64 && *(int *)((long)param_2 + 3) == 0x736e6961) {
      *(undefined1 *)(param_1 + 1) = 9;
      *param_1 = 2;
      return;
    }
    break;
  case 9:
    if (*param_2 == 0x72755f79786f7270 && (char)param_2[1] == 'l') {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return;
    }
    if (*param_2 == 0x72755f736b636f73 && (char)param_2[1] == 'l') {
      *(undefined1 *)(param_1 + 1) = 3;
      *param_1 = 2;
      return;
    }
    break;
  case 0xc:
    if (*param_2 == 0x636f735f78696e75 && (int)param_2[1] == 0x7374656b) {
      *(undefined1 *)(param_1 + 1) = 10;
      *param_1 = 2;
      return;
    }
    break;
  case 0xd:
    if (*param_2 == 0x735f656c62616e65 && *(long *)((long)param_2 + 5) == 0x35736b636f735f65) {
      *(undefined1 *)(param_1 + 1) = 2;
      *param_1 = 2;
      return;
    }
    break;
  case 0x11:
    if ((*param_2 == 0x735f656c62616e65 && param_2[1] == 0x64755f35736b636f) &&
        (char)param_2[2] == 'p') {
      *(undefined1 *)(param_1 + 1) = 4;
      *param_1 = 2;
      return;
    }
    break;
  case 0x13:
    if ((*param_2 == 0x6f6c5f776f6c6c61 && param_2[1] == 0x646e69625f6c6163) &&
        *(long *)((long)param_2 + 0xb) == 0x676e69646e69625f) {
      *(undefined1 *)(param_1 + 1) = 0xb;
      *param_1 = 2;
      return;
    }
    break;
  case 0x14:
    if ((*param_2 == 0x70755f776f6c6c61 && param_2[1] == 0x705f6d6165727473) &&
        (int)param_2[2] == 0x79786f72) {
      *(undefined1 *)(param_1 + 1) = 5;
      *param_1 = 2;
      return;
    }
    break;
  case 0x22:
    if ((((*param_2 == 0x756f7265676e6164 && param_2[1] == 0x6f6c6c615f796c73) &&
         param_2[2] == 0x6e755f6c6c615f77) && param_2[3] == 0x656b636f735f7869) &&
        (short)param_2[4] == 0x7374) {
      *(undefined1 *)(param_1 + 1) = 7;
      *param_1 = 2;
      return;
    }
    break;
  case 0x24:
    if ((((*param_2 == 0x756f7265676e6164 && param_2[1] == 0x6f6c6c615f796c73) &&
         param_2[2] == 0x6f6c5f6e6f6e5f77) && param_2[3] == 0x705f6b636162706f) &&
        (int)param_2[4] == 0x79786f72) {
      *(undefined1 *)(param_1 + 1) = 6;
      *param_1 = 2;
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 0xd;
  *param_1 = 2;
  return;
}

