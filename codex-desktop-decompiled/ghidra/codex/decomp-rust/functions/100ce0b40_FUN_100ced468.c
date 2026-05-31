
void FUN_100ced468(long param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong in_xzr;
  undefined8 uStack_40;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x28);
  if (bVar2 < 6) {
    if (bVar2 == 3) {
      if (*(char *)(param_1 + 0x40) == '\x03') {
        if (((*(char *)(param_1 + 0xb8) == '\x03') && (*(char *)(param_1 + 0xb0) == '\x03')) &&
           (*(char *)(param_1 + 0x68) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 0x70);
          lVar6 = *(long *)(param_1 + 0x78);
          if (lVar6 != 0) {
            lVar7 = 0x50;
            goto LAB_100cd770c;
          }
        }
      }
      else if (*(char *)(param_1 + 0x40) == '\x04') {
        uStack_40 = *(undefined8 *)(param_1 + 0x50);
        lStack_38 = param_1 + 0x88;
        FUN_1060fb5d4(&uStack_40);
        lVar6 = *(long *)(param_1 + 0x70);
        if (lVar6 != 0) {
          lVar7 = 0x48;
LAB_100cd770c:
                    /* WARNING: Could not recover jumptable at 0x000100cd7720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar6 + 0x18))(*(undefined8 *)(param_1 + 0x30 + lVar7));
          return;
        }
      }
      return;
    }
    if (bVar2 == 4) {
      if (((*(char *)(param_1 + 0xc0) == '\x03') && (*(char *)(param_1 + 0xb8) == '\x03')) &&
         ((*(char *)(param_1 + 0xb0) == '\x03' && (*(char *)(param_1 + 0x68) == '\x04')))) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x70);
        lVar6 = *(long *)(param_1 + 0x78);
        if (lVar6 != 0) {
          uVar5 = *(undefined8 *)(param_1 + 0x80);
          goto LAB_100ced58c;
        }
      }
    }
    else if (((((bVar2 == 5) && (*(char *)(param_1 + 0xd8) == '\x03')) &&
              (*(char *)(param_1 + 0xd0) == '\x03')) &&
             ((*(char *)(param_1 + 200) == '\x03' && (*(char *)(param_1 + 0xc0) == '\x03')))) &&
            (*(char *)(param_1 + 0x78) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x80);
      lVar6 = *(long *)(param_1 + 0x88);
      if (lVar6 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x90);
LAB_100ced58c:
                    /* WARNING: Could not recover jumptable at 0x000100ced598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar6 + 0x18))(uVar5);
        return;
      }
    }
  }
  else if (bVar2 == 6) {
    if (*(char *)(param_1 + 400) == '\x03') {
      if (*(char *)(param_1 + 0x58) == '\x03') {
        if (((*(char *)(param_1 + 0xd0) == '\x03') && (*(char *)(param_1 + 200) == '\x03')) &&
           (*(char *)(param_1 + 0x80) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 0x88);
          if (*(long *)(param_1 + 0x90) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100ce0c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(param_1 + 0x90) + 0x18))(*(undefined8 *)(param_1 + 0x98));
            return;
          }
        }
      }
      else if (*(char *)(param_1 + 0x58) == '\x04') {
        FUN_100d4fb00(param_1 + 0x80);
        plVar8 = (long *)(param_1 + 0x68);
        lVar7 = *plVar8;
        LOAcquire();
        lVar6 = *(long *)(lVar7 + 0x1f0);
        *(long *)(lVar7 + 0x1f0) = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          LOAcquire();
          lVar6 = *(long *)(lVar7 + 0x88);
          *(long *)(lVar7 + 0x88) = lVar6 + 1;
          lVar6 = func_0x000100fcac10(lVar7 + 0x80,lVar6);
          *(ulong *)(lVar6 + 0x610) = *(ulong *)(lVar6 + 0x610) | 0x200000000;
          LORelease();
          puVar1 = (ulong *)(lVar7 + 0x110);
          LOAcquire();
          uVar4 = *puVar1;
          *puVar1 = uVar4 | 2;
          LORelease();
          if (uVar4 == 0) {
            lVar6 = *(long *)(lVar7 + 0x100);
            *(undefined8 *)(lVar7 + 0x100) = 0;
            *puVar1 = in_xzr;
            LORelease();
            if (lVar6 != 0) {
              (**(code **)(lVar6 + 8))(*(undefined8 *)(lVar7 + 0x108));
            }
          }
        }
        lVar6 = *(long *)*plVar8;
        *(long *)*plVar8 = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h72380cac90072f23E(plVar8);
        }
        FUN_100e4a0f0(*(long *)(param_1 + 0x178),
                      (ulong)(*(long *)(param_1 + 0x188) - *(long *)(param_1 + 0x178)) >> 3);
        if (*(long *)(param_1 + 0x180) != 0) {
          uVar5 = *(undefined8 *)(param_1 + 0x170);
          goto _free;
        }
      }
      return;
    }
  }
  else if (bVar2 == 7) {
    if (*(char *)(param_1 + 0x180) == '\x03') {
      if (*(char *)(param_1 + 0x58) == '\x03') {
        if (((*(char *)(param_1 + 0xd0) == '\x03') && (*(char *)(param_1 + 200) == '\x03')) &&
           (*(char *)(param_1 + 0x80) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 0x88);
          if (*(long *)(param_1 + 0x90) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100d44d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(param_1 + 0x90) + 0x18))(*(undefined8 *)(param_1 + 0x98));
            return;
          }
        }
      }
      else if (*(char *)(param_1 + 0x58) == '\x04') {
        FUN_100d4fb00(param_1 + 0x70);
        plVar8 = (long *)(param_1 + 0x68);
        lVar7 = *plVar8;
        LOAcquire();
        lVar6 = *(long *)(lVar7 + 0x1f0);
        *(long *)(lVar7 + 0x1f0) = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          LOAcquire();
          lVar6 = *(long *)(lVar7 + 0x88);
          *(long *)(lVar7 + 0x88) = lVar6 + 1;
          lVar6 = func_0x000100fcac10(lVar7 + 0x80,lVar6);
          *(ulong *)(lVar6 + 0x610) = *(ulong *)(lVar6 + 0x610) | 0x200000000;
          LORelease();
          puVar1 = (ulong *)(lVar7 + 0x110);
          LOAcquire();
          uVar4 = *puVar1;
          *puVar1 = uVar4 | 2;
          LORelease();
          if (uVar4 == 0) {
            lVar6 = *(long *)(lVar7 + 0x100);
            *(undefined8 *)(lVar7 + 0x100) = 0;
            *puVar1 = in_xzr;
            LORelease();
            if (lVar6 != 0) {
              (**(code **)(lVar6 + 8))(*(undefined8 *)(lVar7 + 0x108));
            }
          }
        }
        lVar6 = *(long *)*plVar8;
        *(long *)*plVar8 = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h72380cac90072f23E(plVar8);
        }
        FUN_100cb5f44(*(long *)(param_1 + 0x168),
                      (ulong)(*(long *)(param_1 + 0x178) - *(long *)(param_1 + 0x168)) >> 3);
        if (*(long *)(param_1 + 0x170) != 0) {
          uVar5 = *(undefined8 *)(param_1 + 0x160);
          goto _free;
        }
      }
      return;
    }
  }
  else if (bVar2 == 8) {
    cVar3 = *(char *)(param_1 + 0x78);
    if (cVar3 == '\x03') {
      if (((*(char *)(param_1 + 0x110) == '\x03') && (*(char *)(param_1 + 0x108) == '\x03')) &&
         ((*(char *)(param_1 + 0x100) == '\x03' && (*(char *)(param_1 + 0xb8) == '\x04')))) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0xc0);
        if (*(long *)(param_1 + 200) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100d3ac2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(param_1 + 200) + 0x18))(*(undefined8 *)(param_1 + 0xd0));
          return;
        }
      }
    }
    else {
      if (cVar3 == '\x04') {
        if ((((*(char *)(param_1 + 0x128) == '\x03') && (*(char *)(param_1 + 0x120) == '\x03')) &&
            (*(char *)(param_1 + 0x118) == '\x03')) && (*(char *)(param_1 + 0x110) == '\x03')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 0xd0);
          if (*(long *)(param_1 + 0xd8) != 0) {
            (**(code **)(*(long *)(param_1 + 0xd8) + 0x18))(*(undefined8 *)(param_1 + 0xe0));
          }
        }
      }
      else {
        if (cVar3 != '\x05') {
          return;
        }
        func_0x000100d54f30(param_1 + 0x80);
      }
      if (*(long *)(param_1 + 0x58) != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x48);
_free:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(uVar5);
        return;
      }
    }
    return;
  }
  return;
}

