
/* WARNING: Possible PIC construction at 0x0001049a74c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001049a6230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001049a6278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010499e3a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001049a7070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001049a5138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001049a1ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001049a58c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001049a0c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001049a0e58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001049a0c20) */
/* WARNING: Removing unreachable block (ram,0x0001049a0c30) */
/* WARNING: Removing unreachable block (ram,0x0001049a0c34) */
/* WARNING: Removing unreachable block (ram,0x0001049a0c3c) */
/* WARNING: Removing unreachable block (ram,0x0001049a0c48) */
/* WARNING: Removing unreachable block (ram,0x0001049a0c4c) */
/* WARNING: Removing unreachable block (ram,0x0001049a0c54) */
/* WARNING: Removing unreachable block (ram,0x0001049a0c68) */
/* WARNING: Removing unreachable block (ram,0x0001049a0c6c) */
/* WARNING: Removing unreachable block (ram,0x0001049a0c78) */
/* WARNING: Removing unreachable block (ram,0x0001049a7074) */
/* WARNING: Removing unreachable block (ram,0x0001049a707c) */
/* WARNING: Removing unreachable block (ram,0x0001049a7090) */
/* WARNING: Removing unreachable block (ram,0x0001049a7098) */
/* WARNING: Removing unreachable block (ram,0x0001049a7084) */
/* WARNING: Removing unreachable block (ram,0x0001049a70a4) */
/* WARNING: Removing unreachable block (ram,0x0001049a70ac) */
/* WARNING: Removing unreachable block (ram,0x0001049a70b4) */
/* WARNING: Removing unreachable block (ram,0x0001049a70c0) */
/* WARNING: Removing unreachable block (ram,0x0001049a70c4) */
/* WARNING: Removing unreachable block (ram,0x0001049a70ec) */
/* WARNING: Removing unreachable block (ram,0x0001049a70c8) */
/* WARNING: Removing unreachable block (ram,0x00010499e3a8) */
/* WARNING: Removing unreachable block (ram,0x0001049a74cc) */
/* WARNING: Removing unreachable block (ram,0x0001049a74d8) */
/* WARNING: Removing unreachable block (ram,0x0001049a74dc) */
/* WARNING: Removing unreachable block (ram,0x0001049a74f8) */
/* WARNING: Removing unreachable block (ram,0x0001049a74e0) */
/* WARNING: Removing unreachable block (ram,0x0001049a750c) */
/* WARNING: Removing unreachable block (ram,0x0001049a74ec) */
/* WARNING: Removing unreachable block (ram,0x0001049a0e5c) */
/* WARNING: Removing unreachable block (ram,0x0001049a0e68) */
/* WARNING: Removing unreachable block (ram,0x0001049a0e6c) */
/* WARNING: Removing unreachable block (ram,0x0001049a0e80) */
/* WARNING: Removing unreachable block (ram,0x0001049a0e70) */
/* WARNING: Removing unreachable block (ram,0x0001049a0e94) */
/* WARNING: Removing unreachable block (ram,0x0001049a0e98) */
/* WARNING: Removing unreachable block (ram,0x0001049a0e7c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1049a1460(undefined4 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *puVar10;
  long lVar11;
  ulong *unaff_x21;
  long *plVar12;
  long *plVar13;
  ulong *unaff_x22;
  undefined8 *puVar14;
  ulong *puVar15;
  long *plVar16;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  long lVar17;
  
  puVar2 = (undefined1 *)register0x00000008;
  switch(*param_1) {
  case 0:
    if (*(long *)(param_1 + 2) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 4);
    break;
  case 1:
    if (*(long *)(param_1 + 2) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 4);
    break;
  case 2:
    if (*(long *)(param_1 + 2) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 4);
    break;
  case 3:
    if ((*(ulong *)(param_1 + 2) & 0x7fffffffffffffff) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 4);
    break;
  case 4:
    uVar9 = *(ulong *)(param_1 + 2);
    uVar8 = uVar9 ^ 0x8000000000000000;
    if (-1 < (long)uVar9) {
      uVar8 = 0xc;
    }
    switch(uVar8) {
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
      uVar8 = *(ulong *)(param_1 + 4) & 0x7fffffffffffffff;
      goto joined_r0x0001049a78c4;
    default:
      uVar8 = *(ulong *)(param_1 + 4);
joined_r0x0001049a78c4:
      if (uVar8 == 0) {
        return;
      }
      unaff_x19 = *(ulong **)(param_1 + 6);
      goto code_r0x000108aa97c4;
    case 10:
      puVar15 = (ulong *)(param_1 + 4);
      goto SUB_1049a01f8;
    case 0xc:
      if (uVar9 != 0) {
        _free(*(undefined8 *)(param_1 + 4));
      }
      if (*(long *)(param_1 + 8) != 0) {
        _free(*(undefined8 *)(param_1 + 10));
      }
      if (*(long *)(param_1 + 0xe) != 0) {
        _free(*(undefined8 *)(param_1 + 0x10));
      }
      unaff_x19 = *(ulong **)(param_1 + 0x16);
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 != 0) {
        puVar15 = unaff_x19 + 4;
        do {
          if (puVar15[-4] != 0) {
            _free(puVar15[-3]);
          }
          if (puVar15[-1] != 0) {
            _free(*puVar15);
          }
          puVar15 = puVar15 + 6;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
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
    unaff_x19 = *(ulong **)(param_1 + 0xc);
    break;
  case 5:
    if ((*(ulong *)(param_1 + 2) & 0x7fffffffffffffff) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 4);
    break;
  case 6:
    if (*(long *)(param_1 + 2) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 4);
    break;
  case 7:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 10);
    break;
  case 8:
  case 9:
  case 10:
  case 0x34:
    return;
  case 0xb:
    if (*(long *)(param_1 + 10) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 0xc);
    break;
  case 0xc:
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
    uVar8 = uVar9;
    if (uVar9 < 0x8000000000000001) {
      uVar8 = 0;
    }
    if ((uVar8 & 0x7fffffffffffffff) == 0 && uVar9 != 0x8000000000000000) {
      puVar4 = *(ulong **)(param_1 + 0x38);
      puVar15 = puVar4;
      for (lVar7 = *(long *)(param_1 + 0x3a); lVar7 != 0; lVar7 = lVar7 + -1) {
        uVar8 = *puVar15;
        lVar11 = uVar8 + 0x7ffffffffffffffb;
        if (uVar8 < 0x8000000000000005) {
          lVar11 = 2;
        }
        if ((lVar11 == 0) || (lVar11 == 1)) {
          uVar8 = puVar15[1];
joined_r0x0001049a6ec0:
          if (uVar8 != 0) {
            lVar11 = 0x10;
code_r0x0001049a6ec8:
            _free(*(undefined8 *)((long)puVar15 + lVar11));
          }
        }
        else {
          uVar6 = uVar8 ^ 0x8000000000000000;
          if (-1 < (long)uVar8) {
            uVar6 = 5;
          }
          if (uVar6 < 5) {
            if (uVar6 == 2) {
              uVar8 = puVar15[1] & 0x7fffffffffffffff;
              goto joined_r0x0001049a6ec0;
            }
          }
          else {
            if (uVar8 != 0) {
              _free(puVar15[1]);
            }
            if ((puVar15[3] & 0x7fffffffffffffff) != 0) {
              lVar11 = 0x20;
              goto code_r0x0001049a6ec8;
            }
          }
        }
        puVar15 = puVar15 + 7;
      }
      if (uVar9 != 0) {
        _free(puVar4);
      }
    }
    if (*(long *)(param_1 + 0x2a) != -0x8000000000000000) {
      if (*(long *)(param_1 + 0x2a) != 0) {
        _free(*(undefined8 *)(param_1 + 0x2c));
      }
      if ((*(long *)(param_1 + 0x30) != -0x8000000000000000) && (*(long *)(param_1 + 0x30) != 0)) {
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
    unaff_x19 = *(ulong **)(param_1 + 0x1c);
    break;
  case 0xd:
    if (*(long *)(param_1 + 0xe) != 0) {
      _free(*(undefined8 *)(param_1 + 0x10));
    }
    if (*(long *)(param_1 + 0x14) == -0x8000000000000000 || *(long *)(param_1 + 0x14) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 0x16);
    break;
  case 0xe:
    if (*(long *)(param_1 + 0x1a) == 3) {
      return;
    }
    if (*(long *)(param_1 + 0x2e) == -0x8000000000000000 || *(long *)(param_1 + 0x2e) == 0) {
      if (*(long *)(param_1 + 0x34) != -0x8000000000000000 && *(long *)(param_1 + 0x34) != 0) {
code_r0x0001049a3ed8:
        _free(*(undefined8 *)(param_1 + 0x36));
      }
    }
    else {
      _free(*(undefined8 *)(param_1 + 0x30));
      if (*(long *)(param_1 + 0x34) != -0x8000000000000000 && *(long *)(param_1 + 0x34) != 0)
      goto code_r0x0001049a3ed8;
    }
    if (*(long *)(param_1 + 0x3a) < -0x7ffffffffffffffe || *(long *)(param_1 + 0x3a) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 0x3c);
    break;
  case 0xf:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    plVar13 = (long *)(param_1 + 8);
SUB_1049a945c:
    lVar7 = *plVar13;
    if (lVar7 != -0x8000000000000000) {
      lVar11 = plVar13[1];
      lVar17 = plVar13[2];
      if (lVar17 != 0) {
        puVar14 = (undefined8 *)(lVar11 + 0x20);
        do {
          if (puVar14[-4] != 0) {
            _free(puVar14[-3]);
          }
          if (puVar14[-1] != 0) {
            _free(*puVar14);
          }
          puVar14 = puVar14 + 7;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      if (lVar7 != 0) {
        _free(lVar11);
      }
      unaff_x19 = (ulong *)plVar13[4];
      lVar7 = plVar13[5];
      if (lVar7 != 0) {
        puVar15 = unaff_x19 + 1;
        do {
          if (puVar15[-1] != 0) {
            _free(*puVar15);
          }
          puVar15 = puVar15 + 3;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (plVar13[3] != 0) break;
    }
    return;
  case 0x10:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    lVar7 = *(long *)(param_1 + 0x20);
    if (lVar7 != -0x8000000000000000) {
      lVar11 = *(long *)(param_1 + 0x22);
      lVar17 = *(long *)(param_1 + 0x24);
      if (lVar17 != 0) {
        puVar14 = (undefined8 *)(lVar11 + 8);
        do {
          if (puVar14[-1] != 0) {
            _free(*puVar14);
          }
          puVar14 = puVar14 + 3;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      if (lVar7 != 0) {
        _free(lVar11);
      }
    }
    if (*(long *)(param_1 + 8) != 0) {
      _free(*(undefined8 *)(param_1 + 10));
    }
    lVar7 = *(long *)(param_1 + 0x10);
    lVar11 = *(long *)(param_1 + 0x12);
    if (lVar11 != 0) {
      puVar14 = (undefined8 *)(lVar7 + 8);
      do {
        if (puVar14[-1] != 0) {
          _free(*puVar14);
        }
        puVar14 = puVar14 + 3;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (*(long *)(param_1 + 0xe) != 0) {
      _free(lVar7);
    }
    if (*(long *)(param_1 + 0x14) != 0) {
      _free(*(undefined8 *)(param_1 + 0x16));
    }
    unaff_x19 = *(ulong **)(param_1 + 0x1c);
    lVar7 = *(long *)(param_1 + 0x1e);
    if (lVar7 != 0) {
      puVar15 = unaff_x19 + 1;
      do {
        if ((puVar15[-1] & 0x7fffffffffffffff) != 0) {
          _free(*puVar15);
        }
        puVar15 = puVar15 + 5;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*(long *)(param_1 + 0x1a) == 0) {
      return;
    }
    break;
  case 0x11:
    if (*(long *)(param_1 + 2) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 4);
    break;
  case 0x12:
    if (*(long *)(param_1 + 2) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 4);
    break;
  case 0x13:
    if (*(long *)(param_1 + 2) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 4);
    break;
  case 0x14:
    if (*(long *)(param_1 + 0x14) == -0x8000000000000000 || *(long *)(param_1 + 0x14) == 0) {
      lVar7 = *(long *)(param_1 + 2);
    }
    else {
      _free(*(undefined8 *)(param_1 + 0x16));
      lVar7 = *(long *)(param_1 + 2);
    }
    if (lVar7 != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 8) != 0) {
      _free(*(undefined8 *)(param_1 + 10));
    }
    if (*(long *)(param_1 + 0x1a) != -0x8000000000000000 && *(long *)(param_1 + 0x1a) != 0) {
      _free(*(undefined8 *)(param_1 + 0x1c));
    }
    uVar9 = *(ulong *)(param_1 + 0x44);
    uVar8 = uVar9;
    if (uVar9 < 0x8000000000000001) {
      uVar8 = 0;
    }
    if ((uVar8 & 0x7fffffffffffffff) == 0 && uVar9 != 0x8000000000000000) {
      puVar4 = *(ulong **)(param_1 + 0x46);
      puVar15 = puVar4;
      for (lVar7 = *(long *)(param_1 + 0x48); lVar7 != 0; lVar7 = lVar7 + -1) {
        uVar8 = *puVar15;
        lVar11 = uVar8 + 0x7ffffffffffffffb;
        if (uVar8 < 0x8000000000000005) {
          lVar11 = 2;
        }
        if ((lVar11 == 0) || (lVar11 == 1)) {
          uVar8 = puVar15[1];
joined_r0x0001049a5c00:
          if (uVar8 != 0) {
            lVar11 = 0x10;
code_r0x0001049a5c08:
            _free(*(undefined8 *)((long)puVar15 + lVar11));
          }
        }
        else {
          uVar6 = uVar8 ^ 0x8000000000000000;
          if (-1 < (long)uVar8) {
            uVar6 = 5;
          }
          if (uVar6 < 5) {
            if (uVar6 == 2) {
              uVar8 = puVar15[1] & 0x7fffffffffffffff;
              goto joined_r0x0001049a5c00;
            }
          }
          else {
            if (uVar8 != 0) {
              _free(puVar15[1]);
            }
            if ((puVar15[3] & 0x7fffffffffffffff) != 0) {
              lVar11 = 0x20;
              goto code_r0x0001049a5c08;
            }
          }
        }
        puVar15 = puVar15 + 7;
      }
      if (uVar9 != 0) {
        _free(puVar4);
      }
    }
    if (*(long *)(param_1 + 0x20) != -0x8000000000000000) {
      if (*(long *)(param_1 + 0x20) != 0) {
        _free(*(undefined8 *)(param_1 + 0x22));
      }
      if ((*(long *)(param_1 + 0x26) != -0x8000000000000000) && (*(long *)(param_1 + 0x26) != 0)) {
        _free(*(undefined8 *)(param_1 + 0x28));
      }
    }
    if (*(long *)(param_1 + 0xe) != 0) {
      _free(*(undefined8 *)(param_1 + 0x10));
    }
    lVar7 = *(long *)(param_1 + 0x2c);
    if (lVar7 != -0x8000000000000000) {
      lVar17 = *(long *)(param_1 + 0x2e);
      lVar11 = *(long *)(param_1 + 0x30) + 1;
      lVar5 = lVar17;
      while (lVar11 = lVar11 + -1, lVar11 != 0) {
        FUN_1049a1460(lVar5);
        lVar5 = lVar5 + 0x1d8;
      }
      if (lVar7 != 0) {
        _free(lVar17);
      }
    }
    if (*(long *)(param_1 + 0x32) != -0x8000000000000000) {
      if (*(long *)(param_1 + 0x32) != 0) {
        _free(*(undefined8 *)(param_1 + 0x34));
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        _free(*(undefined8 *)(param_1 + 0x3a));
      }
    }
    if ((*(ulong *)(param_1 + 0x3e) & 0x7fffffffffffffff) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 0x40);
    break;
  case 0x15:
    if (*(long *)(param_1 + 0x1a) == -0x8000000000000000 || *(long *)(param_1 + 0x1a) == 0) {
      lVar7 = *(long *)(param_1 + 6);
    }
    else {
      _free(*(undefined8 *)(param_1 + 0x1c));
      lVar7 = *(long *)(param_1 + 6);
    }
    if (lVar7 == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 8);
    break;
  case 0x16:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 8) < 1) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 10);
    break;
  case 0x17:
    lVar7 = *(long *)(param_1 + 4);
    lVar11 = *(long *)(param_1 + 6);
    if (lVar11 != 0) {
      puVar14 = (undefined8 *)(lVar7 + 8);
      do {
        if (puVar14[-1] != 0) {
          _free(*puVar14);
        }
        puVar14 = puVar14 + 3;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (*(long *)(param_1 + 2) != 0) {
      _free(lVar7);
    }
    lVar7 = *(long *)(param_1 + 10);
    lVar11 = *(long *)(param_1 + 0xc);
    if (lVar11 != 0) {
      puVar14 = (undefined8 *)(lVar7 + 0x20);
      do {
        if (puVar14[-4] != 0) {
          _free(puVar14[-3]);
        }
        if (puVar14[-1] != 0) {
          _free(*puVar14);
        }
        puVar14 = puVar14 + 6;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (*(long *)(param_1 + 8) != 0) {
      _free(lVar7);
    }
    unaff_x19 = *(ulong **)(param_1 + 0x10);
    lVar7 = *(long *)(param_1 + 0x12);
    if (lVar7 != 0) {
      puVar15 = unaff_x19 + 1;
      do {
        if (puVar15[-1] != 0) {
          _free(*puVar15);
        }
        puVar15 = puVar15 + 3;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*(long *)(param_1 + 0xe) == 0) {
      return;
    }
    break;
  case 0x18:
    unaff_x19 = (ulong *)(param_1 + 2);
    unaff_x29 = &stack0xfffffffffffffff0;
    if (*unaff_x19 != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 8) != 0) {
      _free(*(undefined8 *)(param_1 + 10));
    }
    if (*(long *)(param_1 + 0xe) != 0) {
      _free(*(undefined8 *)(param_1 + 0x10));
    }
    if (*(ulong *)(param_1 + 0x14) == 0x8000000000000005) {
      if ((*(long *)(param_1 + 0x26) != -0x8000000000000000) && (*(long *)(param_1 + 0x26) != 0)) {
        _free(*(undefined8 *)(param_1 + 0x28));
      }
      if ((*(long *)(param_1 + 0x2c) == -0x8000000000000000) || (*(long *)(param_1 + 0x2c) == 0)) {
        return;
      }
      unaff_x19 = *(ulong **)(param_1 + 0x2e);
      break;
    }
    unaff_x30 = &UNK_1049a58c8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar15 = (ulong *)(param_1 + 0x14);
    goto SUB_1049a01f8;
  case 0x19:
    puVar2 = &stack0xfffffffffffffff0;
    if (*(ulong *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 8) != 0) {
      _free(*(undefined8 *)(param_1 + 10));
    }
    if (*(long *)(param_1 + 0xe) != 0) {
      _free(*(undefined8 *)(param_1 + 0x10));
    }
    if (*(ulong *)(param_1 + 0x14) == 0x8000000000000005) {
      if ((*(long *)(param_1 + 0x26) != -0x8000000000000000) && (*(long *)(param_1 + 0x26) != 0)) {
        _free(*(undefined8 *)(param_1 + 0x28));
      }
      if ((*(long *)(param_1 + 0x2c) != -0x8000000000000000) && (*(long *)(param_1 + 0x2c) != 0)) {
        _free(*(undefined8 *)(param_1 + 0x2e));
      }
      puVar4 = (ulong *)(param_1 + 0x32);
      if (*puVar4 == 0x8000000000000000) {
        if (*(long *)(param_1 + 0x34) == 0) {
          return;
        }
        unaff_x19 = *(ulong **)(param_1 + 0x36);
        break;
      }
      puVar2 = &stack0xfffffffffffffff0;
      puVar10 = *(ulong **)(param_1 + 0x34);
      FUN_1049a1190(puVar10,*(undefined8 *)(param_1 + 0x36));
      if (*puVar4 != 0) {
        _free(puVar10);
      }
      if (*(ulong *)(param_1 + 0x38) == 0x8000000000000005) {
        puVar15 = (ulong *)(param_1 + 0x4a);
        if (*(ulong *)(param_1 + 0x4a) == 0x8000000000000005) {
          return;
        }
      }
      else {
        unaff_x30 = (undefined *)0x1049a1ea8;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
        puVar15 = (ulong *)(param_1 + 0x38);
        unaff_x19 = puVar4;
        unaff_x21 = puVar10;
        unaff_x22 = (ulong *)0x8000000000000005;
        unaff_x29 = puVar2;
      }
    }
    else {
      unaff_x30 = &UNK_1049a513c;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      puVar15 = (ulong *)(param_1 + 0x14);
      unaff_x19 = (ulong *)(param_1 + 2);
      unaff_x29 = puVar2;
    }
    goto SUB_1049a01f8;
  case 0x1a:
    if (*(long *)(param_1 + 2) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 4);
    break;
  case 0x1b:
    plVar13 = (long *)(param_1 + 2);
    if (*(long *)(param_1 + 0x10) != 0) {
      _free(*(undefined8 *)(param_1 + 0x12));
    }
    if (*(long *)(param_1 + 0x16) != 0) {
      _free(*(undefined8 *)(param_1 + 0x18));
    }
DAT_1049a36f4:
    lVar7 = *plVar13;
    if (lVar7 < 2) {
      if (lVar7 == 0) {
        if (plVar13[1] == -0x8000000000000000 || plVar13[1] == 0) {
          lVar7 = plVar13[4];
        }
        else {
          _free(plVar13[2]);
          lVar7 = plVar13[4];
        }
        if (lVar7 != -0x8000000000000000) {
          unaff_x19 = (ulong *)plVar13[5];
          lVar11 = plVar13[6];
          if (lVar11 != 0) {
            puVar15 = unaff_x19 + 1;
            do {
              if (puVar15[-1] != 0) {
                _free(*puVar15);
              }
              puVar15 = puVar15 + 3;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
          if (lVar7 != 0) break;
        }
      }
      else if ((plVar13[1] & 0x7fffffffffffffffU) != 0) {
        unaff_x19 = (ulong *)plVar13[2];
        break;
      }
    }
    else if (lVar7 == 2) {
      if (plVar13[1] == -0x8000000000000000 || plVar13[1] == 0) {
        uVar8 = plVar13[4];
      }
      else {
        _free(plVar13[2]);
        uVar8 = plVar13[4];
      }
      if ((uVar8 & 0x7fffffffffffffff) != 0) {
        unaff_x19 = (ulong *)plVar13[5];
        break;
      }
    }
    return;
  case 0x1c:
    if (*(long *)(param_1 + 2) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 4);
    break;
  case 0x1d:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 8) != 0) {
      _free(*(undefined8 *)(param_1 + 10));
    }
    if (*(long *)(param_1 + 0x14) == -0x8000000000000000 || *(long *)(param_1 + 0x14) == 0) {
      lVar7 = *(long *)(param_1 + 0xe);
    }
    else {
      _free(*(undefined8 *)(param_1 + 0x16));
      lVar7 = *(long *)(param_1 + 0xe);
    }
    if (lVar7 != 0) {
      _free(*(undefined8 *)(param_1 + 0x10));
    }
    if ((*(ulong *)(param_1 + 0x1a) & 0x7fffffffffffffff) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 0x1c);
    break;
  case 0x1e:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 0x20) == -0x8000000000000000 || *(long *)(param_1 + 0x20) == 0) {
      lVar7 = *(long *)(param_1 + 8);
    }
    else {
      _free(*(undefined8 *)(param_1 + 0x22));
      lVar7 = *(long *)(param_1 + 8);
    }
    if (lVar7 != 0) {
      _free(*(undefined8 *)(param_1 + 10));
    }
    lVar7 = *(long *)(param_1 + 0x10);
    lVar11 = *(long *)(param_1 + 0x12);
    if (lVar11 != 0) {
      puVar14 = (undefined8 *)(lVar7 + 8);
      do {
        if (puVar14[-1] != 0) {
          _free(*puVar14);
        }
        puVar14 = puVar14 + 3;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (*(long *)(param_1 + 0xe) != 0) {
      _free(lVar7);
    }
    if (*(long *)(param_1 + 0x14) != 0) {
      _free(*(undefined8 *)(param_1 + 0x16));
    }
    FUN_1049a88d0(param_1 + 0x1a);
    if ((*(long *)(param_1 + 0x26) == -0x8000000000000000) || (*(long *)(param_1 + 0x26) == 0)) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 0x28);
    break;
  case 0x1f:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 10);
    break;
  case 0x20:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 8) != 0) {
      _free(*(undefined8 *)(param_1 + 10));
    }
    if (*(long *)(param_1 + 0xe) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 0x10);
    break;
  case 0x21:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 0x38) == -0x8000000000000000 || *(long *)(param_1 + 0x38) == 0) {
      lVar7 = *(long *)(param_1 + 8);
    }
    else {
      _free(*(undefined8 *)(param_1 + 0x3a));
      lVar7 = *(long *)(param_1 + 8);
    }
    if (lVar7 != 0) {
      _free(*(undefined8 *)(param_1 + 10));
    }
    lVar7 = *(long *)(param_1 + 0x10);
    lVar11 = *(long *)(param_1 + 0x12);
    if (lVar11 != 0) {
      puVar14 = (undefined8 *)(lVar7 + 8);
      do {
        if (puVar14[-1] != 0) {
          _free(*puVar14);
        }
        puVar14 = puVar14 + 3;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (*(long *)(param_1 + 0xe) != 0) {
      _free(lVar7);
    }
    if (*(long *)(param_1 + 0x14) != 0) {
      _free(*(undefined8 *)(param_1 + 0x16));
    }
    FUN_1049a88d0(param_1 + 0x1a);
    if ((*(long *)(param_1 + 0x3e) != -0x8000000000000000) && (*(long *)(param_1 + 0x3e) != 0)) {
      _free(*(undefined8 *)(param_1 + 0x40));
    }
    if (*(long *)(param_1 + 0x20) != 0) {
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
    unaff_x19 = *(ulong **)(param_1 + 0x34);
    break;
  case 0x22:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 10);
    break;
  case 0x23:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 0x20) == -0x8000000000000000 || *(long *)(param_1 + 0x20) == 0) {
      lVar7 = *(long *)(param_1 + 8);
    }
    else {
      _free(*(undefined8 *)(param_1 + 0x22));
      lVar7 = *(long *)(param_1 + 8);
    }
    if (lVar7 != 0) {
      _free(*(undefined8 *)(param_1 + 10));
    }
    lVar7 = *(long *)(param_1 + 0x10);
    lVar11 = *(long *)(param_1 + 0x12);
    if (lVar11 != 0) {
      puVar14 = (undefined8 *)(lVar7 + 8);
      do {
        if (puVar14[-1] != 0) {
          _free(*puVar14);
        }
        puVar14 = puVar14 + 3;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (*(long *)(param_1 + 0xe) != 0) {
      _free(lVar7);
    }
    if (*(long *)(param_1 + 0x14) != 0) {
      _free(*(undefined8 *)(param_1 + 0x16));
    }
    if ((*(long *)(param_1 + 0x26) != -0x8000000000000000) && (*(long *)(param_1 + 0x26) != 0)) {
      _free(*(undefined8 *)(param_1 + 0x28));
    }
    if ((*(ulong *)(param_1 + 0x2c) & 0x7fffffffffffffff) == 0) {
      lVar7 = *(long *)(param_1 + 0x34);
    }
    else {
      _free(*(undefined8 *)(param_1 + 0x2e));
      lVar7 = *(long *)(param_1 + 0x34);
    }
    if (lVar7 != -0x8000000000000000) {
      lVar11 = *(long *)(param_1 + 0x36);
      lVar17 = *(long *)(param_1 + 0x38);
      if (lVar17 != 0) {
        puVar14 = (undefined8 *)(lVar11 + 8);
        do {
          if (puVar14[-1] != 0) {
            _free(*puVar14);
          }
          puVar14 = puVar14 + 3;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      if (lVar7 != 0) {
        _free(lVar11);
      }
    }
    lVar7 = *(long *)(param_1 + 0x3a);
    if (lVar7 != -0x8000000000000000) {
      lVar11 = *(long *)(param_1 + 0x3c);
      lVar17 = *(long *)(param_1 + 0x3e);
      if (lVar17 != 0) {
        puVar14 = (undefined8 *)(lVar11 + 8);
        do {
          if (puVar14[-1] != 0) {
            _free(*puVar14);
          }
          puVar14 = puVar14 + 4;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      if (lVar7 != 0) {
        _free(lVar11);
      }
    }
    lVar7 = *(long *)(param_1 + 0x46);
    if (-0x7fffffffffffffff < lVar7) {
      puVar4 = *(ulong **)(param_1 + 0x48);
      puVar15 = puVar4;
      for (lVar11 = *(long *)(param_1 + 0x4a); lVar11 != 0; lVar11 = lVar11 + -1) {
        uVar8 = *puVar15;
        lVar17 = uVar8 + 0x7ffffffffffffffb;
        if (uVar8 < 0x8000000000000005) {
          lVar17 = 2;
        }
        if ((lVar17 == 0) || (lVar17 == 1)) {
          uVar8 = puVar15[1];
joined_r0x0001049a6970:
          if (uVar8 != 0) {
            lVar17 = 0x10;
code_r0x0001049a6978:
            _free(*(undefined8 *)((long)puVar15 + lVar17));
          }
        }
        else {
          uVar9 = uVar8 ^ 0x8000000000000000;
          if (-1 < (long)uVar8) {
            uVar9 = 5;
          }
          if (uVar9 < 5) {
            if (uVar9 == 2) {
              uVar8 = puVar15[1] & 0x7fffffffffffffff;
              goto joined_r0x0001049a6970;
            }
          }
          else {
            if (uVar8 != 0) {
              _free(puVar15[1]);
            }
            if ((puVar15[3] & 0x7fffffffffffffff) != 0) {
              lVar17 = 0x20;
              goto code_r0x0001049a6978;
            }
          }
        }
        puVar15 = puVar15 + 7;
      }
      if (lVar7 != 0) {
        _free(puVar4);
      }
    }
    if (*(long *)(param_1 + 0x40) != -0x8000000000000000) {
      FUN_1049a8448();
    }
    unaff_x19 = *(ulong **)(param_1 + 0x1c);
    puVar15 = unaff_x19;
    for (lVar7 = *(long *)(param_1 + 0x1e); lVar7 != 0; lVar7 = lVar7 + -1) {
      uVar8 = *puVar15;
      if ((long)uVar8 < 2) {
        if (uVar8 == 0) {
          if (puVar15[1] != 0) {
            _free(puVar15[2]);
          }
          if (puVar15[4] != 0) {
            _free(puVar15[5]);
          }
          if (puVar15[7] == 0) goto LAB_1049a8910;
          lVar11 = 0x40;
        }
        else {
          if (puVar15[4] != 0) {
            _free(puVar15[5]);
          }
          uVar8 = puVar15[1] & 0x7fffffffffffffff;
joined_r0x0001049a8900:
          if (uVar8 == 0) goto LAB_1049a8910;
          lVar11 = 0x10;
        }
LAB_1049a8908:
        _free(*(undefined8 *)((long)puVar15 + lVar11));
      }
      else {
        if (uVar8 != 2) {
          uVar8 = puVar15[1];
          goto joined_r0x0001049a8900;
        }
        if (puVar15[7] != 0) {
          _free(puVar15[8]);
        }
        if (puVar15[1] == 0x8000000000000000 || puVar15[1] == 0) {
          uVar8 = puVar15[4];
        }
        else {
          _free(puVar15[2]);
          uVar8 = puVar15[4];
        }
        if ((uVar8 & 0x7fffffffffffffff) != 0) {
          lVar11 = 0x28;
          goto LAB_1049a8908;
        }
      }
LAB_1049a8910:
      puVar15 = puVar15 + 10;
    }
    if (*(long *)(param_1 + 0x1a) == 0) {
      return;
    }
    break;
  case 0x24:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 8) != 0) {
      _free(*(undefined8 *)(param_1 + 10));
    }
    if (*(long *)(param_1 + 0xe) == -0x8000000000000000 || *(long *)(param_1 + 0xe) == 0) {
      lVar7 = *(long *)(param_1 + 0x14);
    }
    else {
      _free(*(undefined8 *)(param_1 + 0x10));
      lVar7 = *(long *)(param_1 + 0x14);
    }
    if (lVar7 != -0x8000000000000000) {
      puVar4 = *(ulong **)(param_1 + 0x16);
      puVar15 = puVar4;
      for (lVar11 = *(long *)(param_1 + 0x18); lVar11 != 0; lVar11 = lVar11 + -1) {
        uVar8 = *puVar15;
        lVar17 = uVar8 + 0x7ffffffffffffffb;
        if (uVar8 < 0x8000000000000005) {
          lVar17 = 2;
        }
        if ((lVar17 == 0) || (lVar17 == 1)) {
          uVar8 = puVar15[1];
joined_r0x0001049a7d1c:
          if (uVar8 != 0) {
            lVar17 = 0x10;
code_r0x0001049a7d24:
            _free(*(undefined8 *)((long)puVar15 + lVar17));
          }
        }
        else {
          uVar9 = uVar8 ^ 0x8000000000000000;
          if (-1 < (long)uVar8) {
            uVar9 = 5;
          }
          if (uVar9 < 5) {
            if (uVar9 == 2) {
              uVar8 = puVar15[1] & 0x7fffffffffffffff;
              goto joined_r0x0001049a7d1c;
            }
          }
          else {
            if (uVar8 != 0) {
              _free(puVar15[1]);
            }
            if ((puVar15[3] & 0x7fffffffffffffff) != 0) {
              lVar17 = 0x20;
              goto code_r0x0001049a7d24;
            }
          }
        }
        puVar15 = puVar15 + 7;
      }
      if (lVar7 != 0) {
        _free(puVar4);
      }
    }
    if ((*(ulong *)(param_1 + 0x1e) & 0x7fffffffffffffff) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 0x20);
    break;
  case 0x25:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 8) != 0) {
      _free(*(undefined8 *)(param_1 + 10));
    }
    unaff_x19 = *(ulong **)(param_1 + 0x10);
    lVar7 = *(long *)(param_1 + 0x12);
    if (lVar7 != 0) {
      lVar11 = 0;
      do {
        puVar15 = unaff_x19 + lVar11 * 0xd;
        if (*puVar15 != 0) {
          _free(puVar15[1]);
        }
        if (puVar15[3] != 0) {
          _free(puVar15[4]);
        }
        if (puVar15[6] != 0) {
          _free(puVar15[7]);
        }
        uVar8 = puVar15[9];
        if (uVar8 != 0x8000000000000000) {
          uVar9 = puVar15[10];
          uVar6 = puVar15[0xb];
          if (uVar6 != 0) {
            puVar14 = (undefined8 *)(uVar9 + 0x20);
            do {
              if (puVar14[-4] != 0) {
                _free(puVar14[-3]);
              }
              if (puVar14[-1] != 0) {
                _free(*puVar14);
              }
              puVar14 = puVar14 + 6;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          if (uVar8 != 0) {
            _free(uVar9);
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 != lVar7);
    }
    if (*(long *)(param_1 + 0xe) == 0) {
      return;
    }
    break;
  case 0x26:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 8) != 0) {
      _free(*(undefined8 *)(param_1 + 10));
    }
    if (*(long *)(param_1 + 0x14) == -0x8000000000000000 || *(long *)(param_1 + 0x14) == 0) {
      lVar7 = *(long *)(param_1 + 0xe);
    }
    else {
      _free(*(undefined8 *)(param_1 + 0x16));
      lVar7 = *(long *)(param_1 + 0xe);
    }
    if (lVar7 != 0) {
      _free(*(undefined8 *)(param_1 + 0x10));
    }
    puVar15 = (ulong *)(param_1 + 0x1a);
    goto SUB_1049a01f8;
  case 0x27:
    unaff_x29 = &stack0xfffffffffffffff0;
    if (*(ulong *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 8) != 0) {
      _free(*(undefined8 *)(param_1 + 10));
    }
    if (*(long *)(param_1 + 0x1a) == -0x8000000000000000 || *(long *)(param_1 + 0x1a) == 0) {
      lVar7 = *(long *)(param_1 + 0xe);
    }
    else {
      _free(*(undefined8 *)(param_1 + 0x1c));
      lVar7 = *(long *)(param_1 + 0xe);
    }
    if (lVar7 != 0) {
      _free(*(undefined8 *)(param_1 + 0x10));
    }
    unaff_x30 = &UNK_1049a7074;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar15 = (ulong *)(param_1 + 0x26);
    unaff_x19 = (ulong *)(param_1 + 2);
    goto SUB_1049a01f8;
  case 0x28:
    puVar4 = (ulong *)(param_1 + 2);
    puVar2 = &stack0xfffffffffffffff0;
    if (*(long *)(param_1 + 8) == -0x8000000000000000 || *(long *)(param_1 + 8) == 0) {
      uVar8 = *puVar4;
    }
    else {
      _free(*(undefined8 *)(param_1 + 10));
      uVar8 = *puVar4;
    }
    if (uVar8 != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if ((*(ulong *)(param_1 + 0xe) & 0x7fffffffffffffff) != 0) {
      _free(*(undefined8 *)(param_1 + 0x10));
    }
    puVar10 = *(ulong **)(param_1 + 0x14);
    if (puVar10 == (ulong *)0x8000000000000000) {
      if (*(ulong *)(param_1 + 0x28) == 0x8000000000000005) {
        if (*(long *)(param_1 + 0x16) != 0) {
          _free(*(undefined8 *)(param_1 + 0x18));
        }
        if (*(long *)(param_1 + 0x1c) != 0) {
          _free(*(undefined8 *)(param_1 + 0x1e));
        }
        if (*(long *)(param_1 + 0x22) == 0) {
          return;
        }
        unaff_x19 = *(ulong **)(param_1 + 0x24);
        break;
      }
      unaff_x30 = &UNK_1049a6234;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      puVar15 = (ulong *)(param_1 + 0x28);
      unaff_x19 = puVar4;
      unaff_x20 = puVar10;
      unaff_x29 = puVar2;
    }
    else if (*(ulong *)(param_1 + 0x2c) == 0x8000000000000005) {
      if (puVar10 != (ulong *)0x0) {
        _free(*(undefined8 *)(param_1 + 0x16));
      }
      puVar15 = (ulong *)(param_1 + 0x1a);
    }
    else {
      unaff_x30 = &UNK_1049a627c;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      puVar15 = (ulong *)(param_1 + 0x2c);
      unaff_x19 = puVar4;
      unaff_x20 = puVar10;
      unaff_x29 = puVar2;
    }
SUB_1049a01f8:
    while( true ) {
      puVar4 = puVar15;
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
      uVar8 = *puVar4 ^ 0x8000000000000000;
      if (-1 < (long)*puVar4) {
        uVar8 = 5;
      }
      if (uVar8 < 3) {
        return;
      }
      if (uVar8 == 3) {
        if (puVar4[1] == 0) {
          return;
        }
        unaff_x19 = (ulong *)puVar4[2];
        goto code_r0x000108aa97c4;
      }
      if (uVar8 == 4) {
        unaff_x19 = (ulong *)puVar4[2];
        FUN_1049a1190(unaff_x19,puVar4[3]);
        if (puVar4[1] == 0) {
          return;
        }
        goto code_r0x000108aa97c4;
      }
      uVar8 = puVar4[4];
      if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
        _free(puVar4[3] + uVar8 * -8 + -8);
      }
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
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
      unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
      unaff_x19 = (ulong *)puVar4[1];
      unaff_x23 = puVar4[2];
      if (unaff_x23 == 0) break;
      if (*unaff_x19 != 0) {
        _free(unaff_x19[1]);
      }
      unaff_x30 = (undefined *)0x10499e3a8;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
      puVar15 = unaff_x19 + 3;
      unaff_x20 = puVar4;
      unaff_x21 = unaff_x19;
      unaff_x22 = unaff_x19 + 0xd;
    }
    if (*puVar4 == 0) {
      return;
    }
    break;
  case 0x29:
    unaff_x19 = (ulong *)(param_1 + 2);
    puVar2 = &stack0xffffffffffffffe0;
    unaff_x29 = &stack0xfffffffffffffff0;
    if (*unaff_x19 != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 8) != 0) {
      _free(*(undefined8 *)(param_1 + 10));
    }
    plVar13 = (long *)(param_1 + 0x1a);
    unaff_x30 = &UNK_1049a74cc;
    goto SUB_10499e578;
  case 0x2a:
    if (*(long *)(param_1 + 6) != 0) {
      _free(*(undefined8 *)(param_1 + 8));
    }
    if (*(long *)(param_1 + 0x12) == -0x8000000000000000 || *(long *)(param_1 + 0x12) == 0) {
      lVar7 = *(long *)(param_1 + 0xc);
    }
    else {
      _free(*(undefined8 *)(param_1 + 0x14));
      lVar7 = *(long *)(param_1 + 0xc);
    }
    if (lVar7 != 0) {
      _free(*(undefined8 *)(param_1 + 0xe));
    }
    if (*(long *)(param_1 + 0x18) != -0x8000000000000000 && *(long *)(param_1 + 0x18) != 0) {
      _free(*(undefined8 *)(param_1 + 0x1a));
    }
    uVar9 = *(ulong *)(param_1 + 0x1e);
    uVar8 = uVar9 ^ 0x8000000000000000;
    if (-1 < (long)uVar9) {
      uVar8 = 4;
    }
    if ((long)uVar8 < 2) {
      if (uVar8 == 0) {
code_r0x0001049a6480:
        if (*(long *)(param_1 + 0x20) != 0) {
          _free(*(undefined8 *)(param_1 + 0x22));
        }
        if (*(long *)(param_1 + 0x26) == 0) {
          return;
        }
        unaff_x19 = *(ulong **)(param_1 + 0x28);
        break;
      }
      if (uVar8 == 1) {
        if (*(long *)(param_1 + 0x20) != 0) {
          _free(*(undefined8 *)(param_1 + 0x22));
        }
        lVar7 = *(long *)(param_1 + 0x28);
        lVar11 = *(long *)(param_1 + 0x2a);
        if (lVar11 != 0) {
          puVar14 = (undefined8 *)(lVar7 + 8);
          do {
            if (puVar14[-1] != 0) {
              _free(*puVar14);
            }
            puVar14 = puVar14 + 3;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        if (*(long *)(param_1 + 0x26) != 0) {
          _free(lVar7);
        }
        if (*(long *)(param_1 + 0x2c) == 0) {
          return;
        }
        unaff_x19 = *(ulong **)(param_1 + 0x2e);
        break;
      }
code_r0x0001049a6520:
      if ((*(long *)(param_1 + 0x20) != -0x8000000000000000) && (*(long *)(param_1 + 0x20) != 0)) {
        _free(*(undefined8 *)(param_1 + 0x22));
      }
      lVar7 = *(long *)(param_1 + 0x26);
      if (lVar7 == -0x8000000000000000) {
        return;
      }
      unaff_x19 = *(ulong **)(param_1 + 0x28);
      puVar15 = unaff_x19;
      for (lVar11 = *(long *)(param_1 + 0x2a); lVar11 != 0; lVar11 = lVar11 + -1) {
        uVar8 = *puVar15;
        lVar17 = uVar8 + 0x7ffffffffffffffb;
        if (uVar8 < 0x8000000000000005) {
          lVar17 = 2;
        }
        if ((lVar17 == 0) || (lVar17 == 1)) {
          uVar8 = puVar15[1];
joined_r0x0001049a656c:
          if (uVar8 != 0) {
            lVar17 = 0x10;
code_r0x0001049a6574:
            _free(*(undefined8 *)((long)puVar15 + lVar17));
          }
        }
        else {
          uVar9 = uVar8 ^ 0x8000000000000000;
          if (-1 < (long)uVar8) {
            uVar9 = 5;
          }
          if (uVar9 < 5) {
            if (uVar9 == 2) {
              uVar8 = puVar15[1] & 0x7fffffffffffffff;
              goto joined_r0x0001049a656c;
            }
          }
          else {
            if (uVar8 != 0) {
              _free(puVar15[1]);
            }
            if ((puVar15[3] & 0x7fffffffffffffff) != 0) {
              lVar17 = 0x20;
              goto code_r0x0001049a6574;
            }
          }
        }
        puVar15 = puVar15 + 7;
      }
    }
    else {
      if (uVar8 != 2) {
        if (uVar8 == 3) goto code_r0x0001049a6480;
        if (uVar8 == 4) {
          if (uVar9 != 0) {
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
          if ((*(ulong *)(param_1 + 0x36) & 0x7fffffffffffffff) == 0) {
            return;
          }
          unaff_x19 = *(ulong **)(param_1 + 0x38);
          break;
        }
        goto code_r0x0001049a6520;
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        _free(*(undefined8 *)(param_1 + 0x22));
      }
      unaff_x19 = *(ulong **)(param_1 + 0x28);
      lVar7 = *(long *)(param_1 + 0x2a);
      if (lVar7 != 0) {
        puVar15 = unaff_x19 + 1;
        do {
          if (puVar15[-1] != 0) {
            _free(*puVar15);
          }
          puVar15 = puVar15 + 3;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      lVar7 = *(long *)(param_1 + 0x26);
    }
    if (lVar7 == 0) {
      return;
    }
    break;
  case 0x2b:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 8) == -0x8000000000000000 || *(long *)(param_1 + 8) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 10);
    break;
  case 0x2c:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 8) == -0x8000000000000000 || *(long *)(param_1 + 8) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 10);
    break;
  case 0x2d:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 8) != 0) {
      _free(*(undefined8 *)(param_1 + 10));
    }
    plVar13 = (long *)(param_1 + 0xe);
    goto SUB_10499e578;
  case 0x2e:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    plVar13 = (long *)(param_1 + 8);
    goto SUB_10499e578;
  case 0x2f:
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
    plVar13 = (long *)(param_1 + 0x1a);
SUB_10499e578:
    *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(ulong *)(puVar2 + -0x38) = unaff_x23;
    *(ulong **)(puVar2 + -0x30) = unaff_x22;
    *(ulong **)(puVar2 + -0x28) = unaff_x21;
    *(ulong **)(puVar2 + -0x20) = unaff_x20;
    *(ulong **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    lVar7 = plVar13[1];
    if (lVar7 != 0) {
      lVar11 = plVar13[3];
      if (lVar11 != 0) {
        plVar12 = (long *)*plVar13;
        plVar16 = plVar12 + 1;
        lVar17 = *plVar12;
        uVar8 = CONCAT17(-(-1 < lVar17),
                         CONCAT16(-(-1 < (char)((ulong)lVar17 >> 0x30)),
                                  CONCAT15(-(-1 < (char)((ulong)lVar17 >> 0x28)),
                                           CONCAT14(-(-1 < (char)((ulong)lVar17 >> 0x20)),
                                                    CONCAT13(-(-1 < (char)((ulong)lVar17 >> 0x18)),
                                                             CONCAT12(-(-1 < (char)((ulong)lVar17 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-1 < (char)((ulong)
                                                  lVar17 >> 8)),-(-1 < (char)lVar17)))))))) &
                0x8080808080808080;
        do {
          while (uVar8 == 0) {
            lVar17 = *plVar16;
            plVar12 = plVar12 + -0x48;
            plVar16 = plVar16 + 1;
            uVar8 = CONCAT17(-(-1 < lVar17),
                             CONCAT16(-(-1 < (char)((ulong)lVar17 >> 0x30)),
                                      CONCAT15(-(-1 < (char)((ulong)lVar17 >> 0x28)),
                                               CONCAT14(-(-1 < (char)((ulong)lVar17 >> 0x20)),
                                                        CONCAT13(-(-1 < (char)((ulong)lVar17 >> 0x18
                                                                              )),
                                                                 CONCAT12(-(-1 < (char)((ulong)
                                                  lVar17 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar17 >> 8)),
                                                           -(-1 < (char)lVar17)))))))) &
                    0x8080808080808080;
          }
          uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          iVar1 = (int)((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3);
          if (plVar12[(long)-iVar1 * 9 + -9] != 0) {
            _free(plVar12[(long)-iVar1 * 9 + -8]);
          }
          uVar6 = plVar12[(long)-iVar1 * 9 + -6];
          uVar9 = uVar6 ^ 0x8000000000000000;
          if (-1 < (long)uVar6) {
            uVar9 = 2;
          }
          if ((uVar9 == 0) || (uVar9 == 1)) {
            if (plVar12[(long)-iVar1 * 9 + -5] != 0) {
              lVar17 = 0x10;
              goto LAB_10499e5d8;
            }
          }
          else {
            if (uVar6 != 0) {
              _free(plVar12[(long)-iVar1 * 9 + -5]);
            }
            if ((plVar12[(long)-iVar1 * 9 + -3] & 0x7fffffffffffffffU) != 0) {
              lVar17 = 0x20;
LAB_10499e5d8:
              _free(*(undefined8 *)((long)(plVar12 + (long)-iVar1 * 9 + -6) + lVar17));
            }
          }
          uVar8 = uVar8 - 1 & uVar8;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      if (lVar7 * 0x49 != -0x51) {
        unaff_x19 = (ulong *)(*plVar13 + lVar7 * -0x48 + -0x48);
        break;
      }
    }
    return;
  case 0x30:
    if (*(long *)(param_1 + 2) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 4);
    break;
  case 0x31:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 10);
    break;
  case 0x32:
    if (*(long *)(param_1 + 8) == -0x8000000000000000 || *(long *)(param_1 + 8) == 0) {
      unaff_x19 = *(ulong **)(param_1 + 4);
      lVar7 = *(long *)(param_1 + 6);
    }
    else {
      _free(*(undefined8 *)(param_1 + 10));
      unaff_x19 = *(ulong **)(param_1 + 4);
      lVar7 = *(long *)(param_1 + 6);
    }
    if (lVar7 != 0) {
      puVar15 = unaff_x19 + 1;
      do {
        if (puVar15[-1] != 0) {
          _free(*puVar15);
        }
        puVar15 = puVar15 + 4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*(long *)(param_1 + 2) == 0) {
      return;
    }
    break;
  case 0x33:
    if ((*(ulong *)(param_1 + 10) & 0x7fffffffffffffff) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 0xc);
    break;
  case 0x35:
    uVar9 = *(ulong *)(param_1 + 8);
    uVar8 = uVar9 ^ 0x8000000000000000;
    if (-1 < (long)uVar9) {
      uVar8 = 2;
    }
    if (uVar8 != 0) {
      if ((uVar8 == 1) || (uVar8 != 2)) {
        if (*(long *)(param_1 + 10) != 0) {
          lVar7 = 0x10;
          goto code_r0x0001049a38e0;
        }
      }
      else {
        if (uVar9 != 0) {
          _free(*(undefined8 *)(param_1 + 10));
        }
        if ((*(ulong *)(param_1 + 0xe) & 0x7fffffffffffffff) != 0) {
          lVar7 = 0x20;
code_r0x0001049a38e0:
          _free(*(undefined8 *)((long)(param_1 + 8) + lVar7));
        }
      }
    }
    if (*(long *)(param_1 + 2) == -0x8000000000000000 || *(long *)(param_1 + 2) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 4);
    break;
  case 0x36:
    lVar7 = *(long *)(param_1 + 2);
    if (lVar7 != -0x8000000000000000) {
      lVar11 = *(long *)(param_1 + 4);
      lVar17 = *(long *)(param_1 + 6);
      if (lVar17 != 0) {
        puVar14 = (undefined8 *)(lVar11 + 0x20);
        do {
          if (puVar14[-4] != 0) {
            _free(puVar14[-3]);
          }
          if (puVar14[-1] != 0) {
            _free(*puVar14);
          }
          if (puVar14[2] != 0) {
            _free(puVar14[3]);
          }
          puVar14 = puVar14 + 0xb;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      if (lVar7 != 0) {
        _free(lVar11);
      }
      if (*(long *)(param_1 + 8) != 0) {
        _free(*(undefined8 *)(param_1 + 10));
      }
      if (*(long *)(param_1 + 0xe) != 0) {
        unaff_x19 = *(ulong **)(param_1 + 0x10);
        break;
      }
    }
    return;
  case 0x37:
    lVar7 = 2;
    if (1 < *(ulong *)(param_1 + 2)) {
      lVar7 = *(ulong *)(param_1 + 2) - 2;
    }
    switch(lVar7) {
    case 0:
      if (*(long *)(param_1 + 0x10) != -0x8000000000000000 && *(long *)(param_1 + 0x10) != 0) {
        _free(*(undefined8 *)(param_1 + 0x12));
      }
      if (*(long *)(param_1 + 4) != 0) {
        _free(*(undefined8 *)(param_1 + 6));
      }
      unaff_x19 = *(ulong **)(param_1 + 0xc);
      puVar15 = unaff_x19;
      for (lVar7 = *(long *)(param_1 + 0xe); lVar7 != 0; lVar7 = lVar7 + -1) {
        uVar9 = *puVar15;
        uVar8 = uVar9 ^ 0x8000000000000000;
        if (-1 < (long)uVar9) {
          uVar8 = 1;
        }
        if ((uVar8 == 0) || (uVar8 != 1)) {
          if (puVar15[1] != 0) {
            lVar11 = 0x10;
            goto code_r0x0001049a20fc;
          }
        }
        else if (uVar9 != 0) {
          lVar11 = 8;
code_r0x0001049a20fc:
          _free(*(undefined8 *)((long)puVar15 + lVar11));
        }
        puVar15 = puVar15 + 4;
      }
      lVar7 = *(long *)(param_1 + 10);
      goto joined_r0x0001049a24ac;
    case 1:
      if (*(long *)(param_1 + 4) != 0) {
        _free(*(undefined8 *)(param_1 + 6));
      }
      lVar7 = *(long *)(param_1 + 0xc);
      lVar11 = *(long *)(param_1 + 0xe);
      if (lVar11 != 0) {
        puVar14 = (undefined8 *)(lVar7 + 8);
        do {
          if (puVar14[-1] != 0) {
            _free(*puVar14);
          }
          puVar14 = puVar14 + 3;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      if (*(long *)(param_1 + 10) != 0) {
        _free(lVar7);
      }
      lVar7 = *(long *)(param_1 + 0x10);
      if (lVar7 != -0x8000000000000000) {
        lVar11 = *(long *)(param_1 + 0x12);
        lVar17 = *(long *)(param_1 + 0x14);
        if (lVar17 != 0) {
          puVar14 = (undefined8 *)(lVar11 + 0x10);
          do {
            if (puVar14[-1] != 0) {
              _free(*puVar14);
            }
            puVar14 = puVar14 + 4;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        if (lVar7 != 0) {
          _free(lVar11);
        }
      }
      if (*(long *)(param_1 + 0x16) != -0x8000000000000000 && *(long *)(param_1 + 0x16) != 0) {
        unaff_x19 = *(ulong **)(param_1 + 0x18);
        goto code_r0x000108aa97c4;
      }
      break;
    case 2:
      if (*(long *)(param_1 + 0x24) == -0x8000000000000000 || *(long *)(param_1 + 0x24) == 0) {
        if (*(long *)(param_1 + 0x2a) == -0x8000000000000000 || *(long *)(param_1 + 0x2a) == 0)
        goto code_r0x0001049a22d0;
code_r0x0001049a2554:
        _free(*(undefined8 *)(param_1 + 0x2c));
        lVar7 = *(long *)(param_1 + 8);
        lVar11 = *(long *)(param_1 + 10);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x26));
        if (*(long *)(param_1 + 0x2a) != -0x8000000000000000 && *(long *)(param_1 + 0x2a) != 0)
        goto code_r0x0001049a2554;
code_r0x0001049a22d0:
        lVar7 = *(long *)(param_1 + 8);
        lVar11 = *(long *)(param_1 + 10);
      }
      if (lVar11 != 0) {
        puVar14 = (undefined8 *)(lVar7 + 8);
        do {
          if (puVar14[-1] != 0) {
            _free(*puVar14);
          }
          puVar14 = puVar14 + 3;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      if (*(long *)(param_1 + 6) != 0) {
        _free(lVar7);
      }
      if (*(long *)(param_1 + 0xc) != -0x8000000000000000 && *(long *)(param_1 + 0xc) != 0) {
        _free(*(undefined8 *)(param_1 + 0xe));
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        func_0x00010499de88();
      }
      if ((*(long *)(param_1 + 0x12) != -0x8000000000000000) && (*(long *)(param_1 + 0x12) != 0)) {
        unaff_x19 = *(ulong **)(param_1 + 0x14);
        goto code_r0x000108aa97c4;
      }
      break;
    case 3:
      if (*(long *)(param_1 + 0x16) != -0x8000000000000000 && *(long *)(param_1 + 0x16) != 0) {
        _free(*(undefined8 *)(param_1 + 0x18));
      }
      if (*(long *)(param_1 + 4) != 0) {
        _free(*(undefined8 *)(param_1 + 6));
      }
      if ((*(long *)(param_1 + 0x1c) != -0x8000000000000000) && (*(long *)(param_1 + 0x1c) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x1e);
code_r0x0001049a2610:
        _free(uVar3);
      }
      goto code_r0x0001049a2614;
    case 4:
      if (*(long *)(param_1 + 10) == -0x8000000000000000 || *(long *)(param_1 + 10) == 0) {
        if (*(long *)(param_1 + 0x10) == -0x8000000000000000 || *(long *)(param_1 + 0x10) == 0)
        goto code_r0x0001049a21a8;
code_r0x0001049a24f0:
        _free(*(undefined8 *)(param_1 + 0x12));
        lVar7 = *(long *)(param_1 + 0x16);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0xc));
        if (*(long *)(param_1 + 0x10) != -0x8000000000000000 && *(long *)(param_1 + 0x10) != 0)
        goto code_r0x0001049a24f0;
code_r0x0001049a21a8:
        lVar7 = *(long *)(param_1 + 0x16);
      }
      if ((lVar7 != -0x8000000000000000) && (lVar7 != 0)) {
        _free(*(undefined8 *)(param_1 + 0x18));
      }
      if (*(long *)(param_1 + 4) != 0) {
        _free(*(undefined8 *)(param_1 + 6));
      }
      puVar15 = (ulong *)(param_1 + 0x1c);
      goto SUB_1049a01f8;
    case 5:
      if (*(long *)(param_1 + 0xe) != 0) {
        _free(*(undefined8 *)(param_1 + 0x10));
      }
      if (*(long *)(param_1 + 4) == 0) {
code_r0x0001049a2644:
        if (*(long *)(param_1 + 6) == 0) {
          return;
        }
        unaff_x19 = *(ulong **)(param_1 + 8);
        goto code_r0x000108aa97c4;
      }
      unaff_x19 = *(ulong **)(param_1 + 8);
      puVar15 = unaff_x19;
      for (lVar7 = *(long *)(param_1 + 10); lVar7 != 0; lVar7 = lVar7 + -1) {
        uVar9 = *puVar15;
        uVar8 = uVar9 ^ 0x8000000000000000;
        if (-1 < (long)uVar9) {
          uVar8 = 1;
        }
        if ((uVar8 == 0) || (uVar8 != 1)) {
          if (puVar15[1] != 0) {
            lVar11 = 0x10;
            goto code_r0x0001049a21fc;
          }
        }
        else if (uVar9 != 0) {
          lVar11 = 8;
code_r0x0001049a21fc:
          _free(*(undefined8 *)((long)puVar15 + lVar11));
        }
        puVar15 = puVar15 + 4;
      }
      goto code_r0x0001049a2420;
    case 6:
      if (*(long *)(param_1 + 0x16) == -0x8000000000000000 || *(long *)(param_1 + 0x16) == 0) {
        if (*(long *)(param_1 + 0x1c) == -0x8000000000000000 || *(long *)(param_1 + 0x1c) == 0)
        goto code_r0x0001049a2390;
code_r0x0001049a25fc:
        _free(*(undefined8 *)(param_1 + 0x1e));
        lVar7 = *(long *)(param_1 + 4);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x18));
        if (*(long *)(param_1 + 0x1c) != -0x8000000000000000 && *(long *)(param_1 + 0x1c) != 0)
        goto code_r0x0001049a25fc;
code_r0x0001049a2390:
        lVar7 = *(long *)(param_1 + 4);
      }
      if (lVar7 != 0) {
        uVar3 = *(undefined8 *)(param_1 + 6);
        goto code_r0x0001049a2610;
      }
code_r0x0001049a2614:
      if (*(long *)(param_1 + 10) != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0xc);
code_r0x0001049a2620:
        _free(uVar3);
      }
code_r0x0001049a2624:
      if (*(long *)(param_1 + 0x10) != 0) {
        unaff_x19 = *(ulong **)(param_1 + 0x12);
        goto code_r0x000108aa97c4;
      }
      break;
    case 7:
      if (*(long *)(param_1 + 0xe) != 0) {
        _free(*(undefined8 *)(param_1 + 0x10));
      }
      if (*(long *)(param_1 + 0x14) == -0x8000000000000000 || *(long *)(param_1 + 0x14) == 0) {
        lVar7 = *(long *)(param_1 + 4);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x16));
        lVar7 = *(long *)(param_1 + 4);
      }
      if (lVar7 == 0) goto code_r0x0001049a2644;
      unaff_x19 = *(ulong **)(param_1 + 8);
      puVar15 = unaff_x19;
      for (lVar7 = *(long *)(param_1 + 10); lVar7 != 0; lVar7 = lVar7 + -1) {
        uVar9 = *puVar15;
        uVar8 = uVar9 ^ 0x8000000000000000;
        if (-1 < (long)uVar9) {
          uVar8 = 1;
        }
        if ((uVar8 == 0) || (uVar8 != 1)) {
          if (puVar15[1] != 0) {
            lVar11 = 0x10;
            goto code_r0x0001049a23e4;
          }
        }
        else if (uVar9 != 0) {
          lVar11 = 8;
code_r0x0001049a23e4:
          _free(*(undefined8 *)((long)puVar15 + lVar11));
        }
        puVar15 = puVar15 + 4;
      }
code_r0x0001049a2420:
      lVar7 = *(long *)(param_1 + 6);
      goto joined_r0x0001049a24ac;
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
      unaff_x19 = *(ulong **)(param_1 + 0x12);
      FUN_1049a1190(unaff_x19,*(undefined8 *)(param_1 + 0x14));
      lVar7 = *(long *)(param_1 + 0x10);
joined_r0x0001049a24ac:
      if (lVar7 != 0) goto code_r0x000108aa97c4;
      break;
    case 9:
      if (*(long *)(param_1 + 0x12) == -0x8000000000000000 || *(long *)(param_1 + 0x12) == 0) {
        if (*(long *)(param_1 + 0x18) == -0x8000000000000000 || *(long *)(param_1 + 0x18) == 0)
        goto code_r0x0001049a2450;
code_r0x0001049a2680:
        _free(*(undefined8 *)(param_1 + 0x1a));
        lVar7 = *(long *)(param_1 + 4);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x14));
        if (*(long *)(param_1 + 0x18) != -0x8000000000000000 && *(long *)(param_1 + 0x18) != 0)
        goto code_r0x0001049a2680;
code_r0x0001049a2450:
        lVar7 = *(long *)(param_1 + 4);
      }
      if (lVar7 == 4) {
        return;
      }
      plVar13 = (long *)(param_1 + 4);
      goto DAT_1049a36f4;
    case 10:
      if (*(long *)(param_1 + 4) != 0) {
        _free(*(undefined8 *)(param_1 + 6));
      }
      if (*(long *)(param_1 + 10) != 0) {
        _free(*(undefined8 *)(param_1 + 0xc));
      }
      if (*(long *)(param_1 + 0x16) != -0x8000000000000000 && *(long *)(param_1 + 0x16) != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        goto code_r0x0001049a2620;
      }
      goto code_r0x0001049a2624;
    case 0xb:
      if (*(long *)(param_1 + 4) == 0) {
        return;
      }
      goto code_r0x0001049a2250;
    case 0xd:
      if (*(long *)(param_1 + 4) == -0x8000000000000000 || *(long *)(param_1 + 4) == 0) {
        return;
      }
code_r0x0001049a2250:
      unaff_x19 = *(ulong **)(param_1 + 6);
      goto code_r0x000108aa97c4;
    }
    return;
  case 0x38:
  case 0x39:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    unaff_x19 = (ulong *)(param_1 + 8);
    puVar2 = &stack0xffffffffffffffd0;
    unaff_x29 = &stack0xfffffffffffffff0;
    uVar9 = *unaff_x19;
    uVar8 = uVar9 ^ 0x8000000000000000;
    if (-1 < (long)uVar9) {
      uVar8 = 9;
    }
    switch(uVar8) {
    case 0:
      if (*(long *)(param_1 + 10) != 0) {
        _free(*(undefined8 *)(param_1 + 0xc));
      }
      unaff_x19 = *(ulong **)(param_1 + 0x12);
      puVar15 = unaff_x19;
      for (lVar7 = *(long *)(param_1 + 0x14); lVar7 != 0; lVar7 = lVar7 + -1) {
        FUN_1049a2ce4(puVar15);
        puVar15 = puVar15 + 7;
      }
      goto code_r0x0001049a0d04;
    case 1:
      if (*(long *)(param_1 + 10) != 0) {
        _free(*(undefined8 *)(param_1 + 0xc));
      }
      unaff_x19 = *(ulong **)(param_1 + 0x12);
      lVar7 = *(long *)(param_1 + 0x14);
      if (lVar7 != 0) {
        puVar15 = unaff_x19 + 4;
        do {
          if (puVar15[-4] != 0) {
            _free(puVar15[-3]);
          }
          if (puVar15[-1] != 0) {
            _free(*puVar15);
          }
          puVar15 = puVar15 + 6;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
code_r0x0001049a0d04:
      lVar7 = *(long *)(param_1 + 0x10);
joined_r0x0001049a0df4:
      if (lVar7 == 0) {
        return;
      }
      break;
    case 2:
      if (*(long *)(param_1 + 10) != 0) {
        _free(*(undefined8 *)(param_1 + 0xc));
      }
      lVar7 = *(long *)(param_1 + 0x12);
      lVar11 = *(long *)(param_1 + 0x14);
      if (lVar11 != 0) {
        puVar14 = (undefined8 *)(lVar7 + 8);
        do {
          if (puVar14[-1] != 0) {
            _free(*puVar14);
          }
          puVar14 = puVar14 + 3;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        _free(lVar7);
      }
      plVar13 = (long *)(param_1 + 0x16);
      goto SUB_1049a945c;
    case 3:
    case 6:
      if (*(long *)(param_1 + 10) != 0) {
        _free(*(undefined8 *)(param_1 + 0xc));
      }
      if (*(long *)(param_1 + 0x10) == 0) {
        return;
      }
      unaff_x19 = *(ulong **)(param_1 + 0x12);
      break;
    case 4:
      if (*(long *)(param_1 + 10) != 0) {
        _free(*(undefined8 *)(param_1 + 0xc));
      }
      lVar7 = *(long *)(param_1 + 0x12);
      lVar11 = *(long *)(param_1 + 0x14);
      if (lVar11 != 0) {
        puVar14 = (undefined8 *)(lVar7 + 8);
        do {
          if (puVar14[-1] != 0) {
            _free(*puVar14);
          }
          puVar14 = puVar14 + 3;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        _free(lVar7);
      }
      unaff_x19 = *(ulong **)(param_1 + 0x18);
      lVar7 = *(long *)(param_1 + 0x1a);
      if (lVar7 != 0) {
        puVar15 = unaff_x19 + 1;
        do {
          if (puVar15[-1] != 0) {
            _free(*puVar15);
          }
          puVar15 = puVar15 + 3;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      lVar7 = *(long *)(param_1 + 0x16);
      goto joined_r0x0001049a0df4;
    case 5:
      if (*(long *)(param_1 + 0x18) != 0) {
        _free(*(undefined8 *)(param_1 + 0x1a));
      }
      if (*(long *)(param_1 + 0x1e) != 0) {
        _free(*(undefined8 *)(param_1 + 0x20));
      }
      plVar13 = (long *)(param_1 + 10);
      goto DAT_1049a36f4;
    case 7:
      if (*(long *)(param_1 + 10) != 0) {
        _free(*(undefined8 *)(param_1 + 0xc));
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        _free(*(undefined8 *)(param_1 + 0x12));
      }
      if (*(long *)(param_1 + 0x1c) != -0x8000000000000000 && *(long *)(param_1 + 0x1c) != 0) {
        _free(*(undefined8 *)(param_1 + 0x1e));
      }
      if (*(long *)(param_1 + 0x16) != 0) {
        _free(*(undefined8 *)(param_1 + 0x18));
      }
      if ((*(ulong *)(param_1 + 0x22) & 0x7fffffffffffffff) == 0) {
        return;
      }
      unaff_x19 = *(ulong **)(param_1 + 0x24);
      break;
    case 8:
      if (*(long *)(param_1 + 10) != 0) {
        _free(*(undefined8 *)(param_1 + 0xc));
      }
      plVar13 = (long *)(param_1 + 0x1c);
      unaff_x30 = &UNK_1049a0e5c;
      goto SUB_10499e578;
    case 9:
      if (uVar9 != 0) {
        _free(*(undefined8 *)(param_1 + 10));
      }
      if (*(long *)(param_1 + 0xe) != 0) {
        _free(*(undefined8 *)(param_1 + 0x10));
      }
      if (*(long *)(param_1 + 0x14) != 0) {
        _free(*(undefined8 *)(param_1 + 0x16));
      }
      unaff_x30 = &UNK_1049a0c20;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      puVar15 = (ulong *)(param_1 + 0x58);
      goto SUB_1049a01f8;
    default:
      if (*(long *)(param_1 + 10) == 0) {
        return;
      }
      unaff_x19 = *(ulong **)(param_1 + 0xc);
    }
    break;
  case 0x3a:
  case 0x3b:
    if (*(long *)(param_1 + 0x28) != -0x8000000000000000 && *(long *)(param_1 + 0x28) != 0) {
      _free(*(undefined8 *)(param_1 + 0x2a));
    }
    if (*(long *)(param_1 + 10) != 0) {
      _free(*(undefined8 *)(param_1 + 0xc));
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      _free(*(undefined8 *)(param_1 + 0x12));
    }
    if (*(long *)(param_1 + 0x1c) == -0x8000000000000000 || *(long *)(param_1 + 0x1c) == 0) {
      unaff_x19 = *(ulong **)(param_1 + 0x18);
      lVar7 = *(long *)(param_1 + 0x1a);
    }
    else {
      _free(*(undefined8 *)(param_1 + 0x1e));
      unaff_x19 = *(ulong **)(param_1 + 0x18);
      lVar7 = *(long *)(param_1 + 0x1a);
    }
    if (lVar7 != 0) {
      puVar15 = unaff_x19 + 1;
      do {
        if (puVar15[-1] != 0) {
          _free(*puVar15);
        }
        puVar15 = puVar15 + 4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*(long *)(param_1 + 0x16) == 0) {
      return;
    }
    break;
  case 0x3c:
  case 0x3d:
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
    unaff_x19 = *(ulong **)(param_1 + 0x16);
    break;
  case 0x3e:
  case 0x3f:
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
    unaff_x19 = *(ulong **)(param_1 + 0x16);
    break;
  case 0x40:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 8) != 0) {
      _free(*(undefined8 *)(param_1 + 10));
    }
    if (*(long *)(param_1 + 0xe) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 0x10);
    break;
  case 0x41:
    if (*(long *)(param_1 + 10) != 0) {
      _free(*(undefined8 *)(param_1 + 0xc));
    }
    if (*(long *)(param_1 + 0x1c) == -0x8000000000000000 || *(long *)(param_1 + 0x1c) == 0) {
      if (*(long *)(param_1 + 0x22) == -0x8000000000000000 || *(long *)(param_1 + 0x22) == 0)
      goto code_r0x0001049a6670;
code_r0x0001049a66ec:
      _free(*(undefined8 *)(param_1 + 0x24));
      lVar7 = *(long *)(param_1 + 0x10);
    }
    else {
      _free(*(undefined8 *)(param_1 + 0x1e));
      if (*(long *)(param_1 + 0x22) != -0x8000000000000000 && *(long *)(param_1 + 0x22) != 0)
      goto code_r0x0001049a66ec;
code_r0x0001049a6670:
      lVar7 = *(long *)(param_1 + 0x10);
    }
    if (lVar7 != 0) {
      _free(*(undefined8 *)(param_1 + 0x12));
    }
    if (*(long *)(param_1 + 0x16) != 0) {
      _free(*(undefined8 *)(param_1 + 0x18));
    }
    if (*(long *)(param_1 + 2) == 3) {
      uVar8 = *(ulong *)(param_1 + 4) & 0x7fffffffffffffff;
    }
    else {
      if (*(long *)(param_1 + 2) != 4) {
        return;
      }
      uVar8 = *(ulong *)(param_1 + 4);
    }
    if (uVar8 == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 6);
    break;
  case 0x42:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 10);
    break;
  case 0x43:
    if (*(long *)(param_1 + 10) != 0) {
      _free(*(undefined8 *)(param_1 + 0xc));
    }
    if (*(long *)(param_1 + 0x16) == -0x8000000000000000 || *(long *)(param_1 + 0x16) == 0) {
      if (*(long *)(param_1 + 0x1c) == -0x8000000000000000 || *(long *)(param_1 + 0x1c) == 0)
      goto code_r0x0001049a7368;
code_r0x0001049a73d4:
      _free(*(undefined8 *)(param_1 + 0x1e));
      lVar7 = *(long *)(param_1 + 0x10);
    }
    else {
      _free(*(undefined8 *)(param_1 + 0x18));
      if (*(long *)(param_1 + 0x1c) != -0x8000000000000000 && *(long *)(param_1 + 0x1c) != 0)
      goto code_r0x0001049a73d4;
code_r0x0001049a7368:
      lVar7 = *(long *)(param_1 + 0x10);
    }
    if (lVar7 != 0) {
      _free(*(undefined8 *)(param_1 + 0x12));
    }
    if (*(long *)(param_1 + 2) == 3) {
      uVar8 = *(ulong *)(param_1 + 4) & 0x7fffffffffffffff;
    }
    else {
      if (*(long *)(param_1 + 2) != 4) {
        return;
      }
      uVar8 = *(ulong *)(param_1 + 4);
    }
    if (uVar8 == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 6);
    break;
  case 0x44:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    lVar7 = *(long *)(param_1 + 10);
    lVar11 = *(long *)(param_1 + 0xc);
    if (lVar11 != 0) {
      puVar14 = (undefined8 *)(lVar7 + 0x20);
      do {
        if (puVar14[-4] == -0x8000000000000000 || puVar14[-4] == 0) {
          if (puVar14[-1] != -0x8000000000000000 && puVar14[-1] != 0) {
code_r0x0001049a5f20:
            _free(*puVar14);
          }
        }
        else {
          _free(puVar14[-3]);
          if (puVar14[-1] != -0x8000000000000000 && puVar14[-1] != 0) goto code_r0x0001049a5f20;
        }
        puVar14 = puVar14 + 8;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (*(long *)(param_1 + 8) != 0) {
      _free(lVar7);
    }
    if (*(long *)(param_1 + 0xe) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 0x10);
    break;
  case 0x45:
    if (*(long *)(param_1 + 2) != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    func_0x0001049a8e14(param_1 + 8);
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 != 0) {
      lVar11 = *(long *)(param_1 + 0x14);
      if (lVar11 != 0) {
        plVar13 = *(long **)(param_1 + 0xe);
        plVar12 = plVar13 + 1;
        lVar17 = *plVar13;
        uVar8 = CONCAT17(-(-1 < lVar17),
                         CONCAT16(-(-1 < (char)((ulong)lVar17 >> 0x30)),
                                  CONCAT15(-(-1 < (char)((ulong)lVar17 >> 0x28)),
                                           CONCAT14(-(-1 < (char)((ulong)lVar17 >> 0x20)),
                                                    CONCAT13(-(-1 < (char)((ulong)lVar17 >> 0x18)),
                                                             CONCAT12(-(-1 < (char)((ulong)lVar17 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-1 < (char)((ulong)
                                                  lVar17 >> 8)),-(-1 < (char)lVar17)))))))) &
                0x8080808080808080;
        do {
          while (uVar8 == 0) {
            lVar17 = *plVar12;
            plVar13 = plVar13 + -0x30;
            plVar12 = plVar12 + 1;
            uVar8 = CONCAT17(-(-1 < lVar17),
                             CONCAT16(-(-1 < (char)((ulong)lVar17 >> 0x30)),
                                      CONCAT15(-(-1 < (char)((ulong)lVar17 >> 0x28)),
                                               CONCAT14(-(-1 < (char)((ulong)lVar17 >> 0x20)),
                                                        CONCAT13(-(-1 < (char)((ulong)lVar17 >> 0x18
                                                                              )),
                                                                 CONCAT12(-(-1 < (char)((ulong)
                                                  lVar17 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar17 >> 8)),
                                                           -(-1 < (char)lVar17)))))))) &
                    0x8080808080808080;
          }
          uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          iVar1 = (int)((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3);
          if (plVar13[(long)-iVar1 * 6 + -4] == 3) {
            uVar9 = plVar13[(long)-iVar1 * 6 + -3] & 0x7fffffffffffffff;
joined_r0x00010499eaac:
            if (uVar9 != 0) {
              _free(plVar13[(long)-iVar1 * 6 + -2]);
            }
          }
          else if (plVar13[(long)-iVar1 * 6 + -4] == 4) {
            uVar9 = plVar13[(long)-iVar1 * 6 + -3];
            goto joined_r0x00010499eaac;
          }
          uVar8 = uVar8 - 1 & uVar8;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      if (lVar7 * 0x31 != -0x39) {
        unaff_x19 = (ulong *)(*(long *)(param_1 + 0xe) + lVar7 * -0x30 + -0x30);
        break;
      }
    }
    return;
  case 0x46:
    if (*(long *)(param_1 + 2) == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 4);
    break;
  default:
    if (*(long *)(param_1 + 10) != 0) {
      _free(*(undefined8 *)(param_1 + 0xc));
    }
    if (*(long *)(param_1 + 0x10) == -0x8000000000000000 || *(long *)(param_1 + 0x10) == 0) {
      if (*(long *)(param_1 + 0x16) == -0x8000000000000000 || *(long *)(param_1 + 0x16) == 0)
      goto LAB_1049a4f40;
LAB_1049a4f84:
      _free(*(undefined8 *)(param_1 + 0x18));
      lVar7 = *(long *)(param_1 + 2);
      if (lVar7 == 3) goto LAB_1049a4f98;
LAB_1049a4f4c:
      if (lVar7 != 4) {
        return;
      }
      uVar8 = *(ulong *)(param_1 + 4);
    }
    else {
      _free(*(undefined8 *)(param_1 + 0x12));
      if (*(long *)(param_1 + 0x16) != -0x8000000000000000 && *(long *)(param_1 + 0x16) != 0)
      goto LAB_1049a4f84;
LAB_1049a4f40:
      lVar7 = *(long *)(param_1 + 2);
      if (lVar7 != 3) goto LAB_1049a4f4c;
LAB_1049a4f98:
      uVar8 = *(ulong *)(param_1 + 4) & 0x7fffffffffffffff;
    }
    if (uVar8 == 0) {
      return;
    }
    unaff_x19 = *(ulong **)(param_1 + 6);
    break;
  case 0x48:
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
    unaff_x19 = *(ulong **)(param_1 + 0x10);
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(unaff_x19);
  return;
}

