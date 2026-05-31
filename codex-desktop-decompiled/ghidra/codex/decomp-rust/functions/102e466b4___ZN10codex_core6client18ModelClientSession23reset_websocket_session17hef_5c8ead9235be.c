
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN10codex_core6client18ModelClientSession23reset_websocket_session17hefe018869918ed02E
               (long *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  
  if (param_1[0x2f] != -0x7fffffffffffffff) {
    FUN_1033dde48(param_1 + 0x2f);
  }
  puVar3 = (ulong *)(param_1 + 2);
  param_1[0x2f] = -0x7fffffffffffffff;
  if (*puVar3 != 0x8000000000000000) {
    FUN_10339b84c(puVar3);
  }
  param_1[2] = -0x8000000000000000;
  if (*param_1 != 0) {
    FUN_1033de780(param_1 + 1);
  }
  *param_1 = 0;
  if (param_1[0x3b] == 0) {
    FUN_10893b764(param_1 + 0x3b);
    iVar1 = _pthread_mutex_lock();
    if (iVar1 == 0) goto LAB_102e4672c;
LAB_102e4677c:
    FUN_108a81ad4();
LAB_102e46780:
    iVar1 = func_0x000108a82c0c();
    *(undefined1 *)((long)param_1 + 0x1e1) = 0;
    if (iVar1 == 0) goto LAB_102e46758;
    uVar2 = *puVar3;
  }
  else {
    iVar1 = _pthread_mutex_lock();
    if (iVar1 != 0) goto LAB_102e4677c;
LAB_102e4672c:
    puVar3 = (ulong *)&__ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE;
    if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
        0x7fffffffffffffff) != 0) goto LAB_102e46780;
    *(undefined1 *)((long)param_1 + 0x1e1) = 0;
    uVar2 = ___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE;
  }
  if ((uVar2 & 0x7fffffffffffffff) != 0) {
    uVar2 = func_0x000108a82c0c();
    if ((uVar2 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x3c) = 1;
    }
  }
LAB_102e46758:
                    /* WARNING: Could not recover jumptable at 0x000108aaa144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_10b61b6f8)(param_1[0x3b]);
  return;
}

