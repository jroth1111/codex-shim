
/* WARNING: Possible PIC construction at 0x000100cadc24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e34a20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e34a24) */
/* WARNING: Removing unreachable block (ram,0x000100e34a2c) */
/* WARNING: Removing unreachable block (ram,0x000100e34a34) */
/* WARNING: Removing unreachable block (ram,0x000100e34a38) */
/* WARNING: Removing unreachable block (ram,0x000100e34a40) */
/* WARNING: Removing unreachable block (ram,0x000100e34a4c) */
/* WARNING: Removing unreachable block (ram,0x000100e34a58) */
/* WARNING: Removing unreachable block (ram,0x000100e34a68) */
/* WARNING: Removing unreachable block (ram,0x000100e34a74) */
/* WARNING: Removing unreachable block (ram,0x000100e34a98) */
/* WARNING: Removing unreachable block (ram,0x000100e34a84) */
/* WARNING: Removing unreachable block (ram,0x0001060f6e40) */
/* WARNING: Removing unreachable block (ram,0x0001060f6e58) */
/* WARNING: Removing unreachable block (ram,0x0001060f6e64) */
/* WARNING: Removing unreachable block (ram,0x0001060f6e68) */
/* WARNING: Removing unreachable block (ram,0x0001060f6e74) */
/* WARNING: Removing unreachable block (ram,0x0001060f6e7c) */
/* WARNING: Removing unreachable block (ram,0x0001060f6ea4) */
/* WARNING: Removing unreachable block (ram,0x0001060f6e90) */
/* WARNING: Type propagation algorithm not settling */

void FUN_100e349f0(long *param_1)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *unaff_x19;
  undefined8 uVar13;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 *puVar14;
  ulong unaff_x22;
  undefined8 unaff_x23;
  long lVar15;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar16;
  undefined1 *unaff_x29;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xffffffffffffffe0;
  puVar16 = &stack0xfffffffffffffff0;
  if (*param_1 == 2) {
    puVar2 = (ulong *)(param_1 + 1);
    puVar1 = (undefined1 *)register0x00000008;
    param_1 = unaff_x19;
    puVar16 = unaff_x29;
  }
  else {
    puVar2 = (ulong *)(param_1 + 2);
    unaff_x30 = 0x100e34a24;
  }
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(long **)(puVar1 + -0x18) = param_1;
  *(undefined1 **)(puVar1 + -0x10) = puVar16;
  *(undefined8 *)(puVar1 + -8) = unaff_x30;
  lVar6 = *puVar2 + 0x7fffffffffffffbf;
  if (*puVar2 < 0x8000000000000041) {
    lVar6 = 1;
  }
  if (lVar6 == 0) {
    puVar3 = puVar2 + 1;
    *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
    *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
    *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
    uVar11 = *puVar3 + 0x8000000000000001 & (long)*puVar3 >> 0x3f;
    if (3 < (long)uVar11) {
      if ((long)uVar11 < 6) {
        if (uVar11 == 4) {
          if (puVar2[0x1d] != 0x8000000000000000 && puVar2[0x1d] != 0) {
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
          puVar16 = *(undefined1 **)(puVar1 + -0x10);
          uVar17 = *(undefined8 *)(puVar1 + -8);
          uVar11 = *(ulong *)(puVar1 + -0x20);
          puVar3 = *(ulong **)(puVar1 + -0x18);
          goto SUB_100d127fc;
        }
        if (uVar11 == 5) {
          if ((puVar2[0x1a] != 0x8000000000000000) && (puVar2[0x1a] != 0)) {
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
          puVar2 = puVar2 + 0x11;
          uVar17 = *(undefined8 *)(puVar1 + -0x10);
          uVar18 = *(undefined8 *)(puVar1 + -8);
          uVar13 = *(undefined8 *)(puVar1 + -0x20);
          uVar12 = *(undefined8 *)(puVar1 + -0x18);
          goto code_r0x000100de6690;
        }
      }
      else {
        if (uVar11 == 6) {
          if (puVar2[2] == 0x8000000000000000 || puVar2[2] == 0) {
            uVar11 = puVar2[5];
          }
          else {
            _free(puVar2[3]);
            uVar11 = puVar2[5];
          }
          if ((uVar11 & 0x7fffffffffffffff) == 0) {
            return;
          }
          puVar3 = (ulong *)puVar2[6];
          goto code_r0x000108aa97c4;
        }
        if (uVar11 == 7) {
          if (puVar2[2] == 0x8000000000000000) {
            return;
          }
          if (puVar2[2] == 0) {
            return;
          }
          puVar3 = (ulong *)puVar2[3];
          goto code_r0x000108aa97c4;
        }
        if (uVar11 == 8) {
          if ((puVar2[0x13] != 0x8000000000000000) && (puVar2[0x13] != 0)) {
            _free(puVar2[0x14]);
          }
          if (puVar2[2] != 0) {
            _free(puVar2[3]);
          }
          FUN_100cdf624(puVar2 + 0xb);
          if ((puVar2[5] != 0x8000000000000000) && (puVar2[5] != 0)) {
            _free(puVar2[6]);
          }
          if (puVar2[8] == 0x8000000000000000) {
            return;
          }
          if (puVar2[8] == 0) {
            return;
          }
          puVar3 = (ulong *)puVar2[9];
          goto code_r0x000108aa97c4;
        }
      }
LAB_100e45d20:
      if ((puVar2[0x16] != 0x8000000000000000) && (puVar2[0x16] != 0)) {
        _free(puVar2[0x17]);
      }
      *(ulong *)(puVar1 + -0x30) = unaff_x22;
      *(ulong *)(puVar1 + -0x28) = unaff_x21;
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
        puVar14 = (undefined8 *)(uVar11 + 8);
        do {
          if (puVar14[-1] != 0) {
            _free(*puVar14);
          }
          puVar14 = puVar14 + 3;
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
      puVar3 = (ulong *)puVar2[0xc];
      puVar4 = puVar3;
      for (uVar11 = puVar2[0xd]; uVar11 != 0; uVar11 = uVar11 - 1) {
        FUN_100e1d024(puVar4);
        puVar4 = puVar4 + 10;
      }
      if (puVar2[0xb] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    if (1 < (long)uVar11) {
      if (uVar11 == 2) {
        if (puVar2[0xe] != 0x8000000000000000 && puVar2[0xe] != 0) {
          _free(puVar2[0xf]);
        }
        *(ulong *)(puVar1 + -0x30) = unaff_x22;
        *(ulong *)(puVar1 + -0x28) = unaff_x21;
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
        puVar3 = (ulong *)puVar2[0xc];
        puVar4 = puVar3;
        for (uVar11 = puVar2[0xd]; uVar11 != 0; uVar11 = uVar11 - 1) {
          FUN_100e4b8ec(puVar4);
          puVar4 = puVar4 + 0xd;
        }
        if (puVar2[0xb] == 0) {
          return;
        }
        goto code_r0x000108aa97c4;
      }
      if (uVar11 != 3) goto LAB_100e45d20;
      if ((puVar2[0x20] != 0x8000000000000000) && (puVar2[0x20] != 0)) {
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
      *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
      *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
      *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
      *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
      uVar11 = puVar2[0xb];
      if (uVar11 == 0x8000000000000000) {
        if (puVar2[0x15] != 0x8000000000000005) {
          FUN_100de6690();
        }
        if (puVar2[0xc] != 0) {
          _free(puVar2[0xd]);
        }
        if (puVar2[0xf] != 0) {
          _free(puVar2[0x10]);
        }
        if (puVar2[0x12] == 0) {
          return;
        }
        puVar3 = (ulong *)puVar2[0x13];
        goto code_r0x000108aa97c4;
      }
      if (puVar2[0x17] != 0x8000000000000005) {
        FUN_100de6690();
      }
      if (uVar11 != 0) {
        _free(puVar2[0xc]);
      }
      *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
      *(ulong *)(puVar1 + -0x30) = unaff_x22;
      *(ulong *)(puVar1 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
      *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
      *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
      *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
      if (puVar2[0xe] == 0x8000000000000000 || puVar2[0xe] == 0) {
        uVar11 = puVar2[0x14];
        if (uVar11 == 0) goto LAB_100e5d38c;
LAB_100e5d360:
        uVar7 = puVar2[0x15];
        uVar10 = puVar2[0x16];
        *(undefined8 *)(puVar1 + -0x98) = 0;
        *(ulong *)(puVar1 + -0x90) = uVar11;
        *(ulong *)(puVar1 + -0x88) = uVar7;
        *(undefined8 *)(puVar1 + -0x78) = 0;
        *(ulong *)(puVar1 + -0x70) = uVar11;
        *(ulong *)(puVar1 + -0x68) = uVar7;
        uVar17 = 1;
      }
      else {
        _free(puVar2[0xf]);
        uVar11 = puVar2[0x14];
        if (uVar11 != 0) goto LAB_100e5d360;
LAB_100e5d38c:
        uVar17 = 0;
        uVar10 = 0;
      }
      *(undefined8 *)(puVar1 + -0xa0) = uVar17;
      *(undefined8 *)(puVar1 + -0x80) = uVar17;
      *(ulong *)(puVar1 + -0x60) = uVar10;
      while( true ) {
        FUN_100f3aeb8(puVar1 + -0x58,puVar1 + -0xa0);
        lVar6 = *(long *)(puVar1 + -0x58);
        if (lVar6 == 0) break;
        lVar15 = *(long *)(puVar1 + -0x48);
        lVar8 = lVar6 + lVar15 * 0x18;
        if (*(long *)(lVar8 + 8) != 0) {
          _free(*(undefined8 *)(lVar8 + 0x10));
        }
        func_0x000100e7d17c(lVar6 + lVar15 * 0x88 + 0x110);
      }
      uVar11 = puVar2[0x11];
      if (uVar11 != 0x8000000000000000) {
        puVar3 = (ulong *)puVar2[0x12];
        uVar7 = puVar2[0x13];
        if (uVar7 != 0) {
          puVar2 = puVar3 + 1;
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
    if (uVar11 != 0) {
      if (uVar11 == 1) {
        if ((puVar2[0x12] != 0x8000000000000000) && (puVar2[0x12] != 0)) {
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
        puVar3 = (ulong *)puVar2[0xf];
        goto code_r0x000108aa97c4;
      }
      goto LAB_100e45d20;
    }
    if (puVar2[0x32] != 0x8000000000000000 && puVar2[0x32] != 0) {
      _free(puVar2[0x33]);
    }
    *(undefined8 *)(puVar1 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar1 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar1 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
    *(ulong *)(puVar1 + -0x30) = unaff_x22;
    *(ulong *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
    *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
    *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
    puVar16 = puVar1 + -0x10;
    if (*puVar3 != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] != 0) {
      _free(puVar2[5]);
    }
    if (puVar2[7] != 0) {
      _free(puVar2[8]);
    }
    uVar11 = 0x8000000000000000;
    if (puVar2[10] == 0x8000000000000000 || puVar2[10] == 0) {
      uVar7 = puVar2[0xd];
    }
    else {
      _free(puVar2[0xb]);
      uVar7 = puVar2[0xd];
    }
    if ((uVar7 != 0x8000000000000000) && (uVar7 != 0)) {
      _free(puVar2[0xe]);
    }
    if ((puVar2[0x10] & 0x7fffffffffffffff) == 0) {
      uVar7 = puVar2[0x14];
    }
    else {
      _free(puVar2[0x11]);
      uVar7 = puVar2[0x14];
    }
    if ((uVar7 != 0x8000000000000000) && (uVar7 != 0)) {
      _free(puVar2[0x15]);
    }
    if ((puVar2[0x17] & 0x7fffffffffffffff) == 0) {
      unaff_x22 = puVar2[0x1a];
    }
    else {
      _free(puVar2[0x18]);
      unaff_x22 = puVar2[0x1a];
    }
    if (unaff_x22 != 0x8000000000000000) {
      uVar11 = puVar2[0x1b];
      uVar7 = uVar11;
      for (uVar10 = puVar2[0x1c]; uVar10 != 0; uVar10 = uVar10 - 1) {
        FUN_100e4af0c(uVar7);
        uVar7 = uVar7 + 0x50;
        unaff_x21 = uVar7;
      }
      unaff_x23 = 0;
      if (unaff_x22 != 0) {
        _free(uVar11);
      }
    }
    if (puVar2[0x26] == 0x8000000000000002) {
      uVar11 = puVar2[0x1d];
      if (uVar11 != 0x8000000000000000) {
        uVar7 = puVar2[0x1e];
        uVar10 = puVar2[0x1f];
        if (uVar10 != 0) {
          puVar14 = (undefined8 *)(uVar7 + 8);
          do {
            if (puVar14[-1] != 0) {
              _free(*puVar14);
            }
            puVar14 = puVar14 + 3;
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
          puVar14 = (undefined8 *)(uVar7 + 8);
          do {
            if (puVar14[-1] != 0) {
              _free(*puVar14);
            }
            puVar14 = puVar14 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        if (uVar11 != 0) {
          _free(uVar7);
        }
      }
      uVar11 = puVar2[0x23];
      if (uVar11 != 0x8000000000000000) {
        puVar3 = (ulong *)puVar2[0x24];
        uVar7 = puVar2[0x25];
        if (uVar7 != 0) {
          uVar10 = 0;
          do {
            puVar2 = puVar3 + uVar10 * 4;
            uVar5 = *puVar2;
            uVar9 = uVar5 ^ 0x8000000000000000;
            if (-1 < (long)uVar5) {
              uVar9 = 3;
            }
            if (uVar9 == 3) {
              if (uVar5 != 0) {
                uVar9 = puVar2[1];
LAB_100cadce8:
                _free(uVar9);
              }
            }
            else if (uVar9 == 2) {
              uVar9 = puVar2[2];
              uVar5 = puVar2[3];
              if (uVar5 != 0) {
                puVar14 = (undefined8 *)(uVar9 + 8);
                do {
                  if (puVar14[-1] != 0) {
                    _free(*puVar14);
                  }
                  puVar14 = puVar14 + 3;
                  uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
              }
              if (puVar2[1] != 0) goto LAB_100cadce8;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 != uVar7);
        }
        if (uVar11 != 0) goto code_r0x000108aa97c4;
      }
      return;
    }
    puVar2 = puVar2 + 0x26;
    uVar17 = 0x100cadc28;
    puVar1 = puVar1 + -0x60;
    goto SUB_100d127fc;
  }
  if (lVar6 != 1) {
    if (lVar6 != 2) {
      if (puVar2[4] != 0x8000000000000005) {
        FUN_100de6690();
      }
      if (puVar2[1] != 0) {
        _free(puVar2[2]);
      }
      if ((puVar2[0xe] == 0x8000000000000000) || (puVar2[0xe] == 0)) {
        return;
      }
      puVar3 = (ulong *)puVar2[0xf];
      goto code_r0x000108aa97c4;
    }
    if (puVar2[1] != 0x8000000000000000 && puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    puVar2 = puVar2 + 4;
    uVar17 = *(undefined8 *)(puVar1 + -0x10);
    uVar18 = *(undefined8 *)(puVar1 + -8);
    uVar13 = *(undefined8 *)(puVar1 + -0x20);
    uVar12 = *(undefined8 *)(puVar1 + -0x18);
code_r0x000100de6690:
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
    *(ulong *)(puVar1 + -0x30) = unaff_x22;
    *(ulong *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    uVar11 = *puVar2 ^ 0x8000000000000000;
    if (-1 < (long)*puVar2) {
      uVar11 = 5;
    }
    if (uVar11 < 3) {
      return;
    }
    if (uVar11 == 3) {
      if (puVar2[1] == 0) {
        return;
      }
      puVar3 = (ulong *)puVar2[2];
    }
    else if (uVar11 == 4) {
      puVar3 = (ulong *)puVar2[2];
      lVar6 = puVar2[3] + 1;
      puVar4 = puVar3;
      while (lVar6 = lVar6 + -1, lVar6 != 0) {
        FUN_100de6690(puVar4);
        puVar4 = puVar4 + 9;
      }
      if (puVar2[1] == 0) {
        return;
      }
    }
    else {
      uVar11 = puVar2[4];
      if ((uVar11 != 0) && (uVar11 * 9 != -0x11)) {
        _free(puVar2[3] + uVar11 * -8 + -8);
      }
      *(undefined8 *)(puVar1 + -0x40) = *(undefined8 *)(puVar1 + -0x40);
      *(undefined8 *)(puVar1 + -0x38) = *(undefined8 *)(puVar1 + -0x38);
      *(undefined8 *)(puVar1 + -0x30) = *(undefined8 *)(puVar1 + -0x30);
      *(undefined8 *)(puVar1 + -0x28) = *(undefined8 *)(puVar1 + -0x28);
      *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
      *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
      *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
      *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
      puVar3 = (ulong *)puVar2[1];
      lVar6 = puVar2[2] + 1;
      puVar4 = puVar3;
      while (lVar6 = lVar6 + -1, lVar6 != 0) {
        if (*puVar4 != 0) {
          _free(puVar4[1]);
        }
        FUN_100de6690(puVar4 + 3);
        puVar4 = puVar4 + 0xd;
      }
      if (*puVar2 == 0) {
        return;
      }
    }
    goto code_r0x000108aa97c4;
  }
  uVar17 = *(undefined8 *)(puVar1 + -0x10);
  uVar18 = *(undefined8 *)(puVar1 + -8);
  uVar13 = *(undefined8 *)(puVar1 + -0x20);
  uVar12 = *(undefined8 *)(puVar1 + -0x18);
  uVar11 = *puVar2 ^ 0x8000000000000000;
  if (-1 < (long)*puVar2) {
    uVar11 = 1;
  }
  switch(uVar11) {
  case 0:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
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
    puVar3 = (ulong *)puVar2[0xc];
    break;
  case 1:
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
    *(ulong *)(puVar1 + -0x30) = unaff_x22;
    *(ulong *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
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
      FUN_100e0fca4(puVar2 + 0x30);
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
    puVar3 = (ulong *)puVar2[0x13];
    lVar6 = puVar2[0x14] + 1;
    puVar4 = puVar3;
    while (lVar6 = lVar6 + -1, lVar6 != 0) {
      FUN_100e4623c(puVar4);
      puVar4 = puVar4 + 0x14;
    }
    if (puVar2[0x12] == 0) {
      return;
    }
    break;
  case 2:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if ((long)puVar2[4] < -0x7ffffffffffffffd || puVar2[4] == 0) {
      return;
    }
    puVar3 = (ulong *)puVar2[5];
    break;
  case 3:
    if (puVar2[1] == 0) {
      return;
    }
    puVar3 = (ulong *)puVar2[2];
    break;
  case 4:
    if (puVar2[1] == 0) {
      return;
    }
    puVar3 = (ulong *)puVar2[2];
    break;
  case 5:
    uVar11 = puVar2[1];
    goto joined_r0x000100e52974;
  case 6:
  case 0x24:
  case 0x28:
    goto code_r0x000100e529d0;
  case 7:
  case 0x20:
  case 0x32:
  case 0x3d:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] == 0x8000000000000000 || puVar2[4] == 0) {
      return;
    }
    puVar3 = (ulong *)puVar2[5];
    break;
  case 8:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
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
    puVar3 = (ulong *)puVar2[7];
    break;
  case 9:
    if (puVar2[1] == 0) {
      return;
    }
    puVar3 = (ulong *)puVar2[2];
    break;
  case 10:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
    *(ulong *)(puVar1 + -0x30) = unaff_x22;
    *(ulong *)(puVar1 + -0x28) = unaff_x21;
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
        puVar14 = (undefined8 *)(uVar7 + 8);
        do {
          if (puVar14[-1] != 0) {
            _free(*puVar14);
          }
          puVar14 = puVar14 + 3;
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
    puVar3 = (ulong *)puVar2[0x11];
    break;
  case 0xb:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    if (puVar2[0xd] != 0) {
      _free(puVar2[0xe]);
    }
    if (puVar2[0x10] == 0) {
      return;
    }
    puVar3 = (ulong *)puVar2[0x11];
    break;
  case 0xc:
  case 0xe:
    if (puVar2[0x15] != 0) {
      *(undefined8 *)(puVar1 + -0x20) = uVar13;
      *(undefined8 *)(puVar1 + -0x18) = uVar12;
      *(undefined8 *)(puVar1 + -0x10) = uVar17;
      *(undefined8 *)(puVar1 + -8) = uVar18;
      _free(puVar2[0x16]);
      uVar17 = *(undefined8 *)(puVar1 + -0x10);
      uVar18 = *(undefined8 *)(puVar1 + -8);
      uVar13 = *(undefined8 *)(puVar1 + -0x20);
      uVar12 = *(undefined8 *)(puVar1 + -0x18);
    }
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
    *(ulong *)(puVar1 + -0x30) = unaff_x22;
    *(ulong *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    if (puVar2[7] != 0) {
      _free(puVar2[8]);
    }
    uVar11 = puVar2[0xb];
    lVar6 = puVar2[0xc] + 1;
    uVar7 = uVar11;
    while (lVar6 = lVar6 + -1, lVar6 != 0) {
      FUN_100e42904(uVar7);
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
        puVar3 = (ulong *)puVar2[0x11];
        break;
      }
    }
    return;
  case 0xd:
  case 0xf:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    if (puVar2[0x14] != 0) {
      _free(puVar2[0x15]);
    }
    if (puVar2[0x17] != 0x8000000000000000 && puVar2[0x17] != 0) {
      _free(puVar2[0x18]);
    }
    *(ulong *)(puVar1 + -0x30) = unaff_x22;
    *(ulong *)(puVar1 + -0x28) = unaff_x21;
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
      puVar3 = (ulong *)puVar2[0xc];
      uVar11 = puVar2[0xd];
    }
    else {
      _free(puVar2[0xf]);
      puVar3 = (ulong *)puVar2[0xc];
      uVar11 = puVar2[0xd];
    }
    if (uVar11 != 0) {
      puVar4 = puVar3 + 1;
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 4;
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
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] != 0) {
      _free(puVar2[5]);
    }
    if (puVar2[7] == 0) {
      return;
    }
    puVar3 = (ulong *)puVar2[8];
    break;
  case 0x11:
    *(ulong *)(puVar1 + -0x30) = unaff_x22;
    *(ulong *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] != 0) {
      _free(puVar2[5]);
    }
    if (puVar2[10] == 0x8000000000000000 || puVar2[10] == 0) {
      puVar3 = (ulong *)puVar2[8];
      uVar11 = puVar2[9];
    }
    else {
      _free(puVar2[0xb]);
      puVar3 = (ulong *)puVar2[8];
      uVar11 = puVar2[9];
    }
    if (uVar11 != 0) {
      puVar4 = puVar3 + 1;
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (puVar2[7] == 0) {
      return;
    }
    break;
  case 0x12:
  case 0x15:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    FUN_100e42904();
    if (puVar2[0x20] != 0) {
      _free(puVar2[0x21]);
    }
    if (puVar2[0x23] == 0) {
      return;
    }
    puVar3 = (ulong *)puVar2[0x24];
    break;
  case 0x13:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
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
    uVar17 = *(undefined8 *)(puVar1 + -0x10);
    uVar18 = *(undefined8 *)(puVar1 + -8);
    uVar13 = *(undefined8 *)(puVar1 + -0x20);
    uVar12 = *(undefined8 *)(puVar1 + -0x18);
    goto DAT_100e7cfa0;
  case 0x14:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
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
    uVar17 = *(undefined8 *)(puVar1 + -0x10);
    uVar18 = *(undefined8 *)(puVar1 + -8);
    uVar13 = *(undefined8 *)(puVar1 + -0x20);
    uVar12 = *(undefined8 *)(puVar1 + -0x18);
DAT_100e7cfa0:
    *(ulong *)(puVar1 + -0x30) = unaff_x22;
    *(ulong *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    uVar7 = puVar2[0x11];
    uVar11 = uVar7 ^ 0x8000000000000000;
    if (-1 < (long)uVar7) {
      uVar11 = 4;
    }
    if ((long)uVar11 < 2) {
      if (uVar11 == 0) {
code_r0x000100e7d0a0:
        if (puVar2[0x12] != 0) {
          _free(puVar2[0x13]);
        }
        if (puVar2[0x15] == 0) {
          return;
        }
        puVar3 = (ulong *)puVar2[0x16];
        break;
      }
      if (uVar11 == 1) {
        if (puVar2[0x12] != 0) {
          _free(puVar2[0x13]);
        }
        uVar11 = puVar2[0x16];
        uVar7 = puVar2[0x17];
        if (uVar7 != 0) {
          puVar14 = (undefined8 *)(uVar11 + 8);
          do {
            if (puVar14[-1] != 0) {
              _free(*puVar14);
            }
            puVar14 = puVar14 + 3;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (puVar2[0x15] != 0) {
          _free(uVar11);
        }
        if (puVar2[0x18] == 0) {
          return;
        }
        puVar3 = (ulong *)puVar2[0x19];
        break;
      }
    }
    else {
      if (uVar11 == 2) {
        if (puVar2[0x12] != 0) {
          _free(puVar2[0x13]);
        }
        puVar3 = (ulong *)puVar2[0x16];
        uVar11 = puVar2[0x17];
        if (uVar11 != 0) {
          puVar4 = puVar3 + 1;
          do {
            if (puVar4[-1] != 0) {
              _free(*puVar4);
            }
            puVar4 = puVar4 + 3;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        if (puVar2[0x15] == 0) {
          return;
        }
        break;
      }
      if (uVar11 == 3) goto code_r0x000100e7d0a0;
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
        puVar3 = (ulong *)puVar2[0x1e];
        break;
      }
    }
    if (puVar2[0x12] != 0x8000000000000000 && puVar2[0x12] != 0) {
      _free(puVar2[0x13]);
    }
    puVar2 = puVar2 + 0x15;
    puVar16 = *(undefined1 **)(puVar1 + -0x10);
    uVar17 = *(undefined8 *)(puVar1 + -8);
    uVar11 = *(ulong *)(puVar1 + -0x20);
    puVar3 = *(ulong **)(puVar1 + -0x18);
    unaff_x22 = *(ulong *)(puVar1 + -0x30);
    unaff_x21 = *(ulong *)(puVar1 + -0x28);
SUB_100d127fc:
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
    *(ulong *)(puVar1 + -0x30) = unaff_x22;
    *(ulong *)(puVar1 + -0x28) = unaff_x21;
    *(ulong *)(puVar1 + -0x20) = uVar11;
    *(ulong **)(puVar1 + -0x18) = puVar3;
    *(undefined1 **)(puVar1 + -0x10) = puVar16;
    *(undefined8 *)(puVar1 + -8) = uVar17;
    uVar11 = *puVar2;
    if (uVar11 != 0x8000000000000001) {
      if (uVar11 != 0x8000000000000000) {
        uVar7 = puVar2[1];
        uVar10 = puVar2[2];
        if (uVar10 != 0) {
          puVar14 = (undefined8 *)(uVar7 + 8);
          do {
            if (puVar14[-1] != 0) {
              _free(*puVar14);
            }
            puVar14 = puVar14 + 3;
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
          puVar14 = (undefined8 *)(uVar7 + 8);
          do {
            if (puVar14[-1] != 0) {
              _free(*puVar14);
            }
            puVar14 = puVar14 + 3;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        if (uVar11 != 0) {
          _free(uVar7);
        }
      }
      if (puVar2[6] != 0x8000000000000000) {
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
        puVar3 = (ulong *)puVar2[7];
        puVar4 = puVar3;
        for (uVar11 = puVar2[8]; uVar11 != 0; uVar11 = uVar11 - 1) {
          uVar7 = *puVar4;
          lVar6 = uVar7 + 0x7ffffffffffffffb;
          if (uVar7 < 0x8000000000000005) {
            lVar6 = 2;
          }
          if ((lVar6 == 0) || (lVar6 == 1)) {
            uVar7 = puVar4[1];
joined_r0x000100ce3ce4:
            if (uVar7 != 0) {
              lVar6 = 0x10;
LAB_100ce3cec:
              _free(*(undefined8 *)((long)puVar4 + lVar6));
            }
          }
          else {
            uVar10 = uVar7 ^ 0x8000000000000000;
            if (-1 < (long)uVar7) {
              uVar10 = 5;
            }
            if (uVar10 < 5) {
              if (uVar10 == 2) {
                uVar7 = puVar4[1] & 0x7fffffffffffffff;
                goto joined_r0x000100ce3ce4;
              }
            }
            else {
              if (uVar7 != 0) {
                _free(puVar4[1]);
              }
              if ((puVar4[3] & 0x7fffffffffffffff) != 0) {
                lVar6 = 0x20;
                goto LAB_100ce3cec;
              }
            }
          }
          puVar4 = puVar4 + 7;
        }
        if (puVar2[6] == 0) {
          return;
        }
        break;
      }
    }
    return;
  case 0x16:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    if (puVar2[0x19] != 0) {
      _free(puVar2[0x1a]);
    }
    if (puVar2[0x1c] != 0) {
      _free(puVar2[0x1d]);
    }
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
    *(ulong *)(puVar1 + -0x30) = unaff_x22;
    *(ulong *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
    *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
    *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
    lVar6 = 2;
    if (1 < puVar2[1]) {
      lVar6 = puVar2[1] - 2;
    }
    switch(lVar6) {
    case 0:
      if (puVar2[8] != 0x8000000000000000 && puVar2[8] != 0) {
        _free(puVar2[9]);
      }
      if (puVar2[2] != 0) {
        _free(puVar2[3]);
      }
      puVar3 = (ulong *)puVar2[6];
      puVar4 = puVar3;
      for (uVar11 = puVar2[7]; uVar11 != 0; uVar11 = uVar11 - 1) {
        uVar10 = *puVar4;
        uVar7 = uVar10 ^ 0x8000000000000000;
        if (-1 < (long)uVar10) {
          uVar7 = 1;
        }
        if ((uVar7 == 0) || (uVar7 != 1)) {
          if (puVar4[1] != 0) {
            lVar6 = 0x10;
            goto code_r0x000100e02ab0;
          }
        }
        else if (uVar10 != 0) {
          lVar6 = 8;
code_r0x000100e02ab0:
          _free(*(undefined8 *)((long)puVar4 + lVar6));
        }
        puVar4 = puVar4 + 4;
      }
      uVar11 = puVar2[5];
      break;
    case 1:
      if (puVar2[2] != 0) {
        _free(puVar2[3]);
      }
      uVar11 = puVar2[6];
      uVar7 = puVar2[7];
      if (uVar7 != 0) {
        puVar14 = (undefined8 *)(uVar11 + 8);
        do {
          if (puVar14[-1] != 0) {
            _free(*puVar14);
          }
          puVar14 = puVar14 + 3;
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
          puVar14 = (undefined8 *)(uVar7 + 0x10);
          do {
            if (puVar14[-1] != 0) {
              _free(*puVar14);
            }
            puVar14 = puVar14 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        if (uVar11 != 0) {
          _free(uVar7);
        }
      }
      if (puVar2[0xb] == 0x8000000000000000 || puVar2[0xb] == 0) {
        return;
      }
      puVar3 = (ulong *)puVar2[0xc];
      goto code_r0x000108aa97c4;
    case 2:
      if (puVar2[0x12] != 0x8000000000000000 && puVar2[0x12] != 0) {
        _free(puVar2[0x13]);
      }
      if (puVar2[0x15] != 0x8000000000000000 && puVar2[0x15] != 0) {
        _free(puVar2[0x16]);
      }
      *(undefined8 *)(puVar1 + -0x30) = *(undefined8 *)(puVar1 + -0x30);
      *(undefined8 *)(puVar1 + -0x28) = *(undefined8 *)(puVar1 + -0x28);
      *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
      *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
      *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
      *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
      uVar11 = puVar2[4];
      uVar7 = puVar2[5];
      if (uVar7 != 0) {
        puVar14 = (undefined8 *)(uVar11 + 8);
        do {
          if (puVar14[-1] != 0) {
            _free(*puVar14);
          }
          puVar14 = puVar14 + 3;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (puVar2[3] != 0) {
        _free(uVar11);
      }
      if (puVar2[6] == 0x8000000000000000 || puVar2[6] == 0) {
        uVar11 = puVar2[0xc];
      }
      else {
        _free(puVar2[7]);
        uVar11 = puVar2[0xc];
      }
      if (uVar11 != 0) {
        FUN_100cb56bc();
      }
      if ((puVar2[9] == 0x8000000000000000) || (puVar2[9] == 0)) {
        return;
      }
      puVar3 = (ulong *)puVar2[10];
      goto code_r0x000108aa97c4;
    case 3:
      if (puVar2[0xb] != 0x8000000000000000 && puVar2[0xb] != 0) {
        _free(puVar2[0xc]);
      }
      if (puVar2[2] != 0) {
        _free(puVar2[3]);
      }
      if ((puVar2[0xe] != 0x8000000000000000) && (puVar2[0xe] != 0)) {
        uVar11 = puVar2[0xf];
code_r0x000100e02f44:
        _free(uVar11);
      }
      goto code_r0x000100e02f48;
    case 4:
      if (puVar2[5] == 0x8000000000000000 || puVar2[5] == 0) {
        if (puVar2[8] != 0x8000000000000000 && puVar2[8] != 0) goto code_r0x000100e02ecc;
code_r0x000100e02b50:
        uVar11 = puVar2[0xb];
      }
      else {
        _free(puVar2[6]);
        if (puVar2[8] == 0x8000000000000000 || puVar2[8] == 0) goto code_r0x000100e02b50;
code_r0x000100e02ecc:
        _free(puVar2[9]);
        uVar11 = puVar2[0xb];
      }
      if ((uVar11 != 0x8000000000000000) && (uVar11 != 0)) {
        _free(puVar2[0xc]);
      }
      if (puVar2[2] != 0) {
        _free(puVar2[3]);
      }
      puVar2 = puVar2 + 0xe;
      uVar17 = *(undefined8 *)(puVar1 + -0x10);
      uVar18 = *(undefined8 *)(puVar1 + -8);
      uVar13 = *(undefined8 *)(puVar1 + -0x20);
      uVar12 = *(undefined8 *)(puVar1 + -0x18);
      unaff_x22 = *(ulong *)(puVar1 + -0x30);
      unaff_x21 = *(ulong *)(puVar1 + -0x28);
      unaff_x24 = *(undefined8 *)(puVar1 + -0x40);
      unaff_x23 = *(undefined8 *)(puVar1 + -0x38);
      goto code_r0x000100de6690;
    case 5:
      if (puVar2[7] != 0) {
        _free(puVar2[8]);
      }
      if (puVar2[2] != 0) {
        puVar3 = (ulong *)puVar2[4];
        puVar4 = puVar3;
        for (uVar11 = puVar2[5]; uVar11 != 0; uVar11 = uVar11 - 1) {
          uVar10 = *puVar4;
          uVar7 = uVar10 ^ 0x8000000000000000;
          if (-1 < (long)uVar10) {
            uVar7 = 1;
          }
          if ((uVar7 == 0) || (uVar7 != 1)) {
            if (puVar4[1] != 0) {
              lVar6 = 0x10;
              goto code_r0x000100e02ba4;
            }
          }
          else if (uVar10 != 0) {
            lVar6 = 8;
code_r0x000100e02ba4:
            _free(*(undefined8 *)((long)puVar4 + lVar6));
          }
          puVar4 = puVar4 + 4;
        }
code_r0x000100e02de4:
        if (puVar2[3] == 0) {
          return;
        }
        goto code_r0x000108aa97c4;
      }
      goto code_r0x000100e02f78;
    case 6:
      if (puVar2[0xb] == 0x8000000000000000 || puVar2[0xb] == 0) {
        if (puVar2[0xe] != 0x8000000000000000 && puVar2[0xe] != 0) goto code_r0x000100e02f30;
code_r0x000100e02d54:
        uVar11 = puVar2[2];
      }
      else {
        _free(puVar2[0xc]);
        if (puVar2[0xe] == 0x8000000000000000 || puVar2[0xe] == 0) goto code_r0x000100e02d54;
code_r0x000100e02f30:
        _free(puVar2[0xf]);
        uVar11 = puVar2[2];
      }
      if (uVar11 != 0) {
        uVar11 = puVar2[3];
        goto code_r0x000100e02f44;
      }
code_r0x000100e02f48:
      if (puVar2[5] != 0) {
        uVar11 = puVar2[6];
code_r0x000100e02f54:
        _free(uVar11);
      }
code_r0x000100e02f58:
      if (puVar2[8] == 0) {
        return;
      }
      puVar3 = (ulong *)puVar2[9];
      goto code_r0x000108aa97c4;
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
      if (uVar11 != 0) {
        puVar3 = (ulong *)puVar2[4];
        puVar4 = puVar3;
        for (uVar11 = puVar2[5]; uVar11 != 0; uVar11 = uVar11 - 1) {
          uVar10 = *puVar4;
          uVar7 = uVar10 ^ 0x8000000000000000;
          if (-1 < (long)uVar10) {
            uVar7 = 1;
          }
          if ((uVar7 == 0) || (uVar7 != 1)) {
            if (puVar4[1] != 0) {
              lVar6 = 0x10;
              goto code_r0x000100e02da4;
            }
          }
          else if (uVar10 != 0) {
            lVar6 = 8;
code_r0x000100e02da4:
            _free(*(undefined8 *)((long)puVar4 + lVar6));
          }
          puVar4 = puVar4 + 4;
        }
        goto code_r0x000100e02de4;
      }
code_r0x000100e02f78:
      if (puVar2[3] == 0) {
        return;
      }
      puVar3 = (ulong *)puVar2[4];
      goto code_r0x000108aa97c4;
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
      puVar3 = (ulong *)puVar2[9];
      lVar6 = puVar2[10] + 1;
      puVar4 = puVar3;
      while (lVar6 = lVar6 + -1, lVar6 != 0) {
        FUN_100de6690(puVar4);
        puVar4 = puVar4 + 9;
      }
      uVar11 = puVar2[8];
      break;
    case 9:
      if (puVar2[9] == 0x8000000000000000 || puVar2[9] == 0) {
        if (puVar2[0xc] != 0x8000000000000000 && puVar2[0xc] != 0) goto code_r0x000100e02fb4;
code_r0x000100e02e14:
        uVar11 = puVar2[2];
      }
      else {
        _free(puVar2[10]);
        if (puVar2[0xc] == 0x8000000000000000 || puVar2[0xc] == 0) goto code_r0x000100e02e14;
code_r0x000100e02fb4:
        _free(puVar2[0xd]);
        uVar11 = puVar2[2];
      }
      if (uVar11 == 4) {
        return;
      }
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
            puVar3 = (ulong *)puVar2[7];
            uVar7 = puVar2[8];
            if (uVar7 != 0) {
              puVar2 = puVar3 + 1;
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
          puVar3 = (ulong *)puVar2[4];
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
          puVar3 = (ulong *)puVar2[7];
          goto code_r0x000108aa97c4;
        }
      }
      return;
    case 10:
      if (puVar2[2] != 0) {
        _free(puVar2[3]);
      }
      if (puVar2[5] != 0) {
        _free(puVar2[6]);
      }
      if (puVar2[0xb] != 0x8000000000000000 && puVar2[0xb] != 0) {
        uVar11 = puVar2[0xc];
        goto code_r0x000100e02f54;
      }
      goto code_r0x000100e02f58;
    case 0xb:
      if (puVar2[2] == 0) {
        return;
      }
      goto code_r0x000100e02bf8;
    default:
      goto LAB_100e02fc8;
    case 0xd:
      if (puVar2[2] == 0x8000000000000000 || puVar2[2] == 0) {
        return;
      }
code_r0x000100e02bf8:
      puVar3 = (ulong *)puVar2[3];
      goto code_r0x000108aa97c4;
    }
    if (uVar11 == 0) {
LAB_100e02fc8:
      return;
    }
    break;
  case 0x17:
  case 0x18:
  case 0x1c:
  case 0x1e:
  case 0x21:
  case 0x2e:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
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
    puVar3 = (ulong *)puVar2[0xb];
    break;
  case 0x19:
  case 0x1a:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] == 0) {
      return;
    }
    puVar3 = (ulong *)puVar2[5];
    break;
  case 0x1b:
  case 0x2b:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] != 0) {
      _free(puVar2[5]);
    }
    if (puVar2[7] == 0) {
      return;
    }
    puVar3 = (ulong *)puVar2[8];
    break;
  case 0x1d:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
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
    puVar3 = (ulong *)puVar2[0xe];
    break;
  case 0x1f:
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
    *(ulong *)(puVar1 + -0x30) = unaff_x22;
    *(ulong *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] != 0) {
      _free(puVar2[5]);
    }
    if (puVar2[7] != 0) {
      _free(puVar2[8]);
    }
    puVar3 = (ulong *)puVar2[0xb];
    uVar11 = puVar2[0xc];
    if (uVar11 != 0) {
      puVar4 = puVar3 + 4;
      do {
        if (puVar4[-4] != 0) {
          _free(puVar4[-3]);
        }
        uVar7 = puVar4[2];
        if ((uVar7 + 0x7fffffffffffffff < 2 || uVar7 == 0x8000000000000000) || uVar7 == 0) {
          uVar7 = puVar4[-1];
        }
        else {
          _free(puVar4[3]);
          uVar7 = puVar4[-1];
        }
        if (uVar7 != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 9;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (puVar2[10] == 0) {
      return;
    }
    break;
  case 0x22:
  case 0x23:
  case 0x36:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] == 0x8000000000000000 || puVar2[4] == 0) {
      return;
    }
    puVar3 = (ulong *)puVar2[5];
    break;
  case 0x25:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    if (puVar2[0xb] == 0x8000000000000000 || puVar2[0xb] == 0) {
      if (puVar2[0xe] != 0x8000000000000000 && puVar2[0xe] != 0) goto code_r0x000100cb7630;
code_r0x000100cb75f4:
      if ((long)puVar2[0x11] < -0x7ffffffffffffffe || puVar2[0x11] == 0) {
        return;
      }
    }
    else {
      _free(puVar2[0xc]);
      if (puVar2[0xe] == 0x8000000000000000 || puVar2[0xe] == 0) goto code_r0x000100cb75f4;
code_r0x000100cb7630:
      _free(puVar2[0xf]);
      if ((long)puVar2[0x11] < -0x7ffffffffffffffe || puVar2[0x11] == 0) {
        return;
      }
    }
    puVar3 = (ulong *)puVar2[0x12];
    break;
  case 0x26:
    *(ulong *)(puVar1 + -0x30) = unaff_x22;
    *(ulong *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    puVar3 = (ulong *)puVar2[2];
    puVar4 = puVar3;
    for (uVar11 = puVar2[3]; uVar11 != 0; uVar11 = uVar11 - 1) {
      FUN_100e3b46c(puVar4);
      puVar4 = puVar4 + 0x4e;
    }
    if (puVar2[1] == 0) {
      return;
    }
    break;
  case 0x27:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] != 0) {
      _free(puVar2[5]);
    }
    if (puVar2[7] == 0x8000000000000000 || puVar2[7] == 0) {
      return;
    }
    puVar3 = (ulong *)puVar2[8];
    break;
  case 0x29:
    *(ulong *)(puVar1 + -0x30) = unaff_x22;
    *(ulong *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    puVar3 = (ulong *)puVar2[5];
    uVar11 = puVar2[6];
    if (uVar11 != 0) {
      puVar4 = puVar3 + 1;
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (puVar2[4] == 0) {
      return;
    }
    break;
  case 0x2a:
  case 0x2c:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
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
    puVar3 = (ulong *)puVar2[0xb];
    break;
  case 0x2d:
  case 0x31:
  case 0x3b:
  case 0x3c:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] == 0) {
      return;
    }
    puVar3 = (ulong *)puVar2[5];
    break;
  case 0x2f:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] == 0) {
      return;
    }
    puVar3 = (ulong *)puVar2[5];
    break;
  case 0x30:
    if (puVar2[4] == 0x8000000000000000 || puVar2[4] == 0) {
      uVar11 = puVar2[1];
    }
    else {
      *(undefined8 *)(puVar1 + -0x20) = uVar13;
      *(undefined8 *)(puVar1 + -0x18) = uVar12;
      *(undefined8 *)(puVar1 + -0x10) = uVar17;
      *(undefined8 *)(puVar1 + -8) = uVar18;
      _free(puVar2[5]);
      uVar11 = puVar2[1];
    }
    if (uVar11 == 0) {
      return;
    }
    puVar3 = (ulong *)puVar2[2];
    break;
  case 0x33:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
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
    puVar3 = (ulong *)puVar2[0xd];
    break;
  case 0x34:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] != 0) {
      _free(puVar2[5]);
    }
    *(ulong *)(puVar1 + -0x30) = unaff_x22;
    *(ulong *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
    *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
    *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
    puVar3 = (ulong *)puVar2[8];
    uVar11 = puVar2[9];
    if (uVar11 != 0) {
      puVar4 = puVar3 + 6;
      do {
        if (puVar4[-6] != 0) {
          _free(puVar4[-5]);
        }
        if (puVar4[-3] != 0) {
          _free(puVar4[-2]);
        }
        if (*puVar4 != 0) {
          _free(puVar4[1]);
        }
        if ((puVar4[3] & 0x7fffffffffffffff) != 0) {
          _free(puVar4[4]);
        }
        puVar4 = puVar4 + 0xd;
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
    puVar3 = (ulong *)puVar2[2];
    break;
  case 0x37:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    puVar2 = puVar2 + 4;
    uVar17 = *(undefined8 *)(puVar1 + -0x10);
    uVar18 = *(undefined8 *)(puVar1 + -8);
    uVar13 = *(undefined8 *)(puVar1 + -0x20);
    uVar12 = *(undefined8 *)(puVar1 + -0x18);
    goto code_r0x000100de6690;
  case 0x3a:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    if (puVar2[1] != 0) {
      _free(puVar2[2]);
    }
    if (puVar2[4] != 0) {
      _free(puVar2[5]);
    }
    if (puVar2[7] == 0x8000000000000000 || puVar2[7] == 0) {
      return;
    }
    puVar3 = (ulong *)puVar2[8];
    break;
  case 0x3e:
    *(ulong *)(puVar1 + -0x30) = unaff_x22;
    *(ulong *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
    puVar3 = (ulong *)puVar2[2];
    uVar11 = puVar2[3];
    if (uVar11 != 0) {
      puVar4 = puVar3 + 1;
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (puVar2[1] == 0) {
      return;
    }
    break;
  case 0x3f:
    uVar11 = puVar2[1] & 0x7fffffffffffffff;
joined_r0x000100e52974:
    if (uVar11 == 0) {
code_r0x000100e529d0:
      return;
    }
    puVar3 = (ulong *)puVar2[2];
    break;
  default:
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *)(puVar1 + -0x10) = uVar17;
    *(undefined8 *)(puVar1 + -8) = uVar18;
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
    puVar3 = (ulong *)puVar2[5];
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar3);
  return;
}

