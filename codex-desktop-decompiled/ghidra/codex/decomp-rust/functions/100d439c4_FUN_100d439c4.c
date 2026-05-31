
void FUN_100d439c4(long *param_1)

{
  char *pcVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  lVar8 = *param_1;
  uVar13 = param_1[1];
  bVar4 = lVar8 != 0;
  lVar12 = param_1[2];
  if (lVar8 == 0 || lVar12 == 0) {
    lVar11 = lVar8;
    if (lVar8 == 0) {
      return;
    }
  }
  else {
    lVar11 = 0;
    do {
      if (!bVar4) {
        func_0x000108a07a20(&UNK_10b2382e0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100d43cbc);
        (*pcVar3)();
      }
      lVar10 = lVar8;
      if (lVar11 == 0) {
        for (; uVar13 != 0; uVar13 = uVar13 - 1) {
          lVar10 = *(long *)(lVar10 + 0x278);
        }
        lVar8 = 0;
        uVar14 = 0;
        if (*(short *)(lVar10 + 0x272) == 0) goto LAB_100d43a8c;
      }
      else {
        lVar10 = lVar11;
        uVar14 = uVar13;
        if (*(ushort *)(lVar11 + 0x272) <= uVar13) {
LAB_100d43a8c:
          do {
            lVar11 = *(long *)(lVar10 + 0x160);
            if (lVar11 == 0) {
              _free(lVar10);
              func_0x000108a07a20(&UNK_10b2382b0);
LAB_100d43ca8:
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100d43cac);
              (*pcVar3)();
            }
            lVar8 = lVar8 + 1;
            uVar2 = *(ushort *)(lVar10 + 0x270);
            _free(lVar10);
            lVar10 = lVar11;
            uVar14 = (ulong)uVar2;
          } while (*(ushort *)(lVar11 + 0x272) <= uVar2);
        }
      }
      uVar13 = uVar14 + 1;
      if (lVar8 == 0) {
        lVar8 = lVar10 + uVar14 * 0x18;
        lVar9 = *(long *)(lVar8 + 0x168);
        lVar11 = lVar10;
      }
      else {
        lVar11 = lVar10 + uVar13 * 8;
        do {
          lVar11 = *(long *)(lVar11 + 0x278);
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        uVar13 = 0;
        lVar8 = lVar10 + uVar14 * 0x18;
        lVar9 = *(long *)(lVar8 + 0x168);
      }
      if (lVar9 != 0) {
        _free(*(undefined8 *)(lVar8 + 0x170));
      }
      pcVar1 = (char *)(lVar10 + uVar14 * 0x20);
      if ((*pcVar1 != '\0') && (plVar5 = *(long **)(pcVar1 + 8), plVar5 != (long *)0x0)) {
        uVar14 = *(ulong *)(pcVar1 + 0x10);
        lVar8 = *(long *)(pcVar1 + 0x18);
        plVar6 = plVar5;
        if (lVar8 == 0) {
          for (; uVar14 != 0; uVar14 = uVar14 - 1) {
            plVar6 = (long *)plVar6[0x24];
          }
        }
        else {
          plVar6 = (long *)0x0;
          do {
            if (plVar6 == (long *)0x0) {
              for (; plVar6 = plVar5, uVar14 != 0; uVar14 = uVar14 - 1) {
                plVar5 = (long *)plVar6[0x24];
              }
              plVar5 = (long *)0x0;
              uVar14 = 0;
              if (*(short *)((long)plVar6 + 0x112) == 0) goto LAB_100d43b60;
            }
            else if (*(ushort *)((long)plVar6 + 0x112) <= uVar14) {
LAB_100d43b60:
              do {
                plVar7 = (long *)*plVar6;
                if (plVar7 == (long *)0x0) {
                  _free();
                  func_0x000108a07a20(&UNK_10b2382b0);
                  goto LAB_100d43ca8;
                }
                plVar5 = (long *)((long)plVar5 + 1);
                uVar2 = *(ushort *)(plVar6 + 0x22);
                uVar14 = (ulong)uVar2;
                _free();
                plVar6 = plVar7;
              } while (*(ushort *)((long)plVar7 + 0x112) <= uVar2);
            }
            if (plVar5 == (long *)0x0) {
              plVar5 = plVar6 + uVar14 * 3 + 1;
              lVar10 = *plVar5;
              uVar14 = uVar14 + 1;
            }
            else {
              plVar7 = plVar6 + uVar14 + 1;
              do {
                plVar7 = (long *)plVar7[0x24];
                plVar5 = (long *)((long)plVar5 + -1);
              } while (plVar5 != (long *)0x0);
              plVar5 = plVar6 + uVar14 * 3 + 1;
              lVar10 = *plVar5;
              uVar14 = 0;
              plVar6 = plVar7;
            }
            if (lVar10 != 0) {
              _free(plVar5[1]);
            }
            plVar5 = (long *)0x0;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        plVar5 = (long *)*plVar6;
        while (plVar7 = plVar5, plVar7 != (long *)0x0) {
          _free(plVar6);
          plVar6 = plVar7;
          plVar5 = (long *)*plVar7;
        }
        _free(plVar6);
      }
      lVar8 = 0;
      bVar4 = true;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    if (lVar11 != 0) goto LAB_100d43c38;
  }
  for (; uVar13 != 0; uVar13 = uVar13 - 1) {
    lVar11 = *(long *)(lVar11 + 0x278);
  }
LAB_100d43c38:
  lVar8 = *(long *)(lVar11 + 0x160);
  while (lVar12 = lVar8, lVar12 != 0) {
    _free(lVar11);
    lVar11 = lVar12;
    lVar8 = *(long *)(lVar12 + 0x160);
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar11);
  return;
}

