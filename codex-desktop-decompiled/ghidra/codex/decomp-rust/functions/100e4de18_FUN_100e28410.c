
void FUN_100e28410(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  uVar1 = *param_1;
  lVar2 = 0;
  if (3 < uVar1) {
    lVar2 = uVar1 - 4;
  }
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      lVar2 = uVar1 - 2;
      if (uVar1 < 2) {
        lVar2 = 1;
      }
      if (lVar2 == 0) {
        if (param_1[1] == 0) {
          if ((long)param_1[8] < -0x7ffffffffffffffe || param_1[8] == 0) {
            if ((long)param_1[0xb] < -0x7ffffffffffffffe || param_1[0xb] == 0) goto LAB_100e53e88;
LAB_100e53ed4:
            _free(param_1[0xc]);
            uVar1 = param_1[3];
            uVar4 = param_1[4];
          }
          else {
            _free(param_1[9]);
            if (-0x7fffffffffffffff < (long)param_1[0xb] && param_1[0xb] != 0) goto LAB_100e53ed4;
LAB_100e53e88:
            uVar1 = param_1[3];
            uVar4 = param_1[4];
          }
          if (uVar4 != 0) {
            puVar5 = (undefined8 *)(uVar1 + 8);
            do {
              if (puVar5[-1] != 0) {
                _free(*puVar5);
              }
              puVar5 = puVar5 + 3;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          if (param_1[2] != 0) {
            _free(uVar1);
          }
          if (param_1[5] == 0x8000000000000000 || param_1[5] == 0) {
            return;
          }
          uVar1 = param_1[6];
          goto code_r0x000108aa97c4;
        }
        if ((long)param_1[8] < -0x7ffffffffffffffe || param_1[8] == 0) {
          if ((long)param_1[0xb] < -0x7ffffffffffffffe || param_1[0xb] == 0) goto LAB_100e4de5c;
LAB_100e4deb8:
          _free(param_1[0xc]);
          uVar1 = param_1[3];
          uVar4 = param_1[4];
        }
        else {
          _free(param_1[9]);
          if (-0x7fffffffffffffff < (long)param_1[0xb] && param_1[0xb] != 0) goto LAB_100e4deb8;
LAB_100e4de5c:
          uVar1 = param_1[3];
          uVar4 = param_1[4];
        }
        if (uVar4 != 0) {
          puVar5 = (undefined8 *)(uVar1 + 0x20);
          do {
            if (puVar5[-4] != 0) {
              _free(puVar5[-3]);
            }
            if (puVar5[-1] != 0) {
              _free(*puVar5);
            }
            puVar5 = puVar5 + 6;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (param_1[2] != 0) {
          _free(uVar1);
        }
        if ((param_1[5] == 0x8000000000000000) || (param_1[5] == 0)) {
          return;
        }
        uVar1 = param_1[6];
        goto code_r0x000108aa97c4;
      }
      if (lVar2 == 1) {
        if (uVar1 == 0) {
          if ((long)param_1[0xb] < -0x7ffffffffffffffe || param_1[0xb] == 0) {
            if ((long)param_1[0xe] < -0x7ffffffffffffffe || param_1[0xe] == 0) goto LAB_100e50be4;
LAB_100e50c30:
            _free(param_1[0xf]);
            uVar1 = param_1[6];
            uVar4 = param_1[7];
          }
          else {
            _free(param_1[0xc]);
            if (-0x7fffffffffffffff < (long)param_1[0xe] && param_1[0xe] != 0) goto LAB_100e50c30;
LAB_100e50be4:
            uVar1 = param_1[6];
            uVar4 = param_1[7];
          }
          if (uVar4 != 0) {
            puVar5 = (undefined8 *)(uVar1 + 8);
            do {
              if (puVar5[-1] != 0) {
                _free(*puVar5);
              }
              puVar5 = puVar5 + 3;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          if (param_1[5] != 0) {
            _free(uVar1);
          }
          uVar4 = param_1[8];
          if (uVar4 == 0x8000000000000000) {
            return;
          }
          uVar1 = param_1[9];
          uVar3 = param_1[10];
          if (uVar3 != 0) {
            puVar5 = (undefined8 *)(uVar1 + 8);
            do {
              if (puVar5[-1] != 0) {
                _free(*puVar5);
              }
              puVar5 = puVar5 + 3;
              uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
          }
          if (uVar4 == 0) {
            return;
          }
          goto code_r0x000108aa97c4;
        }
        if ((long)param_1[0xb] < -0x7ffffffffffffffe || param_1[0xb] == 0) {
          if ((long)param_1[0xe] < -0x7ffffffffffffffe || param_1[0xe] == 0) goto LAB_100e4bf18;
LAB_100e4bf74:
          _free(param_1[0xf]);
          uVar1 = param_1[6];
          uVar4 = param_1[7];
        }
        else {
          _free(param_1[0xc]);
          if (-0x7fffffffffffffff < (long)param_1[0xe] && param_1[0xe] != 0) goto LAB_100e4bf74;
LAB_100e4bf18:
          uVar1 = param_1[6];
          uVar4 = param_1[7];
        }
        if (uVar4 != 0) {
          puVar5 = (undefined8 *)(uVar1 + 0x20);
          do {
            if (puVar5[-4] != 0) {
              _free(puVar5[-3]);
            }
            if (puVar5[-1] != 0) {
              _free(*puVar5);
            }
            puVar5 = puVar5 + 6;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (param_1[5] != 0) {
          _free(uVar1);
        }
        uVar4 = param_1[8];
        if (uVar4 == 0x8000000000000000) {
          return;
        }
        uVar1 = param_1[9];
        uVar3 = param_1[10];
        if (uVar3 != 0) {
          puVar5 = (undefined8 *)(uVar1 + 8);
          do {
            if (puVar5[-1] != 0) {
              _free(*puVar5);
            }
            puVar5 = puVar5 + 3;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        if (uVar4 == 0) {
          return;
        }
        goto code_r0x000108aa97c4;
      }
      if ((long)param_1[7] < -0x7ffffffffffffffe || param_1[7] == 0) {
        if ((long)param_1[10] < -0x7ffffffffffffffe || param_1[10] == 0) goto LAB_100e2bd04;
LAB_100e2bd50:
        _free(param_1[0xb]);
        uVar1 = param_1[2];
        uVar4 = param_1[3];
      }
      else {
        _free(param_1[8]);
        if (-0x7fffffffffffffff < (long)param_1[10] && param_1[10] != 0) goto LAB_100e2bd50;
LAB_100e2bd04:
        uVar1 = param_1[2];
        uVar4 = param_1[3];
      }
      if (uVar4 != 0) {
        puVar5 = (undefined8 *)(uVar1 + 8);
        do {
          if (puVar5[-1] != 0) {
            _free(*puVar5);
          }
          puVar5 = puVar5 + 3;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (param_1[1] != 0) {
        _free(uVar1);
      }
      uVar4 = param_1[4];
      if (uVar4 == 0x8000000000000000) {
        return;
      }
      uVar1 = param_1[5];
      uVar3 = param_1[6];
      if (uVar3 != 0) {
        puVar5 = (undefined8 *)(uVar1 + 8);
        do {
          if (puVar5[-1] != 0) {
            _free(*puVar5);
          }
          puVar5 = puVar5 + 3;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      if (uVar4 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
  }
  else if ((lVar2 == 2) || (lVar2 == 3)) {
    if ((long)param_1[5] < -0x7ffffffffffffffe || param_1[5] == 0) {
      uVar1 = param_1[8];
    }
    else {
      _free(param_1[6]);
      uVar1 = param_1[8];
    }
    if (uVar1 == 0x8000000000000001) {
      return;
    }
    if (uVar1 == 0x8000000000000000) {
      return;
    }
    if (uVar1 == 0) {
      return;
    }
    uVar1 = param_1[9];
    goto code_r0x000108aa97c4;
  }
  if ((long)param_1[1] < -0x7ffffffffffffffe || param_1[1] == 0) {
    uVar1 = param_1[4];
  }
  else {
    _free(param_1[2]);
    uVar1 = param_1[4];
  }
  if (((uVar1 == 0x8000000000000001) || (uVar1 == 0x8000000000000000)) || (uVar1 == 0)) {
    return;
  }
  uVar1 = param_1[5];
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(uVar1);
  return;
}

