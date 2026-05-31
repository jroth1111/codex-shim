
void FUN_100e1eee8(long *param_1)

{
  long lVar1;
  
  if (param_1[3] < -0x7ffffffffffffffe || param_1[3] == 0) {
    lVar1 = param_1[6];
  }
  else {
    _free(param_1[4]);
    lVar1 = param_1[6];
  }
  if (lVar1 == 0) goto LAB_100e1ef60;
  if (*(long *)(lVar1 + 0x50) == -0x8000000000000000 || *(long *)(lVar1 + 0x50) == 0) {
    if (*(long *)(lVar1 + 0x68) == -0x8000000000000000 || *(long *)(lVar1 + 0x68) == 0)
    goto LAB_100e1ef40;
LAB_100e1efc4:
    _free(*(undefined8 *)(lVar1 + 0x70));
    if (-0x7fffffffffffffff < *(long *)(lVar1 + 0x80) && *(long *)(lVar1 + 0x80) != 0)
    goto LAB_100e1efe4;
  }
  else {
    _free(*(undefined8 *)(lVar1 + 0x58));
    if (*(long *)(lVar1 + 0x68) != -0x8000000000000000 && *(long *)(lVar1 + 0x68) != 0)
    goto LAB_100e1efc4;
LAB_100e1ef40:
    if (-0x7fffffffffffffff < *(long *)(lVar1 + 0x80) && *(long *)(lVar1 + 0x80) != 0) {
LAB_100e1efe4:
      _free(*(undefined8 *)(lVar1 + 0x88));
    }
  }
  _free(lVar1);
LAB_100e1ef60:
  if (*param_1 == -0x8000000000000000 || *param_1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(param_1[1]);
  return;
}

