
/* WARNING: Possible PIC construction at 0x000100defabc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e10f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df82d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df3e00: Changing call to branch */

void FUN_100c9ef00(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long *unaff_x19;
  long *plVar5;
  ulong *unaff_x20;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 unaff_x21;
  undefined8 uVar8;
  undefined8 unaff_x22;
  undefined8 *puVar9;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *unaff_x30;
  
  if (*param_1 == 0x11) {
    plVar5 = (long *)param_1[1];
    if (*plVar5 == 1) {
      uVar7 = plVar5[1];
      if ((uVar7 & 3) != 1) goto code_r0x000108aa97c4;
      puVar6 = (undefined8 *)(uVar7 - 1);
      uVar8 = *puVar6;
      puVar9 = *(undefined8 **)(uVar7 + 7);
      pcVar3 = (code *)*puVar9;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar8);
      }
      if (puVar9[1] != 0) {
        _free(uVar8);
      }
    }
    else {
      if ((*plVar5 != 0) || (plVar5[2] == 0)) goto code_r0x000108aa97c4;
      puVar6 = (undefined8 *)plVar5[1];
    }
    _free(puVar6);
    goto code_r0x000108aa97c4;
  }
  lVar4 = 0;
  if (*param_1 != 0) {
    lVar4 = *param_1 + -1;
  }
  switch(lVar4) {
  case 0:
    if (param_1[0x5a] != -0x8000000000000000 && param_1[0x5a] != 0) {
      _free(param_1[0x5b]);
    }
    FUN_100e1f934(param_1);
    FUN_100ded1dc(param_1 + 0x48);
    if (param_1[0x5d] == -0x8000000000000000 || param_1[0x5d] == 0) {
      return;
    }
    plVar5 = (long *)param_1[0x5e];
    goto code_r0x000108aa97c4;
  case 1:
    plVar5 = (long *)param_1[2];
    lVar4 = param_1[3];
    if (lVar4 != 0) {
      plVar2 = plVar5 + 1;
      do {
        if (plVar2[-1] != 0) {
          _free(*plVar2);
        }
        plVar2 = plVar2 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    goto code_r0x000100de8714;
  case 2:
    if (param_1[4] != -0x8000000000000000 && param_1[4] != 0) {
      _free(param_1[5]);
    }
    plVar5 = (long *)param_1[2];
    lVar4 = param_1[3] + 1;
    plVar2 = plVar5;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      func_0x000100e14aac(plVar2);
      plVar2 = plVar2 + 0x24;
    }
    goto code_r0x000100de8714;
  case 3:
    unaff_x19 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    puVar1 = (ulong *)(param_1 + 4);
    unaff_x21 = 0x8000000000000000;
    if (*puVar1 == 0x8000000000000000) {
      if (param_1[0xd] != -0x8000000000000000 && param_1[0xd] != 0) {
        _free(param_1[0xe]);
      }
      plVar5 = (long *)param_1[2];
      lVar4 = param_1[3] + 1;
      plVar2 = plVar5;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        func_0x000100ded3bc(plVar2);
        plVar2 = plVar2 + 0x18;
      }
      if (*unaff_x19 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    lVar4 = param_1[8];
    if (lVar4 != 0 && lVar4 * 9 != -0x11) {
      _free(param_1[7] + lVar4 * -8 + -8);
    }
    unaff_x30 = &LAB_100df3e04;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x20 = puVar1;
    break;
  case 4:
    unaff_x19 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    puVar1 = (ulong *)(param_1 + 4);
    unaff_x21 = 0x8000000000000000;
    if (*puVar1 == 0x8000000000000000) {
      if (param_1[0xd] != -0x8000000000000000 && param_1[0xd] != 0) {
        _free(param_1[0xe]);
      }
      plVar5 = (long *)param_1[2];
      func_0x000100cb0400(plVar5,param_1[3]);
      if (*unaff_x19 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    lVar4 = param_1[8];
    if (lVar4 != 0 && lVar4 * 9 != -0x11) {
      _free(param_1[7] + lVar4 * -8 + -8);
    }
    unaff_x30 = &LAB_100df82d4;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x20 = puVar1;
    break;
  case 5:
    unaff_x19 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    puVar1 = (ulong *)(param_1 + 4);
    unaff_x21 = 0x8000000000000000;
    if (*puVar1 == 0x8000000000000000) {
      if (param_1[0xd] == -0x8000000000000000 || param_1[0xd] == 0) {
        plVar2 = (long *)param_1[2];
        lVar4 = param_1[3];
        plVar5 = plVar2;
      }
      else {
        _free(param_1[0xe]);
        plVar2 = (long *)param_1[2];
        lVar4 = param_1[3];
        plVar5 = plVar2;
      }
      for (; lVar4 != 0; lVar4 = lVar4 + -1) {
        func_0x000100e17918(plVar2);
        if (-0x7fffffffffffffff < plVar2[0x12] && plVar2[0x12] != 0) {
          _free(plVar2[0x13]);
        }
        plVar2 = plVar2 + 0x18;
      }
      if (*unaff_x19 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    lVar4 = param_1[8];
    if (lVar4 != 0 && lVar4 * 9 != -0x11) {
      _free(param_1[7] + lVar4 * -8 + -8);
    }
    unaff_x30 = &LAB_100e10f8c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x20 = puVar1;
    break;
  case 6:
    plVar5 = (long *)param_1[2];
    lVar4 = param_1[3] + 1;
    plVar2 = plVar5;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      func_0x000100e0dab4(plVar2);
      plVar2 = plVar2 + 0x13;
    }
code_r0x000100de8714:
    if (param_1[1] == 0) {
code_r0x000100de87dc:
      return;
    }
    goto code_r0x000108aa97c4;
  case 7:
    lVar4 = param_1[2];
    FUN_100ca97fc(lVar4,param_1[3]);
    if (param_1[1] != 0) {
      _free(lVar4);
    }
    if (param_1[0xd] != -0x7ffffffffffffffb) {
      FUN_100de6690();
    }
    puVar1 = (ulong *)(param_1 + 4);
    if (*puVar1 == 0x8000000000000000) {
      return;
    }
    lVar4 = param_1[8];
    if ((lVar4 != 0) && (lVar4 * 9 != -0x11)) {
      _free(param_1[7] + lVar4 * -8 + -8);
    }
    break;
  case 8:
    unaff_x19 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    puVar1 = (ulong *)(param_1 + 4);
    unaff_x21 = 0x8000000000000000;
    if (*puVar1 == 0x8000000000000000) {
      if (param_1[0xd] != -0x8000000000000000 && param_1[0xd] != 0) {
        _free(param_1[0xe]);
      }
      plVar5 = (long *)param_1[2];
      lVar4 = param_1[3] + 1;
      plVar2 = plVar5;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        FUN_100de5590(plVar2);
        plVar2 = plVar2 + 0x1c;
      }
      if (*unaff_x19 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    lVar4 = param_1[8];
    if (lVar4 != 0 && lVar4 * 9 != -0x11) {
      _free(param_1[7] + lVar4 * -8 + -8);
    }
    unaff_x30 = (undefined1 *)0x100defac0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x20 = puVar1;
    break;
  case 9:
    if (param_1[1] == -0x7ffffffffffffffb) {
      return;
    }
  default:
    puVar1 = (ulong *)(param_1 + 1);
    uVar7 = *puVar1 ^ 0x8000000000000000;
    if (-1 < (long)*puVar1) {
      uVar7 = 5;
    }
    if (uVar7 < 3) {
      return;
    }
    if (uVar7 == 3) {
      if (param_1[2] == 0) {
        return;
      }
      plVar5 = (long *)param_1[3];
      goto code_r0x000108aa97c4;
    }
    if (uVar7 == 4) {
      plVar5 = (long *)param_1[3];
      lVar4 = param_1[4] + 1;
      plVar2 = plVar5;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        FUN_100de6690(plVar2);
        plVar2 = plVar2 + 9;
      }
      if (param_1[2] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    lVar4 = param_1[5];
    if ((lVar4 != 0) && (lVar4 * 9 != -0x11)) {
      _free(param_1[4] + lVar4 * -8 + -8);
    }
    break;
  case 10:
    goto code_r0x000100de87dc;
  case 0xb:
    goto code_r0x000100de8748;
  case 0xc:
    func_0x000100e2043c(param_1 + 3);
    if (param_1[6] == -0x8000000000000000 || param_1[6] == 0) {
      return;
    }
    plVar5 = (long *)param_1[7];
    goto code_r0x000108aa97c4;
  case 0xd:
    if (param_1[1] == 2) {
      return;
    }
    goto code_r0x000100de8748;
  case 0xe:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    FUN_100de6690(param_1 + 7);
    if (param_1[4] == -0x8000000000000000 || param_1[4] == 0) {
      return;
    }
    plVar5 = (long *)param_1[5];
    goto code_r0x000108aa97c4;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined1 **)((long)register0x00000008 + -8) = unaff_x30;
  plVar5 = (long *)puVar1[1];
  lVar4 = puVar1[2] + 1;
  plVar2 = plVar5;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
    if (*plVar2 != 0) {
      _free(plVar2[1]);
    }
    FUN_100de6690(plVar2 + 3);
    plVar2 = plVar2 + 0xd;
  }
  if (*puVar1 == 0) {
    return;
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar5);
  return;
code_r0x000100de8748:
  if (param_1[5] != 0) {
    _free(param_1[6]);
  }
  if (param_1[0xb] != -0x8000000000000000 && param_1[0xb] != 0) {
    _free(param_1[0xc]);
  }
  if (param_1[8] != 0) {
    _free(param_1[9]);
  }
  if (param_1[0xe] == -0x8000000000000000) {
    return;
  }
  if (param_1[0xe] == 0) {
    return;
  }
  plVar5 = (long *)param_1[0xf];
  goto code_r0x000108aa97c4;
}

