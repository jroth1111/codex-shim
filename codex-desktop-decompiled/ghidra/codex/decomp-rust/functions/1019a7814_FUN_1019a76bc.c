
void FUN_1019a76bc(ulong *param_1,ulong *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar10 = *param_2 ^ 0x8000000000000000;
  if (-1 < (long)*param_2) {
    uVar10 = 5;
  }
  if ((long)uVar10 < 3) {
    if (uVar10 == 0) {
      *param_1 = 0x8000000000000000;
    }
    else {
      uVar10 = param_2[4];
      uVar4 = param_2[7];
      uVar11 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar10;
      param_1[7] = uVar4;
      param_1[6] = uVar11;
      param_1[8] = param_2[8];
      uVar4 = *param_2;
      uVar11 = param_2[3];
      uVar10 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar4;
      param_1[3] = uVar11;
      param_1[2] = uVar10;
    }
  }
  else if (uVar10 == 3) {
    uVar10 = param_2[2];
    uVar11 = param_2[3];
    if (uVar11 == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = _malloc(uVar11);
      if (uVar4 == 0) {
        uVar5 = func_0x0001087c9084(1,uVar11);
        FUN_10196e494(&uStack_68);
        __Unwind_Resume(uVar5);
        auVar12 = func_0x000108a07bc4();
        plVar9 = auVar12._8_8_;
        puVar6 = auVar12._0_8_;
        lVar1 = plVar9[1];
        lVar2 = plVar9[2];
        if (lVar2 != 0) {
          lVar7 = _malloc(lVar2);
          if (lVar7 == 0) {
            func_0x0001087c9084(1,lVar2);
          }
          else {
            _memcpy(lVar7,lVar1,lVar2);
            lVar8 = _malloc(lVar2);
            if (lVar8 != 0) goto LAB_1019a7870;
            func_0x0001087c9084(1,lVar2);
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1019a78f8);
          (*pcVar3)();
        }
        lVar7 = 1;
        lVar8 = 1;
LAB_1019a7870:
        _memcpy(lVar8,lVar7,lVar2);
        puVar6[3] = lVar2;
        puVar6[4] = lVar8;
        puVar6[5] = lVar2;
        puVar6[6] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[7] = 8;
        *puVar6 = 0;
        if (lVar2 != 0) {
          _free(lVar7);
        }
        if (*plVar9 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar1);
        return;
      }
    }
    _memcpy(uVar4,uVar10,uVar11);
    param_1[2] = uVar4;
    param_1[3] = uVar11;
    *param_1 = 0x8000000000000003;
    param_1[1] = uVar11;
  }
  else if (uVar10 == 4) {
    FUN_101a8b130(param_1 + 1,param_2[2],param_2[3]);
    *param_1 = 0x8000000000000004;
  }
  else {
    uStack_48 = 0;
    puStack_50 = &UNK_108cea360;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    uStack_60 = 8;
    uStack_58 = 0;
    FUN_1019d58e8(&uStack_68);
    param_1[1] = uStack_60;
    *param_1 = uStack_68;
    param_1[3] = (ulong)puStack_50;
    param_1[2] = uStack_58;
    param_1[5] = uStack_40;
    param_1[4] = uStack_48;
    param_1[6] = uStack_38;
    uVar10 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar10;
  }
  return;
}

