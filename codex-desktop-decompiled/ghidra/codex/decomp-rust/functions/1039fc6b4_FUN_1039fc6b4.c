
void FUN_1039fc6b4(ulong *param_1)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  
  lVar5 = *param_1 - 2;
  if (*param_1 < 2) {
    lVar5 = 7;
  }
  switch(lVar5) {
  case 0:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    uVar4 = param_1[5];
    uVar6 = param_1[6];
    if (uVar6 != 0) {
      uVar11 = 0;
      do {
        pbVar10 = (byte *)(uVar4 + uVar11 * 0x38);
        bVar1 = *pbVar10;
        if (bVar1 < 2) {
          if (bVar1 == 0) {
            if (*(long *)(pbVar10 + 8) != 0) {
              _free(*(undefined8 *)(pbVar10 + 0x10));
            }
            lVar5 = *(long *)(pbVar10 + 0x28);
            lVar12 = *(long *)(pbVar10 + 0x30);
            if (lVar12 != 0) {
              puVar8 = (undefined8 *)(lVar5 + 8);
              do {
                if ((puVar8[-1] & 0x7fffffffffffffff) != 0) {
                  _free(*puVar8);
                }
                puVar8 = puVar8 + 5;
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
            }
            if (*(long *)(pbVar10 + 0x20) != 0) goto code_r0x0001039f6ad0;
          }
          else {
            if (bVar1 == 1) goto code_r0x0001039f6b3c;
            lVar5 = *(long *)(pbVar10 + 8);
joined_r0x0001039f6b34:
            if (lVar5 != 0) {
              _free(*(undefined8 *)(pbVar10 + 0x10));
            }
            if (*(long *)(pbVar10 + 0x20) != 0) {
              lVar5 = *(long *)(pbVar10 + 0x28);
              goto code_r0x0001039f6ad0;
            }
          }
        }
        else {
          if (bVar1 != 2) {
            lVar5 = *(long *)(pbVar10 + 8);
            goto joined_r0x0001039f6b34;
          }
code_r0x0001039f6b3c:
          if (*(long *)(pbVar10 + 8) == 0) goto code_r0x0001039f6ad8;
          lVar5 = *(long *)(pbVar10 + 0x10);
code_r0x0001039f6ad0:
          _free(lVar5);
        }
code_r0x0001039f6ad8:
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar6);
    }
    if (param_1[4] == 0) {
      return;
    }
    break;
  case 1:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    uVar4 = param_1[5];
    uVar6 = param_1[6];
    if (uVar6 != 0) {
      puVar8 = (undefined8 *)(uVar4 + 0x20);
      do {
        if (puVar8[-4] != 0) {
          _free(puVar8[-3]);
        }
        if (puVar8[-1] != 0) {
          _free(*puVar8);
        }
        puVar8 = puVar8 + 6;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar6 = param_1[4];
    goto joined_r0x0001039fc994;
  case 2:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    uVar4 = param_1[7];
    if (uVar4 != 0x8000000000000000) {
      uVar6 = param_1[8];
      uVar11 = param_1[9];
      if (uVar11 != 0) {
        puVar8 = (undefined8 *)(uVar6 + 0x20);
        do {
          if (puVar8[-4] != 0) {
            _free(puVar8[-3]);
          }
          if (puVar8[-1] != 0) {
            _free(*puVar8);
          }
          puVar8 = puVar8 + 7;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (uVar4 != 0) {
        _free(uVar6);
      }
      uVar4 = param_1[0xb];
      uVar6 = param_1[0xc];
      if (uVar6 != 0) {
        puVar8 = (undefined8 *)(uVar4 + 8);
        do {
          if (puVar8[-1] != 0) {
            _free(*puVar8);
          }
          puVar8 = puVar8 + 3;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (param_1[10] != 0) break;
    }
    return;
  case 3:
  case 0xb:
  case 0xd:
  case 0xe:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] == 0) {
      return;
    }
    uVar4 = param_1[5];
    break;
  case 4:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    uVar4 = param_1[5];
    uVar6 = param_1[6];
    if (uVar6 != 0) {
      puVar8 = (undefined8 *)(uVar4 + 8);
      do {
        if (puVar8[-1] != 0) {
          _free(*puVar8);
        }
        puVar8 = puVar8 + 3;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (param_1[4] != 0) {
      _free(uVar4);
    }
    uVar4 = param_1[8];
    uVar6 = param_1[9];
    if (uVar6 != 0) {
      puVar8 = (undefined8 *)(uVar4 + 8);
      do {
        if (puVar8[-1] != 0) {
          _free(*puVar8);
        }
        puVar8 = puVar8 + 3;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar6 = param_1[7];
joined_r0x0001039fc994:
    if (uVar6 == 0) {
      return;
    }
    break;
  case 5:
    if (param_1[3] != 0) {
      _free(param_1[4]);
    }
    if (param_1[6] != 0) {
      _free(param_1[7]);
    }
    if (param_1[9] != 0) {
      _free(param_1[10]);
    }
    if ((param_1[0xf] != 0x8000000000000000) && (param_1[0xf] != 0)) {
      _free(param_1[0x10]);
    }
    func_0x0001039f7290(param_1 + 0xc);
    if (param_1[0x12] == 0x8000000000000000) {
      return;
    }
    if (param_1[0x12] == 0) {
      return;
    }
    uVar4 = param_1[0x13];
    break;
  case 6:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    uVar4 = param_1[5];
    uVar6 = param_1[6];
    if (uVar6 != 0) {
      puVar8 = (undefined8 *)(uVar4 + 0x20);
      do {
        if (puVar8[-4] != 0) {
          _free(puVar8[-3]);
        }
        if ((long)puVar8[2] < -0x7ffffffffffffffd || puVar8[2] == 0) {
          lVar5 = puVar8[-1];
        }
        else {
          _free(puVar8[3]);
          lVar5 = puVar8[-1];
        }
        if (lVar5 != 0) {
          _free(*puVar8);
        }
        puVar8 = puVar8 + 9;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (param_1[4] == 0) {
      return;
    }
    break;
  case 7:
    if (param_1[2] != 0) {
      _free(param_1[3]);
    }
    if (param_1[5] != 0) {
      _free(param_1[6]);
    }
    if (param_1[8] != 0) {
      _free(param_1[9]);
    }
    func_0x0001039fa198(param_1 + 0x14);
    if ((param_1[0xb] != 0x8000000000000000) && (param_1[0xb] != 0)) {
      _free(param_1[0xc]);
    }
    if ((param_1[0xe] != 0x8000000000000000) && (param_1[0xe] != 0)) {
      _free(param_1[0xf]);
    }
    func_0x0001039f9200(param_1[0x1d]);
    if ((param_1[0x11] & 0x7fffffffffffffff) == 0) {
      return;
    }
    uVar4 = param_1[0x12];
    break;
  case 8:
    if (param_1[3] != 0) {
      _free(param_1[4]);
    }
    if (param_1[9] != 0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    if (param_1[6] != 0) {
      _free(param_1[7]);
    }
    func_0x0001039fa198(param_1 + 0xf);
    uVar6 = param_1[0xc];
    if (uVar6 == 0x8000000000000000) {
      return;
    }
    uVar4 = param_1[0xd];
    uVar11 = param_1[0xe];
    if (uVar11 != 0) {
      puVar8 = (undefined8 *)(uVar4 + 0x10);
      do {
        if (puVar8[-1] != 0) {
          _free(*puVar8);
        }
        puVar8 = puVar8 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (uVar6 == 0) {
      return;
    }
    break;
  case 9:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    uVar4 = param_1[8];
    uVar6 = param_1[9];
    if (uVar6 != 0) {
      puVar8 = (undefined8 *)(uVar4 + 8);
      do {
        if (puVar8[-1] != 0) {
          _free(*puVar8);
        }
        puVar8 = puVar8 + 3;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (param_1[7] != 0) {
      _free(uVar4);
    }
    if (param_1[10] != 0x8000000000000000 && param_1[10] != 0) {
      _free(param_1[0xb]);
    }
    if ((param_1[0xd] != 0x8000000000000000) && (param_1[0xd] != 0)) {
      _free(param_1[0xe]);
    }
    uVar4 = param_1[0x11];
    if (uVar4 != 0) {
      uVar6 = param_1[0x13];
      if (uVar6 != 0) {
        plVar7 = (long *)param_1[0x10];
        plVar9 = plVar7 + 1;
        lVar5 = *plVar7;
        uVar11 = CONCAT17(-(-1 < lVar5),
                          CONCAT16(-(-1 < (char)((ulong)lVar5 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar5 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar5 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar5 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar5 >>
                                                                                    0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar5 >> 8)),-(-1 < (char)lVar5)))))))) &
                 0x8080808080808080;
        do {
          while (uVar11 == 0) {
            lVar5 = *plVar9;
            plVar7 = plVar7 + -0x38;
            plVar9 = plVar9 + 1;
            uVar11 = CONCAT17(-(-1 < lVar5),
                              CONCAT16(-(-1 < (char)((ulong)lVar5 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar5 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar5 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar5 >> 0x18
                                                                               )),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar5 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar5 >> 8)),
                                                           -(-1 < (char)lVar5)))))))) &
                     0x8080808080808080;
          }
          uVar2 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          iVar3 = (int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
          if (plVar7[(long)-iVar3 * 7 + -7] != 0) {
            _free(plVar7[(long)-iVar3 * 7 + -6]);
          }
          if ((plVar7[(long)-iVar3 * 7 + -4] & 0x7fffffffffffffffU) != 0) {
            _free(plVar7[(long)-iVar3 * 7 + -3]);
          }
          uVar11 = uVar11 - 1 & uVar11;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (uVar4 * 0x39 != -0x41) {
        uVar4 = (param_1[0x10] + uVar4 * -0x38) - 0x38;
        break;
      }
    }
    return;
  case 10:
    if (param_1[8] != 0) {
      _free(param_1[9]);
    }
    if (param_1[0xb] != 0) {
      _free(param_1[0xc]);
    }
    if (param_1[1] == 4) {
      return;
    }
    uVar4 = param_1[1];
    if ((long)uVar4 < 2) {
      if (uVar4 == 0) {
        if (param_1[2] == 0x8000000000000000 || param_1[2] == 0) {
          uVar6 = param_1[5];
        }
        else {
          _free(param_1[3]);
          uVar6 = param_1[5];
        }
        if (uVar6 != 0x8000000000000000) {
          uVar4 = param_1[6];
          uVar11 = param_1[7];
          if (uVar11 != 0) {
            puVar8 = (undefined8 *)(uVar4 + 8);
            do {
              if (puVar8[-1] != 0) {
                _free(*puVar8);
              }
              puVar8 = puVar8 + 3;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          if (uVar6 != 0) break;
        }
      }
      else if ((param_1[2] & 0x7fffffffffffffff) != 0) {
        uVar4 = param_1[3];
        break;
      }
    }
    else if (uVar4 == 2) {
      if (param_1[2] == 0x8000000000000000 || param_1[2] == 0) {
        uVar4 = param_1[5];
      }
      else {
        _free(param_1[3]);
        uVar4 = param_1[5];
      }
      if ((uVar4 & 0x7fffffffffffffff) != 0) {
        uVar4 = param_1[6];
        break;
      }
    }
    return;
  case 0xc:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if (param_1[10] != 0x8000000000000000 && param_1[10] != 0) {
      _free(param_1[0xb]);
    }
    if (param_1[7] != 0) {
      _free(param_1[8]);
    }
    if ((param_1[0xd] & 0x7fffffffffffffff) == 0) {
      return;
    }
    uVar4 = param_1[0xe];
    break;
  default:
    if (param_1[1] == 0) {
      return;
    }
    uVar4 = param_1[2];
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(uVar4);
  return;
}

