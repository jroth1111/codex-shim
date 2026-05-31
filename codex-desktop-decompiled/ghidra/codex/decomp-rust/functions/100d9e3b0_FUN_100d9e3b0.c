
void FUN_100d9e3b0(long param_1)

{
  ulong *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar4;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  
  FUN_1060fb5d4(&stack0xffffffffffffffc0);
  uVar4 = extraout_x1_01;
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x18))(*(undefined8 *)(param_1 + 0x30));
    uVar4 = extraout_x1_02;
  }
  bVar2 = *(byte *)(param_1 + 0x2a0);
  if (bVar2 < 4) {
    if (bVar2 == 0) {
      if (*(long *)(param_1 + 0x48) != 0) {
        _free(*(undefined8 *)(param_1 + 0x50));
      }
      if (*(long *)(param_1 + 0x90) == -0x8000000000000000 || *(long *)(param_1 + 0x90) == 0) {
        lVar3 = *(long *)(param_1 + 0x68);
        lVar9 = *(long *)(param_1 + 0x70);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x98));
        lVar3 = *(long *)(param_1 + 0x68);
        lVar9 = *(long *)(param_1 + 0x70);
      }
      if (lVar9 != 0) {
        puVar10 = (undefined8 *)(lVar3 + 8);
        do {
          if (puVar10[-1] != 0) {
            _free(*puVar10);
          }
          puVar10 = puVar10 + 3;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if (*(long *)(param_1 + 0x60) != 0) {
        _free(lVar3);
      }
      if (*(long *)(param_1 + 0x78) != 0) {
        _free(*(undefined8 *)(param_1 + 0x80));
      }
      if ((*(long *)(param_1 + 0xa8) != -0x8000000000000000) && (*(long *)(param_1 + 0xa8) != 0)) {
        _free(*(undefined8 *)(param_1 + 0xb0));
      }
      if ((*(ulong *)(param_1 + 0xc0) & 0x7fffffffffffffff) == 0) {
        lVar3 = *(long *)(param_1 + 0xe0);
      }
      else {
        _free(*(undefined8 *)(param_1 + 200));
        lVar3 = *(long *)(param_1 + 0xe0);
      }
      if (lVar3 != -0x8000000000000000) {
        lVar9 = *(long *)(param_1 + 0xe8);
        lVar11 = *(long *)(param_1 + 0xf0);
        if (lVar11 != 0) {
          puVar10 = (undefined8 *)(lVar9 + 8);
          do {
            if (puVar10[-1] != 0) {
              _free(*puVar10);
            }
            puVar10 = puVar10 + 3;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        if (lVar3 != 0) {
          _free(lVar9);
        }
      }
      if (-0x7fffffffffffffff < *(long *)(param_1 + 0x110)) {
        FUN_100e79780();
      }
      lVar3 = *(long *)(param_1 + 0xf8);
      if (lVar3 == -0x8000000000000000) {
        return;
      }
      lVar9 = *(long *)(param_1 + 0x100);
      lVar11 = *(long *)(param_1 + 0x108);
      if (lVar11 != 0) {
        lVar12 = 0;
        do {
          puVar1 = (ulong *)(lVar9 + lVar12 * 0x20);
          uVar5 = *puVar1;
          uVar6 = uVar5 ^ 0x8000000000000000;
          if (-1 < (long)uVar5) {
            uVar6 = 3;
          }
          if (uVar6 == 3) {
            if (uVar5 != 0) {
              uVar6 = puVar1[1];
LAB_100d4ec5c:
              _free(uVar6);
            }
          }
          else if (uVar6 == 1) {
            uVar6 = puVar1[2];
            uVar5 = puVar1[3];
            if (uVar5 != 0) {
              puVar10 = (undefined8 *)(uVar6 + 8);
              do {
                if (puVar10[-1] != 0) {
                  _free(*puVar10);
                }
                puVar10 = puVar10 + 3;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            if (puVar1[1] != 0) goto LAB_100d4ec5c;
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 != lVar11);
      }
      if (lVar3 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar9);
      return;
    }
    if (bVar2 != 3) {
      return;
    }
    if (((*(char *)(param_1 + 800) == '\x03') && (*(char *)(param_1 + 0x318) == '\x03')) &&
       (*(char *)(param_1 + 0x2d0) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x2d8);
      if (*(long *)(param_1 + 0x2e0) != 0) {
        (**(code **)(*(long *)(param_1 + 0x2e0) + 0x18))(*(undefined8 *)(param_1 + 0x2e8));
      }
    }
  }
  else if (bVar2 == 4) {
    if (((*(char *)(param_1 + 800) == '\x03') && (*(char *)(param_1 + 0x318) == '\x03')) &&
       (*(char *)(param_1 + 0x2d0) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x2d8);
      uVar4 = extraout_x1;
      if (*(long *)(param_1 + 0x2e0) != 0) {
        (**(code **)(*(long *)(param_1 + 0x2e0) + 0x18))(*(undefined8 *)(param_1 + 0x2e8));
        uVar4 = extraout_x1_00;
      }
    }
    pcVar7 = *(char **)(param_1 + 0x280);
    if (*pcVar7 == '\0') {
      *pcVar7 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar7,uVar4,1000000000);
    }
    FUN_1060fa678(pcVar7,1,pcVar7);
  }
  else {
    if (bVar2 == 5) {
      FUN_100d1ddbc(param_1 + 0x2b0);
    }
    else {
      if (bVar2 != 6) {
        return;
      }
      FUN_100e8d5b4(param_1 + 0x2b0);
    }
    *(undefined2 *)(param_1 + 0x2ac) = 0;
    *(undefined1 *)(param_1 + 0x2ae) = 0;
    if ((*(long *)(param_1 + 0x270) != 0) &&
       (plVar8 = *(long **)(param_1 + 0x278), plVar8 != (long *)0x0)) {
      uVar6 = plVar8[10];
      do {
        uVar5 = uVar6;
        if (((uint)uVar5 >> 2 & 1) != 0) goto LAB_100d4e7d8;
        uVar6 = plVar8[10];
      } while (uVar6 != uVar5);
      plVar8[10] = uVar5 | 2;
LAB_100d4e7d8:
      if ((uVar5 & 5) == 1) {
        (**(code **)(plVar8[8] + 0x10))(plVar8[9]);
      }
      lVar3 = *plVar8;
      *plVar8 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001034c6770(param_1 + 0x278);
      }
    }
  }
  if ((*(byte *)(param_1 + 0x2a2) & 1) != 0) {
    FUN_100e8d5b4(param_1 + 0x268);
  }
  *(undefined1 *)(param_1 + 0x2a2) = 0;
  if (((*(byte *)(param_1 + 0x2a1) & 1) != 0) &&
     (plVar8 = *(long **)(param_1 + 0x260), plVar8 != (long *)0x0)) {
    uVar6 = plVar8[10];
    do {
      uVar5 = uVar6;
      if (((uint)uVar5 >> 2 & 1) != 0) goto LAB_100d4e858;
      uVar6 = plVar8[10];
    } while (uVar6 != uVar5);
    plVar8[10] = uVar5 | 2;
LAB_100d4e858:
    if ((uVar5 & 5) == 1) {
      (**(code **)(plVar8[8] + 0x10))(plVar8[9]);
    }
    lVar3 = *plVar8;
    *plVar8 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      func_0x0001034c6770(param_1 + 0x260);
    }
  }
  *(undefined1 *)(param_1 + 0x2a1) = 0;
  if (*(long *)(param_1 + 0x248) != 0) {
    _free(*(undefined8 *)(param_1 + 0x250));
  }
  if (((*(byte *)(param_1 + 0x2a3) & 1) != 0) &&
     (lVar3 = *(long *)(param_1 + 0x230), lVar3 != -0x8000000000000000)) {
    lVar9 = *(long *)(param_1 + 0x238);
    lVar11 = *(long *)(param_1 + 0x240);
    if (lVar11 != 0) {
      lVar12 = 0;
      do {
        puVar1 = (ulong *)(lVar9 + lVar12 * 0x20);
        uVar5 = *puVar1;
        uVar6 = uVar5 ^ 0x8000000000000000;
        if (-1 < (long)uVar5) {
          uVar6 = 3;
        }
        if (uVar6 == 3) {
          if (uVar5 != 0) {
            uVar6 = puVar1[1];
LAB_100d4e8d8:
            _free(uVar6);
          }
        }
        else if (uVar6 == 1) {
          uVar6 = puVar1[2];
          uVar5 = puVar1[3];
          if (uVar5 != 0) {
            puVar10 = (undefined8 *)(uVar6 + 8);
            do {
              if (puVar10[-1] != 0) {
                _free(*puVar10);
              }
              puVar10 = puVar10 + 3;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          if (puVar1[1] != 0) goto LAB_100d4e8d8;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != lVar11);
    }
    if (lVar3 != 0) {
      _free(lVar9);
    }
  }
  *(undefined1 *)(param_1 + 0x2a3) = 0;
  if (((*(byte *)(param_1 + 0x2a4) & 1) != 0) && (-0x7fffffffffffffff < *(long *)(param_1 + 0x208)))
  {
    FUN_100e79780(param_1 + 0x208);
  }
  *(undefined1 *)(param_1 + 0x2a4) = 0;
  if (((*(byte *)(param_1 + 0x2a5) & 1) != 0) &&
     (lVar3 = *(long *)(param_1 + 0x1f0), lVar3 != -0x8000000000000000)) {
    lVar9 = *(long *)(param_1 + 0x1f8);
    lVar11 = *(long *)(param_1 + 0x200);
    if (lVar11 != 0) {
      puVar10 = (undefined8 *)(lVar9 + 8);
      do {
        if (puVar10[-1] != 0) {
          _free(*puVar10);
        }
        puVar10 = puVar10 + 3;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (lVar3 != 0) {
      _free(lVar9);
    }
  }
  *(undefined1 *)(param_1 + 0x2a5) = 0;
  if (((*(byte *)(param_1 + 0x2a6) & 1) == 0) ||
     ((*(ulong *)(param_1 + 0x1d0) & 0x7fffffffffffffff) == 0)) {
    *(undefined1 *)(param_1 + 0x2a6) = 0;
    bVar2 = *(byte *)(param_1 + 0x2a7);
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x1d8));
    *(undefined1 *)(param_1 + 0x2a6) = 0;
    bVar2 = *(byte *)(param_1 + 0x2a7);
  }
  if ((((bVar2 & 1) != 0) && (*(long *)(param_1 + 0x1b8) != -0x8000000000000000)) &&
     (*(long *)(param_1 + 0x1b8) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x1c0));
  }
  *(undefined1 *)(param_1 + 0x2a7) = 0;
  if (((*(byte *)(param_1 + 0x2a8) & 1) != 0) && (*(long *)(param_1 + 0x1a0) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x1a8));
  }
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  if ((*(byte *)(param_1 + 0x2a9) & 1) != 0) {
    lVar3 = *(long *)(param_1 + 400);
    lVar9 = *(long *)(param_1 + 0x198);
    if (lVar9 != 0) {
      puVar10 = (undefined8 *)(lVar3 + 8);
      do {
        if (puVar10[-1] != 0) {
          _free(*puVar10);
        }
        puVar10 = puVar10 + 3;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (*(long *)(param_1 + 0x188) != 0) {
      _free(lVar3);
    }
  }
  *(undefined1 *)(param_1 + 0x2a9) = 0;
  if ((((*(byte *)(param_1 + 0x2aa) & 1) != 0) &&
      (*(long *)(param_1 + 0x170) != -0x8000000000000000)) && (*(long *)(param_1 + 0x170) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x178));
  }
  *(undefined1 *)(param_1 + 0x2aa) = 0;
  if (((*(byte *)(param_1 + 0x2ab) & 1) != 0) && (*(long *)(param_1 + 0x158) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x160));
  }
  *(undefined1 *)(param_1 + 0x2ab) = 0;
  return;
}

