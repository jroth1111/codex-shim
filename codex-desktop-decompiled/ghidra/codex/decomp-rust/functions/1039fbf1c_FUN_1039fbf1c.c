
void FUN_1039fbf1c(byte *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  
  if (4 < *param_1) {
    if (*param_1 != 5) {
      puVar2 = *(undefined8 **)(param_1 + 8);
      if (puVar2[0xe] != 0) {
        _free(puVar2[0xf]);
      }
      if (puVar2[0x3e] != 0) {
        _free(puVar2[0x3f]);
      }
      if (puVar2[0x32] != 0) {
        _free(puVar2[0x33]);
      }
      if (puVar2[0x35] != 0) {
        _free(puVar2[0x36]);
      }
      if (puVar2[0x39] != 0) {
        _free(puVar2[0x3a]);
      }
      if (*(char *)(puVar2 + 0xd) != '\x02') {
        lVar1 = *(long *)puVar2[10];
        *(long *)puVar2[10] = lVar1 + -1;
        LORelease();
        if (lVar1 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h85a0b32f904ec185E(puVar2 + 10);
        }
      }
      lVar1 = *(long *)*puVar2;
      *(long *)*puVar2 = lVar1 + -1;
      LORelease();
      if (lVar1 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(puVar2);
      }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(puVar2);
      return;
    }
    plVar3 = *(long **)(param_1 + 8);
    lVar1 = *plVar3;
    *plVar3 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      puVar2 = *(undefined8 **)(param_1 + 8);
      if (puVar2 != (undefined8 *)0xffffffffffffffff) {
        lVar4 = *(long *)(param_1 + 0x10);
        lVar1 = puVar2[1];
        puVar2[1] = lVar1 + -1;
        LORelease();
        if ((lVar1 == 1) && (DataMemoryBarrier(2,1), 7 < lVar4 + 0x17U)) goto code_r0x000108aa97c4;
      }
      return;
    }
  }
  return;
}

