
void FUN_1028651b8(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar5 = *param_1 - 2;
  if (*param_1 < 2) {
    lVar5 = 4;
  }
  if (lVar5 < 4) {
    if (lVar5 < 2) {
      if (lVar5 == 0) {
        if ((param_1[1] & 0x7fffffffffffffff) == 0) {
          uVar2 = param_1[4];
        }
        else {
          _free(param_1[2]);
          uVar2 = param_1[4];
        }
        if (uVar2 != 0x8000000000000000) {
          uVar2 = param_1[5];
          uVar4 = param_1[6];
          if (uVar4 != 0) {
            puVar3 = (undefined8 *)(uVar2 + 0x30);
            do {
              if (puVar3[-4] != 0) {
                _free(puVar3[-3]);
              }
              if (puVar3[-1] != 0) {
                _free(*puVar3);
              }
              if ((puVar3[2] & 0x7fffffffffffffff) == 0) {
                uVar6 = puVar3[5];
              }
              else {
                _free(puVar3[3]);
                uVar6 = puVar3[5];
              }
              if ((uVar6 & 0x7fffffffffffffff) != 0) {
                _free(puVar3[6]);
              }
              puVar3 = puVar3 + 0x13;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          if (param_1[4] == 0) {
            return;
          }
          goto code_r0x000108aa97c4;
        }
        puVar3 = (undefined8 *)param_1[5];
        goto LAB_102865378;
      }
      if (lVar5 == 1) {
        if (param_1[1] != 0x8000000000000000) {
          if (param_1[1] != 0) {
            _free(param_1[2]);
          }
          if ((param_1[4] & 0x7fffffffffffffff) == 0) {
            return;
          }
          uVar2 = param_1[5];
          goto code_r0x000108aa97c4;
        }
        goto LAB_102865374;
      }
    }
    else {
      if (lVar5 == 2) {
        if (param_1[1] != 0x8000000000000000) {
          uVar2 = param_1[2];
          uVar4 = param_1[3];
          if (uVar4 != 0) {
            puVar3 = (undefined8 *)(uVar2 + 0x20);
            do {
              if (puVar3[-4] != 0) {
                _free(puVar3[-3]);
              }
              if ((puVar3[-1] & 0x7fffffffffffffff) == 0) {
                uVar6 = puVar3[2];
              }
              else {
                _free(*puVar3);
                uVar6 = puVar3[2];
              }
              if ((uVar6 & 0x7fffffffffffffff) != 0) {
                _free(puVar3[3]);
              }
              puVar3 = puVar3 + 10;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          if (param_1[1] == 0) {
            return;
          }
          goto code_r0x000108aa97c4;
        }
LAB_102865374:
        puVar3 = (undefined8 *)param_1[2];
LAB_102865378:
                    /* WARNING: Could not recover jumptable at 0x000102865398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar3)();
        return;
      }
      if (lVar5 == 3) goto LAB_1028652c8;
    }
LAB_102865308:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] == 0x8000000000000000) {
      if (param_1[5] == 0) {
        return;
      }
      uVar2 = param_1[6];
      goto code_r0x000108aa97c4;
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    uVar2 = param_1[8];
    uVar4 = param_1[9];
    if (uVar4 != 0) {
      puVar3 = (undefined8 *)(uVar2 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (param_1[7] != 0) {
      _free(uVar2);
    }
    uVar2 = param_1[0xb];
    uVar4 = param_1[0xc];
    if (uVar4 != 0) {
      puVar3 = (undefined8 *)(uVar2 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    uVar4 = param_1[10];
  }
  else if (lVar5 < 6) {
    if (lVar5 != 4) {
      if (lVar5 == 5) {
LAB_1028652c8:
        if (param_1[1] != 0) {
          _free(param_1[2]);
        }
        if (param_1[4] != 0) {
          _free(param_1[5]);
        }
        if (param_1[7] == 0) {
          return;
        }
        uVar2 = param_1[8];
        goto code_r0x000108aa97c4;
      }
      goto LAB_102865308;
    }
    if (param_1[2] != 0) {
      _free(param_1[3]);
    }
    if (param_1[5] != 0) {
      _free(param_1[6]);
    }
    uVar2 = param_1[9];
    uVar4 = param_1[10];
    if (uVar4 != 0) {
      puVar3 = (undefined8 *)(uVar2 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (param_1[8] != 0) {
      _free(uVar2);
    }
    if ((param_1[0xe] & 0x7fffffffffffffff) == 0) {
      if ((param_1[0x11] & 0x7fffffffffffffff) != 0) goto LAB_102865638;
LAB_1028654c8:
      uVar2 = param_1[0xc];
      uVar4 = param_1[0xd];
    }
    else {
      _free(param_1[0xf]);
      if ((param_1[0x11] & 0x7fffffffffffffff) == 0) goto LAB_1028654c8;
LAB_102865638:
      _free(param_1[0x12]);
      uVar2 = param_1[0xc];
      uVar4 = param_1[0xd];
    }
    if (uVar4 != 0) {
      puVar3 = (undefined8 *)(uVar2 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    uVar4 = param_1[0xb];
  }
  else {
    if (lVar5 == 6) {
      if (param_1[1] != 0) {
        _free(param_1[2]);
      }
      uVar2 = param_1[5];
      uVar4 = param_1[6];
      if (uVar4 != 0) {
        uVar6 = 0;
        do {
          lVar5 = uVar2 + uVar6 * 0x68;
          if (*(long *)(lVar5 + 0x10) != 0) {
            _free(*(undefined8 *)(lVar5 + 0x18));
          }
          if ((*(ulong *)(lVar5 + 0x40) & 0x7fffffffffffffff) == 0) {
            lVar1 = *(long *)(lVar5 + 0x30);
            lVar7 = *(long *)(lVar5 + 0x38);
          }
          else {
            _free(*(undefined8 *)(lVar5 + 0x48));
            lVar1 = *(long *)(lVar5 + 0x30);
            lVar7 = *(long *)(lVar5 + 0x38);
          }
          if (lVar7 != 0) {
            puVar3 = (undefined8 *)(lVar1 + 8);
            do {
              if (puVar3[-1] != 0) {
                _free(*puVar3);
              }
              puVar3 = puVar3 + 3;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
          if (*(long *)(lVar5 + 0x28) != 0) {
            _free(lVar1);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar4);
      }
      if (param_1[4] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    if (lVar5 == 7) {
      if (param_1[2] == 0) {
        return;
      }
      uVar2 = param_1[3];
      goto code_r0x000108aa97c4;
    }
    if (lVar5 != 8) goto LAB_102865308;
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if (param_1[7] != 0) {
      _free(param_1[8]);
    }
    uVar2 = param_1[0xb];
    uVar4 = param_1[0xc];
    if (uVar4 != 0) {
      puVar3 = (undefined8 *)(uVar2 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (param_1[10] != 0) {
      _free(uVar2);
    }
    uVar2 = param_1[0xe];
    uVar4 = param_1[0xf];
    if (uVar4 != 0) {
      puVar3 = (undefined8 *)(uVar2 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    uVar4 = param_1[0xd];
  }
  if (uVar4 == 0) {
    return;
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(uVar2);
  return;
}

