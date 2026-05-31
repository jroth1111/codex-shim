
void FUN_100a5325c(undefined8 *param_1,long *param_2,long param_3)

{
  if (param_3 < 0x1b) {
    if (param_3 == 0x10) {
      if (*param_2 == 0x696d5f6c65646f6d && param_2[1] == 0x736e6f6974617267) {
        *(undefined1 *)(param_1 + 1) = 6;
        *param_1 = 2;
        return;
      }
    }
    else if (param_3 == 0x14) {
      if ((*param_2 == 0x6665645f74736166 && param_2[1] == 0x74706f5f746c7561) &&
          (int)param_2[2] == 0x74756f5f) {
        *(undefined1 *)(param_1 + 1) = 2;
        *param_1 = 2;
        return;
      }
    }
    else if ((param_3 == 0x18) &&
            ((*param_2 == 0x6c75665f65646968 && param_2[1] == 0x7373656363615f6c) &&
             param_2[2] == 0x676e696e7261775f)) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return;
    }
  }
  else if (param_3 < 0x21) {
    if (param_3 == 0x1b) {
      if (((*param_2 == 0x726f775f65646968 && param_2[1] == 0x61746972775f646c) &&
          param_2[2] == 0x6e7261775f656c62) && *(long *)((long)param_2 + 0x13) == 0x676e696e7261775f
         ) {
        *(undefined1 *)(param_1 + 1) = 1;
        *param_1 = 2;
        return;
      }
      if (((*param_2 == 0x7461725f65646968 && param_2[1] == 0x5f74696d696c5f65) &&
          param_2[2] == 0x756e5f6c65646f6d) && *(long *)((long)param_2 + 0x13) == 0x656764756e5f6c65
         ) {
        *(undefined1 *)(param_1 + 1) = 3;
        *param_1 = 2;
        return;
      }
    }
    else if ((param_3 == 0x1c) &&
            (((*param_2 == 0x7470675f65646968 && param_2[1] == 0x7267696d5f315f35) &&
             param_2[2] == 0x72705f6e6f697461) && (int)param_2[3] == 0x74706d6f)) {
      *(undefined1 *)(param_1 + 1) = 4;
      *param_1 = 2;
      return;
    }
  }
  else if (param_3 == 0x21) {
    if ((((*param_2 == 0x6c616e7265747865 && param_2[1] == 0x5f6769666e6f635f) &&
         param_2[2] == 0x6f6974617267696d) && param_2[3] == 0x74706d6f72705f6e) &&
        (char)param_2[4] == 's') {
      *(undefined1 *)(param_1 + 1) = 7;
      *param_1 = 2;
      return;
    }
  }
  else if ((param_3 == 0x27) &&
          ((((*param_2 == 0x7470675f65646968 && param_2[1] == 0x646f632d312e352d) &&
            param_2[2] == 0x6d5f78616d2d7865) && param_2[3] == 0x6e6f697461726769) &&
           *(long *)((long)param_2 + 0x1f) == 0x74706d6f72705f6e)) {
    *(undefined1 *)(param_1 + 1) = 5;
    *param_1 = 2;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 8;
  *param_1 = 2;
  return;
}

