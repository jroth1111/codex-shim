
void FUN_1061267c4(ulong *param_1,undefined8 *param_2,long param_3)

{
  ulong *puVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *extraout_x1;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined2 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  if (param_3 == 0) {
LAB_106126854:
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  lVar16 = param_3 * 0x10;
  puVar3 = param_2 + param_3 * 2;
  puVar15 = param_2 + 2;
  uVar12 = lVar16 - 0x10U >> 3;
  lVar10 = lVar16;
  puVar11 = param_2;
  do {
    if (lVar10 == 0) goto LAB_106126844;
    puVar1 = puVar11 + 1;
    puVar11 = puVar11 + 2;
    lVar10 = lVar10 + -0x10;
    bVar6 = CARRY8(*puVar1,uVar12);
    uVar12 = *puVar1 + uVar12;
  } while (!bVar6);
  func_0x000108a079f0(&UNK_109becbcb,0x35,&UNK_10b4cf6b8);
  param_2 = extraout_x1;
LAB_106126844:
  if ((long)uVar12 < 0) {
    func_0x0001087c9084(0,uVar12);
    goto LAB_106126854;
  }
  if (uVar12 == 0) {
    uStack_70 = 1;
    lStack_68 = 0;
    uVar8 = *param_2;
    uVar14 = param_2[1];
    uStack_78 = uVar12;
    if (uVar14 == 0) goto LAB_1061268b8;
  }
  else {
    uVar7 = _malloc(uVar12);
    if (uVar7 == 0) {
      uVar8 = func_0x0001087c9084(1,uVar12);
      if (uStack_78 != 0) {
        _free(uStack_70);
      }
      plVar9 = (long *)__Unwind_Resume(uVar8);
      if (*plVar9 != -1) {
        lVar16 = plVar9[1];
        plVar9 = (long *)(*plVar9 + 8);
        lVar10 = *plVar9;
        *plVar9 = lVar10 + -1;
        LORelease();
        if ((lVar10 == 1) && (DataMemoryBarrier(2,1), 7 < lVar16 + 0x17U)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)();
          return;
        }
      }
      return;
    }
    lStack_68 = 0;
    uVar8 = *param_2;
    uVar14 = param_2[1];
    uStack_78 = uVar12;
    uStack_70 = uVar7;
    if (uVar14 <= uVar12) goto LAB_1061268b8;
  }
  lStack_68 = 0;
  uStack_78 = uVar12;
  FUN_108a8c380(&uStack_78,0,uVar14,1,1);
LAB_1061268b8:
  lVar10 = lStack_68;
  uVar4 = uStack_70;
  _memcpy(uStack_70 + lStack_68,uVar8,uVar14);
  uVar7 = uVar12 - (lVar10 + uVar14);
  if (lVar16 != 0x10) {
    puVar13 = (undefined2 *)(uVar4 + lVar10 + uVar14);
    do {
      uVar14 = uVar7 - 2;
      if (uVar7 < 2) {
LAB_10612693c:
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109becaea,0x13,&UNK_10b4cf6d0);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x106126958);
        (*pcVar5)();
      }
      puVar11 = puVar15 + 2;
      uVar8 = *puVar15;
      uVar4 = puVar15[1];
      *puVar13 = 0x202c;
      uVar7 = uVar14 - uVar4;
      if (uVar14 < uVar4) goto LAB_10612693c;
      puVar2 = puVar13 + 1;
      puVar13 = (undefined2 *)((long)puVar2 + uVar4);
      _memcpy(puVar2,uVar8);
      puVar15 = puVar11;
    } while (puVar11 != puVar3);
  }
  param_1[1] = uStack_70;
  *param_1 = uStack_78;
  param_1[2] = uVar12 - uVar7;
  return;
}

