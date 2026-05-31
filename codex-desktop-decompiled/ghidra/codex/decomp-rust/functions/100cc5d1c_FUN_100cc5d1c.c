
void FUN_100cc5d1c(long param_1)

{
  long lVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  cVar2 = *(char *)(param_1 + 0x261);
  if (cVar2 != '\0') {
    if (cVar2 == '\x03') {
      if (*(char *)(param_1 + 0x4c9) == '\x04') {
        FUN_100cf5bf8(param_1 + 0x4d0);
      }
      else {
        if (*(char *)(param_1 + 0x4c9) != '\x03') goto LAB_100cc5dec;
        if (((*(char *)(param_1 + 0x540) == '\x03') && (*(char *)(param_1 + 0x538) == '\x03')) &&
           (*(char *)(param_1 + 0x4f0) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 0x4f8);
          if (*(long *)(param_1 + 0x500) != 0) {
            (**(code **)(*(long *)(param_1 + 0x500) + 0x18))(*(undefined8 *)(param_1 + 0x508));
          }
        }
      }
      *(undefined1 *)(param_1 + 0x4c8) = 0;
    }
    else {
      if (cVar2 != '\x04') {
        return;
      }
      uVar7 = *(undefined8 *)(param_1 + 0x268);
      puVar6 = *(undefined8 **)(param_1 + 0x270);
      pcVar3 = (code *)*puVar6;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar7);
      }
      if (puVar6[1] != 0) {
        _free(uVar7);
      }
    }
LAB_100cc5dec:
    if ((*(byte *)(param_1 + 0x263) & 1) != 0) {
      FUN_100e21f20(param_1 + 0x268);
    }
    *(undefined1 *)(param_1 + 0x263) = 0;
    return;
  }
  if (*(long *)(param_1 + 0x108) < -0x7ffffffffffffffe || *(long *)(param_1 + 0x108) == 0) {
    if (*(long *)(param_1 + 0x30) == -0x8000000000000000 || *(long *)(param_1 + 0x30) == 0)
    goto LAB_100e21f64;
LAB_100e21f9c:
    _free(*(undefined8 *)(param_1 + 0x38));
    if (*(long *)(param_1 + 0x48) != -0x8000000000000000 && *(long *)(param_1 + 0x48) != 0)
    goto LAB_100e21fb4;
LAB_100e21f74:
    lVar4 = *(long *)(param_1 + 0x60);
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x110));
    if (*(long *)(param_1 + 0x30) != -0x8000000000000000 && *(long *)(param_1 + 0x30) != 0)
    goto LAB_100e21f9c;
LAB_100e21f64:
    if (*(long *)(param_1 + 0x48) == -0x8000000000000000 || *(long *)(param_1 + 0x48) == 0)
    goto LAB_100e21f74;
LAB_100e21fb4:
    _free(*(undefined8 *)(param_1 + 0x50));
    lVar4 = *(long *)(param_1 + 0x60);
  }
  if ((lVar4 != -0x8000000000000000) && (lVar4 != 0)) {
    _free(*(undefined8 *)(param_1 + 0x68));
  }
  if ((*(long *)(param_1 + 0x78) != -0x8000000000000000) && (*(long *)(param_1 + 0x78) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x80));
  }
  if ((*(long *)(param_1 + 0x90) != -0x8000000000000000) && (*(long *)(param_1 + 0x90) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x98));
  }
  uVar5 = *(ulong *)(param_1 + 0x1d0);
  if (uVar5 != 0x800000000000000e) {
    lVar4 = uVar5 + 0x7ffffffffffffffa;
    if (uVar5 < 0x8000000000000006) {
      lVar4 = 6;
    }
    if (lVar4 == 6) {
      FUN_100e0fca4(param_1 + 0x1d0);
      lVar4 = *(long *)(param_1 + 0x120);
      goto joined_r0x000100e22090;
    }
    if ((lVar4 == 4) && (*(long *)(param_1 + 0x1d8) != 0)) {
      _free(*(undefined8 *)(param_1 + 0x1e0));
    }
  }
  lVar4 = *(long *)(param_1 + 0x120);
joined_r0x000100e22090:
  if (((lVar4 != -0x7fffffffffffffff) && (lVar4 != -0x8000000000000000)) && (lVar4 != 0)) {
    _free(*(undefined8 *)(param_1 + 0x128));
  }
  lVar4 = *(long *)(param_1 + 0x138);
  if (((lVar4 != -0x7fffffffffffffff) && (lVar4 != -0x8000000000000000)) && (lVar4 != 0)) {
    _free(*(undefined8 *)(param_1 + 0x140));
  }
  lVar4 = *(long *)(param_1 + 0x150);
  if (((lVar4 != -0x7fffffffffffffff) && (lVar4 != -0x8000000000000000)) && (lVar4 != 0)) {
    _free(*(undefined8 *)(param_1 + 0x158));
  }
  if ((*(long *)(param_1 + 0xa8) != -0x8000000000000000) && (*(long *)(param_1 + 0xa8) != 0)) {
    _free(*(undefined8 *)(param_1 + 0xb0));
  }
  if ((*(long *)(param_1 + 0xc0) != -0x8000000000000000) && (*(long *)(param_1 + 0xc0) != 0)) {
    _free(*(undefined8 *)(param_1 + 200));
  }
  lVar4 = *(long *)(param_1 + 0x1b0);
  if ((lVar4 != -0x7ffffffffffffffd) && (-0x7ffffffffffffffe < lVar4)) {
    lVar1 = *(long *)(param_1 + 0x1b8);
    lVar8 = *(long *)(param_1 + 0x1c0);
    if (lVar8 != 0) {
      puVar6 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (lVar4 != 0) {
      _free(lVar1);
    }
  }
  if (*(long *)(param_1 + 0xd8) == -0x8000000000000000 || *(long *)(param_1 + 0xd8) == 0) {
    lVar4 = *(long *)(param_1 + 0x168);
  }
  else {
    _free(*(undefined8 *)(param_1 + 0xe0));
    lVar4 = *(long *)(param_1 + 0x168);
  }
  if (lVar4 != -0x7ffffffffffffffe) {
    if (((lVar4 != -0x7fffffffffffffff) && (lVar4 != -0x8000000000000000)) && (lVar4 != 0)) {
      _free(*(undefined8 *)(param_1 + 0x170));
    }
    lVar4 = *(long *)(param_1 + 0x180);
    if (((lVar4 != -0x7fffffffffffffff) && (lVar4 != -0x8000000000000000)) && (lVar4 != 0)) {
      _free(*(undefined8 *)(param_1 + 0x188));
    }
    lVar4 = *(long *)(param_1 + 0x198);
    if (((lVar4 != -0x7fffffffffffffff) && (lVar4 != -0x8000000000000000)) && (lVar4 != 0)) {
      _free(*(undefined8 *)(param_1 + 0x1a0));
    }
  }
  lVar4 = *(long *)(param_1 + 0xf0);
  if (lVar4 != -0x8000000000000000) {
    uVar7 = *(undefined8 *)(param_1 + 0xf8);
    FUN_100e40160(uVar7,*(undefined8 *)(param_1 + 0x100));
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(uVar7);
      return;
    }
  }
  return;
}

