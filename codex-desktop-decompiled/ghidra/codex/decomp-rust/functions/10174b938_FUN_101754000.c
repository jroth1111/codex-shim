
/* WARNING: Possible PIC construction at 0x00010174d2e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010174973c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101746d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101754218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101754654: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101749740) */
/* WARNING: Removing unreachable block (ram,0x00010174d2e4) */
/* WARNING: Removing unreachable block (ram,0x000101746d08) */

void FUN_101754000(ulong *param_1)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *unaff_x19;
  undefined8 *puVar13;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong uVar14;
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
  undefined8 unaff_x30;
  long lVar19;
  
  puVar5 = &stack0xffffffffffffffa0;
  puVar4 = &stack0xfffffffffffffff0;
  uVar10 = *param_1 + 0x8000000000000001 & (long)*param_1 >> 0x3f;
  if ((long)uVar10 < 4) {
    if ((long)uVar10 < 2) {
      if (uVar10 != 0) {
        if (uVar10 == 1) {
          if ((param_1[0x11] & 0x7fffffffffffffff) != 0) {
            _free(param_1[0x12]);
          }
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
            uVar10 = param_1[0xd];
          }
          else {
            _free(param_1[0xb]);
            uVar10 = param_1[0xd];
          }
          if ((uVar10 & 0x7fffffffffffffff) == 0) {
            return;
          }
          puVar7 = (ulong *)param_1[0xe];
          goto code_r0x000108aa97c4;
        }
        goto LAB_101754474;
      }
      if ((param_1[0x31] & 0x7fffffffffffffff) != 0) {
        _free(param_1[0x32]);
      }
      puVar4 = &stack0xffffffffffffffc0;
      unaff_x29 = &stack0xfffffffffffffff0;
      if (*param_1 != 0) {
        _free(param_1[1]);
      }
      if (param_1[3] != 0) {
        _free(param_1[4]);
      }
      if (param_1[6] != 0) {
        _free(param_1[7]);
      }
      if ((param_1[9] & 0x7fffffffffffffff) == 0) {
        if ((param_1[0xc] & 0x7fffffffffffffff) != 0) goto LAB_101746c90;
LAB_101746c1c:
        if ((param_1[0xf] & 0x7fffffffffffffff) != 0) goto LAB_101746ca4;
LAB_101746c28:
        if ((param_1[0x13] & 0x7fffffffffffffff) != 0) goto LAB_101746cb8;
LAB_101746c34:
        if ((param_1[0x16] & 0x7fffffffffffffff) != 0) goto LAB_101746ccc;
LAB_101746c40:
        if (param_1[0x19] != 0x8000000000000000) goto LAB_101746ce8;
LAB_101746c54:
        uVar10 = param_1[0x25];
      }
      else {
        _free(param_1[10]);
        if ((param_1[0xc] & 0x7fffffffffffffff) == 0) goto LAB_101746c1c;
LAB_101746c90:
        _free(param_1[0xd]);
        if ((param_1[0xf] & 0x7fffffffffffffff) == 0) goto LAB_101746c28;
LAB_101746ca4:
        _free(param_1[0x10]);
        if ((param_1[0x13] & 0x7fffffffffffffff) == 0) goto LAB_101746c34;
LAB_101746cb8:
        _free(param_1[0x14]);
        if ((param_1[0x16] & 0x7fffffffffffffff) == 0) goto LAB_101746c40;
LAB_101746ccc:
        _free(param_1[0x17]);
        if (param_1[0x19] == 0x8000000000000000) goto LAB_101746c54;
LAB_101746ce8:
        FUN_1017467a0();
        uVar10 = param_1[0x25];
      }
      if (uVar10 == 0x8000000000000002) {
        uVar10 = param_1[0x1c];
        if (uVar10 != 0x8000000000000000) {
          uVar14 = param_1[0x1d];
          uVar18 = param_1[0x1e];
          if (uVar18 != 0) {
            puVar13 = (undefined8 *)(uVar14 + 8);
            do {
              if (puVar13[-1] != 0) {
                _free(*puVar13);
              }
              puVar13 = puVar13 + 3;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (uVar10 != 0) {
            _free(uVar14);
          }
        }
        uVar10 = param_1[0x1f];
        if (uVar10 != 0x8000000000000000) {
          uVar14 = param_1[0x20];
          uVar18 = param_1[0x21];
          if (uVar18 != 0) {
            puVar13 = (undefined8 *)(uVar14 + 8);
            do {
              if (puVar13[-1] != 0) {
                _free(*puVar13);
              }
              puVar13 = puVar13 + 4;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (uVar10 != 0) {
            _free(uVar14);
          }
        }
        uVar10 = param_1[0x22];
        if (uVar10 == 0x8000000000000000) {
          return;
        }
        puVar7 = (ulong *)param_1[0x23];
        uVar14 = param_1[0x24];
        if (uVar14 != 0) {
          uVar18 = 0;
          do {
            puVar8 = puVar7 + uVar18 * 4;
            uVar11 = *puVar8;
            uVar12 = uVar11 ^ 0x8000000000000000;
            if (-1 < (long)uVar11) {
              uVar12 = 3;
            }
            if (uVar12 == 3) {
              if (uVar11 != 0) {
                uVar12 = puVar8[1];
LAB_10174b980:
                _free(uVar12);
              }
            }
            else if (uVar12 == 2) {
              uVar12 = puVar8[2];
              uVar11 = puVar8[3];
              if (uVar11 != 0) {
                puVar13 = (undefined8 *)(uVar12 + 8);
                do {
                  if (puVar13[-1] != 0) {
                    _free(*puVar13);
                  }
                  puVar13 = puVar13 + 3;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              if (puVar8[1] != 0) goto LAB_10174b980;
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 != uVar14);
        }
        if (uVar10 == 0) {
          return;
        }
        goto code_r0x000108aa97c4;
      }
      puVar8 = param_1 + 0x25;
      unaff_x30 = 0x101746d08;
SUB_10174b108:
      *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
      *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
      *(ulong *)(puVar4 + -0x38) = unaff_x23;
      *(ulong **)(puVar4 + -0x30) = unaff_x22;
      *(ulong **)(puVar4 + -0x28) = unaff_x21;
      *(ulong **)(puVar4 + -0x20) = unaff_x20;
      *(ulong **)(puVar4 + -0x18) = param_1;
      *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
      *(undefined8 *)(puVar4 + -8) = unaff_x30;
      uVar10 = *puVar8;
      if (uVar10 == 0x8000000000000001) {
        return;
      }
      if (uVar10 != 0x8000000000000000) {
        uVar14 = puVar8[1];
        uVar18 = puVar8[2];
        if (uVar18 != 0) {
          puVar13 = (undefined8 *)(uVar14 + 8);
          do {
            if (puVar13[-1] != 0) {
              _free(*puVar13);
            }
            puVar13 = puVar13 + 3;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        if (uVar10 != 0) {
          _free(uVar14);
        }
      }
      uVar10 = puVar8[3];
      if (uVar10 != 0x8000000000000000) {
        uVar14 = puVar8[4];
        uVar18 = puVar8[5];
        if (uVar18 != 0) {
          puVar13 = (undefined8 *)(uVar14 + 8);
          do {
            if (puVar13[-1] != 0) {
              _free(*puVar13);
            }
            puVar13 = puVar13 + 3;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        if (uVar10 != 0) {
          _free(uVar14);
        }
      }
      uVar10 = puVar8[6];
      if (uVar10 == 0x8000000000000000) {
        return;
      }
      puVar7 = (ulong *)puVar8[7];
      uVar14 = puVar8[8];
      puVar8 = puVar7;
      for (; uVar14 != 0; uVar14 = uVar14 - 1) {
        uVar18 = *puVar8;
        lVar19 = uVar18 + 0x7ffffffffffffffb;
        if (uVar18 < 0x8000000000000005) {
          lVar19 = 2;
        }
        if ((lVar19 == 0) || (lVar19 == 1)) {
          uVar18 = puVar8[1];
joined_r0x00010174b1f8:
          if (uVar18 != 0) {
            lVar19 = 0x10;
LAB_10174b200:
            _free(*(undefined8 *)((long)puVar8 + lVar19));
          }
        }
        else {
          uVar12 = uVar18 ^ 0x8000000000000000;
          if (-1 < (long)uVar18) {
            uVar12 = 5;
          }
          if (uVar12 < 5) {
            if (uVar12 == 2) {
              uVar18 = puVar8[1] & 0x7fffffffffffffff;
              goto joined_r0x00010174b1f8;
            }
          }
          else {
            if (uVar18 != 0) {
              _free(puVar8[1]);
            }
            if ((puVar8[3] & 0x7fffffffffffffff) != 0) {
              lVar19 = 0x20;
              goto LAB_10174b200;
            }
          }
        }
        puVar8 = puVar8 + 7;
      }
      if (uVar10 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    if (uVar10 != 2) {
      if (uVar10 != 3) goto LAB_101754474;
      if ((param_1[0x1f] & 0x7fffffffffffffff) != 0) {
        _free(param_1[0x20]);
      }
      if (param_1[1] != 0) {
        _free(param_1[2]);
      }
      if ((param_1[7] & 0x7fffffffffffffff) != 0) {
        _free(param_1[8]);
      }
      if (param_1[4] != 0) {
        _free(param_1[5]);
      }
      unaff_x21 = (ulong *)param_1[10];
      if (unaff_x21 == (ulong *)0x8000000000000000) {
        if (param_1[0x14] == 0x8000000000000005) {
          if (param_1[0xb] != 0) {
            _free(param_1[0xc]);
          }
          if (param_1[0xe] != 0) {
            _free(param_1[0xf]);
          }
          if (param_1[0x11] == 0) {
            return;
          }
          puVar7 = (ulong *)param_1[0x12];
          goto code_r0x000108aa97c4;
        }
        unaff_x30 = 0x10175421c;
        puVar5 = &stack0xffffffffffffffa0;
        puVar8 = param_1 + 0x14;
      }
      else {
        if (param_1[0x16] == 0x8000000000000005) {
          if (unaff_x21 != (ulong *)0x0) {
            _free(param_1[0xb]);
          }
          if ((param_1[0xd] & 0x7fffffffffffffff) != 0) {
            _free(param_1[0xe]);
          }
          puVar7 = (ulong *)param_1[0x13];
          uVar10 = param_1[0x14];
          bVar6 = puVar7 != (ulong *)0x0;
          uVar14 = param_1[0x15];
          if (puVar7 == (ulong *)0x0 || uVar14 == 0) {
            puVar8 = puVar7;
            if (puVar7 != (ulong *)0x0) {
joined_r0x000101758748:
              for (; uVar10 != 0; uVar10 = uVar10 - 1) {
                puVar8 = (ulong *)puVar8[0xde];
              }
              goto LAB_101758758;
            }
            uVar10 = param_1[0x10];
          }
          else {
            puVar8 = (ulong *)0x0;
            do {
              if (!bVar6) {
                func_0x000108a07a20(&UNK_10b257898);
LAB_10175883c:
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101758840);
                (*pcVar3)();
              }
              puVar9 = puVar7;
              if (puVar8 == (ulong *)0x0) {
                for (; uVar10 != 0; uVar10 = uVar10 - 1) {
                  puVar9 = (ulong *)puVar9[0xde];
                }
                puVar7 = (ulong *)0x0;
                uVar18 = 0;
                if (*(short *)((long)puVar9 + 0x6ea) == 0) goto LAB_1017581f4;
              }
              else {
                puVar9 = puVar8;
                uVar18 = uVar10;
                if (*(ushort *)((long)puVar8 + 0x6ea) <= uVar10) {
LAB_1017581f4:
                  do {
                    puVar8 = (ulong *)*puVar9;
                    if (puVar8 == (ulong *)0x0) {
                      _free();
                      func_0x000108a07a20(&UNK_10b257868);
                      goto LAB_10175883c;
                    }
                    puVar7 = (ulong *)((long)puVar7 + 1);
                    uVar1 = *(ushort *)(puVar9 + 0xdd);
                    _free();
                    puVar9 = puVar8;
                    uVar18 = (ulong)uVar1;
                  } while (*(ushort *)((long)puVar8 + 0x6ea) <= uVar1);
                }
              }
              uVar10 = uVar18 + 1;
              if (puVar7 == (ulong *)0x0) {
                puVar7 = puVar9 + uVar18 * 3 + 1;
                uVar12 = *puVar7;
                puVar8 = puVar9;
              }
              else {
                puVar8 = puVar9 + uVar10;
                do {
                  puVar8 = (ulong *)puVar8[0xde];
                  puVar7 = (ulong *)((long)puVar7 - 1);
                } while (puVar7 != (ulong *)0x0);
                uVar10 = 0;
                puVar7 = puVar9 + uVar18 * 3 + 1;
                uVar12 = *puVar7;
              }
              if (uVar12 != 0) {
                _free(puVar7[1]);
              }
              uVar12 = puVar9[uVar18 * 0x11 + 0x22];
              lVar19 = 0;
              if (3 < uVar12) {
                lVar19 = uVar12 - 4;
              }
              if (lVar19 < 2) {
                if (lVar19 == 0) {
                  lVar19 = uVar12 - 2;
                  if (uVar12 < 2) {
                    lVar19 = 1;
                  }
                  if (lVar19 == 0) {
                    if (puVar9[uVar18 * 0x11 + 0x23] == 0) {
                      if ((puVar9[uVar18 * 0x11 + 0x27] & 0x7fffffffffffffff) == 0) {
                        if ((puVar9[uVar18 * 0x11 + 0x2a] & 0x7fffffffffffffff) != 0)
                        goto LAB_1017586d0;
LAB_101758420:
                        uVar12 = puVar9[uVar18 * 0x11 + 0x25];
                        uVar11 = puVar9[uVar18 * 0x11 + 0x26];
                      }
                      else {
                        _free(puVar9[uVar18 * 0x11 + 0x28]);
                        if ((puVar9[uVar18 * 0x11 + 0x2a] & 0x7fffffffffffffff) == 0)
                        goto LAB_101758420;
LAB_1017586d0:
                        _free(puVar9[uVar18 * 0x11 + 0x2b]);
                        uVar12 = puVar9[uVar18 * 0x11 + 0x25];
                        uVar11 = puVar9[uVar18 * 0x11 + 0x26];
                      }
                      if (uVar11 != 0) {
                        puVar13 = (undefined8 *)(uVar12 + 8);
                        do {
                          if (puVar13[-1] != 0) {
                            _free(*puVar13);
                          }
                          puVar13 = puVar13 + 3;
                          uVar11 = uVar11 - 1;
                        } while (uVar11 != 0);
                      }
                    }
                    else {
                      if ((puVar9[uVar18 * 0x11 + 0x27] & 0x7fffffffffffffff) == 0) {
                        if ((puVar9[uVar18 * 0x11 + 0x2a] & 0x7fffffffffffffff) != 0)
                        goto LAB_1017585c8;
LAB_10175835c:
                        uVar12 = puVar9[uVar18 * 0x11 + 0x25];
                        uVar11 = puVar9[uVar18 * 0x11 + 0x26];
                      }
                      else {
                        _free(puVar9[uVar18 * 0x11 + 0x28]);
                        if ((puVar9[uVar18 * 0x11 + 0x2a] & 0x7fffffffffffffff) == 0)
                        goto LAB_10175835c;
LAB_1017585c8:
                        _free(puVar9[uVar18 * 0x11 + 0x2b]);
                        uVar12 = puVar9[uVar18 * 0x11 + 0x25];
                        uVar11 = puVar9[uVar18 * 0x11 + 0x26];
                      }
                      if (uVar11 != 0) {
                        puVar13 = (undefined8 *)(uVar12 + 0x20);
                        do {
                          if (puVar13[-4] != 0) {
                            _free(puVar13[-3]);
                          }
                          if (puVar13[-1] != 0) {
                            _free(*puVar13);
                          }
                          puVar13 = puVar13 + 6;
                          uVar11 = uVar11 - 1;
                        } while (uVar11 != 0);
                      }
                    }
                    if (puVar9[uVar18 * 0x11 + 0x24] != 0) {
                      _free(uVar12);
                    }
                    if ((puVar9[uVar18 * 0x11 + 0x2d] & 0x7fffffffffffffff) != 0) {
                      lVar19 = 0x60;
                      goto LAB_10175872c;
                    }
                    goto LAB_1017581a0;
                  }
                  if (lVar19 != 1) {
                    if ((puVar9[uVar18 * 0x11 + 0x26] & 0x7fffffffffffffff) == 0) {
                      if ((puVar9[uVar18 * 0x11 + 0x29] & 0x7fffffffffffffff) != 0)
                      goto LAB_101758444;
LAB_1017583d8:
                      uVar12 = puVar9[uVar18 * 0x11 + 0x24];
                      uVar11 = puVar9[uVar18 * 0x11 + 0x25];
                    }
                    else {
                      _free(puVar9[uVar18 * 0x11 + 0x27]);
                      if ((puVar9[uVar18 * 0x11 + 0x29] & 0x7fffffffffffffff) == 0)
                      goto LAB_1017583d8;
LAB_101758444:
                      _free(puVar9[uVar18 * 0x11 + 0x2a]);
                      uVar12 = puVar9[uVar18 * 0x11 + 0x24];
                      uVar11 = puVar9[uVar18 * 0x11 + 0x25];
                    }
                    if (uVar11 != 0) {
                      puVar13 = (undefined8 *)(uVar12 + 8);
                      do {
                        if (puVar13[-1] != 0) {
                          _free(*puVar13);
                        }
                        puVar13 = puVar13 + 3;
                        uVar11 = uVar11 - 1;
                      } while (uVar11 != 0);
                    }
                    if (puVar9[uVar18 * 0x11 + 0x23] != 0) {
                      _free(uVar12);
                    }
                    uVar12 = puVar9[uVar18 * 0x11 + 0x2c];
                    if (uVar12 != 0x8000000000000000) {
                      uVar11 = puVar9[uVar18 * 0x11 + 0x2d];
                      uVar17 = puVar9[uVar18 * 0x11 + 0x2e];
                      if (uVar17 != 0) {
                        puVar13 = (undefined8 *)(uVar11 + 8);
                        do {
                          if (puVar13[-1] != 0) {
                            _free(*puVar13);
                          }
                          puVar13 = puVar13 + 3;
                          uVar17 = uVar17 - 1;
                        } while (uVar17 != 0);
                      }
                      if (uVar12 != 0) {
                        _free(uVar11);
                      }
                    }
                    if ((puVar9[uVar18 * 0x11 + 0x2f] & 0x7fffffffffffffff) != 0) {
                      lVar19 = 0x70;
                      goto LAB_10175872c;
                    }
                    goto LAB_1017581a0;
                  }
                  if (uVar12 == 0) {
                    if ((puVar9[uVar18 * 0x11 + 0x2a] & 0x7fffffffffffffff) == 0) {
                      if ((puVar9[uVar18 * 0x11 + 0x2d] & 0x7fffffffffffffff) != 0)
                      goto LAB_101758624;
LAB_1017583fc:
                      uVar12 = puVar9[uVar18 * 0x11 + 0x28];
                      uVar11 = puVar9[uVar18 * 0x11 + 0x29];
                    }
                    else {
                      _free(puVar9[uVar18 * 0x11 + 0x2b]);
                      if ((puVar9[uVar18 * 0x11 + 0x2d] & 0x7fffffffffffffff) == 0)
                      goto LAB_1017583fc;
LAB_101758624:
                      _free(puVar9[uVar18 * 0x11 + 0x2e]);
                      uVar12 = puVar9[uVar18 * 0x11 + 0x28];
                      uVar11 = puVar9[uVar18 * 0x11 + 0x29];
                    }
                    if (uVar11 != 0) {
                      puVar13 = (undefined8 *)(uVar12 + 8);
                      do {
                        if (puVar13[-1] != 0) {
                          _free(*puVar13);
                        }
                        puVar13 = puVar13 + 3;
                        uVar11 = uVar11 - 1;
                      } while (uVar11 != 0);
                    }
                    if (puVar9[uVar18 * 0x11 + 0x27] != 0) {
                      _free(uVar12);
                    }
                    uVar11 = puVar9[uVar18 * 0x11 + 0x30];
                    if (uVar11 == 0x8000000000000000) goto LAB_1017581a0;
                    uVar12 = puVar9[uVar18 * 0x11 + 0x31];
                    uVar18 = puVar9[uVar18 * 0x11 + 0x32];
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
                    if ((puVar9[uVar18 * 0x11 + 0x2a] & 0x7fffffffffffffff) == 0) {
                      if ((puVar9[uVar18 * 0x11 + 0x2d] & 0x7fffffffffffffff) != 0)
                      goto LAB_101758514;
LAB_1017582ac:
                      uVar12 = puVar9[uVar18 * 0x11 + 0x28];
                      uVar11 = puVar9[uVar18 * 0x11 + 0x29];
                    }
                    else {
                      _free(puVar9[uVar18 * 0x11 + 0x2b]);
                      if ((puVar9[uVar18 * 0x11 + 0x2d] & 0x7fffffffffffffff) == 0)
                      goto LAB_1017582ac;
LAB_101758514:
                      _free(puVar9[uVar18 * 0x11 + 0x2e]);
                      uVar12 = puVar9[uVar18 * 0x11 + 0x28];
                      uVar11 = puVar9[uVar18 * 0x11 + 0x29];
                    }
                    if (uVar11 != 0) {
                      puVar13 = (undefined8 *)(uVar12 + 0x20);
                      do {
                        if (puVar13[-4] != 0) {
                          _free(puVar13[-3]);
                        }
                        if (puVar13[-1] != 0) {
                          _free(*puVar13);
                        }
                        puVar13 = puVar13 + 6;
                        uVar11 = uVar11 - 1;
                      } while (uVar11 != 0);
                    }
                    if (puVar9[uVar18 * 0x11 + 0x27] != 0) {
                      _free(uVar12);
                    }
                    uVar11 = puVar9[uVar18 * 0x11 + 0x30];
                    if (uVar11 == 0x8000000000000000) goto LAB_1017581a0;
                    uVar12 = puVar9[uVar18 * 0x11 + 0x31];
                    uVar18 = puVar9[uVar18 * 0x11 + 0x32];
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
                  if (uVar11 == 0) goto LAB_1017581a0;
                }
                else {
                  if ((puVar9[uVar18 * 0x11 + 0x23] & 0x7fffffffffffffff) == 0) {
                    if ((puVar9[uVar18 * 0x11 + 0x26] & 0x7fffffffffffffff) != 0)
                    goto LAB_101758380;
LAB_101758310:
                    uVar12 = puVar9[uVar18 * 0x11 + 0x29];
                  }
                  else {
                    _free(puVar9[uVar18 * 0x11 + 0x24]);
                    if ((puVar9[uVar18 * 0x11 + 0x26] & 0x7fffffffffffffff) == 0)
                    goto LAB_101758310;
LAB_101758380:
                    _free(puVar9[uVar18 * 0x11 + 0x27]);
                    uVar12 = puVar9[uVar18 * 0x11 + 0x29];
                  }
                  if ((uVar12 & 0x7fffffffffffffff) == 0) goto LAB_1017581a0;
                  lVar19 = 0x40;
LAB_10175872c:
                  uVar12 = *(ulong *)((long)puVar9 + lVar19 + uVar18 * 0x88 + 0x110);
                }
                _free(uVar12);
              }
              else if (lVar19 == 2) {
                if ((puVar9[uVar18 * 0x11 + 0x29] & 0x7fffffffffffffff) == 0) {
                  uVar12 = puVar9[uVar18 * 0x11 + 0x2c];
                }
                else {
                  _free(puVar9[uVar18 * 0x11 + 0x2a]);
                  uVar12 = puVar9[uVar18 * 0x11 + 0x2c];
                }
                if ((uVar12 & 0x7fffffffffffffff) != 0) {
                  lVar19 = 0x58;
                  goto LAB_10175872c;
                }
              }
              else {
                if ((puVar9[uVar18 * 0x11 + 0x23] & 0x7fffffffffffffff) == 0) {
                  uVar12 = puVar9[uVar18 * 0x11 + 0x26];
                }
                else {
                  _free(puVar9[uVar18 * 0x11 + 0x24]);
                  uVar12 = puVar9[uVar18 * 0x11 + 0x26];
                }
                if ((uVar12 & 0x7fffffffffffffff) != 0) {
                  lVar19 = 0x28;
                  goto LAB_10175872c;
                }
              }
LAB_1017581a0:
              puVar7 = (ulong *)0x0;
              bVar6 = true;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
            if (puVar8 == (ulong *)0x0) goto joined_r0x000101758748;
LAB_101758758:
            puVar7 = (ulong *)*puVar8;
            if ((ulong *)*puVar8 == (ulong *)0x0) {
              _free();
              uVar10 = param_1[0x10];
            }
            else {
              do {
                puVar9 = puVar7;
                _free(puVar8);
                puVar8 = puVar9;
                puVar7 = (ulong *)*puVar9;
              } while ((ulong *)*puVar9 != (ulong *)0x0);
              _free(puVar9);
              uVar10 = param_1[0x10];
            }
          }
          if (uVar10 == 0x8000000000000000) {
            return;
          }
          puVar7 = (ulong *)param_1[0x11];
          uVar14 = param_1[0x12];
          if (uVar14 != 0) {
            puVar8 = puVar7 + 1;
            do {
              if (puVar8[-1] != 0) {
                _free(*puVar8);
              }
              puVar8 = puVar8 + 3;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          if (uVar10 == 0) {
            return;
          }
          goto code_r0x000108aa97c4;
        }
        unaff_x30 = 0x101754658;
        puVar8 = param_1 + 0x16;
      }
SUB_10174d274:
      while( true ) {
        while( true ) {
          puVar9 = puVar8;
          *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
          *(ulong *)(puVar5 + -0x38) = unaff_x23;
          *(ulong **)(puVar5 + -0x30) = unaff_x22;
          *(ulong **)(puVar5 + -0x28) = unaff_x21;
          *(ulong **)(puVar5 + -0x20) = unaff_x20;
          *(ulong **)(puVar5 + -0x18) = param_1;
          *(undefined1 **)(puVar5 + -0x10) = puVar4;
          *(undefined8 *)(puVar5 + -8) = unaff_x30;
          puVar4 = puVar5 + -0x10;
          uVar10 = *puVar9 ^ 0x8000000000000000;
          if (-1 < (long)*puVar9) {
            uVar10 = 5;
          }
          if (uVar10 < 3) {
            return;
          }
          if (uVar10 == 3) {
            if (puVar9[1] == 0) {
              return;
            }
            puVar7 = (ulong *)puVar9[2];
            goto code_r0x000108aa97c4;
          }
          if (uVar10 == 4) break;
          uVar10 = puVar9[4];
          if ((uVar10 != 0) && (uVar10 * 9 != -0x11)) {
            _free(puVar9[3] + uVar10 * -8 + -8);
          }
          unaff_x24 = *(undefined8 *)(puVar5 + -0x40);
          *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
          *(undefined8 *)(puVar5 + -0x38) = *(undefined8 *)(puVar5 + -0x38);
          *(undefined8 *)(puVar5 + -0x30) = *(undefined8 *)(puVar5 + -0x30);
          *(undefined8 *)(puVar5 + -0x28) = *(undefined8 *)(puVar5 + -0x28);
          *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
          *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
          *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
          *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
          puVar4 = puVar5 + -0x10;
          puVar7 = (ulong *)puVar9[1];
          unaff_x23 = puVar9[2];
          if (unaff_x23 == 0) {
            if (*puVar9 == 0) {
              return;
            }
            goto code_r0x000108aa97c4;
          }
          if (*puVar7 != 0) {
            _free(puVar7[1]);
          }
          unaff_x22 = puVar7 + 0xd;
          unaff_x30 = 0x101749740;
          puVar5 = puVar5 + -0x40;
          puVar8 = puVar7 + 3;
          param_1 = puVar7;
          unaff_x20 = puVar9;
          unaff_x21 = puVar7;
        }
        puVar7 = (ulong *)puVar9[2];
        unaff_x23 = puVar9[3];
        if (unaff_x23 == 0) break;
        unaff_x22 = puVar7 + 9;
        unaff_x30 = 0x10174d2e4;
        puVar5 = puVar5 + -0x40;
        puVar8 = puVar7;
        param_1 = puVar9;
        unaff_x20 = puVar7;
      }
      if (puVar9[1] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    if ((param_1[0xd] & 0x7fffffffffffffff) != 0) {
      _free(param_1[0xe]);
    }
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if (param_1[7] != 0) {
      _free(param_1[8]);
    }
    puVar7 = (ulong *)param_1[0xb];
    uVar10 = param_1[0xc];
    if (uVar10 != 0) {
      uVar14 = 0;
      do {
        puVar8 = puVar7 + uVar14 * 0xd;
        if (*puVar8 != 0) {
          _free(puVar8[1]);
        }
        if (puVar8[3] != 0) {
          _free(puVar8[4]);
        }
        if (puVar8[6] != 0) {
          _free(puVar8[7]);
        }
        uVar18 = puVar8[9];
        if (uVar18 != 0x8000000000000000) {
          uVar12 = puVar8[10];
          uVar11 = puVar8[0xb];
          if (uVar11 != 0) {
            puVar13 = (undefined8 *)(uVar12 + 0x20);
            do {
              if (puVar13[-4] != 0) {
                _free(puVar13[-3]);
              }
              if (puVar13[-1] != 0) {
                _free(*puVar13);
              }
              puVar13 = puVar13 + 6;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          if (uVar18 != 0) {
            _free(uVar12);
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar10);
    }
  }
  else {
    if ((long)uVar10 < 6) {
      if (uVar10 == 4) {
        if ((param_1[0x1c] & 0x7fffffffffffffff) != 0) {
          _free(param_1[0x1d]);
        }
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
        if ((param_1[0xd] & 0x7fffffffffffffff) != 0) {
          _free(param_1[0xe]);
        }
        puVar8 = param_1 + 0x10;
        puVar4 = (undefined1 *)register0x00000008;
        param_1 = unaff_x19;
        goto SUB_10174b108;
      }
      if (uVar10 == 5) {
        if ((param_1[0x19] & 0x7fffffffffffffff) != 0) {
          _free(param_1[0x1a]);
        }
        if (param_1[1] != 0) {
          _free(param_1[2]);
        }
        if (param_1[4] != 0) {
          _free(param_1[5]);
        }
        if (param_1[7] != 0) {
          _free(param_1[8]);
        }
        if ((param_1[0xd] & 0x7fffffffffffffff) != 0) {
          _free(param_1[0xe]);
        }
        if (param_1[10] != 0) {
          _free(param_1[0xb]);
        }
        puVar5 = (undefined1 *)register0x00000008;
        puVar8 = param_1 + 0x10;
        param_1 = unaff_x19;
        puVar4 = unaff_x29;
        goto SUB_10174d274;
      }
    }
    else {
      if (uVar10 == 6) {
        if ((param_1[1] & 0x7fffffffffffffff) == 0) {
          uVar10 = param_1[4];
        }
        else {
          _free(param_1[2]);
          uVar10 = param_1[4];
        }
        if ((uVar10 & 0x7fffffffffffffff) == 0) {
          return;
        }
        puVar7 = (ulong *)param_1[5];
        goto code_r0x000108aa97c4;
      }
      if (uVar10 == 7) {
        if ((param_1[1] & 0x7fffffffffffffff) == 0) {
          return;
        }
        puVar7 = (ulong *)param_1[2];
        goto code_r0x000108aa97c4;
      }
      if (uVar10 == 8) {
        if ((param_1[0x12] & 0x7fffffffffffffff) != 0) {
          _free(param_1[0x13]);
        }
        if (param_1[1] != 0) {
          _free(param_1[2]);
        }
        uVar10 = param_1[0xb];
        if (uVar10 != 0) {
          uVar14 = param_1[0xd];
          if (uVar14 != 0) {
            plVar15 = (long *)param_1[10];
            plVar16 = plVar15 + 1;
            lVar19 = *plVar15;
            uVar18 = CONCAT17(-(-1 < lVar19),
                              CONCAT16(-(-1 < (char)((ulong)lVar19 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar19 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar19 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar19 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar19 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar19 >> 8)),
                                                           -(-1 < (char)lVar19)))))))) &
                     0x8080808080808080;
            do {
              while (uVar18 == 0) {
                lVar19 = *plVar16;
                plVar15 = plVar15 + -0x48;
                plVar16 = plVar16 + 1;
                uVar18 = CONCAT17(-(-1 < lVar19),
                                  CONCAT16(-(-1 < (char)((ulong)lVar19 >> 0x30)),
                                           CONCAT15(-(-1 < (char)((ulong)lVar19 >> 0x28)),
                                                    CONCAT14(-(-1 < (char)((ulong)lVar19 >> 0x20)),
                                                             CONCAT13(-(-1 < (char)((ulong)lVar19 >>
                                                                                   0x18)),
                                                                      CONCAT12(-(-1 < (char)((ulong)
                                                  lVar19 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar19 >> 8)),
                                                           -(-1 < (char)lVar19)))))))) &
                         0x8080808080808080;
              }
              uVar12 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                       (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              iVar2 = (int)((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3);
              if (plVar15[(long)-iVar2 * 9 + -9] != 0) {
                _free(plVar15[(long)-iVar2 * 9 + -8]);
              }
              uVar11 = plVar15[(long)-iVar2 * 9 + -6];
              uVar12 = uVar11 ^ 0x8000000000000000;
              if (-1 < (long)uVar11) {
                uVar12 = 2;
              }
              if ((uVar12 == 0) || (uVar12 == 1)) {
                if (plVar15[(long)-iVar2 * 9 + -5] != 0) {
                  lVar19 = 0x10;
                  goto LAB_1017540bc;
                }
              }
              else {
                if (uVar11 != 0) {
                  _free(plVar15[(long)-iVar2 * 9 + -5]);
                }
                if ((plVar15[(long)-iVar2 * 9 + -3] & 0x7fffffffffffffffU) != 0) {
                  lVar19 = 0x20;
LAB_1017540bc:
                  _free(*(undefined8 *)((long)(plVar15 + (long)-iVar2 * 9 + -6) + lVar19));
                }
              }
              uVar18 = uVar18 - 1 & uVar18;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          if (uVar10 * 0x49 != -0x51) {
            _free(param_1[10] + uVar10 * -0x48 + -0x48);
          }
        }
        if ((param_1[4] & 0x7fffffffffffffff) == 0) {
          uVar10 = param_1[7];
        }
        else {
          _free(param_1[5]);
          uVar10 = param_1[7];
        }
        if ((uVar10 & 0x7fffffffffffffff) == 0) {
          return;
        }
        puVar7 = (ulong *)param_1[8];
        goto code_r0x000108aa97c4;
      }
    }
LAB_101754474:
    if ((param_1[0x15] & 0x7fffffffffffffff) != 0) {
      _free(param_1[0x16]);
    }
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if ((param_1[0xd] & 0x7fffffffffffffff) != 0) {
      _free(param_1[0xe]);
    }
    uVar10 = param_1[5];
    uVar14 = param_1[6];
    if (uVar14 != 0) {
      puVar13 = (undefined8 *)(uVar10 + 8);
      do {
        if (puVar13[-1] != 0) {
          _free(*puVar13);
        }
        puVar13 = puVar13 + 3;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (param_1[4] != 0) {
      _free(uVar10);
    }
    if (param_1[7] != 0) {
      _free(param_1[8]);
    }
    if ((param_1[0x10] & 0x7fffffffffffffff) != 0) {
      _free(param_1[0x11]);
    }
    puVar7 = (ulong *)param_1[0xb];
    puVar8 = puVar7;
    for (uVar10 = param_1[0xc]; uVar10 != 0; uVar10 = uVar10 - 1) {
      uVar14 = *puVar8;
      if ((long)uVar14 < 2) {
        if (uVar14 == 0) {
          if (puVar8[1] != 0) {
            _free(puVar8[2]);
          }
          if (puVar8[4] != 0) {
            _free(puVar8[5]);
          }
          if (puVar8[7] == 0) goto LAB_101754534;
          lVar19 = 0x40;
        }
        else {
          if (puVar8[4] != 0) {
            _free(puVar8[5]);
          }
          uVar14 = puVar8[1] & 0x7fffffffffffffff;
joined_r0x000101754524:
          if (uVar14 == 0) goto LAB_101754534;
          lVar19 = 0x10;
        }
LAB_10175452c:
        _free(*(undefined8 *)((long)puVar8 + lVar19));
      }
      else {
        if (uVar14 != 2) {
          uVar14 = puVar8[1];
          goto joined_r0x000101754524;
        }
        if (puVar8[7] != 0) {
          _free(puVar8[8]);
        }
        if ((puVar8[1] & 0x7fffffffffffffff) == 0) {
          uVar14 = puVar8[4];
        }
        else {
          _free(puVar8[2]);
          uVar14 = puVar8[4];
        }
        if ((uVar14 & 0x7fffffffffffffff) != 0) {
          lVar19 = 0x28;
          goto LAB_10175452c;
        }
      }
LAB_101754534:
      puVar8 = puVar8 + 10;
    }
  }
  if (param_1[10] == 0) {
    return;
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar7);
  return;
}

