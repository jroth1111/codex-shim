
void FUN_100cd8df8(long *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  bVar1 = *(byte *)((long)param_1 + 0x2ba);
  if (bVar1 < 5) {
    if (bVar1 == 3) {
      if (*(char *)((long)param_1 + 0x361) == '\x03') {
        if ((char)param_1[0x3c9] == '\x03') {
          if ((char)param_1[0x3c8] == '\x03') {
            FUN_100d1ddbc(param_1 + 0xaa);
          }
          FUN_100df5b9c(param_1 + 0x73);
        }
LAB_100cd20a8:
        lVar2 = param_1[0x66];
        lVar3 = param_1[0x67];
      }
      else {
        if (*(char *)((long)param_1 + 0x361) != '\x04') {
          return;
        }
        if ((char)param_1[0x3fe] == '\x03') {
          FUN_100d4e420(param_1 + 0x73);
          *(undefined1 *)((long)param_1 + 0x1ff1) = 0;
          lVar2 = param_1[0x66];
          lVar3 = param_1[0x67];
        }
        else {
          if (((char)param_1[0x3fe] != '\0') || (param_1[0x6d] == 0)) goto LAB_100cd20a8;
          _free(param_1[0x6e]);
          lVar2 = param_1[0x66];
          lVar3 = param_1[0x67];
        }
      }
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)(lVar2 + 8);
        do {
          if (puVar4[-1] != 0) {
            _free(*puVar4);
          }
          puVar4 = puVar4 + 3;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      if (param_1[0x65] != 0) {
        _free(lVar2);
      }
      if (((*(byte *)(param_1 + 0x6c) & 1) != 0) && (param_1[0x6d] != 0)) {
        _free(param_1[0x6e]);
      }
      *(undefined1 *)(param_1 + 0x6c) = 0;
      if (param_1[0x62] != 0) {
        _free(param_1[99]);
      }
      if (param_1[0x5c] == 0) {
        return;
      }
      lVar2 = param_1[0x5d];
      goto code_r0x000108aa97c4;
    }
    if (bVar1 != 4) {
      return;
    }
    if ((char)param_1[0x3fd] == '\x03') {
      FUN_100ccb260(param_1 + 0x59);
    }
LAB_100cd8e78:
    lVar2 = *param_1;
  }
  else {
    if (bVar1 != 5) {
      if (bVar1 != 6) {
        return;
      }
      FUN_100d12094(param_1 + 0x5b);
      if ((param_1[0x58] != -0x8000000000000000) && (param_1[0x58] != 0)) {
        _free(param_1[0x59]);
      }
      *(undefined1 *)(param_1 + 0x57) = 0;
      goto LAB_100cd8e78;
    }
    FUN_100caaf08(param_1 + 0x96);
    if (param_1[0x58] != -0x8000000000000000) {
      FUN_100e24ac8(param_1 + 0x58);
    }
    if ((param_1[0x5e] != -0x8000000000000000) && (param_1[0x5e] != 0)) {
      _free(param_1[0x5f]);
    }
    *(undefined1 *)((long)param_1 + 0x2b9) = 0;
    lVar2 = *param_1;
  }
  if (lVar2 != -0x7fffffffffffffff) {
    if (lVar2 != -0x8000000000000000) {
      FUN_100e24ac8(param_1);
    }
    if ((param_1[6] != -0x8000000000000000) && (param_1[6] != 0)) {
      lVar2 = param_1[7];
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar2);
      return;
    }
  }
  return;
}

