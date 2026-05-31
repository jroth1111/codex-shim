
void FUN_100d78274(long *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  lVar2 = *param_1;
  if (lVar2 == -0x7ffffffffffffffe) {
    uVar5 = param_1[1];
    if ((uVar5 & 3) == 1) {
      puVar4 = (undefined8 *)(uVar5 - 1);
      uVar7 = *puVar4;
      puVar6 = *(undefined8 **)(uVar5 + 7);
      pcVar3 = (code *)*puVar6;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar7);
      }
      if (puVar6[1] != 0) {
        _free(uVar7);
      }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(puVar4);
      return;
    }
  }
  else if (lVar2 == -0x7ffffffffffffffd) {
    puVar4 = (undefined8 *)param_1[2];
    if (puVar4 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)param_1[3];
      pcVar3 = (code *)*puVar6;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(puVar4);
      }
      if (puVar6[1] != 0) goto code_r0x000108aa97c4;
    }
  }
  else if (lVar2 == -0x7fffffffffffffff) {
    plVar1 = (long *)param_1[1];
    if (*plVar1 != 0xcc) {
                    /* WARNING: Could not recover jumptable at 0x000100d78350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(plVar1[2] + 0x20))();
      return;
    }
    *plVar1 = 0x84;
  }
  else if (lVar2 != -0x8000000000000000) {
    FUN_100d43d78();
    plVar1 = (long *)param_1[4];
    lVar2 = *plVar1;
    *plVar1 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      puVar4 = (undefined8 *)param_1[4];
      __ZN65__LT_std__sys__fs__unix__Dir_u20_as_u20_core__ops__drop__Drop_GT_4drop17h5fb63eb506e6bf74E
                (puVar4 + 5);
      if (puVar4[2] != 0) {
        _free(puVar4[3]);
      }
      if (puVar4 != (undefined8 *)0xffffffffffffffff) {
        lVar2 = puVar4[1];
        puVar4[1] = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
          goto code_r0x000108aa97c4;
        }
      }
      return;
    }
  }
  return;
}

