
void __ZN3std3env11current_dir17he7f55ba519818f7aE(ulong *param_1)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  undefined8 uVar10;
  ulong *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong uVar11;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 auStack_d8 [3];
  uint uStack_84;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar5 = _malloc(0x200);
  if (uVar5 == 0) {
    uVar10 = func_0x0001087c9084(1,0x200);
    _free();
    __Unwind_Resume(uVar10);
    uStack_84 = 0;
    __NSGetExecutablePath(0,&uStack_84);
    uVar5 = (ulong)uStack_84;
    if (uStack_84 == 0) {
      puVar9 = (uint *)___error();
      uVar1 = *puVar9;
      *extraout_x8 = 0x8000000000000000;
      extraout_x8[1] = (ulong)uVar1 << 0x20 | 2;
    }
    else {
      uVar11 = _malloc(uVar5);
      if (uVar11 == 0) {
        func_0x0001087c9084(1,uVar5);
        __ZN3std3env7_var_os17h6bd9111edd9950c4E(&lStack_f0);
        if (lStack_f0 == -0x8000000000000000) {
          auStack_d8[0] = 1;
          lVar6 = 8;
          uStack_e0 = 0x8000000000000000;
        }
        else {
          func_0x0001055bf348(auStack_d8,uStack_e8,uStack_e0);
          lVar6 = 0x18;
          extraout_x8_00[1] = lStack_f0;
          extraout_x8_00[2] = uStack_e8;
        }
        *(undefined8 *)((long)extraout_x8_00 + lVar6) = uStack_e0;
        *extraout_x8_00 = auStack_d8[0];
        return;
      }
      iVar4 = __NSGetExecutablePath(uVar11,&uStack_84);
      if (iVar4 == 0) {
        *extraout_x8 = uVar5;
        extraout_x8[1] = uVar11;
        extraout_x8[2] = (ulong)uStack_84 - 1;
      }
      else {
        puVar9 = (uint *)___error();
        uVar1 = *puVar9;
        *extraout_x8 = 0x8000000000000000;
        extraout_x8[1] = (ulong)uVar1 << 0x20 | 2;
        _free(uVar11);
      }
    }
    return;
  }
  uVar11 = 0x200;
  uStack_48 = 0x200;
  uStack_40 = uVar5;
  lVar6 = _getcwd(uVar5,0x200);
  if (lVar6 != 0) {
LAB_10602b800:
    uVar7 = _strlen(uVar5);
    uVar2 = uStack_48;
    uVar8 = uStack_40;
    uStack_38 = uVar7;
    if (uVar7 < uVar11) {
      uVar2 = uVar7;
      if (uVar7 == 0) {
        _free(uVar5);
        uVar8 = 1;
      }
      else {
        uVar8 = _realloc(uVar5,uVar7);
        if (uVar8 == 0) {
          func_0x0001087c9084(1,uVar7);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10602b83c);
          (*pcVar3)();
        }
      }
    }
    uStack_40 = uVar8;
    uStack_48 = uVar2;
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[2] = uStack_38;
    return;
  }
  puVar9 = (uint *)___error();
  uVar1 = *puVar9;
  if (uVar1 == 0x22) {
    uVar11 = 0x200;
    do {
      uStack_38 = uVar11;
      FUN_108a85fec(&uStack_48,uVar11,1,1,1);
      uVar5 = uStack_40;
      uVar11 = uStack_48;
      lVar6 = _getcwd(uStack_40,uStack_48);
      if (lVar6 != 0) goto LAB_10602b800;
      uVar1 = *puVar9;
    } while (uVar1 == 0x22);
    *param_1 = 0x8000000000000000;
    param_1[1] = (ulong)uVar1 << 0x20 | 2;
    if (uVar11 == 0) {
      return;
    }
  }
  else {
    *param_1 = 0x8000000000000000;
    param_1[1] = (ulong)uVar1 << 0x20 | 2;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(uVar5);
  return;
}

