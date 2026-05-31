
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10605d604(void)

{
  ulong uVar1;
  uint unaff_w19;
  
  if ((((unaff_w19 & 1) == 0) &&
      ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
       0x7fffffffffffffff) != 0)) && (uVar1 = func_0x000108a82c0c(), (uVar1 & 1) == 0)) {
    uRam000000010b6fdec8 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aaa144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_10b61b6f8)(uRam000000010b6fdec0);
  return;
}

