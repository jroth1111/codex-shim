
void FUN_100e50a70(long *param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  if ((char)param_1[2] != '\x02') {
    lVar5 = *param_1;
    LOAcquire();
    lVar2 = *(long *)(lVar5 + 0x40);
    *(long *)(lVar5 + 0x40) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      puVar1 = (ulong *)(lVar5 + 0x38);
      if ((long)*puVar1 < 0) {
        LOAcquire();
        *puVar1 = *puVar1 & 0x7fffffffffffffff;
        LORelease();
        LOAcquire();
        uVar3 = *(ulong *)(lVar5 + 0x58);
        *(ulong *)(lVar5 + 0x58) = uVar3 | 2;
        LORelease();
      }
      else {
        LOAcquire();
        uVar3 = *(ulong *)(lVar5 + 0x58);
        *(ulong *)(lVar5 + 0x58) = uVar3 | 2;
        LORelease();
      }
      if (uVar3 == 0) {
        lVar2 = *(long *)(lVar5 + 0x48);
        *(undefined8 *)(lVar5 + 0x48) = 0;
        *(ulong *)(lVar5 + 0x58) = *(ulong *)(lVar5 + 0x58) & 0xfffffffffffffffd;
        LORelease();
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar5 + 0x50));
        }
      }
    }
    lVar2 = *(long *)*param_1;
    *(long *)*param_1 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000105c3134c(param_1);
    }
    plVar6 = (long *)param_1[1];
    lVar2 = *plVar6;
    *plVar6 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      lVar2 = param_1[1];
      lVar5 = *(long *)(lVar2 + 0x10);
      if ((lVar5 == 0) || (iVar4 = _pthread_mutex_trylock(lVar5), iVar4 != 0)) {
        *(undefined8 *)(lVar2 + 0x10) = 0;
        lVar5 = *(long *)(lVar2 + 0x20);
      }
      else {
        _pthread_mutex_unlock(lVar5);
        _pthread_mutex_destroy(lVar5);
        _free(lVar5);
        *(undefined8 *)(lVar2 + 0x10) = 0;
        lVar5 = *(long *)(lVar2 + 0x20);
      }
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar2 + 0x28));
      }
      if (lVar2 != -1) {
        lVar5 = *(long *)(lVar2 + 8);
        *(long *)(lVar2 + 8) = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(lVar2);
          return;
        }
      }
      return;
    }
  }
  return;
}

