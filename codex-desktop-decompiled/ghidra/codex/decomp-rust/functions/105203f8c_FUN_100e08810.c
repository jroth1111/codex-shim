
void FUN_100e08810(ulong *param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  uVar3 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar3 = 3;
  }
  if ((long)uVar3 < 2) {
    if (uVar3 == 0) {
      uVar3 = param_1[1];
      FUN_100e44f40(uVar3);
      _free(uVar3);
      plVar4 = (long *)param_1[2];
      if (plVar4 == (long *)0x0) {
        return;
      }
      uVar3 = plVar4[6];
      do {
        uVar5 = uVar3;
        if (((uint)uVar5 >> 2 & 1) != 0) goto LAB_100e08960;
        uVar3 = plVar4[6];
      } while (uVar3 != uVar5);
      plVar4[6] = uVar5 | 2;
LAB_100e08960:
      if ((uVar5 & 5) == 1) {
        (**(code **)(plVar4[4] + 0x10))(plVar4[5]);
      }
      lVar1 = *plVar4;
      *plVar4 = lVar1 + -1;
      LORelease();
      if (lVar1 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      uVar3 = param_1[2];
      uVar5 = *(ulong *)(uVar3 + 0x30);
      if ((uVar5 & 1) != 0) {
        (**(code **)(*(long *)(uVar3 + 0x20) + 0x18))(*(undefined8 *)(uVar3 + 0x28));
      }
      if (((uint)uVar5 >> 3 & 1) != 0) {
        (**(code **)(*(long *)(uVar3 + 0x10) + 0x18))(*(undefined8 *)(uVar3 + 0x18));
      }
      FUN_10517d830(uVar3 + 0x38);
      if (uVar3 == 0xffffffffffffffff) {
        return;
      }
      lVar1 = *(long *)(uVar3 + 8);
      *(long *)(uVar3 + 8) = lVar1 + -1;
      LORelease();
      if (lVar1 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      goto code_r0x000108aa97c4;
    }
    if (uVar3 == 1) {
      param_1 = param_1 + 1;
      plVar4 = (long *)*param_1;
      if (plVar4 == (long *)0x0) {
        return;
      }
      uVar3 = plVar4[8];
      do {
        uVar5 = uVar3;
        if (((uint)uVar5 >> 2 & 1) != 0) goto LAB_100e08874;
        uVar3 = plVar4[8];
      } while (uVar3 != uVar5);
      plVar4[8] = uVar5 | 2;
LAB_100e08874:
      if ((uVar5 & 5) == 1) {
        (**(code **)(plVar4[6] + 0x10))(plVar4[7]);
      }
    }
    else {
LAB_100e088d4:
      param_1 = param_1 + 1;
      plVar4 = (long *)*param_1;
      if (plVar4 == (long *)0x0) {
        return;
      }
      uVar3 = plVar4[8];
      do {
        uVar5 = uVar3;
        if (((uint)uVar5 >> 2 & 1) != 0) goto LAB_100e08900;
        uVar3 = plVar4[8];
      } while (uVar3 != uVar5);
      plVar4[8] = uVar5 | 2;
LAB_100e08900:
      if ((uVar5 & 5) == 1) {
        (**(code **)(plVar4[6] + 0x10))(plVar4[7]);
      }
    }
  }
  else if (uVar3 == 2) {
    if (param_1[1] != 0x8000000000000000 && param_1[1] != 0) {
      _free(param_1[2]);
    }
    FUN_100de6690(param_1 + 4);
    param_1 = param_1 + 0xd;
    plVar4 = (long *)*param_1;
    if (plVar4 == (long *)0x0) {
      return;
    }
    uVar3 = plVar4[8];
    do {
      uVar5 = uVar3;
      if (((uint)uVar5 >> 2 & 1) != 0) goto LAB_100e089f0;
      uVar3 = plVar4[8];
    } while (uVar3 != uVar5);
    plVar4[8] = uVar5 | 2;
LAB_100e089f0:
    if ((uVar5 & 5) == 1) {
      (**(code **)(plVar4[6] + 0x10))(plVar4[7]);
    }
  }
  else {
    if (uVar3 != 3) goto LAB_100e088d4;
    if (param_1[0xd] == 0x8000000000000000 || param_1[0xd] == 0) {
      uVar3 = param_1[3];
    }
    else {
      _free(param_1[0xe]);
      uVar3 = param_1[3];
    }
    if (uVar3 != 0x8000000000000005) {
      FUN_100de6690();
    }
    if (*param_1 != 0) {
      _free(param_1[1]);
    }
    param_1 = param_1 + 0x10;
    plVar4 = (long *)*param_1;
    if (plVar4 == (long *)0x0) {
      return;
    }
    uVar3 = plVar4[8];
    do {
      uVar5 = uVar3;
      if (((uint)uVar5 >> 2 & 1) != 0) goto LAB_100e08a70;
      uVar3 = plVar4[8];
    } while (uVar3 != uVar5);
    plVar4[8] = uVar5 | 2;
LAB_100e08a70:
    if ((uVar5 & 5) == 1) {
      (**(code **)(plVar4[6] + 0x10))(plVar4[7]);
    }
  }
  lVar1 = *plVar4;
  *plVar4 = lVar1 + -1;
  LORelease();
  if (lVar1 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  uVar3 = *param_1;
  uVar5 = *(ulong *)(uVar3 + 0x40);
  if ((uVar5 & 1) != 0) {
    (**(code **)(*(long *)(uVar3 + 0x30) + 0x18))(*(undefined8 *)(uVar3 + 0x38));
  }
  if (((uint)uVar5 >> 3 & 1) != 0) {
    (**(code **)(*(long *)(uVar3 + 0x20) + 0x18))(*(undefined8 *)(uVar3 + 0x28));
  }
  if ((*(long *)(uVar3 + 0x10) != 0) && (uVar5 = *(ulong *)(uVar3 + 0x18), (uVar5 & 3) == 1)) {
    uVar7 = *(undefined8 *)(uVar5 - 1);
    puVar6 = *(undefined8 **)(uVar5 + 7);
    pcVar2 = (code *)*puVar6;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar7);
    }
    if (puVar6[1] != 0) {
      _free(uVar7);
    }
    _free((undefined8 *)(uVar5 - 1));
  }
  if (uVar3 != 0xffffffffffffffff) {
    lVar1 = *(long *)(uVar3 + 8);
    *(long *)(uVar3 + 8) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(uVar3);
      return;
    }
  }
  return;
}

