
void FUN_100d48b74(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  
  bVar2 = *(byte *)(param_1 + 0x3f8);
  if (bVar2 < 5) {
    if (bVar2 == 0) {
      lVar4 = 0;
      if (0x8000000000000001 < *(ulong *)(param_1 + 0x58)) {
        lVar4 = *(ulong *)(param_1 + 0x58) + 0x7ffffffffffffffe;
      }
      if (lVar4 == 1) {
        if (*(long *)(param_1 + 0x60) != 0) {
          _free(*(undefined8 *)(param_1 + 0x68));
        }
      }
      else if (lVar4 == 0) {
        FUN_100e3d46c();
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        _free(*(undefined8 *)(param_1 + 0x18));
      }
      if ((*(ulong *)(param_1 + 0x28) & 0x7fffffffffffffff) == 0) {
        lVar4 = *(long *)(param_1 + 0x40);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x30));
        lVar4 = *(long *)(param_1 + 0x40);
      }
      if ((lVar4 == -0x8000000000000000) || (lVar4 == 0)) {
        return;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      goto code_r0x000108aa97c4;
    }
    if (bVar2 == 3) {
      if (*(char *)(param_1 + 0x700) == '\x03') {
        if (*(char *)(param_1 + 0x6f8) == '\x03') {
          FUN_100d4fbc0(param_1 + 0x508);
        }
        else if (*(char *)(param_1 + 0x6f8) == '\0') {
          func_0x000100e37f24(param_1 + 0x450);
        }
        FUN_100ca4ff4(param_1 + 0x418);
      }
    }
    else {
      if (bVar2 != 4) {
        return;
      }
      if (*(char *)(param_1 + 0x6b0) == '\x03') {
        FUN_100d4fbc0(param_1 + 0x4c0);
      }
      else if (*(char *)(param_1 + 0x6b0) == '\0') {
        func_0x000100e37f24(param_1 + 0x408);
      }
    }
LAB_100d48d14:
    if ((*(byte *)(param_1 + 0x3fe) & 1) != 0) {
      FUN_100e3d46c(param_1 + 0x340);
    }
    *(undefined1 *)(param_1 + 0x3fe) = 0;
  }
  else {
    if (bVar2 == 5) {
      if (*(char *)(param_1 + 0x6b8) == '\x03') {
        FUN_100d4fbc0(param_1 + 0x4c8);
      }
      else if (*(char *)(param_1 + 0x6b8) == '\0') {
        func_0x000100e37f24(param_1 + 0x410);
      }
      bVar2 = *(byte *)(param_1 + 0x400);
joined_r0x000100d48c2c:
      if ((bVar2 & 1) != 0) {
        puVar1 = (undefined8 *)(param_1 + 0x3f0);
        __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
                  (puVar1);
        lVar4 = *(long *)*puVar1;
        *(long *)*puVar1 = lVar4 + -1;
        LORelease();
        if (lVar4 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(puVar1);
        }
      }
      *(undefined1 *)(param_1 + 0x400) = 0;
      if ((*(byte *)(param_1 + 0x401) & 1) != 0) {
        FUN_100d0d8d0(param_1 + 0x408);
      }
      *(undefined1 *)(param_1 + 0x401) = 0;
      *(undefined1 *)(param_1 + 0x404) = 0;
      goto LAB_100d48d14;
    }
    if (bVar2 == 6) {
      if (*(char *)(param_1 + 0x6b0) == '\x03') {
        FUN_100d4fbc0(param_1 + 0x4c0);
      }
      else if (*(char *)(param_1 + 0x6b0) == '\0') {
        func_0x000100e37f24(param_1 + 0x408);
      }
      *(undefined2 *)(param_1 + 0x402) = 0;
      bVar2 = *(byte *)(param_1 + 0x400);
      goto joined_r0x000100d48c2c;
    }
    if (bVar2 != 7) {
      return;
    }
    if (*(char *)(param_1 + 0x700) == '\x03') {
      if (*(char *)(param_1 + 0x6f8) == '\x03') {
        FUN_100d4fbc0(param_1 + 0x508);
      }
      else if (*(char *)(param_1 + 0x6f8) == '\0') {
        func_0x000100e37f24(param_1 + 0x450);
      }
      FUN_100ca4ff4(param_1 + 0x418);
    }
  }
  if ((*(byte *)(param_1 + 0x3fb) & 1) != 0) {
    if (*(long *)(param_1 + 0x310) != 0) {
      _free(*(undefined8 *)(param_1 + 0x318));
    }
    if (*(long *)(param_1 + 0x328) != 0) {
      _free(*(undefined8 *)(param_1 + 0x330));
    }
  }
  *(undefined1 *)(param_1 + 0x3fb) = 0;
  if (((*(byte *)(param_1 + 0x3fc) & 1) != 0) && (*(long *)(param_1 + 0x2f8) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x300));
  }
  *(undefined1 *)(param_1 + 0x3fc) = 0;
  *(undefined1 *)(param_1 + 0x405) = 0;
  if (((0x8000000000000002 < *(ulong *)(param_1 + 0x228)) &&
      (*(ulong *)(param_1 + 0x228) == 0x8000000000000003)) && (*(long *)(param_1 + 0x230) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x238));
  }
  *(undefined1 *)(param_1 + 0x3ff) = 0;
  if (*(long *)(param_1 + 0x210) != 0) {
    _free(*(undefined8 *)(param_1 + 0x218));
  }
  *(undefined1 *)(param_1 + 0x3fd) = 0;
  if ((*(long *)(param_1 + 0x150) == -0x8000000000000000) || (*(long *)(param_1 + 0x150) == 0)) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x158);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(uVar3);
  return;
}

