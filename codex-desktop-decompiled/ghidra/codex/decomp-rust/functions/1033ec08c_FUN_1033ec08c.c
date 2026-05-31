
void FUN_1033ec08c(long *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  puVar2 = (ulong *)param_1[1];
  lVar3 = param_1[2];
  puVar1 = puVar2;
  do {
    if (lVar3 == 0) {
      if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(puVar2);
        return;
      }
      return;
    }
    uVar4 = *puVar1;
    uVar6 = uVar4 ^ 0x8000000000000000;
    if (-1 < (long)uVar4) {
      uVar6 = 1;
    }
    if ((uVar6 == 0) || (uVar6 != 1)) {
      if (puVar1[1] != 0) {
        lVar5 = 0x10;
        goto LAB_1033ec0b0;
      }
    }
    else if (uVar4 != 0) {
      lVar5 = 8;
LAB_1033ec0b0:
      _free(*(undefined8 *)((long)puVar1 + lVar5));
    }
    puVar1 = puVar1 + 4;
    lVar3 = lVar3 + -1;
  } while( true );
}

