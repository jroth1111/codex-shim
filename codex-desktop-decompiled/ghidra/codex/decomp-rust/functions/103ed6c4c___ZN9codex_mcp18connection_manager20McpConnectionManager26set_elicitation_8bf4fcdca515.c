
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN9codex_mcp18connection_manager20McpConnectionManager26set_elicitations_auto_deny17h5734c4681b43675cE
               (long param_1,undefined1 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong *unaff_x22;
  
  lVar3 = *(long *)(param_1 + 0x80);
  if (*(long *)(lVar3 + 0x10) == 0) {
    FUN_10897bf38(lVar3 + 0x10);
    iVar1 = _pthread_mutex_lock();
    if (iVar1 == 0) goto LAB_103ed6c74;
LAB_103ed6ce0:
    FUN_108a81ad4();
LAB_103ed6ce4:
    iVar1 = func_0x000108a82c0c();
    if (*(char *)(lVar3 + 0x18) == '\0') {
      *(undefined1 *)(lVar3 + 0x19) = param_2;
      if (iVar1 == 0) goto LAB_103ed6cbc;
      goto LAB_103ed6cb0;
    }
    if (iVar1 == 0) goto LAB_103ed6cbc;
LAB_103ed6c94:
    if (((*unaff_x22 & 0x7fffffffffffffff) == 0) || (iVar1 = func_0x000108a82c0c(), iVar1 != 0))
    goto LAB_103ed6cbc;
  }
  else {
    iVar1 = _pthread_mutex_lock();
    if (iVar1 != 0) goto LAB_103ed6ce0;
LAB_103ed6c74:
    unaff_x22 = (ulong *)&__ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE;
    if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
        0x7fffffffffffffff) != 0) goto LAB_103ed6ce4;
    if (*(char *)(lVar3 + 0x18) != '\0') goto LAB_103ed6c94;
    *(undefined1 *)(lVar3 + 0x19) = param_2;
LAB_103ed6cb0:
    if (((*unaff_x22 & 0x7fffffffffffffff) == 0) ||
       (uVar2 = func_0x000108a82c0c(), (uVar2 & 1) != 0)) goto LAB_103ed6cbc;
  }
  *(undefined1 *)(lVar3 + 0x18) = 1;
LAB_103ed6cbc:
                    /* WARNING: Could not recover jumptable at 0x000108aaa144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_10b61b6f8)(*(undefined8 *)(lVar3 + 0x10));
  return;
}

