
void FUN_100f78400(void)

{
  undefined8 *puVar1;
  long *unaff_x19;
  long lVar2;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000018,s___108ac1f1a,&stack0x00000068);
  lVar2 = unaff_x19[2];
  if (lVar2 == *unaff_x19) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE();
  }
  puVar1 = (undefined8 *)(unaff_x19[1] + lVar2 * 0x18);
  puVar1[1] = in_stack_00000020;
  *puVar1 = in_stack_00000018;
  puVar1[2] = in_stack_00000028;
  unaff_x19[2] = lVar2 + 1;
  if (in_stack_00000030 != 0) {
    _free(in_stack_00000038);
  }
  return;
}

