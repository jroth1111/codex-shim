
void FUN_100dff504(long param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (*(long *)(param_1 + 0x40) == -0x8000000000000000 || *(long *)(param_1 + 0x40) == 0) {
    if (*(long *)(param_1 + 0x58) == -0x7ffffffffffffffc) goto LAB_100dff540;
LAB_100dff5b0:
    FUN_100e05ca4();
    if (*(long *)(param_1 + 0xf0) != -0x7ffffffffffffffc) goto LAB_100dff5c4;
LAB_100dff550:
    lVar8 = *(long *)(param_1 + 0x188);
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x48));
    if (*(long *)(param_1 + 0x58) != -0x7ffffffffffffffc) goto LAB_100dff5b0;
LAB_100dff540:
    if (*(long *)(param_1 + 0xf0) == -0x7ffffffffffffffc) goto LAB_100dff550;
LAB_100dff5c4:
    FUN_100e05ca4();
    lVar8 = *(long *)(param_1 + 0x188);
  }
  if (lVar8 != -0x7ffffffffffffffc) {
    FUN_100e05ca4(param_1 + 0x188);
  }
  func_0x000100d2eaf0(param_1);
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  plVar4 = *(long **)(param_1 + 0x28);
  uVar11 = *(ulong *)(param_1 + 0x30);
  bVar3 = plVar4 != (long *)0x0;
  lVar8 = *(long *)(param_1 + 0x38);
  if (plVar4 == (long *)0x0 || lVar8 == 0) {
    plVar9 = plVar4;
    if (plVar4 == (long *)0x0) {
      return;
    }
  }
  else {
    plVar9 = (long *)0x0;
    do {
      if (!bVar3) {
        func_0x000108a07a20(&UNK_10b2382e0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100d8578c);
        (*pcVar2)();
      }
      if (plVar9 == (long *)0x0) {
        for (; plVar9 = plVar4, uVar11 != 0; uVar11 = uVar11 - 1) {
          plVar4 = (long *)plVar9[0x44];
        }
        plVar4 = (long *)0x0;
        uVar11 = 0;
        if (*(short *)((long)plVar9 + 0x21a) == 0) goto LAB_100d8554c;
      }
      else if (*(ushort *)((long)plVar9 + 0x21a) <= uVar11) {
LAB_100d8554c:
        do {
          plVar10 = (long *)*plVar9;
          if (plVar10 == (long *)0x0) {
            _free(plVar9);
            func_0x000108a07a20(&UNK_10b2382b0);
LAB_100d85778:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100d8577c);
            (*pcVar2)();
          }
          plVar4 = (long *)((long)plVar4 + 1);
          uVar1 = *(ushort *)(plVar9 + 0x43);
          uVar11 = (ulong)uVar1;
          _free(plVar9);
          plVar9 = plVar10;
        } while (*(ushort *)((long)plVar10 + 0x21a) <= uVar1);
      }
      if (plVar4 == (long *)0x0) {
        plVar4 = plVar9 + uVar11 * 3 + 1;
        lVar6 = *plVar4;
        uVar11 = uVar11 + 1;
      }
      else {
        plVar10 = plVar9 + uVar11 + 1;
        do {
          plVar10 = (long *)plVar10[0x44];
          plVar4 = (long *)((long)plVar4 + -1);
        } while (plVar4 != (long *)0x0);
        plVar4 = plVar9 + uVar11 * 3 + 1;
        lVar6 = *plVar4;
        uVar11 = 0;
        plVar9 = plVar10;
      }
      if (lVar6 != 0) {
        _free(plVar4[1]);
      }
      plVar10 = (long *)plVar4[0x21];
      if (plVar10 != (long *)0x0) {
        uVar12 = plVar4[0x22];
        lVar6 = plVar4[0x23];
        plVar4 = plVar10;
        if (lVar6 == 0) {
          for (; uVar12 != 0; uVar12 = uVar12 - 1) {
            plVar4 = (long *)plVar4[0x44];
          }
        }
        else {
          plVar4 = (long *)0x0;
          do {
            if (plVar4 == (long *)0x0) {
              for (; plVar4 = plVar10, uVar12 != 0; uVar12 = uVar12 - 1) {
                plVar10 = (long *)plVar4[0x44];
              }
              plVar10 = (long *)0x0;
              uVar12 = 0;
              if (*(short *)((long)plVar4 + 0x21a) == 0) goto LAB_100d85614;
            }
            else if (*(ushort *)((long)plVar4 + 0x21a) <= uVar12) {
LAB_100d85614:
              do {
                plVar5 = (long *)*plVar4;
                if (plVar5 == (long *)0x0) {
                  _free();
                  func_0x000108a07a20(&UNK_10b2382b0);
                  goto LAB_100d85778;
                }
                plVar10 = (long *)((long)plVar10 + 1);
                uVar1 = *(ushort *)(plVar4 + 0x43);
                uVar12 = (ulong)uVar1;
                _free();
                plVar4 = plVar5;
              } while (*(ushort *)((long)plVar5 + 0x21a) <= uVar1);
            }
            if (plVar10 == (long *)0x0) {
              plVar10 = plVar4 + uVar12 * 3 + 1;
              lVar7 = *plVar10;
              uVar12 = uVar12 + 1;
            }
            else {
              plVar5 = plVar4 + uVar12 + 1;
              do {
                plVar5 = (long *)plVar5[0x44];
                plVar10 = (long *)((long)plVar10 + -1);
              } while (plVar10 != (long *)0x0);
              plVar10 = plVar4 + uVar12 * 3 + 1;
              lVar7 = *plVar10;
              uVar12 = 0;
              plVar4 = plVar5;
            }
            if (lVar7 != 0) {
              _free(plVar10[1]);
            }
            if (plVar10[0x21] != 0) {
              _free(plVar10[0x22]);
            }
            plVar10 = (long *)0x0;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        plVar10 = (long *)*plVar4;
        while (plVar5 = plVar10, plVar5 != (long *)0x0) {
          _free(plVar4);
          plVar4 = plVar5;
          plVar10 = (long *)*plVar5;
        }
        _free(plVar4);
      }
      plVar4 = (long *)0x0;
      bVar3 = true;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    if (plVar9 != (long *)0x0) goto LAB_100d85708;
  }
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    plVar9 = (long *)plVar9[0x44];
  }
LAB_100d85708:
  plVar4 = (long *)*plVar9;
  while (plVar10 = plVar4, plVar10 != (long *)0x0) {
    _free(plVar9);
    plVar9 = plVar10;
    plVar4 = (long *)*plVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar9);
  return;
}

