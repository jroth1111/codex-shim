
/* WARNING: Possible PIC construction at 0x000100d26aa8: Changing call to branch */

void FUN_100d26a64(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar6;
  ulong uVar7;
  undefined8 unaff_x22;
  undefined8 *puVar8;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (*(char *)(param_1 + 0x47a) == '\0') {
    lVar3 = **(long **)(param_1 + 0x90);
    **(long **)(param_1 + 0x90) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      FUN_100f40f90(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98));
    }
    if (*(char *)(param_1 + 0x280) == '\x03') {
      lVar3 = param_1 + 0xa8;
SUB_100e5c1fc:
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*(char *)(lVar3 + 0x1d2) == '\x03') {
        if (*(char *)(lVar3 + 0xf8) == '\x03') {
          FUN_100e7c9bc(lVar3 + 0x10);
        }
        lVar4 = *(long *)(lVar3 + 0x178);
        lVar6 = *(long *)(lVar3 + 0x180);
        if (lVar6 != 0) {
          puVar8 = (undefined8 *)(lVar4 + 8);
          do {
            if (puVar8[-1] != 0) {
              _free(*puVar8);
            }
            puVar8 = puVar8 + 3;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        if (*(long *)(lVar3 + 0x170) != 0) {
          _free(lVar4);
        }
        lVar4 = *(long *)(lVar3 + 0x160);
        lVar6 = *(long *)(lVar3 + 0x168);
        if (lVar6 != 0) {
          puVar8 = (undefined8 *)(lVar4 + 8);
          do {
            if (puVar8[-1] != 0) {
              _free(*puVar8);
            }
            puVar8 = puVar8 + 3;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        if (*(long *)(lVar3 + 0x158) != 0) {
          _free(lVar4);
        }
        lVar4 = *(long *)(lVar3 + 0x148);
        lVar6 = *(long *)(lVar3 + 0x150);
        if (lVar6 != 0) {
          puVar8 = (undefined8 *)(lVar4 + 8);
          do {
            if (puVar8[-1] != 0) {
              _free(*puVar8);
            }
            puVar8 = puVar8 + 3;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        if (*(long *)(lVar3 + 0x140) != 0) {
          _free(lVar4);
        }
        lVar4 = *(long *)(lVar3 + 0x120);
        if (lVar4 == 0) {
          uVar5 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(lVar3 + 0x128);
          uVar5 = *(undefined8 *)(lVar3 + 0x130);
          *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
          *(long *)((long)register0x00000008 + -0x80) = lVar4;
          *(undefined8 *)((long)register0x00000008 + -0x78) = uVar2;
          *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
          *(long *)((long)register0x00000008 + -0x60) = lVar4;
          *(undefined8 *)((long)register0x00000008 + -0x58) = uVar2;
        }
        uVar7 = (ulong)(lVar4 != 0);
        *(ulong *)((long)register0x00000008 + -0x90) = uVar7;
        *(ulong *)((long)register0x00000008 + -0x70) = uVar7;
        *(undefined8 *)((long)register0x00000008 + -0x50) = uVar5;
        do {
          FUN_100f39f20((undefined1 *)((long)register0x00000008 + -0x48),
                        (undefined1 *)((long)register0x00000008 + -0x90));
        } while (*(long *)((long)register0x00000008 + -0x48) != 0);
        *(undefined1 *)(lVar3 + 0x1d0) = 0;
        lVar4 = *(long *)(lVar3 + 0x110);
        lVar6 = *(long *)(lVar3 + 0x118);
        if (lVar6 != 0) {
          puVar8 = (undefined8 *)(lVar4 + 8);
          do {
            if (puVar8[-1] != 0) {
              _free(*puVar8);
            }
            puVar8 = puVar8 + 3;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        if (*(long *)(lVar3 + 0x108) != 0) {
          _free(lVar4);
        }
        *(undefined1 *)(lVar3 + 0x1d1) = 0;
      }
      return;
    }
  }
  else if (*(char *)(param_1 + 0x47a) == '\x03') {
    unaff_x20 = *(undefined8 *)(param_1 + 0x10);
    FUN_100de8a5c(unaff_x20);
    _free(unaff_x20);
    if (*(char *)(param_1 + 0x468) == '\x03') {
      lVar3 = param_1 + 0x290;
      unaff_x30 = 0x100d26aac;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      unaff_x19 = param_1;
      unaff_x29 = puVar1;
      goto SUB_100e5c1fc;
    }
    *(undefined1 *)(param_1 + 0x479) = 0;
    lVar3 = **(long **)(param_1 + 0x50);
    **(long **)(param_1 + 0x50) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      lVar3 = *(long *)(param_1 + 0x50);
      puVar8 = *(undefined8 **)(param_1 + 0x58);
      uVar7 = puVar8[2];
      if ((code *)*puVar8 != (code *)0x0) {
        (*(code *)*puVar8)(lVar3 + (uVar7 - 1 & 0xfffffffffffffff0) + 0x10);
      }
      if (lVar3 != -1) {
        lVar4 = *(long *)(lVar3 + 8);
        *(long *)(lVar3 + 8) = lVar4 + -1;
        LORelease();
        if (lVar4 == 1) {
          DataMemoryBarrier(2,1);
          if (uVar7 < 9) {
            uVar7 = 8;
          }
          if ((uVar7 + puVar8[1] + 0xf & -uVar7) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__free_10b61b0a8)(lVar3);
            return;
          }
        }
      }
      return;
    }
  }
  return;
}

