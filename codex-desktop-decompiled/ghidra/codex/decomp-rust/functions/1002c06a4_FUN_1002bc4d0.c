
void FUN_1002bc4d0(long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lStack_190;
  undefined1 auStack_188 [112];
  undefined1 auStack_118 [200];
  
  cVar1 = (char)param_1[0x2d];
  if (*param_1 == 0) {
    if (cVar1 == '\x03') goto LAB_1002bc52c;
    if (cVar1 != '\0') {
      return;
    }
    if (param_1[1] != 3) {
      FUN_1002be164(param_1 + 1);
      goto LAB_1002bc554;
    }
  }
  else {
    if (cVar1 == '\x03') {
LAB_1002bc52c:
      param_1 = param_1 + 0x2c;
      goto LAB_1002bc530;
    }
    if (cVar1 != '\0') {
      return;
    }
    if (param_1[1] != 3) {
      FUN_1002be164(param_1 + 1);
LAB_1002bc554:
      if (param_1[0x1d] == 1) {
        lVar2 = param_1[0x1f];
        puVar9 = (undefined8 *)param_1[0x20];
        pcVar4 = (code *)*puVar9;
        if (param_1[0x1e] == 0) {
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(lVar2);
          }
        }
        else if (pcVar4 != (code *)0x0) {
          (*pcVar4)(lVar2);
        }
        if (puVar9[1] != 0) {
          _free(lVar2);
        }
      }
      else if ((param_1[0x1d] == 0) && (param_1[0x1e] != 0)) {
        (**(code **)(param_1[0x1e] + 0x20))(param_1 + 0x21,param_1[0x1f],param_1[0x20]);
      }
      plVar5 = (long *)param_1[0x26];
      if (plVar5 != (long *)0x0) {
        lVar2 = *plVar5;
        *plVar5 = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
          func_0x000100342be8();
        }
      }
      if (param_1[0x28] != 0) {
        (**(code **)(param_1[0x28] + 0x20))(param_1 + 0x2b,param_1[0x29],param_1[0x2a]);
      }
      uVar10 = param_1[0x22];
      if (uVar10 != 0x8000000000000000) {
        uVar6 = param_1[0x25];
        if (uVar6 == 0) {
          lVar3 = 0;
          uVar7 = 0;
          lVar2 = 0;
        }
        else {
          uVar7 = 0;
          if (uVar10 <= (ulong)param_1[0x24]) {
            uVar7 = uVar10;
          }
          lVar3 = param_1[0x24] - uVar7;
          lVar11 = uVar6 - (uVar10 - lVar3);
          uVar7 = lVar3 + uVar6;
          lVar2 = 0;
          if (uVar10 - lVar3 <= uVar6 && lVar11 != 0) {
            uVar7 = uVar10;
            lVar2 = lVar11;
          }
        }
        lVar8 = param_1[0x23];
        lVar11 = (uVar7 - lVar3) + 1;
        lVar3 = lVar8 + lVar3 * 0x60;
        while (lVar11 = lVar11 + -1, lVar11 != 0) {
          FUN_1002bf550(lVar3);
          lVar3 = lVar3 + 0x60;
        }
        lVar2 = lVar2 + 1;
        lVar3 = lVar8;
        while (lVar2 = lVar2 + -1, lVar2 != 0) {
          FUN_1002bf550(lVar3);
          lVar3 = lVar3 + 0x60;
        }
        if (uVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(lVar8);
          return;
        }
      }
      return;
    }
  }
  param_1 = param_1 + 2;
LAB_1002bc530:
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    LOAcquire();
    uVar10 = plVar5[0x32];
    plVar5[0x32] = uVar10 | 4;
    if ((uVar10 & 10) == 8) {
      (**(code **)(plVar5[0x2e] + 0x10))(plVar5[0x2f]);
    }
    if (((uint)uVar10 >> 1 & 1) != 0) {
      _memcpy(&lStack_190,plVar5 + 2,0x160);
      plVar5[2] = 5;
      if (lStack_190 != 5) {
        if (lStack_190 == 4) {
          FUN_1002be704(auStack_188);
          FUN_1002c07f4(auStack_118);
        }
        else {
          FUN_1002b4e34(&lStack_190);
        }
      }
    }
    lVar2 = *plVar5;
    *plVar5 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hffac591e655df859E(param_1);
    }
  }
  return;
}

