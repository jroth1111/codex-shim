
/* WARNING: Possible PIC construction at 0x000103da56f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103da56fc) */

void FUN_103da56c8(long param_1)

{
  undefined1 *puVar1;
  ulong *puVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long *plVar7;
  undefined8 unaff_x20;
  long *plVar8;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong in_xzr;
  long lVar9;
  
  puVar1 = &stack0xfffffffffffffff0;
  cVar3 = *(char *)(param_1 + 0x360);
  if (cVar3 == '\0') {
    plVar8 = *(long **)(param_1 + 0x350);
    LOAcquire();
    lVar4 = plVar8[0x3e];
    plVar8[0x3e] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      LOAcquire();
      lVar4 = plVar8[0x11];
      plVar8[0x11] = lVar4 + 1;
      lVar4 = func_0x000103e334e8(plVar8 + 0x10,lVar4);
      *(ulong *)(lVar4 + 0x6a10) = *(ulong *)(lVar4 + 0x6a10) | 0x200000000;
      LORelease();
      puVar2 = (ulong *)(plVar8 + 0x22);
      LOAcquire();
      uVar5 = *puVar2;
      *puVar2 = uVar5 | 2;
      LORelease();
      if (uVar5 == 0) {
        lVar4 = plVar8[0x20];
        plVar8[0x20] = 0;
        *puVar2 = in_xzr;
        LORelease();
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 8))(plVar8[0x21]);
        }
      }
    }
    lVar4 = *plVar8;
    *plVar8 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf2891ba2e980c99bE(param_1 + 0x350);
    }
    FUN_103d9ceb4(param_1);
  }
  else {
    if (cVar3 != '\x03') {
      if (cVar3 != '\x04') {
        return;
      }
      plVar8 = (long *)(param_1 + 0x368);
      unaff_x30 = 0x103da56fc;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x19 = param_1;
      unaff_x29 = puVar1;
      goto SUB_103d9df1c;
    }
    func_0x000103da1c94(param_1 + 0x368);
    plVar8 = *(long **)(param_1 + 0x350);
    LOAcquire();
    lVar4 = plVar8[0x3e];
    plVar8[0x3e] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      LOAcquire();
      lVar4 = plVar8[0x11];
      plVar8[0x11] = lVar4 + 1;
      lVar4 = func_0x000103e334e8(plVar8 + 0x10,lVar4);
      *(ulong *)(lVar4 + 0x6a10) = *(ulong *)(lVar4 + 0x6a10) | 0x200000000;
      LORelease();
      puVar2 = (ulong *)(plVar8 + 0x22);
      LOAcquire();
      uVar5 = *puVar2;
      *puVar2 = uVar5 | 2;
      LORelease();
      if (uVar5 == 0) {
        lVar4 = plVar8[0x20];
        plVar8[0x20] = 0;
        *puVar2 = in_xzr;
        LORelease();
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 8))(plVar8[0x21]);
        }
      }
    }
    lVar4 = *plVar8;
    *plVar8 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf2891ba2e980c99bE(param_1 + 0x350);
    }
    if ((*(byte *)(param_1 + 0x361) & 1) == 0) {
      return;
    }
  }
  plVar8 = (long *)(param_1 + 0x358);
SUB_103d9df1c:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  plVar7 = (long *)*plVar8;
  if (plVar7 != (long *)0x0) {
    LOAcquire();
    uVar5 = plVar7[0xe];
    plVar7[0xe] = uVar5 | 4;
    if ((uVar5 & 10) == 8) {
      (**(code **)(plVar7[10] + 0x10))(plVar7[0xb]);
    }
    if (((uint)uVar5 >> 1 & 1) != 0) {
      lVar4 = plVar7[2];
      lVar9 = plVar7[5];
      lVar6 = plVar7[4];
      *(long *)((long)register0x00000008 + -0x68) = plVar7[3];
      *(long *)((long)register0x00000008 + -0x70) = lVar4;
      *(long *)((long)register0x00000008 + -0x58) = lVar9;
      *(long *)((long)register0x00000008 + -0x60) = lVar6;
      lVar4 = plVar7[6];
      lVar9 = plVar7[9];
      lVar6 = plVar7[8];
      *(long *)((long)register0x00000008 + -0x48) = plVar7[7];
      *(long *)((long)register0x00000008 + -0x50) = lVar4;
      *(long *)((long)register0x00000008 + -0x38) = lVar9;
      *(long *)((long)register0x00000008 + -0x40) = lVar6;
      *(undefined2 *)(plVar7 + 2) = 0x20;
      if (1 < *(ushort *)((long)register0x00000008 + -0x70) - 0x1f) {
        FUN_103d996fc((undefined1 *)((long)register0x00000008 + -0x70));
      }
    }
    lVar4 = *plVar7;
    *plVar7 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      lVar4 = *plVar8;
      uVar5 = *(ulong *)(lVar4 + 0x70);
      if ((uVar5 & 1) != 0) {
        (**(code **)(*(long *)(lVar4 + 0x60) + 0x18))(*(undefined8 *)(lVar4 + 0x68));
      }
      if (((uint)uVar5 >> 3 & 1) != 0) {
        (**(code **)(*(long *)(lVar4 + 0x50) + 0x18))(*(undefined8 *)(lVar4 + 0x58));
      }
      if (1 < *(ushort *)(lVar4 + 0x10) - 0x1f) {
        FUN_103d996fc(lVar4 + 0x10);
      }
      if (lVar4 != -1) {
        lVar6 = *(long *)(lVar4 + 8);
        *(long *)(lVar4 + 8) = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(lVar4);
          return;
        }
      }
      return;
    }
  }
  return;
}

