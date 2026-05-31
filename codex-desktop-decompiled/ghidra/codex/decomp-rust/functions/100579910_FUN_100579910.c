
bool FUN_100579910(void)

{
  bool bVar1;
  ulong uVar2;
  undefined1 uVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 unaff_x23;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000038,s_Model_metadata_for______not_foun_108ac1539,unaff_x29 + -0x40);
  uStack0000000000000010 = (undefined4)in_stack_00000040;
  uStack0000000000000014 = (undefined4)((ulong)in_stack_00000040 >> 0x20);
  uStack0000000000000008 = (undefined4)in_stack_00000038;
  uStack000000000000000c = (undefined4)((ulong)in_stack_00000038 >> 0x20);
  *(undefined4 *)(unaff_x19 + 0x10) = 1;
  *(ulong *)(unaff_x19 + 0x1c) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
  *(ulong *)(unaff_x19 + 0x14) = CONCAT44(uStack0000000000000008,in_stack_00000000._4_4_);
  *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000048;
  *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000040;
  *(undefined8 *)(unaff_x19 + 0x1e8) = unaff_x23;
  *(undefined8 *)(unaff_x19 + 0x1f0) = unaff_x20;
  *(undefined1 *)(unaff_x19 + 0x5b8) = 0;
  uVar2 = FUN_10059e898(unaff_x19 + 0x10);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    FUN_100d1ddbc(unaff_x19 + 0x10);
    uVar3 = 1;
  }
  else {
    uVar3 = 3;
  }
  *(undefined1 *)(unaff_x19 + unaff_x21) = uVar3;
  return !bVar1;
}

