
/* WARNING: Possible PIC construction at 0x000100d7a05c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100d7a060) */
/* WARNING: Removing unreachable block (ram,0x000100d7a090) */
/* WARNING: Removing unreachable block (ram,0x00010611a0cc) */
/* WARNING: Removing unreachable block (ram,0x00010611a260) */
/* WARNING: Removing unreachable block (ram,0x00010611a3a4) */
/* WARNING: Removing unreachable block (ram,0x00010611a3a8) */
/* WARNING: Removing unreachable block (ram,0x00010611a3bc) */
/* WARNING: Removing unreachable block (ram,0x00010611a274) */
/* WARNING: Removing unreachable block (ram,0x00010611a284) */
/* WARNING: Removing unreachable block (ram,0x00010611a2ec) */
/* WARNING: Removing unreachable block (ram,0x00010611a300) */
/* WARNING: Removing unreachable block (ram,0x00010611a33c) */
/* WARNING: Removing unreachable block (ram,0x00010611a348) */
/* WARNING: Removing unreachable block (ram,0x00010611a360) */
/* WARNING: Removing unreachable block (ram,0x00010611a10c) */
/* WARNING: Removing unreachable block (ram,0x00010611a11c) */
/* WARNING: Removing unreachable block (ram,0x00010611a130) */
/* WARNING: Removing unreachable block (ram,0x00010611a170) */
/* WARNING: Removing unreachable block (ram,0x00010611a17c) */
/* WARNING: Removing unreachable block (ram,0x00010611a194) */
/* WARNING: Removing unreachable block (ram,0x00010611a1f0) */
/* WARNING: Removing unreachable block (ram,0x00010611a218) */
/* WARNING: Removing unreachable block (ram,0x00010611a378) */
/* WARNING: Removing unreachable block (ram,0x00010611a380) */
/* WARNING: Removing unreachable block (ram,0x00010611a388) */

void FUN_100d7a004(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar3;
  undefined8 unaff_x21;
  long lVar4;
  undefined8 unaff_x22;
  short *psVar5;
  undefined1 *unaff_x29;
  undefined1 *puVar6;
  undefined8 unaff_x30;
  
  puVar2 = &stack0xffffffffffffffe0;
  puVar6 = &stack0xfffffffffffffff0;
  if (*(char *)(param_1 + 0x5f8) == '\0') {
    unaff_x30 = 0x100d7a060;
    unaff_x19 = param_1;
  }
  else {
    if (*(char *)(param_1 + 0x5f8) != '\x03') {
      return;
    }
    FUN_100d90f60(param_1 + 0x338);
    if (*(long *)(param_1 + 0x2e0) != 4) {
      __ZN78__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h6900df02db0519f4E
                (param_1 + 0x2e0);
    }
    FUN_100d89ef4(param_1 + 0x2c8);
    param_1 = param_1 + 0x1b8;
    puVar2 = (undefined1 *)register0x00000008;
    puVar6 = unaff_x29;
  }
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(long *)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = puVar6;
  *(undefined8 *)(puVar2 + -8) = unaff_x30;
  if (((*(int *)(param_1 + 0x58) != 2) && (*(short *)(param_1 + 0x98) != 2)) &&
     (8 < *(ulong *)(param_1 + 0xc0))) {
    _free(*(undefined8 *)(param_1 + 0xa8));
  }
  if ((*(long *)(param_1 + 0x10) != 0) && (5 < *(ulong *)(param_1 + 0x28))) {
    _free(*(undefined8 *)(param_1 + 0x18));
  }
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 != -0x8000000000000000) {
    lVar1 = *(long *)(param_1 + 0x40);
    lVar3 = *(long *)(param_1 + 0x48);
    if (lVar3 != 0) {
      psVar5 = (short *)(lVar1 + 0x40);
      do {
        if (((*(uint *)(psVar5 + -0x20) < 2) && (*psVar5 != 2)) && (8 < *(ulong *)(psVar5 + 0x14)))
        {
          _free(*(undefined8 *)(psVar5 + 8));
        }
        psVar5 = psVar5 + 0x40;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar1);
      return;
    }
  }
  return;
}

