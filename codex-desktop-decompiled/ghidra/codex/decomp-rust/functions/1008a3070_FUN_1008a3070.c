
void FUN_1008a3070(void)

{
  long lVar1;
  undefined1 uVar2;
  long unaff_x19;
  undefined4 *unaff_x23;
  undefined8 in_stack_000000f0;
  long *in_stack_000000f8;
  long in_stack_00000380;
  long in_stack_00000388;
  long in_stack_00000390;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000380,s___requires_experimentalApi_capab_108ae577c,&stack0x000112d0);
  func_0x000100e2ce28();
  *(undefined1 *)(unaff_x19 + 0xaf1) = 0;
  lVar1 = **(long **)(unaff_x19 + 0x930);
  **(long **)(unaff_x19 + 0x930) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd521f1a6e8e18d1fE();
  }
  FUN_100e44f40(unaff_x19 + 0x770);
  *(undefined1 *)(unaff_x19 + 0xaf2) = 0;
  if ((*(ulong *)(unaff_x19 + 0x750) & 0x7fffffffffffffff) == 0) {
    *(undefined1 *)(unaff_x19 + 0xaf3) = 0;
    *(undefined1 *)(unaff_x19 + 0xae8) = 1;
  }
  else {
    _free(*(undefined8 *)(unaff_x19 + 0x758));
    *(undefined1 *)(unaff_x19 + 0xaf3) = 0;
    *(undefined1 *)(unaff_x19 + 0xae8) = 1;
  }
  if (in_stack_00000380 == -0x7fffffffffffffff) {
    *in_stack_000000f8 = -0x7fffffffffffffff;
    uVar2 = 5;
  }
  else {
    FUN_100d23c3c(in_stack_000000f0);
    *unaff_x23 = 0;
    *in_stack_000000f8 = in_stack_00000380;
    in_stack_000000f8[1] = in_stack_00000388;
    in_stack_000000f8[2] = in_stack_00000390;
    in_stack_000000f8[3] = -0x7ffffffffffffffb;
    uVar2 = 1;
    in_stack_000000f8[0xc] = -0x7f58;
  }
  *(undefined1 *)(unaff_x19 + 0x4e0) = uVar2;
  return;
}

