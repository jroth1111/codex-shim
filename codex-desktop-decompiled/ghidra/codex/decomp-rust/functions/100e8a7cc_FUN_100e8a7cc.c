
void FUN_100e8a7cc(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  switch(*(undefined1 *)((long)param_1 + 0xb1)) {
  case 3:
    if ((char)param_1[0x158] != '\x03') {
      return;
    }
    FUN_100e76fbc(param_1 + 0x29);
    __ZN5tokio7runtime4time5entry1_91__LT_impl_u20_core__ops__drop__Drop_u20_for_u20_tokio__runtime__time__entry__TimerEntry_GT_4drop17h26943950b468e207E
              ();
    if (param_1[0x1b] == 0) {
      plVar2 = (long *)param_1[0x1c];
      lVar1 = *plVar2;
      *plVar2 = lVar1 + -1;
      LORelease();
      if (lVar1 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE();
      }
    }
    else {
      plVar2 = (long *)param_1[0x1c];
      lVar1 = *plVar2;
      *plVar2 = lVar1 + -1;
      LORelease();
      if (lVar1 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E();
      }
    }
    if ((param_1[0x1d] != 0) && (param_1[0x22] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000100de8ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[0x22] + 0x18))(param_1[0x23]);
      return;
    }
    return;
  case 4:
    if ((char)param_1[199] != '\x03') {
      return;
    }
    if (*(char *)((long)param_1 + 0x631) != '\x03') {
      return;
    }
    FUN_100cf2ae0(param_1 + 0x23);
    if (param_1[0x19] != 0) {
      _free(param_1[0x1a]);
    }
    if (param_1[0x1c] != 0) {
      _free(param_1[0x1d]);
    }
    if (param_1[0x1f] != 0) {
      _free(param_1[0x20]);
    }
    *(undefined1 *)(param_1 + 0xc6) = 0;
    return;
  case 5:
    if (*(char *)((long)param_1 + 0xe9) == '\x04') {
      func_0x000100d02b68(param_1 + 0x1e);
      *(undefined1 *)(param_1 + 0x1d) = 0;
      return;
    }
    if (*(char *)((long)param_1 + 0xe9) != '\x03') {
      return;
    }
    if ((char)param_1[0x29] != '\x03') {
      return;
    }
    if ((char)param_1[0x28] == '\x03') {
      plVar2 = (long *)param_1[0x27];
      if (*plVar2 == 0xcc) {
        *plVar2 = 0x84;
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000100e8aa40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(plVar2[2] + 0x20))();
      return;
    }
    if ((char)param_1[0x28] != '\0') {
      return;
    }
    if (param_1[0x24] == 0) {
      return;
    }
    lVar1 = param_1[0x25];
    goto code_r0x000100e8a9f4;
  case 6:
    if (*(char *)((long)param_1 + 0x621) != '\x03') {
      return;
    }
    FUN_100cf2ae0(param_1 + 0x21);
    if (param_1[0x17] != 0) {
      _free(param_1[0x18]);
    }
    if (param_1[0x1a] != 0) {
      _free(param_1[0x1b]);
    }
    if (param_1[0x1d] != 0) {
      _free(param_1[0x1e]);
    }
    *(undefined1 *)(param_1 + 0xc4) = 0;
    return;
  case 7:
    FUN_100cad858(param_1 + 0x17);
    if (param_1[200] != 0) {
      _free(param_1[0xc9]);
    }
    if (param_1[0xcb] != 0) {
      _free(param_1[0xcc]);
    }
    if (param_1[0xce] == 0) {
      return;
    }
    lVar1 = param_1[0xcf];
    goto code_r0x000100e8a9f4;
  case 8:
    FUN_100cb10ec(param_1 + 0x17);
    goto code_r0x000100e8a9c8;
  case 9:
    FUN_100cf2ae0(param_1 + 0x17);
    break;
  case 10:
    FUN_100cad858(param_1 + 0x17);
    break;
  case 0xb:
    FUN_100cb10ec(param_1 + 0x17);
    break;
  case 0xc:
    FUN_100e8ab10(param_1 + 0x17);
    break;
  case 0xd:
    FUN_100cd7c20(param_1 + 0x1a);
    if (param_1[0x17] != 0) {
      _free(param_1[0x18]);
    }
    break;
  default:
    goto LAB_100e8aa0c;
  }
  if (param_1[10] != 0) {
    _free(param_1[0xb]);
  }
  if (param_1[0xd] != 0) {
    _free(param_1[0xe]);
  }
  if (param_1[0x10] != 0) {
    _free(param_1[0x11]);
  }
code_r0x000100e8a9c8:
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  if (param_1[3] != 0) {
    _free(param_1[4]);
  }
  if (param_1[6] == 0) {
LAB_100e8aa0c:
    return;
  }
  lVar1 = param_1[7];
code_r0x000100e8a9f4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar1);
  return;
}

