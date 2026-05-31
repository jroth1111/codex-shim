
void FUN_100d47d78(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((char)param_1[0x1b] == '\0') {
    lVar1 = param_1[1];
    lVar4 = param_1[2];
    if (lVar4 != 0) {
      lVar3 = lVar1 + 0x60;
      do {
        if (*(long *)(lVar3 + -0x30) == -0x8000000000000000 || *(long *)(lVar3 + -0x30) == 0) {
          lVar2 = *(long *)(lVar3 + -0x60);
        }
        else {
          _free(*(undefined8 *)(lVar3 + -0x28));
          lVar2 = *(long *)(lVar3 + -0x60);
        }
        if (lVar2 != 0) {
          _free(*(undefined8 *)(lVar3 + -0x58));
        }
        if (*(long *)(lVar3 + -0x18) == -0x8000000000000000 || *(long *)(lVar3 + -0x18) == 0) {
          lVar2 = *(long *)(lVar3 + -0x48);
        }
        else {
          _free(*(undefined8 *)(lVar3 + -0x10));
          lVar2 = *(long *)(lVar3 + -0x48);
        }
        if (lVar2 != 0) {
          _free(*(undefined8 *)(lVar3 + -0x40));
        }
        FUN_100cb56bc(lVar3);
        lVar3 = lVar3 + 0xa8;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (*param_1 != 0) {
      _free(lVar1);
    }
    if (param_1[3] != 0) {
      _free(param_1[4]);
    }
    if ((param_1[6] != -0x8000000000000000) && (param_1[6] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[7]);
      return;
    }
  }
  else if ((char)param_1[0x1b] == '\x03') {
    lVar1 = param_1[0x17];
    lVar4 = param_1[0x18];
    if (lVar4 != 0) {
      lVar3 = lVar1 + 0xb8;
      do {
        if (*(long *)(lVar3 + -0x18) != -0x8000000000000000 && *(long *)(lVar3 + -0x18) != 0) {
          _free(*(undefined8 *)(lVar3 + -0x10));
        }
        FUN_100e0f8ec(lVar3 + -0xb0);
        func_0x000100e16d10(lVar3);
        lVar3 = lVar3 + 0x110;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (param_1[0x16] != 0) {
      _free(lVar1);
    }
    *(undefined1 *)((long)param_1 + 0xd9) = 0;
    func_0x000100da63c8(param_1 + 0x13);
    if ((param_1[0x10] != -0x8000000000000000) && (param_1[0x10] != 0)) {
      _free(param_1[0x11]);
    }
    if (param_1[0xd] != 0) {
      _free(param_1[0xe]);
    }
    *(undefined1 *)((long)param_1 + 0xda) = 0;
  }
  return;
}

