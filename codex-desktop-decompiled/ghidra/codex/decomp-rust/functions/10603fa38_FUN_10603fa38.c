
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10603fa38(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (((param_2 & 1) == 0) &&
     ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE & 0x7fffffffffffffff
      ) != 0)) {
    uVar2 = func_0x000108a82c0c();
    if ((uVar2 & 1) == 0) {
      *(undefined1 *)(param_1 + 1) = 1;
      uVar1 = *param_1;
      goto _pthread_mutex_unlock;
    }
  }
  uVar1 = *param_1;
_pthread_mutex_unlock:
                    /* WARNING: Could not recover jumptable at 0x000108aaa144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_10b61b6f8)(uVar1);
  return;
}

