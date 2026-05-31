
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e572d0(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  byte bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plStack_68;
  long *plStack_60;
  byte bStack_58;
  
  lVar10 = *param_1;
  if (lVar10 == 0) {
    return;
  }
  puVar1 = (ulong *)(lVar10 + 0x38);
  if ((long)*puVar1 < 0) {
    LOAcquire();
    *puVar1 = *puVar1 & 0x7fffffffffffffff;
    LORelease();
  }
  do {
    plVar8 = (long *)FUN_10086ab5c(lVar10 + 0x20);
    if (plVar8 == (long *)0x0) {
      while( true ) {
        lVar10 = *param_1;
        if (lVar10 == 0) {
          return;
        }
        plVar8 = *(long **)(lVar10 + 0x18);
        lVar5 = *plVar8;
        while( true ) {
          if (lVar5 != 0) {
            *(long *)(lVar10 + 0x18) = lVar5;
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cb18b0,0x29,&UNK_10b223f50);
            goto LAB_100e57508;
          }
          if (*(long **)(lVar10 + 0x10) == plVar8) break;
          _sched_yield();
          plVar8 = *(long **)(lVar10 + 0x18);
          lVar5 = *plVar8;
        }
        if (*(long *)(*param_1 + 0x38) == 0) {
          plVar8 = (long *)*param_1;
          if (plVar8 != (long *)0x0) {
            lVar10 = *plVar8;
            *plVar8 = lVar10 + -1;
            LORelease();
            if (lVar10 == 1) {
              DataMemoryBarrier(2,1);
              func_0x000105c3134c(param_1);
            }
          }
          *param_1 = 0;
          return;
        }
        if (*param_1 == 0) break;
        if (*(long *)(*param_1 + 0x38) == 0) {
          plVar8 = (long *)*param_1;
          if (plVar8 == (long *)0x0) {
            return;
          }
          lVar10 = *plVar8;
          *plVar8 = lVar10 + -1;
          LORelease();
          if (lVar10 != 1) {
            return;
          }
          DataMemoryBarrier(2,1);
          func_0x000105c3134c(param_1);
          return;
        }
        _sched_yield();
      }
      func_0x000108a07a20(&UNK_10b24b700);
LAB_100e57508:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100e5750c);
      (*pcVar4)();
    }
    plVar2 = plVar8 + 2;
    plStack_68 = plVar8;
    if (plVar8[2] == 0) {
      FUN_108854158(plVar2);
    }
    iVar7 = _pthread_mutex_lock();
    if (iVar7 != 0) {
      FUN_108a81ad4();
      goto LAB_100e57508;
    }
    if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
        0x7fffffffffffffff) == 0) {
      bVar6 = 0;
      cVar3 = (char)plVar8[3];
    }
    else {
      bVar6 = func_0x000108a82c0c();
      bVar6 = bVar6 ^ 1;
      cVar3 = (char)plVar8[3];
    }
    if (cVar3 != '\0') {
      plStack_60 = plVar2;
      bStack_58 = bVar6;
      func_0x000108a07a3c(&UNK_108cc408f,0x2b,&plStack_60,&UNK_10b235240,&UNK_10b223f20);
      goto LAB_100e57508;
    }
    *(undefined1 *)(plVar8 + 6) = 0;
    lVar5 = plVar8[4];
    plVar8[4] = 0;
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 8))(plVar8[5]);
    }
    if ((((bVar6 & 1) == 0) &&
        ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
         0x7fffffffffffffff) != 0)) && (uVar9 = func_0x000108a82c0c(), (uVar9 & 1) == 0)) {
      *(undefined1 *)(plVar8 + 3) = 1;
    }
    _pthread_mutex_unlock(*plVar2);
    lVar5 = *plStack_68;
    *plStack_68 = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf85ab81e955e259dE(&plStack_68);
    }
  } while( true );
}

