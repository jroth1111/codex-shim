
void FUN_1017478ac(long param_1)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  
  if ((*(char *)(param_1 + 0x4e0) != '\x03') || (*(char *)(param_1 + 0x4d8) != '\x03')) {
    return;
  }
  FUN_101755de0(param_1 + 0x170);
  FUN_10174d47c(param_1 + 0x100);
  lVar4 = *(long *)(param_1 + 0xb8);
  **(undefined1 **)(param_1 + 0xb0) = 0;
  if (lVar4 != 0) {
    _free();
  }
  lVar4 = *(long *)(param_1 + 0x40) + -1;
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x38);
    if (lVar4 != 0) {
      lVar4 = lVar4 * 8;
      puVar7 = puVar5;
      do {
        puVar6 = (undefined1 *)*puVar7;
        lVar3 = _strlen(puVar6);
        *puVar6 = 0;
        if (lVar3 != -1) {
          _free(puVar6);
        }
        puVar7 = puVar7 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      _free(puVar5);
    }
    FUN_10174e350(param_1 + 0x90);
    if ((*(undefined1 **)(param_1 + 0xc0) != (undefined1 *)0x0) &&
       (lVar4 = *(long *)(param_1 + 200), **(undefined1 **)(param_1 + 0xc0) = 0, lVar4 != 0)) {
      _free();
    }
    if ((*(undefined1 **)(param_1 + 0xd0) != (undefined1 *)0x0) &&
       (lVar4 = *(long *)(param_1 + 0xd8), **(undefined1 **)(param_1 + 0xd0) = 0, lVar4 != 0)) {
      _free();
    }
    FUN_10174c674(param_1 + 0x48);
    if ((*(long *)(param_1 + 0xe0) != 0) && (*(long *)(param_1 + 0xe8) != 0)) {
      _free();
    }
    if (*(int *)(param_1 + 0x78) == 3) {
      _close(*(undefined4 *)(param_1 + 0x7c));
      iVar1 = *(int *)(param_1 + 0x80);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x80);
    }
    if (iVar1 == 3) {
      _close(*(undefined4 *)(param_1 + 0x84));
      iVar1 = *(int *)(param_1 + 0x88);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x88);
    }
    if (iVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x000108aa949c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__close_10b61ae88)(*(undefined4 *)(param_1 + 0x8c));
      return;
    }
    return;
  }
  __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,0xffffffffffffffff,0,&UNK_10b4ad618)
  ;
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10174d0b0);
  (*pcVar2)();
}

