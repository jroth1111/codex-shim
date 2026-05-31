
/* WARNING: Possible PIC construction at 0x000100c9e018: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c9e01c) */
/* WARNING: Removing unreachable block (ram,0x000100c9e028) */
/* WARNING: Removing unreachable block (ram,0x000100c9e02c) */
/* WARNING: Removing unreachable block (ram,0x000100c9e03c) */

void FUN_100c9dfd8(long param_1)

{
  ulong *puVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar6;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar7;
  undefined8 unaff_x30;
  ulong in_xzr;
  
  puVar2 = &stack0xffffffffffffffe0;
  puVar7 = &stack0xfffffffffffffff0;
  if (*(char *)(param_1 + 0x218) == '\0') {
    plVar5 = (long *)(param_1 + 0x18);
    unaff_x30 = 0x100c9e01c;
  }
  else {
    if (*(char *)(param_1 + 0x218) != '\x03') {
      return;
    }
    FUN_100d4fc80(param_1 + 0x38);
    *(undefined1 *)(param_1 + 0x219) = 0;
    plVar5 = (long *)(param_1 + 0x28);
    puVar2 = (undefined1 *)register0x00000008;
    param_1 = unaff_x19;
    puVar7 = unaff_x29;
  }
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(long *)(puVar2 + -0x18) = param_1;
  *(undefined1 **)(puVar2 + -0x10) = puVar7;
  *(undefined8 *)(puVar2 + -8) = unaff_x30;
  lVar6 = *plVar5;
  LOAcquire();
  lVar3 = *(long *)(lVar6 + 0x1f0);
  *(long *)(lVar6 + 0x1f0) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    LOAcquire();
    lVar3 = *(long *)(lVar6 + 0x88);
    *(long *)(lVar6 + 0x88) = lVar3 + 1;
    lVar3 = func_0x000100fcb63c(lVar6 + 0x80,lVar3);
    *(ulong *)(lVar3 + 0x1510) = *(ulong *)(lVar3 + 0x1510) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar6 + 0x110);
    LOAcquire();
    uVar4 = *puVar1;
    *puVar1 = uVar4 | 2;
    LORelease();
    if (uVar4 == 0) {
      lVar3 = *(long *)(lVar6 + 0x100);
      *(undefined8 *)(lVar6 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar6 + 0x108));
      }
    }
  }
  lVar3 = *(long *)*plVar5;
  *(long *)*plVar5 = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd3ccbc0bef7a5ed1E(plVar5);
  }
  plVar5 = plVar5 + 1;
  lVar6 = *plVar5;
  LOAcquire();
  lVar3 = *(long *)(lVar6 + 0x150);
  *(long *)(lVar6 + 0x150) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    *(ulong *)(lVar6 + 0x140) = *(ulong *)(lVar6 + 0x140) | 1;
    LORelease();
    __ZN5tokio4sync5watch10big_notify9BigNotify14notify_waiters17h54480fa2f78f23cdE(lVar6 + 0x10);
  }
  lVar3 = *(long *)*plVar5;
  *(long *)*plVar5 = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    if (*plVar5 != -1) {
      plVar5 = (long *)(*plVar5 + 8);
      lVar3 = *plVar5;
      *plVar5 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)();
        return;
      }
    }
    return;
  }
  return;
}

