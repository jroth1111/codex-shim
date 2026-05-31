
void FUN_100de4fb8(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x90);
  if (uVar1 != 0x8000000000000005) {
    uVar3 = uVar1 ^ 0x8000000000000000;
    if (-1 < (long)uVar1) {
      uVar3 = 2;
    }
    if ((long)uVar3 < 2) {
      if (uVar3 != 0) {
        if (uVar3 != 1) goto LAB_100de5020;
        uVar1 = *(ulong *)(param_1 + 0x98) & 0x7fffffffffffffff;
joined_r0x000100de5024:
        if (uVar1 != 0) {
          lVar2 = 0x10;
          goto LAB_100de5030;
        }
      }
    }
    else {
      if (uVar3 != 2) {
LAB_100de5020:
        uVar1 = *(ulong *)(param_1 + 0x98);
        goto joined_r0x000100de5024;
      }
      if (uVar1 != 0) {
        _free(*(undefined8 *)(param_1 + 0x98));
      }
      if ((*(ulong *)(param_1 + 0xa8) & 0x7fffffffffffffff) == 0) goto LAB_100de5064;
      lVar2 = 0x20;
LAB_100de5030:
      _free(*(undefined8 *)(param_1 + 0x90 + lVar2));
    }
  }
LAB_100de5064:
  if ((*(short *)(param_1 + 200) == 3) && (*(long *)(param_1 + 0xd0) != 0)) {
    _free(*(undefined8 *)(param_1 + 0xd8));
  }
  if (*(long *)(param_1 + 0x10) == -0x8000000000000000 || *(long *)(param_1 + 0x10) == 0) {
    if (*(long *)(param_1 + 0x28) == -0x8000000000000000 || *(long *)(param_1 + 0x28) == 0)
    goto LAB_100e6de20;
LAB_100e6de58:
    _free(*(undefined8 *)(param_1 + 0x30));
    if (*(long *)(param_1 + 0x40) != -0x8000000000000000 && *(long *)(param_1 + 0x40) != 0)
    goto LAB_100e6de70;
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x18));
    if (*(long *)(param_1 + 0x28) != -0x8000000000000000 && *(long *)(param_1 + 0x28) != 0)
    goto LAB_100e6de58;
LAB_100e6de20:
    if (*(long *)(param_1 + 0x40) != -0x8000000000000000 && *(long *)(param_1 + 0x40) != 0) {
LAB_100e6de70:
      _free(*(undefined8 *)(param_1 + 0x48));
      lVar2 = *(long *)(param_1 + 0x58);
      goto joined_r0x000100e6de80;
    }
  }
  lVar2 = *(long *)(param_1 + 0x58);
joined_r0x000100e6de80:
  if ((lVar2 != -0x8000000000000000) && (lVar2 != 0)) {
    _free(*(undefined8 *)(param_1 + 0x60));
  }
  if ((*(long *)(param_1 + 0x70) != -0x8000000000000000) && (*(long *)(param_1 + 0x70) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)(param_1 + 0x78));
    return;
  }
  return;
}

