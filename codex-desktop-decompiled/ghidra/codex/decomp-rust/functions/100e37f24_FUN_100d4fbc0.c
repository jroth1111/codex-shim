
/* WARNING: Possible PIC construction at 0x000100d4fc18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100d4fc1c) */

void FUN_100d4fbc0(ulong *param_1)

{
  undefined1 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong *puVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong in_xzr;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar8 = param_1;
  if ((char)param_1[0x3d] != '\0') {
    if ((char)param_1[0x3d] != '\x03') {
      return;
    }
    if (((char)param_1[0x3c] == '\x03') && ((char)param_1[0x33] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x34);
      if (param_1[0x35] != 0) {
        (**(code **)(param_1[0x35] + 0x18))(param_1[0x36]);
      }
    }
    unaff_x30 = 0x100d4fc1c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    puVar8 = param_1 + 0x17;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar5 = *puVar8 + 0x7ffffffffffffffd;
  if (*puVar8 < 0x8000000000000003) {
    lVar5 = 2;
  }
  if (lVar5 == 0) {
    puVar11 = puVar8 + 1;
    uVar10 = *puVar11;
    LOAcquire();
    lVar5 = *(long *)(uVar10 + 0x1f0);
    *(long *)(uVar10 + 0x1f0) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      LOAcquire();
      lVar5 = *(long *)(uVar10 + 0x88);
      *(long *)(uVar10 + 0x88) = lVar5 + 1;
      lVar5 = func_0x000100fcaed8(uVar10 + 0x80,lVar5);
      *(ulong *)(lVar5 + 0x4110) = *(ulong *)(lVar5 + 0x4110) | 0x200000000;
      LORelease();
      puVar2 = (ulong *)(uVar10 + 0x110);
      LOAcquire();
      uVar9 = *puVar2;
      *puVar2 = uVar9 | 2;
      LORelease();
      if (uVar9 == 0) {
        lVar5 = *(long *)(uVar10 + 0x100);
        *(undefined8 *)(uVar10 + 0x100) = 0;
        *puVar2 = in_xzr;
        LORelease();
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 8))(*(undefined8 *)(uVar10 + 0x108));
        }
      }
    }
    lVar5 = *(long *)*puVar11;
    *(long *)*puVar11 = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h87dced07d7317f69E(puVar11);
    }
    puVar8 = puVar8 + 3;
    if (*puVar8 != 0) {
      __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
                (puVar8);
      lVar5 = *(long *)*puVar8;
      *(long *)*puVar8 = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        plVar7 = (long *)*puVar8;
        FUN_10611d000(plVar7 + 6);
        if (plVar7 != (long *)0xffffffffffffffff) {
          lVar5 = plVar7[1];
          plVar7[1] = lVar5 + -1;
          LORelease();
          if (lVar5 == 1) {
            DataMemoryBarrier(2,1);
            goto code_r0x000108aa97c4;
          }
        }
        return;
      }
    }
    return;
  }
  if (lVar5 == 1) {
    return;
  }
  uVar3 = *(undefined8 *)((long)register0x00000008 + -0x30);
  uVar4 = *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  uVar10 = *puVar8 + 0x8000000000000001 & (long)*puVar8 >> 0x3f;
  if (uVar10 == 0) {
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    if (puVar8[3] == 0x8000000000000000 || puVar8[3] == 0) {
      uVar10 = *puVar8;
    }
    else {
      _free(puVar8[4]);
      uVar10 = *puVar8;
    }
    if (uVar10 != 0) {
      _free(puVar8[1]);
    }
    if (puVar8[0xc] != 0x8000000000000005) {
      FUN_100de6690();
    }
    uVar10 = puVar8[6];
    if (uVar10 != 0x8000000000000001) {
      if ((uVar10 != 0x8000000000000000) && (uVar10 != 0)) {
        _free(puVar8[7]);
      }
      if ((puVar8[9] != 0x8000000000000000) && (puVar8[9] != 0)) {
        plVar7 = (long *)puVar8[10];
        goto code_r0x000108aa97c4;
      }
    }
    return;
  }
  if (uVar10 == 1) {
    if (puVar8[1] != 0) {
      _free(puVar8[2]);
    }
    if (puVar8[4] == 0x8000000000000005) {
      return;
    }
  }
  else {
    if (uVar10 != 2) {
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      if (puVar8[4] != 0x8000000000000005) {
        FUN_100de6690();
      }
      if (puVar8[1] != 0) {
        _free(puVar8[2]);
      }
      if (puVar8[0xe] == 0x8000000000000000 || puVar8[0xe] == 0) {
        return;
      }
      plVar7 = (long *)puVar8[0xf];
      goto code_r0x000108aa97c4;
    }
    if (puVar8[1] != 0x8000000000000000 && puVar8[1] != 0) {
      _free(puVar8[2]);
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = uVar3;
  *(undefined8 *)((long)register0x00000008 + -0x28) = uVar4;
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  uVar9 = puVar8[4];
  uVar10 = uVar9 ^ 0x8000000000000000;
  if (-1 < (long)uVar9) {
    uVar10 = 5;
  }
  if (uVar10 < 3) {
    return;
  }
  if (uVar10 == 3) {
    if (puVar8[5] == 0) {
      return;
    }
    plVar7 = (long *)puVar8[6];
  }
  else if (uVar10 == 4) {
    plVar7 = (long *)puVar8[6];
    lVar5 = puVar8[7] + 1;
    plVar6 = plVar7;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      FUN_100de6690(plVar6);
      plVar6 = plVar6 + 9;
    }
    if (puVar8[5] == 0) {
      return;
    }
  }
  else {
    uVar10 = puVar8[8];
    if ((uVar10 != 0) && (uVar10 * 9 != -0x11)) {
      _free(puVar8[7] + uVar10 * -8 + -8);
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
    plVar7 = (long *)puVar8[5];
    lVar5 = puVar8[6] + 1;
    plVar6 = plVar7;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      if (*plVar6 != 0) {
        _free(plVar6[1]);
      }
      FUN_100de6690(plVar6 + 3);
      plVar6 = plVar6 + 0xd;
    }
    if (puVar8[4] == 0) {
      return;
    }
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar7);
  return;
}

