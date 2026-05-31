
void FUN_100f5b624(void)

{
  undefined8 *puVar1;
  long *unaff_x19;
  long lVar2;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000010,s____file__108ad4ad1,&stack0x00000108);
  lVar2 = unaff_x19[2];
  if (lVar2 == *unaff_x19) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE();
  }
  puVar1 = (undefined8 *)(unaff_x19[1] + lVar2 * 0x18);
  puVar1[1] = in_stack_00000018;
  *puVar1 = in_stack_00000010;
  puVar1[2] = in_stack_00000020;
  unaff_x19[2] = lVar2 + 1;
  return;
}

