
/* WARNING: Possible PIC construction at 0x000101bbf3b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc0c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc05ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc0b0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc6754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bbfa14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bc6758) */
/* WARNING: Removing unreachable block (ram,0x000101bc0c04) */
/* WARNING: Removing unreachable block (ram,0x000101bbf3b4) */
/* WARNING: Removing unreachable block (ram,0x000101bbfa18) */
/* WARNING: Type propagation algorithm not settling */

void FUN_101bc02bc(ulong *param_1)

{
  undefined1 *puVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *unaff_x19;
  undefined8 *puVar13;
  ulong *unaff_x20;
  ulong *puVar14;
  ulong unaff_x21;
  ulong *unaff_x22;
  long *plVar15;
  ulong unaff_x23;
  long *plVar16;
  undefined8 unaff_x24;
  ulong uVar17;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  ulong uVar18;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar14 = (ulong *)0x8000000000000005;
  uVar8 = *param_1;
  lVar10 = uVar8 + 0x7fffffffffffffbf;
  if (uVar8 < 0x8000000000000041) {
    lVar10 = 1;
  }
  if (lVar10 == 0) {
    return;
  }
  if (lVar10 != 1) {
    if (lVar10 != 2) goto LAB_101bc03ec;
    uVar11 = param_1[1];
    uVar8 = uVar11 + 0x8000000000000001 & (long)uVar11 >> 0x3f;
    if (3 < (long)uVar8) {
      if ((long)uVar8 < 6) {
        if (uVar8 == 4) {
          if ((param_1[0x1d] & 0x7fffffffffffffff) != 0) {
            _free(param_1[0x1e]);
          }
          if (param_1[2] != 0) {
            _free(param_1[3]);
          }
          if (param_1[5] != 0) {
            _free(param_1[6]);
          }
          if (param_1[8] != 0) {
            _free(param_1[9]);
          }
          if (param_1[0xb] != 0) {
            _free(param_1[0xc]);
          }
          if ((param_1[0xe] & 0x7fffffffffffffff) != 0) {
            _free(param_1[0xf]);
          }
          puVar6 = param_1 + 0x11;
          goto SUB_101bbe80c;
        }
        if (uVar8 == 5) {
          if ((param_1[0x1a] & 0x7fffffffffffffff) != 0) {
            _free(param_1[0x1b]);
          }
          if (param_1[2] != 0) {
            _free(param_1[3]);
          }
          if (param_1[5] != 0) {
            _free(param_1[6]);
          }
          if (param_1[8] != 0) {
            _free(param_1[9]);
          }
          if ((param_1[0xe] & 0x7fffffffffffffff) != 0) {
            _free(param_1[0xf]);
          }
          if (param_1[0xb] != 0) {
            _free(param_1[0xc]);
          }
          puVar14 = param_1 + 0x11;
          goto SUB_101bbf344;
        }
      }
      else {
        if (uVar8 == 6) {
          if ((param_1[2] & 0x7fffffffffffffff) != 0) {
            _free(param_1[3]);
          }
          if ((param_1[5] & 0x7fffffffffffffff) == 0) {
            return;
          }
          puVar14 = (ulong *)param_1[6];
          goto code_r0x000108aa97c4;
        }
        if (uVar8 == 7) {
          if ((param_1[2] & 0x7fffffffffffffff) == 0) {
            return;
          }
          puVar14 = (ulong *)param_1[3];
          goto code_r0x000108aa97c4;
        }
        if (uVar8 == 8) {
          if ((param_1[0x13] & 0x7fffffffffffffff) != 0) {
            _free(param_1[0x14]);
          }
          if (param_1[2] != 0) {
            _free(param_1[3]);
          }
          uVar8 = param_1[0xc];
          if (uVar8 != 0) {
            uVar11 = param_1[0xe];
            if (uVar11 != 0) {
              plVar15 = (long *)param_1[0xb];
              plVar16 = plVar15 + 1;
              lVar10 = *plVar15;
              uVar18 = CONCAT17(-(-1 < lVar10),
                                CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar10 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar10 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar10 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar10 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar10 >> 8)),
                                                           -(-1 < (char)lVar10)))))))) &
                       0x8080808080808080;
              do {
                while (uVar18 == 0) {
                  lVar10 = *plVar16;
                  plVar15 = plVar15 + -0x48;
                  plVar16 = plVar16 + 1;
                  uVar18 = CONCAT17(-(-1 < lVar10),
                                    CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                             CONCAT15(-(-1 < (char)((ulong)lVar10 >> 0x28)),
                                                      CONCAT14(-(-1 < (char)((ulong)lVar10 >> 0x20))
                                                               ,CONCAT13(-(-1 < (char)((ulong)lVar10
                                                                                      >> 0x18)),
                                                                         CONCAT12(-(-1 < (char)((
                                                  ulong)lVar10 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar10 >> 8)),
                                                           -(-1 < (char)lVar10)))))))) &
                           0x8080808080808080;
                }
                uVar12 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
                iVar3 = (int)((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3);
                if (plVar15[(long)-iVar3 * 9 + -9] != 0) {
                  _free(plVar15[(long)-iVar3 * 9 + -8]);
                }
                uVar9 = plVar15[(long)-iVar3 * 9 + -6];
                uVar12 = uVar9 ^ 0x8000000000000000;
                if (-1 < (long)uVar9) {
                  uVar12 = 2;
                }
                if ((uVar12 == 0) || (uVar12 == 1)) {
                  if (plVar15[(long)-iVar3 * 9 + -5] != 0) {
                    lVar10 = 0x10;
                    goto LAB_101bc0420;
                  }
                }
                else {
                  if (uVar9 != 0) {
                    _free(plVar15[(long)-iVar3 * 9 + -5]);
                  }
                  if ((plVar15[(long)-iVar3 * 9 + -3] & 0x7fffffffffffffffU) != 0) {
                    lVar10 = 0x20;
LAB_101bc0420:
                    _free(*(undefined8 *)((long)(plVar15 + (long)-iVar3 * 9 + -6) + lVar10));
                  }
                }
                uVar18 = uVar18 - 1 & uVar18;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            if (uVar8 * 0x49 != -0x51) {
              _free(param_1[0xb] + uVar8 * -0x48 + -0x48);
            }
          }
          if ((param_1[5] & 0x7fffffffffffffff) != 0) {
            _free(param_1[6]);
          }
          if ((param_1[8] & 0x7fffffffffffffff) == 0) {
            return;
          }
          puVar14 = (ulong *)param_1[9];
          goto code_r0x000108aa97c4;
        }
      }
LAB_101bc08ec:
      if ((param_1[0x16] & 0x7fffffffffffffff) != 0) {
        _free(param_1[0x17]);
      }
      if (param_1[2] != 0) {
        _free(param_1[3]);
      }
      if ((param_1[0xe] & 0x7fffffffffffffff) != 0) {
        _free(param_1[0xf]);
      }
      uVar8 = param_1[6];
      uVar11 = param_1[7];
      if (uVar11 != 0) {
        puVar13 = (undefined8 *)(uVar8 + 8);
        do {
          if (puVar13[-1] != 0) {
            _free(*puVar13);
          }
          puVar13 = puVar13 + 3;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (param_1[5] != 0) {
        _free(uVar8);
      }
      if (param_1[8] != 0) {
        _free(param_1[9]);
      }
      if ((param_1[0x11] & 0x7fffffffffffffff) != 0) {
        _free(param_1[0x12]);
      }
      puVar14 = (ulong *)param_1[0xc];
      puVar6 = puVar14;
      for (uVar8 = param_1[0xd]; uVar8 != 0; uVar8 = uVar8 - 1) {
        uVar11 = *puVar6;
        if ((long)uVar11 < 2) {
          if (uVar11 == 0) {
            if (puVar6[1] != 0) {
              _free(puVar6[2]);
            }
            if (puVar6[4] != 0) {
              _free(puVar6[5]);
            }
            if (puVar6[7] == 0) goto LAB_101bc09ac;
            lVar10 = 0x40;
          }
          else {
            if (puVar6[4] != 0) {
              _free(puVar6[5]);
            }
            uVar11 = puVar6[1] & 0x7fffffffffffffff;
joined_r0x000101bc099c:
            if (uVar11 == 0) goto LAB_101bc09ac;
            lVar10 = 0x10;
          }
LAB_101bc09a4:
          _free(*(undefined8 *)((long)puVar6 + lVar10));
        }
        else {
          if (uVar11 != 2) {
            uVar11 = puVar6[1];
            goto joined_r0x000101bc099c;
          }
          if (puVar6[7] != 0) {
            _free(puVar6[8]);
          }
          if ((puVar6[1] & 0x7fffffffffffffff) == 0) {
            uVar11 = puVar6[4];
          }
          else {
            _free(puVar6[2]);
            uVar11 = puVar6[4];
          }
          if ((uVar11 & 0x7fffffffffffffff) != 0) {
            lVar10 = 0x28;
            goto LAB_101bc09a4;
          }
        }
LAB_101bc09ac:
        puVar6 = puVar6 + 10;
      }
LAB_101bc0a68:
      uVar8 = param_1[0xb];
joined_r0x000101bc0a6c:
      if (uVar8 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    unaff_x20 = puVar14;
    if (1 < (long)uVar8) {
      if (uVar8 == 2) {
        if ((param_1[0xe] & 0x7fffffffffffffff) != 0) {
          _free(param_1[0xf]);
        }
        if (param_1[2] != 0) {
          _free(param_1[3]);
        }
        if (param_1[5] != 0) {
          _free(param_1[6]);
        }
        if (param_1[8] != 0) {
          _free(param_1[9]);
        }
        puVar14 = (ulong *)param_1[0xc];
        uVar8 = param_1[0xd];
        if (uVar8 != 0) {
          uVar11 = 0;
          do {
            puVar6 = puVar14 + uVar11 * 0xd;
            if (*puVar6 != 0) {
              _free(puVar6[1]);
            }
            if (puVar6[3] != 0) {
              _free(puVar6[4]);
            }
            if (puVar6[6] != 0) {
              _free(puVar6[7]);
            }
            uVar18 = puVar6[9];
            if (uVar18 != 0x8000000000000000) {
              uVar12 = puVar6[10];
              uVar9 = puVar6[0xb];
              if (uVar9 != 0) {
                puVar13 = (undefined8 *)(uVar12 + 0x20);
                do {
                  if (puVar13[-4] != 0) {
                    _free(puVar13[-3]);
                  }
                  if (puVar13[-1] != 0) {
                    _free(*puVar13);
                  }
                  puVar13 = puVar13 + 6;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              if (uVar18 != 0) {
                _free(uVar12);
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar8);
        }
        goto LAB_101bc0a68;
      }
      if (uVar8 != 3) goto LAB_101bc08ec;
      if ((param_1[0x20] & 0x7fffffffffffffff) != 0) {
        _free(param_1[0x21]);
      }
      if (param_1[2] != 0) {
        _free(param_1[3]);
      }
      if ((param_1[8] & 0x7fffffffffffffff) != 0) {
        _free(param_1[9]);
      }
      if (param_1[5] != 0) {
        _free(param_1[6]);
      }
      unaff_x21 = param_1[0xb];
      if (unaff_x21 == 0x8000000000000000) {
        if (param_1[0x15] == 0x8000000000000005) {
          if (param_1[0xc] != 0) {
            _free(param_1[0xd]);
          }
          if (param_1[0xf] != 0) {
            _free(param_1[0x10]);
          }
          if (param_1[0x12] == 0) {
            return;
          }
          puVar14 = (ulong *)param_1[0x13];
          goto code_r0x000108aa97c4;
        }
        unaff_x30 = (undefined *)0x101bc05b0;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
        puVar14 = param_1 + 0x15;
        unaff_x19 = param_1;
        unaff_x29 = puVar1;
      }
      else {
        if (param_1[0x17] == 0x8000000000000005) {
          if (unaff_x21 != 0) {
            _free(param_1[0xc]);
          }
          if ((param_1[0xe] & 0x7fffffffffffffff) != 0) {
            _free(param_1[0xf]);
          }
          puVar14 = (ulong *)param_1[0x14];
          uVar8 = param_1[0x15];
          bVar5 = puVar14 != (ulong *)0x0;
          uVar11 = param_1[0x16];
          if (puVar14 == (ulong *)0x0 || uVar11 == 0) {
            puVar6 = puVar14;
            if (puVar14 != (ulong *)0x0) {
joined_r0x000101bc48d0:
              for (; uVar8 != 0; uVar8 = uVar8 - 1) {
                puVar6 = (ulong *)puVar6[0xde];
              }
              goto LAB_101bc48e0;
            }
            uVar8 = param_1[0x11];
          }
          else {
            puVar6 = (ulong *)0x0;
            do {
              if (!bVar5) {
                func_0x000108a07a20(&UNK_10b26afa8);
LAB_101bc49c4:
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x101bc49c8);
                (*pcVar4)();
              }
              puVar7 = puVar14;
              if (puVar6 == (ulong *)0x0) {
                for (; uVar8 != 0; uVar8 = uVar8 - 1) {
                  puVar7 = (ulong *)puVar7[0xde];
                }
                puVar14 = (ulong *)0x0;
                uVar18 = 0;
                if (*(short *)((long)puVar7 + 0x6ea) == 0) goto LAB_101bc437c;
              }
              else {
                puVar7 = puVar6;
                uVar18 = uVar8;
                if (*(ushort *)((long)puVar6 + 0x6ea) <= uVar8) {
LAB_101bc437c:
                  do {
                    puVar6 = (ulong *)*puVar7;
                    if (puVar6 == (ulong *)0x0) {
                      _free();
                      func_0x000108a07a20(&UNK_10b26af78);
                      goto LAB_101bc49c4;
                    }
                    puVar14 = (ulong *)((long)puVar14 + 1);
                    uVar2 = *(ushort *)(puVar7 + 0xdd);
                    _free();
                    puVar7 = puVar6;
                    uVar18 = (ulong)uVar2;
                  } while (*(ushort *)((long)puVar6 + 0x6ea) <= uVar2);
                }
              }
              uVar8 = uVar18 + 1;
              if (puVar14 == (ulong *)0x0) {
                puVar14 = puVar7 + uVar18 * 3 + 1;
                uVar12 = *puVar14;
                puVar6 = puVar7;
              }
              else {
                puVar6 = puVar7 + uVar8;
                do {
                  puVar6 = (ulong *)puVar6[0xde];
                  puVar14 = (ulong *)((long)puVar14 - 1);
                } while (puVar14 != (ulong *)0x0);
                uVar8 = 0;
                puVar14 = puVar7 + uVar18 * 3 + 1;
                uVar12 = *puVar14;
              }
              if (uVar12 != 0) {
                _free(puVar14[1]);
              }
              uVar12 = puVar7[uVar18 * 0x11 + 0x22];
              lVar10 = 0;
              if (3 < uVar12) {
                lVar10 = uVar12 - 4;
              }
              if (lVar10 < 2) {
                if (lVar10 == 0) {
                  lVar10 = uVar12 - 2;
                  if (uVar12 < 2) {
                    lVar10 = 1;
                  }
                  if (lVar10 == 0) {
                    if (puVar7[uVar18 * 0x11 + 0x23] == 0) {
                      if ((puVar7[uVar18 * 0x11 + 0x27] & 0x7fffffffffffffff) == 0) {
                        if ((puVar7[uVar18 * 0x11 + 0x2a] & 0x7fffffffffffffff) == 0)
                        goto LAB_101bc45a8;
LAB_101bc4858:
                        _free(puVar7[uVar18 * 0x11 + 0x2b]);
                        uVar12 = puVar7[uVar18 * 0x11 + 0x25];
                        uVar9 = puVar7[uVar18 * 0x11 + 0x26];
                      }
                      else {
                        _free(puVar7[uVar18 * 0x11 + 0x28]);
                        if ((puVar7[uVar18 * 0x11 + 0x2a] & 0x7fffffffffffffff) != 0)
                        goto LAB_101bc4858;
LAB_101bc45a8:
                        uVar12 = puVar7[uVar18 * 0x11 + 0x25];
                        uVar9 = puVar7[uVar18 * 0x11 + 0x26];
                      }
                      if (uVar9 != 0) {
                        puVar13 = (undefined8 *)(uVar12 + 8);
                        do {
                          if (puVar13[-1] != 0) {
                            _free(*puVar13);
                          }
                          puVar13 = puVar13 + 3;
                          uVar9 = uVar9 - 1;
                        } while (uVar9 != 0);
                      }
                    }
                    else {
                      if ((puVar7[uVar18 * 0x11 + 0x27] & 0x7fffffffffffffff) == 0) {
                        if ((puVar7[uVar18 * 0x11 + 0x2a] & 0x7fffffffffffffff) == 0)
                        goto LAB_101bc44e4;
LAB_101bc4750:
                        _free(puVar7[uVar18 * 0x11 + 0x2b]);
                        uVar12 = puVar7[uVar18 * 0x11 + 0x25];
                        uVar9 = puVar7[uVar18 * 0x11 + 0x26];
                      }
                      else {
                        _free(puVar7[uVar18 * 0x11 + 0x28]);
                        if ((puVar7[uVar18 * 0x11 + 0x2a] & 0x7fffffffffffffff) != 0)
                        goto LAB_101bc4750;
LAB_101bc44e4:
                        uVar12 = puVar7[uVar18 * 0x11 + 0x25];
                        uVar9 = puVar7[uVar18 * 0x11 + 0x26];
                      }
                      if (uVar9 != 0) {
                        puVar13 = (undefined8 *)(uVar12 + 0x20);
                        do {
                          if (puVar13[-4] != 0) {
                            _free(puVar13[-3]);
                          }
                          if (puVar13[-1] != 0) {
                            _free(*puVar13);
                          }
                          puVar13 = puVar13 + 6;
                          uVar9 = uVar9 - 1;
                        } while (uVar9 != 0);
                      }
                    }
                    if (puVar7[uVar18 * 0x11 + 0x24] != 0) {
                      _free(uVar12);
                    }
                    if ((puVar7[uVar18 * 0x11 + 0x2d] & 0x7fffffffffffffff) != 0) {
                      lVar10 = 0x60;
                      goto LAB_101bc48b4;
                    }
                    goto LAB_101bc4328;
                  }
                  if (lVar10 != 1) {
                    if ((puVar7[uVar18 * 0x11 + 0x26] & 0x7fffffffffffffff) == 0) {
                      if ((puVar7[uVar18 * 0x11 + 0x29] & 0x7fffffffffffffff) == 0)
                      goto LAB_101bc4560;
LAB_101bc45cc:
                      _free(puVar7[uVar18 * 0x11 + 0x2a]);
                      uVar12 = puVar7[uVar18 * 0x11 + 0x24];
                      uVar9 = puVar7[uVar18 * 0x11 + 0x25];
                    }
                    else {
                      _free(puVar7[uVar18 * 0x11 + 0x27]);
                      if ((puVar7[uVar18 * 0x11 + 0x29] & 0x7fffffffffffffff) != 0)
                      goto LAB_101bc45cc;
LAB_101bc4560:
                      uVar12 = puVar7[uVar18 * 0x11 + 0x24];
                      uVar9 = puVar7[uVar18 * 0x11 + 0x25];
                    }
                    if (uVar9 != 0) {
                      puVar13 = (undefined8 *)(uVar12 + 8);
                      do {
                        if (puVar13[-1] != 0) {
                          _free(*puVar13);
                        }
                        puVar13 = puVar13 + 3;
                        uVar9 = uVar9 - 1;
                      } while (uVar9 != 0);
                    }
                    if (puVar7[uVar18 * 0x11 + 0x23] != 0) {
                      _free(uVar12);
                    }
                    uVar12 = puVar7[uVar18 * 0x11 + 0x2c];
                    if (uVar12 != 0x8000000000000000) {
                      uVar9 = puVar7[uVar18 * 0x11 + 0x2d];
                      uVar17 = puVar7[uVar18 * 0x11 + 0x2e];
                      if (uVar17 != 0) {
                        puVar13 = (undefined8 *)(uVar9 + 8);
                        do {
                          if (puVar13[-1] != 0) {
                            _free(*puVar13);
                          }
                          puVar13 = puVar13 + 3;
                          uVar17 = uVar17 - 1;
                        } while (uVar17 != 0);
                      }
                      if (uVar12 != 0) {
                        _free(uVar9);
                      }
                    }
                    if ((puVar7[uVar18 * 0x11 + 0x2f] & 0x7fffffffffffffff) != 0) {
                      lVar10 = 0x70;
                      goto LAB_101bc48b4;
                    }
                    goto LAB_101bc4328;
                  }
                  if (uVar12 == 0) {
                    if ((puVar7[uVar18 * 0x11 + 0x2a] & 0x7fffffffffffffff) == 0) {
                      if ((puVar7[uVar18 * 0x11 + 0x2d] & 0x7fffffffffffffff) == 0)
                      goto LAB_101bc4584;
LAB_101bc47ac:
                      _free(puVar7[uVar18 * 0x11 + 0x2e]);
                      uVar12 = puVar7[uVar18 * 0x11 + 0x28];
                      uVar9 = puVar7[uVar18 * 0x11 + 0x29];
                    }
                    else {
                      _free(puVar7[uVar18 * 0x11 + 0x2b]);
                      if ((puVar7[uVar18 * 0x11 + 0x2d] & 0x7fffffffffffffff) != 0)
                      goto LAB_101bc47ac;
LAB_101bc4584:
                      uVar12 = puVar7[uVar18 * 0x11 + 0x28];
                      uVar9 = puVar7[uVar18 * 0x11 + 0x29];
                    }
                    if (uVar9 != 0) {
                      puVar13 = (undefined8 *)(uVar12 + 8);
                      do {
                        if (puVar13[-1] != 0) {
                          _free(*puVar13);
                        }
                        puVar13 = puVar13 + 3;
                        uVar9 = uVar9 - 1;
                      } while (uVar9 != 0);
                    }
                    if (puVar7[uVar18 * 0x11 + 0x27] != 0) {
                      _free(uVar12);
                    }
                    uVar9 = puVar7[uVar18 * 0x11 + 0x30];
                    if (uVar9 == 0x8000000000000000) goto LAB_101bc4328;
                    uVar12 = puVar7[uVar18 * 0x11 + 0x31];
                    uVar18 = puVar7[uVar18 * 0x11 + 0x32];
                    if (uVar18 != 0) {
                      puVar13 = (undefined8 *)(uVar12 + 8);
                      do {
                        if (puVar13[-1] != 0) {
                          _free(*puVar13);
                        }
                        puVar13 = puVar13 + 3;
                        uVar18 = uVar18 - 1;
                      } while (uVar18 != 0);
                    }
                  }
                  else {
                    if ((puVar7[uVar18 * 0x11 + 0x2a] & 0x7fffffffffffffff) == 0) {
                      if ((puVar7[uVar18 * 0x11 + 0x2d] & 0x7fffffffffffffff) == 0)
                      goto LAB_101bc4434;
LAB_101bc469c:
                      _free(puVar7[uVar18 * 0x11 + 0x2e]);
                      uVar12 = puVar7[uVar18 * 0x11 + 0x28];
                      uVar9 = puVar7[uVar18 * 0x11 + 0x29];
                    }
                    else {
                      _free(puVar7[uVar18 * 0x11 + 0x2b]);
                      if ((puVar7[uVar18 * 0x11 + 0x2d] & 0x7fffffffffffffff) != 0)
                      goto LAB_101bc469c;
LAB_101bc4434:
                      uVar12 = puVar7[uVar18 * 0x11 + 0x28];
                      uVar9 = puVar7[uVar18 * 0x11 + 0x29];
                    }
                    if (uVar9 != 0) {
                      puVar13 = (undefined8 *)(uVar12 + 0x20);
                      do {
                        if (puVar13[-4] != 0) {
                          _free(puVar13[-3]);
                        }
                        if (puVar13[-1] != 0) {
                          _free(*puVar13);
                        }
                        puVar13 = puVar13 + 6;
                        uVar9 = uVar9 - 1;
                      } while (uVar9 != 0);
                    }
                    if (puVar7[uVar18 * 0x11 + 0x27] != 0) {
                      _free(uVar12);
                    }
                    uVar9 = puVar7[uVar18 * 0x11 + 0x30];
                    if (uVar9 == 0x8000000000000000) goto LAB_101bc4328;
                    uVar12 = puVar7[uVar18 * 0x11 + 0x31];
                    uVar18 = puVar7[uVar18 * 0x11 + 0x32];
                    if (uVar18 != 0) {
                      puVar13 = (undefined8 *)(uVar12 + 8);
                      do {
                        if (puVar13[-1] != 0) {
                          _free(*puVar13);
                        }
                        puVar13 = puVar13 + 3;
                        uVar18 = uVar18 - 1;
                      } while (uVar18 != 0);
                    }
                  }
                  if (uVar9 == 0) goto LAB_101bc4328;
                }
                else {
                  if ((puVar7[uVar18 * 0x11 + 0x23] & 0x7fffffffffffffff) == 0) {
                    if ((puVar7[uVar18 * 0x11 + 0x26] & 0x7fffffffffffffff) == 0)
                    goto LAB_101bc4498;
LAB_101bc4508:
                    _free(puVar7[uVar18 * 0x11 + 0x27]);
                    uVar12 = puVar7[uVar18 * 0x11 + 0x29];
                  }
                  else {
                    _free(puVar7[uVar18 * 0x11 + 0x24]);
                    if ((puVar7[uVar18 * 0x11 + 0x26] & 0x7fffffffffffffff) != 0)
                    goto LAB_101bc4508;
LAB_101bc4498:
                    uVar12 = puVar7[uVar18 * 0x11 + 0x29];
                  }
                  if ((uVar12 & 0x7fffffffffffffff) == 0) goto LAB_101bc4328;
                  lVar10 = 0x40;
LAB_101bc48b4:
                  uVar12 = *(ulong *)((long)puVar7 + lVar10 + uVar18 * 0x88 + 0x110);
                }
                _free(uVar12);
              }
              else if (lVar10 == 2) {
                if ((puVar7[uVar18 * 0x11 + 0x29] & 0x7fffffffffffffff) == 0) {
                  uVar12 = puVar7[uVar18 * 0x11 + 0x2c];
                }
                else {
                  _free(puVar7[uVar18 * 0x11 + 0x2a]);
                  uVar12 = puVar7[uVar18 * 0x11 + 0x2c];
                }
                if ((uVar12 & 0x7fffffffffffffff) != 0) {
                  lVar10 = 0x58;
                  goto LAB_101bc48b4;
                }
              }
              else {
                if ((puVar7[uVar18 * 0x11 + 0x23] & 0x7fffffffffffffff) == 0) {
                  uVar12 = puVar7[uVar18 * 0x11 + 0x26];
                }
                else {
                  _free(puVar7[uVar18 * 0x11 + 0x24]);
                  uVar12 = puVar7[uVar18 * 0x11 + 0x26];
                }
                if ((uVar12 & 0x7fffffffffffffff) != 0) {
                  lVar10 = 0x28;
                  goto LAB_101bc48b4;
                }
              }
LAB_101bc4328:
              puVar14 = (ulong *)0x0;
              bVar5 = true;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
            if (puVar6 == (ulong *)0x0) goto joined_r0x000101bc48d0;
LAB_101bc48e0:
            puVar14 = (ulong *)*puVar6;
            if ((ulong *)*puVar6 == (ulong *)0x0) {
              _free();
              uVar8 = param_1[0x11];
            }
            else {
              do {
                puVar7 = puVar14;
                _free(puVar6);
                puVar6 = puVar7;
                puVar14 = (ulong *)*puVar7;
              } while ((ulong *)*puVar7 != (ulong *)0x0);
              _free(puVar7);
              uVar8 = param_1[0x11];
            }
          }
          if (uVar8 != 0x8000000000000000) {
            puVar14 = (ulong *)param_1[0x12];
            uVar11 = param_1[0x13];
            if (uVar11 != 0) {
              puVar6 = puVar14 + 1;
              do {
                if (puVar6[-1] != 0) {
                  _free(*puVar6);
                }
                puVar6 = puVar6 + 3;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            if (uVar8 != 0) goto code_r0x000108aa97c4;
          }
          return;
        }
        unaff_x30 = (undefined *)0x101bc0b10;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
        puVar14 = param_1 + 0x17;
        unaff_x19 = param_1;
        unaff_x29 = puVar1;
      }
      goto SUB_101bbf344;
    }
    if (uVar8 != 0) {
      if (uVar8 == 1) {
        if ((param_1[0x12] & 0x7fffffffffffffff) != 0) {
          _free(param_1[0x13]);
        }
        if (param_1[2] != 0) {
          _free(param_1[3]);
        }
        if (param_1[5] != 0) {
          _free(param_1[6]);
        }
        if (param_1[8] != 0) {
          _free(param_1[9]);
        }
        if ((param_1[0xb] & 0x7fffffffffffffff) != 0) {
          _free(param_1[0xc]);
        }
        if ((param_1[0xe] & 0x7fffffffffffffff) == 0) {
          return;
        }
        puVar14 = (ulong *)param_1[0xf];
        goto code_r0x000108aa97c4;
      }
      goto LAB_101bc08ec;
    }
    if ((param_1[0x32] & 0x7fffffffffffffff) != 0) {
      _free(param_1[0x33]);
      uVar11 = param_1[1];
    }
    if (uVar11 != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if (param_1[7] != 0) {
      _free(param_1[8]);
    }
    if ((param_1[10] & 0x7fffffffffffffff) == 0) {
      if ((param_1[0xd] & 0x7fffffffffffffff) == 0) goto LAB_101bc06d4;
LAB_101bc0b90:
      _free(param_1[0xe]);
      if ((param_1[0x10] & 0x7fffffffffffffff) != 0) goto LAB_101bc0ba4;
LAB_101bc06e0:
      if ((param_1[0x14] & 0x7fffffffffffffff) == 0) goto LAB_101bc06ec;
LAB_101bc0bb8:
      _free(param_1[0x15]);
      if ((param_1[0x17] & 0x7fffffffffffffff) != 0) goto LAB_101bc0bcc;
LAB_101bc06f8:
      if (param_1[0x1a] == 0x8000000000000000) goto LAB_101bc070c;
LAB_101bc0be8:
      FUN_101bbd2c0();
      uVar8 = param_1[0x26];
    }
    else {
      _free(param_1[0xb]);
      if ((param_1[0xd] & 0x7fffffffffffffff) != 0) goto LAB_101bc0b90;
LAB_101bc06d4:
      if ((param_1[0x10] & 0x7fffffffffffffff) == 0) goto LAB_101bc06e0;
LAB_101bc0ba4:
      _free(param_1[0x11]);
      if ((param_1[0x14] & 0x7fffffffffffffff) != 0) goto LAB_101bc0bb8;
LAB_101bc06ec:
      if ((param_1[0x17] & 0x7fffffffffffffff) == 0) goto LAB_101bc06f8;
LAB_101bc0bcc:
      _free(param_1[0x18]);
      if (param_1[0x1a] != 0x8000000000000000) goto LAB_101bc0be8;
LAB_101bc070c:
      uVar8 = param_1[0x26];
    }
    if (uVar8 == 0x8000000000000002) {
      uVar8 = param_1[0x1d];
      if (uVar8 != 0x8000000000000000) {
        uVar11 = param_1[0x1e];
        uVar18 = param_1[0x1f];
        if (uVar18 != 0) {
          puVar13 = (undefined8 *)(uVar11 + 8);
          do {
            if (puVar13[-1] != 0) {
              _free(*puVar13);
            }
            puVar13 = puVar13 + 3;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        if (uVar8 != 0) {
          _free(uVar11);
        }
      }
      uVar8 = param_1[0x20];
      if (uVar8 != 0x8000000000000000) {
        uVar11 = param_1[0x21];
        uVar18 = param_1[0x22];
        if (uVar18 != 0) {
          puVar13 = (undefined8 *)(uVar11 + 8);
          do {
            if (puVar13[-1] != 0) {
              _free(*puVar13);
            }
            puVar13 = puVar13 + 4;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        if (uVar8 != 0) {
          _free(uVar11);
        }
      }
      uVar8 = param_1[0x23];
      if (uVar8 == 0x8000000000000000) {
        return;
      }
      puVar14 = (ulong *)param_1[0x24];
      uVar11 = param_1[0x25];
      if (uVar11 != 0) {
        uVar18 = 0;
        do {
          puVar6 = puVar14 + uVar18 * 4;
          uVar9 = *puVar6;
          uVar12 = uVar9 ^ 0x8000000000000000;
          if (-1 < (long)uVar9) {
            uVar12 = 3;
          }
          if (uVar12 == 3) {
            if (uVar9 != 0) {
              uVar12 = puVar6[1];
LAB_101bc0cc4:
              _free(uVar12);
            }
          }
          else if (uVar12 == 2) {
            uVar12 = puVar6[2];
            uVar9 = puVar6[3];
            if (uVar9 != 0) {
              puVar13 = (undefined8 *)(uVar12 + 8);
              do {
                if (puVar13[-1] != 0) {
                  _free(*puVar13);
                }
                puVar13 = puVar13 + 3;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            if (puVar6[1] != 0) goto LAB_101bc0cc4;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar11);
      }
      goto joined_r0x000101bc0a6c;
    }
    puVar6 = param_1 + 0x26;
    unaff_x30 = (undefined *)0x101bc0c04;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
    goto SUB_101bbe80c;
  }
  uVar11 = uVar8 ^ 0x8000000000000000;
  if (-1 < (long)uVar8) {
    uVar11 = 1;
  }
  switch(uVar11) {
  case 0:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if ((param_1[4] & 0x7fffffffffffffff) == 0) {
      uVar8 = param_1[8];
    }
    else {
      _free(param_1[5]);
      uVar8 = param_1[8];
    }
    if (uVar8 != 0) {
      _free(param_1[9]);
    }
    if (param_1[0xb] == 0) {
      return;
    }
    puVar14 = (ulong *)param_1[0xc];
    break;
  case 1:
    unaff_x29 = &stack0xfffffffffffffff0;
    if (*param_1 != 0) {
      _free(param_1[1]);
    }
    if (param_1[3] != 0) {
      _free(param_1[4]);
    }
    if ((param_1[0x15] & 0x7fffffffffffffff) == 0) {
      uVar8 = param_1[6];
    }
    else {
      _free(param_1[0x16]);
      uVar8 = param_1[6];
    }
    if (uVar8 != 0) {
      _free(param_1[7]);
    }
    if (param_1[9] != 0) {
      _free(param_1[10]);
    }
    if ((-0x7ffffffffffffffe < (long)param_1[0x2d]) && (param_1[0x2d] != 0)) {
      _free(param_1[0x2e]);
    }
    if ((param_1[0x18] & 0x7fffffffffffffff) == 0) {
      uVar8 = param_1[0xc];
    }
    else {
      _free(param_1[0x19]);
      uVar8 = param_1[0xc];
    }
    if (uVar8 != 0) {
      _free(param_1[0xd]);
    }
    if (param_1[0xf] != 0) {
      _free(param_1[0x10]);
    }
    lVar10 = param_1[0x30] + 0x7ffffffffffffffa;
    if (param_1[0x30] < 0x8000000000000006) {
      lVar10 = 5;
    }
    if (lVar10 == 5) {
      func_0x000101bc11e8(param_1 + 0x30);
      if ((param_1[0x1b] & 0x7fffffffffffffff) != 0) goto code_r0x000101bc66e4;
code_r0x000101bc6688:
      if ((param_1[0x1e] & 0x7fffffffffffffff) == 0) goto code_r0x000101bc6694;
code_r0x000101bc66f8:
      _free(param_1[0x1f]);
      uVar8 = param_1[0x24];
      if (uVar8 != 0x8000000000000001) goto code_r0x000101bc6710;
code_r0x000101bc6730:
      uVar8 = param_1[0x21];
    }
    else {
      if ((lVar10 == 4) && (param_1[0x31] != 0)) {
        _free(param_1[0x32]);
      }
      if ((param_1[0x1b] & 0x7fffffffffffffff) == 0) goto code_r0x000101bc6688;
code_r0x000101bc66e4:
      _free(param_1[0x1c]);
      if ((param_1[0x1e] & 0x7fffffffffffffff) != 0) goto code_r0x000101bc66f8;
code_r0x000101bc6694:
      uVar8 = param_1[0x24];
      if (uVar8 == 0x8000000000000001) goto code_r0x000101bc6730;
code_r0x000101bc6710:
      if ((uVar8 & 0x7fffffffffffffff) == 0) {
        if ((param_1[0x27] & 0x7fffffffffffffff) == 0) goto code_r0x000101bc6724;
code_r0x000101bc67a8:
        _free(param_1[0x28]);
        uVar8 = param_1[0x2a];
      }
      else {
        _free(param_1[0x25]);
        if ((param_1[0x27] & 0x7fffffffffffffff) != 0) goto code_r0x000101bc67a8;
code_r0x000101bc6724:
        uVar8 = param_1[0x2a];
      }
      if ((uVar8 & 0x7fffffffffffffff) == 0) goto code_r0x000101bc6730;
      _free(param_1[0x2b]);
      uVar8 = param_1[0x21];
    }
    if ((uVar8 & 0x7fffffffffffffff) != 0) {
      _free(param_1[0x22]);
    }
    puVar14 = (ulong *)param_1[0x13];
    unaff_x23 = param_1[0x14];
    if (unaff_x23 == 0) {
      if (param_1[0x12] == 0) {
        return;
      }
      break;
    }
    unaff_x22 = puVar14 + 0x14;
    unaff_x30 = &UNK_101bc6758;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x19 = param_1;
    unaff_x20 = puVar14;
    goto code_r0x000101bc3104;
  case 2:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if ((long)param_1[4] < -0x7ffffffffffffffd || param_1[4] == 0) {
      return;
    }
    puVar14 = (ulong *)param_1[5];
    break;
  case 3:
  case 4:
  case 5:
  case 9:
  case 0x35:
LAB_101bc03ec:
    uVar8 = param_1[1];
    goto joined_r0x000101bc0f2c;
  case 6:
  case 0x24:
  case 0x28:
    goto LAB_101bc0f30;
  case 7:
  case 0x20:
  case 0x32:
  case 0x3d:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if ((param_1[4] & 0x7fffffffffffffff) == 0) {
      return;
    }
    puVar14 = (ulong *)param_1[5];
    break;
  case 8:
    if (param_1[0xe] != 0) {
      _free(param_1[0xf]);
    }
    if ((param_1[0x11] & 0x7fffffffffffffff) == 0) {
      uVar8 = param_1[3];
    }
    else {
      _free(param_1[0x12]);
      uVar8 = param_1[3];
    }
    if (uVar8 != 0) {
      _free(param_1[4]);
    }
    if (param_1[6] == 0) {
      return;
    }
    puVar14 = (ulong *)param_1[7];
    break;
  case 10:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    uVar8 = param_1[0x1e];
    if (-0x7ffffffffffffffe < (long)uVar8) {
      uVar11 = param_1[0x1f];
      uVar18 = param_1[0x20];
      if (uVar18 != 0) {
        puVar13 = (undefined8 *)(uVar11 + 8);
        do {
          if (puVar13[-1] != 0) {
            _free(*puVar13);
          }
          puVar13 = puVar13 + 3;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      if (uVar8 != 0) {
        _free(uVar11);
      }
    }
    if (param_1[0x15] == 0x8000000000000000) {
code_r0x000101bbd224:
      uVar8 = param_1[7];
    }
    else {
      if (param_1[0x15] != 0) {
        _free(param_1[0x16]);
      }
      if ((param_1[0x18] & 0x7fffffffffffffff) == 0) goto code_r0x000101bbd224;
      _free(param_1[0x19]);
      uVar8 = param_1[7];
    }
    if (uVar8 != 0) {
      _free(param_1[8]);
    }
    if (param_1[10] != 0) {
      _free(param_1[0xb]);
    }
    if ((param_1[0x1b] & 0x7fffffffffffffff) == 0) {
      uVar8 = param_1[0xd];
    }
    else {
      _free(param_1[0x1c]);
      uVar8 = param_1[0xd];
    }
    if (uVar8 != 0) {
      _free(param_1[0xe]);
    }
    if ((param_1[0x10] & 0x7fffffffffffffff) == 0) {
      return;
    }
    puVar14 = (ulong *)param_1[0x11];
    break;
  case 0xb:
    if (param_1[0xd] != 0) {
      _free(param_1[0xe]);
    }
    if (param_1[0x10] == 0) {
      return;
    }
    puVar14 = (ulong *)param_1[0x11];
    break;
  case 0xc:
  case 0xe:
    puVar14 = param_1 + 1;
    if (param_1[0x15] != 0) {
      _free(param_1[0x16]);
    }
code_r0x000101bc3104:
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar14[6] != 0) {
      _free(puVar14[7]);
    }
    uVar8 = puVar14[10];
    lVar10 = puVar14[0xb] + 1;
    uVar11 = uVar8;
    while (lVar10 = lVar10 + -1, lVar10 != 0) {
      func_0x000101bc1d90(uVar11);
      uVar11 = uVar11 + 0xf8;
    }
    if (puVar14[9] != 0) {
      _free(uVar8);
    }
    if (puVar14[0xc] != 0x8000000000000000) {
      if (puVar14[0xc] != 0) {
        _free(puVar14[0xd]);
      }
      if ((puVar14[0xf] & 0x7fffffffffffffff) != 0) {
        puVar14 = (ulong *)puVar14[0x10];
        break;
      }
    }
    return;
  case 0xd:
  case 0xf:
    if (param_1[0x14] != 0) {
      _free(param_1[0x15]);
    }
    if ((param_1[0x17] & 0x7fffffffffffffff) != 0) {
      _free(param_1[0x18]);
    }
    if (param_1[5] != 0) {
      _free(param_1[6]);
    }
    if (param_1[8] != 0) {
      _free(param_1[9]);
    }
    if ((param_1[0xe] & 0x7fffffffffffffff) == 0) {
      puVar14 = (ulong *)param_1[0xc];
      uVar8 = param_1[0xd];
    }
    else {
      _free(param_1[0xf]);
      puVar14 = (ulong *)param_1[0xc];
      uVar8 = param_1[0xd];
    }
    if (uVar8 != 0) {
      puVar6 = puVar14 + 1;
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (param_1[0xb] == 0) {
      return;
    }
    break;
  case 0x10:
  case 0x38:
  case 0x39:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if (param_1[7] == 0) {
      return;
    }
    puVar14 = (ulong *)param_1[8];
    break;
  case 0x11:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if ((param_1[10] & 0x7fffffffffffffff) == 0) {
      puVar14 = (ulong *)param_1[8];
      uVar8 = param_1[9];
    }
    else {
      _free(param_1[0xb]);
      puVar14 = (ulong *)param_1[8];
      uVar8 = param_1[9];
    }
    if (uVar8 != 0) {
      puVar6 = puVar14 + 1;
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (param_1[7] == 0) {
      return;
    }
    break;
  case 0x12:
  case 0x15:
    func_0x000101bc1d90();
    if (param_1[0x20] != 0) {
      _free(param_1[0x21]);
    }
    if (param_1[0x23] == 0) {
      return;
    }
    puVar14 = (ulong *)param_1[0x24];
    break;
  case 0x13:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if (param_1[7] != 0) {
      _free(param_1[8]);
    }
    if ((param_1[10] & 0x7fffffffffffffff) == 0) {
      uVar8 = param_1[0xd];
    }
    else {
      _free(param_1[0xb]);
      uVar8 = param_1[0xd];
    }
    if ((uVar8 & 0x7fffffffffffffff) != 0) {
      _free(param_1[0xe]);
    }
    goto DAT_101bc68c8;
  case 0x14:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if (param_1[7] != 0) {
      _free(param_1[8]);
    }
    if ((param_1[10] & 0x7fffffffffffffff) == 0) {
      uVar8 = param_1[0xd];
    }
    else {
      _free(param_1[0xb]);
      uVar8 = param_1[0xd];
    }
    if ((uVar8 & 0x7fffffffffffffff) != 0) {
      _free(param_1[0xe]);
    }
DAT_101bc68c8:
    uVar11 = param_1[0x11];
    uVar8 = uVar11 ^ 0x8000000000000000;
    if (-1 < (long)uVar11) {
      uVar8 = 4;
    }
    if ((long)uVar8 < 2) {
      if (uVar8 != 0) {
        if (uVar8 == 1) {
          if (param_1[0x12] != 0) {
            _free(param_1[0x13]);
          }
          uVar8 = param_1[0x16];
          uVar11 = param_1[0x17];
          if (uVar11 != 0) {
            puVar13 = (undefined8 *)(uVar8 + 8);
            do {
              if (puVar13[-1] != 0) {
                _free(*puVar13);
              }
              puVar13 = puVar13 + 3;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          if (param_1[0x15] != 0) {
            _free(uVar8);
          }
          if (param_1[0x18] == 0) {
            return;
          }
          puVar14 = (ulong *)param_1[0x19];
          break;
        }
code_r0x000101bc6a30:
        if ((param_1[0x12] & 0x7fffffffffffffff) != 0) {
          _free(param_1[0x13]);
        }
        puVar6 = param_1 + 0x15;
SUB_101bbe80c:
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
        uVar8 = *puVar6;
        if (uVar8 != 0x8000000000000001) {
          if (uVar8 != 0x8000000000000000) {
            uVar11 = puVar6[1];
            uVar18 = puVar6[2];
            if (uVar18 != 0) {
              puVar13 = (undefined8 *)(uVar11 + 8);
              do {
                if (puVar13[-1] != 0) {
                  _free(*puVar13);
                }
                puVar13 = puVar13 + 3;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            if (uVar8 != 0) {
              _free(uVar11);
            }
          }
          uVar8 = puVar6[3];
          if (uVar8 != 0x8000000000000000) {
            uVar11 = puVar6[4];
            uVar18 = puVar6[5];
            if (uVar18 != 0) {
              puVar13 = (undefined8 *)(uVar11 + 8);
              do {
                if (puVar13[-1] != 0) {
                  _free(*puVar13);
                }
                puVar13 = puVar13 + 3;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            if (uVar8 != 0) {
              _free(uVar11);
            }
          }
          uVar8 = puVar6[6];
          if (uVar8 != 0x8000000000000000) {
            puVar14 = (ulong *)puVar6[7];
            uVar11 = puVar6[8];
            puVar6 = puVar14;
            for (; uVar11 != 0; uVar11 = uVar11 - 1) {
              uVar18 = *puVar6;
              lVar10 = uVar18 + 0x7ffffffffffffffb;
              if (uVar18 < 0x8000000000000005) {
                lVar10 = 2;
              }
              if ((lVar10 == 0) || (lVar10 == 1)) {
                uVar18 = puVar6[1];
joined_r0x000101bbe8fc:
                if (uVar18 != 0) {
                  lVar10 = 0x10;
LAB_101bbe904:
                  _free(*(undefined8 *)((long)puVar6 + lVar10));
                }
              }
              else {
                uVar12 = uVar18 ^ 0x8000000000000000;
                if (-1 < (long)uVar18) {
                  uVar12 = 5;
                }
                if (uVar12 < 5) {
                  if (uVar12 == 2) {
                    uVar18 = puVar6[1] & 0x7fffffffffffffff;
                    goto joined_r0x000101bbe8fc;
                  }
                }
                else {
                  if (uVar18 != 0) {
                    _free(puVar6[1]);
                  }
                  if ((puVar6[3] & 0x7fffffffffffffff) != 0) {
                    lVar10 = 0x20;
                    goto LAB_101bbe904;
                  }
                }
              }
              puVar6 = puVar6 + 7;
            }
            if (uVar8 != 0) break;
          }
        }
        return;
      }
code_r0x000101bc69a0:
      if (param_1[0x12] != 0) {
        _free(param_1[0x13]);
      }
      if (param_1[0x15] == 0) {
        return;
      }
      puVar14 = (ulong *)param_1[0x16];
      break;
    }
    if (uVar8 == 2) {
      if (param_1[0x12] != 0) {
        _free(param_1[0x13]);
      }
      puVar14 = (ulong *)param_1[0x16];
      uVar8 = param_1[0x17];
      if (uVar8 != 0) {
        puVar6 = puVar14 + 1;
        do {
          if (puVar6[-1] != 0) {
            _free(*puVar6);
          }
          puVar6 = puVar6 + 3;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (param_1[0x15] == 0) {
        return;
      }
      break;
    }
    if (uVar8 == 3) goto code_r0x000101bc69a0;
    if (uVar8 != 4) goto code_r0x000101bc6a30;
    if (uVar11 != 0) {
      _free(param_1[0x12]);
    }
    if (param_1[0x14] != 0) {
      _free(param_1[0x15]);
    }
    if ((param_1[0x17] & 0x7fffffffffffffff) == 0) {
      if ((param_1[0x1a] & 0x7fffffffffffffff) == 0) goto code_r0x000101bc6944;
code_r0x000101bc6a6c:
      _free(param_1[0x1b]);
      uVar8 = param_1[0x1d];
    }
    else {
      _free(param_1[0x18]);
      if ((param_1[0x1a] & 0x7fffffffffffffff) != 0) goto code_r0x000101bc6a6c;
code_r0x000101bc6944:
      uVar8 = param_1[0x1d];
    }
    if ((uVar8 & 0x7fffffffffffffff) == 0) {
      return;
    }
    puVar14 = (ulong *)param_1[0x1e];
    break;
  case 0x16:
    if (param_1[0x19] != 0) {
      _free(param_1[0x1a]);
    }
    if (param_1[0x1c] != 0) {
      _free(param_1[0x1d]);
    }
    puVar1 = &stack0xfffffffffffffff0;
    uVar8 = param_1[1];
    lVar10 = 2;
    if (1 < uVar8) {
      lVar10 = uVar8 - 2;
    }
    switch(lVar10) {
    case 0:
      if ((param_1[8] & 0x7fffffffffffffff) != 0) {
        _free(param_1[9]);
      }
      if (param_1[2] != 0) {
        _free(param_1[3]);
      }
      puVar14 = (ulong *)param_1[6];
      puVar6 = puVar14;
      for (uVar8 = param_1[7]; uVar8 != 0; uVar8 = uVar8 - 1) {
        uVar18 = *puVar6;
        uVar11 = uVar18 ^ 0x8000000000000000;
        if (-1 < (long)uVar18) {
          uVar11 = 1;
        }
        if ((uVar11 == 0) || (uVar11 != 1)) {
          if (puVar6[1] != 0) {
            lVar10 = 0x10;
            goto code_r0x000101bbf6a0;
          }
        }
        else if (uVar18 != 0) {
          lVar10 = 8;
code_r0x000101bbf6a0:
          _free(*(undefined8 *)((long)puVar6 + lVar10));
        }
        puVar6 = puVar6 + 4;
      }
      uVar8 = param_1[5];
      goto joined_r0x000101bbfc54;
    case 1:
      if (param_1[2] != 0) {
        _free(param_1[3]);
      }
      uVar8 = param_1[6];
      uVar11 = param_1[7];
      if (uVar11 != 0) {
        puVar13 = (undefined8 *)(uVar8 + 8);
        do {
          if (puVar13[-1] != 0) {
            _free(*puVar13);
          }
          puVar13 = puVar13 + 3;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (param_1[5] != 0) {
        _free(uVar8);
      }
      uVar8 = param_1[8];
      if (uVar8 != 0x8000000000000000) {
        uVar11 = param_1[9];
        uVar18 = param_1[10];
        if (uVar18 != 0) {
          puVar13 = (undefined8 *)(uVar11 + 0x10);
          do {
            if (puVar13[-1] != 0) {
              _free(*puVar13);
            }
            puVar13 = puVar13 + 4;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        if (uVar8 != 0) {
          _free(uVar11);
        }
      }
      if ((param_1[0xb] & 0x7fffffffffffffff) != 0) {
        puVar14 = (ulong *)param_1[0xc];
        goto code_r0x000108aa97c4;
      }
      break;
    case 2:
      if ((param_1[0x12] & 0x7fffffffffffffff) == 0) {
        if ((param_1[0x15] & 0x7fffffffffffffff) == 0) goto code_r0x000101bbf850;
code_r0x000101bbfab0:
        _free(param_1[0x16]);
        uVar8 = param_1[4];
        uVar11 = param_1[5];
      }
      else {
        _free(param_1[0x13]);
        if ((param_1[0x15] & 0x7fffffffffffffff) != 0) goto code_r0x000101bbfab0;
code_r0x000101bbf850:
        uVar8 = param_1[4];
        uVar11 = param_1[5];
      }
      if (uVar11 != 0) {
        puVar13 = (undefined8 *)(uVar8 + 8);
        do {
          if (puVar13[-1] != 0) {
            _free(*puVar13);
          }
          puVar13 = puVar13 + 3;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (param_1[3] != 0) {
        _free(uVar8);
      }
      if ((param_1[6] & 0x7fffffffffffffff) != 0) {
        _free(param_1[7]);
      }
      if (param_1[0xc] != 0) {
        func_0x000101bbd610();
      }
      if ((param_1[9] & 0x7fffffffffffffff) != 0) {
        puVar14 = (ulong *)param_1[10];
        goto code_r0x000108aa97c4;
      }
      break;
    case 3:
      if ((param_1[0xb] & 0x7fffffffffffffff) != 0) {
        _free(param_1[0xc]);
      }
      if (param_1[2] != 0) {
        _free(param_1[3]);
      }
      if ((param_1[0xe] & 0x7fffffffffffffff) != 0) {
        uVar8 = param_1[0xf];
code_r0x000101bbfb58:
        _free(uVar8);
      }
      goto code_r0x000101bbfb5c;
    case 4:
      if ((param_1[5] & 0x7fffffffffffffff) == 0) {
        if ((param_1[8] & 0x7fffffffffffffff) == 0) goto code_r0x000101bbf72c;
code_r0x000101bbfa74:
        _free(param_1[9]);
        if ((param_1[0xb] & 0x7fffffffffffffff) != 0) goto code_r0x000101bbfa88;
code_r0x000101bbf738:
        uVar8 = param_1[2];
      }
      else {
        _free(param_1[6]);
        if ((param_1[8] & 0x7fffffffffffffff) != 0) goto code_r0x000101bbfa74;
code_r0x000101bbf72c:
        if ((param_1[0xb] & 0x7fffffffffffffff) == 0) goto code_r0x000101bbf738;
code_r0x000101bbfa88:
        _free(param_1[0xc]);
        uVar8 = param_1[2];
      }
      if (uVar8 != 0) {
        _free(param_1[3]);
      }
      puVar14 = param_1 + 0xe;
SUB_101bbf344:
      while( true ) {
        puVar6 = puVar14;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
        uVar11 = *puVar6;
        uVar8 = uVar11 ^ 0x8000000000000000;
        if (-1 < (long)uVar11) {
          uVar8 = 5;
        }
        if (uVar8 < 3) {
          return;
        }
        if (uVar8 == 3) {
          if (puVar6[1] == 0) {
            return;
          }
          puVar14 = (ulong *)puVar6[2];
          goto code_r0x000108aa97c4;
        }
        if (uVar8 != 4) {
          uVar8 = puVar6[4];
          if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
            _free(puVar6[3] + uVar8 * -8 + -8);
          }
          puVar14 = (ulong *)puVar6[1];
          FUN_101bbcefc(puVar14,puVar6[2]);
          goto joined_r0x000101bbf400;
        }
        puVar14 = (ulong *)puVar6[2];
        unaff_x23 = puVar6[3];
        if (unaff_x23 == 0) break;
        unaff_x22 = puVar14 + 9;
        unaff_x30 = (undefined *)0x101bbf3b4;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
        unaff_x19 = puVar6;
        unaff_x20 = puVar14;
      }
      uVar11 = puVar6[1];
joined_r0x000101bbf400:
      if (uVar11 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    case 5:
      if (param_1[7] != 0) {
        _free(param_1[8]);
      }
      if (param_1[2] == 0) {
code_r0x000101bbfa2c:
        uVar8 = param_1[3];
joined_r0x000101bbfc4c:
        if (uVar8 == 0) {
          return;
        }
        puVar14 = (ulong *)param_1[4];
        goto code_r0x000108aa97c4;
      }
      puVar14 = (ulong *)param_1[4];
      puVar6 = puVar14;
      for (uVar8 = param_1[5]; uVar8 != 0; uVar8 = uVar8 - 1) {
        uVar18 = *puVar6;
        uVar11 = uVar18 ^ 0x8000000000000000;
        if (-1 < (long)uVar18) {
          uVar11 = 1;
        }
        if ((uVar11 == 0) || (uVar11 != 1)) {
          if (puVar6[1] != 0) {
            lVar10 = 0x10;
            goto code_r0x000101bbf798;
          }
        }
        else if (uVar18 != 0) {
          lVar10 = 8;
code_r0x000101bbf798:
          _free(*(undefined8 *)((long)puVar6 + lVar10));
        }
        puVar6 = puVar6 + 4;
      }
      goto code_r0x000101bbf994;
    case 6:
      if ((param_1[0xb] & 0x7fffffffffffffff) == 0) {
        if ((param_1[0xe] & 0x7fffffffffffffff) == 0) goto code_r0x000101bbf904;
code_r0x000101bbfb44:
        _free(param_1[0xf]);
        uVar8 = param_1[2];
      }
      else {
        _free(param_1[0xc]);
        if ((param_1[0xe] & 0x7fffffffffffffff) != 0) goto code_r0x000101bbfb44;
code_r0x000101bbf904:
        uVar8 = param_1[2];
      }
      if (uVar8 != 0) {
        uVar8 = param_1[3];
        goto code_r0x000101bbfb58;
      }
code_r0x000101bbfb5c:
      if (param_1[5] != 0) {
        uVar8 = param_1[6];
code_r0x000101bbfb68:
        _free(uVar8);
      }
code_r0x000101bbfb6c:
      if (param_1[8] != 0) {
        puVar14 = (ulong *)param_1[9];
        goto code_r0x000108aa97c4;
      }
      break;
    case 7:
      if (param_1[7] != 0) {
        _free(param_1[8]);
      }
      if ((param_1[10] & 0x7fffffffffffffff) != 0) {
        _free(param_1[0xb]);
      }
      if (param_1[2] == 0) goto code_r0x000101bbfa2c;
      puVar14 = (ulong *)param_1[4];
      puVar6 = puVar14;
      for (uVar8 = param_1[5]; uVar8 != 0; uVar8 = uVar8 - 1) {
        uVar18 = *puVar6;
        uVar11 = uVar18 ^ 0x8000000000000000;
        if (-1 < (long)uVar18) {
          uVar11 = 1;
        }
        if ((uVar11 == 0) || (uVar11 != 1)) {
          if (puVar6[1] != 0) {
            lVar10 = 0x10;
            goto code_r0x000101bbf954;
          }
        }
        else if (uVar18 != 0) {
          lVar10 = 8;
code_r0x000101bbf954:
          _free(*(undefined8 *)((long)puVar6 + lVar10));
        }
        puVar6 = puVar6 + 4;
      }
code_r0x000101bbf994:
      uVar8 = param_1[3];
      goto joined_r0x000101bbfc54;
    case 8:
      if ((param_1[0xb] & 0x7fffffffffffffff) != 0) {
        _free(param_1[0xc]);
      }
      if (param_1[2] != 0) {
        _free(param_1[3]);
      }
      if (param_1[5] != 0) {
        _free(param_1[6]);
      }
      unaff_x20 = (ulong *)param_1[9];
      unaff_x23 = param_1[10];
      puVar14 = unaff_x20;
      if (unaff_x23 != 0) {
        unaff_x22 = unaff_x20 + 9;
        unaff_x30 = &UNK_101bbfa18;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        unaff_x19 = param_1 + 1;
        unaff_x29 = puVar1;
        goto SUB_101bbf344;
      }
      uVar8 = param_1[8];
      goto joined_r0x000101bbfc54;
    case 9:
      if ((param_1[9] & 0x7fffffffffffffff) == 0) {
        if ((param_1[0xc] & 0x7fffffffffffffff) == 0) goto code_r0x000101bbf9b8;
code_r0x000101bbfba0:
        _free(param_1[0xd]);
        uVar8 = param_1[2];
      }
      else {
        _free(param_1[10]);
        if ((param_1[0xc] & 0x7fffffffffffffff) != 0) goto code_r0x000101bbfba0;
code_r0x000101bbf9b8:
        uVar8 = param_1[2];
      }
      if (uVar8 == 4) {
        return;
      }
      if (1 < (long)uVar8) {
        if (uVar8 != 2) {
          return;
        }
        if ((param_1[3] & 0x7fffffffffffffff) != 0) {
          _free(param_1[4]);
        }
        if ((param_1[6] & 0x7fffffffffffffff) == 0) {
          return;
        }
        puVar14 = (ulong *)param_1[7];
        goto code_r0x000108aa97c4;
      }
      if (uVar8 != 0) {
        uVar8 = param_1[3] & 0x7fffffffffffffff;
        goto joined_r0x000101bbfc4c;
      }
      if ((param_1[3] & 0x7fffffffffffffff) != 0) {
        _free(param_1[4]);
      }
      uVar8 = param_1[6];
      if (uVar8 == 0x8000000000000000) {
        return;
      }
      puVar14 = (ulong *)param_1[7];
      uVar11 = param_1[8];
      if (uVar11 != 0) {
        puVar6 = puVar14 + 1;
        do {
          if (puVar6[-1] != 0) {
            _free(*puVar6);
          }
          puVar6 = puVar6 + 3;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
joined_r0x000101bbfc54:
      if (uVar8 != 0) goto code_r0x000108aa97c4;
      break;
    case 10:
      if (param_1[2] != 0) {
        _free(param_1[3]);
      }
      if (param_1[5] != 0) {
        _free(param_1[6]);
      }
      if ((param_1[0xb] & 0x7fffffffffffffff) != 0) {
        uVar8 = param_1[0xc];
        goto code_r0x000101bbfb68;
      }
      goto code_r0x000101bbfb6c;
    case 0xb:
      uVar8 = param_1[2];
      goto joined_r0x000101bbf768;
    case 0xd:
      uVar8 = param_1[2] & 0x7fffffffffffffff;
joined_r0x000101bbf768:
      if (uVar8 != 0) {
        puVar14 = (ulong *)param_1[3];
        goto code_r0x000108aa97c4;
      }
    }
    return;
  case 0x17:
  case 0x18:
  case 0x1c:
  case 0x1e:
  case 0x21:
  case 0x2e:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if (param_1[7] != 0) {
      _free(param_1[8]);
    }
    if (param_1[10] == 0) {
      return;
    }
    puVar14 = (ulong *)param_1[0xb];
    break;
  case 0x19:
  case 0x1a:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] == 0) {
      return;
    }
    puVar14 = (ulong *)param_1[5];
    break;
  case 0x1b:
  case 0x2b:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if (param_1[7] == 0) {
      return;
    }
    puVar14 = (ulong *)param_1[8];
    break;
  case 0x1d:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if (param_1[7] != 0) {
      _free(param_1[8]);
    }
    if (param_1[10] != 0) {
      _free(param_1[0xb]);
    }
    if (param_1[0xd] == 0) {
      return;
    }
    puVar14 = (ulong *)param_1[0xe];
    break;
  case 0x1f:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if (param_1[7] != 0) {
      _free(param_1[8]);
    }
    puVar14 = (ulong *)param_1[0xb];
    uVar8 = param_1[0xc];
    if (uVar8 != 0) {
      puVar6 = puVar14 + 4;
      do {
        if (puVar6[-4] != 0) {
          _free(puVar6[-3]);
        }
        if (puVar6[2] + 0x7fffffffffffffff < 2 || (puVar6[2] & 0x7fffffffffffffff) == 0) {
          uVar11 = puVar6[-1];
        }
        else {
          _free(puVar6[3]);
          uVar11 = puVar6[-1];
        }
        if (uVar11 != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 9;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (param_1[10] == 0) {
      return;
    }
    break;
  case 0x22:
  case 0x23:
  case 0x36:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if ((param_1[4] & 0x7fffffffffffffff) == 0) {
      return;
    }
    puVar14 = (ulong *)param_1[5];
    break;
  case 0x25:
    if ((param_1[0xb] & 0x7fffffffffffffff) == 0) {
      if ((param_1[0xe] & 0x7fffffffffffffff) == 0) goto code_r0x000101bbd8b4;
code_r0x000101bbd8ec:
      _free(param_1[0xf]);
      if ((long)param_1[0x11] < -0x7ffffffffffffffe || param_1[0x11] == 0) {
        return;
      }
    }
    else {
      _free(param_1[0xc]);
      if ((param_1[0xe] & 0x7fffffffffffffff) != 0) goto code_r0x000101bbd8ec;
code_r0x000101bbd8b4:
      if ((long)param_1[0x11] < -0x7ffffffffffffffe || param_1[0x11] == 0) {
        return;
      }
    }
    puVar14 = (ulong *)param_1[0x12];
    break;
  case 0x26:
    puVar14 = (ulong *)param_1[2];
    uVar8 = param_1[3];
    if (uVar8 != 0) {
      uVar11 = 0;
      do {
        puVar6 = puVar14 + uVar11 * 0x4e;
        if (*puVar6 != 0) {
          _free(puVar6[1]);
        }
        if (puVar6[3] != 0) {
          _free(puVar6[4]);
        }
        if ((puVar6[9] & 0x7fffffffffffffff) == 0) {
          if ((puVar6[0xc] & 0x7fffffffffffffff) == 0) goto code_r0x000101bc60f0;
code_r0x000101bc612c:
          _free(puVar6[0xd]);
          if ((puVar6[0xf] & 0x7fffffffffffffff) != 0) goto code_r0x000101bc6140;
code_r0x000101bc60fc:
          if ((puVar6[0x12] & 0x7fffffffffffffff) == 0) goto code_r0x000101bc6108;
code_r0x000101bc6154:
          _free(puVar6[0x13]);
          uVar18 = puVar6[0x18];
          if (uVar18 != 0x8000000000000001) goto code_r0x000101bc6168;
code_r0x000101bc61a0:
          uVar18 = puVar6[0x28];
          if (uVar18 == 0x8000000000000001) goto code_r0x000101bc63b0;
code_r0x000101bc61ac:
          if ((uVar18 & 0x7fffffffffffffff) == 0) {
            uVar18 = puVar6[0x2b];
          }
          else {
            _free(puVar6[0x29]);
            uVar18 = puVar6[0x2b];
          }
          if (uVar18 != 0x8000000000000000) {
            uVar12 = puVar6[0x2c];
            uVar9 = puVar6[0x2d];
            if (uVar9 != 0) {
              puVar13 = (undefined8 *)(uVar12 + 8);
              do {
                if (puVar13[-1] != 0) {
                  _free(*puVar13);
                }
                puVar13 = puVar13 + 3;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            if (uVar18 != 0) {
              _free(uVar12);
            }
          }
          uVar18 = puVar6[0x2e];
          if (uVar18 != 0x8000000000000000) {
            uVar12 = puVar6[0x2f];
            uVar9 = puVar6[0x30];
            if (uVar9 != 0) {
              puVar13 = (undefined8 *)(uVar12 + 8);
              do {
                if (puVar13[-1] != 0) {
                  _free(*puVar13);
                }
                puVar13 = puVar13 + 3;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            if (uVar18 != 0) {
              _free(uVar12);
            }
          }
          if ((puVar6[0x31] & 0x7fffffffffffffff) == 0) {
            uVar18 = puVar6[0x34];
          }
          else {
            _free(puVar6[0x32]);
            uVar18 = puVar6[0x34];
          }
          if (uVar18 != 0x8000000000000000) {
            uVar12 = puVar6[0x35];
            uVar9 = puVar6[0x36];
            if (uVar9 != 0) {
              puVar13 = (undefined8 *)(uVar12 + 0x20);
              do {
                if ((puVar13[-1] & 0x7fffffffffffffff) == 0) {
                  if ((puVar13[2] & 0x7fffffffffffffff) == 0) goto code_r0x000101bc6328;
code_r0x000101bc6348:
                  _free(puVar13[3]);
                  lVar10 = puVar13[-4];
                }
                else {
                  _free(*puVar13);
                  if ((puVar13[2] & 0x7fffffffffffffff) != 0) goto code_r0x000101bc6348;
code_r0x000101bc6328:
                  lVar10 = puVar13[-4];
                }
                if (lVar10 != 0) {
                  _free(puVar13[-3]);
                }
                puVar13 = puVar13 + 9;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            if (uVar18 != 0) {
              _free(uVar12);
            }
          }
          if ((puVar6[0x37] & 0x7fffffffffffffff) == 0) {
            if ((puVar6[0x3a] & 0x7fffffffffffffff) == 0) goto code_r0x000101bc638c;
code_r0x000101bc6438:
            _free(puVar6[0x3b]);
            if ((puVar6[0x3d] & 0x7fffffffffffffff) != 0) goto code_r0x000101bc644c;
code_r0x000101bc6398:
            if ((puVar6[0x40] & 0x7fffffffffffffff) == 0) goto code_r0x000101bc63a4;
code_r0x000101bc6460:
            _free(puVar6[0x41]);
            uVar18 = puVar6[0x43];
          }
          else {
            _free(puVar6[0x38]);
            if ((puVar6[0x3a] & 0x7fffffffffffffff) != 0) goto code_r0x000101bc6438;
code_r0x000101bc638c:
            if ((puVar6[0x3d] & 0x7fffffffffffffff) == 0) goto code_r0x000101bc6398;
code_r0x000101bc644c:
            _free(puVar6[0x3e]);
            if ((puVar6[0x40] & 0x7fffffffffffffff) != 0) goto code_r0x000101bc6460;
code_r0x000101bc63a4:
            uVar18 = puVar6[0x43];
          }
          if ((uVar18 & 0x7fffffffffffffff) == 0) goto code_r0x000101bc63b0;
          _free(puVar6[0x44]);
          uVar18 = puVar6[0x47];
        }
        else {
          _free(puVar6[10]);
          if ((puVar6[0xc] & 0x7fffffffffffffff) != 0) goto code_r0x000101bc612c;
code_r0x000101bc60f0:
          if ((puVar6[0xf] & 0x7fffffffffffffff) == 0) goto code_r0x000101bc60fc;
code_r0x000101bc6140:
          _free(puVar6[0x10]);
          if ((puVar6[0x12] & 0x7fffffffffffffff) != 0) goto code_r0x000101bc6154;
code_r0x000101bc6108:
          uVar18 = puVar6[0x18];
          if (uVar18 == 0x8000000000000001) goto code_r0x000101bc61a0;
code_r0x000101bc6168:
          if ((uVar18 & 0x7fffffffffffffff) == 0) {
            if ((puVar6[0x1b] & 0x7fffffffffffffff) == 0) goto code_r0x000101bc617c;
code_r0x000101bc61d8:
            _free(puVar6[0x1c]);
            if ((puVar6[0x1e] & 0x7fffffffffffffff) != 0) goto code_r0x000101bc61ec;
code_r0x000101bc6188:
            if ((puVar6[0x21] & 0x7fffffffffffffff) == 0) goto code_r0x000101bc6194;
code_r0x000101bc6200:
            _free(puVar6[0x22]);
            uVar18 = puVar6[0x24];
          }
          else {
            _free(puVar6[0x19]);
            if ((puVar6[0x1b] & 0x7fffffffffffffff) != 0) goto code_r0x000101bc61d8;
code_r0x000101bc617c:
            if ((puVar6[0x1e] & 0x7fffffffffffffff) == 0) goto code_r0x000101bc6188;
code_r0x000101bc61ec:
            _free(puVar6[0x1f]);
            if ((puVar6[0x21] & 0x7fffffffffffffff) != 0) goto code_r0x000101bc6200;
code_r0x000101bc6194:
            uVar18 = puVar6[0x24];
          }
          if ((uVar18 & 0x7fffffffffffffff) == 0) goto code_r0x000101bc61a0;
          _free(puVar6[0x25]);
          uVar18 = puVar6[0x28];
          if (uVar18 != 0x8000000000000001) goto code_r0x000101bc61ac;
code_r0x000101bc63b0:
          uVar18 = puVar6[0x47];
        }
        if (uVar18 != 0) {
          func_0x000101bbd610(puVar6 + 0x47);
        }
        if ((puVar6[0x15] & 0x7fffffffffffffff) == 0) {
          uVar18 = puVar6[7];
          uVar12 = puVar6[8];
        }
        else {
          _free(puVar6[0x16]);
          uVar18 = puVar6[7];
          uVar12 = puVar6[8];
        }
        if (uVar12 != 0) {
          puVar13 = (undefined8 *)(uVar18 + 8);
          do {
            if (puVar13[-1] != 0) {
              _free(*puVar13);
            }
            puVar13 = puVar13 + 3;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        if (puVar6[6] != 0) {
          _free(uVar18);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar8);
    }
    if (param_1[1] == 0) {
      return;
    }
    break;
  case 0x27:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if ((param_1[7] & 0x7fffffffffffffff) == 0) {
      return;
    }
    puVar14 = (ulong *)param_1[8];
    break;
  case 0x29:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    puVar14 = (ulong *)param_1[5];
    uVar8 = param_1[6];
    if (uVar8 != 0) {
      puVar6 = puVar14 + 1;
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (param_1[4] == 0) {
      return;
    }
    break;
  case 0x2a:
  case 0x2c:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if (param_1[7] != 0) {
      _free(param_1[8]);
    }
    if (param_1[10] == 0) {
      return;
    }
    puVar14 = (ulong *)param_1[0xb];
    break;
  case 0x2d:
  case 0x31:
  case 0x3b:
  case 0x3c:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] == 0) {
      return;
    }
    puVar14 = (ulong *)param_1[5];
    break;
  case 0x2f:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] == 0) {
      return;
    }
    puVar14 = (ulong *)param_1[5];
    break;
  case 0x30:
    if ((param_1[4] & 0x7fffffffffffffff) == 0) {
      uVar8 = param_1[1];
    }
    else {
      _free(param_1[5]);
      uVar8 = param_1[1];
    }
    if (uVar8 == 0) {
      return;
    }
    puVar14 = (ulong *)param_1[2];
    break;
  case 0x33:
    if (param_1[6] != 0) {
      _free(param_1[7]);
    }
    if ((param_1[9] & 0x7fffffffffffffff) == 0) {
      uVar8 = param_1[0xc];
    }
    else {
      _free(param_1[10]);
      uVar8 = param_1[0xc];
    }
    if ((uVar8 & 0x7fffffffffffffff) == 0) {
      return;
    }
    puVar14 = (ulong *)param_1[0xd];
    break;
  case 0x34:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    puVar14 = (ulong *)param_1[8];
    uVar8 = param_1[9];
    if (uVar8 != 0) {
      puVar6 = puVar14 + 6;
      do {
        if (puVar6[-6] != 0) {
          _free(puVar6[-5]);
        }
        if (puVar6[-3] != 0) {
          _free(puVar6[-2]);
        }
        if (*puVar6 != 0) {
          _free(puVar6[1]);
        }
        if ((puVar6[3] & 0x7fffffffffffffff) != 0) {
          _free(puVar6[4]);
        }
        puVar6 = puVar6 + 0xd;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (param_1[7] == 0) {
      return;
    }
    break;
  case 0x37:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    puVar14 = param_1 + 4;
    goto SUB_101bbf344;
  case 0x3a:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if ((param_1[7] & 0x7fffffffffffffff) == 0) {
      return;
    }
    puVar14 = (ulong *)param_1[8];
    break;
  case 0x3e:
    puVar14 = (ulong *)param_1[2];
    uVar8 = param_1[3];
    if (uVar8 != 0) {
      puVar6 = puVar14 + 1;
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (param_1[1] == 0) {
      return;
    }
    break;
  case 0x3f:
    uVar8 = param_1[1] & 0x7fffffffffffffff;
joined_r0x000101bc0f2c:
    if (uVar8 == 0) {
LAB_101bc0f30:
      return;
    }
    puVar14 = (ulong *)param_1[2];
    break;
  default:
    if ((param_1[1] & 0x7fffffffffffffff) == 0) {
      uVar8 = param_1[4];
    }
    else {
      _free(param_1[2]);
      uVar8 = param_1[4];
    }
    if ((uVar8 & 0x7fffffffffffffff) == 0) {
      return;
    }
    puVar14 = (ulong *)param_1[5];
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar14);
  return;
}

