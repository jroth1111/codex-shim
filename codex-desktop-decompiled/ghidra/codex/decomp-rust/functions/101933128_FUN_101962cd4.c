
/* WARNING: Possible PIC construction at 0x00010194dc94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101938048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101932908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010196b0e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010196b128: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010193804c) */
/* WARNING: Removing unreachable block (ram,0x00010194dc98) */
/* WARNING: Removing unreachable block (ram,0x00010193290c) */

void FUN_101962cd4(ulong *param_1)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  undefined8 *puVar10;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  ulong uVar11;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
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
  
  uVar8 = *param_1 + 0x8000000000000001 & (long)*param_1 >> 0x3f;
  if ((long)uVar8 < 4) {
    if (1 < (long)uVar8) {
      if (uVar8 == 2) {
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
        puVar4 = (ulong *)param_1[0xb];
        uVar8 = param_1[0xc];
        if (uVar8 != 0) {
          uVar6 = 0;
          do {
            puVar2 = puVar4 + uVar6 * 0xd;
            if (*puVar2 != 0) {
              _free(puVar2[1]);
            }
            if (puVar2[3] != 0) {
              _free(puVar2[4]);
            }
            if (puVar2[6] != 0) {
              _free(puVar2[7]);
            }
            uVar9 = puVar2[9];
            if (uVar9 != 0x8000000000000000) {
              uVar7 = puVar2[10];
              uVar11 = puVar2[0xb];
              if (uVar11 != 0) {
                puVar10 = (undefined8 *)(uVar7 + 0x20);
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
              if (uVar9 != 0) {
                _free(uVar7);
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 != uVar8);
        }
        if (param_1[10] == 0) {
          return;
        }
        goto code_r0x000108aa97c4;
      }
      if (uVar8 != 3) goto LAB_101962f24;
      if ((param_1[0x1f] & 0x7fffffffffffffff) != 0) {
        _free(param_1[0x20]);
      }
      if (param_1[1] != 0) {
        _free(param_1[2]);
      }
      if ((param_1[7] != 0x8000000000000000) && (param_1[7] != 0)) {
        _free(param_1[8]);
      }
      if (param_1[4] != 0) {
        _free(param_1[5]);
      }
      unaff_x19 = param_1 + 10;
      puVar1 = &stack0xffffffffffffffe0;
      unaff_x29 = &stack0xfffffffffffffff0;
      unaff_x20 = (ulong *)*unaff_x19;
      if (unaff_x20 == (ulong *)0x8000000000000000) {
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
          puVar4 = (ulong *)param_1[0x12];
          goto code_r0x000108aa97c4;
        }
        unaff_x30 = 0x10196b0e4;
        puVar1 = &stack0xffffffffffffffe0;
        puVar2 = param_1 + 0x14;
      }
      else {
        if (param_1[0x16] == 0x8000000000000005) {
          if (unaff_x20 != (ulong *)0x0) {
            _free(param_1[0xb]);
          }
          if (param_1[0xd] == 0x8000000000000000 || param_1[0xd] == 0) {
            uVar8 = param_1[0x13];
            if (uVar8 != 0) goto LAB_101966ff8;
LAB_101967024:
            uStack_a0 = 0;
            uStack_80 = uStack_a0;
          }
          else {
            _free(param_1[0xe]);
            uVar8 = param_1[0x13];
            if (uVar8 == 0) goto LAB_101967024;
LAB_101966ff8:
            uStack_88 = param_1[0x14];
            uStack_98 = 0;
            uStack_78 = 0;
            uStack_a0 = 1;
            uStack_90 = uVar8;
            uStack_80 = uStack_a0;
            uStack_70 = uVar8;
            uStack_68 = uStack_88;
          }
          while (FUN_1019908ec(&stack0xffffffffffffffa8,&uStack_a0), in_stack_ffffffffffffffa8 != 0)
          {
            lVar5 = in_stack_ffffffffffffffa8 + in_stack_ffffffffffffffb8 * 0x18;
            if (*(long *)(lVar5 + 8) != 0) {
              _free(*(undefined8 *)(lVar5 + 0x10));
            }
            FUN_10196c5dc(in_stack_ffffffffffffffa8 + in_stack_ffffffffffffffb8 * 0x88 + 0x110);
          }
          uVar8 = param_1[0x10];
          if (uVar8 == 0x8000000000000000) {
            return;
          }
          puVar4 = (ulong *)param_1[0x11];
          uVar6 = param_1[0x12];
          if (uVar6 != 0) {
            puVar2 = puVar4 + 1;
            do {
              if (puVar2[-1] != 0) {
                _free(*puVar2);
              }
              puVar2 = puVar2 + 3;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          if (uVar8 == 0) {
            return;
          }
          goto code_r0x000108aa97c4;
        }
        unaff_x30 = 0x10196b12c;
        puVar2 = param_1 + 0x16;
      }
SUB_10194dc28:
      while( true ) {
        while( true ) {
          puVar3 = puVar2;
          *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
          *(ulong *)(puVar1 + -0x38) = unaff_x23;
          *(ulong **)(puVar1 + -0x30) = unaff_x22;
          *(ulong **)(puVar1 + -0x28) = unaff_x21;
          *(ulong **)(puVar1 + -0x20) = unaff_x20;
          *(ulong **)(puVar1 + -0x18) = unaff_x19;
          *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
          *(undefined8 *)(puVar1 + -8) = unaff_x30;
          unaff_x29 = puVar1 + -0x10;
          uVar8 = *puVar3 ^ 0x8000000000000000;
          if (-1 < (long)*puVar3) {
            uVar8 = 5;
          }
          if (uVar8 < 3) {
            return;
          }
          if (uVar8 == 3) {
            if (puVar3[1] == 0) {
              return;
            }
            puVar4 = (ulong *)puVar3[2];
            goto code_r0x000108aa97c4;
          }
          if (uVar8 == 4) break;
          uVar8 = puVar3[4];
          if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
            _free(puVar3[3] + uVar8 * -8 + -8);
          }
          unaff_x24 = *(undefined8 *)(puVar1 + -0x40);
          *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
          *(undefined8 *)(puVar1 + -0x38) = *(undefined8 *)(puVar1 + -0x38);
          *(undefined8 *)(puVar1 + -0x30) = *(undefined8 *)(puVar1 + -0x30);
          *(undefined8 *)(puVar1 + -0x28) = *(undefined8 *)(puVar1 + -0x28);
          *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
          *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
          *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
          *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
          unaff_x29 = puVar1 + -0x10;
          puVar4 = (ulong *)puVar3[1];
          unaff_x23 = puVar3[2];
          if (unaff_x23 == 0) {
            if (*puVar3 == 0) {
              return;
            }
            goto code_r0x000108aa97c4;
          }
          if (*puVar4 != 0) {
            _free(puVar4[1]);
          }
          unaff_x22 = puVar4 + 0xd;
          unaff_x30 = 0x10193804c;
          puVar1 = puVar1 + -0x40;
          puVar2 = puVar4 + 3;
          unaff_x19 = puVar4;
          unaff_x20 = puVar3;
          unaff_x21 = puVar4;
        }
        puVar4 = (ulong *)puVar3[2];
        unaff_x23 = puVar3[3];
        if (unaff_x23 == 0) break;
        unaff_x22 = puVar4 + 9;
        unaff_x30 = 0x10194dc98;
        puVar1 = puVar1 + -0x40;
        puVar2 = puVar4;
        unaff_x19 = puVar3;
        unaff_x20 = puVar4;
      }
      if (puVar3[1] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    if (uVar8 != 0) {
      if (uVar8 == 1) {
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
        if (param_1[10] == 0x8000000000000000 || param_1[10] == 0) {
          uVar8 = param_1[0xd];
        }
        else {
          _free(param_1[0xb]);
          uVar8 = param_1[0xd];
        }
        if ((uVar8 == 0x8000000000000000) || (uVar8 == 0)) {
          return;
        }
        puVar4 = (ulong *)param_1[0xe];
        goto code_r0x000108aa97c4;
      }
      goto LAB_101962f24;
    }
    if ((param_1[0x31] & 0x7fffffffffffffff) != 0) {
      _free(param_1[0x32]);
    }
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
    unaff_x20 = (ulong *)0x8000000000000000;
    if (param_1[9] == 0x8000000000000000 || param_1[9] == 0) {
      uVar8 = param_1[0xc];
    }
    else {
      _free(param_1[10]);
      uVar8 = param_1[0xc];
    }
    if ((uVar8 != 0x8000000000000000) && (uVar8 != 0)) {
      _free(param_1[0xd]);
    }
    if ((param_1[0xf] & 0x7fffffffffffffff) == 0) {
      uVar8 = param_1[0x13];
    }
    else {
      _free(param_1[0x10]);
      uVar8 = param_1[0x13];
    }
    if ((uVar8 != 0x8000000000000000) && (uVar8 != 0)) {
      _free(param_1[0x14]);
    }
    if ((param_1[0x16] & 0x7fffffffffffffff) == 0) {
      if (param_1[0x19] == 0x8000000000000000) goto LAB_1019328a8;
LAB_1019328ec:
      FUN_101931edc();
      uVar8 = param_1[0x25];
    }
    else {
      _free(param_1[0x17]);
      if (param_1[0x19] != 0x8000000000000000) goto LAB_1019328ec;
LAB_1019328a8:
      uVar8 = param_1[0x25];
    }
    if (uVar8 + 0x7fffffffffffffff < 2) {
      uVar8 = param_1[0x1c];
      if (uVar8 != 0x8000000000000000) {
        uVar6 = param_1[0x1d];
        uVar9 = param_1[0x1e];
        if (uVar9 != 0) {
          puVar10 = (undefined8 *)(uVar6 + 8);
          do {
            if (puVar10[-1] != 0) {
              _free(*puVar10);
            }
            puVar10 = puVar10 + 3;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        if (uVar8 != 0) {
          _free(uVar6);
        }
      }
      uVar8 = param_1[0x1f];
      if (uVar8 != 0x8000000000000000) {
        uVar6 = param_1[0x20];
        uVar9 = param_1[0x21];
        if (uVar9 != 0) {
          puVar10 = (undefined8 *)(uVar6 + 8);
          do {
            if (puVar10[-1] != 0) {
              _free(*puVar10);
            }
            puVar10 = puVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        if (uVar8 != 0) {
          _free(uVar6);
        }
      }
      if (param_1[0x22] == 0x8000000000000000) {
        return;
      }
      puVar4 = (ulong *)param_1[0x23];
      uVar8 = param_1[0x24];
      if (uVar8 != 0) {
        uVar6 = 0;
        do {
          puVar2 = puVar4 + uVar6 * 4;
          uVar7 = *puVar2;
          uVar9 = uVar7 ^ 0x8000000000000000;
          if (-1 < (long)uVar7) {
            uVar9 = 3;
          }
          if (uVar9 == 3) {
            if (uVar7 != 0) {
              uVar9 = puVar2[1];
LAB_101939b98:
              _free(uVar9);
            }
          }
          else if (uVar9 == 2) {
            uVar9 = puVar2[2];
            uVar7 = puVar2[3];
            if (uVar7 != 0) {
              puVar10 = (undefined8 *)(uVar9 + 8);
              do {
                if (puVar10[-1] != 0) {
                  _free(*puVar10);
                }
                puVar10 = puVar10 + 3;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            if (puVar2[1] != 0) goto LAB_101939b98;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar8);
      }
      if (param_1[0x22] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    puVar2 = param_1 + 0x25;
    unaff_x30 = 0x10193290c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x19 = param_1;
SUB_101933128:
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar8 = *puVar2;
    if (uVar8 != 0x8000000000000000) {
      uVar6 = puVar2[1];
      uVar9 = puVar2[2];
      if (uVar9 != 0) {
        puVar10 = (undefined8 *)(uVar6 + 8);
        do {
          if (puVar10[-1] != 0) {
            _free(*puVar10);
          }
          puVar10 = puVar10 + 3;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (uVar8 != 0) {
        _free(uVar6);
      }
    }
    uVar8 = puVar2[3];
    if (uVar8 != 0x8000000000000000) {
      uVar6 = puVar2[4];
      uVar9 = puVar2[5];
      if (uVar9 != 0) {
        puVar10 = (undefined8 *)(uVar6 + 8);
        do {
          if (puVar10[-1] != 0) {
            _free(*puVar10);
          }
          puVar10 = puVar10 + 3;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (uVar8 != 0) {
        _free(uVar6);
      }
    }
    if (puVar2[6] == 0x8000000000000000) {
      return;
    }
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
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    puVar4 = (ulong *)puVar2[7];
    puVar3 = puVar4;
    for (uVar8 = puVar2[8]; uVar8 != 0; uVar8 = uVar8 - 1) {
      uVar6 = *puVar3;
      lVar5 = uVar6 + 0x7ffffffffffffffb;
      if (uVar6 < 0x8000000000000005) {
        lVar5 = 2;
      }
      if ((lVar5 == 0) || (lVar5 == 1)) {
        uVar6 = puVar3[1];
joined_r0x000101938fb8:
        if (uVar6 != 0) {
          lVar5 = 0x10;
LAB_101938fc0:
          _free(*(undefined8 *)((long)puVar3 + lVar5));
        }
      }
      else {
        uVar9 = uVar6 ^ 0x8000000000000000;
        if (-1 < (long)uVar6) {
          uVar9 = 5;
        }
        if (uVar9 < 5) {
          if (uVar9 == 2) {
            uVar6 = puVar3[1] & 0x7fffffffffffffff;
            goto joined_r0x000101938fb8;
          }
        }
        else {
          if (uVar6 != 0) {
            _free(puVar3[1]);
          }
          if ((puVar3[3] & 0x7fffffffffffffff) != 0) {
            lVar5 = 0x20;
            goto LAB_101938fc0;
          }
        }
      }
      puVar3 = puVar3 + 7;
    }
    if (puVar2[6] == 0) {
      return;
    }
  }
  else {
    if ((long)uVar8 < 6) {
      if (uVar8 == 4) {
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
        if ((param_1[0xd] != 0x8000000000000000) && (param_1[0xd] != 0)) {
          _free(param_1[0xe]);
        }
        puVar2 = param_1 + 0x10;
        if (*puVar2 == 0x8000000000000001) {
          return;
        }
        goto SUB_101933128;
      }
      if (uVar8 == 5) {
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
        if (param_1[0xd] == 0x8000000000000000 || param_1[0xd] == 0) {
          uVar8 = param_1[10];
        }
        else {
          _free(param_1[0xe]);
          uVar8 = param_1[10];
        }
        if (uVar8 != 0) {
          _free(param_1[0xb]);
        }
        puVar1 = (undefined1 *)register0x00000008;
        puVar2 = param_1 + 0x10;
        goto SUB_10194dc28;
      }
    }
    else {
      if (uVar8 == 6) {
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
        puVar4 = (ulong *)param_1[5];
        goto code_r0x000108aa97c4;
      }
      if (uVar8 == 7) {
        if ((param_1[1] & 0x7fffffffffffffff) == 0) {
          return;
        }
        puVar4 = (ulong *)param_1[2];
        goto code_r0x000108aa97c4;
      }
      if (uVar8 == 8) {
        if ((param_1[0x12] & 0x7fffffffffffffff) != 0) {
          _free(param_1[0x13]);
        }
        if (param_1[1] != 0) {
          _free(param_1[2]);
        }
        FUN_1019389f0(param_1 + 10);
        if ((param_1[4] != 0x8000000000000000) && (param_1[4] != 0)) {
          _free(param_1[5]);
        }
        if (param_1[7] == 0x8000000000000000) {
          return;
        }
        if (param_1[7] == 0) {
          return;
        }
        puVar4 = (ulong *)param_1[8];
        goto code_r0x000108aa97c4;
      }
    }
LAB_101962f24:
    if ((param_1[0x15] & 0x7fffffffffffffff) != 0) {
      _free(param_1[0x16]);
    }
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[0xd] == 0x8000000000000000 || param_1[0xd] == 0) {
      uVar8 = param_1[5];
      uVar6 = param_1[6];
    }
    else {
      _free(param_1[0xe]);
      uVar8 = param_1[5];
      uVar6 = param_1[6];
    }
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
    if (param_1[4] != 0) {
      _free(uVar8);
    }
    if (param_1[7] != 0) {
      _free(param_1[8]);
    }
    if ((param_1[0x10] != 0x8000000000000000) && (param_1[0x10] != 0)) {
      _free(param_1[0x11]);
    }
    puVar4 = (ulong *)param_1[0xb];
    puVar2 = puVar4;
    for (uVar8 = param_1[0xc]; uVar8 != 0; uVar8 = uVar8 - 1) {
      FUN_10195b0f4(puVar2);
      puVar2 = puVar2 + 10;
    }
    if (param_1[10] == 0) {
      return;
    }
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar4);
  return;
}

