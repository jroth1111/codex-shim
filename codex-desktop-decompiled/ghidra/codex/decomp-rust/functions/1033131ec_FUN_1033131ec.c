
void FUN_1033131ec(long *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  
  lVar4 = *param_1;
  uVar9 = param_1[1];
  lVar8 = param_1[2];
  bVar3 = lVar4 != 0;
  if (lVar4 == 0 || lVar8 == 0) {
    lVar5 = lVar4;
    if (lVar4 == 0) {
      return;
    }
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      lVar5 = *(long *)(lVar5 + 0x328);
    }
  }
  else {
    lVar5 = 0;
    do {
      if (!bVar3) {
        func_0x000108a07a20(&UNK_10b2c3100);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1033133cc);
        (*pcVar2)();
      }
      lVar6 = lVar4;
      if (lVar5 == 0) {
        for (; uVar9 != 0; uVar9 = uVar9 - 1) {
          lVar6 = *(long *)(lVar6 + 0x328);
        }
        lVar4 = 0;
        uVar11 = 0;
        if (*(short *)(lVar6 + 0x322) == 0) goto LAB_1033132c0;
      }
      else {
        lVar6 = lVar5;
        uVar11 = uVar9;
        if (*(ushort *)(lVar5 + 0x322) <= uVar9) {
LAB_1033132c0:
          do {
            lVar5 = *(long *)(lVar6 + 0x210);
            if (lVar5 == 0) {
              _free();
              func_0x000108a07a20(&UNK_10b2c30d0);
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1033133bc);
              (*pcVar2)();
            }
            lVar4 = lVar4 + 1;
            uVar1 = *(ushort *)(lVar6 + 800);
            _free();
            lVar6 = lVar5;
            uVar11 = (ulong)uVar1;
          } while (*(ushort *)(lVar5 + 0x322) <= uVar1);
        }
      }
      uVar9 = uVar11 + 1;
      if (lVar4 == 0) {
        lVar4 = lVar6 + uVar11 * 0x18;
        lVar7 = *(long *)(lVar4 + 0x218);
        lVar5 = lVar6;
      }
      else {
        lVar5 = lVar6 + uVar9 * 8;
        do {
          lVar5 = *(long *)(lVar5 + 0x328);
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        uVar9 = 0;
        lVar4 = lVar6 + uVar11 * 0x18;
        lVar7 = *(long *)(lVar4 + 0x218);
      }
      if (lVar7 != 0) {
        _free(*(undefined8 *)(lVar4 + 0x220));
      }
      plVar10 = (long *)(lVar6 + uVar11 * 0x30);
      if (*plVar10 != 0) {
        _free(plVar10[1]);
      }
      if (plVar10[3] != 0) {
        _free(plVar10[4]);
      }
      lVar4 = 0;
      bVar3 = true;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  lVar4 = *(long *)(lVar5 + 0x210);
  while (lVar8 = lVar4, lVar8 != 0) {
    _free(lVar5);
    lVar5 = lVar8;
    lVar4 = *(long *)(lVar8 + 0x210);
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar5);
  return;
}

