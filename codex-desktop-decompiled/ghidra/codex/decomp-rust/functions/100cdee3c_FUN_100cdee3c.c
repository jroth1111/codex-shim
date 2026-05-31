
void FUN_100cdee3c(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 9);
  if (cVar1 == '\x03') {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar3);
    }
  }
  else {
    if (cVar1 != '\x04') {
      if (cVar1 != '\x05') {
        return;
      }
      FUN_100cd95b0(param_1 + 0x280);
      if (*(long *)(param_1 + 0x238) != 0) {
        _free(*(undefined8 *)(param_1 + 0x240));
      }
      if (*(long *)(param_1 + 0x250) != 0) {
        _free(*(undefined8 *)(param_1 + 600));
      }
      if (*(long *)(param_1 + 0x268) != 0) {
        _free(*(undefined8 *)(param_1 + 0x270));
      }
      FUN_100d0f028(param_1 + 0x1b8);
      if (*(long *)(param_1 + 0x28) != 2) {
        if (*(long *)(param_1 + 0xa8) != 0) {
          _free(*(undefined8 *)(param_1 + 0xb0));
        }
        if (*(long *)(param_1 + 0xc0) != 0) {
          _free(*(undefined8 *)(param_1 + 200));
        }
        if (*(long *)(param_1 + 0xd8) != 0) {
          _free(*(undefined8 *)(param_1 + 0xe0));
        }
        FUN_100d0f028((long *)(param_1 + 0x28));
      }
      FUN_100def764(param_1 + 0x1548);
      *(undefined1 *)(param_1 + 8) = 0;
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar3);
    }
  }
  if (puVar2[1] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(uVar3);
  return;
}

