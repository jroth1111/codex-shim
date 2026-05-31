
/* WARNING: Possible PIC construction at 0x000100e72098: Changing call to branch */

void FUN_100e7204c(long param_1)

{
  undefined1 *puVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  long unaff_x19;
  undefined8 *puVar5;
  undefined8 unaff_x20;
  ulong uVar6;
  undefined8 unaff_x21;
  undefined8 uVar7;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  cVar2 = *(char *)(param_1 + 0x11d);
  if (cVar2 == '\x03') {
    unaff_x30 = 0x100e7209c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  else {
    if (cVar2 == '\x04') {
      FUN_100d193c4(param_1 + 0x120);
      *(undefined1 *)(param_1 + 0x11c) = 0;
      if (*(long *)(param_1 + 0xb0) != 0) {
        _free(*(undefined8 *)(param_1 + 0xb8));
      }
      if (*(long *)(param_1 + 200) == -0x8000000000000000) {
        return;
      }
      if (*(long *)(param_1 + 200) != 0) {
        _free(*(undefined8 *)(param_1 + 0xd0));
      }
      if (*(long *)(param_1 + 0xe0) == 0) {
        return;
      }
      uVar7 = *(undefined8 *)(param_1 + 0xe8);
      goto code_r0x000108aa97c4;
    }
    if (cVar2 != '\x05') {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  cVar2 = *(char *)(param_1 + 0x138);
  if (cVar2 == '\0') {
    if (*(long *)(param_1 + 0x120) != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x128);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(uVar7);
      return;
    }
  }
  else {
    if (cVar2 == '\x03') {
      if (*(short *)(param_1 + 0x140) == 3) {
        plVar3 = *(long **)(param_1 + 0x148);
        if (*plVar3 == 0xcc) {
          *plVar3 = 0x84;
        }
        else {
          (**(code **)(plVar3[2] + 0x20))();
        }
      }
    }
    else {
      if (cVar2 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x1c0) == '\x03') {
        if (*(char *)(param_1 + 0x1bc) == '\x03') {
          FUN_100deb62c(param_1 + 400);
        }
        else if (*(char *)(param_1 + 0x1bc) == '\0') {
          _close(*(undefined4 *)(param_1 + 0x1b8));
        }
      }
      if ((*(int *)(param_1 + 0x148) != 0) && (*(long *)(param_1 + 0x160) != 0)) {
        _free(*(undefined8 *)(param_1 + 0x150));
      }
      uVar6 = *(ulong *)(param_1 + 0x140);
      if ((uVar6 & 3) == 1) {
        uVar7 = *(undefined8 *)(uVar6 - 1);
        puVar5 = *(undefined8 **)(uVar6 + 7);
        pcVar4 = (code *)*puVar5;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar7);
        }
        if (puVar5[1] != 0) {
          _free(uVar7);
        }
        _free((undefined8 *)(uVar6 - 1));
      }
      *(undefined1 *)(param_1 + 0x139) = 0;
    }
    *(undefined1 *)(param_1 + 0x13a) = 0;
  }
  return;
}

