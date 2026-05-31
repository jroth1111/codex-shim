
void FUN_100ca65f4(long *param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if ((char)param_1[0x5e] != '\0') {
    if ((char)param_1[0x5e] == '\x03') {
      if ((((char)param_1[0x5d] == '\x03') && ((char)param_1[0x5c] == '\x03')) &&
         ((char)param_1[0x53] == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x54);
        if (param_1[0x55] != 0) {
          (**(code **)(param_1[0x55] + 0x18))(param_1[0x56]);
        }
      }
      if (param_1[0x44] < -0x7ffffffffffffffe || param_1[0x44] == 0) {
        *(undefined1 *)((long)param_1 + 0x2fc) = 0;
        lVar3 = param_1[0x41];
      }
      else {
        _free(param_1[0x45]);
        *(undefined1 *)((long)param_1 + 0x2fc) = 0;
        lVar3 = param_1[0x41];
      }
      if ((lVar3 != -0x8000000000000000) && (lVar3 != 0)) {
        _free(param_1[0x42]);
      }
      *(undefined1 *)((long)param_1 + 0x2fb) = 0;
      if (param_1[0x3b] != -0x8000000000000000) {
        if (param_1[0x3b] != 0) {
          _free(param_1[0x3c]);
        }
        if ((param_1[0x3e] != -0x8000000000000000) && (param_1[0x3e] != 0)) {
          _free(param_1[0x3f]);
        }
      }
      *(undefined1 *)((long)param_1 + 0x2fd) = 0;
      uVar4 = param_1[0x36];
      if (uVar4 != 0x8000000000000003) {
        bVar2 = uVar4 != 0x8000000000000000;
        if (uVar4 < 0x8000000000000001) {
          uVar4 = 0;
        }
        if ((bVar2) && ((uVar4 & 0x7fffffffffffffff) == 0)) {
          FUN_100e79780(param_1 + 0x36);
        }
      }
      *(undefined1 *)((long)param_1 + 0x2fe) = 0;
      lVar3 = param_1[0x32];
      if ((lVar3 != -0x7ffffffffffffffd) && (-0x7ffffffffffffffe < lVar3)) {
        lVar1 = param_1[0x33];
        lVar5 = param_1[0x34];
        if (lVar5 != 0) {
          puVar6 = (undefined8 *)(lVar1 + 8);
          do {
            if (puVar6[-1] != 0) {
              _free(*puVar6);
            }
            puVar6 = puVar6 + 3;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
        if (lVar3 != 0) {
          _free(lVar1);
        }
      }
      *(undefined1 *)((long)param_1 + 0x2ff) = 0;
      lVar3 = param_1[0x2f];
      if (lVar3 != -0x8000000000000000) {
        lVar1 = param_1[0x30];
        lVar5 = param_1[0x31];
        if (lVar5 != 0) {
          puVar6 = (undefined8 *)(lVar1 + 8);
          do {
            if (puVar6[-1] != 0) {
              _free(*puVar6);
            }
            puVar6 = puVar6 + 3;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
        if (lVar3 != 0) {
          _free(lVar1);
        }
      }
      *(undefined1 *)(param_1 + 0x60) = 0;
      lVar3 = param_1[0x2c];
      if (lVar3 != -0x8000000000000000) {
        lVar1 = param_1[0x2d];
        lVar5 = param_1[0x2e];
        if (lVar5 != 0) {
          puVar6 = (undefined8 *)(lVar1 + 8);
          do {
            if (puVar6[-1] != 0) {
              _free(*puVar6);
            }
            puVar6 = puVar6 + 3;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
        if (lVar3 != 0) {
          _free(lVar1);
        }
      }
      *(undefined1 *)((long)param_1 + 0x301) = 0;
      if (param_1[0x29] != -0x8000000000000000 && param_1[0x29] != 0) {
        _free(param_1[0x2a]);
      }
      *(undefined1 *)((long)param_1 + 0x302) = 0;
    }
    return;
  }
  if (*param_1 == -0x8000000000000000 || *param_1 == 0) {
    lVar3 = param_1[3];
  }
  else {
    _free(param_1[1]);
    lVar3 = param_1[3];
  }
  if (lVar3 != -0x8000000000000000) {
    lVar1 = param_1[4];
    lVar5 = param_1[5];
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (lVar3 != 0) {
      _free(lVar1);
    }
  }
  lVar3 = param_1[6];
  if (lVar3 != -0x8000000000000000) {
    lVar1 = param_1[7];
    lVar5 = param_1[8];
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (lVar3 != 0) {
      _free(lVar1);
    }
  }
  lVar3 = param_1[0x1d];
  if (-0x7ffffffffffffffd < lVar3) {
    lVar1 = param_1[0x1e];
    lVar5 = param_1[0x1f];
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (lVar3 != 0) {
      _free(lVar1);
    }
  }
  uVar4 = param_1[0x21];
  if (uVar4 != 0x8000000000000003) {
    bVar2 = uVar4 != 0x8000000000000000;
    if (uVar4 < 0x8000000000000001) {
      uVar4 = 0;
    }
    if ((bVar2) && ((uVar4 & 0x7fffffffffffffff) == 0)) {
      FUN_100e79780(param_1 + 0x21);
    }
  }
  if (param_1[9] != -0x8000000000000000) {
    if (param_1[9] != 0) {
      _free(param_1[10]);
    }
    if ((param_1[0xc] != -0x8000000000000000) && (param_1[0xc] != 0)) {
      _free(param_1[0xd]);
    }
  }
  if ((param_1[0xf] != -0x8000000000000000) && (param_1[0xf] != 0)) {
    _free(param_1[0x10]);
  }
  lVar3 = param_1[0x1a];
  if (((lVar3 != -0x7fffffffffffffff) && (lVar3 != -0x8000000000000000)) && (lVar3 != 0)) {
    _free(param_1[0x1b]);
  }
  if (param_1[0x12] != -0x8000000000000000) {
    if (param_1[0x12] != 0) {
      _free(param_1[0x13]);
    }
    if ((param_1[0x15] != -0x8000000000000000) && (param_1[0x15] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[0x16]);
      return;
    }
  }
  return;
}

