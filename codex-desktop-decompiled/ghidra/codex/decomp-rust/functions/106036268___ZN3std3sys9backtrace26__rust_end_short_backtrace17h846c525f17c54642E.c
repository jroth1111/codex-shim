
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] __ZN3std3sys9backtrace26__rust_end_short_backtrace17h846c525f17c54642E(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  FUN_10603a978();
  FUN_10603acbc();
  if (lRam000000010b6fdec0 == 0) {
    FUN_108a825d0(0x10b6fdec0);
    iVar1 = _pthread_mutex_lock();
    if (iVar1 != 0) goto LAB_1060362c8;
LAB_10603628c:
    if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
        0x7fffffffffffffff) == 0) {
      uVar3 = 0;
      goto LAB_1060362a0;
    }
  }
  else {
    iVar1 = _pthread_mutex_lock();
    if (iVar1 == 0) goto LAB_10603628c;
LAB_1060362c8:
    FUN_108a81ad4();
  }
  uVar2 = func_0x000108a82c0c();
  uVar3 = (ulong)(uVar2 ^ 1);
LAB_1060362a0:
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = 0x10b6fdec0;
  return auVar4;
}

