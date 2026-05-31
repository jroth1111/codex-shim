
void FUN_100e85024(long *param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  bVar2 = *(byte *)(param_1 + 0x73);
  if (3 < bVar2) {
    if (bVar2 == 4) {
      FUN_100da5f74(param_1 + 0x76);
    }
    else {
      if (bVar2 != 5) {
        return;
      }
      if ((char)param_1[0x1d2] == '\x03') {
        FUN_100e7ab5c(param_1 + 0xb4);
      }
      else if ((char)param_1[0x1d2] == '\0') {
        FUN_100def028(param_1 + 0x76);
      }
    }
    goto LAB_100e85150;
  }
  if (bVar2 == 0) {
    if (*param_1 != 0) {
      _free(param_1[1]);
    }
    if (param_1[3] != 0) {
      _free(param_1[4]);
    }
    if (param_1[0x12] == -0x8000000000000000 || param_1[0x12] == 0) {
      lVar4 = param_1[6];
    }
    else {
      _free(param_1[0x13]);
      lVar4 = param_1[6];
    }
    if (lVar4 != 0) {
      _free(param_1[7]);
    }
    lVar4 = param_1[10];
    lVar8 = param_1[0xb];
    if (lVar8 != 0) {
      puVar9 = (undefined8 *)(lVar4 + 8);
      do {
        if (puVar9[-1] != 0) {
          _free(*puVar9);
        }
        puVar9 = puVar9 + 3;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (param_1[9] != 0) {
      _free(lVar4);
    }
    if (param_1[0xc] != 0) {
      _free(param_1[0xd]);
    }
    if ((param_1[0x15] != -0x8000000000000000) && (param_1[0x15] != 0)) {
      _free(param_1[0x16]);
    }
    if ((param_1[0x18] & 0x7fffffffffffffffU) == 0) {
      lVar4 = param_1[0x1c];
    }
    else {
      _free(param_1[0x19]);
      lVar4 = param_1[0x1c];
    }
    if (lVar4 != -0x8000000000000000) {
      lVar8 = param_1[0x1d];
      lVar10 = param_1[0x1e];
      if (lVar10 != 0) {
        puVar9 = (undefined8 *)(lVar8 + 8);
        do {
          if (puVar9[-1] != 0) {
            _free(*puVar9);
          }
          puVar9 = puVar9 + 3;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      if (lVar4 != 0) {
        _free(lVar8);
      }
    }
    lVar4 = param_1[0x1f];
    if (lVar4 != -0x8000000000000000) {
      lVar8 = param_1[0x20];
      lVar10 = param_1[0x21];
      if (lVar10 != 0) {
        puVar9 = (undefined8 *)(lVar8 + 8);
        do {
          if (puVar9[-1] != 0) {
            _free(*puVar9);
          }
          puVar9 = puVar9 + 4;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      if (lVar4 != 0) {
        _free(lVar8);
      }
    }
    if (-0x7fffffffffffffff < param_1[0x25]) {
      FUN_100e79780(param_1 + 0x25);
    }
    lVar4 = param_1[0x22];
    if (lVar4 != -0x8000000000000000) {
      lVar8 = param_1[0x23];
      lVar10 = param_1[0x24];
      if (lVar10 != 0) {
        lVar11 = 0;
        do {
          puVar1 = (ulong *)(lVar8 + lVar11 * 0x20);
          uVar6 = *puVar1;
          uVar7 = uVar6 ^ 0x8000000000000000;
          if (-1 < (long)uVar6) {
            uVar7 = 3;
          }
          if (uVar7 == 3) {
            if (uVar6 != 0) {
              uVar7 = puVar1[1];
LAB_100e31464:
              _free(uVar7);
            }
          }
          else if (uVar7 == 1) {
            uVar7 = puVar1[2];
            uVar6 = puVar1[3];
            if (uVar6 != 0) {
              puVar9 = (undefined8 *)(uVar7 + 8);
              do {
                if (puVar9[-1] != 0) {
                  _free(*puVar9);
                }
                puVar9 = puVar9 + 3;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
            if (puVar1[1] != 0) goto LAB_100e31464;
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 != lVar10);
      }
      if (lVar4 != 0) {
        _free(lVar8);
      }
    }
    lVar8 = param_1[0x10];
    lVar4 = lVar8;
    for (lVar10 = param_1[0x11]; lVar10 != 0; lVar10 = lVar10 + -1) {
      FUN_100e1d024(lVar4);
      lVar4 = lVar4 + 0x50;
    }
    if (param_1[0xf] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar8);
      return;
    }
    return;
  }
  if (bVar2 != 3) {
    return;
  }
  cVar3 = *(char *)((long)param_1 + 0x43a);
  if (cVar3 == '\x04') {
    FUN_100d2d6dc(param_1 + 0x88);
LAB_100e85114:
    *(undefined1 *)((long)param_1 + 0x439) = 0;
  }
  else {
    if (cVar3 == '\x03') {
      FUN_100d91e84(param_1 + 0x8a);
      goto LAB_100e85114;
    }
    if (cVar3 == '\0') {
      if ((char)param_1[0x81] == '\x03') {
        plVar5 = param_1 + 0x80;
      }
      else {
        if ((char)param_1[0x81] != '\0') goto LAB_100e85124;
        plVar5 = param_1 + 0x7f;
      }
      FUN_100e8d5b4(plVar5);
    }
  }
LAB_100e85124:
  plVar5 = param_1 + 0x76;
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (plVar5);
  lVar4 = *(long *)*plVar5;
  *(long *)*plVar5 = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(plVar5);
  }
LAB_100e85150:
  if (((*(byte *)((long)param_1 + 0x399) & 1) != 0) &&
     (lVar4 = param_1[0x70], lVar4 != -0x8000000000000000)) {
    lVar8 = param_1[0x71];
    lVar10 = param_1[0x72];
    if (lVar10 != 0) {
      lVar11 = 0;
      do {
        puVar1 = (ulong *)(lVar8 + lVar11 * 0x20);
        uVar6 = *puVar1;
        uVar7 = uVar6 ^ 0x8000000000000000;
        if (-1 < (long)uVar6) {
          uVar7 = 3;
        }
        if (uVar7 == 3) {
          if (uVar6 != 0) {
            uVar7 = puVar1[1];
LAB_100e85188:
            _free(uVar7);
          }
        }
        else if (uVar7 == 1) {
          uVar7 = puVar1[2];
          uVar6 = puVar1[3];
          if (uVar6 != 0) {
            puVar9 = (undefined8 *)(uVar7 + 8);
            do {
              if (puVar9[-1] != 0) {
                _free(*puVar9);
              }
              puVar9 = puVar9 + 3;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          if (puVar1[1] != 0) goto LAB_100e85188;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 != lVar10);
    }
    if (lVar4 != 0) {
      _free(lVar8);
    }
  }
  *(undefined1 *)((long)param_1 + 0x399) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  if (((*(byte *)((long)param_1 + 0x39a) & 1) != 0) &&
     (lVar4 = param_1[0x68], lVar4 != -0x8000000000000000)) {
    lVar10 = param_1[0x69];
    lVar8 = param_1[0x6a];
    if (lVar8 != 0) {
      puVar9 = (undefined8 *)(lVar10 + 8);
      do {
        if (puVar9[-1] != 0) {
          _free(*puVar9);
        }
        puVar9 = puVar9 + 3;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (lVar4 != 0) {
      _free(lVar10);
    }
  }
  *(undefined1 *)((long)param_1 + 0x39a) = 0;
  if (((*(byte *)((long)param_1 + 0x39b) & 1) == 0) || ((param_1[100] & 0x7fffffffffffffffU) == 0))
  {
    *(undefined1 *)((long)param_1 + 0x39b) = 0;
    *(undefined2 *)((long)param_1 + 0x3a1) = 0;
    *(undefined1 *)((long)param_1 + 0x3a3) = 0;
    bVar2 = *(byte *)((long)param_1 + 0x39c);
  }
  else {
    _free(param_1[0x65]);
    *(undefined1 *)((long)param_1 + 0x39b) = 0;
    *(undefined2 *)((long)param_1 + 0x3a1) = 0;
    *(undefined1 *)((long)param_1 + 0x3a3) = 0;
    bVar2 = *(byte *)((long)param_1 + 0x39c);
  }
  if ((((bVar2 & 1) != 0) && (param_1[0x61] != -0x8000000000000000)) && (param_1[0x61] != 0)) {
    _free(param_1[0x62]);
  }
  *(undefined1 *)((long)param_1 + 0x39c) = 0;
  if (((*(byte *)((long)param_1 + 0x39d) & 1) != 0) && (param_1[0x5e] != 0)) {
    _free(param_1[0x5f]);
  }
  *(undefined1 *)((long)param_1 + 0x39d) = 0;
  if (((*(byte *)((long)param_1 + 0x39e) & 1) != 0) && (param_1[0x5b] != 0)) {
    _free(param_1[0x5c]);
  }
  *(undefined1 *)((long)param_1 + 0x39e) = 0;
  if (param_1[0x36] != 0) {
    _free(param_1[0x37]);
  }
  lVar4 = param_1[0x4f];
  if (lVar4 != -0x8000000000000000) {
    lVar10 = param_1[0x50];
    lVar8 = param_1[0x51];
    if (lVar8 != 0) {
      puVar9 = (undefined8 *)(lVar10 + 8);
      do {
        if (puVar9[-1] != 0) {
          _free(*puVar9);
        }
        puVar9 = puVar9 + 4;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (lVar4 != 0) {
      _free(lVar10);
    }
  }
  lVar10 = param_1[0x40];
  lVar4 = lVar10;
  for (lVar8 = param_1[0x41]; lVar8 != 0; lVar8 = lVar8 + -1) {
    FUN_100e1d024(lVar4);
    lVar4 = lVar4 + 0x50;
  }
  if (param_1[0x3f] != 0) {
    _free(lVar10);
  }
  *(undefined1 *)((long)param_1 + 0x3ac) = 0;
  *(undefined8 *)((long)param_1 + 0x3a4) = 0;
  if (((*(byte *)((long)param_1 + 0x39f) & 1) != 0) && (param_1[0x30] != 0)) {
    _free(param_1[0x31]);
  }
  *(undefined1 *)((long)param_1 + 0x39f) = 0;
  return;
}

