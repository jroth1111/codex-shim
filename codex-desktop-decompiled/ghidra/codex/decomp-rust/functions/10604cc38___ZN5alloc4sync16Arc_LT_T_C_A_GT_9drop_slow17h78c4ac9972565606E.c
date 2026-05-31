
void __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h78c4ac9972565606E(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *(long *)(lVar2 + 0x10);
  if ((lVar3 != 0) && (iVar1 = _pthread_mutex_trylock(lVar3), iVar1 == 0)) {
    _pthread_mutex_unlock(lVar3);
    _pthread_mutex_destroy(lVar3);
    _free(lVar3);
  }
  *(undefined8 *)(lVar2 + 0x10) = 0;
  if (*(long *)(lVar2 + 0x20) != 0) {
    _free(*(undefined8 *)(lVar2 + 0x28));
  }
  if (lVar2 != -1) {
    lVar3 = *(long *)(lVar2 + 8);
    *(long *)(lVar2 + 8) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar2);
      return;
    }
  }
  return;
}

