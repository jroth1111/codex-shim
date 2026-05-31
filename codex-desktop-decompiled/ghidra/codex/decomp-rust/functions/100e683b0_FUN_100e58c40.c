
/* WARNING: Type propagation algorithm not settling */

void FUN_100e58c40(long param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 < 6) {
    if (bVar1 == 3) {
      cVar4 = *(char *)(param_1 + 0x28);
      if (cVar4 != '\x04') {
LAB_100e58d70:
        if (cVar4 != '\x03') {
          return;
        }
        if (*(char *)(param_1 + 0x40) != '\x03') {
          if (((*(char *)(param_1 + 0x40) == '\x04') && (*(char *)(param_1 + 0xc0) == '\x03')) &&
             (*(char *)(param_1 + 0xb9) == '\x03')) {
            if (*(char *)(param_1 + 0xa0) == '\x03') {
              plVar3 = *(long **)(param_1 + 0x98);
              if (*plVar3 == 0xcc) {
                *plVar3 = 0x84;
              }
              else {
                (**(code **)(plVar3[2] + 0x20))();
              }
            }
            else if ((*(char *)(param_1 + 0xa0) == '\0') && (*(long *)(param_1 + 0x70) != 0)) {
              _free(*(undefined8 *)(param_1 + 0x78));
            }
            *(undefined1 *)(param_1 + 0xb8) = 0;
          }
          return;
        }
        if (*(char *)(param_1 + 0xa0) != '\x03') {
          return;
        }
        if (*(char *)(param_1 + 0x98) == '\x03') {
          plVar3 = *(long **)(param_1 + 0x90);
          if (*plVar3 == 0xcc) {
            *plVar3 = 0x84;
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000100cb74c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(plVar3[2] + 0x20))();
          return;
        }
        if (*(char *)(param_1 + 0x98) != '\0') {
          return;
        }
        if (*(long *)(param_1 + 0x78) == 0) {
          return;
        }
        plVar3 = *(long **)(param_1 + 0x80);
        goto code_r0x000108aa97c4;
      }
      FUN_100de8a5c(param_1 + 0xa8);
      lVar2 = **(long **)(param_1 + 0x30);
      **(long **)(param_1 + 0x30) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h46a5c05d4d9b7d4fE();
      }
      lVar2 = *(long *)(param_1 + 0x60);
      if (lVar2 == -0x8000000000000000) {
        return;
      }
      plVar3 = *(long **)(param_1 + 0x68);
    }
    else if (bVar1 == 4) {
      FUN_100e605ac(param_1 + 0x80);
      lVar2 = **(long **)(param_1 + 0x18);
      **(long **)(param_1 + 0x18) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h46a5c05d4d9b7d4fE();
      }
      lVar2 = *(long *)(param_1 + 0x48);
      if (lVar2 == -0x8000000000000000) {
        return;
      }
      plVar3 = *(long **)(param_1 + 0x50);
    }
    else {
      if (bVar1 != 5) {
        return;
      }
      cVar4 = *(char *)(param_1 + 0x28);
      if (cVar4 != '\x04') goto LAB_100e58d70;
      FUN_100de8a5c(param_1 + 0xa8);
      lVar2 = **(long **)(param_1 + 0x30);
      **(long **)(param_1 + 0x30) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h46a5c05d4d9b7d4fE();
      }
      lVar2 = *(long *)(param_1 + 0x60);
      if (lVar2 == -0x8000000000000000) {
        return;
      }
      plVar3 = *(long **)(param_1 + 0x68);
    }
  }
  else if (bVar1 < 8) {
    if (bVar1 == 6) {
      FUN_100e6806c(param_1 + 0x80);
      lVar2 = **(long **)(param_1 + 0x18);
      **(long **)(param_1 + 0x18) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h46a5c05d4d9b7d4fE();
      }
      lVar2 = *(long *)(param_1 + 0x48);
      if (lVar2 == -0x8000000000000000) {
        return;
      }
      plVar3 = *(long **)(param_1 + 0x50);
      if (lVar2 == -0x7fffffffffffffff) goto LAB_100e58ed0;
      if (lVar2 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    if (bVar1 != 7) {
      return;
    }
    cVar4 = *(char *)(param_1 + 0x28);
    if (cVar4 != '\x04') goto LAB_100e58d70;
    FUN_100de8a5c(param_1 + 0xa8);
    lVar2 = **(long **)(param_1 + 0x30);
    **(long **)(param_1 + 0x30) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h46a5c05d4d9b7d4fE();
    }
    lVar2 = *(long *)(param_1 + 0x60);
    if (lVar2 == -0x8000000000000000) {
      return;
    }
    plVar3 = *(long **)(param_1 + 0x68);
  }
  else {
    if (bVar1 != 8) {
      if (bVar1 != 9) {
        return;
      }
      bVar1 = *(byte *)(param_1 + 0x52);
      if (bVar1 < 5) {
        if (bVar1 == 3) {
          if (*(char *)(param_1 + 0xd8) != '\x03') {
            return;
          }
          if (*(char *)(param_1 + 0xd0) != '\x03') {
            return;
          }
          if (*(char *)(param_1 + 200) != '\x03') {
            return;
          }
          if (*(char *)(param_1 + 0xc0) == '\x03') {
            plVar3 = *(long **)(param_1 + 0xb8);
            if (*plVar3 == 0xcc) {
              *plVar3 = 0x84;
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x000100e6855c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(plVar3[2] + 0x20))();
            return;
          }
          if (*(char *)(param_1 + 0xc0) != '\0') {
            return;
          }
          if (*(long *)(param_1 + 0xa0) == 0) {
            return;
          }
          plVar3 = *(long **)(param_1 + 0xa8);
          goto code_r0x000108aa97c4;
        }
        if (bVar1 != 4) {
          return;
        }
        if (*(char *)(param_1 + 0xa60) == '\x03') {
          FUN_100e76fbc(param_1 + 0xe8);
          FUN_100de8a5c(param_1 + 0x78);
        }
        goto LAB_100e6850c;
      }
      if (bVar1 == 5) {
        if ((*(char *)(param_1 + 0x5e8) != '\x03') || (*(char *)(param_1 + 0x5e1) != '\x03'))
        goto LAB_100e684f4;
        FUN_100cf2ae0(param_1 + 200);
        if (*(long *)(param_1 + 0x78) != 0) {
          _free(*(undefined8 *)(param_1 + 0x80));
        }
        if (*(long *)(param_1 + 0x90) != 0) {
          _free(*(undefined8 *)(param_1 + 0x98));
        }
        if (*(long *)(param_1 + 0xa8) != 0) {
          _free(*(undefined8 *)(param_1 + 0xb0));
        }
        *(undefined1 *)(param_1 + 0x5e0) = 0;
        bVar1 = *(byte *)(param_1 + 0x51);
      }
      else {
        if (bVar1 != 6) {
          return;
        }
        if (*(char *)(param_1 + 0x519) == '\0') {
          if ((*(ulong *)(param_1 + 0x58) & 0x7fffffffffffffff) != 0) {
            lVar2 = 8;
            goto LAB_100e68520;
          }
        }
        else if ((*(char *)(param_1 + 0x519) == '\x03') &&
                (FUN_100cd7c20(param_1 + 0xa8),
                (*(ulong *)(param_1 + 0x90) & 0x7fffffffffffffff) != 0)) {
          lVar2 = 0x40;
LAB_100e68520:
          _free(*(undefined8 *)(param_1 + 0x58 + lVar2));
          bVar1 = *(byte *)(param_1 + 0x51);
          goto joined_r0x000100e684e0;
        }
LAB_100e684f4:
        bVar1 = *(byte *)(param_1 + 0x51);
      }
joined_r0x000100e684e0:
      if (((bVar1 & 1) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
        _free(*(undefined8 *)(param_1 + 0x38));
      }
LAB_100e6850c:
      *(undefined1 *)(param_1 + 0x51) = 0;
      return;
    }
    FUN_100e5cbd8(param_1 + 0x80);
    lVar2 = **(long **)(param_1 + 0x18);
    **(long **)(param_1 + 0x18) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h46a5c05d4d9b7d4fE();
    }
    lVar2 = *(long *)(param_1 + 0x48);
    if (lVar2 == -0x8000000000000000) {
      return;
    }
    plVar3 = *(long **)(param_1 + 0x50);
  }
  if (lVar2 == -0x7fffffffffffffff) {
LAB_100e58ed0:
    if (*plVar3 == 0xcc) {
      *plVar3 = 0x84;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000100e58f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(plVar3[2] + 0x20))();
    return;
  }
  if (lVar2 == 0) {
    return;
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar3);
  return;
}

