
void FUN_1025fdcbc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  FUN_1025fb810();
  if (*(long *)(param_1 + 0x1f8) != 0) {
    _free(*(undefined8 *)(param_1 + 0x200));
  }
  if (*(long *)(param_1 + 0x210) != 0) {
    _free(*(undefined8 *)(param_1 + 0x218));
  }
  if (*(long *)(param_1 + 0x270) == -0x8000000000000000 || *(long *)(param_1 + 0x270) == 0) {
    lVar1 = *(long *)(param_1 + 0x228);
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x278));
    lVar1 = *(long *)(param_1 + 0x228);
  }
  if (lVar1 != 0) {
    _free(*(undefined8 *)(param_1 + 0x230));
  }
  lVar2 = *(long *)(param_1 + 0x248);
  lVar1 = *(long *)(param_1 + 0x250);
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)(lVar2 + 8);
    do {
      if (puVar4[-1] != 0) {
        _free(*puVar4);
      }
      puVar4 = puVar4 + 3;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  if (*(long *)(param_1 + 0x240) != 0) {
    _free(lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x260);
  lVar1 = *(long *)(param_1 + 0x268);
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)(lVar2 + 8);
    do {
      if (puVar4[-1] != 0) {
        _free(*puVar4);
      }
      puVar4 = puVar4 + 3;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  if (*(long *)(param_1 + 600) != 0) {
    _free(lVar2);
  }
  lVar1 = *(long *)(param_1 + 0x2b8);
  if (-0x7ffffffffffffffe < lVar1) {
    lVar3 = *(long *)(param_1 + 0x2c0);
    lVar2 = *(long *)(param_1 + 0x2c8);
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (lVar1 != 0) {
      _free(lVar3);
    }
  }
  if (*(long *)(param_1 + 0x288) != -0x8000000000000000) {
    if (*(long *)(param_1 + 0x288) != 0) {
      _free(*(undefined8 *)(param_1 + 0x290));
    }
    if ((*(long *)(param_1 + 0x2a0) != -0x8000000000000000) && (*(long *)(param_1 + 0x2a0) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)(param_1 + 0x2a8));
      return;
    }
  }
  return;
}

