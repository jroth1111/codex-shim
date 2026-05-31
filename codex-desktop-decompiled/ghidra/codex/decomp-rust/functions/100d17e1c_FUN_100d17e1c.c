
void FUN_100d17e1c(long param_1)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  bVar1 = *(byte *)(param_1 + 0x870);
  if (bVar1 < 6) {
    if (3 < bVar1) {
      if (bVar1 == 4) {
        if (*(char *)(param_1 + 0x2270) == '\x03') {
          FUN_100d12094(param_1 + 0x8a8);
        }
        if (*(long *)(param_1 + 0x878) != 0) {
          _free(*(undefined8 *)(param_1 + 0x880));
        }
        goto LAB_100d17f10;
      }
      if (bVar1 != 5) {
        return;
      }
      if (*(char *)(param_1 + 0x25a0) == '\x03') {
        FUN_100ccb260(param_1 + 0x880);
      }
      goto LAB_100d17fec;
    }
    if (bVar1 != 0) {
      if (bVar1 != 3) {
        return;
      }
      func_0x000100d1b1f0(param_1 + 0x878);
LAB_100d17f10:
      func_0x000100e003a8(param_1 + 0x308);
      *(undefined1 *)(param_1 + 0x877) = 0;
      lVar2 = *(long *)(param_1 + 0x298);
      goto joined_r0x000100d17f24;
    }
    FUN_100e02a24(param_1);
  }
  else {
    if (bVar1 < 8) {
      if (bVar1 == 6) {
        if (*(char *)(param_1 + 0x2180) == '\x03') {
          FUN_100d1ddbc(param_1 + 0x890);
        }
        FUN_100df5b9c(param_1 + 0x2188);
      }
      else {
        if (bVar1 != 7) {
          return;
        }
        FUN_100d4e420(param_1 + 0x878);
      }
      if ((*(byte *)(param_1 + 0x873) & 1) != 0) {
        FUN_100df5b9c(param_1 + 0x608);
      }
      if (*(long *)(param_1 + 0x5b8) != -0x8000000000000000) {
        FUN_100e24ac8(param_1 + 0x5b8);
      }
      if ((*(long *)(param_1 + 0x5e8) != -0x8000000000000000) && (*(long *)(param_1 + 0x5e8) != 0))
      {
        _free(*(undefined8 *)(param_1 + 0x5f0));
      }
      *(undefined1 *)(param_1 + 0x873) = 0;
      lVar2 = *(long *)(param_1 + 0x568);
joined_r0x000100d17fb8:
      if (lVar2 != -0x7fffffffffffffff) {
        if (lVar2 != -0x8000000000000000) {
          FUN_100e24ac8(param_1 + 0x568);
        }
        if ((*(long *)(param_1 + 0x598) != -0x8000000000000000) && (*(long *)(param_1 + 0x598) != 0)
           ) {
          _free(*(undefined8 *)(param_1 + 0x5a0));
        }
      }
      *(undefined1 *)(param_1 + 0x875) = 0;
LAB_100d17fec:
      *(undefined1 *)(param_1 + 0x876) = 0;
      lVar2 = *(long *)(param_1 + 0x298);
joined_r0x000100d17f24:
      if (lVar2 == 6) goto LAB_100d17ffc;
LAB_100d18048:
      *(undefined1 *)(param_1 + 0x871) = 0;
      *(undefined2 *)(param_1 + 0x871) = 0;
      lVar2 = *(long *)(param_1 + 0x268);
    }
    else {
      if (bVar1 == 8) {
        FUN_100d12094(param_1 + 0x878);
        lVar2 = *(long *)(param_1 + 0x568);
        goto joined_r0x000100d17fb8;
      }
      if (bVar1 == 9) {
        if (*(char *)(param_1 + 0x2258) == '\x03') {
          FUN_100d12094(param_1 + 0x890);
        }
      }
      else {
        if (bVar1 != 10) {
          return;
        }
        func_0x000100d50dec(param_1 + 0x9f8);
        FUN_100e02a24(param_1 + 0x938);
      }
      FUN_100e139e8(param_1 + 0x7a8);
      *(undefined1 *)(param_1 + 0x874) = 0;
      if (*(long *)(param_1 + 0x298) != 6) goto LAB_100d18048;
LAB_100d17ffc:
      *(undefined1 *)(param_1 + 0x872) = 0;
      *(undefined2 *)(param_1 + 0x871) = 0;
      lVar2 = *(long *)(param_1 + 0x268);
    }
    if ((lVar2 != -0x8000000000000000) && (lVar2 != 0)) {
      _free(*(undefined8 *)(param_1 + 0x270));
    }
    lVar2 = *(long *)(param_1 + 0x280);
    if (lVar2 != 0) {
      puVar6 = *(undefined8 **)(param_1 + 0x288);
      pcVar3 = (code *)*puVar6;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(lVar2);
      }
      if (puVar6[1] != 0) {
        _free(lVar2);
      }
    }
    FUN_100e02a24(param_1);
  }
  puVar5 = (ulong *)(param_1 + 0xc0);
  if (*puVar5 == 0x800000000000000b) {
    return;
  }
  uVar4 = *puVar5 ^ 0x8000000000000000;
  if (-1 < (long)*puVar5) {
    uVar4 = 9;
  }
  switch(uVar4) {
  case 0:
    if (*(long *)(param_1 + 200) != 0) {
      _free(*(undefined8 *)(param_1 + 0xd0));
    }
    lVar2 = *(long *)(param_1 + 0xe8);
    lVar7 = lVar2;
    for (lVar8 = *(long *)(param_1 + 0xf0); lVar8 != 0; lVar8 = lVar8 + -1) {
      FUN_100e06c08(lVar7);
      lVar7 = lVar7 + 0x38;
    }
    goto code_r0x000100df5d10;
  case 1:
    if (*(long *)(param_1 + 200) != 0) {
      _free(*(undefined8 *)(param_1 + 0xd0));
    }
    lVar2 = *(long *)(param_1 + 0xe8);
    lVar7 = *(long *)(param_1 + 0xf0);
    if (lVar7 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 0x20);
      do {
        if (puVar6[-4] != 0) {
          _free(puVar6[-3]);
        }
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 6;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
code_r0x000100df5d10:
    if (*(long *)(param_1 + 0xe0) == 0) {
      return;
    }
    break;
  case 2:
    if (*(long *)(param_1 + 200) != 0) {
      _free(*(undefined8 *)(param_1 + 0xd0));
    }
    lVar2 = *(long *)(param_1 + 0xe8);
    lVar7 = *(long *)(param_1 + 0xf0);
    if (lVar7 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 8);
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*(long *)(param_1 + 0xe0) != 0) {
      _free(lVar2);
    }
    if (*(long *)(param_1 + 0xf8) == -0x8000000000000000) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0x100);
    lVar7 = *(long *)(param_1 + 0x108);
    if (lVar7 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 0x20);
      do {
        if (puVar6[-4] != 0) {
          _free(puVar6[-3]);
        }
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 7;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*(long *)(param_1 + 0xf8) != 0) {
      _free(lVar2);
    }
    lVar2 = *(long *)(param_1 + 0x118);
    lVar7 = *(long *)(param_1 + 0x120);
    if (lVar7 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 8);
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*(long *)(param_1 + 0x110) == 0) {
      return;
    }
    break;
  case 3:
  case 6:
    if (*(long *)(param_1 + 200) != 0) {
      _free(*(undefined8 *)(param_1 + 0xd0));
    }
    if (*(long *)(param_1 + 0xe0) == 0) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0xe8);
    break;
  case 4:
    if (*(long *)(param_1 + 200) != 0) {
      _free(*(undefined8 *)(param_1 + 0xd0));
    }
    lVar2 = *(long *)(param_1 + 0xe8);
    lVar7 = *(long *)(param_1 + 0xf0);
    if (lVar7 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 8);
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*(long *)(param_1 + 0xe0) != 0) {
      _free(lVar2);
    }
    lVar2 = *(long *)(param_1 + 0x100);
    lVar7 = *(long *)(param_1 + 0x108);
    if (lVar7 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 8);
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*(long *)(param_1 + 0xf8) == 0) {
      return;
    }
    break;
  case 5:
    if (*(long *)(param_1 + 0x100) != 0) {
      _free(*(undefined8 *)(param_1 + 0x108));
    }
    if (*(long *)(param_1 + 0x118) != 0) {
      _free(*(undefined8 *)(param_1 + 0x120));
    }
    lVar2 = *(long *)(param_1 + 200);
    if (lVar2 < 2) {
      if (lVar2 == 0) {
        if (*(long *)(param_1 + 0xd0) == -0x8000000000000000 || *(long *)(param_1 + 0xd0) == 0) {
          lVar7 = *(long *)(param_1 + 0xe8);
        }
        else {
          _free(*(undefined8 *)(param_1 + 0xd8));
          lVar7 = *(long *)(param_1 + 0xe8);
        }
        if (lVar7 != -0x8000000000000000) {
          lVar2 = *(long *)(param_1 + 0xf0);
          lVar8 = *(long *)(param_1 + 0xf8);
          if (lVar8 != 0) {
            puVar6 = (undefined8 *)(lVar2 + 8);
            do {
              if (puVar6[-1] != 0) {
                _free(*puVar6);
              }
              puVar6 = puVar6 + 3;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
          if (lVar7 != 0) break;
        }
      }
      else if ((*(ulong *)(param_1 + 0xd0) & 0x7fffffffffffffff) != 0) {
        lVar2 = *(long *)(param_1 + 0xd8);
        break;
      }
    }
    else if (lVar2 == 2) {
      if (*(long *)(param_1 + 0xd0) == -0x8000000000000000 || *(long *)(param_1 + 0xd0) == 0) {
        uVar4 = *(ulong *)(param_1 + 0xe8);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0xd8));
        uVar4 = *(ulong *)(param_1 + 0xe8);
      }
      if ((uVar4 & 0x7fffffffffffffff) != 0) {
        lVar2 = *(long *)(param_1 + 0xf0);
        break;
      }
    }
    return;
  case 7:
    if (*(long *)(param_1 + 200) != 0) {
      _free(*(undefined8 *)(param_1 + 0xd0));
    }
    if (*(long *)(param_1 + 0xe0) != 0) {
      _free(*(undefined8 *)(param_1 + 0xe8));
    }
    if (*(long *)(param_1 + 0x110) == -0x8000000000000000 || *(long *)(param_1 + 0x110) == 0) {
      lVar2 = *(long *)(param_1 + 0xf8);
    }
    else {
      _free(*(undefined8 *)(param_1 + 0x118));
      lVar2 = *(long *)(param_1 + 0xf8);
    }
    if (lVar2 != 0) {
      _free(*(undefined8 *)(param_1 + 0x100));
    }
    if ((*(ulong *)(param_1 + 0x128) & 0x7fffffffffffffff) == 0) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0x130);
    break;
  case 8:
    if (*(long *)(param_1 + 200) != 0) {
      _free(*(undefined8 *)(param_1 + 0xd0));
    }
    FUN_100cdf624(param_1 + 0x110);
    if (*(long *)(param_1 + 0xe0) == -0x8000000000000000 || *(long *)(param_1 + 0xe0) == 0) {
      lVar2 = *(long *)(param_1 + 0xf8);
    }
    else {
      _free(*(undefined8 *)(param_1 + 0xe8));
      lVar2 = *(long *)(param_1 + 0xf8);
    }
    if (lVar2 == -0x8000000000000000) {
      return;
    }
    if (lVar2 == 0) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0x100);
    break;
  case 9:
    if (*puVar5 != 0) {
      _free(*(undefined8 *)(param_1 + 200));
    }
    if (*(long *)(param_1 + 0xd8) != 0) {
      _free(*(undefined8 *)(param_1 + 0xe0));
    }
    if (*(long *)(param_1 + 0xf0) != 0) {
      _free(*(undefined8 *)(param_1 + 0xf8));
    }
    FUN_100de6690(param_1 + 0x200);
    if ((*(long *)(param_1 + 0x108) != -0x8000000000000000) && (*(long *)(param_1 + 0x108) != 0)) {
      _free(*(undefined8 *)(param_1 + 0x110));
    }
    if ((*(long *)(param_1 + 0x120) != -0x8000000000000000) && (*(long *)(param_1 + 0x120) != 0)) {
      _free(*(undefined8 *)(param_1 + 0x128));
    }
    if (*(long *)(param_1 + 0x138) != -0x8000000000000000) {
      func_0x000100e00868();
    }
    if ((*(ulong *)(param_1 + 0x1e8) & 0x7fffffffffffffff) == 0) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0x1f0);
    break;
  default:
    if (*(long *)(param_1 + 200) == 0) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0xd0);
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar2);
  return;
}

