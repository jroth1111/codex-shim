
void FUN_100d33dbc(long *param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  if (*param_1 == 2) {
    plVar2 = (long *)param_1[1];
    if (*plVar2 == 1) {
      uVar4 = plVar2[1];
      if ((uVar4 & 3) != 1) goto LAB_100d33e78;
      puVar3 = (undefined8 *)(uVar4 - 1);
      uVar6 = *puVar3;
      puVar8 = *(undefined8 **)(uVar4 + 7);
      pcVar1 = (code *)*puVar8;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(uVar6);
      }
      if (puVar8[1] != 0) {
        _free(uVar6);
      }
    }
    else {
      if ((*plVar2 != 0) || (plVar2[2] == 0)) goto LAB_100d33e78;
      puVar3 = (undefined8 *)plVar2[1];
    }
    _free(puVar3);
  }
  else if (*param_1 == 0) {
    if (param_1[1] == 0) {
      return;
    }
    plVar2 = (long *)param_1[2];
  }
  else {
    plVar2 = (long *)param_1[2];
    lVar5 = param_1[3];
    if (lVar5 != 0) {
      plVar7 = plVar2 + 1;
      do {
        if (plVar7[-1] != 0) {
          _free(*plVar7);
        }
        plVar7 = plVar7 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (param_1[1] == 0) {
      return;
    }
  }
LAB_100d33e78:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar2);
  return;
}

