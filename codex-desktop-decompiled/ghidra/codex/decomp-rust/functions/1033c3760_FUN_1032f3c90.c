
void FUN_1032f3c90(long *param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong in_xzr;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  bVar2 = *(byte *)(param_1 + 0x7e);
  if (bVar2 < 5) {
    if (bVar2 != 0) {
      if (bVar2 != 3) {
        if (bVar2 != 4) {
          return;
        }
        FUN_10333fe64(param_1 + 0x7f);
        *(undefined1 *)((long)param_1 + 0x3f6) = 0;
        goto LAB_1032f3f44;
      }
      lStack_60 = param_1[0x81];
      plStack_58 = param_1 + 0x88;
      plStack_50 = param_1 + 0x82;
      plStack_48 = param_1 + 0x83;
      FUN_1060fb5d4(&lStack_60);
      if (param_1[0x85] != 0) {
        (**(code **)(param_1[0x85] + 0x18))(param_1[0x86]);
      }
      goto LAB_1032f3f78;
    }
    plVar9 = (long *)param_1[0x40];
    if (plVar9 != (long *)0x0) {
      uVar5 = plVar9[0xc];
      do {
        uVar7 = uVar5;
        if (((uint)uVar7 >> 2 & 1) != 0) goto LAB_1032f3d98;
        uVar5 = plVar9[0xc];
      } while (uVar5 != uVar7);
      plVar9[0xc] = uVar7 | 2;
LAB_1032f3d98:
      if ((uVar7 & 5) == 1) {
        (**(code **)(plVar9[10] + 0x10))(plVar9[0xb]);
      }
      lVar4 = *plVar9;
      *plVar9 = lVar4 + -1;
      LORelease();
      if (lVar4 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001034c6514(param_1 + 0x40);
      }
    }
    FUN_1033214bc(param_1 + 0x29);
    if ((param_1[0x26] != -0x8000000000000000) && (param_1[0x26] != 0)) {
      _free(param_1[0x27]);
    }
    if ((param_1[0x2a] != -0x8000000000000000) && (param_1[0x2a] != 0)) {
      _free(param_1[0x2b]);
    }
    __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
              (param_1 + 0x3e);
    lVar4 = *(long *)param_1[0x3e];
    *(long *)param_1[0x3e] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(param_1 + 0x3e);
    }
    if ((param_1[0x2d] != -0x8000000000000000) &&
       (FUN_1033ca244(param_1 + 0x2d), param_1[0x3a] != 0)) {
      _free(param_1[0x3b]);
    }
    plVar9 = (long *)param_1[0x3f];
    LOAcquire();
    lVar4 = plVar9[0x3e];
    plVar9[0x3e] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      LOAcquire();
      lVar4 = plVar9[0x11];
      plVar9[0x11] = lVar4 + 1;
      lVar4 = func_0x0001034d2390(plVar9 + 0x10,lVar4);
      *(ulong *)(lVar4 + 0x1910) = *(ulong *)(lVar4 + 0x1910) | 0x200000000;
      LORelease();
      puVar1 = (ulong *)(plVar9 + 0x22);
      LOAcquire();
      uVar5 = *puVar1;
      *puVar1 = uVar5 | 2;
      LORelease();
      if (uVar5 == 0) {
        lVar4 = plVar9[0x20];
        plVar9[0x20] = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 8))(plVar9[0x21]);
        }
      }
    }
    lVar4 = *plVar9;
    *plVar9 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      func_0x0001034c6e48(param_1 + 0x3f);
    }
  }
  else {
    if (bVar2 == 5) {
      FUN_10333fe64(param_1 + 0x88);
      *(undefined1 *)((long)param_1 + 0x3f5) = 0;
    }
    else if (bVar2 == 6) {
      FUN_10333fe64(param_1 + 0x7f);
    }
    else {
      if (bVar2 != 7) {
        return;
      }
      FUN_10333fe64(param_1 + 0xb1);
      *(undefined1 *)((long)param_1 + 0x3f3) = 0;
      if ((param_1[0xa5] != -0x8000000000000000) && (param_1[0xa5] != 0)) {
        _free(param_1[0xa6]);
      }
      if ((param_1[0xa8] != -0x8000000000000000) && (param_1[0xa8] != 0)) {
        _free(param_1[0xa9]);
      }
      if ((param_1[0xab] != -0x8000000000000000) && (param_1[0xab] != 0)) {
        _free(param_1[0xac]);
      }
      if ((param_1[0xae] != -0x8000000000000000) && (param_1[0xae] != 0)) {
        _free(param_1[0xaf]);
      }
      *(undefined1 *)((long)param_1 + 0x3f4) = 0;
    }
LAB_1032f3f44:
    cVar3 = (char)param_1[0x65];
    if (cVar3 != '\x0e') {
      if ((((*(byte *)((long)param_1 + 0x3f2) & 1) != 0) && (cVar3 != '\x01')) && (cVar3 != '\x06'))
      {
        func_0x00010338e434(param_1 + 0x65);
      }
      *(undefined1 *)((long)param_1 + 0x3f2) = 0;
    }
    *(undefined1 *)((long)param_1 + 0x3f2) = 0;
LAB_1032f3f78:
    FUN_1033214bc(param_1 + 0x49);
    if ((param_1[0x46] != -0x8000000000000000) && (param_1[0x46] != 0)) {
      _free(param_1[0x47]);
    }
    lVar8 = param_1[0x44];
    lVar4 = param_1[0x45] + 1;
    lVar6 = lVar8;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      FUN_103396fdc(lVar6);
      lVar6 = lVar6 + 0xc0;
    }
    if (param_1[0x43] != 0) {
      _free(lVar8);
    }
    if ((param_1[0x41] != 0) && (plVar9 = (long *)param_1[0x42], plVar9 != (long *)0x0)) {
      uVar5 = plVar9[0xc];
      do {
        uVar7 = uVar5;
        if (((uint)uVar7 >> 2 & 1) != 0) goto LAB_1032f4008;
        uVar5 = plVar9[0xc];
      } while (uVar5 != uVar7);
      plVar9[0xc] = uVar7 | 2;
LAB_1032f4008:
      if ((uVar7 & 5) == 1) {
        (**(code **)(plVar9[10] + 0x10))(plVar9[0xb]);
      }
      lVar4 = *plVar9;
      *plVar9 = lVar4 + -1;
      LORelease();
      if (lVar4 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001034c6514(param_1 + 0x42);
      }
    }
    if (param_1[0x2a] != -0x8000000000000000 && param_1[0x2a] != 0) {
      _free(param_1[0x2b]);
    }
    __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
              (param_1 + 0x3e);
    lVar4 = *(long *)param_1[0x3e];
    *(long *)param_1[0x3e] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(param_1 + 0x3e);
    }
    if ((param_1[0x2d] != -0x8000000000000000) &&
       (FUN_1033ca244(param_1 + 0x2d), param_1[0x3a] != 0)) {
      _free(param_1[0x3b]);
    }
    plVar9 = (long *)param_1[0x3f];
    LOAcquire();
    lVar4 = plVar9[0x3e];
    plVar9[0x3e] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      LOAcquire();
      lVar4 = plVar9[0x11];
      plVar9[0x11] = lVar4 + 1;
      lVar4 = func_0x0001034d2390(plVar9 + 0x10,lVar4);
      *(ulong *)(lVar4 + 0x1910) = *(ulong *)(lVar4 + 0x1910) | 0x200000000;
      LORelease();
      puVar1 = (ulong *)(plVar9 + 0x22);
      LOAcquire();
      uVar5 = *puVar1;
      *puVar1 = uVar5 | 2;
      LORelease();
      if (uVar5 == 0) {
        lVar4 = plVar9[0x20];
        plVar9[0x20] = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 8))(plVar9[0x21]);
        }
      }
    }
    lVar4 = *plVar9;
    *plVar9 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      func_0x0001034c6e48(param_1 + 0x3f);
    }
  }
  if (param_1[0xf] == -0x8000000000000000 || param_1[0xf] == 0) {
    if ((param_1[0x12] & 0x7fffffffffffffffU) == 0) goto LAB_1033c3790;
LAB_1033c386c:
    _free(param_1[0x13]);
    if (param_1[0x16] != -0x8000000000000000 && param_1[0x16] != 0) goto LAB_1033c3888;
LAB_1033c37a4:
    if (param_1[0x19] == -0x8000000000000000 || param_1[0x19] == 0) {
LAB_1033c37b4:
      lVar4 = *param_1;
      goto joined_r0x0001033c38ac;
    }
  }
  else {
    _free(param_1[0x10]);
    if ((param_1[0x12] & 0x7fffffffffffffffU) != 0) goto LAB_1033c386c;
LAB_1033c3790:
    if (param_1[0x16] == -0x8000000000000000 || param_1[0x16] == 0) goto LAB_1033c37a4;
LAB_1033c3888:
    _free(param_1[0x17]);
    if (param_1[0x19] == -0x8000000000000000 || param_1[0x19] == 0) goto LAB_1033c37b4;
  }
  _free(param_1[0x1a]);
  lVar4 = *param_1;
joined_r0x0001033c38ac:
  if (lVar4 != 0) {
    _free(param_1[1]);
  }
  if ((param_1[0x1c] != -0x8000000000000000) && (param_1[0x1c] != 0)) {
    _free(param_1[0x1d]);
  }
  if (param_1[3] != 0) {
    _free(param_1[4]);
  }
  if (param_1[6] != 0) {
    _free(param_1[7]);
  }
  if (param_1[9] != 0) {
    _free(param_1[10]);
  }
  if (param_1[0xc] != 0) {
    _free(param_1[0xd]);
  }
  plVar9 = (long *)param_1[0x24];
  if (plVar9 != (long *)0x0) {
    lVar4 = *plVar9;
    *plVar9 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      lVar4 = param_1[0x24];
      FUN_1048c99e8(lVar4 + 0x10);
      if (lVar4 != -1) {
        lVar6 = *(long *)(lVar4 + 8);
        *(long *)(lVar4 + 8) = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(lVar4);
          return;
        }
      }
      return;
    }
  }
  return;
}

