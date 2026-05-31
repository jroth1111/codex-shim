
/* WARNING: Possible PIC construction at 0x00010194dc94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101938048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101932908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010196b0e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010196b128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010195fcb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101952c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010195fcbc) */
/* WARNING: Removing unreachable block (ram,0x00010195fcc4) */
/* WARNING: Removing unreachable block (ram,0x00010195fccc) */
/* WARNING: Removing unreachable block (ram,0x00010195fcd0) */
/* WARNING: Removing unreachable block (ram,0x00010195fcd8) */
/* WARNING: Removing unreachable block (ram,0x00010195fce4) */
/* WARNING: Removing unreachable block (ram,0x00010195fcf0) */
/* WARNING: Removing unreachable block (ram,0x00010195fd00) */
/* WARNING: Removing unreachable block (ram,0x00010195fd0c) */
/* WARNING: Removing unreachable block (ram,0x00010195fd30) */
/* WARNING: Removing unreachable block (ram,0x00010195fd1c) */
/* WARNING: Removing unreachable block (ram,0x0001060f6e40) */
/* WARNING: Removing unreachable block (ram,0x0001060f6e58) */
/* WARNING: Removing unreachable block (ram,0x0001060f6e64) */
/* WARNING: Removing unreachable block (ram,0x0001060f6e68) */
/* WARNING: Removing unreachable block (ram,0x0001060f6e74) */
/* WARNING: Removing unreachable block (ram,0x0001060f6e7c) */
/* WARNING: Removing unreachable block (ram,0x0001060f6ea4) */
/* WARNING: Removing unreachable block (ram,0x0001060f6e90) */
/* WARNING: Removing unreachable block (ram,0x00010193290c) */
/* WARNING: Removing unreachable block (ram,0x00010193804c) */
/* WARNING: Removing unreachable block (ram,0x00010194dc98) */
/* WARNING: Removing unreachable block (ram,0x000101952c60) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10195fc88(long *param_1)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x19;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 unaff_x20;
  ulong *puVar14;
  ulong *unaff_x21;
  undefined8 *puVar15;
  ulong *unaff_x22;
  ulong unaff_x23;
  long lVar16;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  ulong uVar17;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar18;
  undefined1 *unaff_x29;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 unaff_x30;
  undefined8 uVar21;
  
  puVar1 = &stack0xffffffffffffffe0;
  puVar18 = &stack0xfffffffffffffff0;
  if (*param_1 == 2) {
    puVar2 = (ulong *)(param_1 + 1);
    puVar1 = (undefined1 *)register0x00000008;
    param_1 = unaff_x19;
    puVar18 = unaff_x29;
  }
  else {
    puVar2 = (ulong *)(param_1 + 2);
    unaff_x30 = 0x10195fcbc;
  }
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(long **)(puVar1 + -0x18) = param_1;
  *(undefined1 **)(puVar1 + -0x10) = puVar18;
  *(undefined8 *)(puVar1 + -8) = unaff_x30;
  lVar6 = *puVar2 + 0x7fffffffffffffbf;
  if (*puVar2 < 0x8000000000000041) {
    lVar6 = 1;
  }
  if (lVar6 == 0) {
    puVar4 = puVar2 + 1;
    *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
    *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
    *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
    uVar11 = *puVar4 + 0x8000000000000001 & (long)*puVar4 >> 0x3f;
    if (3 < (long)uVar11) {
      if ((long)uVar11 < 6) {
        if (uVar11 == 4) {
          if ((puVar2[0x1d] & 0x7fffffffffffffff) != 0) {
            _free(puVar2[0x1e]);
          }
          *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
          *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
          *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
          *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
          if (puVar2[2] != 0) {
            _free(puVar2[3]);
          }
          if (puVar2[5] != 0) {
            _free(puVar2[6]);
          }
          if (puVar2[8] != 0) {
            _free(puVar2[9]);
          }
          if (puVar2[0xb] != 0) {
            _free(puVar2[0xc]);
          }
          if ((puVar2[0xe] != 0x8000000000000000) && (puVar2[0xe] != 0)) {
            _free(puVar2[0xf]);
          }
          puVar2 = puVar2 + 0x11;
          if (*puVar2 == 0x8000000000000001) {
            return;
          }
          puVar18 = *(undefined1 **)(puVar1 + -0x10);
          uVar19 = *(undefined8 *)(puVar1 + -8);
          uVar13 = *(undefined8 *)(puVar1 + -0x20);
          puVar4 = *(ulong **)(puVar1 + -0x18);
          goto SUB_101933128;
        }
        if (uVar11 == 5) {
          if ((puVar2[0x1a] & 0x7fffffffffffffff) != 0) {
            _free(puVar2[0x1b]);
          }
          *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
          *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
          *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
          *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
          if (puVar2[2] != 0) {
            _free(puVar2[3]);
          }
          if (puVar2[5] != 0) {
            _free(puVar2[6]);
          }
          if (puVar2[8] != 0) {
            _free(puVar2[9]);
          }
          if (puVar2[0xe] == 0x8000000000000000 || puVar2[0xe] == 0) {
            uVar11 = puVar2[0xb];
          }
          else {
            _free(puVar2[0xf]);
            uVar11 = puVar2[0xb];
          }
          if (uVar11 != 0) {
            _free(puVar2[0xc]);
          }
          puVar18 = *(undefined1 **)(puVar1 + -0x10);
          puVar20 = *(undefined **)(puVar1 + -8);
          puVar14 = *(ulong **)(puVar1 + -0x20);
          puVar5 = *(ulong **)(puVar1 + -0x18);
          puVar2 = puVar2 + 0x11;
          goto SUB_10194dc28;
        }
      }
      else {
        if (uVar11 == 6) {
          if ((puVar2[2] & 0x7fffffffffffffff) == 0) {
            uVar11 = puVar2[5];
          }
          else {
            _free(puVar2[3]);
            uVar11 = puVar2[5];
          }
          if ((uVar11 & 0x7fffffffffffffff) == 0) {
            return;
          }
          puVar4 = (ulong *)puVar2[6];
          goto code_r0x000108aa97c4;
        }
        if (uVar11 == 7) {
          if ((puVar2[2] & 0x7fffffffffffffff) == 0) {
            return;
          }
          puVar4 = (ulong *)puVar2[3];
          goto code_r0x000108aa97c4;
        }
        if (uVar11 == 8) {
          if ((puVar2[0x13] & 0x7fffffffffffffff) != 0) {
            _free(puVar2[0x14]);
          }
          if (puVar2[2] != 0) {
            _free(puVar2[3]);
          }
          FUN_1019389f0(puVar2 + 0xb);
          if ((puVar2[5] != 0x8000000000000000) && (puVar2[5] != 0)) {
            _free(puVar2[6]);
          }
          if (puVar2[8] == 0x8000000000000000) {
            return;
          }
          if (puVar2[8] == 0) {
            return;
          }
          puVar4 = (ulong *)puVar2[9];
          goto code_r0x000108aa97c4;
        }
      }
LAB_101962f24:
      if ((puVar2[0x16] & 0x7fffffffffffffff) != 0) {
        _free(puVar2[0x17]);
      }
      *(ulong **)(puVar1 + -0x30) = unaff_x22;
      *(ulong **)(puVar1 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
      *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
      *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
      *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
      if (puVar2[2] != 0) {
        _free(puVar2[3]);
      }
      if (puVar2[0xe] == 0x8000000000000000 || puVar2[0xe] == 0) {
        uVar11 = puVar2[6];
        uVar7 = puVar2[7];
      }
      else {
        _free(puVar2[0xf]);
        uVar11 = puVar2[6];
        uVar7 = puVar2[7];
      }
      if (uVar7 != 0) {
        puVar15 = (undefined8 *)(uVar11 + 8);
        do {
          if (puVar15[-1] != 0) {
            _free(*puVar15);
          }
          puVar15 = puVar15 + 3;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (puVar2[5] != 0) {
        _free(uVar11);
      }
      if (puVar2[8] != 0) {
        _free(puVar2[9]);
      }
      if ((puVar2[0x11] != 0x8000000000000000) && (puVar2[0x11] != 0)) {
        _free(puVar2[0x12]);
      }
      puVar4 = (ulong *)puVar2[0xc];
      puVar5 = puVar4;
      for (uVar11 = puVar2[0xd]; uVar11 != 0; uVar11 = uVar11 - 1) {
        FUN_10195b0f4(puVar5);
        puVar5 = puVar5 + 10;
      }
      if (puVar2[0xb] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    if (1 < (long)uVar11) {
      if (uVar11 == 2) {
        if ((puVar2[0xe] & 0x7fffffffffffffff) != 0) {
          _free(puVar2[0xf]);
        }
        if (puVar2[2] != 0) {
          _free(puVar2[3]);
        }
        if (puVar2[5] != 0) {
          _free(puVar2[6]);
        }
        if (puVar2[8] != 0) {
          _free(puVar2[9]);
        }
        *(undefined8 *)(puVar1 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar1 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar1 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
        *(ulong *)(puVar1 + -0x38) = unaff_x23;
        *(ulong **)(puVar1 + -0x30) = unaff_x22;
        *(ulong **)(puVar1 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
        *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
        *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
        *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
        puVar4 = (ulong *)puVar2[0xc];
        uVar11 = puVar2[0xd];
        if (uVar11 != 0) {
          uVar7 = 0;
          do {
            puVar5 = puVar4 + uVar7 * 0xd;
            if (*puVar5 != 0) {
              _free(puVar5[1]);
            }
            if (puVar5[3] != 0) {
              _free(puVar5[4]);
            }
            if (puVar5[6] != 0) {
              _free(puVar5[7]);
            }
            uVar10 = puVar5[9];
            if (uVar10 != 0x8000000000000000) {
              uVar8 = puVar5[10];
              uVar17 = puVar5[0xb];
              if (uVar17 != 0) {
                puVar15 = (undefined8 *)(uVar8 + 0x20);
                do {
                  if (puVar15[-4] != 0) {
                    _free(puVar15[-3]);
                  }
                  if (puVar15[-1] != 0) {
                    _free(*puVar15);
                  }
                  puVar15 = puVar15 + 6;
                  uVar17 = uVar17 - 1;
                } while (uVar17 != 0);
              }
              if (uVar10 != 0) {
                _free(uVar8);
              }
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar11);
        }
        if (puVar2[0xb] == 0) {
          return;
        }
        goto code_r0x000108aa97c4;
      }
      if (uVar11 != 3) goto LAB_101962f24;
      if ((puVar2[0x20] & 0x7fffffffffffffff) != 0) {
        _free(puVar2[0x21]);
      }
      if (puVar2[2] != 0) {
        _free(puVar2[3]);
      }
      if ((puVar2[8] != 0x8000000000000000) && (puVar2[8] != 0)) {
        _free(puVar2[9]);
      }
      if (puVar2[5] != 0) {
        _free(puVar2[6]);
      }
      puVar5 = puVar2 + 0xb;
      *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
      *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
      *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
      *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
      puVar18 = puVar1 + -0x10;
      puVar14 = (ulong *)*puVar5;
      if (puVar14 == (ulong *)0x8000000000000000) {
        if (puVar2[0x15] == 0x8000000000000005) {
          if (puVar2[0xc] != 0) {
            _free(puVar2[0xd]);
          }
          if (puVar2[0xf] != 0) {
            _free(puVar2[0x10]);
          }
          if (puVar2[0x12] == 0) {
            return;
          }
          puVar4 = (ulong *)puVar2[0x13];
          goto code_r0x000108aa97c4;
        }
        puVar20 = (undefined *)0x10196b0e4;
        puVar1 = puVar1 + -0x20;
        puVar2 = puVar2 + 0x15;
      }
      else {
        if (puVar2[0x17] == 0x8000000000000005) {
          if (puVar14 != (ulong *)0x0) {
            _free(puVar2[0xc]);
          }
          *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
          *(ulong *)(puVar1 + -0x38) = unaff_x23;
          *(ulong **)(puVar1 + -0x30) = unaff_x22;
          *(ulong **)(puVar1 + -0x28) = unaff_x21;
          *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
          *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
          *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
          *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
          if (puVar2[0xe] == 0x8000000000000000 || puVar2[0xe] == 0) {
            uVar11 = puVar2[0x14];
            if (uVar11 == 0) goto LAB_101967024;
LAB_101966ff8:
            uVar7 = puVar2[0x15];
            uVar10 = puVar2[0x16];
            *(undefined8 *)(puVar1 + -0x98) = 0;
            *(ulong *)(puVar1 + -0x90) = uVar11;
            *(ulong *)(puVar1 + -0x88) = uVar7;
            *(undefined8 *)(puVar1 + -0x78) = 0;
            *(ulong *)(puVar1 + -0x70) = uVar11;
            *(ulong *)(puVar1 + -0x68) = uVar7;
            uVar13 = 1;
          }
          else {
            _free(puVar2[0xf]);
            uVar11 = puVar2[0x14];
            if (uVar11 != 0) goto LAB_101966ff8;
LAB_101967024:
            uVar13 = 0;
            uVar10 = 0;
          }
          *(undefined8 *)(puVar1 + -0xa0) = uVar13;
          *(undefined8 *)(puVar1 + -0x80) = uVar13;
          *(ulong *)(puVar1 + -0x60) = uVar10;
          while( true ) {
            FUN_1019908ec(puVar1 + -0x58,puVar1 + -0xa0);
            lVar6 = *(long *)(puVar1 + -0x58);
            if (lVar6 == 0) break;
            lVar16 = *(long *)(puVar1 + -0x48);
            lVar9 = lVar6 + lVar16 * 0x18;
            if (*(long *)(lVar9 + 8) != 0) {
              _free(*(undefined8 *)(lVar9 + 0x10));
            }
            FUN_10196c5dc(lVar6 + lVar16 * 0x88 + 0x110);
          }
          uVar11 = puVar2[0x11];
          if (uVar11 != 0x8000000000000000) {
            puVar4 = (ulong *)puVar2[0x12];
            uVar7 = puVar2[0x13];
            if (uVar7 != 0) {
              puVar2 = puVar4 + 1;
              do {
                if (puVar2[-1] != 0) {
                  _free(*puVar2);
                }
                puVar2 = puVar2 + 3;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            if (uVar11 != 0) goto code_r0x000108aa97c4;
          }
          return;
        }
        puVar20 = (undefined *)0x10196b12c;
        puVar1 = puVar1 + -0x20;
        puVar2 = puVar2 + 0x17;
      }
      goto SUB_10194dc28;
    }
    if (uVar11 != 0) {
      if (uVar11 == 1) {
        if ((puVar2[0x12] & 0x7fffffffffffffff) != 0) {
          _free(puVar2[0x13]);
        }
        *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
        *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
        *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
        *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
        if (puVar2[2] != 0) {
          _free(puVar2[3]);
        }
        if (puVar2[5] != 0) {
          _free(puVar2[6]);
        }
        if (puVar2[8] != 0) {
          _free(puVar2[9]);
        }
        if (puVar2[0xb] == 0x8000000000000000 || puVar2[0xb] == 0) {
          uVar11 = puVar2[0xe];
        }
        else {
          _free(puVar2[0xc]);
          uVar11 = puVar2[0xe];
        }
        if ((uVar11 == 0x8000000000000000) || (uVar11 == 0)) {
          return;
        }
        puVar4 = (ulong *)puVar2[0xf];
        goto code_r0x000108aa97c4;
      }
      goto LAB_101962f24;
    }
    if ((puVar2[0x32] & 0x7fffffffffffffff) != 0) {
      _free(puVar2[0x33]);
    }
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(ulong *)(puVar1 + -0x38) = unaff_x23;
    *(ulong **)(puVar1 + -0x30) = unaff_x22;
    *(ulong **)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
    *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
    *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
    puVar18 = puVar1 + -0x10;
    if (*puVar4 != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] != 0) {
      _free(puVar2[5]);
    }
    if (puVar2[7] != 0) {
      _free(puVar2[8]);
    }
    uVar13 = 0x8000000000000000;
    if (puVar2[10] == 0x8000000000000000 || puVar2[10] == 0) {
      uVar11 = puVar2[0xd];
    }
    else {
      _free(puVar2[0xb]);
      uVar11 = puVar2[0xd];
    }
    if ((uVar11 != 0x8000000000000000) && (uVar11 != 0)) {
      _free(puVar2[0xe]);
    }
    if ((puVar2[0x10] & 0x7fffffffffffffff) == 0) {
      uVar11 = puVar2[0x14];
    }
    else {
      _free(puVar2[0x11]);
      uVar11 = puVar2[0x14];
    }
    if ((uVar11 != 0x8000000000000000) && (uVar11 != 0)) {
      _free(puVar2[0x15]);
    }
    if ((puVar2[0x17] & 0x7fffffffffffffff) == 0) {
      if (puVar2[0x1a] != 0x8000000000000000) goto LAB_1019328ec;
LAB_1019328a8:
      uVar11 = puVar2[0x26];
    }
    else {
      _free(puVar2[0x18]);
      if (puVar2[0x1a] == 0x8000000000000000) goto LAB_1019328a8;
LAB_1019328ec:
      FUN_101931edc();
      uVar11 = puVar2[0x26];
    }
    if (uVar11 + 0x7fffffffffffffff < 2) {
      uVar11 = puVar2[0x1d];
      if (uVar11 != 0x8000000000000000) {
        uVar7 = puVar2[0x1e];
        uVar10 = puVar2[0x1f];
        if (uVar10 != 0) {
          puVar15 = (undefined8 *)(uVar7 + 8);
          do {
            if (puVar15[-1] != 0) {
              _free(*puVar15);
            }
            puVar15 = puVar15 + 3;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        if (uVar11 != 0) {
          _free(uVar7);
        }
      }
      uVar11 = puVar2[0x20];
      if (uVar11 != 0x8000000000000000) {
        uVar7 = puVar2[0x21];
        uVar10 = puVar2[0x22];
        if (uVar10 != 0) {
          puVar15 = (undefined8 *)(uVar7 + 8);
          do {
            if (puVar15[-1] != 0) {
              _free(*puVar15);
            }
            puVar15 = puVar15 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        if (uVar11 != 0) {
          _free(uVar7);
        }
      }
      if (puVar2[0x23] == 0x8000000000000000) {
        return;
      }
      *(undefined8 *)(puVar1 + -0x60) = unaff_x28;
      *(undefined8 *)(puVar1 + -0x58) = unaff_x27;
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
      puVar4 = (ulong *)puVar2[0x24];
      uVar11 = puVar2[0x25];
      if (uVar11 != 0) {
        uVar7 = 0;
        do {
          puVar5 = puVar4 + uVar7 * 4;
          uVar8 = *puVar5;
          uVar10 = uVar8 ^ 0x8000000000000000;
          if (-1 < (long)uVar8) {
            uVar10 = 3;
          }
          if (uVar10 == 3) {
            if (uVar8 != 0) {
              uVar10 = puVar5[1];
LAB_101939b98:
              _free(uVar10);
            }
          }
          else if (uVar10 == 2) {
            uVar10 = puVar5[2];
            uVar8 = puVar5[3];
            if (uVar8 != 0) {
              puVar15 = (undefined8 *)(uVar10 + 8);
              do {
                if (puVar15[-1] != 0) {
                  _free(*puVar15);
                }
                puVar15 = puVar15 + 3;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            if (puVar5[1] != 0) goto LAB_101939b98;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar11);
      }
      if (puVar2[0x23] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    puVar2 = puVar2 + 0x26;
    uVar19 = 0x10193290c;
    puVar1 = puVar1 + -0x40;
    goto SUB_101933128;
  }
  if (lVar6 != 1) {
    if (lVar6 != 2) {
      if (puVar2[4] != 0x8000000000000005) {
        func_0x00010194dc28();
      }
      if (puVar2[1] != 0) {
        _free(puVar2[2]);
      }
      if ((puVar2[0xe] & 0x7fffffffffffffff) == 0) {
        return;
      }
      puVar4 = (ulong *)puVar2[0xf];
      goto code_r0x000108aa97c4;
    }
    if ((puVar2[1] & 0x7fffffffffffffff) != 0) {
      _free(puVar2[2]);
    }
    puVar18 = *(undefined1 **)(puVar1 + -0x10);
    puVar20 = *(undefined **)(puVar1 + -8);
    puVar2 = puVar2 + 4;
    puVar5 = *(ulong **)(puVar1 + -0x18);
    puVar14 = *(ulong **)(puVar1 + -0x20);
SUB_10194dc28:
    while( true ) {
      while( true ) {
        puVar3 = puVar2;
        *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
        *(ulong *)(puVar1 + -0x38) = unaff_x23;
        *(ulong **)(puVar1 + -0x30) = unaff_x22;
        *(ulong **)(puVar1 + -0x28) = unaff_x21;
        *(ulong **)(puVar1 + -0x20) = puVar14;
        *(ulong **)(puVar1 + -0x18) = puVar5;
        *(undefined1 **)(puVar1 + -0x10) = puVar18;
        *(undefined **)(puVar1 + -8) = puVar20;
        puVar18 = puVar1 + -0x10;
        uVar11 = *puVar3 ^ 0x8000000000000000;
        if (-1 < (long)*puVar3) {
          uVar11 = 5;
        }
        if (uVar11 < 3) {
          return;
        }
        if (uVar11 == 3) {
          if (puVar3[1] == 0) {
            return;
          }
          puVar4 = (ulong *)puVar3[2];
          goto code_r0x000108aa97c4;
        }
        if (uVar11 == 4) break;
        uVar11 = puVar3[4];
        if ((uVar11 != 0) && (uVar11 * 9 != -0x11)) {
          _free(puVar3[3] + uVar11 * -8 + -8);
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
        puVar18 = puVar1 + -0x10;
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
        puVar20 = (undefined *)0x10193804c;
        puVar1 = puVar1 + -0x40;
        puVar2 = puVar4 + 3;
        puVar5 = puVar4;
        puVar14 = puVar3;
        unaff_x21 = puVar4;
      }
      puVar4 = (ulong *)puVar3[2];
      unaff_x23 = puVar3[3];
      if (unaff_x23 == 0) break;
      unaff_x22 = puVar4 + 9;
      puVar20 = (undefined *)0x10194dc98;
      puVar1 = puVar1 + -0x40;
      puVar2 = puVar4;
      puVar5 = puVar3;
      puVar14 = puVar4;
    }
    if (puVar3[1] == 0) {
      return;
    }
    goto code_r0x000108aa97c4;
  }
  uVar13 = *(undefined8 *)(puVar1 + -0x10);
  uVar21 = *(undefined8 *)(puVar1 + -8);
  uVar19 = *(undefined8 *)(puVar1 + -0x20);
  uVar12 = *(undefined8 *)(puVar1 + -0x18);
  uVar11 = *puVar2 ^ 0x8000000000000000;
  if (-1 < (long)*puVar2) {
    uVar11 = 1;
  }
  switch(uVar11) {
  case 0:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] == 0x8000000000000000 || puVar2[4] == 0) {
      uVar11 = puVar2[8];
    }
    else {
      _free(puVar2[5]);
      uVar11 = puVar2[8];
    }
    if (uVar11 != 0) {
      _free(puVar2[9]);
    }
    if (puVar2[0xb] == 0) {
      return;
    }
    puVar4 = (ulong *)puVar2[0xc];
    break;
  case 1:
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(ulong *)(puVar1 + -0x38) = unaff_x23;
    *(ulong **)(puVar1 + -0x30) = unaff_x22;
    *(ulong **)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (*puVar2 != 0) {
      _free(puVar2[1]);
    }
    if (puVar2[3] != 0) {
      _free(puVar2[4]);
    }
    if (puVar2[0x15] == 0x8000000000000000 || puVar2[0x15] == 0) {
      uVar11 = puVar2[6];
    }
    else {
      _free(puVar2[0x16]);
      uVar11 = puVar2[6];
    }
    if (uVar11 != 0) {
      _free(puVar2[7]);
    }
    if (puVar2[9] != 0) {
      _free(puVar2[10]);
    }
    if ((-0x7ffffffffffffffe < (long)puVar2[0x2d]) && (puVar2[0x2d] != 0)) {
      _free(puVar2[0x2e]);
    }
    if ((puVar2[0x18] != 0x8000000000000000) && (puVar2[0x18] != 0)) {
      _free(puVar2[0x19]);
    }
    if (puVar2[0xc] != 0) {
      _free(puVar2[0xd]);
    }
    if (puVar2[0xf] != 0) {
      _free(puVar2[0x10]);
    }
    lVar6 = puVar2[0x30] + 0x7ffffffffffffffa;
    if (puVar2[0x30] < 0x8000000000000006) {
      lVar6 = 5;
    }
    if (lVar6 == 5) {
      FUN_101956f30(puVar2 + 0x30);
      uVar11 = puVar2[0x1b];
    }
    else {
      if ((lVar6 == 4) && (puVar2[0x31] != 0)) {
        _free(puVar2[0x32]);
      }
      uVar11 = puVar2[0x1b];
    }
    if ((uVar11 != 0x8000000000000000) && (uVar11 != 0)) {
      _free(puVar2[0x1c]);
    }
    if ((puVar2[0x1e] != 0x8000000000000000) && (puVar2[0x1e] != 0)) {
      _free(puVar2[0x1f]);
    }
    uVar11 = puVar2[0x24];
    if (uVar11 != 0x8000000000000001) {
      if ((uVar11 != 0x8000000000000000) && (uVar11 != 0)) {
        _free(puVar2[0x25]);
      }
      if ((puVar2[0x27] != 0x8000000000000000) && (puVar2[0x27] != 0)) {
        _free(puVar2[0x28]);
      }
      if ((puVar2[0x2a] != 0x8000000000000000) && (puVar2[0x2a] != 0)) {
        _free(puVar2[0x2b]);
      }
    }
    if ((puVar2[0x21] != 0x8000000000000000) && (puVar2[0x21] != 0)) {
      _free(puVar2[0x22]);
    }
    puVar4 = (ulong *)puVar2[0x13];
    lVar6 = puVar2[0x14] + 1;
    puVar5 = puVar4;
    while (lVar6 = lVar6 + -1, lVar6 != 0) {
      FUN_101962f78(puVar5);
      puVar5 = puVar5 + 0x14;
    }
    if (puVar2[0x12] == 0) {
      return;
    }
    break;
  case 2:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if ((long)puVar2[4] < -0x7ffffffffffffffd || puVar2[4] == 0) {
      return;
    }
    puVar4 = (ulong *)puVar2[5];
    break;
  case 3:
    if (puVar2[1] == 0) {
      return;
    }
    puVar4 = (ulong *)puVar2[2];
    break;
  case 4:
    if (puVar2[1] == 0) {
      return;
    }
    puVar4 = (ulong *)puVar2[2];
    break;
  case 5:
    uVar11 = puVar2[1];
    goto joined_r0x00010196513c;
  case 6:
  case 0x24:
  case 0x28:
    goto code_r0x000101965198;
  case 7:
  case 0x32:
  case 0x3d:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] == 0x8000000000000000 || puVar2[4] == 0) {
      return;
    }
    puVar4 = (ulong *)puVar2[5];
    break;
  case 8:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[0xe] != 0) {
      _free(puVar2[0xf]);
    }
    if (puVar2[0x11] == 0x8000000000000000 || puVar2[0x11] == 0) {
      uVar11 = puVar2[3];
    }
    else {
      _free(puVar2[0x12]);
      uVar11 = puVar2[3];
    }
    if (uVar11 != 0) {
      _free(puVar2[4]);
    }
    if (puVar2[6] == 0) {
      return;
    }
    puVar4 = (ulong *)puVar2[7];
    break;
  case 9:
    if (puVar2[1] == 0) {
      return;
    }
    puVar4 = (ulong *)puVar2[2];
    break;
  case 10:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(ulong *)(puVar1 + -0x38) = unaff_x23;
    *(ulong **)(puVar1 + -0x30) = unaff_x22;
    *(ulong **)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
    *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
    *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
    if (puVar2[4] != 0) {
      _free(puVar2[5]);
    }
    uVar11 = puVar2[0x1e];
    if (-0x7ffffffffffffffe < (long)uVar11) {
      uVar7 = puVar2[0x1f];
      uVar10 = puVar2[0x20];
      if (uVar10 != 0) {
        puVar15 = (undefined8 *)(uVar7 + 8);
        do {
          if (puVar15[-1] != 0) {
            _free(*puVar15);
          }
          puVar15 = puVar15 + 3;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (uVar11 != 0) {
        _free(uVar7);
      }
    }
    if (puVar2[0x15] != 0x8000000000000000) {
      if (puVar2[0x15] != 0) {
        _free(puVar2[0x16]);
      }
      if ((puVar2[0x18] != 0x8000000000000000) && (puVar2[0x18] != 0)) {
        _free(puVar2[0x19]);
      }
    }
    if (puVar2[7] != 0) {
      _free(puVar2[8]);
    }
    if (puVar2[10] != 0) {
      _free(puVar2[0xb]);
    }
    if ((puVar2[0x1b] != 0x8000000000000000) && (puVar2[0x1b] != 0)) {
      _free(puVar2[0x1c]);
    }
    if (puVar2[0xd] != 0) {
      _free(puVar2[0xe]);
    }
    if ((puVar2[0x10] == 0x8000000000000000) || (puVar2[0x10] == 0)) {
      return;
    }
    puVar4 = (ulong *)puVar2[0x11];
    break;
  case 0xb:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[0xd] != 0) {
      _free(puVar2[0xe]);
    }
    if (puVar2[0x10] == 0) {
      return;
    }
    puVar4 = (ulong *)puVar2[0x11];
    break;
  case 0xc:
  case 0xe:
    if (puVar2[0x15] != 0) {
      *(undefined8 *)(puVar1 + -0x20) = uVar19;
      *(undefined8 *)(puVar1 + -0x18) = uVar12;
      *(undefined8 *)(puVar1 + -0x10) = uVar13;
      *(undefined8 *)(puVar1 + -8) = uVar21;
      _free(puVar2[0x16]);
      uVar13 = *(undefined8 *)(puVar1 + -0x10);
      uVar21 = *(undefined8 *)(puVar1 + -8);
      uVar19 = *(undefined8 *)(puVar1 + -0x20);
      uVar12 = *(undefined8 *)(puVar1 + -0x18);
    }
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(ulong *)(puVar1 + -0x38) = unaff_x23;
    *(ulong **)(puVar1 + -0x30) = unaff_x22;
    *(ulong **)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[7] != 0) {
      _free(puVar2[8]);
    }
    uVar11 = puVar2[0xb];
    lVar6 = puVar2[0xc] + 1;
    uVar7 = uVar11;
    while (lVar6 = lVar6 + -1, lVar6 != 0) {
      FUN_101961ec4(uVar7);
      uVar7 = uVar7 + 0xf8;
    }
    if (puVar2[10] != 0) {
      _free(uVar11);
    }
    if (puVar2[0xd] != 0x8000000000000000) {
      if (puVar2[0xd] != 0) {
        _free(puVar2[0xe]);
      }
      if ((puVar2[0x10] != 0x8000000000000000) && (puVar2[0x10] != 0)) {
        puVar4 = (ulong *)puVar2[0x11];
        break;
      }
    }
    return;
  case 0xd:
  case 0xf:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[0x14] != 0) {
      _free(puVar2[0x15]);
    }
    if (puVar2[0x17] != 0x8000000000000000 && puVar2[0x17] != 0) {
      _free(puVar2[0x18]);
    }
    *(ulong **)(puVar1 + -0x30) = unaff_x22;
    *(ulong **)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
    *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
    *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
    if (puVar2[5] != 0) {
      _free(puVar2[6]);
    }
    if (puVar2[8] != 0) {
      _free(puVar2[9]);
    }
    if (puVar2[0xe] == 0x8000000000000000 || puVar2[0xe] == 0) {
      puVar4 = (ulong *)puVar2[0xc];
      uVar11 = puVar2[0xd];
    }
    else {
      _free(puVar2[0xf]);
      puVar4 = (ulong *)puVar2[0xc];
      uVar11 = puVar2[0xd];
    }
    if (uVar11 != 0) {
      puVar5 = puVar4 + 1;
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (puVar2[0xb] == 0) {
      return;
    }
    break;
  case 0x10:
  case 0x38:
  case 0x39:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] != 0) {
      _free(puVar2[5]);
    }
    if (puVar2[7] == 0) {
      return;
    }
    puVar4 = (ulong *)puVar2[8];
    break;
  case 0x11:
    *(ulong **)(puVar1 + -0x30) = unaff_x22;
    *(ulong **)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] != 0) {
      _free(puVar2[5]);
    }
    if (puVar2[10] == 0x8000000000000000 || puVar2[10] == 0) {
      puVar4 = (ulong *)puVar2[8];
      uVar11 = puVar2[9];
    }
    else {
      _free(puVar2[0xb]);
      puVar4 = (ulong *)puVar2[8];
      uVar11 = puVar2[9];
    }
    if (uVar11 != 0) {
      puVar5 = puVar4 + 1;
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (puVar2[7] == 0) {
      return;
    }
    break;
  case 0x12:
  case 0x15:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    FUN_101961ec4();
    if (puVar2[0x20] != 0) {
      _free(puVar2[0x21]);
    }
    if (puVar2[0x23] == 0) {
      return;
    }
    puVar4 = (ulong *)puVar2[0x24];
    break;
  case 0x13:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] != 0) {
      _free(puVar2[5]);
    }
    if (puVar2[7] != 0) {
      _free(puVar2[8]);
    }
    if (puVar2[10] == 0x8000000000000000 || puVar2[10] == 0) {
      uVar11 = puVar2[0xd];
    }
    else {
      _free(puVar2[0xb]);
      uVar11 = puVar2[0xd];
    }
    if ((uVar11 & 0x7fffffffffffffff) != 0) {
      _free(puVar2[0xe]);
    }
    uVar13 = *(undefined8 *)(puVar1 + -0x10);
    uVar21 = *(undefined8 *)(puVar1 + -8);
    uVar19 = *(undefined8 *)(puVar1 + -0x20);
    uVar12 = *(undefined8 *)(puVar1 + -0x18);
    goto DAT_10196c3e0;
  case 0x14:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] != 0) {
      _free(puVar2[5]);
    }
    if (puVar2[7] != 0) {
      _free(puVar2[8]);
    }
    if (puVar2[10] == 0x8000000000000000 || puVar2[10] == 0) {
      uVar11 = puVar2[0xd];
    }
    else {
      _free(puVar2[0xb]);
      uVar11 = puVar2[0xd];
    }
    if ((uVar11 & 0x7fffffffffffffff) != 0) {
      _free(puVar2[0xe]);
    }
    uVar13 = *(undefined8 *)(puVar1 + -0x10);
    uVar21 = *(undefined8 *)(puVar1 + -8);
    uVar19 = *(undefined8 *)(puVar1 + -0x20);
    uVar12 = *(undefined8 *)(puVar1 + -0x18);
DAT_10196c3e0:
    *(ulong **)(puVar1 + -0x30) = unaff_x22;
    *(ulong **)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    uVar7 = puVar2[0x11];
    uVar11 = uVar7 ^ 0x8000000000000000;
    if (-1 < (long)uVar7) {
      uVar11 = 4;
    }
    if ((long)uVar11 < 2) {
      if (uVar11 == 0) {
code_r0x00010196c4e0:
        if (puVar2[0x12] != 0) {
          _free(puVar2[0x13]);
        }
        if (puVar2[0x15] == 0) {
          return;
        }
        puVar4 = (ulong *)puVar2[0x16];
        break;
      }
      if (uVar11 == 1) {
        if (puVar2[0x12] != 0) {
          _free(puVar2[0x13]);
        }
        uVar11 = puVar2[0x16];
        uVar7 = puVar2[0x17];
        if (uVar7 != 0) {
          puVar15 = (undefined8 *)(uVar11 + 8);
          do {
            if (puVar15[-1] != 0) {
              _free(*puVar15);
            }
            puVar15 = puVar15 + 3;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (puVar2[0x15] != 0) {
          _free(uVar11);
        }
        if (puVar2[0x18] == 0) {
          return;
        }
        puVar4 = (ulong *)puVar2[0x19];
        break;
      }
    }
    else {
      if (uVar11 == 2) {
        if (puVar2[0x12] != 0) {
          _free(puVar2[0x13]);
        }
        puVar4 = (ulong *)puVar2[0x16];
        uVar11 = puVar2[0x17];
        if (uVar11 != 0) {
          puVar5 = puVar4 + 1;
          do {
            if (puVar5[-1] != 0) {
              _free(*puVar5);
            }
            puVar5 = puVar5 + 3;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        if (puVar2[0x15] == 0) {
          return;
        }
        break;
      }
      if (uVar11 == 3) goto code_r0x00010196c4e0;
      if (uVar11 == 4) {
        if (uVar7 != 0) {
          _free(puVar2[0x12]);
        }
        if (puVar2[0x14] != 0) {
          _free(puVar2[0x15]);
        }
        if ((puVar2[0x17] != 0x8000000000000000) && (puVar2[0x17] != 0)) {
          _free(puVar2[0x18]);
        }
        if ((puVar2[0x1a] != 0x8000000000000000) && (puVar2[0x1a] != 0)) {
          _free(puVar2[0x1b]);
        }
        if (puVar2[0x1d] == 0x8000000000000000) {
          return;
        }
        if (puVar2[0x1d] == 0) {
          return;
        }
        puVar4 = (ulong *)puVar2[0x1e];
        break;
      }
    }
    if (puVar2[0x12] == 0x8000000000000000 || puVar2[0x12] == 0) {
      uVar11 = puVar2[0x15];
    }
    else {
      _free(puVar2[0x13]);
      uVar11 = puVar2[0x15];
    }
    if (uVar11 == 0x8000000000000001) {
      return;
    }
    puVar2 = puVar2 + 0x15;
    puVar18 = *(undefined1 **)(puVar1 + -0x10);
    uVar19 = *(undefined8 *)(puVar1 + -8);
    uVar13 = *(undefined8 *)(puVar1 + -0x20);
    puVar4 = *(ulong **)(puVar1 + -0x18);
    unaff_x22 = *(ulong **)(puVar1 + -0x30);
    unaff_x21 = *(ulong **)(puVar1 + -0x28);
SUB_101933128:
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(ulong *)(puVar1 + -0x38) = unaff_x23;
    *(ulong **)(puVar1 + -0x30) = unaff_x22;
    *(ulong **)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(ulong **)(puVar1 + -0x18) = puVar4;
    *(undefined1 **)(puVar1 + -0x10) = puVar18;
    *(undefined8 *)(puVar1 + -8) = uVar19;
    uVar11 = *puVar2;
    if (uVar11 != 0x8000000000000000) {
      uVar7 = puVar2[1];
      uVar10 = puVar2[2];
      if (uVar10 != 0) {
        puVar15 = (undefined8 *)(uVar7 + 8);
        do {
          if (puVar15[-1] != 0) {
            _free(*puVar15);
          }
          puVar15 = puVar15 + 3;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (uVar11 != 0) {
        _free(uVar7);
      }
    }
    uVar11 = puVar2[3];
    if (uVar11 != 0x8000000000000000) {
      uVar7 = puVar2[4];
      uVar10 = puVar2[5];
      if (uVar10 != 0) {
        puVar15 = (undefined8 *)(uVar7 + 8);
        do {
          if (puVar15[-1] != 0) {
            _free(*puVar15);
          }
          puVar15 = puVar15 + 3;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (uVar11 != 0) {
        _free(uVar7);
      }
    }
    if (puVar2[6] == 0x8000000000000000) {
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
    puVar4 = (ulong *)puVar2[7];
    puVar5 = puVar4;
    for (uVar11 = puVar2[8]; uVar11 != 0; uVar11 = uVar11 - 1) {
      uVar7 = *puVar5;
      lVar6 = uVar7 + 0x7ffffffffffffffb;
      if (uVar7 < 0x8000000000000005) {
        lVar6 = 2;
      }
      if ((lVar6 == 0) || (lVar6 == 1)) {
        uVar7 = puVar5[1];
joined_r0x000101938fb8:
        if (uVar7 != 0) {
          lVar6 = 0x10;
LAB_101938fc0:
          _free(*(undefined8 *)((long)puVar5 + lVar6));
        }
      }
      else {
        uVar10 = uVar7 ^ 0x8000000000000000;
        if (-1 < (long)uVar7) {
          uVar10 = 5;
        }
        if (uVar10 < 5) {
          if (uVar10 == 2) {
            uVar7 = puVar5[1] & 0x7fffffffffffffff;
            goto joined_r0x000101938fb8;
          }
        }
        else {
          if (uVar7 != 0) {
            _free(puVar5[1]);
          }
          if ((puVar5[3] & 0x7fffffffffffffff) != 0) {
            lVar6 = 0x20;
            goto LAB_101938fc0;
          }
        }
      }
      puVar5 = puVar5 + 7;
    }
    if (puVar2[6] == 0) {
      return;
    }
    break;
  case 0x16:
    puVar5 = puVar2 + 1;
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[0x19] != 0) {
      _free(puVar2[0x1a]);
    }
    if (puVar2[0x1c] != 0) {
      _free(puVar2[0x1d]);
    }
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(ulong *)(puVar1 + -0x38) = unaff_x23;
    *(ulong **)(puVar1 + -0x30) = unaff_x22;
    *(ulong **)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
    *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
    *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
    puVar18 = puVar1 + -0x10;
    lVar6 = 2;
    if (1 < *puVar5) {
      lVar6 = *puVar5 - 2;
    }
    switch(lVar6) {
    case 0:
      if (puVar2[8] != 0x8000000000000000 && puVar2[8] != 0) {
        _free(puVar2[9]);
      }
      if (puVar2[2] != 0) {
        _free(puVar2[3]);
      }
      puVar4 = (ulong *)puVar2[6];
      puVar5 = puVar4;
      for (uVar11 = puVar2[7]; uVar11 != 0; uVar11 = uVar11 - 1) {
        uVar10 = *puVar5;
        uVar7 = uVar10 ^ 0x8000000000000000;
        if (-1 < (long)uVar10) {
          uVar7 = 1;
        }
        if ((uVar7 == 0) || (uVar7 != 1)) {
          if (puVar5[1] != 0) {
            lVar6 = 0x10;
            goto code_r0x0001019528b0;
          }
        }
        else if (uVar10 != 0) {
          lVar6 = 8;
code_r0x0001019528b0:
          _free(*(undefined8 *)((long)puVar5 + lVar6));
        }
        puVar5 = puVar5 + 4;
      }
      uVar11 = puVar2[5];
      goto joined_r0x000101952c6c;
    case 1:
      if (puVar2[2] != 0) {
        _free(puVar2[3]);
      }
      uVar11 = puVar2[6];
      uVar7 = puVar2[7];
      if (uVar7 != 0) {
        puVar15 = (undefined8 *)(uVar11 + 8);
        do {
          if (puVar15[-1] != 0) {
            _free(*puVar15);
          }
          puVar15 = puVar15 + 3;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (puVar2[5] != 0) {
        _free(uVar11);
      }
      uVar11 = puVar2[8];
      if (uVar11 != 0x8000000000000000) {
        uVar7 = puVar2[9];
        uVar10 = puVar2[10];
        if (uVar10 != 0) {
          puVar15 = (undefined8 *)(uVar7 + 0x10);
          do {
            if (puVar15[-1] != 0) {
              _free(*puVar15);
            }
            puVar15 = puVar15 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        if (uVar11 != 0) {
          _free(uVar7);
        }
      }
      if (puVar2[0xb] != 0x8000000000000000 && puVar2[0xb] != 0) {
        puVar4 = (ulong *)puVar2[0xc];
        goto code_r0x000108aa97c4;
      }
      break;
    case 2:
      if (puVar2[0x12] == 0x8000000000000000 || puVar2[0x12] == 0) {
        if (puVar2[0x15] != 0x8000000000000000 && puVar2[0x15] != 0) goto code_r0x000101952d14;
code_r0x000101952a78:
        uVar11 = puVar2[4];
        uVar7 = puVar2[5];
      }
      else {
        _free(puVar2[0x13]);
        if (puVar2[0x15] == 0x8000000000000000 || puVar2[0x15] == 0) goto code_r0x000101952a78;
code_r0x000101952d14:
        _free(puVar2[0x16]);
        uVar11 = puVar2[4];
        uVar7 = puVar2[5];
      }
      if (uVar7 != 0) {
        puVar15 = (undefined8 *)(uVar11 + 8);
        do {
          if (puVar15[-1] != 0) {
            _free(*puVar15);
          }
          puVar15 = puVar15 + 3;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (puVar2[3] != 0) {
        _free(uVar11);
      }
      if (puVar2[6] != 0x8000000000000000 && puVar2[6] != 0) {
        _free(puVar2[7]);
      }
      if (puVar2[0xc] != 0) {
        FUN_101933378();
      }
      if ((puVar2[9] != 0x8000000000000000) && (puVar2[9] != 0)) {
        puVar4 = (ulong *)puVar2[10];
        goto code_r0x000108aa97c4;
      }
      break;
    case 3:
      if (puVar2[0xb] != 0x8000000000000000 && puVar2[0xb] != 0) {
        _free(puVar2[0xc]);
      }
      if (puVar2[2] != 0) {
        _free(puVar2[3]);
      }
      if ((puVar2[0xe] != 0x8000000000000000) && (puVar2[0xe] != 0)) {
        uVar11 = puVar2[0xf];
code_r0x000101952dd0:
        _free(uVar11);
      }
      goto code_r0x000101952dd4;
    case 4:
      if (puVar2[5] == 0x8000000000000000 || puVar2[5] == 0) {
        if (puVar2[8] != 0x8000000000000000 && puVar2[8] != 0) goto code_r0x000101952cb0;
code_r0x000101952950:
        uVar11 = puVar2[0xb];
      }
      else {
        _free(puVar2[6]);
        if (puVar2[8] == 0x8000000000000000 || puVar2[8] == 0) goto code_r0x000101952950;
code_r0x000101952cb0:
        _free(puVar2[9]);
        uVar11 = puVar2[0xb];
      }
      if ((uVar11 != 0x8000000000000000) && (uVar11 != 0)) {
        _free(puVar2[0xc]);
      }
      if (puVar2[2] != 0) {
        _free(puVar2[3]);
      }
      puVar18 = *(undefined1 **)(puVar1 + -0x10);
      puVar20 = *(undefined **)(puVar1 + -8);
      puVar14 = *(ulong **)(puVar1 + -0x20);
      puVar5 = *(ulong **)(puVar1 + -0x18);
      unaff_x22 = *(ulong **)(puVar1 + -0x30);
      unaff_x21 = *(ulong **)(puVar1 + -0x28);
      unaff_x24 = *(undefined8 *)(puVar1 + -0x40);
      unaff_x23 = *(ulong *)(puVar1 + -0x38);
      puVar2 = puVar2 + 0xe;
      goto SUB_10194dc28;
    case 5:
      if (puVar2[7] != 0) {
        _free(puVar2[8]);
      }
      if (puVar2[2] == 0) {
code_r0x000101952e04:
        if (puVar2[3] == 0) {
          return;
        }
        puVar4 = (ulong *)puVar2[4];
        goto code_r0x000108aa97c4;
      }
      puVar4 = (ulong *)puVar2[4];
      puVar5 = puVar4;
      for (uVar11 = puVar2[5]; uVar11 != 0; uVar11 = uVar11 - 1) {
        uVar10 = *puVar5;
        uVar7 = uVar10 ^ 0x8000000000000000;
        if (-1 < (long)uVar10) {
          uVar7 = 1;
        }
        if ((uVar7 == 0) || (uVar7 != 1)) {
          if (puVar5[1] != 0) {
            lVar6 = 0x10;
            goto code_r0x0001019529a4;
          }
        }
        else if (uVar10 != 0) {
          lVar6 = 8;
code_r0x0001019529a4:
          _free(*(undefined8 *)((long)puVar5 + lVar6));
        }
        puVar5 = puVar5 + 4;
      }
      goto code_r0x000101952bc8;
    case 6:
      if (puVar2[0xb] == 0x8000000000000000 || puVar2[0xb] == 0) {
        if (puVar2[0xe] != 0x8000000000000000 && puVar2[0xe] != 0) goto code_r0x000101952dbc;
code_r0x000101952b38:
        uVar11 = puVar2[2];
      }
      else {
        _free(puVar2[0xc]);
        if (puVar2[0xe] == 0x8000000000000000 || puVar2[0xe] == 0) goto code_r0x000101952b38;
code_r0x000101952dbc:
        _free(puVar2[0xf]);
        uVar11 = puVar2[2];
      }
      if (uVar11 != 0) {
        uVar11 = puVar2[3];
        goto code_r0x000101952dd0;
      }
code_r0x000101952dd4:
      if (puVar2[5] != 0) {
        uVar11 = puVar2[6];
code_r0x000101952de0:
        _free(uVar11);
      }
code_r0x000101952de4:
      if (puVar2[8] != 0) {
        puVar4 = (ulong *)puVar2[9];
        goto code_r0x000108aa97c4;
      }
      break;
    case 7:
      if (puVar2[7] != 0) {
        _free(puVar2[8]);
      }
      if (puVar2[10] == 0x8000000000000000 || puVar2[10] == 0) {
        uVar11 = puVar2[2];
      }
      else {
        _free(puVar2[0xb]);
        uVar11 = puVar2[2];
      }
      if (uVar11 == 0) goto code_r0x000101952e04;
      puVar4 = (ulong *)puVar2[4];
      puVar5 = puVar4;
      for (uVar11 = puVar2[5]; uVar11 != 0; uVar11 = uVar11 - 1) {
        uVar10 = *puVar5;
        uVar7 = uVar10 ^ 0x8000000000000000;
        if (-1 < (long)uVar10) {
          uVar7 = 1;
        }
        if ((uVar7 == 0) || (uVar7 != 1)) {
          if (puVar5[1] != 0) {
            lVar6 = 0x10;
            goto code_r0x000101952b88;
          }
        }
        else if (uVar10 != 0) {
          lVar6 = 8;
code_r0x000101952b88:
          _free(*(undefined8 *)((long)puVar5 + lVar6));
        }
        puVar5 = puVar5 + 4;
      }
code_r0x000101952bc8:
      uVar11 = puVar2[3];
      goto joined_r0x000101952c6c;
    case 8:
      if (puVar2[0xb] != 0x8000000000000000 && puVar2[0xb] != 0) {
        _free(puVar2[0xc]);
      }
      if (puVar2[2] != 0) {
        _free(puVar2[3]);
      }
      if (puVar2[5] != 0) {
        _free(puVar2[6]);
      }
      puVar14 = (ulong *)puVar2[9];
      unaff_x23 = puVar2[10];
      if (unaff_x23 != 0) {
        unaff_x22 = puVar14 + 9;
        puVar20 = &UNK_101952c60;
        puVar1 = puVar1 + -0x40;
        puVar2 = puVar14;
        goto SUB_10194dc28;
      }
      uVar11 = puVar2[8];
      puVar4 = puVar14;
joined_r0x000101952c6c:
      if (uVar11 != 0) goto code_r0x000108aa97c4;
      break;
    case 9:
      if (puVar2[9] == 0x8000000000000000 || puVar2[9] == 0) {
        if (puVar2[0xc] != 0x8000000000000000 && puVar2[0xc] != 0) goto code_r0x000101952e40;
code_r0x000101952bf8:
        uVar11 = puVar2[2];
      }
      else {
        _free(puVar2[10]);
        if (puVar2[0xc] == 0x8000000000000000 || puVar2[0xc] == 0) goto code_r0x000101952bf8;
code_r0x000101952e40:
        _free(puVar2[0xd]);
        uVar11 = puVar2[2];
      }
      if (uVar11 != 4) {
        *(undefined8 *)(puVar1 + -0x30) = *(undefined8 *)(puVar1 + -0x30);
        *(undefined8 *)(puVar1 + -0x28) = *(undefined8 *)(puVar1 + -0x28);
        *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
        *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
        *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
        *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
        uVar11 = puVar2[2];
        if ((long)uVar11 < 2) {
          if (uVar11 == 0) {
            if (puVar2[3] == 0x8000000000000000 || puVar2[3] == 0) {
              uVar11 = puVar2[6];
            }
            else {
              _free(puVar2[4]);
              uVar11 = puVar2[6];
            }
            if (uVar11 != 0x8000000000000000) {
              puVar4 = (ulong *)puVar2[7];
              uVar7 = puVar2[8];
              if (uVar7 != 0) {
                puVar2 = puVar4 + 1;
                do {
                  if (puVar2[-1] != 0) {
                    _free(*puVar2);
                  }
                  puVar2 = puVar2 + 3;
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
              }
              if (uVar11 != 0) goto code_r0x000108aa97c4;
            }
          }
          else if ((puVar2[3] & 0x7fffffffffffffff) != 0) {
            puVar4 = (ulong *)puVar2[4];
            goto code_r0x000108aa97c4;
          }
        }
        else if (uVar11 == 2) {
          if (puVar2[3] == 0x8000000000000000 || puVar2[3] == 0) {
            uVar11 = puVar2[6];
          }
          else {
            _free(puVar2[4]);
            uVar11 = puVar2[6];
          }
          if ((uVar11 & 0x7fffffffffffffff) != 0) {
            puVar4 = (ulong *)puVar2[7];
            goto code_r0x000108aa97c4;
          }
        }
        return;
      }
      break;
    case 10:
      if (puVar2[2] != 0) {
        _free(puVar2[3]);
      }
      if (puVar2[5] != 0) {
        _free(puVar2[6]);
      }
      if (puVar2[0xb] != 0x8000000000000000 && puVar2[0xb] != 0) {
        uVar11 = puVar2[0xc];
        goto code_r0x000101952de0;
      }
      goto code_r0x000101952de4;
    case 0xb:
      if (puVar2[2] == 0) {
        return;
      }
      goto code_r0x0001019529f8;
    case 0xd:
      if (puVar2[2] == 0x8000000000000000 || puVar2[2] == 0) {
        return;
      }
code_r0x0001019529f8:
      puVar4 = (ulong *)puVar2[3];
      goto code_r0x000108aa97c4;
    }
    return;
  case 0x17:
  case 0x18:
  case 0x1c:
  case 0x1e:
  case 0x21:
  case 0x2e:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] != 0) {
      _free(puVar2[5]);
    }
    if (puVar2[7] != 0) {
      _free(puVar2[8]);
    }
    if (puVar2[10] == 0) {
      return;
    }
    puVar4 = (ulong *)puVar2[0xb];
    break;
  case 0x19:
  case 0x1a:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] == 0) {
      return;
    }
    puVar4 = (ulong *)puVar2[5];
    break;
  case 0x1b:
  case 0x2b:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] != 0) {
      _free(puVar2[5]);
    }
    if (puVar2[7] == 0) {
      return;
    }
    puVar4 = (ulong *)puVar2[8];
    break;
  case 0x1d:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] != 0) {
      _free(puVar2[5]);
    }
    if (puVar2[7] != 0) {
      _free(puVar2[8]);
    }
    if (puVar2[10] != 0) {
      _free(puVar2[0xb]);
    }
    if (puVar2[0xd] == 0) {
      return;
    }
    puVar4 = (ulong *)puVar2[0xe];
    break;
  case 0x1f:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] != 0) {
      _free(puVar2[5]);
    }
    if (puVar2[7] != 0) {
      _free(puVar2[8]);
    }
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(ulong *)(puVar1 + -0x38) = unaff_x23;
    *(ulong **)(puVar1 + -0x30) = unaff_x22;
    *(ulong **)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
    *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
    *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
    puVar4 = (ulong *)puVar2[0xb];
    uVar11 = puVar2[0xc];
    if (uVar11 != 0) {
      puVar5 = puVar4 + 4;
      do {
        if (puVar5[-4] != 0) {
          _free(puVar5[-3]);
        }
        if ((long)puVar5[2] < -0x7ffffffffffffffd || puVar5[2] == 0) {
          uVar7 = puVar5[-1];
        }
        else {
          _free(puVar5[3]);
          uVar7 = puVar5[-1];
        }
        if (uVar7 != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 9;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (puVar2[10] == 0) {
      return;
    }
    break;
  case 0x20:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if ((puVar2[4] & 0x7fffffffffffffff) == 0) {
      return;
    }
    puVar4 = (ulong *)puVar2[5];
    break;
  case 0x22:
  case 0x23:
  case 0x36:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] == 0x8000000000000000 || puVar2[4] == 0) {
      return;
    }
    puVar4 = (ulong *)puVar2[5];
    break;
  case 0x25:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[0xb] == 0x8000000000000000 || puVar2[0xb] == 0) {
      if (puVar2[0xe] != 0x8000000000000000 && puVar2[0xe] != 0) goto code_r0x000101933a50;
code_r0x000101933a14:
      if ((long)puVar2[0x11] < -0x7ffffffffffffffe || puVar2[0x11] == 0) {
        return;
      }
    }
    else {
      _free(puVar2[0xc]);
      if (puVar2[0xe] == 0x8000000000000000 || puVar2[0xe] == 0) goto code_r0x000101933a14;
code_r0x000101933a50:
      _free(puVar2[0xf]);
      if ((long)puVar2[0x11] < -0x7ffffffffffffffe || puVar2[0x11] == 0) {
        return;
      }
    }
    puVar4 = (ulong *)puVar2[0x12];
    break;
  case 0x26:
    *(ulong **)(puVar1 + -0x30) = unaff_x22;
    *(ulong **)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    puVar4 = (ulong *)puVar2[2];
    puVar5 = puVar4;
    for (uVar11 = puVar2[3]; uVar11 != 0; uVar11 = uVar11 - 1) {
      FUN_101960e38(puVar5);
      puVar5 = puVar5 + 0x4e;
    }
    if (puVar2[1] == 0) {
      return;
    }
    break;
  case 0x27:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] != 0) {
      _free(puVar2[5]);
    }
    if (puVar2[7] == 0x8000000000000000 || puVar2[7] == 0) {
      return;
    }
    puVar4 = (ulong *)puVar2[8];
    break;
  case 0x29:
    *(ulong **)(puVar1 + -0x30) = unaff_x22;
    *(ulong **)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    puVar4 = (ulong *)puVar2[5];
    uVar11 = puVar2[6];
    if (uVar11 != 0) {
      puVar5 = puVar4 + 1;
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (puVar2[4] == 0) {
      return;
    }
    break;
  case 0x2a:
  case 0x2c:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] != 0) {
      _free(puVar2[5]);
    }
    if (puVar2[7] != 0) {
      _free(puVar2[8]);
    }
    if (puVar2[10] == 0) {
      return;
    }
    puVar4 = (ulong *)puVar2[0xb];
    break;
  case 0x2d:
  case 0x31:
  case 0x3b:
  case 0x3c:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] == 0) {
      return;
    }
    puVar4 = (ulong *)puVar2[5];
    break;
  case 0x2f:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] == 0) {
      return;
    }
    puVar4 = (ulong *)puVar2[5];
    break;
  case 0x30:
    if (puVar2[4] == 0x8000000000000000 || puVar2[4] == 0) {
      uVar11 = puVar2[1];
    }
    else {
      *(undefined8 *)(puVar1 + -0x20) = uVar19;
      *(undefined8 *)(puVar1 + -0x18) = uVar12;
      *(undefined8 *)(puVar1 + -0x10) = uVar13;
      *(undefined8 *)(puVar1 + -8) = uVar21;
      _free(puVar2[5]);
      uVar11 = puVar2[1];
    }
    if (uVar11 == 0) {
      return;
    }
    puVar4 = (ulong *)puVar2[2];
    break;
  case 0x33:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[6] != 0) {
      _free(puVar2[7]);
    }
    if (puVar2[9] == 0x8000000000000000 || puVar2[9] == 0) {
      if (puVar2[0xc] == 0x8000000000000000 || puVar2[0xc] == 0) {
        return;
      }
    }
    else {
      _free(puVar2[10]);
      if (puVar2[0xc] == 0x8000000000000000 || puVar2[0xc] == 0) {
        return;
      }
    }
    puVar4 = (ulong *)puVar2[0xd];
    break;
  case 0x34:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] != 0) {
      _free(puVar2[5]);
    }
    *(ulong **)(puVar1 + -0x30) = unaff_x22;
    *(ulong **)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
    *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
    *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
    puVar4 = (ulong *)puVar2[8];
    uVar11 = puVar2[9];
    if (uVar11 != 0) {
      puVar5 = puVar4 + 6;
      do {
        if (puVar5[-6] != 0) {
          _free(puVar5[-5]);
        }
        if (puVar5[-3] != 0) {
          _free(puVar5[-2]);
        }
        if (*puVar5 != 0) {
          _free(puVar5[1]);
        }
        if ((puVar5[3] & 0x7fffffffffffffff) != 0) {
          _free(puVar5[4]);
        }
        puVar5 = puVar5 + 0xd;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (puVar2[7] == 0) {
      return;
    }
    break;
  case 0x35:
    if (puVar2[1] == 0) {
      return;
    }
    puVar4 = (ulong *)puVar2[2];
    break;
  case 0x37:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    puVar18 = *(undefined1 **)(puVar1 + -0x10);
    puVar20 = *(undefined **)(puVar1 + -8);
    puVar14 = *(ulong **)(puVar1 + -0x20);
    puVar5 = *(ulong **)(puVar1 + -0x18);
    puVar2 = puVar2 + 4;
    goto SUB_10194dc28;
  case 0x3a:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] != 0) {
      _free(puVar2[5]);
    }
    if (puVar2[7] == 0x8000000000000000 || puVar2[7] == 0) {
      return;
    }
    puVar4 = (ulong *)puVar2[8];
    break;
  case 0x3e:
    *(ulong **)(puVar1 + -0x30) = unaff_x22;
    *(ulong **)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    puVar4 = (ulong *)puVar2[2];
    uVar11 = puVar2[3];
    if (uVar11 != 0) {
      puVar5 = puVar4 + 1;
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (puVar2[1] == 0) {
      return;
    }
    break;
  case 0x3f:
    uVar11 = puVar2[1] & 0x7fffffffffffffff;
joined_r0x00010196513c:
    if (uVar11 == 0) {
code_r0x000101965198:
      return;
    }
    puVar4 = (ulong *)puVar2[2];
    break;
  default:
    *(undefined8 *)(puVar1 + -0x20) = uVar19;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar13;
    *(undefined8 *)(puVar1 + -8) = uVar21;
    if (puVar2[1] == 0x8000000000000000 || puVar2[1] == 0) {
      if (puVar2[4] == 0x8000000000000000 || puVar2[4] == 0) {
        return;
      }
    }
    else {
      _free(puVar2[2]);
      if (puVar2[4] == 0x8000000000000000 || puVar2[4] == 0) {
        return;
      }
    }
    puVar4 = (ulong *)puVar2[5];
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar4);
  return;
}

