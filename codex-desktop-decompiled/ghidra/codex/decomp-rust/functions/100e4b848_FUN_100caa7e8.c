
void FUN_100caa7e8(long *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  
  cVar1 = (char)param_1[0x2c];
  if (cVar1 != '\0') {
    if (cVar1 == '\x03') {
      FUN_100daf270(param_1 + 0x2d);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if ((char)param_1[0x189] == '\x03') {
        FUN_100e7ab5c(param_1 + 0x6b);
      }
      else if ((char)param_1[0x189] == '\0') {
        FUN_100def028(param_1 + 0x2d);
      }
    }
    *(undefined2 *)((long)param_1 + 0x162) = 0;
    if (((*(byte *)((long)param_1 + 0x161) & 1) != 0) && (param_1[0x29] != 0)) {
      _free(param_1[0x2a]);
    }
    *(undefined1 *)((long)param_1 + 0x161) = 0;
    if (param_1[0x1a] == 0) {
      return;
    }
    lVar2 = param_1[0x1b];
    goto code_r0x000108aa97c4;
  }
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  if (param_1[3] != 0) {
    _free(param_1[4]);
  }
  if (param_1[6] == -0x8000000000000000 || param_1[6] == 0) {
    if (param_1[9] == -0x8000000000000000) goto LAB_100e4b89c;
LAB_100e4b8cc:
    FUN_100e79780();
    uVar3 = param_1[0xe];
  }
  else {
    _free(param_1[7]);
    if (param_1[9] != -0x8000000000000000) goto LAB_100e4b8cc;
LAB_100e4b89c:
    uVar3 = param_1[0xe];
  }
  if ((uVar3 & 0x7fffffffffffffff) == 0) {
    return;
  }
  lVar2 = param_1[0xf];
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar2);
  return;
}

