
/* WARNING: Possible PIC construction at 0x0001026a90e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026ad554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026ad0f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026ad478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aea3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026ad558) */
/* WARNING: Removing unreachable block (ram,0x0001026a90ec) */
/* WARNING: Removing unreachable block (ram,0x0001026aea40) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1026ace6c(ulong *param_1)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *puVar9;
  ulong *unaff_x21;
  undefined8 *puVar10;
  ulong *unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  ulong uVar11;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  long in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  puVar2 = &stack0xfffffffffffffff0;
  puVar9 = (ulong *)0x8000000000000005;
  uVar5 = *param_1;
  lVar7 = uVar5 + 0x7fffffffffffffbf;
  if (uVar5 < 0x8000000000000041) {
    lVar7 = 1;
  }
  if (lVar7 == 0) {
    uVar8 = param_1[1];
    uVar5 = uVar8 + 0x8000000000000001 & (long)uVar8 >> 0x3f;
    if (3 < (long)uVar5) {
      if ((long)uVar5 < 6) {
        if (uVar5 == 4) {
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
          puVar3 = param_1 + 0x11;
          goto SUB_1026a5ca8;
        }
        if (uVar5 == 5) {
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
          puVar3 = param_1 + 0x11;
          goto SUB_1026a9020;
        }
      }
      else {
        if (uVar5 == 6) {
          if ((param_1[2] & 0x7fffffffffffffff) != 0) {
            _free(param_1[3]);
          }
          if ((param_1[5] & 0x7fffffffffffffff) == 0) {
            return;
          }
          puVar9 = (ulong *)param_1[6];
          goto code_r0x000108aa97c4;
        }
        if (uVar5 == 7) {
          if ((param_1[2] & 0x7fffffffffffffff) == 0) {
            return;
          }
          puVar9 = (ulong *)param_1[3];
          goto code_r0x000108aa97c4;
        }
        if (uVar5 == 8) {
          if ((param_1[0x13] & 0x7fffffffffffffff) != 0) {
            _free(param_1[0x14]);
          }
          if (param_1[2] != 0) {
            _free(param_1[3]);
          }
          FUN_1026a4df8(param_1 + 0xb);
          if ((param_1[5] & 0x7fffffffffffffff) != 0) {
            _free(param_1[6]);
          }
          if ((param_1[8] & 0x7fffffffffffffff) == 0) {
            return;
          }
          puVar9 = (ulong *)param_1[9];
          goto code_r0x000108aa97c4;
        }
      }
LAB_1026ad378:
      if ((param_1[0x16] & 0x7fffffffffffffff) != 0) {
        _free(param_1[0x17]);
      }
      if (param_1[2] != 0) {
        _free(param_1[3]);
      }
      if ((param_1[0xe] & 0x7fffffffffffffff) != 0) {
        _free(param_1[0xf]);
      }
      uVar5 = param_1[6];
      uVar8 = param_1[7];
      if (uVar8 != 0) {
        puVar10 = (undefined8 *)(uVar5 + 8);
        do {
          if (puVar10[-1] != 0) {
            _free(*puVar10);
          }
          puVar10 = puVar10 + 3;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (param_1[5] != 0) {
        _free(uVar5);
      }
      if (param_1[8] != 0) {
        _free(param_1[9]);
      }
      if ((param_1[0x11] & 0x7fffffffffffffff) != 0) {
        _free(param_1[0x12]);
      }
      puVar9 = (ulong *)param_1[0xc];
      puVar3 = puVar9;
      for (uVar5 = param_1[0xd]; uVar5 != 0; uVar5 = uVar5 - 1) {
        uVar8 = *puVar3;
        if ((long)uVar8 < 2) {
          if (uVar8 == 0) {
            if (puVar3[1] != 0) {
              _free(puVar3[2]);
            }
            if (puVar3[4] != 0) {
              _free(puVar3[5]);
            }
            if (puVar3[7] == 0) goto LAB_1026a2d10;
            lVar7 = 0x40;
          }
          else {
            if (puVar3[4] != 0) {
              _free(puVar3[5]);
            }
            uVar8 = puVar3[1] & 0x7fffffffffffffff;
joined_r0x0001026a2d00:
            if (uVar8 == 0) goto LAB_1026a2d10;
            lVar7 = 0x10;
          }
LAB_1026a2d08:
          _free(*(undefined8 *)((long)puVar3 + lVar7));
        }
        else {
          if (uVar8 != 2) {
            uVar8 = puVar3[1];
            goto joined_r0x0001026a2d00;
          }
          if (puVar3[7] != 0) {
            _free(puVar3[8]);
          }
          if ((puVar3[1] & 0x7fffffffffffffff) == 0) {
            uVar8 = puVar3[4];
          }
          else {
            _free(puVar3[2]);
            uVar8 = puVar3[4];
          }
          if ((uVar8 & 0x7fffffffffffffff) != 0) {
            lVar7 = 0x28;
            goto LAB_1026a2d08;
          }
        }
LAB_1026a2d10:
        puVar3 = puVar3 + 10;
      }
      if (param_1[0xb] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    unaff_x20 = puVar9;
    if (1 < (long)uVar5) {
      if (uVar5 == 2) {
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
        puVar9 = (ulong *)param_1[0xc];
        uVar5 = param_1[0xd];
        if (uVar5 != 0) {
          uVar8 = 0;
          do {
            puVar3 = puVar9 + uVar8 * 0xd;
            if (*puVar3 != 0) {
              _free(puVar3[1]);
            }
            if (puVar3[3] != 0) {
              _free(puVar3[4]);
            }
            if (puVar3[6] != 0) {
              _free(puVar3[7]);
            }
            uVar6 = puVar3[9];
            if (uVar6 != 0x8000000000000000) {
              uVar4 = puVar3[10];
              uVar11 = puVar3[0xb];
              if (uVar11 != 0) {
                puVar10 = (undefined8 *)(uVar4 + 0x20);
                do {
                  if (puVar10[-4] != 0) {
                    _free(puVar10[-3]);
                  }
                  if (puVar10[-1] != 0) {
                    _free(*puVar10);
                  }
                  puVar10 = puVar10 + 6;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              if (uVar6 != 0) {
                _free(uVar4);
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 != uVar5);
        }
        if (param_1[0xb] == 0) {
          return;
        }
        goto code_r0x000108aa97c4;
      }
      if (uVar5 != 3) goto LAB_1026ad378;
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
      unaff_x21 = (ulong *)param_1[0xb];
      if (unaff_x21 == (ulong *)0x8000000000000000) {
        puVar3 = param_1 + 0x15;
        if (*puVar3 == 0x8000000000000005) {
          if (param_1[0xc] != 0) {
            _free(param_1[0xd]);
          }
          if (param_1[0xf] != 0) {
            _free(param_1[0x10]);
          }
          if (param_1[0x12] == 0) {
            return;
          }
          puVar9 = (ulong *)param_1[0x13];
          goto code_r0x000108aa97c4;
        }
        unaff_x30 = (undefined *)0x1026ad0f8;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        unaff_x19 = param_1;
        unaff_x29 = puVar2;
      }
      else {
        puVar3 = param_1 + 0x17;
        if (*puVar3 == 0x8000000000000005) {
          if (unaff_x21 != (ulong *)0x0) {
            _free(param_1[0xc]);
          }
          if ((param_1[0xe] & 0x7fffffffffffffff) == 0) {
            uVar5 = param_1[0x14];
            if (uVar5 == 0) goto LAB_1026addfc;
LAB_1026addd0:
            uStack_88 = param_1[0x15];
            uStack_98 = 0;
            uStack_78 = 0;
            uStack_a0 = 1;
            uStack_90 = uVar5;
            uStack_80 = uStack_a0;
            uStack_70 = uVar5;
            uStack_68 = uStack_88;
          }
          else {
            _free(param_1[0xf]);
            uVar5 = param_1[0x14];
            if (uVar5 != 0) goto LAB_1026addd0;
LAB_1026addfc:
            uStack_a0 = 0;
            uStack_80 = uStack_a0;
          }
          while (FUN_1026b1c94(&stack0xffffffffffffffa8,&uStack_a0), in_stack_ffffffffffffffa8 != 0)
          {
            lVar7 = in_stack_ffffffffffffffa8 + in_stack_ffffffffffffffb8 * 0x18;
            if (*(long *)(lVar7 + 8) != 0) {
              _free(*(undefined8 *)(lVar7 + 0x10));
            }
            FUN_1026aee7c(in_stack_ffffffffffffffa8 + in_stack_ffffffffffffffb8 * 0x88 + 0x110);
          }
          uVar5 = param_1[0x11];
          if (uVar5 != 0x8000000000000000) {
            puVar9 = (ulong *)param_1[0x12];
            uVar8 = param_1[0x13];
            if (uVar8 != 0) {
              puVar3 = puVar9 + 1;
              do {
                if (puVar3[-1] != 0) {
                  _free(*puVar3);
                }
                puVar3 = puVar3 + 3;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            if (uVar5 != 0) goto code_r0x000108aa97c4;
          }
          return;
        }
        unaff_x30 = (undefined *)0x1026ad47c;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        unaff_x19 = param_1;
        unaff_x29 = puVar2;
      }
      goto SUB_1026a9020;
    }
    if (uVar5 != 0) {
      if (uVar5 == 1) {
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
          uVar5 = param_1[0xc];
          goto LAB_1026acfd4;
        }
        goto LAB_1026acfd8;
      }
      goto LAB_1026ad378;
    }
    if ((param_1[0x32] & 0x7fffffffffffffff) != 0) {
      _free(param_1[0x33]);
      uVar8 = param_1[1];
    }
    if (uVar8 != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if (param_1[7] != 0) {
      _free(param_1[8]);
    }
    if ((param_1[10] & 0x7fffffffffffffff) == 0) {
      if ((param_1[0xd] & 0x7fffffffffffffff) != 0) goto LAB_1026ad4e4;
LAB_1026ad204:
      if ((param_1[0x10] & 0x7fffffffffffffff) != 0) goto LAB_1026ad4f8;
LAB_1026ad210:
      if ((param_1[0x14] & 0x7fffffffffffffff) != 0) goto LAB_1026ad50c;
LAB_1026ad21c:
      if ((param_1[0x17] & 0x7fffffffffffffff) != 0) goto LAB_1026ad520;
LAB_1026ad228:
      if (param_1[0x1a] != 0x8000000000000000) goto LAB_1026ad53c;
LAB_1026ad23c:
      uVar5 = param_1[0x26];
    }
    else {
      _free(param_1[0xb]);
      if ((param_1[0xd] & 0x7fffffffffffffff) == 0) goto LAB_1026ad204;
LAB_1026ad4e4:
      _free(param_1[0xe]);
      if ((param_1[0x10] & 0x7fffffffffffffff) == 0) goto LAB_1026ad210;
LAB_1026ad4f8:
      _free(param_1[0x11]);
      if ((param_1[0x14] & 0x7fffffffffffffff) == 0) goto LAB_1026ad21c;
LAB_1026ad50c:
      _free(param_1[0x15]);
      if ((param_1[0x17] & 0x7fffffffffffffff) == 0) goto LAB_1026ad228;
LAB_1026ad520:
      _free(param_1[0x18]);
      if (param_1[0x1a] == 0x8000000000000000) goto LAB_1026ad23c;
LAB_1026ad53c:
      func_0x0001026a2cd8();
      uVar5 = param_1[0x26];
    }
    if (uVar5 == 0x8000000000000002) {
      uVar5 = param_1[0x1d];
      if (uVar5 != 0x8000000000000000) {
        uVar8 = param_1[0x1e];
        uVar6 = param_1[0x1f];
        if (uVar6 != 0) {
          puVar10 = (undefined8 *)(uVar8 + 8);
          do {
            if (puVar10[-1] != 0) {
              _free(*puVar10);
            }
            puVar10 = puVar10 + 3;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (uVar5 != 0) {
          _free(uVar8);
        }
      }
      uVar5 = param_1[0x20];
      if (uVar5 != 0x8000000000000000) {
        uVar8 = param_1[0x21];
        uVar6 = param_1[0x22];
        if (uVar6 != 0) {
          puVar10 = (undefined8 *)(uVar8 + 8);
          do {
            if (puVar10[-1] != 0) {
              _free(*puVar10);
            }
            puVar10 = puVar10 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (uVar5 != 0) {
          _free(uVar8);
        }
      }
      if (param_1[0x23] == 0x8000000000000000) {
        return;
      }
      puVar9 = (ulong *)param_1[0x24];
      uVar5 = param_1[0x25];
      if (uVar5 != 0) {
        uVar8 = 0;
        do {
          puVar3 = puVar9 + uVar8 * 4;
          uVar4 = *puVar3;
          uVar6 = uVar4 ^ 0x8000000000000000;
          if (-1 < (long)uVar4) {
            uVar6 = 3;
          }
          if (uVar6 == 3) {
            if (uVar4 != 0) {
              uVar6 = puVar3[1];
LAB_1026a53a8:
              _free(uVar6);
            }
          }
          else if (uVar6 == 2) {
            uVar6 = puVar3[2];
            uVar4 = puVar3[3];
            if (uVar4 != 0) {
              puVar10 = (undefined8 *)(uVar6 + 8);
              do {
                if (puVar10[-1] != 0) {
                  _free(*puVar10);
                }
                puVar10 = puVar10 + 3;
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
            if (puVar3[1] != 0) goto LAB_1026a53a8;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar5);
      }
      if (param_1[0x23] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    puVar3 = param_1 + 0x26;
    unaff_x30 = (undefined *)0x1026ad558;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x19 = param_1;
    unaff_x29 = puVar2;
    goto SUB_1026a5ca8;
  }
  if (lVar7 != 1) {
    if (lVar7 != 2) {
      if (param_1[4] != 0x8000000000000005) {
        func_0x0001026a9020();
      }
      if (param_1[1] != 0) {
        uVar5 = param_1[2];
LAB_1026acfd4:
        _free(uVar5);
      }
LAB_1026acfd8:
      if ((param_1[0xe] & 0x7fffffffffffffff) == 0) {
        return;
      }
      puVar9 = (ulong *)param_1[0xf];
      goto code_r0x000108aa97c4;
    }
    if ((param_1[1] & 0x7fffffffffffffff) != 0) {
      _free(param_1[2]);
    }
    puVar3 = param_1 + 4;
SUB_1026a9020:
    while( true ) {
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
      unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
      unaff_x22 = (ulong *)*puVar3;
      uVar5 = (ulong)unaff_x22 ^ 0x8000000000000000;
      if (-1 < (long)unaff_x22) {
        uVar5 = 5;
      }
      if (uVar5 < 3) {
        return;
      }
      if (uVar5 == 3) {
        if (puVar3[1] == 0) {
          return;
        }
        puVar9 = (ulong *)puVar3[2];
        goto code_r0x000108aa97c4;
      }
      if (uVar5 == 4) break;
      uVar5 = puVar3[4];
      if ((uVar5 != 0) && (uVar5 * 9 != -0x11)) {
        _free(puVar3[3] + uVar5 * -8 + -8);
      }
      puVar9 = (ulong *)puVar3[1];
      unaff_x23 = puVar3[2];
      if (unaff_x23 == 0) goto joined_r0x0001026a9084;
      if (*puVar9 != 0) {
        _free(puVar9[1]);
      }
      unaff_x21 = puVar9 + 0xd;
      puVar3 = puVar9 + 3;
      unaff_x30 = (undefined *)0x1026a90ec;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
      unaff_x19 = puVar9;
      unaff_x20 = puVar9;
    }
    puVar9 = (ulong *)puVar3[2];
    FUN_1026aa374(puVar9,puVar3[3]);
    unaff_x22 = (ulong *)puVar3[1];
joined_r0x0001026a9084:
    if (unaff_x22 == (ulong *)0x0) {
      return;
    }
    goto code_r0x000108aa97c4;
  }
  uVar8 = uVar5 ^ 0x8000000000000000;
  if (-1 < (long)uVar5) {
    uVar8 = 1;
  }
  switch(uVar8) {
  case 0:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if ((param_1[4] & 0x7fffffffffffffff) == 0) {
      uVar5 = param_1[8];
    }
    else {
      _free(param_1[5]);
      uVar5 = param_1[8];
    }
    if (uVar5 != 0) {
      _free(param_1[9]);
    }
    if (param_1[0xb] == 0) {
      return;
    }
    puVar9 = (ulong *)param_1[0xc];
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
      uVar5 = param_1[6];
    }
    else {
      _free(param_1[0x16]);
      uVar5 = param_1[6];
    }
    if (uVar5 != 0) {
      _free(param_1[7]);
    }
    if (param_1[9] != 0) {
      _free(param_1[10]);
    }
    if ((-0x7ffffffffffffffe < (long)param_1[0x2d]) && (param_1[0x2d] != 0)) {
      _free(param_1[0x2e]);
    }
    if ((param_1[0x18] & 0x7fffffffffffffff) == 0) {
      uVar5 = param_1[0xc];
    }
    else {
      _free(param_1[0x19]);
      uVar5 = param_1[0xc];
    }
    if (uVar5 != 0) {
      _free(param_1[0xd]);
    }
    if (param_1[0xf] != 0) {
      _free(param_1[0x10]);
    }
    func_0x0001026adf58(param_1 + 0x30);
    if ((param_1[0x1b] & 0x7fffffffffffffff) == 0) {
      if ((param_1[0x1e] & 0x7fffffffffffffff) != 0) goto code_r0x0001026ae9e0;
code_r0x0001026ae990:
      uVar5 = param_1[0x24];
      if (uVar5 != 0x8000000000000001) goto code_r0x0001026ae9f8;
code_r0x0001026aea18:
      uVar5 = param_1[0x21];
    }
    else {
      _free(param_1[0x1c]);
      if ((param_1[0x1e] & 0x7fffffffffffffff) == 0) goto code_r0x0001026ae990;
code_r0x0001026ae9e0:
      _free(param_1[0x1f]);
      uVar5 = param_1[0x24];
      if (uVar5 == 0x8000000000000001) goto code_r0x0001026aea18;
code_r0x0001026ae9f8:
      if ((uVar5 & 0x7fffffffffffffff) == 0) {
        if ((param_1[0x27] & 0x7fffffffffffffff) != 0) goto code_r0x0001026aea90;
code_r0x0001026aea0c:
        uVar5 = param_1[0x2a];
      }
      else {
        _free(param_1[0x25]);
        if ((param_1[0x27] & 0x7fffffffffffffff) == 0) goto code_r0x0001026aea0c;
code_r0x0001026aea90:
        _free(param_1[0x28]);
        uVar5 = param_1[0x2a];
      }
      if ((uVar5 & 0x7fffffffffffffff) == 0) goto code_r0x0001026aea18;
      _free(param_1[0x2b]);
      uVar5 = param_1[0x21];
    }
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      _free(param_1[0x22]);
    }
    puVar9 = (ulong *)param_1[0x13];
    unaff_x23 = param_1[0x14];
    if (unaff_x23 == 0) {
      if (param_1[0x12] == 0) {
        return;
      }
      break;
    }
    unaff_x22 = puVar9 + 0x14;
    unaff_x30 = &UNK_1026aea40;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x19 = param_1;
    unaff_x20 = puVar9;
    goto code_r0x0001026acbb0;
  case 2:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if ((long)param_1[4] < -0x7ffffffffffffffd || param_1[4] == 0) {
      return;
    }
    puVar9 = (ulong *)param_1[5];
    break;
  case 3:
  case 4:
  case 5:
  case 9:
  case 0x35:
    uVar5 = param_1[1];
    goto joined_r0x0001026ad784;
  case 6:
  case 0x24:
  case 0x28:
    goto LAB_1026acfe4;
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
    puVar9 = (ulong *)param_1[5];
    break;
  case 8:
    if (param_1[0xe] != 0) {
      _free(param_1[0xf]);
    }
    if ((param_1[0x11] & 0x7fffffffffffffff) == 0) {
      uVar5 = param_1[3];
    }
    else {
      _free(param_1[0x12]);
      uVar5 = param_1[3];
    }
    if (uVar5 != 0) {
      _free(param_1[4]);
    }
    if (param_1[6] == 0) {
      return;
    }
    puVar9 = (ulong *)param_1[7];
    break;
  case 10:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    uVar5 = param_1[0x1e];
    if (-0x7ffffffffffffffe < (long)uVar5) {
      uVar8 = param_1[0x1f];
      uVar6 = param_1[0x20];
      if (uVar6 != 0) {
        puVar10 = (undefined8 *)(uVar8 + 8);
        do {
          if (puVar10[-1] != 0) {
            _free(*puVar10);
          }
          puVar10 = puVar10 + 3;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (uVar5 != 0) {
        _free(uVar8);
      }
    }
    if (param_1[0x15] == 0x8000000000000000) {
code_r0x0001026a2a80:
      uVar5 = param_1[7];
    }
    else {
      if (param_1[0x15] != 0) {
        _free(param_1[0x16]);
      }
      if ((param_1[0x18] & 0x7fffffffffffffff) == 0) goto code_r0x0001026a2a80;
      _free(param_1[0x19]);
      uVar5 = param_1[7];
    }
    if (uVar5 != 0) {
      _free(param_1[8]);
    }
    if (param_1[10] != 0) {
      _free(param_1[0xb]);
    }
    if ((param_1[0x1b] & 0x7fffffffffffffff) == 0) {
      uVar5 = param_1[0xd];
    }
    else {
      _free(param_1[0x1c]);
      uVar5 = param_1[0xd];
    }
    if (uVar5 != 0) {
      _free(param_1[0xe]);
    }
    if ((param_1[0x10] & 0x7fffffffffffffff) == 0) {
      return;
    }
    puVar9 = (ulong *)param_1[0x11];
    break;
  case 0xb:
    if (param_1[0xd] != 0) {
      _free(param_1[0xe]);
    }
    if (param_1[0x10] == 0) {
      return;
    }
    puVar9 = (ulong *)param_1[0x11];
    break;
  case 0xc:
  case 0xe:
    puVar9 = param_1 + 1;
    if (param_1[0x15] != 0) {
      _free(param_1[0x16]);
    }
code_r0x0001026acbb0:
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar9[6] != 0) {
      _free(puVar9[7]);
    }
    uVar5 = puVar9[10];
    lVar7 = puVar9[0xb] + 1;
    uVar8 = uVar5;
    while (lVar7 = lVar7 + -1, lVar7 != 0) {
      func_0x0001026ac304(uVar8);
      uVar8 = uVar8 + 0xf8;
    }
    if (puVar9[9] != 0) {
      _free(uVar5);
    }
    if (puVar9[0xc] != 0x8000000000000000) {
      if (puVar9[0xc] != 0) {
        _free(puVar9[0xd]);
      }
      if ((puVar9[0xf] & 0x7fffffffffffffff) != 0) {
        puVar9 = (ulong *)puVar9[0x10];
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
      puVar9 = (ulong *)param_1[0xc];
      uVar5 = param_1[0xd];
    }
    else {
      _free(param_1[0xf]);
      puVar9 = (ulong *)param_1[0xc];
      uVar5 = param_1[0xd];
    }
    if (uVar5 != 0) {
      puVar3 = puVar9 + 1;
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
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
    puVar9 = (ulong *)param_1[8];
    break;
  case 0x11:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if ((param_1[10] & 0x7fffffffffffffff) == 0) {
      puVar9 = (ulong *)param_1[8];
      uVar5 = param_1[9];
    }
    else {
      _free(param_1[0xb]);
      puVar9 = (ulong *)param_1[8];
      uVar5 = param_1[9];
    }
    if (uVar5 != 0) {
      puVar3 = puVar9 + 1;
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (param_1[7] == 0) {
      return;
    }
    break;
  case 0x12:
  case 0x15:
    func_0x0001026ac304();
    if (param_1[0x20] != 0) {
      _free(param_1[0x21]);
    }
    if (param_1[0x23] == 0) {
      return;
    }
    puVar9 = (ulong *)param_1[0x24];
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
      uVar5 = param_1[0xd];
    }
    else {
      _free(param_1[0xb]);
      uVar5 = param_1[0xd];
    }
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      _free(param_1[0xe]);
    }
    goto DAT_1026aeca0;
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
      uVar5 = param_1[0xd];
    }
    else {
      _free(param_1[0xb]);
      uVar5 = param_1[0xd];
    }
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      _free(param_1[0xe]);
    }
DAT_1026aeca0:
    uVar8 = param_1[0x11];
    uVar5 = uVar8 ^ 0x8000000000000000;
    if (-1 < (long)uVar8) {
      uVar5 = 4;
    }
    if ((long)uVar5 < 2) {
      if (uVar5 != 0) {
        if (uVar5 == 1) {
          if (param_1[0x12] != 0) {
            _free(param_1[0x13]);
          }
          uVar5 = param_1[0x16];
          uVar8 = param_1[0x17];
          if (uVar8 != 0) {
            puVar10 = (undefined8 *)(uVar5 + 8);
            do {
              if (puVar10[-1] != 0) {
                _free(*puVar10);
              }
              puVar10 = puVar10 + 3;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          if (param_1[0x15] != 0) {
            _free(uVar5);
          }
          if (param_1[0x18] == 0) {
            return;
          }
          puVar9 = (ulong *)param_1[0x19];
          break;
        }
code_r0x0001026aee08:
        if ((param_1[0x12] & 0x7fffffffffffffff) != 0) {
          _free(param_1[0x13]);
        }
        puVar3 = param_1 + 0x15;
SUB_1026a5ca8:
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
        uVar5 = *puVar3;
        if (uVar5 != 0x8000000000000001) {
          if (uVar5 != 0x8000000000000000) {
            uVar8 = puVar3[1];
            uVar6 = puVar3[2];
            if (uVar6 != 0) {
              puVar10 = (undefined8 *)(uVar8 + 8);
              do {
                if (puVar10[-1] != 0) {
                  _free(*puVar10);
                }
                puVar10 = puVar10 + 3;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
            if (uVar5 != 0) {
              _free(uVar8);
            }
          }
          uVar5 = puVar3[3];
          if (uVar5 != 0x8000000000000000) {
            uVar8 = puVar3[4];
            uVar6 = puVar3[5];
            if (uVar6 != 0) {
              puVar10 = (undefined8 *)(uVar8 + 8);
              do {
                if (puVar10[-1] != 0) {
                  _free(*puVar10);
                }
                puVar10 = puVar10 + 3;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
            if (uVar5 != 0) {
              _free(uVar8);
            }
          }
          if (puVar3[6] != 0x8000000000000000) {
            *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
            *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
            *(undefined8 *)((long)register0x00000008 + -0x40) =
                 *(undefined8 *)((long)register0x00000008 + -0x40);
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
            puVar9 = (ulong *)puVar3[7];
            puVar1 = puVar9;
            for (uVar5 = puVar3[8]; uVar5 != 0; uVar5 = uVar5 - 1) {
              uVar8 = *puVar1;
              lVar7 = uVar8 + 0x7ffffffffffffffb;
              if (uVar8 < 0x8000000000000005) {
                lVar7 = 2;
              }
              if ((lVar7 == 0) || (lVar7 == 1)) {
                uVar8 = puVar1[1];
joined_r0x0001026a509c:
                if (uVar8 != 0) {
                  lVar7 = 0x10;
LAB_1026a50a4:
                  _free(*(undefined8 *)((long)puVar1 + lVar7));
                }
              }
              else {
                uVar6 = uVar8 ^ 0x8000000000000000;
                if (-1 < (long)uVar8) {
                  uVar6 = 5;
                }
                if (uVar6 < 5) {
                  if (uVar6 == 2) {
                    uVar8 = puVar1[1] & 0x7fffffffffffffff;
                    goto joined_r0x0001026a509c;
                  }
                }
                else {
                  if (uVar8 != 0) {
                    _free(puVar1[1]);
                  }
                  if ((puVar1[3] & 0x7fffffffffffffff) != 0) {
                    lVar7 = 0x20;
                    goto LAB_1026a50a4;
                  }
                }
              }
              puVar1 = puVar1 + 7;
            }
            if (puVar3[6] == 0) {
              return;
            }
            break;
          }
        }
        return;
      }
code_r0x0001026aed78:
      if (param_1[0x12] != 0) {
        _free(param_1[0x13]);
      }
      if (param_1[0x15] == 0) {
        return;
      }
      puVar9 = (ulong *)param_1[0x16];
      break;
    }
    if (uVar5 == 2) {
      if (param_1[0x12] != 0) {
        _free(param_1[0x13]);
      }
      puVar9 = (ulong *)param_1[0x16];
      uVar5 = param_1[0x17];
      if (uVar5 != 0) {
        puVar3 = puVar9 + 1;
        do {
          if (puVar3[-1] != 0) {
            _free(*puVar3);
          }
          puVar3 = puVar3 + 3;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (param_1[0x15] == 0) {
        return;
      }
      break;
    }
    if (uVar5 == 3) goto code_r0x0001026aed78;
    if (uVar5 != 4) goto code_r0x0001026aee08;
    if (uVar8 != 0) {
      _free(param_1[0x12]);
    }
    if (param_1[0x14] != 0) {
      _free(param_1[0x15]);
    }
    if ((param_1[0x17] & 0x7fffffffffffffff) == 0) {
      if ((param_1[0x1a] & 0x7fffffffffffffff) != 0) goto code_r0x0001026aee44;
code_r0x0001026aed1c:
      uVar5 = param_1[0x1d];
    }
    else {
      _free(param_1[0x18]);
      if ((param_1[0x1a] & 0x7fffffffffffffff) == 0) goto code_r0x0001026aed1c;
code_r0x0001026aee44:
      _free(param_1[0x1b]);
      uVar5 = param_1[0x1d];
    }
    if ((uVar5 & 0x7fffffffffffffff) == 0) {
      return;
    }
    puVar9 = (ulong *)param_1[0x1e];
    break;
  case 0x16:
    if (param_1[0x19] != 0) {
      _free(param_1[0x1a]);
    }
    if (param_1[0x1c] != 0) {
      _free(param_1[0x1d]);
    }
    lVar7 = 2;
    if (1 < param_1[1]) {
      lVar7 = param_1[1] - 2;
    }
    switch(lVar7) {
    case 0:
      if ((param_1[8] & 0x7fffffffffffffff) != 0) {
        _free(param_1[9]);
      }
      if (param_1[2] != 0) {
        _free(param_1[3]);
      }
      puVar9 = (ulong *)param_1[6];
      puVar3 = puVar9;
      for (uVar5 = param_1[7]; uVar5 != 0; uVar5 = uVar5 - 1) {
        uVar6 = *puVar3;
        uVar8 = uVar6 ^ 0x8000000000000000;
        if (-1 < (long)uVar6) {
          uVar8 = 1;
        }
        if ((uVar8 == 0) || (uVar8 != 1)) {
          if (puVar3[1] != 0) {
            lVar7 = 0x10;
            goto code_r0x0001026a2eec;
          }
        }
        else if (uVar6 != 0) {
          lVar7 = 8;
code_r0x0001026a2eec:
          _free(*(undefined8 *)((long)puVar3 + lVar7));
        }
        puVar3 = puVar3 + 4;
      }
      uVar5 = param_1[5];
      goto joined_r0x0001026a3494;
    case 1:
      if (param_1[2] != 0) {
        _free(param_1[3]);
      }
      uVar5 = param_1[6];
      uVar8 = param_1[7];
      if (uVar8 != 0) {
        puVar10 = (undefined8 *)(uVar5 + 8);
        do {
          if (puVar10[-1] != 0) {
            _free(*puVar10);
          }
          puVar10 = puVar10 + 3;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (param_1[5] != 0) {
        _free(uVar5);
      }
      uVar5 = param_1[8];
      if (uVar5 != 0x8000000000000000) {
        uVar8 = param_1[9];
        uVar6 = param_1[10];
        if (uVar6 != 0) {
          puVar10 = (undefined8 *)(uVar8 + 0x10);
          do {
            if (puVar10[-1] != 0) {
              _free(*puVar10);
            }
            puVar10 = puVar10 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (uVar5 != 0) {
          _free(uVar8);
        }
      }
      if ((param_1[0xb] & 0x7fffffffffffffff) != 0) {
        puVar9 = (ulong *)param_1[0xc];
        goto code_r0x000108aa97c4;
      }
      break;
    case 2:
      if ((param_1[0x12] & 0x7fffffffffffffff) == 0) {
        if ((param_1[0x15] & 0x7fffffffffffffff) != 0) goto code_r0x0001026a32f0;
code_r0x0001026a30a8:
        uVar5 = param_1[4];
        uVar8 = param_1[5];
      }
      else {
        _free(param_1[0x13]);
        if ((param_1[0x15] & 0x7fffffffffffffff) == 0) goto code_r0x0001026a30a8;
code_r0x0001026a32f0:
        _free(param_1[0x16]);
        uVar5 = param_1[4];
        uVar8 = param_1[5];
      }
      if (uVar8 != 0) {
        puVar10 = (undefined8 *)(uVar5 + 8);
        do {
          if (puVar10[-1] != 0) {
            _free(*puVar10);
          }
          puVar10 = puVar10 + 3;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (param_1[3] != 0) {
        _free(uVar5);
      }
      if ((param_1[6] & 0x7fffffffffffffff) != 0) {
        _free(param_1[7]);
      }
      if (param_1[0xc] != 0) {
        func_0x0001026a38a8();
      }
      if ((param_1[9] & 0x7fffffffffffffff) != 0) {
        puVar9 = (ulong *)param_1[10];
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
        uVar5 = param_1[0xf];
code_r0x0001026a3398:
        _free(uVar5);
      }
      goto code_r0x0001026a339c;
    case 4:
      if ((param_1[5] & 0x7fffffffffffffff) == 0) {
        if ((param_1[8] & 0x7fffffffffffffff) != 0) goto code_r0x0001026a32b4;
code_r0x0001026a2f84:
        if ((param_1[0xb] & 0x7fffffffffffffff) != 0) goto code_r0x0001026a32c8;
code_r0x0001026a2f90:
        uVar5 = param_1[2];
      }
      else {
        _free(param_1[6]);
        if ((param_1[8] & 0x7fffffffffffffff) == 0) goto code_r0x0001026a2f84;
code_r0x0001026a32b4:
        _free(param_1[9]);
        if ((param_1[0xb] & 0x7fffffffffffffff) == 0) goto code_r0x0001026a2f90;
code_r0x0001026a32c8:
        _free(param_1[0xc]);
        uVar5 = param_1[2];
      }
      if (uVar5 != 0) {
        _free(param_1[3]);
      }
      puVar3 = param_1 + 0xe;
      goto SUB_1026a9020;
    case 5:
      if (param_1[7] != 0) {
        _free(param_1[8]);
      }
      if (param_1[2] == 0) {
code_r0x0001026a326c:
        uVar5 = param_1[3];
joined_r0x0001026a348c:
        if (uVar5 == 0) {
          return;
        }
        puVar9 = (ulong *)param_1[4];
        goto code_r0x000108aa97c4;
      }
      puVar9 = (ulong *)param_1[4];
      puVar3 = puVar9;
      for (uVar5 = param_1[5]; uVar5 != 0; uVar5 = uVar5 - 1) {
        uVar6 = *puVar3;
        uVar8 = uVar6 ^ 0x8000000000000000;
        if (-1 < (long)uVar6) {
          uVar8 = 1;
        }
        if ((uVar8 == 0) || (uVar8 != 1)) {
          if (puVar3[1] != 0) {
            lVar7 = 0x10;
            goto code_r0x0001026a2ff0;
          }
        }
        else if (uVar6 != 0) {
          lVar7 = 8;
code_r0x0001026a2ff0:
          _free(*(undefined8 *)((long)puVar3 + lVar7));
        }
        puVar3 = puVar3 + 4;
      }
      goto code_r0x0001026a31ec;
    case 6:
      if ((param_1[0xb] & 0x7fffffffffffffff) == 0) {
        if ((param_1[0xe] & 0x7fffffffffffffff) != 0) goto code_r0x0001026a3384;
code_r0x0001026a315c:
        uVar5 = param_1[2];
      }
      else {
        _free(param_1[0xc]);
        if ((param_1[0xe] & 0x7fffffffffffffff) == 0) goto code_r0x0001026a315c;
code_r0x0001026a3384:
        _free(param_1[0xf]);
        uVar5 = param_1[2];
      }
      if (uVar5 != 0) {
        uVar5 = param_1[3];
        goto code_r0x0001026a3398;
      }
code_r0x0001026a339c:
      if (param_1[5] != 0) {
        uVar5 = param_1[6];
code_r0x0001026a33a8:
        _free(uVar5);
      }
code_r0x0001026a33ac:
      if (param_1[8] != 0) {
        puVar9 = (ulong *)param_1[9];
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
      if (param_1[2] == 0) goto code_r0x0001026a326c;
      puVar9 = (ulong *)param_1[4];
      puVar3 = puVar9;
      for (uVar5 = param_1[5]; uVar5 != 0; uVar5 = uVar5 - 1) {
        uVar6 = *puVar3;
        uVar8 = uVar6 ^ 0x8000000000000000;
        if (-1 < (long)uVar6) {
          uVar8 = 1;
        }
        if ((uVar8 == 0) || (uVar8 != 1)) {
          if (puVar3[1] != 0) {
            lVar7 = 0x10;
            goto code_r0x0001026a31b0;
          }
        }
        else if (uVar6 != 0) {
          lVar7 = 8;
code_r0x0001026a31b0:
          _free(*(undefined8 *)((long)puVar3 + lVar7));
        }
        puVar3 = puVar3 + 4;
      }
code_r0x0001026a31ec:
      uVar5 = param_1[3];
      goto joined_r0x0001026a3494;
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
      puVar9 = (ulong *)param_1[9];
      FUN_1026aa374(puVar9,param_1[10]);
      uVar5 = param_1[8];
      goto joined_r0x0001026a3494;
    case 9:
      if ((param_1[9] & 0x7fffffffffffffff) == 0) {
        if ((param_1[0xc] & 0x7fffffffffffffff) != 0) goto code_r0x0001026a33e0;
code_r0x0001026a3210:
        uVar5 = param_1[2];
      }
      else {
        _free(param_1[10]);
        if ((param_1[0xc] & 0x7fffffffffffffff) == 0) goto code_r0x0001026a3210;
code_r0x0001026a33e0:
        _free(param_1[0xd]);
        uVar5 = param_1[2];
      }
      if (uVar5 == 4) {
        return;
      }
      if (1 < (long)uVar5) {
        if (uVar5 != 2) {
          return;
        }
        if ((param_1[3] & 0x7fffffffffffffff) != 0) {
          _free(param_1[4]);
        }
        if ((param_1[6] & 0x7fffffffffffffff) == 0) {
          return;
        }
        puVar9 = (ulong *)param_1[7];
        goto code_r0x000108aa97c4;
      }
      if (uVar5 != 0) {
        uVar5 = param_1[3] & 0x7fffffffffffffff;
        goto joined_r0x0001026a348c;
      }
      if ((param_1[3] & 0x7fffffffffffffff) != 0) {
        _free(param_1[4]);
      }
      uVar5 = param_1[6];
      if (uVar5 == 0x8000000000000000) {
        return;
      }
      puVar9 = (ulong *)param_1[7];
      uVar8 = param_1[8];
      if (uVar8 != 0) {
        puVar3 = puVar9 + 1;
        do {
          if (puVar3[-1] != 0) {
            _free(*puVar3);
          }
          puVar3 = puVar3 + 3;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
joined_r0x0001026a3494:
      if (uVar5 != 0) goto code_r0x000108aa97c4;
      break;
    case 10:
      if (param_1[2] != 0) {
        _free(param_1[3]);
      }
      if (param_1[5] != 0) {
        _free(param_1[6]);
      }
      if ((param_1[0xb] & 0x7fffffffffffffff) != 0) {
        uVar5 = param_1[0xc];
        goto code_r0x0001026a33a8;
      }
      goto code_r0x0001026a33ac;
    case 0xb:
      uVar5 = param_1[2];
      goto joined_r0x0001026a2fc0;
    case 0xd:
      uVar5 = param_1[2] & 0x7fffffffffffffff;
joined_r0x0001026a2fc0:
      if (uVar5 != 0) {
        puVar9 = (ulong *)param_1[3];
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
    puVar9 = (ulong *)param_1[0xb];
    break;
  case 0x19:
  case 0x1a:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] == 0) {
      return;
    }
    puVar9 = (ulong *)param_1[5];
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
    puVar9 = (ulong *)param_1[8];
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
    puVar9 = (ulong *)param_1[0xe];
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
    puVar9 = (ulong *)param_1[0xb];
    uVar5 = param_1[0xc];
    if (uVar5 != 0) {
      puVar3 = puVar9 + 4;
      do {
        if (puVar3[-4] != 0) {
          _free(puVar3[-3]);
        }
        if (puVar3[2] + 0x7fffffffffffffff < 2 || (puVar3[2] & 0x7fffffffffffffff) == 0) {
          uVar8 = puVar3[-1];
        }
        else {
          _free(puVar3[3]);
          uVar8 = puVar3[-1];
        }
        if (uVar8 != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 9;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
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
    puVar9 = (ulong *)param_1[5];
    break;
  case 0x25:
    if ((param_1[0xb] & 0x7fffffffffffffff) == 0) {
      if ((param_1[0xe] & 0x7fffffffffffffff) != 0) goto code_r0x0001026a3b38;
code_r0x0001026a3b00:
      if ((long)param_1[0x11] < -0x7ffffffffffffffe || param_1[0x11] == 0) {
        return;
      }
    }
    else {
      _free(param_1[0xc]);
      if ((param_1[0xe] & 0x7fffffffffffffff) == 0) goto code_r0x0001026a3b00;
code_r0x0001026a3b38:
      _free(param_1[0xf]);
      if ((long)param_1[0x11] < -0x7ffffffffffffffe || param_1[0x11] == 0) {
        return;
      }
    }
    puVar9 = (ulong *)param_1[0x12];
    break;
  case 0x26:
    puVar9 = (ulong *)param_1[2];
    uVar5 = param_1[3];
    if (uVar5 != 0) {
      uVar8 = 0;
      do {
        puVar3 = puVar9 + uVar8 * 0x4e;
        if (*puVar3 != 0) {
          _free(puVar3[1]);
        }
        if (puVar3[3] != 0) {
          _free(puVar3[4]);
        }
        if ((puVar3[9] & 0x7fffffffffffffff) == 0) {
          if ((puVar3[0xc] & 0x7fffffffffffffff) != 0) goto code_r0x0001026af63c;
code_r0x0001026af5d8:
          if ((puVar3[0xf] & 0x7fffffffffffffff) != 0) goto code_r0x0001026af650;
code_r0x0001026af5e4:
          if ((puVar3[0x12] & 0x7fffffffffffffff) != 0) goto code_r0x0001026af664;
code_r0x0001026af5f0:
          func_0x0001026a3b98(puVar3 + 0x18);
          func_0x0001026a3c5c(puVar3 + 0x28);
          uVar6 = puVar3[0x47];
        }
        else {
          _free(puVar3[10]);
          if ((puVar3[0xc] & 0x7fffffffffffffff) == 0) goto code_r0x0001026af5d8;
code_r0x0001026af63c:
          _free(puVar3[0xd]);
          if ((puVar3[0xf] & 0x7fffffffffffffff) == 0) goto code_r0x0001026af5e4;
code_r0x0001026af650:
          _free(puVar3[0x10]);
          if ((puVar3[0x12] & 0x7fffffffffffffff) == 0) goto code_r0x0001026af5f0;
code_r0x0001026af664:
          _free(puVar3[0x13]);
          func_0x0001026a3b98(puVar3 + 0x18);
          func_0x0001026a3c5c(puVar3 + 0x28);
          uVar6 = puVar3[0x47];
        }
        if (uVar6 != 0) {
          func_0x0001026a38a8(puVar3 + 0x47);
        }
        if ((puVar3[0x15] & 0x7fffffffffffffff) == 0) {
          uVar6 = puVar3[7];
          uVar4 = puVar3[8];
        }
        else {
          _free(puVar3[0x16]);
          uVar6 = puVar3[7];
          uVar4 = puVar3[8];
        }
        if (uVar4 != 0) {
          puVar10 = (undefined8 *)(uVar6 + 8);
          do {
            if (puVar10[-1] != 0) {
              _free(*puVar10);
            }
            puVar10 = puVar10 + 3;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (puVar3[6] != 0) {
          _free(uVar6);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar5);
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
    puVar9 = (ulong *)param_1[8];
    break;
  case 0x29:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    puVar9 = (ulong *)param_1[5];
    uVar5 = param_1[6];
    if (uVar5 != 0) {
      puVar3 = puVar9 + 1;
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
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
    puVar9 = (ulong *)param_1[0xb];
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
    puVar9 = (ulong *)param_1[5];
    break;
  case 0x2f:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] == 0) {
      return;
    }
    puVar9 = (ulong *)param_1[5];
    break;
  case 0x30:
    if ((param_1[4] & 0x7fffffffffffffff) == 0) {
      uVar5 = param_1[1];
    }
    else {
      _free(param_1[5]);
      uVar5 = param_1[1];
    }
    if (uVar5 == 0) {
      return;
    }
    puVar9 = (ulong *)param_1[2];
    break;
  case 0x33:
    if (param_1[6] != 0) {
      _free(param_1[7]);
    }
    if ((param_1[9] & 0x7fffffffffffffff) == 0) {
      uVar5 = param_1[0xc];
    }
    else {
      _free(param_1[10]);
      uVar5 = param_1[0xc];
    }
    if ((uVar5 & 0x7fffffffffffffff) == 0) {
      return;
    }
    puVar9 = (ulong *)param_1[0xd];
    break;
  case 0x34:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    puVar9 = (ulong *)param_1[8];
    uVar5 = param_1[9];
    if (uVar5 != 0) {
      puVar3 = puVar9 + 6;
      do {
        if (puVar3[-6] != 0) {
          _free(puVar3[-5]);
        }
        if (puVar3[-3] != 0) {
          _free(puVar3[-2]);
        }
        if (*puVar3 != 0) {
          _free(puVar3[1]);
        }
        if ((puVar3[3] & 0x7fffffffffffffff) != 0) {
          _free(puVar3[4]);
        }
        puVar3 = puVar3 + 0xd;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (param_1[7] == 0) {
      return;
    }
    break;
  case 0x37:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    puVar3 = param_1 + 4;
    goto SUB_1026a9020;
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
    puVar9 = (ulong *)param_1[8];
    break;
  case 0x3e:
    puVar9 = (ulong *)param_1[2];
    uVar5 = param_1[3];
    if (uVar5 != 0) {
      puVar3 = puVar9 + 1;
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (param_1[1] == 0) {
      return;
    }
    break;
  case 0x3f:
    uVar5 = param_1[1] & 0x7fffffffffffffff;
joined_r0x0001026ad784:
    if (uVar5 == 0) {
LAB_1026acfe4:
      return;
    }
    puVar9 = (ulong *)param_1[2];
    break;
  default:
    if ((param_1[1] & 0x7fffffffffffffff) == 0) {
      uVar5 = param_1[4];
    }
    else {
      _free(param_1[2]);
      uVar5 = param_1[4];
    }
    if ((uVar5 & 0x7fffffffffffffff) == 0) {
      return;
    }
    puVar9 = (ulong *)param_1[5];
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar9);
  return;
}

