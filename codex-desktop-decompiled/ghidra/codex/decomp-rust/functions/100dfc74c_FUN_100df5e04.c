
/* WARNING: Possible PIC construction at 0x000100e26f70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e09984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26f74) */
/* WARNING: Type propagation algorithm not settling */

void FUN_100df5e04(long *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x19;
  undefined8 uVar12;
  long *unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 unaff_x21;
  long *plVar16;
  long *unaff_x22;
  undefined8 uVar17;
  undefined8 *puVar18;
  long *plVar19;
  long unaff_x23;
  long unaff_x24;
  long lVar20;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar21;
  undefined8 unaff_x30;
  undefined *puVar22;
  long lVar23;
  
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  puVar2 = (undefined1 *)register0x00000008;
  plVar7 = param_1 + 3;
SUB_100dfc74c:
  switch((int)*plVar7) {
  case 0:
    goto code_r0x000100dfc85c;
  case 1:
    if (plVar7[1] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[2];
    break;
  case 2:
    if (plVar7[1] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[2];
    break;
  case 3:
    if ((plVar7[1] & 0x7fffffffffffffffU) == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[2];
    break;
  case 4:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    uVar11 = plVar7[1];
    uVar10 = uVar11 ^ 0x8000000000000000;
    if (-1 < (long)uVar11) {
      uVar10 = 0xc;
    }
    switch(uVar10) {
    case 0:
    case 6:
      if (plVar7[2] != 0) {
        _free(plVar7[3]);
      }
      if (plVar7[5] == -0x8000000000000000 || plVar7[5] == 0) {
        return;
      }
      break;
    case 1:
    case 7:
    case 8:
    case 9:
      uVar10 = plVar7[2] & 0x7fffffffffffffff;
      goto joined_r0x000100e0cc14;
    default:
      uVar10 = plVar7[2];
joined_r0x000100e0cc14:
      if (uVar10 == 0) {
        return;
      }
      puVar6 = (ulong *)plVar7[3];
      goto code_r0x000108aa97c4;
    case 10:
      puVar5 = (ulong *)(plVar7 + 2);
      uVar17 = *(undefined8 *)(puVar2 + -0x10);
      uVar13 = *(undefined8 *)(puVar2 + -8);
      uVar14 = *(undefined8 *)(puVar2 + -0x20);
      uVar12 = *(undefined8 *)(puVar2 + -0x18);
      goto code_r0x000100de6690;
    case 0xc:
      *(long **)(puVar2 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
      *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
      *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
      *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
      if (plVar7[1] != 0) {
        _free(plVar7[2]);
      }
      if (plVar7[4] != 0) {
        _free(plVar7[5]);
      }
      if (plVar7[7] != 0) {
        _free(plVar7[8]);
      }
      puVar6 = (ulong *)plVar7[0xb];
      lVar9 = plVar7[0xc];
      if (lVar9 != 0) {
        puVar5 = puVar6 + 4;
        do {
          if (puVar5[-4] != 0) {
            _free(puVar5[-3]);
          }
          if (puVar5[-1] != 0) {
            _free(*puVar5);
          }
          puVar5 = puVar5 + 6;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if (plVar7[10] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    case 0xd:
      if (plVar7[2] != 0) {
        _free(plVar7[3]);
      }
      if (plVar7[5] == 0) {
        return;
      }
    }
    puVar6 = (ulong *)plVar7[6];
    break;
  case 5:
    if ((plVar7[1] & 0x7fffffffffffffffU) == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[2];
    break;
  case 6:
    if (plVar7[1] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[2];
    break;
  case 7:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[5];
    break;
  case 8:
  case 9:
  case 10:
  case 0x34:
    goto code_r0x000100dfc770;
  case 0xb:
    if (plVar7[5] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[6];
    break;
  case 0xc:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] != 0) {
      _free(plVar7[5]);
    }
    if (plVar7[0x12] != -0x8000000000000000 && plVar7[0x12] != 0) {
      _free(plVar7[0x13]);
    }
    uVar10 = plVar7[0x1b];
    bVar3 = uVar10 != 0x8000000000000000;
    if (uVar10 < 0x8000000000000001) {
      uVar10 = 0;
    }
    if (bVar3 && (uVar10 & 0x7fffffffffffffff) == 0) {
      FUN_100e79780();
    }
    if (plVar7[0x15] != -0x8000000000000000) {
      if (plVar7[0x15] != 0) {
        _free(plVar7[0x16]);
      }
      if ((plVar7[0x18] != -0x8000000000000000) && (plVar7[0x18] != 0)) {
        _free(plVar7[0x19]);
      }
    }
    if (plVar7[7] != 0) {
      _free(plVar7[8]);
    }
    if (plVar7[10] != 0) {
      _free(plVar7[0xb]);
    }
    if ((plVar7[0xd] == -0x8000000000000000) || (plVar7[0xd] == 0)) {
      return;
    }
    puVar6 = (ulong *)plVar7[0xe];
    break;
  case 0xd:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[7] != 0) {
      _free(plVar7[8]);
    }
    if (plVar7[10] == -0x8000000000000000 || plVar7[10] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[0xb];
    break;
  case 0xe:
    if (plVar7[0xd] == 3) {
      return;
    }
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[0x17] == -0x8000000000000000 || plVar7[0x17] == 0) {
      if (plVar7[0x1a] != -0x8000000000000000 && plVar7[0x1a] != 0) {
code_r0x000100e13e7c:
        _free(plVar7[0x1b]);
      }
    }
    else {
      _free(plVar7[0x18]);
      if (plVar7[0x1a] != -0x8000000000000000 && plVar7[0x1a] != 0) goto code_r0x000100e13e7c;
    }
    if (plVar7[0x1d] < -0x7ffffffffffffffe || plVar7[0x1d] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[0x1e];
    break;
  case 0xf:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    plVar7 = plVar7 + 4;
    if (*plVar7 == -0x8000000000000000) {
      return;
    }
    uVar17 = *(undefined8 *)(puVar2 + -0x10);
    uVar13 = *(undefined8 *)(puVar2 + -8);
    uVar14 = *(undefined8 *)(puVar2 + -0x20);
    uVar12 = *(undefined8 *)(puVar2 + -0x18);
    goto FUN_100e24ac8;
  case 0x10:
    *(long *)(puVar2 + -0x40) = unaff_x24;
    *(long *)(puVar2 + -0x38) = unaff_x23;
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    lVar9 = plVar7[0x10];
    if (lVar9 != -0x8000000000000000) {
      lVar15 = plVar7[0x11];
      lVar23 = plVar7[0x12];
      if (lVar23 != 0) {
        puVar18 = (undefined8 *)(lVar15 + 8);
        do {
          if (puVar18[-1] != 0) {
            _free(*puVar18);
          }
          puVar18 = puVar18 + 3;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
      }
      if (lVar9 != 0) {
        _free(lVar15);
      }
    }
    if (plVar7[4] != 0) {
      _free(plVar7[5]);
    }
    lVar9 = plVar7[8];
    lVar15 = plVar7[9];
    if (lVar15 != 0) {
      puVar18 = (undefined8 *)(lVar9 + 8);
      do {
        if (puVar18[-1] != 0) {
          _free(*puVar18);
        }
        puVar18 = puVar18 + 3;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    if (plVar7[7] != 0) {
      _free(lVar9);
    }
    if (plVar7[10] != 0) {
      _free(plVar7[0xb]);
    }
    puVar6 = (ulong *)plVar7[0xe];
    lVar9 = plVar7[0xf];
    if (lVar9 != 0) {
      puVar5 = puVar6 + 1;
      do {
        if ((puVar5[-1] & 0x7fffffffffffffff) != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 5;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (plVar7[0xd] == 0) {
      return;
    }
    break;
  case 0x11:
    if (plVar7[1] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[2];
    break;
  case 0x12:
    if (plVar7[1] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[2];
    break;
  case 0x13:
    if (plVar7[1] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[2];
    break;
  case 0x14:
    plVar16 = plVar7 + 1;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
    *(long *)(puVar2 + -0x40) = unaff_x24;
    *(long *)(puVar2 + -0x38) = unaff_x23;
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    unaff_x29 = puVar2 + -0x10;
    if (plVar7[10] == -0x8000000000000000 || plVar7[10] == 0) {
      lVar9 = *plVar16;
    }
    else {
      _free(plVar7[0xb]);
      lVar9 = *plVar16;
    }
    if (lVar9 != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] != 0) {
      _free(plVar7[5]);
    }
    if (plVar7[0xd] == -0x8000000000000000 || plVar7[0xd] == 0) {
      uVar11 = plVar7[0x22];
      uVar10 = uVar11;
      if (uVar11 < 0x8000000000000001) {
        uVar10 = 0;
      }
    }
    else {
      _free(plVar7[0xe]);
      uVar11 = plVar7[0x22];
      uVar10 = uVar11;
      if (uVar11 < 0x8000000000000001) {
        uVar10 = 0;
      }
    }
    if ((uVar11 != 0x8000000000000000) && ((uVar10 & 0x7fffffffffffffff) == 0)) {
      FUN_100e79780(plVar7 + 0x22);
    }
    if (plVar7[0x10] != -0x8000000000000000) {
      if (plVar7[0x10] != 0) {
        _free(plVar7[0x11]);
      }
      if ((plVar7[0x13] != -0x8000000000000000) && (plVar7[0x13] != 0)) {
        _free(plVar7[0x14]);
      }
    }
    if (plVar7[7] != 0) {
      _free(plVar7[8]);
    }
    unaff_x23 = plVar7[0x16];
    unaff_x21 = 0x8000000000000000;
    if (unaff_x23 == -0x8000000000000000) {
LAB_100e26f88:
      if (plVar7[0x19] != -0x8000000000000000) {
        if (plVar7[0x19] != 0) {
          _free(plVar7[0x1a]);
        }
        if (plVar7[0x1c] != 0) {
          _free(plVar7[0x1d]);
        }
      }
      if (plVar7[0x1f] == -0x8000000000000000 || plVar7[0x1f] == 0) {
        return;
      }
      puVar6 = (ulong *)plVar7[0x20];
      break;
    }
    unaff_x20 = (long *)plVar7[0x17];
    unaff_x24 = plVar7[0x18];
    if (unaff_x24 == 0) {
      if (unaff_x23 != 0) {
        _free(unaff_x20);
      }
      goto LAB_100e26f88;
    }
    unaff_x22 = unaff_x20 + 0x3b;
    unaff_x30 = 0x100e26f74;
    puVar2 = puVar2 + -0x50;
    plVar7 = unaff_x20;
    unaff_x19 = plVar16;
    goto SUB_100dfc74c;
  case 0x15:
    if (plVar7[0xd] == -0x8000000000000000 || plVar7[0xd] == 0) {
      lVar9 = plVar7[3];
    }
    else {
      *(long **)(puVar2 + -0x20) = unaff_x20;
      *(long **)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
      *(undefined8 *)(puVar2 + -8) = unaff_x30;
      _free(plVar7[0xe]);
      lVar9 = plVar7[3];
    }
    if (lVar9 == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[4];
    break;
  case 0x16:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] < 1) {
      return;
    }
    puVar6 = (ulong *)plVar7[5];
    break;
  case 0x17:
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    lVar9 = plVar7[2];
    lVar15 = plVar7[3];
    if (lVar15 != 0) {
      puVar18 = (undefined8 *)(lVar9 + 8);
      do {
        if (puVar18[-1] != 0) {
          _free(*puVar18);
        }
        puVar18 = puVar18 + 3;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    if (plVar7[1] != 0) {
      _free(lVar9);
    }
    lVar9 = plVar7[5];
    lVar15 = plVar7[6];
    if (lVar15 != 0) {
      puVar18 = (undefined8 *)(lVar9 + 0x20);
      do {
        if (puVar18[-4] != 0) {
          _free(puVar18[-3]);
        }
        if (puVar18[-1] != 0) {
          _free(*puVar18);
        }
        puVar18 = puVar18 + 6;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    if (plVar7[4] != 0) {
      _free(lVar9);
    }
    puVar6 = (ulong *)plVar7[8];
    lVar9 = plVar7[9];
    if (lVar9 != 0) {
      puVar5 = puVar6 + 1;
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (plVar7[7] == 0) {
      return;
    }
    break;
  case 0x18:
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] != 0) {
      _free(plVar7[5]);
    }
    if (plVar7[7] != 0) {
      _free(plVar7[8]);
    }
    if (plVar7[10] != -0x7ffffffffffffffb) {
      FUN_100de6690();
    }
    if ((plVar7[0x13] != -0x8000000000000000) && (plVar7[0x13] != 0)) {
      _free(plVar7[0x14]);
    }
    if ((plVar7[0x16] == -0x8000000000000000) || (plVar7[0x16] == 0)) {
      return;
    }
    puVar6 = (ulong *)plVar7[0x17];
    break;
  case 0x19:
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] != 0) {
      _free(plVar7[5]);
    }
    if (plVar7[7] != 0) {
      _free(plVar7[8]);
    }
    if (plVar7[10] != -0x7ffffffffffffffb) {
      FUN_100de6690();
    }
    if ((plVar7[0x13] != -0x8000000000000000) && (plVar7[0x13] != 0)) {
      _free(plVar7[0x14]);
    }
    if ((plVar7[0x16] != -0x8000000000000000) && (plVar7[0x16] != 0)) {
      _free(plVar7[0x17]);
    }
    plVar16 = plVar7 + 0x19;
    if (*plVar16 == -0x8000000000000000) {
      if (plVar7[0x1a] == 0) {
        return;
      }
      puVar6 = (ulong *)plVar7[0x1b];
    }
    else {
      puVar21 = *(undefined1 **)(puVar2 + -0x10);
      puVar22 = *(undefined **)(puVar2 + -8);
      uVar13 = *(undefined8 *)(puVar2 + -0x20);
      puVar6 = *(ulong **)(puVar2 + -0x18);
      uVar17 = *(undefined8 *)(puVar2 + -0x30);
      uVar14 = *(undefined8 *)(puVar2 + -0x28);
SUB_100e00868:
      *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
      *(long *)(puVar2 + -0x40) = unaff_x24;
      *(long *)(puVar2 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar2 + -0x30) = uVar17;
      *(undefined8 *)(puVar2 + -0x28) = uVar14;
      *(undefined8 *)(puVar2 + -0x20) = uVar13;
      *(ulong **)(puVar2 + -0x18) = puVar6;
      *(undefined1 **)(puVar2 + -0x10) = puVar21;
      *(undefined **)(puVar2 + -8) = puVar22;
      lVar15 = plVar16[1];
      lVar9 = plVar16[2] + 1;
      lVar23 = lVar15;
      while (lVar9 = lVar9 + -1, lVar9 != 0) {
        FUN_100de6690(lVar23);
        lVar23 = lVar23 + 0x48;
      }
      if (*plVar16 != 0) {
        _free(lVar15);
      }
      if (plVar16[3] != -0x7ffffffffffffffb) {
        FUN_100de6690();
      }
      puVar5 = (ulong *)(plVar16 + 0xc);
      if (*puVar5 == 0x8000000000000005) {
        return;
      }
      uVar17 = *(undefined8 *)(puVar2 + -0x10);
      uVar13 = *(undefined8 *)(puVar2 + -8);
      uVar14 = *(undefined8 *)(puVar2 + -0x20);
      uVar12 = *(undefined8 *)(puVar2 + -0x18);
      unaff_x22 = *(long **)(puVar2 + -0x30);
      unaff_x21 = *(undefined8 *)(puVar2 + -0x28);
      unaff_x24 = *(long *)(puVar2 + -0x40);
      unaff_x23 = *(long *)(puVar2 + -0x38);
code_r0x000100de6690:
      *(long *)(puVar2 + -0x40) = unaff_x24;
      *(long *)(puVar2 + -0x38) = unaff_x23;
      *(long **)(puVar2 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x20) = uVar14;
      *(undefined8 *)(puVar2 + -0x18) = uVar12;
      *(undefined8 *)(puVar2 + -0x10) = uVar17;
      *(undefined8 *)(puVar2 + -8) = uVar13;
      uVar10 = *puVar5 ^ 0x8000000000000000;
      if (-1 < (long)*puVar5) {
        uVar10 = 5;
      }
      if (uVar10 < 3) {
        return;
      }
      if (uVar10 == 3) {
        if (puVar5[1] == 0) {
          return;
        }
        puVar6 = (ulong *)puVar5[2];
      }
      else if (uVar10 == 4) {
        puVar6 = (ulong *)puVar5[2];
        lVar9 = puVar5[3] + 1;
        puVar4 = puVar6;
        while (lVar9 = lVar9 + -1, lVar9 != 0) {
          FUN_100de6690(puVar4);
          puVar4 = puVar4 + 9;
        }
        if (puVar5[1] == 0) {
          return;
        }
      }
      else {
        uVar10 = puVar5[4];
        if ((uVar10 != 0) && (uVar10 * 9 != -0x11)) {
          _free(puVar5[3] + uVar10 * -8 + -8);
        }
        *(undefined8 *)(puVar2 + -0x40) = *(undefined8 *)(puVar2 + -0x40);
        *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)(puVar2 + -0x38);
        *(undefined8 *)(puVar2 + -0x30) = *(undefined8 *)(puVar2 + -0x30);
        *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
        *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
        *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
        *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
        *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
        puVar6 = (ulong *)puVar5[1];
        lVar9 = puVar5[2] + 1;
        puVar4 = puVar6;
        while (lVar9 = lVar9 + -1, lVar9 != 0) {
          if (*puVar4 != 0) {
            _free(puVar4[1]);
          }
          FUN_100de6690(puVar4 + 3);
          puVar4 = puVar4 + 0xd;
        }
        if (*puVar5 == 0) {
          return;
        }
      }
    }
    break;
  case 0x1a:
    if (plVar7[1] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[2];
    break;
  case 0x1b:
    plVar16 = plVar7 + 1;
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[8] != 0) {
      _free(plVar7[9]);
    }
    if (plVar7[0xb] != 0) {
      _free(plVar7[0xc]);
    }
    uVar17 = *(undefined8 *)(puVar2 + -0x10);
    uVar13 = *(undefined8 *)(puVar2 + -8);
    uVar14 = *(undefined8 *)(puVar2 + -0x20);
    uVar12 = *(undefined8 *)(puVar2 + -0x18);
FUN_100e0c988:
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = uVar14;
    *(undefined8 *)(puVar2 + -0x18) = uVar12;
    *(undefined8 *)(puVar2 + -0x10) = uVar17;
    *(undefined8 *)(puVar2 + -8) = uVar13;
    lVar9 = *plVar16;
    if (lVar9 < 2) {
      if (lVar9 == 0) {
        if (plVar16[1] == -0x8000000000000000 || plVar16[1] == 0) {
          lVar9 = plVar16[4];
        }
        else {
          _free(plVar16[2]);
          lVar9 = plVar16[4];
        }
        if (lVar9 == -0x8000000000000000) {
          return;
        }
        puVar6 = (ulong *)plVar16[5];
        lVar15 = plVar16[6];
        if (lVar15 != 0) {
          puVar5 = puVar6 + 1;
          do {
            if (puVar5[-1] != 0) {
              _free(*puVar5);
            }
            puVar5 = puVar5 + 3;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        if (lVar9 == 0) {
          return;
        }
      }
      else {
        if ((plVar16[1] & 0x7fffffffffffffffU) == 0) {
          return;
        }
        puVar6 = (ulong *)plVar16[2];
      }
    }
    else {
      if (lVar9 != 2) {
        return;
      }
      if (plVar16[1] == -0x8000000000000000 || plVar16[1] == 0) {
        uVar10 = plVar16[4];
      }
      else {
        _free(plVar16[2]);
        uVar10 = plVar16[4];
      }
      if ((uVar10 & 0x7fffffffffffffff) == 0) {
        return;
      }
      puVar6 = (ulong *)plVar16[5];
    }
    break;
  case 0x1c:
    if (plVar7[1] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[2];
    break;
  case 0x1d:
    plVar7 = plVar7 + 1;
DAT_100e17134:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (*plVar7 != 0) {
      _free(plVar7[1]);
    }
    if (plVar7[3] != 0) {
      _free(plVar7[4]);
    }
    if (plVar7[9] == -0x8000000000000000 || plVar7[9] == 0) {
      lVar9 = plVar7[6];
    }
    else {
      _free(plVar7[10]);
      lVar9 = plVar7[6];
    }
    if (lVar9 != 0) {
      _free(plVar7[7]);
    }
    if ((plVar7[0xc] & 0x7fffffffffffffffU) == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[0xd];
    break;
  case 0x1e:
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[0x10] == -0x8000000000000000 || plVar7[0x10] == 0) {
      lVar9 = plVar7[4];
    }
    else {
      _free(plVar7[0x11]);
      lVar9 = plVar7[4];
    }
    if (lVar9 != 0) {
      _free(plVar7[5]);
    }
    lVar9 = plVar7[8];
    lVar15 = plVar7[9];
    if (lVar15 != 0) {
      puVar18 = (undefined8 *)(lVar9 + 8);
      do {
        if (puVar18[-1] != 0) {
          _free(*puVar18);
        }
        puVar18 = puVar18 + 3;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    if (plVar7[7] != 0) {
      _free(lVar9);
    }
    if (plVar7[10] != 0) {
      _free(plVar7[0xb]);
    }
    lVar15 = plVar7[0xe];
    lVar9 = lVar15;
    for (lVar23 = plVar7[0xf]; lVar23 != 0; lVar23 = lVar23 + -1) {
      FUN_100e1d024(lVar9);
      lVar9 = lVar9 + 0x50;
    }
    if (plVar7[0xd] != 0) {
      _free(lVar15);
    }
    if (plVar7[0x13] == -0x8000000000000000 || plVar7[0x13] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[0x14];
    break;
  case 0x1f:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[5];
    break;
  case 0x20:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] != 0) {
      _free(plVar7[5]);
    }
    if (plVar7[7] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[8];
    break;
  case 0x21:
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[0x1c] == -0x8000000000000000 || plVar7[0x1c] == 0) {
      lVar9 = plVar7[4];
    }
    else {
      _free(plVar7[0x1d]);
      lVar9 = plVar7[4];
    }
    if (lVar9 != 0) {
      _free(plVar7[5]);
    }
    lVar9 = plVar7[8];
    lVar15 = plVar7[9];
    if (lVar15 != 0) {
      puVar18 = (undefined8 *)(lVar9 + 8);
      do {
        if (puVar18[-1] != 0) {
          _free(*puVar18);
        }
        puVar18 = puVar18 + 3;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    if (plVar7[7] != 0) {
      _free(lVar9);
    }
    if (plVar7[10] != 0) {
      _free(plVar7[0xb]);
    }
    lVar15 = plVar7[0xe];
    lVar9 = lVar15;
    for (lVar23 = plVar7[0xf]; lVar23 != 0; lVar23 = lVar23 + -1) {
      FUN_100e1d024(lVar9);
      lVar9 = lVar9 + 0x50;
    }
    if (plVar7[0xd] != 0) {
      _free(lVar15);
    }
    if (plVar7[0x1f] == -0x8000000000000000 || plVar7[0x1f] == 0) {
      lVar9 = plVar7[0x10];
    }
    else {
      _free(plVar7[0x20]);
      lVar9 = plVar7[0x10];
    }
    if (lVar9 != 0) {
      _free(plVar7[0x11]);
    }
    if (plVar7[0x13] != 0) {
      _free(plVar7[0x14]);
    }
    if (plVar7[0x16] != 0) {
      _free(plVar7[0x17]);
    }
    if (plVar7[0x19] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[0x1a];
    break;
  case 0x22:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[5];
    break;
  case 0x23:
    *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
    *(long *)(puVar2 + -0x40) = unaff_x24;
    *(long *)(puVar2 + -0x38) = unaff_x23;
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[0x10] == -0x8000000000000000 || plVar7[0x10] == 0) {
      lVar9 = plVar7[4];
    }
    else {
      _free(plVar7[0x11]);
      lVar9 = plVar7[4];
    }
    if (lVar9 != 0) {
      _free(plVar7[5]);
    }
    lVar9 = plVar7[8];
    lVar15 = plVar7[9];
    if (lVar15 != 0) {
      puVar18 = (undefined8 *)(lVar9 + 8);
      do {
        if (puVar18[-1] != 0) {
          _free(*puVar18);
        }
        puVar18 = puVar18 + 3;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    if (plVar7[7] != 0) {
      _free(lVar9);
    }
    if (plVar7[10] != 0) {
      _free(plVar7[0xb]);
    }
    if ((plVar7[0x13] != -0x8000000000000000) && (plVar7[0x13] != 0)) {
      _free(plVar7[0x14]);
    }
    if ((plVar7[0x16] & 0x7fffffffffffffffU) == 0) {
      lVar9 = plVar7[0x1a];
    }
    else {
      _free(plVar7[0x17]);
      lVar9 = plVar7[0x1a];
    }
    if (lVar9 != -0x8000000000000000) {
      lVar15 = plVar7[0x1b];
      lVar23 = plVar7[0x1c];
      if (lVar23 != 0) {
        puVar18 = (undefined8 *)(lVar15 + 8);
        do {
          if (puVar18[-1] != 0) {
            _free(*puVar18);
          }
          puVar18 = puVar18 + 3;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
      }
      if (lVar9 != 0) {
        _free(lVar15);
      }
    }
    lVar9 = plVar7[0x1d];
    if (lVar9 != -0x8000000000000000) {
      lVar15 = plVar7[0x1e];
      lVar23 = plVar7[0x1f];
      if (lVar23 != 0) {
        puVar18 = (undefined8 *)(lVar15 + 8);
        do {
          if (puVar18[-1] != 0) {
            _free(*puVar18);
          }
          puVar18 = puVar18 + 4;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
      }
      if (lVar9 != 0) {
        _free(lVar15);
      }
    }
    if (-0x7fffffffffffffff < plVar7[0x23]) {
      FUN_100e79780(plVar7 + 0x23);
    }
    lVar9 = plVar7[0x20];
    if (lVar9 != -0x8000000000000000) {
      lVar15 = plVar7[0x21];
      lVar23 = plVar7[0x22];
      if (lVar23 != 0) {
        lVar20 = 0;
        do {
          puVar6 = (ulong *)(lVar15 + lVar20 * 0x20);
          uVar11 = *puVar6;
          uVar10 = uVar11 ^ 0x8000000000000000;
          if (-1 < (long)uVar11) {
            uVar10 = 3;
          }
          if (uVar10 == 3) {
            if (uVar11 != 0) {
              uVar10 = puVar6[1];
LAB_100e31464:
              _free(uVar10);
            }
          }
          else if (uVar10 == 1) {
            uVar10 = puVar6[2];
            uVar11 = puVar6[3];
            if (uVar11 != 0) {
              puVar18 = (undefined8 *)(uVar10 + 8);
              do {
                if (puVar18[-1] != 0) {
                  _free(*puVar18);
                }
                puVar18 = puVar18 + 3;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            if (puVar6[1] != 0) goto LAB_100e31464;
          }
          lVar20 = lVar20 + 1;
        } while (lVar20 != lVar23);
      }
      if (lVar9 != 0) {
        _free(lVar15);
      }
    }
    puVar6 = (ulong *)plVar7[0xe];
    puVar5 = puVar6;
    for (lVar9 = plVar7[0xf]; lVar9 != 0; lVar9 = lVar9 + -1) {
      FUN_100e1d024(puVar5);
      puVar5 = puVar5 + 10;
    }
    if (plVar7[0xd] == 0) {
      return;
    }
    break;
  case 0x24:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] != 0) {
      _free(plVar7[5]);
    }
    if (plVar7[7] == -0x8000000000000000 || plVar7[7] == 0) {
      if (plVar7[10] == -0x8000000000000000) goto LAB_100e4b89c;
LAB_100e4b8cc:
      FUN_100e79780();
      uVar10 = plVar7[0xf];
    }
    else {
      _free(plVar7[8]);
      if (plVar7[10] != -0x8000000000000000) goto LAB_100e4b8cc;
LAB_100e4b89c:
      uVar10 = plVar7[0xf];
    }
    if ((uVar10 & 0x7fffffffffffffff) == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[0x10];
    break;
  case 0x25:
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] != 0) {
      _free(plVar7[5]);
    }
    puVar6 = (ulong *)plVar7[8];
    puVar5 = puVar6;
    for (lVar9 = plVar7[9]; lVar9 != 0; lVar9 = lVar9 + -1) {
      FUN_100e4b8ec(puVar5);
      puVar5 = puVar5 + 0xd;
    }
    if (plVar7[7] == 0) {
      return;
    }
    break;
  case 0x26:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] != 0) {
      _free(plVar7[5]);
    }
    if (plVar7[10] == -0x8000000000000000 || plVar7[10] == 0) {
      lVar9 = plVar7[7];
    }
    else {
      _free(plVar7[0xb]);
      lVar9 = plVar7[7];
    }
    if (lVar9 != 0) {
      _free(plVar7[8]);
    }
    puVar5 = (ulong *)(plVar7 + 0xd);
    uVar17 = *(undefined8 *)(puVar2 + -0x10);
    uVar13 = *(undefined8 *)(puVar2 + -8);
    uVar14 = *(undefined8 *)(puVar2 + -0x20);
    uVar12 = *(undefined8 *)(puVar2 + -0x18);
    goto code_r0x000100de6690;
  case 0x27:
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] != 0) {
      _free(plVar7[5]);
    }
    if (plVar7[0xd] == -0x8000000000000000 || plVar7[0xd] == 0) {
      lVar9 = plVar7[7];
    }
    else {
      _free(plVar7[0xe]);
      lVar9 = plVar7[7];
    }
    if (lVar9 != 0) {
      _free(plVar7[8]);
    }
    FUN_100de6690(plVar7 + 0x13);
    lVar9 = plVar7[0xb];
    lVar15 = plVar7[0xc];
    if (lVar15 != 0) {
      puVar18 = (undefined8 *)(lVar9 + 0x10);
      do {
        if (puVar18[-1] != 0) {
          _free(*puVar18);
        }
        puVar18 = puVar18 + 4;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    if (plVar7[10] != 0) {
      _free(lVar9);
    }
    if (plVar7[0x10] == -0x8000000000000000 || plVar7[0x10] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[0x11];
    break;
  case 0x28:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[4] == -0x8000000000000000 || plVar7[4] == 0) {
      lVar9 = plVar7[1];
    }
    else {
      _free(plVar7[5]);
      lVar9 = plVar7[1];
    }
    if (lVar9 != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[7] != -0x8000000000000000 && plVar7[7] != 0) {
      _free(plVar7[8]);
    }
    *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
    *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
    *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
    lVar9 = plVar7[10];
    if (lVar9 != -0x8000000000000000) {
      if (plVar7[0x16] != -0x7ffffffffffffffb) {
        FUN_100de6690();
      }
      if (lVar9 != 0) {
        _free(plVar7[0xb]);
      }
      puVar5 = (ulong *)(plVar7 + 0xd);
      uVar17 = *(undefined8 *)(puVar2 + -0x10);
      uVar13 = *(undefined8 *)(puVar2 + -8);
      uVar14 = *(undefined8 *)(puVar2 + -0x20);
      uVar12 = *(undefined8 *)(puVar2 + -0x18);
      goto code_r0x000100de6690;
    }
    if (plVar7[0x14] != -0x7ffffffffffffffb) {
      FUN_100de6690();
    }
    if (plVar7[0xb] != 0) {
      _free(plVar7[0xc]);
    }
    if (plVar7[0xe] != 0) {
      _free(plVar7[0xf]);
    }
    if (plVar7[0x11] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[0x12];
    break;
  case 0x29:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] != 0) {
      _free(plVar7[5]);
    }
    FUN_100cdf624(plVar7 + 0xd);
    if (plVar7[7] == -0x8000000000000000 || plVar7[7] == 0) {
      lVar9 = plVar7[10];
    }
    else {
      _free(plVar7[8]);
      lVar9 = plVar7[10];
    }
    if ((lVar9 == -0x8000000000000000) || (lVar9 == 0)) {
      return;
    }
    puVar6 = (ulong *)plVar7[0xb];
    break;
  case 0x2a:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[3] != 0) {
      _free(plVar7[4]);
    }
    if (plVar7[9] == -0x8000000000000000 || plVar7[9] == 0) {
      lVar9 = plVar7[6];
    }
    else {
      _free(plVar7[10]);
      lVar9 = plVar7[6];
    }
    if (lVar9 != 0) {
      _free(plVar7[7]);
    }
    if (plVar7[0xc] != -0x8000000000000000 && plVar7[0xc] != 0) {
      _free(plVar7[0xd]);
    }
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
    *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
    *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
    uVar11 = plVar7[0xf];
    uVar10 = uVar11 ^ 0x8000000000000000;
    if (-1 < (long)uVar11) {
      uVar10 = 4;
    }
    if ((long)uVar10 < 2) {
      if (uVar10 == 0) {
LAB_100e3165c:
        if (plVar7[0x10] != 0) {
          _free(plVar7[0x11]);
        }
        if (plVar7[0x13] == 0) {
          return;
        }
        puVar6 = (ulong *)plVar7[0x14];
        break;
      }
      if (uVar10 == 1) {
        if (plVar7[0x10] != 0) {
          _free(plVar7[0x11]);
        }
        lVar9 = plVar7[0x14];
        lVar15 = plVar7[0x15];
        if (lVar15 != 0) {
          puVar18 = (undefined8 *)(lVar9 + 8);
          do {
            if (puVar18[-1] != 0) {
              _free(*puVar18);
            }
            puVar18 = puVar18 + 3;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        if (plVar7[0x13] != 0) {
          _free(lVar9);
        }
        if (plVar7[0x16] == 0) {
          return;
        }
        puVar6 = (ulong *)plVar7[0x17];
        break;
      }
    }
    else {
      if (uVar10 == 2) {
        if (plVar7[0x10] != 0) {
          _free(plVar7[0x11]);
        }
        puVar6 = (ulong *)plVar7[0x14];
        lVar9 = plVar7[0x15];
        if (lVar9 != 0) {
          puVar5 = puVar6 + 1;
          do {
            if (puVar5[-1] != 0) {
              _free(*puVar5);
            }
            puVar5 = puVar5 + 3;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        if (plVar7[0x13] == 0) {
          return;
        }
        break;
      }
      if (uVar10 == 3) goto LAB_100e3165c;
      if (uVar10 == 4) {
        if (uVar11 != 0) {
          _free(plVar7[0x10]);
        }
        if (plVar7[0x12] != 0) {
          _free(plVar7[0x13]);
        }
        if ((plVar7[0x15] != -0x8000000000000000) && (plVar7[0x15] != 0)) {
          _free(plVar7[0x16]);
        }
        if ((plVar7[0x18] != -0x8000000000000000) && (plVar7[0x18] != 0)) {
          _free(plVar7[0x19]);
        }
        if (plVar7[0x1b] == -0x8000000000000000) {
          return;
        }
        if (plVar7[0x1b] == 0) {
          return;
        }
        puVar6 = (ulong *)plVar7[0x1c];
        break;
      }
    }
    if (plVar7[0x10] == -0x8000000000000000 || plVar7[0x10] == 0) {
      lVar9 = plVar7[0x13];
    }
    else {
      _free(plVar7[0x11]);
      lVar9 = plVar7[0x13];
    }
    if (lVar9 == -0x8000000000000000) {
      return;
    }
    *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
    *(long *)(puVar2 + -0x40) = unaff_x24;
    *(long *)(puVar2 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x30) = *(undefined8 *)(puVar2 + -0x30);
    *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
    *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
    *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
    *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
    puVar6 = (ulong *)plVar7[0x14];
    lVar9 = plVar7[0x15];
    puVar5 = puVar6;
    goto joined_r0x000100e797a0;
  case 0x2b:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] == -0x8000000000000000 || plVar7[4] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[5];
    break;
  case 0x2c:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] == -0x8000000000000000 || plVar7[4] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[5];
    break;
  case 0x2d:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] != 0) {
      _free(plVar7[5]);
    }
    plVar7 = plVar7 + 7;
    uVar17 = *(undefined8 *)(puVar2 + -0x10);
    uVar13 = *(undefined8 *)(puVar2 + -8);
    uVar14 = *(undefined8 *)(puVar2 + -0x20);
    uVar12 = *(undefined8 *)(puVar2 + -0x18);
    goto code_r0x000100cdf624;
  case 0x2e:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    plVar7 = plVar7 + 4;
    uVar17 = *(undefined8 *)(puVar2 + -0x10);
    uVar13 = *(undefined8 *)(puVar2 + -8);
    uVar14 = *(undefined8 *)(puVar2 + -0x20);
    uVar12 = *(undefined8 *)(puVar2 + -0x18);
    goto code_r0x000100cdf624;
  case 0x2f:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] != 0) {
      _free(plVar7[5]);
    }
    if (plVar7[7] != 0) {
      _free(plVar7[8]);
    }
    if (plVar7[10] != 0) {
      _free(plVar7[0xb]);
    }
    plVar7 = plVar7 + 0xd;
    uVar17 = *(undefined8 *)(puVar2 + -0x10);
    uVar13 = *(undefined8 *)(puVar2 + -8);
    uVar14 = *(undefined8 *)(puVar2 + -0x20);
    uVar12 = *(undefined8 *)(puVar2 + -0x18);
code_r0x000100cdf624:
    *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
    *(long *)(puVar2 + -0x40) = unaff_x24;
    *(long *)(puVar2 + -0x38) = unaff_x23;
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = uVar14;
    *(undefined8 *)(puVar2 + -0x18) = uVar12;
    *(undefined8 *)(puVar2 + -0x10) = uVar17;
    *(undefined8 *)(puVar2 + -8) = uVar13;
    lVar9 = plVar7[1];
    if (lVar9 == 0) {
      return;
    }
    lVar15 = plVar7[3];
    if (lVar15 == 0) goto LAB_100cdf718;
    plVar16 = (long *)*plVar7;
    plVar19 = plVar16 + 1;
    lVar23 = *plVar16;
    uVar10 = CONCAT17(-(-1 < lVar23),
                      CONCAT16(-(-1 < (char)((ulong)lVar23 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)lVar23 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)lVar23 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)lVar23 >> 0x18)),
                                                          CONCAT12(-(-1 < (char)((ulong)lVar23 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  lVar23 >> 8)),-(-1 < (char)lVar23)))))))) &
             0x8080808080808080;
    goto joined_r0x000100cdf69c;
  case 0x30:
    if (plVar7[1] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[2];
    break;
  case 0x31:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[5];
    break;
  case 0x32:
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[4] == -0x8000000000000000 || plVar7[4] == 0) {
      puVar6 = (ulong *)plVar7[2];
      lVar9 = plVar7[3];
    }
    else {
      _free(plVar7[5]);
      puVar6 = (ulong *)plVar7[2];
      lVar9 = plVar7[3];
    }
    if (lVar9 != 0) {
      puVar5 = puVar6 + 1;
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (plVar7[1] == 0) {
      return;
    }
    break;
  case 0x33:
    if ((plVar7[5] & 0x7fffffffffffffffU) == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[6];
    break;
  case 0x35:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    uVar11 = plVar7[4];
    uVar10 = uVar11 ^ 0x8000000000000000;
    if (-1 < (long)uVar11) {
      uVar10 = 2;
    }
    if (uVar10 != 0) {
      if ((uVar10 == 1) || (uVar10 != 2)) {
        if (plVar7[5] != 0) {
          lVar9 = 0x10;
          goto code_r0x000100e0cd78;
        }
      }
      else {
        if (uVar11 != 0) {
          _free(plVar7[5]);
        }
        if ((plVar7[7] & 0x7fffffffffffffffU) != 0) {
          lVar9 = 0x20;
code_r0x000100e0cd78:
          _free(*(undefined8 *)((long)(plVar7 + 4) + lVar9));
        }
      }
    }
    if (plVar7[1] == -0x8000000000000000 || plVar7[1] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[2];
    break;
  case 0x36:
    *(long *)(puVar2 + -0x40) = unaff_x24;
    *(long *)(puVar2 + -0x38) = unaff_x23;
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    lVar9 = plVar7[1];
    if (lVar9 == -0x8000000000000000) {
      return;
    }
    lVar15 = plVar7[2];
    lVar23 = plVar7[3];
    if (lVar23 != 0) {
      puVar18 = (undefined8 *)(lVar15 + 0x20);
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
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
    if (lVar9 != 0) {
      _free(lVar15);
    }
    if (plVar7[4] != 0) {
      _free(plVar7[5]);
    }
    if (plVar7[7] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[8];
    break;
  case 0x37:
    *(long *)(puVar2 + -0x40) = unaff_x24;
    *(long *)(puVar2 + -0x38) = unaff_x23;
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    lVar9 = 2;
    if (1 < (ulong)plVar7[1]) {
      lVar9 = plVar7[1] - 2;
    }
    switch(lVar9) {
    case 0:
      if (plVar7[8] != -0x8000000000000000 && plVar7[8] != 0) {
        _free(plVar7[9]);
      }
      if (plVar7[2] != 0) {
        _free(plVar7[3]);
      }
      puVar6 = (ulong *)plVar7[6];
      lVar9 = plVar7[7];
      puVar5 = puVar6;
      goto joined_r0x000100e02a9c;
    case 1:
      if (plVar7[2] != 0) {
        _free(plVar7[3]);
      }
      lVar9 = plVar7[6];
      lVar15 = plVar7[7];
      if (lVar15 != 0) {
        puVar18 = (undefined8 *)(lVar9 + 8);
        do {
          if (puVar18[-1] != 0) {
            _free(*puVar18);
          }
          puVar18 = puVar18 + 3;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      if (plVar7[5] != 0) {
        _free(lVar9);
      }
      lVar9 = plVar7[8];
      if (lVar9 != -0x8000000000000000) {
        lVar15 = plVar7[9];
        lVar23 = plVar7[10];
        if (lVar23 != 0) {
          puVar18 = (undefined8 *)(lVar15 + 0x10);
          do {
            if (puVar18[-1] != 0) {
              _free(*puVar18);
            }
            puVar18 = puVar18 + 4;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
        }
        if (lVar9 != 0) {
          _free(lVar15);
        }
      }
      if (plVar7[0xb] == -0x8000000000000000 || plVar7[0xb] == 0) {
        return;
      }
      puVar6 = (ulong *)plVar7[0xc];
      goto code_r0x000108aa97c4;
    case 2:
      if (plVar7[0x12] != -0x8000000000000000 && plVar7[0x12] != 0) {
        _free(plVar7[0x13]);
      }
      if (plVar7[0x15] != -0x8000000000000000 && plVar7[0x15] != 0) {
        _free(plVar7[0x16]);
      }
      *(undefined8 *)(puVar2 + -0x30) = *(undefined8 *)(puVar2 + -0x30);
      *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
      *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
      *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
      *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
      *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
      lVar9 = plVar7[4];
      lVar15 = plVar7[5];
      if (lVar15 != 0) {
        puVar18 = (undefined8 *)(lVar9 + 8);
        do {
          if (puVar18[-1] != 0) {
            _free(*puVar18);
          }
          puVar18 = puVar18 + 3;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      if (plVar7[3] != 0) {
        _free(lVar9);
      }
      if (plVar7[6] == -0x8000000000000000 || plVar7[6] == 0) {
        lVar9 = plVar7[0xc];
      }
      else {
        _free(plVar7[7]);
        lVar9 = plVar7[0xc];
      }
      if (lVar9 != 0) {
        FUN_100cb56bc();
      }
      if ((plVar7[9] == -0x8000000000000000) || (plVar7[9] == 0)) {
        return;
      }
      puVar6 = (ulong *)plVar7[10];
      goto code_r0x000108aa97c4;
    case 3:
      if (plVar7[0xb] != -0x8000000000000000 && plVar7[0xb] != 0) {
        _free(plVar7[0xc]);
      }
      if (plVar7[2] != 0) {
        _free(plVar7[3]);
      }
      if ((plVar7[0xe] != -0x8000000000000000) && (plVar7[0xe] != 0)) {
        lVar9 = plVar7[0xf];
code_r0x000100e02f44:
        _free(lVar9);
      }
      break;
    case 4:
      if (plVar7[5] == -0x8000000000000000 || plVar7[5] == 0) {
        if (plVar7[8] == -0x8000000000000000 || plVar7[8] == 0) goto code_r0x000100e02b50;
code_r0x000100e02ecc:
        _free(plVar7[9]);
        lVar9 = plVar7[0xb];
      }
      else {
        _free(plVar7[6]);
        if (plVar7[8] != -0x8000000000000000 && plVar7[8] != 0) goto code_r0x000100e02ecc;
code_r0x000100e02b50:
        lVar9 = plVar7[0xb];
      }
      if ((lVar9 != -0x8000000000000000) && (lVar9 != 0)) {
        _free(plVar7[0xc]);
      }
      if (plVar7[2] != 0) {
        _free(plVar7[3]);
      }
      puVar5 = (ulong *)(plVar7 + 0xe);
      uVar17 = *(undefined8 *)(puVar2 + -0x10);
      uVar13 = *(undefined8 *)(puVar2 + -8);
      uVar14 = *(undefined8 *)(puVar2 + -0x20);
      uVar12 = *(undefined8 *)(puVar2 + -0x18);
      unaff_x22 = *(long **)(puVar2 + -0x30);
      unaff_x21 = *(undefined8 *)(puVar2 + -0x28);
      unaff_x24 = *(long *)(puVar2 + -0x40);
      unaff_x23 = *(long *)(puVar2 + -0x38);
      goto code_r0x000100de6690;
    case 5:
      if (plVar7[7] != 0) {
        _free(plVar7[8]);
      }
      if (plVar7[2] == 0) goto code_r0x000100e02f78;
      puVar6 = (ulong *)plVar7[4];
      lVar9 = plVar7[5];
      puVar5 = puVar6;
      goto joined_r0x000100e02b98;
    case 6:
      if (plVar7[0xb] == -0x8000000000000000 || plVar7[0xb] == 0) {
        if (plVar7[0xe] == -0x8000000000000000 || plVar7[0xe] == 0) goto code_r0x000100e02d54;
code_r0x000100e02f30:
        _free(plVar7[0xf]);
        lVar9 = plVar7[2];
      }
      else {
        _free(plVar7[0xc]);
        if (plVar7[0xe] != -0x8000000000000000 && plVar7[0xe] != 0) goto code_r0x000100e02f30;
code_r0x000100e02d54:
        lVar9 = plVar7[2];
      }
      if (lVar9 != 0) {
        lVar9 = plVar7[3];
        goto code_r0x000100e02f44;
      }
      break;
    case 7:
      if (plVar7[7] != 0) {
        _free(plVar7[8]);
      }
      if (plVar7[10] == -0x8000000000000000 || plVar7[10] == 0) {
        lVar9 = plVar7[2];
      }
      else {
        _free(plVar7[0xb]);
        lVar9 = plVar7[2];
      }
      if (lVar9 != 0) {
        puVar6 = (ulong *)plVar7[4];
        lVar9 = plVar7[5];
        puVar5 = puVar6;
        goto joined_r0x000100e02d90;
      }
code_r0x000100e02f78:
      if (plVar7[3] == 0) {
        return;
      }
      puVar6 = (ulong *)plVar7[4];
      goto code_r0x000108aa97c4;
    case 8:
      if (plVar7[0xb] != -0x8000000000000000 && plVar7[0xb] != 0) {
        _free(plVar7[0xc]);
      }
      if (plVar7[2] != 0) {
        _free(plVar7[3]);
      }
      if (plVar7[5] != 0) {
        _free(plVar7[6]);
      }
      puVar6 = (ulong *)plVar7[9];
      lVar9 = plVar7[10] + 1;
      puVar5 = puVar6;
      while (lVar9 = lVar9 + -1, lVar9 != 0) {
        FUN_100de6690(puVar5);
        puVar5 = puVar5 + 9;
      }
      lVar9 = plVar7[8];
      goto joined_r0x000100e02e88;
    case 9:
      if (plVar7[9] == -0x8000000000000000 || plVar7[9] == 0) {
        if (plVar7[0xc] == -0x8000000000000000 || plVar7[0xc] == 0) goto code_r0x000100e02e14;
code_r0x000100e02fb4:
        _free(plVar7[0xd]);
        lVar9 = plVar7[2];
      }
      else {
        _free(plVar7[10]);
        if (plVar7[0xc] != -0x8000000000000000 && plVar7[0xc] != 0) goto code_r0x000100e02fb4;
code_r0x000100e02e14:
        lVar9 = plVar7[2];
      }
      if (lVar9 == 4) {
        return;
      }
      plVar16 = plVar7 + 2;
      uVar17 = *(undefined8 *)(puVar2 + -0x10);
      uVar13 = *(undefined8 *)(puVar2 + -8);
      uVar14 = *(undefined8 *)(puVar2 + -0x20);
      uVar12 = *(undefined8 *)(puVar2 + -0x18);
      unaff_x22 = *(long **)(puVar2 + -0x30);
      unaff_x21 = *(undefined8 *)(puVar2 + -0x28);
      goto FUN_100e0c988;
    case 10:
      if (plVar7[2] != 0) {
        _free(plVar7[3]);
      }
      if (plVar7[5] != 0) {
        _free(plVar7[6]);
      }
      if (plVar7[0xb] != -0x8000000000000000 && plVar7[0xb] != 0) {
        lVar9 = plVar7[0xc];
        goto code_r0x000100e02f54;
      }
      goto code_r0x000100e02f58;
    case 0xb:
      if (plVar7[2] == 0) {
        return;
      }
      goto code_r0x000100e02bf8;
    default:
      return;
    case 0xd:
      if (plVar7[2] == -0x8000000000000000 || plVar7[2] == 0) {
        return;
      }
code_r0x000100e02bf8:
      puVar6 = (ulong *)plVar7[3];
      goto code_r0x000108aa97c4;
    }
    if (plVar7[5] != 0) {
      lVar9 = plVar7[6];
code_r0x000100e02f54:
      _free(lVar9);
    }
code_r0x000100e02f58:
    if (plVar7[8] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[9];
    break;
  case 0x38:
  case 0x39:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    puVar6 = (ulong *)(plVar7 + 4);
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
    *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
    *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
    uVar10 = *puVar6 ^ 0x8000000000000000;
    if (-1 < (long)*puVar6) {
      uVar10 = 9;
    }
    switch(uVar10) {
    case 0:
      if (plVar7[5] != 0) {
        _free(plVar7[6]);
      }
      puVar6 = (ulong *)plVar7[9];
      puVar5 = puVar6;
      for (lVar9 = plVar7[10]; lVar9 != 0; lVar9 = lVar9 + -1) {
        FUN_100e06c08(puVar5);
        puVar5 = puVar5 + 7;
      }
code_r0x000100df5d10:
      if (plVar7[8] == 0) {
        return;
      }
      break;
    case 1:
      if (plVar7[5] != 0) {
        _free(plVar7[6]);
      }
      puVar6 = (ulong *)plVar7[9];
      lVar9 = plVar7[10];
      if (lVar9 != 0) {
        puVar5 = puVar6 + 4;
        do {
          if (puVar5[-4] != 0) {
            _free(puVar5[-3]);
          }
          if (puVar5[-1] != 0) {
            _free(*puVar5);
          }
          puVar5 = puVar5 + 6;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      goto code_r0x000100df5d10;
    case 2:
      if (plVar7[5] != 0) {
        _free(plVar7[6]);
      }
      lVar9 = plVar7[9];
      lVar15 = plVar7[10];
      if (lVar15 != 0) {
        puVar18 = (undefined8 *)(lVar9 + 8);
        do {
          if (puVar18[-1] != 0) {
            _free(*puVar18);
          }
          puVar18 = puVar18 + 3;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      if (plVar7[8] != 0) {
        _free(lVar9);
      }
      plVar7 = plVar7 + 0xb;
      if (*plVar7 == -0x8000000000000000) {
        return;
      }
      uVar17 = *(undefined8 *)(puVar2 + -0x10);
      uVar13 = *(undefined8 *)(puVar2 + -8);
      uVar14 = *(undefined8 *)(puVar2 + -0x20);
      uVar12 = *(undefined8 *)(puVar2 + -0x18);
      unaff_x22 = *(long **)(puVar2 + -0x30);
      unaff_x21 = *(undefined8 *)(puVar2 + -0x28);
FUN_100e24ac8:
      *(long **)(puVar2 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x20) = uVar14;
      *(undefined8 *)(puVar2 + -0x18) = uVar12;
      *(undefined8 *)(puVar2 + -0x10) = uVar17;
      *(undefined8 *)(puVar2 + -8) = uVar13;
      lVar9 = plVar7[1];
      lVar15 = plVar7[2];
      if (lVar15 != 0) {
        puVar18 = (undefined8 *)(lVar9 + 0x20);
        do {
          if (puVar18[-4] != 0) {
            _free(puVar18[-3]);
          }
          if (puVar18[-1] != 0) {
            _free(*puVar18);
          }
          puVar18 = puVar18 + 7;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      if (*plVar7 != 0) {
        _free(lVar9);
      }
      puVar6 = (ulong *)plVar7[4];
      lVar9 = plVar7[5];
      if (lVar9 != 0) {
        puVar5 = puVar6 + 1;
        do {
          if (puVar5[-1] != 0) {
            _free(*puVar5);
          }
          puVar5 = puVar5 + 3;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if (plVar7[3] == 0) {
        return;
      }
      break;
    case 3:
    case 6:
      if (plVar7[5] != 0) {
        _free(plVar7[6]);
      }
      if (plVar7[8] == 0) {
        return;
      }
      puVar6 = (ulong *)plVar7[9];
      break;
    case 4:
      *(undefined8 *)(puVar2 + -0x30) = *(undefined8 *)(puVar2 + -0x30);
      *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
      *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
      *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
      *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
      *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
      if (plVar7[5] != 0) {
        _free(plVar7[6]);
      }
      lVar9 = plVar7[9];
      lVar15 = plVar7[10];
      if (lVar15 != 0) {
        puVar18 = (undefined8 *)(lVar9 + 8);
        do {
          if (puVar18[-1] != 0) {
            _free(*puVar18);
          }
          puVar18 = puVar18 + 3;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      if (plVar7[8] != 0) {
        _free(lVar9);
      }
      puVar6 = (ulong *)plVar7[0xc];
      lVar9 = plVar7[0xd];
      if (lVar9 != 0) {
        puVar5 = puVar6 + 1;
        do {
          if (puVar5[-1] != 0) {
            _free(*puVar5);
          }
          puVar5 = puVar5 + 3;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if (plVar7[0xb] == 0) {
        return;
      }
      break;
    case 5:
      if (plVar7[0xc] != 0) {
        _free(plVar7[0xd]);
      }
      if (plVar7[0xf] != 0) {
        _free(plVar7[0x10]);
      }
      plVar16 = plVar7 + 5;
      uVar17 = *(undefined8 *)(puVar2 + -0x10);
      uVar13 = *(undefined8 *)(puVar2 + -8);
      uVar14 = *(undefined8 *)(puVar2 + -0x20);
      uVar12 = *(undefined8 *)(puVar2 + -0x18);
      unaff_x22 = *(long **)(puVar2 + -0x30);
      unaff_x21 = *(undefined8 *)(puVar2 + -0x28);
      goto FUN_100e0c988;
    case 7:
      plVar7 = plVar7 + 5;
      unaff_x29 = *(undefined1 **)(puVar2 + -0x10);
      unaff_x30 = *(undefined8 *)(puVar2 + -8);
      unaff_x20 = *(long **)(puVar2 + -0x20);
      unaff_x19 = *(long **)(puVar2 + -0x18);
      goto DAT_100e17134;
    case 8:
      if (plVar7[5] != 0) {
        _free(plVar7[6]);
      }
      FUN_100cdf624(plVar7 + 0xe);
      if (plVar7[8] == -0x8000000000000000 || plVar7[8] == 0) {
        lVar9 = plVar7[0xb];
      }
      else {
        _free(plVar7[9]);
        lVar9 = plVar7[0xb];
      }
      if (lVar9 == -0x8000000000000000) {
        return;
      }
      if (lVar9 == 0) {
        return;
      }
      puVar6 = (ulong *)plVar7[0xc];
      break;
    case 9:
      uVar17 = *(undefined8 *)(puVar2 + -0x30);
      uVar14 = *(undefined8 *)(puVar2 + -0x28);
      *(undefined8 *)(puVar2 + -0x30) = uVar17;
      *(undefined8 *)(puVar2 + -0x28) = uVar14;
      *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
      *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
      *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
      *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
      puVar21 = puVar2 + -0x10;
      if (*puVar6 != 0) {
        _free(plVar7[5]);
      }
      if (plVar7[7] != 0) {
        _free(plVar7[8]);
      }
      if (plVar7[10] != 0) {
        _free(plVar7[0xb]);
      }
      FUN_100de6690(plVar7 + 0x2c);
      uVar13 = 0x8000000000000000;
      if ((plVar7[0xd] != -0x8000000000000000) && (plVar7[0xd] != 0)) {
        _free(plVar7[0xe]);
      }
      if ((plVar7[0x10] != -0x8000000000000000) && (plVar7[0x10] != 0)) {
        _free(plVar7[0x11]);
      }
      plVar16 = plVar7 + 0x13;
      if (*plVar16 != -0x8000000000000000) {
        puVar22 = &UNK_100e09988;
        puVar2 = puVar2 + -0x30;
        goto SUB_100e00868;
      }
      if ((plVar7[0x29] & 0x7fffffffffffffffU) == 0) {
        return;
      }
      puVar6 = (ulong *)plVar7[0x2a];
      break;
    default:
      if (plVar7[5] == 0) {
        return;
      }
      puVar6 = (ulong *)plVar7[6];
    }
    break;
  case 0x3a:
  case 0x3b:
    if (plVar7[0x14] != -0x8000000000000000 && plVar7[0x14] != 0) {
      *(long **)(puVar2 + -0x20) = unaff_x20;
      *(long **)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
      *(undefined8 *)(puVar2 + -8) = unaff_x30;
      _free(plVar7[0x15]);
      unaff_x29 = *(undefined1 **)(puVar2 + -0x10);
      unaff_x30 = *(undefined8 *)(puVar2 + -8);
      unaff_x20 = *(long **)(puVar2 + -0x20);
      unaff_x19 = *(long **)(puVar2 + -0x18);
    }
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[5] != 0) {
      _free(plVar7[6]);
    }
    if (plVar7[8] != 0) {
      _free(plVar7[9]);
    }
    if (plVar7[0xe] == -0x8000000000000000 || plVar7[0xe] == 0) {
      puVar6 = (ulong *)plVar7[0xc];
      lVar9 = plVar7[0xd];
    }
    else {
      _free(plVar7[0xf]);
      puVar6 = (ulong *)plVar7[0xc];
      lVar9 = plVar7[0xd];
    }
    if (lVar9 != 0) {
      puVar5 = puVar6 + 1;
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (plVar7[0xb] == 0) {
      return;
    }
    break;
  case 0x3c:
  case 0x3d:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] != 0) {
      _free(plVar7[5]);
    }
    if (plVar7[7] != 0) {
      _free(plVar7[8]);
    }
    if (plVar7[10] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[0xb];
    break;
  case 0x3e:
  case 0x3f:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] != 0) {
      _free(plVar7[5]);
    }
    if (plVar7[7] != 0) {
      _free(plVar7[8]);
    }
    if (plVar7[10] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[0xb];
    break;
  case 0x40:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] != 0) {
      _free(plVar7[5]);
    }
    if (plVar7[7] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[8];
    break;
  case 0x41:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[5] != 0) {
      _free(plVar7[6]);
    }
    if (plVar7[0xe] == -0x8000000000000000 || plVar7[0xe] == 0) {
      if (plVar7[0x11] == -0x8000000000000000 || plVar7[0x11] == 0) goto LAB_100e2de44;
LAB_100e2dec0:
      _free(plVar7[0x12]);
      lVar9 = plVar7[8];
    }
    else {
      _free(plVar7[0xf]);
      if (plVar7[0x11] != -0x8000000000000000 && plVar7[0x11] != 0) goto LAB_100e2dec0;
LAB_100e2de44:
      lVar9 = plVar7[8];
    }
    if (lVar9 != 0) {
      _free(plVar7[9]);
    }
    if (plVar7[0xb] != 0) {
      _free(plVar7[0xc]);
    }
    if (plVar7[1] == 3) {
      uVar10 = plVar7[2] & 0x7fffffffffffffff;
    }
    else {
      if (plVar7[1] != 4) {
        return;
      }
      uVar10 = plVar7[2];
    }
    if (uVar10 == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[3];
    break;
  case 0x42:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[5];
    break;
  case 0x43:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[5] != 0) {
      _free(plVar7[6]);
    }
    if (plVar7[0xb] == -0x8000000000000000 || plVar7[0xb] == 0) {
      if (plVar7[0xe] == -0x8000000000000000 || plVar7[0xe] == 0) goto LAB_100e41664;
LAB_100e416d0:
      _free(plVar7[0xf]);
      lVar9 = plVar7[8];
    }
    else {
      _free(plVar7[0xc]);
      if (plVar7[0xe] != -0x8000000000000000 && plVar7[0xe] != 0) goto LAB_100e416d0;
LAB_100e41664:
      lVar9 = plVar7[8];
    }
    if (lVar9 != 0) {
      _free(plVar7[9]);
    }
    if (plVar7[1] == 3) {
      uVar10 = plVar7[2] & 0x7fffffffffffffff;
    }
    else {
      if (plVar7[1] != 4) {
        return;
      }
      uVar10 = plVar7[2];
    }
    if (uVar10 == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[3];
    break;
  case 0x44:
    *(long *)(puVar2 + -0x40) = unaff_x24;
    *(long *)(puVar2 + -0x38) = unaff_x23;
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    lVar9 = plVar7[5];
    lVar15 = plVar7[6];
    if (lVar15 == 0) goto code_r0x000100e2afac;
    puVar18 = (undefined8 *)(lVar9 + 0x20);
    goto code_r0x000100e2af64;
  case 0x45:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    FUN_100e6ca64(plVar7 + 4);
    *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
    *(long *)(puVar2 + -0x40) = unaff_x24;
    *(long *)(puVar2 + -0x38) = unaff_x23;
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
    *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
    *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
    lVar9 = plVar7[8];
    if (lVar9 == 0) {
      return;
    }
    lVar15 = plVar7[10];
    if (lVar15 == 0) goto LAB_100d1c730;
    plVar16 = (long *)plVar7[7];
    plVar19 = plVar16 + 1;
    lVar23 = *plVar16;
    uVar10 = CONCAT17(-(-1 < lVar23),
                      CONCAT16(-(-1 < (char)((ulong)lVar23 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)lVar23 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)lVar23 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)lVar23 >> 0x18)),
                                                          CONCAT12(-(-1 < (char)((ulong)lVar23 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  lVar23 >> 8)),-(-1 < (char)lVar23)))))))) &
             0x8080808080808080;
    goto joined_r0x000100d1c6d4;
  case 0x46:
    if (plVar7[1] == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[2];
    break;
  default:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[5] != 0) {
      _free(plVar7[6]);
    }
    if (plVar7[8] == -0x8000000000000000 || plVar7[8] == 0) {
      if (plVar7[0xb] == -0x8000000000000000 || plVar7[0xb] == 0) goto LAB_100e1f094;
LAB_100e1f0d8:
      _free(plVar7[0xc]);
      lVar9 = plVar7[1];
      if (lVar9 == 3) goto LAB_100e1f0ec;
LAB_100e1f0a0:
      if (lVar9 != 4) {
        return;
      }
      uVar10 = plVar7[2];
    }
    else {
      _free(plVar7[9]);
      if (plVar7[0xb] != -0x8000000000000000 && plVar7[0xb] != 0) goto LAB_100e1f0d8;
LAB_100e1f094:
      lVar9 = plVar7[1];
      if (lVar9 != 3) goto LAB_100e1f0a0;
LAB_100e1f0ec:
      uVar10 = plVar7[2] & 0x7fffffffffffffff;
    }
    if (uVar10 == 0) {
      return;
    }
    puVar6 = (ulong *)plVar7[3];
    break;
  case 0x48:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (plVar7[1] != 0) {
      _free(plVar7[2]);
    }
    if (plVar7[4] == -0x8000000000000000 || plVar7[4] == 0) {
      if (plVar7[7] == -0x8000000000000000 || plVar7[7] == 0) {
        return;
      }
    }
    else {
      _free(plVar7[5]);
      if (plVar7[7] == -0x8000000000000000 || plVar7[7] == 0) {
        return;
      }
    }
    puVar6 = (ulong *)plVar7[8];
  }
  goto code_r0x000108aa97c4;
joined_r0x000100d1c6d4:
  do {
    while (uVar10 == 0) {
      lVar23 = *plVar19;
      plVar16 = plVar16 + -0x30;
      plVar19 = plVar19 + 1;
      uVar10 = CONCAT17(-(-1 < lVar23),
                        CONCAT16(-(-1 < (char)((ulong)lVar23 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar23 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar23 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar23 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar23 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar23 >> 8)),-(-1 < (char)lVar23)))))))) &
               0x8080808080808080;
    }
    uVar11 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    iVar1 = (int)((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
    if (plVar16[(long)-iVar1 * 6 + -4] == 3) {
      uVar11 = plVar16[(long)-iVar1 * 6 + -3] & 0x7fffffffffffffff;
joined_r0x000100d1c728:
      if (uVar11 != 0) {
        _free(plVar16[(long)-iVar1 * 6 + -2]);
      }
    }
    else if (plVar16[(long)-iVar1 * 6 + -4] == 4) {
      uVar11 = plVar16[(long)-iVar1 * 6 + -3];
      goto joined_r0x000100d1c728;
    }
    uVar10 = uVar10 - 1 & uVar10;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
LAB_100d1c730:
  if (lVar9 * 0x31 == -0x39) {
    return;
  }
  puVar6 = (ulong *)(plVar7[7] + lVar9 * -0x30 + -0x30);
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
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
code_r0x000100e2afac:
  if (plVar7[4] != 0) {
    _free(lVar9);
  }
  if (plVar7[7] == 0) {
    return;
  }
  puVar6 = (ulong *)plVar7[8];
  goto code_r0x000108aa97c4;
joined_r0x000100e02d90:
  if (lVar9 == 0) goto code_r0x000100e02de4;
  uVar11 = *puVar5;
  uVar10 = uVar11 ^ 0x8000000000000000;
  if (-1 < (long)uVar11) {
    uVar10 = 1;
  }
  if ((uVar10 == 0) || (uVar10 != 1)) {
    if (puVar5[1] != 0) {
      lVar15 = 0x10;
      goto code_r0x000100e02da4;
    }
  }
  else if (uVar11 != 0) {
    lVar15 = 8;
code_r0x000100e02da4:
    _free(*(undefined8 *)((long)puVar5 + lVar15));
  }
  puVar5 = puVar5 + 4;
  lVar9 = lVar9 + -1;
  goto joined_r0x000100e02d90;
joined_r0x000100e02b98:
  if (lVar9 == 0) goto code_r0x000100e02de4;
  uVar11 = *puVar5;
  uVar10 = uVar11 ^ 0x8000000000000000;
  if (-1 < (long)uVar11) {
    uVar10 = 1;
  }
  if ((uVar10 == 0) || (uVar10 != 1)) {
    if (puVar5[1] != 0) {
      lVar15 = 0x10;
      goto code_r0x000100e02ba4;
    }
  }
  else if (uVar11 != 0) {
    lVar15 = 8;
code_r0x000100e02ba4:
    _free(*(undefined8 *)((long)puVar5 + lVar15));
  }
  puVar5 = puVar5 + 4;
  lVar9 = lVar9 + -1;
  goto joined_r0x000100e02b98;
code_r0x000100e02de4:
  lVar9 = plVar7[3];
  goto joined_r0x000100e02e88;
joined_r0x000100e02a9c:
  if (lVar9 == 0) goto code_r0x000100e02c48;
  uVar11 = *puVar5;
  uVar10 = uVar11 ^ 0x8000000000000000;
  if (-1 < (long)uVar11) {
    uVar10 = 1;
  }
  if ((uVar10 == 0) || (uVar10 != 1)) {
    if (puVar5[1] != 0) {
      lVar15 = 0x10;
      goto code_r0x000100e02ab0;
    }
  }
  else if (uVar11 != 0) {
    lVar15 = 8;
code_r0x000100e02ab0:
    _free(*(undefined8 *)((long)puVar5 + lVar15));
  }
  puVar5 = puVar5 + 4;
  lVar9 = lVar9 + -1;
  goto joined_r0x000100e02a9c;
code_r0x000100e02c48:
  lVar9 = plVar7[5];
joined_r0x000100e02e88:
  if (lVar9 == 0) {
    return;
  }
  goto code_r0x000108aa97c4;
joined_r0x000100e797a0:
  if (lVar9 == 0) goto LAB_100e79848;
  uVar10 = *puVar5;
  lVar15 = uVar10 + 0x7ffffffffffffffb;
  if (uVar10 < 0x8000000000000005) {
    lVar15 = 2;
  }
  if ((lVar15 == 0) || (lVar15 == 1)) {
    uVar10 = puVar5[1];
joined_r0x000100e797c0:
    if (uVar10 != 0) {
      lVar15 = 0x10;
LAB_100e797c8:
      _free(*(undefined8 *)((long)puVar5 + lVar15));
    }
  }
  else {
    uVar11 = uVar10 ^ 0x8000000000000000;
    if (-1 < (long)uVar10) {
      uVar11 = 5;
    }
    if (uVar11 < 5) {
      if (uVar11 == 2) {
        uVar10 = puVar5[1] & 0x7fffffffffffffff;
        goto joined_r0x000100e797c0;
      }
    }
    else {
      if (uVar10 != 0) {
        _free(puVar5[1]);
      }
      if ((puVar5[3] & 0x7fffffffffffffff) != 0) {
        lVar15 = 0x20;
        goto LAB_100e797c8;
      }
    }
  }
  puVar5 = puVar5 + 7;
  lVar9 = lVar9 + -1;
  goto joined_r0x000100e797a0;
LAB_100e79848:
  if (plVar7[0x13] == 0) {
    return;
  }
  goto code_r0x000108aa97c4;
code_r0x000100dfc85c:
  if (plVar7[1] == 0) {
code_r0x000100dfc770:
    return;
  }
  puVar6 = (ulong *)plVar7[2];
  goto code_r0x000108aa97c4;
joined_r0x000100cdf69c:
  do {
    while (uVar10 == 0) {
      lVar23 = *plVar19;
      plVar16 = plVar16 + -0x48;
      plVar19 = plVar19 + 1;
      uVar10 = CONCAT17(-(-1 < lVar23),
                        CONCAT16(-(-1 < (char)((ulong)lVar23 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar23 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar23 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar23 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar23 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar23 >> 8)),-(-1 < (char)lVar23)))))))) &
               0x8080808080808080;
    }
    uVar11 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    iVar1 = (int)((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
    if (plVar16[(long)-iVar1 * 9 + -9] != 0) {
      _free(plVar16[(long)-iVar1 * 9 + -8]);
    }
    uVar8 = plVar16[(long)-iVar1 * 9 + -6];
    uVar11 = uVar8 ^ 0x8000000000000000;
    if (-1 < (long)uVar8) {
      uVar11 = 2;
    }
    if ((uVar11 == 0) || (uVar11 == 1)) {
      if (plVar16[(long)-iVar1 * 9 + -5] != 0) {
        lVar23 = 0x10;
        goto LAB_100cdf684;
      }
    }
    else {
      if (uVar8 != 0) {
        _free(plVar16[(long)-iVar1 * 9 + -5]);
      }
      if ((plVar16[(long)-iVar1 * 9 + -3] & 0x7fffffffffffffffU) != 0) {
        lVar23 = 0x20;
LAB_100cdf684:
        _free(*(undefined8 *)((long)(plVar16 + (long)-iVar1 * 9 + -6) + lVar23));
      }
    }
    uVar10 = uVar10 - 1 & uVar10;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
LAB_100cdf718:
  if (lVar9 * 0x49 == -0x51) {
    return;
  }
  puVar6 = (ulong *)(*plVar7 + lVar9 * -0x48 + -0x48);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar6);
  return;
}

