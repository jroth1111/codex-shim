
void FUN_100d21a7c(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  bVar1 = *(byte *)((long)param_1 + 0x15b);
  if (bVar1 < 5) {
    if (bVar1 == 3) {
      if (*(char *)(param_1 + 0x2e) != '\x03') {
        if (*(char *)(param_1 + 0x2e) == '\x04') {
          if (*(char *)(param_1 + 0x46) == '\x03') {
            FUN_100e03d7c(param_1[0x44],param_1[0x45]);
          }
          if (param_1[0x35] != 0) {
            _free(param_1[0x36]);
          }
          if (param_1[0x32] != 0) {
            _free(param_1[0x33]);
          }
          uVar4 = param_1[0x4a] - param_1[0x48];
          if (uVar4 != 0) {
            uVar4 = uVar4 / 0x18;
            puVar5 = (undefined8 *)(param_1[0x48] + 8);
            do {
              if (puVar5[-1] != 0) {
                _free(*puVar5);
              }
              puVar5 = puVar5 + 3;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          if (param_1[0x49] != 0) {
            lVar3 = param_1[0x47];
            goto code_r0x000108aa97c4;
          }
        }
        return;
      }
      if (*(char *)(param_1 + 0x35) != '\x03') {
        return;
      }
      lVar3 = param_1[0x34];
      if (param_1[0x33] == 0) {
        if ((9 < *(byte *)(lVar3 + 0x748)) && (*(long *)(lVar3 + 0x758) != 0)) {
          _free(*(undefined8 *)(lVar3 + 0x750));
        }
        if (*(long *)(lVar3 + 0x6e0) != 0) {
          _free(*(undefined8 *)(lVar3 + 0x6e8));
        }
        FUN_100def764(lVar3 + 0x680);
        lVar2 = **(long **)(lVar3 + 0x760);
        **(long **)(lVar3 + 0x760) = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
          func_0x000105c30fe4(lVar3 + 0x760);
        }
        FUN_100e1a320(lVar3);
        lVar2 = *(long *)(lVar3 + 0x768);
        if (lVar2 != 0) {
          FUN_100de8a5c(lVar2);
          _free(lVar2);
        }
        lVar2 = *(long *)(lVar3 + 0x770);
        if (lVar2 != 0) {
          FUN_100de8a5c(lVar2);
          _free(lVar2);
        }
      }
      else {
        if (lVar3 == 0) {
          return;
        }
        FUN_100de20f8(lVar3);
      }
      goto code_r0x000108aa97c4;
    }
    if (bVar1 != 4) {
      return;
    }
    if (*(char *)((long)param_1 + 0x179) == '\x04') {
      FUN_100cfddd4(param_1 + 0x41);
LAB_100d21b24:
      *(undefined1 *)(param_1 + 0x2f) = 0;
    }
    else if (*(char *)((long)param_1 + 0x179) == '\x03') {
      FUN_100e03d7c(param_1[0x30],param_1[0x31]);
      goto LAB_100d21b24;
    }
    lVar3 = param_1[0xb];
  }
  else {
    if (bVar1 == 5) {
      if (*(char *)((long)param_1 + 0x179) == '\x04') {
        if (*(char *)(param_1 + 0xb8) == '\x03') {
          FUN_100cbe7c8(param_1 + 0x52);
        }
        else if (*(char *)(param_1 + 0xb8) == '\0') {
          FUN_100e0d524(param_1 + 0x41);
        }
      }
      else {
        if (*(char *)((long)param_1 + 0x179) != '\x03') goto LAB_100d21b6c;
        FUN_100e03d7c(param_1[0x30],param_1[0x31]);
      }
      *(undefined1 *)(param_1 + 0x2f) = 0;
    }
    else {
      if (bVar1 != 6) {
        return;
      }
      FUN_100ce89d0(param_1 + 0x2c);
    }
LAB_100d21b6c:
    if (param_1[0x1f] != 0) {
      _free(param_1[0x20]);
    }
    if (param_1[0x1c] != 0) {
      _free(param_1[0x1d]);
    }
    uVar4 = param_1[3] - param_1[1];
    if (uVar4 != 0) {
      uVar4 = uVar4 / 0x18;
      puVar5 = (undefined8 *)(param_1[1] + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (param_1[2] != 0) {
      _free(*param_1);
    }
    *(undefined2 *)(param_1 + 0x2b) = 0;
    *(undefined1 *)((long)param_1 + 0x15a) = 0;
    lVar3 = param_1[0xb];
  }
  if (lVar3 == 0) {
    return;
  }
  lVar3 = param_1[0xc];
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar3);
  return;
}

