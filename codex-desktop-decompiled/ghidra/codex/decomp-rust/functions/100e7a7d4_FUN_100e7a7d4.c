
void FUN_100e7a7d4(long *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  code *pcVar4;
  
  bVar2 = *(byte *)((long)param_1 + 0x1e9);
  if (bVar2 < 5) {
    if (bVar2 == 0) {
      if (*param_1 == -0x8000000000000000 || *param_1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[1]);
      return;
    }
    if (bVar2 == 3) {
      FUN_100d3e874(param_1 + 0x3e);
    }
    else {
      if (bVar2 != 4) {
        return;
      }
      lVar3 = param_1[0x3e];
      puVar1 = (undefined8 *)param_1[0x3f];
      pcVar4 = (code *)*puVar1;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(lVar3);
      }
      if (puVar1[1] != 0) {
        _free(lVar3);
      }
      if ((param_1[0xe] != -0x8000000000000000) && (param_1[0xe] != 0)) {
        _free(param_1[0xf]);
      }
    }
    if (param_1[0xb] != 0) {
      lVar3 = param_1[0xc];
LAB_100e7a93c:
      _free(lVar3);
    }
LAB_100e7a940:
    bVar2 = *(byte *)((long)param_1 + 0x1ec);
  }
  else {
    if (bVar2 < 7) {
      if (bVar2 == 5) {
        FUN_100d3e874(param_1 + 0x47);
        if (param_1[0x3e] != -0x8000000000000000) {
          if (param_1[0x3e] != 0) {
            _free(param_1[0x3f]);
          }
          if (param_1[0x41] != 0) {
            _free(param_1[0x42]);
          }
          if ((param_1[0x44] != -0x8000000000000000) && (param_1[0x44] != 0)) {
            lVar3 = param_1[0x45];
            goto LAB_100e7a93c;
          }
        }
        goto LAB_100e7a940;
      }
      if (bVar2 != 6) {
        return;
      }
      FUN_100c9749c(param_1 + 0x3e);
    }
    else if (bVar2 == 7) {
      if ((char)param_1[0xec] == '\x03') {
        func_0x000100e86f74(param_1 + 0x5d);
      }
      else if ((char)param_1[0xec] == '\0') {
        func_0x000100e096e4(param_1 + 0x3e);
      }
    }
    else {
      if (bVar2 != 8) {
        return;
      }
      FUN_100ca19bc(param_1 + 0x3e);
      FUN_100e095b4(param_1 + 0x30);
    }
    lVar3 = *(long *)param_1[0x2f];
    *(long *)param_1[0x2f] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E(param_1 + 0x2f);
    }
    if ((*(byte *)((long)param_1 + 0x1eb) & 1) != 0) {
      func_0x000100e096e4(param_1 + 0x11);
    }
    *(undefined1 *)((long)param_1 + 0x1eb) = 0;
    *(undefined2 *)((long)param_1 + 0x1ed) = 0;
    bVar2 = *(byte *)((long)param_1 + 0x1ec);
  }
  if ((((bVar2 & 1) != 0) && (param_1[7] != -0x8000000000000000)) && (param_1[7] != 0)) {
    _free(param_1[8]);
  }
  *(undefined1 *)((long)param_1 + 0x1ec) = 0;
  return;
}

