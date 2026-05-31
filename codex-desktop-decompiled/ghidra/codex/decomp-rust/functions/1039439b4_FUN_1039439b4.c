
void FUN_1039439b4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = param_1[4];
  if (lVar2 == 0 || lVar2 * 9 == -0x11) {
    lVar2 = param_1[1];
    lVar5 = param_1[2];
  }
  else {
    _free(param_1[3] + lVar2 * -8 + -8);
    lVar2 = param_1[1];
    lVar5 = param_1[2];
  }
  if (lVar5 != 0) {
    lVar4 = 0;
    do {
      if (*(long *)(lVar2 + lVar4) != 0) {
        _free(*(undefined8 *)(lVar2 + lVar4 + 8));
      }
      uVar1 = *(ulong *)(lVar2 + lVar4 + 0x18);
      uVar3 = uVar1 ^ 0x8000000000000000;
      if (-1 < (long)uVar1) {
        uVar3 = 6;
      }
      if (3 < uVar3 - 1) {
        if (uVar3 == 0) {
          if (*(long *)(lVar2 + lVar4 + 0x20) != 0) {
            _free(*(undefined8 *)(lVar2 + lVar4 + 0x28));
          }
        }
        else if (uVar3 == 5) {
          func_0x00010393c5bc(lVar2 + lVar4 + 0x20);
        }
        else {
          FUN_1039439b4();
        }
      }
      lVar4 = lVar4 + 0x70;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar2);
    return;
  }
  return;
}

