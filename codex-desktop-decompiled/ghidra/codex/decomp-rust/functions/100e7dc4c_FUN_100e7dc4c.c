
void FUN_100e7dc4c(long *param_1)

{
  if ((char)param_1[0x50] == '\x03') {
    FUN_100e6dec0(param_1 + 0x51);
  }
  else {
    if ((char)param_1[0x50] != '\x04') {
      return;
    }
    if (*(char *)((long)param_1 + 0x4a1) == '\x04') {
      FUN_100cab424(param_1 + 0xa8);
      FUN_100e0609c(param_1 + 0x95);
      *(undefined1 *)(param_1 + 0x94) = 0;
    }
    else if (*(char *)((long)param_1 + 0x4a1) == '\x03') {
      FUN_100ce72d8(param_1 + 0x95);
    }
    FUN_100e0c320(param_1 + 0x51);
  }
  FUN_100def764(param_1 + 3);
  if (*param_1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(param_1[1]);
  return;
}

