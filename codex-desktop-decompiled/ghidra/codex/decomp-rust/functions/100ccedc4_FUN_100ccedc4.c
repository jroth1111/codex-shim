
void FUN_100ccedc4(long *param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  cVar1 = (char)param_1[0x57];
  if (cVar1 == '\0') {
    if (*param_1 != 0) {
      _free(param_1[1]);
    }
    if (param_1[9] == -0x8000000000000000 || param_1[9] == 0) {
      if (param_1[0xc] == -0x8000000000000000 || param_1[0xc] == 0) goto LAB_100ccee90;
    }
    else {
      _free(param_1[10]);
      if (param_1[0xc] == -0x8000000000000000 || param_1[0xc] == 0) goto LAB_100ccee90;
    }
    _free(param_1[0xd]);
LAB_100ccee90:
    FUN_100cdf624(param_1 + 0xf);
    lVar2 = *(long *)param_1[0x15];
    *(long *)param_1[0x15] = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1bbe1c54e4418fd8E();
    }
    lVar2 = *(long *)param_1[0x16];
    *(long *)param_1[0x16] = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
    }
    plVar3 = (long *)param_1[0x17];
    if (plVar3 != (long *)0x0) {
      lVar2 = *plVar3;
      *plVar3 = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
    }
    if (param_1[3] != 0) {
      _free(param_1[4]);
    }
    if (param_1[6] == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_1[7]);
    return;
  }
  if (cVar1 != '\x03') {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_100ceb744(param_1 + 0x58);
    goto LAB_100ccefb8;
  }
  if ((char)param_1[0x75] == '\0') {
    plVar3 = (long *)param_1[0x73];
    if (plVar3 != (long *)0x0) {
      lVar2 = *plVar3;
      *plVar3 = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0x73);
      }
    }
    if (param_1[0x65] == -0x8000000000000000 || param_1[0x65] == 0) {
      lVar2 = param_1[0x68];
    }
    else {
      _free(param_1[0x66]);
      lVar2 = param_1[0x68];
    }
    if (lVar2 != -0x7ffffffffffffffb) {
      FUN_100de6690(param_1 + 0x68);
    }
  }
  *(undefined1 *)((long)param_1 + 0x2ba) = 0;
  plVar3 = (long *)param_1[0x61];
  if (*plVar3 == 1) {
    uVar8 = plVar3[1];
    if ((uVar8 & 3) == 1) {
      puVar7 = (undefined8 *)(uVar8 - 1);
      uVar9 = *puVar7;
      puVar5 = *(undefined8 **)(uVar8 + 7);
      pcVar4 = (code *)*puVar5;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar9);
      }
      if (puVar5[1] != 0) {
        _free(uVar9);
      }
      goto LAB_100ccef94;
    }
  }
  else if ((*plVar3 == 0) && (plVar3[2] != 0)) {
    puVar7 = (undefined8 *)plVar3[1];
LAB_100ccef94:
    _free(puVar7);
  }
  _free(plVar3);
LAB_100ccefb8:
  *(undefined1 *)((long)param_1 + 0x2b9) = 0;
  FUN_100e5e558(param_1 + 0x31);
  lVar2 = param_1[0x2f];
  lVar6 = param_1[0x30];
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
  if (param_1[0x2e] != 0) {
    _free(lVar2);
  }
  if (param_1[0x2b] != 0) {
    _free(param_1[0x2c]);
  }
  if (param_1[0x28] != 0) {
    _free(param_1[0x29]);
  }
  if (param_1[0x25] != 0) {
    _free(param_1[0x26]);
  }
  plVar3 = (long *)param_1[0x23];
  if (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    *plVar3 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0x23);
    }
  }
  lVar2 = *(long *)param_1[0x22];
  *(long *)param_1[0x22] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(param_1 + 0x22);
  }
  lVar2 = *(long *)param_1[0x21];
  *(long *)param_1[0x21] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1bbe1c54e4418fd8E(param_1 + 0x21);
  }
  *(undefined4 *)((long)param_1 + 699) = 0;
  return;
}

