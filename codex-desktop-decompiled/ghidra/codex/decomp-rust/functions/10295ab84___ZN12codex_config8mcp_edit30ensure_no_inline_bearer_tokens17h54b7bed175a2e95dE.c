
undefined8
__ZN12codex_config8mcp_edit30ensure_no_inline_bearer_tokens17h54b7bed175a2e95dE(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_60;
  undefined1 auStack_58 [24];
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((-1 < *param_1) && (param_1[2] != 0)) {
    lVar4 = param_1[2] * 0x70;
    plVar3 = (long *)(param_1[1] + 0x18);
    while ((plStack_60 = plVar3 + -3, *plVar3 < 0 ||
           (lVar1 = func_0x000102b61fac(plVar3,&UNK_108d49cb6,0xc), lVar1 != 1))) {
      plVar3 = plVar3 + 0xe;
      lVar4 = lVar4 + -0x70;
      if (lVar4 == 0) {
        return 0;
      }
    }
    puStack_38 = &DAT_102a025ac;
    puStack_40 = (undefined1 *)&plStack_60;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (auStack_58,s_mcp_servers____uses_unsupported___108aefcee,&puStack_40);
    uVar2 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x15,auStack_58);
    return uVar2;
  }
  return 0;
}

