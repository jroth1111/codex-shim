
/* WARNING: Possible PIC construction at 0x000100d39b68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100d39b6c) */

void FUN_100d39b10(ulong *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar6;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar7;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar3 = param_1;
  if ((char)param_1[0x31] != '\0') {
    if ((char)param_1[0x31] != '\x03') {
      return;
    }
    if (((char)param_1[0x30] == '\x03') && ((char)param_1[0x27] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x28);
      if (param_1[0x29] != 0) {
        (**(code **)(param_1[0x29] + 0x18))(param_1[0x2a]);
      }
    }
    unaff_x30 = 0x100d39b6c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    puVar3 = param_1 + 0x11;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  uVar6 = *puVar3;
  uVar5 = uVar6 ^ 0x8000000000000000;
  if (-1 < (long)uVar6) {
    uVar5 = 1;
  }
  if (uVar5 == 0) {
    if (puVar3[1] != 0x8000000000000000 && puVar3[1] != 0) {
      _free(puVar3[2]);
    }
  }
  else {
    if (uVar5 == 1) {
      if (puVar3[0xd] == 0x8000000000000000 || puVar3[0xd] == 0) {
        uVar5 = puVar3[3];
      }
      else {
        _free(puVar3[0xe]);
        uVar5 = puVar3[3];
      }
      if (uVar5 != 0x8000000000000005) {
        FUN_100de6690();
      }
      if (uVar6 == 0) {
        return;
      }
      plVar4 = (long *)puVar3[1];
      goto code_r0x000108aa97c4;
    }
    if (puVar3[1] != 0) {
      _free(puVar3[2]);
    }
    if (puVar3[4] == 0x8000000000000005) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  uVar6 = puVar3[4];
  uVar5 = uVar6 ^ 0x8000000000000000;
  if (-1 < (long)uVar6) {
    uVar5 = 5;
  }
  if (uVar5 < 3) {
    return;
  }
  if (uVar5 == 3) {
    if (puVar3[5] == 0) {
      return;
    }
    plVar4 = (long *)puVar3[6];
  }
  else if (uVar5 == 4) {
    plVar4 = (long *)puVar3[6];
    lVar7 = puVar3[7] + 1;
    plVar2 = plVar4;
    while (lVar7 = lVar7 + -1, lVar7 != 0) {
      FUN_100de6690(plVar2);
      plVar2 = plVar2 + 9;
    }
    if (puVar3[5] == 0) {
      return;
    }
  }
  else {
    uVar5 = puVar3[8];
    if ((uVar5 != 0) && (uVar5 * 9 != -0x11)) {
      _free(puVar3[7] + uVar5 * -8 + -8);
    }
    *(undefined8 *)((long)register0x00000008 + -0x40) =
         *(undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)((long)register0x00000008 + -0x30) =
         *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    plVar4 = (long *)puVar3[5];
    lVar7 = puVar3[6] + 1;
    plVar2 = plVar4;
    while (lVar7 = lVar7 + -1, lVar7 != 0) {
      if (*plVar2 != 0) {
        _free(plVar2[1]);
      }
      FUN_100de6690(plVar2 + 3);
      plVar2 = plVar2 + 0xd;
    }
    if (puVar3[4] == 0) {
      return;
    }
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar4);
  return;
}

