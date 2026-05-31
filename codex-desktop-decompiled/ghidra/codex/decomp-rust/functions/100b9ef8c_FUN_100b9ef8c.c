
void FUN_100b9ef8c(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x22;
  long unaff_x29;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000000e0,s_timed_out_waiting_for_pid_lock_108ad1898,unaff_x29 + -0x58);
  in_stack_00000078 = in_stack_000000e8;
  in_stack_00000070 = in_stack_000000e0;
  in_stack_00000080 = in_stack_000000f0;
  uVar2 = FUN_108856624(&stack0x00000070);
  lVar1 = *(long *)*unaff_x22;
  *(long *)*unaff_x22 = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h46a5c05d4d9b7d4fE();
  }
  lVar1 = *(long *)(unaff_x19 + 0x40);
  if (lVar1 != -0x8000000000000000) {
    plVar3 = *(long **)(unaff_x19 + 0x48);
    if (lVar1 == -0x7fffffffffffffff) {
      if (*plVar3 == 0xcc) {
        *plVar3 = 0x84;
      }
      else {
        (**(code **)(plVar3[2] + 0x20))();
      }
    }
    else if (lVar1 != 0) {
      _free();
    }
  }
  uVar4 = *(undefined8 *)(unaff_x29 + -0xa0);
  uVar6 = *(undefined8 *)(unaff_x29 + -0x88);
  uVar5 = *(undefined8 *)(unaff_x29 + -0x90);
  unaff_x20[8] = *(undefined8 *)(unaff_x29 + -0x98);
  unaff_x20[7] = uVar4;
  unaff_x20[10] = uVar6;
  unaff_x20[9] = uVar5;
  uVar4 = *(undefined8 *)(unaff_x29 + -0x80);
  unaff_x20[0xc] = *(undefined8 *)(unaff_x29 + -0x78);
  unaff_x20[0xb] = uVar4;
  uVar4 = *(undefined8 *)(unaff_x29 + -0xc0);
  uVar6 = *(undefined8 *)(unaff_x29 + -0xa8);
  uVar5 = *(undefined8 *)(unaff_x29 + -0xb0);
  unaff_x20[4] = *(undefined8 *)(unaff_x29 + -0xb8);
  unaff_x20[3] = uVar4;
  unaff_x20[1] = 0;
  unaff_x20[2] = uVar2;
  unaff_x20[0xd] = *(undefined8 *)(unaff_x29 + -0x70);
  unaff_x20[6] = uVar6;
  unaff_x20[5] = uVar5;
  *unaff_x20 = 0;
  *(undefined1 *)(unaff_x19 + 0x78) = 1;
  return;
}

