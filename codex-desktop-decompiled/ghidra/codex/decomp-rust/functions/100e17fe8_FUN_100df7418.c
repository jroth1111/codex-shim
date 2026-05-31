
void FUN_100df7418(ulong *param_1)

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
      if (lVar5 != 0) {
        if (lVar5 == 1) {
          if (param_1[1] != 0x8000000000000000) {
            if (param_1[1] != 0) {
              _free(param_1[2]);
            }
            if (param_1[4] == 0x8000000000000000) {
              return;
            }
            if (param_1[4] == 0) {
              return;
            }
            uVar2 = param_1[5];
            goto code_r0x000108aa97c4;
          }
LAB_100df75dc:
          puVar3 = (undefined8 *)param_1[2];
LAB_100df75e0:
                    /* WARNING: Could not recover jumptable at 0x000100df7600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)*puVar3)();
          return;
        }
LAB_100df7570:
        if (param_1[1] != 0) {
          _free(param_1[2]);
        }
        if (param_1[4] == 0x8000000000000000) {
          if (param_1[5] == 0) {
            return;
          }
          uVar2 = param_1[6];
        }
        else {
          if (param_1[4] != 0) {
            _free(param_1[5]);
          }
          uVar4 = param_1[8];
          uVar2 = param_1[9];
          if (uVar2 != 0) {
            puVar3 = (undefined8 *)(uVar4 + 8);
            do {
              if (puVar3[-1] != 0) {
                _free(*puVar3);
              }
              puVar3 = puVar3 + 3;
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
          }
          if (param_1[7] != 0) {
            _free(uVar4);
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
          if (param_1[10] == 0) {
            return;
          }
        }
        goto code_r0x000108aa97c4;
      }
      if (param_1[1] == 0x8000000000000000 || param_1[1] == 0) {
        uVar4 = param_1[4];
      }
      else {
        _free(param_1[2]);
        uVar4 = param_1[4];
      }
      if (uVar4 == 0x8000000000000000) {
        puVar3 = (undefined8 *)param_1[5];
        goto LAB_100df75e0;
      }
      uVar2 = param_1[5];
      uVar6 = param_1[6];
      if (uVar6 != 0) {
        puVar3 = (undefined8 *)(uVar2 + 0x30);
        do {
          while( true ) {
            if (puVar3[-4] != 0) {
              _free(puVar3[-3]);
            }
            if (puVar3[-1] != 0) {
              _free(*puVar3);
            }
            if (puVar3[2] != -0x8000000000000000 && puVar3[2] != 0) break;
            if (puVar3[5] == -0x8000000000000000 || puVar3[5] == 0) goto LAB_100df787c;
LAB_100df78c8:
            _free(puVar3[6]);
            puVar3 = puVar3 + 0x13;
            uVar6 = uVar6 - 1;
            if (uVar6 == 0) goto joined_r0x000100df78dc;
          }
          _free(puVar3[3]);
          if (puVar3[5] != -0x8000000000000000 && puVar3[5] != 0) goto LAB_100df78c8;
LAB_100df787c:
          puVar3 = puVar3 + 0x13;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    else {
      if (lVar5 != 2) {
        if (lVar5 == 3) goto LAB_100df7530;
        goto LAB_100df7570;
      }
      uVar4 = param_1[1];
      if (uVar4 == 0x8000000000000000) goto LAB_100df75dc;
      uVar2 = param_1[2];
      uVar6 = param_1[3];
      if (uVar6 != 0) {
        puVar3 = (undefined8 *)(uVar2 + 0x20);
        do {
          while( true ) {
            if (puVar3[-4] != 0) {
              _free(puVar3[-3]);
            }
            if (puVar3[-1] != -0x8000000000000000 && puVar3[-1] != 0) break;
            if (puVar3[2] == -0x8000000000000000 || puVar3[2] == 0) goto LAB_100df77cc;
LAB_100df7808:
            _free(puVar3[3]);
            puVar3 = puVar3 + 10;
            uVar6 = uVar6 - 1;
            if (uVar6 == 0) goto joined_r0x000100df78dc;
          }
          _free(*puVar3);
          if (puVar3[2] != -0x8000000000000000 && puVar3[2] != 0) goto LAB_100df7808;
LAB_100df77cc:
          puVar3 = puVar3 + 10;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
  }
  else if (lVar5 < 6) {
    if (lVar5 != 4) {
      if (lVar5 == 5) {
LAB_100df7530:
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
      goto LAB_100df7570;
    }
    if (param_1[2] != 0) {
      _free(param_1[3]);
    }
    if (param_1[5] != 0) {
      _free(param_1[6]);
    }
    uVar4 = param_1[9];
    uVar2 = param_1[10];
    if (uVar2 != 0) {
      puVar3 = (undefined8 *)(uVar4 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (param_1[8] != 0) {
      _free(uVar4);
    }
    if (param_1[0xe] == 0x8000000000000000 || param_1[0xe] == 0) {
      uVar4 = param_1[0x11];
    }
    else {
      _free(param_1[0xf]);
      uVar4 = param_1[0x11];
    }
    if ((uVar4 != 0x8000000000000000) && (uVar4 != 0)) {
      _free(param_1[0x12]);
    }
    uVar2 = param_1[0xc];
    uVar4 = param_1[0xd];
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
          if (*(long *)(lVar5 + 0x40) == -0x8000000000000000 || *(long *)(lVar5 + 0x40) == 0) {
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
    if (lVar5 != 8) goto LAB_100df7570;
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if (param_1[7] != 0) {
      _free(param_1[8]);
    }
    uVar4 = param_1[0xb];
    uVar2 = param_1[0xc];
    if (uVar2 != 0) {
      puVar3 = (undefined8 *)(uVar4 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (param_1[10] != 0) {
      _free(uVar4);
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
joined_r0x000100df78dc:
  if (uVar4 == 0) {
    return;
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(uVar2);
  return;
}

