
/* WARNING: Possible PIC construction at 0x000100e0c4a8: Changing call to branch */

void FUN_100e0609c(ulong *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  uVar4 = *param_1;
  uVar6 = uVar4 ^ 0x8000000000000000;
  if (-1 < (long)uVar4) {
    uVar6 = 3;
  }
  if (uVar6 != 0) {
    if (uVar6 == 1) {
      unaff_x19 = param_1 + 1;
      puVar2 = &stack0xffffffffffffffe0;
      unaff_x29 = &stack0xfffffffffffffff0;
      unaff_x20 = 0xffffffffffffffff;
      lVar3 = *(long *)*unaff_x19;
      *(long *)*unaff_x19 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7a3d0afebf8844a0E(unaff_x19);
      }
      lVar3 = *(long *)param_1[2];
      *(long *)param_1[2] = lVar3 + -1;
      LORelease();
      if (lVar3 != 1) {
        plVar5 = (long *)param_1[3];
        lVar3 = *plVar5;
        *plVar5 = lVar3 + -1;
        LORelease();
        if (lVar3 != 1) {
          return;
        }
        DataMemoryBarrier(2,1);
        uVar6 = param_1[3];
        puVar1 = (undefined8 *)param_1[4];
        uVar4 = puVar1[2];
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)(uVar6 + (uVar4 - 1 & 0xfffffffffffffff0) + 0x10);
        }
        if (uVar6 != 0xffffffffffffffff) {
          lVar3 = *(long *)(uVar6 + 8);
          *(long *)(uVar6 + 8) = lVar3 + -1;
          LORelease();
          if (lVar3 == 1) {
            DataMemoryBarrier(2,1);
            if (uVar4 < 9) {
              uVar4 = 8;
            }
            if ((uVar4 + puVar1[1] + 0xf & -uVar4) != 0) goto code_r0x000108aa97c4;
          }
        }
        return;
      }
      DataMemoryBarrier(2,1);
      unaff_x30 = 0x100e0c4ac;
    }
    else {
      if (uVar6 != 2) {
        if (uVar4 != 0) {
          _free(param_1[1]);
        }
        if (param_1[3] != 0) {
          _free(param_1[4]);
        }
        if (param_1[6] != 0) {
          _free(param_1[7]);
        }
        if (param_1[9] != 0) {
          _free(param_1[10]);
        }
        if (param_1[0xc] != 0) {
          _free(param_1[0xd]);
        }
        if (param_1[0x10] == 0) {
          return;
        }
        uVar6 = param_1[0x11];
        goto code_r0x000108aa97c4;
      }
      lVar3 = *(long *)param_1[1];
      *(long *)param_1[1] = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7a3d0afebf8844a0E();
      }
      lVar3 = *(long *)param_1[2];
      *(long *)param_1[2] = lVar3 + -1;
      LORelease();
      if (lVar3 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      puVar2 = (undefined1 *)register0x00000008;
    }
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(ulong **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    uVar6 = param_1[2];
    FUN_105c23f48(uVar6 + 0x10);
    if (uVar6 != 0xffffffffffffffff) {
      lVar3 = *(long *)(uVar6 + 8);
      *(long *)(uVar6 + 8) = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        goto code_r0x000108aa97c4;
      }
    }
    return;
  }
  if (param_1[1] == 0) {
    return;
  }
  uVar6 = param_1[2];
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(uVar6);
  return;
}

