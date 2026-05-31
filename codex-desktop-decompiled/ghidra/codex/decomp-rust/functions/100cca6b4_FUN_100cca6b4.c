
void FUN_100cca6b4(long param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  
  bVar1 = *(byte *)(param_1 + 0x79);
  if (bVar1 < 6) {
    if (bVar1 == 3) {
      if (*(char *)(param_1 + 0x90) != '\x04') {
        if (*(char *)(param_1 + 0x90) != '\x03') {
          return;
        }
        if (*(char *)(param_1 + 0xa8) == '\x03') {
          if (*(char *)(param_1 + 0x108) == '\x03') {
            if (*(char *)(param_1 + 0x100) == '\x03') {
              plVar2 = *(long **)(param_1 + 0xf8);
              if (*plVar2 != 0xcc) {
                    /* WARNING: Could not recover jumptable at 0x000100cb74c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(plVar2[2] + 0x20))();
                return;
              }
              *plVar2 = 0x84;
            }
            else if ((*(char *)(param_1 + 0x100) == '\0') && (*(long *)(param_1 + 0xe0) != 0)) {
              plVar2 = *(long **)(param_1 + 0xe8);
              goto code_r0x000108aa97c4;
            }
          }
        }
        else if (((*(char *)(param_1 + 0xa8) == '\x04') && (*(char *)(param_1 + 0x128) == '\x03'))
                && (*(char *)(param_1 + 0x121) == '\x03')) {
          if (*(char *)(param_1 + 0x108) == '\x03') {
            plVar2 = *(long **)(param_1 + 0x100);
            if (*plVar2 == 0xcc) {
              *plVar2 = 0x84;
            }
            else {
              (**(code **)(plVar2[2] + 0x20))();
            }
          }
          else if ((*(char *)(param_1 + 0x108) == '\0') && (*(long *)(param_1 + 0xd8) != 0)) {
            _free(*(undefined8 *)(param_1 + 0xe0));
          }
          *(undefined1 *)(param_1 + 0x120) = 0;
        }
        return;
      }
      FUN_100de8a5c(param_1 + 0x110);
      lVar3 = **(long **)(param_1 + 0x98);
      **(long **)(param_1 + 0x98) = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h46a5c05d4d9b7d4fE();
      }
      lVar3 = *(long *)(param_1 + 200);
      if (lVar3 == -0x8000000000000000) {
        return;
      }
      plVar2 = *(long **)(param_1 + 0xd0);
      if (lVar3 != -0x7fffffffffffffff) {
        if (lVar3 == 0) {
          return;
        }
        goto code_r0x000108aa97c4;
      }
      goto LAB_100cca874;
    }
    if (bVar1 == 4) {
      if (((*(char *)(param_1 + 0x100) == '\x03') && (*(char *)(param_1 + 0xf8) == '\x03')) &&
         (*(char *)(param_1 + 0xf0) == '\x03')) {
        if (*(char *)(param_1 + 0xe8) == '\x03') {
          plVar2 = *(long **)(param_1 + 0xe0);
          if (*plVar2 == 0xcc) {
            *plVar2 = 0x84;
          }
          else {
            (**(code **)(plVar2[2] + 0x20))();
          }
        }
        else if ((*(char *)(param_1 + 0xe8) == '\0') && (*(long *)(param_1 + 200) != 0)) {
          lVar3 = 0xd0;
          goto LAB_100cca728;
        }
      }
    }
    else {
      if (bVar1 != 5) {
        return;
      }
      if (*(char *)(param_1 + 0x5e8) == '\x03') {
        FUN_100cf2ae0(param_1 + 0xe0);
        if (*(long *)(param_1 + 0x90) != 0) {
          _free(*(undefined8 *)(param_1 + 0x98));
        }
        if (*(long *)(param_1 + 0xa8) != 0) {
          _free(*(undefined8 *)(param_1 + 0xb0));
        }
        if (*(long *)(param_1 + 0xc0) != 0) {
          lVar3 = 200;
LAB_100cca728:
          _free(*(undefined8 *)(param_1 + lVar3));
        }
      }
    }
  }
  else if (bVar1 == 6) {
    FUN_100cbc29c(param_1 + 0x80);
  }
  else if (bVar1 == 7) {
    func_0x000100e605ac(param_1 + 0x80);
  }
  else {
    if (bVar1 != 8) {
      return;
    }
    func_0x000100e8a7cc(param_1 + 0x80);
  }
  lVar3 = **(long **)(param_1 + 8);
  **(long **)(param_1 + 8) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h46a5c05d4d9b7d4fE();
  }
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 == -0x8000000000000000) {
    return;
  }
  plVar2 = *(long **)(param_1 + 0x40);
  if (lVar3 != -0x7fffffffffffffff) {
    if (lVar3 == 0) {
      return;
    }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(plVar2);
    return;
  }
LAB_100cca874:
  if (*plVar2 == 0xcc) {
    *plVar2 = 0x84;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100cca8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(plVar2[2] + 0x20))();
  return;
}

