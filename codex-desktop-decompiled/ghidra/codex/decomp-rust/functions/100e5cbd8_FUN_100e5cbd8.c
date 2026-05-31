
void FUN_100e5cbd8(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  bVar1 = *(byte *)(param_1 + 0x101);
  if (bVar1 < 6) {
    if (bVar1 == 3) {
      if (*(char *)(param_1 + 0x188) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0x180) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0x178) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0x170) == '\x03') {
        plVar3 = *(long **)(param_1 + 0x168);
        if (*plVar3 == 0xcc) {
          *plVar3 = 0x84;
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000100e5cde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(plVar3[2] + 0x20))();
        return;
      }
      if (*(char *)(param_1 + 0x170) != '\0') {
        return;
      }
      if (*(long *)(param_1 + 0x150) == 0) {
        return;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x158);
      goto LAB_100e5cd88;
    }
    if (bVar1 == 4) {
      if (*(char *)(param_1 + 0x671) != '\x03') {
        return;
      }
      FUN_100cf2ae0(param_1 + 0x158);
      if (*(long *)(param_1 + 0x108) != 0) {
        _free(*(undefined8 *)(param_1 + 0x110));
      }
      if (*(long *)(param_1 + 0x120) != 0) {
        _free(*(undefined8 *)(param_1 + 0x128));
      }
      if (*(long *)(param_1 + 0x138) != 0) {
        _free(*(undefined8 *)(param_1 + 0x140));
      }
      *(undefined1 *)(param_1 + 0x670) = 0;
      return;
    }
    if (bVar1 != 5) {
      return;
    }
    FUN_100cad858(param_1 + 0x108);
    goto LAB_100e5cd5c;
  }
  if (bVar1 != 6) {
    if (bVar1 == 7) {
      if (*(char *)(param_1 + 0xb10) != '\x03') {
        return;
      }
      FUN_100e76fbc(param_1 + 0x198);
      __ZN5tokio7runtime4time5entry1_91__LT_impl_u20_core__ops__drop__Drop_u20_for_u20_tokio__runtime__time__entry__TimerEntry_GT_4drop17h26943950b468e207E
                ();
      if (*(long *)(param_1 + 0x128) == 0) {
        plVar3 = *(long **)(param_1 + 0x130);
        lVar4 = *plVar3;
        *plVar3 = lVar4 + -1;
        LORelease();
        if (lVar4 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE();
        }
      }
      else {
        plVar3 = *(long **)(param_1 + 0x130);
        lVar4 = *plVar3;
        *plVar3 = lVar4 + -1;
        LORelease();
        if (lVar4 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E();
        }
      }
      if ((*(long *)(param_1 + 0x138) != 0) && (*(long *)(param_1 + 0x160) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000100de8ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(param_1 + 0x160) + 0x18))(*(undefined8 *)(param_1 + 0x168));
        return;
      }
      return;
    }
    if (bVar1 != 8) {
      return;
    }
    if (*(char *)(param_1 + 0x5c9) == '\0') {
      if ((*(ulong *)(param_1 + 0x108) & 0x7fffffffffffffff) == 0) {
        return;
      }
      lVar4 = 8;
    }
    else {
      if (*(char *)(param_1 + 0x5c9) != '\x03') {
        return;
      }
      FUN_100cd7c20(param_1 + 0x158);
      if ((*(ulong *)(param_1 + 0x140) & 0x7fffffffffffffff) == 0) {
        return;
      }
      lVar4 = 0x40;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x108 + lVar4);
    goto LAB_100e5cd88;
  }
  if (*(char *)(param_1 + 0x5c9) == '\0') {
    if ((*(ulong *)(param_1 + 0x108) & 0x7fffffffffffffff) != 0) {
      lVar4 = 8;
      goto LAB_100e5cd54;
    }
  }
  else if ((*(char *)(param_1 + 0x5c9) == '\x03') &&
          (FUN_100cd7c20(param_1 + 0x158), (*(ulong *)(param_1 + 0x140) & 0x7fffffffffffffff) != 0))
  {
    lVar4 = 0x40;
LAB_100e5cd54:
    _free(*(undefined8 *)(param_1 + 0x108 + lVar4));
  }
LAB_100e5cd5c:
  if (*(long *)(param_1 + 0xa0) != 0) {
    _free(*(undefined8 *)(param_1 + 0xa8));
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    _free(*(undefined8 *)(param_1 + 0xc0));
  }
  if (*(long *)(param_1 + 0xd0) == 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
LAB_100e5cd88:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(uVar2);
  return;
}

