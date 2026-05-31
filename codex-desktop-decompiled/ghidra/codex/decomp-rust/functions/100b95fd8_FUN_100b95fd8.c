
void FUN_100b95fd8(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x23;
  long unaff_x29;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000000f0,s__timed_out_waiting_for_daemon_op_108ad15ee,&stack0x00000070);
  in_stack_00000088 = in_stack_000000f8;
  in_stack_00000080 = in_stack_000000f0;
  in_stack_00000090 = in_stack_00000100;
  uVar2 = FUN_108856624(&stack0x00000080);
  lVar1 = *(long *)*unaff_x23;
  *(long *)*unaff_x23 = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h46a5c05d4d9b7d4fE();
  }
  lVar1 = *(long *)(unaff_x19 + 0x48);
  if (lVar1 != -0x8000000000000000) {
    plVar3 = *(long **)(unaff_x19 + 0x50);
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
  uVar4 = *(undefined8 *)(unaff_x29 + -0x70);
  uVar6 = *(undefined8 *)(unaff_x29 + -0x58);
  uVar5 = *(undefined8 *)(unaff_x29 + -0x60);
  unaff_x20[8] = *(undefined8 *)(unaff_x29 + -0x68);
  unaff_x20[7] = uVar4;
  unaff_x20[10] = uVar6;
  unaff_x20[9] = uVar5;
  uVar4 = *(undefined8 *)(unaff_x29 + -0x50);
  unaff_x20[0xc] = *(undefined8 *)(unaff_x29 + -0x48);
  unaff_x20[0xb] = uVar4;
  uVar4 = *(undefined8 *)(unaff_x29 + -0x90);
  uVar6 = *(undefined8 *)(unaff_x29 + -0x78);
  uVar5 = *(undefined8 *)(unaff_x29 + -0x80);
  unaff_x20[4] = *(undefined8 *)(unaff_x29 + -0x88);
  unaff_x20[3] = uVar4;
  unaff_x20[1] = 0;
  unaff_x20[2] = uVar2;
  unaff_x20[0xd] = *(undefined8 *)(unaff_x29 + -0x40);
  unaff_x20[6] = uVar6;
  unaff_x20[5] = uVar5;
  *unaff_x20 = 0;
  *(undefined1 *)(unaff_x19 + 0x10) = 1;
  return;
}

