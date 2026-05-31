
void FUN_100d76e48(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((char)param_1[0xe5] != '\0') {
    if ((char)param_1[0xe5] == '\x03') {
      if (((char)param_1[0xe4] == '\x03') && ((char)param_1[0xdb] == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0xdc);
        if (param_1[0xdd] != 0) {
          (**(code **)(param_1[0xdd] + 0x18))(param_1[0xde]);
        }
      }
      FUN_100e7194c(param_1 + 0x6b);
      *(undefined1 *)((long)param_1 + 0x729) = 0;
    }
    return;
  }
  if (*param_1 == 0x14) {
    func_0x000100df6938(param_1 + 1);
    plVar4 = (long *)param_1[0xe];
    if (plVar4 != (long *)0x0) {
      uVar5 = plVar4[6];
      do {
        uVar3 = uVar5;
        if (((uint)uVar3 >> 2 & 1) != 0) goto LAB_100e7199c;
        uVar5 = plVar4[6];
      } while (uVar5 != uVar3);
      plVar4[6] = uVar3 | 2;
LAB_100e7199c:
      if ((uVar3 & 5) == 1) {
        (**(code **)(plVar4[4] + 0x10))(plVar4[5]);
      }
      lVar1 = *plVar4;
      *plVar4 = lVar1 + -1;
      LORelease();
      if (lVar1 == 1) {
        DataMemoryBarrier(2,1);
        lVar1 = param_1[0xe];
        uVar5 = *(ulong *)(lVar1 + 0x30);
        if ((uVar5 & 1) != 0) {
          (**(code **)(*(long *)(lVar1 + 0x20) + 0x18))(*(undefined8 *)(lVar1 + 0x28));
        }
        if (((uint)uVar5 >> 3 & 1) != 0) {
          (**(code **)(*(long *)(lVar1 + 0x10) + 0x18))(*(undefined8 *)(lVar1 + 0x18));
        }
        if ((*(ulong *)(lVar1 + 0x38) & 0xfffffffffffffffe) != 0x8000000000000006) {
          FUN_105c9e95c();
        }
        if (lVar1 != -1) {
          lVar2 = *(long *)(lVar1 + 8);
          *(long *)(lVar1 + 8) = lVar2 + -1;
          LORelease();
          if (lVar2 == 1) {
            DataMemoryBarrier(2,1);
_free:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__free_10b61b0a8)(lVar1);
            return;
          }
        }
        return;
      }
    }
  }
  else {
    func_0x000100deab40(param_1);
    plVar4 = (long *)param_1[0x67];
    if (plVar4 != (long *)0x0) {
      lVar1 = *plVar4;
      *plVar4 = lVar1 + -1;
      LORelease();
      if (lVar1 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0x67);
      }
    }
    plVar4 = (long *)param_1[0x69];
    if (plVar4 != (long *)0x0) {
      uVar5 = plVar4[0x66];
      do {
        uVar3 = uVar5;
        if (((uint)uVar3 >> 2 & 1) != 0) goto LAB_100e71a34;
        uVar5 = plVar4[0x66];
      } while (uVar5 != uVar3);
      plVar4[0x66] = uVar3 | 2;
LAB_100e71a34:
      if ((uVar3 & 5) == 1) {
        (**(code **)(plVar4[100] + 0x10))(plVar4[0x65]);
      }
      lVar1 = *plVar4;
      *plVar4 = lVar1 + -1;
      LORelease();
      if (lVar1 == 1) {
        DataMemoryBarrier(2,1);
        lVar1 = param_1[0x69];
        uVar5 = *(ulong *)(lVar1 + 0x330);
        if ((uVar5 & 1) != 0) {
          (**(code **)(*(long *)(lVar1 + 800) + 0x18))(*(undefined8 *)(lVar1 + 0x328));
        }
        if (((uint)uVar5 >> 3 & 1) != 0) {
          (**(code **)(*(long *)(lVar1 + 0x310) + 0x18))(*(undefined8 *)(lVar1 + 0x318));
        }
        if (*(long *)(lVar1 + 0x10) == 0x11) {
          FUN_103dad1d4(lVar1 + 0x18);
        }
        else if (*(long *)(lVar1 + 0x10) != 0x12) {
          FUN_103daba54(lVar1 + 0x10);
        }
        if (lVar1 != -1) {
          lVar2 = *(long *)(lVar1 + 8);
          *(long *)(lVar1 + 8) = lVar2 + -1;
          LORelease();
          if (lVar2 == 1) {
            DataMemoryBarrier(2,1);
            goto _free;
          }
        }
        return;
      }
    }
  }
  return;
}

