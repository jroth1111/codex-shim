
void FUN_100cb98e0(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  
  cVar3 = *(char *)(param_1 + 0x140);
  if (cVar3 == '\0') {
    func_0x000100e3e028(param_1);
    if (*(long *)(param_1 + 0xb8) != -0x8000000000000000 && *(long *)(param_1 + 0xb8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)(param_1 + 0xc0));
      return;
    }
  }
  else {
    if (cVar3 == '\x03') {
      func_0x000100e66b8c(param_1 + 0x148);
    }
    else {
      if (cVar3 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x350) == '\x03') {
        FUN_100ccec20(param_1 + 0x178);
      }
      else if (*(char *)(param_1 + 0x350) == '\0') {
        lVar1 = *(long *)(param_1 + 0x150);
        lVar4 = *(long *)(param_1 + 0x158);
        if (lVar4 != 0) {
          puVar5 = (undefined8 *)(lVar1 + 8);
          do {
            if (puVar5[-1] != 0) {
              _free(*puVar5);
            }
            puVar5 = puVar5 + 3;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        if (*(long *)(param_1 + 0x148) != 0) {
          _free(lVar1);
        }
      }
      lVar4 = *(long *)(param_1 + 0xf8);
      lVar1 = lVar4;
      for (lVar2 = *(long *)(param_1 + 0x100); lVar2 != 0; lVar2 = lVar2 + -1) {
        if (*(long *)(lVar1 + 0x98) != -0x8000000000000000 && *(long *)(lVar1 + 0x98) != 0) {
          _free(*(undefined8 *)(lVar1 + 0xa0));
        }
        FUN_100e0f8ec(lVar1);
        lVar1 = lVar1 + 0xb0;
      }
      if (*(long *)(param_1 + 0xf0) != 0) {
        _free(lVar4);
      }
      if ((*(long *)(param_1 + 0x120) != -0x8000000000000000) && (*(long *)(param_1 + 0x120) != 0))
      {
        _free(*(undefined8 *)(param_1 + 0x128));
      }
    }
    *(undefined2 *)(param_1 + 0x141) = 0;
  }
  return;
}

