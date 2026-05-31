
/* WARNING: Type propagation algorithm not settling */

void FUN_100c9db44(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (*(char *)(param_1 + 0x340) != '\x03') {
    return;
  }
  if ((*(char *)(param_1 + 0x338) == '\x03') && (*(char *)(param_1 + 0x330) == '\x03')) {
    if (*(char *)(param_1 + 0x328) == '\x03') {
      plVar1 = *(long **)(param_1 + 800);
      if (*plVar1 == 0xcc) {
        *plVar1 = 0x84;
      }
      else {
        (**(code **)(plVar1[2] + 0x20))();
      }
    }
    else if ((*(char *)(param_1 + 0x328) == '\0') && (*(long *)(param_1 + 0x308) != 0)) {
      _free(*(undefined8 *)(param_1 + 0x310));
    }
  }
  if (*(long *)(param_1 + 0x2a0) != 0) {
    _free(*(undefined8 *)(param_1 + 0x2a8));
  }
  uVar4 = *(long *)(param_1 + 0x280) - *(long *)(param_1 + 0x270);
  if (uVar4 != 0) {
    uVar4 = uVar4 / 0x18;
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x270) + 8);
    do {
      if (puVar5[-1] != 0) {
        _free(*puVar5);
      }
      puVar5 = puVar5 + 3;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (*(long *)(param_1 + 0x278) != 0) {
    _free(*(undefined8 *)(param_1 + 0x268));
  }
  FUN_100cf8c18(param_1 + 0x238);
  if (*(long *)(param_1 + 0x88) != 0) {
    _free(*(undefined8 *)(param_1 + 0x90));
  }
  if (*(long *)(param_1 + 0xb8) == -0x8000000000000000 || *(long *)(param_1 + 0xb8) == 0) {
    if (*(long *)(param_1 + 0xd0) == -0x8000000000000000 || *(long *)(param_1 + 0xd0) == 0)
    goto LAB_100e1ca50;
LAB_100e1ca74:
    _free(*(undefined8 *)(param_1 + 0xd8));
    lVar3 = *(long *)(param_1 + 0xa8);
    lVar2 = *(long *)(param_1 + 0xb0);
  }
  else {
    _free(*(undefined8 *)(param_1 + 0xc0));
    if (*(long *)(param_1 + 0xd0) != -0x8000000000000000 && *(long *)(param_1 + 0xd0) != 0)
    goto LAB_100e1ca74;
LAB_100e1ca50:
    lVar3 = *(long *)(param_1 + 0xa8);
    lVar2 = *(long *)(param_1 + 0xb0);
  }
  if (lVar2 != 0) {
    puVar5 = (undefined8 *)(lVar3 + 8);
    do {
      if (puVar5[-1] != 0) {
        _free(*puVar5);
      }
      puVar5 = puVar5 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    _free(lVar3);
  }
  if ((*(ulong *)(param_1 + 0x40) & 0x7fffffffffffffff) == 0) {
    if ((*(ulong *)(param_1 + 0x58) & 0x7fffffffffffffff) == 0) goto LAB_100e1cad4;
LAB_100e1cb04:
    _free(*(undefined8 *)(param_1 + 0x60));
    if ((*(ulong *)(param_1 + 0x70) & 0x7fffffffffffffff) != 0) goto LAB_100e1cb18;
LAB_100e1cae0:
    lVar3 = *(long *)(param_1 + 0x20);
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x48));
    if ((*(ulong *)(param_1 + 0x58) & 0x7fffffffffffffff) != 0) goto LAB_100e1cb04;
LAB_100e1cad4:
    if ((*(ulong *)(param_1 + 0x70) & 0x7fffffffffffffff) == 0) goto LAB_100e1cae0;
LAB_100e1cb18:
    _free(*(undefined8 *)(param_1 + 0x78));
    lVar3 = *(long *)(param_1 + 0x20);
  }
  if (lVar3 != 2) {
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + 0x30);
      lVar2 = *(long *)(param_1 + 0x38);
      if (lVar2 != 0) {
        puVar5 = (undefined8 *)(lVar3 + 8);
        do {
          if (puVar5[-1] != 0) {
            _free(*puVar5);
          }
          puVar5 = puVar5 + 3;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
    }
    else {
      lVar3 = *(long *)(param_1 + 0x30);
      lVar2 = lVar3;
      for (lVar6 = *(long *)(param_1 + 0x38); lVar6 != 0; lVar6 = lVar6 + -1) {
        FUN_100e11e6c(lVar2);
        lVar2 = lVar2 + 0xf0;
      }
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      _free(lVar3);
    }
  }
  lVar3 = *(long *)(param_1 + 0xe8);
  if (lVar3 == -0x8000000000000000) {
    return;
  }
  if (*(long *)(param_1 + 0x118) == -0x8000000000000000 || *(long *)(param_1 + 0x118) == 0) {
    if (*(long *)(param_1 + 0x130) == -0x8000000000000000 || *(long *)(param_1 + 0x130) == 0)
    goto LAB_100ca3aa8;
LAB_100ca3ae4:
    _free(*(undefined8 *)(param_1 + 0x138));
    if (*(long *)(param_1 + 0x148) != -0x8000000000000000 && *(long *)(param_1 + 0x148) != 0)
    goto LAB_100ca3afc;
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x120));
    if (*(long *)(param_1 + 0x130) != -0x8000000000000000 && *(long *)(param_1 + 0x130) != 0)
    goto LAB_100ca3ae4;
LAB_100ca3aa8:
    if (*(long *)(param_1 + 0x148) != -0x8000000000000000 && *(long *)(param_1 + 0x148) != 0) {
LAB_100ca3afc:
      _free(*(undefined8 *)(param_1 + 0x150));
      lVar2 = *(long *)(param_1 + 0x160);
      goto joined_r0x000100ca3b0c;
    }
  }
  lVar2 = *(long *)(param_1 + 0x160);
joined_r0x000100ca3b0c:
  if ((lVar2 != -0x8000000000000000) && (lVar2 != 0)) {
    _free(*(undefined8 *)(param_1 + 0x168));
  }
  if ((*(long *)(param_1 + 0x178) != -0x8000000000000000) && (*(long *)(param_1 + 0x178) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x180));
  }
  lVar2 = *(long *)(param_1 + 0xf0);
  lVar6 = *(long *)(param_1 + 0xf8);
  if (lVar6 != 0) {
    puVar5 = (undefined8 *)(lVar2 + 8);
    do {
      if (puVar5[-1] != 0) {
        _free(*puVar5);
      }
      puVar5 = puVar5 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (lVar3 != 0) {
    _free(lVar2);
  }
  if (*(long *)(param_1 + 400) == -0x8000000000000000 || *(long *)(param_1 + 400) == 0) {
    lVar3 = *(long *)(param_1 + 0x1a8);
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x198));
    lVar3 = *(long *)(param_1 + 0x1a8);
  }
  if ((lVar3 != -0x8000000000000000) && (lVar3 != 0)) {
    _free(*(undefined8 *)(param_1 + 0x1b0));
  }
  if ((*(long *)(param_1 + 0x1c0) != -0x8000000000000000) && (*(long *)(param_1 + 0x1c0) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x1c8));
  }
  lVar3 = *(long *)(param_1 + 0x1d8);
  if (lVar3 != -0x8000000000000000) {
    lVar2 = *(long *)(param_1 + 0x1e0);
    lVar6 = *(long *)(param_1 + 0x1e8);
    if (lVar6 != 0) {
      puVar5 = (undefined8 *)(lVar2 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar3 != 0) {
      _free(lVar2);
    }
  }
  if (*(long *)(param_1 + 0x1f0) == -0x8000000000000000 || *(long *)(param_1 + 0x1f0) == 0) {
    uVar4 = *(ulong *)(param_1 + 0x208);
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x1f8));
    uVar4 = *(ulong *)(param_1 + 0x208);
  }
  if ((uVar4 & 0x7fffffffffffffff) == 0) {
    uVar4 = *(ulong *)(param_1 + 0x220);
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x210));
    uVar4 = *(ulong *)(param_1 + 0x220);
  }
  if ((uVar4 & 0x7fffffffffffffff) == 0) {
    lVar3 = *(long *)(param_1 + 0x108);
    lVar2 = *(long *)(param_1 + 0x110);
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x228));
    lVar3 = *(long *)(param_1 + 0x108);
    lVar2 = *(long *)(param_1 + 0x110);
  }
  if (lVar2 != 0) {
    puVar5 = (undefined8 *)(lVar3 + 8);
    do {
      if (puVar5[-1] != 0) {
        _free(*puVar5);
      }
      puVar5 = puVar5 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (*(long *)(param_1 + 0x100) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar3);
  return;
}

