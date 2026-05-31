
void FUN_103da86b8(byte *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  
  bVar1 = *param_1;
  uVar4 = (uint)bVar1;
  if (bVar1 < 0xb) {
    uVar5 = (uint)bVar1;
    if (uVar5 < 8) {
      if (uVar4 - 2 < 6) {
        return;
      }
      if ((uVar4 == 0) || (uVar4 == 1)) {
LAB_103da877c:
        if (*(long *)(param_1 + 8) == 0) {
          return;
        }
        lVar2 = *(long *)(param_1 + 0x10);
        goto code_r0x000108aa97c4;
      }
    }
    else {
      if (uVar5 - 9 < 2) {
        return;
      }
      if (uVar5 == 8) {
        uVar7 = *(ulong *)(param_1 + 8);
        if (uVar7 + 0x7fffffffffffffff < 0x15 || uVar7 == 0x8000000000000000) {
          return;
        }
        lVar2 = *(long *)(param_1 + 0x10);
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != 0) {
          lVar10 = 0;
          do {
            plVar11 = (long *)(lVar2 + lVar10 * 0x70);
            if (*plVar11 == -0x8000000000000000) {
              if (plVar11[1] != 0) {
                lVar6 = plVar11[2];
LAB_103da87ac:
                _free(lVar6);
              }
            }
            else {
              if (*plVar11 != 0) {
                _free(plVar11[1]);
              }
              if (plVar11[3] != 0) {
                _free(plVar11[4]);
              }
              if ((plVar11[10] & 0x7fffffffffffffffU) != 0) {
                _free(plVar11[0xb]);
              }
              lVar6 = plVar11[8];
              lVar12 = plVar11[9];
              if (lVar12 != 0) {
                puVar8 = (undefined8 *)(lVar6 + 8);
                do {
                  if ((puVar8[-1] & 0x7fffffffffffffff) != 0) {
                    _free(*puVar8);
                  }
                  puVar8 = puVar8 + 4;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              if (plVar11[7] != 0) goto LAB_103da87ac;
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 != lVar3);
        }
        goto joined_r0x000103da8a20;
      }
    }
LAB_103da88b4:
    param_1 = param_1 + 8;
    lVar2 = **(long **)param_1;
    **(long **)param_1 = lVar2 + -1;
    LORelease();
  }
  else {
    if (0xd < bVar1) {
      if (uVar4 - 0xe < 7) {
        return;
      }
      goto LAB_103da88b4;
    }
    if (uVar4 != 0xb) {
      if (uVar4 == 0xc) {
        lVar2 = *(long *)(param_1 + 8);
        if (lVar2 == 7) goto LAB_103da8990;
        if ((lVar2 != 3) && (lVar2 != 2)) {
          return;
        }
LAB_103da8888:
        if (*(long *)(param_1 + 0x10) != 0) {
          _free(*(undefined8 *)(param_1 + 0x18));
        }
        if (*(long *)(param_1 + 0x28) == 0) {
          return;
        }
        lVar2 = *(long *)(param_1 + 0x30);
        goto code_r0x000108aa97c4;
      }
      if (uVar4 == 0xd) goto LAB_103da877c;
      goto LAB_103da88b4;
    }
    uVar7 = *(ulong *)(param_1 + 8);
    uVar9 = uVar7 ^ 0x8000000000000000;
    if (-1 < (long)uVar7) {
      uVar9 = 0x10;
    }
    if ((long)uVar9 < 0xd) {
      if (uVar9 < 0xd) {
        return;
      }
    }
    else {
      if (uVar9 < 0x15) {
        if ((1L << (uVar9 & 0x3f) & 0x1a8000U) != 0) {
          return;
        }
        if (uVar9 == 0x10) {
          if (((param_1[0x20] & 1) == 0) && ((*(ulong *)(param_1 + 0x28) & 0x7fffffffffffffff) != 0)
             ) {
            _free(*(undefined8 *)(param_1 + 0x30));
          }
          lVar2 = *(long *)(param_1 + 0x10);
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != 0) {
            puVar8 = (undefined8 *)(lVar2 + 8);
            do {
              if (puVar8[-1] != 0) {
                _free(*puVar8);
              }
              puVar8 = puVar8 + 3;
              lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
          }
        }
        else {
          if (uVar9 != 0x12) goto LAB_103da8980;
          if ((-0x7fffffffffffffff < *(long *)(param_1 + 0x28)) && (*(long *)(param_1 + 0x28) != 0))
          {
            _free(*(undefined8 *)(param_1 + 0x30));
          }
          lVar2 = *(long *)(param_1 + 0x18);
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != 0) {
            puVar8 = (undefined8 *)(lVar2 + 8);
            do {
              if (-0x7fffffffffffffff < (long)puVar8[-1] && puVar8[-1] != 0) {
                _free(*puVar8);
              }
              puVar8 = puVar8 + 3;
              lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
          }
          uVar7 = *(ulong *)(param_1 + 0x10);
        }
joined_r0x000103da8a20:
        if (uVar7 == 0) {
          return;
        }
        goto code_r0x000108aa97c4;
      }
LAB_103da8980:
      if ((uVar9 == 0xd) || (uVar9 == 0xe)) goto LAB_103da8888;
    }
LAB_103da8990:
    param_1 = param_1 + 0x10;
    lVar2 = **(long **)param_1;
    **(long **)param_1 = lVar2 + -1;
    LORelease();
  }
  if (lVar2 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar2 = *(long *)param_1;
  puVar8 = *(undefined8 **)(param_1 + 8);
  uVar9 = puVar8[2];
  if ((code *)*puVar8 != (code *)0x0) {
    (*(code *)*puVar8)(lVar2 + (uVar9 - 1 & 0xfffffffffffffff0) + 0x10);
  }
  if (lVar2 != -1) {
    lVar3 = *(long *)(lVar2 + 8);
    *(long *)(lVar2 + 8) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      if (uVar9 < 9) {
        uVar9 = 8;
      }
      if ((uVar9 + puVar8[1] + 0xf & -uVar9) != 0) {
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar2);
        return;
      }
    }
  }
  return;
}

