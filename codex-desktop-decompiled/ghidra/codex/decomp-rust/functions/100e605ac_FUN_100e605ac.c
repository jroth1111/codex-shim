
void FUN_100e605ac(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long lVar3;
  
  switch(*(undefined1 *)(param_1 + 0x5c)) {
  case 3:
    if (*(char *)(param_1 + 0xe0) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0xd8) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0xd0) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 200) != '\x03') {
      if (*(char *)(param_1 + 200) != '\0') {
        return;
      }
      if (*(long *)(param_1 + 0xa8) == 0) {
        return;
      }
      uVar1 = *(undefined8 *)(param_1 + 0xb0);
code_r0x000100e60778:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(uVar1);
      return;
    }
    plVar2 = *(long **)(param_1 + 0xc0);
    if (*plVar2 == 0xcc) {
      *plVar2 = 0x84;
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(plVar2[2] + 0x20);
    goto code_r0x000100e60864;
  case 4:
    if (*(char *)(param_1 + 0xa68) == '\x03') {
      FUN_100e76fbc(param_1 + 0xf0);
      __ZN5tokio7runtime4time5entry1_91__LT_impl_u20_core__ops__drop__Drop_u20_for_u20_tokio__runtime__time__entry__TimerEntry_GT_4drop17h26943950b468e207E
                ();
      if (*(long *)(param_1 + 0x80) == 0) {
        plVar2 = *(long **)(param_1 + 0x88);
        lVar3 = *plVar2;
        *plVar2 = lVar3 + -1;
        LORelease();
        if (lVar3 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE();
        }
      }
      else {
        plVar2 = *(long **)(param_1 + 0x88);
        lVar3 = *plVar2;
        *plVar2 = lVar3 + -1;
        LORelease();
        if (lVar3 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E();
        }
      }
      if ((*(long *)(param_1 + 0x90) != 0) && (*(long *)(param_1 + 0xb8) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000100de8ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(param_1 + 0xb8) + 0x18))(*(undefined8 *)(param_1 + 0xc0));
        return;
      }
      return;
    }
    break;
  case 5:
    if ((*(char *)(param_1 + 0x5f0) == '\x03') && (*(char *)(param_1 + 0x5e9) == '\x03')) {
      FUN_100cf2ae0(param_1 + 0xd0);
      if (*(long *)(param_1 + 0x80) != 0) {
        _free(*(undefined8 *)(param_1 + 0x88));
      }
      if (*(long *)(param_1 + 0x98) != 0) {
        _free(*(undefined8 *)(param_1 + 0xa0));
      }
      if (*(long *)(param_1 + 0xb0) != 0) {
        _free(*(undefined8 *)(param_1 + 0xb8));
      }
      *(undefined1 *)(param_1 + 0x5e8) = 0;
    }
    goto code_r0x000100e6082c;
  case 6:
    if (*(char *)(param_1 + 0x521) == '\0') {
      if ((*(ulong *)(param_1 + 0x60) & 0x7fffffffffffffff) != 0) {
        lVar3 = 8;
        goto code_r0x000100e60824;
      }
    }
    else if ((*(char *)(param_1 + 0x521) == '\x03') &&
            (FUN_100cd7c20(param_1 + 0xb0), (*(ulong *)(param_1 + 0x98) & 0x7fffffffffffffff) != 0))
    {
      lVar3 = 0x40;
code_r0x000100e60824:
      _free(*(undefined8 *)(param_1 + 0x60 + lVar3));
    }
code_r0x000100e6082c:
    if (((*(byte *)(param_1 + 0x59) & 1) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
      _free(*(undefined8 *)(param_1 + 0x38));
    }
    *(undefined1 *)(param_1 + 0x59) = 0;
    if (*(long *)(param_1 + 0x18) == -0x8000000000000000) {
      UNRECOVERED_JUMPTABLE = *(code **)**(undefined8 **)(param_1 + 0x20);
code_r0x000100e60864:
                    /* WARNING: Could not recover jumptable at 0x000100e6086c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    break;
  case 7:
    if (*(char *)(param_1 + 0x5c9) == '\x03') {
      FUN_100cf2ae0(param_1 + 0xb0);
      if (*(long *)(param_1 + 0x60) != 0) {
        _free(*(undefined8 *)(param_1 + 0x68));
      }
      if (*(long *)(param_1 + 0x78) != 0) {
        _free(*(undefined8 *)(param_1 + 0x80));
      }
      if (*(long *)(param_1 + 0x90) != 0) {
        _free(*(undefined8 *)(param_1 + 0x98));
      }
      *(undefined1 *)(param_1 + 0x5c8) = 0;
    }
    break;
  case 8:
    FUN_100e8ab10(param_1 + 0x60);
    goto code_r0x000100e60888;
  case 9:
    if (*(char *)(param_1 + 0x539) == '\0') {
      if ((*(ulong *)(param_1 + 0x78) & 0x7fffffffffffffff) != 0) {
        lVar3 = 8;
        goto code_r0x000100e60880;
      }
    }
    else if ((*(char *)(param_1 + 0x539) == '\x03') &&
            (FUN_100cd7c20(param_1 + 200), (*(ulong *)(param_1 + 0xb0) & 0x7fffffffffffffff) != 0))
    {
      lVar3 = 0x40;
code_r0x000100e60880:
      _free(*(undefined8 *)(param_1 + 0x78 + lVar3));
    }
code_r0x000100e60888:
    *(undefined1 *)(param_1 + 0x5b) = 0;
    break;
  case 10:
    if ((*(char *)(param_1 + 0x9b0) == '\x03') && (*(char *)(param_1 + 0x9a8) == '\x03')) {
      FUN_100cb10ec(param_1 + 0xe0);
      if (*(long *)(param_1 + 0x90) != 0) {
        _free(*(undefined8 *)(param_1 + 0x98));
      }
      if (*(long *)(param_1 + 0xa8) != 0) {
        _free(*(undefined8 *)(param_1 + 0xb0));
      }
      if (*(long *)(param_1 + 0xc0) != 0) {
        uVar1 = *(undefined8 *)(param_1 + 200);
        goto code_r0x000100e60778;
      }
    }
    break;
  case 0xb:
    FUN_100e8ab10(param_1 + 0x60);
    goto code_r0x000100e607ec;
  case 0xc:
    if (*(char *)(param_1 + 0x539) == '\0') {
      if ((*(ulong *)(param_1 + 0x78) & 0x7fffffffffffffff) != 0) {
        lVar3 = 8;
        goto code_r0x000100e60804;
      }
    }
    else if ((*(char *)(param_1 + 0x539) == '\x03') &&
            (FUN_100cd7c20(param_1 + 200), (*(ulong *)(param_1 + 0xb0) & 0x7fffffffffffffff) != 0))
    {
      lVar3 = 0x40;
code_r0x000100e60804:
      _free(*(undefined8 *)(param_1 + 0x78 + lVar3));
      *(undefined1 *)(param_1 + 0x5a) = 0;
      return;
    }
code_r0x000100e607ec:
    *(undefined1 *)(param_1 + 0x5a) = 0;
  }
  return;
}

