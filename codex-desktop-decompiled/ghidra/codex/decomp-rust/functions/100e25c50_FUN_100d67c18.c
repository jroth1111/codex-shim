
void FUN_100d67c18(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  cVar1 = *(char *)(param_1 + 0x298);
  if (cVar1 != '\0') {
    if (cVar1 == '\x03') {
      FUN_100da1f14(param_1 + 0x2a0);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_100d8a7d8(param_1 + 0x2a0);
    }
    *(undefined1 *)(param_1 + 0x29a) = 0;
    if ((*(byte *)(param_1 + 0x299) & 1) != 0) {
      FUN_100dddd8c(param_1 + 0x270);
    }
    *(undefined1 *)(param_1 + 0x299) = 0;
    *(undefined2 *)(param_1 + 0x29b) = 0;
    return;
  }
  func_0x000100e0820c(param_1 + 0x100);
  if (*(long *)(param_1 + 0x60) == -0x8000000000000000 || *(long *)(param_1 + 0x60) == 0) {
    if (*(long *)(param_1 + 0x78) == -0x8000000000000000 || *(long *)(param_1 + 0x78) == 0)
    goto LAB_100e25c84;
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x68));
    if (*(long *)(param_1 + 0x78) == -0x8000000000000000 || *(long *)(param_1 + 0x78) == 0)
    goto LAB_100e25c84;
  }
  _free(*(undefined8 *)(param_1 + 0x80));
LAB_100e25c84:
  uVar4 = *(ulong *)(param_1 + 0x90);
  if (uVar4 != 0x800000000000000e) {
    lVar2 = uVar4 + 0x7ffffffffffffffa;
    if (uVar4 < 0x8000000000000006) {
      lVar2 = 6;
    }
    if (lVar2 == 6) {
      FUN_100e0fca4();
    }
    else if ((lVar2 == 4) && (*(long *)(param_1 + 0x98) != 0)) {
      _free(*(undefined8 *)(param_1 + 0xa0));
    }
  }
  FUN_100def764(param_1);
  plVar5 = *(long **)(param_1 + 0xf0);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    *plVar5 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      lVar2 = *(long *)(param_1 + 0xf0);
      if ((*(long *)(lVar2 + 0x10) == 0) && (*(long *)(lVar2 + 0x18) != 0)) {
        _free(*(undefined8 *)(lVar2 + 0x20));
      }
      if (lVar2 != -1) {
        lVar3 = *(long *)(lVar2 + 8);
        *(long *)(lVar2 + 8) = lVar3 + -1;
        LORelease();
        if (lVar3 == 1) {
          DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(lVar2);
          return;
        }
      }
      return;
    }
  }
  return;
}

