
/* WARNING: Possible PIC construction at 0x000100cadc24: Changing call to branch */

void FUN_100e40940(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x19;
  long unaff_x20;
  long *plVar8;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar9;
  long lVar10;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  long in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar8 = (long *)param_1[0x34];
  if (plVar8 != (long *)0x0) {
    uVar7 = plVar8[6];
    do {
      uVar6 = uVar7;
      if (((uint)uVar6 >> 2 & 1) != 0) goto LAB_100e4097c;
      uVar7 = plVar8[6];
    } while (uVar7 != uVar6);
    plVar8[6] = uVar6 | 2;
LAB_100e4097c:
    if ((uVar6 & 5) == 1) {
      (**(code **)(plVar8[4] + 0x10))(plVar8[5]);
    }
    lVar2 = *plVar8;
    *plVar8 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5b4db60789287d2eE(param_1 + 0x34);
    }
  }
  uVar7 = *param_1 + 0x8000000000000001U & *param_1 >> 0x3f;
  if ((long)uVar7 < 4) {
    if (1 < (long)uVar7) {
      if (uVar7 == 2) {
        if (param_1[0xd] != -0x8000000000000000 && param_1[0xd] != 0) {
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
        puVar4 = (ulong *)param_1[0xb];
        puVar3 = puVar4;
        for (lVar2 = param_1[0xc]; lVar2 != 0; lVar2 = lVar2 + -1) {
          FUN_100e4b8ec(puVar3);
          puVar3 = puVar3 + 0xd;
        }
        if (param_1[10] == 0) {
          return;
        }
        goto code_r0x000108aa97c4;
      }
      if (uVar7 != 3) goto LAB_100e45d20;
      if ((param_1[0x1f] != -0x8000000000000000) && (param_1[0x1f] != 0)) {
        _free(param_1[0x20]);
      }
      if (param_1[1] != 0) {
        _free(param_1[2]);
      }
      if ((param_1[7] != -0x8000000000000000) && (param_1[7] != 0)) {
        _free(param_1[8]);
      }
      if (param_1[4] != 0) {
        _free(param_1[5]);
      }
      lVar2 = param_1[10];
      if (lVar2 == -0x8000000000000000) {
        if (param_1[0x14] != -0x7ffffffffffffffb) {
          FUN_100de6690();
        }
        if (param_1[0xb] != 0) {
          _free(param_1[0xc]);
        }
        if (param_1[0xe] != 0) {
          _free(param_1[0xf]);
        }
        if (param_1[0x11] == 0) {
          return;
        }
        puVar4 = (ulong *)param_1[0x12];
        goto code_r0x000108aa97c4;
      }
      if (param_1[0x16] != -0x7ffffffffffffffb) {
        FUN_100de6690();
      }
      if (lVar2 != 0) {
        _free(param_1[0xb]);
      }
      if (param_1[0xd] == -0x8000000000000000 || param_1[0xd] == 0) {
        lVar2 = param_1[0x13];
        if (lVar2 == 0) goto LAB_100e5d38c;
LAB_100e5d360:
        lStack_88 = param_1[0x14];
        uStack_98 = 0;
        uStack_78 = 0;
        uStack_a0 = 1;
        lStack_90 = lVar2;
        uStack_80 = uStack_a0;
        lStack_70 = lVar2;
        lStack_68 = lStack_88;
      }
      else {
        _free(param_1[0xe]);
        lVar2 = param_1[0x13];
        if (lVar2 != 0) goto LAB_100e5d360;
LAB_100e5d38c:
        uStack_a0 = 0;
        uStack_80 = uStack_a0;
      }
      while (FUN_100f3aeb8(&stack0xffffffffffffffa8,&uStack_a0), in_stack_ffffffffffffffa8 != 0) {
        lVar2 = in_stack_ffffffffffffffa8 + in_stack_ffffffffffffffb8 * 0x18;
        if (*(long *)(lVar2 + 8) != 0) {
          _free(*(undefined8 *)(lVar2 + 0x10));
        }
        func_0x000100e7d17c(in_stack_ffffffffffffffa8 + in_stack_ffffffffffffffb8 * 0x88 + 0x110);
      }
      lVar2 = param_1[0x10];
      if (lVar2 == -0x8000000000000000) {
        return;
      }
      puVar4 = (ulong *)param_1[0x11];
      lVar5 = param_1[0x12];
      if (lVar5 != 0) {
        puVar3 = puVar4 + 1;
        do {
          if (puVar3[-1] != 0) {
            _free(*puVar3);
          }
          puVar3 = puVar3 + 3;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      if (lVar2 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    if (uVar7 == 0) {
      if (param_1[0x31] != -0x8000000000000000 && param_1[0x31] != 0) {
        _free(param_1[0x32]);
      }
      puVar1 = &stack0xffffffffffffffa0;
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
      unaff_x20 = -0x8000000000000000;
      if (param_1[9] == -0x8000000000000000 || param_1[9] == 0) {
        lVar2 = param_1[0xc];
      }
      else {
        _free(param_1[10]);
        lVar2 = param_1[0xc];
      }
      if ((lVar2 != -0x8000000000000000) && (lVar2 != 0)) {
        _free(param_1[0xd]);
      }
      if ((param_1[0xf] & 0x7fffffffffffffffU) == 0) {
        lVar2 = param_1[0x13];
      }
      else {
        _free(param_1[0x10]);
        lVar2 = param_1[0x13];
      }
      if ((lVar2 != -0x8000000000000000) && (lVar2 != 0)) {
        _free(param_1[0x14]);
      }
      if ((param_1[0x16] & 0x7fffffffffffffffU) == 0) {
        unaff_x22 = param_1[0x19];
      }
      else {
        _free(param_1[0x17]);
        unaff_x22 = param_1[0x19];
      }
      if (unaff_x22 != -0x8000000000000000) {
        unaff_x20 = param_1[0x1a];
        lVar2 = unaff_x20;
        for (lVar5 = param_1[0x1b]; lVar5 != 0; lVar5 = lVar5 + -1) {
          FUN_100e4af0c(lVar2);
          lVar2 = lVar2 + 0x50;
          unaff_x21 = lVar2;
        }
        unaff_x23 = 0;
        if (unaff_x22 != 0) {
          _free(unaff_x20);
        }
      }
      if (param_1[0x25] == -0x7ffffffffffffffe) {
        lVar2 = param_1[0x1c];
        if (lVar2 != -0x8000000000000000) {
          lVar5 = param_1[0x1d];
          lVar10 = param_1[0x1e];
          if (lVar10 != 0) {
            puVar9 = (undefined8 *)(lVar5 + 8);
            do {
              if (puVar9[-1] != 0) {
                _free(*puVar9);
              }
              puVar9 = puVar9 + 3;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
          if (lVar2 != 0) {
            _free(lVar5);
          }
        }
        lVar2 = param_1[0x1f];
        if (lVar2 != -0x8000000000000000) {
          lVar5 = param_1[0x20];
          lVar10 = param_1[0x21];
          if (lVar10 != 0) {
            puVar9 = (undefined8 *)(lVar5 + 8);
            do {
              if (puVar9[-1] != 0) {
                _free(*puVar9);
              }
              puVar9 = puVar9 + 4;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
          if (lVar2 != 0) {
            _free(lVar5);
          }
        }
        lVar2 = param_1[0x22];
        if (lVar2 != -0x8000000000000000) {
          puVar4 = (ulong *)param_1[0x23];
          lVar5 = param_1[0x24];
          if (lVar5 != 0) {
            lVar10 = 0;
            do {
              puVar3 = puVar4 + lVar10 * 4;
              uVar6 = *puVar3;
              uVar7 = uVar6 ^ 0x8000000000000000;
              if (-1 < (long)uVar6) {
                uVar7 = 3;
              }
              if (uVar7 == 3) {
                if (uVar6 != 0) {
                  uVar7 = puVar3[1];
LAB_100cadce8:
                  _free(uVar7);
                }
              }
              else if (uVar7 == 2) {
                uVar7 = puVar3[2];
                uVar6 = puVar3[3];
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
                if (puVar3[1] != 0) goto LAB_100cadce8;
              }
              lVar10 = lVar10 + 1;
            } while (lVar10 != lVar5);
          }
          if (lVar2 != 0) goto code_r0x000108aa97c4;
        }
        return;
      }
      plVar8 = param_1 + 0x25;
      unaff_x30 = 0x100cadc28;
SUB_100d127fc:
      *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
      *(long *)(puVar1 + -0x30) = unaff_x22;
      *(long *)(puVar1 + -0x28) = unaff_x21;
      *(long *)(puVar1 + -0x20) = unaff_x20;
      *(long **)(puVar1 + -0x18) = param_1;
      *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
      *(undefined8 *)(puVar1 + -8) = unaff_x30;
      lVar2 = *plVar8;
      if (lVar2 == -0x7fffffffffffffff) {
        return;
      }
      if (lVar2 != -0x8000000000000000) {
        lVar5 = plVar8[1];
        lVar10 = plVar8[2];
        if (lVar10 != 0) {
          puVar9 = (undefined8 *)(lVar5 + 8);
          do {
            if (puVar9[-1] != 0) {
              _free(*puVar9);
            }
            puVar9 = puVar9 + 3;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        if (lVar2 != 0) {
          _free(lVar5);
        }
      }
      lVar2 = plVar8[3];
      if (lVar2 != -0x8000000000000000) {
        lVar5 = plVar8[4];
        lVar10 = plVar8[5];
        if (lVar10 != 0) {
          puVar9 = (undefined8 *)(lVar5 + 8);
          do {
            if (puVar9[-1] != 0) {
              _free(*puVar9);
            }
            puVar9 = puVar9 + 3;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        if (lVar2 != 0) {
          _free(lVar5);
        }
      }
      if (plVar8[6] == -0x8000000000000000) {
        return;
      }
      *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar1 + -0x48) = unaff_x25;
      *(undefined8 *)(puVar1 + -0x40) = *(undefined8 *)(puVar1 + -0x40);
      *(undefined8 *)(puVar1 + -0x38) = *(undefined8 *)(puVar1 + -0x38);
      *(undefined8 *)(puVar1 + -0x30) = *(undefined8 *)(puVar1 + -0x30);
      *(undefined8 *)(puVar1 + -0x28) = *(undefined8 *)(puVar1 + -0x28);
      *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
      *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
      *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
      *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
      puVar4 = (ulong *)plVar8[7];
      puVar3 = puVar4;
      for (lVar2 = plVar8[8]; lVar2 != 0; lVar2 = lVar2 + -1) {
        uVar7 = *puVar3;
        lVar5 = uVar7 + 0x7ffffffffffffffb;
        if (uVar7 < 0x8000000000000005) {
          lVar5 = 2;
        }
        if ((lVar5 == 0) || (lVar5 == 1)) {
          uVar7 = puVar3[1];
joined_r0x000100ce3ce4:
          if (uVar7 != 0) {
            lVar5 = 0x10;
LAB_100ce3cec:
            _free(*(undefined8 *)((long)puVar3 + lVar5));
          }
        }
        else {
          uVar6 = uVar7 ^ 0x8000000000000000;
          if (-1 < (long)uVar7) {
            uVar6 = 5;
          }
          if (uVar6 < 5) {
            if (uVar6 == 2) {
              uVar7 = puVar3[1] & 0x7fffffffffffffff;
              goto joined_r0x000100ce3ce4;
            }
          }
          else {
            if (uVar7 != 0) {
              _free(puVar3[1]);
            }
            if ((puVar3[3] & 0x7fffffffffffffff) != 0) {
              lVar5 = 0x20;
              goto LAB_100ce3cec;
            }
          }
        }
        puVar3 = puVar3 + 7;
      }
      if (plVar8[6] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    if (uVar7 == 1) {
      if ((param_1[0x11] != -0x8000000000000000) && (param_1[0x11] != 0)) {
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
      if (param_1[10] == -0x8000000000000000 || param_1[10] == 0) {
        lVar2 = param_1[0xd];
      }
      else {
        _free(param_1[0xb]);
        lVar2 = param_1[0xd];
      }
      if ((lVar2 == -0x8000000000000000) || (lVar2 == 0)) {
        return;
      }
      puVar4 = (ulong *)param_1[0xe];
      goto code_r0x000108aa97c4;
    }
  }
  else if ((long)uVar7 < 6) {
    if (uVar7 == 4) {
      if (param_1[0x1c] != -0x8000000000000000 && param_1[0x1c] != 0) {
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
      if ((param_1[0xd] != -0x8000000000000000) && (param_1[0xd] != 0)) {
        _free(param_1[0xe]);
      }
      plVar8 = param_1 + 0x10;
      puVar1 = (undefined1 *)register0x00000008;
      param_1 = unaff_x19;
      goto SUB_100d127fc;
    }
    if (uVar7 == 5) {
      if ((param_1[0x19] != -0x8000000000000000) && (param_1[0x19] != 0)) {
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
      if (param_1[0xd] == -0x8000000000000000 || param_1[0xd] == 0) {
        lVar2 = param_1[10];
      }
      else {
        _free(param_1[0xe]);
        lVar2 = param_1[10];
      }
      if (lVar2 != 0) {
        _free(param_1[0xb]);
      }
      uVar6 = param_1[0x10];
      uVar7 = uVar6 ^ 0x8000000000000000;
      if (-1 < (long)uVar6) {
        uVar7 = 5;
      }
      if (uVar7 < 3) {
        return;
      }
      if (uVar7 == 3) {
        if (param_1[0x11] == 0) {
          return;
        }
        puVar4 = (ulong *)param_1[0x12];
      }
      else if (uVar7 == 4) {
        puVar4 = (ulong *)param_1[0x12];
        lVar2 = param_1[0x13] + 1;
        puVar3 = puVar4;
        while (lVar2 = lVar2 + -1, lVar2 != 0) {
          FUN_100de6690(puVar3);
          puVar3 = puVar3 + 9;
        }
        if (param_1[0x11] == 0) {
          return;
        }
      }
      else {
        lVar2 = param_1[0x14];
        if ((lVar2 != 0) && (lVar2 * 9 != -0x11)) {
          _free(param_1[0x13] + lVar2 * -8 + -8);
        }
        puVar4 = (ulong *)param_1[0x11];
        lVar2 = param_1[0x12] + 1;
        puVar3 = puVar4;
        while (lVar2 = lVar2 + -1, lVar2 != 0) {
          if (*puVar3 != 0) {
            _free(puVar3[1]);
          }
          FUN_100de6690(puVar3 + 3);
          puVar3 = puVar3 + 0xd;
        }
        if (param_1[0x10] == 0) {
          return;
        }
      }
      goto code_r0x000108aa97c4;
    }
  }
  else {
    if (uVar7 == 6) {
      if (param_1[1] == -0x8000000000000000 || param_1[1] == 0) {
        uVar7 = param_1[4];
      }
      else {
        _free(param_1[2]);
        uVar7 = param_1[4];
      }
      if ((uVar7 & 0x7fffffffffffffff) == 0) {
        return;
      }
      puVar4 = (ulong *)param_1[5];
      goto code_r0x000108aa97c4;
    }
    if (uVar7 == 7) {
      if (param_1[1] == -0x8000000000000000) {
        return;
      }
      if (param_1[1] == 0) {
        return;
      }
      puVar4 = (ulong *)param_1[2];
      goto code_r0x000108aa97c4;
    }
    if (uVar7 == 8) {
      if ((param_1[0x12] != -0x8000000000000000) && (param_1[0x12] != 0)) {
        _free(param_1[0x13]);
      }
      if (param_1[1] != 0) {
        _free(param_1[2]);
      }
      FUN_100cdf624(param_1 + 10);
      if ((param_1[4] != -0x8000000000000000) && (param_1[4] != 0)) {
        _free(param_1[5]);
      }
      if (param_1[7] == -0x8000000000000000) {
        return;
      }
      if (param_1[7] == 0) {
        return;
      }
      puVar4 = (ulong *)param_1[8];
      goto code_r0x000108aa97c4;
    }
  }
LAB_100e45d20:
  if ((param_1[0x15] != -0x8000000000000000) && (param_1[0x15] != 0)) {
    _free(param_1[0x16]);
  }
  if (param_1[1] != 0) {
    _free(param_1[2]);
  }
  if (param_1[0xd] == -0x8000000000000000 || param_1[0xd] == 0) {
    lVar2 = param_1[5];
    lVar5 = param_1[6];
  }
  else {
    _free(param_1[0xe]);
    lVar2 = param_1[5];
    lVar5 = param_1[6];
  }
  if (lVar5 != 0) {
    puVar9 = (undefined8 *)(lVar2 + 8);
    do {
      if (puVar9[-1] != 0) {
        _free(*puVar9);
      }
      puVar9 = puVar9 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (param_1[4] != 0) {
    _free(lVar2);
  }
  if (param_1[7] != 0) {
    _free(param_1[8]);
  }
  if ((param_1[0x10] != -0x8000000000000000) && (param_1[0x10] != 0)) {
    _free(param_1[0x11]);
  }
  puVar4 = (ulong *)param_1[0xb];
  puVar3 = puVar4;
  for (lVar2 = param_1[0xc]; lVar2 != 0; lVar2 = lVar2 + -1) {
    FUN_100e1d024(puVar3);
    puVar3 = puVar3 + 10;
  }
  if (param_1[10] == 0) {
    return;
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar4);
  return;
}

