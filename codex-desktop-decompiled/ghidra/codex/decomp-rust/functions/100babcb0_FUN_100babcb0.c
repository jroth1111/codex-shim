
void FUN_100babcb0(undefined1 *param_1,long *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 3:
    if ((short)*param_2 == 0x7763 && *(char *)((long)param_2 + 2) == 'd') {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 4:
    if ((int)*param_2 == 0x68746170) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 5:
    if ((int)*param_2 == 0x65646f6d && *(char *)((long)param_2 + 4) == 'l') {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 6:
    if ((int)*param_2 == 0x666e6f63 && *(short *)((long)param_2 + 4) == 0x6769) {
      param_1[1] = 0xb;
      *param_1 = 0;
      return;
    }
    break;
  case 7:
    if ((int)*param_2 == 0x646e6173 && *(int *)((long)param_2 + 3) == 0x786f6264) {
      param_1[1] = 9;
      *param_1 = 0;
      return;
    }
    break;
  case 8:
    if (*param_2 == 0x6449646165726874) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    if (*param_2 == 0x6172656d65687065 && (char)param_2[1] == 'l') {
      param_1[1] = 0xe;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*param_2 == 0x5465636976726573 && *(long *)((long)param_2 + 3) == 0x7265695465636976) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x697373696d726570 && *(long *)((long)param_2 + 3) == 0x736e6f697373696d) {
      param_1[1] = 10;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if (*param_2 == 0x6f53646165726874 && (int)param_2[1] == 0x65637275) {
      param_1[1] = 0xf;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x546564756c637865 && (int)param_2[1] == 0x736e7275) {
      param_1[1] = 0x10;
      *param_1 = 0;
      return;
    }
    break;
  case 0xd:
    if (*param_2 == 0x6f72506c65646f6d && *(long *)((long)param_2 + 5) == 0x72656469766f7250) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 0xe:
    if (*param_2 == 0x6c61766f72707061 && *(long *)((long)param_2 + 6) == 0x7963696c6f506c61) {
      param_1[1] = 7;
      *param_1 = 0;
      return;
    }
    break;
  case 0x10:
    if (*param_2 == 0x74736e4965736162 && param_2[1] == 0x736e6f6974637572) {
      param_1[1] = 0xc;
      *param_1 = 0;
      return;
    }
    break;
  case 0x11:
    if ((*param_2 == 0x6c61766f72707061 && param_2[1] == 0x6577656976655273) &&
        (char)param_2[2] == 'r') {
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
    break;
  case 0x15:
    if ((*param_2 == 0x57656d69746e7572 && param_2[1] == 0x65636170736b726f) &&
        *(long *)((long)param_2 + 0xd) == 0x73746f6f52656361) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    if ((*param_2 == 0x65706f6c65766564 && param_2[1] == 0x63757274736e4972) &&
        *(long *)((long)param_2 + 0xd) == 0x736e6f6974637572) {
      param_1[1] = 0xd;
      *param_1 = 0;
      return;
    }
    break;
  case 0x16:
    if ((*param_2 == 0x4574736973726570 && param_2[1] == 0x486465646e657478) &&
        *(long *)((long)param_2 + 0xe) == 0x79726f7473694864) {
      param_1[1] = 0x11;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 0x12;
  *param_1 = 0;
  return;
}

