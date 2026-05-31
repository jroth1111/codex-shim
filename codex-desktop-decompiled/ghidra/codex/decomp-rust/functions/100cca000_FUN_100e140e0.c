
void FUN_100e140e0(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  lVar4 = 0;
  if (*param_1 != 0) {
    lVar4 = *param_1 + -1;
  }
  if (lVar4 == 0) {
    if (param_1[2] != -0x8000000000000000) {
      FUN_100e33b40(param_1 + 2);
      if ((param_1[5] & 0x7fffffffffffffffU) == 0) {
        return;
      }
      puVar3 = (undefined8 *)param_1[6];
      goto code_r0x000108aa97c4;
    }
    uVar2 = param_1[3];
    if ((uVar2 & 3) != 1) {
      return;
    }
    puVar3 = (undefined8 *)(uVar2 - 1);
    uVar5 = *puVar3;
    puVar7 = *(undefined8 **)(uVar2 + 7);
    if ((code *)*puVar7 != (code *)0x0) {
      (*(code *)*puVar7)(uVar5);
    }
  }
  else if (lVar4 == 1) {
    lVar4 = param_1[1];
    if (lVar4 != -0x8000000000000000) {
      puVar3 = (undefined8 *)param_1[2];
      lVar6 = param_1[3];
      if (lVar6 != 0) {
        puVar7 = puVar3 + 1;
        do {
          if (puVar7[-1] != 0) {
            _free(*puVar7);
          }
          puVar7 = puVar7 + 4;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      if (lVar4 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    uVar2 = param_1[2];
    if ((uVar2 & 3) != 1) {
      return;
    }
    puVar3 = (undefined8 *)(uVar2 - 1);
    uVar5 = *puVar3;
    puVar7 = *(undefined8 **)(uVar2 + 7);
    if ((code *)*puVar7 != (code *)0x0) {
      (*(code *)*puVar7)(uVar5);
    }
  }
  else {
    if (param_1[1] != -0x8000000000000000) {
      puVar3 = (undefined8 *)param_1[2];
      if (param_1[3] != 0) {
        lVar4 = 0;
        lVar6 = 1 - param_1[3];
        do {
          lVar1 = **(long **)((long)puVar3 + lVar4);
          **(long **)((long)puVar3 + lVar4) = lVar1 + -1;
          LORelease();
          if (lVar1 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1feaf2fe4a03fe20E((long)puVar3 + lVar4);
          }
          lVar4 = lVar4 + 0x10;
          lVar6 = lVar6 + 1;
        } while (lVar6 != 1);
      }
      if (param_1[1] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    uVar2 = param_1[2];
    if ((uVar2 & 3) != 1) {
      return;
    }
    puVar3 = (undefined8 *)(uVar2 - 1);
    uVar5 = *puVar3;
    puVar7 = *(undefined8 **)(uVar2 + 7);
    if ((code *)*puVar7 != (code *)0x0) {
      (*(code *)*puVar7)(uVar5);
    }
  }
  if (puVar7[1] != 0) {
    _free(uVar5);
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar3);
  return;
}

