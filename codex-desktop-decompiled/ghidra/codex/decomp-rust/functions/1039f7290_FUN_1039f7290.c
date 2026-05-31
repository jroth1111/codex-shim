
void FUN_1039f7290(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  plVar2 = (long *)param_1[1];
  lVar3 = param_1[2];
  plVar1 = plVar2;
  do {
    if (lVar3 == 0) {
      if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(plVar2);
        return;
      }
      return;
    }
    lVar4 = *plVar1;
    if (lVar4 < 2) {
      if (lVar4 == 0) {
        if (plVar1[1] != 0) {
          _free(plVar1[2]);
        }
        if (plVar1[4] != 0) {
          _free(plVar1[5]);
        }
        if (plVar1[7] == 0) goto LAB_1039f72d0;
        lVar4 = 0x40;
      }
      else {
        if (plVar1[4] != 0) {
          _free(plVar1[5]);
        }
        uVar5 = plVar1[1] & 0x7fffffffffffffff;
joined_r0x0001039f72c0:
        if (uVar5 == 0) goto LAB_1039f72d0;
        lVar4 = 0x10;
      }
LAB_1039f72c8:
      _free(*(undefined8 *)((long)plVar1 + lVar4));
    }
    else {
      if (lVar4 != 2) {
        uVar5 = plVar1[1];
        goto joined_r0x0001039f72c0;
      }
      if (plVar1[7] != 0) {
        _free(plVar1[8]);
      }
      if (plVar1[1] == -0x8000000000000000 || plVar1[1] == 0) {
        uVar5 = plVar1[4];
      }
      else {
        _free(plVar1[2]);
        uVar5 = plVar1[4];
      }
      if ((uVar5 & 0x7fffffffffffffff) != 0) {
        lVar4 = 0x28;
        goto LAB_1039f72c8;
      }
    }
LAB_1039f72d0:
    plVar1 = plVar1 + 10;
    lVar3 = lVar3 + -1;
  } while( true );
}

