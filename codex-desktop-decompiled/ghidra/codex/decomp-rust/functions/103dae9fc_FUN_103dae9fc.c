
void FUN_103dae9fc(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong in_xzr;
  long alStack_350 [96];
  undefined8 uStack_50;
  long lStack_48;
  
  cVar4 = *(char *)(param_1 + 0x309);
  if (cVar4 == '\0') {
    func_0x000103da0bb4(param_1);
    lVar10 = *(long *)(param_1 + 0x170);
    LOAcquire();
    lVar6 = *(long *)(lVar10 + 0x1f0);
    *(long *)(lVar10 + 0x1f0) = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      LOAcquire();
      lVar6 = *(long *)(lVar10 + 0x88);
      *(long *)(lVar10 + 0x88) = lVar6 + 1;
      lVar6 = func_0x000103e3366c(lVar10 + 0x80,lVar6);
      *(ulong *)(lVar6 + 0x6210) = *(ulong *)(lVar6 + 0x6210) | 0x200000000;
      LORelease();
      puVar1 = (ulong *)(lVar10 + 0x110);
      LOAcquire();
      uVar7 = *puVar1;
      *puVar1 = uVar7 | 2;
      LORelease();
      if (uVar7 == 0) {
        lVar6 = *(long *)(lVar10 + 0x100);
        *(undefined8 *)(lVar10 + 0x100) = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar6 != 0) {
          (**(code **)(lVar6 + 8))(*(undefined8 *)(lVar10 + 0x108));
        }
      }
    }
    lVar6 = **(long **)(param_1 + 0x170);
    **(long **)(param_1 + 0x170) = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17haf4d1ee58cf8c660E(param_1 + 0x170);
    }
    __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
              (param_1 + 0x178);
    lVar6 = **(long **)(param_1 + 0x178);
    **(long **)(param_1 + 0x178) = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      lVar6 = *(long *)(param_1 + 0x178);
      FUN_10611d000(lVar6 + 0x30);
      if (lVar6 != -1) {
        lVar10 = *(long *)(lVar6 + 8);
        *(long *)(lVar6 + 8) = lVar10 + -1;
        LORelease();
        if (lVar10 == 1) {
          DataMemoryBarrier(2,1);
          goto code_r0x000108aa97c4;
        }
      }
      return;
    }
  }
  else {
    if (cVar4 == '\x03') {
      uStack_50 = *(undefined8 *)(param_1 + 0x328);
      lStack_48 = param_1 + 0x360;
      FUN_1060fb5d4(&uStack_50);
      if (*(long *)(param_1 + 0x348) != 0) {
        (**(code **)(*(long *)(param_1 + 0x348) + 0x18))(*(undefined8 *)(param_1 + 0x350));
      }
    }
    else {
      if (cVar4 != '\x04') {
        return;
      }
      FUN_103d9d8cc(param_1 + 0x318);
      *(undefined1 *)(param_1 + 0x30b) = 0;
    }
    func_0x000103da0bb4(param_1 + 0x198);
    __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
              (param_1 + 0x188);
    lVar6 = **(long **)(param_1 + 0x188);
    **(long **)(param_1 + 0x188) = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(param_1 + 0x188);
    }
    lVar10 = *(long *)(param_1 + 0x180);
    LOAcquire();
    lVar6 = *(long *)(lVar10 + 0x1f0);
    *(long *)(lVar10 + 0x1f0) = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      LOAcquire();
      lVar6 = *(long *)(lVar10 + 0x88);
      *(long *)(lVar10 + 0x88) = lVar6 + 1;
      lVar6 = func_0x000103e3366c(lVar10 + 0x80,lVar6);
      *(ulong *)(lVar6 + 0x6210) = *(ulong *)(lVar6 + 0x6210) | 0x200000000;
      LORelease();
      puVar1 = (ulong *)(lVar10 + 0x110);
      LOAcquire();
      uVar7 = *puVar1;
      *puVar1 = uVar7 | 2;
      LORelease();
      if (uVar7 == 0) {
        lVar6 = *(long *)(lVar10 + 0x100);
        *(undefined8 *)(lVar10 + 0x100) = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar6 != 0) {
          (**(code **)(lVar6 + 8))(*(undefined8 *)(lVar10 + 0x108));
        }
      }
    }
    lVar6 = **(long **)(param_1 + 0x180);
    **(long **)(param_1 + 0x180) = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      lVar6 = *(long *)(param_1 + 0x180);
      uVar7 = *(ulong *)(lVar6 + 0x1b0);
      do {
        lVar10 = *(long *)(lVar6 + 0x1a0);
        uVar9 = *(ulong *)(lVar10 + 0x6200);
        while (uVar9 != (uVar7 & 0xffffffffffffffe0)) {
          lVar10 = *(long *)(lVar10 + 0x6208);
          if (lVar10 == 0) goto LAB_105ca7ab8;
          *(long *)(lVar6 + 0x1a0) = lVar10;
          InstructionSynchronizationBarrier();
          uVar9 = *(ulong *)(lVar10 + 0x6200);
        }
        lVar8 = *(long *)(lVar6 + 0x1a8);
        if (lVar8 == lVar10) {
          uVar7 = *(ulong *)(lVar6 + 0x1b0) & 0x1f;
          uVar9 = *(ulong *)(lVar10 + 0x6210) >> uVar7;
        }
        else {
          do {
            if (((*(ulong *)(lVar8 + 0x6210) >> 0x20 & 1) == 0) ||
               (*(ulong *)(lVar6 + 0x1b0) < *(ulong *)(lVar8 + 0x6218))) break;
            if (*(long *)(lVar8 + 0x6208) == 0) {
              func_0x000108a07a20(&UNK_10b4435c0);
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x105ca7b44);
              (*pcVar5)();
            }
            *(long *)(lVar6 + 0x1a8) = *(long *)(lVar8 + 0x6208);
            *(undefined8 *)(lVar8 + 0x6200) = 0;
            *(undefined8 *)(lVar8 + 0x6210) = 0;
            *(undefined8 *)(lVar8 + 0x6208) = 0;
            lVar10 = *(long *)(lVar6 + 0x80);
            *(long *)(lVar8 + 0x6200) = *(long *)(lVar10 + 0x6200) + 0x20;
            plVar2 = (long *)(lVar10 + 0x6208);
            lVar10 = *plVar2;
            if (lVar10 == 0) {
              *plVar2 = lVar8;
            }
            else {
              *(long *)(lVar8 + 0x6200) = *(long *)(lVar10 + 0x6200) + 0x20;
              lVar3 = *(long *)(lVar10 + 0x6208);
              if (lVar3 == 0) {
                *(long *)(lVar10 + 0x6208) = lVar8;
              }
              else {
                *(long *)(lVar8 + 0x6200) = *(long *)(lVar3 + 0x6200) + 0x20;
                if (*(long *)(lVar3 + 0x6208) == 0) {
                  *(long *)(lVar3 + 0x6208) = lVar8;
                }
                else {
                  _free();
                }
              }
            }
            InstructionSynchronizationBarrier();
            lVar8 = *(long *)(lVar6 + 0x1a8);
          } while (lVar8 != *(long *)(lVar6 + 0x1a0));
          lVar10 = *(long *)(lVar6 + 0x1a0);
          uVar7 = *(ulong *)(lVar6 + 0x1b0) & 0x1f;
          uVar9 = *(ulong *)(lVar10 + 0x6210) >> uVar7;
        }
        if (((uVar9 & 1) == 0) ||
           (_memcpy(alStack_350,lVar10 + uVar7 * 0x310,0x310), alStack_350[0] - 0x15U < 2))
        goto LAB_105ca7ab8;
        uVar7 = *(long *)(lVar6 + 0x1b0) + 1;
        *(ulong *)(lVar6 + 0x1b0) = uVar7;
        FUN_105c9c774(alStack_350);
      } while( true );
    }
  }
  return;
LAB_105ca7ab8:
  lVar10 = *(long *)(lVar6 + 0x1a8);
  do {
    lVar10 = *(long *)(lVar10 + 0x6208);
    _free();
  } while (lVar10 != 0);
  if (*(long *)(lVar6 + 0x100) != 0) {
    (**(code **)(*(long *)(lVar6 + 0x100) + 0x18))(*(undefined8 *)(lVar6 + 0x108));
  }
  if (lVar6 != -1) {
    lVar10 = *(long *)(lVar6 + 8);
    *(long *)(lVar6 + 8) = lVar10 + -1;
    LORelease();
    if (lVar10 == 1) {
      DataMemoryBarrier(2,1);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar6);
      return;
    }
  }
  return;
}

