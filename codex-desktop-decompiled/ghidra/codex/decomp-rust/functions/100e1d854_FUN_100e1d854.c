
void FUN_100e1d854(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  short *psVar4;
  
  if (*(long *)(param_1 + 0xe8) != 4) {
    __ZN78__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h6900df02db0519f4E
              ();
  }
  if ((*(short *)(param_1 + 0x68) != 2) && (8 < *(ulong *)(param_1 + 0x90))) {
    _free(*(undefined8 *)(param_1 + 0x78));
  }
  if ((*(long *)(param_1 + 0xc0) != 0) && (5 < *(ulong *)(param_1 + 0xd8))) {
    _free(*(undefined8 *)(param_1 + 200));
  }
  lVar3 = *(long *)(param_1 + 0x140);
  if (lVar3 != -0x8000000000000000) {
    lVar1 = *(long *)(param_1 + 0x148);
    lVar2 = *(long *)(param_1 + 0x150);
    if (lVar2 != 0) {
      psVar4 = (short *)(lVar1 + 0x40);
      do {
        if (((*(uint *)(psVar4 + -0x20) < 2) && (*psVar4 != 2)) && (8 < *(ulong *)(psVar4 + 0x14)))
        {
          _free(*(undefined8 *)(psVar4 + 8));
        }
        psVar4 = psVar4 + 0x40;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar1);
      return;
    }
  }
  return;
}

