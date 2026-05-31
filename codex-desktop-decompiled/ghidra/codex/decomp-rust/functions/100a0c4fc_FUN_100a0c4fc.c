
bool FUN_100a0c4fc(void)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long *unaff_x19;
  long unaff_x20;
  long *plVar4;
  long unaff_x22;
  long lVar5;
  long unaff_x29;
  ulong in_xzr;
  undefined8 uVar6;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x58,s_attempts_load_failed_for___108acdcdf,&stack0x000000c0);
  uVar6 = *(undefined8 *)(unaff_x20 + 200);
  *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x20 + 0xd0);
  *(undefined8 *)(unaff_x29 + -0x70) = uVar6;
  *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x48);
  FUN_1009f8e14(unaff_x29 + -0x70);
  if (((1 < in_stack_00000018) || (in_stack_00000018 != 0)) && (in_stack_00000020 != 0)) {
    _free(in_stack_00000028);
  }
  lVar2 = *(long *)unaff_x19[6];
  *(long *)unaff_x19[6] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2ae7ad734e65bdd0E();
  }
  if (((*(byte *)((long)unaff_x19 + 0x59) & 1) != 0) && (*unaff_x19 != 0)) {
    _free(unaff_x19[1]);
  }
  plVar4 = unaff_x19 + 8;
  lVar5 = *plVar4;
  LOAcquire();
  lVar2 = *(long *)(lVar5 + 0x1c8);
  *(long *)(lVar5 + 0x1c8) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    LOAcquire();
    lVar2 = *(long *)(lVar5 + 0x88);
    *(long *)(lVar5 + 0x88) = lVar2 + 1;
    lVar2 = func_0x000100fcb63c(lVar5 + 0x80,lVar2);
    *(ulong *)(lVar2 + 0x1510) = *(ulong *)(lVar2 + 0x1510) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar5 + 0x110);
    LOAcquire();
    uVar3 = *puVar1;
    *puVar1 = uVar3 | 2;
    LORelease();
    if (uVar3 == 0) {
      lVar2 = *(long *)(lVar5 + 0x100);
      *(undefined8 *)(lVar5 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar5 + 0x108));
      }
    }
  }
  lVar2 = *(long *)*plVar4;
  *(long *)*plVar4 = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000102872bc8(plVar4);
  }
  *(undefined1 *)(unaff_x19 + 0xb) = 1;
  return unaff_x22 == 5;
}

