
void FUN_102e68bd0(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_68;
  
  lVar2 = param_3[1];
  auVar9 = FUN_102a23d3c(lVar2,param_3[2]);
  lVar8 = auVar9._8_8_;
  if (lVar8 != 0) {
    lVar3 = param_3[3];
    lVar6 = _malloc(lVar8);
    if (lVar6 == 0) {
      func_0x0001087c9084(1,lVar8);
LAB_102e68d24:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102e68d28);
      (*pcVar4)();
    }
    _memcpy(lVar6,auVar9._0_8_,lVar8);
    if (lVar8 != -0x8000000000000000) {
      lVar7 = _malloc(lVar8);
      if (lVar7 == 0) {
        func_0x0001087c9084(1,lVar8);
        goto LAB_102e68d24;
      }
      _memcpy(lVar7,auVar9._0_8_,lVar8);
      lStack_80 = lVar8;
      lStack_78 = lVar7;
      lStack_70 = lVar8;
      uStack_68 = (char)lVar3;
      iVar5 = func_0x000103873f94(param_1,&lStack_80);
      if (iVar5 == 0) {
        lVar7 = param_2[2];
        if (lVar7 == *param_2) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h03420294d64adb6aE(param_2);
        }
        plVar1 = (long *)(param_2[1] + lVar7 * 0x20);
        *plVar1 = lVar8;
        plVar1[1] = lVar6;
        plVar1[2] = lVar8;
        *(char *)(plVar1 + 3) = (char)lVar3;
        param_2[2] = lVar7 + 1;
        lVar8 = *param_3;
        goto joined_r0x000102e68ce4;
      }
      _free(lVar6);
    }
  }
  lVar8 = *param_3;
joined_r0x000102e68ce4:
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar2);
    return;
  }
  return;
}

