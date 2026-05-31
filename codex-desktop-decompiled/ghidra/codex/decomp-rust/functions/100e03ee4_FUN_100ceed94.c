
void FUN_100ceed94(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  
  bVar2 = *(byte *)(param_1 + 0x870);
  if (bVar2 < 4) {
    if (bVar2 == 0) {
      plVar8 = *(long **)(param_1 + 0x338);
      if (plVar8 != (long *)0x0) {
        lVar3 = *plVar8;
        *plVar8 = lVar3 + -1;
        LORelease();
        if (lVar3 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0x338);
        }
      }
      if (*(long *)(param_1 + 0x2d0) != -0x8000000000000000) {
        lVar3 = *(long *)(param_1 + 0x2f0);
        if (lVar3 != 0 && lVar3 * 9 != -0x11) {
          _free(*(long *)(param_1 + 0x2e8) + lVar3 * -8 + -8);
        }
        func_0x000100cd7284(param_1 + 0x2d0);
      }
      if (*(long *)(param_1 + 0x318) != -0x8000000000000000 && *(long *)(param_1 + 0x318) != 0) {
        _free(*(undefined8 *)(param_1 + 800));
      }
      FUN_100e1f79c(param_1);
      if (*(long *)(param_1 + 0x240) != 0) {
        _free(*(undefined8 *)(param_1 + 0x248));
      }
      if (*(long *)(param_1 + 0x270) == -0x8000000000000000 || *(long *)(param_1 + 0x270) == 0) {
        lVar3 = *(long *)(param_1 + 600);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x278));
        lVar3 = *(long *)(param_1 + 600);
      }
      if (lVar3 != 0) {
        _free(*(undefined8 *)(param_1 + 0x260));
      }
      if (*(long *)(param_1 + 0x288) == -0x8000000000000000 || *(long *)(param_1 + 0x288) == 0) {
        lVar3 = *(long *)(param_1 + 0x2a0);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x290));
        lVar3 = *(long *)(param_1 + 0x2a0);
      }
      if (lVar3 != -0x8000000000000000) {
        lVar5 = *(long *)(param_1 + 0x2a8);
        lVar11 = *(long *)(param_1 + 0x2b0);
        if (lVar11 != 0) {
          lVar13 = 0;
          do {
            plVar8 = (long *)(lVar5 + lVar13 * 0x48);
            if (*plVar8 != 0) {
              _free(plVar8[1]);
            }
            if (plVar8[3] == -0x8000000000000000 || plVar8[3] == 0) {
              lVar14 = plVar8[6];
            }
            else {
              _free(plVar8[4]);
              lVar14 = plVar8[6];
            }
            if (lVar14 != -0x8000000000000000) {
              lVar1 = plVar8[7];
              lVar9 = plVar8[8];
              if (lVar9 != 0) {
                puVar6 = (undefined8 *)(lVar1 + 8);
                do {
                  if (puVar6[-1] != 0) {
                    _free(*puVar6);
                  }
                  puVar6 = puVar6 + 3;
                  lVar9 = lVar9 + -1;
                } while (lVar9 != 0);
              }
              if (lVar14 != 0) {
                _free(lVar1);
              }
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 != lVar11);
        }
        if (lVar3 != 0) {
          _free(lVar5);
        }
      }
      if ((*(long *)(param_1 + 0x2b8) != -0x8000000000000000) && (*(long *)(param_1 + 0x2b8) != 0))
      {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)(param_1 + 0x2c0));
        return;
      }
      return;
    }
    if (bVar2 != 3) {
      return;
    }
    if (*(char *)(param_1 + 0x8f8) == '\0') {
      plVar8 = *(long **)(param_1 + 0x8e8);
      if (plVar8 != (long *)0x0) {
        lVar3 = *plVar8;
        *plVar8 = lVar3 + -1;
        LORelease();
        if (lVar3 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0x8e8);
        }
      }
      if ((*(long *)(param_1 + 0x878) != -0x8000000000000000) && (*(long *)(param_1 + 0x878) != 0))
      {
        _free(*(undefined8 *)(param_1 + 0x880));
      }
      if (*(long *)(param_1 + 0x890) != -0x7ffffffffffffffb) {
        FUN_100de6690(param_1 + 0x890);
      }
    }
    goto LAB_100cef148;
  }
  if (bVar2 == 4) {
    if (*(char *)(param_1 + 0x948) == '\0') {
      plVar8 = *(long **)(param_1 + 0x938);
      if (plVar8 != (long *)0x0) {
        lVar3 = *plVar8;
        *plVar8 = lVar3 + -1;
        LORelease();
        if (lVar3 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0x938);
        }
      }
      if (*(long *)(param_1 + 0x8c8) == -0x8000000000000000 || *(long *)(param_1 + 0x8c8) == 0) {
        lVar3 = *(long *)(param_1 + 0x8e0);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x8d0));
        lVar3 = *(long *)(param_1 + 0x8e0);
      }
      if (lVar3 != -0x7ffffffffffffffb) {
        FUN_100de6690(param_1 + 0x8e0);
      }
    }
    plVar8 = *(long **)(param_1 + 0x8c0);
    if (*plVar8 == 1) {
      uVar7 = plVar8[1];
      if ((uVar7 & 3) == 1) {
        puVar6 = (undefined8 *)(uVar7 - 1);
        uVar10 = *puVar6;
        puVar12 = *(undefined8 **)(uVar7 + 7);
        pcVar4 = (code *)*puVar12;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar10);
        }
        if (puVar12[1] != 0) {
          _free(uVar10);
        }
        goto LAB_100cef224;
      }
    }
    else if ((*plVar8 == 0) && (plVar8[2] != 0)) {
      puVar6 = (undefined8 *)plVar8[1];
LAB_100cef224:
      _free(puVar6);
    }
    _free(plVar8);
    *(undefined1 *)(param_1 + 0x871) = 0;
    bVar2 = *(byte *)(param_1 + 0x873);
  }
  else {
    if (bVar2 == 5) {
      if (*(char *)(param_1 + 0x900) == '\0') {
        plVar8 = *(long **)(param_1 + 0x8f0);
        if (plVar8 != (long *)0x0) {
          lVar3 = *plVar8;
          *plVar8 = lVar3 + -1;
          LORelease();
          if (lVar3 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0x8f0);
          }
        }
        if ((*(long *)(param_1 + 0x880) != -0x8000000000000000) && (*(long *)(param_1 + 0x880) != 0)
           ) {
          _free(*(undefined8 *)(param_1 + 0x888));
        }
        if (*(long *)(param_1 + 0x898) != -0x7ffffffffffffffb) {
          FUN_100de6690(param_1 + 0x898);
        }
      }
      plVar8 = *(long **)(param_1 + 0x878);
      if (*plVar8 == 1) {
        uVar7 = plVar8[1];
        if ((uVar7 & 3) == 1) {
          puVar6 = (undefined8 *)(uVar7 - 1);
          uVar10 = *puVar6;
          puVar12 = *(undefined8 **)(uVar7 + 7);
          pcVar4 = (code *)*puVar12;
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(uVar10);
          }
          if (puVar12[1] != 0) {
            _free(uVar10);
          }
          goto LAB_100ceef50;
        }
      }
      else if ((*plVar8 == 0) && (plVar8[2] != 0)) {
        puVar6 = (undefined8 *)plVar8[1];
LAB_100ceef50:
        _free(puVar6);
      }
      _free(plVar8);
      *(undefined1 *)(param_1 + 0x875) = 0;
      bVar2 = *(byte *)(param_1 + 0x871);
    }
    else {
      if (bVar2 != 6) {
        return;
      }
      FUN_100d56730(param_1 + 0x8c0);
      *(undefined1 *)(param_1 + 0x875) = 0;
      bVar2 = *(byte *)(param_1 + 0x871);
    }
    if ((bVar2 & 1) != 0) {
      FUN_100de6690(param_1 + 0x7e0);
    }
    *(undefined1 *)(param_1 + 0x871) = 0;
    bVar2 = *(byte *)(param_1 + 0x873);
  }
  if ((bVar2 & 1) != 0) {
    FUN_100ded1dc(param_1 + 0x750);
  }
  *(undefined1 *)(param_1 + 0x873) = 0;
  if (((*(byte *)(param_1 + 0x872) & 1) != 0) && (*(long *)(param_1 + 0x738) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x740));
  }
  *(undefined1 *)(param_1 + 0x872) = 0;
  if (*(long *)(param_1 + 0x720) != 0) {
    _free(*(undefined8 *)(param_1 + 0x728));
  }
  if (*(long *)(param_1 + 0x708) != 0) {
    _free(*(undefined8 *)(param_1 + 0x710));
  }
  if ((*(long *)(param_1 + 0x6a8) != -0x8000000000000000) && (*(long *)(param_1 + 0x6a8) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x6b0));
  }
  if ((*(long *)(param_1 + 0x6c0) != -0x8000000000000000) && (*(long *)(param_1 + 0x6c0) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x6c8));
  }
  lVar3 = *(long *)(param_1 + 0x6d8);
  if (lVar3 != -0x8000000000000000) {
    lVar5 = *(long *)(param_1 + 0x6e0);
    lVar11 = *(long *)(param_1 + 0x6e8);
    if (lVar11 != 0) {
      lVar13 = 0;
      do {
        plVar8 = (long *)(lVar5 + lVar13 * 0x48);
        if (*plVar8 != 0) {
          _free(plVar8[1]);
        }
        if (plVar8[3] == -0x8000000000000000 || plVar8[3] == 0) {
          lVar14 = plVar8[6];
        }
        else {
          _free(plVar8[4]);
          lVar14 = plVar8[6];
        }
        if (lVar14 != -0x8000000000000000) {
          lVar1 = plVar8[7];
          lVar9 = plVar8[8];
          if (lVar9 != 0) {
            puVar6 = (undefined8 *)(lVar1 + 8);
            do {
              if (puVar6[-1] != 0) {
                _free(*puVar6);
              }
              puVar6 = puVar6 + 3;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
          if (lVar14 != 0) {
            _free(lVar1);
          }
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 != lVar11);
    }
    if (lVar3 != 0) {
      _free(lVar5);
    }
  }
  if ((*(long *)(param_1 + 0x6f0) != -0x8000000000000000) && (*(long *)(param_1 + 0x6f0) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x6f8));
  }
LAB_100cef148:
  if (*(long *)(param_1 + 0x618) != -0x8000000000000000) {
    lVar3 = *(long *)(param_1 + 0x638);
    if ((lVar3 != 0) && (lVar3 * 9 != -0x11)) {
      _free(*(long *)(param_1 + 0x630) + lVar3 * -8 + -8);
    }
    func_0x000100cd7284(param_1 + 0x618);
  }
  if ((*(long *)(param_1 + 0x660) != -0x8000000000000000) && (*(long *)(param_1 + 0x660) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x668));
  }
  FUN_100e1f79c(param_1 + 0x348);
  if ((*(byte *)(param_1 + 0x874) & 1) != 0) {
    FUN_100ded1dc(param_1 + 0x588);
  }
  *(undefined1 *)(param_1 + 0x874) = 0;
  *(undefined1 *)(param_1 + 0x876) = 0;
  return;
}

