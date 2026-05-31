
void FUN_100d2db44(long *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  cVar2 = (char)param_1[0x70];
  if (cVar2 == '\x04') {
    FUN_100d871c8(param_1 + 0x9d8);
    lVar5 = param_1[0x9cc] + 0x7ffffffffffffffa;
    if ((ulong)param_1[0x9cc] < 0x8000000000000006) {
      lVar5 = 6;
    }
    if (lVar5 == 6) {
      FUN_100e0fca4(param_1 + 0x9cc);
    }
    else if ((lVar5 == 4) && (param_1[0x9cd] != 0)) {
      _free(param_1[0x9ce]);
    }
    if (param_1[0x9c9] != 0) {
      _free(param_1[0x9ca]);
    }
    if (param_1[0x9c6] != 0) {
      _free(param_1[0x9c7]);
    }
    if (param_1[0x9c3] != 0) {
      _free(param_1[0x9c4]);
    }
    if (param_1[0x51a] != 2) {
      FUN_100de93d0(param_1 + 0x51a);
    }
    if (param_1[0x71] != 2) {
      FUN_100de93d0(param_1 + 0x71);
    }
  }
  else {
    if (cVar2 != '\x03') {
      if (cVar2 != '\0') {
        return;
      }
      goto LAB_100d2dc78;
    }
    if ((((char)param_1[0x7f] == '\x03') && ((char)param_1[0x7e] == '\x03')) &&
       ((char)param_1[0x75] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x76);
      if (param_1[0x77] != 0) {
        (**(code **)(param_1[0x77] + 0x18))(param_1[0x78]);
      }
    }
  }
  param_1 = param_1 + 0x39;
LAB_100d2dc78:
  if (*param_1 == -0x8000000000000000 || *param_1 == 0) {
    lVar5 = param_1[3];
  }
  else {
    _free(param_1[1]);
    lVar5 = param_1[3];
  }
  if (lVar5 != -0x8000000000000000) {
    lVar1 = param_1[4];
    lVar6 = param_1[5];
    if (lVar6 != 0) {
      puVar7 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar7[-1] != 0) {
          _free(*puVar7);
        }
        puVar7 = puVar7 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar5 != 0) {
      _free(lVar1);
    }
  }
  lVar5 = param_1[6];
  if (lVar5 != -0x8000000000000000) {
    lVar1 = param_1[7];
    lVar6 = param_1[8];
    if (lVar6 != 0) {
      puVar7 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar7[-1] != 0) {
          _free(*puVar7);
        }
        puVar7 = puVar7 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar5 != 0) {
      _free(lVar1);
    }
  }
  lVar5 = param_1[0x23];
  if (-0x7ffffffffffffffd < lVar5) {
    lVar1 = param_1[0x24];
    lVar6 = param_1[0x25];
    if (lVar6 != 0) {
      puVar7 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar7[-1] != 0) {
          _free(*puVar7);
        }
        puVar7 = puVar7 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar5 != 0) {
      _free(lVar1);
    }
  }
  uVar4 = param_1[0x27];
  if (uVar4 != 0x8000000000000003) {
    bVar3 = uVar4 != 0x8000000000000000;
    if (uVar4 < 0x8000000000000001) {
      uVar4 = 0;
    }
    if ((bVar3) && ((uVar4 & 0x7fffffffffffffff) == 0)) {
      FUN_100e79780(param_1 + 0x27);
    }
  }
  if (param_1[9] != -0x8000000000000000) {
    if (param_1[9] != 0) {
      _free(param_1[10]);
    }
    if ((param_1[0xc] != -0x8000000000000000) && (param_1[0xc] != 0)) {
      _free(param_1[0xd]);
    }
  }
  if (param_1[0xf] != -0x8000000000000000) {
    if (param_1[0xf] != 0) {
      _free(param_1[0x10]);
    }
    if ((param_1[0x12] != -0x8000000000000000) && (param_1[0x12] != 0)) {
      _free(param_1[0x13]);
    }
  }
  lVar5 = param_1[0x20];
  if (((lVar5 != -0x7fffffffffffffff) && (lVar5 != -0x8000000000000000)) && (lVar5 != 0)) {
    _free(param_1[0x21]);
  }
  if (1 < param_1[0x2c] + 0x7ffffffffffffffbU) {
    FUN_100de6690(param_1 + 0x2c);
  }
  lVar5 = param_1[0x17];
  if (lVar5 != -0x8000000000000000) {
    lVar1 = param_1[0x18];
    lVar6 = param_1[0x19];
    if (lVar6 != 0) {
      puVar7 = (undefined8 *)(lVar1 + 0x20);
      do {
        if (puVar7[-4] != 0) {
          _free(puVar7[-3]);
        }
        if (puVar7[-1] != 0) {
          _free(*puVar7);
        }
        puVar7 = puVar7 + 6;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar5 != 0) {
      _free(lVar1);
    }
  }
  if ((param_1[0x1a] != -0x8000000000000000) && (param_1[0x1a] != 0)) {
    _free(param_1[0x1b]);
  }
  if ((param_1[0x1d] != -0x8000000000000000) && (param_1[0x1d] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_1[0x1e]);
    return;
  }
  return;
}

