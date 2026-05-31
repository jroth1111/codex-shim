
void FUN_100cec868(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      plVar6 = (long *)(lVar1 + lVar4 * 0x30);
      if (*plVar6 == -0x8000000000000000 || *plVar6 == 0) {
        lVar5 = plVar6[3];
      }
      else {
        _free(plVar6[1]);
        lVar5 = plVar6[3];
      }
      if (lVar5 != -0x8000000000000000) {
        lVar2 = plVar6[4];
        lVar7 = plVar6[5];
        if (lVar7 != 0) {
          puVar8 = (undefined8 *)(lVar2 + 8);
          do {
            if (puVar8[-1] != 0) {
              _free(*puVar8);
            }
            puVar8 = puVar8 + 3;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        if (lVar5 != 0) {
          _free(lVar2);
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != lVar3);
  }
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar1);
    return;
  }
  return;
}

