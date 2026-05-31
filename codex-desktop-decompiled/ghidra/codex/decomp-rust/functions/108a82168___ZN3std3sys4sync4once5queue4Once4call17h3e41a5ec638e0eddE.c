
void __ZN3std3sys4sync4once5queue4Once4call17h3e41a5ec638e0eddE
               (ulong *param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  bool bVar1;
  char cVar2;
  ulong *puVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  undefined4 in_wzr;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  ulong auStack_e0 [2];
  undefined1 *puStack_d0;
  long *plStack_c8;
  char cStack_c0;
  undefined1 uStack_bf;
  ulong *puStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined1 uStack_40;
  ulong uStack_38;
  
  uVar6 = *param_1;
  if ((param_2 & 1) == 0) {
    do {
      while( true ) {
        uVar11 = uVar6 & 3;
        if (1 < uVar11) break;
        if (uVar11 != 1) {
          return;
        }
        uVar6 = FUN_106032a68(param_1,uVar6);
      }
      if (uVar11 != 3) {
        uVar7 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd6204,0x55,param_5);
        __ZN82__LT_std__sys__sync__once__queue__WaiterQueue_u20_as_u20_core__ops__drop__Drop_GT_4drop17h131bf1b8f1dcf278E
                  (&puStack_58);
        __Unwind_Resume(uVar7);
        auVar15 = func_0x000108a07bc4();
        puVar8 = auVar15._0_8_;
        uVar6 = 0;
        auStack_e0[1] = 0;
        auStack_e0[0] = 0;
        plStack_c8 = (long *)0x0;
        puStack_d0 = (undefined1 *)0x0;
        uStack_bf = auVar15[8];
        cStack_c0 = '\0';
        uVar11 = *puVar8;
        pcVar4 = (code *)&DAT_106032bd8;
        if (auVar15._8_4_ == 0) {
          pcVar4 = (code *)&DAT_106032da8;
        }
        goto LAB_108a823d8;
      }
      uStack_40 = false;
      uVar11 = uVar6 & 0xfffffffffffffffc;
      bVar1 = *param_1 != uVar6;
      uVar6 = *param_1;
    } while (bVar1);
    *param_1 = uVar11 | 1;
  }
  else {
    do {
      for (; uVar11 = uVar6 & 3, 1 < uVar11 - 2; uVar6 = FUN_106032a68(param_1,uVar6)) {
        if (uVar11 != 1) {
          return;
        }
      }
      uVar10 = uVar6 & 0xfffffffffffffffc;
      bVar1 = *param_1 != uVar6;
      uVar6 = *param_1;
    } while (bVar1);
    *param_1 = uVar10 | 1;
    uStack_40 = uVar11 == 2;
  }
  plStack_50 = (long *)0x2;
  plStack_48 = (long *)0x0;
  puStack_58 = param_1;
  (**(code **)(param_4 + 0x20))(param_3,&plStack_48);
  plStack_50 = plStack_48;
  LOAcquire();
  uVar6 = *param_1;
  *param_1 = (ulong)plStack_48;
  LORelease();
  uStack_38 = uVar6 & 3;
  if (uStack_38 == 1) {
    puVar8 = (ulong *)(uVar6 & 0xfffffffffffffffc);
    while( true ) {
      if (puVar8 == (ulong *)0x0) {
        return;
      }
      puVar3 = (ulong *)puVar8[1];
      lVar5 = *(long *)*puVar8;
      *(long *)*puVar8 = lVar5 + 1;
      if (lVar5 < 0) break;
      plVar13 = (long *)*puVar8;
      *(undefined4 *)(puVar8 + 2) = 1;
      lVar5 = plVar13[6];
      *(char *)(plVar13 + 6) = '\x01';
      LORelease();
      plStack_48 = plVar13;
      if ((char)lVar5 == -1) {
        _dispatch_semaphore_signal(plVar13[5]);
        lVar5 = *plVar13;
        *plVar13 = lVar5 + -1;
        LORelease();
      }
      else {
        lVar5 = *plVar13;
        *plVar13 = lVar5 + -1;
        LORelease();
      }
      puVar8 = puVar3;
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&plStack_48);
      }
    }
  }
  else {
    func_0x000108a07b2c(0,&uStack_38,&UNK_108c511a0,0);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x108a82334);
  (*pcVar4)();
LAB_108a823d8:
  do {
    while( true ) {
      while( true ) {
        auVar14 = (*pcVar4)(uVar11);
        if ((auVar14._0_8_ & 1) == 0) break;
        bVar1 = *puVar8 == uVar11;
        uVar11 = *puVar8;
        if (bVar1) {
          *puVar8 = auVar14._8_8_;
          if (plStack_c8 != (long *)0x0) {
            lVar5 = *plStack_c8;
            *plStack_c8 = lVar5 + -1;
            LORelease();
            if (lVar5 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&plStack_c8);
            }
          }
          return;
        }
      }
      uVar12 = (uint)uVar11;
      if (((uVar12 >> 1 & 1) != 0) || (6 < uVar6)) break;
      iVar9 = 1 << (ulong)((uint)uVar6 & 0x1f);
      do {
        InstructionSynchronizationBarrier();
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      uVar6 = uVar6 + 1;
      uVar11 = *puVar8;
    }
    if (plStack_c8 == (long *)0x0) {
      FUN_108a84b14(&plStack_c8);
    }
    cStack_c0 = '\0';
    auStack_e0[0] = uVar11 & 0xfffffffffffffff0;
    auStack_e0[1] = 0;
    uVar10 = (ulong)auStack_e0 | uVar11 & 9;
    if ((uVar12 >> 1 & 1) == 0) goto code_r0x000108a82410;
    puStack_d0 = (undefined1 *)0x0;
    bVar1 = *puVar8 != uVar11;
    uVar11 = *puVar8;
  } while (bVar1);
  *puVar8 = uVar10 + 6;
  if ((uVar12 >> 2 & 1) == 0) {
    FUN_106032bec(puVar8);
  }
  goto LAB_108a82484;
code_r0x000108a82410:
  bVar1 = *puVar8 == uVar11;
  uVar11 = *puVar8;
  puStack_d0 = (undefined1 *)auStack_e0;
  if (bVar1) {
    *puVar8 = uVar10 + 2;
    puStack_d0 = (undefined1 *)auStack_e0;
LAB_108a82484:
    while (plVar13 = plStack_c8, cStack_c0 == '\0') {
      if (plStack_c8 == (long *)0x0) {
        func_0x000108a07a20(&UNK_10b4addb0);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x108a8254c);
        (*pcVar4)();
      }
      LOAcquire();
      cVar2 = (char)plStack_c8[6];
      *(char *)(plStack_c8 + 6) = cVar2 + -1;
      if (cVar2 != '\x01') {
        do {
          lVar5 = _dispatch_semaphore_wait(plVar13[5],0xffffffffffffffff);
        } while (lVar5 != 0);
        LOAcquire();
        *(char *)(plVar13 + 6) = (char)in_wzr;
      }
    }
    uVar6 = 0;
    uVar11 = *puVar8;
  }
  goto LAB_108a823d8;
}

