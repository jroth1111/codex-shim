
/* WARNING: Removing unreachable block (ram,0x000100b082cc) */

undefined1  [16] FUN_100b081ac(void)

{
  undefined1 auVar1 [16];
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x19;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000048,s_bind_SOCKS5_proxy__108ad062f,&stack0x00000080);
  in_stack_00000068 = in_stack_00000050;
  in_stack_00000060 = in_stack_00000048;
  in_stack_00000070 = in_stack_00000058;
  in_stack_00000080 = 3;
  uVar3 = FUN_108857988(&stack0x00000060,&stack0x00000080);
  *(undefined1 *)(unaff_x19 + 0x9d) = 0;
  plVar4 = *(long **)(unaff_x19 + 0xa8);
  if (plVar4 != (long *)0x0) {
    lVar2 = *plVar4;
    *plVar4 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E();
    }
  }
  *(undefined1 *)(unaff_x19 + 0x9b) = 0;
  lVar2 = **(long **)(unaff_x19 + 0xa0);
  **(long **)(unaff_x19 + 0xa0) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE();
  }
  *(undefined1 *)(unaff_x19 + 0x9c) = 0;
  *(undefined1 *)(unaff_x19 + 0x99) = 1;
  func_0x000100e66d90();
  *(undefined1 *)(unaff_x19 + 0x3d) = 1;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  return auVar1 << 0x40;
}

