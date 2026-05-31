
void FUN_100d80a18(long *param_1)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  bVar1 = *(byte *)((long)param_1 + 0x319);
  if (bVar1 < 6) {
    if (bVar1 == 3) {
      if ((char)param_1[0x72] != '\x03') {
        return;
      }
      if ((char)param_1[0x71] != '\x03') {
        return;
      }
      if ((char)param_1[0x68] != '\x04') {
        return;
      }
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x69);
      if (param_1[0x6a] == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000100d80b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[0x6a] + 0x18))(param_1[0x6b]);
      return;
    }
    if (bVar1 == 4) {
      FUN_100d41eac(param_1 + 100);
    }
    else {
      if (bVar1 != 5) {
        return;
      }
      if ((((char)param_1[0x79] == '\x03') && ((char)param_1[0x78] == '\x03')) &&
         (((char)param_1[0x77] == '\x03' && ((char)param_1[0x6e] == '\x04')))) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x6f);
        if (param_1[0x70] != 0) {
          (**(code **)(param_1[0x70] + 0x18))(param_1[0x71]);
        }
      }
    }
  }
  else {
    if (bVar1 == 6) {
      func_0x000100d50dec(param_1 + 100);
    }
    else if (bVar1 == 7) {
      if ((char)param_1[0x114] == '\x03') {
        FUN_100cba81c(param_1 + 0x67);
      }
      FUN_100e068b8(param_1 + 0x115);
    }
    else {
      if (bVar1 != 8) {
        return;
      }
      if ((((char)param_1[0x72] == '\x03') && ((char)param_1[0x71] == '\x03')) &&
         ((char)param_1[0x68] == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x69);
        if (param_1[0x6a] != 0) {
          (**(code **)(param_1[0x6a] + 0x18))(param_1[0x6b]);
        }
      }
    }
    FUN_100e13e9c(param_1 + 0x2e);
    *(undefined1 *)(param_1 + 99) = 0;
    lVar6 = param_1[0x5f];
    lVar4 = param_1[0x60] + 1;
    lVar3 = lVar6;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      FUN_100e02a24(lVar3);
      lVar3 = lVar3 + 0xc0;
    }
    if (param_1[0x5e] != 0) {
      _free(lVar6);
    }
  }
  if (*param_1 == 3) {
    return;
  }
  if (param_1[0xc] == -0x8000000000000000 || param_1[0xc] == 0) {
    lVar4 = param_1[6];
  }
  else {
    _free(param_1[0xd]);
    lVar4 = param_1[6];
  }
  if (lVar4 != 0) {
    _free(param_1[7]);
  }
  if (param_1[0xf] == -0x8000000000000000 || param_1[0xf] == 0) {
    if (param_1[0x12] == -0x8000000000000000 || param_1[0x12] == 0) {
LAB_100e13efc:
      lVar4 = param_1[0x23];
      goto joined_r0x000100e13f50;
    }
  }
  else {
    _free(param_1[0x10]);
    if (param_1[0x12] == -0x8000000000000000 || param_1[0x12] == 0) goto LAB_100e13efc;
  }
  _free(param_1[0x13]);
  lVar4 = param_1[0x23];
joined_r0x000100e13f50:
  if (-0x7ffffffffffffffe < lVar4) {
    lVar3 = param_1[0x24];
    lVar6 = param_1[0x25];
    if (lVar6 != 0) {
      puVar7 = (undefined8 *)(lVar3 + 8);
      do {
        if (puVar7[-1] != 0) {
          _free(*puVar7);
        }
        puVar7 = puVar7 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar4 != 0) {
      _free(lVar3);
    }
  }
  uVar5 = param_1[0x27];
  if (uVar5 != 0x8000000000000003) {
    bVar2 = uVar5 != 0x8000000000000000;
    if (uVar5 < 0x8000000000000001) {
      uVar5 = 0;
    }
    if ((bVar2) && ((uVar5 & 0x7fffffffffffffff) == 0)) {
      FUN_100e79780(param_1 + 0x27);
    }
  }
  if (param_1[0x15] == -0x8000000000000000) {
    lVar4 = *param_1;
  }
  else {
    FUN_100c973ec();
    lVar4 = *param_1;
  }
  if (lVar4 == 2) {
    lVar4 = param_1[9];
  }
  else {
    FUN_100e79780(param_1 + 2);
    lVar4 = param_1[9];
  }
  if (lVar4 != 0) {
    _free(param_1[10]);
  }
  if (param_1[0x1b] != -0x8000000000000000) {
    if (param_1[0x1b] != 0) {
      _free(param_1[0x1c]);
    }
    if ((param_1[0x1e] != -0x8000000000000000) && (param_1[0x1e] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[0x1f]);
      return;
    }
  }
  return;
}

