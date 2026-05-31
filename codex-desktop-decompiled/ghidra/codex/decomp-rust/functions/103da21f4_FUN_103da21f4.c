
void FUN_103da21f4(int *param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (*param_1 == 0) {
    if ((char)param_1[0x6e6] == '\0') {
      func_0x000103dbe850(param_1 + 2);
      func_0x000103dc16d0(param_1 + 0x22);
      func_0x000103d9c4c8(param_1 + 0x3a);
    }
    else {
      if ((char)param_1[0x6e6] != '\x03') {
        return;
      }
      func_0x000103da1b28(param_1 + 0x40);
    }
    if ((*(ulong *)(param_1 + 0x34) & 0x7fffffffffffffff) == 0) {
      return;
    }
    lVar3 = *(long *)(param_1 + 0x36);
  }
  else {
    if (*param_1 != 1) {
      return;
    }
    uVar2 = *(ulong *)(param_1 + 2);
    if (uVar2 == 0x8000000000000006) {
      return;
    }
    if (uVar2 == 0x8000000000000007) {
      lVar3 = *(long *)(param_1 + 6);
      if (lVar3 == 0) {
        return;
      }
      puVar4 = *(undefined8 **)(param_1 + 8);
      pcVar1 = (code *)*puVar4;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(lVar3);
      }
      if (puVar4[1] == 0) {
        return;
      }
    }
    else {
      uVar2 = *(ulong *)(param_1 + 2);
      lVar3 = uVar2 + 0x7fffffffffffffff;
      if (uVar2 < 0x8000000000000001) {
        lVar3 = 1;
      }
      if (lVar3 == 0) {
        lVar3 = *(long *)(param_1 + 6);
        if (lVar3 != 0) {
          puVar4 = *(undefined8 **)(param_1 + 8);
          pcVar1 = (code *)*puVar4;
          if (pcVar1 != (code *)0x0) {
            (*pcVar1)(lVar3);
          }
          if (puVar4[1] != 0) goto _free;
        }
        return;
      }
      if (lVar3 != 1) {
        return;
      }
      FUN_103d996fc(param_1 + 8);
      if ((uVar2 & 0x7fffffffffffffff) == 0) {
        return;
      }
      lVar3 = *(long *)(param_1 + 4);
    }
  }
_free:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar3);
  return;
}

