
void __ZN10codex_core10connectors31accessible_connectors_cache_key17h367fc7f353713748E
               (long *param_1,long param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_3 == 0) {
    bVar2 = false;
    lStack_70 = -0x8000000000000000;
    lStack_58 = -0x8000000000000000;
    uVar6 = *(undefined8 *)(param_2 + 0x1c48);
    lVar5 = *(long *)(param_2 + 0x1c50);
  }
  else {
    __ZN11codex_login4auth7manager9CodexAuth14get_account_id17h3938ba2de81bdca4E(&lStack_70,param_3)
    ;
    __ZN11codex_login4auth7manager9CodexAuth19get_chatgpt_user_id17h4b48c11e95af171bE
              (&lStack_58,param_3);
    uVar3 = __ZN11codex_login4auth7manager9CodexAuth17account_plan_type17h5350a920d870e913E(param_3)
    ;
    bVar2 = (uVar3 & 0xff) - 5 < 6;
    uVar6 = *(undefined8 *)(param_2 + 0x1c48);
    lVar5 = *(long *)(param_2 + 0x1c50);
  }
  if (lVar5 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = _malloc(lVar5);
    if (lVar4 == 0) {
      func_0x0001087c9084(1,lVar5);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cd7c50);
      (*pcVar1)();
    }
  }
  _memcpy(lVar4,uVar6,lVar5);
  param_1[4] = lStack_68;
  param_1[3] = lStack_70;
  param_1[5] = lStack_60;
  param_1[7] = lStack_50;
  param_1[6] = lStack_58;
  param_1[8] = lStack_48;
  *param_1 = lVar5;
  param_1[1] = lVar4;
  param_1[2] = lVar5;
  *(bool *)(param_1 + 9) = bVar2;
  return;
}

