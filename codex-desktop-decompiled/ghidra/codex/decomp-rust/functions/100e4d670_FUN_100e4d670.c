
void FUN_100e4d670(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  cVar1 = *(char *)(param_1 + 0x50);
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0xb8) != '\x03') {
      return;
    }
    if ((*(char *)(param_1 + 0xb0) == '\x03') &&
       (FUN_100e03d7c(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8)),
       *(long *)(param_1 + 0x88) != 0)) {
      _free(*(undefined8 *)(param_1 + 0x90));
    }
    lVar2 = **(long **)(param_1 + 0x78);
    **(long **)(param_1 + 0x78) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000105c30fe4();
    }
    if (*(long *)(param_1 + 0x60) == 0) {
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    goto code_r0x000108aa97c4;
  }
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x79) == '\x04') {
      FUN_100cfddd4(param_1 + 0x108);
    }
    else {
      if (*(char *)(param_1 + 0x79) != '\x03') goto LAB_100e4d730;
      FUN_100e03d7c(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88));
    }
    *(undefined1 *)(param_1 + 0x78) = 0;
    if (*(long *)(param_1 + 0x58) != 0) {
      lVar2 = *(long *)(param_1 + 0x60);
      goto LAB_100e4d728;
    }
  }
  else {
    if (cVar1 != '\x05') {
      return;
    }
    lVar2 = *(long *)(param_1 + 0x60);
    lVar4 = *(long *)(param_1 + 0x68);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar2 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (*(long *)(param_1 + 0x58) != 0) {
LAB_100e4d728:
      _free(lVar2);
    }
  }
LAB_100e4d730:
  lVar2 = **(long **)(param_1 + 0x30);
  **(long **)(param_1 + 0x30) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4();
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(uVar3);
  return;
}

