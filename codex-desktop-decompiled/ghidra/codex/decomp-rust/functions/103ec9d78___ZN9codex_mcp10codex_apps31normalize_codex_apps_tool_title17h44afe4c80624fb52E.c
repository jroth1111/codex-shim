
void __ZN9codex_mcp10codex_apps31normalize_codex_apps_tool_title17h44afe4c80624fb52E
               (ulong *param_1,long *param_2,long param_3,long param_4,undefined8 param_5,
               long param_6,ulong param_7)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_88 [16];
  long lStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 *puStack_60;
  undefined *puStack_58;
  
  if ((((param_3 == 10) && (*param_2 == 0x70615f7865646f63 && (short)param_2[1] == 0x7370)) &&
      (param_4 != 0)) && (auStack_88 = FUN_103dc1e38(param_4,param_5), auStack_88._8_8_ != 0)) {
    puStack_60 = (undefined8 *)auStack_88;
    puStack_58 = &DAT_103d8be04;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&lStack_78,s___108aff995,&puStack_60);
    if (uStack_68 <= param_7) {
      iVar2 = _memcmp(uStack_70,param_6,uStack_68);
      uVar3 = param_7 - uStack_68;
      if ((uVar3 != 0) && (iVar2 == 0)) {
        uVar4 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(uVar3,1);
        param_7 = uVar3;
        if (uVar4 == 0) goto LAB_103ec9f08;
        _memcpy(uVar4,param_6 + uStack_68,uVar3);
        *param_1 = uVar3;
        param_1[1] = uVar4;
        param_1[2] = uVar3;
        goto joined_r0x000103ec9ed4;
      }
    }
    if (param_7 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = _malloc(param_7);
      if (uVar3 == 0) {
LAB_103ec9f08:
        func_0x0001087c9084(1,param_7);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ec9f18);
        (*pcVar1)();
      }
    }
    _memcpy(uVar3,param_6,param_7);
    *param_1 = param_7;
    param_1[1] = uVar3;
    param_1[2] = param_7;
joined_r0x000103ec9ed4:
    if (lStack_78 == 0) {
      return;
    }
    _free(uStack_70);
    return;
  }
  if (param_7 != 0) {
    uVar3 = _malloc(param_7);
    if (uVar3 != 0) goto LAB_103ec9df4;
    func_0x0001087c9084(1,param_7);
  }
  uVar3 = 1;
LAB_103ec9df4:
  _memcpy(uVar3,param_6,param_7);
  *param_1 = param_7;
  param_1[1] = uVar3;
  param_1[2] = param_7;
  return;
}

