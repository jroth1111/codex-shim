
/* WARNING: Possible PIC construction at 0x000100e26f70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e09984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26f74) */
/* WARNING: Type propagation algorithm not settling */

void FUN_100d6ece4(int *param_1)

{
  int iVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x19;
  undefined8 uVar11;
  int *unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 unaff_x21;
  long *plVar15;
  long *plVar16;
  int *unaff_x22;
  undefined8 *puVar17;
  long *plVar18;
  long unaff_x23;
  long unaff_x24;
  long lVar19;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar20;
  undefined8 unaff_x30;
  undefined *puVar21;
  long lVar22;
  
  if (*param_1 == 0x4a) {
    return;
  }
  if (*param_1 == 0x4b) {
    if (*(long *)(param_1 + 4) == 0) {
      return;
    }
    puVar3 = *(ulong **)(param_1 + 6);
  }
  else {
SUB_100dfc74c:
    switch(*param_1) {
    case 0:
      goto code_r0x000100dfc85c;
    case 1:
      if (*(long *)(param_1 + 2) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 4);
      break;
    case 2:
      if (*(long *)(param_1 + 2) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 4);
      break;
    case 3:
      if ((*(ulong *)(param_1 + 2) & 0x7fffffffffffffff) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 4);
      break;
    case 4:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      uVar10 = *(ulong *)(param_1 + 2);
      uVar9 = uVar10 ^ 0x8000000000000000;
      if (-1 < (long)uVar10) {
        uVar9 = 0xc;
      }
      switch(uVar9) {
      case 0:
      case 6:
        if (*(long *)(param_1 + 4) != 0) {
          _free(*(undefined8 *)(param_1 + 6));
        }
        if (*(long *)(param_1 + 10) == -0x8000000000000000 || *(long *)(param_1 + 10) == 0) {
          return;
        }
        break;
      case 1:
      case 7:
      case 8:
      case 9:
        uVar9 = *(ulong *)(param_1 + 4) & 0x7fffffffffffffff;
        goto joined_r0x000100e0cc14;
      default:
        uVar9 = *(ulong *)(param_1 + 4);
joined_r0x000100e0cc14:
        if (uVar9 == 0) {
          return;
        }
        puVar3 = *(ulong **)(param_1 + 6);
        goto code_r0x000108aa97c4;
      case 10:
        puVar6 = (ulong *)(param_1 + 4);
        uVar5 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar12 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar11 = *(undefined8 *)((long)register0x00000008 + -0x18);
        goto code_r0x000100de6690;
      case 0xc:
        *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        if (*(ulong *)(param_1 + 2) != 0) {
          _free(*(undefined8 *)(param_1 + 4));
        }
        if (*(long *)(param_1 + 8) != 0) {
          _free(*(undefined8 *)(param_1 + 10));
        }
        if (*(long *)(param_1 + 0xe) != 0) {
          _free(*(undefined8 *)(param_1 + 0x10));
        }
        puVar3 = *(ulong **)(param_1 + 0x16);
        lVar8 = *(long *)(param_1 + 0x18);
        if (lVar8 != 0) {
          puVar6 = puVar3 + 4;
          do {
            if (puVar6[-4] != 0) {
              _free(puVar6[-3]);
            }
            if (puVar6[-1] != 0) {
              _free(*puVar6);
            }
            puVar6 = puVar6 + 6;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        if (*(long *)(param_1 + 0x14) == 0) {
          return;
        }
        goto code_r0x000108aa97c4;
      case 0xd:
        if (*(long *)(param_1 + 4) != 0) {
          _free(*(undefined8 *)(param_1 + 6));
        }
        if (*(long *)(param_1 + 10) == 0) {
          return;
        }
      }
      puVar3 = *(ulong **)(param_1 + 0xc);
      break;
    case 5:
      if ((*(ulong *)(param_1 + 2) & 0x7fffffffffffffff) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 4);
      break;
    case 6:
      if (*(long *)(param_1 + 2) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 4);
      break;
    case 7:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 10);
      break;
    case 8:
    case 9:
    case 10:
    case 0x34:
      goto code_r0x000100dfc770;
    case 0xb:
      if (*(long *)(param_1 + 10) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 0xc);
      break;
    case 0xc:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) != 0) {
        _free(*(undefined8 *)(param_1 + 10));
      }
      if (*(long *)(param_1 + 0x24) != -0x8000000000000000 && *(long *)(param_1 + 0x24) != 0) {
        _free(*(undefined8 *)(param_1 + 0x26));
      }
      uVar9 = *(ulong *)(param_1 + 0x36);
      bVar2 = uVar9 != 0x8000000000000000;
      if (uVar9 < 0x8000000000000001) {
        uVar9 = 0;
      }
      if (bVar2 && (uVar9 & 0x7fffffffffffffff) == 0) {
        FUN_100e79780();
      }
      if (*(long *)(param_1 + 0x2a) != -0x8000000000000000) {
        if (*(long *)(param_1 + 0x2a) != 0) {
          _free(*(undefined8 *)(param_1 + 0x2c));
        }
        if ((*(long *)(param_1 + 0x30) != -0x8000000000000000) && (*(long *)(param_1 + 0x30) != 0))
        {
          _free(*(undefined8 *)(param_1 + 0x32));
        }
      }
      if (*(long *)(param_1 + 0xe) != 0) {
        _free(*(undefined8 *)(param_1 + 0x10));
      }
      if (*(long *)(param_1 + 0x14) != 0) {
        _free(*(undefined8 *)(param_1 + 0x16));
      }
      if ((*(long *)(param_1 + 0x1a) == -0x8000000000000000) || (*(long *)(param_1 + 0x1a) == 0)) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 0x1c);
      break;
    case 0xd:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 0xe) != 0) {
        _free(*(undefined8 *)(param_1 + 0x10));
      }
      if (*(long *)(param_1 + 0x14) == -0x8000000000000000 || *(long *)(param_1 + 0x14) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 0x16);
      break;
    case 0xe:
      if (*(long *)(param_1 + 0x1a) == 3) {
        return;
      }
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 0x2e) == -0x8000000000000000 || *(long *)(param_1 + 0x2e) == 0) {
        if (*(long *)(param_1 + 0x34) != -0x8000000000000000 && *(long *)(param_1 + 0x34) != 0) {
code_r0x000100e13e7c:
          _free(*(undefined8 *)(param_1 + 0x36));
        }
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x30));
        if (*(long *)(param_1 + 0x34) != -0x8000000000000000 && *(long *)(param_1 + 0x34) != 0)
        goto code_r0x000100e13e7c;
      }
      if (*(long *)(param_1 + 0x3a) < -0x7ffffffffffffffe || *(long *)(param_1 + 0x3a) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 0x3c);
      break;
    case 0xf:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      plVar16 = (long *)(param_1 + 8);
      if (*plVar16 == -0x8000000000000000) {
        return;
      }
      uVar5 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar11 = *(undefined8 *)((long)register0x00000008 + -0x18);
      goto FUN_100e24ac8;
    case 0x10:
      *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      lVar8 = *(long *)(param_1 + 0x20);
      if (lVar8 != -0x8000000000000000) {
        lVar14 = *(long *)(param_1 + 0x22);
        lVar22 = *(long *)(param_1 + 0x24);
        if (lVar22 != 0) {
          puVar17 = (undefined8 *)(lVar14 + 8);
          do {
            if (puVar17[-1] != 0) {
              _free(*puVar17);
            }
            puVar17 = puVar17 + 3;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
        }
        if (lVar8 != 0) {
          _free(lVar14);
        }
      }
      if (*(long *)(param_1 + 8) != 0) {
        _free(*(undefined8 *)(param_1 + 10));
      }
      lVar8 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(param_1 + 0x12);
      if (lVar14 != 0) {
        puVar17 = (undefined8 *)(lVar8 + 8);
        do {
          if (puVar17[-1] != 0) {
            _free(*puVar17);
          }
          puVar17 = puVar17 + 3;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if (*(long *)(param_1 + 0xe) != 0) {
        _free(lVar8);
      }
      if (*(long *)(param_1 + 0x14) != 0) {
        _free(*(undefined8 *)(param_1 + 0x16));
      }
      puVar3 = *(ulong **)(param_1 + 0x1c);
      lVar8 = *(long *)(param_1 + 0x1e);
      if (lVar8 != 0) {
        puVar6 = puVar3 + 1;
        do {
          if ((puVar6[-1] & 0x7fffffffffffffff) != 0) {
            _free(*puVar6);
          }
          puVar6 = puVar6 + 5;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      if (*(long *)(param_1 + 0x1a) == 0) {
        return;
      }
      break;
    case 0x11:
      if (*(long *)(param_1 + 2) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 4);
      break;
    case 0x12:
      if (*(long *)(param_1 + 2) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 4);
      break;
    case 0x13:
      if (*(long *)(param_1 + 2) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 4);
      break;
    case 0x14:
      plVar16 = (long *)(param_1 + 2);
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
      if (*(long *)(param_1 + 0x14) == -0x8000000000000000 || *(long *)(param_1 + 0x14) == 0) {
        lVar8 = *plVar16;
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x16));
        lVar8 = *plVar16;
      }
      if (lVar8 != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) != 0) {
        _free(*(undefined8 *)(param_1 + 10));
      }
      if (*(long *)(param_1 + 0x1a) == -0x8000000000000000 || *(long *)(param_1 + 0x1a) == 0) {
        uVar10 = *(ulong *)(param_1 + 0x44);
        uVar9 = uVar10;
        if (uVar10 < 0x8000000000000001) {
          uVar9 = 0;
        }
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x1c));
        uVar10 = *(ulong *)(param_1 + 0x44);
        uVar9 = uVar10;
        if (uVar10 < 0x8000000000000001) {
          uVar9 = 0;
        }
      }
      if ((uVar10 != 0x8000000000000000) && ((uVar9 & 0x7fffffffffffffff) == 0)) {
        FUN_100e79780(param_1 + 0x44);
      }
      if (*(long *)(param_1 + 0x20) != -0x8000000000000000) {
        if (*(long *)(param_1 + 0x20) != 0) {
          _free(*(undefined8 *)(param_1 + 0x22));
        }
        if ((*(long *)(param_1 + 0x26) != -0x8000000000000000) && (*(long *)(param_1 + 0x26) != 0))
        {
          _free(*(undefined8 *)(param_1 + 0x28));
        }
      }
      if (*(long *)(param_1 + 0xe) != 0) {
        _free(*(undefined8 *)(param_1 + 0x10));
      }
      unaff_x23 = *(long *)(param_1 + 0x2c);
      unaff_x21 = 0x8000000000000000;
      if (unaff_x23 == -0x8000000000000000) {
LAB_100e26f88:
        if (*(long *)(param_1 + 0x32) != -0x8000000000000000) {
          if (*(long *)(param_1 + 0x32) != 0) {
            _free(*(undefined8 *)(param_1 + 0x34));
          }
          if (*(long *)(param_1 + 0x38) != 0) {
            _free(*(undefined8 *)(param_1 + 0x3a));
          }
        }
        if (*(long *)(param_1 + 0x3e) == -0x8000000000000000 || *(long *)(param_1 + 0x3e) == 0) {
          return;
        }
        puVar3 = *(ulong **)(param_1 + 0x40);
        break;
      }
      unaff_x20 = *(int **)(param_1 + 0x2e);
      unaff_x24 = *(long *)(param_1 + 0x30);
      if (unaff_x24 == 0) {
        if (unaff_x23 != 0) {
          _free(unaff_x20);
        }
        goto LAB_100e26f88;
      }
      unaff_x22 = unaff_x20 + 0x76;
      unaff_x30 = 0x100e26f74;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
      param_1 = unaff_x20;
      unaff_x19 = plVar16;
      goto SUB_100dfc74c;
    case 0x15:
      if (*(long *)(param_1 + 0x1a) == -0x8000000000000000 || *(long *)(param_1 + 0x1a) == 0) {
        lVar8 = *(long *)(param_1 + 6);
      }
      else {
        *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        _free(*(undefined8 *)(param_1 + 0x1c));
        lVar8 = *(long *)(param_1 + 6);
      }
      if (lVar8 == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 8);
      break;
    case 0x16:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) < 1) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 10);
      break;
    case 0x17:
      *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      lVar8 = *(long *)(param_1 + 4);
      lVar14 = *(long *)(param_1 + 6);
      if (lVar14 != 0) {
        puVar17 = (undefined8 *)(lVar8 + 8);
        do {
          if (puVar17[-1] != 0) {
            _free(*puVar17);
          }
          puVar17 = puVar17 + 3;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if (*(long *)(param_1 + 2) != 0) {
        _free(lVar8);
      }
      lVar8 = *(long *)(param_1 + 10);
      lVar14 = *(long *)(param_1 + 0xc);
      if (lVar14 != 0) {
        puVar17 = (undefined8 *)(lVar8 + 0x20);
        do {
          if (puVar17[-4] != 0) {
            _free(puVar17[-3]);
          }
          if (puVar17[-1] != 0) {
            _free(*puVar17);
          }
          puVar17 = puVar17 + 6;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if (*(long *)(param_1 + 8) != 0) {
        _free(lVar8);
      }
      puVar3 = *(ulong **)(param_1 + 0x10);
      lVar8 = *(long *)(param_1 + 0x12);
      if (lVar8 != 0) {
        puVar6 = puVar3 + 1;
        do {
          if (puVar6[-1] != 0) {
            _free(*puVar6);
          }
          puVar6 = puVar6 + 3;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      if (*(long *)(param_1 + 0xe) == 0) {
        return;
      }
      break;
    case 0x18:
      *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) != 0) {
        _free(*(undefined8 *)(param_1 + 10));
      }
      if (*(long *)(param_1 + 0xe) != 0) {
        _free(*(undefined8 *)(param_1 + 0x10));
      }
      if (*(long *)(param_1 + 0x14) != -0x7ffffffffffffffb) {
        FUN_100de6690();
      }
      if ((*(long *)(param_1 + 0x26) != -0x8000000000000000) && (*(long *)(param_1 + 0x26) != 0)) {
        _free(*(undefined8 *)(param_1 + 0x28));
      }
      if ((*(long *)(param_1 + 0x2c) == -0x8000000000000000) || (*(long *)(param_1 + 0x2c) == 0)) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 0x2e);
      break;
    case 0x19:
      *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) != 0) {
        _free(*(undefined8 *)(param_1 + 10));
      }
      if (*(long *)(param_1 + 0xe) != 0) {
        _free(*(undefined8 *)(param_1 + 0x10));
      }
      if (*(long *)(param_1 + 0x14) != -0x7ffffffffffffffb) {
        FUN_100de6690();
      }
      if ((*(long *)(param_1 + 0x26) != -0x8000000000000000) && (*(long *)(param_1 + 0x26) != 0)) {
        _free(*(undefined8 *)(param_1 + 0x28));
      }
      if ((*(long *)(param_1 + 0x2c) != -0x8000000000000000) && (*(long *)(param_1 + 0x2c) != 0)) {
        _free(*(undefined8 *)(param_1 + 0x2e));
      }
      plVar16 = (long *)(param_1 + 0x32);
      if (*plVar16 == -0x8000000000000000) {
        if (*(long *)(param_1 + 0x34) == 0) {
          return;
        }
        puVar3 = *(ulong **)(param_1 + 0x36);
      }
      else {
        puVar20 = *(undefined1 **)((long)register0x00000008 + -0x10);
        puVar21 = *(undefined **)((long)register0x00000008 + -8);
        uVar12 = *(undefined8 *)((long)register0x00000008 + -0x20);
        puVar3 = *(ulong **)((long)register0x00000008 + -0x18);
        uVar5 = *(undefined8 *)((long)register0x00000008 + -0x30);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x28);
SUB_100e00868:
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x30) = uVar5;
        *(undefined8 *)((long)register0x00000008 + -0x28) = uVar13;
        *(undefined8 *)((long)register0x00000008 + -0x20) = uVar12;
        *(ulong **)((long)register0x00000008 + -0x18) = puVar3;
        *(undefined1 **)((long)register0x00000008 + -0x10) = puVar20;
        *(undefined **)((long)register0x00000008 + -8) = puVar21;
        lVar14 = plVar16[1];
        lVar8 = plVar16[2] + 1;
        lVar22 = lVar14;
        while (lVar8 = lVar8 + -1, lVar8 != 0) {
          FUN_100de6690(lVar22);
          lVar22 = lVar22 + 0x48;
        }
        if (*plVar16 != 0) {
          _free(lVar14);
        }
        if (plVar16[3] != -0x7ffffffffffffffb) {
          FUN_100de6690();
        }
        puVar6 = (ulong *)(plVar16 + 0xc);
        if (*puVar6 == 0x8000000000000005) {
          return;
        }
        uVar5 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar12 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar11 = *(undefined8 *)((long)register0x00000008 + -0x18);
        unaff_x22 = *(int **)((long)register0x00000008 + -0x30);
        unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
        unaff_x24 = *(long *)((long)register0x00000008 + -0x40);
        unaff_x23 = *(long *)((long)register0x00000008 + -0x38);
code_r0x000100de6690:
        *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x20) = uVar13;
        *(undefined8 *)((long)register0x00000008 + -0x18) = uVar11;
        *(undefined8 *)((long)register0x00000008 + -0x10) = uVar5;
        *(undefined8 *)((long)register0x00000008 + -8) = uVar12;
        uVar9 = *puVar6 ^ 0x8000000000000000;
        if (-1 < (long)*puVar6) {
          uVar9 = 5;
        }
        if (uVar9 < 3) {
          return;
        }
        if (uVar9 == 3) {
          if (puVar6[1] == 0) {
            return;
          }
          puVar3 = (ulong *)puVar6[2];
        }
        else if (uVar9 == 4) {
          puVar3 = (ulong *)puVar6[2];
          lVar8 = puVar6[3] + 1;
          puVar4 = puVar3;
          while (lVar8 = lVar8 + -1, lVar8 != 0) {
            FUN_100de6690(puVar4);
            puVar4 = puVar4 + 9;
          }
          if (puVar6[1] == 0) {
            return;
          }
        }
        else {
          uVar9 = puVar6[4];
          if ((uVar9 != 0) && (uVar9 * 9 != -0x11)) {
            _free(puVar6[3] + uVar9 * -8 + -8);
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
          puVar3 = (ulong *)puVar6[1];
          lVar8 = puVar6[2] + 1;
          puVar4 = puVar3;
          while (lVar8 = lVar8 + -1, lVar8 != 0) {
            if (*puVar4 != 0) {
              _free(puVar4[1]);
            }
            FUN_100de6690(puVar4 + 3);
            puVar4 = puVar4 + 0xd;
          }
          if (*puVar6 == 0) {
            return;
          }
        }
      }
      break;
    case 0x1a:
      if (*(long *)(param_1 + 2) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 4);
      break;
    case 0x1b:
      plVar16 = (long *)(param_1 + 2);
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 0x10) != 0) {
        _free(*(undefined8 *)(param_1 + 0x12));
      }
      if (*(long *)(param_1 + 0x16) != 0) {
        _free(*(undefined8 *)(param_1 + 0x18));
      }
      uVar5 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar11 = *(undefined8 *)((long)register0x00000008 + -0x18);
FUN_100e0c988:
      *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) = uVar13;
      *(undefined8 *)((long)register0x00000008 + -0x18) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0x10) = uVar5;
      *(undefined8 *)((long)register0x00000008 + -8) = uVar12;
      lVar8 = *plVar16;
      if (lVar8 < 2) {
        if (lVar8 == 0) {
          if (plVar16[1] == -0x8000000000000000 || plVar16[1] == 0) {
            lVar8 = plVar16[4];
          }
          else {
            _free(plVar16[2]);
            lVar8 = plVar16[4];
          }
          if (lVar8 == -0x8000000000000000) {
            return;
          }
          puVar3 = (ulong *)plVar16[5];
          lVar14 = plVar16[6];
          if (lVar14 != 0) {
            puVar6 = puVar3 + 1;
            do {
              if (puVar6[-1] != 0) {
                _free(*puVar6);
              }
              puVar6 = puVar6 + 3;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          if (lVar8 == 0) {
            return;
          }
        }
        else {
          if ((plVar16[1] & 0x7fffffffffffffffU) == 0) {
            return;
          }
          puVar3 = (ulong *)plVar16[2];
        }
      }
      else {
        if (lVar8 != 2) {
          return;
        }
        if (plVar16[1] == -0x8000000000000000 || plVar16[1] == 0) {
          uVar9 = plVar16[4];
        }
        else {
          _free(plVar16[2]);
          uVar9 = plVar16[4];
        }
        if ((uVar9 & 0x7fffffffffffffff) == 0) {
          return;
        }
        puVar3 = (ulong *)plVar16[5];
      }
      break;
    case 0x1c:
      if (*(long *)(param_1 + 2) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 4);
      break;
    case 0x1d:
      plVar16 = (long *)(param_1 + 2);
DAT_100e17134:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*plVar16 != 0) {
        _free(plVar16[1]);
      }
      if (plVar16[3] != 0) {
        _free(plVar16[4]);
      }
      if (plVar16[9] == -0x8000000000000000 || plVar16[9] == 0) {
        lVar8 = plVar16[6];
      }
      else {
        _free(plVar16[10]);
        lVar8 = plVar16[6];
      }
      if (lVar8 != 0) {
        _free(plVar16[7]);
      }
      if ((plVar16[0xc] & 0x7fffffffffffffffU) == 0) {
        return;
      }
      puVar3 = (ulong *)plVar16[0xd];
      break;
    case 0x1e:
      *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 0x20) == -0x8000000000000000 || *(long *)(param_1 + 0x20) == 0) {
        lVar8 = *(long *)(param_1 + 8);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x22));
        lVar8 = *(long *)(param_1 + 8);
      }
      if (lVar8 != 0) {
        _free(*(undefined8 *)(param_1 + 10));
      }
      lVar8 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(param_1 + 0x12);
      if (lVar14 != 0) {
        puVar17 = (undefined8 *)(lVar8 + 8);
        do {
          if (puVar17[-1] != 0) {
            _free(*puVar17);
          }
          puVar17 = puVar17 + 3;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if (*(long *)(param_1 + 0xe) != 0) {
        _free(lVar8);
      }
      if (*(long *)(param_1 + 0x14) != 0) {
        _free(*(undefined8 *)(param_1 + 0x16));
      }
      lVar14 = *(long *)(param_1 + 0x1c);
      lVar8 = lVar14;
      for (lVar22 = *(long *)(param_1 + 0x1e); lVar22 != 0; lVar22 = lVar22 + -1) {
        FUN_100e1d024(lVar8);
        lVar8 = lVar8 + 0x50;
      }
      if (*(long *)(param_1 + 0x1a) != 0) {
        _free(lVar14);
      }
      if (*(long *)(param_1 + 0x26) == -0x8000000000000000 || *(long *)(param_1 + 0x26) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 0x28);
      break;
    case 0x1f:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 10);
      break;
    case 0x20:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) != 0) {
        _free(*(undefined8 *)(param_1 + 10));
      }
      if (*(long *)(param_1 + 0xe) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 0x10);
      break;
    case 0x21:
      *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 0x38) == -0x8000000000000000 || *(long *)(param_1 + 0x38) == 0) {
        lVar8 = *(long *)(param_1 + 8);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x3a));
        lVar8 = *(long *)(param_1 + 8);
      }
      if (lVar8 != 0) {
        _free(*(undefined8 *)(param_1 + 10));
      }
      lVar8 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(param_1 + 0x12);
      if (lVar14 != 0) {
        puVar17 = (undefined8 *)(lVar8 + 8);
        do {
          if (puVar17[-1] != 0) {
            _free(*puVar17);
          }
          puVar17 = puVar17 + 3;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if (*(long *)(param_1 + 0xe) != 0) {
        _free(lVar8);
      }
      if (*(long *)(param_1 + 0x14) != 0) {
        _free(*(undefined8 *)(param_1 + 0x16));
      }
      lVar14 = *(long *)(param_1 + 0x1c);
      lVar8 = lVar14;
      for (lVar22 = *(long *)(param_1 + 0x1e); lVar22 != 0; lVar22 = lVar22 + -1) {
        FUN_100e1d024(lVar8);
        lVar8 = lVar8 + 0x50;
      }
      if (*(long *)(param_1 + 0x1a) != 0) {
        _free(lVar14);
      }
      if (*(long *)(param_1 + 0x3e) == -0x8000000000000000 || *(long *)(param_1 + 0x3e) == 0) {
        lVar8 = *(long *)(param_1 + 0x20);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x40));
        lVar8 = *(long *)(param_1 + 0x20);
      }
      if (lVar8 != 0) {
        _free(*(undefined8 *)(param_1 + 0x22));
      }
      if (*(long *)(param_1 + 0x26) != 0) {
        _free(*(undefined8 *)(param_1 + 0x28));
      }
      if (*(long *)(param_1 + 0x2c) != 0) {
        _free(*(undefined8 *)(param_1 + 0x2e));
      }
      if (*(long *)(param_1 + 0x32) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 0x34);
      break;
    case 0x22:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 10);
      break;
    case 0x23:
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 0x20) == -0x8000000000000000 || *(long *)(param_1 + 0x20) == 0) {
        lVar8 = *(long *)(param_1 + 8);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x22));
        lVar8 = *(long *)(param_1 + 8);
      }
      if (lVar8 != 0) {
        _free(*(undefined8 *)(param_1 + 10));
      }
      lVar8 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(param_1 + 0x12);
      if (lVar14 != 0) {
        puVar17 = (undefined8 *)(lVar8 + 8);
        do {
          if (puVar17[-1] != 0) {
            _free(*puVar17);
          }
          puVar17 = puVar17 + 3;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if (*(long *)(param_1 + 0xe) != 0) {
        _free(lVar8);
      }
      if (*(long *)(param_1 + 0x14) != 0) {
        _free(*(undefined8 *)(param_1 + 0x16));
      }
      if ((*(long *)(param_1 + 0x26) != -0x8000000000000000) && (*(long *)(param_1 + 0x26) != 0)) {
        _free(*(undefined8 *)(param_1 + 0x28));
      }
      if ((*(ulong *)(param_1 + 0x2c) & 0x7fffffffffffffff) == 0) {
        lVar8 = *(long *)(param_1 + 0x34);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x2e));
        lVar8 = *(long *)(param_1 + 0x34);
      }
      if (lVar8 != -0x8000000000000000) {
        lVar14 = *(long *)(param_1 + 0x36);
        lVar22 = *(long *)(param_1 + 0x38);
        if (lVar22 != 0) {
          puVar17 = (undefined8 *)(lVar14 + 8);
          do {
            if (puVar17[-1] != 0) {
              _free(*puVar17);
            }
            puVar17 = puVar17 + 3;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
        }
        if (lVar8 != 0) {
          _free(lVar14);
        }
      }
      lVar8 = *(long *)(param_1 + 0x3a);
      if (lVar8 != -0x8000000000000000) {
        lVar14 = *(long *)(param_1 + 0x3c);
        lVar22 = *(long *)(param_1 + 0x3e);
        if (lVar22 != 0) {
          puVar17 = (undefined8 *)(lVar14 + 8);
          do {
            if (puVar17[-1] != 0) {
              _free(*puVar17);
            }
            puVar17 = puVar17 + 4;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
        }
        if (lVar8 != 0) {
          _free(lVar14);
        }
      }
      if (-0x7fffffffffffffff < *(long *)(param_1 + 0x46)) {
        FUN_100e79780(param_1 + 0x46);
      }
      lVar8 = *(long *)(param_1 + 0x40);
      if (lVar8 != -0x8000000000000000) {
        lVar14 = *(long *)(param_1 + 0x42);
        lVar22 = *(long *)(param_1 + 0x44);
        if (lVar22 != 0) {
          lVar19 = 0;
          do {
            puVar3 = (ulong *)(lVar14 + lVar19 * 0x20);
            uVar10 = *puVar3;
            uVar9 = uVar10 ^ 0x8000000000000000;
            if (-1 < (long)uVar10) {
              uVar9 = 3;
            }
            if (uVar9 == 3) {
              if (uVar10 != 0) {
                uVar9 = puVar3[1];
LAB_100e31464:
                _free(uVar9);
              }
            }
            else if (uVar9 == 1) {
              uVar9 = puVar3[2];
              uVar10 = puVar3[3];
              if (uVar10 != 0) {
                puVar17 = (undefined8 *)(uVar9 + 8);
                do {
                  if (puVar17[-1] != 0) {
                    _free(*puVar17);
                  }
                  puVar17 = puVar17 + 3;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
              if (puVar3[1] != 0) goto LAB_100e31464;
            }
            lVar19 = lVar19 + 1;
          } while (lVar19 != lVar22);
        }
        if (lVar8 != 0) {
          _free(lVar14);
        }
      }
      puVar3 = *(ulong **)(param_1 + 0x1c);
      puVar6 = puVar3;
      for (lVar8 = *(long *)(param_1 + 0x1e); lVar8 != 0; lVar8 = lVar8 + -1) {
        FUN_100e1d024(puVar6);
        puVar6 = puVar6 + 10;
      }
      if (*(long *)(param_1 + 0x1a) == 0) {
        return;
      }
      break;
    case 0x24:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) != 0) {
        _free(*(undefined8 *)(param_1 + 10));
      }
      if (*(long *)(param_1 + 0xe) == -0x8000000000000000 || *(long *)(param_1 + 0xe) == 0) {
        if (*(long *)(param_1 + 0x14) == -0x8000000000000000) goto LAB_100e4b89c;
LAB_100e4b8cc:
        FUN_100e79780();
        uVar9 = *(ulong *)(param_1 + 0x1e);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x10));
        if (*(long *)(param_1 + 0x14) != -0x8000000000000000) goto LAB_100e4b8cc;
LAB_100e4b89c:
        uVar9 = *(ulong *)(param_1 + 0x1e);
      }
      if ((uVar9 & 0x7fffffffffffffff) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 0x20);
      break;
    case 0x25:
      *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) != 0) {
        _free(*(undefined8 *)(param_1 + 10));
      }
      puVar3 = *(ulong **)(param_1 + 0x10);
      puVar6 = puVar3;
      for (lVar8 = *(long *)(param_1 + 0x12); lVar8 != 0; lVar8 = lVar8 + -1) {
        FUN_100e4b8ec(puVar6);
        puVar6 = puVar6 + 0xd;
      }
      if (*(long *)(param_1 + 0xe) == 0) {
        return;
      }
      break;
    case 0x26:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) != 0) {
        _free(*(undefined8 *)(param_1 + 10));
      }
      if (*(long *)(param_1 + 0x14) == -0x8000000000000000 || *(long *)(param_1 + 0x14) == 0) {
        lVar8 = *(long *)(param_1 + 0xe);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x16));
        lVar8 = *(long *)(param_1 + 0xe);
      }
      if (lVar8 != 0) {
        _free(*(undefined8 *)(param_1 + 0x10));
      }
      puVar6 = (ulong *)(param_1 + 0x1a);
      uVar5 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar11 = *(undefined8 *)((long)register0x00000008 + -0x18);
      goto code_r0x000100de6690;
    case 0x27:
      *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) != 0) {
        _free(*(undefined8 *)(param_1 + 10));
      }
      if (*(long *)(param_1 + 0x1a) == -0x8000000000000000 || *(long *)(param_1 + 0x1a) == 0) {
        lVar8 = *(long *)(param_1 + 0xe);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x1c));
        lVar8 = *(long *)(param_1 + 0xe);
      }
      if (lVar8 != 0) {
        _free(*(undefined8 *)(param_1 + 0x10));
      }
      FUN_100de6690(param_1 + 0x26);
      lVar8 = *(long *)(param_1 + 0x16);
      lVar14 = *(long *)(param_1 + 0x18);
      if (lVar14 != 0) {
        puVar17 = (undefined8 *)(lVar8 + 0x10);
        do {
          if (puVar17[-1] != 0) {
            _free(*puVar17);
          }
          puVar17 = puVar17 + 4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if (*(long *)(param_1 + 0x14) != 0) {
        _free(lVar8);
      }
      if (*(long *)(param_1 + 0x20) == -0x8000000000000000 || *(long *)(param_1 + 0x20) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 0x22);
      break;
    case 0x28:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 8) == -0x8000000000000000 || *(long *)(param_1 + 8) == 0) {
        lVar8 = *(long *)(param_1 + 2);
      }
      else {
        _free(*(undefined8 *)(param_1 + 10));
        lVar8 = *(long *)(param_1 + 2);
      }
      if (lVar8 != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 0xe) != -0x8000000000000000 && *(long *)(param_1 + 0xe) != 0) {
        _free(*(undefined8 *)(param_1 + 0x10));
      }
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      lVar8 = *(long *)(param_1 + 0x14);
      if (lVar8 != -0x8000000000000000) {
        if (*(long *)(param_1 + 0x2c) != -0x7ffffffffffffffb) {
          FUN_100de6690();
        }
        if (lVar8 != 0) {
          _free(*(undefined8 *)(param_1 + 0x16));
        }
        puVar6 = (ulong *)(param_1 + 0x1a);
        uVar5 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar12 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar11 = *(undefined8 *)((long)register0x00000008 + -0x18);
        goto code_r0x000100de6690;
      }
      if (*(long *)(param_1 + 0x28) != -0x7ffffffffffffffb) {
        FUN_100de6690();
      }
      if (*(long *)(param_1 + 0x16) != 0) {
        _free(*(undefined8 *)(param_1 + 0x18));
      }
      if (*(long *)(param_1 + 0x1c) != 0) {
        _free(*(undefined8 *)(param_1 + 0x1e));
      }
      if (*(long *)(param_1 + 0x22) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 0x24);
      break;
    case 0x29:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) != 0) {
        _free(*(undefined8 *)(param_1 + 10));
      }
      FUN_100cdf624(param_1 + 0x1a);
      if (*(long *)(param_1 + 0xe) == -0x8000000000000000 || *(long *)(param_1 + 0xe) == 0) {
        lVar8 = *(long *)(param_1 + 0x14);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x10));
        lVar8 = *(long *)(param_1 + 0x14);
      }
      if ((lVar8 == -0x8000000000000000) || (lVar8 == 0)) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 0x16);
      break;
    case 0x2a:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 6) != 0) {
        _free(*(undefined8 *)(param_1 + 8));
      }
      if (*(long *)(param_1 + 0x12) == -0x8000000000000000 || *(long *)(param_1 + 0x12) == 0) {
        lVar8 = *(long *)(param_1 + 0xc);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x14));
        lVar8 = *(long *)(param_1 + 0xc);
      }
      if (lVar8 != 0) {
        _free(*(undefined8 *)(param_1 + 0xe));
      }
      if (*(long *)(param_1 + 0x18) != -0x8000000000000000 && *(long *)(param_1 + 0x18) != 0) {
        _free(*(undefined8 *)(param_1 + 0x1a));
      }
      *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      uVar10 = *(ulong *)(param_1 + 0x1e);
      uVar9 = uVar10 ^ 0x8000000000000000;
      if (-1 < (long)uVar10) {
        uVar9 = 4;
      }
      if ((long)uVar9 < 2) {
        if (uVar9 == 0) {
LAB_100e3165c:
          if (*(long *)(param_1 + 0x20) != 0) {
            _free(*(undefined8 *)(param_1 + 0x22));
          }
          if (*(long *)(param_1 + 0x26) == 0) {
            return;
          }
          puVar3 = *(ulong **)(param_1 + 0x28);
          break;
        }
        if (uVar9 == 1) {
          if (*(long *)(param_1 + 0x20) != 0) {
            _free(*(undefined8 *)(param_1 + 0x22));
          }
          lVar8 = *(long *)(param_1 + 0x28);
          lVar14 = *(long *)(param_1 + 0x2a);
          if (lVar14 != 0) {
            puVar17 = (undefined8 *)(lVar8 + 8);
            do {
              if (puVar17[-1] != 0) {
                _free(*puVar17);
              }
              puVar17 = puVar17 + 3;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          if (*(long *)(param_1 + 0x26) != 0) {
            _free(lVar8);
          }
          if (*(long *)(param_1 + 0x2c) == 0) {
            return;
          }
          puVar3 = *(ulong **)(param_1 + 0x2e);
          break;
        }
      }
      else {
        if (uVar9 == 2) {
          if (*(long *)(param_1 + 0x20) != 0) {
            _free(*(undefined8 *)(param_1 + 0x22));
          }
          puVar3 = *(ulong **)(param_1 + 0x28);
          lVar8 = *(long *)(param_1 + 0x2a);
          if (lVar8 != 0) {
            puVar6 = puVar3 + 1;
            do {
              if (puVar6[-1] != 0) {
                _free(*puVar6);
              }
              puVar6 = puVar6 + 3;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
          if (*(long *)(param_1 + 0x26) == 0) {
            return;
          }
          break;
        }
        if (uVar9 == 3) goto LAB_100e3165c;
        if (uVar9 == 4) {
          if (uVar10 != 0) {
            _free(*(undefined8 *)(param_1 + 0x20));
          }
          if (*(long *)(param_1 + 0x24) != 0) {
            _free(*(undefined8 *)(param_1 + 0x26));
          }
          if ((*(long *)(param_1 + 0x2a) != -0x8000000000000000) && (*(long *)(param_1 + 0x2a) != 0)
             ) {
            _free(*(undefined8 *)(param_1 + 0x2c));
          }
          if ((*(long *)(param_1 + 0x30) != -0x8000000000000000) && (*(long *)(param_1 + 0x30) != 0)
             ) {
            _free(*(undefined8 *)(param_1 + 0x32));
          }
          if (*(long *)(param_1 + 0x36) == -0x8000000000000000) {
            return;
          }
          if (*(long *)(param_1 + 0x36) == 0) {
            return;
          }
          puVar3 = *(ulong **)(param_1 + 0x38);
          break;
        }
      }
      if (*(long *)(param_1 + 0x20) == -0x8000000000000000 || *(long *)(param_1 + 0x20) == 0) {
        lVar8 = *(long *)(param_1 + 0x26);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x22));
        lVar8 = *(long *)(param_1 + 0x26);
      }
      if (lVar8 == -0x8000000000000000) {
        return;
      }
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
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
      puVar3 = *(ulong **)(param_1 + 0x28);
      lVar8 = *(long *)(param_1 + 0x2a);
      puVar6 = puVar3;
      goto joined_r0x000100e797a0;
    case 0x2b:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) == -0x8000000000000000 || *(long *)(param_1 + 8) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 10);
      break;
    case 0x2c:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) == -0x8000000000000000 || *(long *)(param_1 + 8) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 10);
      break;
    case 0x2d:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) != 0) {
        _free(*(undefined8 *)(param_1 + 10));
      }
      plVar16 = (long *)(param_1 + 0xe);
      uVar5 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar11 = *(undefined8 *)((long)register0x00000008 + -0x18);
      goto code_r0x000100cdf624;
    case 0x2e:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      plVar16 = (long *)(param_1 + 8);
      uVar5 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar11 = *(undefined8 *)((long)register0x00000008 + -0x18);
      goto code_r0x000100cdf624;
    case 0x2f:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) != 0) {
        _free(*(undefined8 *)(param_1 + 10));
      }
      if (*(long *)(param_1 + 0xe) != 0) {
        _free(*(undefined8 *)(param_1 + 0x10));
      }
      if (*(long *)(param_1 + 0x14) != 0) {
        _free(*(undefined8 *)(param_1 + 0x16));
      }
      plVar16 = (long *)(param_1 + 0x1a);
      uVar5 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar11 = *(undefined8 *)((long)register0x00000008 + -0x18);
code_r0x000100cdf624:
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) = uVar13;
      *(undefined8 *)((long)register0x00000008 + -0x18) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0x10) = uVar5;
      *(undefined8 *)((long)register0x00000008 + -8) = uVar12;
      lVar8 = plVar16[1];
      if (lVar8 == 0) {
        return;
      }
      lVar14 = plVar16[3];
      if (lVar14 == 0) goto LAB_100cdf718;
      plVar15 = (long *)*plVar16;
      plVar18 = plVar15 + 1;
      lVar22 = *plVar15;
      uVar9 = CONCAT17(-(-1 < lVar22),
                       CONCAT16(-(-1 < (char)((ulong)lVar22 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar22 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar22 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar22 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar22 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar22 >> 8)),-(-1 < (char)lVar22)))))))) &
              0x8080808080808080;
      goto joined_r0x000100cdf69c;
    case 0x30:
      if (*(long *)(param_1 + 2) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 4);
      break;
    case 0x31:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 10);
      break;
    case 0x32:
      *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 8) == -0x8000000000000000 || *(long *)(param_1 + 8) == 0) {
        puVar3 = *(ulong **)(param_1 + 4);
        lVar8 = *(long *)(param_1 + 6);
      }
      else {
        _free(*(undefined8 *)(param_1 + 10));
        puVar3 = *(ulong **)(param_1 + 4);
        lVar8 = *(long *)(param_1 + 6);
      }
      if (lVar8 != 0) {
        puVar6 = puVar3 + 1;
        do {
          if (puVar6[-1] != 0) {
            _free(*puVar6);
          }
          puVar6 = puVar6 + 4;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      if (*(long *)(param_1 + 2) == 0) {
        return;
      }
      break;
    case 0x33:
      if ((*(ulong *)(param_1 + 10) & 0x7fffffffffffffff) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 0xc);
      break;
    case 0x35:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      uVar10 = *(ulong *)(param_1 + 8);
      uVar9 = uVar10 ^ 0x8000000000000000;
      if (-1 < (long)uVar10) {
        uVar9 = 2;
      }
      if (uVar9 != 0) {
        if ((uVar9 == 1) || (uVar9 != 2)) {
          if (*(long *)(param_1 + 10) != 0) {
            lVar8 = 0x10;
            goto LAB_100e0cd78;
          }
        }
        else {
          if (uVar10 != 0) {
            _free(*(undefined8 *)(param_1 + 10));
          }
          if ((*(ulong *)(param_1 + 0xe) & 0x7fffffffffffffff) != 0) {
            lVar8 = 0x20;
LAB_100e0cd78:
            _free(*(undefined8 *)((long)(param_1 + 8) + lVar8));
          }
        }
      }
      if (*(long *)(param_1 + 2) == -0x8000000000000000 || *(long *)(param_1 + 2) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 4);
      break;
    case 0x36:
      *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      lVar8 = *(long *)(param_1 + 2);
      if (lVar8 == -0x8000000000000000) {
        return;
      }
      lVar14 = *(long *)(param_1 + 4);
      lVar22 = *(long *)(param_1 + 6);
      if (lVar22 != 0) {
        puVar17 = (undefined8 *)(lVar14 + 0x20);
        do {
          if (puVar17[-4] != 0) {
            _free(puVar17[-3]);
          }
          if (puVar17[-1] != 0) {
            _free(*puVar17);
          }
          if (puVar17[2] != 0) {
            _free(puVar17[3]);
          }
          puVar17 = puVar17 + 0xb;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      if (lVar8 != 0) {
        _free(lVar14);
      }
      if (*(long *)(param_1 + 8) != 0) {
        _free(*(undefined8 *)(param_1 + 10));
      }
      if (*(long *)(param_1 + 0xe) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 0x10);
      break;
    case 0x37:
      *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      lVar8 = 2;
      if (1 < *(ulong *)(param_1 + 2)) {
        lVar8 = *(ulong *)(param_1 + 2) - 2;
      }
      switch(lVar8) {
      case 0:
        if (*(long *)(param_1 + 0x10) != -0x8000000000000000 && *(long *)(param_1 + 0x10) != 0) {
          _free(*(undefined8 *)(param_1 + 0x12));
        }
        if (*(long *)(param_1 + 4) != 0) {
          _free(*(undefined8 *)(param_1 + 6));
        }
        puVar3 = *(ulong **)(param_1 + 0xc);
        lVar8 = *(long *)(param_1 + 0xe);
        puVar6 = puVar3;
        goto joined_r0x000100e02a9c;
      case 1:
        if (*(long *)(param_1 + 4) != 0) {
          _free(*(undefined8 *)(param_1 + 6));
        }
        lVar8 = *(long *)(param_1 + 0xc);
        lVar14 = *(long *)(param_1 + 0xe);
        if (lVar14 != 0) {
          puVar17 = (undefined8 *)(lVar8 + 8);
          do {
            if (puVar17[-1] != 0) {
              _free(*puVar17);
            }
            puVar17 = puVar17 + 3;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        if (*(long *)(param_1 + 10) != 0) {
          _free(lVar8);
        }
        lVar8 = *(long *)(param_1 + 0x10);
        if (lVar8 != -0x8000000000000000) {
          lVar14 = *(long *)(param_1 + 0x12);
          lVar22 = *(long *)(param_1 + 0x14);
          if (lVar22 != 0) {
            puVar17 = (undefined8 *)(lVar14 + 0x10);
            do {
              if (puVar17[-1] != 0) {
                _free(*puVar17);
              }
              puVar17 = puVar17 + 4;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
          }
          if (lVar8 != 0) {
            _free(lVar14);
          }
        }
        if (*(long *)(param_1 + 0x16) == -0x8000000000000000 || *(long *)(param_1 + 0x16) == 0) {
          return;
        }
        puVar3 = *(ulong **)(param_1 + 0x18);
        goto code_r0x000108aa97c4;
      case 2:
        if (*(long *)(param_1 + 0x24) != -0x8000000000000000 && *(long *)(param_1 + 0x24) != 0) {
          _free(*(undefined8 *)(param_1 + 0x26));
        }
        if (*(long *)(param_1 + 0x2a) != -0x8000000000000000 && *(long *)(param_1 + 0x2a) != 0) {
          _free(*(undefined8 *)(param_1 + 0x2c));
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
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        lVar8 = *(long *)(param_1 + 8);
        lVar14 = *(long *)(param_1 + 10);
        if (lVar14 != 0) {
          puVar17 = (undefined8 *)(lVar8 + 8);
          do {
            if (puVar17[-1] != 0) {
              _free(*puVar17);
            }
            puVar17 = puVar17 + 3;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        if (*(long *)(param_1 + 6) != 0) {
          _free(lVar8);
        }
        if (*(long *)(param_1 + 0xc) == -0x8000000000000000 || *(long *)(param_1 + 0xc) == 0) {
          lVar8 = *(long *)(param_1 + 0x18);
        }
        else {
          _free(*(undefined8 *)(param_1 + 0xe));
          lVar8 = *(long *)(param_1 + 0x18);
        }
        if (lVar8 != 0) {
          FUN_100cb56bc();
        }
        if ((*(long *)(param_1 + 0x12) == -0x8000000000000000) || (*(long *)(param_1 + 0x12) == 0))
        {
          return;
        }
        puVar3 = *(ulong **)(param_1 + 0x14);
        goto code_r0x000108aa97c4;
      case 3:
        if (*(long *)(param_1 + 0x16) != -0x8000000000000000 && *(long *)(param_1 + 0x16) != 0) {
          _free(*(undefined8 *)(param_1 + 0x18));
        }
        if (*(long *)(param_1 + 4) != 0) {
          _free(*(undefined8 *)(param_1 + 6));
        }
        if ((*(long *)(param_1 + 0x1c) != -0x8000000000000000) && (*(long *)(param_1 + 0x1c) != 0))
        {
          uVar5 = *(undefined8 *)(param_1 + 0x1e);
code_r0x000100e02f44:
          _free(uVar5);
        }
        break;
      case 4:
        if (*(long *)(param_1 + 10) == -0x8000000000000000 || *(long *)(param_1 + 10) == 0) {
          if (*(long *)(param_1 + 0x10) == -0x8000000000000000 || *(long *)(param_1 + 0x10) == 0)
          goto code_r0x000100e02b50;
code_r0x000100e02ecc:
          _free(*(undefined8 *)(param_1 + 0x12));
          lVar8 = *(long *)(param_1 + 0x16);
        }
        else {
          _free(*(undefined8 *)(param_1 + 0xc));
          if (*(long *)(param_1 + 0x10) != -0x8000000000000000 && *(long *)(param_1 + 0x10) != 0)
          goto code_r0x000100e02ecc;
code_r0x000100e02b50:
          lVar8 = *(long *)(param_1 + 0x16);
        }
        if ((lVar8 != -0x8000000000000000) && (lVar8 != 0)) {
          _free(*(undefined8 *)(param_1 + 0x18));
        }
        if (*(long *)(param_1 + 4) != 0) {
          _free(*(undefined8 *)(param_1 + 6));
        }
        puVar6 = (ulong *)(param_1 + 0x1c);
        uVar5 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar12 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar11 = *(undefined8 *)((long)register0x00000008 + -0x18);
        unaff_x22 = *(int **)((long)register0x00000008 + -0x30);
        unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
        unaff_x24 = *(long *)((long)register0x00000008 + -0x40);
        unaff_x23 = *(long *)((long)register0x00000008 + -0x38);
        goto code_r0x000100de6690;
      case 5:
        if (*(long *)(param_1 + 0xe) != 0) {
          _free(*(undefined8 *)(param_1 + 0x10));
        }
        if (*(long *)(param_1 + 4) == 0) goto code_r0x000100e02f78;
        puVar3 = *(ulong **)(param_1 + 8);
        lVar8 = *(long *)(param_1 + 10);
        puVar6 = puVar3;
        goto joined_r0x000100e02b98;
      case 6:
        if (*(long *)(param_1 + 0x16) == -0x8000000000000000 || *(long *)(param_1 + 0x16) == 0) {
          if (*(long *)(param_1 + 0x1c) == -0x8000000000000000 || *(long *)(param_1 + 0x1c) == 0)
          goto code_r0x000100e02d54;
code_r0x000100e02f30:
          _free(*(undefined8 *)(param_1 + 0x1e));
          lVar8 = *(long *)(param_1 + 4);
        }
        else {
          _free(*(undefined8 *)(param_1 + 0x18));
          if (*(long *)(param_1 + 0x1c) != -0x8000000000000000 && *(long *)(param_1 + 0x1c) != 0)
          goto code_r0x000100e02f30;
code_r0x000100e02d54:
          lVar8 = *(long *)(param_1 + 4);
        }
        if (lVar8 != 0) {
          uVar5 = *(undefined8 *)(param_1 + 6);
          goto code_r0x000100e02f44;
        }
        break;
      case 7:
        if (*(long *)(param_1 + 0xe) != 0) {
          _free(*(undefined8 *)(param_1 + 0x10));
        }
        if (*(long *)(param_1 + 0x14) == -0x8000000000000000 || *(long *)(param_1 + 0x14) == 0) {
          lVar8 = *(long *)(param_1 + 4);
        }
        else {
          _free(*(undefined8 *)(param_1 + 0x16));
          lVar8 = *(long *)(param_1 + 4);
        }
        if (lVar8 != 0) {
          puVar3 = *(ulong **)(param_1 + 8);
          lVar8 = *(long *)(param_1 + 10);
          puVar6 = puVar3;
          goto joined_r0x000100e02d90;
        }
code_r0x000100e02f78:
        if (*(long *)(param_1 + 6) == 0) {
          return;
        }
        puVar3 = *(ulong **)(param_1 + 8);
        goto code_r0x000108aa97c4;
      case 8:
        if (*(long *)(param_1 + 0x16) != -0x8000000000000000 && *(long *)(param_1 + 0x16) != 0) {
          _free(*(undefined8 *)(param_1 + 0x18));
        }
        if (*(long *)(param_1 + 4) != 0) {
          _free(*(undefined8 *)(param_1 + 6));
        }
        if (*(long *)(param_1 + 10) != 0) {
          _free(*(undefined8 *)(param_1 + 0xc));
        }
        puVar3 = *(ulong **)(param_1 + 0x12);
        lVar8 = *(long *)(param_1 + 0x14) + 1;
        puVar6 = puVar3;
        while (lVar8 = lVar8 + -1, lVar8 != 0) {
          FUN_100de6690(puVar6);
          puVar6 = puVar6 + 9;
        }
        lVar8 = *(long *)(param_1 + 0x10);
        goto joined_r0x000100e02e88;
      case 9:
        if (*(long *)(param_1 + 0x12) == -0x8000000000000000 || *(long *)(param_1 + 0x12) == 0) {
          if (*(long *)(param_1 + 0x18) == -0x8000000000000000 || *(long *)(param_1 + 0x18) == 0)
          goto code_r0x000100e02e14;
code_r0x000100e02fb4:
          _free(*(undefined8 *)(param_1 + 0x1a));
          lVar8 = *(long *)(param_1 + 4);
        }
        else {
          _free(*(undefined8 *)(param_1 + 0x14));
          if (*(long *)(param_1 + 0x18) != -0x8000000000000000 && *(long *)(param_1 + 0x18) != 0)
          goto code_r0x000100e02fb4;
code_r0x000100e02e14:
          lVar8 = *(long *)(param_1 + 4);
        }
        if (lVar8 == 4) {
          return;
        }
        plVar16 = (long *)(param_1 + 4);
        uVar5 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar12 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar11 = *(undefined8 *)((long)register0x00000008 + -0x18);
        unaff_x22 = *(int **)((long)register0x00000008 + -0x30);
        unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
        goto FUN_100e0c988;
      case 10:
        if (*(long *)(param_1 + 4) != 0) {
          _free(*(undefined8 *)(param_1 + 6));
        }
        if (*(long *)(param_1 + 10) != 0) {
          _free(*(undefined8 *)(param_1 + 0xc));
        }
        if (*(long *)(param_1 + 0x16) != -0x8000000000000000 && *(long *)(param_1 + 0x16) != 0) {
          uVar5 = *(undefined8 *)(param_1 + 0x18);
          goto code_r0x000100e02f54;
        }
        goto code_r0x000100e02f58;
      case 0xb:
        if (*(long *)(param_1 + 4) == 0) {
          return;
        }
        goto code_r0x000100e02bf8;
      default:
        return;
      case 0xd:
        if (*(long *)(param_1 + 4) == -0x8000000000000000 || *(long *)(param_1 + 4) == 0) {
          return;
        }
code_r0x000100e02bf8:
        puVar3 = *(ulong **)(param_1 + 6);
        goto code_r0x000108aa97c4;
      }
      if (*(long *)(param_1 + 10) != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0xc);
code_r0x000100e02f54:
        _free(uVar5);
      }
code_r0x000100e02f58:
      if (*(long *)(param_1 + 0x10) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 0x12);
      break;
    case 0x38:
    case 0x39:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      puVar3 = (ulong *)(param_1 + 8);
      *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      uVar9 = *puVar3 ^ 0x8000000000000000;
      if (-1 < (long)*puVar3) {
        uVar9 = 9;
      }
      switch(uVar9) {
      case 0:
        if (*(long *)(param_1 + 10) != 0) {
          _free(*(undefined8 *)(param_1 + 0xc));
        }
        puVar3 = *(ulong **)(param_1 + 0x12);
        puVar6 = puVar3;
        for (lVar8 = *(long *)(param_1 + 0x14); lVar8 != 0; lVar8 = lVar8 + -1) {
          FUN_100e06c08(puVar6);
          puVar6 = puVar6 + 7;
        }
code_r0x000100df5d10:
        if (*(long *)(param_1 + 0x10) == 0) {
          return;
        }
        break;
      case 1:
        if (*(long *)(param_1 + 10) != 0) {
          _free(*(undefined8 *)(param_1 + 0xc));
        }
        puVar3 = *(ulong **)(param_1 + 0x12);
        lVar8 = *(long *)(param_1 + 0x14);
        if (lVar8 != 0) {
          puVar6 = puVar3 + 4;
          do {
            if (puVar6[-4] != 0) {
              _free(puVar6[-3]);
            }
            if (puVar6[-1] != 0) {
              _free(*puVar6);
            }
            puVar6 = puVar6 + 6;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        goto code_r0x000100df5d10;
      case 2:
        if (*(long *)(param_1 + 10) != 0) {
          _free(*(undefined8 *)(param_1 + 0xc));
        }
        lVar8 = *(long *)(param_1 + 0x12);
        lVar14 = *(long *)(param_1 + 0x14);
        if (lVar14 != 0) {
          puVar17 = (undefined8 *)(lVar8 + 8);
          do {
            if (puVar17[-1] != 0) {
              _free(*puVar17);
            }
            puVar17 = puVar17 + 3;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          _free(lVar8);
        }
        plVar16 = (long *)(param_1 + 0x16);
        if (*plVar16 == -0x8000000000000000) {
          return;
        }
        uVar5 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar12 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar11 = *(undefined8 *)((long)register0x00000008 + -0x18);
        unaff_x22 = *(int **)((long)register0x00000008 + -0x30);
        unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
FUN_100e24ac8:
        *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x20) = uVar13;
        *(undefined8 *)((long)register0x00000008 + -0x18) = uVar11;
        *(undefined8 *)((long)register0x00000008 + -0x10) = uVar5;
        *(undefined8 *)((long)register0x00000008 + -8) = uVar12;
        lVar8 = plVar16[1];
        lVar14 = plVar16[2];
        if (lVar14 != 0) {
          puVar17 = (undefined8 *)(lVar8 + 0x20);
          do {
            if (puVar17[-4] != 0) {
              _free(puVar17[-3]);
            }
            if (puVar17[-1] != 0) {
              _free(*puVar17);
            }
            puVar17 = puVar17 + 7;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        if (*plVar16 != 0) {
          _free(lVar8);
        }
        puVar3 = (ulong *)plVar16[4];
        lVar8 = plVar16[5];
        if (lVar8 != 0) {
          puVar6 = puVar3 + 1;
          do {
            if (puVar6[-1] != 0) {
              _free(*puVar6);
            }
            puVar6 = puVar6 + 3;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        if (plVar16[3] == 0) {
          return;
        }
        break;
      case 3:
      case 6:
        if (*(long *)(param_1 + 10) != 0) {
          _free(*(undefined8 *)(param_1 + 0xc));
        }
        if (*(long *)(param_1 + 0x10) == 0) {
          return;
        }
        puVar3 = *(ulong **)(param_1 + 0x12);
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
        if (*(long *)(param_1 + 10) != 0) {
          _free(*(undefined8 *)(param_1 + 0xc));
        }
        lVar8 = *(long *)(param_1 + 0x12);
        lVar14 = *(long *)(param_1 + 0x14);
        if (lVar14 != 0) {
          puVar17 = (undefined8 *)(lVar8 + 8);
          do {
            if (puVar17[-1] != 0) {
              _free(*puVar17);
            }
            puVar17 = puVar17 + 3;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          _free(lVar8);
        }
        puVar3 = *(ulong **)(param_1 + 0x18);
        lVar8 = *(long *)(param_1 + 0x1a);
        if (lVar8 != 0) {
          puVar6 = puVar3 + 1;
          do {
            if (puVar6[-1] != 0) {
              _free(*puVar6);
            }
            puVar6 = puVar6 + 3;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        if (*(long *)(param_1 + 0x16) == 0) {
          return;
        }
        break;
      case 5:
        if (*(long *)(param_1 + 0x18) != 0) {
          _free(*(undefined8 *)(param_1 + 0x1a));
        }
        if (*(long *)(param_1 + 0x1e) != 0) {
          _free(*(undefined8 *)(param_1 + 0x20));
        }
        plVar16 = (long *)(param_1 + 10);
        uVar5 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar12 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar11 = *(undefined8 *)((long)register0x00000008 + -0x18);
        unaff_x22 = *(int **)((long)register0x00000008 + -0x30);
        unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
        goto FUN_100e0c988;
      case 7:
        plVar16 = (long *)(param_1 + 10);
        unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
        unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
        unaff_x20 = *(int **)((long)register0x00000008 + -0x20);
        unaff_x19 = *(long **)((long)register0x00000008 + -0x18);
        goto DAT_100e17134;
      case 8:
        if (*(long *)(param_1 + 10) != 0) {
          _free(*(undefined8 *)(param_1 + 0xc));
        }
        FUN_100cdf624(param_1 + 0x1c);
        if (*(long *)(param_1 + 0x10) == -0x8000000000000000 || *(long *)(param_1 + 0x10) == 0) {
          lVar8 = *(long *)(param_1 + 0x16);
        }
        else {
          _free(*(undefined8 *)(param_1 + 0x12));
          lVar8 = *(long *)(param_1 + 0x16);
        }
        if (lVar8 == -0x8000000000000000) {
          return;
        }
        if (lVar8 == 0) {
          return;
        }
        puVar3 = *(ulong **)(param_1 + 0x18);
        break;
      case 9:
        uVar5 = *(undefined8 *)((long)register0x00000008 + -0x30);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x28);
        *(undefined8 *)((long)register0x00000008 + -0x30) = uVar5;
        *(undefined8 *)((long)register0x00000008 + -0x28) = uVar13;
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        puVar20 = (undefined1 *)((long)register0x00000008 + -0x10);
        if (*puVar3 != 0) {
          _free(*(undefined8 *)(param_1 + 10));
        }
        if (*(long *)(param_1 + 0xe) != 0) {
          _free(*(undefined8 *)(param_1 + 0x10));
        }
        if (*(long *)(param_1 + 0x14) != 0) {
          _free(*(undefined8 *)(param_1 + 0x16));
        }
        FUN_100de6690(param_1 + 0x58);
        uVar12 = 0x8000000000000000;
        if ((*(long *)(param_1 + 0x1a) != -0x8000000000000000) && (*(long *)(param_1 + 0x1a) != 0))
        {
          _free(*(undefined8 *)(param_1 + 0x1c));
        }
        if ((*(long *)(param_1 + 0x20) != -0x8000000000000000) && (*(long *)(param_1 + 0x20) != 0))
        {
          _free(*(undefined8 *)(param_1 + 0x22));
        }
        plVar16 = (long *)(param_1 + 0x26);
        if (*plVar16 != -0x8000000000000000) {
          puVar21 = &UNK_100e09988;
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
          goto SUB_100e00868;
        }
        if ((*(ulong *)(param_1 + 0x52) & 0x7fffffffffffffff) == 0) {
          return;
        }
        puVar3 = *(ulong **)(param_1 + 0x54);
        break;
      default:
        if (*(long *)(param_1 + 10) == 0) {
          return;
        }
        puVar3 = *(ulong **)(param_1 + 0xc);
      }
      break;
    case 0x3a:
    case 0x3b:
      if (*(long *)(param_1 + 0x28) != -0x8000000000000000 && *(long *)(param_1 + 0x28) != 0) {
        *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        _free(*(undefined8 *)(param_1 + 0x2a));
        unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
        unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
        unaff_x20 = *(int **)((long)register0x00000008 + -0x20);
        unaff_x19 = *(long **)((long)register0x00000008 + -0x18);
      }
      *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 10) != 0) {
        _free(*(undefined8 *)(param_1 + 0xc));
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        _free(*(undefined8 *)(param_1 + 0x12));
      }
      if (*(long *)(param_1 + 0x1c) == -0x8000000000000000 || *(long *)(param_1 + 0x1c) == 0) {
        puVar3 = *(ulong **)(param_1 + 0x18);
        lVar8 = *(long *)(param_1 + 0x1a);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x1e));
        puVar3 = *(ulong **)(param_1 + 0x18);
        lVar8 = *(long *)(param_1 + 0x1a);
      }
      if (lVar8 != 0) {
        puVar6 = puVar3 + 1;
        do {
          if (puVar6[-1] != 0) {
            _free(*puVar6);
          }
          puVar6 = puVar6 + 4;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      if (*(long *)(param_1 + 0x16) == 0) {
        return;
      }
      break;
    case 0x3c:
    case 0x3d:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) != 0) {
        _free(*(undefined8 *)(param_1 + 10));
      }
      if (*(long *)(param_1 + 0xe) != 0) {
        _free(*(undefined8 *)(param_1 + 0x10));
      }
      if (*(long *)(param_1 + 0x14) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 0x16);
      break;
    case 0x3e:
    case 0x3f:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) != 0) {
        _free(*(undefined8 *)(param_1 + 10));
      }
      if (*(long *)(param_1 + 0xe) != 0) {
        _free(*(undefined8 *)(param_1 + 0x10));
      }
      if (*(long *)(param_1 + 0x14) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 0x16);
      break;
    case 0x40:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) != 0) {
        _free(*(undefined8 *)(param_1 + 10));
      }
      if (*(long *)(param_1 + 0xe) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 0x10);
      break;
    case 0x41:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 10) != 0) {
        _free(*(undefined8 *)(param_1 + 0xc));
      }
      if (*(long *)(param_1 + 0x1c) == -0x8000000000000000 || *(long *)(param_1 + 0x1c) == 0) {
        if (*(long *)(param_1 + 0x22) == -0x8000000000000000 || *(long *)(param_1 + 0x22) == 0)
        goto LAB_100e2de44;
LAB_100e2dec0:
        _free(*(undefined8 *)(param_1 + 0x24));
        lVar8 = *(long *)(param_1 + 0x10);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x1e));
        if (*(long *)(param_1 + 0x22) != -0x8000000000000000 && *(long *)(param_1 + 0x22) != 0)
        goto LAB_100e2dec0;
LAB_100e2de44:
        lVar8 = *(long *)(param_1 + 0x10);
      }
      if (lVar8 != 0) {
        _free(*(undefined8 *)(param_1 + 0x12));
      }
      if (*(long *)(param_1 + 0x16) != 0) {
        _free(*(undefined8 *)(param_1 + 0x18));
      }
      if (*(long *)(param_1 + 2) == 3) {
        uVar9 = *(ulong *)(param_1 + 4) & 0x7fffffffffffffff;
      }
      else {
        if (*(long *)(param_1 + 2) != 4) {
          return;
        }
        uVar9 = *(ulong *)(param_1 + 4);
      }
      if (uVar9 == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 6);
      break;
    case 0x42:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 10);
      break;
    case 0x43:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 10) != 0) {
        _free(*(undefined8 *)(param_1 + 0xc));
      }
      if (*(long *)(param_1 + 0x16) == -0x8000000000000000 || *(long *)(param_1 + 0x16) == 0) {
        if (*(long *)(param_1 + 0x1c) == -0x8000000000000000 || *(long *)(param_1 + 0x1c) == 0)
        goto LAB_100e41664;
LAB_100e416d0:
        _free(*(undefined8 *)(param_1 + 0x1e));
        lVar8 = *(long *)(param_1 + 0x10);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x18));
        if (*(long *)(param_1 + 0x1c) != -0x8000000000000000 && *(long *)(param_1 + 0x1c) != 0)
        goto LAB_100e416d0;
LAB_100e41664:
        lVar8 = *(long *)(param_1 + 0x10);
      }
      if (lVar8 != 0) {
        _free(*(undefined8 *)(param_1 + 0x12));
      }
      if (*(long *)(param_1 + 2) == 3) {
        uVar9 = *(ulong *)(param_1 + 4) & 0x7fffffffffffffff;
      }
      else {
        if (*(long *)(param_1 + 2) != 4) {
          return;
        }
        uVar9 = *(ulong *)(param_1 + 4);
      }
      if (uVar9 == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 6);
      break;
    case 0x44:
      *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      lVar8 = *(long *)(param_1 + 10);
      lVar14 = *(long *)(param_1 + 0xc);
      if (lVar14 == 0) goto code_r0x000100e2afac;
      puVar17 = (undefined8 *)(lVar8 + 0x20);
      goto code_r0x000100e2af64;
    case 0x45:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      FUN_100e6ca64(param_1 + 8);
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      lVar8 = *(long *)(param_1 + 0x10);
      if (lVar8 == 0) {
        return;
      }
      lVar14 = *(long *)(param_1 + 0x14);
      if (lVar14 == 0) goto LAB_100d1c730;
      plVar16 = *(long **)(param_1 + 0xe);
      plVar15 = plVar16 + 1;
      lVar22 = *plVar16;
      uVar9 = CONCAT17(-(-1 < lVar22),
                       CONCAT16(-(-1 < (char)((ulong)lVar22 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar22 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar22 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar22 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar22 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar22 >> 8)),-(-1 < (char)lVar22)))))))) &
              0x8080808080808080;
      goto joined_r0x000100d1c6d4;
    case 0x46:
      if (*(long *)(param_1 + 2) == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 4);
      break;
    default:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 10) != 0) {
        _free(*(undefined8 *)(param_1 + 0xc));
      }
      if (*(long *)(param_1 + 0x10) == -0x8000000000000000 || *(long *)(param_1 + 0x10) == 0) {
        if (*(long *)(param_1 + 0x16) == -0x8000000000000000 || *(long *)(param_1 + 0x16) == 0)
        goto LAB_100e1f094;
LAB_100e1f0d8:
        _free(*(undefined8 *)(param_1 + 0x18));
        lVar8 = *(long *)(param_1 + 2);
        if (lVar8 == 3) goto LAB_100e1f0ec;
LAB_100e1f0a0:
        if (lVar8 != 4) {
          return;
        }
        uVar9 = *(ulong *)(param_1 + 4);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x12));
        if (*(long *)(param_1 + 0x16) != -0x8000000000000000 && *(long *)(param_1 + 0x16) != 0)
        goto LAB_100e1f0d8;
LAB_100e1f094:
        lVar8 = *(long *)(param_1 + 2);
        if (lVar8 != 3) goto LAB_100e1f0a0;
LAB_100e1f0ec:
        uVar9 = *(ulong *)(param_1 + 4) & 0x7fffffffffffffff;
      }
      if (uVar9 == 0) {
        return;
      }
      puVar3 = *(ulong **)(param_1 + 6);
      break;
    case 0x48:
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(long *)(param_1 + 2) != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) == -0x8000000000000000 || *(long *)(param_1 + 8) == 0) {
        if (*(long *)(param_1 + 0xe) == -0x8000000000000000 || *(long *)(param_1 + 0xe) == 0) {
          return;
        }
      }
      else {
        _free(*(undefined8 *)(param_1 + 10));
        if (*(long *)(param_1 + 0xe) == -0x8000000000000000 || *(long *)(param_1 + 0xe) == 0) {
          return;
        }
      }
      puVar3 = *(ulong **)(param_1 + 0x10);
    }
  }
  goto code_r0x000108aa97c4;
joined_r0x000100d1c6d4:
  do {
    while (uVar9 == 0) {
      lVar22 = *plVar15;
      plVar16 = plVar16 + -0x30;
      plVar15 = plVar15 + 1;
      uVar9 = CONCAT17(-(-1 < lVar22),
                       CONCAT16(-(-1 < (char)((ulong)lVar22 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar22 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar22 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar22 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar22 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar22 >> 8)),-(-1 < (char)lVar22)))))))) &
              0x8080808080808080;
    }
    uVar10 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
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
    uVar9 = uVar9 - 1 & uVar9;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
LAB_100d1c730:
  if (lVar8 * 0x31 == -0x39) {
    return;
  }
  puVar3 = (ulong *)(*(long *)(param_1 + 0xe) + lVar8 * -0x30 + -0x30);
  goto code_r0x000108aa97c4;
code_r0x000100e2af64:
  do {
    if (puVar17[-4] == -0x8000000000000000 || puVar17[-4] == 0) {
      if (puVar17[-1] != -0x8000000000000000 && puVar17[-1] != 0) {
code_r0x000100e2afa0:
        _free(*puVar17);
      }
    }
    else {
      _free(puVar17[-3]);
      if (puVar17[-1] != -0x8000000000000000 && puVar17[-1] != 0) goto code_r0x000100e2afa0;
    }
    puVar17 = puVar17 + 8;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
code_r0x000100e2afac:
  if (*(long *)(param_1 + 8) != 0) {
    _free(lVar8);
  }
  if (*(long *)(param_1 + 0xe) == 0) {
    return;
  }
  puVar3 = *(ulong **)(param_1 + 0x10);
  goto code_r0x000108aa97c4;
joined_r0x000100e02d90:
  if (lVar8 == 0) goto code_r0x000100e02de4;
  uVar10 = *puVar6;
  uVar9 = uVar10 ^ 0x8000000000000000;
  if (-1 < (long)uVar10) {
    uVar9 = 1;
  }
  if ((uVar9 == 0) || (uVar9 != 1)) {
    if (puVar6[1] != 0) {
      lVar14 = 0x10;
      goto code_r0x000100e02da4;
    }
  }
  else if (uVar10 != 0) {
    lVar14 = 8;
code_r0x000100e02da4:
    _free(*(undefined8 *)((long)puVar6 + lVar14));
  }
  puVar6 = puVar6 + 4;
  lVar8 = lVar8 + -1;
  goto joined_r0x000100e02d90;
joined_r0x000100e02b98:
  if (lVar8 == 0) goto code_r0x000100e02de4;
  uVar10 = *puVar6;
  uVar9 = uVar10 ^ 0x8000000000000000;
  if (-1 < (long)uVar10) {
    uVar9 = 1;
  }
  if ((uVar9 == 0) || (uVar9 != 1)) {
    if (puVar6[1] != 0) {
      lVar14 = 0x10;
      goto code_r0x000100e02ba4;
    }
  }
  else if (uVar10 != 0) {
    lVar14 = 8;
code_r0x000100e02ba4:
    _free(*(undefined8 *)((long)puVar6 + lVar14));
  }
  puVar6 = puVar6 + 4;
  lVar8 = lVar8 + -1;
  goto joined_r0x000100e02b98;
code_r0x000100e02de4:
  lVar8 = *(long *)(param_1 + 6);
  goto joined_r0x000100e02e88;
joined_r0x000100e02a9c:
  if (lVar8 == 0) goto code_r0x000100e02c48;
  uVar10 = *puVar6;
  uVar9 = uVar10 ^ 0x8000000000000000;
  if (-1 < (long)uVar10) {
    uVar9 = 1;
  }
  if ((uVar9 == 0) || (uVar9 != 1)) {
    if (puVar6[1] != 0) {
      lVar14 = 0x10;
      goto code_r0x000100e02ab0;
    }
  }
  else if (uVar10 != 0) {
    lVar14 = 8;
code_r0x000100e02ab0:
    _free(*(undefined8 *)((long)puVar6 + lVar14));
  }
  puVar6 = puVar6 + 4;
  lVar8 = lVar8 + -1;
  goto joined_r0x000100e02a9c;
code_r0x000100e02c48:
  lVar8 = *(long *)(param_1 + 10);
joined_r0x000100e02e88:
  if (lVar8 == 0) {
    return;
  }
  goto code_r0x000108aa97c4;
joined_r0x000100e797a0:
  if (lVar8 == 0) goto LAB_100e79848;
  uVar9 = *puVar6;
  lVar14 = uVar9 + 0x7ffffffffffffffb;
  if (uVar9 < 0x8000000000000005) {
    lVar14 = 2;
  }
  if ((lVar14 == 0) || (lVar14 == 1)) {
    uVar9 = puVar6[1];
joined_r0x000100e797c0:
    if (uVar9 != 0) {
      lVar14 = 0x10;
LAB_100e797c8:
      _free(*(undefined8 *)((long)puVar6 + lVar14));
    }
  }
  else {
    uVar10 = uVar9 ^ 0x8000000000000000;
    if (-1 < (long)uVar9) {
      uVar10 = 5;
    }
    if (uVar10 < 5) {
      if (uVar10 == 2) {
        uVar9 = puVar6[1] & 0x7fffffffffffffff;
        goto joined_r0x000100e797c0;
      }
    }
    else {
      if (uVar9 != 0) {
        _free(puVar6[1]);
      }
      if ((puVar6[3] & 0x7fffffffffffffff) != 0) {
        lVar14 = 0x20;
        goto LAB_100e797c8;
      }
    }
  }
  puVar6 = puVar6 + 7;
  lVar8 = lVar8 + -1;
  goto joined_r0x000100e797a0;
LAB_100e79848:
  if (*(long *)(param_1 + 0x26) == 0) {
    return;
  }
  goto code_r0x000108aa97c4;
code_r0x000100dfc85c:
  if (*(long *)(param_1 + 2) == 0) {
code_r0x000100dfc770:
    return;
  }
  puVar3 = *(ulong **)(param_1 + 4);
  goto code_r0x000108aa97c4;
joined_r0x000100cdf69c:
  do {
    while (uVar9 == 0) {
      lVar22 = *plVar18;
      plVar15 = plVar15 + -0x48;
      plVar18 = plVar18 + 1;
      uVar9 = CONCAT17(-(-1 < lVar22),
                       CONCAT16(-(-1 < (char)((ulong)lVar22 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar22 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar22 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar22 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar22 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar22 >> 8)),-(-1 < (char)lVar22)))))))) &
              0x8080808080808080;
    }
    uVar10 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    iVar1 = (int)((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3);
    if (plVar15[(long)-iVar1 * 9 + -9] != 0) {
      _free(plVar15[(long)-iVar1 * 9 + -8]);
    }
    uVar7 = plVar15[(long)-iVar1 * 9 + -6];
    uVar10 = uVar7 ^ 0x8000000000000000;
    if (-1 < (long)uVar7) {
      uVar10 = 2;
    }
    if ((uVar10 == 0) || (uVar10 == 1)) {
      if (plVar15[(long)-iVar1 * 9 + -5] != 0) {
        lVar22 = 0x10;
        goto LAB_100cdf684;
      }
    }
    else {
      if (uVar7 != 0) {
        _free(plVar15[(long)-iVar1 * 9 + -5]);
      }
      if ((plVar15[(long)-iVar1 * 9 + -3] & 0x7fffffffffffffffU) != 0) {
        lVar22 = 0x20;
LAB_100cdf684:
        _free(*(undefined8 *)((long)(plVar15 + (long)-iVar1 * 9 + -6) + lVar22));
      }
    }
    uVar9 = uVar9 - 1 & uVar9;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
LAB_100cdf718:
  if (lVar8 * 0x49 == -0x51) {
    return;
  }
  puVar3 = (ulong *)(*plVar16 + lVar8 * -0x48 + -0x48);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar3);
  return;
}

