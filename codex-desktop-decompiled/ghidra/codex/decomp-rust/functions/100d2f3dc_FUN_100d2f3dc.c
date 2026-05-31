
void FUN_100d2f3dc(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lStack_330;
  undefined1 auStack_328 [760];
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    LOAcquire();
    uVar1 = *(ulong *)(lVar4 + 0x330);
    *(ulong *)(lVar4 + 0x330) = uVar1 | 4;
    if ((uVar1 & 10) == 8) {
      (**(code **)(*(long *)(lVar4 + 0x310) + 0x10))(*(undefined8 *)(lVar4 + 0x318));
    }
    if (((uint)uVar1 >> 1 & 1) != 0) {
      _memcpy(&lStack_330,lVar4 + 0x10,0x300);
      *(undefined8 *)(lVar4 + 0x10) = 0x12;
      if (lStack_330 == 0x11) {
        FUN_100ded628(auStack_328);
      }
      else if (lStack_330 != 0x12) {
        FUN_100de8594(&lStack_330);
      }
    }
    plVar3 = (long *)*param_1;
    if (plVar3 != (long *)0x0) {
      lVar4 = *plVar3;
      *plVar3 = lVar4 + -1;
      LORelease();
      if (lVar4 == 1) {
        DataMemoryBarrier(2,1);
        lVar4 = *param_1;
        uVar1 = *(ulong *)(lVar4 + 0x330);
        if ((uVar1 & 1) != 0) {
          (**(code **)(*(long *)(lVar4 + 800) + 0x18))(*(undefined8 *)(lVar4 + 0x328));
        }
        if (((uint)uVar1 >> 3 & 1) != 0) {
          (**(code **)(*(long *)(lVar4 + 0x310) + 0x18))(*(undefined8 *)(lVar4 + 0x318));
        }
        if (*(long *)(lVar4 + 0x10) == 0x11) {
          FUN_103dad1d4(lVar4 + 0x18);
        }
        else if (*(long *)(lVar4 + 0x10) != 0x12) {
          FUN_103daba54(lVar4 + 0x10);
        }
        if (lVar4 != -1) {
          lVar2 = *(long *)(lVar4 + 8);
          *(long *)(lVar4 + 8) = lVar2 + -1;
          LORelease();
          if (lVar2 == 1) {
            DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__free_10b61b0a8)(lVar4);
            return;
          }
        }
        return;
      }
    }
  }
  return;
}

