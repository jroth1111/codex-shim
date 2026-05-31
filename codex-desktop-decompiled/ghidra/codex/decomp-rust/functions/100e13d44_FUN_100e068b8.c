
/* WARNING: Possible PIC construction at 0x000100e26f70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e09984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26f74) */
/* WARNING: Type propagation algorithm not settling */

void FUN_100e068b8(long *param_1)

{
  int iVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong *unaff_x19;
  undefined8 uVar13;
  ulong *unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 unaff_x21;
  long *plVar16;
  undefined8 uVar17;
  ulong *unaff_x22;
  undefined8 *puVar18;
  long *plVar19;
  ulong unaff_x23;
  long lVar20;
  long lVar21;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined *puVar23;
  
  puVar5 = (ulong *)(param_1 + 1);
  lVar12 = *param_1;
  if (1 < lVar12) {
    if (lVar12 == 2) {
      if (*puVar5 != 0) {
        _free(param_1[2]);
      }
      lVar12 = param_1[4];
      if (lVar12 != -0x8000000000000000) {
        puVar4 = (ulong *)param_1[5];
        lVar20 = param_1[6] + 1;
        puVar5 = puVar4;
        while (lVar20 = lVar20 + -1, lVar20 != 0) {
          FUN_100e02a24(puVar5);
          puVar5 = puVar5 + 0x18;
        }
        if (lVar12 != 0) goto code_r0x000108aa97c4;
      }
      return;
    }
    if (lVar12 != 3) goto SUB_100dfc74c;
    if (param_1[0xd] == -0x8000000000000000 || param_1[0xd] == 0) {
      lVar12 = param_1[7];
    }
    else {
      _free(param_1[0xe]);
      lVar12 = param_1[7];
    }
    if (lVar12 != 0) {
      _free(param_1[8]);
    }
    if (param_1[0x10] == -0x8000000000000000 || param_1[0x10] == 0) {
      if (param_1[0x13] == -0x8000000000000000 || param_1[0x13] == 0) goto LAB_100e13efc;
LAB_100e13f3c:
      _free(param_1[0x14]);
      lVar12 = param_1[0x24];
    }
    else {
      _free(param_1[0x11]);
      if (param_1[0x13] != -0x8000000000000000 && param_1[0x13] != 0) goto LAB_100e13f3c;
LAB_100e13efc:
      lVar12 = param_1[0x24];
    }
    if (-0x7ffffffffffffffe < lVar12) {
      lVar20 = param_1[0x25];
      lVar21 = param_1[0x26];
      if (lVar21 != 0) {
        puVar18 = (undefined8 *)(lVar20 + 8);
        do {
          if (puVar18[-1] != 0) {
            _free(*puVar18);
          }
          puVar18 = puVar18 + 3;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      if (lVar12 != 0) {
        _free(lVar20);
      }
    }
    uVar8 = param_1[0x28];
    if (uVar8 != 0x8000000000000003) {
      bVar2 = uVar8 != 0x8000000000000000;
      if (uVar8 < 0x8000000000000001) {
        uVar8 = 0;
      }
      if ((bVar2) && ((uVar8 & 0x7fffffffffffffff) == 0)) {
        FUN_100e79780(param_1 + 0x28);
      }
    }
    if (param_1[0x16] == -0x8000000000000000) {
      if (*puVar5 == 2) goto LAB_100e13fdc;
LAB_100e14058:
      FUN_100e79780(param_1 + 3);
      lVar12 = param_1[10];
    }
    else {
      FUN_100c973ec();
      if (*puVar5 != 2) goto LAB_100e14058;
LAB_100e13fdc:
      lVar12 = param_1[10];
    }
    if (lVar12 != 0) {
      _free(param_1[0xb]);
    }
    if (param_1[0x1c] != -0x8000000000000000) {
      if (param_1[0x1c] != 0) {
        _free(param_1[0x1d]);
      }
      if ((param_1[0x1f] != -0x8000000000000000) && (param_1[0x1f] != 0)) {
        puVar4 = (ulong *)param_1[0x20];
        goto code_r0x000108aa97c4;
      }
    }
    return;
  }
  if (lVar12 == 0) {
    FUN_100e06a44();
    if (param_1[0x33] == 0x8000000000000001) {
      return;
    }
    if ((param_1[0x33] & 0x7fffffffffffffffU) == 0) {
      if (param_1[0x36] == -0x8000000000000000 || param_1[0x36] == 0) goto LAB_100e13d84;
LAB_100e13db0:
      _free(param_1[0x37]);
      lVar12 = param_1[0x39];
    }
    else {
      _free(param_1[0x34]);
      if (param_1[0x36] != -0x8000000000000000 && param_1[0x36] != 0) goto LAB_100e13db0;
LAB_100e13d84:
      lVar12 = param_1[0x39];
    }
    if ((lVar12 == -0x8000000000000000) || (lVar12 == 0)) {
      return;
    }
    puVar4 = (ulong *)param_1[0x3a];
    goto code_r0x000108aa97c4;
  }
  if (lVar12 != 1) {
SUB_100dfc74c:
    switch((int)*puVar5) {
    case 0:
      goto code_r0x000100dfc85c;
    case 1:
      if (puVar5[1] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[2];
      break;
    case 2:
      if (puVar5[1] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[2];
      break;
    case 3:
      if ((puVar5[1] & 0x7fffffffffffffff) == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[2];
      break;
    case 4:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      uVar11 = puVar5[1];
      uVar8 = uVar11 ^ 0x8000000000000000;
      if (-1 < (long)uVar11) {
        uVar8 = 0xc;
      }
      switch(uVar8) {
      case 0:
      case 6:
        if (puVar5[2] != 0) {
          _free(puVar5[3]);
        }
        if (puVar5[5] == 0x8000000000000000 || puVar5[5] == 0) {
          return;
        }
        break;
      case 1:
      case 7:
      case 8:
      case 9:
        uVar8 = puVar5[2] & 0x7fffffffffffffff;
        goto joined_r0x000100e0cc14;
      default:
        uVar8 = puVar5[2];
joined_r0x000100e0cc14:
        if (uVar8 == 0) {
          return;
        }
        puVar4 = (ulong *)puVar5[3];
        goto code_r0x000108aa97c4;
      case 10:
        puVar3 = puVar5 + 2;
        uVar17 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar14 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar15 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x18);
        goto code_r0x000100de6690;
      case 0xc:
        *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        if (puVar5[1] != 0) {
          _free(puVar5[2]);
        }
        if (puVar5[4] != 0) {
          _free(puVar5[5]);
        }
        if (puVar5[7] != 0) {
          _free(puVar5[8]);
        }
        puVar4 = (ulong *)puVar5[0xb];
        uVar8 = puVar5[0xc];
        if (uVar8 != 0) {
          puVar3 = puVar4 + 4;
          do {
            if (puVar3[-4] != 0) {
              _free(puVar3[-3]);
            }
            if (puVar3[-1] != 0) {
              _free(*puVar3);
            }
            puVar3 = puVar3 + 6;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        if (puVar5[10] == 0) {
          return;
        }
        goto code_r0x000108aa97c4;
      case 0xd:
        if (puVar5[2] != 0) {
          _free(puVar5[3]);
        }
        if (puVar5[5] == 0) {
          return;
        }
      }
      puVar4 = (ulong *)puVar5[6];
      break;
    case 5:
      if ((puVar5[1] & 0x7fffffffffffffff) == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[2];
      break;
    case 6:
      if (puVar5[1] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[2];
      break;
    case 7:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[4] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[5];
      break;
    case 8:
    case 9:
    case 10:
    case 0x34:
      goto code_r0x000100dfc770;
    case 0xb:
      if (puVar5[5] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[6];
      break;
    case 0xc:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[4] != 0) {
        _free(puVar5[5]);
      }
      if (puVar5[0x12] != 0x8000000000000000 && puVar5[0x12] != 0) {
        _free(puVar5[0x13]);
      }
      uVar8 = puVar5[0x1b];
      bVar2 = uVar8 != 0x8000000000000000;
      if (uVar8 < 0x8000000000000001) {
        uVar8 = 0;
      }
      if (bVar2 && (uVar8 & 0x7fffffffffffffff) == 0) {
        FUN_100e79780();
      }
      if (puVar5[0x15] != 0x8000000000000000) {
        if (puVar5[0x15] != 0) {
          _free(puVar5[0x16]);
        }
        if ((puVar5[0x18] != 0x8000000000000000) && (puVar5[0x18] != 0)) {
          _free(puVar5[0x19]);
        }
      }
      if (puVar5[7] != 0) {
        _free(puVar5[8]);
      }
      if (puVar5[10] != 0) {
        _free(puVar5[0xb]);
      }
      if ((puVar5[0xd] == 0x8000000000000000) || (puVar5[0xd] == 0)) {
        return;
      }
      puVar4 = (ulong *)puVar5[0xe];
      break;
    case 0xd:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[7] != 0) {
        _free(puVar5[8]);
      }
      if (puVar5[10] == 0x8000000000000000 || puVar5[10] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[0xb];
      break;
    case 0xe:
      if (puVar5[0xd] == 3) {
        return;
      }
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[0x17] == 0x8000000000000000 || puVar5[0x17] == 0) {
        if (puVar5[0x1a] != 0x8000000000000000 && puVar5[0x1a] != 0) {
code_r0x000100e13e7c:
          _free(puVar5[0x1b]);
        }
      }
      else {
        _free(puVar5[0x18]);
        if (puVar5[0x1a] != 0x8000000000000000 && puVar5[0x1a] != 0) goto code_r0x000100e13e7c;
      }
      if ((long)puVar5[0x1d] < -0x7ffffffffffffffe || puVar5[0x1d] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[0x1e];
      break;
    case 0xf:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      puVar5 = puVar5 + 4;
      if (*puVar5 == 0x8000000000000000) {
        return;
      }
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar15 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x18);
      goto FUN_100e24ac8;
    case 0x10:
      *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      uVar8 = puVar5[0x10];
      if (uVar8 != 0x8000000000000000) {
        uVar11 = puVar5[0x11];
        uVar7 = puVar5[0x12];
        if (uVar7 != 0) {
          puVar18 = (undefined8 *)(uVar11 + 8);
          do {
            if (puVar18[-1] != 0) {
              _free(*puVar18);
            }
            puVar18 = puVar18 + 3;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (uVar8 != 0) {
          _free(uVar11);
        }
      }
      if (puVar5[4] != 0) {
        _free(puVar5[5]);
      }
      uVar8 = puVar5[8];
      uVar11 = puVar5[9];
      if (uVar11 != 0) {
        puVar18 = (undefined8 *)(uVar8 + 8);
        do {
          if (puVar18[-1] != 0) {
            _free(*puVar18);
          }
          puVar18 = puVar18 + 3;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (puVar5[7] != 0) {
        _free(uVar8);
      }
      if (puVar5[10] != 0) {
        _free(puVar5[0xb]);
      }
      puVar4 = (ulong *)puVar5[0xe];
      uVar8 = puVar5[0xf];
      if (uVar8 != 0) {
        puVar3 = puVar4 + 1;
        do {
          if ((puVar3[-1] & 0x7fffffffffffffff) != 0) {
            _free(*puVar3);
          }
          puVar3 = puVar3 + 5;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (puVar5[0xd] == 0) {
        return;
      }
      break;
    case 0x11:
      if (puVar5[1] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[2];
      break;
    case 0x12:
      if (puVar5[1] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[2];
      break;
    case 0x13:
      if (puVar5[1] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[2];
      break;
    case 0x14:
      puVar4 = puVar5 + 1;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
      if (puVar5[10] == 0x8000000000000000 || puVar5[10] == 0) {
        uVar8 = *puVar4;
      }
      else {
        _free(puVar5[0xb]);
        uVar8 = *puVar4;
      }
      if (uVar8 != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[4] != 0) {
        _free(puVar5[5]);
      }
      if (puVar5[0xd] == 0x8000000000000000 || puVar5[0xd] == 0) {
        uVar11 = puVar5[0x22];
        uVar8 = uVar11;
        if (uVar11 < 0x8000000000000001) {
          uVar8 = 0;
        }
      }
      else {
        _free(puVar5[0xe]);
        uVar11 = puVar5[0x22];
        uVar8 = uVar11;
        if (uVar11 < 0x8000000000000001) {
          uVar8 = 0;
        }
      }
      if ((uVar11 != 0x8000000000000000) && ((uVar8 & 0x7fffffffffffffff) == 0)) {
        FUN_100e79780(puVar5 + 0x22);
      }
      if (puVar5[0x10] != 0x8000000000000000) {
        if (puVar5[0x10] != 0) {
          _free(puVar5[0x11]);
        }
        if ((puVar5[0x13] != 0x8000000000000000) && (puVar5[0x13] != 0)) {
          _free(puVar5[0x14]);
        }
      }
      if (puVar5[7] != 0) {
        _free(puVar5[8]);
      }
      unaff_x23 = puVar5[0x16];
      unaff_x21 = 0x8000000000000000;
      if (unaff_x23 == 0x8000000000000000) {
LAB_100e26f88:
        if (puVar5[0x19] != 0x8000000000000000) {
          if (puVar5[0x19] != 0) {
            _free(puVar5[0x1a]);
          }
          if (puVar5[0x1c] != 0) {
            _free(puVar5[0x1d]);
          }
        }
        if (puVar5[0x1f] == 0x8000000000000000 || puVar5[0x1f] == 0) {
          return;
        }
        puVar4 = (ulong *)puVar5[0x20];
        break;
      }
      unaff_x20 = (ulong *)puVar5[0x17];
      unaff_x24 = puVar5[0x18];
      if (unaff_x24 == 0) {
        if (unaff_x23 != 0) {
          _free(unaff_x20);
        }
        goto LAB_100e26f88;
      }
      unaff_x22 = unaff_x20 + 0x3b;
      unaff_x30 = 0x100e26f74;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
      puVar5 = unaff_x20;
      unaff_x19 = puVar4;
      goto SUB_100dfc74c;
    case 0x15:
      if (puVar5[0xd] == 0x8000000000000000 || puVar5[0xd] == 0) {
        uVar8 = puVar5[3];
      }
      else {
        *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        _free(puVar5[0xe]);
        uVar8 = puVar5[3];
      }
      if (uVar8 == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[4];
      break;
    case 0x16:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if ((long)puVar5[4] < 1) {
        return;
      }
      puVar4 = (ulong *)puVar5[5];
      break;
    case 0x17:
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      uVar8 = puVar5[2];
      uVar11 = puVar5[3];
      if (uVar11 != 0) {
        puVar18 = (undefined8 *)(uVar8 + 8);
        do {
          if (puVar18[-1] != 0) {
            _free(*puVar18);
          }
          puVar18 = puVar18 + 3;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (puVar5[1] != 0) {
        _free(uVar8);
      }
      uVar8 = puVar5[5];
      uVar11 = puVar5[6];
      if (uVar11 != 0) {
        puVar18 = (undefined8 *)(uVar8 + 0x20);
        do {
          if (puVar18[-4] != 0) {
            _free(puVar18[-3]);
          }
          if (puVar18[-1] != 0) {
            _free(*puVar18);
          }
          puVar18 = puVar18 + 6;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (puVar5[4] != 0) {
        _free(uVar8);
      }
      puVar4 = (ulong *)puVar5[8];
      uVar8 = puVar5[9];
      if (uVar8 != 0) {
        puVar3 = puVar4 + 1;
        do {
          if (puVar3[-1] != 0) {
            _free(*puVar3);
          }
          puVar3 = puVar3 + 3;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (puVar5[7] == 0) {
        return;
      }
      break;
    case 0x18:
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[4] != 0) {
        _free(puVar5[5]);
      }
      if (puVar5[7] != 0) {
        _free(puVar5[8]);
      }
      if (puVar5[10] != 0x8000000000000005) {
        FUN_100de6690();
      }
      if ((puVar5[0x13] != 0x8000000000000000) && (puVar5[0x13] != 0)) {
        _free(puVar5[0x14]);
      }
      if ((puVar5[0x16] == 0x8000000000000000) || (puVar5[0x16] == 0)) {
        return;
      }
      puVar4 = (ulong *)puVar5[0x17];
      break;
    case 0x19:
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[4] != 0) {
        _free(puVar5[5]);
      }
      if (puVar5[7] != 0) {
        _free(puVar5[8]);
      }
      if (puVar5[10] != 0x8000000000000005) {
        FUN_100de6690();
      }
      if ((puVar5[0x13] != 0x8000000000000000) && (puVar5[0x13] != 0)) {
        _free(puVar5[0x14]);
      }
      if ((puVar5[0x16] != 0x8000000000000000) && (puVar5[0x16] != 0)) {
        _free(puVar5[0x17]);
      }
      puVar3 = puVar5 + 0x19;
      if (*puVar3 != 0x8000000000000000) {
        puVar22 = *(undefined1 **)((long)register0x00000008 + -0x10);
        puVar23 = *(undefined **)((long)register0x00000008 + -8);
        uVar14 = *(undefined8 *)((long)register0x00000008 + -0x20);
        puVar4 = *(ulong **)((long)register0x00000008 + -0x18);
        uVar17 = *(undefined8 *)((long)register0x00000008 + -0x30);
        uVar15 = *(undefined8 *)((long)register0x00000008 + -0x28);
SUB_100e00868:
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x30) = uVar17;
        *(undefined8 *)((long)register0x00000008 + -0x28) = uVar15;
        *(undefined8 *)((long)register0x00000008 + -0x20) = uVar14;
        *(ulong **)((long)register0x00000008 + -0x18) = puVar4;
        *(undefined1 **)((long)register0x00000008 + -0x10) = puVar22;
        *(undefined **)((long)register0x00000008 + -8) = puVar23;
        uVar8 = puVar3[1];
        lVar12 = puVar3[2] + 1;
        uVar11 = uVar8;
        while (lVar12 = lVar12 + -1, lVar12 != 0) {
          FUN_100de6690(uVar11);
          uVar11 = uVar11 + 0x48;
        }
        if (*puVar3 != 0) {
          _free(uVar8);
        }
        if (puVar3[3] != 0x8000000000000005) {
          FUN_100de6690();
        }
        puVar3 = puVar3 + 0xc;
        if (*puVar3 == 0x8000000000000005) {
          return;
        }
        uVar17 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar14 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar15 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x18);
        unaff_x22 = *(ulong **)((long)register0x00000008 + -0x30);
        unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
        unaff_x24 = *(ulong *)((long)register0x00000008 + -0x40);
        unaff_x23 = *(ulong *)((long)register0x00000008 + -0x38);
        goto code_r0x000100de6690;
      }
      if (puVar5[0x1a] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[0x1b];
      break;
    case 0x1a:
      if (puVar5[1] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[2];
      break;
    case 0x1b:
      puVar3 = puVar5 + 1;
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[8] != 0) {
        _free(puVar5[9]);
      }
      if (puVar5[0xb] != 0) {
        _free(puVar5[0xc]);
      }
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar15 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x18);
      goto FUN_100e0c988;
    case 0x1c:
      if (puVar5[1] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[2];
      break;
    case 0x1d:
      puVar5 = puVar5 + 1;
DAT_100e17134:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*puVar5 != 0) {
        _free(puVar5[1]);
      }
      if (puVar5[3] != 0) {
        _free(puVar5[4]);
      }
      if (puVar5[9] == 0x8000000000000000 || puVar5[9] == 0) {
        uVar8 = puVar5[6];
      }
      else {
        _free(puVar5[10]);
        uVar8 = puVar5[6];
      }
      if (uVar8 != 0) {
        _free(puVar5[7]);
      }
      if ((puVar5[0xc] & 0x7fffffffffffffff) == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[0xd];
      break;
    case 0x1e:
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[0x10] == 0x8000000000000000 || puVar5[0x10] == 0) {
        uVar8 = puVar5[4];
      }
      else {
        _free(puVar5[0x11]);
        uVar8 = puVar5[4];
      }
      if (uVar8 != 0) {
        _free(puVar5[5]);
      }
      uVar8 = puVar5[8];
      uVar11 = puVar5[9];
      if (uVar11 != 0) {
        puVar18 = (undefined8 *)(uVar8 + 8);
        do {
          if (puVar18[-1] != 0) {
            _free(*puVar18);
          }
          puVar18 = puVar18 + 3;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (puVar5[7] != 0) {
        _free(uVar8);
      }
      if (puVar5[10] != 0) {
        _free(puVar5[0xb]);
      }
      uVar11 = puVar5[0xe];
      uVar8 = uVar11;
      for (uVar7 = puVar5[0xf]; uVar7 != 0; uVar7 = uVar7 - 1) {
        FUN_100e1d024(uVar8);
        uVar8 = uVar8 + 0x50;
      }
      if (puVar5[0xd] != 0) {
        _free(uVar11);
      }
      if (puVar5[0x13] == 0x8000000000000000 || puVar5[0x13] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[0x14];
      break;
    case 0x1f:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[4] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[5];
      break;
    case 0x20:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[4] != 0) {
        _free(puVar5[5]);
      }
      if (puVar5[7] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[8];
      break;
    case 0x21:
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[0x1c] == 0x8000000000000000 || puVar5[0x1c] == 0) {
        uVar8 = puVar5[4];
      }
      else {
        _free(puVar5[0x1d]);
        uVar8 = puVar5[4];
      }
      if (uVar8 != 0) {
        _free(puVar5[5]);
      }
      uVar8 = puVar5[8];
      uVar11 = puVar5[9];
      if (uVar11 != 0) {
        puVar18 = (undefined8 *)(uVar8 + 8);
        do {
          if (puVar18[-1] != 0) {
            _free(*puVar18);
          }
          puVar18 = puVar18 + 3;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (puVar5[7] != 0) {
        _free(uVar8);
      }
      if (puVar5[10] != 0) {
        _free(puVar5[0xb]);
      }
      uVar11 = puVar5[0xe];
      uVar8 = uVar11;
      for (uVar7 = puVar5[0xf]; uVar7 != 0; uVar7 = uVar7 - 1) {
        FUN_100e1d024(uVar8);
        uVar8 = uVar8 + 0x50;
      }
      if (puVar5[0xd] != 0) {
        _free(uVar11);
      }
      if (puVar5[0x1f] == 0x8000000000000000 || puVar5[0x1f] == 0) {
        uVar8 = puVar5[0x10];
      }
      else {
        _free(puVar5[0x20]);
        uVar8 = puVar5[0x10];
      }
      if (uVar8 != 0) {
        _free(puVar5[0x11]);
      }
      if (puVar5[0x13] != 0) {
        _free(puVar5[0x14]);
      }
      if (puVar5[0x16] != 0) {
        _free(puVar5[0x17]);
      }
      if (puVar5[0x19] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[0x1a];
      break;
    case 0x22:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[4] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[5];
      break;
    case 0x23:
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[0x10] == 0x8000000000000000 || puVar5[0x10] == 0) {
        uVar8 = puVar5[4];
      }
      else {
        _free(puVar5[0x11]);
        uVar8 = puVar5[4];
      }
      if (uVar8 != 0) {
        _free(puVar5[5]);
      }
      uVar8 = puVar5[8];
      uVar11 = puVar5[9];
      if (uVar11 != 0) {
        puVar18 = (undefined8 *)(uVar8 + 8);
        do {
          if (puVar18[-1] != 0) {
            _free(*puVar18);
          }
          puVar18 = puVar18 + 3;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (puVar5[7] != 0) {
        _free(uVar8);
      }
      if (puVar5[10] != 0) {
        _free(puVar5[0xb]);
      }
      if ((puVar5[0x13] != 0x8000000000000000) && (puVar5[0x13] != 0)) {
        _free(puVar5[0x14]);
      }
      if ((puVar5[0x16] & 0x7fffffffffffffff) == 0) {
        uVar8 = puVar5[0x1a];
      }
      else {
        _free(puVar5[0x17]);
        uVar8 = puVar5[0x1a];
      }
      if (uVar8 != 0x8000000000000000) {
        uVar11 = puVar5[0x1b];
        uVar7 = puVar5[0x1c];
        if (uVar7 != 0) {
          puVar18 = (undefined8 *)(uVar11 + 8);
          do {
            if (puVar18[-1] != 0) {
              _free(*puVar18);
            }
            puVar18 = puVar18 + 3;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (uVar8 != 0) {
          _free(uVar11);
        }
      }
      uVar8 = puVar5[0x1d];
      if (uVar8 != 0x8000000000000000) {
        uVar11 = puVar5[0x1e];
        uVar7 = puVar5[0x1f];
        if (uVar7 != 0) {
          puVar18 = (undefined8 *)(uVar11 + 8);
          do {
            if (puVar18[-1] != 0) {
              _free(*puVar18);
            }
            puVar18 = puVar18 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (uVar8 != 0) {
          _free(uVar11);
        }
      }
      if (-0x7fffffffffffffff < (long)puVar5[0x23]) {
        FUN_100e79780(puVar5 + 0x23);
      }
      uVar8 = puVar5[0x20];
      if (uVar8 != 0x8000000000000000) {
        uVar11 = puVar5[0x21];
        uVar7 = puVar5[0x22];
        if (uVar7 != 0) {
          uVar10 = 0;
          do {
            puVar4 = (ulong *)(uVar11 + uVar10 * 0x20);
            uVar9 = *puVar4;
            uVar6 = uVar9 ^ 0x8000000000000000;
            if (-1 < (long)uVar9) {
              uVar6 = 3;
            }
            if (uVar6 == 3) {
              if (uVar9 != 0) {
                uVar6 = puVar4[1];
LAB_100e31464:
                _free(uVar6);
              }
            }
            else if (uVar6 == 1) {
              uVar6 = puVar4[2];
              uVar9 = puVar4[3];
              if (uVar9 != 0) {
                puVar18 = (undefined8 *)(uVar6 + 8);
                do {
                  if (puVar18[-1] != 0) {
                    _free(*puVar18);
                  }
                  puVar18 = puVar18 + 3;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              if (puVar4[1] != 0) goto LAB_100e31464;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 != uVar7);
        }
        if (uVar8 != 0) {
          _free(uVar11);
        }
      }
      puVar4 = (ulong *)puVar5[0xe];
      puVar3 = puVar4;
      for (uVar8 = puVar5[0xf]; uVar8 != 0; uVar8 = uVar8 - 1) {
        FUN_100e1d024(puVar3);
        puVar3 = puVar3 + 10;
      }
      if (puVar5[0xd] == 0) {
        return;
      }
      break;
    case 0x24:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[4] != 0) {
        _free(puVar5[5]);
      }
      if (puVar5[7] == 0x8000000000000000 || puVar5[7] == 0) {
        if (puVar5[10] == 0x8000000000000000) goto LAB_100e4b89c;
LAB_100e4b8cc:
        FUN_100e79780();
        uVar8 = puVar5[0xf];
      }
      else {
        _free(puVar5[8]);
        if (puVar5[10] != 0x8000000000000000) goto LAB_100e4b8cc;
LAB_100e4b89c:
        uVar8 = puVar5[0xf];
      }
      if ((uVar8 & 0x7fffffffffffffff) == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[0x10];
      break;
    case 0x25:
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[4] != 0) {
        _free(puVar5[5]);
      }
      puVar4 = (ulong *)puVar5[8];
      puVar3 = puVar4;
      for (uVar8 = puVar5[9]; uVar8 != 0; uVar8 = uVar8 - 1) {
        FUN_100e4b8ec(puVar3);
        puVar3 = puVar3 + 0xd;
      }
      if (puVar5[7] == 0) {
        return;
      }
      break;
    case 0x26:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[4] != 0) {
        _free(puVar5[5]);
      }
      if (puVar5[10] == 0x8000000000000000 || puVar5[10] == 0) {
        uVar8 = puVar5[7];
      }
      else {
        _free(puVar5[0xb]);
        uVar8 = puVar5[7];
      }
      if (uVar8 != 0) {
        _free(puVar5[8]);
      }
      puVar3 = puVar5 + 0xd;
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar15 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x18);
      goto code_r0x000100de6690;
    case 0x27:
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[4] != 0) {
        _free(puVar5[5]);
      }
      if (puVar5[0xd] == 0x8000000000000000 || puVar5[0xd] == 0) {
        uVar8 = puVar5[7];
      }
      else {
        _free(puVar5[0xe]);
        uVar8 = puVar5[7];
      }
      if (uVar8 != 0) {
        _free(puVar5[8]);
      }
      FUN_100de6690(puVar5 + 0x13);
      uVar8 = puVar5[0xb];
      uVar11 = puVar5[0xc];
      if (uVar11 != 0) {
        puVar18 = (undefined8 *)(uVar8 + 0x10);
        do {
          if (puVar18[-1] != 0) {
            _free(*puVar18);
          }
          puVar18 = puVar18 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (puVar5[10] != 0) {
        _free(uVar8);
      }
      if (puVar5[0x10] == 0x8000000000000000 || puVar5[0x10] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[0x11];
      break;
    case 0x28:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[4] == 0x8000000000000000 || puVar5[4] == 0) {
        uVar8 = puVar5[1];
      }
      else {
        _free(puVar5[5]);
        uVar8 = puVar5[1];
      }
      if (uVar8 != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[7] != 0x8000000000000000 && puVar5[7] != 0) {
        _free(puVar5[8]);
      }
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      uVar8 = puVar5[10];
      if (uVar8 != 0x8000000000000000) {
        if (puVar5[0x16] != 0x8000000000000005) {
          FUN_100de6690();
        }
        if (uVar8 != 0) {
          _free(puVar5[0xb]);
        }
        puVar3 = puVar5 + 0xd;
        uVar17 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar14 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar15 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x18);
        goto code_r0x000100de6690;
      }
      if (puVar5[0x14] != 0x8000000000000005) {
        FUN_100de6690();
      }
      if (puVar5[0xb] != 0) {
        _free(puVar5[0xc]);
      }
      if (puVar5[0xe] != 0) {
        _free(puVar5[0xf]);
      }
      if (puVar5[0x11] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[0x12];
      break;
    case 0x29:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[4] != 0) {
        _free(puVar5[5]);
      }
      FUN_100cdf624(puVar5 + 0xd);
      if (puVar5[7] == 0x8000000000000000 || puVar5[7] == 0) {
        uVar8 = puVar5[10];
      }
      else {
        _free(puVar5[8]);
        uVar8 = puVar5[10];
      }
      if ((uVar8 == 0x8000000000000000) || (uVar8 == 0)) {
        return;
      }
      puVar4 = (ulong *)puVar5[0xb];
      break;
    case 0x2a:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[3] != 0) {
        _free(puVar5[4]);
      }
      if (puVar5[9] == 0x8000000000000000 || puVar5[9] == 0) {
        uVar8 = puVar5[6];
      }
      else {
        _free(puVar5[10]);
        uVar8 = puVar5[6];
      }
      if (uVar8 != 0) {
        _free(puVar5[7]);
      }
      if (puVar5[0xc] != 0x8000000000000000 && puVar5[0xc] != 0) {
        _free(puVar5[0xd]);
      }
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      uVar11 = puVar5[0xf];
      uVar8 = uVar11 ^ 0x8000000000000000;
      if (-1 < (long)uVar11) {
        uVar8 = 4;
      }
      if ((long)uVar8 < 2) {
        if (uVar8 == 0) {
LAB_100e3165c:
          if (puVar5[0x10] != 0) {
            _free(puVar5[0x11]);
          }
          if (puVar5[0x13] == 0) {
            return;
          }
          puVar4 = (ulong *)puVar5[0x14];
          break;
        }
        if (uVar8 == 1) {
          if (puVar5[0x10] != 0) {
            _free(puVar5[0x11]);
          }
          uVar8 = puVar5[0x14];
          uVar11 = puVar5[0x15];
          if (uVar11 != 0) {
            puVar18 = (undefined8 *)(uVar8 + 8);
            do {
              if (puVar18[-1] != 0) {
                _free(*puVar18);
              }
              puVar18 = puVar18 + 3;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          if (puVar5[0x13] != 0) {
            _free(uVar8);
          }
          if (puVar5[0x16] == 0) {
            return;
          }
          puVar4 = (ulong *)puVar5[0x17];
          break;
        }
      }
      else {
        if (uVar8 == 2) {
          if (puVar5[0x10] != 0) {
            _free(puVar5[0x11]);
          }
          puVar4 = (ulong *)puVar5[0x14];
          uVar8 = puVar5[0x15];
          if (uVar8 != 0) {
            puVar3 = puVar4 + 1;
            do {
              if (puVar3[-1] != 0) {
                _free(*puVar3);
              }
              puVar3 = puVar3 + 3;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          if (puVar5[0x13] == 0) {
            return;
          }
          break;
        }
        if (uVar8 == 3) goto LAB_100e3165c;
        if (uVar8 == 4) {
          if (uVar11 != 0) {
            _free(puVar5[0x10]);
          }
          if (puVar5[0x12] != 0) {
            _free(puVar5[0x13]);
          }
          if ((puVar5[0x15] != 0x8000000000000000) && (puVar5[0x15] != 0)) {
            _free(puVar5[0x16]);
          }
          if ((puVar5[0x18] != 0x8000000000000000) && (puVar5[0x18] != 0)) {
            _free(puVar5[0x19]);
          }
          if (puVar5[0x1b] == 0x8000000000000000) {
            return;
          }
          if (puVar5[0x1b] == 0) {
            return;
          }
          puVar4 = (ulong *)puVar5[0x1c];
          break;
        }
      }
      if (puVar5[0x10] == 0x8000000000000000 || puVar5[0x10] == 0) {
        uVar8 = puVar5[0x13];
      }
      else {
        _free(puVar5[0x11]);
        uVar8 = puVar5[0x13];
      }
      if (uVar8 == 0x8000000000000000) {
        return;
      }
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
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
      puVar4 = (ulong *)puVar5[0x14];
      uVar8 = puVar5[0x15];
      puVar3 = puVar4;
      goto joined_r0x000100e797a0;
    case 0x2b:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[4] == 0x8000000000000000 || puVar5[4] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[5];
      break;
    case 0x2c:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[4] == 0x8000000000000000 || puVar5[4] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[5];
      break;
    case 0x2d:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[4] != 0) {
        _free(puVar5[5]);
      }
      puVar5 = puVar5 + 7;
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar15 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x18);
      goto code_r0x000100cdf624;
    case 0x2e:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      puVar5 = puVar5 + 4;
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar15 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x18);
      goto code_r0x000100cdf624;
    case 0x2f:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[4] != 0) {
        _free(puVar5[5]);
      }
      if (puVar5[7] != 0) {
        _free(puVar5[8]);
      }
      if (puVar5[10] != 0) {
        _free(puVar5[0xb]);
      }
      puVar5 = puVar5 + 0xd;
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar15 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x18);
code_r0x000100cdf624:
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) = uVar15;
      *(undefined8 *)((long)register0x00000008 + -0x18) = uVar13;
      *(undefined8 *)((long)register0x00000008 + -0x10) = uVar17;
      *(undefined8 *)((long)register0x00000008 + -8) = uVar14;
      uVar8 = puVar5[1];
      if (uVar8 == 0) {
        return;
      }
      uVar11 = puVar5[3];
      if (uVar11 == 0) goto LAB_100cdf718;
      plVar16 = (long *)*puVar5;
      plVar19 = plVar16 + 1;
      lVar12 = *plVar16;
      uVar7 = CONCAT17(-(-1 < lVar12),
                       CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar12 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar12 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar12 >> 8)),-(-1 < (char)lVar12)))))))) &
              0x8080808080808080;
      goto joined_r0x000100cdf69c;
    case 0x30:
      if (puVar5[1] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[2];
      break;
    case 0x31:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[4] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[5];
      break;
    case 0x32:
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[4] == 0x8000000000000000 || puVar5[4] == 0) {
        puVar4 = (ulong *)puVar5[2];
        uVar8 = puVar5[3];
      }
      else {
        _free(puVar5[5]);
        puVar4 = (ulong *)puVar5[2];
        uVar8 = puVar5[3];
      }
      if (uVar8 != 0) {
        puVar3 = puVar4 + 1;
        do {
          if (puVar3[-1] != 0) {
            _free(*puVar3);
          }
          puVar3 = puVar3 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (puVar5[1] == 0) {
        return;
      }
      break;
    case 0x33:
      if ((puVar5[5] & 0x7fffffffffffffff) == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[6];
      break;
    case 0x35:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      uVar11 = puVar5[4];
      uVar8 = uVar11 ^ 0x8000000000000000;
      if (-1 < (long)uVar11) {
        uVar8 = 2;
      }
      if (uVar8 != 0) {
        if ((uVar8 == 1) || (uVar8 != 2)) {
          if (puVar5[5] != 0) {
            lVar12 = 0x10;
            goto code_r0x000100e0cd78;
          }
        }
        else {
          if (uVar11 != 0) {
            _free(puVar5[5]);
          }
          if ((puVar5[7] & 0x7fffffffffffffff) != 0) {
            lVar12 = 0x20;
code_r0x000100e0cd78:
            _free(*(undefined8 *)((long)(puVar5 + 4) + lVar12));
          }
        }
      }
      if (puVar5[1] == 0x8000000000000000 || puVar5[1] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[2];
      break;
    case 0x36:
      *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      uVar8 = puVar5[1];
      if (uVar8 == 0x8000000000000000) {
        return;
      }
      uVar11 = puVar5[2];
      uVar7 = puVar5[3];
      if (uVar7 != 0) {
        puVar18 = (undefined8 *)(uVar11 + 0x20);
        do {
          if (puVar18[-4] != 0) {
            _free(puVar18[-3]);
          }
          if (puVar18[-1] != 0) {
            _free(*puVar18);
          }
          if (puVar18[2] != 0) {
            _free(puVar18[3]);
          }
          puVar18 = puVar18 + 0xb;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (uVar8 != 0) {
        _free(uVar11);
      }
      if (puVar5[4] != 0) {
        _free(puVar5[5]);
      }
      if (puVar5[7] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[8];
      break;
    case 0x37:
      puVar5 = puVar5 + 1;
      goto code_r0x000100e02a24;
    case 0x38:
    case 0x39:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      puVar4 = puVar5 + 4;
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      uVar8 = *puVar4 ^ 0x8000000000000000;
      if (-1 < (long)*puVar4) {
        uVar8 = 9;
      }
      switch(uVar8) {
      case 0:
        if (puVar5[5] != 0) {
          _free(puVar5[6]);
        }
        puVar4 = (ulong *)puVar5[9];
        puVar3 = puVar4;
        for (uVar8 = puVar5[10]; uVar8 != 0; uVar8 = uVar8 - 1) {
          FUN_100e06c08(puVar3);
          puVar3 = puVar3 + 7;
        }
code_r0x000100df5d10:
        if (puVar5[8] == 0) {
          return;
        }
        break;
      case 1:
        if (puVar5[5] != 0) {
          _free(puVar5[6]);
        }
        puVar4 = (ulong *)puVar5[9];
        uVar8 = puVar5[10];
        if (uVar8 != 0) {
          puVar3 = puVar4 + 4;
          do {
            if (puVar3[-4] != 0) {
              _free(puVar3[-3]);
            }
            if (puVar3[-1] != 0) {
              _free(*puVar3);
            }
            puVar3 = puVar3 + 6;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        goto code_r0x000100df5d10;
      case 2:
        if (puVar5[5] != 0) {
          _free(puVar5[6]);
        }
        uVar8 = puVar5[9];
        uVar11 = puVar5[10];
        if (uVar11 != 0) {
          puVar18 = (undefined8 *)(uVar8 + 8);
          do {
            if (puVar18[-1] != 0) {
              _free(*puVar18);
            }
            puVar18 = puVar18 + 3;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        if (puVar5[8] != 0) {
          _free(uVar8);
        }
        puVar5 = puVar5 + 0xb;
        if (*puVar5 == 0x8000000000000000) {
          return;
        }
        uVar17 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar14 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar15 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x18);
        unaff_x22 = *(ulong **)((long)register0x00000008 + -0x30);
        unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
FUN_100e24ac8:
        *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x20) = uVar15;
        *(undefined8 *)((long)register0x00000008 + -0x18) = uVar13;
        *(undefined8 *)((long)register0x00000008 + -0x10) = uVar17;
        *(undefined8 *)((long)register0x00000008 + -8) = uVar14;
        uVar8 = puVar5[1];
        uVar11 = puVar5[2];
        if (uVar11 != 0) {
          puVar18 = (undefined8 *)(uVar8 + 0x20);
          do {
            if (puVar18[-4] != 0) {
              _free(puVar18[-3]);
            }
            if (puVar18[-1] != 0) {
              _free(*puVar18);
            }
            puVar18 = puVar18 + 7;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        if (*puVar5 != 0) {
          _free(uVar8);
        }
        puVar4 = (ulong *)puVar5[4];
        uVar8 = puVar5[5];
        if (uVar8 != 0) {
          puVar3 = puVar4 + 1;
          do {
            if (puVar3[-1] != 0) {
              _free(*puVar3);
            }
            puVar3 = puVar3 + 3;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        if (puVar5[3] == 0) {
          return;
        }
        break;
      case 3:
      case 6:
        if (puVar5[5] != 0) {
          _free(puVar5[6]);
        }
        if (puVar5[8] == 0) {
          return;
        }
        puVar4 = (ulong *)puVar5[9];
        break;
      case 4:
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
        if (puVar5[5] != 0) {
          _free(puVar5[6]);
        }
        uVar8 = puVar5[9];
        uVar11 = puVar5[10];
        if (uVar11 != 0) {
          puVar18 = (undefined8 *)(uVar8 + 8);
          do {
            if (puVar18[-1] != 0) {
              _free(*puVar18);
            }
            puVar18 = puVar18 + 3;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        if (puVar5[8] != 0) {
          _free(uVar8);
        }
        puVar4 = (ulong *)puVar5[0xc];
        uVar8 = puVar5[0xd];
        if (uVar8 != 0) {
          puVar3 = puVar4 + 1;
          do {
            if (puVar3[-1] != 0) {
              _free(*puVar3);
            }
            puVar3 = puVar3 + 3;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        if (puVar5[0xb] == 0) {
          return;
        }
        break;
      case 5:
        if (puVar5[0xc] != 0) {
          _free(puVar5[0xd]);
        }
        if (puVar5[0xf] != 0) {
          _free(puVar5[0x10]);
        }
        puVar3 = puVar5 + 5;
        uVar17 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar14 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar15 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x18);
        unaff_x22 = *(ulong **)((long)register0x00000008 + -0x30);
        unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
        goto FUN_100e0c988;
      case 7:
        puVar5 = puVar5 + 5;
        unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
        unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
        unaff_x20 = *(ulong **)((long)register0x00000008 + -0x20);
        unaff_x19 = *(ulong **)((long)register0x00000008 + -0x18);
        goto DAT_100e17134;
      case 8:
        if (puVar5[5] != 0) {
          _free(puVar5[6]);
        }
        FUN_100cdf624(puVar5 + 0xe);
        if (puVar5[8] == 0x8000000000000000 || puVar5[8] == 0) {
          uVar8 = puVar5[0xb];
        }
        else {
          _free(puVar5[9]);
          uVar8 = puVar5[0xb];
        }
        if (uVar8 == 0x8000000000000000) {
          return;
        }
        if (uVar8 == 0) {
          return;
        }
        puVar4 = (ulong *)puVar5[0xc];
        break;
      case 9:
        uVar17 = *(undefined8 *)((long)register0x00000008 + -0x30);
        uVar15 = *(undefined8 *)((long)register0x00000008 + -0x28);
        *(undefined8 *)((long)register0x00000008 + -0x30) = uVar17;
        *(undefined8 *)((long)register0x00000008 + -0x28) = uVar15;
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        puVar22 = (undefined1 *)((long)register0x00000008 + -0x10);
        if (*puVar4 != 0) {
          _free(puVar5[5]);
        }
        if (puVar5[7] != 0) {
          _free(puVar5[8]);
        }
        if (puVar5[10] != 0) {
          _free(puVar5[0xb]);
        }
        FUN_100de6690(puVar5 + 0x2c);
        uVar14 = 0x8000000000000000;
        if ((puVar5[0xd] != 0x8000000000000000) && (puVar5[0xd] != 0)) {
          _free(puVar5[0xe]);
        }
        if ((puVar5[0x10] != 0x8000000000000000) && (puVar5[0x10] != 0)) {
          _free(puVar5[0x11]);
        }
        puVar3 = puVar5 + 0x13;
        if (*puVar3 != 0x8000000000000000) {
          puVar23 = &UNK_100e09988;
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
          goto SUB_100e00868;
        }
        if ((puVar5[0x29] & 0x7fffffffffffffff) == 0) {
          return;
        }
        puVar4 = (ulong *)puVar5[0x2a];
        break;
      default:
        if (puVar5[5] == 0) {
          return;
        }
        puVar4 = (ulong *)puVar5[6];
      }
      break;
    case 0x3a:
    case 0x3b:
      if (puVar5[0x14] != 0x8000000000000000 && puVar5[0x14] != 0) {
        *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        _free(puVar5[0x15]);
        unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
        unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
        unaff_x20 = *(ulong **)((long)register0x00000008 + -0x20);
        unaff_x19 = *(ulong **)((long)register0x00000008 + -0x18);
      }
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[5] != 0) {
        _free(puVar5[6]);
      }
      if (puVar5[8] != 0) {
        _free(puVar5[9]);
      }
      if (puVar5[0xe] == 0x8000000000000000 || puVar5[0xe] == 0) {
        puVar4 = (ulong *)puVar5[0xc];
        uVar8 = puVar5[0xd];
      }
      else {
        _free(puVar5[0xf]);
        puVar4 = (ulong *)puVar5[0xc];
        uVar8 = puVar5[0xd];
      }
      if (uVar8 != 0) {
        puVar3 = puVar4 + 1;
        do {
          if (puVar3[-1] != 0) {
            _free(*puVar3);
          }
          puVar3 = puVar3 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (puVar5[0xb] == 0) {
        return;
      }
      break;
    case 0x3c:
    case 0x3d:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[4] != 0) {
        _free(puVar5[5]);
      }
      if (puVar5[7] != 0) {
        _free(puVar5[8]);
      }
      if (puVar5[10] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[0xb];
      break;
    case 0x3e:
    case 0x3f:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[4] != 0) {
        _free(puVar5[5]);
      }
      if (puVar5[7] != 0) {
        _free(puVar5[8]);
      }
      if (puVar5[10] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[0xb];
      break;
    case 0x40:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[4] != 0) {
        _free(puVar5[5]);
      }
      if (puVar5[7] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[8];
      break;
    case 0x41:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[5] != 0) {
        _free(puVar5[6]);
      }
      if (puVar5[0xe] == 0x8000000000000000 || puVar5[0xe] == 0) {
        if (puVar5[0x11] == 0x8000000000000000 || puVar5[0x11] == 0) goto LAB_100e2de44;
LAB_100e2dec0:
        _free(puVar5[0x12]);
        uVar8 = puVar5[8];
      }
      else {
        _free(puVar5[0xf]);
        if (puVar5[0x11] != 0x8000000000000000 && puVar5[0x11] != 0) goto LAB_100e2dec0;
LAB_100e2de44:
        uVar8 = puVar5[8];
      }
      if (uVar8 != 0) {
        _free(puVar5[9]);
      }
      if (puVar5[0xb] != 0) {
        _free(puVar5[0xc]);
      }
      if (puVar5[1] == 3) {
        uVar8 = puVar5[2] & 0x7fffffffffffffff;
      }
      else {
        if (puVar5[1] != 4) {
          return;
        }
        uVar8 = puVar5[2];
      }
      if (uVar8 == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[3];
      break;
    case 0x42:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[4] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[5];
      break;
    case 0x43:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[5] != 0) {
        _free(puVar5[6]);
      }
      if (puVar5[0xb] == 0x8000000000000000 || puVar5[0xb] == 0) {
        if (puVar5[0xe] == 0x8000000000000000 || puVar5[0xe] == 0) goto LAB_100e41664;
LAB_100e416d0:
        _free(puVar5[0xf]);
        uVar8 = puVar5[8];
      }
      else {
        _free(puVar5[0xc]);
        if (puVar5[0xe] != 0x8000000000000000 && puVar5[0xe] != 0) goto LAB_100e416d0;
LAB_100e41664:
        uVar8 = puVar5[8];
      }
      if (uVar8 != 0) {
        _free(puVar5[9]);
      }
      if (puVar5[1] == 3) {
        uVar8 = puVar5[2] & 0x7fffffffffffffff;
      }
      else {
        if (puVar5[1] != 4) {
          return;
        }
        uVar8 = puVar5[2];
      }
      if (uVar8 == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[3];
      break;
    case 0x44:
      *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      uVar8 = puVar5[5];
      uVar11 = puVar5[6];
      if (uVar11 == 0) goto code_r0x000100e2afac;
      puVar18 = (undefined8 *)(uVar8 + 0x20);
      goto code_r0x000100e2af64;
    case 0x45:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      FUN_100e6ca64(puVar5 + 4);
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      uVar8 = puVar5[8];
      if (uVar8 == 0) {
        return;
      }
      uVar11 = puVar5[10];
      if (uVar11 == 0) goto LAB_100d1c730;
      plVar16 = (long *)puVar5[7];
      plVar19 = plVar16 + 1;
      lVar12 = *plVar16;
      uVar7 = CONCAT17(-(-1 < lVar12),
                       CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar12 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar12 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar12 >> 8)),-(-1 < (char)lVar12)))))))) &
              0x8080808080808080;
      goto joined_r0x000100d1c6d4;
    case 0x46:
      if (puVar5[1] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[2];
      break;
    default:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[5] != 0) {
        _free(puVar5[6]);
      }
      if (puVar5[8] == 0x8000000000000000 || puVar5[8] == 0) {
        if (puVar5[0xb] == 0x8000000000000000 || puVar5[0xb] == 0) goto LAB_100e1f094;
LAB_100e1f0d8:
        _free(puVar5[0xc]);
        uVar8 = puVar5[1];
        if (uVar8 == 3) goto LAB_100e1f0ec;
LAB_100e1f0a0:
        if (uVar8 != 4) {
          return;
        }
        uVar8 = puVar5[2];
      }
      else {
        _free(puVar5[9]);
        if (puVar5[0xb] != 0x8000000000000000 && puVar5[0xb] != 0) goto LAB_100e1f0d8;
LAB_100e1f094:
        uVar8 = puVar5[1];
        if (uVar8 != 3) goto LAB_100e1f0a0;
LAB_100e1f0ec:
        uVar8 = puVar5[2] & 0x7fffffffffffffff;
      }
      if (uVar8 == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[3];
      break;
    case 0x48:
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar5[1] != 0) {
        _free(puVar5[2]);
      }
      if (puVar5[4] == 0x8000000000000000 || puVar5[4] == 0) {
        if (puVar5[7] == 0x8000000000000000 || puVar5[7] == 0) {
          return;
        }
      }
      else {
        _free(puVar5[5]);
        if (puVar5[7] == 0x8000000000000000 || puVar5[7] == 0) {
          return;
        }
      }
      puVar4 = (ulong *)puVar5[8];
    }
    goto code_r0x000108aa97c4;
  }
code_r0x000100e02a24:
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar12 = 2;
  if (1 < *puVar5) {
    lVar12 = *puVar5 - 2;
  }
  switch(lVar12) {
  case 0:
    if (puVar5[7] != 0x8000000000000000 && puVar5[7] != 0) {
      _free(puVar5[8]);
    }
    if (puVar5[1] != 0) {
      _free(puVar5[2]);
    }
    puVar4 = (ulong *)puVar5[5];
    puVar3 = puVar4;
    for (uVar8 = puVar5[6]; uVar8 != 0; uVar8 = uVar8 - 1) {
      uVar7 = *puVar3;
      uVar11 = uVar7 ^ 0x8000000000000000;
      if (-1 < (long)uVar7) {
        uVar11 = 1;
      }
      if ((uVar11 == 0) || (uVar11 != 1)) {
        if (puVar3[1] != 0) {
          lVar12 = 0x10;
          goto code_r0x000100e02ab0;
        }
      }
      else if (uVar7 != 0) {
        lVar12 = 8;
code_r0x000100e02ab0:
        _free(*(undefined8 *)((long)puVar3 + lVar12));
      }
      puVar3 = puVar3 + 4;
    }
    uVar8 = puVar5[4];
    goto joined_r0x000100e02e88;
  case 1:
    if (puVar5[1] != 0) {
      _free(puVar5[2]);
    }
    uVar8 = puVar5[5];
    uVar11 = puVar5[6];
    if (uVar11 != 0) {
      puVar18 = (undefined8 *)(uVar8 + 8);
      do {
        if (puVar18[-1] != 0) {
          _free(*puVar18);
        }
        puVar18 = puVar18 + 3;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (puVar5[4] != 0) {
      _free(uVar8);
    }
    uVar8 = puVar5[7];
    if (uVar8 != 0x8000000000000000) {
      uVar11 = puVar5[8];
      uVar7 = puVar5[9];
      if (uVar7 != 0) {
        puVar18 = (undefined8 *)(uVar11 + 0x10);
        do {
          if (puVar18[-1] != 0) {
            _free(*puVar18);
          }
          puVar18 = puVar18 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (uVar8 != 0) {
        _free(uVar11);
      }
    }
    if (puVar5[10] != 0x8000000000000000 && puVar5[10] != 0) {
      puVar4 = (ulong *)puVar5[0xb];
      goto code_r0x000108aa97c4;
    }
    break;
  case 2:
    if (puVar5[0x11] != 0x8000000000000000 && puVar5[0x11] != 0) {
      _free(puVar5[0x12]);
    }
    if (puVar5[0x14] != 0x8000000000000000 && puVar5[0x14] != 0) {
      _free(puVar5[0x15]);
    }
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
    uVar8 = puVar5[3];
    uVar11 = puVar5[4];
    if (uVar11 != 0) {
      puVar18 = (undefined8 *)(uVar8 + 8);
      do {
        if (puVar18[-1] != 0) {
          _free(*puVar18);
        }
        puVar18 = puVar18 + 3;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (puVar5[2] != 0) {
      _free(uVar8);
    }
    if (puVar5[5] == 0x8000000000000000 || puVar5[5] == 0) {
      uVar8 = puVar5[0xb];
    }
    else {
      _free(puVar5[6]);
      uVar8 = puVar5[0xb];
    }
    if (uVar8 != 0) {
      FUN_100cb56bc();
    }
    if ((puVar5[8] == 0x8000000000000000) || (puVar5[8] == 0)) {
      return;
    }
    puVar4 = (ulong *)puVar5[9];
    goto code_r0x000108aa97c4;
  case 3:
    if (puVar5[10] != 0x8000000000000000 && puVar5[10] != 0) {
      _free(puVar5[0xb]);
    }
    if (puVar5[1] != 0) {
      _free(puVar5[2]);
    }
    if ((puVar5[0xd] != 0x8000000000000000) && (puVar5[0xd] != 0)) {
      uVar8 = puVar5[0xe];
code_r0x000100e02f44:
      _free(uVar8);
    }
    goto code_r0x000100e02f48;
  case 4:
    if (puVar5[4] == 0x8000000000000000 || puVar5[4] == 0) {
      if (puVar5[7] == 0x8000000000000000 || puVar5[7] == 0) goto code_r0x000100e02b50;
code_r0x000100e02ecc:
      _free(puVar5[8]);
      uVar8 = puVar5[10];
    }
    else {
      _free(puVar5[5]);
      if (puVar5[7] != 0x8000000000000000 && puVar5[7] != 0) goto code_r0x000100e02ecc;
code_r0x000100e02b50:
      uVar8 = puVar5[10];
    }
    if ((uVar8 != 0x8000000000000000) && (uVar8 != 0)) {
      _free(puVar5[0xb]);
    }
    if (puVar5[1] != 0) {
      _free(puVar5[2]);
    }
    puVar3 = puVar5 + 0xd;
    uVar17 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -8);
    uVar15 = *(undefined8 *)((long)register0x00000008 + -0x20);
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(ulong **)((long)register0x00000008 + -0x30);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
    unaff_x24 = *(ulong *)((long)register0x00000008 + -0x40);
    unaff_x23 = *(ulong *)((long)register0x00000008 + -0x38);
code_r0x000100de6690:
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = uVar15;
    *(undefined8 *)((long)register0x00000008 + -0x18) = uVar13;
    *(undefined8 *)((long)register0x00000008 + -0x10) = uVar17;
    *(undefined8 *)((long)register0x00000008 + -8) = uVar14;
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
    }
    else if (uVar8 == 4) {
      puVar4 = (ulong *)puVar3[2];
      lVar12 = puVar3[3] + 1;
      puVar5 = puVar4;
      while (lVar12 = lVar12 + -1, lVar12 != 0) {
        FUN_100de6690(puVar5);
        puVar5 = puVar5 + 9;
      }
      if (puVar3[1] == 0) {
        return;
      }
    }
    else {
      uVar8 = puVar3[4];
      if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
        _free(puVar3[3] + uVar8 * -8 + -8);
      }
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
      puVar4 = (ulong *)puVar3[1];
      lVar12 = puVar3[2] + 1;
      puVar5 = puVar4;
      while (lVar12 = lVar12 + -1, lVar12 != 0) {
        if (*puVar5 != 0) {
          _free(puVar5[1]);
        }
        FUN_100de6690(puVar5 + 3);
        puVar5 = puVar5 + 0xd;
      }
      if (*puVar3 == 0) {
        return;
      }
    }
    goto code_r0x000108aa97c4;
  case 5:
    if (puVar5[6] != 0) {
      _free(puVar5[7]);
    }
    if (puVar5[1] == 0) {
code_r0x000100e02f78:
      if (puVar5[2] == 0) {
        return;
      }
      puVar4 = (ulong *)puVar5[3];
      goto code_r0x000108aa97c4;
    }
    puVar4 = (ulong *)puVar5[3];
    puVar3 = puVar4;
    for (uVar8 = puVar5[4]; uVar8 != 0; uVar8 = uVar8 - 1) {
      uVar7 = *puVar3;
      uVar11 = uVar7 ^ 0x8000000000000000;
      if (-1 < (long)uVar7) {
        uVar11 = 1;
      }
      if ((uVar11 == 0) || (uVar11 != 1)) {
        if (puVar3[1] != 0) {
          lVar12 = 0x10;
          goto code_r0x000100e02ba4;
        }
      }
      else if (uVar7 != 0) {
        lVar12 = 8;
code_r0x000100e02ba4:
        _free(*(undefined8 *)((long)puVar3 + lVar12));
      }
      puVar3 = puVar3 + 4;
    }
    goto code_r0x000100e02de4;
  case 6:
    if (puVar5[10] == 0x8000000000000000 || puVar5[10] == 0) {
      if (puVar5[0xd] == 0x8000000000000000 || puVar5[0xd] == 0) goto code_r0x000100e02d54;
code_r0x000100e02f30:
      _free(puVar5[0xe]);
      uVar8 = puVar5[1];
    }
    else {
      _free(puVar5[0xb]);
      if (puVar5[0xd] != 0x8000000000000000 && puVar5[0xd] != 0) goto code_r0x000100e02f30;
code_r0x000100e02d54:
      uVar8 = puVar5[1];
    }
    if (uVar8 != 0) {
      uVar8 = puVar5[2];
      goto code_r0x000100e02f44;
    }
code_r0x000100e02f48:
    if (puVar5[4] != 0) {
      uVar8 = puVar5[5];
code_r0x000100e02f54:
      _free(uVar8);
    }
code_r0x000100e02f58:
    if (puVar5[7] != 0) {
      puVar4 = (ulong *)puVar5[8];
      goto code_r0x000108aa97c4;
    }
    break;
  case 7:
    if (puVar5[6] != 0) {
      _free(puVar5[7]);
    }
    if (puVar5[9] == 0x8000000000000000 || puVar5[9] == 0) {
      uVar8 = puVar5[1];
    }
    else {
      _free(puVar5[10]);
      uVar8 = puVar5[1];
    }
    if (uVar8 == 0) goto code_r0x000100e02f78;
    puVar4 = (ulong *)puVar5[3];
    puVar3 = puVar4;
    for (uVar8 = puVar5[4]; uVar8 != 0; uVar8 = uVar8 - 1) {
      uVar7 = *puVar3;
      uVar11 = uVar7 ^ 0x8000000000000000;
      if (-1 < (long)uVar7) {
        uVar11 = 1;
      }
      if ((uVar11 == 0) || (uVar11 != 1)) {
        if (puVar3[1] != 0) {
          lVar12 = 0x10;
          goto code_r0x000100e02da4;
        }
      }
      else if (uVar7 != 0) {
        lVar12 = 8;
code_r0x000100e02da4:
        _free(*(undefined8 *)((long)puVar3 + lVar12));
      }
      puVar3 = puVar3 + 4;
    }
code_r0x000100e02de4:
    uVar8 = puVar5[2];
    goto joined_r0x000100e02e88;
  case 8:
    if (puVar5[10] != 0x8000000000000000 && puVar5[10] != 0) {
      _free(puVar5[0xb]);
    }
    if (puVar5[1] != 0) {
      _free(puVar5[2]);
    }
    if (puVar5[4] != 0) {
      _free(puVar5[5]);
    }
    puVar4 = (ulong *)puVar5[8];
    lVar12 = puVar5[9] + 1;
    puVar3 = puVar4;
    while (lVar12 = lVar12 + -1, lVar12 != 0) {
      FUN_100de6690(puVar3);
      puVar3 = puVar3 + 9;
    }
    uVar8 = puVar5[7];
joined_r0x000100e02e88:
    if (uVar8 != 0) goto code_r0x000108aa97c4;
    break;
  case 9:
    if (puVar5[8] == 0x8000000000000000 || puVar5[8] == 0) {
      if (puVar5[0xb] == 0x8000000000000000 || puVar5[0xb] == 0) goto code_r0x000100e02e14;
code_r0x000100e02fb4:
      _free(puVar5[0xc]);
      uVar8 = puVar5[1];
    }
    else {
      _free(puVar5[9]);
      if (puVar5[0xb] != 0x8000000000000000 && puVar5[0xb] != 0) goto code_r0x000100e02fb4;
code_r0x000100e02e14:
      uVar8 = puVar5[1];
    }
    if (uVar8 != 4) {
      puVar3 = puVar5 + 1;
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar15 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x18);
      unaff_x22 = *(ulong **)((long)register0x00000008 + -0x30);
      unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
FUN_100e0c988:
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) = uVar15;
      *(undefined8 *)((long)register0x00000008 + -0x18) = uVar13;
      *(undefined8 *)((long)register0x00000008 + -0x10) = uVar17;
      *(undefined8 *)((long)register0x00000008 + -8) = uVar14;
      uVar8 = *puVar3;
      if ((long)uVar8 < 2) {
        if (uVar8 == 0) {
          if (puVar3[1] == 0x8000000000000000 || puVar3[1] == 0) {
            uVar8 = puVar3[4];
          }
          else {
            _free(puVar3[2]);
            uVar8 = puVar3[4];
          }
          if (uVar8 != 0x8000000000000000) {
            puVar4 = (ulong *)puVar3[5];
            uVar11 = puVar3[6];
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
            if (uVar8 != 0) goto code_r0x000108aa97c4;
          }
        }
        else if ((puVar3[1] & 0x7fffffffffffffff) != 0) {
          puVar4 = (ulong *)puVar3[2];
          goto code_r0x000108aa97c4;
        }
      }
      else if (uVar8 == 2) {
        if (puVar3[1] == 0x8000000000000000 || puVar3[1] == 0) {
          uVar8 = puVar3[4];
        }
        else {
          _free(puVar3[2]);
          uVar8 = puVar3[4];
        }
        if ((uVar8 & 0x7fffffffffffffff) != 0) {
          puVar4 = (ulong *)puVar3[5];
          goto code_r0x000108aa97c4;
        }
      }
      return;
    }
    break;
  case 10:
    if (puVar5[1] != 0) {
      _free(puVar5[2]);
    }
    if (puVar5[4] != 0) {
      _free(puVar5[5]);
    }
    if (puVar5[10] != 0x8000000000000000 && puVar5[10] != 0) {
      uVar8 = puVar5[0xb];
      goto code_r0x000100e02f54;
    }
    goto code_r0x000100e02f58;
  case 0xb:
    if (puVar5[1] == 0) {
      return;
    }
    goto code_r0x000100e02bf8;
  case 0xd:
    if (puVar5[1] == 0x8000000000000000 || puVar5[1] == 0) {
      return;
    }
code_r0x000100e02bf8:
    puVar4 = (ulong *)puVar5[2];
    goto code_r0x000108aa97c4;
  }
  return;
joined_r0x000100d1c6d4:
  do {
    while (uVar7 == 0) {
      lVar12 = *plVar19;
      plVar16 = plVar16 + -0x30;
      plVar19 = plVar19 + 1;
      uVar7 = CONCAT17(-(-1 < lVar12),
                       CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar12 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar12 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar12 >> 8)),-(-1 < (char)lVar12)))))))) &
              0x8080808080808080;
    }
    uVar10 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    iVar1 = (int)((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3);
    if (plVar16[(long)-iVar1 * 6 + -4] == 3) {
      uVar10 = plVar16[(long)-iVar1 * 6 + -3] & 0x7fffffffffffffff;
joined_r0x000100d1c728:
      if (uVar10 != 0) {
        _free(plVar16[(long)-iVar1 * 6 + -2]);
      }
    }
    else if (plVar16[(long)-iVar1 * 6 + -4] == 4) {
      uVar10 = plVar16[(long)-iVar1 * 6 + -3];
      goto joined_r0x000100d1c728;
    }
    uVar7 = uVar7 - 1 & uVar7;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
LAB_100d1c730:
  if (uVar8 * 0x31 == -0x39) {
    return;
  }
  puVar4 = (ulong *)(puVar5[7] + uVar8 * -0x30 + -0x30);
  goto code_r0x000108aa97c4;
code_r0x000100e2af64:
  do {
    if (puVar18[-4] == -0x8000000000000000 || puVar18[-4] == 0) {
      if (puVar18[-1] != -0x8000000000000000 && puVar18[-1] != 0) {
code_r0x000100e2afa0:
        _free(*puVar18);
      }
    }
    else {
      _free(puVar18[-3]);
      if (puVar18[-1] != -0x8000000000000000 && puVar18[-1] != 0) goto code_r0x000100e2afa0;
    }
    puVar18 = puVar18 + 8;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
code_r0x000100e2afac:
  if (puVar5[4] != 0) {
    _free(uVar8);
  }
  if (puVar5[7] == 0) {
    return;
  }
  puVar4 = (ulong *)puVar5[8];
  goto code_r0x000108aa97c4;
joined_r0x000100e797a0:
  if (uVar8 == 0) goto LAB_100e79848;
  uVar11 = *puVar3;
  lVar12 = uVar11 + 0x7ffffffffffffffb;
  if (uVar11 < 0x8000000000000005) {
    lVar12 = 2;
  }
  if ((lVar12 == 0) || (lVar12 == 1)) {
    uVar11 = puVar3[1];
joined_r0x000100e797c0:
    if (uVar11 != 0) {
      lVar12 = 0x10;
LAB_100e797c8:
      _free(*(undefined8 *)((long)puVar3 + lVar12));
    }
  }
  else {
    uVar7 = uVar11 ^ 0x8000000000000000;
    if (-1 < (long)uVar11) {
      uVar7 = 5;
    }
    if (uVar7 < 5) {
      if (uVar7 == 2) {
        uVar11 = puVar3[1] & 0x7fffffffffffffff;
        goto joined_r0x000100e797c0;
      }
    }
    else {
      if (uVar11 != 0) {
        _free(puVar3[1]);
      }
      if ((puVar3[3] & 0x7fffffffffffffff) != 0) {
        lVar12 = 0x20;
        goto LAB_100e797c8;
      }
    }
  }
  puVar3 = puVar3 + 7;
  uVar8 = uVar8 - 1;
  goto joined_r0x000100e797a0;
LAB_100e79848:
  if (puVar5[0x13] == 0) {
    return;
  }
  goto code_r0x000108aa97c4;
code_r0x000100dfc85c:
  if (puVar5[1] == 0) {
code_r0x000100dfc770:
    return;
  }
  puVar4 = (ulong *)puVar5[2];
  goto code_r0x000108aa97c4;
joined_r0x000100cdf69c:
  do {
    while (uVar7 == 0) {
      lVar12 = *plVar19;
      plVar16 = plVar16 + -0x48;
      plVar19 = plVar19 + 1;
      uVar7 = CONCAT17(-(-1 < lVar12),
                       CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar12 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar12 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar12 >> 8)),-(-1 < (char)lVar12)))))))) &
              0x8080808080808080;
    }
    uVar10 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    iVar1 = (int)((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3);
    if (plVar16[(long)-iVar1 * 9 + -9] != 0) {
      _free(plVar16[(long)-iVar1 * 9 + -8]);
    }
    uVar6 = plVar16[(long)-iVar1 * 9 + -6];
    uVar10 = uVar6 ^ 0x8000000000000000;
    if (-1 < (long)uVar6) {
      uVar10 = 2;
    }
    if ((uVar10 == 0) || (uVar10 == 1)) {
      if (plVar16[(long)-iVar1 * 9 + -5] != 0) {
        lVar12 = 0x10;
        goto LAB_100cdf684;
      }
    }
    else {
      if (uVar6 != 0) {
        _free(plVar16[(long)-iVar1 * 9 + -5]);
      }
      if ((plVar16[(long)-iVar1 * 9 + -3] & 0x7fffffffffffffffU) != 0) {
        lVar12 = 0x20;
LAB_100cdf684:
        _free(*(undefined8 *)((long)(plVar16 + (long)-iVar1 * 9 + -6) + lVar12));
      }
    }
    uVar7 = uVar7 - 1 & uVar7;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
LAB_100cdf718:
  if (uVar8 * 0x49 == -0x51) {
    return;
  }
  puVar4 = (ulong *)(*puVar5 + uVar8 * -0x48 + -0x48);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar4);
  return;
}

