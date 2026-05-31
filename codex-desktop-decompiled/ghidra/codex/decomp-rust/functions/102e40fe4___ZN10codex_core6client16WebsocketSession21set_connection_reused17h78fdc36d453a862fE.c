
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN10codex_core6client16WebsocketSession21set_connection_reused17h78fdc36d453a862fE
               (long param_1,undefined1 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong *unaff_x21;
  
  if (*(long *)(param_1 + 0x1d8) == 0) {
    FUN_10893b764((long *)(param_1 + 0x1d8));
    iVar1 = _pthread_mutex_lock();
    if (iVar1 == 0) goto LAB_102e41010;
LAB_102e41060:
    FUN_108a81ad4();
LAB_102e41064:
    iVar1 = func_0x000108a82c0c();
    *(undefined1 *)(param_1 + 0x1e1) = param_2;
    if (iVar1 == 0) goto LAB_102e4103c;
    uVar2 = *unaff_x21;
  }
  else {
    iVar1 = _pthread_mutex_lock();
    if (iVar1 != 0) goto LAB_102e41060;
LAB_102e41010:
    unaff_x21 = (ulong *)&__ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE;
    if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
        0x7fffffffffffffff) != 0) goto LAB_102e41064;
    *(undefined1 *)(param_1 + 0x1e1) = param_2;
    uVar2 = ___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE;
  }
  if ((uVar2 & 0x7fffffffffffffff) != 0) {
    uVar2 = func_0x000108a82c0c();
    if ((uVar2 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x1e0) = 1;
    }
  }
LAB_102e4103c:
                    /* WARNING: Could not recover jumptable at 0x000108aaa144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_10b61b6f8)(*(undefined8 *)(param_1 + 0x1d8));
  return;
}

