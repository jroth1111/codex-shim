
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN3std9panicking12default_hook17h7aae5c8c53b8a669E(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  undefined1 auVar6 [16];
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined1 uStack_21;
  
  if ((*(byte *)((long)param_1 + 0x19) & 1) == 0) {
    puVar5 = (ulong *)FUN_10605d620();
    if (*puVar5 < 2) {
      uStack_71 = __ZN3std5panic19get_backtrace_style17hf1e68ecb2afa3e09E();
    }
    else {
      uStack_71 = 1;
    }
  }
  else {
    uStack_71 = 3;
  }
  uStack_70 = param_1[2];
  auStack_68 = func_0x00010603ad54(*param_1,param_1[1]);
  puStack_58 = &uStack_70;
  puStack_50 = auStack_68;
  puStack_48 = &uStack_71;
  auVar6 = __ZN3std2io5stdio22try_set_output_capture17h3c315e184c9365eeE(0);
  lVar2 = auVar6._8_8_;
  if (((auVar6._0_8_ & 1) == 0) && (lVar2 != 0)) {
    lStack_40 = lVar2;
    if (*(long *)(lVar2 + 0x10) == 0) {
      FUN_108a825d0(lVar2 + 0x10);
    }
    iVar3 = _pthread_mutex_lock();
    if (iVar3 != 0) {
      FUN_108a81ad4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10603ab50);
      (*pcVar1)();
    }
    if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
        0x7fffffffffffffff) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = func_0x000108a82c0c();
      uVar4 = uVar4 ^ 1;
    }
    FUN_10603ab98(&puStack_58,lVar2 + 0x20,&UNK_10b4ae3c8);
    FUN_10603fa38(lVar2 + 0x10,uVar4);
    auVar6 = __ZN3std2io5stdio22try_set_output_capture17h3c315e184c9365eeE(lVar2);
    plStack_30 = auVar6._8_8_;
    if ((auVar6._0_8_ & 1) == 0) {
      uStack_38 = 1;
      if (plStack_30 != (long *)0x0) {
        lVar2 = *plStack_30;
        *plStack_30 = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h78c4ac9972565606E(&plStack_30);
        }
      }
    }
  }
  else {
    FUN_10603ab98(&puStack_58,&uStack_21,&UNK_10b4ae270);
  }
  return;
}

