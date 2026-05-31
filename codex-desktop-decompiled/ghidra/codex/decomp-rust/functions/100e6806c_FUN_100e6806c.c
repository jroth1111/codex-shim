
void FUN_100e6806c(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  bVar1 = *(byte *)(param_1 + 0x1a);
  if (bVar1 < 7) {
    if (4 < bVar1) {
      if (bVar1 == 5) {
        if (*(char *)(param_1 + 0x5a0) != '\x03') {
          return;
        }
        if (*(char *)(param_1 + 0x599) != '\x03') {
          return;
        }
        FUN_100cf2ae0(param_1 + 0x80);
        if (*(long *)(param_1 + 0x30) != 0) {
          _free(*(undefined8 *)(param_1 + 0x38));
        }
        if (*(long *)(param_1 + 0x48) != 0) {
          _free(*(undefined8 *)(param_1 + 0x50));
        }
        if (*(long *)(param_1 + 0x60) != 0) {
          _free(*(undefined8 *)(param_1 + 0x68));
        }
        *(undefined1 *)(param_1 + 0x598) = 0;
        return;
      }
      if (bVar1 != 6) {
        return;
      }
      if (*(char *)(param_1 + 0x589) != '\x03') {
        return;
      }
      FUN_100cf2ae0(param_1 + 0x70);
      if (*(long *)(param_1 + 0x20) != 0) {
        _free(*(undefined8 *)(param_1 + 0x28));
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        _free(*(undefined8 *)(param_1 + 0x40));
      }
      if (*(long *)(param_1 + 0x50) != 0) {
        _free(*(undefined8 *)(param_1 + 0x58));
      }
      *(undefined1 *)(param_1 + 0x588) = 0;
      return;
    }
    if (bVar1 != 3) {
      if (bVar1 != 4) {
        return;
      }
      if (*(char *)(param_1 + 0xa28) != '\x03') {
        return;
      }
      FUN_100e76fbc(param_1 + 0xb0);
      __ZN5tokio7runtime4time5entry1_91__LT_impl_u20_core__ops__drop__Drop_u20_for_u20_tokio__runtime__time__entry__TimerEntry_GT_4drop17h26943950b468e207E
                ();
      if (*(long *)(param_1 + 0x40) == 0) {
        plVar4 = *(long **)(param_1 + 0x48);
        lVar2 = *plVar4;
        *plVar4 = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE();
        }
      }
      else {
        plVar4 = *(long **)(param_1 + 0x48);
        lVar2 = *plVar4;
        *plVar4 = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E();
        }
      }
      if ((*(long *)(param_1 + 0x50) != 0) && (*(long *)(param_1 + 0x78) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000100de8ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(param_1 + 0x78) + 0x18))(*(undefined8 *)(param_1 + 0x80));
        return;
      }
      return;
    }
    if (*(char *)(param_1 + 0xa0) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x98) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x90) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x88) == '\x03') {
      plVar4 = *(long **)(param_1 + 0x80);
      if (*plVar4 == 0xcc) {
        *plVar4 = 0x84;
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000100e68300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(plVar4[2] + 0x20))();
      return;
    }
    if (*(char *)(param_1 + 0x88) != '\0') {
      return;
    }
    if (*(long *)(param_1 + 0x68) == 0) {
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x70);
  }
  else {
    if (8 < bVar1) {
      if (bVar1 == 9) {
        FUN_100e8ab10(param_1 + 0x20);
      }
      else {
        if (bVar1 != 10) {
          return;
        }
        if (*(char *)(param_1 + 0x4f9) == '\0') {
          if ((*(ulong *)(param_1 + 0x38) & 0x7fffffffffffffff) == 0) goto LAB_100e682ac;
          lVar2 = 8;
        }
        else {
          if ((*(char *)(param_1 + 0x4f9) != '\x03') ||
             (FUN_100cd7c20(param_1 + 0x88), (*(ulong *)(param_1 + 0x70) & 0x7fffffffffffffff) == 0)
             ) goto LAB_100e682ac;
          lVar2 = 0x40;
        }
        _free(*(undefined8 *)(param_1 + 0x38 + lVar2));
      }
LAB_100e682ac:
      *(undefined1 *)(param_1 + 0x19) = 0;
      return;
    }
    if (bVar1 == 7) {
      FUN_100cad858(param_1 + 0x20);
      if (*(long *)(param_1 + 0x5a8) != 0) {
        _free(*(undefined8 *)(param_1 + 0x5b0));
      }
      if (*(long *)(param_1 + 0x5c0) != 0) {
        _free(*(undefined8 *)(param_1 + 0x5c8));
      }
      if (*(long *)(param_1 + 0x5d8) == 0) {
        return;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x5e0);
    }
    else {
      if (bVar1 != 8) {
        return;
      }
      if (*(char *)(param_1 + 0x970) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0x968) != '\x03') {
        return;
      }
      FUN_100cb10ec(param_1 + 0xa0);
      if (*(long *)(param_1 + 0x50) != 0) {
        _free(*(undefined8 *)(param_1 + 0x58));
      }
      if (*(long *)(param_1 + 0x68) != 0) {
        _free(*(undefined8 *)(param_1 + 0x70));
      }
      if (*(long *)(param_1 + 0x80) == 0) {
        return;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x88);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(uVar3);
  return;
}

