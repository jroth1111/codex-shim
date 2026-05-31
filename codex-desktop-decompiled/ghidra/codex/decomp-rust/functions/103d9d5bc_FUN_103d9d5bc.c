
void FUN_103d9d5bc(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  lVar1 = **(long **)(param_1 + 0x20);
  **(long **)(param_1 + 0x20) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E();
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(long *)(param_1 + 0x38) != 0) && (lVar1 = *(long *)(param_1 + 0x40), lVar1 != 0)) {
      puVar5 = *(undefined8 **)(param_1 + 0x48);
      pcVar3 = (code *)*puVar5;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(lVar1);
      }
      if (puVar5[1] != 0) {
        _free(lVar1);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    if (*(char *)(param_1 + 0x58) == '\x03') {
      lVar1 = param_1 + 0x48;
    }
    else {
      if (*(char *)(param_1 + 0x58) != '\0') goto LAB_103d9d654;
      lVar1 = param_1 + 0x38;
    }
    FUN_103da37a4(lVar1);
  }
LAB_103d9d654:
  if (*(long *)(param_1 + 0x70) != 0) {
    (**(code **)(*(long *)(param_1 + 0x70) + 0x18))(*(undefined8 *)(param_1 + 0x78));
  }
  plVar4 = *(long **)(param_1 + 0x80);
  if (plVar4 != (long *)0x0) {
    lVar1 = *plVar4;
    *plVar4 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      lVar1 = *(long *)(param_1 + 0x80);
      puVar5 = *(undefined8 **)(param_1 + 0x88);
      uVar6 = puVar5[2];
      if ((code *)*puVar5 != (code *)0x0) {
        (*(code *)*puVar5)(lVar1 + (uVar6 - 1 & 0xfffffffffffffff0) + 0x10);
      }
      if (lVar1 != -1) {
        lVar2 = *(long *)(lVar1 + 8);
        *(long *)(lVar1 + 8) = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
          if (uVar6 < 9) {
            uVar6 = 8;
          }
          if ((uVar6 + puVar5[1] + 0xf & -uVar6) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__free_10b61b0a8)(lVar1);
            return;
          }
        }
      }
      return;
    }
  }
  return;
}

