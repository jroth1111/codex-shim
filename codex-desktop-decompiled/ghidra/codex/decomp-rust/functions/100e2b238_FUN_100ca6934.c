
void FUN_100ca6934(long *param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  bVar2 = *(byte *)(param_1 + 0x3e);
  if (bVar2 < 4) {
    if (bVar2 == 0) {
      if (*param_1 != 0) {
        _free(param_1[1]);
      }
      if (param_1[3] == -0x8000000000000000 || param_1[3] == 0) {
        lVar5 = param_1[6];
      }
      else {
        _free(param_1[4]);
        lVar5 = param_1[6];
      }
      if (lVar5 != -0x8000000000000000) {
        lVar1 = param_1[7];
        lVar6 = param_1[8];
        if (lVar6 != 0) {
          puVar7 = (undefined8 *)(lVar1 + 8);
          do {
            if (puVar7[-1] != 0) {
              _free(*puVar7);
            }
            puVar7 = puVar7 + 3;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        if (lVar5 != 0) {
          _free(lVar1);
        }
      }
      lVar5 = param_1[9];
      if (lVar5 != -0x8000000000000000) {
        lVar1 = param_1[10];
        lVar6 = param_1[0xb];
        if (lVar6 != 0) {
          puVar7 = (undefined8 *)(lVar1 + 8);
          do {
            if (puVar7[-1] != 0) {
              _free(*puVar7);
            }
            puVar7 = puVar7 + 3;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        if (lVar5 != 0) {
          _free(lVar1);
        }
      }
      lVar5 = param_1[0x20];
      if (-0x7ffffffffffffffd < lVar5) {
        lVar1 = param_1[0x21];
        lVar6 = param_1[0x22];
        if (lVar6 != 0) {
          puVar7 = (undefined8 *)(lVar1 + 8);
          do {
            if (puVar7[-1] != 0) {
              _free(*puVar7);
            }
            puVar7 = puVar7 + 3;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        if (lVar5 != 0) {
          _free(lVar1);
        }
      }
      uVar4 = param_1[0x24];
      if (uVar4 != 0x8000000000000003) {
        bVar3 = uVar4 != 0x8000000000000000;
        if (uVar4 < 0x8000000000000001) {
          uVar4 = 0;
        }
        if ((bVar3) && ((uVar4 & 0x7fffffffffffffff) == 0)) {
          FUN_100e79780(param_1 + 0x24);
        }
      }
      if (param_1[0xc] != -0x8000000000000000) {
        if (param_1[0xc] != 0) {
          _free(param_1[0xd]);
        }
        if ((param_1[0xf] != -0x8000000000000000) && (param_1[0xf] != 0)) {
          _free(param_1[0x10]);
        }
      }
      if ((param_1[0x12] != -0x8000000000000000) && (param_1[0x12] != 0)) {
        _free(param_1[0x13]);
      }
      lVar5 = param_1[0x1d];
      if (((lVar5 != -0x7fffffffffffffff) && (lVar5 != -0x8000000000000000)) && (lVar5 != 0)) {
        _free(param_1[0x1e]);
      }
      if (param_1[0x15] != -0x8000000000000000) {
        if (param_1[0x15] != 0) {
          _free(param_1[0x16]);
        }
        if ((param_1[0x18] != -0x8000000000000000) && (param_1[0x18] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(param_1[0x19]);
          return;
        }
      }
      return;
    }
    if (bVar2 != 3) {
      return;
    }
    func_0x000100ca65f4(param_1 + 0x3f);
    *(undefined2 *)((long)param_1 + 499) = 0;
    bVar2 = *(byte *)((long)param_1 + 0x1f1);
  }
  else {
    if (bVar2 == 4) {
      func_0x000100d2db44(param_1 + 0x3f);
    }
    else if (bVar2 == 5) {
      if ((((char)param_1[0x4f] == '\x03') && ((char)param_1[0x4e] == '\x03')) &&
         (((char)param_1[0x4d] == '\x03' && ((char)param_1[0x44] == '\x04')))) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x45);
        if (param_1[0x46] != 0) {
          (**(code **)(param_1[0x46] + 0x18))(param_1[0x47]);
        }
      }
    }
    else {
      if (bVar2 != 6) {
        return;
      }
      FUN_100d28c3c(param_1 + 0x3f);
    }
    *(undefined1 *)((long)param_1 + 0x1f2) = 0;
    *(undefined2 *)((long)param_1 + 499) = 0;
    bVar2 = *(byte *)((long)param_1 + 0x1f1);
  }
  if (((bVar2 & 1) != 0) && (param_1[0x2d] != 0)) {
    _free(param_1[0x2e]);
  }
  *(undefined1 *)((long)param_1 + 0x1f1) = 0;
  return;
}

