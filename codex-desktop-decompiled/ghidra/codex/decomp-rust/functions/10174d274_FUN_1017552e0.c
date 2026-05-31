
/* WARNING: Possible PIC construction at 0x00010174d2e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010174973c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010174d2e4) */
/* WARNING: Removing unreachable block (ram,0x000101749740) */

void FUN_1017552e0(ulong *param_1)

{
  int iVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *unaff_x21;
  undefined8 *puVar9;
  ulong *unaff_x22;
  ulong *puVar10;
  ulong unaff_x23;
  long *plVar11;
  undefined8 unaff_x24;
  long *plVar12;
  long lVar13;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  uVar8 = *param_1;
  lVar4 = uVar8 + 0x7fffffffffffffff;
  if (uVar8 < 0x8000000000000001) {
    lVar4 = 3;
  }
  if (lVar4 < 4) {
    if (lVar4 < 2) {
      if (lVar4 != 0) {
        if (lVar4 == 1) {
          uVar8 = param_1[1] & 0x7fffffffffffffff;
          goto joined_r0x000101755750;
        }
        goto LAB_101755580;
      }
      if ((param_1[1] & 0x7fffffffffffffff) != 0) {
        _free(param_1[2]);
      }
      uVar6 = param_1[4];
      uVar8 = uVar6 ^ 0x8000000000000000;
      if (-1 < (long)uVar6) {
        uVar8 = 3;
      }
      if (uVar8 == 3) goto LAB_1017555f8;
      if (uVar8 != 2) {
        return;
      }
      puVar3 = (ulong *)param_1[6];
      uVar8 = param_1[7];
      if (uVar8 != 0) {
        puVar10 = puVar3 + 1;
        do {
          if (puVar10[-1] != 0) {
            _free(*puVar10);
          }
          puVar10 = puVar10 + 3;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    else {
      if (lVar4 == 2) {
        if ((param_1[1] & 0x7fffffffffffffff) == 0) {
          uVar8 = param_1[5];
        }
        else {
          _free(param_1[2]);
          uVar8 = param_1[5];
        }
        if (uVar8 == 0) {
          return;
        }
        uVar6 = param_1[7];
        if (uVar6 != 0) {
          plVar11 = (long *)param_1[4];
          plVar12 = plVar11 + 1;
          lVar4 = *plVar11;
          uVar5 = CONCAT17(-(-1 < lVar4),
                           CONCAT16(-(-1 < (char)((ulong)lVar4 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar4 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar4 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar4 >> 0x18)),
                                                               CONCAT12(-(-1 < (char)((ulong)lVar4
                                                                                     >> 0x10)),
                                                                        CONCAT11(-(-1 < (char)((
                                                  ulong)lVar4 >> 8)),-(-1 < (char)lVar4)))))))) &
                  0x8080808080808080;
          do {
            while (uVar5 == 0) {
              lVar4 = *plVar12;
              plVar11 = plVar11 + -0x30;
              plVar12 = plVar12 + 1;
              uVar5 = CONCAT17(-(-1 < lVar4),
                               CONCAT16(-(-1 < (char)((ulong)lVar4 >> 0x30)),
                                        CONCAT15(-(-1 < (char)((ulong)lVar4 >> 0x28)),
                                                 CONCAT14(-(-1 < (char)((ulong)lVar4 >> 0x20)),
                                                          CONCAT13(-(-1 < (char)((ulong)lVar4 >>
                                                                                0x18)),
                                                                   CONCAT12(-(-1 < (char)((ulong)
                                                  lVar4 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar4 >> 8)),
                                                           -(-1 < (char)lVar4)))))))) &
                      0x8080808080808080;
            }
            uVar7 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
            iVar1 = (int)((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3);
            if (plVar11[(long)-iVar1 * 6 + -6] != 0) {
              _free(plVar11[(long)-iVar1 * 6 + -5]);
            }
            lVar4 = plVar11[(long)-iVar1 * 6 + -2];
            lVar13 = plVar11[(long)-iVar1 * 6 + -1];
            if (lVar13 != 0) {
              puVar9 = (undefined8 *)(lVar4 + 8);
              do {
                if (puVar9[-1] != 0) {
                  _free(*puVar9);
                }
                puVar9 = puVar9 + 3;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
            }
            if (plVar11[(long)-iVar1 * 6 + -3] != 0) {
              _free(lVar4);
            }
            uVar5 = uVar5 - 1 & uVar5;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (uVar8 * 0x31 == -0x39) {
          return;
        }
        puVar3 = (ulong *)(param_1[4] + uVar8 * -0x30 + -0x30);
        goto code_r0x000108aa97c4;
      }
      if (lVar4 == 3) {
        if ((uVar8 & 0x7fffffffffffffff) == 0) {
          uVar8 = param_1[3];
        }
        else {
          _free(param_1[1]);
          uVar8 = param_1[3];
        }
        if (uVar8 != 0x8000000000000005) {
          func_0x00010174d274();
        }
        puVar10 = param_1 + 0xc;
        if (param_1[0xc] == 0x8000000000000005) {
          return;
        }
        while( true ) {
          while( true ) {
            puVar2 = puVar10;
            *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
            *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
            *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
            *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
            *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
            *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
            *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
            *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
            unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
            uVar8 = *puVar2 ^ 0x8000000000000000;
            if (-1 < (long)*puVar2) {
              uVar8 = 5;
            }
            if (uVar8 < 3) {
              return;
            }
            if (uVar8 == 3) {
              if (puVar2[1] == 0) {
                return;
              }
              puVar3 = (ulong *)puVar2[2];
              goto code_r0x000108aa97c4;
            }
            if (uVar8 == 4) break;
            uVar8 = puVar2[4];
            if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
              _free(puVar2[3] + uVar8 * -8 + -8);
            }
            unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x40);
            *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
            *(undefined8 *)((long)register0x00000008 + -0x38) =
                 *(undefined8 *)((long)register0x00000008 + -0x38);
            *(undefined8 *)((long)register0x00000008 + -0x30) =
                 *(undefined8 *)((long)register0x00000008 + -0x30);
            *(undefined8 *)((long)register0x00000008 + -0x28) =
                 *(undefined8 *)((long)register0x00000008 + -0x28);
            *(undefined8 *)((long)register0x00000008 + -0x20) =
                 *(undefined8 *)((long)register0x00000008 + -0x20);
            *(undefined8 *)((long)register0x00000008 + -0x18) =
                 *(undefined8 *)((long)register0x00000008 + -0x18);
            *(undefined8 *)((long)register0x00000008 + -0x10) =
                 *(undefined8 *)((long)register0x00000008 + -0x10);
            *(undefined8 *)((long)register0x00000008 + -8) =
                 *(undefined8 *)((long)register0x00000008 + -8);
            unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
            puVar3 = (ulong *)puVar2[1];
            unaff_x23 = puVar2[2];
            if (unaff_x23 == 0) {
              if (*puVar2 == 0) {
                return;
              }
              goto code_r0x000108aa97c4;
            }
            if (*puVar3 != 0) {
              _free(puVar3[1]);
            }
            unaff_x22 = puVar3 + 0xd;
            unaff_x30 = 0x101749740;
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
            puVar10 = puVar3 + 3;
            unaff_x19 = puVar3;
            unaff_x20 = puVar2;
            unaff_x21 = puVar3;
          }
          puVar3 = (ulong *)puVar2[2];
          unaff_x23 = puVar2[3];
          if (unaff_x23 == 0) break;
          unaff_x22 = puVar3 + 9;
          unaff_x30 = 0x10174d2e4;
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
          puVar10 = puVar3;
          unaff_x19 = puVar2;
          unaff_x20 = puVar3;
        }
        if (puVar2[1] == 0) {
          return;
        }
        goto code_r0x000108aa97c4;
      }
LAB_101755580:
      if ((param_1[1] & 0x7fffffffffffffff) != 0) {
        _free(param_1[2]);
      }
      uVar6 = param_1[4];
      uVar8 = uVar6 ^ 0x8000000000000000;
      if (-1 < (long)uVar6) {
        uVar8 = 3;
      }
      if (uVar8 == 3) {
LAB_1017555f8:
        if (uVar6 == 0) {
          return;
        }
        puVar3 = (ulong *)param_1[5];
        goto code_r0x000108aa97c4;
      }
      if (uVar8 != 1) {
        return;
      }
      puVar3 = (ulong *)param_1[6];
      uVar8 = param_1[7];
      if (uVar8 != 0) {
        puVar10 = puVar3 + 1;
        do {
          if (puVar10[-1] != 0) {
            _free(*puVar10);
          }
          puVar10 = puVar10 + 3;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
LAB_1017555e8:
    uVar8 = param_1[5];
  }
  else {
    if (5 < lVar4) {
      if (lVar4 == 6) {
        if ((param_1[10] & 0x7fffffffffffffff) != 0) {
          _free(param_1[0xb]);
        }
        if (param_1[1] != 0) {
          _free(param_1[2]);
        }
        if (param_1[4] != 0) {
          _free(param_1[5]);
        }
        if ((param_1[7] & 0x7fffffffffffffff) == 0) {
          return;
        }
        puVar3 = (ulong *)param_1[8];
        goto code_r0x000108aa97c4;
      }
      if (lVar4 == 7) {
        if ((param_1[4] & 0x7fffffffffffffff) == 0) {
          uVar8 = param_1[1];
        }
        else {
          _free(param_1[5]);
          uVar8 = param_1[1];
        }
joined_r0x000101755750:
        if (uVar8 == 0) {
          return;
        }
        puVar3 = (ulong *)param_1[2];
        goto code_r0x000108aa97c4;
      }
      if (lVar4 == 8) {
        if ((param_1[1] & 0x7fffffffffffffff) != 0) {
          _free(param_1[2]);
        }
        uVar6 = param_1[4];
        uVar8 = uVar6 ^ 0x8000000000000000;
        if (-1 < (long)uVar6) {
          uVar8 = 3;
        }
        if (uVar8 == 3) goto LAB_1017555f8;
        if (uVar8 != 1) {
          return;
        }
        puVar3 = (ulong *)param_1[6];
        uVar8 = param_1[7];
        if (uVar8 != 0) {
          puVar10 = puVar3 + 1;
          do {
            if (puVar10[-1] != 0) {
              _free(*puVar10);
            }
            puVar10 = puVar10 + 3;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        goto LAB_1017555e8;
      }
      goto LAB_101755580;
    }
    if (lVar4 == 4) {
      if ((param_1[1] & 0x7fffffffffffffff) != 0) {
        _free(param_1[2]);
      }
      uVar8 = param_1[4];
      if (uVar8 != 0x8000000000000001) {
        if (uVar8 != 0x8000000000000000) {
          uVar6 = param_1[5];
          uVar5 = param_1[6];
          if (uVar5 != 0) {
            puVar9 = (undefined8 *)(uVar6 + 8);
            do {
              if (puVar9[-1] != 0) {
                _free(*puVar9);
              }
              puVar9 = puVar9 + 3;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          if (uVar8 != 0) {
            _free(uVar6);
          }
        }
        uVar8 = param_1[7];
        if (uVar8 != 0x8000000000000000) {
          uVar6 = param_1[8];
          uVar5 = param_1[9];
          if (uVar5 != 0) {
            puVar9 = (undefined8 *)(uVar6 + 8);
            do {
              if (puVar9[-1] != 0) {
                _free(*puVar9);
              }
              puVar9 = puVar9 + 3;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          if (uVar8 != 0) {
            _free(uVar6);
          }
        }
        uVar8 = param_1[10];
        if (uVar8 != 0x8000000000000000) {
          puVar3 = (ulong *)param_1[0xb];
          puVar10 = puVar3;
          for (uVar6 = param_1[0xc]; uVar6 != 0; uVar6 = uVar6 - 1) {
            uVar5 = *puVar10;
            lVar4 = uVar5 + 0x7ffffffffffffffb;
            if (uVar5 < 0x8000000000000005) {
              lVar4 = 2;
            }
            if ((lVar4 == 0) || (lVar4 == 1)) {
              uVar5 = puVar10[1];
joined_r0x00010174b1f8:
              if (uVar5 != 0) {
                lVar4 = 0x10;
LAB_10174b200:
                _free(*(undefined8 *)((long)puVar10 + lVar4));
              }
            }
            else {
              uVar7 = uVar5 ^ 0x8000000000000000;
              if (-1 < (long)uVar5) {
                uVar7 = 5;
              }
              if (uVar7 < 5) {
                if (uVar7 == 2) {
                  uVar5 = puVar10[1] & 0x7fffffffffffffff;
                  goto joined_r0x00010174b1f8;
                }
              }
              else {
                if (uVar5 != 0) {
                  _free(puVar10[1]);
                }
                if ((puVar10[3] & 0x7fffffffffffffff) != 0) {
                  lVar4 = 0x20;
                  goto LAB_10174b200;
                }
              }
            }
            puVar10 = puVar10 + 7;
          }
          if (uVar8 != 0) goto code_r0x000108aa97c4;
        }
      }
      return;
    }
    if (lVar4 != 5) goto LAB_101755580;
    if ((param_1[5] & 0x7fffffffffffffff) != 0) {
      _free(param_1[6]);
    }
    puVar3 = (ulong *)param_1[2];
    uVar8 = param_1[3];
    if (uVar8 != 0) {
      puVar10 = puVar3 + 2;
      do {
        if (puVar10[-1] != 0) {
          _free(*puVar10);
        }
        puVar10 = puVar10 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    uVar8 = param_1[1];
  }
  if (uVar8 == 0) {
    return;
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar3);
  return;
}

