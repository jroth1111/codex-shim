
void FUN_100e38898(ulong *param_1)

{
  ushort uVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  FUN_100e68ba8(param_1 + 6);
  uVar4 = *param_1;
  if (uVar4 != 0x8000000000000006) {
    uVar6 = uVar4 ^ 0x8000000000000000;
    if (-1 < (long)uVar4) {
      uVar6 = 1;
    }
    if (uVar6 == 1) {
      if (uVar4 != 0) {
        _free(param_1[1]);
      }
      if (param_1[3] == 0) goto LAB_100e38918;
      lVar5 = 0x20;
    }
    else {
      if (((uVar6 != 3) && (uVar6 != 4)) || (param_1[1] == 0)) goto LAB_100e38918;
      lVar5 = 0x10;
    }
    _free(*(undefined8 *)((long)param_1 + lVar5));
  }
LAB_100e38918:
  plVar7 = (long *)param_1[0x10];
  if (plVar7 == (long *)0x0) {
    return;
  }
  uVar4 = param_1[0x11];
  uVar6 = param_1[0x12];
  plVar3 = plVar7;
  if (uVar6 == 0) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      plVar3 = (long *)plVar3[5];
    }
  }
  else {
    plVar3 = (long *)0x0;
    do {
      if (plVar3 == (long *)0x0) {
        for (; plVar3 = plVar7, uVar4 != 0; uVar4 = uVar4 - 1) {
          plVar7 = (long *)plVar3[5];
        }
        plVar7 = (long *)0x0;
        uVar4 = 0;
        if (*(short *)((long)plVar3 + 10) == 0) goto LAB_100e88394;
      }
      else if (*(ushort *)((long)plVar3 + 10) <= uVar4) {
LAB_100e88394:
        do {
          plVar8 = (long *)*plVar3;
          if (plVar8 == (long *)0x0) {
            _free();
            func_0x000108a07a20(&UNK_10b2382b0);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100e88450);
            (*pcVar2)();
          }
          plVar7 = (long *)((long)plVar7 + 1);
          uVar1 = *(ushort *)(plVar3 + 1);
          uVar4 = (ulong)uVar1;
          _free();
          plVar3 = plVar8;
        } while (*(ushort *)((long)plVar8 + 10) <= uVar1);
      }
      uVar4 = uVar4 + 1;
      if (plVar7 != (long *)0x0) {
        plVar3 = plVar3 + uVar4;
        do {
          plVar3 = (long *)plVar3[5];
          plVar7 = (long *)((long)plVar7 + -1);
        } while (plVar7 != (long *)0x0);
        uVar4 = 0;
      }
      plVar7 = (long *)0x0;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  plVar7 = (long *)*plVar3;
  while (plVar8 = plVar7, plVar8 != (long *)0x0) {
    _free(plVar3);
    plVar3 = plVar8;
    plVar7 = (long *)*plVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar3);
  return;
}

