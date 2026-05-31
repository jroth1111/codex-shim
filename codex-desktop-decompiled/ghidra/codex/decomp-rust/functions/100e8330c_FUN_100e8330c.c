
void FUN_100e8330c(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (*(char *)(param_1 + 0x4d8) == '\0') {
    FUN_100e3e028();
    if (*(long *)(param_1 + 0xb8) != -0x8000000000000000 && *(long *)(param_1 + 0xb8) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0xc0);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(uVar4);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x4d8) == '\x03') {
    cVar3 = *(char *)(param_1 + 0x218);
    if (cVar3 == '\0') {
      FUN_100e3e028(param_1 + 0xd8);
      if (*(long *)(param_1 + 400) != -0x8000000000000000 && *(long *)(param_1 + 400) != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x198);
        goto code_r0x000108aa97c4;
      }
    }
    else {
      if (cVar3 == '\x03') {
        FUN_100e66b8c(param_1 + 0x220);
      }
      else {
        if (cVar3 != '\x04') {
          return;
        }
        if (*(char *)(param_1 + 0x428) == '\x03') {
          FUN_100ccec20(param_1 + 0x250);
        }
        else if (*(char *)(param_1 + 0x428) == '\0') {
          lVar1 = *(long *)(param_1 + 0x228);
          lVar5 = *(long *)(param_1 + 0x230);
          if (lVar5 != 0) {
            puVar6 = (undefined8 *)(lVar1 + 8);
            do {
              if (puVar6[-1] != 0) {
                _free(*puVar6);
              }
              puVar6 = puVar6 + 3;
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
          }
          if (*(long *)(param_1 + 0x220) != 0) {
            _free(lVar1);
          }
        }
        lVar5 = *(long *)(param_1 + 0x1d0);
        lVar1 = lVar5;
        for (lVar2 = *(long *)(param_1 + 0x1d8); lVar2 != 0; lVar2 = lVar2 + -1) {
          if (*(long *)(lVar1 + 0x98) != -0x8000000000000000 && *(long *)(lVar1 + 0x98) != 0) {
            _free(*(undefined8 *)(lVar1 + 0xa0));
          }
          FUN_100e0f8ec(lVar1);
          lVar1 = lVar1 + 0xb0;
        }
        if (*(long *)(param_1 + 0x1c8) != 0) {
          _free(lVar5);
        }
        if ((*(long *)(param_1 + 0x1f8) != -0x8000000000000000) && (*(long *)(param_1 + 0x1f8) != 0)
           ) {
          _free(*(undefined8 *)(param_1 + 0x200));
        }
      }
      *(undefined2 *)(param_1 + 0x219) = 0;
    }
    return;
  }
  return;
}

