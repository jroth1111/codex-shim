
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10603e308(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if ((((*(byte *)(param_1 + 0x10) & 1) == 0) &&
      ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
       0x7fffffffffffffff) != 0)) && (uVar2 = func_0x000108a82c0c(), (uVar2 & 1) == 0)) {
    *(undefined1 *)(puVar1 + 1) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aaa144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_10b61b6f8)(*puVar1);
  return;
}

