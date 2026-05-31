
/* WARNING: Possible PIC construction at 0x000100d22270: Changing call to branch */

void FUN_100d221e0(byte *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  byte *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  ulong uVar9;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar10;
  undefined8 unaff_x30;
  
  puVar3 = &stack0xffffffffffffffd0;
  puVar10 = &stack0xfffffffffffffff0;
  if (param_1[0x38] == 0) {
    lVar4 = **(long **)(param_1 + 0x18);
    **(long **)(param_1 + 0x18) = lVar4 + -1;
    LORelease();
    if (lVar4 != 1) {
      if (*param_1 < 0x19) {
        return;
      }
      plVar7 = *(long **)(param_1 + 8);
      lVar4 = *plVar7;
      *plVar7 = lVar4 + -1;
      LORelease();
      if (lVar4 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      lVar4 = *(long *)(param_1 + 8);
      if (lVar4 == -1) {
        return;
      }
      lVar8 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar4 + 8);
      *(long *)(lVar4 + 8) = lVar5 + -1;
      LORelease();
      if (lVar5 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      if (lVar8 + 0x17U < 8) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    DataMemoryBarrier(2,1);
    unaff_x30 = 0x100d22274;
    unaff_x19 = param_1;
  }
  else {
    if (param_1[0x38] != 3) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    pcVar6 = (code *)*puVar2;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(uVar1);
    }
    if (puVar2[1] != 0) {
      _free(uVar1);
    }
    lVar4 = **(long **)(param_1 + 0x18);
    **(long **)(param_1 + 0x18) = lVar4 + -1;
    LORelease();
    if (lVar4 != 1) {
      return;
    }
    DataMemoryBarrier(2,1);
    puVar3 = (undefined1 *)register0x00000008;
    puVar10 = unaff_x29;
  }
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
  *(byte **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar10;
  *(undefined8 *)(puVar3 + -8) = unaff_x30;
  lVar4 = *(long *)(param_1 + 0x18);
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  uVar9 = puVar2[2];
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(lVar4 + (uVar9 - 1 & 0xfffffffffffffff0) + 0x10);
  }
  if (lVar4 != -1) {
    lVar5 = *(long *)(lVar4 + 8);
    *(long *)(lVar4 + 8) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      if (uVar9 < 9) {
        uVar9 = 8;
      }
      if ((uVar9 + puVar2[1] + 0xf & -uVar9) != 0) {
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar4);
        return;
      }
    }
  }
  return;
}

