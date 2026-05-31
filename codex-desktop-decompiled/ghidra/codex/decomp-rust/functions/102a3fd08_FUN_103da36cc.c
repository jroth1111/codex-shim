
void FUN_103da36cc(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  
  if (param_1[1] == -0x7fffffffffffffff) {
    lVar2 = param_1[2];
    puVar1 = (undefined8 *)param_1[3];
    pcVar4 = (code *)*puVar1;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(lVar2);
    }
    if (puVar1[1] != 0) {
      _free(lVar2);
    }
  }
  else {
    FUN_103d958bc();
  }
  lVar2 = *(long *)*param_1;
  *(long *)*param_1 = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    lVar2 = *param_1;
    lVar5 = *(long *)(lVar2 + 0x18);
    if ((lVar5 != 0) && (iVar3 = _pthread_mutex_trylock(lVar5), iVar3 == 0)) {
      _pthread_mutex_unlock(lVar5);
      _pthread_mutex_destroy(lVar5);
      _free(lVar5);
    }
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_102a0a428(lVar2 + 0x28);
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
  return;
}

