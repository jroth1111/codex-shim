
void __ZN9codex_mcp10codex_apps34normalize_codex_apps_callable_name17h9f4c5ccc815d9c84E
               (long *param_1,long *param_2,long param_3,undefined8 param_4,long param_5,
               long param_6,undefined8 param_7,long param_8,undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  if ((param_3 == 10) && (*param_2 == 0x70615f7865646f63 && (short)param_2[1] == 0x7370)) {
    func_0x00010558a730(&lStack_90,param_4,param_5);
    if (param_8 != 0) {
      FUN_103dc1e38(param_8,param_9);
      func_0x00010558a730(&lStack_78);
      uVar4 = uStack_68;
      uVar2 = uStack_70;
      lVar1 = lStack_78;
      uVar3 = uStack_80;
      lVar7 = lStack_88;
      if (lStack_78 != -0x8000000000000000) {
        if ((((uStack_68 != 0) && (lVar9 = uStack_80 - uStack_68, uStack_68 <= uStack_80)) &&
            (iVar6 = _memcmp(uStack_70,lStack_88,uStack_68), iVar6 == 0)) && (uVar3 != uVar4)) {
          lVar8 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar9,1);
          if (lVar8 == 0) {
            func_0x0001087c9084(1,lVar9);
            goto LAB_103eca334;
          }
          _memcpy(lVar8,lVar7 + uVar4,lVar9);
          *param_1 = lVar9;
          param_1[1] = lVar8;
          param_1[2] = lVar9;
          goto joined_r0x000103eca310;
        }
        if (lVar1 != 0) {
          _free(uVar2);
        }
      }
    }
    if (param_6 != 0) {
      FUN_103dc1e38(param_6,param_7);
      func_0x00010558a730(&lStack_78);
      uVar3 = uStack_80;
      lVar7 = lStack_88;
      if (lStack_78 != -0x8000000000000000) {
        if (((uStack_68 != 0) && (lVar1 = uStack_80 - uStack_68, uStack_68 <= uStack_80)) &&
           ((iVar6 = _memcmp(uStack_70,lStack_88,uStack_68), iVar6 == 0 && (uVar3 != uStack_68)))) {
          lVar9 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar1,1);
          if (lVar9 == 0) {
            func_0x0001087c9084(1,lVar1);
LAB_103eca334:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x103eca338);
            (*pcVar5)();
          }
          _memcpy(lVar9,lVar7 + uStack_68,lVar1);
          *param_1 = lVar1;
          param_1[1] = lVar9;
          param_1[2] = lVar1;
          uVar2 = uStack_70;
          lVar1 = lStack_78;
joined_r0x000103eca310:
          if (lVar1 != 0) {
            _free(uVar2);
          }
          if (lStack_90 == 0) {
            return;
          }
          _free(lVar7);
          return;
        }
        if (lStack_78 != 0) {
          _free(uStack_70);
        }
      }
    }
    param_1[1] = lStack_88;
    *param_1 = lStack_90;
    param_1[2] = uStack_80;
    return;
  }
  if (param_5 != 0) {
    lVar7 = _malloc(param_5);
    if (lVar7 != 0) goto LAB_103eca164;
    func_0x0001087c9084(1,param_5);
  }
  lVar7 = 1;
LAB_103eca164:
  _memcpy(lVar7,param_4,param_5);
  *param_1 = param_5;
  param_1[1] = lVar7;
  param_1[2] = param_5;
  return;
}

