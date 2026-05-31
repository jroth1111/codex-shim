
void FUN_101635998(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000288;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000278,s_resources_read_failed_for_________108ad9db2,&stack0x00000010);
  uVar2 = *(undefined8 *)(unaff_x26 + 0x70);
  *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(unaff_x26 + 0x78);
  *(undefined8 *)(unaff_x29 + -0xd0) = uVar2;
  *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_00000288;
  *(undefined8 *)(unaff_x29 + -0xb8) = unaff_x24;
  in_stack_00000010 = 3;
  uVar2 = FUN_108857988(unaff_x29 + -0xd0,&stack0x00000010);
  if (*unaff_x20 != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x100));
  }
  lVar1 = **(long **)(unaff_x19 + 0xf0);
  **(long **)(unaff_x19 + 0xf0) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd5db4639570db948E();
  }
  FUN_100e061d8(unaff_x19 + 0x1ce0);
  *(undefined1 *)(unaff_x19 + 0xe9) = 0;
  *unaff_x21 = unaff_x22;
  unaff_x21[1] = uVar2;
  unaff_x21[2] = unaff_x23;
  *(undefined1 *)(unaff_x19 + 0xe8) = 1;
  return;
}

