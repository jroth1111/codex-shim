
void FUN_101952554(ulong *param_1)

{
  ulong uVar1;
  
  if ((*param_1 & 0x7fffffffffffffff) == 0) {
    if ((param_1[3] & 0x7fffffffffffffff) == 0) goto LAB_10195257c;
LAB_1019525c4:
    _free(param_1[4]);
    if (param_1[6] != 0x8000000000000000 && param_1[6] != 0) goto LAB_1019525e0;
LAB_101952590:
    if (param_1[9] != 0x8000000000000000 && param_1[9] != 0) {
LAB_1019525f8:
      _free(param_1[10]);
      uVar1 = param_1[0xc];
      goto joined_r0x0001019525a8;
    }
  }
  else {
    _free(param_1[1]);
    if ((param_1[3] & 0x7fffffffffffffff) != 0) goto LAB_1019525c4;
LAB_10195257c:
    if (param_1[6] == 0x8000000000000000 || param_1[6] == 0) goto LAB_101952590;
LAB_1019525e0:
    _free(param_1[7]);
    if (param_1[9] != 0x8000000000000000 && param_1[9] != 0) goto LAB_1019525f8;
  }
  uVar1 = param_1[0xc];
joined_r0x0001019525a8:
  if ((uVar1 != 0x8000000000000000) && (uVar1 != 0)) {
    _free(param_1[0xd]);
  }
  if ((param_1[0xf] != 0x8000000000000000) && (param_1[0xf] != 0)) {
    _free(param_1[0x10]);
  }
  if ((param_1[0x12] != 0x8000000000000000) && (param_1[0x12] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_1[0x13]);
    return;
  }
  return;
}

