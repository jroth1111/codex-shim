
void FUN_100deedc0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar1 = param_1[1];
  lVar5 = param_1[2];
  if (lVar5 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 0x18);
    do {
      if (puVar4[-3] != 0) {
        _free(puVar4[-2]);
      }
      lVar2 = *(long *)*puVar4;
      *(long *)*puVar4 = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf71edb8d2478e79eE(puVar4);
      }
      puVar4 = puVar4 + 5;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (*param_1 != 0) {
    _free(lVar1);
  }
  lVar1 = param_1[4];
  lVar5 = param_1[5];
  if (lVar5 != 0) {
    lVar2 = lVar1 + 0x60;
    do {
      if (*(long *)(lVar2 + -0x30) == -0x8000000000000000 || *(long *)(lVar2 + -0x30) == 0) {
        lVar3 = *(long *)(lVar2 + -0x60);
      }
      else {
        _free(*(undefined8 *)(lVar2 + -0x28));
        lVar3 = *(long *)(lVar2 + -0x60);
      }
      if (lVar3 != 0) {
        _free(*(undefined8 *)(lVar2 + -0x58));
      }
      if (*(long *)(lVar2 + -0x18) == -0x8000000000000000 || *(long *)(lVar2 + -0x18) == 0) {
        lVar3 = *(long *)(lVar2 + -0x48);
      }
      else {
        _free(*(undefined8 *)(lVar2 + -0x10));
        lVar3 = *(long *)(lVar2 + -0x48);
      }
      if (lVar3 != 0) {
        _free(*(undefined8 *)(lVar2 + -0x40));
      }
      FUN_100cb56bc(lVar2);
      lVar2 = lVar2 + 0xa8;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (param_1[3] != 0) {
    _free(lVar1);
  }
  lVar1 = param_1[7];
  lVar5 = param_1[8];
  if (lVar5 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar4[-1] != 0) {
        _free(*puVar4);
      }
      puVar4 = puVar4 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (param_1[6] != 0) {
    _free(lVar1);
  }
  if (param_1[9] != 0) {
    _free(param_1[10]);
  }
  lVar1 = param_1[0xd];
  lVar5 = param_1[0xe];
  if (lVar5 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar4[-1] != 0) {
        _free(*puVar4);
      }
      puVar4 = puVar4 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (param_1[0xc] != 0) {
    _free(lVar1);
  }
  if (param_1[0xf] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_1[0x10]);
    return;
  }
  return;
}

