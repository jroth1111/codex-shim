
void FUN_100d82318(int *param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if (*param_1 == 0) {
    if ((*(char *)((long)param_1 + 0x669) == '\x03') && ((char)param_1[0x194] == '\x03')) {
      if (*(char *)((long)param_1 + 0x63b) == '\x03') {
        FUN_100cc5410();
        if (*(long *)(param_1 + 0x184) != -0x8000000000000000 && *(long *)(param_1 + 0x184) != 0) {
          _free(*(undefined8 *)(param_1 + 0x186));
        }
        uVar5 = *(undefined8 *)(param_1 + 0x180);
        FUN_100e517d4(uVar5,*(undefined8 *)(param_1 + 0x182));
        if (*(long *)(param_1 + 0x17e) != 0) {
          _free(uVar5);
        }
        *(undefined1 *)((long)param_1 + 0x63a) = 0;
      }
      return;
    }
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  if (*(ulong *)(param_1 + 2) == 0x8000000000000014) {
    plVar4 = *(long **)(param_1 + 8);
    FUN_100e517d4(plVar4,*(undefined8 *)(param_1 + 10));
    if (*(long *)(param_1 + 6) == 0) {
      return;
    }
    goto code_r0x000108aa97c4;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  uVar3 = uVar1 ^ 0x8000000000000000;
  if (-1 < (long)uVar1) {
    uVar3 = 4;
  }
  switch(uVar3) {
  case 0:
  case 1:
  case 6:
  case 7:
  case 0x10:
  case 0x11:
    break;
  case 2:
    uVar3 = *(ulong *)(param_1 + 4);
    if ((uVar3 & 3) != 1) {
      return;
    }
    plVar4 = (long *)(uVar3 - 1);
    lVar6 = *plVar4;
    puVar7 = *(undefined8 **)(uVar3 + 7);
    if ((code *)*puVar7 != (code *)0x0) {
      (*(code *)*puVar7)(lVar6);
    }
    goto code_r0x000100e353bc;
  case 3:
    if (*(long *)(param_1 + 4) != 0) {
      _free(*(undefined8 *)(param_1 + 6));
    }
    plVar4 = *(long **)(param_1 + 10);
    FUN_100de20f8(plVar4);
    goto code_r0x000108aa97c4;
  case 4:
    if (uVar1 != 0) {
      _free(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 8) != 0) {
      plVar4 = *(long **)(param_1 + 10);
      goto code_r0x000108aa97c4;
    }
    break;
  case 5:
    if (*(long *)(param_1 + 4) != 0) {
      _free(*(undefined8 *)(param_1 + 6));
    }
    plVar4 = *(long **)(param_1 + 10);
    if (*plVar4 == 1) {
      FUN_100de21d4(plVar4 + 1);
    }
    else if ((*plVar4 == 0) && (plVar4[2] != 0)) {
      _free(plVar4[1]);
    }
    goto code_r0x000108aa97c4;
  default:
    if (*(long *)(param_1 + 4) != 0) {
      plVar4 = *(long **)(param_1 + 6);
      goto code_r0x000108aa97c4;
    }
    break;
  case 9:
  case 10:
  case 0xc:
    if (*(long *)(param_1 + 4) != 0) {
      _free(*(undefined8 *)(param_1 + 6));
    }
    if (*(long *)(param_1 + 10) != 0) {
      plVar4 = *(long **)(param_1 + 0xc);
      goto code_r0x000108aa97c4;
    }
    break;
  case 0xe:
    if (*(long *)(param_1 + 4) != 0) {
      _free(*(undefined8 *)(param_1 + 6));
    }
    uVar3 = *(ulong *)(param_1 + 10);
    if ((uVar3 & 3) != 1) {
      return;
    }
    plVar4 = (long *)(uVar3 - 1);
    lVar6 = *plVar4;
    puVar7 = *(undefined8 **)(uVar3 + 7);
    if ((code *)*puVar7 != (code *)0x0) {
      (*(code *)*puVar7)(lVar6);
    }
code_r0x000100e353bc:
    if (puVar7[1] != 0) {
      _free(lVar6);
    }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(plVar4);
    return;
  case 0xf:
    plVar4 = *(long **)(param_1 + 6);
    if (plVar4 != (long *)0x0) {
      puVar7 = *(undefined8 **)(param_1 + 8);
      pcVar2 = (code *)*puVar7;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(plVar4);
      }
      if (puVar7[1] != 0) goto code_r0x000108aa97c4;
    }
  }
  return;
}

