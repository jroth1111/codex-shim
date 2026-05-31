
void FUN_100e7e654(long *param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  
  bVar3 = *(byte *)(param_1 + 0x3c);
  if (bVar3 < 4) {
    if (bVar3 == 0) {
      if (param_1[3] == -0x7ffffffffffffffb) {
        lVar4 = param_1[5];
        lVar1 = lVar4;
        for (lVar2 = param_1[6]; lVar2 != 0; lVar2 = lVar2 + -1) {
          FUN_100e06c08(lVar1);
          lVar1 = lVar1 + 0x38;
        }
        if (param_1[4] != 0) {
          _free(lVar4);
        }
      }
      else {
        FUN_100e139e8();
      }
      lVar1 = param_1[1];
      lVar4 = param_1[2];
      if (lVar4 != 0) {
        puVar5 = (undefined8 *)(lVar1 + 8);
        do {
          if (puVar5[-1] != 0) {
            _free(*puVar5);
          }
          puVar5 = puVar5 + 3;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      if (*param_1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar1);
      return;
    }
    if (bVar3 != 3) {
      return;
    }
    FUN_100d6d4f0(param_1 + 0x40);
    lVar4 = param_1[0x3e];
    lVar1 = lVar4;
    for (lVar2 = param_1[0x3f]; lVar2 != 0; lVar2 = lVar2 + -1) {
      FUN_100e06c08(lVar1);
      lVar1 = lVar1 + 0x38;
    }
    if (param_1[0x3d] != 0) {
      _free(lVar4);
    }
  }
  else if (bVar3 == 4) {
    func_0x000100d50dec(param_1 + 0x55);
    FUN_100e02a24(param_1 + 0x3d);
  }
  else {
    if (bVar3 != 5) {
      return;
    }
    FUN_100ca1af4(param_1 + 0x3d);
  }
  if ((*(byte *)((long)param_1 + 0x1e1) & 1) != 0) {
    lVar1 = param_1[0x3a];
    lVar4 = param_1[0x3b];
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (param_1[0x39] != 0) {
      _free(lVar1);
    }
  }
  *(undefined1 *)((long)param_1 + 0x1e1) = 0;
  return;
}

